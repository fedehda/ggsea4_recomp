// DolRecomp output
#include "../generated.h"

static void loop_7F3A699C(CPUState* ctx) {
label_7F3A699C:
    ctx->downcount -= 7;
    ctx->pc = 0x7F3A699Cu;
    // 7F3A699C: lha     r0, 3954(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3954);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F3A69A0: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F3A69A4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F3A69A8u;
    // 7F3A69A8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F3A69ACu;
    // 7F3A69AC: lha     r0, 3954(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3954);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    ctx->pc = 0x7F3A69B0u;
    // 7F3A69B0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F3A69B4: bc    16, 0, 0x7F3A699C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A699Cu;
                return;
            }
            goto label_7F3A699C;
        }
    }

    ctx->pc = 0x7F3A69B8u;
}

static void loop_7F3A6CA0(CPUState* ctx) {
label_7F3A6CA0:
    ctx->downcount -= 4;
    // 7F3A6CA0: addi    r0, r3, 4820
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4820);

    // 7F3A6CA4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F3A6CA8u;
    // 7F3A6CA8: stwx    r4, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F3A6CAC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F3A6CB0: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F3A6CB4: bc    12, 1, 0x7F3A6CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6CA0u;
                return;
            }
            goto label_7F3A6CA0;
        }
    }

    ctx->pc = 0x7F3A6CB8u;
}

static void loop_7F3A722C(CPUState* ctx) {
label_7F3A722C:
    ctx->downcount -= 4;
    // 7F3A722C: addi    r0, r3, 5312
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5312);

    // 7F3A7230: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F3A7234u;
    // 7F3A7234: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F3A7238: bc    16, 0, 0x7F3A722C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A722Cu;
                return;
            }
            goto label_7F3A722C;
        }
    }

    ctx->pc = 0x7F3A723Cu;
}

static void loop_7F3A78B0(CPUState* ctx) {
label_7F3A78B0:
    ctx->downcount -= 4;
    // 7F3A78B0: addi    r0, r4, 4920
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4920);

    // 7F3A78B4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    ctx->pc = 0x7F3A78B8u;
    // 7F3A78B8: stbx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F3A78BC: bc    16, 0, 0x7F3A78B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A78B0u;
                return;
            }
            goto label_7F3A78B0;
        }
    }

    ctx->pc = 0x7F3A78C0u;
}

static void loop_7F3A7E94(CPUState* ctx) {
label_7F3A7E94:
    ctx->downcount -= 8;
    // 7F3A7E94: or   r6, r7, r7
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[7];
    }

    ctx->pc = 0x7F3A7E98u;
    // 7F3A7E98: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A7E9Cu;
    // 7F3A7E9C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F3A7EA0: rlwinm r4, r0, 28, 24, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x000000FCu;
    }

    // 7F3A7EA4: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

    ctx->pc = 0x7F3A7EA8u;
    // 7F3A7EA8: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A7EACu;
    // 7F3A7EAC: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F3A7EB0u;
    // 7F3A7EB0: stwx    r6, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F3A7EB4: cmplwi  r7, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F3A7EB8: bc    4, 2, 0x7F3A7E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7E94u;
                return;
            }
            goto label_7F3A7E94;
        }
    }

    ctx->pc = 0x7F3A7EBCu;
}

static void loop_7F3A7EDC(CPUState* ctx) {
label_7F3A7EDC:
    ctx->downcount -= 8;
    // 7F3A7EDC: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

    ctx->pc = 0x7F3A7EE0u;
    // 7F3A7EE0: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A7EE4u;
    // 7F3A7EE4: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F3A7EE8: rlwinm r4, r0, 22, 24, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 22u) & 0x000000FCu;
    }

    // 7F3A7EEC: addi    r4, r4, 15360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15360);

    ctx->pc = 0x7F3A7EF0u;
    // 7F3A7EF0: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3A7EF4u;
    // 7F3A7EF4: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F3A7EF8u;
    // 7F3A7EF8: stwx    r7, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 7F3A7EFC: cmplwi  r6, 0x0000
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

    // 7F3A7F00: bc    4, 2, 0x7F3A7EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7EDCu;
                return;
            }
            goto label_7F3A7EDC;
        }
    }

    ctx->pc = 0x7F3A7F04u;
}

void func_7F3A40EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3A40ECu: goto label_7F3A40EC;
    case 0x7F3A40F0u: goto label_7F3A40F0;
    case 0x7F3A40F4u: goto label_7F3A40F4;
    case 0x7F3A40F8u: goto label_7F3A40F8;
    case 0x7F3A40FCu: goto label_7F3A40FC;
    case 0x7F3A4100u: goto label_7F3A4100;
    case 0x7F3A4104u: goto label_7F3A4104;
    case 0x7F3A4108u: goto label_7F3A4108;
    case 0x7F3A410Cu: goto label_7F3A410C;
    case 0x7F3A4110u: goto label_7F3A4110;
    case 0x7F3A4114u: goto label_7F3A4114;
    case 0x7F3A4118u: goto label_7F3A4118;
    case 0x7F3A411Cu: goto label_7F3A411C;
    case 0x7F3A4120u: goto label_7F3A4120;
    case 0x7F3A4124u: goto label_7F3A4124;
    case 0x7F3A4128u: goto label_7F3A4128;
    case 0x7F3A412Cu: goto label_7F3A412C;
    case 0x7F3A4130u: goto label_7F3A4130;
    case 0x7F3A4134u: goto label_7F3A4134;
    case 0x7F3A4138u: goto label_7F3A4138;
    case 0x7F3A413Cu: goto label_7F3A413C;
    case 0x7F3A4140u: goto label_7F3A4140;
    case 0x7F3A4144u: goto label_7F3A4144;
    case 0x7F3A4148u: goto label_7F3A4148;
    case 0x7F3A414Cu: goto label_7F3A414C;
    case 0x7F3A4150u: goto label_7F3A4150;
    case 0x7F3A4154u: goto label_7F3A4154;
    case 0x7F3A4158u: goto label_7F3A4158;
    case 0x7F3A415Cu: goto label_7F3A415C;
    case 0x7F3A4160u: goto label_7F3A4160;
    case 0x7F3A4164u: goto label_7F3A4164;
    case 0x7F3A4168u: goto label_7F3A4168;
    case 0x7F3A416Cu: goto label_7F3A416C;
    case 0x7F3A4170u: goto label_7F3A4170;
    case 0x7F3A4174u: goto label_7F3A4174;
    case 0x7F3A4178u: goto label_7F3A4178;
    case 0x7F3A417Cu: goto label_7F3A417C;
    case 0x7F3A4180u: goto label_7F3A4180;
    case 0x7F3A4184u: goto label_7F3A4184;
    case 0x7F3A4188u: goto label_7F3A4188;
    case 0x7F3A418Cu: goto label_7F3A418C;
    case 0x7F3A4190u: goto label_7F3A4190;
    case 0x7F3A4194u: goto label_7F3A4194;
    case 0x7F3A4198u: goto label_7F3A4198;
    case 0x7F3A419Cu: goto label_7F3A419C;
    case 0x7F3A41A0u: goto label_7F3A41A0;
    case 0x7F3A41A4u: goto label_7F3A41A4;
    case 0x7F3A41A8u: goto label_7F3A41A8;
    case 0x7F3A41ACu: goto label_7F3A41AC;
    case 0x7F3A41B0u: goto label_7F3A41B0;
    case 0x7F3A41B4u: goto label_7F3A41B4;
    case 0x7F3A41B8u: goto label_7F3A41B8;
    case 0x7F3A41BCu: goto label_7F3A41BC;
    case 0x7F3A41C0u: goto label_7F3A41C0;
    case 0x7F3A41C4u: goto label_7F3A41C4;
    case 0x7F3A41C8u: goto label_7F3A41C8;
    case 0x7F3A41CCu: goto label_7F3A41CC;
    case 0x7F3A41D0u: goto label_7F3A41D0;
    case 0x7F3A41D4u: goto label_7F3A41D4;
    case 0x7F3A41D8u: goto label_7F3A41D8;
    case 0x7F3A41DCu: goto label_7F3A41DC;
    case 0x7F3A41E0u: goto label_7F3A41E0;
    case 0x7F3A41E4u: goto label_7F3A41E4;
    case 0x7F3A41E8u: goto label_7F3A41E8;
    case 0x7F3A41ECu: goto label_7F3A41EC;
    case 0x7F3A41F0u: goto label_7F3A41F0;
    case 0x7F3A41F4u: goto label_7F3A41F4;
    case 0x7F3A41F8u: goto label_7F3A41F8;
    case 0x7F3A41FCu: goto label_7F3A41FC;
    case 0x7F3A4200u: goto label_7F3A4200;
    case 0x7F3A4204u: goto label_7F3A4204;
    case 0x7F3A4208u: goto label_7F3A4208;
    case 0x7F3A420Cu: goto label_7F3A420C;
    case 0x7F3A4210u: goto label_7F3A4210;
    case 0x7F3A4214u: goto label_7F3A4214;
    case 0x7F3A4218u: goto label_7F3A4218;
    case 0x7F3A421Cu: goto label_7F3A421C;
    case 0x7F3A4220u: goto label_7F3A4220;
    case 0x7F3A4224u: goto label_7F3A4224;
    case 0x7F3A4228u: goto label_7F3A4228;
    case 0x7F3A422Cu: goto label_7F3A422C;
    case 0x7F3A4230u: goto label_7F3A4230;
    case 0x7F3A4234u: goto label_7F3A4234;
    case 0x7F3A4238u: goto label_7F3A4238;
    case 0x7F3A423Cu: goto label_7F3A423C;
    case 0x7F3A4240u: goto label_7F3A4240;
    case 0x7F3A4244u: goto label_7F3A4244;
    case 0x7F3A4248u: goto label_7F3A4248;
    case 0x7F3A424Cu: goto label_7F3A424C;
    case 0x7F3A4250u: goto label_7F3A4250;
    case 0x7F3A4254u: goto label_7F3A4254;
    case 0x7F3A4258u: goto label_7F3A4258;
    case 0x7F3A425Cu: goto label_7F3A425C;
    case 0x7F3A4260u: goto label_7F3A4260;
    case 0x7F3A4264u: goto label_7F3A4264;
    case 0x7F3A4268u: goto label_7F3A4268;
    case 0x7F3A426Cu: goto label_7F3A426C;
    case 0x7F3A4270u: goto label_7F3A4270;
    case 0x7F3A4274u: goto label_7F3A4274;
    case 0x7F3A4278u: goto label_7F3A4278;
    case 0x7F3A427Cu: goto label_7F3A427C;
    case 0x7F3A4280u: goto label_7F3A4280;
    case 0x7F3A4284u: goto label_7F3A4284;
    case 0x7F3A4288u: goto label_7F3A4288;
    case 0x7F3A428Cu: goto label_7F3A428C;
    case 0x7F3A4290u: goto label_7F3A4290;
    case 0x7F3A4294u: goto label_7F3A4294;
    case 0x7F3A4298u: goto label_7F3A4298;
    case 0x7F3A429Cu: goto label_7F3A429C;
    case 0x7F3A42A0u: goto label_7F3A42A0;
    case 0x7F3A42A4u: goto label_7F3A42A4;
    case 0x7F3A42A8u: goto label_7F3A42A8;
    case 0x7F3A42ACu: goto label_7F3A42AC;
    case 0x7F3A42B0u: goto label_7F3A42B0;
    case 0x7F3A42B4u: goto label_7F3A42B4;
    case 0x7F3A42B8u: goto label_7F3A42B8;
    case 0x7F3A42BCu: goto label_7F3A42BC;
    case 0x7F3A42C0u: goto label_7F3A42C0;
    case 0x7F3A42C4u: goto label_7F3A42C4;
    case 0x7F3A42C8u: goto label_7F3A42C8;
    case 0x7F3A42CCu: goto label_7F3A42CC;
    case 0x7F3A42D0u: goto label_7F3A42D0;
    case 0x7F3A42D4u: goto label_7F3A42D4;
    case 0x7F3A42D8u: goto label_7F3A42D8;
    case 0x7F3A42DCu: goto label_7F3A42DC;
    case 0x7F3A42E0u: goto label_7F3A42E0;
    case 0x7F3A42E4u: goto label_7F3A42E4;
    case 0x7F3A42E8u: goto label_7F3A42E8;
    case 0x7F3A42ECu: goto label_7F3A42EC;
    case 0x7F3A42F0u: goto label_7F3A42F0;
    case 0x7F3A42F4u: goto label_7F3A42F4;
    case 0x7F3A42F8u: goto label_7F3A42F8;
    case 0x7F3A42FCu: goto label_7F3A42FC;
    case 0x7F3A4300u: goto label_7F3A4300;
    case 0x7F3A4304u: goto label_7F3A4304;
    case 0x7F3A4308u: goto label_7F3A4308;
    case 0x7F3A430Cu: goto label_7F3A430C;
    case 0x7F3A4310u: goto label_7F3A4310;
    case 0x7F3A4314u: goto label_7F3A4314;
    case 0x7F3A4318u: goto label_7F3A4318;
    case 0x7F3A431Cu: goto label_7F3A431C;
    case 0x7F3A4320u: goto label_7F3A4320;
    case 0x7F3A4324u: goto label_7F3A4324;
    case 0x7F3A4328u: goto label_7F3A4328;
    case 0x7F3A432Cu: goto label_7F3A432C;
    case 0x7F3A4330u: goto label_7F3A4330;
    case 0x7F3A4334u: goto label_7F3A4334;
    case 0x7F3A4338u: goto label_7F3A4338;
    case 0x7F3A433Cu: goto label_7F3A433C;
    case 0x7F3A4340u: goto label_7F3A4340;
    case 0x7F3A4344u: goto label_7F3A4344;
    case 0x7F3A4348u: goto label_7F3A4348;
    case 0x7F3A434Cu: goto label_7F3A434C;
    case 0x7F3A4350u: goto label_7F3A4350;
    case 0x7F3A4354u: goto label_7F3A4354;
    case 0x7F3A4358u: goto label_7F3A4358;
    case 0x7F3A435Cu: goto label_7F3A435C;
    case 0x7F3A4360u: goto label_7F3A4360;
    case 0x7F3A4364u: goto label_7F3A4364;
    case 0x7F3A4368u: goto label_7F3A4368;
    case 0x7F3A436Cu: goto label_7F3A436C;
    case 0x7F3A4370u: goto label_7F3A4370;
    case 0x7F3A4374u: goto label_7F3A4374;
    case 0x7F3A4378u: goto label_7F3A4378;
    case 0x7F3A437Cu: goto label_7F3A437C;
    case 0x7F3A4380u: goto label_7F3A4380;
    case 0x7F3A4384u: goto label_7F3A4384;
    case 0x7F3A4388u: goto label_7F3A4388;
    case 0x7F3A438Cu: goto label_7F3A438C;
    case 0x7F3A4390u: goto label_7F3A4390;
    case 0x7F3A4394u: goto label_7F3A4394;
    case 0x7F3A4398u: goto label_7F3A4398;
    case 0x7F3A439Cu: goto label_7F3A439C;
    case 0x7F3A43A0u: goto label_7F3A43A0;
    case 0x7F3A43A4u: goto label_7F3A43A4;
    case 0x7F3A43A8u: goto label_7F3A43A8;
    case 0x7F3A43ACu: goto label_7F3A43AC;
    case 0x7F3A43B0u: goto label_7F3A43B0;
    case 0x7F3A43B4u: goto label_7F3A43B4;
    case 0x7F3A43B8u: goto label_7F3A43B8;
    case 0x7F3A43BCu: goto label_7F3A43BC;
    case 0x7F3A43C0u: goto label_7F3A43C0;
    case 0x7F3A43C4u: goto label_7F3A43C4;
    case 0x7F3A43C8u: goto label_7F3A43C8;
    case 0x7F3A43CCu: goto label_7F3A43CC;
    case 0x7F3A43D0u: goto label_7F3A43D0;
    case 0x7F3A43D4u: goto label_7F3A43D4;
    case 0x7F3A43D8u: goto label_7F3A43D8;
    case 0x7F3A43DCu: goto label_7F3A43DC;
    case 0x7F3A43E0u: goto label_7F3A43E0;
    case 0x7F3A43E4u: goto label_7F3A43E4;
    case 0x7F3A43E8u: goto label_7F3A43E8;
    case 0x7F3A43ECu: goto label_7F3A43EC;
    case 0x7F3A43F0u: goto label_7F3A43F0;
    case 0x7F3A43F4u: goto label_7F3A43F4;
    case 0x7F3A43F8u: goto label_7F3A43F8;
    case 0x7F3A43FCu: goto label_7F3A43FC;
    case 0x7F3A4400u: goto label_7F3A4400;
    case 0x7F3A4404u: goto label_7F3A4404;
    case 0x7F3A4408u: goto label_7F3A4408;
    case 0x7F3A440Cu: goto label_7F3A440C;
    case 0x7F3A4410u: goto label_7F3A4410;
    case 0x7F3A4414u: goto label_7F3A4414;
    case 0x7F3A4418u: goto label_7F3A4418;
    case 0x7F3A441Cu: goto label_7F3A441C;
    case 0x7F3A4420u: goto label_7F3A4420;
    case 0x7F3A4424u: goto label_7F3A4424;
    case 0x7F3A4428u: goto label_7F3A4428;
    case 0x7F3A442Cu: goto label_7F3A442C;
    case 0x7F3A4430u: goto label_7F3A4430;
    case 0x7F3A4434u: goto label_7F3A4434;
    case 0x7F3A4438u: goto label_7F3A4438;
    case 0x7F3A443Cu: goto label_7F3A443C;
    case 0x7F3A4440u: goto label_7F3A4440;
    case 0x7F3A4444u: goto label_7F3A4444;
    case 0x7F3A4448u: goto label_7F3A4448;
    case 0x7F3A444Cu: goto label_7F3A444C;
    case 0x7F3A4450u: goto label_7F3A4450;
    case 0x7F3A4454u: goto label_7F3A4454;
    case 0x7F3A4458u: goto label_7F3A4458;
    case 0x7F3A445Cu: goto label_7F3A445C;
    case 0x7F3A4460u: goto label_7F3A4460;
    case 0x7F3A4464u: goto label_7F3A4464;
    case 0x7F3A4468u: goto label_7F3A4468;
    case 0x7F3A446Cu: goto label_7F3A446C;
    case 0x7F3A4470u: goto label_7F3A4470;
    case 0x7F3A4474u: goto label_7F3A4474;
    case 0x7F3A4478u: goto label_7F3A4478;
    case 0x7F3A447Cu: goto label_7F3A447C;
    case 0x7F3A4480u: goto label_7F3A4480;
    case 0x7F3A4484u: goto label_7F3A4484;
    case 0x7F3A4488u: goto label_7F3A4488;
    case 0x7F3A448Cu: goto label_7F3A448C;
    case 0x7F3A4490u: goto label_7F3A4490;
    case 0x7F3A4494u: goto label_7F3A4494;
    case 0x7F3A4498u: goto label_7F3A4498;
    case 0x7F3A449Cu: goto label_7F3A449C;
    case 0x7F3A44A0u: goto label_7F3A44A0;
    case 0x7F3A44A4u: goto label_7F3A44A4;
    case 0x7F3A44A8u: goto label_7F3A44A8;
    case 0x7F3A44ACu: goto label_7F3A44AC;
    case 0x7F3A44B0u: goto label_7F3A44B0;
    case 0x7F3A44B4u: goto label_7F3A44B4;
    case 0x7F3A44B8u: goto label_7F3A44B8;
    case 0x7F3A44BCu: goto label_7F3A44BC;
    case 0x7F3A44C0u: goto label_7F3A44C0;
    case 0x7F3A44C4u: goto label_7F3A44C4;
    case 0x7F3A44C8u: goto label_7F3A44C8;
    case 0x7F3A44CCu: goto label_7F3A44CC;
    case 0x7F3A44D0u: goto label_7F3A44D0;
    case 0x7F3A44D4u: goto label_7F3A44D4;
    case 0x7F3A44D8u: goto label_7F3A44D8;
    case 0x7F3A44DCu: goto label_7F3A44DC;
    case 0x7F3A44E0u: goto label_7F3A44E0;
    case 0x7F3A44E4u: goto label_7F3A44E4;
    case 0x7F3A44E8u: goto label_7F3A44E8;
    case 0x7F3A44ECu: goto label_7F3A44EC;
    case 0x7F3A44F0u: goto label_7F3A44F0;
    case 0x7F3A44F4u: goto label_7F3A44F4;
    case 0x7F3A44F8u: goto label_7F3A44F8;
    case 0x7F3A44FCu: goto label_7F3A44FC;
    case 0x7F3A4500u: goto label_7F3A4500;
    case 0x7F3A4504u: goto label_7F3A4504;
    case 0x7F3A4508u: goto label_7F3A4508;
    case 0x7F3A450Cu: goto label_7F3A450C;
    case 0x7F3A4510u: goto label_7F3A4510;
    case 0x7F3A4514u: goto label_7F3A4514;
    case 0x7F3A4518u: goto label_7F3A4518;
    case 0x7F3A451Cu: goto label_7F3A451C;
    case 0x7F3A4520u: goto label_7F3A4520;
    case 0x7F3A4524u: goto label_7F3A4524;
    case 0x7F3A4528u: goto label_7F3A4528;
    case 0x7F3A452Cu: goto label_7F3A452C;
    case 0x7F3A4530u: goto label_7F3A4530;
    case 0x7F3A4534u: goto label_7F3A4534;
    case 0x7F3A4538u: goto label_7F3A4538;
    case 0x7F3A453Cu: goto label_7F3A453C;
    case 0x7F3A4540u: goto label_7F3A4540;
    case 0x7F3A4544u: goto label_7F3A4544;
    case 0x7F3A4548u: goto label_7F3A4548;
    case 0x7F3A454Cu: goto label_7F3A454C;
    case 0x7F3A4550u: goto label_7F3A4550;
    case 0x7F3A4554u: goto label_7F3A4554;
    case 0x7F3A4558u: goto label_7F3A4558;
    case 0x7F3A455Cu: goto label_7F3A455C;
    case 0x7F3A4560u: goto label_7F3A4560;
    case 0x7F3A4564u: goto label_7F3A4564;
    case 0x7F3A4568u: goto label_7F3A4568;
    case 0x7F3A456Cu: goto label_7F3A456C;
    case 0x7F3A4570u: goto label_7F3A4570;
    case 0x7F3A4574u: goto label_7F3A4574;
    case 0x7F3A4578u: goto label_7F3A4578;
    case 0x7F3A457Cu: goto label_7F3A457C;
    case 0x7F3A4580u: goto label_7F3A4580;
    case 0x7F3A4584u: goto label_7F3A4584;
    case 0x7F3A4588u: goto label_7F3A4588;
    case 0x7F3A458Cu: goto label_7F3A458C;
    case 0x7F3A4590u: goto label_7F3A4590;
    case 0x7F3A4594u: goto label_7F3A4594;
    case 0x7F3A4598u: goto label_7F3A4598;
    case 0x7F3A459Cu: goto label_7F3A459C;
    case 0x7F3A45A0u: goto label_7F3A45A0;
    case 0x7F3A45A4u: goto label_7F3A45A4;
    case 0x7F3A45A8u: goto label_7F3A45A8;
    case 0x7F3A45ACu: goto label_7F3A45AC;
    case 0x7F3A45B0u: goto label_7F3A45B0;
    case 0x7F3A45B4u: goto label_7F3A45B4;
    case 0x7F3A45B8u: goto label_7F3A45B8;
    case 0x7F3A45BCu: goto label_7F3A45BC;
    case 0x7F3A45C0u: goto label_7F3A45C0;
    case 0x7F3A45C4u: goto label_7F3A45C4;
    case 0x7F3A45C8u: goto label_7F3A45C8;
    case 0x7F3A45CCu: goto label_7F3A45CC;
    case 0x7F3A45D0u: goto label_7F3A45D0;
    case 0x7F3A45D4u: goto label_7F3A45D4;
    case 0x7F3A45D8u: goto label_7F3A45D8;
    case 0x7F3A45DCu: goto label_7F3A45DC;
    case 0x7F3A45E0u: goto label_7F3A45E0;
    case 0x7F3A45E4u: goto label_7F3A45E4;
    case 0x7F3A45E8u: goto label_7F3A45E8;
    case 0x7F3A45ECu: goto label_7F3A45EC;
    case 0x7F3A45F0u: goto label_7F3A45F0;
    case 0x7F3A45F4u: goto label_7F3A45F4;
    case 0x7F3A45F8u: goto label_7F3A45F8;
    case 0x7F3A45FCu: goto label_7F3A45FC;
    case 0x7F3A4600u: goto label_7F3A4600;
    case 0x7F3A4604u: goto label_7F3A4604;
    case 0x7F3A4608u: goto label_7F3A4608;
    case 0x7F3A460Cu: goto label_7F3A460C;
    case 0x7F3A4610u: goto label_7F3A4610;
    case 0x7F3A4614u: goto label_7F3A4614;
    case 0x7F3A4618u: goto label_7F3A4618;
    case 0x7F3A461Cu: goto label_7F3A461C;
    case 0x7F3A4620u: goto label_7F3A4620;
    case 0x7F3A4624u: goto label_7F3A4624;
    case 0x7F3A4628u: goto label_7F3A4628;
    case 0x7F3A462Cu: goto label_7F3A462C;
    case 0x7F3A4630u: goto label_7F3A4630;
    case 0x7F3A4634u: goto label_7F3A4634;
    case 0x7F3A4638u: goto label_7F3A4638;
    case 0x7F3A463Cu: goto label_7F3A463C;
    case 0x7F3A4640u: goto label_7F3A4640;
    case 0x7F3A4644u: goto label_7F3A4644;
    case 0x7F3A4648u: goto label_7F3A4648;
    case 0x7F3A464Cu: goto label_7F3A464C;
    case 0x7F3A4650u: goto label_7F3A4650;
    case 0x7F3A4654u: goto label_7F3A4654;
    case 0x7F3A4658u: goto label_7F3A4658;
    case 0x7F3A465Cu: goto label_7F3A465C;
    case 0x7F3A4660u: goto label_7F3A4660;
    case 0x7F3A4664u: goto label_7F3A4664;
    case 0x7F3A4668u: goto label_7F3A4668;
    case 0x7F3A466Cu: goto label_7F3A466C;
    case 0x7F3A4670u: goto label_7F3A4670;
    case 0x7F3A4674u: goto label_7F3A4674;
    case 0x7F3A4678u: goto label_7F3A4678;
    case 0x7F3A467Cu: goto label_7F3A467C;
    case 0x7F3A4680u: goto label_7F3A4680;
    case 0x7F3A4684u: goto label_7F3A4684;
    case 0x7F3A4688u: goto label_7F3A4688;
    case 0x7F3A468Cu: goto label_7F3A468C;
    case 0x7F3A4690u: goto label_7F3A4690;
    case 0x7F3A4694u: goto label_7F3A4694;
    case 0x7F3A4698u: goto label_7F3A4698;
    case 0x7F3A469Cu: goto label_7F3A469C;
    case 0x7F3A46A0u: goto label_7F3A46A0;
    case 0x7F3A46A4u: goto label_7F3A46A4;
    case 0x7F3A46A8u: goto label_7F3A46A8;
    case 0x7F3A46ACu: goto label_7F3A46AC;
    case 0x7F3A46B0u: goto label_7F3A46B0;
    case 0x7F3A46B4u: goto label_7F3A46B4;
    case 0x7F3A46B8u: goto label_7F3A46B8;
    case 0x7F3A46BCu: goto label_7F3A46BC;
    case 0x7F3A46C0u: goto label_7F3A46C0;
    case 0x7F3A46C4u: goto label_7F3A46C4;
    case 0x7F3A46C8u: goto label_7F3A46C8;
    case 0x7F3A46CCu: goto label_7F3A46CC;
    case 0x7F3A46D0u: goto label_7F3A46D0;
    case 0x7F3A46D4u: goto label_7F3A46D4;
    case 0x7F3A46D8u: goto label_7F3A46D8;
    case 0x7F3A46DCu: goto label_7F3A46DC;
    case 0x7F3A46E0u: goto label_7F3A46E0;
    case 0x7F3A46E4u: goto label_7F3A46E4;
    case 0x7F3A46E8u: goto label_7F3A46E8;
    case 0x7F3A46ECu: goto label_7F3A46EC;
    case 0x7F3A46F0u: goto label_7F3A46F0;
    case 0x7F3A46F4u: goto label_7F3A46F4;
    case 0x7F3A46F8u: goto label_7F3A46F8;
    case 0x7F3A46FCu: goto label_7F3A46FC;
    case 0x7F3A4700u: goto label_7F3A4700;
    case 0x7F3A4704u: goto label_7F3A4704;
    case 0x7F3A4708u: goto label_7F3A4708;
    case 0x7F3A470Cu: goto label_7F3A470C;
    case 0x7F3A4710u: goto label_7F3A4710;
    case 0x7F3A4714u: goto label_7F3A4714;
    case 0x7F3A4718u: goto label_7F3A4718;
    case 0x7F3A471Cu: goto label_7F3A471C;
    case 0x7F3A4720u: goto label_7F3A4720;
    case 0x7F3A4724u: goto label_7F3A4724;
    case 0x7F3A4728u: goto label_7F3A4728;
    case 0x7F3A472Cu: goto label_7F3A472C;
    case 0x7F3A4730u: goto label_7F3A4730;
    case 0x7F3A4734u: goto label_7F3A4734;
    case 0x7F3A4738u: goto label_7F3A4738;
    case 0x7F3A473Cu: goto label_7F3A473C;
    case 0x7F3A4740u: goto label_7F3A4740;
    case 0x7F3A4744u: goto label_7F3A4744;
    case 0x7F3A4748u: goto label_7F3A4748;
    case 0x7F3A474Cu: goto label_7F3A474C;
    case 0x7F3A4750u: goto label_7F3A4750;
    case 0x7F3A4754u: goto label_7F3A4754;
    case 0x7F3A4758u: goto label_7F3A4758;
    case 0x7F3A475Cu: goto label_7F3A475C;
    case 0x7F3A4760u: goto label_7F3A4760;
    case 0x7F3A4764u: goto label_7F3A4764;
    case 0x7F3A4768u: goto label_7F3A4768;
    case 0x7F3A476Cu: goto label_7F3A476C;
    case 0x7F3A4770u: goto label_7F3A4770;
    case 0x7F3A4774u: goto label_7F3A4774;
    case 0x7F3A4778u: goto label_7F3A4778;
    case 0x7F3A477Cu: goto label_7F3A477C;
    case 0x7F3A4780u: goto label_7F3A4780;
    case 0x7F3A4784u: goto label_7F3A4784;
    case 0x7F3A4788u: goto label_7F3A4788;
    case 0x7F3A478Cu: goto label_7F3A478C;
    case 0x7F3A4790u: goto label_7F3A4790;
    case 0x7F3A4794u: goto label_7F3A4794;
    case 0x7F3A4798u: goto label_7F3A4798;
    case 0x7F3A479Cu: goto label_7F3A479C;
    case 0x7F3A47A0u: goto label_7F3A47A0;
    case 0x7F3A47A4u: goto label_7F3A47A4;
    case 0x7F3A47A8u: goto label_7F3A47A8;
    case 0x7F3A47ACu: goto label_7F3A47AC;
    case 0x7F3A47B0u: goto label_7F3A47B0;
    case 0x7F3A47B4u: goto label_7F3A47B4;
    case 0x7F3A47B8u: goto label_7F3A47B8;
    case 0x7F3A47BCu: goto label_7F3A47BC;
    case 0x7F3A47C0u: goto label_7F3A47C0;
    case 0x7F3A47C4u: goto label_7F3A47C4;
    case 0x7F3A47C8u: goto label_7F3A47C8;
    case 0x7F3A47CCu: goto label_7F3A47CC;
    case 0x7F3A47D0u: goto label_7F3A47D0;
    case 0x7F3A47D4u: goto label_7F3A47D4;
    case 0x7F3A47D8u: goto label_7F3A47D8;
    case 0x7F3A47DCu: goto label_7F3A47DC;
    case 0x7F3A47E0u: goto label_7F3A47E0;
    case 0x7F3A47E4u: goto label_7F3A47E4;
    case 0x7F3A47E8u: goto label_7F3A47E8;
    case 0x7F3A47ECu: goto label_7F3A47EC;
    case 0x7F3A47F0u: goto label_7F3A47F0;
    case 0x7F3A47F4u: goto label_7F3A47F4;
    case 0x7F3A47F8u: goto label_7F3A47F8;
    case 0x7F3A47FCu: goto label_7F3A47FC;
    case 0x7F3A4800u: goto label_7F3A4800;
    case 0x7F3A4804u: goto label_7F3A4804;
    case 0x7F3A4808u: goto label_7F3A4808;
    case 0x7F3A480Cu: goto label_7F3A480C;
    case 0x7F3A4810u: goto label_7F3A4810;
    case 0x7F3A4814u: goto label_7F3A4814;
    case 0x7F3A4818u: goto label_7F3A4818;
    case 0x7F3A481Cu: goto label_7F3A481C;
    case 0x7F3A4820u: goto label_7F3A4820;
    case 0x7F3A4824u: goto label_7F3A4824;
    case 0x7F3A4828u: goto label_7F3A4828;
    case 0x7F3A482Cu: goto label_7F3A482C;
    case 0x7F3A4830u: goto label_7F3A4830;
    case 0x7F3A4834u: goto label_7F3A4834;
    case 0x7F3A4838u: goto label_7F3A4838;
    case 0x7F3A483Cu: goto label_7F3A483C;
    case 0x7F3A4840u: goto label_7F3A4840;
    case 0x7F3A4844u: goto label_7F3A4844;
    case 0x7F3A4848u: goto label_7F3A4848;
    case 0x7F3A484Cu: goto label_7F3A484C;
    case 0x7F3A4850u: goto label_7F3A4850;
    case 0x7F3A4854u: goto label_7F3A4854;
    case 0x7F3A4858u: goto label_7F3A4858;
    case 0x7F3A485Cu: goto label_7F3A485C;
    case 0x7F3A4860u: goto label_7F3A4860;
    case 0x7F3A4864u: goto label_7F3A4864;
    case 0x7F3A4868u: goto label_7F3A4868;
    case 0x7F3A486Cu: goto label_7F3A486C;
    case 0x7F3A4870u: goto label_7F3A4870;
    case 0x7F3A4874u: goto label_7F3A4874;
    case 0x7F3A4878u: goto label_7F3A4878;
    case 0x7F3A487Cu: goto label_7F3A487C;
    case 0x7F3A4880u: goto label_7F3A4880;
    case 0x7F3A4884u: goto label_7F3A4884;
    case 0x7F3A4888u: goto label_7F3A4888;
    case 0x7F3A488Cu: goto label_7F3A488C;
    case 0x7F3A4890u: goto label_7F3A4890;
    case 0x7F3A4894u: goto label_7F3A4894;
    case 0x7F3A4898u: goto label_7F3A4898;
    case 0x7F3A489Cu: goto label_7F3A489C;
    case 0x7F3A48A0u: goto label_7F3A48A0;
    case 0x7F3A48A4u: goto label_7F3A48A4;
    case 0x7F3A48A8u: goto label_7F3A48A8;
    case 0x7F3A48ACu: goto label_7F3A48AC;
    case 0x7F3A48B0u: goto label_7F3A48B0;
    case 0x7F3A48B4u: goto label_7F3A48B4;
    case 0x7F3A48B8u: goto label_7F3A48B8;
    case 0x7F3A48BCu: goto label_7F3A48BC;
    case 0x7F3A48C0u: goto label_7F3A48C0;
    case 0x7F3A48C4u: goto label_7F3A48C4;
    case 0x7F3A48C8u: goto label_7F3A48C8;
    case 0x7F3A48CCu: goto label_7F3A48CC;
    case 0x7F3A48D0u: goto label_7F3A48D0;
    case 0x7F3A48D4u: goto label_7F3A48D4;
    case 0x7F3A48D8u: goto label_7F3A48D8;
    case 0x7F3A48DCu: goto label_7F3A48DC;
    case 0x7F3A48E0u: goto label_7F3A48E0;
    case 0x7F3A48E4u: goto label_7F3A48E4;
    case 0x7F3A48E8u: goto label_7F3A48E8;
    case 0x7F3A48ECu: goto label_7F3A48EC;
    case 0x7F3A48F0u: goto label_7F3A48F0;
    case 0x7F3A48F4u: goto label_7F3A48F4;
    case 0x7F3A48F8u: goto label_7F3A48F8;
    case 0x7F3A48FCu: goto label_7F3A48FC;
    case 0x7F3A4900u: goto label_7F3A4900;
    case 0x7F3A4904u: goto label_7F3A4904;
    case 0x7F3A4908u: goto label_7F3A4908;
    case 0x7F3A490Cu: goto label_7F3A490C;
    case 0x7F3A4910u: goto label_7F3A4910;
    case 0x7F3A4914u: goto label_7F3A4914;
    case 0x7F3A4918u: goto label_7F3A4918;
    case 0x7F3A491Cu: goto label_7F3A491C;
    case 0x7F3A4920u: goto label_7F3A4920;
    case 0x7F3A4924u: goto label_7F3A4924;
    case 0x7F3A4928u: goto label_7F3A4928;
    case 0x7F3A492Cu: goto label_7F3A492C;
    case 0x7F3A4930u: goto label_7F3A4930;
    case 0x7F3A4934u: goto label_7F3A4934;
    case 0x7F3A4938u: goto label_7F3A4938;
    case 0x7F3A493Cu: goto label_7F3A493C;
    case 0x7F3A4940u: goto label_7F3A4940;
    case 0x7F3A4944u: goto label_7F3A4944;
    case 0x7F3A4948u: goto label_7F3A4948;
    case 0x7F3A494Cu: goto label_7F3A494C;
    case 0x7F3A4950u: goto label_7F3A4950;
    case 0x7F3A4954u: goto label_7F3A4954;
    case 0x7F3A4958u: goto label_7F3A4958;
    case 0x7F3A495Cu: goto label_7F3A495C;
    case 0x7F3A4960u: goto label_7F3A4960;
    case 0x7F3A4964u: goto label_7F3A4964;
    case 0x7F3A4968u: goto label_7F3A4968;
    case 0x7F3A496Cu: goto label_7F3A496C;
    case 0x7F3A4970u: goto label_7F3A4970;
    case 0x7F3A4974u: goto label_7F3A4974;
    case 0x7F3A4978u: goto label_7F3A4978;
    case 0x7F3A497Cu: goto label_7F3A497C;
    case 0x7F3A4980u: goto label_7F3A4980;
    case 0x7F3A4984u: goto label_7F3A4984;
    case 0x7F3A4988u: goto label_7F3A4988;
    case 0x7F3A498Cu: goto label_7F3A498C;
    case 0x7F3A4990u: goto label_7F3A4990;
    case 0x7F3A4994u: goto label_7F3A4994;
    case 0x7F3A4998u: goto label_7F3A4998;
    case 0x7F3A499Cu: goto label_7F3A499C;
    case 0x7F3A49A0u: goto label_7F3A49A0;
    case 0x7F3A49A4u: goto label_7F3A49A4;
    case 0x7F3A49A8u: goto label_7F3A49A8;
    case 0x7F3A49ACu: goto label_7F3A49AC;
    case 0x7F3A49B0u: goto label_7F3A49B0;
    case 0x7F3A49B4u: goto label_7F3A49B4;
    case 0x7F3A49B8u: goto label_7F3A49B8;
    case 0x7F3A49BCu: goto label_7F3A49BC;
    case 0x7F3A49C0u: goto label_7F3A49C0;
    case 0x7F3A49C4u: goto label_7F3A49C4;
    case 0x7F3A49C8u: goto label_7F3A49C8;
    case 0x7F3A49CCu: goto label_7F3A49CC;
    case 0x7F3A49D0u: goto label_7F3A49D0;
    case 0x7F3A49D4u: goto label_7F3A49D4;
    case 0x7F3A49D8u: goto label_7F3A49D8;
    case 0x7F3A49DCu: goto label_7F3A49DC;
    case 0x7F3A49E0u: goto label_7F3A49E0;
    case 0x7F3A49E4u: goto label_7F3A49E4;
    case 0x7F3A49E8u: goto label_7F3A49E8;
    case 0x7F3A49ECu: goto label_7F3A49EC;
    case 0x7F3A49F0u: goto label_7F3A49F0;
    case 0x7F3A49F4u: goto label_7F3A49F4;
    case 0x7F3A49F8u: goto label_7F3A49F8;
    case 0x7F3A49FCu: goto label_7F3A49FC;
    case 0x7F3A4A00u: goto label_7F3A4A00;
    case 0x7F3A4A04u: goto label_7F3A4A04;
    case 0x7F3A4A08u: goto label_7F3A4A08;
    case 0x7F3A4A0Cu: goto label_7F3A4A0C;
    case 0x7F3A4A10u: goto label_7F3A4A10;
    case 0x7F3A4A14u: goto label_7F3A4A14;
    case 0x7F3A4A18u: goto label_7F3A4A18;
    case 0x7F3A4A1Cu: goto label_7F3A4A1C;
    case 0x7F3A4A20u: goto label_7F3A4A20;
    case 0x7F3A4A24u: goto label_7F3A4A24;
    case 0x7F3A4A28u: goto label_7F3A4A28;
    case 0x7F3A4A2Cu: goto label_7F3A4A2C;
    case 0x7F3A4A30u: goto label_7F3A4A30;
    case 0x7F3A4A34u: goto label_7F3A4A34;
    case 0x7F3A4A38u: goto label_7F3A4A38;
    case 0x7F3A4A3Cu: goto label_7F3A4A3C;
    case 0x7F3A4A40u: goto label_7F3A4A40;
    case 0x7F3A4A44u: goto label_7F3A4A44;
    case 0x7F3A4A48u: goto label_7F3A4A48;
    case 0x7F3A4A4Cu: goto label_7F3A4A4C;
    case 0x7F3A4A50u: goto label_7F3A4A50;
    case 0x7F3A4A54u: goto label_7F3A4A54;
    case 0x7F3A4A58u: goto label_7F3A4A58;
    case 0x7F3A4A5Cu: goto label_7F3A4A5C;
    case 0x7F3A4A60u: goto label_7F3A4A60;
    case 0x7F3A4A64u: goto label_7F3A4A64;
    case 0x7F3A4A68u: goto label_7F3A4A68;
    case 0x7F3A4A6Cu: goto label_7F3A4A6C;
    case 0x7F3A4A70u: goto label_7F3A4A70;
    case 0x7F3A4A74u: goto label_7F3A4A74;
    case 0x7F3A4A78u: goto label_7F3A4A78;
    case 0x7F3A4A7Cu: goto label_7F3A4A7C;
    case 0x7F3A4A80u: goto label_7F3A4A80;
    case 0x7F3A4A84u: goto label_7F3A4A84;
    case 0x7F3A4A88u: goto label_7F3A4A88;
    case 0x7F3A4A8Cu: goto label_7F3A4A8C;
    case 0x7F3A4A90u: goto label_7F3A4A90;
    case 0x7F3A4A94u: goto label_7F3A4A94;
    case 0x7F3A4A98u: goto label_7F3A4A98;
    case 0x7F3A4A9Cu: goto label_7F3A4A9C;
    case 0x7F3A4AA0u: goto label_7F3A4AA0;
    case 0x7F3A4AA4u: goto label_7F3A4AA4;
    case 0x7F3A4AA8u: goto label_7F3A4AA8;
    case 0x7F3A4AACu: goto label_7F3A4AAC;
    case 0x7F3A4AB0u: goto label_7F3A4AB0;
    case 0x7F3A4AB4u: goto label_7F3A4AB4;
    case 0x7F3A4AB8u: goto label_7F3A4AB8;
    case 0x7F3A4ABCu: goto label_7F3A4ABC;
    case 0x7F3A4AC0u: goto label_7F3A4AC0;
    case 0x7F3A4AC4u: goto label_7F3A4AC4;
    case 0x7F3A4AC8u: goto label_7F3A4AC8;
    case 0x7F3A4ACCu: goto label_7F3A4ACC;
    case 0x7F3A4AD0u: goto label_7F3A4AD0;
    case 0x7F3A4AD4u: goto label_7F3A4AD4;
    case 0x7F3A4AD8u: goto label_7F3A4AD8;
    case 0x7F3A4ADCu: goto label_7F3A4ADC;
    case 0x7F3A4AE0u: goto label_7F3A4AE0;
    case 0x7F3A4AE4u: goto label_7F3A4AE4;
    case 0x7F3A4AE8u: goto label_7F3A4AE8;
    case 0x7F3A4AECu: goto label_7F3A4AEC;
    case 0x7F3A4AF0u: goto label_7F3A4AF0;
    case 0x7F3A4AF4u: goto label_7F3A4AF4;
    case 0x7F3A4AF8u: goto label_7F3A4AF8;
    case 0x7F3A4AFCu: goto label_7F3A4AFC;
    case 0x7F3A4B00u: goto label_7F3A4B00;
    case 0x7F3A4B04u: goto label_7F3A4B04;
    case 0x7F3A4B08u: goto label_7F3A4B08;
    case 0x7F3A4B0Cu: goto label_7F3A4B0C;
    case 0x7F3A4B10u: goto label_7F3A4B10;
    case 0x7F3A4B14u: goto label_7F3A4B14;
    case 0x7F3A4B18u: goto label_7F3A4B18;
    case 0x7F3A4B1Cu: goto label_7F3A4B1C;
    case 0x7F3A4B20u: goto label_7F3A4B20;
    case 0x7F3A4B24u: goto label_7F3A4B24;
    case 0x7F3A4B28u: goto label_7F3A4B28;
    case 0x7F3A4B2Cu: goto label_7F3A4B2C;
    case 0x7F3A4B30u: goto label_7F3A4B30;
    case 0x7F3A4B34u: goto label_7F3A4B34;
    case 0x7F3A4B38u: goto label_7F3A4B38;
    case 0x7F3A4B3Cu: goto label_7F3A4B3C;
    case 0x7F3A4B40u: goto label_7F3A4B40;
    case 0x7F3A4B44u: goto label_7F3A4B44;
    case 0x7F3A4B48u: goto label_7F3A4B48;
    case 0x7F3A4B4Cu: goto label_7F3A4B4C;
    case 0x7F3A4B50u: goto label_7F3A4B50;
    case 0x7F3A4B54u: goto label_7F3A4B54;
    case 0x7F3A4B58u: goto label_7F3A4B58;
    case 0x7F3A4B5Cu: goto label_7F3A4B5C;
    case 0x7F3A4B60u: goto label_7F3A4B60;
    case 0x7F3A4B64u: goto label_7F3A4B64;
    case 0x7F3A4B68u: goto label_7F3A4B68;
    case 0x7F3A4B6Cu: goto label_7F3A4B6C;
    case 0x7F3A4B70u: goto label_7F3A4B70;
    case 0x7F3A4B74u: goto label_7F3A4B74;
    case 0x7F3A4B78u: goto label_7F3A4B78;
    case 0x7F3A4B7Cu: goto label_7F3A4B7C;
    case 0x7F3A4B80u: goto label_7F3A4B80;
    case 0x7F3A4B84u: goto label_7F3A4B84;
    case 0x7F3A4B88u: goto label_7F3A4B88;
    case 0x7F3A4B8Cu: goto label_7F3A4B8C;
    case 0x7F3A4B90u: goto label_7F3A4B90;
    case 0x7F3A4B94u: goto label_7F3A4B94;
    case 0x7F3A4B98u: goto label_7F3A4B98;
    case 0x7F3A4B9Cu: goto label_7F3A4B9C;
    case 0x7F3A4BA0u: goto label_7F3A4BA0;
    case 0x7F3A4BA4u: goto label_7F3A4BA4;
    case 0x7F3A4BA8u: goto label_7F3A4BA8;
    case 0x7F3A4BACu: goto label_7F3A4BAC;
    case 0x7F3A4BB0u: goto label_7F3A4BB0;
    case 0x7F3A4BB4u: goto label_7F3A4BB4;
    case 0x7F3A4BB8u: goto label_7F3A4BB8;
    case 0x7F3A4BBCu: goto label_7F3A4BBC;
    case 0x7F3A4BC0u: goto label_7F3A4BC0;
    case 0x7F3A4BC4u: goto label_7F3A4BC4;
    case 0x7F3A4BC8u: goto label_7F3A4BC8;
    case 0x7F3A4BCCu: goto label_7F3A4BCC;
    case 0x7F3A4BD0u: goto label_7F3A4BD0;
    case 0x7F3A4BD4u: goto label_7F3A4BD4;
    case 0x7F3A4BD8u: goto label_7F3A4BD8;
    case 0x7F3A4BDCu: goto label_7F3A4BDC;
    case 0x7F3A4BE0u: goto label_7F3A4BE0;
    case 0x7F3A4BE4u: goto label_7F3A4BE4;
    case 0x7F3A4BE8u: goto label_7F3A4BE8;
    case 0x7F3A4BECu: goto label_7F3A4BEC;
    case 0x7F3A4BF0u: goto label_7F3A4BF0;
    case 0x7F3A4BF4u: goto label_7F3A4BF4;
    case 0x7F3A4BF8u: goto label_7F3A4BF8;
    case 0x7F3A4BFCu: goto label_7F3A4BFC;
    case 0x7F3A4C00u: goto label_7F3A4C00;
    case 0x7F3A4C04u: goto label_7F3A4C04;
    case 0x7F3A4C08u: goto label_7F3A4C08;
    case 0x7F3A4C0Cu: goto label_7F3A4C0C;
    case 0x7F3A4C10u: goto label_7F3A4C10;
    case 0x7F3A4C14u: goto label_7F3A4C14;
    case 0x7F3A4C18u: goto label_7F3A4C18;
    case 0x7F3A4C1Cu: goto label_7F3A4C1C;
    case 0x7F3A4C20u: goto label_7F3A4C20;
    case 0x7F3A4C24u: goto label_7F3A4C24;
    case 0x7F3A4C28u: goto label_7F3A4C28;
    case 0x7F3A4C2Cu: goto label_7F3A4C2C;
    case 0x7F3A4C30u: goto label_7F3A4C30;
    case 0x7F3A4C34u: goto label_7F3A4C34;
    case 0x7F3A4C38u: goto label_7F3A4C38;
    case 0x7F3A4C3Cu: goto label_7F3A4C3C;
    case 0x7F3A4C40u: goto label_7F3A4C40;
    case 0x7F3A4C44u: goto label_7F3A4C44;
    case 0x7F3A4C48u: goto label_7F3A4C48;
    case 0x7F3A4C4Cu: goto label_7F3A4C4C;
    case 0x7F3A4C50u: goto label_7F3A4C50;
    case 0x7F3A4C54u: goto label_7F3A4C54;
    case 0x7F3A4C58u: goto label_7F3A4C58;
    case 0x7F3A4C5Cu: goto label_7F3A4C5C;
    case 0x7F3A4C60u: goto label_7F3A4C60;
    case 0x7F3A4C64u: goto label_7F3A4C64;
    case 0x7F3A4C68u: goto label_7F3A4C68;
    case 0x7F3A4C6Cu: goto label_7F3A4C6C;
    case 0x7F3A4C70u: goto label_7F3A4C70;
    case 0x7F3A4C74u: goto label_7F3A4C74;
    case 0x7F3A4C78u: goto label_7F3A4C78;
    case 0x7F3A4C7Cu: goto label_7F3A4C7C;
    case 0x7F3A4C80u: goto label_7F3A4C80;
    case 0x7F3A4C84u: goto label_7F3A4C84;
    case 0x7F3A4C88u: goto label_7F3A4C88;
    case 0x7F3A4C8Cu: goto label_7F3A4C8C;
    case 0x7F3A4C90u: goto label_7F3A4C90;
    case 0x7F3A4C94u: goto label_7F3A4C94;
    case 0x7F3A4C98u: goto label_7F3A4C98;
    case 0x7F3A4C9Cu: goto label_7F3A4C9C;
    case 0x7F3A4CA0u: goto label_7F3A4CA0;
    case 0x7F3A4CA4u: goto label_7F3A4CA4;
    case 0x7F3A4CA8u: goto label_7F3A4CA8;
    case 0x7F3A4CACu: goto label_7F3A4CAC;
    case 0x7F3A4CB0u: goto label_7F3A4CB0;
    case 0x7F3A4CB4u: goto label_7F3A4CB4;
    case 0x7F3A4CB8u: goto label_7F3A4CB8;
    case 0x7F3A4CBCu: goto label_7F3A4CBC;
    case 0x7F3A4CC0u: goto label_7F3A4CC0;
    case 0x7F3A4CC4u: goto label_7F3A4CC4;
    case 0x7F3A4CC8u: goto label_7F3A4CC8;
    case 0x7F3A4CCCu: goto label_7F3A4CCC;
    case 0x7F3A4CD0u: goto label_7F3A4CD0;
    case 0x7F3A4CD4u: goto label_7F3A4CD4;
    case 0x7F3A4CD8u: goto label_7F3A4CD8;
    case 0x7F3A4CDCu: goto label_7F3A4CDC;
    case 0x7F3A4CE0u: goto label_7F3A4CE0;
    case 0x7F3A4CE4u: goto label_7F3A4CE4;
    case 0x7F3A4CE8u: goto label_7F3A4CE8;
    case 0x7F3A4CECu: goto label_7F3A4CEC;
    case 0x7F3A4CF0u: goto label_7F3A4CF0;
    case 0x7F3A4CF4u: goto label_7F3A4CF4;
    case 0x7F3A4CF8u: goto label_7F3A4CF8;
    case 0x7F3A4CFCu: goto label_7F3A4CFC;
    case 0x7F3A4D00u: goto label_7F3A4D00;
    case 0x7F3A4D04u: goto label_7F3A4D04;
    case 0x7F3A4D08u: goto label_7F3A4D08;
    case 0x7F3A4D0Cu: goto label_7F3A4D0C;
    case 0x7F3A4D10u: goto label_7F3A4D10;
    case 0x7F3A4D14u: goto label_7F3A4D14;
    case 0x7F3A4D18u: goto label_7F3A4D18;
    case 0x7F3A4D1Cu: goto label_7F3A4D1C;
    case 0x7F3A4D20u: goto label_7F3A4D20;
    case 0x7F3A4D24u: goto label_7F3A4D24;
    case 0x7F3A4D28u: goto label_7F3A4D28;
    case 0x7F3A4D2Cu: goto label_7F3A4D2C;
    case 0x7F3A4D30u: goto label_7F3A4D30;
    case 0x7F3A4D34u: goto label_7F3A4D34;
    case 0x7F3A4D38u: goto label_7F3A4D38;
    case 0x7F3A4D3Cu: goto label_7F3A4D3C;
    case 0x7F3A4D40u: goto label_7F3A4D40;
    case 0x7F3A4D44u: goto label_7F3A4D44;
    case 0x7F3A4D48u: goto label_7F3A4D48;
    case 0x7F3A4D4Cu: goto label_7F3A4D4C;
    case 0x7F3A4D50u: goto label_7F3A4D50;
    case 0x7F3A4D54u: goto label_7F3A4D54;
    case 0x7F3A4D58u: goto label_7F3A4D58;
    case 0x7F3A4D5Cu: goto label_7F3A4D5C;
    case 0x7F3A4D60u: goto label_7F3A4D60;
    case 0x7F3A4D64u: goto label_7F3A4D64;
    case 0x7F3A4D68u: goto label_7F3A4D68;
    case 0x7F3A4D6Cu: goto label_7F3A4D6C;
    case 0x7F3A4D70u: goto label_7F3A4D70;
    case 0x7F3A4D74u: goto label_7F3A4D74;
    case 0x7F3A4D78u: goto label_7F3A4D78;
    case 0x7F3A4D7Cu: goto label_7F3A4D7C;
    case 0x7F3A4D80u: goto label_7F3A4D80;
    case 0x7F3A4D84u: goto label_7F3A4D84;
    case 0x7F3A4D88u: goto label_7F3A4D88;
    case 0x7F3A4D8Cu: goto label_7F3A4D8C;
    case 0x7F3A4D90u: goto label_7F3A4D90;
    case 0x7F3A4D94u: goto label_7F3A4D94;
    case 0x7F3A4D98u: goto label_7F3A4D98;
    case 0x7F3A4D9Cu: goto label_7F3A4D9C;
    case 0x7F3A4DA0u: goto label_7F3A4DA0;
    case 0x7F3A4DA4u: goto label_7F3A4DA4;
    case 0x7F3A4DA8u: goto label_7F3A4DA8;
    case 0x7F3A4DACu: goto label_7F3A4DAC;
    case 0x7F3A4DB0u: goto label_7F3A4DB0;
    case 0x7F3A4DB4u: goto label_7F3A4DB4;
    case 0x7F3A4DB8u: goto label_7F3A4DB8;
    case 0x7F3A4DBCu: goto label_7F3A4DBC;
    case 0x7F3A4DC0u: goto label_7F3A4DC0;
    case 0x7F3A4DC4u: goto label_7F3A4DC4;
    case 0x7F3A4DC8u: goto label_7F3A4DC8;
    case 0x7F3A4DCCu: goto label_7F3A4DCC;
    case 0x7F3A4DD0u: goto label_7F3A4DD0;
    case 0x7F3A4DD4u: goto label_7F3A4DD4;
    case 0x7F3A4DD8u: goto label_7F3A4DD8;
    case 0x7F3A4DDCu: goto label_7F3A4DDC;
    case 0x7F3A4DE0u: goto label_7F3A4DE0;
    case 0x7F3A4DE4u: goto label_7F3A4DE4;
    case 0x7F3A4DE8u: goto label_7F3A4DE8;
    case 0x7F3A4DECu: goto label_7F3A4DEC;
    case 0x7F3A4DF0u: goto label_7F3A4DF0;
    case 0x7F3A4DF4u: goto label_7F3A4DF4;
    case 0x7F3A4DF8u: goto label_7F3A4DF8;
    case 0x7F3A4DFCu: goto label_7F3A4DFC;
    case 0x7F3A4E00u: goto label_7F3A4E00;
    case 0x7F3A4E04u: goto label_7F3A4E04;
    case 0x7F3A4E08u: goto label_7F3A4E08;
    case 0x7F3A4E0Cu: goto label_7F3A4E0C;
    case 0x7F3A4E10u: goto label_7F3A4E10;
    case 0x7F3A4E14u: goto label_7F3A4E14;
    case 0x7F3A4E18u: goto label_7F3A4E18;
    case 0x7F3A4E1Cu: goto label_7F3A4E1C;
    case 0x7F3A4E20u: goto label_7F3A4E20;
    case 0x7F3A4E24u: goto label_7F3A4E24;
    case 0x7F3A4E28u: goto label_7F3A4E28;
    case 0x7F3A4E2Cu: goto label_7F3A4E2C;
    case 0x7F3A4E30u: goto label_7F3A4E30;
    case 0x7F3A4E34u: goto label_7F3A4E34;
    case 0x7F3A4E38u: goto label_7F3A4E38;
    case 0x7F3A4E3Cu: goto label_7F3A4E3C;
    case 0x7F3A4E40u: goto label_7F3A4E40;
    case 0x7F3A4E44u: goto label_7F3A4E44;
    case 0x7F3A4E48u: goto label_7F3A4E48;
    case 0x7F3A4E4Cu: goto label_7F3A4E4C;
    case 0x7F3A4E50u: goto label_7F3A4E50;
    case 0x7F3A4E54u: goto label_7F3A4E54;
    case 0x7F3A4E58u: goto label_7F3A4E58;
    case 0x7F3A4E5Cu: goto label_7F3A4E5C;
    case 0x7F3A4E60u: goto label_7F3A4E60;
    case 0x7F3A4E64u: goto label_7F3A4E64;
    case 0x7F3A4E68u: goto label_7F3A4E68;
    case 0x7F3A4E6Cu: goto label_7F3A4E6C;
    case 0x7F3A4E70u: goto label_7F3A4E70;
    case 0x7F3A4E74u: goto label_7F3A4E74;
    case 0x7F3A4E78u: goto label_7F3A4E78;
    case 0x7F3A4E7Cu: goto label_7F3A4E7C;
    case 0x7F3A4E80u: goto label_7F3A4E80;
    case 0x7F3A4E84u: goto label_7F3A4E84;
    case 0x7F3A4E88u: goto label_7F3A4E88;
    case 0x7F3A4E8Cu: goto label_7F3A4E8C;
    case 0x7F3A4E90u: goto label_7F3A4E90;
    case 0x7F3A4E94u: goto label_7F3A4E94;
    case 0x7F3A4E98u: goto label_7F3A4E98;
    case 0x7F3A4E9Cu: goto label_7F3A4E9C;
    case 0x7F3A4EA0u: goto label_7F3A4EA0;
    case 0x7F3A4EA4u: goto label_7F3A4EA4;
    case 0x7F3A4EA8u: goto label_7F3A4EA8;
    case 0x7F3A4EACu: goto label_7F3A4EAC;
    case 0x7F3A4EB0u: goto label_7F3A4EB0;
    case 0x7F3A4EB4u: goto label_7F3A4EB4;
    case 0x7F3A4EB8u: goto label_7F3A4EB8;
    case 0x7F3A4EBCu: goto label_7F3A4EBC;
    case 0x7F3A4EC0u: goto label_7F3A4EC0;
    case 0x7F3A4EC4u: goto label_7F3A4EC4;
    case 0x7F3A4EC8u: goto label_7F3A4EC8;
    case 0x7F3A4ECCu: goto label_7F3A4ECC;
    case 0x7F3A4ED0u: goto label_7F3A4ED0;
    case 0x7F3A4ED4u: goto label_7F3A4ED4;
    case 0x7F3A4ED8u: goto label_7F3A4ED8;
    case 0x7F3A4EDCu: goto label_7F3A4EDC;
    case 0x7F3A4EE0u: goto label_7F3A4EE0;
    case 0x7F3A4EE4u: goto label_7F3A4EE4;
    case 0x7F3A4EE8u: goto label_7F3A4EE8;
    case 0x7F3A4EECu: goto label_7F3A4EEC;
    case 0x7F3A4EF0u: goto label_7F3A4EF0;
    case 0x7F3A4EF4u: goto label_7F3A4EF4;
    case 0x7F3A4EF8u: goto label_7F3A4EF8;
    case 0x7F3A4EFCu: goto label_7F3A4EFC;
    case 0x7F3A4F00u: goto label_7F3A4F00;
    case 0x7F3A4F04u: goto label_7F3A4F04;
    case 0x7F3A4F08u: goto label_7F3A4F08;
    case 0x7F3A4F0Cu: goto label_7F3A4F0C;
    case 0x7F3A4F10u: goto label_7F3A4F10;
    case 0x7F3A4F14u: goto label_7F3A4F14;
    case 0x7F3A4F18u: goto label_7F3A4F18;
    case 0x7F3A4F1Cu: goto label_7F3A4F1C;
    case 0x7F3A4F20u: goto label_7F3A4F20;
    case 0x7F3A4F24u: goto label_7F3A4F24;
    case 0x7F3A4F28u: goto label_7F3A4F28;
    case 0x7F3A4F2Cu: goto label_7F3A4F2C;
    case 0x7F3A4F30u: goto label_7F3A4F30;
    case 0x7F3A4F34u: goto label_7F3A4F34;
    case 0x7F3A4F38u: goto label_7F3A4F38;
    case 0x7F3A4F3Cu: goto label_7F3A4F3C;
    case 0x7F3A4F40u: goto label_7F3A4F40;
    case 0x7F3A4F44u: goto label_7F3A4F44;
    case 0x7F3A4F48u: goto label_7F3A4F48;
    case 0x7F3A4F4Cu: goto label_7F3A4F4C;
    case 0x7F3A4F50u: goto label_7F3A4F50;
    case 0x7F3A4F54u: goto label_7F3A4F54;
    case 0x7F3A4F58u: goto label_7F3A4F58;
    case 0x7F3A4F5Cu: goto label_7F3A4F5C;
    case 0x7F3A4F60u: goto label_7F3A4F60;
    case 0x7F3A4F64u: goto label_7F3A4F64;
    case 0x7F3A4F68u: goto label_7F3A4F68;
    case 0x7F3A4F6Cu: goto label_7F3A4F6C;
    case 0x7F3A4F70u: goto label_7F3A4F70;
    case 0x7F3A4F74u: goto label_7F3A4F74;
    case 0x7F3A4F78u: goto label_7F3A4F78;
    case 0x7F3A4F7Cu: goto label_7F3A4F7C;
    case 0x7F3A4F80u: goto label_7F3A4F80;
    case 0x7F3A4F84u: goto label_7F3A4F84;
    case 0x7F3A4F88u: goto label_7F3A4F88;
    case 0x7F3A4F8Cu: goto label_7F3A4F8C;
    case 0x7F3A4F90u: goto label_7F3A4F90;
    case 0x7F3A4F94u: goto label_7F3A4F94;
    case 0x7F3A4F98u: goto label_7F3A4F98;
    case 0x7F3A4F9Cu: goto label_7F3A4F9C;
    case 0x7F3A4FA0u: goto label_7F3A4FA0;
    case 0x7F3A4FA4u: goto label_7F3A4FA4;
    case 0x7F3A4FA8u: goto label_7F3A4FA8;
    case 0x7F3A4FACu: goto label_7F3A4FAC;
    case 0x7F3A4FB0u: goto label_7F3A4FB0;
    case 0x7F3A4FB4u: goto label_7F3A4FB4;
    case 0x7F3A4FB8u: goto label_7F3A4FB8;
    case 0x7F3A4FBCu: goto label_7F3A4FBC;
    case 0x7F3A4FC0u: goto label_7F3A4FC0;
    case 0x7F3A4FC4u: goto label_7F3A4FC4;
    case 0x7F3A4FC8u: goto label_7F3A4FC8;
    case 0x7F3A4FCCu: goto label_7F3A4FCC;
    case 0x7F3A4FD0u: goto label_7F3A4FD0;
    case 0x7F3A4FD4u: goto label_7F3A4FD4;
    case 0x7F3A4FD8u: goto label_7F3A4FD8;
    case 0x7F3A4FDCu: goto label_7F3A4FDC;
    case 0x7F3A4FE0u: goto label_7F3A4FE0;
    case 0x7F3A4FE4u: goto label_7F3A4FE4;
    case 0x7F3A4FE8u: goto label_7F3A4FE8;
    case 0x7F3A4FECu: goto label_7F3A4FEC;
    case 0x7F3A4FF0u: goto label_7F3A4FF0;
    case 0x7F3A4FF4u: goto label_7F3A4FF4;
    case 0x7F3A4FF8u: goto label_7F3A4FF8;
    case 0x7F3A4FFCu: goto label_7F3A4FFC;
    case 0x7F3A5000u: goto label_7F3A5000;
    case 0x7F3A5004u: goto label_7F3A5004;
    case 0x7F3A5008u: goto label_7F3A5008;
    case 0x7F3A500Cu: goto label_7F3A500C;
    case 0x7F3A5010u: goto label_7F3A5010;
    case 0x7F3A5014u: goto label_7F3A5014;
    case 0x7F3A5018u: goto label_7F3A5018;
    case 0x7F3A501Cu: goto label_7F3A501C;
    case 0x7F3A5020u: goto label_7F3A5020;
    case 0x7F3A5024u: goto label_7F3A5024;
    case 0x7F3A5028u: goto label_7F3A5028;
    case 0x7F3A502Cu: goto label_7F3A502C;
    case 0x7F3A5030u: goto label_7F3A5030;
    case 0x7F3A5034u: goto label_7F3A5034;
    case 0x7F3A5038u: goto label_7F3A5038;
    case 0x7F3A503Cu: goto label_7F3A503C;
    case 0x7F3A5040u: goto label_7F3A5040;
    case 0x7F3A5044u: goto label_7F3A5044;
    case 0x7F3A5048u: goto label_7F3A5048;
    case 0x7F3A504Cu: goto label_7F3A504C;
    case 0x7F3A5050u: goto label_7F3A5050;
    case 0x7F3A5054u: goto label_7F3A5054;
    case 0x7F3A5058u: goto label_7F3A5058;
    case 0x7F3A505Cu: goto label_7F3A505C;
    case 0x7F3A5060u: goto label_7F3A5060;
    case 0x7F3A5064u: goto label_7F3A5064;
    case 0x7F3A5068u: goto label_7F3A5068;
    case 0x7F3A506Cu: goto label_7F3A506C;
    case 0x7F3A5070u: goto label_7F3A5070;
    case 0x7F3A5074u: goto label_7F3A5074;
    case 0x7F3A5078u: goto label_7F3A5078;
    case 0x7F3A507Cu: goto label_7F3A507C;
    case 0x7F3A5080u: goto label_7F3A5080;
    case 0x7F3A5084u: goto label_7F3A5084;
    case 0x7F3A5088u: goto label_7F3A5088;
    case 0x7F3A508Cu: goto label_7F3A508C;
    case 0x7F3A5090u: goto label_7F3A5090;
    case 0x7F3A5094u: goto label_7F3A5094;
    case 0x7F3A5098u: goto label_7F3A5098;
    case 0x7F3A509Cu: goto label_7F3A509C;
    case 0x7F3A50A0u: goto label_7F3A50A0;
    case 0x7F3A50A4u: goto label_7F3A50A4;
    case 0x7F3A50A8u: goto label_7F3A50A8;
    case 0x7F3A50ACu: goto label_7F3A50AC;
    case 0x7F3A50B0u: goto label_7F3A50B0;
    case 0x7F3A50B4u: goto label_7F3A50B4;
    case 0x7F3A50B8u: goto label_7F3A50B8;
    case 0x7F3A50BCu: goto label_7F3A50BC;
    case 0x7F3A50C0u: goto label_7F3A50C0;
    case 0x7F3A50C4u: goto label_7F3A50C4;
    case 0x7F3A50C8u: goto label_7F3A50C8;
    case 0x7F3A50CCu: goto label_7F3A50CC;
    case 0x7F3A50D0u: goto label_7F3A50D0;
    case 0x7F3A50D4u: goto label_7F3A50D4;
    case 0x7F3A50D8u: goto label_7F3A50D8;
    case 0x7F3A50DCu: goto label_7F3A50DC;
    case 0x7F3A50E0u: goto label_7F3A50E0;
    case 0x7F3A50E4u: goto label_7F3A50E4;
    case 0x7F3A50E8u: goto label_7F3A50E8;
    case 0x7F3A50ECu: goto label_7F3A50EC;
    case 0x7F3A50F0u: goto label_7F3A50F0;
    case 0x7F3A50F4u: goto label_7F3A50F4;
    case 0x7F3A50F8u: goto label_7F3A50F8;
    case 0x7F3A50FCu: goto label_7F3A50FC;
    case 0x7F3A5100u: goto label_7F3A5100;
    case 0x7F3A5104u: goto label_7F3A5104;
    case 0x7F3A5108u: goto label_7F3A5108;
    case 0x7F3A510Cu: goto label_7F3A510C;
    case 0x7F3A5110u: goto label_7F3A5110;
    case 0x7F3A5114u: goto label_7F3A5114;
    case 0x7F3A5118u: goto label_7F3A5118;
    case 0x7F3A511Cu: goto label_7F3A511C;
    case 0x7F3A5120u: goto label_7F3A5120;
    case 0x7F3A5124u: goto label_7F3A5124;
    case 0x7F3A5128u: goto label_7F3A5128;
    case 0x7F3A512Cu: goto label_7F3A512C;
    case 0x7F3A5130u: goto label_7F3A5130;
    case 0x7F3A5134u: goto label_7F3A5134;
    case 0x7F3A5138u: goto label_7F3A5138;
    case 0x7F3A513Cu: goto label_7F3A513C;
    case 0x7F3A5140u: goto label_7F3A5140;
    case 0x7F3A5144u: goto label_7F3A5144;
    case 0x7F3A5148u: goto label_7F3A5148;
    case 0x7F3A514Cu: goto label_7F3A514C;
    case 0x7F3A5150u: goto label_7F3A5150;
    case 0x7F3A5154u: goto label_7F3A5154;
    case 0x7F3A5158u: goto label_7F3A5158;
    case 0x7F3A515Cu: goto label_7F3A515C;
    case 0x7F3A5160u: goto label_7F3A5160;
    case 0x7F3A5164u: goto label_7F3A5164;
    case 0x7F3A5168u: goto label_7F3A5168;
    case 0x7F3A516Cu: goto label_7F3A516C;
    case 0x7F3A5170u: goto label_7F3A5170;
    case 0x7F3A5174u: goto label_7F3A5174;
    case 0x7F3A5178u: goto label_7F3A5178;
    case 0x7F3A517Cu: goto label_7F3A517C;
    case 0x7F3A5180u: goto label_7F3A5180;
    case 0x7F3A5184u: goto label_7F3A5184;
    case 0x7F3A5188u: goto label_7F3A5188;
    case 0x7F3A518Cu: goto label_7F3A518C;
    case 0x7F3A5190u: goto label_7F3A5190;
    case 0x7F3A5194u: goto label_7F3A5194;
    case 0x7F3A5198u: goto label_7F3A5198;
    case 0x7F3A519Cu: goto label_7F3A519C;
    case 0x7F3A51A0u: goto label_7F3A51A0;
    case 0x7F3A51A4u: goto label_7F3A51A4;
    case 0x7F3A51A8u: goto label_7F3A51A8;
    case 0x7F3A51ACu: goto label_7F3A51AC;
    case 0x7F3A51B0u: goto label_7F3A51B0;
    case 0x7F3A51B4u: goto label_7F3A51B4;
    case 0x7F3A51B8u: goto label_7F3A51B8;
    case 0x7F3A51BCu: goto label_7F3A51BC;
    case 0x7F3A51C0u: goto label_7F3A51C0;
    case 0x7F3A51C4u: goto label_7F3A51C4;
    case 0x7F3A51C8u: goto label_7F3A51C8;
    case 0x7F3A51CCu: goto label_7F3A51CC;
    case 0x7F3A51D0u: goto label_7F3A51D0;
    case 0x7F3A51D4u: goto label_7F3A51D4;
    case 0x7F3A51D8u: goto label_7F3A51D8;
    case 0x7F3A51DCu: goto label_7F3A51DC;
    case 0x7F3A51E0u: goto label_7F3A51E0;
    case 0x7F3A51E4u: goto label_7F3A51E4;
    case 0x7F3A51E8u: goto label_7F3A51E8;
    case 0x7F3A51ECu: goto label_7F3A51EC;
    case 0x7F3A51F0u: goto label_7F3A51F0;
    case 0x7F3A51F4u: goto label_7F3A51F4;
    case 0x7F3A51F8u: goto label_7F3A51F8;
    case 0x7F3A51FCu: goto label_7F3A51FC;
    case 0x7F3A5200u: goto label_7F3A5200;
    case 0x7F3A5204u: goto label_7F3A5204;
    case 0x7F3A5208u: goto label_7F3A5208;
    case 0x7F3A520Cu: goto label_7F3A520C;
    case 0x7F3A5210u: goto label_7F3A5210;
    case 0x7F3A5214u: goto label_7F3A5214;
    case 0x7F3A5218u: goto label_7F3A5218;
    case 0x7F3A521Cu: goto label_7F3A521C;
    case 0x7F3A5220u: goto label_7F3A5220;
    case 0x7F3A5224u: goto label_7F3A5224;
    case 0x7F3A5228u: goto label_7F3A5228;
    case 0x7F3A522Cu: goto label_7F3A522C;
    case 0x7F3A5230u: goto label_7F3A5230;
    case 0x7F3A5234u: goto label_7F3A5234;
    case 0x7F3A5238u: goto label_7F3A5238;
    case 0x7F3A523Cu: goto label_7F3A523C;
    case 0x7F3A5240u: goto label_7F3A5240;
    case 0x7F3A5244u: goto label_7F3A5244;
    case 0x7F3A5248u: goto label_7F3A5248;
    case 0x7F3A524Cu: goto label_7F3A524C;
    case 0x7F3A5250u: goto label_7F3A5250;
    case 0x7F3A5254u: goto label_7F3A5254;
    case 0x7F3A5258u: goto label_7F3A5258;
    case 0x7F3A525Cu: goto label_7F3A525C;
    case 0x7F3A5260u: goto label_7F3A5260;
    case 0x7F3A5264u: goto label_7F3A5264;
    case 0x7F3A5268u: goto label_7F3A5268;
    case 0x7F3A526Cu: goto label_7F3A526C;
    case 0x7F3A5270u: goto label_7F3A5270;
    case 0x7F3A5274u: goto label_7F3A5274;
    case 0x7F3A5278u: goto label_7F3A5278;
    case 0x7F3A527Cu: goto label_7F3A527C;
    case 0x7F3A5280u: goto label_7F3A5280;
    case 0x7F3A5284u: goto label_7F3A5284;
    case 0x7F3A5288u: goto label_7F3A5288;
    case 0x7F3A528Cu: goto label_7F3A528C;
    case 0x7F3A5290u: goto label_7F3A5290;
    case 0x7F3A5294u: goto label_7F3A5294;
    case 0x7F3A5298u: goto label_7F3A5298;
    case 0x7F3A529Cu: goto label_7F3A529C;
    case 0x7F3A52A0u: goto label_7F3A52A0;
    case 0x7F3A52A4u: goto label_7F3A52A4;
    case 0x7F3A52A8u: goto label_7F3A52A8;
    case 0x7F3A52ACu: goto label_7F3A52AC;
    case 0x7F3A52B0u: goto label_7F3A52B0;
    case 0x7F3A52B4u: goto label_7F3A52B4;
    case 0x7F3A52B8u: goto label_7F3A52B8;
    case 0x7F3A52BCu: goto label_7F3A52BC;
    case 0x7F3A52C0u: goto label_7F3A52C0;
    case 0x7F3A52C4u: goto label_7F3A52C4;
    case 0x7F3A52C8u: goto label_7F3A52C8;
    case 0x7F3A52CCu: goto label_7F3A52CC;
    case 0x7F3A52D0u: goto label_7F3A52D0;
    case 0x7F3A52D4u: goto label_7F3A52D4;
    case 0x7F3A52D8u: goto label_7F3A52D8;
    case 0x7F3A52DCu: goto label_7F3A52DC;
    case 0x7F3A52E0u: goto label_7F3A52E0;
    case 0x7F3A52E4u: goto label_7F3A52E4;
    case 0x7F3A52E8u: goto label_7F3A52E8;
    case 0x7F3A52ECu: goto label_7F3A52EC;
    case 0x7F3A52F0u: goto label_7F3A52F0;
    case 0x7F3A52F4u: goto label_7F3A52F4;
    case 0x7F3A52F8u: goto label_7F3A52F8;
    case 0x7F3A52FCu: goto label_7F3A52FC;
    case 0x7F3A5300u: goto label_7F3A5300;
    case 0x7F3A5304u: goto label_7F3A5304;
    case 0x7F3A5308u: goto label_7F3A5308;
    case 0x7F3A530Cu: goto label_7F3A530C;
    case 0x7F3A5310u: goto label_7F3A5310;
    case 0x7F3A5314u: goto label_7F3A5314;
    case 0x7F3A5318u: goto label_7F3A5318;
    case 0x7F3A531Cu: goto label_7F3A531C;
    case 0x7F3A5320u: goto label_7F3A5320;
    case 0x7F3A5324u: goto label_7F3A5324;
    case 0x7F3A5328u: goto label_7F3A5328;
    case 0x7F3A532Cu: goto label_7F3A532C;
    case 0x7F3A5330u: goto label_7F3A5330;
    case 0x7F3A5334u: goto label_7F3A5334;
    case 0x7F3A5338u: goto label_7F3A5338;
    case 0x7F3A533Cu: goto label_7F3A533C;
    case 0x7F3A5340u: goto label_7F3A5340;
    case 0x7F3A5344u: goto label_7F3A5344;
    case 0x7F3A5348u: goto label_7F3A5348;
    case 0x7F3A534Cu: goto label_7F3A534C;
    case 0x7F3A5350u: goto label_7F3A5350;
    case 0x7F3A5354u: goto label_7F3A5354;
    case 0x7F3A5358u: goto label_7F3A5358;
    case 0x7F3A535Cu: goto label_7F3A535C;
    case 0x7F3A5360u: goto label_7F3A5360;
    case 0x7F3A5364u: goto label_7F3A5364;
    case 0x7F3A5368u: goto label_7F3A5368;
    case 0x7F3A536Cu: goto label_7F3A536C;
    case 0x7F3A5370u: goto label_7F3A5370;
    case 0x7F3A5374u: goto label_7F3A5374;
    case 0x7F3A5378u: goto label_7F3A5378;
    case 0x7F3A537Cu: goto label_7F3A537C;
    case 0x7F3A5380u: goto label_7F3A5380;
    case 0x7F3A5384u: goto label_7F3A5384;
    case 0x7F3A5388u: goto label_7F3A5388;
    case 0x7F3A538Cu: goto label_7F3A538C;
    case 0x7F3A5390u: goto label_7F3A5390;
    case 0x7F3A5394u: goto label_7F3A5394;
    case 0x7F3A5398u: goto label_7F3A5398;
    case 0x7F3A539Cu: goto label_7F3A539C;
    case 0x7F3A53A0u: goto label_7F3A53A0;
    case 0x7F3A53A4u: goto label_7F3A53A4;
    case 0x7F3A53A8u: goto label_7F3A53A8;
    case 0x7F3A53ACu: goto label_7F3A53AC;
    case 0x7F3A53B0u: goto label_7F3A53B0;
    case 0x7F3A53B4u: goto label_7F3A53B4;
    case 0x7F3A53B8u: goto label_7F3A53B8;
    case 0x7F3A53BCu: goto label_7F3A53BC;
    case 0x7F3A53C0u: goto label_7F3A53C0;
    case 0x7F3A53C4u: goto label_7F3A53C4;
    case 0x7F3A53C8u: goto label_7F3A53C8;
    case 0x7F3A53CCu: goto label_7F3A53CC;
    case 0x7F3A53D0u: goto label_7F3A53D0;
    case 0x7F3A53D4u: goto label_7F3A53D4;
    case 0x7F3A53D8u: goto label_7F3A53D8;
    case 0x7F3A53DCu: goto label_7F3A53DC;
    case 0x7F3A53E0u: goto label_7F3A53E0;
    case 0x7F3A53E4u: goto label_7F3A53E4;
    case 0x7F3A53E8u: goto label_7F3A53E8;
    case 0x7F3A53ECu: goto label_7F3A53EC;
    case 0x7F3A53F0u: goto label_7F3A53F0;
    case 0x7F3A53F4u: goto label_7F3A53F4;
    case 0x7F3A53F8u: goto label_7F3A53F8;
    case 0x7F3A53FCu: goto label_7F3A53FC;
    case 0x7F3A5400u: goto label_7F3A5400;
    case 0x7F3A5404u: goto label_7F3A5404;
    case 0x7F3A5408u: goto label_7F3A5408;
    case 0x7F3A540Cu: goto label_7F3A540C;
    case 0x7F3A5410u: goto label_7F3A5410;
    case 0x7F3A5414u: goto label_7F3A5414;
    case 0x7F3A5418u: goto label_7F3A5418;
    case 0x7F3A541Cu: goto label_7F3A541C;
    case 0x7F3A5420u: goto label_7F3A5420;
    case 0x7F3A5424u: goto label_7F3A5424;
    case 0x7F3A5428u: goto label_7F3A5428;
    case 0x7F3A542Cu: goto label_7F3A542C;
    case 0x7F3A5430u: goto label_7F3A5430;
    case 0x7F3A5434u: goto label_7F3A5434;
    case 0x7F3A5438u: goto label_7F3A5438;
    case 0x7F3A543Cu: goto label_7F3A543C;
    case 0x7F3A5440u: goto label_7F3A5440;
    case 0x7F3A5444u: goto label_7F3A5444;
    case 0x7F3A5448u: goto label_7F3A5448;
    case 0x7F3A544Cu: goto label_7F3A544C;
    case 0x7F3A5450u: goto label_7F3A5450;
    case 0x7F3A5454u: goto label_7F3A5454;
    case 0x7F3A5458u: goto label_7F3A5458;
    case 0x7F3A545Cu: goto label_7F3A545C;
    case 0x7F3A5460u: goto label_7F3A5460;
    case 0x7F3A5464u: goto label_7F3A5464;
    case 0x7F3A5468u: goto label_7F3A5468;
    case 0x7F3A546Cu: goto label_7F3A546C;
    case 0x7F3A5470u: goto label_7F3A5470;
    case 0x7F3A5474u: goto label_7F3A5474;
    case 0x7F3A5478u: goto label_7F3A5478;
    case 0x7F3A547Cu: goto label_7F3A547C;
    case 0x7F3A5480u: goto label_7F3A5480;
    case 0x7F3A5484u: goto label_7F3A5484;
    case 0x7F3A5488u: goto label_7F3A5488;
    case 0x7F3A548Cu: goto label_7F3A548C;
    case 0x7F3A5490u: goto label_7F3A5490;
    case 0x7F3A5494u: goto label_7F3A5494;
    case 0x7F3A5498u: goto label_7F3A5498;
    case 0x7F3A549Cu: goto label_7F3A549C;
    case 0x7F3A54A0u: goto label_7F3A54A0;
    case 0x7F3A54A4u: goto label_7F3A54A4;
    case 0x7F3A54A8u: goto label_7F3A54A8;
    case 0x7F3A54ACu: goto label_7F3A54AC;
    case 0x7F3A54B0u: goto label_7F3A54B0;
    case 0x7F3A54B4u: goto label_7F3A54B4;
    case 0x7F3A54B8u: goto label_7F3A54B8;
    case 0x7F3A54BCu: goto label_7F3A54BC;
    case 0x7F3A54C0u: goto label_7F3A54C0;
    case 0x7F3A54C4u: goto label_7F3A54C4;
    case 0x7F3A54C8u: goto label_7F3A54C8;
    case 0x7F3A54CCu: goto label_7F3A54CC;
    case 0x7F3A54D0u: goto label_7F3A54D0;
    case 0x7F3A54D4u: goto label_7F3A54D4;
    case 0x7F3A54D8u: goto label_7F3A54D8;
    case 0x7F3A54DCu: goto label_7F3A54DC;
    case 0x7F3A54E0u: goto label_7F3A54E0;
    case 0x7F3A54E4u: goto label_7F3A54E4;
    case 0x7F3A54E8u: goto label_7F3A54E8;
    case 0x7F3A54ECu: goto label_7F3A54EC;
    case 0x7F3A54F0u: goto label_7F3A54F0;
    case 0x7F3A54F4u: goto label_7F3A54F4;
    case 0x7F3A54F8u: goto label_7F3A54F8;
    case 0x7F3A54FCu: goto label_7F3A54FC;
    case 0x7F3A5500u: goto label_7F3A5500;
    case 0x7F3A5504u: goto label_7F3A5504;
    case 0x7F3A5508u: goto label_7F3A5508;
    case 0x7F3A550Cu: goto label_7F3A550C;
    case 0x7F3A5510u: goto label_7F3A5510;
    case 0x7F3A5514u: goto label_7F3A5514;
    case 0x7F3A5518u: goto label_7F3A5518;
    case 0x7F3A551Cu: goto label_7F3A551C;
    case 0x7F3A5520u: goto label_7F3A5520;
    case 0x7F3A5524u: goto label_7F3A5524;
    case 0x7F3A5528u: goto label_7F3A5528;
    case 0x7F3A552Cu: goto label_7F3A552C;
    case 0x7F3A5530u: goto label_7F3A5530;
    case 0x7F3A5534u: goto label_7F3A5534;
    case 0x7F3A5538u: goto label_7F3A5538;
    case 0x7F3A553Cu: goto label_7F3A553C;
    case 0x7F3A5540u: goto label_7F3A5540;
    case 0x7F3A5544u: goto label_7F3A5544;
    case 0x7F3A5548u: goto label_7F3A5548;
    case 0x7F3A554Cu: goto label_7F3A554C;
    case 0x7F3A5550u: goto label_7F3A5550;
    case 0x7F3A5554u: goto label_7F3A5554;
    case 0x7F3A5558u: goto label_7F3A5558;
    case 0x7F3A555Cu: goto label_7F3A555C;
    case 0x7F3A5560u: goto label_7F3A5560;
    case 0x7F3A5564u: goto label_7F3A5564;
    case 0x7F3A5568u: goto label_7F3A5568;
    case 0x7F3A556Cu: goto label_7F3A556C;
    case 0x7F3A5570u: goto label_7F3A5570;
    case 0x7F3A5574u: goto label_7F3A5574;
    case 0x7F3A5578u: goto label_7F3A5578;
    case 0x7F3A557Cu: goto label_7F3A557C;
    case 0x7F3A5580u: goto label_7F3A5580;
    case 0x7F3A5584u: goto label_7F3A5584;
    case 0x7F3A5588u: goto label_7F3A5588;
    case 0x7F3A558Cu: goto label_7F3A558C;
    case 0x7F3A5590u: goto label_7F3A5590;
    case 0x7F3A5594u: goto label_7F3A5594;
    case 0x7F3A5598u: goto label_7F3A5598;
    case 0x7F3A559Cu: goto label_7F3A559C;
    case 0x7F3A55A0u: goto label_7F3A55A0;
    case 0x7F3A55A4u: goto label_7F3A55A4;
    case 0x7F3A55A8u: goto label_7F3A55A8;
    case 0x7F3A55ACu: goto label_7F3A55AC;
    case 0x7F3A55B0u: goto label_7F3A55B0;
    case 0x7F3A55B4u: goto label_7F3A55B4;
    case 0x7F3A55B8u: goto label_7F3A55B8;
    case 0x7F3A55BCu: goto label_7F3A55BC;
    case 0x7F3A55C0u: goto label_7F3A55C0;
    case 0x7F3A55C4u: goto label_7F3A55C4;
    case 0x7F3A55C8u: goto label_7F3A55C8;
    case 0x7F3A55CCu: goto label_7F3A55CC;
    case 0x7F3A55D0u: goto label_7F3A55D0;
    case 0x7F3A55D4u: goto label_7F3A55D4;
    case 0x7F3A55D8u: goto label_7F3A55D8;
    case 0x7F3A55DCu: goto label_7F3A55DC;
    case 0x7F3A55E0u: goto label_7F3A55E0;
    case 0x7F3A55E4u: goto label_7F3A55E4;
    case 0x7F3A55E8u: goto label_7F3A55E8;
    case 0x7F3A55ECu: goto label_7F3A55EC;
    case 0x7F3A55F0u: goto label_7F3A55F0;
    case 0x7F3A55F4u: goto label_7F3A55F4;
    case 0x7F3A55F8u: goto label_7F3A55F8;
    case 0x7F3A55FCu: goto label_7F3A55FC;
    case 0x7F3A5600u: goto label_7F3A5600;
    case 0x7F3A5604u: goto label_7F3A5604;
    case 0x7F3A5608u: goto label_7F3A5608;
    case 0x7F3A560Cu: goto label_7F3A560C;
    case 0x7F3A5610u: goto label_7F3A5610;
    case 0x7F3A5614u: goto label_7F3A5614;
    case 0x7F3A5618u: goto label_7F3A5618;
    case 0x7F3A561Cu: goto label_7F3A561C;
    case 0x7F3A5620u: goto label_7F3A5620;
    case 0x7F3A5624u: goto label_7F3A5624;
    case 0x7F3A5628u: goto label_7F3A5628;
    case 0x7F3A562Cu: goto label_7F3A562C;
    case 0x7F3A5630u: goto label_7F3A5630;
    case 0x7F3A5634u: goto label_7F3A5634;
    case 0x7F3A5638u: goto label_7F3A5638;
    case 0x7F3A563Cu: goto label_7F3A563C;
    case 0x7F3A5640u: goto label_7F3A5640;
    case 0x7F3A5644u: goto label_7F3A5644;
    case 0x7F3A5648u: goto label_7F3A5648;
    case 0x7F3A564Cu: goto label_7F3A564C;
    case 0x7F3A5650u: goto label_7F3A5650;
    case 0x7F3A5654u: goto label_7F3A5654;
    case 0x7F3A5658u: goto label_7F3A5658;
    case 0x7F3A565Cu: goto label_7F3A565C;
    case 0x7F3A5660u: goto label_7F3A5660;
    case 0x7F3A5664u: goto label_7F3A5664;
    case 0x7F3A5668u: goto label_7F3A5668;
    case 0x7F3A566Cu: goto label_7F3A566C;
    case 0x7F3A5670u: goto label_7F3A5670;
    case 0x7F3A5674u: goto label_7F3A5674;
    case 0x7F3A5678u: goto label_7F3A5678;
    case 0x7F3A567Cu: goto label_7F3A567C;
    case 0x7F3A5680u: goto label_7F3A5680;
    case 0x7F3A5684u: goto label_7F3A5684;
    case 0x7F3A5688u: goto label_7F3A5688;
    case 0x7F3A568Cu: goto label_7F3A568C;
    case 0x7F3A5690u: goto label_7F3A5690;
    case 0x7F3A5694u: goto label_7F3A5694;
    case 0x7F3A5698u: goto label_7F3A5698;
    case 0x7F3A569Cu: goto label_7F3A569C;
    case 0x7F3A56A0u: goto label_7F3A56A0;
    case 0x7F3A56A4u: goto label_7F3A56A4;
    case 0x7F3A56A8u: goto label_7F3A56A8;
    case 0x7F3A56ACu: goto label_7F3A56AC;
    case 0x7F3A56B0u: goto label_7F3A56B0;
    case 0x7F3A56B4u: goto label_7F3A56B4;
    case 0x7F3A56B8u: goto label_7F3A56B8;
    case 0x7F3A56BCu: goto label_7F3A56BC;
    case 0x7F3A56C0u: goto label_7F3A56C0;
    case 0x7F3A56C4u: goto label_7F3A56C4;
    case 0x7F3A56C8u: goto label_7F3A56C8;
    case 0x7F3A56CCu: goto label_7F3A56CC;
    case 0x7F3A56D0u: goto label_7F3A56D0;
    case 0x7F3A56D4u: goto label_7F3A56D4;
    case 0x7F3A56D8u: goto label_7F3A56D8;
    case 0x7F3A56DCu: goto label_7F3A56DC;
    case 0x7F3A56E0u: goto label_7F3A56E0;
    case 0x7F3A56E4u: goto label_7F3A56E4;
    case 0x7F3A56E8u: goto label_7F3A56E8;
    case 0x7F3A56ECu: goto label_7F3A56EC;
    case 0x7F3A56F0u: goto label_7F3A56F0;
    case 0x7F3A56F4u: goto label_7F3A56F4;
    case 0x7F3A56F8u: goto label_7F3A56F8;
    case 0x7F3A56FCu: goto label_7F3A56FC;
    case 0x7F3A5700u: goto label_7F3A5700;
    case 0x7F3A5704u: goto label_7F3A5704;
    case 0x7F3A5708u: goto label_7F3A5708;
    case 0x7F3A570Cu: goto label_7F3A570C;
    case 0x7F3A5710u: goto label_7F3A5710;
    case 0x7F3A5714u: goto label_7F3A5714;
    case 0x7F3A5718u: goto label_7F3A5718;
    case 0x7F3A571Cu: goto label_7F3A571C;
    case 0x7F3A5720u: goto label_7F3A5720;
    case 0x7F3A5724u: goto label_7F3A5724;
    case 0x7F3A5728u: goto label_7F3A5728;
    case 0x7F3A572Cu: goto label_7F3A572C;
    case 0x7F3A5730u: goto label_7F3A5730;
    case 0x7F3A5734u: goto label_7F3A5734;
    case 0x7F3A5738u: goto label_7F3A5738;
    case 0x7F3A573Cu: goto label_7F3A573C;
    case 0x7F3A5740u: goto label_7F3A5740;
    case 0x7F3A5744u: goto label_7F3A5744;
    case 0x7F3A5748u: goto label_7F3A5748;
    case 0x7F3A574Cu: goto label_7F3A574C;
    case 0x7F3A5750u: goto label_7F3A5750;
    case 0x7F3A5754u: goto label_7F3A5754;
    case 0x7F3A5758u: goto label_7F3A5758;
    case 0x7F3A575Cu: goto label_7F3A575C;
    case 0x7F3A5760u: goto label_7F3A5760;
    case 0x7F3A5764u: goto label_7F3A5764;
    case 0x7F3A5768u: goto label_7F3A5768;
    case 0x7F3A576Cu: goto label_7F3A576C;
    case 0x7F3A5770u: goto label_7F3A5770;
    case 0x7F3A5774u: goto label_7F3A5774;
    case 0x7F3A5778u: goto label_7F3A5778;
    case 0x7F3A577Cu: goto label_7F3A577C;
    case 0x7F3A5780u: goto label_7F3A5780;
    case 0x7F3A5784u: goto label_7F3A5784;
    case 0x7F3A5788u: goto label_7F3A5788;
    case 0x7F3A578Cu: goto label_7F3A578C;
    case 0x7F3A5790u: goto label_7F3A5790;
    case 0x7F3A5794u: goto label_7F3A5794;
    case 0x7F3A5798u: goto label_7F3A5798;
    case 0x7F3A579Cu: goto label_7F3A579C;
    case 0x7F3A57A0u: goto label_7F3A57A0;
    case 0x7F3A57A4u: goto label_7F3A57A4;
    case 0x7F3A57A8u: goto label_7F3A57A8;
    case 0x7F3A57ACu: goto label_7F3A57AC;
    case 0x7F3A57B0u: goto label_7F3A57B0;
    case 0x7F3A57B4u: goto label_7F3A57B4;
    case 0x7F3A57B8u: goto label_7F3A57B8;
    case 0x7F3A57BCu: goto label_7F3A57BC;
    case 0x7F3A57C0u: goto label_7F3A57C0;
    case 0x7F3A57C4u: goto label_7F3A57C4;
    case 0x7F3A57C8u: goto label_7F3A57C8;
    case 0x7F3A57CCu: goto label_7F3A57CC;
    case 0x7F3A57D0u: goto label_7F3A57D0;
    case 0x7F3A57D4u: goto label_7F3A57D4;
    case 0x7F3A57D8u: goto label_7F3A57D8;
    case 0x7F3A57DCu: goto label_7F3A57DC;
    case 0x7F3A57E0u: goto label_7F3A57E0;
    case 0x7F3A57E4u: goto label_7F3A57E4;
    case 0x7F3A57E8u: goto label_7F3A57E8;
    case 0x7F3A57ECu: goto label_7F3A57EC;
    case 0x7F3A57F0u: goto label_7F3A57F0;
    case 0x7F3A57F4u: goto label_7F3A57F4;
    case 0x7F3A57F8u: goto label_7F3A57F8;
    case 0x7F3A57FCu: goto label_7F3A57FC;
    case 0x7F3A5800u: goto label_7F3A5800;
    case 0x7F3A5804u: goto label_7F3A5804;
    case 0x7F3A5808u: goto label_7F3A5808;
    case 0x7F3A580Cu: goto label_7F3A580C;
    case 0x7F3A5810u: goto label_7F3A5810;
    case 0x7F3A5814u: goto label_7F3A5814;
    case 0x7F3A5818u: goto label_7F3A5818;
    case 0x7F3A581Cu: goto label_7F3A581C;
    case 0x7F3A5820u: goto label_7F3A5820;
    case 0x7F3A5824u: goto label_7F3A5824;
    case 0x7F3A5828u: goto label_7F3A5828;
    case 0x7F3A582Cu: goto label_7F3A582C;
    case 0x7F3A5830u: goto label_7F3A5830;
    case 0x7F3A5834u: goto label_7F3A5834;
    case 0x7F3A5838u: goto label_7F3A5838;
    case 0x7F3A583Cu: goto label_7F3A583C;
    case 0x7F3A5840u: goto label_7F3A5840;
    case 0x7F3A5844u: goto label_7F3A5844;
    case 0x7F3A5848u: goto label_7F3A5848;
    case 0x7F3A584Cu: goto label_7F3A584C;
    case 0x7F3A5850u: goto label_7F3A5850;
    case 0x7F3A5854u: goto label_7F3A5854;
    case 0x7F3A5858u: goto label_7F3A5858;
    case 0x7F3A585Cu: goto label_7F3A585C;
    case 0x7F3A5860u: goto label_7F3A5860;
    case 0x7F3A5864u: goto label_7F3A5864;
    case 0x7F3A5868u: goto label_7F3A5868;
    case 0x7F3A586Cu: goto label_7F3A586C;
    case 0x7F3A5870u: goto label_7F3A5870;
    case 0x7F3A5874u: goto label_7F3A5874;
    case 0x7F3A5878u: goto label_7F3A5878;
    case 0x7F3A587Cu: goto label_7F3A587C;
    case 0x7F3A5880u: goto label_7F3A5880;
    case 0x7F3A5884u: goto label_7F3A5884;
    case 0x7F3A5888u: goto label_7F3A5888;
    case 0x7F3A588Cu: goto label_7F3A588C;
    case 0x7F3A5890u: goto label_7F3A5890;
    case 0x7F3A5894u: goto label_7F3A5894;
    case 0x7F3A5898u: goto label_7F3A5898;
    case 0x7F3A589Cu: goto label_7F3A589C;
    case 0x7F3A58A0u: goto label_7F3A58A0;
    case 0x7F3A58A4u: goto label_7F3A58A4;
    case 0x7F3A58A8u: goto label_7F3A58A8;
    case 0x7F3A58ACu: goto label_7F3A58AC;
    case 0x7F3A58B0u: goto label_7F3A58B0;
    case 0x7F3A58B4u: goto label_7F3A58B4;
    case 0x7F3A58B8u: goto label_7F3A58B8;
    case 0x7F3A58BCu: goto label_7F3A58BC;
    case 0x7F3A58C0u: goto label_7F3A58C0;
    case 0x7F3A58C4u: goto label_7F3A58C4;
    case 0x7F3A58C8u: goto label_7F3A58C8;
    case 0x7F3A58CCu: goto label_7F3A58CC;
    case 0x7F3A58D0u: goto label_7F3A58D0;
    case 0x7F3A58D4u: goto label_7F3A58D4;
    case 0x7F3A58D8u: goto label_7F3A58D8;
    case 0x7F3A58DCu: goto label_7F3A58DC;
    case 0x7F3A58E0u: goto label_7F3A58E0;
    case 0x7F3A58E4u: goto label_7F3A58E4;
    case 0x7F3A58E8u: goto label_7F3A58E8;
    case 0x7F3A58ECu: goto label_7F3A58EC;
    case 0x7F3A58F0u: goto label_7F3A58F0;
    case 0x7F3A58F4u: goto label_7F3A58F4;
    case 0x7F3A58F8u: goto label_7F3A58F8;
    case 0x7F3A58FCu: goto label_7F3A58FC;
    case 0x7F3A5900u: goto label_7F3A5900;
    case 0x7F3A5904u: goto label_7F3A5904;
    case 0x7F3A5908u: goto label_7F3A5908;
    case 0x7F3A590Cu: goto label_7F3A590C;
    case 0x7F3A5910u: goto label_7F3A5910;
    case 0x7F3A5914u: goto label_7F3A5914;
    case 0x7F3A5918u: goto label_7F3A5918;
    case 0x7F3A591Cu: goto label_7F3A591C;
    case 0x7F3A5920u: goto label_7F3A5920;
    case 0x7F3A5924u: goto label_7F3A5924;
    case 0x7F3A5928u: goto label_7F3A5928;
    case 0x7F3A592Cu: goto label_7F3A592C;
    case 0x7F3A5930u: goto label_7F3A5930;
    case 0x7F3A5934u: goto label_7F3A5934;
    case 0x7F3A5938u: goto label_7F3A5938;
    case 0x7F3A593Cu: goto label_7F3A593C;
    case 0x7F3A5940u: goto label_7F3A5940;
    case 0x7F3A5944u: goto label_7F3A5944;
    case 0x7F3A5948u: goto label_7F3A5948;
    case 0x7F3A594Cu: goto label_7F3A594C;
    case 0x7F3A5950u: goto label_7F3A5950;
    case 0x7F3A5954u: goto label_7F3A5954;
    case 0x7F3A5958u: goto label_7F3A5958;
    case 0x7F3A595Cu: goto label_7F3A595C;
    case 0x7F3A5960u: goto label_7F3A5960;
    case 0x7F3A5964u: goto label_7F3A5964;
    case 0x7F3A5968u: goto label_7F3A5968;
    case 0x7F3A596Cu: goto label_7F3A596C;
    case 0x7F3A5970u: goto label_7F3A5970;
    case 0x7F3A5974u: goto label_7F3A5974;
    case 0x7F3A5978u: goto label_7F3A5978;
    case 0x7F3A597Cu: goto label_7F3A597C;
    case 0x7F3A5980u: goto label_7F3A5980;
    case 0x7F3A5984u: goto label_7F3A5984;
    case 0x7F3A5988u: goto label_7F3A5988;
    case 0x7F3A598Cu: goto label_7F3A598C;
    case 0x7F3A5990u: goto label_7F3A5990;
    case 0x7F3A5994u: goto label_7F3A5994;
    case 0x7F3A5998u: goto label_7F3A5998;
    case 0x7F3A599Cu: goto label_7F3A599C;
    case 0x7F3A59A0u: goto label_7F3A59A0;
    case 0x7F3A59A4u: goto label_7F3A59A4;
    case 0x7F3A59A8u: goto label_7F3A59A8;
    case 0x7F3A59ACu: goto label_7F3A59AC;
    case 0x7F3A59B0u: goto label_7F3A59B0;
    case 0x7F3A59B4u: goto label_7F3A59B4;
    case 0x7F3A59B8u: goto label_7F3A59B8;
    case 0x7F3A59BCu: goto label_7F3A59BC;
    case 0x7F3A59C0u: goto label_7F3A59C0;
    case 0x7F3A59C4u: goto label_7F3A59C4;
    case 0x7F3A59C8u: goto label_7F3A59C8;
    case 0x7F3A59CCu: goto label_7F3A59CC;
    case 0x7F3A59D0u: goto label_7F3A59D0;
    case 0x7F3A59D4u: goto label_7F3A59D4;
    case 0x7F3A59D8u: goto label_7F3A59D8;
    case 0x7F3A59DCu: goto label_7F3A59DC;
    case 0x7F3A59E0u: goto label_7F3A59E0;
    case 0x7F3A59E4u: goto label_7F3A59E4;
    case 0x7F3A59E8u: goto label_7F3A59E8;
    case 0x7F3A59ECu: goto label_7F3A59EC;
    case 0x7F3A59F0u: goto label_7F3A59F0;
    case 0x7F3A59F4u: goto label_7F3A59F4;
    case 0x7F3A59F8u: goto label_7F3A59F8;
    case 0x7F3A59FCu: goto label_7F3A59FC;
    case 0x7F3A5A00u: goto label_7F3A5A00;
    case 0x7F3A5A04u: goto label_7F3A5A04;
    case 0x7F3A5A08u: goto label_7F3A5A08;
    case 0x7F3A5A0Cu: goto label_7F3A5A0C;
    case 0x7F3A5A10u: goto label_7F3A5A10;
    case 0x7F3A5A14u: goto label_7F3A5A14;
    case 0x7F3A5A18u: goto label_7F3A5A18;
    case 0x7F3A5A1Cu: goto label_7F3A5A1C;
    case 0x7F3A5A20u: goto label_7F3A5A20;
    case 0x7F3A5A24u: goto label_7F3A5A24;
    case 0x7F3A5A28u: goto label_7F3A5A28;
    case 0x7F3A5A2Cu: goto label_7F3A5A2C;
    case 0x7F3A5A30u: goto label_7F3A5A30;
    case 0x7F3A5A34u: goto label_7F3A5A34;
    case 0x7F3A5A38u: goto label_7F3A5A38;
    case 0x7F3A5A3Cu: goto label_7F3A5A3C;
    case 0x7F3A5A40u: goto label_7F3A5A40;
    case 0x7F3A5A44u: goto label_7F3A5A44;
    case 0x7F3A5A48u: goto label_7F3A5A48;
    case 0x7F3A5A4Cu: goto label_7F3A5A4C;
    case 0x7F3A5A50u: goto label_7F3A5A50;
    case 0x7F3A5A54u: goto label_7F3A5A54;
    case 0x7F3A5A58u: goto label_7F3A5A58;
    case 0x7F3A5A5Cu: goto label_7F3A5A5C;
    case 0x7F3A5A60u: goto label_7F3A5A60;
    case 0x7F3A5A64u: goto label_7F3A5A64;
    case 0x7F3A5A68u: goto label_7F3A5A68;
    case 0x7F3A5A6Cu: goto label_7F3A5A6C;
    case 0x7F3A5A70u: goto label_7F3A5A70;
    case 0x7F3A5A74u: goto label_7F3A5A74;
    case 0x7F3A5A78u: goto label_7F3A5A78;
    case 0x7F3A5A7Cu: goto label_7F3A5A7C;
    case 0x7F3A5A80u: goto label_7F3A5A80;
    case 0x7F3A5A84u: goto label_7F3A5A84;
    case 0x7F3A5A88u: goto label_7F3A5A88;
    case 0x7F3A5A8Cu: goto label_7F3A5A8C;
    case 0x7F3A5A90u: goto label_7F3A5A90;
    case 0x7F3A5A94u: goto label_7F3A5A94;
    case 0x7F3A5A98u: goto label_7F3A5A98;
    case 0x7F3A5A9Cu: goto label_7F3A5A9C;
    case 0x7F3A5AA0u: goto label_7F3A5AA0;
    case 0x7F3A5AA4u: goto label_7F3A5AA4;
    case 0x7F3A5AA8u: goto label_7F3A5AA8;
    case 0x7F3A5AACu: goto label_7F3A5AAC;
    case 0x7F3A5AB0u: goto label_7F3A5AB0;
    case 0x7F3A5AB4u: goto label_7F3A5AB4;
    case 0x7F3A5AB8u: goto label_7F3A5AB8;
    case 0x7F3A5ABCu: goto label_7F3A5ABC;
    case 0x7F3A5AC0u: goto label_7F3A5AC0;
    case 0x7F3A5AC4u: goto label_7F3A5AC4;
    case 0x7F3A5AC8u: goto label_7F3A5AC8;
    case 0x7F3A5ACCu: goto label_7F3A5ACC;
    case 0x7F3A5AD0u: goto label_7F3A5AD0;
    case 0x7F3A5AD4u: goto label_7F3A5AD4;
    case 0x7F3A5AD8u: goto label_7F3A5AD8;
    case 0x7F3A5ADCu: goto label_7F3A5ADC;
    case 0x7F3A5AE0u: goto label_7F3A5AE0;
    case 0x7F3A5AE4u: goto label_7F3A5AE4;
    case 0x7F3A5AE8u: goto label_7F3A5AE8;
    case 0x7F3A5AECu: goto label_7F3A5AEC;
    case 0x7F3A5AF0u: goto label_7F3A5AF0;
    case 0x7F3A5AF4u: goto label_7F3A5AF4;
    case 0x7F3A5AF8u: goto label_7F3A5AF8;
    case 0x7F3A5AFCu: goto label_7F3A5AFC;
    case 0x7F3A5B00u: goto label_7F3A5B00;
    case 0x7F3A5B04u: goto label_7F3A5B04;
    case 0x7F3A5B08u: goto label_7F3A5B08;
    case 0x7F3A5B0Cu: goto label_7F3A5B0C;
    case 0x7F3A5B10u: goto label_7F3A5B10;
    case 0x7F3A5B14u: goto label_7F3A5B14;
    case 0x7F3A5B18u: goto label_7F3A5B18;
    case 0x7F3A5B1Cu: goto label_7F3A5B1C;
    case 0x7F3A5B20u: goto label_7F3A5B20;
    case 0x7F3A5B24u: goto label_7F3A5B24;
    case 0x7F3A5B28u: goto label_7F3A5B28;
    case 0x7F3A5B2Cu: goto label_7F3A5B2C;
    case 0x7F3A5B30u: goto label_7F3A5B30;
    case 0x7F3A5B34u: goto label_7F3A5B34;
    case 0x7F3A5B38u: goto label_7F3A5B38;
    case 0x7F3A5B3Cu: goto label_7F3A5B3C;
    case 0x7F3A5B40u: goto label_7F3A5B40;
    case 0x7F3A5B44u: goto label_7F3A5B44;
    case 0x7F3A5B48u: goto label_7F3A5B48;
    case 0x7F3A5B4Cu: goto label_7F3A5B4C;
    case 0x7F3A5B50u: goto label_7F3A5B50;
    case 0x7F3A5B54u: goto label_7F3A5B54;
    case 0x7F3A5B58u: goto label_7F3A5B58;
    case 0x7F3A5B5Cu: goto label_7F3A5B5C;
    case 0x7F3A5B60u: goto label_7F3A5B60;
    case 0x7F3A5B64u: goto label_7F3A5B64;
    case 0x7F3A5B68u: goto label_7F3A5B68;
    case 0x7F3A5B6Cu: goto label_7F3A5B6C;
    case 0x7F3A5B70u: goto label_7F3A5B70;
    case 0x7F3A5B74u: goto label_7F3A5B74;
    case 0x7F3A5B78u: goto label_7F3A5B78;
    case 0x7F3A5B7Cu: goto label_7F3A5B7C;
    case 0x7F3A5B80u: goto label_7F3A5B80;
    case 0x7F3A5B84u: goto label_7F3A5B84;
    case 0x7F3A5B88u: goto label_7F3A5B88;
    case 0x7F3A5B8Cu: goto label_7F3A5B8C;
    case 0x7F3A5B90u: goto label_7F3A5B90;
    case 0x7F3A5B94u: goto label_7F3A5B94;
    case 0x7F3A5B98u: goto label_7F3A5B98;
    case 0x7F3A5B9Cu: goto label_7F3A5B9C;
    case 0x7F3A5BA0u: goto label_7F3A5BA0;
    case 0x7F3A5BA4u: goto label_7F3A5BA4;
    case 0x7F3A5BA8u: goto label_7F3A5BA8;
    case 0x7F3A5BACu: goto label_7F3A5BAC;
    case 0x7F3A5BB0u: goto label_7F3A5BB0;
    case 0x7F3A5BB4u: goto label_7F3A5BB4;
    case 0x7F3A5BB8u: goto label_7F3A5BB8;
    case 0x7F3A5BBCu: goto label_7F3A5BBC;
    case 0x7F3A5BC0u: goto label_7F3A5BC0;
    case 0x7F3A5BC4u: goto label_7F3A5BC4;
    case 0x7F3A5BC8u: goto label_7F3A5BC8;
    case 0x7F3A5BCCu: goto label_7F3A5BCC;
    case 0x7F3A5BD0u: goto label_7F3A5BD0;
    case 0x7F3A5BD4u: goto label_7F3A5BD4;
    case 0x7F3A5BD8u: goto label_7F3A5BD8;
    case 0x7F3A5BDCu: goto label_7F3A5BDC;
    case 0x7F3A5BE0u: goto label_7F3A5BE0;
    case 0x7F3A5BE4u: goto label_7F3A5BE4;
    case 0x7F3A5BE8u: goto label_7F3A5BE8;
    case 0x7F3A5BECu: goto label_7F3A5BEC;
    case 0x7F3A5BF0u: goto label_7F3A5BF0;
    case 0x7F3A5BF4u: goto label_7F3A5BF4;
    case 0x7F3A5BF8u: goto label_7F3A5BF8;
    case 0x7F3A5BFCu: goto label_7F3A5BFC;
    case 0x7F3A5C00u: goto label_7F3A5C00;
    case 0x7F3A5C04u: goto label_7F3A5C04;
    case 0x7F3A5C08u: goto label_7F3A5C08;
    case 0x7F3A5C0Cu: goto label_7F3A5C0C;
    case 0x7F3A5C10u: goto label_7F3A5C10;
    case 0x7F3A5C14u: goto label_7F3A5C14;
    case 0x7F3A5C18u: goto label_7F3A5C18;
    case 0x7F3A5C1Cu: goto label_7F3A5C1C;
    case 0x7F3A5C20u: goto label_7F3A5C20;
    case 0x7F3A5C24u: goto label_7F3A5C24;
    case 0x7F3A5C28u: goto label_7F3A5C28;
    case 0x7F3A5C2Cu: goto label_7F3A5C2C;
    case 0x7F3A5C30u: goto label_7F3A5C30;
    case 0x7F3A5C34u: goto label_7F3A5C34;
    case 0x7F3A5C38u: goto label_7F3A5C38;
    case 0x7F3A5C3Cu: goto label_7F3A5C3C;
    case 0x7F3A5C40u: goto label_7F3A5C40;
    case 0x7F3A5C44u: goto label_7F3A5C44;
    case 0x7F3A5C48u: goto label_7F3A5C48;
    case 0x7F3A5C4Cu: goto label_7F3A5C4C;
    case 0x7F3A5C50u: goto label_7F3A5C50;
    case 0x7F3A5C54u: goto label_7F3A5C54;
    case 0x7F3A5C58u: goto label_7F3A5C58;
    case 0x7F3A5C5Cu: goto label_7F3A5C5C;
    case 0x7F3A5C60u: goto label_7F3A5C60;
    case 0x7F3A5C64u: goto label_7F3A5C64;
    case 0x7F3A5C68u: goto label_7F3A5C68;
    case 0x7F3A5C6Cu: goto label_7F3A5C6C;
    case 0x7F3A5C70u: goto label_7F3A5C70;
    case 0x7F3A5C74u: goto label_7F3A5C74;
    case 0x7F3A5C78u: goto label_7F3A5C78;
    case 0x7F3A5C7Cu: goto label_7F3A5C7C;
    case 0x7F3A5C80u: goto label_7F3A5C80;
    case 0x7F3A5C84u: goto label_7F3A5C84;
    case 0x7F3A5C88u: goto label_7F3A5C88;
    case 0x7F3A5C8Cu: goto label_7F3A5C8C;
    case 0x7F3A5C90u: goto label_7F3A5C90;
    case 0x7F3A5C94u: goto label_7F3A5C94;
    case 0x7F3A5C98u: goto label_7F3A5C98;
    case 0x7F3A5C9Cu: goto label_7F3A5C9C;
    case 0x7F3A5CA0u: goto label_7F3A5CA0;
    case 0x7F3A5CA4u: goto label_7F3A5CA4;
    case 0x7F3A5CA8u: goto label_7F3A5CA8;
    case 0x7F3A5CACu: goto label_7F3A5CAC;
    case 0x7F3A5CB0u: goto label_7F3A5CB0;
    case 0x7F3A5CB4u: goto label_7F3A5CB4;
    case 0x7F3A5CB8u: goto label_7F3A5CB8;
    case 0x7F3A5CBCu: goto label_7F3A5CBC;
    case 0x7F3A5CC0u: goto label_7F3A5CC0;
    case 0x7F3A5CC4u: goto label_7F3A5CC4;
    case 0x7F3A5CC8u: goto label_7F3A5CC8;
    case 0x7F3A5CCCu: goto label_7F3A5CCC;
    case 0x7F3A5CD0u: goto label_7F3A5CD0;
    case 0x7F3A5CD4u: goto label_7F3A5CD4;
    case 0x7F3A5CD8u: goto label_7F3A5CD8;
    case 0x7F3A5CDCu: goto label_7F3A5CDC;
    case 0x7F3A5CE0u: goto label_7F3A5CE0;
    case 0x7F3A5CE4u: goto label_7F3A5CE4;
    case 0x7F3A5CE8u: goto label_7F3A5CE8;
    case 0x7F3A5CECu: goto label_7F3A5CEC;
    case 0x7F3A5CF0u: goto label_7F3A5CF0;
    case 0x7F3A5CF4u: goto label_7F3A5CF4;
    case 0x7F3A5CF8u: goto label_7F3A5CF8;
    case 0x7F3A5CFCu: goto label_7F3A5CFC;
    case 0x7F3A5D00u: goto label_7F3A5D00;
    case 0x7F3A5D04u: goto label_7F3A5D04;
    case 0x7F3A5D08u: goto label_7F3A5D08;
    case 0x7F3A5D0Cu: goto label_7F3A5D0C;
    case 0x7F3A5D10u: goto label_7F3A5D10;
    case 0x7F3A5D14u: goto label_7F3A5D14;
    case 0x7F3A5D18u: goto label_7F3A5D18;
    case 0x7F3A5D1Cu: goto label_7F3A5D1C;
    case 0x7F3A5D20u: goto label_7F3A5D20;
    case 0x7F3A5D24u: goto label_7F3A5D24;
    case 0x7F3A5D28u: goto label_7F3A5D28;
    case 0x7F3A5D2Cu: goto label_7F3A5D2C;
    case 0x7F3A5D30u: goto label_7F3A5D30;
    case 0x7F3A5D34u: goto label_7F3A5D34;
    case 0x7F3A5D38u: goto label_7F3A5D38;
    case 0x7F3A5D3Cu: goto label_7F3A5D3C;
    case 0x7F3A5D40u: goto label_7F3A5D40;
    case 0x7F3A5D44u: goto label_7F3A5D44;
    case 0x7F3A5D48u: goto label_7F3A5D48;
    case 0x7F3A5D4Cu: goto label_7F3A5D4C;
    case 0x7F3A5D50u: goto label_7F3A5D50;
    case 0x7F3A5D54u: goto label_7F3A5D54;
    case 0x7F3A5D58u: goto label_7F3A5D58;
    case 0x7F3A5D5Cu: goto label_7F3A5D5C;
    case 0x7F3A5D60u: goto label_7F3A5D60;
    case 0x7F3A5D64u: goto label_7F3A5D64;
    case 0x7F3A5D68u: goto label_7F3A5D68;
    case 0x7F3A5D6Cu: goto label_7F3A5D6C;
    case 0x7F3A5D70u: goto label_7F3A5D70;
    case 0x7F3A5D74u: goto label_7F3A5D74;
    case 0x7F3A5D78u: goto label_7F3A5D78;
    case 0x7F3A5D7Cu: goto label_7F3A5D7C;
    case 0x7F3A5D80u: goto label_7F3A5D80;
    case 0x7F3A5D84u: goto label_7F3A5D84;
    case 0x7F3A5D88u: goto label_7F3A5D88;
    case 0x7F3A5D8Cu: goto label_7F3A5D8C;
    case 0x7F3A5D90u: goto label_7F3A5D90;
    case 0x7F3A5D94u: goto label_7F3A5D94;
    case 0x7F3A5D98u: goto label_7F3A5D98;
    case 0x7F3A5D9Cu: goto label_7F3A5D9C;
    case 0x7F3A5DA0u: goto label_7F3A5DA0;
    case 0x7F3A5DA4u: goto label_7F3A5DA4;
    case 0x7F3A5DA8u: goto label_7F3A5DA8;
    case 0x7F3A5DACu: goto label_7F3A5DAC;
    case 0x7F3A5DB0u: goto label_7F3A5DB0;
    case 0x7F3A5DB4u: goto label_7F3A5DB4;
    case 0x7F3A5DB8u: goto label_7F3A5DB8;
    case 0x7F3A5DBCu: goto label_7F3A5DBC;
    case 0x7F3A5DC0u: goto label_7F3A5DC0;
    case 0x7F3A5DC4u: goto label_7F3A5DC4;
    case 0x7F3A5DC8u: goto label_7F3A5DC8;
    case 0x7F3A5DCCu: goto label_7F3A5DCC;
    case 0x7F3A5DD0u: goto label_7F3A5DD0;
    case 0x7F3A5DD4u: goto label_7F3A5DD4;
    case 0x7F3A5DD8u: goto label_7F3A5DD8;
    case 0x7F3A5DDCu: goto label_7F3A5DDC;
    case 0x7F3A5DE0u: goto label_7F3A5DE0;
    case 0x7F3A5DE4u: goto label_7F3A5DE4;
    case 0x7F3A5DE8u: goto label_7F3A5DE8;
    case 0x7F3A5DECu: goto label_7F3A5DEC;
    case 0x7F3A5DF0u: goto label_7F3A5DF0;
    case 0x7F3A5DF4u: goto label_7F3A5DF4;
    case 0x7F3A5DF8u: goto label_7F3A5DF8;
    case 0x7F3A5DFCu: goto label_7F3A5DFC;
    case 0x7F3A5E00u: goto label_7F3A5E00;
    case 0x7F3A5E04u: goto label_7F3A5E04;
    case 0x7F3A5E08u: goto label_7F3A5E08;
    case 0x7F3A5E0Cu: goto label_7F3A5E0C;
    case 0x7F3A5E10u: goto label_7F3A5E10;
    case 0x7F3A5E14u: goto label_7F3A5E14;
    case 0x7F3A5E18u: goto label_7F3A5E18;
    case 0x7F3A5E1Cu: goto label_7F3A5E1C;
    case 0x7F3A5E20u: goto label_7F3A5E20;
    case 0x7F3A5E24u: goto label_7F3A5E24;
    case 0x7F3A5E28u: goto label_7F3A5E28;
    case 0x7F3A5E2Cu: goto label_7F3A5E2C;
    case 0x7F3A5E30u: goto label_7F3A5E30;
    case 0x7F3A5E34u: goto label_7F3A5E34;
    case 0x7F3A5E38u: goto label_7F3A5E38;
    case 0x7F3A5E3Cu: goto label_7F3A5E3C;
    case 0x7F3A5E40u: goto label_7F3A5E40;
    case 0x7F3A5E44u: goto label_7F3A5E44;
    case 0x7F3A5E48u: goto label_7F3A5E48;
    case 0x7F3A5E4Cu: goto label_7F3A5E4C;
    case 0x7F3A5E50u: goto label_7F3A5E50;
    case 0x7F3A5E54u: goto label_7F3A5E54;
    case 0x7F3A5E58u: goto label_7F3A5E58;
    case 0x7F3A5E5Cu: goto label_7F3A5E5C;
    case 0x7F3A5E60u: goto label_7F3A5E60;
    case 0x7F3A5E64u: goto label_7F3A5E64;
    case 0x7F3A5E68u: goto label_7F3A5E68;
    case 0x7F3A5E6Cu: goto label_7F3A5E6C;
    case 0x7F3A5E70u: goto label_7F3A5E70;
    case 0x7F3A5E74u: goto label_7F3A5E74;
    case 0x7F3A5E78u: goto label_7F3A5E78;
    case 0x7F3A5E7Cu: goto label_7F3A5E7C;
    case 0x7F3A5E80u: goto label_7F3A5E80;
    case 0x7F3A5E84u: goto label_7F3A5E84;
    case 0x7F3A5E88u: goto label_7F3A5E88;
    case 0x7F3A5E8Cu: goto label_7F3A5E8C;
    case 0x7F3A5E90u: goto label_7F3A5E90;
    case 0x7F3A5E94u: goto label_7F3A5E94;
    case 0x7F3A5E98u: goto label_7F3A5E98;
    case 0x7F3A5E9Cu: goto label_7F3A5E9C;
    case 0x7F3A5EA0u: goto label_7F3A5EA0;
    case 0x7F3A5EA4u: goto label_7F3A5EA4;
    case 0x7F3A5EA8u: goto label_7F3A5EA8;
    case 0x7F3A5EACu: goto label_7F3A5EAC;
    case 0x7F3A5EB0u: goto label_7F3A5EB0;
    case 0x7F3A5EB4u: goto label_7F3A5EB4;
    case 0x7F3A5EB8u: goto label_7F3A5EB8;
    case 0x7F3A5EBCu: goto label_7F3A5EBC;
    case 0x7F3A5EC0u: goto label_7F3A5EC0;
    case 0x7F3A5EC4u: goto label_7F3A5EC4;
    case 0x7F3A5EC8u: goto label_7F3A5EC8;
    case 0x7F3A5ECCu: goto label_7F3A5ECC;
    case 0x7F3A5ED0u: goto label_7F3A5ED0;
    case 0x7F3A5ED4u: goto label_7F3A5ED4;
    case 0x7F3A5ED8u: goto label_7F3A5ED8;
    case 0x7F3A5EDCu: goto label_7F3A5EDC;
    case 0x7F3A5EE0u: goto label_7F3A5EE0;
    case 0x7F3A5EE4u: goto label_7F3A5EE4;
    case 0x7F3A5EE8u: goto label_7F3A5EE8;
    case 0x7F3A5EECu: goto label_7F3A5EEC;
    case 0x7F3A5EF0u: goto label_7F3A5EF0;
    case 0x7F3A5EF4u: goto label_7F3A5EF4;
    case 0x7F3A5EF8u: goto label_7F3A5EF8;
    case 0x7F3A5EFCu: goto label_7F3A5EFC;
    case 0x7F3A5F00u: goto label_7F3A5F00;
    case 0x7F3A5F04u: goto label_7F3A5F04;
    case 0x7F3A5F08u: goto label_7F3A5F08;
    case 0x7F3A5F0Cu: goto label_7F3A5F0C;
    case 0x7F3A5F10u: goto label_7F3A5F10;
    case 0x7F3A5F14u: goto label_7F3A5F14;
    case 0x7F3A5F18u: goto label_7F3A5F18;
    case 0x7F3A5F1Cu: goto label_7F3A5F1C;
    case 0x7F3A5F20u: goto label_7F3A5F20;
    case 0x7F3A5F24u: goto label_7F3A5F24;
    case 0x7F3A5F28u: goto label_7F3A5F28;
    case 0x7F3A5F2Cu: goto label_7F3A5F2C;
    case 0x7F3A5F30u: goto label_7F3A5F30;
    case 0x7F3A5F34u: goto label_7F3A5F34;
    case 0x7F3A5F38u: goto label_7F3A5F38;
    case 0x7F3A5F3Cu: goto label_7F3A5F3C;
    case 0x7F3A5F40u: goto label_7F3A5F40;
    case 0x7F3A5F44u: goto label_7F3A5F44;
    case 0x7F3A5F48u: goto label_7F3A5F48;
    case 0x7F3A5F4Cu: goto label_7F3A5F4C;
    case 0x7F3A5F50u: goto label_7F3A5F50;
    case 0x7F3A5F54u: goto label_7F3A5F54;
    case 0x7F3A5F58u: goto label_7F3A5F58;
    case 0x7F3A5F5Cu: goto label_7F3A5F5C;
    case 0x7F3A5F60u: goto label_7F3A5F60;
    case 0x7F3A5F64u: goto label_7F3A5F64;
    case 0x7F3A5F68u: goto label_7F3A5F68;
    case 0x7F3A5F6Cu: goto label_7F3A5F6C;
    case 0x7F3A5F70u: goto label_7F3A5F70;
    case 0x7F3A5F74u: goto label_7F3A5F74;
    case 0x7F3A5F78u: goto label_7F3A5F78;
    case 0x7F3A5F7Cu: goto label_7F3A5F7C;
    case 0x7F3A5F80u: goto label_7F3A5F80;
    case 0x7F3A5F84u: goto label_7F3A5F84;
    case 0x7F3A5F88u: goto label_7F3A5F88;
    case 0x7F3A5F8Cu: goto label_7F3A5F8C;
    case 0x7F3A5F90u: goto label_7F3A5F90;
    case 0x7F3A5F94u: goto label_7F3A5F94;
    case 0x7F3A5F98u: goto label_7F3A5F98;
    case 0x7F3A5F9Cu: goto label_7F3A5F9C;
    case 0x7F3A5FA0u: goto label_7F3A5FA0;
    case 0x7F3A5FA4u: goto label_7F3A5FA4;
    case 0x7F3A5FA8u: goto label_7F3A5FA8;
    case 0x7F3A5FACu: goto label_7F3A5FAC;
    case 0x7F3A5FB0u: goto label_7F3A5FB0;
    case 0x7F3A5FB4u: goto label_7F3A5FB4;
    case 0x7F3A5FB8u: goto label_7F3A5FB8;
    case 0x7F3A5FBCu: goto label_7F3A5FBC;
    case 0x7F3A5FC0u: goto label_7F3A5FC0;
    case 0x7F3A5FC4u: goto label_7F3A5FC4;
    case 0x7F3A5FC8u: goto label_7F3A5FC8;
    case 0x7F3A5FCCu: goto label_7F3A5FCC;
    case 0x7F3A5FD0u: goto label_7F3A5FD0;
    case 0x7F3A5FD4u: goto label_7F3A5FD4;
    case 0x7F3A5FD8u: goto label_7F3A5FD8;
    case 0x7F3A5FDCu: goto label_7F3A5FDC;
    case 0x7F3A5FE0u: goto label_7F3A5FE0;
    case 0x7F3A5FE4u: goto label_7F3A5FE4;
    case 0x7F3A5FE8u: goto label_7F3A5FE8;
    case 0x7F3A5FECu: goto label_7F3A5FEC;
    case 0x7F3A5FF0u: goto label_7F3A5FF0;
    case 0x7F3A5FF4u: goto label_7F3A5FF4;
    case 0x7F3A5FF8u: goto label_7F3A5FF8;
    case 0x7F3A5FFCu: goto label_7F3A5FFC;
    case 0x7F3A6000u: goto label_7F3A6000;
    case 0x7F3A6004u: goto label_7F3A6004;
    case 0x7F3A6008u: goto label_7F3A6008;
    case 0x7F3A600Cu: goto label_7F3A600C;
    case 0x7F3A6010u: goto label_7F3A6010;
    case 0x7F3A6014u: goto label_7F3A6014;
    case 0x7F3A6018u: goto label_7F3A6018;
    case 0x7F3A601Cu: goto label_7F3A601C;
    case 0x7F3A6020u: goto label_7F3A6020;
    case 0x7F3A6024u: goto label_7F3A6024;
    case 0x7F3A6028u: goto label_7F3A6028;
    case 0x7F3A602Cu: goto label_7F3A602C;
    case 0x7F3A6030u: goto label_7F3A6030;
    case 0x7F3A6034u: goto label_7F3A6034;
    case 0x7F3A6038u: goto label_7F3A6038;
    case 0x7F3A603Cu: goto label_7F3A603C;
    case 0x7F3A6040u: goto label_7F3A6040;
    case 0x7F3A6044u: goto label_7F3A6044;
    case 0x7F3A6048u: goto label_7F3A6048;
    case 0x7F3A604Cu: goto label_7F3A604C;
    case 0x7F3A6050u: goto label_7F3A6050;
    case 0x7F3A6054u: goto label_7F3A6054;
    case 0x7F3A6058u: goto label_7F3A6058;
    case 0x7F3A605Cu: goto label_7F3A605C;
    case 0x7F3A6060u: goto label_7F3A6060;
    case 0x7F3A6064u: goto label_7F3A6064;
    case 0x7F3A6068u: goto label_7F3A6068;
    case 0x7F3A606Cu: goto label_7F3A606C;
    case 0x7F3A6070u: goto label_7F3A6070;
    case 0x7F3A6074u: goto label_7F3A6074;
    case 0x7F3A6078u: goto label_7F3A6078;
    case 0x7F3A607Cu: goto label_7F3A607C;
    case 0x7F3A6080u: goto label_7F3A6080;
    case 0x7F3A6084u: goto label_7F3A6084;
    case 0x7F3A6088u: goto label_7F3A6088;
    case 0x7F3A608Cu: goto label_7F3A608C;
    case 0x7F3A6090u: goto label_7F3A6090;
    case 0x7F3A6094u: goto label_7F3A6094;
    case 0x7F3A6098u: goto label_7F3A6098;
    case 0x7F3A609Cu: goto label_7F3A609C;
    case 0x7F3A60A0u: goto label_7F3A60A0;
    case 0x7F3A60A4u: goto label_7F3A60A4;
    case 0x7F3A60A8u: goto label_7F3A60A8;
    case 0x7F3A60ACu: goto label_7F3A60AC;
    case 0x7F3A60B0u: goto label_7F3A60B0;
    case 0x7F3A60B4u: goto label_7F3A60B4;
    case 0x7F3A60B8u: goto label_7F3A60B8;
    case 0x7F3A60BCu: goto label_7F3A60BC;
    case 0x7F3A60C0u: goto label_7F3A60C0;
    case 0x7F3A60C4u: goto label_7F3A60C4;
    case 0x7F3A60C8u: goto label_7F3A60C8;
    case 0x7F3A60CCu: goto label_7F3A60CC;
    case 0x7F3A60D0u: goto label_7F3A60D0;
    case 0x7F3A60D4u: goto label_7F3A60D4;
    case 0x7F3A60D8u: goto label_7F3A60D8;
    case 0x7F3A60DCu: goto label_7F3A60DC;
    case 0x7F3A60E0u: goto label_7F3A60E0;
    case 0x7F3A60E4u: goto label_7F3A60E4;
    case 0x7F3A60E8u: goto label_7F3A60E8;
    case 0x7F3A60ECu: goto label_7F3A60EC;
    case 0x7F3A60F0u: goto label_7F3A60F0;
    case 0x7F3A60F4u: goto label_7F3A60F4;
    case 0x7F3A60F8u: goto label_7F3A60F8;
    case 0x7F3A60FCu: goto label_7F3A60FC;
    case 0x7F3A6100u: goto label_7F3A6100;
    case 0x7F3A6104u: goto label_7F3A6104;
    case 0x7F3A6108u: goto label_7F3A6108;
    case 0x7F3A610Cu: goto label_7F3A610C;
    case 0x7F3A6110u: goto label_7F3A6110;
    case 0x7F3A6114u: goto label_7F3A6114;
    case 0x7F3A6118u: goto label_7F3A6118;
    case 0x7F3A611Cu: goto label_7F3A611C;
    case 0x7F3A6120u: goto label_7F3A6120;
    case 0x7F3A6124u: goto label_7F3A6124;
    case 0x7F3A6128u: goto label_7F3A6128;
    case 0x7F3A612Cu: goto label_7F3A612C;
    case 0x7F3A6130u: goto label_7F3A6130;
    case 0x7F3A6134u: goto label_7F3A6134;
    case 0x7F3A6138u: goto label_7F3A6138;
    case 0x7F3A613Cu: goto label_7F3A613C;
    case 0x7F3A6140u: goto label_7F3A6140;
    case 0x7F3A6144u: goto label_7F3A6144;
    case 0x7F3A6148u: goto label_7F3A6148;
    case 0x7F3A614Cu: goto label_7F3A614C;
    case 0x7F3A6150u: goto label_7F3A6150;
    case 0x7F3A6154u: goto label_7F3A6154;
    case 0x7F3A6158u: goto label_7F3A6158;
    case 0x7F3A615Cu: goto label_7F3A615C;
    case 0x7F3A6160u: goto label_7F3A6160;
    case 0x7F3A6164u: goto label_7F3A6164;
    case 0x7F3A6168u: goto label_7F3A6168;
    case 0x7F3A616Cu: goto label_7F3A616C;
    case 0x7F3A6170u: goto label_7F3A6170;
    case 0x7F3A6174u: goto label_7F3A6174;
    case 0x7F3A6178u: goto label_7F3A6178;
    case 0x7F3A617Cu: goto label_7F3A617C;
    case 0x7F3A6180u: goto label_7F3A6180;
    case 0x7F3A6184u: goto label_7F3A6184;
    case 0x7F3A6188u: goto label_7F3A6188;
    case 0x7F3A618Cu: goto label_7F3A618C;
    case 0x7F3A6190u: goto label_7F3A6190;
    case 0x7F3A6194u: goto label_7F3A6194;
    case 0x7F3A6198u: goto label_7F3A6198;
    case 0x7F3A619Cu: goto label_7F3A619C;
    case 0x7F3A61A0u: goto label_7F3A61A0;
    case 0x7F3A61A4u: goto label_7F3A61A4;
    case 0x7F3A61A8u: goto label_7F3A61A8;
    case 0x7F3A61ACu: goto label_7F3A61AC;
    case 0x7F3A61B0u: goto label_7F3A61B0;
    case 0x7F3A61B4u: goto label_7F3A61B4;
    case 0x7F3A61B8u: goto label_7F3A61B8;
    case 0x7F3A61BCu: goto label_7F3A61BC;
    case 0x7F3A61C0u: goto label_7F3A61C0;
    case 0x7F3A61C4u: goto label_7F3A61C4;
    case 0x7F3A61C8u: goto label_7F3A61C8;
    case 0x7F3A61CCu: goto label_7F3A61CC;
    case 0x7F3A61D0u: goto label_7F3A61D0;
    case 0x7F3A61D4u: goto label_7F3A61D4;
    case 0x7F3A61D8u: goto label_7F3A61D8;
    case 0x7F3A61DCu: goto label_7F3A61DC;
    case 0x7F3A61E0u: goto label_7F3A61E0;
    case 0x7F3A61E4u: goto label_7F3A61E4;
    case 0x7F3A61E8u: goto label_7F3A61E8;
    case 0x7F3A61ECu: goto label_7F3A61EC;
    case 0x7F3A61F0u: goto label_7F3A61F0;
    case 0x7F3A61F4u: goto label_7F3A61F4;
    case 0x7F3A61F8u: goto label_7F3A61F8;
    case 0x7F3A61FCu: goto label_7F3A61FC;
    case 0x7F3A6200u: goto label_7F3A6200;
    case 0x7F3A6204u: goto label_7F3A6204;
    case 0x7F3A6208u: goto label_7F3A6208;
    case 0x7F3A620Cu: goto label_7F3A620C;
    case 0x7F3A6210u: goto label_7F3A6210;
    case 0x7F3A6214u: goto label_7F3A6214;
    case 0x7F3A6218u: goto label_7F3A6218;
    case 0x7F3A621Cu: goto label_7F3A621C;
    case 0x7F3A6220u: goto label_7F3A6220;
    case 0x7F3A6224u: goto label_7F3A6224;
    case 0x7F3A6228u: goto label_7F3A6228;
    case 0x7F3A622Cu: goto label_7F3A622C;
    case 0x7F3A6230u: goto label_7F3A6230;
    case 0x7F3A6234u: goto label_7F3A6234;
    case 0x7F3A6238u: goto label_7F3A6238;
    case 0x7F3A623Cu: goto label_7F3A623C;
    case 0x7F3A6240u: goto label_7F3A6240;
    case 0x7F3A6244u: goto label_7F3A6244;
    case 0x7F3A6248u: goto label_7F3A6248;
    case 0x7F3A624Cu: goto label_7F3A624C;
    case 0x7F3A6250u: goto label_7F3A6250;
    case 0x7F3A6254u: goto label_7F3A6254;
    case 0x7F3A6258u: goto label_7F3A6258;
    case 0x7F3A625Cu: goto label_7F3A625C;
    case 0x7F3A6260u: goto label_7F3A6260;
    case 0x7F3A6264u: goto label_7F3A6264;
    case 0x7F3A6268u: goto label_7F3A6268;
    case 0x7F3A626Cu: goto label_7F3A626C;
    case 0x7F3A6270u: goto label_7F3A6270;
    case 0x7F3A6274u: goto label_7F3A6274;
    case 0x7F3A6278u: goto label_7F3A6278;
    case 0x7F3A627Cu: goto label_7F3A627C;
    case 0x7F3A6280u: goto label_7F3A6280;
    case 0x7F3A6284u: goto label_7F3A6284;
    case 0x7F3A6288u: goto label_7F3A6288;
    case 0x7F3A628Cu: goto label_7F3A628C;
    case 0x7F3A6290u: goto label_7F3A6290;
    case 0x7F3A6294u: goto label_7F3A6294;
    case 0x7F3A6298u: goto label_7F3A6298;
    case 0x7F3A629Cu: goto label_7F3A629C;
    case 0x7F3A62A0u: goto label_7F3A62A0;
    case 0x7F3A62A4u: goto label_7F3A62A4;
    case 0x7F3A62A8u: goto label_7F3A62A8;
    case 0x7F3A62ACu: goto label_7F3A62AC;
    case 0x7F3A62B0u: goto label_7F3A62B0;
    case 0x7F3A62B4u: goto label_7F3A62B4;
    case 0x7F3A62B8u: goto label_7F3A62B8;
    case 0x7F3A62BCu: goto label_7F3A62BC;
    case 0x7F3A62C0u: goto label_7F3A62C0;
    case 0x7F3A62C4u: goto label_7F3A62C4;
    case 0x7F3A62C8u: goto label_7F3A62C8;
    case 0x7F3A62CCu: goto label_7F3A62CC;
    case 0x7F3A62D0u: goto label_7F3A62D0;
    case 0x7F3A62D4u: goto label_7F3A62D4;
    case 0x7F3A62D8u: goto label_7F3A62D8;
    case 0x7F3A62DCu: goto label_7F3A62DC;
    case 0x7F3A62E0u: goto label_7F3A62E0;
    case 0x7F3A62E4u: goto label_7F3A62E4;
    case 0x7F3A62E8u: goto label_7F3A62E8;
    case 0x7F3A62ECu: goto label_7F3A62EC;
    case 0x7F3A62F0u: goto label_7F3A62F0;
    case 0x7F3A62F4u: goto label_7F3A62F4;
    case 0x7F3A62F8u: goto label_7F3A62F8;
    case 0x7F3A62FCu: goto label_7F3A62FC;
    case 0x7F3A6300u: goto label_7F3A6300;
    case 0x7F3A6304u: goto label_7F3A6304;
    case 0x7F3A6308u: goto label_7F3A6308;
    case 0x7F3A630Cu: goto label_7F3A630C;
    case 0x7F3A6310u: goto label_7F3A6310;
    case 0x7F3A6314u: goto label_7F3A6314;
    case 0x7F3A6318u: goto label_7F3A6318;
    case 0x7F3A631Cu: goto label_7F3A631C;
    case 0x7F3A6320u: goto label_7F3A6320;
    case 0x7F3A6324u: goto label_7F3A6324;
    case 0x7F3A6328u: goto label_7F3A6328;
    case 0x7F3A632Cu: goto label_7F3A632C;
    case 0x7F3A6330u: goto label_7F3A6330;
    case 0x7F3A6334u: goto label_7F3A6334;
    case 0x7F3A6338u: goto label_7F3A6338;
    case 0x7F3A633Cu: goto label_7F3A633C;
    case 0x7F3A6340u: goto label_7F3A6340;
    case 0x7F3A6344u: goto label_7F3A6344;
    case 0x7F3A6348u: goto label_7F3A6348;
    case 0x7F3A634Cu: goto label_7F3A634C;
    case 0x7F3A6350u: goto label_7F3A6350;
    case 0x7F3A6354u: goto label_7F3A6354;
    case 0x7F3A6358u: goto label_7F3A6358;
    case 0x7F3A635Cu: goto label_7F3A635C;
    case 0x7F3A6360u: goto label_7F3A6360;
    case 0x7F3A6364u: goto label_7F3A6364;
    case 0x7F3A6368u: goto label_7F3A6368;
    case 0x7F3A636Cu: goto label_7F3A636C;
    case 0x7F3A6370u: goto label_7F3A6370;
    case 0x7F3A6374u: goto label_7F3A6374;
    case 0x7F3A6378u: goto label_7F3A6378;
    case 0x7F3A637Cu: goto label_7F3A637C;
    case 0x7F3A6380u: goto label_7F3A6380;
    case 0x7F3A6384u: goto label_7F3A6384;
    case 0x7F3A6388u: goto label_7F3A6388;
    case 0x7F3A638Cu: goto label_7F3A638C;
    case 0x7F3A6390u: goto label_7F3A6390;
    case 0x7F3A6394u: goto label_7F3A6394;
    case 0x7F3A6398u: goto label_7F3A6398;
    case 0x7F3A639Cu: goto label_7F3A639C;
    case 0x7F3A63A0u: goto label_7F3A63A0;
    case 0x7F3A63A4u: goto label_7F3A63A4;
    case 0x7F3A63A8u: goto label_7F3A63A8;
    case 0x7F3A63ACu: goto label_7F3A63AC;
    case 0x7F3A63B0u: goto label_7F3A63B0;
    case 0x7F3A63B4u: goto label_7F3A63B4;
    case 0x7F3A63B8u: goto label_7F3A63B8;
    case 0x7F3A63BCu: goto label_7F3A63BC;
    case 0x7F3A63C0u: goto label_7F3A63C0;
    case 0x7F3A63C4u: goto label_7F3A63C4;
    case 0x7F3A63C8u: goto label_7F3A63C8;
    case 0x7F3A63CCu: goto label_7F3A63CC;
    case 0x7F3A63D0u: goto label_7F3A63D0;
    case 0x7F3A63D4u: goto label_7F3A63D4;
    case 0x7F3A63D8u: goto label_7F3A63D8;
    case 0x7F3A63DCu: goto label_7F3A63DC;
    case 0x7F3A63E0u: goto label_7F3A63E0;
    case 0x7F3A63E4u: goto label_7F3A63E4;
    case 0x7F3A63E8u: goto label_7F3A63E8;
    case 0x7F3A63ECu: goto label_7F3A63EC;
    case 0x7F3A63F0u: goto label_7F3A63F0;
    case 0x7F3A63F4u: goto label_7F3A63F4;
    case 0x7F3A63F8u: goto label_7F3A63F8;
    case 0x7F3A63FCu: goto label_7F3A63FC;
    case 0x7F3A6400u: goto label_7F3A6400;
    case 0x7F3A6404u: goto label_7F3A6404;
    case 0x7F3A6408u: goto label_7F3A6408;
    case 0x7F3A640Cu: goto label_7F3A640C;
    case 0x7F3A6410u: goto label_7F3A6410;
    case 0x7F3A6414u: goto label_7F3A6414;
    case 0x7F3A6418u: goto label_7F3A6418;
    case 0x7F3A641Cu: goto label_7F3A641C;
    case 0x7F3A6420u: goto label_7F3A6420;
    case 0x7F3A6424u: goto label_7F3A6424;
    case 0x7F3A6428u: goto label_7F3A6428;
    case 0x7F3A642Cu: goto label_7F3A642C;
    case 0x7F3A6430u: goto label_7F3A6430;
    case 0x7F3A6434u: goto label_7F3A6434;
    case 0x7F3A6438u: goto label_7F3A6438;
    case 0x7F3A643Cu: goto label_7F3A643C;
    case 0x7F3A6440u: goto label_7F3A6440;
    case 0x7F3A6444u: goto label_7F3A6444;
    case 0x7F3A6448u: goto label_7F3A6448;
    case 0x7F3A644Cu: goto label_7F3A644C;
    case 0x7F3A6450u: goto label_7F3A6450;
    case 0x7F3A6454u: goto label_7F3A6454;
    case 0x7F3A6458u: goto label_7F3A6458;
    case 0x7F3A645Cu: goto label_7F3A645C;
    case 0x7F3A6460u: goto label_7F3A6460;
    case 0x7F3A6464u: goto label_7F3A6464;
    case 0x7F3A6468u: goto label_7F3A6468;
    case 0x7F3A646Cu: goto label_7F3A646C;
    case 0x7F3A6470u: goto label_7F3A6470;
    case 0x7F3A6474u: goto label_7F3A6474;
    case 0x7F3A6478u: goto label_7F3A6478;
    case 0x7F3A647Cu: goto label_7F3A647C;
    case 0x7F3A6480u: goto label_7F3A6480;
    case 0x7F3A6484u: goto label_7F3A6484;
    case 0x7F3A6488u: goto label_7F3A6488;
    case 0x7F3A648Cu: goto label_7F3A648C;
    case 0x7F3A6490u: goto label_7F3A6490;
    case 0x7F3A6494u: goto label_7F3A6494;
    case 0x7F3A6498u: goto label_7F3A6498;
    case 0x7F3A649Cu: goto label_7F3A649C;
    case 0x7F3A64A0u: goto label_7F3A64A0;
    case 0x7F3A64A4u: goto label_7F3A64A4;
    case 0x7F3A64A8u: goto label_7F3A64A8;
    case 0x7F3A64ACu: goto label_7F3A64AC;
    case 0x7F3A64B0u: goto label_7F3A64B0;
    case 0x7F3A64B4u: goto label_7F3A64B4;
    case 0x7F3A64B8u: goto label_7F3A64B8;
    case 0x7F3A64BCu: goto label_7F3A64BC;
    case 0x7F3A64C0u: goto label_7F3A64C0;
    case 0x7F3A64C4u: goto label_7F3A64C4;
    case 0x7F3A64C8u: goto label_7F3A64C8;
    case 0x7F3A64CCu: goto label_7F3A64CC;
    case 0x7F3A64D0u: goto label_7F3A64D0;
    case 0x7F3A64D4u: goto label_7F3A64D4;
    case 0x7F3A64D8u: goto label_7F3A64D8;
    case 0x7F3A64DCu: goto label_7F3A64DC;
    case 0x7F3A64E0u: goto label_7F3A64E0;
    case 0x7F3A64E4u: goto label_7F3A64E4;
    case 0x7F3A64E8u: goto label_7F3A64E8;
    case 0x7F3A64ECu: goto label_7F3A64EC;
    case 0x7F3A64F0u: goto label_7F3A64F0;
    case 0x7F3A64F4u: goto label_7F3A64F4;
    case 0x7F3A64F8u: goto label_7F3A64F8;
    case 0x7F3A64FCu: goto label_7F3A64FC;
    case 0x7F3A6500u: goto label_7F3A6500;
    case 0x7F3A6504u: goto label_7F3A6504;
    case 0x7F3A6508u: goto label_7F3A6508;
    case 0x7F3A650Cu: goto label_7F3A650C;
    case 0x7F3A6510u: goto label_7F3A6510;
    case 0x7F3A6514u: goto label_7F3A6514;
    case 0x7F3A6518u: goto label_7F3A6518;
    case 0x7F3A651Cu: goto label_7F3A651C;
    case 0x7F3A6520u: goto label_7F3A6520;
    case 0x7F3A6524u: goto label_7F3A6524;
    case 0x7F3A6528u: goto label_7F3A6528;
    case 0x7F3A652Cu: goto label_7F3A652C;
    case 0x7F3A6530u: goto label_7F3A6530;
    case 0x7F3A6534u: goto label_7F3A6534;
    case 0x7F3A6538u: goto label_7F3A6538;
    case 0x7F3A653Cu: goto label_7F3A653C;
    case 0x7F3A6540u: goto label_7F3A6540;
    case 0x7F3A6544u: goto label_7F3A6544;
    case 0x7F3A6548u: goto label_7F3A6548;
    case 0x7F3A654Cu: goto label_7F3A654C;
    case 0x7F3A6550u: goto label_7F3A6550;
    case 0x7F3A6554u: goto label_7F3A6554;
    case 0x7F3A6558u: goto label_7F3A6558;
    case 0x7F3A655Cu: goto label_7F3A655C;
    case 0x7F3A6560u: goto label_7F3A6560;
    case 0x7F3A6564u: goto label_7F3A6564;
    case 0x7F3A6568u: goto label_7F3A6568;
    case 0x7F3A656Cu: goto label_7F3A656C;
    case 0x7F3A6570u: goto label_7F3A6570;
    case 0x7F3A6574u: goto label_7F3A6574;
    case 0x7F3A6578u: goto label_7F3A6578;
    case 0x7F3A657Cu: goto label_7F3A657C;
    case 0x7F3A6580u: goto label_7F3A6580;
    case 0x7F3A6584u: goto label_7F3A6584;
    case 0x7F3A6588u: goto label_7F3A6588;
    case 0x7F3A658Cu: goto label_7F3A658C;
    case 0x7F3A6590u: goto label_7F3A6590;
    case 0x7F3A6594u: goto label_7F3A6594;
    case 0x7F3A6598u: goto label_7F3A6598;
    case 0x7F3A659Cu: goto label_7F3A659C;
    case 0x7F3A65A0u: goto label_7F3A65A0;
    case 0x7F3A65A4u: goto label_7F3A65A4;
    case 0x7F3A65A8u: goto label_7F3A65A8;
    case 0x7F3A65ACu: goto label_7F3A65AC;
    case 0x7F3A65B0u: goto label_7F3A65B0;
    case 0x7F3A65B4u: goto label_7F3A65B4;
    case 0x7F3A65B8u: goto label_7F3A65B8;
    case 0x7F3A65BCu: goto label_7F3A65BC;
    case 0x7F3A65C0u: goto label_7F3A65C0;
    case 0x7F3A65C4u: goto label_7F3A65C4;
    case 0x7F3A65C8u: goto label_7F3A65C8;
    case 0x7F3A65CCu: goto label_7F3A65CC;
    case 0x7F3A65D0u: goto label_7F3A65D0;
    case 0x7F3A65D4u: goto label_7F3A65D4;
    case 0x7F3A65D8u: goto label_7F3A65D8;
    case 0x7F3A65DCu: goto label_7F3A65DC;
    case 0x7F3A65E0u: goto label_7F3A65E0;
    case 0x7F3A65E4u: goto label_7F3A65E4;
    case 0x7F3A65E8u: goto label_7F3A65E8;
    case 0x7F3A65ECu: goto label_7F3A65EC;
    case 0x7F3A65F0u: goto label_7F3A65F0;
    case 0x7F3A65F4u: goto label_7F3A65F4;
    case 0x7F3A65F8u: goto label_7F3A65F8;
    case 0x7F3A65FCu: goto label_7F3A65FC;
    case 0x7F3A6600u: goto label_7F3A6600;
    case 0x7F3A6604u: goto label_7F3A6604;
    case 0x7F3A6608u: goto label_7F3A6608;
    case 0x7F3A660Cu: goto label_7F3A660C;
    case 0x7F3A6610u: goto label_7F3A6610;
    case 0x7F3A6614u: goto label_7F3A6614;
    case 0x7F3A6618u: goto label_7F3A6618;
    case 0x7F3A661Cu: goto label_7F3A661C;
    case 0x7F3A6620u: goto label_7F3A6620;
    case 0x7F3A6624u: goto label_7F3A6624;
    case 0x7F3A6628u: goto label_7F3A6628;
    case 0x7F3A662Cu: goto label_7F3A662C;
    case 0x7F3A6630u: goto label_7F3A6630;
    case 0x7F3A6634u: goto label_7F3A6634;
    case 0x7F3A6638u: goto label_7F3A6638;
    case 0x7F3A663Cu: goto label_7F3A663C;
    case 0x7F3A6640u: goto label_7F3A6640;
    case 0x7F3A6644u: goto label_7F3A6644;
    case 0x7F3A6648u: goto label_7F3A6648;
    case 0x7F3A664Cu: goto label_7F3A664C;
    case 0x7F3A6650u: goto label_7F3A6650;
    case 0x7F3A6654u: goto label_7F3A6654;
    case 0x7F3A6658u: goto label_7F3A6658;
    case 0x7F3A665Cu: goto label_7F3A665C;
    case 0x7F3A6660u: goto label_7F3A6660;
    case 0x7F3A6664u: goto label_7F3A6664;
    case 0x7F3A6668u: goto label_7F3A6668;
    case 0x7F3A666Cu: goto label_7F3A666C;
    case 0x7F3A6670u: goto label_7F3A6670;
    case 0x7F3A6674u: goto label_7F3A6674;
    case 0x7F3A6678u: goto label_7F3A6678;
    case 0x7F3A667Cu: goto label_7F3A667C;
    case 0x7F3A6680u: goto label_7F3A6680;
    case 0x7F3A6684u: goto label_7F3A6684;
    case 0x7F3A6688u: goto label_7F3A6688;
    case 0x7F3A668Cu: goto label_7F3A668C;
    case 0x7F3A6690u: goto label_7F3A6690;
    case 0x7F3A6694u: goto label_7F3A6694;
    case 0x7F3A6698u: goto label_7F3A6698;
    case 0x7F3A669Cu: goto label_7F3A669C;
    case 0x7F3A66A0u: goto label_7F3A66A0;
    case 0x7F3A66A4u: goto label_7F3A66A4;
    case 0x7F3A66A8u: goto label_7F3A66A8;
    case 0x7F3A66ACu: goto label_7F3A66AC;
    case 0x7F3A66B0u: goto label_7F3A66B0;
    case 0x7F3A66B4u: goto label_7F3A66B4;
    case 0x7F3A66B8u: goto label_7F3A66B8;
    case 0x7F3A66BCu: goto label_7F3A66BC;
    case 0x7F3A66C0u: goto label_7F3A66C0;
    case 0x7F3A66C4u: goto label_7F3A66C4;
    case 0x7F3A66C8u: goto label_7F3A66C8;
    case 0x7F3A66CCu: goto label_7F3A66CC;
    case 0x7F3A66D0u: goto label_7F3A66D0;
    case 0x7F3A66D4u: goto label_7F3A66D4;
    case 0x7F3A66D8u: goto label_7F3A66D8;
    case 0x7F3A66DCu: goto label_7F3A66DC;
    case 0x7F3A66E0u: goto label_7F3A66E0;
    case 0x7F3A66E4u: goto label_7F3A66E4;
    case 0x7F3A66E8u: goto label_7F3A66E8;
    case 0x7F3A66ECu: goto label_7F3A66EC;
    case 0x7F3A66F0u: goto label_7F3A66F0;
    case 0x7F3A66F4u: goto label_7F3A66F4;
    case 0x7F3A66F8u: goto label_7F3A66F8;
    case 0x7F3A66FCu: goto label_7F3A66FC;
    case 0x7F3A6700u: goto label_7F3A6700;
    case 0x7F3A6704u: goto label_7F3A6704;
    case 0x7F3A6708u: goto label_7F3A6708;
    case 0x7F3A670Cu: goto label_7F3A670C;
    case 0x7F3A6710u: goto label_7F3A6710;
    case 0x7F3A6714u: goto label_7F3A6714;
    case 0x7F3A6718u: goto label_7F3A6718;
    case 0x7F3A671Cu: goto label_7F3A671C;
    case 0x7F3A6720u: goto label_7F3A6720;
    case 0x7F3A6724u: goto label_7F3A6724;
    case 0x7F3A6728u: goto label_7F3A6728;
    case 0x7F3A672Cu: goto label_7F3A672C;
    case 0x7F3A6730u: goto label_7F3A6730;
    case 0x7F3A6734u: goto label_7F3A6734;
    case 0x7F3A6738u: goto label_7F3A6738;
    case 0x7F3A673Cu: goto label_7F3A673C;
    case 0x7F3A6740u: goto label_7F3A6740;
    case 0x7F3A6744u: goto label_7F3A6744;
    case 0x7F3A6748u: goto label_7F3A6748;
    case 0x7F3A674Cu: goto label_7F3A674C;
    case 0x7F3A6750u: goto label_7F3A6750;
    case 0x7F3A6754u: goto label_7F3A6754;
    case 0x7F3A6758u: goto label_7F3A6758;
    case 0x7F3A675Cu: goto label_7F3A675C;
    case 0x7F3A6760u: goto label_7F3A6760;
    case 0x7F3A6764u: goto label_7F3A6764;
    case 0x7F3A6768u: goto label_7F3A6768;
    case 0x7F3A676Cu: goto label_7F3A676C;
    case 0x7F3A6770u: goto label_7F3A6770;
    case 0x7F3A6774u: goto label_7F3A6774;
    case 0x7F3A6778u: goto label_7F3A6778;
    case 0x7F3A677Cu: goto label_7F3A677C;
    case 0x7F3A6780u: goto label_7F3A6780;
    case 0x7F3A6784u: goto label_7F3A6784;
    case 0x7F3A6788u: goto label_7F3A6788;
    case 0x7F3A678Cu: goto label_7F3A678C;
    case 0x7F3A6790u: goto label_7F3A6790;
    case 0x7F3A6794u: goto label_7F3A6794;
    case 0x7F3A6798u: goto label_7F3A6798;
    case 0x7F3A679Cu: goto label_7F3A679C;
    case 0x7F3A67A0u: goto label_7F3A67A0;
    case 0x7F3A67A4u: goto label_7F3A67A4;
    case 0x7F3A67A8u: goto label_7F3A67A8;
    case 0x7F3A67ACu: goto label_7F3A67AC;
    case 0x7F3A67B0u: goto label_7F3A67B0;
    case 0x7F3A67B4u: goto label_7F3A67B4;
    case 0x7F3A67B8u: goto label_7F3A67B8;
    case 0x7F3A67BCu: goto label_7F3A67BC;
    case 0x7F3A67C0u: goto label_7F3A67C0;
    case 0x7F3A67C4u: goto label_7F3A67C4;
    case 0x7F3A67C8u: goto label_7F3A67C8;
    case 0x7F3A67CCu: goto label_7F3A67CC;
    case 0x7F3A67D0u: goto label_7F3A67D0;
    case 0x7F3A67D4u: goto label_7F3A67D4;
    case 0x7F3A67D8u: goto label_7F3A67D8;
    case 0x7F3A67DCu: goto label_7F3A67DC;
    case 0x7F3A67E0u: goto label_7F3A67E0;
    case 0x7F3A67E4u: goto label_7F3A67E4;
    case 0x7F3A67E8u: goto label_7F3A67E8;
    case 0x7F3A67ECu: goto label_7F3A67EC;
    case 0x7F3A67F0u: goto label_7F3A67F0;
    case 0x7F3A67F4u: goto label_7F3A67F4;
    case 0x7F3A67F8u: goto label_7F3A67F8;
    case 0x7F3A67FCu: goto label_7F3A67FC;
    case 0x7F3A6800u: goto label_7F3A6800;
    case 0x7F3A6804u: goto label_7F3A6804;
    case 0x7F3A6808u: goto label_7F3A6808;
    case 0x7F3A680Cu: goto label_7F3A680C;
    case 0x7F3A6810u: goto label_7F3A6810;
    case 0x7F3A6814u: goto label_7F3A6814;
    case 0x7F3A6818u: goto label_7F3A6818;
    case 0x7F3A681Cu: goto label_7F3A681C;
    case 0x7F3A6820u: goto label_7F3A6820;
    case 0x7F3A6824u: goto label_7F3A6824;
    case 0x7F3A6828u: goto label_7F3A6828;
    case 0x7F3A682Cu: goto label_7F3A682C;
    case 0x7F3A6830u: goto label_7F3A6830;
    case 0x7F3A6834u: goto label_7F3A6834;
    case 0x7F3A6838u: goto label_7F3A6838;
    case 0x7F3A683Cu: goto label_7F3A683C;
    case 0x7F3A6840u: goto label_7F3A6840;
    case 0x7F3A6844u: goto label_7F3A6844;
    case 0x7F3A6848u: goto label_7F3A6848;
    case 0x7F3A684Cu: goto label_7F3A684C;
    case 0x7F3A6850u: goto label_7F3A6850;
    case 0x7F3A6854u: goto label_7F3A6854;
    case 0x7F3A6858u: goto label_7F3A6858;
    case 0x7F3A685Cu: goto label_7F3A685C;
    case 0x7F3A6860u: goto label_7F3A6860;
    case 0x7F3A6864u: goto label_7F3A6864;
    case 0x7F3A6868u: goto label_7F3A6868;
    case 0x7F3A686Cu: goto label_7F3A686C;
    case 0x7F3A6870u: goto label_7F3A6870;
    case 0x7F3A6874u: goto label_7F3A6874;
    case 0x7F3A6878u: goto label_7F3A6878;
    case 0x7F3A687Cu: goto label_7F3A687C;
    case 0x7F3A6880u: goto label_7F3A6880;
    case 0x7F3A6884u: goto label_7F3A6884;
    case 0x7F3A6888u: goto label_7F3A6888;
    case 0x7F3A688Cu: goto label_7F3A688C;
    case 0x7F3A6890u: goto label_7F3A6890;
    case 0x7F3A6894u: goto label_7F3A6894;
    case 0x7F3A6898u: goto label_7F3A6898;
    case 0x7F3A689Cu: goto label_7F3A689C;
    case 0x7F3A68A0u: goto label_7F3A68A0;
    case 0x7F3A68A4u: goto label_7F3A68A4;
    case 0x7F3A68A8u: goto label_7F3A68A8;
    case 0x7F3A68ACu: goto label_7F3A68AC;
    case 0x7F3A68B0u: goto label_7F3A68B0;
    case 0x7F3A68B4u: goto label_7F3A68B4;
    case 0x7F3A68B8u: goto label_7F3A68B8;
    case 0x7F3A68BCu: goto label_7F3A68BC;
    case 0x7F3A68C0u: goto label_7F3A68C0;
    case 0x7F3A68C4u: goto label_7F3A68C4;
    case 0x7F3A68C8u: goto label_7F3A68C8;
    case 0x7F3A68CCu: goto label_7F3A68CC;
    case 0x7F3A68D0u: goto label_7F3A68D0;
    case 0x7F3A68D4u: goto label_7F3A68D4;
    case 0x7F3A68D8u: goto label_7F3A68D8;
    case 0x7F3A68DCu: goto label_7F3A68DC;
    case 0x7F3A68E0u: goto label_7F3A68E0;
    case 0x7F3A68E4u: goto label_7F3A68E4;
    case 0x7F3A68E8u: goto label_7F3A68E8;
    case 0x7F3A68ECu: goto label_7F3A68EC;
    case 0x7F3A68F0u: goto label_7F3A68F0;
    case 0x7F3A68F4u: goto label_7F3A68F4;
    case 0x7F3A68F8u: goto label_7F3A68F8;
    case 0x7F3A68FCu: goto label_7F3A68FC;
    case 0x7F3A6900u: goto label_7F3A6900;
    case 0x7F3A6904u: goto label_7F3A6904;
    case 0x7F3A6908u: goto label_7F3A6908;
    case 0x7F3A690Cu: goto label_7F3A690C;
    case 0x7F3A6910u: goto label_7F3A6910;
    case 0x7F3A6914u: goto label_7F3A6914;
    case 0x7F3A6918u: goto label_7F3A6918;
    case 0x7F3A691Cu: goto label_7F3A691C;
    case 0x7F3A6920u: goto label_7F3A6920;
    case 0x7F3A6924u: goto label_7F3A6924;
    case 0x7F3A6928u: goto label_7F3A6928;
    case 0x7F3A692Cu: goto label_7F3A692C;
    case 0x7F3A6930u: goto label_7F3A6930;
    case 0x7F3A6934u: goto label_7F3A6934;
    case 0x7F3A6938u: goto label_7F3A6938;
    case 0x7F3A693Cu: goto label_7F3A693C;
    case 0x7F3A6940u: goto label_7F3A6940;
    case 0x7F3A6944u: goto label_7F3A6944;
    case 0x7F3A6948u: goto label_7F3A6948;
    case 0x7F3A694Cu: goto label_7F3A694C;
    case 0x7F3A6950u: goto label_7F3A6950;
    case 0x7F3A6954u: goto label_7F3A6954;
    case 0x7F3A6958u: goto label_7F3A6958;
    case 0x7F3A695Cu: goto label_7F3A695C;
    case 0x7F3A6960u: goto label_7F3A6960;
    case 0x7F3A6964u: goto label_7F3A6964;
    case 0x7F3A6968u: goto label_7F3A6968;
    case 0x7F3A696Cu: goto label_7F3A696C;
    case 0x7F3A6970u: goto label_7F3A6970;
    case 0x7F3A6974u: goto label_7F3A6974;
    case 0x7F3A6978u: goto label_7F3A6978;
    case 0x7F3A697Cu: goto label_7F3A697C;
    case 0x7F3A6980u: goto label_7F3A6980;
    case 0x7F3A6984u: goto label_7F3A6984;
    case 0x7F3A6988u: goto label_7F3A6988;
    case 0x7F3A698Cu: goto label_7F3A698C;
    case 0x7F3A6990u: goto label_7F3A6990;
    case 0x7F3A6994u: goto label_7F3A6994;
    case 0x7F3A6998u: goto label_7F3A6998;
    case 0x7F3A699Cu: goto label_7F3A699C;
    case 0x7F3A69A0u: goto label_7F3A69A0;
    case 0x7F3A69A4u: goto label_7F3A69A4;
    case 0x7F3A69A8u: goto label_7F3A69A8;
    case 0x7F3A69ACu: goto label_7F3A69AC;
    case 0x7F3A69B0u: goto label_7F3A69B0;
    case 0x7F3A69B4u: goto label_7F3A69B4;
    case 0x7F3A69B8u: goto label_7F3A69B8;
    case 0x7F3A69BCu: goto label_7F3A69BC;
    case 0x7F3A69C0u: goto label_7F3A69C0;
    case 0x7F3A69C4u: goto label_7F3A69C4;
    case 0x7F3A69C8u: goto label_7F3A69C8;
    case 0x7F3A69CCu: goto label_7F3A69CC;
    case 0x7F3A69D0u: goto label_7F3A69D0;
    case 0x7F3A69D4u: goto label_7F3A69D4;
    case 0x7F3A69D8u: goto label_7F3A69D8;
    case 0x7F3A69DCu: goto label_7F3A69DC;
    case 0x7F3A69E0u: goto label_7F3A69E0;
    case 0x7F3A69E4u: goto label_7F3A69E4;
    case 0x7F3A69E8u: goto label_7F3A69E8;
    case 0x7F3A69ECu: goto label_7F3A69EC;
    case 0x7F3A69F0u: goto label_7F3A69F0;
    case 0x7F3A69F4u: goto label_7F3A69F4;
    case 0x7F3A69F8u: goto label_7F3A69F8;
    case 0x7F3A69FCu: goto label_7F3A69FC;
    case 0x7F3A6A00u: goto label_7F3A6A00;
    case 0x7F3A6A04u: goto label_7F3A6A04;
    case 0x7F3A6A08u: goto label_7F3A6A08;
    case 0x7F3A6A0Cu: goto label_7F3A6A0C;
    case 0x7F3A6A10u: goto label_7F3A6A10;
    case 0x7F3A6A14u: goto label_7F3A6A14;
    case 0x7F3A6A18u: goto label_7F3A6A18;
    case 0x7F3A6A1Cu: goto label_7F3A6A1C;
    case 0x7F3A6A20u: goto label_7F3A6A20;
    case 0x7F3A6A24u: goto label_7F3A6A24;
    case 0x7F3A6A28u: goto label_7F3A6A28;
    case 0x7F3A6A2Cu: goto label_7F3A6A2C;
    case 0x7F3A6A30u: goto label_7F3A6A30;
    case 0x7F3A6A34u: goto label_7F3A6A34;
    case 0x7F3A6A38u: goto label_7F3A6A38;
    case 0x7F3A6A3Cu: goto label_7F3A6A3C;
    case 0x7F3A6A40u: goto label_7F3A6A40;
    case 0x7F3A6A44u: goto label_7F3A6A44;
    case 0x7F3A6A48u: goto label_7F3A6A48;
    case 0x7F3A6A4Cu: goto label_7F3A6A4C;
    case 0x7F3A6A50u: goto label_7F3A6A50;
    case 0x7F3A6A54u: goto label_7F3A6A54;
    case 0x7F3A6A58u: goto label_7F3A6A58;
    case 0x7F3A6A5Cu: goto label_7F3A6A5C;
    case 0x7F3A6A60u: goto label_7F3A6A60;
    case 0x7F3A6A64u: goto label_7F3A6A64;
    case 0x7F3A6A68u: goto label_7F3A6A68;
    case 0x7F3A6A6Cu: goto label_7F3A6A6C;
    case 0x7F3A6A70u: goto label_7F3A6A70;
    case 0x7F3A6A74u: goto label_7F3A6A74;
    case 0x7F3A6A78u: goto label_7F3A6A78;
    case 0x7F3A6A7Cu: goto label_7F3A6A7C;
    case 0x7F3A6A80u: goto label_7F3A6A80;
    case 0x7F3A6A84u: goto label_7F3A6A84;
    case 0x7F3A6A88u: goto label_7F3A6A88;
    case 0x7F3A6A8Cu: goto label_7F3A6A8C;
    case 0x7F3A6A90u: goto label_7F3A6A90;
    case 0x7F3A6A94u: goto label_7F3A6A94;
    case 0x7F3A6A98u: goto label_7F3A6A98;
    case 0x7F3A6A9Cu: goto label_7F3A6A9C;
    case 0x7F3A6AA0u: goto label_7F3A6AA0;
    case 0x7F3A6AA4u: goto label_7F3A6AA4;
    case 0x7F3A6AA8u: goto label_7F3A6AA8;
    case 0x7F3A6AACu: goto label_7F3A6AAC;
    case 0x7F3A6AB0u: goto label_7F3A6AB0;
    case 0x7F3A6AB4u: goto label_7F3A6AB4;
    case 0x7F3A6AB8u: goto label_7F3A6AB8;
    case 0x7F3A6ABCu: goto label_7F3A6ABC;
    case 0x7F3A6AC0u: goto label_7F3A6AC0;
    case 0x7F3A6AC4u: goto label_7F3A6AC4;
    case 0x7F3A6AC8u: goto label_7F3A6AC8;
    case 0x7F3A6ACCu: goto label_7F3A6ACC;
    case 0x7F3A6AD0u: goto label_7F3A6AD0;
    case 0x7F3A6AD4u: goto label_7F3A6AD4;
    case 0x7F3A6AD8u: goto label_7F3A6AD8;
    case 0x7F3A6ADCu: goto label_7F3A6ADC;
    case 0x7F3A6AE0u: goto label_7F3A6AE0;
    case 0x7F3A6AE4u: goto label_7F3A6AE4;
    case 0x7F3A6AE8u: goto label_7F3A6AE8;
    case 0x7F3A6AECu: goto label_7F3A6AEC;
    case 0x7F3A6AF0u: goto label_7F3A6AF0;
    case 0x7F3A6AF4u: goto label_7F3A6AF4;
    case 0x7F3A6AF8u: goto label_7F3A6AF8;
    case 0x7F3A6AFCu: goto label_7F3A6AFC;
    case 0x7F3A6B00u: goto label_7F3A6B00;
    case 0x7F3A6B04u: goto label_7F3A6B04;
    case 0x7F3A6B08u: goto label_7F3A6B08;
    case 0x7F3A6B0Cu: goto label_7F3A6B0C;
    case 0x7F3A6B10u: goto label_7F3A6B10;
    case 0x7F3A6B14u: goto label_7F3A6B14;
    case 0x7F3A6B18u: goto label_7F3A6B18;
    case 0x7F3A6B1Cu: goto label_7F3A6B1C;
    case 0x7F3A6B20u: goto label_7F3A6B20;
    case 0x7F3A6B24u: goto label_7F3A6B24;
    case 0x7F3A6B28u: goto label_7F3A6B28;
    case 0x7F3A6B2Cu: goto label_7F3A6B2C;
    case 0x7F3A6B30u: goto label_7F3A6B30;
    case 0x7F3A6B34u: goto label_7F3A6B34;
    case 0x7F3A6B38u: goto label_7F3A6B38;
    case 0x7F3A6B3Cu: goto label_7F3A6B3C;
    case 0x7F3A6B40u: goto label_7F3A6B40;
    case 0x7F3A6B44u: goto label_7F3A6B44;
    case 0x7F3A6B48u: goto label_7F3A6B48;
    case 0x7F3A6B4Cu: goto label_7F3A6B4C;
    case 0x7F3A6B50u: goto label_7F3A6B50;
    case 0x7F3A6B54u: goto label_7F3A6B54;
    case 0x7F3A6B58u: goto label_7F3A6B58;
    case 0x7F3A6B5Cu: goto label_7F3A6B5C;
    case 0x7F3A6B60u: goto label_7F3A6B60;
    case 0x7F3A6B64u: goto label_7F3A6B64;
    case 0x7F3A6B68u: goto label_7F3A6B68;
    case 0x7F3A6B6Cu: goto label_7F3A6B6C;
    case 0x7F3A6B70u: goto label_7F3A6B70;
    case 0x7F3A6B74u: goto label_7F3A6B74;
    case 0x7F3A6B78u: goto label_7F3A6B78;
    case 0x7F3A6B7Cu: goto label_7F3A6B7C;
    case 0x7F3A6B80u: goto label_7F3A6B80;
    case 0x7F3A6B84u: goto label_7F3A6B84;
    case 0x7F3A6B88u: goto label_7F3A6B88;
    case 0x7F3A6B8Cu: goto label_7F3A6B8C;
    case 0x7F3A6B90u: goto label_7F3A6B90;
    case 0x7F3A6B94u: goto label_7F3A6B94;
    case 0x7F3A6B98u: goto label_7F3A6B98;
    case 0x7F3A6B9Cu: goto label_7F3A6B9C;
    case 0x7F3A6BA0u: goto label_7F3A6BA0;
    case 0x7F3A6BA4u: goto label_7F3A6BA4;
    case 0x7F3A6BA8u: goto label_7F3A6BA8;
    case 0x7F3A6BACu: goto label_7F3A6BAC;
    case 0x7F3A6BB0u: goto label_7F3A6BB0;
    case 0x7F3A6BB4u: goto label_7F3A6BB4;
    case 0x7F3A6BB8u: goto label_7F3A6BB8;
    case 0x7F3A6BBCu: goto label_7F3A6BBC;
    case 0x7F3A6BC0u: goto label_7F3A6BC0;
    case 0x7F3A6BC4u: goto label_7F3A6BC4;
    case 0x7F3A6BC8u: goto label_7F3A6BC8;
    case 0x7F3A6BCCu: goto label_7F3A6BCC;
    case 0x7F3A6BD0u: goto label_7F3A6BD0;
    case 0x7F3A6BD4u: goto label_7F3A6BD4;
    case 0x7F3A6BD8u: goto label_7F3A6BD8;
    case 0x7F3A6BDCu: goto label_7F3A6BDC;
    case 0x7F3A6BE0u: goto label_7F3A6BE0;
    case 0x7F3A6BE4u: goto label_7F3A6BE4;
    case 0x7F3A6BE8u: goto label_7F3A6BE8;
    case 0x7F3A6BECu: goto label_7F3A6BEC;
    case 0x7F3A6BF0u: goto label_7F3A6BF0;
    case 0x7F3A6BF4u: goto label_7F3A6BF4;
    case 0x7F3A6BF8u: goto label_7F3A6BF8;
    case 0x7F3A6BFCu: goto label_7F3A6BFC;
    case 0x7F3A6C00u: goto label_7F3A6C00;
    case 0x7F3A6C04u: goto label_7F3A6C04;
    case 0x7F3A6C08u: goto label_7F3A6C08;
    case 0x7F3A6C0Cu: goto label_7F3A6C0C;
    case 0x7F3A6C10u: goto label_7F3A6C10;
    case 0x7F3A6C14u: goto label_7F3A6C14;
    case 0x7F3A6C18u: goto label_7F3A6C18;
    case 0x7F3A6C1Cu: goto label_7F3A6C1C;
    case 0x7F3A6C20u: goto label_7F3A6C20;
    case 0x7F3A6C24u: goto label_7F3A6C24;
    case 0x7F3A6C28u: goto label_7F3A6C28;
    case 0x7F3A6C2Cu: goto label_7F3A6C2C;
    case 0x7F3A6C30u: goto label_7F3A6C30;
    case 0x7F3A6C34u: goto label_7F3A6C34;
    case 0x7F3A6C38u: goto label_7F3A6C38;
    case 0x7F3A6C3Cu: goto label_7F3A6C3C;
    case 0x7F3A6C40u: goto label_7F3A6C40;
    case 0x7F3A6C44u: goto label_7F3A6C44;
    case 0x7F3A6C48u: goto label_7F3A6C48;
    case 0x7F3A6C4Cu: goto label_7F3A6C4C;
    case 0x7F3A6C50u: goto label_7F3A6C50;
    case 0x7F3A6C54u: goto label_7F3A6C54;
    case 0x7F3A6C58u: goto label_7F3A6C58;
    case 0x7F3A6C5Cu: goto label_7F3A6C5C;
    case 0x7F3A6C60u: goto label_7F3A6C60;
    case 0x7F3A6C64u: goto label_7F3A6C64;
    case 0x7F3A6C68u: goto label_7F3A6C68;
    case 0x7F3A6C6Cu: goto label_7F3A6C6C;
    case 0x7F3A6C70u: goto label_7F3A6C70;
    case 0x7F3A6C74u: goto label_7F3A6C74;
    case 0x7F3A6C78u: goto label_7F3A6C78;
    case 0x7F3A6C7Cu: goto label_7F3A6C7C;
    case 0x7F3A6C80u: goto label_7F3A6C80;
    case 0x7F3A6C84u: goto label_7F3A6C84;
    case 0x7F3A6C88u: goto label_7F3A6C88;
    case 0x7F3A6C8Cu: goto label_7F3A6C8C;
    case 0x7F3A6C90u: goto label_7F3A6C90;
    case 0x7F3A6C94u: goto label_7F3A6C94;
    case 0x7F3A6C98u: goto label_7F3A6C98;
    case 0x7F3A6C9Cu: goto label_7F3A6C9C;
    case 0x7F3A6CA0u: goto label_7F3A6CA0;
    case 0x7F3A6CA4u: goto label_7F3A6CA4;
    case 0x7F3A6CA8u: goto label_7F3A6CA8;
    case 0x7F3A6CACu: goto label_7F3A6CAC;
    case 0x7F3A6CB0u: goto label_7F3A6CB0;
    case 0x7F3A6CB4u: goto label_7F3A6CB4;
    case 0x7F3A6CB8u: goto label_7F3A6CB8;
    case 0x7F3A6CBCu: goto label_7F3A6CBC;
    case 0x7F3A6CC0u: goto label_7F3A6CC0;
    case 0x7F3A6CC4u: goto label_7F3A6CC4;
    case 0x7F3A6CC8u: goto label_7F3A6CC8;
    case 0x7F3A6CCCu: goto label_7F3A6CCC;
    case 0x7F3A6CD0u: goto label_7F3A6CD0;
    case 0x7F3A6CD4u: goto label_7F3A6CD4;
    case 0x7F3A6CD8u: goto label_7F3A6CD8;
    case 0x7F3A6CDCu: goto label_7F3A6CDC;
    case 0x7F3A6CE0u: goto label_7F3A6CE0;
    case 0x7F3A6CE4u: goto label_7F3A6CE4;
    case 0x7F3A6CE8u: goto label_7F3A6CE8;
    case 0x7F3A6CECu: goto label_7F3A6CEC;
    case 0x7F3A6CF0u: goto label_7F3A6CF0;
    case 0x7F3A6CF4u: goto label_7F3A6CF4;
    case 0x7F3A6CF8u: goto label_7F3A6CF8;
    case 0x7F3A6CFCu: goto label_7F3A6CFC;
    case 0x7F3A6D00u: goto label_7F3A6D00;
    case 0x7F3A6D04u: goto label_7F3A6D04;
    case 0x7F3A6D08u: goto label_7F3A6D08;
    case 0x7F3A6D0Cu: goto label_7F3A6D0C;
    case 0x7F3A6D10u: goto label_7F3A6D10;
    case 0x7F3A6D14u: goto label_7F3A6D14;
    case 0x7F3A6D18u: goto label_7F3A6D18;
    case 0x7F3A6D1Cu: goto label_7F3A6D1C;
    case 0x7F3A6D20u: goto label_7F3A6D20;
    case 0x7F3A6D24u: goto label_7F3A6D24;
    case 0x7F3A6D28u: goto label_7F3A6D28;
    case 0x7F3A6D2Cu: goto label_7F3A6D2C;
    case 0x7F3A6D30u: goto label_7F3A6D30;
    case 0x7F3A6D34u: goto label_7F3A6D34;
    case 0x7F3A6D38u: goto label_7F3A6D38;
    case 0x7F3A6D3Cu: goto label_7F3A6D3C;
    case 0x7F3A6D40u: goto label_7F3A6D40;
    case 0x7F3A6D44u: goto label_7F3A6D44;
    case 0x7F3A6D48u: goto label_7F3A6D48;
    case 0x7F3A6D4Cu: goto label_7F3A6D4C;
    case 0x7F3A6D50u: goto label_7F3A6D50;
    case 0x7F3A6D54u: goto label_7F3A6D54;
    case 0x7F3A6D58u: goto label_7F3A6D58;
    case 0x7F3A6D5Cu: goto label_7F3A6D5C;
    case 0x7F3A6D60u: goto label_7F3A6D60;
    case 0x7F3A6D64u: goto label_7F3A6D64;
    case 0x7F3A6D68u: goto label_7F3A6D68;
    case 0x7F3A6D6Cu: goto label_7F3A6D6C;
    case 0x7F3A6D70u: goto label_7F3A6D70;
    case 0x7F3A6D74u: goto label_7F3A6D74;
    case 0x7F3A6D78u: goto label_7F3A6D78;
    case 0x7F3A6D7Cu: goto label_7F3A6D7C;
    case 0x7F3A6D80u: goto label_7F3A6D80;
    case 0x7F3A6D84u: goto label_7F3A6D84;
    case 0x7F3A6D88u: goto label_7F3A6D88;
    case 0x7F3A6D8Cu: goto label_7F3A6D8C;
    case 0x7F3A6D90u: goto label_7F3A6D90;
    case 0x7F3A6D94u: goto label_7F3A6D94;
    case 0x7F3A6D98u: goto label_7F3A6D98;
    case 0x7F3A6D9Cu: goto label_7F3A6D9C;
    case 0x7F3A6DA0u: goto label_7F3A6DA0;
    case 0x7F3A6DA4u: goto label_7F3A6DA4;
    case 0x7F3A6DA8u: goto label_7F3A6DA8;
    case 0x7F3A6DACu: goto label_7F3A6DAC;
    case 0x7F3A6DB0u: goto label_7F3A6DB0;
    case 0x7F3A6DB4u: goto label_7F3A6DB4;
    case 0x7F3A6DB8u: goto label_7F3A6DB8;
    case 0x7F3A6DBCu: goto label_7F3A6DBC;
    case 0x7F3A6DC0u: goto label_7F3A6DC0;
    case 0x7F3A6DC4u: goto label_7F3A6DC4;
    case 0x7F3A6DC8u: goto label_7F3A6DC8;
    case 0x7F3A6DCCu: goto label_7F3A6DCC;
    case 0x7F3A6DD0u: goto label_7F3A6DD0;
    case 0x7F3A6DD4u: goto label_7F3A6DD4;
    case 0x7F3A6DD8u: goto label_7F3A6DD8;
    case 0x7F3A6DDCu: goto label_7F3A6DDC;
    case 0x7F3A6DE0u: goto label_7F3A6DE0;
    case 0x7F3A6DE4u: goto label_7F3A6DE4;
    case 0x7F3A6DE8u: goto label_7F3A6DE8;
    case 0x7F3A6DECu: goto label_7F3A6DEC;
    case 0x7F3A6DF0u: goto label_7F3A6DF0;
    case 0x7F3A6DF4u: goto label_7F3A6DF4;
    case 0x7F3A6DF8u: goto label_7F3A6DF8;
    case 0x7F3A6DFCu: goto label_7F3A6DFC;
    case 0x7F3A6E00u: goto label_7F3A6E00;
    case 0x7F3A6E04u: goto label_7F3A6E04;
    case 0x7F3A6E08u: goto label_7F3A6E08;
    case 0x7F3A6E0Cu: goto label_7F3A6E0C;
    case 0x7F3A6E10u: goto label_7F3A6E10;
    case 0x7F3A6E14u: goto label_7F3A6E14;
    case 0x7F3A6E18u: goto label_7F3A6E18;
    case 0x7F3A6E1Cu: goto label_7F3A6E1C;
    case 0x7F3A6E20u: goto label_7F3A6E20;
    case 0x7F3A6E24u: goto label_7F3A6E24;
    case 0x7F3A6E28u: goto label_7F3A6E28;
    case 0x7F3A6E2Cu: goto label_7F3A6E2C;
    case 0x7F3A6E30u: goto label_7F3A6E30;
    case 0x7F3A6E34u: goto label_7F3A6E34;
    case 0x7F3A6E38u: goto label_7F3A6E38;
    case 0x7F3A6E3Cu: goto label_7F3A6E3C;
    case 0x7F3A6E40u: goto label_7F3A6E40;
    case 0x7F3A6E44u: goto label_7F3A6E44;
    case 0x7F3A6E48u: goto label_7F3A6E48;
    case 0x7F3A6E4Cu: goto label_7F3A6E4C;
    case 0x7F3A6E50u: goto label_7F3A6E50;
    case 0x7F3A6E54u: goto label_7F3A6E54;
    case 0x7F3A6E58u: goto label_7F3A6E58;
    case 0x7F3A6E5Cu: goto label_7F3A6E5C;
    case 0x7F3A6E60u: goto label_7F3A6E60;
    case 0x7F3A6E64u: goto label_7F3A6E64;
    case 0x7F3A6E68u: goto label_7F3A6E68;
    case 0x7F3A6E6Cu: goto label_7F3A6E6C;
    case 0x7F3A6E70u: goto label_7F3A6E70;
    case 0x7F3A6E74u: goto label_7F3A6E74;
    case 0x7F3A6E78u: goto label_7F3A6E78;
    case 0x7F3A6E7Cu: goto label_7F3A6E7C;
    case 0x7F3A6E80u: goto label_7F3A6E80;
    case 0x7F3A6E84u: goto label_7F3A6E84;
    case 0x7F3A6E88u: goto label_7F3A6E88;
    case 0x7F3A6E8Cu: goto label_7F3A6E8C;
    case 0x7F3A6E90u: goto label_7F3A6E90;
    case 0x7F3A6E94u: goto label_7F3A6E94;
    case 0x7F3A6E98u: goto label_7F3A6E98;
    case 0x7F3A6E9Cu: goto label_7F3A6E9C;
    case 0x7F3A6EA0u: goto label_7F3A6EA0;
    case 0x7F3A6EA4u: goto label_7F3A6EA4;
    case 0x7F3A6EA8u: goto label_7F3A6EA8;
    case 0x7F3A6EACu: goto label_7F3A6EAC;
    case 0x7F3A6EB0u: goto label_7F3A6EB0;
    case 0x7F3A6EB4u: goto label_7F3A6EB4;
    case 0x7F3A6EB8u: goto label_7F3A6EB8;
    case 0x7F3A6EBCu: goto label_7F3A6EBC;
    case 0x7F3A6EC0u: goto label_7F3A6EC0;
    case 0x7F3A6EC4u: goto label_7F3A6EC4;
    case 0x7F3A6EC8u: goto label_7F3A6EC8;
    case 0x7F3A6ECCu: goto label_7F3A6ECC;
    case 0x7F3A6ED0u: goto label_7F3A6ED0;
    case 0x7F3A6ED4u: goto label_7F3A6ED4;
    case 0x7F3A6ED8u: goto label_7F3A6ED8;
    case 0x7F3A6EDCu: goto label_7F3A6EDC;
    case 0x7F3A6EE0u: goto label_7F3A6EE0;
    case 0x7F3A6EE4u: goto label_7F3A6EE4;
    case 0x7F3A6EE8u: goto label_7F3A6EE8;
    case 0x7F3A6EECu: goto label_7F3A6EEC;
    case 0x7F3A6EF0u: goto label_7F3A6EF0;
    case 0x7F3A6EF4u: goto label_7F3A6EF4;
    case 0x7F3A6EF8u: goto label_7F3A6EF8;
    case 0x7F3A6EFCu: goto label_7F3A6EFC;
    case 0x7F3A6F00u: goto label_7F3A6F00;
    case 0x7F3A6F04u: goto label_7F3A6F04;
    case 0x7F3A6F08u: goto label_7F3A6F08;
    case 0x7F3A6F0Cu: goto label_7F3A6F0C;
    case 0x7F3A6F10u: goto label_7F3A6F10;
    case 0x7F3A6F14u: goto label_7F3A6F14;
    case 0x7F3A6F18u: goto label_7F3A6F18;
    case 0x7F3A6F1Cu: goto label_7F3A6F1C;
    case 0x7F3A6F20u: goto label_7F3A6F20;
    case 0x7F3A6F24u: goto label_7F3A6F24;
    case 0x7F3A6F28u: goto label_7F3A6F28;
    case 0x7F3A6F2Cu: goto label_7F3A6F2C;
    case 0x7F3A6F30u: goto label_7F3A6F30;
    case 0x7F3A6F34u: goto label_7F3A6F34;
    case 0x7F3A6F38u: goto label_7F3A6F38;
    case 0x7F3A6F3Cu: goto label_7F3A6F3C;
    case 0x7F3A6F40u: goto label_7F3A6F40;
    case 0x7F3A6F44u: goto label_7F3A6F44;
    case 0x7F3A6F48u: goto label_7F3A6F48;
    case 0x7F3A6F4Cu: goto label_7F3A6F4C;
    case 0x7F3A6F50u: goto label_7F3A6F50;
    case 0x7F3A6F54u: goto label_7F3A6F54;
    case 0x7F3A6F58u: goto label_7F3A6F58;
    case 0x7F3A6F5Cu: goto label_7F3A6F5C;
    case 0x7F3A6F60u: goto label_7F3A6F60;
    case 0x7F3A6F64u: goto label_7F3A6F64;
    case 0x7F3A6F68u: goto label_7F3A6F68;
    case 0x7F3A6F6Cu: goto label_7F3A6F6C;
    case 0x7F3A6F70u: goto label_7F3A6F70;
    case 0x7F3A6F74u: goto label_7F3A6F74;
    case 0x7F3A6F78u: goto label_7F3A6F78;
    case 0x7F3A6F7Cu: goto label_7F3A6F7C;
    case 0x7F3A6F80u: goto label_7F3A6F80;
    case 0x7F3A6F84u: goto label_7F3A6F84;
    case 0x7F3A6F88u: goto label_7F3A6F88;
    case 0x7F3A6F8Cu: goto label_7F3A6F8C;
    case 0x7F3A6F90u: goto label_7F3A6F90;
    case 0x7F3A6F94u: goto label_7F3A6F94;
    case 0x7F3A6F98u: goto label_7F3A6F98;
    case 0x7F3A6F9Cu: goto label_7F3A6F9C;
    case 0x7F3A6FA0u: goto label_7F3A6FA0;
    case 0x7F3A6FA4u: goto label_7F3A6FA4;
    case 0x7F3A6FA8u: goto label_7F3A6FA8;
    case 0x7F3A6FACu: goto label_7F3A6FAC;
    case 0x7F3A6FB0u: goto label_7F3A6FB0;
    case 0x7F3A6FB4u: goto label_7F3A6FB4;
    case 0x7F3A6FB8u: goto label_7F3A6FB8;
    case 0x7F3A6FBCu: goto label_7F3A6FBC;
    case 0x7F3A6FC0u: goto label_7F3A6FC0;
    case 0x7F3A6FC4u: goto label_7F3A6FC4;
    case 0x7F3A6FC8u: goto label_7F3A6FC8;
    case 0x7F3A6FCCu: goto label_7F3A6FCC;
    case 0x7F3A6FD0u: goto label_7F3A6FD0;
    case 0x7F3A6FD4u: goto label_7F3A6FD4;
    case 0x7F3A6FD8u: goto label_7F3A6FD8;
    case 0x7F3A6FDCu: goto label_7F3A6FDC;
    case 0x7F3A6FE0u: goto label_7F3A6FE0;
    case 0x7F3A6FE4u: goto label_7F3A6FE4;
    case 0x7F3A6FE8u: goto label_7F3A6FE8;
    case 0x7F3A6FECu: goto label_7F3A6FEC;
    case 0x7F3A6FF0u: goto label_7F3A6FF0;
    case 0x7F3A6FF4u: goto label_7F3A6FF4;
    case 0x7F3A6FF8u: goto label_7F3A6FF8;
    case 0x7F3A6FFCu: goto label_7F3A6FFC;
    case 0x7F3A7000u: goto label_7F3A7000;
    case 0x7F3A7004u: goto label_7F3A7004;
    case 0x7F3A7008u: goto label_7F3A7008;
    case 0x7F3A700Cu: goto label_7F3A700C;
    case 0x7F3A7010u: goto label_7F3A7010;
    case 0x7F3A7014u: goto label_7F3A7014;
    case 0x7F3A7018u: goto label_7F3A7018;
    case 0x7F3A701Cu: goto label_7F3A701C;
    case 0x7F3A7020u: goto label_7F3A7020;
    case 0x7F3A7024u: goto label_7F3A7024;
    case 0x7F3A7028u: goto label_7F3A7028;
    case 0x7F3A702Cu: goto label_7F3A702C;
    case 0x7F3A7030u: goto label_7F3A7030;
    case 0x7F3A7034u: goto label_7F3A7034;
    case 0x7F3A7038u: goto label_7F3A7038;
    case 0x7F3A703Cu: goto label_7F3A703C;
    case 0x7F3A7040u: goto label_7F3A7040;
    case 0x7F3A7044u: goto label_7F3A7044;
    case 0x7F3A7048u: goto label_7F3A7048;
    case 0x7F3A704Cu: goto label_7F3A704C;
    case 0x7F3A7050u: goto label_7F3A7050;
    case 0x7F3A7054u: goto label_7F3A7054;
    case 0x7F3A7058u: goto label_7F3A7058;
    case 0x7F3A705Cu: goto label_7F3A705C;
    case 0x7F3A7060u: goto label_7F3A7060;
    case 0x7F3A7064u: goto label_7F3A7064;
    case 0x7F3A7068u: goto label_7F3A7068;
    case 0x7F3A706Cu: goto label_7F3A706C;
    case 0x7F3A7070u: goto label_7F3A7070;
    case 0x7F3A7074u: goto label_7F3A7074;
    case 0x7F3A7078u: goto label_7F3A7078;
    case 0x7F3A707Cu: goto label_7F3A707C;
    case 0x7F3A7080u: goto label_7F3A7080;
    case 0x7F3A7084u: goto label_7F3A7084;
    case 0x7F3A7088u: goto label_7F3A7088;
    case 0x7F3A708Cu: goto label_7F3A708C;
    case 0x7F3A7090u: goto label_7F3A7090;
    case 0x7F3A7094u: goto label_7F3A7094;
    case 0x7F3A7098u: goto label_7F3A7098;
    case 0x7F3A709Cu: goto label_7F3A709C;
    case 0x7F3A70A0u: goto label_7F3A70A0;
    case 0x7F3A70A4u: goto label_7F3A70A4;
    case 0x7F3A70A8u: goto label_7F3A70A8;
    case 0x7F3A70ACu: goto label_7F3A70AC;
    case 0x7F3A70B0u: goto label_7F3A70B0;
    case 0x7F3A70B4u: goto label_7F3A70B4;
    case 0x7F3A70B8u: goto label_7F3A70B8;
    case 0x7F3A70BCu: goto label_7F3A70BC;
    case 0x7F3A70C0u: goto label_7F3A70C0;
    case 0x7F3A70C4u: goto label_7F3A70C4;
    case 0x7F3A70C8u: goto label_7F3A70C8;
    case 0x7F3A70CCu: goto label_7F3A70CC;
    case 0x7F3A70D0u: goto label_7F3A70D0;
    case 0x7F3A70D4u: goto label_7F3A70D4;
    case 0x7F3A70D8u: goto label_7F3A70D8;
    case 0x7F3A70DCu: goto label_7F3A70DC;
    case 0x7F3A70E0u: goto label_7F3A70E0;
    case 0x7F3A70E4u: goto label_7F3A70E4;
    case 0x7F3A70E8u: goto label_7F3A70E8;
    case 0x7F3A70ECu: goto label_7F3A70EC;
    case 0x7F3A70F0u: goto label_7F3A70F0;
    case 0x7F3A70F4u: goto label_7F3A70F4;
    case 0x7F3A70F8u: goto label_7F3A70F8;
    case 0x7F3A70FCu: goto label_7F3A70FC;
    case 0x7F3A7100u: goto label_7F3A7100;
    case 0x7F3A7104u: goto label_7F3A7104;
    case 0x7F3A7108u: goto label_7F3A7108;
    case 0x7F3A710Cu: goto label_7F3A710C;
    case 0x7F3A7110u: goto label_7F3A7110;
    case 0x7F3A7114u: goto label_7F3A7114;
    case 0x7F3A7118u: goto label_7F3A7118;
    case 0x7F3A711Cu: goto label_7F3A711C;
    case 0x7F3A7120u: goto label_7F3A7120;
    case 0x7F3A7124u: goto label_7F3A7124;
    case 0x7F3A7128u: goto label_7F3A7128;
    case 0x7F3A712Cu: goto label_7F3A712C;
    case 0x7F3A7130u: goto label_7F3A7130;
    case 0x7F3A7134u: goto label_7F3A7134;
    case 0x7F3A7138u: goto label_7F3A7138;
    case 0x7F3A713Cu: goto label_7F3A713C;
    case 0x7F3A7140u: goto label_7F3A7140;
    case 0x7F3A7144u: goto label_7F3A7144;
    case 0x7F3A7148u: goto label_7F3A7148;
    case 0x7F3A714Cu: goto label_7F3A714C;
    case 0x7F3A7150u: goto label_7F3A7150;
    case 0x7F3A7154u: goto label_7F3A7154;
    case 0x7F3A7158u: goto label_7F3A7158;
    case 0x7F3A715Cu: goto label_7F3A715C;
    case 0x7F3A7160u: goto label_7F3A7160;
    case 0x7F3A7164u: goto label_7F3A7164;
    case 0x7F3A7168u: goto label_7F3A7168;
    case 0x7F3A716Cu: goto label_7F3A716C;
    case 0x7F3A7170u: goto label_7F3A7170;
    case 0x7F3A7174u: goto label_7F3A7174;
    case 0x7F3A7178u: goto label_7F3A7178;
    case 0x7F3A717Cu: goto label_7F3A717C;
    case 0x7F3A7180u: goto label_7F3A7180;
    case 0x7F3A7184u: goto label_7F3A7184;
    case 0x7F3A7188u: goto label_7F3A7188;
    case 0x7F3A718Cu: goto label_7F3A718C;
    case 0x7F3A7190u: goto label_7F3A7190;
    case 0x7F3A7194u: goto label_7F3A7194;
    case 0x7F3A7198u: goto label_7F3A7198;
    case 0x7F3A719Cu: goto label_7F3A719C;
    case 0x7F3A71A0u: goto label_7F3A71A0;
    case 0x7F3A71A4u: goto label_7F3A71A4;
    case 0x7F3A71A8u: goto label_7F3A71A8;
    case 0x7F3A71ACu: goto label_7F3A71AC;
    case 0x7F3A71B0u: goto label_7F3A71B0;
    case 0x7F3A71B4u: goto label_7F3A71B4;
    case 0x7F3A71B8u: goto label_7F3A71B8;
    case 0x7F3A71BCu: goto label_7F3A71BC;
    case 0x7F3A71C0u: goto label_7F3A71C0;
    case 0x7F3A71C4u: goto label_7F3A71C4;
    case 0x7F3A71C8u: goto label_7F3A71C8;
    case 0x7F3A71CCu: goto label_7F3A71CC;
    case 0x7F3A71D0u: goto label_7F3A71D0;
    case 0x7F3A71D4u: goto label_7F3A71D4;
    case 0x7F3A71D8u: goto label_7F3A71D8;
    case 0x7F3A71DCu: goto label_7F3A71DC;
    case 0x7F3A71E0u: goto label_7F3A71E0;
    case 0x7F3A71E4u: goto label_7F3A71E4;
    case 0x7F3A71E8u: goto label_7F3A71E8;
    case 0x7F3A71ECu: goto label_7F3A71EC;
    case 0x7F3A71F0u: goto label_7F3A71F0;
    case 0x7F3A71F4u: goto label_7F3A71F4;
    case 0x7F3A71F8u: goto label_7F3A71F8;
    case 0x7F3A71FCu: goto label_7F3A71FC;
    case 0x7F3A7200u: goto label_7F3A7200;
    case 0x7F3A7204u: goto label_7F3A7204;
    case 0x7F3A7208u: goto label_7F3A7208;
    case 0x7F3A720Cu: goto label_7F3A720C;
    case 0x7F3A7210u: goto label_7F3A7210;
    case 0x7F3A7214u: goto label_7F3A7214;
    case 0x7F3A7218u: goto label_7F3A7218;
    case 0x7F3A721Cu: goto label_7F3A721C;
    case 0x7F3A7220u: goto label_7F3A7220;
    case 0x7F3A7224u: goto label_7F3A7224;
    case 0x7F3A7228u: goto label_7F3A7228;
    case 0x7F3A722Cu: goto label_7F3A722C;
    case 0x7F3A7230u: goto label_7F3A7230;
    case 0x7F3A7234u: goto label_7F3A7234;
    case 0x7F3A7238u: goto label_7F3A7238;
    case 0x7F3A723Cu: goto label_7F3A723C;
    case 0x7F3A7240u: goto label_7F3A7240;
    case 0x7F3A7244u: goto label_7F3A7244;
    case 0x7F3A7248u: goto label_7F3A7248;
    case 0x7F3A724Cu: goto label_7F3A724C;
    case 0x7F3A7250u: goto label_7F3A7250;
    case 0x7F3A7254u: goto label_7F3A7254;
    case 0x7F3A7258u: goto label_7F3A7258;
    case 0x7F3A725Cu: goto label_7F3A725C;
    case 0x7F3A7260u: goto label_7F3A7260;
    case 0x7F3A7264u: goto label_7F3A7264;
    case 0x7F3A7268u: goto label_7F3A7268;
    case 0x7F3A726Cu: goto label_7F3A726C;
    case 0x7F3A7270u: goto label_7F3A7270;
    case 0x7F3A7274u: goto label_7F3A7274;
    case 0x7F3A7278u: goto label_7F3A7278;
    case 0x7F3A727Cu: goto label_7F3A727C;
    case 0x7F3A7280u: goto label_7F3A7280;
    case 0x7F3A7284u: goto label_7F3A7284;
    case 0x7F3A7288u: goto label_7F3A7288;
    case 0x7F3A728Cu: goto label_7F3A728C;
    case 0x7F3A7290u: goto label_7F3A7290;
    case 0x7F3A7294u: goto label_7F3A7294;
    case 0x7F3A7298u: goto label_7F3A7298;
    case 0x7F3A729Cu: goto label_7F3A729C;
    case 0x7F3A72A0u: goto label_7F3A72A0;
    case 0x7F3A72A4u: goto label_7F3A72A4;
    case 0x7F3A72A8u: goto label_7F3A72A8;
    case 0x7F3A72ACu: goto label_7F3A72AC;
    case 0x7F3A72B0u: goto label_7F3A72B0;
    case 0x7F3A72B4u: goto label_7F3A72B4;
    case 0x7F3A72B8u: goto label_7F3A72B8;
    case 0x7F3A72BCu: goto label_7F3A72BC;
    case 0x7F3A72C0u: goto label_7F3A72C0;
    case 0x7F3A72C4u: goto label_7F3A72C4;
    case 0x7F3A72C8u: goto label_7F3A72C8;
    case 0x7F3A72CCu: goto label_7F3A72CC;
    case 0x7F3A72D0u: goto label_7F3A72D0;
    case 0x7F3A72D4u: goto label_7F3A72D4;
    case 0x7F3A72D8u: goto label_7F3A72D8;
    case 0x7F3A72DCu: goto label_7F3A72DC;
    case 0x7F3A72E0u: goto label_7F3A72E0;
    case 0x7F3A72E4u: goto label_7F3A72E4;
    case 0x7F3A72E8u: goto label_7F3A72E8;
    case 0x7F3A72ECu: goto label_7F3A72EC;
    case 0x7F3A72F0u: goto label_7F3A72F0;
    case 0x7F3A72F4u: goto label_7F3A72F4;
    case 0x7F3A72F8u: goto label_7F3A72F8;
    case 0x7F3A72FCu: goto label_7F3A72FC;
    case 0x7F3A7300u: goto label_7F3A7300;
    case 0x7F3A7304u: goto label_7F3A7304;
    case 0x7F3A7308u: goto label_7F3A7308;
    case 0x7F3A730Cu: goto label_7F3A730C;
    case 0x7F3A7310u: goto label_7F3A7310;
    case 0x7F3A7314u: goto label_7F3A7314;
    case 0x7F3A7318u: goto label_7F3A7318;
    case 0x7F3A731Cu: goto label_7F3A731C;
    case 0x7F3A7320u: goto label_7F3A7320;
    case 0x7F3A7324u: goto label_7F3A7324;
    case 0x7F3A7328u: goto label_7F3A7328;
    case 0x7F3A732Cu: goto label_7F3A732C;
    case 0x7F3A7330u: goto label_7F3A7330;
    case 0x7F3A7334u: goto label_7F3A7334;
    case 0x7F3A7338u: goto label_7F3A7338;
    case 0x7F3A733Cu: goto label_7F3A733C;
    case 0x7F3A7340u: goto label_7F3A7340;
    case 0x7F3A7344u: goto label_7F3A7344;
    case 0x7F3A7348u: goto label_7F3A7348;
    case 0x7F3A734Cu: goto label_7F3A734C;
    case 0x7F3A7350u: goto label_7F3A7350;
    case 0x7F3A7354u: goto label_7F3A7354;
    case 0x7F3A7358u: goto label_7F3A7358;
    case 0x7F3A735Cu: goto label_7F3A735C;
    case 0x7F3A7360u: goto label_7F3A7360;
    case 0x7F3A7364u: goto label_7F3A7364;
    case 0x7F3A7368u: goto label_7F3A7368;
    case 0x7F3A736Cu: goto label_7F3A736C;
    case 0x7F3A7370u: goto label_7F3A7370;
    case 0x7F3A7374u: goto label_7F3A7374;
    case 0x7F3A7378u: goto label_7F3A7378;
    case 0x7F3A737Cu: goto label_7F3A737C;
    case 0x7F3A7380u: goto label_7F3A7380;
    case 0x7F3A7384u: goto label_7F3A7384;
    case 0x7F3A7388u: goto label_7F3A7388;
    case 0x7F3A738Cu: goto label_7F3A738C;
    case 0x7F3A7390u: goto label_7F3A7390;
    case 0x7F3A7394u: goto label_7F3A7394;
    case 0x7F3A7398u: goto label_7F3A7398;
    case 0x7F3A739Cu: goto label_7F3A739C;
    case 0x7F3A73A0u: goto label_7F3A73A0;
    case 0x7F3A73A4u: goto label_7F3A73A4;
    case 0x7F3A73A8u: goto label_7F3A73A8;
    case 0x7F3A73ACu: goto label_7F3A73AC;
    case 0x7F3A73B0u: goto label_7F3A73B0;
    case 0x7F3A73B4u: goto label_7F3A73B4;
    case 0x7F3A73B8u: goto label_7F3A73B8;
    case 0x7F3A73BCu: goto label_7F3A73BC;
    case 0x7F3A73C0u: goto label_7F3A73C0;
    case 0x7F3A73C4u: goto label_7F3A73C4;
    case 0x7F3A73C8u: goto label_7F3A73C8;
    case 0x7F3A73CCu: goto label_7F3A73CC;
    case 0x7F3A73D0u: goto label_7F3A73D0;
    case 0x7F3A73D4u: goto label_7F3A73D4;
    case 0x7F3A73D8u: goto label_7F3A73D8;
    case 0x7F3A73DCu: goto label_7F3A73DC;
    case 0x7F3A73E0u: goto label_7F3A73E0;
    case 0x7F3A73E4u: goto label_7F3A73E4;
    case 0x7F3A73E8u: goto label_7F3A73E8;
    case 0x7F3A73ECu: goto label_7F3A73EC;
    case 0x7F3A73F0u: goto label_7F3A73F0;
    case 0x7F3A73F4u: goto label_7F3A73F4;
    case 0x7F3A73F8u: goto label_7F3A73F8;
    case 0x7F3A73FCu: goto label_7F3A73FC;
    case 0x7F3A7400u: goto label_7F3A7400;
    case 0x7F3A7404u: goto label_7F3A7404;
    case 0x7F3A7408u: goto label_7F3A7408;
    case 0x7F3A740Cu: goto label_7F3A740C;
    case 0x7F3A7410u: goto label_7F3A7410;
    case 0x7F3A7414u: goto label_7F3A7414;
    case 0x7F3A7418u: goto label_7F3A7418;
    case 0x7F3A741Cu: goto label_7F3A741C;
    case 0x7F3A7420u: goto label_7F3A7420;
    case 0x7F3A7424u: goto label_7F3A7424;
    case 0x7F3A7428u: goto label_7F3A7428;
    case 0x7F3A742Cu: goto label_7F3A742C;
    case 0x7F3A7430u: goto label_7F3A7430;
    case 0x7F3A7434u: goto label_7F3A7434;
    case 0x7F3A7438u: goto label_7F3A7438;
    case 0x7F3A743Cu: goto label_7F3A743C;
    case 0x7F3A7440u: goto label_7F3A7440;
    case 0x7F3A7444u: goto label_7F3A7444;
    case 0x7F3A7448u: goto label_7F3A7448;
    case 0x7F3A744Cu: goto label_7F3A744C;
    case 0x7F3A7450u: goto label_7F3A7450;
    case 0x7F3A7454u: goto label_7F3A7454;
    case 0x7F3A7458u: goto label_7F3A7458;
    case 0x7F3A745Cu: goto label_7F3A745C;
    case 0x7F3A7460u: goto label_7F3A7460;
    case 0x7F3A7464u: goto label_7F3A7464;
    case 0x7F3A7468u: goto label_7F3A7468;
    case 0x7F3A746Cu: goto label_7F3A746C;
    case 0x7F3A7470u: goto label_7F3A7470;
    case 0x7F3A7474u: goto label_7F3A7474;
    case 0x7F3A7478u: goto label_7F3A7478;
    case 0x7F3A747Cu: goto label_7F3A747C;
    case 0x7F3A7480u: goto label_7F3A7480;
    case 0x7F3A7484u: goto label_7F3A7484;
    case 0x7F3A7488u: goto label_7F3A7488;
    case 0x7F3A748Cu: goto label_7F3A748C;
    case 0x7F3A7490u: goto label_7F3A7490;
    case 0x7F3A7494u: goto label_7F3A7494;
    case 0x7F3A7498u: goto label_7F3A7498;
    case 0x7F3A749Cu: goto label_7F3A749C;
    case 0x7F3A74A0u: goto label_7F3A74A0;
    case 0x7F3A74A4u: goto label_7F3A74A4;
    case 0x7F3A74A8u: goto label_7F3A74A8;
    case 0x7F3A74ACu: goto label_7F3A74AC;
    case 0x7F3A74B0u: goto label_7F3A74B0;
    case 0x7F3A74B4u: goto label_7F3A74B4;
    case 0x7F3A74B8u: goto label_7F3A74B8;
    case 0x7F3A74BCu: goto label_7F3A74BC;
    case 0x7F3A74C0u: goto label_7F3A74C0;
    case 0x7F3A74C4u: goto label_7F3A74C4;
    case 0x7F3A74C8u: goto label_7F3A74C8;
    case 0x7F3A74CCu: goto label_7F3A74CC;
    case 0x7F3A74D0u: goto label_7F3A74D0;
    case 0x7F3A74D4u: goto label_7F3A74D4;
    case 0x7F3A74D8u: goto label_7F3A74D8;
    case 0x7F3A74DCu: goto label_7F3A74DC;
    case 0x7F3A74E0u: goto label_7F3A74E0;
    case 0x7F3A74E4u: goto label_7F3A74E4;
    case 0x7F3A74E8u: goto label_7F3A74E8;
    case 0x7F3A74ECu: goto label_7F3A74EC;
    case 0x7F3A74F0u: goto label_7F3A74F0;
    case 0x7F3A74F4u: goto label_7F3A74F4;
    case 0x7F3A74F8u: goto label_7F3A74F8;
    case 0x7F3A74FCu: goto label_7F3A74FC;
    case 0x7F3A7500u: goto label_7F3A7500;
    case 0x7F3A7504u: goto label_7F3A7504;
    case 0x7F3A7508u: goto label_7F3A7508;
    case 0x7F3A750Cu: goto label_7F3A750C;
    case 0x7F3A7510u: goto label_7F3A7510;
    case 0x7F3A7514u: goto label_7F3A7514;
    case 0x7F3A7518u: goto label_7F3A7518;
    case 0x7F3A751Cu: goto label_7F3A751C;
    case 0x7F3A7520u: goto label_7F3A7520;
    case 0x7F3A7524u: goto label_7F3A7524;
    case 0x7F3A7528u: goto label_7F3A7528;
    case 0x7F3A752Cu: goto label_7F3A752C;
    case 0x7F3A7530u: goto label_7F3A7530;
    case 0x7F3A7534u: goto label_7F3A7534;
    case 0x7F3A7538u: goto label_7F3A7538;
    case 0x7F3A753Cu: goto label_7F3A753C;
    case 0x7F3A7540u: goto label_7F3A7540;
    case 0x7F3A7544u: goto label_7F3A7544;
    case 0x7F3A7548u: goto label_7F3A7548;
    case 0x7F3A754Cu: goto label_7F3A754C;
    case 0x7F3A7550u: goto label_7F3A7550;
    case 0x7F3A7554u: goto label_7F3A7554;
    case 0x7F3A7558u: goto label_7F3A7558;
    case 0x7F3A755Cu: goto label_7F3A755C;
    case 0x7F3A7560u: goto label_7F3A7560;
    case 0x7F3A7564u: goto label_7F3A7564;
    case 0x7F3A7568u: goto label_7F3A7568;
    case 0x7F3A756Cu: goto label_7F3A756C;
    case 0x7F3A7570u: goto label_7F3A7570;
    case 0x7F3A7574u: goto label_7F3A7574;
    case 0x7F3A7578u: goto label_7F3A7578;
    case 0x7F3A757Cu: goto label_7F3A757C;
    case 0x7F3A7580u: goto label_7F3A7580;
    case 0x7F3A7584u: goto label_7F3A7584;
    case 0x7F3A7588u: goto label_7F3A7588;
    case 0x7F3A758Cu: goto label_7F3A758C;
    case 0x7F3A7590u: goto label_7F3A7590;
    case 0x7F3A7594u: goto label_7F3A7594;
    case 0x7F3A7598u: goto label_7F3A7598;
    case 0x7F3A759Cu: goto label_7F3A759C;
    case 0x7F3A75A0u: goto label_7F3A75A0;
    case 0x7F3A75A4u: goto label_7F3A75A4;
    case 0x7F3A75A8u: goto label_7F3A75A8;
    case 0x7F3A75ACu: goto label_7F3A75AC;
    case 0x7F3A75B0u: goto label_7F3A75B0;
    case 0x7F3A75B4u: goto label_7F3A75B4;
    case 0x7F3A75B8u: goto label_7F3A75B8;
    case 0x7F3A75BCu: goto label_7F3A75BC;
    case 0x7F3A75C0u: goto label_7F3A75C0;
    case 0x7F3A75C4u: goto label_7F3A75C4;
    case 0x7F3A75C8u: goto label_7F3A75C8;
    case 0x7F3A75CCu: goto label_7F3A75CC;
    case 0x7F3A75D0u: goto label_7F3A75D0;
    case 0x7F3A75D4u: goto label_7F3A75D4;
    case 0x7F3A75D8u: goto label_7F3A75D8;
    case 0x7F3A75DCu: goto label_7F3A75DC;
    case 0x7F3A75E0u: goto label_7F3A75E0;
    case 0x7F3A75E4u: goto label_7F3A75E4;
    case 0x7F3A75E8u: goto label_7F3A75E8;
    case 0x7F3A75ECu: goto label_7F3A75EC;
    case 0x7F3A75F0u: goto label_7F3A75F0;
    case 0x7F3A75F4u: goto label_7F3A75F4;
    case 0x7F3A75F8u: goto label_7F3A75F8;
    case 0x7F3A75FCu: goto label_7F3A75FC;
    case 0x7F3A7600u: goto label_7F3A7600;
    case 0x7F3A7604u: goto label_7F3A7604;
    case 0x7F3A7608u: goto label_7F3A7608;
    case 0x7F3A760Cu: goto label_7F3A760C;
    case 0x7F3A7610u: goto label_7F3A7610;
    case 0x7F3A7614u: goto label_7F3A7614;
    case 0x7F3A7618u: goto label_7F3A7618;
    case 0x7F3A761Cu: goto label_7F3A761C;
    case 0x7F3A7620u: goto label_7F3A7620;
    case 0x7F3A7624u: goto label_7F3A7624;
    case 0x7F3A7628u: goto label_7F3A7628;
    case 0x7F3A762Cu: goto label_7F3A762C;
    case 0x7F3A7630u: goto label_7F3A7630;
    case 0x7F3A7634u: goto label_7F3A7634;
    case 0x7F3A7638u: goto label_7F3A7638;
    case 0x7F3A763Cu: goto label_7F3A763C;
    case 0x7F3A7640u: goto label_7F3A7640;
    case 0x7F3A7644u: goto label_7F3A7644;
    case 0x7F3A7648u: goto label_7F3A7648;
    case 0x7F3A764Cu: goto label_7F3A764C;
    case 0x7F3A7650u: goto label_7F3A7650;
    case 0x7F3A7654u: goto label_7F3A7654;
    case 0x7F3A7658u: goto label_7F3A7658;
    case 0x7F3A765Cu: goto label_7F3A765C;
    case 0x7F3A7660u: goto label_7F3A7660;
    case 0x7F3A7664u: goto label_7F3A7664;
    case 0x7F3A7668u: goto label_7F3A7668;
    case 0x7F3A766Cu: goto label_7F3A766C;
    case 0x7F3A7670u: goto label_7F3A7670;
    case 0x7F3A7674u: goto label_7F3A7674;
    case 0x7F3A7678u: goto label_7F3A7678;
    case 0x7F3A767Cu: goto label_7F3A767C;
    case 0x7F3A7680u: goto label_7F3A7680;
    case 0x7F3A7684u: goto label_7F3A7684;
    case 0x7F3A7688u: goto label_7F3A7688;
    case 0x7F3A768Cu: goto label_7F3A768C;
    case 0x7F3A7690u: goto label_7F3A7690;
    case 0x7F3A7694u: goto label_7F3A7694;
    case 0x7F3A7698u: goto label_7F3A7698;
    case 0x7F3A769Cu: goto label_7F3A769C;
    case 0x7F3A76A0u: goto label_7F3A76A0;
    case 0x7F3A76A4u: goto label_7F3A76A4;
    case 0x7F3A76A8u: goto label_7F3A76A8;
    case 0x7F3A76ACu: goto label_7F3A76AC;
    case 0x7F3A76B0u: goto label_7F3A76B0;
    case 0x7F3A76B4u: goto label_7F3A76B4;
    case 0x7F3A76B8u: goto label_7F3A76B8;
    case 0x7F3A76BCu: goto label_7F3A76BC;
    case 0x7F3A76C0u: goto label_7F3A76C0;
    case 0x7F3A76C4u: goto label_7F3A76C4;
    case 0x7F3A76C8u: goto label_7F3A76C8;
    case 0x7F3A76CCu: goto label_7F3A76CC;
    case 0x7F3A76D0u: goto label_7F3A76D0;
    case 0x7F3A76D4u: goto label_7F3A76D4;
    case 0x7F3A76D8u: goto label_7F3A76D8;
    case 0x7F3A76DCu: goto label_7F3A76DC;
    case 0x7F3A76E0u: goto label_7F3A76E0;
    case 0x7F3A76E4u: goto label_7F3A76E4;
    case 0x7F3A76E8u: goto label_7F3A76E8;
    case 0x7F3A76ECu: goto label_7F3A76EC;
    case 0x7F3A76F0u: goto label_7F3A76F0;
    case 0x7F3A76F4u: goto label_7F3A76F4;
    case 0x7F3A76F8u: goto label_7F3A76F8;
    case 0x7F3A76FCu: goto label_7F3A76FC;
    case 0x7F3A7700u: goto label_7F3A7700;
    case 0x7F3A7704u: goto label_7F3A7704;
    case 0x7F3A7708u: goto label_7F3A7708;
    case 0x7F3A770Cu: goto label_7F3A770C;
    case 0x7F3A7710u: goto label_7F3A7710;
    case 0x7F3A7714u: goto label_7F3A7714;
    case 0x7F3A7718u: goto label_7F3A7718;
    case 0x7F3A771Cu: goto label_7F3A771C;
    case 0x7F3A7720u: goto label_7F3A7720;
    case 0x7F3A7724u: goto label_7F3A7724;
    case 0x7F3A7728u: goto label_7F3A7728;
    case 0x7F3A772Cu: goto label_7F3A772C;
    case 0x7F3A7730u: goto label_7F3A7730;
    case 0x7F3A7734u: goto label_7F3A7734;
    case 0x7F3A7738u: goto label_7F3A7738;
    case 0x7F3A773Cu: goto label_7F3A773C;
    case 0x7F3A7740u: goto label_7F3A7740;
    case 0x7F3A7744u: goto label_7F3A7744;
    case 0x7F3A7748u: goto label_7F3A7748;
    case 0x7F3A774Cu: goto label_7F3A774C;
    case 0x7F3A7750u: goto label_7F3A7750;
    case 0x7F3A7754u: goto label_7F3A7754;
    case 0x7F3A7758u: goto label_7F3A7758;
    case 0x7F3A775Cu: goto label_7F3A775C;
    case 0x7F3A7760u: goto label_7F3A7760;
    case 0x7F3A7764u: goto label_7F3A7764;
    case 0x7F3A7768u: goto label_7F3A7768;
    case 0x7F3A776Cu: goto label_7F3A776C;
    case 0x7F3A7770u: goto label_7F3A7770;
    case 0x7F3A7774u: goto label_7F3A7774;
    case 0x7F3A7778u: goto label_7F3A7778;
    case 0x7F3A777Cu: goto label_7F3A777C;
    case 0x7F3A7780u: goto label_7F3A7780;
    case 0x7F3A7784u: goto label_7F3A7784;
    case 0x7F3A7788u: goto label_7F3A7788;
    case 0x7F3A778Cu: goto label_7F3A778C;
    case 0x7F3A7790u: goto label_7F3A7790;
    case 0x7F3A7794u: goto label_7F3A7794;
    case 0x7F3A7798u: goto label_7F3A7798;
    case 0x7F3A779Cu: goto label_7F3A779C;
    case 0x7F3A77A0u: goto label_7F3A77A0;
    case 0x7F3A77A4u: goto label_7F3A77A4;
    case 0x7F3A77A8u: goto label_7F3A77A8;
    case 0x7F3A77ACu: goto label_7F3A77AC;
    case 0x7F3A77B0u: goto label_7F3A77B0;
    case 0x7F3A77B4u: goto label_7F3A77B4;
    case 0x7F3A77B8u: goto label_7F3A77B8;
    case 0x7F3A77BCu: goto label_7F3A77BC;
    case 0x7F3A77C0u: goto label_7F3A77C0;
    case 0x7F3A77C4u: goto label_7F3A77C4;
    case 0x7F3A77C8u: goto label_7F3A77C8;
    case 0x7F3A77CCu: goto label_7F3A77CC;
    case 0x7F3A77D0u: goto label_7F3A77D0;
    case 0x7F3A77D4u: goto label_7F3A77D4;
    case 0x7F3A77D8u: goto label_7F3A77D8;
    case 0x7F3A77DCu: goto label_7F3A77DC;
    case 0x7F3A77E0u: goto label_7F3A77E0;
    case 0x7F3A77E4u: goto label_7F3A77E4;
    case 0x7F3A77E8u: goto label_7F3A77E8;
    case 0x7F3A77ECu: goto label_7F3A77EC;
    case 0x7F3A77F0u: goto label_7F3A77F0;
    case 0x7F3A77F4u: goto label_7F3A77F4;
    case 0x7F3A77F8u: goto label_7F3A77F8;
    case 0x7F3A77FCu: goto label_7F3A77FC;
    case 0x7F3A7800u: goto label_7F3A7800;
    case 0x7F3A7804u: goto label_7F3A7804;
    case 0x7F3A7808u: goto label_7F3A7808;
    case 0x7F3A780Cu: goto label_7F3A780C;
    case 0x7F3A7810u: goto label_7F3A7810;
    case 0x7F3A7814u: goto label_7F3A7814;
    case 0x7F3A7818u: goto label_7F3A7818;
    case 0x7F3A781Cu: goto label_7F3A781C;
    case 0x7F3A7820u: goto label_7F3A7820;
    case 0x7F3A7824u: goto label_7F3A7824;
    case 0x7F3A7828u: goto label_7F3A7828;
    case 0x7F3A782Cu: goto label_7F3A782C;
    case 0x7F3A7830u: goto label_7F3A7830;
    case 0x7F3A7834u: goto label_7F3A7834;
    case 0x7F3A7838u: goto label_7F3A7838;
    case 0x7F3A783Cu: goto label_7F3A783C;
    case 0x7F3A7840u: goto label_7F3A7840;
    case 0x7F3A7844u: goto label_7F3A7844;
    case 0x7F3A7848u: goto label_7F3A7848;
    case 0x7F3A784Cu: goto label_7F3A784C;
    case 0x7F3A7850u: goto label_7F3A7850;
    case 0x7F3A7854u: goto label_7F3A7854;
    case 0x7F3A7858u: goto label_7F3A7858;
    case 0x7F3A785Cu: goto label_7F3A785C;
    case 0x7F3A7860u: goto label_7F3A7860;
    case 0x7F3A7864u: goto label_7F3A7864;
    case 0x7F3A7868u: goto label_7F3A7868;
    case 0x7F3A786Cu: goto label_7F3A786C;
    case 0x7F3A7870u: goto label_7F3A7870;
    case 0x7F3A7874u: goto label_7F3A7874;
    case 0x7F3A7878u: goto label_7F3A7878;
    case 0x7F3A787Cu: goto label_7F3A787C;
    case 0x7F3A7880u: goto label_7F3A7880;
    case 0x7F3A7884u: goto label_7F3A7884;
    case 0x7F3A7888u: goto label_7F3A7888;
    case 0x7F3A788Cu: goto label_7F3A788C;
    case 0x7F3A7890u: goto label_7F3A7890;
    case 0x7F3A7894u: goto label_7F3A7894;
    case 0x7F3A7898u: goto label_7F3A7898;
    case 0x7F3A789Cu: goto label_7F3A789C;
    case 0x7F3A78A0u: goto label_7F3A78A0;
    case 0x7F3A78A4u: goto label_7F3A78A4;
    case 0x7F3A78A8u: goto label_7F3A78A8;
    case 0x7F3A78ACu: goto label_7F3A78AC;
    case 0x7F3A78B0u: goto label_7F3A78B0;
    case 0x7F3A78B4u: goto label_7F3A78B4;
    case 0x7F3A78B8u: goto label_7F3A78B8;
    case 0x7F3A78BCu: goto label_7F3A78BC;
    case 0x7F3A78C0u: goto label_7F3A78C0;
    case 0x7F3A78C4u: goto label_7F3A78C4;
    case 0x7F3A78C8u: goto label_7F3A78C8;
    case 0x7F3A78CCu: goto label_7F3A78CC;
    case 0x7F3A78D0u: goto label_7F3A78D0;
    case 0x7F3A78D4u: goto label_7F3A78D4;
    case 0x7F3A78D8u: goto label_7F3A78D8;
    case 0x7F3A78DCu: goto label_7F3A78DC;
    case 0x7F3A78E0u: goto label_7F3A78E0;
    case 0x7F3A78E4u: goto label_7F3A78E4;
    case 0x7F3A78E8u: goto label_7F3A78E8;
    case 0x7F3A78ECu: goto label_7F3A78EC;
    case 0x7F3A78F0u: goto label_7F3A78F0;
    case 0x7F3A78F4u: goto label_7F3A78F4;
    case 0x7F3A78F8u: goto label_7F3A78F8;
    case 0x7F3A78FCu: goto label_7F3A78FC;
    case 0x7F3A7900u: goto label_7F3A7900;
    case 0x7F3A7904u: goto label_7F3A7904;
    case 0x7F3A7908u: goto label_7F3A7908;
    case 0x7F3A790Cu: goto label_7F3A790C;
    case 0x7F3A7910u: goto label_7F3A7910;
    case 0x7F3A7914u: goto label_7F3A7914;
    case 0x7F3A7918u: goto label_7F3A7918;
    case 0x7F3A791Cu: goto label_7F3A791C;
    case 0x7F3A7920u: goto label_7F3A7920;
    case 0x7F3A7924u: goto label_7F3A7924;
    case 0x7F3A7928u: goto label_7F3A7928;
    case 0x7F3A792Cu: goto label_7F3A792C;
    case 0x7F3A7930u: goto label_7F3A7930;
    case 0x7F3A7934u: goto label_7F3A7934;
    case 0x7F3A7938u: goto label_7F3A7938;
    case 0x7F3A793Cu: goto label_7F3A793C;
    case 0x7F3A7940u: goto label_7F3A7940;
    case 0x7F3A7944u: goto label_7F3A7944;
    case 0x7F3A7948u: goto label_7F3A7948;
    case 0x7F3A794Cu: goto label_7F3A794C;
    case 0x7F3A7950u: goto label_7F3A7950;
    case 0x7F3A7954u: goto label_7F3A7954;
    case 0x7F3A7958u: goto label_7F3A7958;
    case 0x7F3A795Cu: goto label_7F3A795C;
    case 0x7F3A7960u: goto label_7F3A7960;
    case 0x7F3A7964u: goto label_7F3A7964;
    case 0x7F3A7968u: goto label_7F3A7968;
    case 0x7F3A796Cu: goto label_7F3A796C;
    case 0x7F3A7970u: goto label_7F3A7970;
    case 0x7F3A7974u: goto label_7F3A7974;
    case 0x7F3A7978u: goto label_7F3A7978;
    case 0x7F3A797Cu: goto label_7F3A797C;
    case 0x7F3A7980u: goto label_7F3A7980;
    case 0x7F3A7984u: goto label_7F3A7984;
    case 0x7F3A7988u: goto label_7F3A7988;
    case 0x7F3A798Cu: goto label_7F3A798C;
    case 0x7F3A7990u: goto label_7F3A7990;
    case 0x7F3A7994u: goto label_7F3A7994;
    case 0x7F3A7998u: goto label_7F3A7998;
    case 0x7F3A799Cu: goto label_7F3A799C;
    case 0x7F3A79A0u: goto label_7F3A79A0;
    case 0x7F3A79A4u: goto label_7F3A79A4;
    case 0x7F3A79A8u: goto label_7F3A79A8;
    case 0x7F3A79ACu: goto label_7F3A79AC;
    case 0x7F3A79B0u: goto label_7F3A79B0;
    case 0x7F3A79B4u: goto label_7F3A79B4;
    case 0x7F3A79B8u: goto label_7F3A79B8;
    case 0x7F3A79BCu: goto label_7F3A79BC;
    case 0x7F3A79C0u: goto label_7F3A79C0;
    case 0x7F3A79C4u: goto label_7F3A79C4;
    case 0x7F3A79C8u: goto label_7F3A79C8;
    case 0x7F3A79CCu: goto label_7F3A79CC;
    case 0x7F3A79D0u: goto label_7F3A79D0;
    case 0x7F3A79D4u: goto label_7F3A79D4;
    case 0x7F3A79D8u: goto label_7F3A79D8;
    case 0x7F3A79DCu: goto label_7F3A79DC;
    case 0x7F3A79E0u: goto label_7F3A79E0;
    case 0x7F3A79E4u: goto label_7F3A79E4;
    case 0x7F3A79E8u: goto label_7F3A79E8;
    case 0x7F3A79ECu: goto label_7F3A79EC;
    case 0x7F3A79F0u: goto label_7F3A79F0;
    case 0x7F3A79F4u: goto label_7F3A79F4;
    case 0x7F3A79F8u: goto label_7F3A79F8;
    case 0x7F3A79FCu: goto label_7F3A79FC;
    case 0x7F3A7A00u: goto label_7F3A7A00;
    case 0x7F3A7A04u: goto label_7F3A7A04;
    case 0x7F3A7A08u: goto label_7F3A7A08;
    case 0x7F3A7A0Cu: goto label_7F3A7A0C;
    case 0x7F3A7A10u: goto label_7F3A7A10;
    case 0x7F3A7A14u: goto label_7F3A7A14;
    case 0x7F3A7A18u: goto label_7F3A7A18;
    case 0x7F3A7A1Cu: goto label_7F3A7A1C;
    case 0x7F3A7A20u: goto label_7F3A7A20;
    case 0x7F3A7A24u: goto label_7F3A7A24;
    case 0x7F3A7A28u: goto label_7F3A7A28;
    case 0x7F3A7A2Cu: goto label_7F3A7A2C;
    case 0x7F3A7A30u: goto label_7F3A7A30;
    case 0x7F3A7A34u: goto label_7F3A7A34;
    case 0x7F3A7A38u: goto label_7F3A7A38;
    case 0x7F3A7A3Cu: goto label_7F3A7A3C;
    case 0x7F3A7A40u: goto label_7F3A7A40;
    case 0x7F3A7A44u: goto label_7F3A7A44;
    case 0x7F3A7A48u: goto label_7F3A7A48;
    case 0x7F3A7A4Cu: goto label_7F3A7A4C;
    case 0x7F3A7A50u: goto label_7F3A7A50;
    case 0x7F3A7A54u: goto label_7F3A7A54;
    case 0x7F3A7A58u: goto label_7F3A7A58;
    case 0x7F3A7A5Cu: goto label_7F3A7A5C;
    case 0x7F3A7A60u: goto label_7F3A7A60;
    case 0x7F3A7A64u: goto label_7F3A7A64;
    case 0x7F3A7A68u: goto label_7F3A7A68;
    case 0x7F3A7A6Cu: goto label_7F3A7A6C;
    case 0x7F3A7A70u: goto label_7F3A7A70;
    case 0x7F3A7A74u: goto label_7F3A7A74;
    case 0x7F3A7A78u: goto label_7F3A7A78;
    case 0x7F3A7A7Cu: goto label_7F3A7A7C;
    case 0x7F3A7A80u: goto label_7F3A7A80;
    case 0x7F3A7A84u: goto label_7F3A7A84;
    case 0x7F3A7A88u: goto label_7F3A7A88;
    case 0x7F3A7A8Cu: goto label_7F3A7A8C;
    case 0x7F3A7A90u: goto label_7F3A7A90;
    case 0x7F3A7A94u: goto label_7F3A7A94;
    case 0x7F3A7A98u: goto label_7F3A7A98;
    case 0x7F3A7A9Cu: goto label_7F3A7A9C;
    case 0x7F3A7AA0u: goto label_7F3A7AA0;
    case 0x7F3A7AA4u: goto label_7F3A7AA4;
    case 0x7F3A7AA8u: goto label_7F3A7AA8;
    case 0x7F3A7AACu: goto label_7F3A7AAC;
    case 0x7F3A7AB0u: goto label_7F3A7AB0;
    case 0x7F3A7AB4u: goto label_7F3A7AB4;
    case 0x7F3A7AB8u: goto label_7F3A7AB8;
    case 0x7F3A7ABCu: goto label_7F3A7ABC;
    case 0x7F3A7AC0u: goto label_7F3A7AC0;
    case 0x7F3A7AC4u: goto label_7F3A7AC4;
    case 0x7F3A7AC8u: goto label_7F3A7AC8;
    case 0x7F3A7ACCu: goto label_7F3A7ACC;
    case 0x7F3A7AD0u: goto label_7F3A7AD0;
    case 0x7F3A7AD4u: goto label_7F3A7AD4;
    case 0x7F3A7AD8u: goto label_7F3A7AD8;
    case 0x7F3A7ADCu: goto label_7F3A7ADC;
    case 0x7F3A7AE0u: goto label_7F3A7AE0;
    case 0x7F3A7AE4u: goto label_7F3A7AE4;
    case 0x7F3A7AE8u: goto label_7F3A7AE8;
    case 0x7F3A7AECu: goto label_7F3A7AEC;
    case 0x7F3A7AF0u: goto label_7F3A7AF0;
    case 0x7F3A7AF4u: goto label_7F3A7AF4;
    case 0x7F3A7AF8u: goto label_7F3A7AF8;
    case 0x7F3A7AFCu: goto label_7F3A7AFC;
    case 0x7F3A7B00u: goto label_7F3A7B00;
    case 0x7F3A7B04u: goto label_7F3A7B04;
    case 0x7F3A7B08u: goto label_7F3A7B08;
    case 0x7F3A7B0Cu: goto label_7F3A7B0C;
    case 0x7F3A7B10u: goto label_7F3A7B10;
    case 0x7F3A7B14u: goto label_7F3A7B14;
    case 0x7F3A7B18u: goto label_7F3A7B18;
    case 0x7F3A7B1Cu: goto label_7F3A7B1C;
    case 0x7F3A7B20u: goto label_7F3A7B20;
    case 0x7F3A7B24u: goto label_7F3A7B24;
    case 0x7F3A7B28u: goto label_7F3A7B28;
    case 0x7F3A7B2Cu: goto label_7F3A7B2C;
    case 0x7F3A7B30u: goto label_7F3A7B30;
    case 0x7F3A7B34u: goto label_7F3A7B34;
    case 0x7F3A7B38u: goto label_7F3A7B38;
    case 0x7F3A7B3Cu: goto label_7F3A7B3C;
    case 0x7F3A7B40u: goto label_7F3A7B40;
    case 0x7F3A7B44u: goto label_7F3A7B44;
    case 0x7F3A7B48u: goto label_7F3A7B48;
    case 0x7F3A7B4Cu: goto label_7F3A7B4C;
    case 0x7F3A7B50u: goto label_7F3A7B50;
    case 0x7F3A7B54u: goto label_7F3A7B54;
    case 0x7F3A7B58u: goto label_7F3A7B58;
    case 0x7F3A7B5Cu: goto label_7F3A7B5C;
    case 0x7F3A7B60u: goto label_7F3A7B60;
    case 0x7F3A7B64u: goto label_7F3A7B64;
    case 0x7F3A7B68u: goto label_7F3A7B68;
    case 0x7F3A7B6Cu: goto label_7F3A7B6C;
    case 0x7F3A7B70u: goto label_7F3A7B70;
    case 0x7F3A7B74u: goto label_7F3A7B74;
    case 0x7F3A7B78u: goto label_7F3A7B78;
    case 0x7F3A7B7Cu: goto label_7F3A7B7C;
    case 0x7F3A7B80u: goto label_7F3A7B80;
    case 0x7F3A7B84u: goto label_7F3A7B84;
    case 0x7F3A7B88u: goto label_7F3A7B88;
    case 0x7F3A7B8Cu: goto label_7F3A7B8C;
    case 0x7F3A7B90u: goto label_7F3A7B90;
    case 0x7F3A7B94u: goto label_7F3A7B94;
    case 0x7F3A7B98u: goto label_7F3A7B98;
    case 0x7F3A7B9Cu: goto label_7F3A7B9C;
    case 0x7F3A7BA0u: goto label_7F3A7BA0;
    case 0x7F3A7BA4u: goto label_7F3A7BA4;
    case 0x7F3A7BA8u: goto label_7F3A7BA8;
    case 0x7F3A7BACu: goto label_7F3A7BAC;
    case 0x7F3A7BB0u: goto label_7F3A7BB0;
    case 0x7F3A7BB4u: goto label_7F3A7BB4;
    case 0x7F3A7BB8u: goto label_7F3A7BB8;
    case 0x7F3A7BBCu: goto label_7F3A7BBC;
    case 0x7F3A7BC0u: goto label_7F3A7BC0;
    case 0x7F3A7BC4u: goto label_7F3A7BC4;
    case 0x7F3A7BC8u: goto label_7F3A7BC8;
    case 0x7F3A7BCCu: goto label_7F3A7BCC;
    case 0x7F3A7BD0u: goto label_7F3A7BD0;
    case 0x7F3A7BD4u: goto label_7F3A7BD4;
    case 0x7F3A7BD8u: goto label_7F3A7BD8;
    case 0x7F3A7BDCu: goto label_7F3A7BDC;
    case 0x7F3A7BE0u: goto label_7F3A7BE0;
    case 0x7F3A7BE4u: goto label_7F3A7BE4;
    case 0x7F3A7BE8u: goto label_7F3A7BE8;
    case 0x7F3A7BECu: goto label_7F3A7BEC;
    case 0x7F3A7BF0u: goto label_7F3A7BF0;
    case 0x7F3A7BF4u: goto label_7F3A7BF4;
    case 0x7F3A7BF8u: goto label_7F3A7BF8;
    case 0x7F3A7BFCu: goto label_7F3A7BFC;
    case 0x7F3A7C00u: goto label_7F3A7C00;
    case 0x7F3A7C04u: goto label_7F3A7C04;
    case 0x7F3A7C08u: goto label_7F3A7C08;
    case 0x7F3A7C0Cu: goto label_7F3A7C0C;
    case 0x7F3A7C10u: goto label_7F3A7C10;
    case 0x7F3A7C14u: goto label_7F3A7C14;
    case 0x7F3A7C18u: goto label_7F3A7C18;
    case 0x7F3A7C1Cu: goto label_7F3A7C1C;
    case 0x7F3A7C20u: goto label_7F3A7C20;
    case 0x7F3A7C24u: goto label_7F3A7C24;
    case 0x7F3A7C28u: goto label_7F3A7C28;
    case 0x7F3A7C2Cu: goto label_7F3A7C2C;
    case 0x7F3A7C30u: goto label_7F3A7C30;
    case 0x7F3A7C34u: goto label_7F3A7C34;
    case 0x7F3A7C38u: goto label_7F3A7C38;
    case 0x7F3A7C3Cu: goto label_7F3A7C3C;
    case 0x7F3A7C40u: goto label_7F3A7C40;
    case 0x7F3A7C44u: goto label_7F3A7C44;
    case 0x7F3A7C48u: goto label_7F3A7C48;
    case 0x7F3A7C4Cu: goto label_7F3A7C4C;
    case 0x7F3A7C50u: goto label_7F3A7C50;
    case 0x7F3A7C54u: goto label_7F3A7C54;
    case 0x7F3A7C58u: goto label_7F3A7C58;
    case 0x7F3A7C5Cu: goto label_7F3A7C5C;
    case 0x7F3A7C60u: goto label_7F3A7C60;
    case 0x7F3A7C64u: goto label_7F3A7C64;
    case 0x7F3A7C68u: goto label_7F3A7C68;
    case 0x7F3A7C6Cu: goto label_7F3A7C6C;
    case 0x7F3A7C70u: goto label_7F3A7C70;
    case 0x7F3A7C74u: goto label_7F3A7C74;
    case 0x7F3A7C78u: goto label_7F3A7C78;
    case 0x7F3A7C7Cu: goto label_7F3A7C7C;
    case 0x7F3A7C80u: goto label_7F3A7C80;
    case 0x7F3A7C84u: goto label_7F3A7C84;
    case 0x7F3A7C88u: goto label_7F3A7C88;
    case 0x7F3A7C8Cu: goto label_7F3A7C8C;
    case 0x7F3A7C90u: goto label_7F3A7C90;
    case 0x7F3A7C94u: goto label_7F3A7C94;
    case 0x7F3A7C98u: goto label_7F3A7C98;
    case 0x7F3A7C9Cu: goto label_7F3A7C9C;
    case 0x7F3A7CA0u: goto label_7F3A7CA0;
    case 0x7F3A7CA4u: goto label_7F3A7CA4;
    case 0x7F3A7CA8u: goto label_7F3A7CA8;
    case 0x7F3A7CACu: goto label_7F3A7CAC;
    case 0x7F3A7CB0u: goto label_7F3A7CB0;
    case 0x7F3A7CB4u: goto label_7F3A7CB4;
    case 0x7F3A7CB8u: goto label_7F3A7CB8;
    case 0x7F3A7CBCu: goto label_7F3A7CBC;
    case 0x7F3A7CC0u: goto label_7F3A7CC0;
    case 0x7F3A7CC4u: goto label_7F3A7CC4;
    case 0x7F3A7CC8u: goto label_7F3A7CC8;
    case 0x7F3A7CCCu: goto label_7F3A7CCC;
    case 0x7F3A7CD0u: goto label_7F3A7CD0;
    case 0x7F3A7CD4u: goto label_7F3A7CD4;
    case 0x7F3A7CD8u: goto label_7F3A7CD8;
    case 0x7F3A7CDCu: goto label_7F3A7CDC;
    case 0x7F3A7CE0u: goto label_7F3A7CE0;
    case 0x7F3A7CE4u: goto label_7F3A7CE4;
    case 0x7F3A7CE8u: goto label_7F3A7CE8;
    case 0x7F3A7CECu: goto label_7F3A7CEC;
    case 0x7F3A7CF0u: goto label_7F3A7CF0;
    case 0x7F3A7CF4u: goto label_7F3A7CF4;
    case 0x7F3A7CF8u: goto label_7F3A7CF8;
    case 0x7F3A7CFCu: goto label_7F3A7CFC;
    case 0x7F3A7D00u: goto label_7F3A7D00;
    case 0x7F3A7D04u: goto label_7F3A7D04;
    case 0x7F3A7D08u: goto label_7F3A7D08;
    case 0x7F3A7D0Cu: goto label_7F3A7D0C;
    case 0x7F3A7D10u: goto label_7F3A7D10;
    case 0x7F3A7D14u: goto label_7F3A7D14;
    case 0x7F3A7D18u: goto label_7F3A7D18;
    case 0x7F3A7D1Cu: goto label_7F3A7D1C;
    case 0x7F3A7D20u: goto label_7F3A7D20;
    case 0x7F3A7D24u: goto label_7F3A7D24;
    case 0x7F3A7D28u: goto label_7F3A7D28;
    case 0x7F3A7D2Cu: goto label_7F3A7D2C;
    case 0x7F3A7D30u: goto label_7F3A7D30;
    case 0x7F3A7D34u: goto label_7F3A7D34;
    case 0x7F3A7D38u: goto label_7F3A7D38;
    case 0x7F3A7D3Cu: goto label_7F3A7D3C;
    case 0x7F3A7D40u: goto label_7F3A7D40;
    case 0x7F3A7D44u: goto label_7F3A7D44;
    case 0x7F3A7D48u: goto label_7F3A7D48;
    case 0x7F3A7D4Cu: goto label_7F3A7D4C;
    case 0x7F3A7D50u: goto label_7F3A7D50;
    case 0x7F3A7D54u: goto label_7F3A7D54;
    case 0x7F3A7D58u: goto label_7F3A7D58;
    case 0x7F3A7D5Cu: goto label_7F3A7D5C;
    case 0x7F3A7D60u: goto label_7F3A7D60;
    case 0x7F3A7D64u: goto label_7F3A7D64;
    case 0x7F3A7D68u: goto label_7F3A7D68;
    case 0x7F3A7D6Cu: goto label_7F3A7D6C;
    case 0x7F3A7D70u: goto label_7F3A7D70;
    case 0x7F3A7D74u: goto label_7F3A7D74;
    case 0x7F3A7D78u: goto label_7F3A7D78;
    case 0x7F3A7D7Cu: goto label_7F3A7D7C;
    case 0x7F3A7D80u: goto label_7F3A7D80;
    case 0x7F3A7D84u: goto label_7F3A7D84;
    case 0x7F3A7D88u: goto label_7F3A7D88;
    case 0x7F3A7D8Cu: goto label_7F3A7D8C;
    case 0x7F3A7D90u: goto label_7F3A7D90;
    case 0x7F3A7D94u: goto label_7F3A7D94;
    case 0x7F3A7D98u: goto label_7F3A7D98;
    case 0x7F3A7D9Cu: goto label_7F3A7D9C;
    case 0x7F3A7DA0u: goto label_7F3A7DA0;
    case 0x7F3A7DA4u: goto label_7F3A7DA4;
    case 0x7F3A7DA8u: goto label_7F3A7DA8;
    case 0x7F3A7DACu: goto label_7F3A7DAC;
    case 0x7F3A7DB0u: goto label_7F3A7DB0;
    case 0x7F3A7DB4u: goto label_7F3A7DB4;
    case 0x7F3A7DB8u: goto label_7F3A7DB8;
    case 0x7F3A7DBCu: goto label_7F3A7DBC;
    case 0x7F3A7DC0u: goto label_7F3A7DC0;
    case 0x7F3A7DC4u: goto label_7F3A7DC4;
    case 0x7F3A7DC8u: goto label_7F3A7DC8;
    case 0x7F3A7DCCu: goto label_7F3A7DCC;
    case 0x7F3A7DD0u: goto label_7F3A7DD0;
    case 0x7F3A7DD4u: goto label_7F3A7DD4;
    case 0x7F3A7DD8u: goto label_7F3A7DD8;
    case 0x7F3A7DDCu: goto label_7F3A7DDC;
    case 0x7F3A7DE0u: goto label_7F3A7DE0;
    case 0x7F3A7DE4u: goto label_7F3A7DE4;
    case 0x7F3A7DE8u: goto label_7F3A7DE8;
    case 0x7F3A7DECu: goto label_7F3A7DEC;
    case 0x7F3A7DF0u: goto label_7F3A7DF0;
    case 0x7F3A7DF4u: goto label_7F3A7DF4;
    case 0x7F3A7DF8u: goto label_7F3A7DF8;
    case 0x7F3A7DFCu: goto label_7F3A7DFC;
    case 0x7F3A7E00u: goto label_7F3A7E00;
    case 0x7F3A7E04u: goto label_7F3A7E04;
    case 0x7F3A7E08u: goto label_7F3A7E08;
    case 0x7F3A7E0Cu: goto label_7F3A7E0C;
    case 0x7F3A7E10u: goto label_7F3A7E10;
    case 0x7F3A7E14u: goto label_7F3A7E14;
    case 0x7F3A7E18u: goto label_7F3A7E18;
    case 0x7F3A7E1Cu: goto label_7F3A7E1C;
    case 0x7F3A7E20u: goto label_7F3A7E20;
    case 0x7F3A7E24u: goto label_7F3A7E24;
    case 0x7F3A7E28u: goto label_7F3A7E28;
    case 0x7F3A7E2Cu: goto label_7F3A7E2C;
    case 0x7F3A7E30u: goto label_7F3A7E30;
    case 0x7F3A7E34u: goto label_7F3A7E34;
    case 0x7F3A7E38u: goto label_7F3A7E38;
    case 0x7F3A7E3Cu: goto label_7F3A7E3C;
    case 0x7F3A7E40u: goto label_7F3A7E40;
    case 0x7F3A7E44u: goto label_7F3A7E44;
    case 0x7F3A7E48u: goto label_7F3A7E48;
    case 0x7F3A7E4Cu: goto label_7F3A7E4C;
    case 0x7F3A7E50u: goto label_7F3A7E50;
    case 0x7F3A7E54u: goto label_7F3A7E54;
    case 0x7F3A7E58u: goto label_7F3A7E58;
    case 0x7F3A7E5Cu: goto label_7F3A7E5C;
    case 0x7F3A7E60u: goto label_7F3A7E60;
    case 0x7F3A7E64u: goto label_7F3A7E64;
    case 0x7F3A7E68u: goto label_7F3A7E68;
    case 0x7F3A7E6Cu: goto label_7F3A7E6C;
    case 0x7F3A7E70u: goto label_7F3A7E70;
    case 0x7F3A7E74u: goto label_7F3A7E74;
    case 0x7F3A7E78u: goto label_7F3A7E78;
    case 0x7F3A7E7Cu: goto label_7F3A7E7C;
    case 0x7F3A7E80u: goto label_7F3A7E80;
    case 0x7F3A7E84u: goto label_7F3A7E84;
    case 0x7F3A7E88u: goto label_7F3A7E88;
    case 0x7F3A7E8Cu: goto label_7F3A7E8C;
    case 0x7F3A7E90u: goto label_7F3A7E90;
    case 0x7F3A7E94u: goto label_7F3A7E94;
    case 0x7F3A7E98u: goto label_7F3A7E98;
    case 0x7F3A7E9Cu: goto label_7F3A7E9C;
    case 0x7F3A7EA0u: goto label_7F3A7EA0;
    case 0x7F3A7EA4u: goto label_7F3A7EA4;
    case 0x7F3A7EA8u: goto label_7F3A7EA8;
    case 0x7F3A7EACu: goto label_7F3A7EAC;
    case 0x7F3A7EB0u: goto label_7F3A7EB0;
    case 0x7F3A7EB4u: goto label_7F3A7EB4;
    case 0x7F3A7EB8u: goto label_7F3A7EB8;
    case 0x7F3A7EBCu: goto label_7F3A7EBC;
    case 0x7F3A7EC0u: goto label_7F3A7EC0;
    case 0x7F3A7EC4u: goto label_7F3A7EC4;
    case 0x7F3A7EC8u: goto label_7F3A7EC8;
    case 0x7F3A7ECCu: goto label_7F3A7ECC;
    case 0x7F3A7ED0u: goto label_7F3A7ED0;
    case 0x7F3A7ED4u: goto label_7F3A7ED4;
    case 0x7F3A7ED8u: goto label_7F3A7ED8;
    case 0x7F3A7EDCu: goto label_7F3A7EDC;
    case 0x7F3A7EE0u: goto label_7F3A7EE0;
    case 0x7F3A7EE4u: goto label_7F3A7EE4;
    case 0x7F3A7EE8u: goto label_7F3A7EE8;
    case 0x7F3A7EECu: goto label_7F3A7EEC;
    case 0x7F3A7EF0u: goto label_7F3A7EF0;
    case 0x7F3A7EF4u: goto label_7F3A7EF4;
    case 0x7F3A7EF8u: goto label_7F3A7EF8;
    case 0x7F3A7EFCu: goto label_7F3A7EFC;
    case 0x7F3A7F00u: goto label_7F3A7F00;
    case 0x7F3A7F04u: goto label_7F3A7F04;
    case 0x7F3A7F08u: goto label_7F3A7F08;
    case 0x7F3A7F0Cu: goto label_7F3A7F0C;
    case 0x7F3A7F10u: goto label_7F3A7F10;
    case 0x7F3A7F14u: goto label_7F3A7F14;
    case 0x7F3A7F18u: goto label_7F3A7F18;
    case 0x7F3A7F1Cu: goto label_7F3A7F1C;
    case 0x7F3A7F20u: goto label_7F3A7F20;
    case 0x7F3A7F24u: goto label_7F3A7F24;
    case 0x7F3A7F28u: goto label_7F3A7F28;
    case 0x7F3A7F2Cu: goto label_7F3A7F2C;
    case 0x7F3A7F30u: goto label_7F3A7F30;
    case 0x7F3A7F34u: goto label_7F3A7F34;
    case 0x7F3A7F38u: goto label_7F3A7F38;
    case 0x7F3A7F3Cu: goto label_7F3A7F3C;
    case 0x7F3A7F40u: goto label_7F3A7F40;
    case 0x7F3A7F44u: goto label_7F3A7F44;
    case 0x7F3A7F48u: goto label_7F3A7F48;
    case 0x7F3A7F4Cu: goto label_7F3A7F4C;
    case 0x7F3A7F50u: goto label_7F3A7F50;
    case 0x7F3A7F54u: goto label_7F3A7F54;
    case 0x7F3A7F58u: goto label_7F3A7F58;
    case 0x7F3A7F5Cu: goto label_7F3A7F5C;
    case 0x7F3A7F60u: goto label_7F3A7F60;
    case 0x7F3A7F64u: goto label_7F3A7F64;
    case 0x7F3A7F68u: goto label_7F3A7F68;
    case 0x7F3A7F6Cu: goto label_7F3A7F6C;
    case 0x7F3A7F70u: goto label_7F3A7F70;
    case 0x7F3A7F74u: goto label_7F3A7F74;
    case 0x7F3A7F78u: goto label_7F3A7F78;
    case 0x7F3A7F7Cu: goto label_7F3A7F7C;
    case 0x7F3A7F80u: goto label_7F3A7F80;
    case 0x7F3A7F84u: goto label_7F3A7F84;
    case 0x7F3A7F88u: goto label_7F3A7F88;
    case 0x7F3A7F8Cu: goto label_7F3A7F8C;
    case 0x7F3A7F90u: goto label_7F3A7F90;
    case 0x7F3A7F94u: goto label_7F3A7F94;
    case 0x7F3A7F98u: goto label_7F3A7F98;
    case 0x7F3A7F9Cu: goto label_7F3A7F9C;
    case 0x7F3A7FA0u: goto label_7F3A7FA0;
    case 0x7F3A7FA4u: goto label_7F3A7FA4;
    case 0x7F3A7FA8u: goto label_7F3A7FA8;
    case 0x7F3A7FACu: goto label_7F3A7FAC;
    case 0x7F3A7FB0u: goto label_7F3A7FB0;
    case 0x7F3A7FB4u: goto label_7F3A7FB4;
    case 0x7F3A7FB8u: goto label_7F3A7FB8;
    case 0x7F3A7FBCu: goto label_7F3A7FBC;
    case 0x7F3A7FC0u: goto label_7F3A7FC0;
    case 0x7F3A7FC4u: goto label_7F3A7FC4;
    case 0x7F3A7FC8u: goto label_7F3A7FC8;
    case 0x7F3A7FCCu: goto label_7F3A7FCC;
    case 0x7F3A7FD0u: goto label_7F3A7FD0;
    case 0x7F3A7FD4u: goto label_7F3A7FD4;
    case 0x7F3A7FD8u: goto label_7F3A7FD8;
    case 0x7F3A7FDCu: goto label_7F3A7FDC;
    case 0x7F3A7FE0u: goto label_7F3A7FE0;
    case 0x7F3A7FE4u: goto label_7F3A7FE4;
    case 0x7F3A7FE8u: goto label_7F3A7FE8;
    case 0x7F3A7FECu: goto label_7F3A7FEC;
    case 0x7F3A7FF0u: goto label_7F3A7FF0;
    case 0x7F3A7FF4u: goto label_7F3A7FF4;
    case 0x7F3A7FF8u: goto label_7F3A7FF8;
    case 0x7F3A7FFCu: goto label_7F3A7FFC;
    case 0x7F3A8000u: goto label_7F3A8000;
    case 0x7F3A8004u: goto label_7F3A8004;
    case 0x7F3A8008u: goto label_7F3A8008;
    case 0x7F3A800Cu: goto label_7F3A800C;
    case 0x7F3A8010u: goto label_7F3A8010;
    case 0x7F3A8014u: goto label_7F3A8014;
    case 0x7F3A8018u: goto label_7F3A8018;
    case 0x7F3A801Cu: goto label_7F3A801C;
    case 0x7F3A8020u: goto label_7F3A8020;
    case 0x7F3A8024u: goto label_7F3A8024;
    case 0x7F3A8028u: goto label_7F3A8028;
    case 0x7F3A802Cu: goto label_7F3A802C;
    case 0x7F3A8030u: goto label_7F3A8030;
    case 0x7F3A8034u: goto label_7F3A8034;
    case 0x7F3A8038u: goto label_7F3A8038;
    case 0x7F3A803Cu: goto label_7F3A803C;
    case 0x7F3A8040u: goto label_7F3A8040;
    case 0x7F3A8044u: goto label_7F3A8044;
    case 0x7F3A8048u: goto label_7F3A8048;
    case 0x7F3A804Cu: goto label_7F3A804C;
    case 0x7F3A8050u: goto label_7F3A8050;
    case 0x7F3A8054u: goto label_7F3A8054;
    case 0x7F3A8058u: goto label_7F3A8058;
    case 0x7F3A805Cu: goto label_7F3A805C;
    case 0x7F3A8060u: goto label_7F3A8060;
    case 0x7F3A8064u: goto label_7F3A8064;
    case 0x7F3A8068u: goto label_7F3A8068;
    case 0x7F3A806Cu: goto label_7F3A806C;
    case 0x7F3A8070u: goto label_7F3A8070;
    case 0x7F3A8074u: goto label_7F3A8074;
    case 0x7F3A8078u: goto label_7F3A8078;
    case 0x7F3A807Cu: goto label_7F3A807C;
    case 0x7F3A8080u: goto label_7F3A8080;
    case 0x7F3A8084u: goto label_7F3A8084;
    case 0x7F3A8088u: goto label_7F3A8088;
    case 0x7F3A808Cu: goto label_7F3A808C;
    case 0x7F3A8090u: goto label_7F3A8090;
    case 0x7F3A8094u: goto label_7F3A8094;
    case 0x7F3A8098u: goto label_7F3A8098;
    case 0x7F3A809Cu: goto label_7F3A809C;
    case 0x7F3A80A0u: goto label_7F3A80A0;
    case 0x7F3A80A4u: goto label_7F3A80A4;
    case 0x7F3A80A8u: goto label_7F3A80A8;
    case 0x7F3A80ACu: goto label_7F3A80AC;
    case 0x7F3A80B0u: goto label_7F3A80B0;
    case 0x7F3A80B4u: goto label_7F3A80B4;
    case 0x7F3A80B8u: goto label_7F3A80B8;
    case 0x7F3A80BCu: goto label_7F3A80BC;
    case 0x7F3A80C0u: goto label_7F3A80C0;
    case 0x7F3A80C4u: goto label_7F3A80C4;
    case 0x7F3A80C8u: goto label_7F3A80C8;
    case 0x7F3A80CCu: goto label_7F3A80CC;
    case 0x7F3A80D0u: goto label_7F3A80D0;
    case 0x7F3A80D4u: goto label_7F3A80D4;
    case 0x7F3A80D8u: goto label_7F3A80D8;
    case 0x7F3A80DCu: goto label_7F3A80DC;
    case 0x7F3A80E0u: goto label_7F3A80E0;
    case 0x7F3A80E4u: goto label_7F3A80E4;
    case 0x7F3A80E8u: goto label_7F3A80E8;
    default: return;
    }
label_7F3A40EC:
    ctx->pc = 0x7F3A40ECu;
    ctx->downcount -= 2;
    // 7F3A40EC: stw     r30, 4988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4988);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3A40F0:
    ctx->pc = 0x7F3A40F0u;
    // 7F3A40F0: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F3A40F4u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F3A40F4:
    ctx->pc = 0x7F3A40F4u;
    ctx->downcount -= 2;
    // 7F3A40F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A40F8:
    ctx->pc = 0x7F3A40F8u;
    // 7F3A40F8: bl      0x7F3CC708
    {
            ctx->lr = 0x7F3A40FCu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F3A40FC:
    ctx->pc = 0x7F3A40FCu;
    ctx->downcount -= 3;
    // 7F3A40FC: sth     r3, 4854(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4100:
    ctx->pc = 0x7F3A4100u;
    // 7F3A4100: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A4104:
    ctx->pc = 0x7F3A4104u;
    // 7F3A4104: b       0x7F3A4164
    {
            goto label_7F3A4164;
    }

label_7F3A4108:
    ctx->pc = 0x7F3A4108u;
    ctx->downcount -= 4;
    // 7F3A4108: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A410C:
    ctx->pc = 0x7F3A410Cu;
    // 7F3A410C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A4110:
    ctx->pc = 0x7F3A4110u;
    // 7F3A4110: addi    r5, r29, 48
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(48);

label_7F3A4114:
    ctx->pc = 0x7F3A4114u;
    // 7F3A4114: bl      0x7F1029CC
    {
            ctx->lr = 0x7F3A4118u;
            ctx->pc = 0x7F1029CCu;
            return;
    }

label_7F3A4118:
    ctx->pc = 0x7F3A4118u;
    ctx->downcount -= 2;
    // 7F3A4118: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A411C:
    ctx->pc = 0x7F3A411Cu;
    // 7F3A411C: bl      0x7F01A17C
    {
            ctx->lr = 0x7F3A4120u;
            ctx->pc = 0x7F01A17Cu;
            return;
    }

label_7F3A4120:
    ctx->pc = 0x7F3A4120u;
    ctx->downcount -= 11;
    // 7F3A4120: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4120u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4124:
    ctx->pc = 0x7F3A4124u;
    // 7F3A4124: stfs     f0, 5000(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4124u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5000);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A4128:
    ctx->pc = 0x7F3A4128u;
    // 7F3A4128: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4128u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A412C:
    ctx->pc = 0x7F3A412Cu;
    // 7F3A412C: stfs     f0, 5004(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3A412Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5004);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A4130:
    ctx->pc = 0x7F3A4130u;
    // 7F3A4130: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4130u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4134:
    ctx->pc = 0x7F3A4134u;
    // 7F3A4134: stfs     f0, 5008(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4134u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5008);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A4138:
    ctx->pc = 0x7F3A4138u;
    // 7F3A4138: stw     r31, 4988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4988);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A413C:
    ctx->pc = 0x7F3A413Cu;
    // 7F3A413C: addi    r3, r29, 5000
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(5000);

label_7F3A4140:
    ctx->pc = 0x7F3A4140u;
    // 7F3A4140: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F3A4144:
    ctx->pc = 0x7F3A4144u;
    // 7F3A4144: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A4148:
    ctx->pc = 0x7F3A4148u;
    // 7F3A4148: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F3A414Cu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F3A414C:
    ctx->pc = 0x7F3A414Cu;
    ctx->downcount -= 5;
    // 7F3A414C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A4150:
    ctx->pc = 0x7F3A4150u;
    // 7F3A4150: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A4154:
    ctx->pc = 0x7F3A4154u;
    // 7F3A4154: lfs     f0, -21480(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4154u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4158:
    ctx->pc = 0x7F3A4158u;
    // 7F3A4158: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A415C:
    ctx->pc = 0x7F3A415Cu;
    // 7F3A415C: bl      0x7F3CC708
    {
            ctx->lr = 0x7F3A4160u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F3A4160:
    ctx->pc = 0x7F3A4160u;
    ctx->downcount -= 1;
    // 7F3A4160: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F3A4164:
    ctx->pc = 0x7F3A4164u;
    ctx->downcount -= 16;
    // 7F3A4164: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A4168:
    ctx->pc = 0x7F3A4168u;
    // 7F3A4168: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A416C:
    ctx->pc = 0x7F3A416Cu;
    // 7F3A416C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A4170:
    ctx->pc = 0x7F3A4170u;
    // 7F3A4170: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3A4174:
    ctx->pc = 0x7F3A4174u;
    // 7F3A4174: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4178:
    ctx->pc = 0x7F3A4178u;
    ctx->downcount -= 12;
    // 7F3A4178: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A417C:
    ctx->pc = 0x7F3A417Cu;
    // 7F3A417C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A4180:
    ctx->pc = 0x7F3A4180u;
    // 7F3A4180: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4184:
    ctx->pc = 0x7F3A4184u;
    // 7F3A4184: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A4188:
    ctx->pc = 0x7F3A4188u;
    // 7F3A4188: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A418C:
    ctx->pc = 0x7F3A418Cu;
    // 7F3A418C: lwz     r4, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A4190:
    ctx->pc = 0x7F3A4190u;
    // 7F3A4190: rlwinm r0, r4, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 26u) & 0xFC000000u;
    }

label_7F3A4194:
    ctx->pc = 0x7F3A4194u;
    // 7F3A4194: rlwinm r4, r4, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00000001u;
    }

label_7F3A4198:
    ctx->pc = 0x7F3A4198u;
    // 7F3A4198: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A419C:
    ctx->pc = 0x7F3A419Cu;
    // 7F3A419C: rlwinm r0, r0, 6, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFFFu;
    }

label_7F3A41A0:
    ctx->pc = 0x7F3A41A0u;
    // 7F3A41A0: add.   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_7F3A41A4:
    ctx->pc = 0x7F3A41A4u;
    // 7F3A41A4: bc    4, 2, 0x7F3A41B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A41B8;
        }
    }

label_7F3A41A8:
    ctx->pc = 0x7F3A41A8u;
    ctx->downcount -= 4;
    // 7F3A41A8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A41AC:
    ctx->pc = 0x7F3A41ACu;
    // 7F3A41AC: stw     r0, 4984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A41B0:
    ctx->pc = 0x7F3A41B0u;
    // 7F3A41B0: stw     r0, 4972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4972);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A41B4:
    ctx->pc = 0x7F3A41B4u;
    // 7F3A41B4: bl      0x7F3A4058
    {
            ctx->lr = 0x7F3A41B8u;
            ctx->pc = 0x7F3A4058u;
            return;
    }

label_7F3A41B8:
    ctx->pc = 0x7F3A41B8u;
    ctx->downcount -= 2;
    // 7F3A41B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A41BC:
    ctx->pc = 0x7F3A41BCu;
    // 7F3A41BC: bl      0x7F3A4058
    {
            ctx->lr = 0x7F3A41C0u;
            ctx->pc = 0x7F3A4058u;
            return;
    }

label_7F3A41C0:
    ctx->pc = 0x7F3A41C0u;
    ctx->downcount -= 4;
    // 7F3A41C0: sth     r3, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A41C4:
    ctx->pc = 0x7F3A41C4u;
    // 7F3A41C4: lha     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A41C8:
    ctx->pc = 0x7F3A41C8u;
    // 7F3A41C8: cmpwi   r0, 0
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

label_7F3A41CC:
    ctx->pc = 0x7F3A41CCu;
    // 7F3A41CC: bc    4, 0, 0x7F3A41D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A41D8;
        }
    }

label_7F3A41D0:
    ctx->pc = 0x7F3A41D0u;
    ctx->downcount -= 2;
    // 7F3A41D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A41D4:
    ctx->pc = 0x7F3A41D4u;
    // 7F3A41D4: b       0x7F3A41DC
    {
            goto label_7F3A41DC;
    }

label_7F3A41D8:
    ctx->pc = 0x7F3A41D8u;
    ctx->downcount -= 1;
    // 7F3A41D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A41DC:
    ctx->pc = 0x7F3A41DCu;
    ctx->downcount -= 6;
    // 7F3A41DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A41E0:
    ctx->pc = 0x7F3A41E0u;
    // 7F3A41E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A41E4:
    ctx->pc = 0x7F3A41E4u;
    // 7F3A41E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A41E8:
    ctx->pc = 0x7F3A41E8u;
    // 7F3A41E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A41EC:
    ctx->pc = 0x7F3A41ECu;
    // 7F3A41EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A41F0:
    ctx->pc = 0x7F3A41F0u;
    ctx->downcount -= 35;
    // 7F3A41F0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A41F4:
    ctx->pc = 0x7F3A41F4u;
    // 7F3A41F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A41F8:
    ctx->pc = 0x7F3A41F8u;
    // 7F3A41F8: neg  r5, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[5] = (~a) + 1u;
    }

label_7F3A41FC:
    ctx->pc = 0x7F3A41FCu;
    // 7F3A41FC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4200:
    ctx->pc = 0x7F3A4200u;
    // 7F3A4200: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3A4204:
    ctx->pc = 0x7F3A4204u;
    // 7F3A4204: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A4208:
    ctx->pc = 0x7F3A4208u;
    // 7F3A4208: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A420C:
    ctx->pc = 0x7F3A420Cu;
    // 7F3A420C: lfs     f1, 4948(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A420Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A4210:
    ctx->pc = 0x7F3A4210u;
    // 7F3A4210: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A4214:
    ctx->pc = 0x7F3A4214u;
    // 7F3A4214: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4214u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4218:
    ctx->pc = 0x7F3A4218u;
    // 7F3A4218: lfd     f2, -21488(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4218u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21488);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A421C:
    ctx->pc = 0x7F3A421Cu;
    // 7F3A421C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A421Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F3A4220:
    ctx->pc = 0x7F3A4220u;
    // 7F3A4220: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4224:
    ctx->pc = 0x7F3A4224u;
    // 7F3A4224: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4228:
    ctx->pc = 0x7F3A4228u;
    // 7F3A4228: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4228u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3A422C:
    ctx->pc = 0x7F3A422Cu;
    // 7F3A422C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A422Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3A4230:
    ctx->pc = 0x7F3A4230u;
    // 7F3A4230: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4234:
    ctx->pc = 0x7F3A4234u;
    // 7F3A4234: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3A4238:
    ctx->pc = 0x7F3A4238u;
    // 7F3A4238: cmpw    r3, r5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A423C:
    ctx->pc = 0x7F3A423Cu;
    // 7F3A423C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4240:
    ctx->pc = 0x7F3A4240u;
    // 7F3A4240: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A4244:
    ctx->pc = 0x7F3A4244u;
    // 7F3A4244: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3A4244u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F3A4248:
    ctx->pc = 0x7F3A4248u;
    // 7F3A4248: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A424C:
    ctx->pc = 0x7F3A424Cu;
    // 7F3A424C: lfs     f1, 4956(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A424Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A4250:
    ctx->pc = 0x7F3A4250u;
    // 7F3A4250: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4250u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4254:
    ctx->pc = 0x7F3A4254u;
    // 7F3A4254: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4254u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F3A4258:
    ctx->pc = 0x7F3A4258u;
    // 7F3A4258: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4258u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3A425C:
    ctx->pc = 0x7F3A425Cu;
    // 7F3A425C: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A425Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3A4260:
    ctx->pc = 0x7F3A4260u;
    // 7F3A4260: lwz     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A4264:
    ctx->pc = 0x7F3A4264u;
    // 7F3A4264: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F3A4268:
    ctx->pc = 0x7F3A4268u;
    // 7F3A4268: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A426C:
    ctx->pc = 0x7F3A426Cu;
    // 7F3A426C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A426Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A4270:
    ctx->pc = 0x7F3A4270u;
    // 7F3A4270: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F3A4270u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F3A4274:
    ctx->pc = 0x7F3A4274u;
    // 7F3A4274: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A4278:
    ctx->pc = 0x7F3A4278u;
    // 7F3A4278: bc    4, 1, 0x7F3A429C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A429C;
        }
    }

label_7F3A427C:
    ctx->pc = 0x7F3A427Cu;
    ctx->downcount -= 2;
    // 7F3A427C: cmpw    r3, r4
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

label_7F3A4280:
    ctx->pc = 0x7F3A4280u;
    // 7F3A4280: bc    4, 0, 0x7F3A429C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A429C;
        }
    }

label_7F3A4284:
    ctx->pc = 0x7F3A4284u;
    ctx->downcount -= 2;
    // 7F3A4284: cmpw    r6, r5
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

label_7F3A4288:
    ctx->pc = 0x7F3A4288u;
    // 7F3A4288: bc    4, 1, 0x7F3A429C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A429C;
        }
    }

label_7F3A428C:
    ctx->pc = 0x7F3A428Cu;
    ctx->downcount -= 2;
    // 7F3A428C: cmpw    r6, r4
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

label_7F3A4290:
    ctx->pc = 0x7F3A4290u;
    // 7F3A4290: bc    4, 0, 0x7F3A429C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A429C;
        }
    }

label_7F3A4294:
    ctx->pc = 0x7F3A4294u;
    ctx->downcount -= 2;
    // 7F3A4294: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A4298:
    ctx->pc = 0x7F3A4298u;
    // 7F3A4298: b       0x7F3A42AC
    {
            goto label_7F3A42AC;
    }

label_7F3A429C:
    ctx->pc = 0x7F3A429Cu;
    ctx->downcount -= 2;
    // 7F3A429C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A42A0:
    ctx->pc = 0x7F3A42A0u;
    // 7F3A42A0: bl      0x7F3CC708
    {
            ctx->lr = 0x7F3A42A4u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F3A42A4:
    ctx->pc = 0x7F3A42A4u;
    ctx->downcount -= 2;
    // 7F3A42A4: sth     r3, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A42A8:
    ctx->pc = 0x7F3A42A8u;
    // 7F3A42A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A42AC:
    ctx->pc = 0x7F3A42ACu;
    ctx->downcount -= 6;
    // 7F3A42AC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A42B0:
    ctx->pc = 0x7F3A42B0u;
    // 7F3A42B0: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A42B4:
    ctx->pc = 0x7F3A42B4u;
    // 7F3A42B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A42B8:
    ctx->pc = 0x7F3A42B8u;
    // 7F3A42B8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F3A42BC:
    ctx->pc = 0x7F3A42BCu;
    // 7F3A42BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A42C0:
    ctx->pc = 0x7F3A42C0u;
    ctx->downcount -= 8;
    // 7F3A42C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A42C4:
    ctx->pc = 0x7F3A42C4u;
    // 7F3A42C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A42C8:
    ctx->pc = 0x7F3A42C8u;
    // 7F3A42C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A42CC:
    ctx->pc = 0x7F3A42CCu;
    // 7F3A42CC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A42D0:
    ctx->pc = 0x7F3A42D0u;
    // 7F3A42D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A42D4:
    ctx->pc = 0x7F3A42D4u;
    // 7F3A42D4: lwz     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A42D8:
    ctx->pc = 0x7F3A42D8u;
    // 7F3A42D8: cmpwi   r0, 60
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

label_7F3A42DC:
    ctx->pc = 0x7F3A42DCu;
    // 7F3A42DC: bc    4, 1, 0x7F3A4394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4394;
        }
    }

label_7F3A42E0:
    ctx->pc = 0x7F3A42E0u;
    ctx->downcount -= 4;
    // 7F3A42E0: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A42E4:
    ctx->pc = 0x7F3A42E4u;
    // 7F3A42E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A42E8:
    ctx->pc = 0x7F3A42E8u;
    // 7F3A42E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A42EC:
    ctx->pc = 0x7F3A42ECu;
    // 7F3A42EC: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A42F0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A42F0:
    ctx->pc = 0x7F3A42F0u;
    ctx->downcount -= 2;
    // 7F3A42F0: cmpwi   r3, 0
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

label_7F3A42F4:
    ctx->pc = 0x7F3A42F4u;
    // 7F3A42F4: bc    4, 2, 0x7F3A4394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4394;
        }
    }

label_7F3A42F8:
    ctx->pc = 0x7F3A42F8u;
    ctx->downcount -= 4;
    // 7F3A42F8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A42FC:
    ctx->pc = 0x7F3A42FCu;
    // 7F3A42FC: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4300:
    ctx->pc = 0x7F3A4300u;
    // 7F3A4300: cmpwi   r0, 0
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

label_7F3A4304:
    ctx->pc = 0x7F3A4304u;
    // 7F3A4304: bc    4, 2, 0x7F3A4380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4380;
        }
    }

label_7F3A4308:
    ctx->pc = 0x7F3A4308u;
    ctx->downcount -= 6;
    // 7F3A4308: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A430C:
    ctx->pc = 0x7F3A430Cu;
    // 7F3A430C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4310:
    ctx->pc = 0x7F3A4310u;
    // 7F3A4310: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4314:
    ctx->pc = 0x7F3A4314u;
    // 7F3A4314: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4318:
    ctx->pc = 0x7F3A4318u;
    // 7F3A4318: cmpwi   r0, 0
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

label_7F3A431C:
    ctx->pc = 0x7F3A431Cu;
    // 7F3A431C: bc    4, 1, 0x7F3A4380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4380;
        }
    }

label_7F3A4320:
    ctx->pc = 0x7F3A4320u;
    ctx->downcount -= 3;
    // 7F3A4320: lbz     r0, 4927(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4927);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A4324:
    ctx->pc = 0x7F3A4324u;
    // 7F3A4324: rlwinm. r0, r0, 0, 29, 29
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

label_7F3A4328:
    ctx->pc = 0x7F3A4328u;
    // 7F3A4328: bc    12, 2, 0x7F3A43A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A43A0;
        }
    }

label_7F3A432C:
    ctx->pc = 0x7F3A432Cu;
    ctx->downcount -= 6;
    // 7F3A432C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A4330:
    ctx->pc = 0x7F3A4330u;
    // 7F3A4330: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4334:
    ctx->pc = 0x7F3A4334u;
    // 7F3A4334: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4338:
    ctx->pc = 0x7F3A4338u;
    // 7F3A4338: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A433C:
    ctx->pc = 0x7F3A433Cu;
    // 7F3A433C: lwz     r3, 5108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4340:
    ctx->pc = 0x7F3A4340u;
    // 7F3A4340: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4344u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4344:
    ctx->pc = 0x7F3A4344u;
    ctx->downcount -= 14;
    // 7F3A4344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4348:
    ctx->pc = 0x7F3A4348u;
    // 7F3A4348: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A434C:
    ctx->pc = 0x7F3A434Cu;
    // 7F3A434C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4350:
    ctx->pc = 0x7F3A4350u;
    // 7F3A4350: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4354:
    ctx->pc = 0x7F3A4354u;
    // 7F3A4354: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4358:
    ctx->pc = 0x7F3A4358u;
    // 7F3A4358: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A435C:
    ctx->pc = 0x7F3A435Cu;
    // 7F3A435C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4360:
    ctx->pc = 0x7F3A4360u;
    // 7F3A4360: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4364:
    ctx->pc = 0x7F3A4364u;
    // 7F3A4364: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4368:
    ctx->pc = 0x7F3A4368u;
    // 7F3A4368: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A436C:
    ctx->pc = 0x7F3A436Cu;
    // 7F3A436C: lwz     r0, 5208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4370:
    ctx->pc = 0x7F3A4370u;
    // 7F3A4370: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A4374:
    ctx->pc = 0x7F3A4374u;
    // 7F3A4374: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4378:
    ctx->pc = 0x7F3A4378u;
    // 7F3A4378: bl      0x800501FC
    {
            ctx->lr = 0x7F3A437Cu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A437C:
    ctx->pc = 0x7F3A437Cu;
    ctx->downcount -= 1;
    // 7F3A437C: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4380:
    ctx->pc = 0x7F3A4380u;
    ctx->downcount -= 5;
    // 7F3A4380: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A4384:
    ctx->pc = 0x7F3A4384u;
    // 7F3A4384: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4388:
    ctx->pc = 0x7F3A4388u;
    // 7F3A4388: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A438C:
    ctx->pc = 0x7F3A438Cu;
    // 7F3A438C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4390:
    ctx->pc = 0x7F3A4390u;
    // 7F3A4390: b       0x7F3A43A0
    {
            goto label_7F3A43A0;
    }

label_7F3A4394:
    ctx->pc = 0x7F3A4394u;
    ctx->downcount -= 3;
    // 7F3A4394: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4398:
    ctx->pc = 0x7F3A4398u;
    // 7F3A4398: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A439C:
    ctx->pc = 0x7F3A439Cu;
    // 7F3A439C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A43A0:
    ctx->pc = 0x7F3A43A0u;
    ctx->downcount -= 6;
    // 7F3A43A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A43A4:
    ctx->pc = 0x7F3A43A4u;
    // 7F3A43A4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A43A8:
    ctx->pc = 0x7F3A43A8u;
    // 7F3A43A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A43AC:
    ctx->pc = 0x7F3A43ACu;
    // 7F3A43AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A43B0:
    ctx->pc = 0x7F3A43B0u;
    // 7F3A43B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A43B4:
    ctx->pc = 0x7F3A43B4u;
    ctx->downcount -= 8;
    // 7F3A43B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A43B8:
    ctx->pc = 0x7F3A43B8u;
    // 7F3A43B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A43BC:
    ctx->pc = 0x7F3A43BCu;
    // 7F3A43BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A43C0:
    ctx->pc = 0x7F3A43C0u;
    // 7F3A43C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A43C4:
    ctx->pc = 0x7F3A43C4u;
    // 7F3A43C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A43C8:
    ctx->pc = 0x7F3A43C8u;
    // 7F3A43C8: lwz     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A43CC:
    ctx->pc = 0x7F3A43CCu;
    // 7F3A43CC: cmpwi   r0, 120
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

label_7F3A43D0:
    ctx->pc = 0x7F3A43D0u;
    // 7F3A43D0: bc    4, 1, 0x7F3A4434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4434;
        }
    }

label_7F3A43D4:
    ctx->pc = 0x7F3A43D4u;
    ctx->downcount -= 4;
    // 7F3A43D4: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A43D8:
    ctx->pc = 0x7F3A43D8u;
    // 7F3A43D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A43DC:
    ctx->pc = 0x7F3A43DCu;
    // 7F3A43DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A43E0:
    ctx->pc = 0x7F3A43E0u;
    // 7F3A43E0: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A43E4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A43E4:
    ctx->pc = 0x7F3A43E4u;
    ctx->downcount -= 2;
    // 7F3A43E4: cmpwi   r3, 0
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

label_7F3A43E8:
    ctx->pc = 0x7F3A43E8u;
    // 7F3A43E8: bc    4, 2, 0x7F3A4434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4434;
        }
    }

label_7F3A43EC:
    ctx->pc = 0x7F3A43ECu;
    ctx->downcount -= 2;
    // 7F3A43EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A43F0:
    ctx->pc = 0x7F3A43F0u;
    // 7F3A43F0: bl      0x7F02D178
    {
            ctx->lr = 0x7F3A43F4u;
            ctx->pc = 0x7F02D178u;
            return;
    }

label_7F3A43F4:
    ctx->pc = 0x7F3A43F4u;
    ctx->downcount -= 2;
    // 7F3A43F4: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F3A43F8:
    ctx->pc = 0x7F3A43F8u;
    // 7F3A43F8: bl      0x7F01808C
    {
            ctx->lr = 0x7F3A43FCu;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F3A43FC:
    ctx->pc = 0x7F3A43FCu;
    ctx->downcount -= 5;
    // 7F3A43FC: lwz     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4400:
    ctx->pc = 0x7F3A4400u;
    // 7F3A4400: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A4404:
    ctx->pc = 0x7F3A4404u;
    // 7F3A4404: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_7F3A4408:
    ctx->pc = 0x7F3A4408u;
    // 7F3A4408: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A440C:
    ctx->pc = 0x7F3A440Cu;
    // 7F3A440C: bl      0x7F3A628C
    {
            ctx->lr = 0x7F3A4410u;
            goto label_7F3A628C;
    }

label_7F3A4410:
    ctx->pc = 0x7F3A4410u;
    ctx->downcount -= 2;
    // 7F3A4410: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4414:
    ctx->pc = 0x7F3A4414u;
    // 7F3A4414: bl      0x7F3CBEF4
    {
            ctx->lr = 0x7F3A4418u;
            ctx->pc = 0x7F3CBEF4u;
            return;
    }

label_7F3A4418:
    ctx->pc = 0x7F3A4418u;
    ctx->downcount -= 7;
    // 7F3A4418: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A441C:
    ctx->pc = 0x7F3A441Cu;
    // 7F3A441C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A4420:
    ctx->pc = 0x7F3A4420u;
    // 7F3A4420: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4424:
    ctx->pc = 0x7F3A4424u;
    // 7F3A4424: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4428:
    ctx->pc = 0x7F3A4428u;
    // 7F3A4428: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A442C:
    ctx->pc = 0x7F3A442Cu;
    // 7F3A442C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4430:
    ctx->pc = 0x7F3A4430u;
    // 7F3A4430: b       0x7F3A4440
    {
            goto label_7F3A4440;
    }

label_7F3A4434:
    ctx->pc = 0x7F3A4434u;
    ctx->downcount -= 3;
    // 7F3A4434: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4438:
    ctx->pc = 0x7F3A4438u;
    // 7F3A4438: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A443C:
    ctx->pc = 0x7F3A443Cu;
    // 7F3A443C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4440:
    ctx->pc = 0x7F3A4440u;
    ctx->downcount -= 6;
    // 7F3A4440: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4444:
    ctx->pc = 0x7F3A4444u;
    // 7F3A4444: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A4448:
    ctx->pc = 0x7F3A4448u;
    // 7F3A4448: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A444C:
    ctx->pc = 0x7F3A444Cu;
    // 7F3A444C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A4450:
    ctx->pc = 0x7F3A4450u;
    // 7F3A4450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4454:
    ctx->pc = 0x7F3A4454u;
    ctx->downcount -= 3;
    // 7F3A4454: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4458:
    ctx->pc = 0x7F3A4458u;
    // 7F3A4458: cmpwi   r0, 2
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

label_7F3A445C:
    ctx->pc = 0x7F3A445Cu;
    // 7F3A445C: bc    4, 2, 0x7F3A4474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4474;
        }
    }

label_7F3A4460:
    ctx->pc = 0x7F3A4460u;
    ctx->downcount -= 5;
    // 7F3A4460: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A4464:
    ctx->pc = 0x7F3A4464u;
    // 7F3A4464: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4468:
    ctx->pc = 0x7F3A4468u;
    // 7F3A4468: sth     r4, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A446C:
    ctx->pc = 0x7F3A446Cu;
    // 7F3A446C: stw     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4470:
    ctx->pc = 0x7F3A4470u;
    // 7F3A4470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4474:
    ctx->pc = 0x7F3A4474u;
    ctx->downcount -= 3;
    // 7F3A4474: lwz     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4478:
    ctx->pc = 0x7F3A4478u;
    // 7F3A4478: cmpwi   r0, 12000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A447C:
    ctx->pc = 0x7F3A447Cu;
    // 7F3A447C: bc    4, 1, 0x7F3A44A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A44A0;
        }
    }

label_7F3A4480:
    ctx->pc = 0x7F3A4480u;
    ctx->downcount -= 3;
    // 7F3A4480: lwz     r0, 4928(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4928);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4484:
    ctx->pc = 0x7F3A4484u;
    // 7F3A4484: rlwinm. r0, r0, 0, 31, 31
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

label_7F3A4488:
    ctx->pc = 0x7F3A4488u;
    // 7F3A4488: bc    12, 2, 0x7F3A44A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A44A0;
        }
    }

label_7F3A448C:
    ctx->pc = 0x7F3A448Cu;
    ctx->downcount -= 5;
    // 7F3A448C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A4490:
    ctx->pc = 0x7F3A4490u;
    // 7F3A4490: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4494:
    ctx->pc = 0x7F3A4494u;
    // 7F3A4494: sth     r4, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A4498:
    ctx->pc = 0x7F3A4498u;
    // 7F3A4498: stw     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A449C:
    ctx->pc = 0x7F3A449Cu;
    // 7F3A449C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A44A0:
    ctx->pc = 0x7F3A44A0u;
    ctx->downcount -= 4;
    // 7F3A44A0: lwz     r4, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A44A4:
    ctx->pc = 0x7F3A44A4u;
    // 7F3A44A4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3A44A8:
    ctx->pc = 0x7F3A44A8u;
    // 7F3A44A8: stw     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A44AC:
    ctx->pc = 0x7F3A44ACu;
    // 7F3A44AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A44B0:
    ctx->pc = 0x7F3A44B0u;
    ctx->downcount -= 8;
    // 7F3A44B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A44B4:
    ctx->pc = 0x7F3A44B4u;
    // 7F3A44B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A44B8:
    ctx->pc = 0x7F3A44B8u;
    // 7F3A44B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A44BC:
    ctx->pc = 0x7F3A44BCu;
    // 7F3A44BC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A44C0:
    ctx->pc = 0x7F3A44C0u;
    // 7F3A44C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A44C4:
    ctx->pc = 0x7F3A44C4u;
    // 7F3A44C4: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A44C8:
    ctx->pc = 0x7F3A44C8u;
    // 7F3A44C8: cmpwi   r0, 1
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

label_7F3A44CC:
    ctx->pc = 0x7F3A44CCu;
    // 7F3A44CC: bc    4, 2, 0x7F3A44E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A44E4;
        }
    }

label_7F3A44D0:
    ctx->pc = 0x7F3A44D0u;
    ctx->downcount -= 5;
    // 7F3A44D0: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A44D4:
    ctx->pc = 0x7F3A44D4u;
    // 7F3A44D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A44D8:
    ctx->pc = 0x7F3A44D8u;
    // 7F3A44D8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A44DC:
    ctx->pc = 0x7F3A44DCu;
    // 7F3A44DC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A44E0:
    ctx->pc = 0x7F3A44E0u;
    // 7F3A44E0: b       0x7F3A4698
    {
            goto label_7F3A4698;
    }

label_7F3A44E4:
    ctx->pc = 0x7F3A44E4u;
    ctx->downcount -= 3;
    // 7F3A44E4: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A44E8:
    ctx->pc = 0x7F3A44E8u;
    // 7F3A44E8: cmpwi   r0, 0
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

label_7F3A44EC:
    ctx->pc = 0x7F3A44ECu;
    // 7F3A44EC: bc    4, 2, 0x7F3A4658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4658;
        }
    }

label_7F3A44F0:
    ctx->pc = 0x7F3A44F0u;
    ctx->downcount -= 12;
    // 7F3A44F0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A44F4:
    ctx->pc = 0x7F3A44F4u;
    // 7F3A44F4: li      r3, 8322
    ctx->gpr[3] = (u32)(s32)(8322);

label_7F3A44F8:
    ctx->pc = 0x7F3A44F8u;
    // 7F3A44F8: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F3A44FC:
    ctx->pc = 0x7F3A44FCu;
    // 7F3A44FC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4500:
    ctx->pc = 0x7F3A4500u;
    // 7F3A4500: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4504:
    ctx->pc = 0x7F3A4504u;
    // 7F3A4504: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A4508:
    ctx->pc = 0x7F3A4508u;
    // 7F3A4508: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A450C:
    ctx->pc = 0x7F3A450Cu;
    // 7F3A450C: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F3A4510:
    ctx->pc = 0x7F3A4510u;
    // 7F3A4510: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A4514:
    ctx->pc = 0x7F3A4514u;
    // 7F3A4514: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A4518:
    ctx->pc = 0x7F3A4518u;
    // 7F3A4518: or.   r0, r3, r0
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

label_7F3A451C:
    ctx->pc = 0x7F3A451Cu;
    // 7F3A451C: bc    4, 2, 0x7F3A4548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4548;
        }
    }

label_7F3A4520:
    ctx->pc = 0x7F3A4520u;
    ctx->downcount -= 5;
    // 7F3A4520: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4524:
    ctx->pc = 0x7F3A4524u;
    // 7F3A4524: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4528:
    ctx->pc = 0x7F3A4528u;
    // 7F3A4528: lis     r6, 2048
    ctx->gpr[6] = ((u32)(s32)(2048) << 16);

label_7F3A452C:
    ctx->pc = 0x7F3A452Cu;
    // 7F3A452C: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F3A4530:
    ctx->pc = 0x7F3A4530u;
    // 7F3A4530: bl      0x7F012018
    {
            ctx->lr = 0x7F3A4534u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F3A4534:
    ctx->pc = 0x7F3A4534u;
    ctx->downcount -= 5;
    // 7F3A4534: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4538:
    ctx->pc = 0x7F3A4538u;
    // 7F3A4538: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F3A453C:
    ctx->pc = 0x7F3A453Cu;
    // 7F3A453C: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F3A4540:
    ctx->pc = 0x7F3A4540u;
    // 7F3A4540: or.   r0, r4, r0
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

label_7F3A4544:
    ctx->pc = 0x7F3A4544u;
    // 7F3A4544: bc    12, 2, 0x7F3A4568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4568;
        }
    }

label_7F3A4548:
    ctx->pc = 0x7F3A4548u;
    ctx->downcount -= 8;
    // 7F3A4548: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A454C:
    ctx->pc = 0x7F3A454Cu;
    // 7F3A454C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4550:
    ctx->pc = 0x7F3A4550u;
    // 7F3A4550: oris    r3, r3, 0x0200
    ctx->gpr[3] = ctx->gpr[3] | (0x0200u << 16);

label_7F3A4554:
    ctx->pc = 0x7F3A4554u;
    // 7F3A4554: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4558:
    ctx->pc = 0x7F3A4558u;
    // 7F3A4558: lwz     r3, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A455C:
    ctx->pc = 0x7F3A455Cu;
    // 7F3A455C: sth     r3, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4560:
    ctx->pc = 0x7F3A4560u;
    // 7F3A4560: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4564:
    ctx->pc = 0x7F3A4564u;
    // 7F3A4564: b       0x7F3A4698
    {
            goto label_7F3A4698;
    }

label_7F3A4568:
    ctx->pc = 0x7F3A4568u;
    ctx->downcount -= 10;
    // 7F3A4568: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A456C:
    ctx->pc = 0x7F3A456Cu;
    // 7F3A456C: lwzu     r4, -5736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5736);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F3A4570:
    ctx->pc = 0x7F3A4570u;
    // 7F3A4570: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_7F3A4574:
    ctx->pc = 0x7F3A4574u;
    // 7F3A4574: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A4578:
    ctx->pc = 0x7F3A4578u;
    // 7F3A4578: and   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F3A457C:
    ctx->pc = 0x7F3A457Cu;
    // 7F3A457C: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F3A4580:
    ctx->pc = 0x7F3A4580u;
    // 7F3A4580: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F3A4584:
    ctx->pc = 0x7F3A4584u;
    // 7F3A4584: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F3A4588:
    ctx->pc = 0x7F3A4588u;
    // 7F3A4588: or.   r0, r3, r0
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

label_7F3A458C:
    ctx->pc = 0x7F3A458Cu;
    // 7F3A458C: bc    12, 2, 0x7F3A45A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A45A0;
        }
    }

label_7F3A4590:
    ctx->pc = 0x7F3A4590u;
    ctx->downcount -= 4;
    // 7F3A4590: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4594:
    ctx->pc = 0x7F3A4594u;
    // 7F3A4594: oris    r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | (0x0080u << 16);

label_7F3A4598:
    ctx->pc = 0x7F3A4598u;
    // 7F3A4598: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A459C:
    ctx->pc = 0x7F3A459Cu;
    // 7F3A459C: b       0x7F3A4638
    {
            goto label_7F3A4638;
    }

label_7F3A45A0:
    ctx->pc = 0x7F3A45A0u;
    ctx->downcount -= 6;
    // 7F3A45A0: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_7F3A45A4:
    ctx->pc = 0x7F3A45A4u;
    // 7F3A45A4: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F3A45A8:
    ctx->pc = 0x7F3A45A8u;
    // 7F3A45A8: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F3A45AC:
    ctx->pc = 0x7F3A45ACu;
    // 7F3A45AC: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F3A45B0:
    ctx->pc = 0x7F3A45B0u;
    // 7F3A45B0: or.   r0, r3, r0
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

label_7F3A45B4:
    ctx->pc = 0x7F3A45B4u;
    // 7F3A45B4: bc    12, 2, 0x7F3A462C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A462C;
        }
    }

label_7F3A45B8:
    ctx->pc = 0x7F3A45B8u;
    ctx->downcount -= 7;
    // 7F3A45B8: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A45BC:
    ctx->pc = 0x7F3A45BCu;
    // 7F3A45BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A45C0:
    ctx->pc = 0x7F3A45C0u;
    // 7F3A45C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A45C4:
    ctx->pc = 0x7F3A45C4u;
    // 7F3A45C4: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F3A45C8:
    ctx->pc = 0x7F3A45C8u;
    // 7F3A45C8: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A45CC:
    ctx->pc = 0x7F3A45CCu;
    // 7F3A45CC: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A45D0:
    ctx->pc = 0x7F3A45D0u;
    // 7F3A45D0: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A45D4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A45D4:
    ctx->pc = 0x7F3A45D4u;
    ctx->downcount -= 2;
    // 7F3A45D4: cmpwi   r3, 0
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

label_7F3A45D8:
    ctx->pc = 0x7F3A45D8u;
    // 7F3A45D8: bc    4, 2, 0x7F3A4638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4638;
        }
    }

label_7F3A45DC:
    ctx->pc = 0x7F3A45DCu;
    ctx->downcount -= 4;
    // 7F3A45DC: lwz     r3, 5132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A45E0:
    ctx->pc = 0x7F3A45E0u;
    // 7F3A45E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A45E4:
    ctx->pc = 0x7F3A45E4u;
    // 7F3A45E4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A45E8:
    ctx->pc = 0x7F3A45E8u;
    // 7F3A45E8: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A45ECu;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A45EC:
    ctx->pc = 0x7F3A45ECu;
    ctx->downcount -= 14;
    // 7F3A45EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A45F0:
    ctx->pc = 0x7F3A45F0u;
    // 7F3A45F0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A45F4:
    ctx->pc = 0x7F3A45F4u;
    // 7F3A45F4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A45F8:
    ctx->pc = 0x7F3A45F8u;
    // 7F3A45F8: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A45FC:
    ctx->pc = 0x7F3A45FCu;
    // 7F3A45FC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4600:
    ctx->pc = 0x7F3A4600u;
    // 7F3A4600: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4604:
    ctx->pc = 0x7F3A4604u;
    // 7F3A4604: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4608:
    ctx->pc = 0x7F3A4608u;
    // 7F3A4608: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A460C:
    ctx->pc = 0x7F3A460Cu;
    // 7F3A460C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4610:
    ctx->pc = 0x7F3A4610u;
    // 7F3A4610: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A4614:
    ctx->pc = 0x7F3A4614u;
    // 7F3A4614: lwz     r0, 5232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4618:
    ctx->pc = 0x7F3A4618u;
    // 7F3A4618: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A461C:
    ctx->pc = 0x7F3A461Cu;
    // 7F3A461C: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4620:
    ctx->pc = 0x7F3A4620u;
    // 7F3A4620: bl      0x800501FC
    {
            ctx->lr = 0x7F3A4624u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A4624:
    ctx->pc = 0x7F3A4624u;
    ctx->downcount -= 2;
    // 7F3A4624: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4628:
    ctx->pc = 0x7F3A4628u;
    // 7F3A4628: b       0x7F3A4638
    {
            goto label_7F3A4638;
    }

label_7F3A462C:
    ctx->pc = 0x7F3A462Cu;
    ctx->downcount -= 3;
    // 7F3A462C: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4630:
    ctx->pc = 0x7F3A4630u;
    // 7F3A4630: oris    r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | (0x0040u << 16);

label_7F3A4634:
    ctx->pc = 0x7F3A4634u;
    // 7F3A4634: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4638:
    ctx->pc = 0x7F3A4638u;
    ctx->downcount -= 6;
    // 7F3A4638: lha     r3, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A463C:
    ctx->pc = 0x7F3A463Cu;
    // 7F3A463C: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F3A4640:
    ctx->pc = 0x7F3A4640u;
    // 7F3A4640: sth     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4644:
    ctx->pc = 0x7F3A4644u;
    // 7F3A4644: lha     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4648:
    ctx->pc = 0x7F3A4648u;
    // 7F3A4648: cmpwi   r0, 0
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

label_7F3A464C:
    ctx->pc = 0x7F3A464Cu;
    // 7F3A464C: bc    4, 0, 0x7F3A4658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4658;
        }
    }

label_7F3A4650:
    ctx->pc = 0x7F3A4650u;
    ctx->downcount -= 2;
    // 7F3A4650: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4654:
    ctx->pc = 0x7F3A4654u;
    // 7F3A4654: sth     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4658:
    ctx->pc = 0x7F3A4658u;
    ctx->downcount -= 3;
    // 7F3A4658: lha     r0, 5288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A465C:
    ctx->pc = 0x7F3A465Cu;
    // 7F3A465C: cmpwi   r0, 3
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

label_7F3A4660:
    ctx->pc = 0x7F3A4660u;
    // 7F3A4660: bc    12, 2, 0x7F3A4670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4670;
        }
    }

label_7F3A4664:
    ctx->pc = 0x7F3A4664u;
    ctx->downcount -= 3;
    // 7F3A4664: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4668:
    ctx->pc = 0x7F3A4668u;
    // 7F3A4668: cmpwi   r3, 600
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A466C:
    ctx->pc = 0x7F3A466Cu;
    // 7F3A466C: bc    4, 1, 0x7F3A4690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4690;
        }
    }

label_7F3A4670:
    ctx->pc = 0x7F3A4670u;
    ctx->downcount -= 8;
    // 7F3A4670: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F3A4674:
    ctx->pc = 0x7F3A4674u;
    // 7F3A4674: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A4678:
    ctx->pc = 0x7F3A4678u;
    // 7F3A4678: sth     r0, 5336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5336);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A467C:
    ctx->pc = 0x7F3A467Cu;
    // 7F3A467C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4680:
    ctx->pc = 0x7F3A4680u;
    // 7F3A4680: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4684:
    ctx->pc = 0x7F3A4684u;
    // 7F3A4684: sth     r0, 4100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4688:
    ctx->pc = 0x7F3A4688u;
    // 7F3A4688: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A468C:
    ctx->pc = 0x7F3A468Cu;
    // 7F3A468C: b       0x7F3A4698
    {
            goto label_7F3A4698;
    }

label_7F3A4690:
    ctx->pc = 0x7F3A4690u;
    ctx->downcount -= 2;
    // 7F3A4690: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4694:
    ctx->pc = 0x7F3A4694u;
    // 7F3A4694: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4698:
    ctx->pc = 0x7F3A4698u;
    ctx->downcount -= 6;
    // 7F3A4698: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A469C:
    ctx->pc = 0x7F3A469Cu;
    // 7F3A469C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A46A0:
    ctx->pc = 0x7F3A46A0u;
    // 7F3A46A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A46A4:
    ctx->pc = 0x7F3A46A4u;
    // 7F3A46A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A46A8:
    ctx->pc = 0x7F3A46A8u;
    // 7F3A46A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A46AC:
    ctx->pc = 0x7F3A46ACu;
    ctx->downcount -= 23;
    // 7F3A46AC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A46B0:
    ctx->pc = 0x7F3A46B0u;
    // 7F3A46B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A46B4:
    ctx->pc = 0x7F3A46B4u;
    // 7F3A46B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A46B8:
    ctx->pc = 0x7F3A46B8u;
    // 7F3A46B8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A46BC:
    ctx->pc = 0x7F3A46BCu;
    // 7F3A46BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A46C0:
    ctx->pc = 0x7F3A46C0u;
    // 7F3A46C0: lwz     r0, 4840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A46C4:
    ctx->pc = 0x7F3A46C4u;
    // 7F3A46C4: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F3A46C8:
    ctx->pc = 0x7F3A46C8u;
    // 7F3A46C8: stw     r0, 4840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A46CC:
    ctx->pc = 0x7F3A46CCu;
    // 7F3A46CC: lwz     r0, 5028(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A46D0:
    ctx->pc = 0x7F3A46D0u;
    // 7F3A46D0: sth     r0, 4854(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A46D4:
    ctx->pc = 0x7F3A46D4u;
    // 7F3A46D4: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A46D8:
    ctx->pc = 0x7F3A46D8u;
    // 7F3A46D8: cmpwi   r0, 1
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

label_7F3A46DC:
    ctx->pc = 0x7F3A46DCu;
    // 7F3A46DC: bc    4, 2, 0x7F3A4720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4720;
        }
    }

label_7F3A46E0:
    ctx->pc = 0x7F3A46E0u;
    ctx->downcount -= 8;
    // 7F3A46E0: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A46E4:
    ctx->pc = 0x7F3A46E4u;
    // 7F3A46E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A46E8:
    ctx->pc = 0x7F3A46E8u;
    // 7F3A46E8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A46EC:
    ctx->pc = 0x7F3A46ECu;
    // 7F3A46EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A46F0:
    ctx->pc = 0x7F3A46F0u;
    // 7F3A46F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A46F4:
    ctx->pc = 0x7F3A46F4u;
    // 7F3A46F4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A46F8:
    ctx->pc = 0x7F3A46F8u;
    // 7F3A46F8: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A46FC:
    ctx->pc = 0x7F3A46FCu;
    // 7F3A46FC: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4700u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4700:
    ctx->pc = 0x7F3A4700u;
    ctx->downcount -= 2;
    // 7F3A4700: cmpwi   r3, 0
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

label_7F3A4704:
    ctx->pc = 0x7F3A4704u;
    // 7F3A4704: bc    12, 2, 0x7F3A4804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4804;
        }
    }

label_7F3A4708:
    ctx->pc = 0x7F3A4708u;
    ctx->downcount -= 3;
    // 7F3A4708: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A470C:
    ctx->pc = 0x7F3A470Cu;
    // 7F3A470C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4710:
    ctx->pc = 0x7F3A4710u;
    // 7F3A4710: bl      0x80050B54
    {
            ctx->lr = 0x7F3A4714u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F3A4714:
    ctx->pc = 0x7F3A4714u;
    ctx->downcount -= 3;
    // 7F3A4714: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4718:
    ctx->pc = 0x7F3A4718u;
    // 7F3A4718: stw     r0, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A471C:
    ctx->pc = 0x7F3A471Cu;
    // 7F3A471C: b       0x7F3A4804
    {
            goto label_7F3A4804;
    }

label_7F3A4720:
    ctx->pc = 0x7F3A4720u;
    ctx->downcount -= 3;
    // 7F3A4720: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4724:
    ctx->pc = 0x7F3A4724u;
    // 7F3A4724: cmpwi   r0, 0
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

label_7F3A4728:
    ctx->pc = 0x7F3A4728u;
    // 7F3A4728: bc    4, 2, 0x7F3A47B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A47B4;
        }
    }

label_7F3A472C:
    ctx->pc = 0x7F3A472Cu;
    ctx->downcount -= 4;
    // 7F3A472C: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4730:
    ctx->pc = 0x7F3A4730u;
    // 7F3A4730: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4734:
    ctx->pc = 0x7F3A4734u;
    // 7F3A4734: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4738:
    ctx->pc = 0x7F3A4738u;
    // 7F3A4738: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A473Cu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A473C:
    ctx->pc = 0x7F3A473Cu;
    ctx->downcount -= 2;
    // 7F3A473C: cmpwi   r3, 0
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

label_7F3A4740:
    ctx->pc = 0x7F3A4740u;
    // 7F3A4740: bc    4, 2, 0x7F3A47B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A47B4;
        }
    }

label_7F3A4744:
    ctx->pc = 0x7F3A4744u;
    ctx->downcount -= 12;
    // 7F3A4744: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A4748:
    ctx->pc = 0x7F3A4748u;
    // 7F3A4748: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A474C:
    ctx->pc = 0x7F3A474Cu;
    // 7F3A474C: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4750:
    ctx->pc = 0x7F3A4750u;
    // 7F3A4750: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4754:
    ctx->pc = 0x7F3A4754u;
    // 7F3A4754: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F3A4758:
    ctx->pc = 0x7F3A4758u;
    // 7F3A4758: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F3A475C:
    ctx->pc = 0x7F3A475Cu;
    // 7F3A475C: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F3A4760:
    ctx->pc = 0x7F3A4760u;
    // 7F3A4760: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A4764:
    ctx->pc = 0x7F3A4764u;
    // 7F3A4764: rlwinm r30, r0, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A4768:
    ctx->pc = 0x7F3A4768u;
    // 7F3A4768: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A476C:
    ctx->pc = 0x7F3A476Cu;
    // 7F3A476C: lwz     r3, 5136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4770:
    ctx->pc = 0x7F3A4770u;
    // 7F3A4770: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4774u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4774:
    ctx->pc = 0x7F3A4774u;
    ctx->downcount -= 15;
    // 7F3A4774: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4778:
    ctx->pc = 0x7F3A4778u;
    // 7F3A4778: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A477C:
    ctx->pc = 0x7F3A477Cu;
    // 7F3A477C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4780:
    ctx->pc = 0x7F3A4780u;
    // 7F3A4780: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A4784:
    ctx->pc = 0x7F3A4784u;
    // 7F3A4784: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4788:
    ctx->pc = 0x7F3A4788u;
    // 7F3A4788: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A478C:
    ctx->pc = 0x7F3A478Cu;
    // 7F3A478C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4790:
    ctx->pc = 0x7F3A4790u;
    // 7F3A4790: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4794:
    ctx->pc = 0x7F3A4794u;
    // 7F3A4794: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4798:
    ctx->pc = 0x7F3A4798u;
    // 7F3A4798: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A479C:
    ctx->pc = 0x7F3A479Cu;
    // 7F3A479C: lwz     r0, 5236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A47A0:
    ctx->pc = 0x7F3A47A0u;
    // 7F3A47A0: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A47A4:
    ctx->pc = 0x7F3A47A4u;
    // 7F3A47A4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A47A8:
    ctx->pc = 0x7F3A47A8u;
    // 7F3A47A8: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A47AC:
    ctx->pc = 0x7F3A47ACu;
    // 7F3A47AC: bl      0x800501FC
    {
            ctx->lr = 0x7F3A47B0u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A47B0:
    ctx->pc = 0x7F3A47B0u;
    ctx->downcount -= 1;
    // 7F3A47B0: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A47B4:
    ctx->pc = 0x7F3A47B4u;
    ctx->downcount -= 3;
    // 7F3A47B4: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A47B8:
    ctx->pc = 0x7F3A47B8u;
    // 7F3A47B8: cmpwi   r3, 60
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A47BC:
    ctx->pc = 0x7F3A47BCu;
    // 7F3A47BC: bc    4, 1, 0x7F3A47FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A47FC;
        }
    }

label_7F3A47C0:
    ctx->pc = 0x7F3A47C0u;
    ctx->downcount -= 4;
    // 7F3A47C0: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A47C4:
    ctx->pc = 0x7F3A47C4u;
    // 7F3A47C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A47C8:
    ctx->pc = 0x7F3A47C8u;
    // 7F3A47C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A47CC:
    ctx->pc = 0x7F3A47CCu;
    // 7F3A47CC: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A47D0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A47D0:
    ctx->pc = 0x7F3A47D0u;
    ctx->downcount -= 2;
    // 7F3A47D0: cmpwi   r3, 0
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

label_7F3A47D4:
    ctx->pc = 0x7F3A47D4u;
    // 7F3A47D4: bc    4, 2, 0x7F3A4804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4804;
        }
    }

label_7F3A47D8:
    ctx->pc = 0x7F3A47D8u;
    ctx->downcount -= 2;
    // 7F3A47D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A47DC:
    ctx->pc = 0x7F3A47DCu;
    // 7F3A47DC: bl      0x7F3A3F64
    {
            ctx->lr = 0x7F3A47E0u;
            ctx->pc = 0x7F3A3F64u;
            return;
    }

label_7F3A47E0:
    ctx->pc = 0x7F3A47E0u;
    ctx->downcount -= 7;
    // 7F3A47E0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A47E4:
    ctx->pc = 0x7F3A47E4u;
    // 7F3A47E4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A47E8:
    ctx->pc = 0x7F3A47E8u;
    // 7F3A47E8: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A47EC:
    ctx->pc = 0x7F3A47ECu;
    // 7F3A47EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A47F0:
    ctx->pc = 0x7F3A47F0u;
    // 7F3A47F0: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A47F4:
    ctx->pc = 0x7F3A47F4u;
    // 7F3A47F4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A47F8:
    ctx->pc = 0x7F3A47F8u;
    // 7F3A47F8: b       0x7F3A4804
    {
            goto label_7F3A4804;
    }

label_7F3A47FC:
    ctx->pc = 0x7F3A47FCu;
    ctx->downcount -= 2;
    // 7F3A47FC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4800:
    ctx->pc = 0x7F3A4800u;
    // 7F3A4800: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4804:
    ctx->pc = 0x7F3A4804u;
    ctx->downcount -= 16;
    // 7F3A4804: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A4808:
    ctx->pc = 0x7F3A4808u;
    // 7F3A4808: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A480C:
    ctx->pc = 0x7F3A480Cu;
    // 7F3A480C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A4810:
    ctx->pc = 0x7F3A4810u;
    // 7F3A4810: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A4814:
    ctx->pc = 0x7F3A4814u;
    // 7F3A4814: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4818:
    ctx->pc = 0x7F3A4818u;
    ctx->downcount -= 8;
    // 7F3A4818: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A481C:
    ctx->pc = 0x7F3A481Cu;
    // 7F3A481C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A4820:
    ctx->pc = 0x7F3A4820u;
    // 7F3A4820: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4824:
    ctx->pc = 0x7F3A4824u;
    // 7F3A4824: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A4828:
    ctx->pc = 0x7F3A4828u;
    // 7F3A4828: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A482C:
    ctx->pc = 0x7F3A482Cu;
    // 7F3A482C: lwz     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4830:
    ctx->pc = 0x7F3A4830u;
    // 7F3A4830: cmpwi   r0, 0
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

label_7F3A4834:
    ctx->pc = 0x7F3A4834u;
    // 7F3A4834: bc    4, 2, 0x7F3A483C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A483C;
        }
    }

label_7F3A4838:
    ctx->pc = 0x7F3A4838u;
    ctx->downcount -= 1;
    // 7F3A4838: bl      0x7F3A3ECC
    {
            ctx->lr = 0x7F3A483Cu;
            ctx->pc = 0x7F3A3ECCu;
            return;
    }

label_7F3A483C:
    ctx->pc = 0x7F3A483Cu;
    ctx->downcount -= 3;
    // 7F3A483C: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4840:
    ctx->pc = 0x7F3A4840u;
    // 7F3A4840: cmpwi   r0, 60
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

label_7F3A4844:
    ctx->pc = 0x7F3A4844u;
    // 7F3A4844: bc    4, 2, 0x7F3A486C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A486C;
        }
    }

label_7F3A4848:
    ctx->pc = 0x7F3A4848u;
    ctx->downcount -= 2;
    // 7F3A4848: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A484C:
    ctx->pc = 0x7F3A484Cu;
    // 7F3A484C: bl      0x7F02D178
    {
            ctx->lr = 0x7F3A4850u;
            ctx->pc = 0x7F02D178u;
            return;
    }

label_7F3A4850:
    ctx->pc = 0x7F3A4850u;
    ctx->downcount -= 2;
    // 7F3A4850: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A4854:
    ctx->pc = 0x7F3A4854u;
    // 7F3A4854: bl      0x7F3A628C
    {
            ctx->lr = 0x7F3A4858u;
            goto label_7F3A628C;
    }

label_7F3A4858:
    ctx->pc = 0x7F3A4858u;
    ctx->downcount -= 5;
    // 7F3A4858: lwz     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A485C:
    ctx->pc = 0x7F3A485Cu;
    // 7F3A485C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4860:
    ctx->pc = 0x7F3A4860u;
    // 7F3A4860: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_7F3A4864:
    ctx->pc = 0x7F3A4864u;
    // 7F3A4864: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4868:
    ctx->pc = 0x7F3A4868u;
    // 7F3A4868: bl      0x7F3CBEF4
    {
            ctx->lr = 0x7F3A486Cu;
            ctx->pc = 0x7F3CBEF4u;
            return;
    }

label_7F3A486C:
    ctx->pc = 0x7F3A486Cu;
    ctx->downcount -= 3;
    // 7F3A486C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A4870:
    ctx->pc = 0x7F3A4870u;
    // 7F3A4870: li      r4, 350
    ctx->gpr[4] = (u32)(s32)(350);

label_7F3A4874:
    ctx->pc = 0x7F3A4874u;
    // 7F3A4874: bl      0x7F3A41F0
    {
            ctx->lr = 0x7F3A4878u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A41F0u;
                return;
            }
            goto label_7F3A41F0;
    }

label_7F3A4878:
    ctx->pc = 0x7F3A4878u;
    ctx->downcount -= 2;
    // 7F3A4878: cmpwi   r3, 0
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

label_7F3A487C:
    ctx->pc = 0x7F3A487Cu;
    // 7F3A487C: bc    12, 2, 0x7F3A4894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4894;
        }
    }

label_7F3A4880:
    ctx->pc = 0x7F3A4880u;
    ctx->downcount -= 5;
    // 7F3A4880: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A4884:
    ctx->pc = 0x7F3A4884u;
    // 7F3A4884: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4888:
    ctx->pc = 0x7F3A4888u;
    // 7F3A4888: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A488C:
    ctx->pc = 0x7F3A488Cu;
    // 7F3A488C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4890:
    ctx->pc = 0x7F3A4890u;
    // 7F3A4890: b       0x7F3A48A0
    {
            goto label_7F3A48A0;
    }

label_7F3A4894:
    ctx->pc = 0x7F3A4894u;
    ctx->downcount -= 3;
    // 7F3A4894: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4898:
    ctx->pc = 0x7F3A4898u;
    // 7F3A4898: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A489C:
    ctx->pc = 0x7F3A489Cu;
    // 7F3A489C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A48A0:
    ctx->pc = 0x7F3A48A0u;
    ctx->downcount -= 6;
    // 7F3A48A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A48A4:
    ctx->pc = 0x7F3A48A4u;
    // 7F3A48A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A48A8:
    ctx->pc = 0x7F3A48A8u;
    // 7F3A48A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A48AC:
    ctx->pc = 0x7F3A48ACu;
    // 7F3A48AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A48B0:
    ctx->pc = 0x7F3A48B0u;
    // 7F3A48B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A48B4:
    ctx->pc = 0x7F3A48B4u;
    ctx->downcount -= 13;
    // 7F3A48B4: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F3A48B8:
    ctx->pc = 0x7F3A48B8u;
    // 7F3A48B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A48BC:
    ctx->pc = 0x7F3A48BCu;
    // 7F3A48BC: addi    r9, r8, -5736
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(-5736);

label_7F3A48C0:
    ctx->pc = 0x7F3A48C0u;
    // 7F3A48C0: li      r7, 64
    ctx->gpr[7] = (u32)(s32)(64);

label_7F3A48C4:
    ctx->pc = 0x7F3A48C4u;
    // 7F3A48C4: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A48C8:
    ctx->pc = 0x7F3A48C8u;
    // 7F3A48C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A48CC:
    ctx->pc = 0x7F3A48CCu;
    // 7F3A48CC: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F3A48D0:
    ctx->pc = 0x7F3A48D0u;
    // 7F3A48D0: and   r0, r0, r8
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[8];
    }

label_7F3A48D4:
    ctx->pc = 0x7F3A48D4u;
    // 7F3A48D4: and   r7, r9, r7
    {
        ctx->gpr[7] = ctx->gpr[9] & ctx->gpr[7];
    }

label_7F3A48D8:
    ctx->pc = 0x7F3A48D8u;
    // 7F3A48D8: xor   r7, r7, r8
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[8];
    }

label_7F3A48DC:
    ctx->pc = 0x7F3A48DCu;
    // 7F3A48DC: xor   r0, r0, r8
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[8];
    }

label_7F3A48E0:
    ctx->pc = 0x7F3A48E0u;
    // 7F3A48E0: or.   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A48E4:
    ctx->pc = 0x7F3A48E4u;
    // 7F3A48E4: bc    4, 2, 0x7F3A48F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A48F0;
        }
    }

label_7F3A48E8:
    ctx->pc = 0x7F3A48E8u;
    ctx->downcount -= 2;
    // 7F3A48E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A48EC:
    ctx->pc = 0x7F3A48ECu;
    // 7F3A48EC: b       0x7F3A4940
    {
            goto label_7F3A4940;
    }

label_7F3A48F0:
    ctx->pc = 0x7F3A48F0u;
    ctx->downcount -= 11;
    // 7F3A48F0: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F3A48F4:
    ctx->pc = 0x7F3A48F4u;
    // 7F3A48F4: lfsu     f1, -5708(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F3A48F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[7] = ea;
    }

label_7F3A48F8:
    ctx->pc = 0x7F3A48F8u;
    // 7F3A48F8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3A48F8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F3A48FC:
    ctx->pc = 0x7F3A48FCu;
    // 7F3A48FC: lfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F3A48FCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4900:
    ctx->pc = 0x7F3A4900u;
    // 7F3A4900: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4900u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3A4904:
    ctx->pc = 0x7F3A4904u;
    // 7F3A4904: stfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F3A4908:
    ctx->pc = 0x7F3A4908u;
    // 7F3A4908: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A490C:
    ctx->pc = 0x7F3A490Cu;
    // 7F3A490C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A490Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3A4910:
    ctx->pc = 0x7F3A4910u;
    // 7F3A4910: cmpw    r0, r3
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

label_7F3A4914:
    ctx->pc = 0x7F3A4914u;
    // 7F3A4914: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4918:
    ctx->pc = 0x7F3A4918u;
    // 7F3A4918: bc    12, 0, 0x7F3A4934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4934;
        }
    }

label_7F3A491C:
    ctx->pc = 0x7F3A491Cu;
    ctx->downcount -= 2;
    // 7F3A491C: cmpw    r0, r5
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

label_7F3A4920:
    ctx->pc = 0x7F3A4920u;
    // 7F3A4920: bc    12, 1, 0x7F3A4934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4934;
        }
    }

label_7F3A4924:
    ctx->pc = 0x7F3A4924u;
    ctx->downcount -= 2;
    // 7F3A4924: cmpw    r3, r4
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

label_7F3A4928:
    ctx->pc = 0x7F3A4928u;
    // 7F3A4928: bc    12, 0, 0x7F3A4934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4934;
        }
    }

label_7F3A492C:
    ctx->pc = 0x7F3A492Cu;
    ctx->downcount -= 2;
    // 7F3A492C: cmpw    r3, r6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A4930:
    ctx->pc = 0x7F3A4930u;
    // 7F3A4930: bc    4, 1, 0x7F3A493C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A493C;
        }
    }

label_7F3A4934:
    ctx->pc = 0x7F3A4934u;
    ctx->downcount -= 2;
    // 7F3A4934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4938:
    ctx->pc = 0x7F3A4938u;
    // 7F3A4938: b       0x7F3A4940
    {
            goto label_7F3A4940;
    }

label_7F3A493C:
    ctx->pc = 0x7F3A493Cu;
    ctx->downcount -= 1;
    // 7F3A493C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A4940:
    ctx->pc = 0x7F3A4940u;
    ctx->downcount -= 2;
    // 7F3A4940: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A4944:
    ctx->pc = 0x7F3A4944u;
    // 7F3A4944: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4948:
    ctx->pc = 0x7F3A4948u;
    ctx->downcount -= 7;
    // 7F3A4948: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A494C:
    ctx->pc = 0x7F3A494Cu;
    // 7F3A494C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A4950:
    ctx->pc = 0x7F3A4950u;
    // 7F3A4950: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F3A4954:
    ctx->pc = 0x7F3A4954u;
    // 7F3A4954: lfs     f0, -21468(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4954u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4958:
    ctx->pc = 0x7F3A4958u;
    // 7F3A4958: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4958u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A495C:
    ctx->pc = 0x7F3A495Cu;
    // 7F3A495C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A495Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F3A4960:
    ctx->pc = 0x7F3A4960u;
    // 7F3A4960: bc    4, 0, 0x7F3A4990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4990;
        }
    }

label_7F3A4964:
    ctx->pc = 0x7F3A4964u;
    ctx->downcount -= 5;
    // 7F3A4964: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A4968:
    ctx->pc = 0x7F3A4968u;
    // 7F3A4968: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A4968u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A496C:
    ctx->pc = 0x7F3A496Cu;
    // 7F3A496C: lfs     f0, -21464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A496Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4970:
    ctx->pc = 0x7F3A4970u;
    // 7F3A4970: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4970u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F3A4974:
    ctx->pc = 0x7F3A4974u;
    // 7F3A4974: bc    4, 1, 0x7F3A4990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4990;
        }
    }

label_7F3A4978:
    ctx->pc = 0x7F3A4978u;
    ctx->downcount -= 4;
    // 7F3A4978: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A497C:
    ctx->pc = 0x7F3A497Cu;
    // 7F3A497C: lfs     f0, -21460(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A497Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A4980:
    ctx->pc = 0x7F3A4980u;
    // 7F3A4980: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3A4980u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F3A4984:
    ctx->pc = 0x7F3A4984u;
    // 7F3A4984: bc    4, 0, 0x7F3A4990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4990;
        }
    }

label_7F3A4988:
    ctx->pc = 0x7F3A4988u;
    ctx->downcount -= 2;
    // 7F3A4988: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A498C:
    ctx->pc = 0x7F3A498Cu;
    // 7F3A498C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4990:
    ctx->pc = 0x7F3A4990u;
    ctx->downcount -= 2;
    // 7F3A4990: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4994:
    ctx->pc = 0x7F3A4994u;
    // 7F3A4994: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4998:
    ctx->pc = 0x7F3A4998u;
    ctx->downcount -= 8;
    // 7F3A4998: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A499C:
    ctx->pc = 0x7F3A499Cu;
    // 7F3A499C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A49A0:
    ctx->pc = 0x7F3A49A0u;
    // 7F3A49A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A49A4:
    ctx->pc = 0x7F3A49A4u;
    // 7F3A49A4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A49A8:
    ctx->pc = 0x7F3A49A8u;
    // 7F3A49A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A49AC:
    ctx->pc = 0x7F3A49ACu;
    // 7F3A49AC: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A49B0:
    ctx->pc = 0x7F3A49B0u;
    // 7F3A49B0: cmpwi   r0, 1
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

label_7F3A49B4:
    ctx->pc = 0x7F3A49B4u;
    // 7F3A49B4: bc    4, 2, 0x7F3A49D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A49D4;
        }
    }

label_7F3A49B8:
    ctx->pc = 0x7F3A49B8u;
    ctx->downcount -= 7;
    // 7F3A49B8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A49BC:
    ctx->pc = 0x7F3A49BCu;
    // 7F3A49BC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A49C0:
    ctx->pc = 0x7F3A49C0u;
    // 7F3A49C0: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A49C4:
    ctx->pc = 0x7F3A49C4u;
    // 7F3A49C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A49C8:
    ctx->pc = 0x7F3A49C8u;
    // 7F3A49C8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A49CC:
    ctx->pc = 0x7F3A49CCu;
    // 7F3A49CC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A49D0:
    ctx->pc = 0x7F3A49D0u;
    // 7F3A49D0: b       0x7F3A4D08
    {
            goto label_7F3A4D08;
    }

label_7F3A49D4:
    ctx->pc = 0x7F3A49D4u;
    ctx->downcount -= 4;
    // 7F3A49D4: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A49D8:
    ctx->pc = 0x7F3A49D8u;
    // 7F3A49D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A49DC:
    ctx->pc = 0x7F3A49DCu;
    // 7F3A49DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A49E0:
    ctx->pc = 0x7F3A49E0u;
    // 7F3A49E0: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A49E4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A49E4:
    ctx->pc = 0x7F3A49E4u;
    ctx->downcount -= 2;
    // 7F3A49E4: cmpwi   r3, 0
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

label_7F3A49E8:
    ctx->pc = 0x7F3A49E8u;
    // 7F3A49E8: bc    12, 2, 0x7F3A49F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A49F4;
        }
    }

label_7F3A49EC:
    ctx->pc = 0x7F3A49ECu;
    ctx->downcount -= 2;
    // 7F3A49EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A49F0:
    ctx->pc = 0x7F3A49F0u;
    // 7F3A49F0: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A49F4:
    ctx->pc = 0x7F3A49F4u;
    ctx->downcount -= 3;
    // 7F3A49F4: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A49F8:
    ctx->pc = 0x7F3A49F8u;
    // 7F3A49F8: cmpwi   r0, 120
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

label_7F3A49FC:
    ctx->pc = 0x7F3A49FCu;
    // 7F3A49FC: bc    4, 1, 0x7F3A4BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BF4;
        }
    }

label_7F3A4A00:
    ctx->pc = 0x7F3A4A00u;
    ctx->downcount -= 5;
    // 7F3A4A00: li      r3, -1000
    ctx->gpr[3] = (u32)(s32)(-1000);

label_7F3A4A04:
    ctx->pc = 0x7F3A4A04u;
    // 7F3A4A04: li      r4, -9600
    ctx->gpr[4] = (u32)(s32)(-9600);

label_7F3A4A08:
    ctx->pc = 0x7F3A4A08u;
    // 7F3A4A08: li      r5, 1500
    ctx->gpr[5] = (u32)(s32)(1500);

label_7F3A4A0C:
    ctx->pc = 0x7F3A4A0Cu;
    // 7F3A4A0C: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A4A10:
    ctx->pc = 0x7F3A4A10u;
    // 7F3A4A10: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A4A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A4A14:
    ctx->pc = 0x7F3A4A14u;
    ctx->downcount -= 2;
    // 7F3A4A14: cmpwi   r3, 0
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

label_7F3A4A18:
    ctx->pc = 0x7F3A4A18u;
    // 7F3A4A18: bc    12, 2, 0x7F3A4AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4AA8;
        }
    }

label_7F3A4A1C:
    ctx->pc = 0x7F3A4A1Cu;
    ctx->downcount -= 3;
    // 7F3A4A1C: lwz     r0, 5300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4A20:
    ctx->pc = 0x7F3A4A20u;
    // 7F3A4A20: cmpwi   r0, 0
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

label_7F3A4A24:
    ctx->pc = 0x7F3A4A24u;
    // 7F3A4A24: bc    4, 2, 0x7F3A4BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BF4;
        }
    }

label_7F3A4A28:
    ctx->pc = 0x7F3A4A28u;
    ctx->downcount -= 4;
    // 7F3A4A28: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A4A2C:
    ctx->pc = 0x7F3A4A2Cu;
    // 7F3A4A2C: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4A30:
    ctx->pc = 0x7F3A4A30u;
    // 7F3A4A30: cmpwi   r0, 0
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

label_7F3A4A34:
    ctx->pc = 0x7F3A4A34u;
    // 7F3A4A34: bc    4, 2, 0x7F3A4A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4A9C;
        }
    }

label_7F3A4A38:
    ctx->pc = 0x7F3A4A38u;
    ctx->downcount -= 6;
    // 7F3A4A38: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A4A3C:
    ctx->pc = 0x7F3A4A3Cu;
    // 7F3A4A3C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4A40:
    ctx->pc = 0x7F3A4A40u;
    // 7F3A4A40: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4A44:
    ctx->pc = 0x7F3A4A44u;
    // 7F3A4A44: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4A48:
    ctx->pc = 0x7F3A4A48u;
    // 7F3A4A48: cmpwi   r0, 0
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

label_7F3A4A4C:
    ctx->pc = 0x7F3A4A4Cu;
    // 7F3A4A4C: bc    4, 1, 0x7F3A4A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4A9C;
        }
    }

label_7F3A4A50:
    ctx->pc = 0x7F3A4A50u;
    ctx->downcount -= 4;
    // 7F3A4A50: lwz     r3, 5100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4A54:
    ctx->pc = 0x7F3A4A54u;
    // 7F3A4A54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4A58:
    ctx->pc = 0x7F3A4A58u;
    // 7F3A4A58: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4A5C:
    ctx->pc = 0x7F3A4A5Cu;
    // 7F3A4A5C: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4A60u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4A60:
    ctx->pc = 0x7F3A4A60u;
    ctx->downcount -= 14;
    // 7F3A4A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4A64:
    ctx->pc = 0x7F3A4A64u;
    // 7F3A4A64: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A4A68:
    ctx->pc = 0x7F3A4A68u;
    // 7F3A4A68: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4A6C:
    ctx->pc = 0x7F3A4A6Cu;
    // 7F3A4A6C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4A70:
    ctx->pc = 0x7F3A4A70u;
    // 7F3A4A70: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4A74:
    ctx->pc = 0x7F3A4A74u;
    // 7F3A4A74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4A78:
    ctx->pc = 0x7F3A4A78u;
    // 7F3A4A78: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4A7C:
    ctx->pc = 0x7F3A4A7Cu;
    // 7F3A4A7C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4A80:
    ctx->pc = 0x7F3A4A80u;
    // 7F3A4A80: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4A84:
    ctx->pc = 0x7F3A4A84u;
    // 7F3A4A84: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A4A88:
    ctx->pc = 0x7F3A4A88u;
    // 7F3A4A88: lwz     r0, 5200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4A8C:
    ctx->pc = 0x7F3A4A8Cu;
    // 7F3A4A8C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A4A90:
    ctx->pc = 0x7F3A4A90u;
    // 7F3A4A90: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4A94:
    ctx->pc = 0x7F3A4A94u;
    // 7F3A4A94: bl      0x800501FC
    {
            ctx->lr = 0x7F3A4A98u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A4A98:
    ctx->pc = 0x7F3A4A98u;
    ctx->downcount -= 1;
    // 7F3A4A98: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4A9C:
    ctx->pc = 0x7F3A4A9Cu;
    ctx->downcount -= 3;
    // 7F3A4A9C: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A4AA0:
    ctx->pc = 0x7F3A4AA0u;
    // 7F3A4AA0: stw     r0, 5300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4AA4:
    ctx->pc = 0x7F3A4AA4u;
    // 7F3A4AA4: b       0x7F3A4BF4
    {
            goto label_7F3A4BF4;
    }

label_7F3A4AA8:
    ctx->pc = 0x7F3A4AA8u;
    ctx->downcount -= 5;
    // 7F3A4AA8: li      r3, 5500
    ctx->gpr[3] = (u32)(s32)(5500);

label_7F3A4AAC:
    ctx->pc = 0x7F3A4AACu;
    // 7F3A4AAC: li      r4, -9000
    ctx->gpr[4] = (u32)(s32)(-9000);

label_7F3A4AB0:
    ctx->pc = 0x7F3A4AB0u;
    // 7F3A4AB0: li      r5, 7000
    ctx->gpr[5] = (u32)(s32)(7000);

label_7F3A4AB4:
    ctx->pc = 0x7F3A4AB4u;
    // 7F3A4AB4: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A4AB8:
    ctx->pc = 0x7F3A4AB8u;
    // 7F3A4AB8: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A4ABCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A4ABC:
    ctx->pc = 0x7F3A4ABCu;
    ctx->downcount -= 2;
    // 7F3A4ABC: cmpwi   r3, 0
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

label_7F3A4AC0:
    ctx->pc = 0x7F3A4AC0u;
    // 7F3A4AC0: bc    12, 2, 0x7F3A4B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4B50;
        }
    }

label_7F3A4AC4:
    ctx->pc = 0x7F3A4AC4u;
    ctx->downcount -= 3;
    // 7F3A4AC4: lwz     r0, 5304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4AC8:
    ctx->pc = 0x7F3A4AC8u;
    // 7F3A4AC8: cmpwi   r0, 0
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

label_7F3A4ACC:
    ctx->pc = 0x7F3A4ACCu;
    // 7F3A4ACC: bc    4, 2, 0x7F3A4BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BF4;
        }
    }

label_7F3A4AD0:
    ctx->pc = 0x7F3A4AD0u;
    ctx->downcount -= 4;
    // 7F3A4AD0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A4AD4:
    ctx->pc = 0x7F3A4AD4u;
    // 7F3A4AD4: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4AD8:
    ctx->pc = 0x7F3A4AD8u;
    // 7F3A4AD8: cmpwi   r0, 0
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

label_7F3A4ADC:
    ctx->pc = 0x7F3A4ADCu;
    // 7F3A4ADC: bc    4, 2, 0x7F3A4B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4B44;
        }
    }

label_7F3A4AE0:
    ctx->pc = 0x7F3A4AE0u;
    ctx->downcount -= 6;
    // 7F3A4AE0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A4AE4:
    ctx->pc = 0x7F3A4AE4u;
    // 7F3A4AE4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4AE8:
    ctx->pc = 0x7F3A4AE8u;
    // 7F3A4AE8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4AEC:
    ctx->pc = 0x7F3A4AECu;
    // 7F3A4AEC: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4AF0:
    ctx->pc = 0x7F3A4AF0u;
    // 7F3A4AF0: cmpwi   r0, 0
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

label_7F3A4AF4:
    ctx->pc = 0x7F3A4AF4u;
    // 7F3A4AF4: bc    4, 1, 0x7F3A4B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4B44;
        }
    }

label_7F3A4AF8:
    ctx->pc = 0x7F3A4AF8u;
    ctx->downcount -= 4;
    // 7F3A4AF8: lwz     r3, 5104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4AFC:
    ctx->pc = 0x7F3A4AFCu;
    // 7F3A4AFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4B00:
    ctx->pc = 0x7F3A4B00u;
    // 7F3A4B00: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4B04:
    ctx->pc = 0x7F3A4B04u;
    // 7F3A4B04: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4B08u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4B08:
    ctx->pc = 0x7F3A4B08u;
    ctx->downcount -= 14;
    // 7F3A4B08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4B0C:
    ctx->pc = 0x7F3A4B0Cu;
    // 7F3A4B0C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A4B10:
    ctx->pc = 0x7F3A4B10u;
    // 7F3A4B10: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4B14:
    ctx->pc = 0x7F3A4B14u;
    // 7F3A4B14: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4B18:
    ctx->pc = 0x7F3A4B18u;
    // 7F3A4B18: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4B1C:
    ctx->pc = 0x7F3A4B1Cu;
    // 7F3A4B1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4B20:
    ctx->pc = 0x7F3A4B20u;
    // 7F3A4B20: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4B24:
    ctx->pc = 0x7F3A4B24u;
    // 7F3A4B24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4B28:
    ctx->pc = 0x7F3A4B28u;
    // 7F3A4B28: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4B2C:
    ctx->pc = 0x7F3A4B2Cu;
    // 7F3A4B2C: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A4B30:
    ctx->pc = 0x7F3A4B30u;
    // 7F3A4B30: lwz     r0, 5204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4B34:
    ctx->pc = 0x7F3A4B34u;
    // 7F3A4B34: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A4B38:
    ctx->pc = 0x7F3A4B38u;
    // 7F3A4B38: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4B3C:
    ctx->pc = 0x7F3A4B3Cu;
    // 7F3A4B3C: bl      0x800501FC
    {
            ctx->lr = 0x7F3A4B40u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A4B40:
    ctx->pc = 0x7F3A4B40u;
    ctx->downcount -= 1;
    // 7F3A4B40: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4B44:
    ctx->pc = 0x7F3A4B44u;
    ctx->downcount -= 3;
    // 7F3A4B44: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A4B48:
    ctx->pc = 0x7F3A4B48u;
    // 7F3A4B48: stw     r0, 5304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4B4C:
    ctx->pc = 0x7F3A4B4Cu;
    // 7F3A4B4C: b       0x7F3A4BF4
    {
            goto label_7F3A4BF4;
    }

label_7F3A4B50:
    ctx->pc = 0x7F3A4B50u;
    ctx->downcount -= 5;
    // 7F3A4B50: li      r3, -9000
    ctx->gpr[3] = (u32)(s32)(-9000);

label_7F3A4B54:
    ctx->pc = 0x7F3A4B54u;
    // 7F3A4B54: li      r4, -9000
    ctx->gpr[4] = (u32)(s32)(-9000);

label_7F3A4B58:
    ctx->pc = 0x7F3A4B58u;
    // 7F3A4B58: li      r5, -7500
    ctx->gpr[5] = (u32)(s32)(-7500);

label_7F3A4B5C:
    ctx->pc = 0x7F3A4B5Cu;
    // 7F3A4B5C: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A4B60:
    ctx->pc = 0x7F3A4B60u;
    // 7F3A4B60: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A4B64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A4B64:
    ctx->pc = 0x7F3A4B64u;
    ctx->downcount -= 2;
    // 7F3A4B64: cmpwi   r3, 0
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

label_7F3A4B68:
    ctx->pc = 0x7F3A4B68u;
    // 7F3A4B68: bc    12, 2, 0x7F3A4BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BF4;
        }
    }

label_7F3A4B6C:
    ctx->pc = 0x7F3A4B6Cu;
    ctx->downcount -= 3;
    // 7F3A4B6C: lwz     r0, 5308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4B70:
    ctx->pc = 0x7F3A4B70u;
    // 7F3A4B70: cmpwi   r0, 0
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

label_7F3A4B74:
    ctx->pc = 0x7F3A4B74u;
    // 7F3A4B74: bc    4, 2, 0x7F3A4BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BF4;
        }
    }

label_7F3A4B78:
    ctx->pc = 0x7F3A4B78u;
    ctx->downcount -= 4;
    // 7F3A4B78: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A4B7C:
    ctx->pc = 0x7F3A4B7Cu;
    // 7F3A4B7C: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4B80:
    ctx->pc = 0x7F3A4B80u;
    // 7F3A4B80: cmpwi   r0, 0
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

label_7F3A4B84:
    ctx->pc = 0x7F3A4B84u;
    // 7F3A4B84: bc    4, 2, 0x7F3A4BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BEC;
        }
    }

label_7F3A4B88:
    ctx->pc = 0x7F3A4B88u;
    ctx->downcount -= 6;
    // 7F3A4B88: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A4B8C:
    ctx->pc = 0x7F3A4B8Cu;
    // 7F3A4B8C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4B90:
    ctx->pc = 0x7F3A4B90u;
    // 7F3A4B90: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4B94:
    ctx->pc = 0x7F3A4B94u;
    // 7F3A4B94: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4B98:
    ctx->pc = 0x7F3A4B98u;
    // 7F3A4B98: cmpwi   r0, 0
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

label_7F3A4B9C:
    ctx->pc = 0x7F3A4B9Cu;
    // 7F3A4B9C: bc    4, 1, 0x7F3A4BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4BEC;
        }
    }

label_7F3A4BA0:
    ctx->pc = 0x7F3A4BA0u;
    ctx->downcount -= 4;
    // 7F3A4BA0: lwz     r3, 5104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4BA4:
    ctx->pc = 0x7F3A4BA4u;
    // 7F3A4BA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4BA8:
    ctx->pc = 0x7F3A4BA8u;
    // 7F3A4BA8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4BAC:
    ctx->pc = 0x7F3A4BACu;
    // 7F3A4BAC: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4BB0u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4BB0:
    ctx->pc = 0x7F3A4BB0u;
    ctx->downcount -= 14;
    // 7F3A4BB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4BB4:
    ctx->pc = 0x7F3A4BB4u;
    // 7F3A4BB4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A4BB8:
    ctx->pc = 0x7F3A4BB8u;
    // 7F3A4BB8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4BBC:
    ctx->pc = 0x7F3A4BBCu;
    // 7F3A4BBC: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4BC0:
    ctx->pc = 0x7F3A4BC0u;
    // 7F3A4BC0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4BC4:
    ctx->pc = 0x7F3A4BC4u;
    // 7F3A4BC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4BC8:
    ctx->pc = 0x7F3A4BC8u;
    // 7F3A4BC8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4BCC:
    ctx->pc = 0x7F3A4BCCu;
    // 7F3A4BCC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4BD0:
    ctx->pc = 0x7F3A4BD0u;
    // 7F3A4BD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4BD4:
    ctx->pc = 0x7F3A4BD4u;
    // 7F3A4BD4: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A4BD8:
    ctx->pc = 0x7F3A4BD8u;
    // 7F3A4BD8: lwz     r0, 5204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4BDC:
    ctx->pc = 0x7F3A4BDCu;
    // 7F3A4BDC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A4BE0:
    ctx->pc = 0x7F3A4BE0u;
    // 7F3A4BE0: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4BE4:
    ctx->pc = 0x7F3A4BE4u;
    // 7F3A4BE4: bl      0x800501FC
    {
            ctx->lr = 0x7F3A4BE8u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A4BE8:
    ctx->pc = 0x7F3A4BE8u;
    ctx->downcount -= 1;
    // 7F3A4BE8: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4BEC:
    ctx->pc = 0x7F3A4BECu;
    ctx->downcount -= 2;
    // 7F3A4BEC: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A4BF0:
    ctx->pc = 0x7F3A4BF0u;
    // 7F3A4BF0: stw     r0, 5308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4BF4:
    ctx->pc = 0x7F3A4BF4u;
    ctx->downcount -= 3;
    // 7F3A4BF4: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4BF8:
    ctx->pc = 0x7F3A4BF8u;
    // 7F3A4BF8: cmpwi   r0, 120
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

label_7F3A4BFC:
    ctx->pc = 0x7F3A4BFCu;
    // 7F3A4BFC: bc    4, 1, 0x7F3A4C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4C58;
        }
    }

label_7F3A4C00:
    ctx->pc = 0x7F3A4C00u;
    ctx->downcount -= 3;
    // 7F3A4C00: lha     r0, 5290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5290);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4C04:
    ctx->pc = 0x7F3A4C04u;
    // 7F3A4C04: cmpwi   r0, 300
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

label_7F3A4C08:
    ctx->pc = 0x7F3A4C08u;
    // 7F3A4C08: bc    4, 1, 0x7F3A4C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4C2C;
        }
    }

label_7F3A4C0C:
    ctx->pc = 0x7F3A4C0Cu;
    ctx->downcount -= 8;
    // 7F3A4C0C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3A4C10:
    ctx->pc = 0x7F3A4C10u;
    // 7F3A4C10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4C14:
    ctx->pc = 0x7F3A4C14u;
    // 7F3A4C14: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4C18:
    ctx->pc = 0x7F3A4C18u;
    // 7F3A4C18: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4C1C:
    ctx->pc = 0x7F3A4C1Cu;
    // 7F3A4C1C: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A4C20:
    ctx->pc = 0x7F3A4C20u;
    // 7F3A4C20: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4C24:
    ctx->pc = 0x7F3A4C24u;
    // 7F3A4C24: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4C28:
    ctx->pc = 0x7F3A4C28u;
    // 7F3A4C28: b       0x7F3A4D08
    {
            goto label_7F3A4D08;
    }

label_7F3A4C2C:
    ctx->pc = 0x7F3A4C2Cu;
    ctx->downcount -= 3;
    // 7F3A4C2C: lha     r0, 5292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4C30:
    ctx->pc = 0x7F3A4C30u;
    // 7F3A4C30: cmpwi   r0, 300
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

label_7F3A4C34:
    ctx->pc = 0x7F3A4C34u;
    // 7F3A4C34: bc    4, 1, 0x7F3A4C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4C58;
        }
    }

label_7F3A4C38:
    ctx->pc = 0x7F3A4C38u;
    ctx->downcount -= 8;
    // 7F3A4C38: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A4C3C:
    ctx->pc = 0x7F3A4C3Cu;
    // 7F3A4C3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4C40:
    ctx->pc = 0x7F3A4C40u;
    // 7F3A4C40: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4C44:
    ctx->pc = 0x7F3A4C44u;
    // 7F3A4C44: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4C48:
    ctx->pc = 0x7F3A4C48u;
    // 7F3A4C48: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A4C4C:
    ctx->pc = 0x7F3A4C4Cu;
    // 7F3A4C4C: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4C50:
    ctx->pc = 0x7F3A4C50u;
    // 7F3A4C50: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4C54:
    ctx->pc = 0x7F3A4C54u;
    // 7F3A4C54: b       0x7F3A4D08
    {
            goto label_7F3A4D08;
    }

label_7F3A4C58:
    ctx->pc = 0x7F3A4C58u;
    ctx->downcount -= 3;
    // 7F3A4C58: lwz     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4C5C:
    ctx->pc = 0x7F3A4C5Cu;
    // 7F3A4C5C: cmpwi   r0, 7200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A4C60:
    ctx->pc = 0x7F3A4C60u;
    // 7F3A4C60: bc    12, 1, 0x7F3A4C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4C70;
        }
    }

label_7F3A4C64:
    ctx->pc = 0x7F3A4C64u;
    ctx->downcount -= 1;
    // 7F3A4C64: bl      0x7F3A4948
    {
            ctx->lr = 0x7F3A4C68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4948u;
                return;
            }
            goto label_7F3A4948;
    }

label_7F3A4C68:
    ctx->pc = 0x7F3A4C68u;
    ctx->downcount -= 2;
    // 7F3A4C68: cmpwi   r3, 0
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

label_7F3A4C6C:
    ctx->pc = 0x7F3A4C6Cu;
    // 7F3A4C6C: bc    12, 2, 0x7F3A4C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4C98;
        }
    }

label_7F3A4C70:
    ctx->pc = 0x7F3A4C70u;
    ctx->downcount -= 10;
    // 7F3A4C70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A4C74:
    ctx->pc = 0x7F3A4C74u;
    // 7F3A4C74: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A4C78:
    ctx->pc = 0x7F3A4C78u;
    // 7F3A4C78: stw     r4, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A4C7C:
    ctx->pc = 0x7F3A4C7Cu;
    // 7F3A4C7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4C80:
    ctx->pc = 0x7F3A4C80u;
    // 7F3A4C80: sth     r4, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A4C84:
    ctx->pc = 0x7F3A4C84u;
    // 7F3A4C84: sth     r4, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A4C88:
    ctx->pc = 0x7F3A4C88u;
    // 7F3A4C88: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4C8C:
    ctx->pc = 0x7F3A4C8Cu;
    // 7F3A4C8C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4C90:
    ctx->pc = 0x7F3A4C90u;
    // 7F3A4C90: stw     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4C94:
    ctx->pc = 0x7F3A4C94u;
    // 7F3A4C94: b       0x7F3A4D08
    {
            goto label_7F3A4D08;
    }

label_7F3A4C98:
    ctx->pc = 0x7F3A4C98u;
    ctx->downcount -= 7;
    // 7F3A4C98: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4C9C:
    ctx->pc = 0x7F3A4C9Cu;
    // 7F3A4C9C: rlwinm r0, r3, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 26u) & 0xFC000000u;
    }

label_7F3A4CA0:
    ctx->pc = 0x7F3A4CA0u;
    // 7F3A4CA0: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F3A4CA4:
    ctx->pc = 0x7F3A4CA4u;
    // 7F3A4CA4: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A4CA8:
    ctx->pc = 0x7F3A4CA8u;
    // 7F3A4CA8: rlwinm r0, r0, 6, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFFFu;
    }

label_7F3A4CAC:
    ctx->pc = 0x7F3A4CACu;
    // 7F3A4CAC: add.   r0, r0, r3
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

label_7F3A4CB0:
    ctx->pc = 0x7F3A4CB0u;
    // 7F3A4CB0: bc    4, 2, 0x7F3A4CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4CE8;
        }
    }

label_7F3A4CB4:
    ctx->pc = 0x7F3A4CB4u;
    ctx->downcount -= 4;
    // 7F3A4CB4: addi    r4, r31, 4948
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4948);

label_7F3A4CB8:
    ctx->pc = 0x7F3A4CB8u;
    // 7F3A4CB8: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A4CBC:
    ctx->pc = 0x7F3A4CBCu;
    // 7F3A4CBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4CC0:
    ctx->pc = 0x7F3A4CC0u;
    // 7F3A4CC0: bl      0x7F103FC0
    {
            ctx->lr = 0x7F3A4CC4u;
            ctx->pc = 0x7F103FC0u;
            return;
    }

label_7F3A4CC4:
    ctx->pc = 0x7F3A4CC4u;
    ctx->downcount -= 3;
    // 7F3A4CC4: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A4CC8:
    ctx->pc = 0x7F3A4CC8u;
    // 7F3A4CC8: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4CCC:
    ctx->pc = 0x7F3A4CCCu;
    // 7F3A4CCC: bl      0x7F10377C
    {
            ctx->lr = 0x7F3A4CD0u;
            ctx->pc = 0x7F10377Cu;
            return;
    }

label_7F3A4CD0:
    ctx->pc = 0x7F3A4CD0u;
    ctx->downcount -= 2;
    // 7F3A4CD0: cmpwi   r3, 0
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

label_7F3A4CD4:
    ctx->pc = 0x7F3A4CD4u;
    // 7F3A4CD4: bc    4, 2, 0x7F3A4CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4CE8;
        }
    }

label_7F3A4CD8:
    ctx->pc = 0x7F3A4CD8u;
    ctx->downcount -= 4;
    // 7F3A4CD8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A4CDC:
    ctx->pc = 0x7F3A4CDCu;
    // 7F3A4CDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4CE0:
    ctx->pc = 0x7F3A4CE0u;
    // 7F3A4CE0: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4CE4:
    ctx->pc = 0x7F3A4CE4u;
    // 7F3A4CE4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4CE8:
    ctx->pc = 0x7F3A4CE8u;
    ctx->downcount -= 8;
    // 7F3A4CE8: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4CEC:
    ctx->pc = 0x7F3A4CECu;
    // 7F3A4CEC: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_7F3A4CF0:
    ctx->pc = 0x7F3A4CF0u;
    // 7F3A4CF0: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4CF4:
    ctx->pc = 0x7F3A4CF4u;
    // 7F3A4CF4: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4CF8:
    ctx->pc = 0x7F3A4CF8u;
    // 7F3A4CF8: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4CFC:
    ctx->pc = 0x7F3A4CFCu;
    // 7F3A4CFC: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4D00:
    ctx->pc = 0x7F3A4D00u;
    // 7F3A4D00: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4D04:
    ctx->pc = 0x7F3A4D04u;
    // 7F3A4D04: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4D08:
    ctx->pc = 0x7F3A4D08u;
    ctx->downcount -= 6;
    // 7F3A4D08: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4D0C:
    ctx->pc = 0x7F3A4D0Cu;
    // 7F3A4D0C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A4D10:
    ctx->pc = 0x7F3A4D10u;
    // 7F3A4D10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A4D14:
    ctx->pc = 0x7F3A4D14u;
    // 7F3A4D14: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A4D18:
    ctx->pc = 0x7F3A4D18u;
    // 7F3A4D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4D1C:
    ctx->pc = 0x7F3A4D1Cu;
    ctx->downcount -= 10;
    // 7F3A4D1C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A4D20:
    ctx->pc = 0x7F3A4D20u;
    // 7F3A4D20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A4D24:
    ctx->pc = 0x7F3A4D24u;
    // 7F3A4D24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4D28:
    ctx->pc = 0x7F3A4D28u;
    // 7F3A4D28: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4D2C:
    ctx->pc = 0x7F3A4D2Cu;
    // 7F3A4D2C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A4D30:
    ctx->pc = 0x7F3A4D30u;
    // 7F3A4D30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A4D34:
    ctx->pc = 0x7F3A4D34u;
    // 7F3A4D34: sth     r6, 5290(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5290);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F3A4D38:
    ctx->pc = 0x7F3A4D38u;
    // 7F3A4D38: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4D3C:
    ctx->pc = 0x7F3A4D3Cu;
    // 7F3A4D3C: cmpwi   r0, 1
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

label_7F3A4D40:
    ctx->pc = 0x7F3A4D40u;
    // 7F3A4D40: bc    4, 2, 0x7F3A4D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4D88;
        }
    }

label_7F3A4D44:
    ctx->pc = 0x7F3A4D44u;
    ctx->downcount -= 9;
    // 7F3A4D44: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A4D48:
    ctx->pc = 0x7F3A4D48u;
    // 7F3A4D48: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F3A4D4C:
    ctx->pc = 0x7F3A4D4Cu;
    // 7F3A4D4C: sth     r3, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4D50:
    ctx->pc = 0x7F3A4D50u;
    // 7F3A4D50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4D54:
    ctx->pc = 0x7F3A4D54u;
    // 7F3A4D54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4D58:
    ctx->pc = 0x7F3A4D58u;
    // 7F3A4D58: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4D5C:
    ctx->pc = 0x7F3A4D5Cu;
    // 7F3A4D5C: stw     r6, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A4D60:
    ctx->pc = 0x7F3A4D60u;
    // 7F3A4D60: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4D64:
    ctx->pc = 0x7F3A4D64u;
    // 7F3A4D64: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4D68u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4D68:
    ctx->pc = 0x7F3A4D68u;
    ctx->downcount -= 2;
    // 7F3A4D68: cmpwi   r3, 0
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

label_7F3A4D6C:
    ctx->pc = 0x7F3A4D6Cu;
    // 7F3A4D6C: bc    12, 2, 0x7F3A4EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4EE8;
        }
    }

label_7F3A4D70:
    ctx->pc = 0x7F3A4D70u;
    ctx->downcount -= 3;
    // 7F3A4D70: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4D74:
    ctx->pc = 0x7F3A4D74u;
    // 7F3A4D74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4D78:
    ctx->pc = 0x7F3A4D78u;
    // 7F3A4D78: bl      0x80050B54
    {
            ctx->lr = 0x7F3A4D7Cu;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F3A4D7C:
    ctx->pc = 0x7F3A4D7Cu;
    ctx->downcount -= 3;
    // 7F3A4D7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4D80:
    ctx->pc = 0x7F3A4D80u;
    // 7F3A4D80: stw     r0, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4D84:
    ctx->pc = 0x7F3A4D84u;
    // 7F3A4D84: b       0x7F3A4EE8
    {
            goto label_7F3A4EE8;
    }

label_7F3A4D88:
    ctx->pc = 0x7F3A4D88u;
    ctx->downcount -= 3;
    // 7F3A4D88: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4D8C:
    ctx->pc = 0x7F3A4D8Cu;
    // 7F3A4D8C: cmpwi   r0, 0
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

label_7F3A4D90:
    ctx->pc = 0x7F3A4D90u;
    // 7F3A4D90: bc    4, 2, 0x7F3A4E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E90;
        }
    }

label_7F3A4D94:
    ctx->pc = 0x7F3A4D94u;
    ctx->downcount -= 4;
    // 7F3A4D94: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4D98:
    ctx->pc = 0x7F3A4D98u;
    // 7F3A4D98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4D9C:
    ctx->pc = 0x7F3A4D9Cu;
    // 7F3A4D9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4DA0:
    ctx->pc = 0x7F3A4DA0u;
    // 7F3A4DA0: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4DA4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4DA4:
    ctx->pc = 0x7F3A4DA4u;
    ctx->downcount -= 2;
    // 7F3A4DA4: cmpwi   r3, 0
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

label_7F3A4DA8:
    ctx->pc = 0x7F3A4DA8u;
    // 7F3A4DA8: bc    4, 2, 0x7F3A4E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E7C;
        }
    }

label_7F3A4DAC:
    ctx->pc = 0x7F3A4DACu;
    ctx->downcount -= 4;
    // 7F3A4DAC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A4DB0:
    ctx->pc = 0x7F3A4DB0u;
    // 7F3A4DB0: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4DB4:
    ctx->pc = 0x7F3A4DB4u;
    // 7F3A4DB4: cmpwi   r0, 0
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

label_7F3A4DB8:
    ctx->pc = 0x7F3A4DB8u;
    // 7F3A4DB8: bc    4, 2, 0x7F3A4E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E38;
        }
    }

label_7F3A4DBC:
    ctx->pc = 0x7F3A4DBCu;
    ctx->downcount -= 6;
    // 7F3A4DBC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A4DC0:
    ctx->pc = 0x7F3A4DC0u;
    // 7F3A4DC0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4DC4:
    ctx->pc = 0x7F3A4DC4u;
    // 7F3A4DC4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4DC8:
    ctx->pc = 0x7F3A4DC8u;
    // 7F3A4DC8: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4DCC:
    ctx->pc = 0x7F3A4DCCu;
    // 7F3A4DCC: cmpwi   r0, 0
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

label_7F3A4DD0:
    ctx->pc = 0x7F3A4DD0u;
    // 7F3A4DD0: bc    4, 1, 0x7F3A4E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E38;
        }
    }

label_7F3A4DD4:
    ctx->pc = 0x7F3A4DD4u;
    ctx->downcount -= 7;
    // 7F3A4DD4: lha     r0, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4DD8:
    ctx->pc = 0x7F3A4DD8u;
    // 7F3A4DD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4DDC:
    ctx->pc = 0x7F3A4DDCu;
    // 7F3A4DDC: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4DE0:
    ctx->pc = 0x7F3A4DE0u;
    // 7F3A4DE0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A4DE4:
    ctx->pc = 0x7F3A4DE4u;
    // 7F3A4DE4: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A4DE8:
    ctx->pc = 0x7F3A4DE8u;
    // 7F3A4DE8: lwz     r3, 5112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4DEC:
    ctx->pc = 0x7F3A4DECu;
    // 7F3A4DEC: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4DF0u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4DF0:
    ctx->pc = 0x7F3A4DF0u;
    ctx->downcount -= 17;
    // 7F3A4DF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4DF4:
    ctx->pc = 0x7F3A4DF4u;
    // 7F3A4DF4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A4DF8:
    ctx->pc = 0x7F3A4DF8u;
    // 7F3A4DF8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4DFC:
    ctx->pc = 0x7F3A4DFCu;
    // 7F3A4DFC: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4E00:
    ctx->pc = 0x7F3A4E00u;
    // 7F3A4E00: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4E04:
    ctx->pc = 0x7F3A4E04u;
    // 7F3A4E04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4E08:
    ctx->pc = 0x7F3A4E08u;
    // 7F3A4E08: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4E0C:
    ctx->pc = 0x7F3A4E0Cu;
    // 7F3A4E0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A4E10:
    ctx->pc = 0x7F3A4E10u;
    // 7F3A4E10: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A4E14:
    ctx->pc = 0x7F3A4E14u;
    // 7F3A4E14: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A4E18:
    ctx->pc = 0x7F3A4E18u;
    // 7F3A4E18: lha     r0, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4E1C:
    ctx->pc = 0x7F3A4E1Cu;
    // 7F3A4E1C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A4E20:
    ctx->pc = 0x7F3A4E20u;
    // 7F3A4E20: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A4E24:
    ctx->pc = 0x7F3A4E24u;
    // 7F3A4E24: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A4E28:
    ctx->pc = 0x7F3A4E28u;
    // 7F3A4E28: lwz     r0, 5212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4E2C:
    ctx->pc = 0x7F3A4E2Cu;
    // 7F3A4E2C: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A4E30:
    ctx->pc = 0x7F3A4E30u;
    // 7F3A4E30: bl      0x800501FC
    {
            ctx->lr = 0x7F3A4E34u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A4E34:
    ctx->pc = 0x7F3A4E34u;
    ctx->downcount -= 1;
    // 7F3A4E34: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4E38:
    ctx->pc = 0x7F3A4E38u;
    ctx->downcount -= 6;
    // 7F3A4E38: lha     r3, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4E3C:
    ctx->pc = 0x7F3A4E3Cu;
    // 7F3A4E3C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4E40:
    ctx->pc = 0x7F3A4E40u;
    // 7F3A4E40: sth     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4E44:
    ctx->pc = 0x7F3A4E44u;
    // 7F3A4E44: lha     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4E48:
    ctx->pc = 0x7F3A4E48u;
    // 7F3A4E48: cmpwi   r0, 14
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A4E4C:
    ctx->pc = 0x7F3A4E4Cu;
    // 7F3A4E4C: bc    4, 1, 0x7F3A4E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E58;
        }
    }

label_7F3A4E50:
    ctx->pc = 0x7F3A4E50u;
    ctx->downcount -= 2;
    // 7F3A4E50: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_7F3A4E54:
    ctx->pc = 0x7F3A4E54u;
    // 7F3A4E54: sth     r0, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4E58:
    ctx->pc = 0x7F3A4E58u;
    ctx->downcount -= 6;
    // 7F3A4E58: lha     r3, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4E5C:
    ctx->pc = 0x7F3A4E5Cu;
    // 7F3A4E5C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4E60:
    ctx->pc = 0x7F3A4E60u;
    // 7F3A4E60: sth     r0, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4E64:
    ctx->pc = 0x7F3A4E64u;
    // 7F3A4E64: lha     r0, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4E68:
    ctx->pc = 0x7F3A4E68u;
    // 7F3A4E68: cmpwi   r0, 4
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

label_7F3A4E6C:
    ctx->pc = 0x7F3A4E6Cu;
    // 7F3A4E6C: bc    4, 1, 0x7F3A4E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4E90;
        }
    }

label_7F3A4E70:
    ctx->pc = 0x7F3A4E70u;
    ctx->downcount -= 3;
    // 7F3A4E70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4E74:
    ctx->pc = 0x7F3A4E74u;
    // 7F3A4E74: sth     r0, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4E78:
    ctx->pc = 0x7F3A4E78u;
    // 7F3A4E78: b       0x7F3A4E90
    {
            goto label_7F3A4E90;
    }

label_7F3A4E7C:
    ctx->pc = 0x7F3A4E7Cu;
    ctx->downcount -= 5;
    // 7F3A4E7C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A4E80:
    ctx->pc = 0x7F3A4E80u;
    // 7F3A4E80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4E84:
    ctx->pc = 0x7F3A4E84u;
    // 7F3A4E84: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4E88:
    ctx->pc = 0x7F3A4E88u;
    // 7F3A4E88: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4E8C:
    ctx->pc = 0x7F3A4E8Cu;
    // 7F3A4E8C: b       0x7F3A4EE8
    {
            goto label_7F3A4EE8;
    }

label_7F3A4E90:
    ctx->pc = 0x7F3A4E90u;
    ctx->downcount -= 3;
    // 7F3A4E90: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4E94:
    ctx->pc = 0x7F3A4E94u;
    // 7F3A4E94: cmpwi   r0, 120
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

label_7F3A4E98:
    ctx->pc = 0x7F3A4E98u;
    // 7F3A4E98: bc    4, 1, 0x7F3A4EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4EC8;
        }
    }

label_7F3A4E9C:
    ctx->pc = 0x7F3A4E9Cu;
    ctx->downcount -= 4;
    // 7F3A4E9C: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4EA0:
    ctx->pc = 0x7F3A4EA0u;
    // 7F3A4EA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4EA4:
    ctx->pc = 0x7F3A4EA4u;
    // 7F3A4EA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4EA8:
    ctx->pc = 0x7F3A4EA8u;
    // 7F3A4EA8: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4EACu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4EAC:
    ctx->pc = 0x7F3A4EACu;
    ctx->downcount -= 2;
    // 7F3A4EAC: cmpwi   r3, 0
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

label_7F3A4EB0:
    ctx->pc = 0x7F3A4EB0u;
    // 7F3A4EB0: bc    4, 2, 0x7F3A4EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4EC8;
        }
    }

label_7F3A4EB4:
    ctx->pc = 0x7F3A4EB4u;
    ctx->downcount -= 5;
    // 7F3A4EB4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A4EB8:
    ctx->pc = 0x7F3A4EB8u;
    // 7F3A4EB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4EBC:
    ctx->pc = 0x7F3A4EBCu;
    // 7F3A4EBC: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4EC0:
    ctx->pc = 0x7F3A4EC0u;
    // 7F3A4EC0: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4EC4:
    ctx->pc = 0x7F3A4EC4u;
    // 7F3A4EC4: b       0x7F3A4EE8
    {
            goto label_7F3A4EE8;
    }

label_7F3A4EC8:
    ctx->pc = 0x7F3A4EC8u;
    ctx->downcount -= 8;
    // 7F3A4EC8: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4ECC:
    ctx->pc = 0x7F3A4ECCu;
    // 7F3A4ECC: oris    r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | (0x0002u << 16);

label_7F3A4ED0:
    ctx->pc = 0x7F3A4ED0u;
    // 7F3A4ED0: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4ED4:
    ctx->pc = 0x7F3A4ED4u;
    // 7F3A4ED4: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4ED8:
    ctx->pc = 0x7F3A4ED8u;
    // 7F3A4ED8: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4EDC:
    ctx->pc = 0x7F3A4EDCu;
    // 7F3A4EDC: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4EE0:
    ctx->pc = 0x7F3A4EE0u;
    // 7F3A4EE0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A4EE4:
    ctx->pc = 0x7F3A4EE4u;
    // 7F3A4EE4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4EE8:
    ctx->pc = 0x7F3A4EE8u;
    ctx->downcount -= 6;
    // 7F3A4EE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4EEC:
    ctx->pc = 0x7F3A4EECu;
    // 7F3A4EEC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A4EF0:
    ctx->pc = 0x7F3A4EF0u;
    // 7F3A4EF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A4EF4:
    ctx->pc = 0x7F3A4EF4u;
    // 7F3A4EF4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A4EF8:
    ctx->pc = 0x7F3A4EF8u;
    // 7F3A4EF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A4EFC:
    ctx->pc = 0x7F3A4EFCu;
    ctx->downcount -= 20;
    // 7F3A4EFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A4F00:
    ctx->pc = 0x7F3A4F00u;
    // 7F3A4F00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A4F04:
    ctx->pc = 0x7F3A4F04u;
    // 7F3A4F04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A4F08:
    ctx->pc = 0x7F3A4F08u;
    // 7F3A4F08: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4F0C:
    ctx->pc = 0x7F3A4F0Cu;
    // 7F3A4F0C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A4F10:
    ctx->pc = 0x7F3A4F10u;
    // 7F3A4F10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A4F14:
    ctx->pc = 0x7F3A4F14u;
    // 7F3A4F14: sth     r6, 5292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5292);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F3A4F18:
    ctx->pc = 0x7F3A4F18u;
    // 7F3A4F18: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4F1C:
    ctx->pc = 0x7F3A4F1Cu;
    // 7F3A4F1C: cmpwi   r0, 1
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

label_7F3A4F20:
    ctx->pc = 0x7F3A4F20u;
    // 7F3A4F20: bc    4, 2, 0x7F3A4F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A4F68;
        }
    }

label_7F3A4F24:
    ctx->pc = 0x7F3A4F24u;
    ctx->downcount -= 9;
    // 7F3A4F24: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A4F28:
    ctx->pc = 0x7F3A4F28u;
    // 7F3A4F28: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F3A4F2C:
    ctx->pc = 0x7F3A4F2Cu;
    // 7F3A4F2C: sth     r3, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A4F30:
    ctx->pc = 0x7F3A4F30u;
    // 7F3A4F30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4F34:
    ctx->pc = 0x7F3A4F34u;
    // 7F3A4F34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4F38:
    ctx->pc = 0x7F3A4F38u;
    // 7F3A4F38: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A4F3C:
    ctx->pc = 0x7F3A4F3Cu;
    // 7F3A4F3C: stw     r6, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A4F40:
    ctx->pc = 0x7F3A4F40u;
    // 7F3A4F40: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4F44:
    ctx->pc = 0x7F3A4F44u;
    // 7F3A4F44: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4F48u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4F48:
    ctx->pc = 0x7F3A4F48u;
    ctx->downcount -= 2;
    // 7F3A4F48: cmpwi   r3, 0
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

label_7F3A4F4C:
    ctx->pc = 0x7F3A4F4Cu;
    // 7F3A4F4C: bc    12, 2, 0x7F3A5094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5094;
        }
    }

label_7F3A4F50:
    ctx->pc = 0x7F3A4F50u;
    ctx->downcount -= 3;
    // 7F3A4F50: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4F54:
    ctx->pc = 0x7F3A4F54u;
    // 7F3A4F54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4F58:
    ctx->pc = 0x7F3A4F58u;
    // 7F3A4F58: bl      0x80050B54
    {
            ctx->lr = 0x7F3A4F5Cu;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F3A4F5C:
    ctx->pc = 0x7F3A4F5Cu;
    ctx->downcount -= 3;
    // 7F3A4F5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A4F60:
    ctx->pc = 0x7F3A4F60u;
    // 7F3A4F60: stw     r0, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A4F64:
    ctx->pc = 0x7F3A4F64u;
    // 7F3A4F64: b       0x7F3A5094
    {
            goto label_7F3A5094;
    }

label_7F3A4F68:
    ctx->pc = 0x7F3A4F68u;
    ctx->downcount -= 3;
    // 7F3A4F68: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4F6C:
    ctx->pc = 0x7F3A4F6Cu;
    // 7F3A4F6C: cmpwi   r0, 0
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

label_7F3A4F70:
    ctx->pc = 0x7F3A4F70u;
    // 7F3A4F70: bc    4, 2, 0x7F3A503C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A503C;
        }
    }

label_7F3A4F74:
    ctx->pc = 0x7F3A4F74u;
    ctx->downcount -= 4;
    // 7F3A4F74: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4F78:
    ctx->pc = 0x7F3A4F78u;
    // 7F3A4F78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4F7C:
    ctx->pc = 0x7F3A4F7Cu;
    // 7F3A4F7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A4F80:
    ctx->pc = 0x7F3A4F80u;
    // 7F3A4F80: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A4F84u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A4F84:
    ctx->pc = 0x7F3A4F84u;
    ctx->downcount -= 2;
    // 7F3A4F84: cmpwi   r3, 0
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

label_7F3A4F88:
    ctx->pc = 0x7F3A4F88u;
    // 7F3A4F88: bc    4, 2, 0x7F3A5028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5028;
        }
    }

label_7F3A4F8C:
    ctx->pc = 0x7F3A4F8Cu;
    ctx->downcount -= 4;
    // 7F3A4F8C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A4F90:
    ctx->pc = 0x7F3A4F90u;
    // 7F3A4F90: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4F94:
    ctx->pc = 0x7F3A4F94u;
    // 7F3A4F94: cmpwi   r0, 0
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

label_7F3A4F98:
    ctx->pc = 0x7F3A4F98u;
    // 7F3A4F98: bc    4, 2, 0x7F3A503C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A503C;
        }
    }

label_7F3A4F9C:
    ctx->pc = 0x7F3A4F9Cu;
    ctx->downcount -= 6;
    // 7F3A4F9C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A4FA0:
    ctx->pc = 0x7F3A4FA0u;
    // 7F3A4FA0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A4FA4:
    ctx->pc = 0x7F3A4FA4u;
    // 7F3A4FA4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4FA8:
    ctx->pc = 0x7F3A4FA8u;
    // 7F3A4FA8: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A4FAC:
    ctx->pc = 0x7F3A4FACu;
    // 7F3A4FAC: cmpwi   r0, 0
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

label_7F3A4FB0:
    ctx->pc = 0x7F3A4FB0u;
    // 7F3A4FB0: bc    4, 1, 0x7F3A503C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A503C;
        }
    }

label_7F3A4FB4:
    ctx->pc = 0x7F3A4FB4u;
    ctx->downcount -= 12;
    // 7F3A4FB4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3A4FB8:
    ctx->pc = 0x7F3A4FB8u;
    // 7F3A4FB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A4FBC:
    ctx->pc = 0x7F3A4FBCu;
    // 7F3A4FBC: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A4FC0:
    ctx->pc = 0x7F3A4FC0u;
    // 7F3A4FC0: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A4FC4:
    ctx->pc = 0x7F3A4FC4u;
    // 7F3A4FC4: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F3A4FC8:
    ctx->pc = 0x7F3A4FC8u;
    // 7F3A4FC8: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F3A4FCC:
    ctx->pc = 0x7F3A4FCCu;
    // 7F3A4FCC: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F3A4FD0:
    ctx->pc = 0x7F3A4FD0u;
    // 7F3A4FD0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A4FD4:
    ctx->pc = 0x7F3A4FD4u;
    // 7F3A4FD4: rlwinm r30, r0, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3A4FD8:
    ctx->pc = 0x7F3A4FD8u;
    // 7F3A4FD8: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A4FDC:
    ctx->pc = 0x7F3A4FDCu;
    // 7F3A4FDC: lwz     r3, 5136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A4FE0:
    ctx->pc = 0x7F3A4FE0u;
    // 7F3A4FE0: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A4FE4u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A4FE4:
    ctx->pc = 0x7F3A4FE4u;
    ctx->downcount -= 15;
    // 7F3A4FE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A4FE8:
    ctx->pc = 0x7F3A4FE8u;
    // 7F3A4FE8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A4FEC:
    ctx->pc = 0x7F3A4FECu;
    // 7F3A4FEC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A4FF0:
    ctx->pc = 0x7F3A4FF0u;
    // 7F3A4FF0: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A4FF4:
    ctx->pc = 0x7F3A4FF4u;
    // 7F3A4FF4: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A4FF8:
    ctx->pc = 0x7F3A4FF8u;
    // 7F3A4FF8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A4FFC:
    ctx->pc = 0x7F3A4FFCu;
    // 7F3A4FFC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5000:
    ctx->pc = 0x7F3A5000u;
    // 7F3A5000: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A5004:
    ctx->pc = 0x7F3A5004u;
    // 7F3A5004: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A5008:
    ctx->pc = 0x7F3A5008u;
    // 7F3A5008: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A500C:
    ctx->pc = 0x7F3A500Cu;
    // 7F3A500C: lwz     r0, 5236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5010:
    ctx->pc = 0x7F3A5010u;
    // 7F3A5010: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A5014:
    ctx->pc = 0x7F3A5014u;
    // 7F3A5014: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A5018:
    ctx->pc = 0x7F3A5018u;
    // 7F3A5018: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A501C:
    ctx->pc = 0x7F3A501Cu;
    // 7F3A501C: bl      0x800501FC
    {
            ctx->lr = 0x7F3A5020u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A5020:
    ctx->pc = 0x7F3A5020u;
    ctx->downcount -= 2;
    // 7F3A5020: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5024:
    ctx->pc = 0x7F3A5024u;
    // 7F3A5024: b       0x7F3A503C
    {
            goto label_7F3A503C;
    }

label_7F3A5028:
    ctx->pc = 0x7F3A5028u;
    ctx->downcount -= 5;
    // 7F3A5028: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A502C:
    ctx->pc = 0x7F3A502Cu;
    // 7F3A502C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5030:
    ctx->pc = 0x7F3A5030u;
    // 7F3A5030: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5034:
    ctx->pc = 0x7F3A5034u;
    // 7F3A5034: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5038:
    ctx->pc = 0x7F3A5038u;
    // 7F3A5038: b       0x7F3A5094
    {
            goto label_7F3A5094;
    }

label_7F3A503C:
    ctx->pc = 0x7F3A503Cu;
    ctx->downcount -= 3;
    // 7F3A503C: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5040:
    ctx->pc = 0x7F3A5040u;
    // 7F3A5040: cmpwi   r0, 120
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

label_7F3A5044:
    ctx->pc = 0x7F3A5044u;
    // 7F3A5044: bc    4, 1, 0x7F3A5074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5074;
        }
    }

label_7F3A5048:
    ctx->pc = 0x7F3A5048u;
    ctx->downcount -= 4;
    // 7F3A5048: lwz     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A504C:
    ctx->pc = 0x7F3A504Cu;
    // 7F3A504C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5050:
    ctx->pc = 0x7F3A5050u;
    // 7F3A5050: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A5054:
    ctx->pc = 0x7F3A5054u;
    // 7F3A5054: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A5058u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A5058:
    ctx->pc = 0x7F3A5058u;
    ctx->downcount -= 2;
    // 7F3A5058: cmpwi   r3, 0
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

label_7F3A505C:
    ctx->pc = 0x7F3A505Cu;
    // 7F3A505C: bc    4, 2, 0x7F3A5074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5074;
        }
    }

label_7F3A5060:
    ctx->pc = 0x7F3A5060u;
    ctx->downcount -= 5;
    // 7F3A5060: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A5064:
    ctx->pc = 0x7F3A5064u;
    // 7F3A5064: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5068:
    ctx->pc = 0x7F3A5068u;
    // 7F3A5068: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A506C:
    ctx->pc = 0x7F3A506Cu;
    // 7F3A506C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5070:
    ctx->pc = 0x7F3A5070u;
    // 7F3A5070: b       0x7F3A5094
    {
            goto label_7F3A5094;
    }

label_7F3A5074:
    ctx->pc = 0x7F3A5074u;
    ctx->downcount -= 8;
    // 7F3A5074: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5078:
    ctx->pc = 0x7F3A5078u;
    // 7F3A5078: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F3A507C:
    ctx->pc = 0x7F3A507Cu;
    // 7F3A507C: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5080:
    ctx->pc = 0x7F3A5080u;
    // 7F3A5080: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5084:
    ctx->pc = 0x7F3A5084u;
    // 7F3A5084: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5088:
    ctx->pc = 0x7F3A5088u;
    // 7F3A5088: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A508C:
    ctx->pc = 0x7F3A508Cu;
    // 7F3A508C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5090:
    ctx->pc = 0x7F3A5090u;
    // 7F3A5090: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5094:
    ctx->pc = 0x7F3A5094u;
    ctx->downcount -= 16;
    // 7F3A5094: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A5098:
    ctx->pc = 0x7F3A5098u;
    // 7F3A5098: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A509C:
    ctx->pc = 0x7F3A509Cu;
    // 7F3A509C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A50A0:
    ctx->pc = 0x7F3A50A0u;
    // 7F3A50A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A50A4:
    ctx->pc = 0x7F3A50A4u;
    // 7F3A50A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A50A8:
    ctx->pc = 0x7F3A50A8u;
    ctx->downcount -= 9;
    // 7F3A50A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A50AC:
    ctx->pc = 0x7F3A50ACu;
    // 7F3A50AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A50B0:
    ctx->pc = 0x7F3A50B0u;
    // 7F3A50B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A50B4:
    ctx->pc = 0x7F3A50B4u;
    // 7F3A50B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A50B8:
    ctx->pc = 0x7F3A50B8u;
    // 7F3A50B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A50BC:
    ctx->pc = 0x7F3A50BCu;
    // 7F3A50BC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A50C0:
    ctx->pc = 0x7F3A50C0u;
    // 7F3A50C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A50C4:
    ctx->pc = 0x7F3A50C4u;
    // 7F3A50C4: lwz     r3, 4148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A50C8:
    ctx->pc = 0x7F3A50C8u;
    // 7F3A50C8: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A50CCu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A50CC:
    ctx->pc = 0x7F3A50CCu;
    ctx->downcount -= 2;
    // 7F3A50CC: cmpwi   r3, 0
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

label_7F3A50D0:
    ctx->pc = 0x7F3A50D0u;
    // 7F3A50D0: bc    12, 2, 0x7F3A50DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A50DC;
        }
    }

label_7F3A50D4:
    ctx->pc = 0x7F3A50D4u;
    ctx->downcount -= 2;
    // 7F3A50D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A50D8:
    ctx->pc = 0x7F3A50D8u;
    // 7F3A50D8: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A50DC:
    ctx->pc = 0x7F3A50DCu;
    ctx->downcount -= 3;
    // 7F3A50DC: lha     r0, 5288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A50E0:
    ctx->pc = 0x7F3A50E0u;
    // 7F3A50E0: cmpwi   r0, 1
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

label_7F3A50E4:
    ctx->pc = 0x7F3A50E4u;
    // 7F3A50E4: bc    4, 2, 0x7F3A5104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5104;
        }
    }

label_7F3A50E8:
    ctx->pc = 0x7F3A50E8u;
    ctx->downcount -= 7;
    // 7F3A50E8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A50EC:
    ctx->pc = 0x7F3A50ECu;
    // 7F3A50EC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A50F0:
    ctx->pc = 0x7F3A50F0u;
    // 7F3A50F0: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A50F4:
    ctx->pc = 0x7F3A50F4u;
    // 7F3A50F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A50F8:
    ctx->pc = 0x7F3A50F8u;
    // 7F3A50F8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A50FC:
    ctx->pc = 0x7F3A50FCu;
    // 7F3A50FC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5100:
    ctx->pc = 0x7F3A5100u;
    // 7F3A5100: b       0x7F3A545C
    {
            goto label_7F3A545C;
    }

label_7F3A5104:
    ctx->pc = 0x7F3A5104u;
    ctx->downcount -= 3;
    // 7F3A5104: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5108:
    ctx->pc = 0x7F3A5108u;
    // 7F3A5108: cmpwi   r0, 30
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

label_7F3A510C:
    ctx->pc = 0x7F3A510Cu;
    // 7F3A510C: bc    4, 1, 0x7F3A5304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5304;
        }
    }

label_7F3A5110:
    ctx->pc = 0x7F3A5110u;
    ctx->downcount -= 5;
    // 7F3A5110: li      r3, 1000
    ctx->gpr[3] = (u32)(s32)(1000);

label_7F3A5114:
    ctx->pc = 0x7F3A5114u;
    // 7F3A5114: li      r4, -9600
    ctx->gpr[4] = (u32)(s32)(-9600);

label_7F3A5118:
    ctx->pc = 0x7F3A5118u;
    // 7F3A5118: li      r5, 1500
    ctx->gpr[5] = (u32)(s32)(1500);

label_7F3A511C:
    ctx->pc = 0x7F3A511Cu;
    // 7F3A511C: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A5120:
    ctx->pc = 0x7F3A5120u;
    // 7F3A5120: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A5124u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A5124:
    ctx->pc = 0x7F3A5124u;
    ctx->downcount -= 2;
    // 7F3A5124: cmpwi   r3, 0
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

label_7F3A5128:
    ctx->pc = 0x7F3A5128u;
    // 7F3A5128: bc    12, 2, 0x7F3A51B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A51B8;
        }
    }

label_7F3A512C:
    ctx->pc = 0x7F3A512Cu;
    ctx->downcount -= 3;
    // 7F3A512C: lwz     r0, 5300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5130:
    ctx->pc = 0x7F3A5130u;
    // 7F3A5130: cmpwi   r0, 0
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

label_7F3A5134:
    ctx->pc = 0x7F3A5134u;
    // 7F3A5134: bc    4, 2, 0x7F3A5304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5304;
        }
    }

label_7F3A5138:
    ctx->pc = 0x7F3A5138u;
    ctx->downcount -= 4;
    // 7F3A5138: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A513C:
    ctx->pc = 0x7F3A513Cu;
    // 7F3A513C: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5140:
    ctx->pc = 0x7F3A5140u;
    // 7F3A5140: cmpwi   r0, 0
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

label_7F3A5144:
    ctx->pc = 0x7F3A5144u;
    // 7F3A5144: bc    4, 2, 0x7F3A51AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A51AC;
        }
    }

label_7F3A5148:
    ctx->pc = 0x7F3A5148u;
    ctx->downcount -= 6;
    // 7F3A5148: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A514C:
    ctx->pc = 0x7F3A514Cu;
    // 7F3A514C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A5150:
    ctx->pc = 0x7F3A5150u;
    // 7F3A5150: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5154:
    ctx->pc = 0x7F3A5154u;
    // 7F3A5154: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5158:
    ctx->pc = 0x7F3A5158u;
    // 7F3A5158: cmpwi   r0, 0
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

label_7F3A515C:
    ctx->pc = 0x7F3A515Cu;
    // 7F3A515C: bc    4, 1, 0x7F3A51AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A51AC;
        }
    }

label_7F3A5160:
    ctx->pc = 0x7F3A5160u;
    ctx->downcount -= 4;
    // 7F3A5160: lwz     r3, 5100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5164:
    ctx->pc = 0x7F3A5164u;
    // 7F3A5164: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5168:
    ctx->pc = 0x7F3A5168u;
    // 7F3A5168: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A516C:
    ctx->pc = 0x7F3A516Cu;
    // 7F3A516C: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A5170u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A5170:
    ctx->pc = 0x7F3A5170u;
    ctx->downcount -= 14;
    // 7F3A5170: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A5174:
    ctx->pc = 0x7F3A5174u;
    // 7F3A5174: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A5178:
    ctx->pc = 0x7F3A5178u;
    // 7F3A5178: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A517C:
    ctx->pc = 0x7F3A517Cu;
    // 7F3A517C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A5180:
    ctx->pc = 0x7F3A5180u;
    // 7F3A5180: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A5184:
    ctx->pc = 0x7F3A5184u;
    // 7F3A5184: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A5188:
    ctx->pc = 0x7F3A5188u;
    // 7F3A5188: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A518C:
    ctx->pc = 0x7F3A518Cu;
    // 7F3A518C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A5190:
    ctx->pc = 0x7F3A5190u;
    // 7F3A5190: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A5194:
    ctx->pc = 0x7F3A5194u;
    // 7F3A5194: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A5198:
    ctx->pc = 0x7F3A5198u;
    // 7F3A5198: lwz     r0, 5200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A519C:
    ctx->pc = 0x7F3A519Cu;
    // 7F3A519C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A51A0:
    ctx->pc = 0x7F3A51A0u;
    // 7F3A51A0: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A51A4:
    ctx->pc = 0x7F3A51A4u;
    // 7F3A51A4: bl      0x800501FC
    {
            ctx->lr = 0x7F3A51A8u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A51A8:
    ctx->pc = 0x7F3A51A8u;
    ctx->downcount -= 1;
    // 7F3A51A8: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A51AC:
    ctx->pc = 0x7F3A51ACu;
    ctx->downcount -= 3;
    // 7F3A51AC: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A51B0:
    ctx->pc = 0x7F3A51B0u;
    // 7F3A51B0: stw     r0, 5300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A51B4:
    ctx->pc = 0x7F3A51B4u;
    // 7F3A51B4: b       0x7F3A5304
    {
            goto label_7F3A5304;
    }

label_7F3A51B8:
    ctx->pc = 0x7F3A51B8u;
    ctx->downcount -= 5;
    // 7F3A51B8: li      r3, 5500
    ctx->gpr[3] = (u32)(s32)(5500);

label_7F3A51BC:
    ctx->pc = 0x7F3A51BCu;
    // 7F3A51BC: li      r4, -9000
    ctx->gpr[4] = (u32)(s32)(-9000);

label_7F3A51C0:
    ctx->pc = 0x7F3A51C0u;
    // 7F3A51C0: li      r5, 7000
    ctx->gpr[5] = (u32)(s32)(7000);

label_7F3A51C4:
    ctx->pc = 0x7F3A51C4u;
    // 7F3A51C4: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A51C8:
    ctx->pc = 0x7F3A51C8u;
    // 7F3A51C8: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A51CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A51CC:
    ctx->pc = 0x7F3A51CCu;
    ctx->downcount -= 2;
    // 7F3A51CC: cmpwi   r3, 0
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

label_7F3A51D0:
    ctx->pc = 0x7F3A51D0u;
    // 7F3A51D0: bc    12, 2, 0x7F3A5260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5260;
        }
    }

label_7F3A51D4:
    ctx->pc = 0x7F3A51D4u;
    ctx->downcount -= 3;
    // 7F3A51D4: lwz     r0, 5304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A51D8:
    ctx->pc = 0x7F3A51D8u;
    // 7F3A51D8: cmpwi   r0, 0
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

label_7F3A51DC:
    ctx->pc = 0x7F3A51DCu;
    // 7F3A51DC: bc    4, 2, 0x7F3A5304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5304;
        }
    }

label_7F3A51E0:
    ctx->pc = 0x7F3A51E0u;
    ctx->downcount -= 4;
    // 7F3A51E0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A51E4:
    ctx->pc = 0x7F3A51E4u;
    // 7F3A51E4: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A51E8:
    ctx->pc = 0x7F3A51E8u;
    // 7F3A51E8: cmpwi   r0, 0
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

label_7F3A51EC:
    ctx->pc = 0x7F3A51ECu;
    // 7F3A51EC: bc    4, 2, 0x7F3A5254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5254;
        }
    }

label_7F3A51F0:
    ctx->pc = 0x7F3A51F0u;
    ctx->downcount -= 6;
    // 7F3A51F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A51F4:
    ctx->pc = 0x7F3A51F4u;
    // 7F3A51F4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A51F8:
    ctx->pc = 0x7F3A51F8u;
    // 7F3A51F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A51FC:
    ctx->pc = 0x7F3A51FCu;
    // 7F3A51FC: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5200:
    ctx->pc = 0x7F3A5200u;
    // 7F3A5200: cmpwi   r0, 0
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

label_7F3A5204:
    ctx->pc = 0x7F3A5204u;
    // 7F3A5204: bc    4, 1, 0x7F3A5254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5254;
        }
    }

label_7F3A5208:
    ctx->pc = 0x7F3A5208u;
    ctx->downcount -= 4;
    // 7F3A5208: lwz     r3, 5104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A520C:
    ctx->pc = 0x7F3A520Cu;
    // 7F3A520C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5210:
    ctx->pc = 0x7F3A5210u;
    // 7F3A5210: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A5214:
    ctx->pc = 0x7F3A5214u;
    // 7F3A5214: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A5218u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A5218:
    ctx->pc = 0x7F3A5218u;
    ctx->downcount -= 14;
    // 7F3A5218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A521C:
    ctx->pc = 0x7F3A521Cu;
    // 7F3A521C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A5220:
    ctx->pc = 0x7F3A5220u;
    // 7F3A5220: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5224:
    ctx->pc = 0x7F3A5224u;
    // 7F3A5224: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A5228:
    ctx->pc = 0x7F3A5228u;
    // 7F3A5228: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A522C:
    ctx->pc = 0x7F3A522Cu;
    // 7F3A522C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A5230:
    ctx->pc = 0x7F3A5230u;
    // 7F3A5230: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5234:
    ctx->pc = 0x7F3A5234u;
    // 7F3A5234: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A5238:
    ctx->pc = 0x7F3A5238u;
    // 7F3A5238: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A523C:
    ctx->pc = 0x7F3A523Cu;
    // 7F3A523C: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A5240:
    ctx->pc = 0x7F3A5240u;
    // 7F3A5240: lwz     r0, 5204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5244:
    ctx->pc = 0x7F3A5244u;
    // 7F3A5244: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A5248:
    ctx->pc = 0x7F3A5248u;
    // 7F3A5248: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A524C:
    ctx->pc = 0x7F3A524Cu;
    // 7F3A524C: bl      0x800501FC
    {
            ctx->lr = 0x7F3A5250u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A5250:
    ctx->pc = 0x7F3A5250u;
    ctx->downcount -= 1;
    // 7F3A5250: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5254:
    ctx->pc = 0x7F3A5254u;
    ctx->downcount -= 3;
    // 7F3A5254: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A5258:
    ctx->pc = 0x7F3A5258u;
    // 7F3A5258: stw     r0, 5304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A525C:
    ctx->pc = 0x7F3A525Cu;
    // 7F3A525C: b       0x7F3A5304
    {
            goto label_7F3A5304;
    }

label_7F3A5260:
    ctx->pc = 0x7F3A5260u;
    ctx->downcount -= 5;
    // 7F3A5260: li      r3, -9000
    ctx->gpr[3] = (u32)(s32)(-9000);

label_7F3A5264:
    ctx->pc = 0x7F3A5264u;
    // 7F3A5264: li      r4, -9000
    ctx->gpr[4] = (u32)(s32)(-9000);

label_7F3A5268:
    ctx->pc = 0x7F3A5268u;
    // 7F3A5268: li      r5, -7500
    ctx->gpr[5] = (u32)(s32)(-7500);

label_7F3A526C:
    ctx->pc = 0x7F3A526Cu;
    // 7F3A526C: li      r6, -8500
    ctx->gpr[6] = (u32)(s32)(-8500);

label_7F3A5270:
    ctx->pc = 0x7F3A5270u;
    // 7F3A5270: bl      0x7F3A48B4
    {
            ctx->lr = 0x7F3A5274u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A48B4u;
                return;
            }
            goto label_7F3A48B4;
    }

label_7F3A5274:
    ctx->pc = 0x7F3A5274u;
    ctx->downcount -= 2;
    // 7F3A5274: cmpwi   r3, 0
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

label_7F3A5278:
    ctx->pc = 0x7F3A5278u;
    // 7F3A5278: bc    12, 2, 0x7F3A5304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5304;
        }
    }

label_7F3A527C:
    ctx->pc = 0x7F3A527Cu;
    ctx->downcount -= 3;
    // 7F3A527C: lwz     r0, 5308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5280:
    ctx->pc = 0x7F3A5280u;
    // 7F3A5280: cmpwi   r0, 0
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

label_7F3A5284:
    ctx->pc = 0x7F3A5284u;
    // 7F3A5284: bc    4, 2, 0x7F3A5304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5304;
        }
    }

label_7F3A5288:
    ctx->pc = 0x7F3A5288u;
    ctx->downcount -= 4;
    // 7F3A5288: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A528C:
    ctx->pc = 0x7F3A528Cu;
    // 7F3A528C: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5290:
    ctx->pc = 0x7F3A5290u;
    // 7F3A5290: cmpwi   r0, 0
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

label_7F3A5294:
    ctx->pc = 0x7F3A5294u;
    // 7F3A5294: bc    4, 2, 0x7F3A52FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A52FC;
        }
    }

label_7F3A5298:
    ctx->pc = 0x7F3A5298u;
    ctx->downcount -= 6;
    // 7F3A5298: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A529C:
    ctx->pc = 0x7F3A529Cu;
    // 7F3A529C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A52A0:
    ctx->pc = 0x7F3A52A0u;
    // 7F3A52A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A52A4:
    ctx->pc = 0x7F3A52A4u;
    // 7F3A52A4: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A52A8:
    ctx->pc = 0x7F3A52A8u;
    // 7F3A52A8: cmpwi   r0, 0
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

label_7F3A52AC:
    ctx->pc = 0x7F3A52ACu;
    // 7F3A52AC: bc    4, 1, 0x7F3A52FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A52FC;
        }
    }

label_7F3A52B0:
    ctx->pc = 0x7F3A52B0u;
    ctx->downcount -= 4;
    // 7F3A52B0: lwz     r3, 5104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A52B4:
    ctx->pc = 0x7F3A52B4u;
    // 7F3A52B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A52B8:
    ctx->pc = 0x7F3A52B8u;
    // 7F3A52B8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A52BC:
    ctx->pc = 0x7F3A52BCu;
    // 7F3A52BC: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A52C0u;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A52C0:
    ctx->pc = 0x7F3A52C0u;
    ctx->downcount -= 14;
    // 7F3A52C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A52C4:
    ctx->pc = 0x7F3A52C4u;
    // 7F3A52C4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A52C8:
    ctx->pc = 0x7F3A52C8u;
    // 7F3A52C8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A52CC:
    ctx->pc = 0x7F3A52CCu;
    // 7F3A52CC: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A52D0:
    ctx->pc = 0x7F3A52D0u;
    // 7F3A52D0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A52D4:
    ctx->pc = 0x7F3A52D4u;
    // 7F3A52D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A52D8:
    ctx->pc = 0x7F3A52D8u;
    // 7F3A52D8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A52DC:
    ctx->pc = 0x7F3A52DCu;
    // 7F3A52DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A52E0:
    ctx->pc = 0x7F3A52E0u;
    // 7F3A52E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A52E4:
    ctx->pc = 0x7F3A52E4u;
    // 7F3A52E4: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A52E8:
    ctx->pc = 0x7F3A52E8u;
    // 7F3A52E8: lwz     r0, 5204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A52EC:
    ctx->pc = 0x7F3A52ECu;
    // 7F3A52EC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A52F0:
    ctx->pc = 0x7F3A52F0u;
    // 7F3A52F0: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A52F4:
    ctx->pc = 0x7F3A52F4u;
    // 7F3A52F4: bl      0x800501FC
    {
            ctx->lr = 0x7F3A52F8u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A52F8:
    ctx->pc = 0x7F3A52F8u;
    ctx->downcount -= 1;
    // 7F3A52F8: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A52FC:
    ctx->pc = 0x7F3A52FCu;
    ctx->downcount -= 2;
    // 7F3A52FC: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F3A5300:
    ctx->pc = 0x7F3A5300u;
    // 7F3A5300: stw     r0, 5308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5304:
    ctx->pc = 0x7F3A5304u;
    ctx->downcount -= 3;
    // 7F3A5304: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5308:
    ctx->pc = 0x7F3A5308u;
    // 7F3A5308: cmpwi   r0, 120
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

label_7F3A530C:
    ctx->pc = 0x7F3A530Cu;
    // 7F3A530C: bc    4, 1, 0x7F3A5368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5368;
        }
    }

label_7F3A5310:
    ctx->pc = 0x7F3A5310u;
    ctx->downcount -= 3;
    // 7F3A5310: lha     r0, 5290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5290);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5314:
    ctx->pc = 0x7F3A5314u;
    // 7F3A5314: cmpwi   r0, 300
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

label_7F3A5318:
    ctx->pc = 0x7F3A5318u;
    // 7F3A5318: bc    4, 1, 0x7F3A533C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A533C;
        }
    }

label_7F3A531C:
    ctx->pc = 0x7F3A531Cu;
    ctx->downcount -= 8;
    // 7F3A531C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3A5320:
    ctx->pc = 0x7F3A5320u;
    // 7F3A5320: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5324:
    ctx->pc = 0x7F3A5324u;
    // 7F3A5324: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5328:
    ctx->pc = 0x7F3A5328u;
    // 7F3A5328: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A532C:
    ctx->pc = 0x7F3A532Cu;
    // 7F3A532C: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A5330:
    ctx->pc = 0x7F3A5330u;
    // 7F3A5330: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5334:
    ctx->pc = 0x7F3A5334u;
    // 7F3A5334: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5338:
    ctx->pc = 0x7F3A5338u;
    // 7F3A5338: b       0x7F3A545C
    {
            goto label_7F3A545C;
    }

label_7F3A533C:
    ctx->pc = 0x7F3A533Cu;
    ctx->downcount -= 3;
    // 7F3A533C: lha     r0, 5292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5340:
    ctx->pc = 0x7F3A5340u;
    // 7F3A5340: cmpwi   r0, 300
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

label_7F3A5344:
    ctx->pc = 0x7F3A5344u;
    // 7F3A5344: bc    4, 1, 0x7F3A5368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5368;
        }
    }

label_7F3A5348:
    ctx->pc = 0x7F3A5348u;
    ctx->downcount -= 8;
    // 7F3A5348: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A534C:
    ctx->pc = 0x7F3A534Cu;
    // 7F3A534C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5350:
    ctx->pc = 0x7F3A5350u;
    // 7F3A5350: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5354:
    ctx->pc = 0x7F3A5354u;
    // 7F3A5354: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5358:
    ctx->pc = 0x7F3A5358u;
    // 7F3A5358: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A535C:
    ctx->pc = 0x7F3A535Cu;
    // 7F3A535C: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5360:
    ctx->pc = 0x7F3A5360u;
    // 7F3A5360: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5364:
    ctx->pc = 0x7F3A5364u;
    // 7F3A5364: b       0x7F3A545C
    {
            goto label_7F3A545C;
    }

label_7F3A5368:
    ctx->pc = 0x7F3A5368u;
    ctx->downcount -= 3;
    // 7F3A5368: lwz     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A536C:
    ctx->pc = 0x7F3A536Cu;
    // 7F3A536C: cmpwi   r0, 7200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A5370:
    ctx->pc = 0x7F3A5370u;
    // 7F3A5370: bc    4, 1, 0x7F3A53F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A53F0;
        }
    }

label_7F3A5374:
    ctx->pc = 0x7F3A5374u;
    ctx->downcount -= 3;
    // 7F3A5374: lbz     r0, 4926(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4926);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A5378:
    ctx->pc = 0x7F3A5378u;
    // 7F3A5378: rlwinm. r0, r0, 0, 29, 29
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

label_7F3A537C:
    ctx->pc = 0x7F3A537Cu;
    // 7F3A537C: bc    4, 2, 0x7F3A53F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A53F0;
        }
    }

label_7F3A5380:
    ctx->pc = 0x7F3A5380u;
    ctx->downcount -= 4;
    // 7F3A5380: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A5384:
    ctx->pc = 0x7F3A5384u;
    // 7F3A5384: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5388:
    ctx->pc = 0x7F3A5388u;
    // 7F3A5388: rlwinm. r0, r0, 0, 26, 26
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

label_7F3A538C:
    ctx->pc = 0x7F3A538Cu;
    // 7F3A538C: bc    4, 2, 0x7F3A53F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A53F0;
        }
    }

label_7F3A5390:
    ctx->pc = 0x7F3A5390u;
    ctx->downcount -= 4;
    // 7F3A5390: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A5394:
    ctx->pc = 0x7F3A5394u;
    // 7F3A5394: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5398:
    ctx->pc = 0x7F3A5398u;
    // 7F3A5398: cmpwi   r0, 0
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

label_7F3A539C:
    ctx->pc = 0x7F3A539Cu;
    // 7F3A539C: bc    4, 2, 0x7F3A53F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A53F0;
        }
    }

label_7F3A53A0:
    ctx->pc = 0x7F3A53A0u;
    ctx->downcount -= 9;
    // 7F3A53A0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A53A4:
    ctx->pc = 0x7F3A53A4u;
    // 7F3A53A4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A53A8:
    ctx->pc = 0x7F3A53A8u;
    // 7F3A53A8: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A53AC:
    ctx->pc = 0x7F3A53ACu;
    // 7F3A53AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A53B0:
    ctx->pc = 0x7F3A53B0u;
    // 7F3A53B0: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F3A53B4:
    ctx->pc = 0x7F3A53B4u;
    // 7F3A53B4: sth     r4, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A53B8:
    ctx->pc = 0x7F3A53B8u;
    // 7F3A53B8: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A53BC:
    ctx->pc = 0x7F3A53BCu;
    // 7F3A53BC: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A53C0:
    ctx->pc = 0x7F3A53C0u;
    // 7F3A53C0: bl      0x7F0180A0
    {
            ctx->lr = 0x7F3A53C4u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F3A53C4:
    ctx->pc = 0x7F3A53C4u;
    ctx->downcount -= 2;
    // 7F3A53C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A53C8:
    ctx->pc = 0x7F3A53C8u;
    // 7F3A53C8: bl      0x7F02D178
    {
            ctx->lr = 0x7F3A53CCu;
            ctx->pc = 0x7F02D178u;
            return;
    }

label_7F3A53CC:
    ctx->pc = 0x7F3A53CCu;
    ctx->downcount -= 5;
    // 7F3A53CC: lwz     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A53D0:
    ctx->pc = 0x7F3A53D0u;
    // 7F3A53D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A53D4:
    ctx->pc = 0x7F3A53D4u;
    // 7F3A53D4: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F3A53D8:
    ctx->pc = 0x7F3A53D8u;
    // 7F3A53D8: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A53DC:
    ctx->pc = 0x7F3A53DCu;
    // 7F3A53DC: bl      0x7F3CBED0
    {
            ctx->lr = 0x7F3A53E0u;
            ctx->pc = 0x7F3CBED0u;
            return;
    }

label_7F3A53E0:
    ctx->pc = 0x7F3A53E0u;
    ctx->downcount -= 4;
    // 7F3A53E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A53E4:
    ctx->pc = 0x7F3A53E4u;
    // 7F3A53E4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A53E8:
    ctx->pc = 0x7F3A53E8u;
    // 7F3A53E8: stw     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A53EC:
    ctx->pc = 0x7F3A53ECu;
    // 7F3A53EC: b       0x7F3A545C
    {
            goto label_7F3A545C;
    }

label_7F3A53F0:
    ctx->pc = 0x7F3A53F0u;
    ctx->downcount -= 3;
    // 7F3A53F0: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A53F4:
    ctx->pc = 0x7F3A53F4u;
    // 7F3A53F4: cmpwi   r0, 3500
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A53F8:
    ctx->pc = 0x7F3A53F8u;
    // 7F3A53F8: bc    4, 1, 0x7F3A543C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A543C;
        }
    }

label_7F3A53FC:
    ctx->pc = 0x7F3A53FCu;
    ctx->downcount -= 11;
    // 7F3A53FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A5400:
    ctx->pc = 0x7F3A5400u;
    // 7F3A5400: lwzu     r0, -5736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5736);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F3A5404:
    ctx->pc = 0x7F3A5404u;
    // 7F3A5404: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5408:
    ctx->pc = 0x7F3A5408u;
    // 7F3A5408: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F3A540C:
    ctx->pc = 0x7F3A540Cu;
    // 7F3A540C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5410:
    ctx->pc = 0x7F3A5410u;
    // 7F3A5410: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A5414:
    ctx->pc = 0x7F3A5414u;
    // 7F3A5414: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5418:
    ctx->pc = 0x7F3A5418u;
    // 7F3A5418: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F3A541C:
    ctx->pc = 0x7F3A541Cu;
    // 7F3A541C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5420:
    ctx->pc = 0x7F3A5420u;
    // 7F3A5420: or.   r0, r3, r0
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

label_7F3A5424:
    ctx->pc = 0x7F3A5424u;
    // 7F3A5424: bc    4, 2, 0x7F3A543C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A543C;
        }
    }

label_7F3A5428:
    ctx->pc = 0x7F3A5428u;
    ctx->downcount -= 5;
    // 7F3A5428: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A542C:
    ctx->pc = 0x7F3A542Cu;
    // 7F3A542C: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5430:
    ctx->pc = 0x7F3A5430u;
    // 7F3A5430: sth     r5, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F3A5434:
    ctx->pc = 0x7F3A5434u;
    // 7F3A5434: stw     r4, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A5438:
    ctx->pc = 0x7F3A5438u;
    // 7F3A5438: b       0x7F3A545C
    {
            goto label_7F3A545C;
    }

label_7F3A543C:
    ctx->pc = 0x7F3A543Cu;
    ctx->downcount -= 8;
    // 7F3A543C: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5440:
    ctx->pc = 0x7F3A5440u;
    // 7F3A5440: oris    r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | (0x0400u << 16);

label_7F3A5444:
    ctx->pc = 0x7F3A5444u;
    // 7F3A5444: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5448:
    ctx->pc = 0x7F3A5448u;
    // 7F3A5448: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A544C:
    ctx->pc = 0x7F3A544Cu;
    // 7F3A544C: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5450:
    ctx->pc = 0x7F3A5450u;
    // 7F3A5450: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5454:
    ctx->pc = 0x7F3A5454u;
    // 7F3A5454: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5458:
    ctx->pc = 0x7F3A5458u;
    // 7F3A5458: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A545C:
    ctx->pc = 0x7F3A545Cu;
    ctx->downcount -= 6;
    // 7F3A545C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5460:
    ctx->pc = 0x7F3A5460u;
    // 7F3A5460: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5464:
    ctx->pc = 0x7F3A5464u;
    // 7F3A5464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5468:
    ctx->pc = 0x7F3A5468u;
    // 7F3A5468: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A546C:
    ctx->pc = 0x7F3A546Cu;
    // 7F3A546C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5470:
    ctx->pc = 0x7F3A5470u;
    ctx->downcount -= 8;
    // 7F3A5470: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5474:
    ctx->pc = 0x7F3A5474u;
    // 7F3A5474: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5478:
    ctx->pc = 0x7F3A5478u;
    // 7F3A5478: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A547C:
    ctx->pc = 0x7F3A547Cu;
    // 7F3A547C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5480:
    ctx->pc = 0x7F3A5480u;
    // 7F3A5480: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A5484:
    ctx->pc = 0x7F3A5484u;
    // 7F3A5484: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5488:
    ctx->pc = 0x7F3A5488u;
    // 7F3A5488: cmpwi   r0, 1
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

label_7F3A548C:
    ctx->pc = 0x7F3A548Cu;
    // 7F3A548C: bc    4, 2, 0x7F3A54AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A54AC;
        }
    }

label_7F3A5490:
    ctx->pc = 0x7F3A5490u;
    ctx->downcount -= 7;
    // 7F3A5490: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A5494:
    ctx->pc = 0x7F3A5494u;
    // 7F3A5494: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A5498:
    ctx->pc = 0x7F3A5498u;
    // 7F3A5498: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A549C:
    ctx->pc = 0x7F3A549Cu;
    // 7F3A549C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A54A0:
    ctx->pc = 0x7F3A54A0u;
    // 7F3A54A0: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A54A4:
    ctx->pc = 0x7F3A54A4u;
    // 7F3A54A4: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A54A8:
    ctx->pc = 0x7F3A54A8u;
    // 7F3A54A8: b       0x7F3A5598
    {
            goto label_7F3A5598;
    }

label_7F3A54AC:
    ctx->pc = 0x7F3A54ACu;
    ctx->downcount -= 3;
    // 7F3A54AC: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A54B0:
    ctx->pc = 0x7F3A54B0u;
    // 7F3A54B0: cmpwi   r0, 0
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

label_7F3A54B4:
    ctx->pc = 0x7F3A54B4u;
    // 7F3A54B4: bc    4, 2, 0x7F3A54BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A54BC;
        }
    }

label_7F3A54B8:
    ctx->pc = 0x7F3A54B8u;
    ctx->downcount -= 1;
    // 7F3A54B8: bl      0x7F3A3FE0
    {
            ctx->lr = 0x7F3A54BCu;
            ctx->pc = 0x7F3A3FE0u;
            return;
    }

label_7F3A54BC:
    ctx->pc = 0x7F3A54BCu;
    ctx->downcount -= 7;
    // 7F3A54BC: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A54C0:
    ctx->pc = 0x7F3A54C0u;
    // 7F3A54C0: rlwinm r0, r3, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 26u) & 0xFC000000u;
    }

label_7F3A54C4:
    ctx->pc = 0x7F3A54C4u;
    // 7F3A54C4: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F3A54C8:
    ctx->pc = 0x7F3A54C8u;
    // 7F3A54C8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A54CC:
    ctx->pc = 0x7F3A54CCu;
    // 7F3A54CC: rlwinm r0, r0, 6, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFFFu;
    }

label_7F3A54D0:
    ctx->pc = 0x7F3A54D0u;
    // 7F3A54D0: add.   r0, r0, r3
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

label_7F3A54D4:
    ctx->pc = 0x7F3A54D4u;
    // 7F3A54D4: bc    4, 2, 0x7F3A5514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5514;
        }
    }

label_7F3A54D8:
    ctx->pc = 0x7F3A54D8u;
    ctx->downcount -= 4;
    // 7F3A54D8: addi    r4, r31, 4948
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4948);

label_7F3A54DC:
    ctx->pc = 0x7F3A54DCu;
    // 7F3A54DC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A54E0:
    ctx->pc = 0x7F3A54E0u;
    // 7F3A54E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A54E4:
    ctx->pc = 0x7F3A54E4u;
    // 7F3A54E4: bl      0x7F103FC0
    {
            ctx->lr = 0x7F3A54E8u;
            ctx->pc = 0x7F103FC0u;
            return;
    }

label_7F3A54E8:
    ctx->pc = 0x7F3A54E8u;
    ctx->downcount -= 3;
    // 7F3A54E8: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A54EC:
    ctx->pc = 0x7F3A54ECu;
    // 7F3A54EC: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A54F0:
    ctx->pc = 0x7F3A54F0u;
    // 7F3A54F0: bl      0x7F10377C
    {
            ctx->lr = 0x7F3A54F4u;
            ctx->pc = 0x7F10377Cu;
            return;
    }

label_7F3A54F4:
    ctx->pc = 0x7F3A54F4u;
    ctx->downcount -= 2;
    // 7F3A54F4: cmpwi   r3, 0
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

label_7F3A54F8:
    ctx->pc = 0x7F3A54F8u;
    // 7F3A54F8: bc    4, 2, 0x7F3A5514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5514;
        }
    }

label_7F3A54FC:
    ctx->pc = 0x7F3A54FCu;
    ctx->downcount -= 6;
    // 7F3A54FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A5500:
    ctx->pc = 0x7F3A5500u;
    // 7F3A5500: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A5504:
    ctx->pc = 0x7F3A5504u;
    // 7F3A5504: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5508:
    ctx->pc = 0x7F3A5508u;
    // 7F3A5508: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A550C:
    ctx->pc = 0x7F3A550Cu;
    // 7F3A550C: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5510:
    ctx->pc = 0x7F3A5510u;
    // 7F3A5510: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5514:
    ctx->pc = 0x7F3A5514u;
    ctx->downcount -= 3;
    // 7F3A5514: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5518:
    ctx->pc = 0x7F3A5518u;
    // 7F3A5518: cmpwi   r0, 120
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

label_7F3A551C:
    ctx->pc = 0x7F3A551Cu;
    // 7F3A551C: bc    4, 1, 0x7F3A5578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5578;
        }
    }

label_7F3A5520:
    ctx->pc = 0x7F3A5520u;
    ctx->downcount -= 3;
    // 7F3A5520: lha     r0, 5290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5290);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5524:
    ctx->pc = 0x7F3A5524u;
    // 7F3A5524: cmpwi   r0, 300
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

label_7F3A5528:
    ctx->pc = 0x7F3A5528u;
    // 7F3A5528: bc    4, 1, 0x7F3A554C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A554C;
        }
    }

label_7F3A552C:
    ctx->pc = 0x7F3A552Cu;
    ctx->downcount -= 8;
    // 7F3A552C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3A5530:
    ctx->pc = 0x7F3A5530u;
    // 7F3A5530: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5534:
    ctx->pc = 0x7F3A5534u;
    // 7F3A5534: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5538:
    ctx->pc = 0x7F3A5538u;
    // 7F3A5538: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A553C:
    ctx->pc = 0x7F3A553Cu;
    // 7F3A553C: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A5540:
    ctx->pc = 0x7F3A5540u;
    // 7F3A5540: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5544:
    ctx->pc = 0x7F3A5544u;
    // 7F3A5544: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5548:
    ctx->pc = 0x7F3A5548u;
    // 7F3A5548: b       0x7F3A5598
    {
            goto label_7F3A5598;
    }

label_7F3A554C:
    ctx->pc = 0x7F3A554Cu;
    ctx->downcount -= 3;
    // 7F3A554C: lha     r0, 5292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5550:
    ctx->pc = 0x7F3A5550u;
    // 7F3A5550: cmpwi   r0, 300
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

label_7F3A5554:
    ctx->pc = 0x7F3A5554u;
    // 7F3A5554: bc    4, 1, 0x7F3A5578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5578;
        }
    }

label_7F3A5558:
    ctx->pc = 0x7F3A5558u;
    ctx->downcount -= 8;
    // 7F3A5558: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A555C:
    ctx->pc = 0x7F3A555Cu;
    // 7F3A555C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5560:
    ctx->pc = 0x7F3A5560u;
    // 7F3A5560: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5564:
    ctx->pc = 0x7F3A5564u;
    // 7F3A5564: lwz     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5568:
    ctx->pc = 0x7F3A5568u;
    // 7F3A5568: oris    r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | (0x0001u << 16);

label_7F3A556C:
    ctx->pc = 0x7F3A556Cu;
    // 7F3A556C: stw     r3, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5570:
    ctx->pc = 0x7F3A5570u;
    // 7F3A5570: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5574:
    ctx->pc = 0x7F3A5574u;
    // 7F3A5574: b       0x7F3A5598
    {
            goto label_7F3A5598;
    }

label_7F3A5578:
    ctx->pc = 0x7F3A5578u;
    ctx->downcount -= 8;
    // 7F3A5578: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A557C:
    ctx->pc = 0x7F3A557Cu;
    // 7F3A557C: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F3A5580:
    ctx->pc = 0x7F3A5580u;
    // 7F3A5580: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5584:
    ctx->pc = 0x7F3A5584u;
    // 7F3A5584: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5588:
    ctx->pc = 0x7F3A5588u;
    // 7F3A5588: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A558C:
    ctx->pc = 0x7F3A558Cu;
    // 7F3A558C: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5590:
    ctx->pc = 0x7F3A5590u;
    // 7F3A5590: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5594:
    ctx->pc = 0x7F3A5594u;
    // 7F3A5594: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5598:
    ctx->pc = 0x7F3A5598u;
    ctx->downcount -= 6;
    // 7F3A5598: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A559C:
    ctx->pc = 0x7F3A559Cu;
    // 7F3A559C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A55A0:
    ctx->pc = 0x7F3A55A0u;
    // 7F3A55A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A55A4:
    ctx->pc = 0x7F3A55A4u;
    // 7F3A55A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A55A8:
    ctx->pc = 0x7F3A55A8u;
    // 7F3A55A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A55AC:
    ctx->pc = 0x7F3A55ACu;
    ctx->downcount -= 8;
    // 7F3A55AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A55B0:
    ctx->pc = 0x7F3A55B0u;
    // 7F3A55B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A55B4:
    ctx->pc = 0x7F3A55B4u;
    // 7F3A55B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A55B8:
    ctx->pc = 0x7F3A55B8u;
    // 7F3A55B8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A55BC:
    ctx->pc = 0x7F3A55BCu;
    // 7F3A55BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A55C0:
    ctx->pc = 0x7F3A55C0u;
    // 7F3A55C0: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A55C4:
    ctx->pc = 0x7F3A55C4u;
    // 7F3A55C4: cmpwi   r0, 1
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

label_7F3A55C8:
    ctx->pc = 0x7F3A55C8u;
    // 7F3A55C8: bc    4, 2, 0x7F3A55E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A55E8;
        }
    }

label_7F3A55CC:
    ctx->pc = 0x7F3A55CCu;
    ctx->downcount -= 7;
    // 7F3A55CC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A55D0:
    ctx->pc = 0x7F3A55D0u;
    // 7F3A55D0: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A55D4:
    ctx->pc = 0x7F3A55D4u;
    // 7F3A55D4: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A55D8:
    ctx->pc = 0x7F3A55D8u;
    // 7F3A55D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A55DC:
    ctx->pc = 0x7F3A55DCu;
    // 7F3A55DC: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A55E0:
    ctx->pc = 0x7F3A55E0u;
    // 7F3A55E0: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A55E4:
    ctx->pc = 0x7F3A55E4u;
    // 7F3A55E4: b       0x7F3A56E4
    {
            goto label_7F3A56E4;
    }

label_7F3A55E8:
    ctx->pc = 0x7F3A55E8u;
    ctx->downcount -= 3;
    // 7F3A55E8: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A55EC:
    ctx->pc = 0x7F3A55ECu;
    // 7F3A55EC: cmpwi   r0, 4000
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

label_7F3A55F0:
    ctx->pc = 0x7F3A55F0u;
    // 7F3A55F0: bc    4, 1, 0x7F3A5600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5600;
        }
    }

label_7F3A55F4:
    ctx->pc = 0x7F3A55F4u;
    ctx->downcount -= 3;
    // 7F3A55F4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A55F8:
    ctx->pc = 0x7F3A55F8u;
    // 7F3A55F8: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A55FC:
    ctx->pc = 0x7F3A55FCu;
    // 7F3A55FC: b       0x7F3A5610
    {
            goto label_7F3A5610;
    }

label_7F3A5600:
    ctx->pc = 0x7F3A5600u;
    ctx->downcount -= 2;
    // 7F3A5600: cmpwi   r0, 3000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A5604:
    ctx->pc = 0x7F3A5604u;
    // 7F3A5604: bc    4, 0, 0x7F3A5610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5610;
        }
    }

label_7F3A5608:
    ctx->pc = 0x7F3A5608u;
    ctx->downcount -= 2;
    // 7F3A5608: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A560C:
    ctx->pc = 0x7F3A560Cu;
    // 7F3A560C: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5610:
    ctx->pc = 0x7F3A5610u;
    ctx->downcount -= 2;
    // 7F3A5610: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5614:
    ctx->pc = 0x7F3A5614u;
    // 7F3A5614: bl      0x7F3A3E98
    {
            ctx->lr = 0x7F3A5618u;
            ctx->pc = 0x7F3A3E98u;
            return;
    }

label_7F3A5618:
    ctx->pc = 0x7F3A5618u;
    ctx->downcount -= 2;
    // 7F3A5618: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A561C:
    ctx->pc = 0x7F3A561Cu;
    // 7F3A561C: bl      0x7F3A4178
    {
            ctx->lr = 0x7F3A5620u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4178u;
                return;
            }
            goto label_7F3A4178;
    }

label_7F3A5620:
    ctx->pc = 0x7F3A5620u;
    ctx->downcount -= 2;
    // 7F3A5620: cmpwi   r3, 0
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

label_7F3A5624:
    ctx->pc = 0x7F3A5624u;
    // 7F3A5624: bc    12, 2, 0x7F3A5644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5644;
        }
    }

label_7F3A5628:
    ctx->pc = 0x7F3A5628u;
    ctx->downcount -= 7;
    // 7F3A5628: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A562C:
    ctx->pc = 0x7F3A562Cu;
    // 7F3A562C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A5630:
    ctx->pc = 0x7F3A5630u;
    // 7F3A5630: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5634:
    ctx->pc = 0x7F3A5634u;
    // 7F3A5634: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5638:
    ctx->pc = 0x7F3A5638u;
    // 7F3A5638: stw     r3, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A563C:
    ctx->pc = 0x7F3A563Cu;
    // 7F3A563C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5640:
    ctx->pc = 0x7F3A5640u;
    // 7F3A5640: b       0x7F3A56E4
    {
            goto label_7F3A56E4;
    }

label_7F3A5644:
    ctx->pc = 0x7F3A5644u;
    ctx->downcount -= 3;
    // 7F3A5644: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5648:
    ctx->pc = 0x7F3A5648u;
    // 7F3A5648: cmpwi   r0, 2500
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A564C:
    ctx->pc = 0x7F3A564Cu;
    // 7F3A564C: bc    4, 0, 0x7F3A56D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A56D8;
        }
    }

label_7F3A5650:
    ctx->pc = 0x7F3A5650u;
    ctx->downcount -= 3;
    // 7F3A5650: lha     r0, 4914(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4914);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5654:
    ctx->pc = 0x7F3A5654u;
    // 7F3A5654: cmpwi   r0, 2
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

label_7F3A5658:
    ctx->pc = 0x7F3A5658u;
    // 7F3A5658: bc    12, 2, 0x7F3A56B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A56B4;
        }
    }

label_7F3A565C:
    ctx->pc = 0x7F3A565Cu;
    ctx->downcount -= 12;
    // 7F3A565C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A5660:
    ctx->pc = 0x7F3A5660u;
    // 7F3A5660: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_7F3A5664:
    ctx->pc = 0x7F3A5664u;
    // 7F3A5664: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F3A5668:
    ctx->pc = 0x7F3A5668u;
    // 7F3A5668: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A566C:
    ctx->pc = 0x7F3A566Cu;
    // 7F3A566C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5670:
    ctx->pc = 0x7F3A5670u;
    // 7F3A5670: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A5674:
    ctx->pc = 0x7F3A5674u;
    // 7F3A5674: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A5678:
    ctx->pc = 0x7F3A5678u;
    // 7F3A5678: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F3A567C:
    ctx->pc = 0x7F3A567Cu;
    // 7F3A567C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5680:
    ctx->pc = 0x7F3A5680u;
    // 7F3A5680: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5684:
    ctx->pc = 0x7F3A5684u;
    // 7F3A5684: or.   r0, r3, r0
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

label_7F3A5688:
    ctx->pc = 0x7F3A5688u;
    // 7F3A5688: bc    4, 2, 0x7F3A56B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A56B4;
        }
    }

label_7F3A568C:
    ctx->pc = 0x7F3A568Cu;
    ctx->downcount -= 5;
    // 7F3A568C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5690:
    ctx->pc = 0x7F3A5690u;
    // 7F3A5690: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A5694:
    ctx->pc = 0x7F3A5694u;
    // 7F3A5694: lis     r6, 2048
    ctx->gpr[6] = ((u32)(s32)(2048) << 16);

label_7F3A5698:
    ctx->pc = 0x7F3A5698u;
    // 7F3A5698: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F3A569C:
    ctx->pc = 0x7F3A569Cu;
    // 7F3A569C: bl      0x7F012018
    {
            ctx->lr = 0x7F3A56A0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F3A56A0:
    ctx->pc = 0x7F3A56A0u;
    ctx->downcount -= 5;
    // 7F3A56A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A56A4:
    ctx->pc = 0x7F3A56A4u;
    // 7F3A56A4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3A56A8:
    ctx->pc = 0x7F3A56A8u;
    // 7F3A56A8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F3A56AC:
    ctx->pc = 0x7F3A56ACu;
    // 7F3A56AC: or.   r0, r4, r0
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

label_7F3A56B0:
    ctx->pc = 0x7F3A56B0u;
    // 7F3A56B0: bc    12, 2, 0x7F3A56D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A56D8;
        }
    }

label_7F3A56B4:
    ctx->pc = 0x7F3A56B4u;
    ctx->downcount -= 9;
    // 7F3A56B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A56B8:
    ctx->pc = 0x7F3A56B8u;
    // 7F3A56B8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3A56BC:
    ctx->pc = 0x7F3A56BCu;
    // 7F3A56BC: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A56C0:
    ctx->pc = 0x7F3A56C0u;
    // 7F3A56C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A56C4:
    ctx->pc = 0x7F3A56C4u;
    // 7F3A56C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A56C8:
    ctx->pc = 0x7F3A56C8u;
    // 7F3A56C8: sth     r4, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A56CC:
    ctx->pc = 0x7F3A56CCu;
    // 7F3A56CC: stw     r3, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A56D0:
    ctx->pc = 0x7F3A56D0u;
    // 7F3A56D0: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A56D4:
    ctx->pc = 0x7F3A56D4u;
    // 7F3A56D4: b       0x7F3A56E4
    {
            goto label_7F3A56E4;
    }

label_7F3A56D8:
    ctx->pc = 0x7F3A56D8u;
    ctx->downcount -= 3;
    // 7F3A56D8: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A56DC:
    ctx->pc = 0x7F3A56DCu;
    // 7F3A56DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A56E0:
    ctx->pc = 0x7F3A56E0u;
    // 7F3A56E0: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A56E4:
    ctx->pc = 0x7F3A56E4u;
    ctx->downcount -= 6;
    // 7F3A56E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A56E8:
    ctx->pc = 0x7F3A56E8u;
    // 7F3A56E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A56EC:
    ctx->pc = 0x7F3A56ECu;
    // 7F3A56EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A56F0:
    ctx->pc = 0x7F3A56F0u;
    // 7F3A56F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A56F4:
    ctx->pc = 0x7F3A56F4u;
    // 7F3A56F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A56F8:
    ctx->pc = 0x7F3A56F8u;
    ctx->downcount -= 8;
    // 7F3A56F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A56FC:
    ctx->pc = 0x7F3A56FCu;
    // 7F3A56FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5700:
    ctx->pc = 0x7F3A5700u;
    // 7F3A5700: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5704:
    ctx->pc = 0x7F3A5704u;
    // 7F3A5704: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5708:
    ctx->pc = 0x7F3A5708u;
    // 7F3A5708: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A570C:
    ctx->pc = 0x7F3A570Cu;
    // 7F3A570C: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5710:
    ctx->pc = 0x7F3A5710u;
    // 7F3A5710: cmpwi   r0, 1
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

label_7F3A5714:
    ctx->pc = 0x7F3A5714u;
    // 7F3A5714: bc    4, 2, 0x7F3A5734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5734;
        }
    }

label_7F3A5718:
    ctx->pc = 0x7F3A5718u;
    ctx->downcount -= 7;
    // 7F3A5718: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A571C:
    ctx->pc = 0x7F3A571Cu;
    // 7F3A571C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A5720:
    ctx->pc = 0x7F3A5720u;
    // 7F3A5720: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5724:
    ctx->pc = 0x7F3A5724u;
    // 7F3A5724: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5728:
    ctx->pc = 0x7F3A5728u;
    // 7F3A5728: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A572C:
    ctx->pc = 0x7F3A572Cu;
    // 7F3A572C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5730:
    ctx->pc = 0x7F3A5730u;
    // 7F3A5730: b       0x7F3A5794
    {
            goto label_7F3A5794;
    }

label_7F3A5734:
    ctx->pc = 0x7F3A5734u;
    ctx->downcount -= 1;
    // 7F3A5734: bl      0x7F3A4178
    {
            ctx->lr = 0x7F3A5738u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4178u;
                return;
            }
            goto label_7F3A4178;
    }

label_7F3A5738:
    ctx->pc = 0x7F3A5738u;
    ctx->downcount -= 2;
    // 7F3A5738: cmpwi   r3, 0
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

label_7F3A573C:
    ctx->pc = 0x7F3A573Cu;
    // 7F3A573C: bc    12, 2, 0x7F3A5754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5754;
        }
    }

label_7F3A5740:
    ctx->pc = 0x7F3A5740u;
    ctx->downcount -= 5;
    // 7F3A5740: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A5744:
    ctx->pc = 0x7F3A5744u;
    // 7F3A5744: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5748:
    ctx->pc = 0x7F3A5748u;
    // 7F3A5748: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A574C:
    ctx->pc = 0x7F3A574Cu;
    // 7F3A574C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5750:
    ctx->pc = 0x7F3A5750u;
    // 7F3A5750: b       0x7F3A5794
    {
            goto label_7F3A5794;
    }

label_7F3A5754:
    ctx->pc = 0x7F3A5754u;
    ctx->downcount -= 3;
    // 7F3A5754: lwz     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5758:
    ctx->pc = 0x7F3A5758u;
    // 7F3A5758: cmpwi   r0, 7200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A575C:
    ctx->pc = 0x7F3A575Cu;
    // 7F3A575C: bc    4, 1, 0x7F3A5788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5788;
        }
    }

label_7F3A5760:
    ctx->pc = 0x7F3A5760u;
    ctx->downcount -= 10;
    // 7F3A5760: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A5764:
    ctx->pc = 0x7F3A5764u;
    // 7F3A5764: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A5768:
    ctx->pc = 0x7F3A5768u;
    // 7F3A5768: stw     r4, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A576C:
    ctx->pc = 0x7F3A576Cu;
    // 7F3A576C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5770:
    ctx->pc = 0x7F3A5770u;
    // 7F3A5770: sth     r4, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5774:
    ctx->pc = 0x7F3A5774u;
    // 7F3A5774: sth     r4, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5778:
    ctx->pc = 0x7F3A5778u;
    // 7F3A5778: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A577C:
    ctx->pc = 0x7F3A577Cu;
    // 7F3A577C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5780:
    ctx->pc = 0x7F3A5780u;
    // 7F3A5780: stw     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5784:
    ctx->pc = 0x7F3A5784u;
    // 7F3A5784: b       0x7F3A5794
    {
            goto label_7F3A5794;
    }

label_7F3A5788:
    ctx->pc = 0x7F3A5788u;
    ctx->downcount -= 3;
    // 7F3A5788: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A578C:
    ctx->pc = 0x7F3A578Cu;
    // 7F3A578C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5790:
    ctx->pc = 0x7F3A5790u;
    // 7F3A5790: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5794:
    ctx->pc = 0x7F3A5794u;
    ctx->downcount -= 6;
    // 7F3A5794: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5798:
    ctx->pc = 0x7F3A5798u;
    // 7F3A5798: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A579C:
    ctx->pc = 0x7F3A579Cu;
    // 7F3A579C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A57A0:
    ctx->pc = 0x7F3A57A0u;
    // 7F3A57A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A57A4:
    ctx->pc = 0x7F3A57A4u;
    // 7F3A57A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A57A8:
    ctx->pc = 0x7F3A57A8u;
    ctx->downcount -= 6;
    // 7F3A57A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A57AC:
    ctx->pc = 0x7F3A57ACu;
    // 7F3A57AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A57B0:
    ctx->pc = 0x7F3A57B0u;
    // 7F3A57B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A57B4:
    ctx->pc = 0x7F3A57B4u;
    // 7F3A57B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A57B8:
    ctx->pc = 0x7F3A57B8u;
    // 7F3A57B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A57BC:
    ctx->pc = 0x7F3A57BCu;
    // 7F3A57BC: bl      0x7F3A3E98
    {
            ctx->lr = 0x7F3A57C0u;
            ctx->pc = 0x7F3A3E98u;
            return;
    }

label_7F3A57C0:
    ctx->pc = 0x7F3A57C0u;
    ctx->downcount -= 2;
    // 7F3A57C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A57C4:
    ctx->pc = 0x7F3A57C4u;
    // 7F3A57C4: bl      0x7F3A4178
    {
            ctx->lr = 0x7F3A57C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4178u;
                return;
            }
            goto label_7F3A4178;
    }

label_7F3A57C8:
    ctx->pc = 0x7F3A57C8u;
    ctx->downcount -= 2;
    // 7F3A57C8: cmpwi   r3, 0
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

label_7F3A57CC:
    ctx->pc = 0x7F3A57CCu;
    // 7F3A57CC: bc    12, 2, 0x7F3A57E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A57E4;
        }
    }

label_7F3A57D0:
    ctx->pc = 0x7F3A57D0u;
    ctx->downcount -= 5;
    // 7F3A57D0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A57D4:
    ctx->pc = 0x7F3A57D4u;
    // 7F3A57D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A57D8:
    ctx->pc = 0x7F3A57D8u;
    // 7F3A57D8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A57DC:
    ctx->pc = 0x7F3A57DCu;
    // 7F3A57DC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A57E0:
    ctx->pc = 0x7F3A57E0u;
    // 7F3A57E0: b       0x7F3A59AC
    {
            goto label_7F3A59AC;
    }

label_7F3A57E4:
    ctx->pc = 0x7F3A57E4u;
    ctx->downcount -= 3;
    // 7F3A57E4: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A57E8:
    ctx->pc = 0x7F3A57E8u;
    // 7F3A57E8: cmpwi   r0, 2500
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A57EC:
    ctx->pc = 0x7F3A57ECu;
    // 7F3A57EC: bc    4, 0, 0x7F3A59A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A59A0;
        }
    }

label_7F3A57F0:
    ctx->pc = 0x7F3A57F0u;
    ctx->downcount -= 3;
    // 7F3A57F0: lha     r0, 4914(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4914);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A57F4:
    ctx->pc = 0x7F3A57F4u;
    // 7F3A57F4: cmpwi   r0, 2
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

label_7F3A57F8:
    ctx->pc = 0x7F3A57F8u;
    // 7F3A57F8: bc    4, 2, 0x7F3A58E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A58E8;
        }
    }

label_7F3A57FC:
    ctx->pc = 0x7F3A57FCu;
    ctx->downcount -= 12;
    // 7F3A57FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A5800:
    ctx->pc = 0x7F3A5800u;
    // 7F3A5800: li      r3, 8322
    ctx->gpr[3] = (u32)(s32)(8322);

label_7F3A5804:
    ctx->pc = 0x7F3A5804u;
    // 7F3A5804: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F3A5808:
    ctx->pc = 0x7F3A5808u;
    // 7F3A5808: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A580C:
    ctx->pc = 0x7F3A580Cu;
    // 7F3A580C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5810:
    ctx->pc = 0x7F3A5810u;
    // 7F3A5810: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A5814:
    ctx->pc = 0x7F3A5814u;
    // 7F3A5814: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A5818:
    ctx->pc = 0x7F3A5818u;
    // 7F3A5818: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F3A581C:
    ctx->pc = 0x7F3A581Cu;
    // 7F3A581C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5820:
    ctx->pc = 0x7F3A5820u;
    // 7F3A5820: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5824:
    ctx->pc = 0x7F3A5824u;
    // 7F3A5824: or.   r0, r3, r0
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

label_7F3A5828:
    ctx->pc = 0x7F3A5828u;
    // 7F3A5828: bc    4, 2, 0x7F3A58E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A58E8;
        }
    }

label_7F3A582C:
    ctx->pc = 0x7F3A582Cu;
    ctx->downcount -= 5;
    // 7F3A582C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5830:
    ctx->pc = 0x7F3A5830u;
    // 7F3A5830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A5834:
    ctx->pc = 0x7F3A5834u;
    // 7F3A5834: lis     r6, 2048
    ctx->gpr[6] = ((u32)(s32)(2048) << 16);

label_7F3A5838:
    ctx->pc = 0x7F3A5838u;
    // 7F3A5838: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F3A583C:
    ctx->pc = 0x7F3A583Cu;
    // 7F3A583C: bl      0x7F012018
    {
            ctx->lr = 0x7F3A5840u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F3A5840:
    ctx->pc = 0x7F3A5840u;
    ctx->downcount -= 5;
    // 7F3A5840: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5844:
    ctx->pc = 0x7F3A5844u;
    // 7F3A5844: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3A5848:
    ctx->pc = 0x7F3A5848u;
    // 7F3A5848: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F3A584C:
    ctx->pc = 0x7F3A584Cu;
    // 7F3A584C: or.   r0, r4, r0
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

label_7F3A5850:
    ctx->pc = 0x7F3A5850u;
    // 7F3A5850: bc    12, 2, 0x7F3A5888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5888;
        }
    }

label_7F3A5854:
    ctx->pc = 0x7F3A5854u;
    ctx->downcount -= 3;
    // 7F3A5854: lwz     r3, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5858:
    ctx->pc = 0x7F3A5858u;
    // 7F3A5858: rlwinm. r0, r3, 0, 29, 29
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

label_7F3A585C:
    ctx->pc = 0x7F3A585Cu;
    // 7F3A585C: bc    12, 2, 0x7F3A5870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5870;
        }
    }

label_7F3A5860:
    ctx->pc = 0x7F3A5860u;
    ctx->downcount -= 4;
    // 7F3A5860: rlwinm r0, r3, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_7F3A5864:
    ctx->pc = 0x7F3A5864u;
    // 7F3A5864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A5868:
    ctx->pc = 0x7F3A5868u;
    // 7F3A5868: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A586C:
    ctx->pc = 0x7F3A586Cu;
    // 7F3A586C: bl      0x7F3CBEF4
    {
            ctx->lr = 0x7F3A5870u;
            ctx->pc = 0x7F3CBEF4u;
            return;
    }

label_7F3A5870:
    ctx->pc = 0x7F3A5870u;
    ctx->downcount -= 6;
    // 7F3A5870: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5874:
    ctx->pc = 0x7F3A5874u;
    // 7F3A5874: oris    r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | (0x0400u << 16);

label_7F3A5878:
    ctx->pc = 0x7F3A5878u;
    // 7F3A5878: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A587C:
    ctx->pc = 0x7F3A587Cu;
    // 7F3A587C: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5880:
    ctx->pc = 0x7F3A5880u;
    // 7F3A5880: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5884:
    ctx->pc = 0x7F3A5884u;
    // 7F3A5884: b       0x7F3A59AC
    {
            goto label_7F3A59AC;
    }

label_7F3A5888:
    ctx->pc = 0x7F3A5888u;
    ctx->downcount -= 5;
    // 7F3A5888: lwz     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A588C:
    ctx->pc = 0x7F3A588Cu;
    // 7F3A588C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A5890:
    ctx->pc = 0x7F3A5890u;
    // 7F3A5890: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F3A5894:
    ctx->pc = 0x7F3A5894u;
    // 7F3A5894: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5898:
    ctx->pc = 0x7F3A5898u;
    // 7F3A5898: bl      0x7F3CBED0
    {
            ctx->lr = 0x7F3A589Cu;
            ctx->pc = 0x7F3CBED0u;
            return;
    }

label_7F3A589C:
    ctx->pc = 0x7F3A589Cu;
    ctx->downcount -= 3;
    // 7F3A589C: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A58A0:
    ctx->pc = 0x7F3A58A0u;
    // 7F3A58A0: cmpwi   r0, 1000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A58A4:
    ctx->pc = 0x7F3A58A4u;
    // 7F3A58A4: bc    4, 0, 0x7F3A59A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A59A0;
        }
    }

label_7F3A58A8:
    ctx->pc = 0x7F3A58A8u;
    ctx->downcount -= 12;
    // 7F3A58A8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A58AC:
    ctx->pc = 0x7F3A58ACu;
    // 7F3A58AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A58B0:
    ctx->pc = 0x7F3A58B0u;
    // 7F3A58B0: addi    r5, r3, -5736
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F3A58B4:
    ctx->pc = 0x7F3A58B4u;
    // 7F3A58B4: lis     r0, 16
    ctx->gpr[0] = ((u32)(s32)(16) << 16);

label_7F3A58B8:
    ctx->pc = 0x7F3A58B8u;
    // 7F3A58B8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A58BC:
    ctx->pc = 0x7F3A58BCu;
    // 7F3A58BC: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A58C0:
    ctx->pc = 0x7F3A58C0u;
    // 7F3A58C0: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F3A58C4:
    ctx->pc = 0x7F3A58C4u;
    // 7F3A58C4: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F3A58C8:
    ctx->pc = 0x7F3A58C8u;
    // 7F3A58C8: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A58CC:
    ctx->pc = 0x7F3A58CCu;
    // 7F3A58CC: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A58D0:
    ctx->pc = 0x7F3A58D0u;
    // 7F3A58D0: or.   r0, r3, r0
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

label_7F3A58D4:
    ctx->pc = 0x7F3A58D4u;
    // 7F3A58D4: bc    4, 2, 0x7F3A59A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A59A0;
        }
    }

label_7F3A58D8:
    ctx->pc = 0x7F3A58D8u;
    ctx->downcount -= 4;
    // 7F3A58D8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A58DC:
    ctx->pc = 0x7F3A58DCu;
    // 7F3A58DC: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A58E0:
    ctx->pc = 0x7F3A58E0u;
    // 7F3A58E0: stw     r4, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A58E4:
    ctx->pc = 0x7F3A58E4u;
    // 7F3A58E4: b       0x7F3A59AC
    {
            goto label_7F3A59AC;
    }

label_7F3A58E8:
    ctx->pc = 0x7F3A58E8u;
    ctx->downcount -= 3;
    // 7F3A58E8: lwz     r3, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A58EC:
    ctx->pc = 0x7F3A58ECu;
    // 7F3A58EC: rlwinm. r0, r3, 0, 29, 29
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

label_7F3A58F0:
    ctx->pc = 0x7F3A58F0u;
    // 7F3A58F0: bc    12, 2, 0x7F3A5904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5904;
        }
    }

label_7F3A58F4:
    ctx->pc = 0x7F3A58F4u;
    ctx->downcount -= 4;
    // 7F3A58F4: rlwinm r0, r3, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_7F3A58F8:
    ctx->pc = 0x7F3A58F8u;
    // 7F3A58F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A58FC:
    ctx->pc = 0x7F3A58FCu;
    // 7F3A58FC: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5900:
    ctx->pc = 0x7F3A5900u;
    // 7F3A5900: bl      0x7F3CBEF4
    {
            ctx->lr = 0x7F3A5904u;
            ctx->pc = 0x7F3CBEF4u;
            return;
    }

label_7F3A5904:
    ctx->pc = 0x7F3A5904u;
    ctx->downcount -= 8;
    // 7F3A5904: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A5908:
    ctx->pc = 0x7F3A5908u;
    // 7F3A5908: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A590C:
    ctx->pc = 0x7F3A590Cu;
    // 7F3A590C: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F3A5910:
    ctx->pc = 0x7F3A5910u;
    // 7F3A5910: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A5914:
    ctx->pc = 0x7F3A5914u;
    // 7F3A5914: li      r6, 143
    ctx->gpr[6] = (u32)(s32)(143);

label_7F3A5918:
    ctx->pc = 0x7F3A5918u;
    // 7F3A5918: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A591C:
    ctx->pc = 0x7F3A591Cu;
    // 7F3A591C: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_7F3A5920:
    ctx->pc = 0x7F3A5920u;
    // 7F3A5920: bl      0x7F10B744
    {
            ctx->lr = 0x7F3A5924u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F3A5924:
    ctx->pc = 0x7F3A5924u;
    ctx->downcount -= 2;
    // 7F3A5924: cmpwi   r3, 0
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

label_7F3A5928:
    ctx->pc = 0x7F3A5928u;
    // 7F3A5928: bc    12, 2, 0x7F3A595C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A595C;
        }
    }

label_7F3A592C:
    ctx->pc = 0x7F3A592Cu;
    ctx->downcount -= 12;
    // 7F3A592C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A5930:
    ctx->pc = 0x7F3A5930u;
    // 7F3A5930: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F3A5934:
    ctx->pc = 0x7F3A5934u;
    // 7F3A5934: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F3A5938:
    ctx->pc = 0x7F3A5938u;
    // 7F3A5938: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A593C:
    ctx->pc = 0x7F3A593Cu;
    // 7F3A593C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5940:
    ctx->pc = 0x7F3A5940u;
    // 7F3A5940: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A5944:
    ctx->pc = 0x7F3A5944u;
    // 7F3A5944: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A5948:
    ctx->pc = 0x7F3A5948u;
    // 7F3A5948: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F3A594C:
    ctx->pc = 0x7F3A594Cu;
    // 7F3A594C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5950:
    ctx->pc = 0x7F3A5950u;
    // 7F3A5950: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5954:
    ctx->pc = 0x7F3A5954u;
    // 7F3A5954: or.   r0, r3, r0
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

label_7F3A5958:
    ctx->pc = 0x7F3A5958u;
    // 7F3A5958: bc    4, 2, 0x7F3A598C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A598C;
        }
    }

label_7F3A595C:
    ctx->pc = 0x7F3A595Cu;
    ctx->downcount -= 12;
    // 7F3A595C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A5960:
    ctx->pc = 0x7F3A5960u;
    // 7F3A5960: li      r3, 8194
    ctx->gpr[3] = (u32)(s32)(8194);

label_7F3A5964:
    ctx->pc = 0x7F3A5964u;
    // 7F3A5964: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F3A5968:
    ctx->pc = 0x7F3A5968u;
    // 7F3A5968: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A596C:
    ctx->pc = 0x7F3A596Cu;
    // 7F3A596C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5970:
    ctx->pc = 0x7F3A5970u;
    // 7F3A5970: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A5974:
    ctx->pc = 0x7F3A5974u;
    // 7F3A5974: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F3A5978:
    ctx->pc = 0x7F3A5978u;
    // 7F3A5978: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F3A597C:
    ctx->pc = 0x7F3A597Cu;
    // 7F3A597C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5980:
    ctx->pc = 0x7F3A5980u;
    // 7F3A5980: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5984:
    ctx->pc = 0x7F3A5984u;
    // 7F3A5984: or.   r0, r3, r0
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

label_7F3A5988:
    ctx->pc = 0x7F3A5988u;
    // 7F3A5988: bc    12, 2, 0x7F3A59A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A59A0;
        }
    }

label_7F3A598C:
    ctx->pc = 0x7F3A598Cu;
    ctx->downcount -= 5;
    // 7F3A598C: lwz     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5990:
    ctx->pc = 0x7F3A5990u;
    // 7F3A5990: oris    r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | (0x0400u << 16);

label_7F3A5994:
    ctx->pc = 0x7F3A5994u;
    // 7F3A5994: stw     r0, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5998:
    ctx->pc = 0x7F3A5998u;
    // 7F3A5998: lwz     r0, 5028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A599C:
    ctx->pc = 0x7F3A599Cu;
    // 7F3A599C: sth     r0, 4854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A59A0:
    ctx->pc = 0x7F3A59A0u;
    ctx->downcount -= 3;
    // 7F3A59A0: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A59A4:
    ctx->pc = 0x7F3A59A4u;
    // 7F3A59A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A59A8:
    ctx->pc = 0x7F3A59A8u;
    // 7F3A59A8: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A59AC:
    ctx->pc = 0x7F3A59ACu;
    ctx->downcount -= 6;
    // 7F3A59AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A59B0:
    ctx->pc = 0x7F3A59B0u;
    // 7F3A59B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A59B4:
    ctx->pc = 0x7F3A59B4u;
    // 7F3A59B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A59B8:
    ctx->pc = 0x7F3A59B8u;
    // 7F3A59B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A59BC:
    ctx->pc = 0x7F3A59BCu;
    // 7F3A59BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A59C0:
    ctx->pc = 0x7F3A59C0u;
    ctx->downcount -= 8;
    // 7F3A59C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A59C4:
    ctx->pc = 0x7F3A59C4u;
    // 7F3A59C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A59C8:
    ctx->pc = 0x7F3A59C8u;
    // 7F3A59C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A59CC:
    ctx->pc = 0x7F3A59CCu;
    // 7F3A59CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A59D0:
    ctx->pc = 0x7F3A59D0u;
    // 7F3A59D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A59D4:
    ctx->pc = 0x7F3A59D4u;
    // 7F3A59D4: lwz     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A59D8:
    ctx->pc = 0x7F3A59D8u;
    // 7F3A59D8: cmpwi   r0, 0
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

label_7F3A59DC:
    ctx->pc = 0x7F3A59DCu;
    // 7F3A59DC: bc    4, 2, 0x7F3A59E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A59E4;
        }
    }

label_7F3A59E0:
    ctx->pc = 0x7F3A59E0u;
    ctx->downcount -= 1;
    // 7F3A59E0: bl      0x7F3A3FE0
    {
            ctx->lr = 0x7F3A59E4u;
            ctx->pc = 0x7F3A3FE0u;
            return;
    }

label_7F3A59E4:
    ctx->pc = 0x7F3A59E4u;
    ctx->downcount -= 3;
    // 7F3A59E4: lha     r0, 5288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A59E8:
    ctx->pc = 0x7F3A59E8u;
    // 7F3A59E8: cmpwi   r0, 1
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

label_7F3A59EC:
    ctx->pc = 0x7F3A59ECu;
    // 7F3A59EC: bc    4, 2, 0x7F3A5A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5A0C;
        }
    }

label_7F3A59F0:
    ctx->pc = 0x7F3A59F0u;
    ctx->downcount -= 7;
    // 7F3A59F0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A59F4:
    ctx->pc = 0x7F3A59F4u;
    // 7F3A59F4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A59F8:
    ctx->pc = 0x7F3A59F8u;
    // 7F3A59F8: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A59FC:
    ctx->pc = 0x7F3A59FCu;
    // 7F3A59FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5A00:
    ctx->pc = 0x7F3A5A00u;
    // 7F3A5A00: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5A04:
    ctx->pc = 0x7F3A5A04u;
    // 7F3A5A04: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5A08:
    ctx->pc = 0x7F3A5A08u;
    // 7F3A5A08: b       0x7F3A5A3C
    {
            goto label_7F3A5A3C;
    }

label_7F3A5A0C:
    ctx->pc = 0x7F3A5A0Cu;
    ctx->downcount -= 2;
    // 7F3A5A0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5A10:
    ctx->pc = 0x7F3A5A10u;
    // 7F3A5A10: bl      0x7F3A4178
    {
            ctx->lr = 0x7F3A5A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4178u;
                return;
            }
            goto label_7F3A4178;
    }

label_7F3A5A14:
    ctx->pc = 0x7F3A5A14u;
    ctx->downcount -= 2;
    // 7F3A5A14: cmpwi   r3, 0
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

label_7F3A5A18:
    ctx->pc = 0x7F3A5A18u;
    // 7F3A5A18: bc    12, 2, 0x7F3A5A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5A30;
        }
    }

label_7F3A5A1C:
    ctx->pc = 0x7F3A5A1Cu;
    ctx->downcount -= 5;
    // 7F3A5A1C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3A5A20:
    ctx->pc = 0x7F3A5A20u;
    // 7F3A5A20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5A24:
    ctx->pc = 0x7F3A5A24u;
    // 7F3A5A24: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5A28:
    ctx->pc = 0x7F3A5A28u;
    // 7F3A5A28: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5A2C:
    ctx->pc = 0x7F3A5A2Cu;
    // 7F3A5A2C: b       0x7F3A5A3C
    {
            goto label_7F3A5A3C;
    }

label_7F3A5A30:
    ctx->pc = 0x7F3A5A30u;
    ctx->downcount -= 3;
    // 7F3A5A30: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5A34:
    ctx->pc = 0x7F3A5A34u;
    // 7F3A5A34: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5A38:
    ctx->pc = 0x7F3A5A38u;
    // 7F3A5A38: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5A3C:
    ctx->pc = 0x7F3A5A3Cu;
    ctx->downcount -= 6;
    // 7F3A5A3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5A40:
    ctx->pc = 0x7F3A5A40u;
    // 7F3A5A40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5A44:
    ctx->pc = 0x7F3A5A44u;
    // 7F3A5A44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5A48:
    ctx->pc = 0x7F3A5A48u;
    // 7F3A5A48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5A4C:
    ctx->pc = 0x7F3A5A4Cu;
    // 7F3A5A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5A50:
    ctx->pc = 0x7F3A5A50u;
    ctx->downcount -= 8;
    // 7F3A5A50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5A54:
    ctx->pc = 0x7F3A5A54u;
    // 7F3A5A54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5A58:
    ctx->pc = 0x7F3A5A58u;
    // 7F3A5A58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5A5C:
    ctx->pc = 0x7F3A5A5Cu;
    // 7F3A5A5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5A60:
    ctx->pc = 0x7F3A5A60u;
    // 7F3A5A60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A5A64:
    ctx->pc = 0x7F3A5A64u;
    // 7F3A5A64: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5A68:
    ctx->pc = 0x7F3A5A68u;
    // 7F3A5A68: cmpwi   r0, 1
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

label_7F3A5A6C:
    ctx->pc = 0x7F3A5A6Cu;
    // 7F3A5A6C: bc    4, 2, 0x7F3A5A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5A8C;
        }
    }

label_7F3A5A70:
    ctx->pc = 0x7F3A5A70u;
    ctx->downcount -= 7;
    // 7F3A5A70: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A5A74:
    ctx->pc = 0x7F3A5A74u;
    // 7F3A5A74: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A5A78:
    ctx->pc = 0x7F3A5A78u;
    // 7F3A5A78: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5A7C:
    ctx->pc = 0x7F3A5A7Cu;
    // 7F3A5A7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5A80:
    ctx->pc = 0x7F3A5A80u;
    // 7F3A5A80: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5A84:
    ctx->pc = 0x7F3A5A84u;
    // 7F3A5A84: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5A88:
    ctx->pc = 0x7F3A5A88u;
    // 7F3A5A88: b       0x7F3A5B48
    {
            goto label_7F3A5B48;
    }

label_7F3A5A8C:
    ctx->pc = 0x7F3A5A8Cu;
    ctx->downcount -= 3;
    // 7F3A5A8C: lwz     r0, 5024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5A90:
    ctx->pc = 0x7F3A5A90u;
    // 7F3A5A90: cmpwi   r0, 4000
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

label_7F3A5A94:
    ctx->pc = 0x7F3A5A94u;
    // 7F3A5A94: bc    4, 1, 0x7F3A5AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5AA4;
        }
    }

label_7F3A5A98:
    ctx->pc = 0x7F3A5A98u;
    ctx->downcount -= 3;
    // 7F3A5A98: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A5A9C:
    ctx->pc = 0x7F3A5A9Cu;
    // 7F3A5A9C: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5AA0:
    ctx->pc = 0x7F3A5AA0u;
    // 7F3A5AA0: b       0x7F3A5AB4
    {
            goto label_7F3A5AB4;
    }

label_7F3A5AA4:
    ctx->pc = 0x7F3A5AA4u;
    ctx->downcount -= 2;
    // 7F3A5AA4: cmpwi   r0, 3000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A5AA8:
    ctx->pc = 0x7F3A5AA8u;
    // 7F3A5AA8: bc    4, 0, 0x7F3A5AB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5AB4;
        }
    }

label_7F3A5AAC:
    ctx->pc = 0x7F3A5AACu;
    ctx->downcount -= 2;
    // 7F3A5AAC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A5AB0:
    ctx->pc = 0x7F3A5AB0u;
    // 7F3A5AB0: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5AB4:
    ctx->pc = 0x7F3A5AB4u;
    ctx->downcount -= 2;
    // 7F3A5AB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5AB8:
    ctx->pc = 0x7F3A5AB8u;
    // 7F3A5AB8: bl      0x7F3A3E98
    {
            ctx->lr = 0x7F3A5ABCu;
            ctx->pc = 0x7F3A3E98u;
            return;
    }

label_7F3A5ABC:
    ctx->pc = 0x7F3A5ABCu;
    ctx->downcount -= 3;
    // 7F3A5ABC: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5AC0:
    ctx->pc = 0x7F3A5AC0u;
    // 7F3A5AC0: rlwinm. r0, r0, 0, 25, 25
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

label_7F3A5AC4:
    ctx->pc = 0x7F3A5AC4u;
    // 7F3A5AC4: bc    12, 2, 0x7F3A5B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5B04;
        }
    }

label_7F3A5AC8:
    ctx->pc = 0x7F3A5AC8u;
    ctx->downcount -= 4;
    // 7F3A5AC8: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5ACC:
    ctx->pc = 0x7F3A5ACCu;
    // 7F3A5ACC: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A5AD0:
    ctx->pc = 0x7F3A5AD0u;
    // 7F3A5AD0: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3A5AD4:
    ctx->pc = 0x7F3A5AD4u;
    // 7F3A5AD4: bl      0x7F1025F8
    {
            ctx->lr = 0x7F3A5AD8u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F3A5AD8:
    ctx->pc = 0x7F3A5AD8u;
    ctx->downcount -= 4;
    // 7F3A5AD8: stw     r3, 4984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4984);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5ADC:
    ctx->pc = 0x7F3A5ADCu;
    // 7F3A5ADC: lwz     r3, 4984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5AE0:
    ctx->pc = 0x7F3A5AE0u;
    // 7F3A5AE0: lwz     r4, 4976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A5AE4:
    ctx->pc = 0x7F3A5AE4u;
    // 7F3A5AE4: bl      0x7F1027E8
    {
            ctx->lr = 0x7F3A5AE8u;
            ctx->pc = 0x7F1027E8u;
            return;
    }

label_7F3A5AE8:
    ctx->pc = 0x7F3A5AE8u;
    ctx->downcount -= 2;
    // 7F3A5AE8: cmpwi   r3, 1
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

label_7F3A5AEC:
    ctx->pc = 0x7F3A5AECu;
    // 7F3A5AEC: bc    4, 1, 0x7F3A5B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5B04;
        }
    }

label_7F3A5AF0:
    ctx->pc = 0x7F3A5AF0u;
    ctx->downcount -= 5;
    // 7F3A5AF0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A5AF4:
    ctx->pc = 0x7F3A5AF4u;
    // 7F3A5AF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5AF8:
    ctx->pc = 0x7F3A5AF8u;
    // 7F3A5AF8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5AFC:
    ctx->pc = 0x7F3A5AFCu;
    // 7F3A5AFC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5B00:
    ctx->pc = 0x7F3A5B00u;
    // 7F3A5B00: b       0x7F3A5B48
    {
            goto label_7F3A5B48;
    }

label_7F3A5B04:
    ctx->pc = 0x7F3A5B04u;
    ctx->downcount -= 3;
    // 7F3A5B04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5B08:
    ctx->pc = 0x7F3A5B08u;
    // 7F3A5B08: li      r4, 2500
    ctx->gpr[4] = (u32)(s32)(2500);

label_7F3A5B0C:
    ctx->pc = 0x7F3A5B0Cu;
    // 7F3A5B0C: bl      0x7F3A41F0
    {
            ctx->lr = 0x7F3A5B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A41F0u;
                return;
            }
            goto label_7F3A41F0;
    }

label_7F3A5B10:
    ctx->pc = 0x7F3A5B10u;
    ctx->downcount -= 2;
    // 7F3A5B10: cmpwi   r3, 0
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

label_7F3A5B14:
    ctx->pc = 0x7F3A5B14u;
    // 7F3A5B14: bc    4, 1, 0x7F3A5B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5B3C;
        }
    }

label_7F3A5B18:
    ctx->pc = 0x7F3A5B18u;
    ctx->downcount -= 9;
    // 7F3A5B18: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A5B1C:
    ctx->pc = 0x7F3A5B1Cu;
    // 7F3A5B1C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3A5B20:
    ctx->pc = 0x7F3A5B20u;
    // 7F3A5B20: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5B24:
    ctx->pc = 0x7F3A5B24u;
    // 7F3A5B24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A5B28:
    ctx->pc = 0x7F3A5B28u;
    // 7F3A5B28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5B2C:
    ctx->pc = 0x7F3A5B2Cu;
    // 7F3A5B2C: sth     r4, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5B30:
    ctx->pc = 0x7F3A5B30u;
    // 7F3A5B30: stw     r3, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5B34:
    ctx->pc = 0x7F3A5B34u;
    // 7F3A5B34: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5B38:
    ctx->pc = 0x7F3A5B38u;
    // 7F3A5B38: b       0x7F3A5B48
    {
            goto label_7F3A5B48;
    }

label_7F3A5B3C:
    ctx->pc = 0x7F3A5B3Cu;
    ctx->downcount -= 3;
    // 7F3A5B3C: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5B40:
    ctx->pc = 0x7F3A5B40u;
    // 7F3A5B40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5B44:
    ctx->pc = 0x7F3A5B44u;
    // 7F3A5B44: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5B48:
    ctx->pc = 0x7F3A5B48u;
    ctx->downcount -= 6;
    // 7F3A5B48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5B4C:
    ctx->pc = 0x7F3A5B4Cu;
    // 7F3A5B4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5B50:
    ctx->pc = 0x7F3A5B50u;
    // 7F3A5B50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5B54:
    ctx->pc = 0x7F3A5B54u;
    // 7F3A5B54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5B58:
    ctx->pc = 0x7F3A5B58u;
    // 7F3A5B58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5B5C:
    ctx->pc = 0x7F3A5B5Cu;
    ctx->downcount -= 8;
    // 7F3A5B5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5B60:
    ctx->pc = 0x7F3A5B60u;
    // 7F3A5B60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5B64:
    ctx->pc = 0x7F3A5B64u;
    // 7F3A5B64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5B68:
    ctx->pc = 0x7F3A5B68u;
    // 7F3A5B68: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5B6C:
    ctx->pc = 0x7F3A5B6Cu;
    // 7F3A5B6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A5B70:
    ctx->pc = 0x7F3A5B70u;
    // 7F3A5B70: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5B74:
    ctx->pc = 0x7F3A5B74u;
    // 7F3A5B74: cmpwi   r0, 1
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

label_7F3A5B78:
    ctx->pc = 0x7F3A5B78u;
    // 7F3A5B78: bc    4, 2, 0x7F3A5B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5B98;
        }
    }

label_7F3A5B7C:
    ctx->pc = 0x7F3A5B7Cu;
    ctx->downcount -= 7;
    // 7F3A5B7C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A5B80:
    ctx->pc = 0x7F3A5B80u;
    // 7F3A5B80: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A5B84:
    ctx->pc = 0x7F3A5B84u;
    // 7F3A5B84: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5B88:
    ctx->pc = 0x7F3A5B88u;
    // 7F3A5B88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5B8C:
    ctx->pc = 0x7F3A5B8Cu;
    // 7F3A5B8C: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5B90:
    ctx->pc = 0x7F3A5B90u;
    // 7F3A5B90: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5B94:
    ctx->pc = 0x7F3A5B94u;
    // 7F3A5B94: b       0x7F3A5C04
    {
            goto label_7F3A5C04;
    }

label_7F3A5B98:
    ctx->pc = 0x7F3A5B98u;
    ctx->downcount -= 2;
    // 7F3A5B98: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_7F3A5B9C:
    ctx->pc = 0x7F3A5B9Cu;
    // 7F3A5B9C: bl      0x7F3A41F0
    {
            ctx->lr = 0x7F3A5BA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A41F0u;
                return;
            }
            goto label_7F3A41F0;
    }

label_7F3A5BA0:
    ctx->pc = 0x7F3A5BA0u;
    ctx->downcount -= 2;
    // 7F3A5BA0: cmpwi   r3, 0
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

label_7F3A5BA4:
    ctx->pc = 0x7F3A5BA4u;
    // 7F3A5BA4: bc    4, 1, 0x7F3A5BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5BC4;
        }
    }

label_7F3A5BA8:
    ctx->pc = 0x7F3A5BA8u;
    ctx->downcount -= 7;
    // 7F3A5BA8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F3A5BAC:
    ctx->pc = 0x7F3A5BACu;
    // 7F3A5BAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A5BB0:
    ctx->pc = 0x7F3A5BB0u;
    // 7F3A5BB0: sth     r0, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5BB4:
    ctx->pc = 0x7F3A5BB4u;
    // 7F3A5BB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5BB8:
    ctx->pc = 0x7F3A5BB8u;
    // 7F3A5BB8: stw     r3, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5BBC:
    ctx->pc = 0x7F3A5BBCu;
    // 7F3A5BBC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5BC0:
    ctx->pc = 0x7F3A5BC0u;
    // 7F3A5BC0: b       0x7F3A5C04
    {
            goto label_7F3A5C04;
    }

label_7F3A5BC4:
    ctx->pc = 0x7F3A5BC4u;
    ctx->downcount -= 3;
    // 7F3A5BC4: lwz     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5BC8:
    ctx->pc = 0x7F3A5BC8u;
    // 7F3A5BC8: cmpwi   r0, 7200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A5BCC:
    ctx->pc = 0x7F3A5BCCu;
    // 7F3A5BCC: bc    4, 1, 0x7F3A5BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5BF8;
        }
    }

label_7F3A5BD0:
    ctx->pc = 0x7F3A5BD0u;
    ctx->downcount -= 10;
    // 7F3A5BD0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A5BD4:
    ctx->pc = 0x7F3A5BD4u;
    // 7F3A5BD4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F3A5BD8:
    ctx->pc = 0x7F3A5BD8u;
    // 7F3A5BD8: stw     r4, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A5BDC:
    ctx->pc = 0x7F3A5BDCu;
    // 7F3A5BDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5BE0:
    ctx->pc = 0x7F3A5BE0u;
    // 7F3A5BE0: sth     r4, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5BE4:
    ctx->pc = 0x7F3A5BE4u;
    // 7F3A5BE4: sth     r4, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5BE8:
    ctx->pc = 0x7F3A5BE8u;
    // 7F3A5BE8: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5BEC:
    ctx->pc = 0x7F3A5BECu;
    // 7F3A5BEC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5BF0:
    ctx->pc = 0x7F3A5BF0u;
    // 7F3A5BF0: stw     r0, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5BF4:
    ctx->pc = 0x7F3A5BF4u;
    // 7F3A5BF4: b       0x7F3A5C04
    {
            goto label_7F3A5C04;
    }

label_7F3A5BF8:
    ctx->pc = 0x7F3A5BF8u;
    ctx->downcount -= 3;
    // 7F3A5BF8: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5BFC:
    ctx->pc = 0x7F3A5BFCu;
    // 7F3A5BFC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5C00:
    ctx->pc = 0x7F3A5C00u;
    // 7F3A5C00: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5C04:
    ctx->pc = 0x7F3A5C04u;
    ctx->downcount -= 6;
    // 7F3A5C04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5C08:
    ctx->pc = 0x7F3A5C08u;
    // 7F3A5C08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5C0C:
    ctx->pc = 0x7F3A5C0Cu;
    // 7F3A5C0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5C10:
    ctx->pc = 0x7F3A5C10u;
    // 7F3A5C10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5C14:
    ctx->pc = 0x7F3A5C14u;
    // 7F3A5C14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5C18:
    ctx->pc = 0x7F3A5C18u;
    ctx->downcount -= 6;
    // 7F3A5C18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5C1C:
    ctx->pc = 0x7F3A5C1Cu;
    // 7F3A5C1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5C20:
    ctx->pc = 0x7F3A5C20u;
    // 7F3A5C20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5C24:
    ctx->pc = 0x7F3A5C24u;
    // 7F3A5C24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5C28:
    ctx->pc = 0x7F3A5C28u;
    // 7F3A5C28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A5C2C:
    ctx->pc = 0x7F3A5C2Cu;
    // 7F3A5C2C: bl      0x7F3A3E98
    {
            ctx->lr = 0x7F3A5C30u;
            ctx->pc = 0x7F3A3E98u;
            return;
    }

label_7F3A5C30:
    ctx->pc = 0x7F3A5C30u;
    ctx->downcount -= 3;
    // 7F3A5C30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5C34:
    ctx->pc = 0x7F3A5C34u;
    // 7F3A5C34: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F3A5C38:
    ctx->pc = 0x7F3A5C38u;
    // 7F3A5C38: bl      0x7F3A41F0
    {
            ctx->lr = 0x7F3A5C3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A41F0u;
                return;
            }
            goto label_7F3A41F0;
    }

label_7F3A5C3C:
    ctx->pc = 0x7F3A5C3Cu;
    ctx->downcount -= 2;
    // 7F3A5C3C: cmpwi   r3, 0
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

label_7F3A5C40:
    ctx->pc = 0x7F3A5C40u;
    // 7F3A5C40: bc    12, 0, 0x7F3A5C50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5C50;
        }
    }

label_7F3A5C44:
    ctx->pc = 0x7F3A5C44u;
    ctx->downcount -= 3;
    // 7F3A5C44: lha     r0, 4914(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4914);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5C48:
    ctx->pc = 0x7F3A5C48u;
    // 7F3A5C48: cmpwi   r0, 2
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

label_7F3A5C4C:
    ctx->pc = 0x7F3A5C4Cu;
    // 7F3A5C4C: bc    12, 2, 0x7F3A5C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5C64;
        }
    }

label_7F3A5C50:
    ctx->pc = 0x7F3A5C50u;
    ctx->downcount -= 5;
    // 7F3A5C50: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A5C54:
    ctx->pc = 0x7F3A5C54u;
    // 7F3A5C54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5C58:
    ctx->pc = 0x7F3A5C58u;
    // 7F3A5C58: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5C5C:
    ctx->pc = 0x7F3A5C5Cu;
    // 7F3A5C5C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5C60:
    ctx->pc = 0x7F3A5C60u;
    // 7F3A5C60: b       0x7F3A5CC0
    {
            goto label_7F3A5CC0;
    }

label_7F3A5C64:
    ctx->pc = 0x7F3A5C64u;
    ctx->downcount -= 2;
    // 7F3A5C64: cmpwi   r3, 0
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

label_7F3A5C68:
    ctx->pc = 0x7F3A5C68u;
    // 7F3A5C68: bc    4, 1, 0x7F3A5CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5CB4;
        }
    }

label_7F3A5C6C:
    ctx->pc = 0x7F3A5C6Cu;
    ctx->downcount -= 12;
    // 7F3A5C6C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A5C70:
    ctx->pc = 0x7F3A5C70u;
    // 7F3A5C70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5C74:
    ctx->pc = 0x7F3A5C74u;
    // 7F3A5C74: addi    r5, r3, -5736
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F3A5C78:
    ctx->pc = 0x7F3A5C78u;
    // 7F3A5C78: lis     r0, 16
    ctx->gpr[0] = ((u32)(s32)(16) << 16);

label_7F3A5C7C:
    ctx->pc = 0x7F3A5C7Cu;
    // 7F3A5C7C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5C80:
    ctx->pc = 0x7F3A5C80u;
    // 7F3A5C80: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A5C84:
    ctx->pc = 0x7F3A5C84u;
    // 7F3A5C84: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F3A5C88:
    ctx->pc = 0x7F3A5C88u;
    // 7F3A5C88: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F3A5C8C:
    ctx->pc = 0x7F3A5C8Cu;
    // 7F3A5C8C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F3A5C90:
    ctx->pc = 0x7F3A5C90u;
    // 7F3A5C90: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F3A5C94:
    ctx->pc = 0x7F3A5C94u;
    // 7F3A5C94: or.   r0, r3, r0
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

label_7F3A5C98:
    ctx->pc = 0x7F3A5C98u;
    // 7F3A5C98: bc    4, 2, 0x7F3A5CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5CB4;
        }
    }

label_7F3A5C9C:
    ctx->pc = 0x7F3A5C9Cu;
    ctx->downcount -= 6;
    // 7F3A5C9C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F3A5CA0:
    ctx->pc = 0x7F3A5CA0u;
    // 7F3A5CA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A5CA4:
    ctx->pc = 0x7F3A5CA4u;
    // 7F3A5CA4: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5CA8:
    ctx->pc = 0x7F3A5CA8u;
    // 7F3A5CA8: stw     r0, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5CAC:
    ctx->pc = 0x7F3A5CACu;
    // 7F3A5CAC: stw     r4, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A5CB0:
    ctx->pc = 0x7F3A5CB0u;
    // 7F3A5CB0: b       0x7F3A5CC0
    {
            goto label_7F3A5CC0;
    }

label_7F3A5CB4:
    ctx->pc = 0x7F3A5CB4u;
    ctx->downcount -= 3;
    // 7F3A5CB4: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5CB8:
    ctx->pc = 0x7F3A5CB8u;
    // 7F3A5CB8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5CBC:
    ctx->pc = 0x7F3A5CBCu;
    // 7F3A5CBC: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5CC0:
    ctx->pc = 0x7F3A5CC0u;
    ctx->downcount -= 6;
    // 7F3A5CC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5CC4:
    ctx->pc = 0x7F3A5CC4u;
    // 7F3A5CC4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5CC8:
    ctx->pc = 0x7F3A5CC8u;
    // 7F3A5CC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5CCC:
    ctx->pc = 0x7F3A5CCCu;
    // 7F3A5CCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5CD0:
    ctx->pc = 0x7F3A5CD0u;
    // 7F3A5CD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5CD4:
    ctx->pc = 0x7F3A5CD4u;
    ctx->downcount -= 8;
    // 7F3A5CD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5CD8:
    ctx->pc = 0x7F3A5CD8u;
    // 7F3A5CD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5CDC:
    ctx->pc = 0x7F3A5CDCu;
    // 7F3A5CDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5CE0:
    ctx->pc = 0x7F3A5CE0u;
    // 7F3A5CE0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A5CE4:
    ctx->pc = 0x7F3A5CE4u;
    // 7F3A5CE4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A5CE8:
    ctx->pc = 0x7F3A5CE8u;
    // 7F3A5CE8: lha     r0, 5288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5CEC:
    ctx->pc = 0x7F3A5CECu;
    // 7F3A5CEC: cmpwi   r0, 1
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

label_7F3A5CF0:
    ctx->pc = 0x7F3A5CF0u;
    // 7F3A5CF0: bc    4, 2, 0x7F3A5D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5D10;
        }
    }

label_7F3A5CF4:
    ctx->pc = 0x7F3A5CF4u;
    ctx->downcount -= 7;
    // 7F3A5CF4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A5CF8:
    ctx->pc = 0x7F3A5CF8u;
    // 7F3A5CF8: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3A5CFC:
    ctx->pc = 0x7F3A5CFCu;
    // 7F3A5CFC: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5D00:
    ctx->pc = 0x7F3A5D00u;
    // 7F3A5D00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5D04:
    ctx->pc = 0x7F3A5D04u;
    // 7F3A5D04: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5D08:
    ctx->pc = 0x7F3A5D08u;
    // 7F3A5D08: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5D0C:
    ctx->pc = 0x7F3A5D0Cu;
    // 7F3A5D0C: b       0x7F3A5D9C
    {
            goto label_7F3A5D9C;
    }

label_7F3A5D10:
    ctx->pc = 0x7F3A5D10u;
    ctx->downcount -= 3;
    // 7F3A5D10: lwz     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5D14:
    ctx->pc = 0x7F3A5D14u;
    // 7F3A5D14: rlwinm. r0, r0, 0, 25, 25
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

label_7F3A5D18:
    ctx->pc = 0x7F3A5D18u;
    // 7F3A5D18: bc    12, 2, 0x7F3A5D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5D58;
        }
    }

label_7F3A5D1C:
    ctx->pc = 0x7F3A5D1Cu;
    ctx->downcount -= 4;
    // 7F3A5D1C: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5D20:
    ctx->pc = 0x7F3A5D20u;
    // 7F3A5D20: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A5D24:
    ctx->pc = 0x7F3A5D24u;
    // 7F3A5D24: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3A5D28:
    ctx->pc = 0x7F3A5D28u;
    // 7F3A5D28: bl      0x7F1025F8
    {
            ctx->lr = 0x7F3A5D2Cu;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F3A5D2C:
    ctx->pc = 0x7F3A5D2Cu;
    ctx->downcount -= 4;
    // 7F3A5D2C: stw     r3, 4984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4984);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5D30:
    ctx->pc = 0x7F3A5D30u;
    // 7F3A5D30: lwz     r3, 4984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5D34:
    ctx->pc = 0x7F3A5D34u;
    // 7F3A5D34: lwz     r4, 4976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A5D38:
    ctx->pc = 0x7F3A5D38u;
    // 7F3A5D38: bl      0x7F1027E8
    {
            ctx->lr = 0x7F3A5D3Cu;
            ctx->pc = 0x7F1027E8u;
            return;
    }

label_7F3A5D3C:
    ctx->pc = 0x7F3A5D3Cu;
    ctx->downcount -= 2;
    // 7F3A5D3C: cmpwi   r3, 1
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

label_7F3A5D40:
    ctx->pc = 0x7F3A5D40u;
    // 7F3A5D40: bc    4, 1, 0x7F3A5D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5D58;
        }
    }

label_7F3A5D44:
    ctx->pc = 0x7F3A5D44u;
    ctx->downcount -= 5;
    // 7F3A5D44: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A5D48:
    ctx->pc = 0x7F3A5D48u;
    // 7F3A5D48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5D4C:
    ctx->pc = 0x7F3A5D4Cu;
    // 7F3A5D4C: sth     r3, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A5D50:
    ctx->pc = 0x7F3A5D50u;
    // 7F3A5D50: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5D54:
    ctx->pc = 0x7F3A5D54u;
    // 7F3A5D54: b       0x7F3A5D9C
    {
            goto label_7F3A5D9C;
    }

label_7F3A5D58:
    ctx->pc = 0x7F3A5D58u;
    ctx->downcount -= 3;
    // 7F3A5D58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A5D5C:
    ctx->pc = 0x7F3A5D5Cu;
    // 7F3A5D5C: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_7F3A5D60:
    ctx->pc = 0x7F3A5D60u;
    // 7F3A5D60: bl      0x7F3A41F0
    {
            ctx->lr = 0x7F3A5D64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A41F0u;
                return;
            }
            goto label_7F3A41F0;
    }

label_7F3A5D64:
    ctx->pc = 0x7F3A5D64u;
    ctx->downcount -= 2;
    // 7F3A5D64: cmpwi   r3, 0
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

label_7F3A5D68:
    ctx->pc = 0x7F3A5D68u;
    // 7F3A5D68: bc    4, 1, 0x7F3A5D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5D90;
        }
    }

label_7F3A5D6C:
    ctx->pc = 0x7F3A5D6Cu;
    ctx->downcount -= 9;
    // 7F3A5D6C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3A5D70:
    ctx->pc = 0x7F3A5D70u;
    // 7F3A5D70: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3A5D74:
    ctx->pc = 0x7F3A5D74u;
    // 7F3A5D74: sth     r0, 4826(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5D78:
    ctx->pc = 0x7F3A5D78u;
    // 7F3A5D78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A5D7C:
    ctx->pc = 0x7F3A5D7Cu;
    // 7F3A5D7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A5D80:
    ctx->pc = 0x7F3A5D80u;
    // 7F3A5D80: sth     r4, 4828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A5D84:
    ctx->pc = 0x7F3A5D84u;
    // 7F3A5D84: stw     r3, 4844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A5D88:
    ctx->pc = 0x7F3A5D88u;
    // 7F3A5D88: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5D8C:
    ctx->pc = 0x7F3A5D8Cu;
    // 7F3A5D8C: b       0x7F3A5D9C
    {
            goto label_7F3A5D9C;
    }

label_7F3A5D90:
    ctx->pc = 0x7F3A5D90u;
    ctx->downcount -= 3;
    // 7F3A5D90: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A5D94:
    ctx->pc = 0x7F3A5D94u;
    // 7F3A5D94: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3A5D98:
    ctx->pc = 0x7F3A5D98u;
    // 7F3A5D98: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5D9C:
    ctx->pc = 0x7F3A5D9Cu;
    ctx->downcount -= 6;
    // 7F3A5D9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5DA0:
    ctx->pc = 0x7F3A5DA0u;
    // 7F3A5DA0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A5DA4:
    ctx->pc = 0x7F3A5DA4u;
    // 7F3A5DA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5DA8:
    ctx->pc = 0x7F3A5DA8u;
    // 7F3A5DA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5DAC:
    ctx->pc = 0x7F3A5DACu;
    // 7F3A5DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5DB0:
    ctx->pc = 0x7F3A5DB0u;
    ctx->downcount -= 12;
    // 7F3A5DB0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F3A5DB4:
    ctx->pc = 0x7F3A5DB4u;
    // 7F3A5DB4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3A5DB8:
    ctx->pc = 0x7F3A5DB8u;
    // 7F3A5DB8: stw     r6, 4836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4836);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A5DBC:
    ctx->pc = 0x7F3A5DBCu;
    // 7F3A5DBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A5DC0:
    ctx->pc = 0x7F3A5DC0u;
    // 7F3A5DC0: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F3A5DC4:
    ctx->pc = 0x7F3A5DC4u;
    // 7F3A5DC4: sth     r5, 4824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F3A5DC8:
    ctx->pc = 0x7F3A5DC8u;
    // 7F3A5DC8: sth     r6, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F3A5DCC:
    ctx->pc = 0x7F3A5DCCu;
    // 7F3A5DCC: sth     r5, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F3A5DD0:
    ctx->pc = 0x7F3A5DD0u;
    // 7F3A5DD0: stw     r4, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A5DD4:
    ctx->pc = 0x7F3A5DD4u;
    // 7F3A5DD4: stw     r4, 5284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A5DD8:
    ctx->pc = 0x7F3A5DD8u;
    // 7F3A5DD8: sth     r0, 5336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5336);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A5DDC:
    ctx->pc = 0x7F3A5DDCu;
    // 7F3A5DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5DE0:
    ctx->pc = 0x7F3A5DE0u;
    ctx->downcount -= 6;
    // 7F3A5DE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5DE4:
    ctx->pc = 0x7F3A5DE4u;
    // 7F3A5DE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5DE8:
    ctx->pc = 0x7F3A5DE8u;
    // 7F3A5DE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5DEC:
    ctx->pc = 0x7F3A5DECu;
    // 7F3A5DEC: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5DF0:
    ctx->pc = 0x7F3A5DF0u;
    // 7F3A5DF0: cmpwi   r0, 4
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

label_7F3A5DF4:
    ctx->pc = 0x7F3A5DF4u;
    // 7F3A5DF4: bc    12, 2, 0x7F3A5E10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E10;
        }
    }

label_7F3A5DF8:
    ctx->pc = 0x7F3A5DF8u;
    ctx->downcount -= 1;
    // 7F3A5DF8: bc    4, 0, 0x7F3A5E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E14;
        }
    }

label_7F3A5DFC:
    ctx->pc = 0x7F3A5DFCu;
    ctx->downcount -= 2;
    // 7F3A5DFC: cmpwi   r0, 0
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

label_7F3A5E00:
    ctx->pc = 0x7F3A5E00u;
    // 7F3A5E00: bc    12, 2, 0x7F3A5E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E08;
        }
    }

label_7F3A5E04:
    ctx->pc = 0x7F3A5E04u;
    ctx->downcount -= 1;
    // 7F3A5E04: b       0x7F3A5E14
    {
            goto label_7F3A5E14;
    }

label_7F3A5E08:
    ctx->pc = 0x7F3A5E08u;
    ctx->downcount -= 1;
    // 7F3A5E08: bl      0x7F3A42C0
    {
            ctx->lr = 0x7F3A5E0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A42C0u;
                return;
            }
            goto label_7F3A42C0;
    }

label_7F3A5E0C:
    ctx->pc = 0x7F3A5E0Cu;
    ctx->downcount -= 1;
    // 7F3A5E0C: b       0x7F3A5E14
    {
            goto label_7F3A5E14;
    }

label_7F3A5E10:
    ctx->pc = 0x7F3A5E10u;
    ctx->downcount -= 1;
    // 7F3A5E10: bl      0x7F3A43B4
    {
            ctx->lr = 0x7F3A5E14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A43B4u;
                return;
            }
            goto label_7F3A43B4;
    }

label_7F3A5E14:
    ctx->pc = 0x7F3A5E14u;
    ctx->downcount -= 5;
    // 7F3A5E14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5E18:
    ctx->pc = 0x7F3A5E18u;
    // 7F3A5E18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5E1C:
    ctx->pc = 0x7F3A5E1Cu;
    // 7F3A5E1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5E20:
    ctx->pc = 0x7F3A5E20u;
    // 7F3A5E20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5E24:
    ctx->pc = 0x7F3A5E24u;
    ctx->downcount -= 6;
    // 7F3A5E24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5E28:
    ctx->pc = 0x7F3A5E28u;
    // 7F3A5E28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5E2C:
    ctx->pc = 0x7F3A5E2Cu;
    // 7F3A5E2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5E30:
    ctx->pc = 0x7F3A5E30u;
    // 7F3A5E30: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5E34:
    ctx->pc = 0x7F3A5E34u;
    // 7F3A5E34: cmpwi   r0, 3
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

label_7F3A5E38:
    ctx->pc = 0x7F3A5E38u;
    // 7F3A5E38: bc    12, 2, 0x7F3A5E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E54;
        }
    }

label_7F3A5E3C:
    ctx->pc = 0x7F3A5E3Cu;
    ctx->downcount -= 1;
    // 7F3A5E3C: bc    4, 0, 0x7F3A5E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E58;
        }
    }

label_7F3A5E40:
    ctx->pc = 0x7F3A5E40u;
    ctx->downcount -= 2;
    // 7F3A5E40: cmpwi   r0, 2
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

label_7F3A5E44:
    ctx->pc = 0x7F3A5E44u;
    // 7F3A5E44: bc    4, 0, 0x7F3A5E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E4C;
        }
    }

label_7F3A5E48:
    ctx->pc = 0x7F3A5E48u;
    ctx->downcount -= 1;
    // 7F3A5E48: b       0x7F3A5E58
    {
            goto label_7F3A5E58;
    }

label_7F3A5E4C:
    ctx->pc = 0x7F3A5E4Cu;
    ctx->downcount -= 1;
    // 7F3A5E4C: bl      0x7F3A55AC
    {
            ctx->lr = 0x7F3A5E50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A55ACu;
                return;
            }
            goto label_7F3A55AC;
    }

label_7F3A5E50:
    ctx->pc = 0x7F3A5E50u;
    ctx->downcount -= 1;
    // 7F3A5E50: b       0x7F3A5E58
    {
            goto label_7F3A5E58;
    }

label_7F3A5E54:
    ctx->pc = 0x7F3A5E54u;
    ctx->downcount -= 1;
    // 7F3A5E54: bl      0x7F3A5A50
    {
            ctx->lr = 0x7F3A5E58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5A50u;
                return;
            }
            goto label_7F3A5A50;
    }

label_7F3A5E58:
    ctx->pc = 0x7F3A5E58u;
    ctx->downcount -= 5;
    // 7F3A5E58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5E5C:
    ctx->pc = 0x7F3A5E5Cu;
    // 7F3A5E5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5E60:
    ctx->pc = 0x7F3A5E60u;
    // 7F3A5E60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5E64:
    ctx->pc = 0x7F3A5E64u;
    // 7F3A5E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5E68:
    ctx->pc = 0x7F3A5E68u;
    ctx->downcount -= 6;
    // 7F3A5E68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5E6C:
    ctx->pc = 0x7F3A5E6Cu;
    // 7F3A5E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5E70:
    ctx->pc = 0x7F3A5E70u;
    // 7F3A5E70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5E74:
    ctx->pc = 0x7F3A5E74u;
    // 7F3A5E74: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5E78:
    ctx->pc = 0x7F3A5E78u;
    // 7F3A5E78: cmpwi   r0, 3
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

label_7F3A5E7C:
    ctx->pc = 0x7F3A5E7Cu;
    // 7F3A5E7C: bc    12, 2, 0x7F3A5E98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E98;
        }
    }

label_7F3A5E80:
    ctx->pc = 0x7F3A5E80u;
    ctx->downcount -= 1;
    // 7F3A5E80: bc    4, 0, 0x7F3A5E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E9C;
        }
    }

label_7F3A5E84:
    ctx->pc = 0x7F3A5E84u;
    ctx->downcount -= 2;
    // 7F3A5E84: cmpwi   r0, 2
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

label_7F3A5E88:
    ctx->pc = 0x7F3A5E88u;
    // 7F3A5E88: bc    4, 0, 0x7F3A5E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5E90;
        }
    }

label_7F3A5E8C:
    ctx->pc = 0x7F3A5E8Cu;
    ctx->downcount -= 1;
    // 7F3A5E8C: b       0x7F3A5E9C
    {
            goto label_7F3A5E9C;
    }

label_7F3A5E90:
    ctx->pc = 0x7F3A5E90u;
    ctx->downcount -= 1;
    // 7F3A5E90: bl      0x7F3A59C0
    {
            ctx->lr = 0x7F3A5E94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A59C0u;
                return;
            }
            goto label_7F3A59C0;
    }

label_7F3A5E94:
    ctx->pc = 0x7F3A5E94u;
    ctx->downcount -= 1;
    // 7F3A5E94: b       0x7F3A5E9C
    {
            goto label_7F3A5E9C;
    }

label_7F3A5E98:
    ctx->pc = 0x7F3A5E98u;
    ctx->downcount -= 1;
    // 7F3A5E98: bl      0x7F3A5CD4
    {
            ctx->lr = 0x7F3A5E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5CD4u;
                return;
            }
            goto label_7F3A5CD4;
    }

label_7F3A5E9C:
    ctx->pc = 0x7F3A5E9Cu;
    ctx->downcount -= 5;
    // 7F3A5E9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5EA0:
    ctx->pc = 0x7F3A5EA0u;
    // 7F3A5EA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5EA4:
    ctx->pc = 0x7F3A5EA4u;
    // 7F3A5EA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5EA8:
    ctx->pc = 0x7F3A5EA8u;
    // 7F3A5EA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5EAC:
    ctx->pc = 0x7F3A5EACu;
    ctx->downcount -= 6;
    // 7F3A5EAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5EB0:
    ctx->pc = 0x7F3A5EB0u;
    // 7F3A5EB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5EB4:
    ctx->pc = 0x7F3A5EB4u;
    // 7F3A5EB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5EB8:
    ctx->pc = 0x7F3A5EB8u;
    // 7F3A5EB8: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5EBC:
    ctx->pc = 0x7F3A5EBCu;
    // 7F3A5EBC: cmpwi   r0, 4
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

label_7F3A5EC0:
    ctx->pc = 0x7F3A5EC0u;
    // 7F3A5EC0: bc    12, 2, 0x7F3A5F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F08;
        }
    }

label_7F3A5EC4:
    ctx->pc = 0x7F3A5EC4u;
    ctx->downcount -= 1;
    // 7F3A5EC4: bc    4, 0, 0x7F3A5EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5EE0;
        }
    }

label_7F3A5EC8:
    ctx->pc = 0x7F3A5EC8u;
    ctx->downcount -= 2;
    // 7F3A5EC8: cmpwi   r0, 2
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

label_7F3A5ECC:
    ctx->pc = 0x7F3A5ECCu;
    // 7F3A5ECC: bc    12, 2, 0x7F3A5EF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5EF8;
        }
    }

label_7F3A5ED0:
    ctx->pc = 0x7F3A5ED0u;
    ctx->downcount -= 1;
    // 7F3A5ED0: bc    4, 0, 0x7F3A5F00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F00;
        }
    }

label_7F3A5ED4:
    ctx->pc = 0x7F3A5ED4u;
    ctx->downcount -= 2;
    // 7F3A5ED4: cmpwi   r0, 1
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

label_7F3A5ED8:
    ctx->pc = 0x7F3A5ED8u;
    // 7F3A5ED8: bc    4, 0, 0x7F3A5EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5EF0;
        }
    }

label_7F3A5EDC:
    ctx->pc = 0x7F3A5EDCu;
    ctx->downcount -= 1;
    // 7F3A5EDC: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5EE0:
    ctx->pc = 0x7F3A5EE0u;
    ctx->downcount -= 2;
    // 7F3A5EE0: cmpwi   r0, 6
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

label_7F3A5EE4:
    ctx->pc = 0x7F3A5EE4u;
    // 7F3A5EE4: bc    12, 2, 0x7F3A5F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F18;
        }
    }

label_7F3A5EE8:
    ctx->pc = 0x7F3A5EE8u;
    ctx->downcount -= 1;
    // 7F3A5EE8: bc    4, 0, 0x7F3A5F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F1C;
        }
    }

label_7F3A5EEC:
    ctx->pc = 0x7F3A5EECu;
    ctx->downcount -= 1;
    // 7F3A5EEC: b       0x7F3A5F10
    {
            goto label_7F3A5F10;
    }

label_7F3A5EF0:
    ctx->pc = 0x7F3A5EF0u;
    ctx->downcount -= 1;
    // 7F3A5EF0: bl      0x7F3A4818
    {
            ctx->lr = 0x7F3A5EF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4818u;
                return;
            }
            goto label_7F3A4818;
    }

label_7F3A5EF4:
    ctx->pc = 0x7F3A5EF4u;
    ctx->downcount -= 1;
    // 7F3A5EF4: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5EF8:
    ctx->pc = 0x7F3A5EF8u;
    ctx->downcount -= 1;
    // 7F3A5EF8: bl      0x7F3A56F8
    {
            ctx->lr = 0x7F3A5EFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A56F8u;
                return;
            }
            goto label_7F3A56F8;
    }

label_7F3A5EFC:
    ctx->pc = 0x7F3A5EFCu;
    ctx->downcount -= 1;
    // 7F3A5EFC: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5F00:
    ctx->pc = 0x7F3A5F00u;
    ctx->downcount -= 1;
    // 7F3A5F00: bl      0x7F3A5B5C
    {
            ctx->lr = 0x7F3A5F04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5B5Cu;
                return;
            }
            goto label_7F3A5B5C;
    }

label_7F3A5F04:
    ctx->pc = 0x7F3A5F04u;
    ctx->downcount -= 1;
    // 7F3A5F04: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5F08:
    ctx->pc = 0x7F3A5F08u;
    ctx->downcount -= 1;
    // 7F3A5F08: bl      0x7F3A4998
    {
            ctx->lr = 0x7F3A5F0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4998u;
                return;
            }
            goto label_7F3A4998;
    }

label_7F3A5F0C:
    ctx->pc = 0x7F3A5F0Cu;
    ctx->downcount -= 1;
    // 7F3A5F0C: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5F10:
    ctx->pc = 0x7F3A5F10u;
    ctx->downcount -= 1;
    // 7F3A5F10: bl      0x7F3A4D1C
    {
            ctx->lr = 0x7F3A5F14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4D1Cu;
                return;
            }
            goto label_7F3A4D1C;
    }

label_7F3A5F14:
    ctx->pc = 0x7F3A5F14u;
    ctx->downcount -= 1;
    // 7F3A5F14: b       0x7F3A5F1C
    {
            goto label_7F3A5F1C;
    }

label_7F3A5F18:
    ctx->pc = 0x7F3A5F18u;
    ctx->downcount -= 1;
    // 7F3A5F18: bl      0x7F3A4EFC
    {
            ctx->lr = 0x7F3A5F1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4EFCu;
                return;
            }
            goto label_7F3A4EFC;
    }

label_7F3A5F1C:
    ctx->pc = 0x7F3A5F1Cu;
    ctx->downcount -= 5;
    // 7F3A5F1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5F20:
    ctx->pc = 0x7F3A5F20u;
    // 7F3A5F20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5F24:
    ctx->pc = 0x7F3A5F24u;
    // 7F3A5F24: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5F28:
    ctx->pc = 0x7F3A5F28u;
    // 7F3A5F28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5F2C:
    ctx->pc = 0x7F3A5F2Cu;
    ctx->downcount -= 6;
    // 7F3A5F2C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5F30:
    ctx->pc = 0x7F3A5F30u;
    // 7F3A5F30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5F34:
    ctx->pc = 0x7F3A5F34u;
    // 7F3A5F34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5F38:
    ctx->pc = 0x7F3A5F38u;
    // 7F3A5F38: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5F3C:
    ctx->pc = 0x7F3A5F3Cu;
    // 7F3A5F3C: cmpwi   r0, 7
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

label_7F3A5F40:
    ctx->pc = 0x7F3A5F40u;
    // 7F3A5F40: bc    12, 2, 0x7F3A5F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F70;
        }
    }

label_7F3A5F44:
    ctx->pc = 0x7F3A5F44u;
    ctx->downcount -= 1;
    // 7F3A5F44: bc    4, 0, 0x7F3A5F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F60;
        }
    }

label_7F3A5F48:
    ctx->pc = 0x7F3A5F48u;
    ctx->downcount -= 2;
    // 7F3A5F48: cmpwi   r0, 3
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

label_7F3A5F4C:
    ctx->pc = 0x7F3A5F4Cu;
    // 7F3A5F4C: bc    12, 2, 0x7F3A5F80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F80;
        }
    }

label_7F3A5F50:
    ctx->pc = 0x7F3A5F50u;
    ctx->downcount -= 1;
    // 7F3A5F50: bc    4, 0, 0x7F3A5F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F94;
        }
    }

label_7F3A5F54:
    ctx->pc = 0x7F3A5F54u;
    ctx->downcount -= 2;
    // 7F3A5F54: cmpwi   r0, 2
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

label_7F3A5F58:
    ctx->pc = 0x7F3A5F58u;
    // 7F3A5F58: bc    4, 0, 0x7F3A5F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F78;
        }
    }

label_7F3A5F5C:
    ctx->pc = 0x7F3A5F5Cu;
    ctx->downcount -= 1;
    // 7F3A5F5C: b       0x7F3A5F94
    {
            goto label_7F3A5F94;
    }

label_7F3A5F60:
    ctx->pc = 0x7F3A5F60u;
    ctx->downcount -= 2;
    // 7F3A5F60: cmpwi   r0, 9
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

label_7F3A5F64:
    ctx->pc = 0x7F3A5F64u;
    // 7F3A5F64: bc    12, 2, 0x7F3A5F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F90;
        }
    }

label_7F3A5F68:
    ctx->pc = 0x7F3A5F68u;
    ctx->downcount -= 1;
    // 7F3A5F68: bc    4, 0, 0x7F3A5F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5F94;
        }
    }

label_7F3A5F6C:
    ctx->pc = 0x7F3A5F6Cu;
    ctx->downcount -= 1;
    // 7F3A5F6C: b       0x7F3A5F88
    {
            goto label_7F3A5F88;
    }

label_7F3A5F70:
    ctx->pc = 0x7F3A5F70u;
    ctx->downcount -= 1;
    // 7F3A5F70: bl      0x7F3A4454
    {
            ctx->lr = 0x7F3A5F74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4454u;
                return;
            }
            goto label_7F3A4454;
    }

label_7F3A5F74:
    ctx->pc = 0x7F3A5F74u;
    ctx->downcount -= 1;
    // 7F3A5F74: b       0x7F3A5F94
    {
            goto label_7F3A5F94;
    }

label_7F3A5F78:
    ctx->pc = 0x7F3A5F78u;
    ctx->downcount -= 1;
    // 7F3A5F78: bl      0x7F3A57A8
    {
            ctx->lr = 0x7F3A5F7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A57A8u;
                return;
            }
            goto label_7F3A57A8;
    }

label_7F3A5F7C:
    ctx->pc = 0x7F3A5F7Cu;
    ctx->downcount -= 1;
    // 7F3A5F7C: b       0x7F3A5F94
    {
            goto label_7F3A5F94;
    }

label_7F3A5F80:
    ctx->pc = 0x7F3A5F80u;
    ctx->downcount -= 1;
    // 7F3A5F80: bl      0x7F3A5C18
    {
            ctx->lr = 0x7F3A5F84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5C18u;
                return;
            }
            goto label_7F3A5C18;
    }

label_7F3A5F84:
    ctx->pc = 0x7F3A5F84u;
    ctx->downcount -= 1;
    // 7F3A5F84: b       0x7F3A5F94
    {
            goto label_7F3A5F94;
    }

label_7F3A5F88:
    ctx->pc = 0x7F3A5F88u;
    ctx->downcount -= 1;
    // 7F3A5F88: bl      0x7F3A44B0
    {
            ctx->lr = 0x7F3A5F8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A44B0u;
                return;
            }
            goto label_7F3A44B0;
    }

label_7F3A5F8C:
    ctx->pc = 0x7F3A5F8Cu;
    ctx->downcount -= 1;
    // 7F3A5F8C: b       0x7F3A5F94
    {
            goto label_7F3A5F94;
    }

label_7F3A5F90:
    ctx->pc = 0x7F3A5F90u;
    ctx->downcount -= 1;
    // 7F3A5F90: bl      0x7F3A46AC
    {
            ctx->lr = 0x7F3A5F94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A46ACu;
                return;
            }
            goto label_7F3A46AC;
    }

label_7F3A5F94:
    ctx->pc = 0x7F3A5F94u;
    ctx->downcount -= 5;
    // 7F3A5F94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5F98:
    ctx->pc = 0x7F3A5F98u;
    // 7F3A5F98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5F9C:
    ctx->pc = 0x7F3A5F9Cu;
    // 7F3A5F9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5FA0:
    ctx->pc = 0x7F3A5FA0u;
    // 7F3A5FA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5FA4:
    ctx->pc = 0x7F3A5FA4u;
    ctx->downcount -= 6;
    // 7F3A5FA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A5FA8:
    ctx->pc = 0x7F3A5FA8u;
    // 7F3A5FA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A5FAC:
    ctx->pc = 0x7F3A5FACu;
    // 7F3A5FAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A5FB0:
    ctx->pc = 0x7F3A5FB0u;
    // 7F3A5FB0: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A5FB4:
    ctx->pc = 0x7F3A5FB4u;
    // 7F3A5FB4: cmpwi   r0, 5
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

label_7F3A5FB8:
    ctx->pc = 0x7F3A5FB8u;
    // 7F3A5FB8: bc    12, 2, 0x7F3A5FE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5FE0;
        }
    }

label_7F3A5FBC:
    ctx->pc = 0x7F3A5FBCu;
    ctx->downcount -= 1;
    // 7F3A5FBC: bc    4, 0, 0x7F3A5FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5FCC;
        }
    }

label_7F3A5FC0:
    ctx->pc = 0x7F3A5FC0u;
    ctx->downcount -= 2;
    // 7F3A5FC0: cmpwi   r0, 4
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

label_7F3A5FC4:
    ctx->pc = 0x7F3A5FC4u;
    // 7F3A5FC4: bc    4, 0, 0x7F3A5FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5FD8;
        }
    }

label_7F3A5FC8:
    ctx->pc = 0x7F3A5FC8u;
    ctx->downcount -= 1;
    // 7F3A5FC8: b       0x7F3A5FEC
    {
            goto label_7F3A5FEC;
    }

label_7F3A5FCC:
    ctx->pc = 0x7F3A5FCCu;
    ctx->downcount -= 2;
    // 7F3A5FCC: cmpwi   r0, 7
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

label_7F3A5FD0:
    ctx->pc = 0x7F3A5FD0u;
    // 7F3A5FD0: bc    4, 0, 0x7F3A5FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A5FEC;
        }
    }

label_7F3A5FD4:
    ctx->pc = 0x7F3A5FD4u;
    ctx->downcount -= 1;
    // 7F3A5FD4: b       0x7F3A5FE8
    {
            goto label_7F3A5FE8;
    }

label_7F3A5FD8:
    ctx->pc = 0x7F3A5FD8u;
    ctx->downcount -= 1;
    // 7F3A5FD8: bl      0x7F3A50A8
    {
            ctx->lr = 0x7F3A5FDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A50A8u;
                return;
            }
            goto label_7F3A50A8;
    }

label_7F3A5FDC:
    ctx->pc = 0x7F3A5FDCu;
    ctx->downcount -= 1;
    // 7F3A5FDC: b       0x7F3A5FEC
    {
            goto label_7F3A5FEC;
    }

label_7F3A5FE0:
    ctx->pc = 0x7F3A5FE0u;
    ctx->downcount -= 1;
    // 7F3A5FE0: bl      0x7F3A4D1C
    {
            ctx->lr = 0x7F3A5FE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4D1Cu;
                return;
            }
            goto label_7F3A4D1C;
    }

label_7F3A5FE4:
    ctx->pc = 0x7F3A5FE4u;
    ctx->downcount -= 1;
    // 7F3A5FE4: b       0x7F3A5FEC
    {
            goto label_7F3A5FEC;
    }

label_7F3A5FE8:
    ctx->pc = 0x7F3A5FE8u;
    ctx->downcount -= 1;
    // 7F3A5FE8: bl      0x7F3A4EFC
    {
            ctx->lr = 0x7F3A5FECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4EFCu;
                return;
            }
            goto label_7F3A4EFC;
    }

label_7F3A5FEC:
    ctx->pc = 0x7F3A5FECu;
    ctx->downcount -= 5;
    // 7F3A5FEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A5FF0:
    ctx->pc = 0x7F3A5FF0u;
    // 7F3A5FF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A5FF4:
    ctx->pc = 0x7F3A5FF4u;
    // 7F3A5FF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A5FF8:
    ctx->pc = 0x7F3A5FF8u;
    // 7F3A5FF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A5FFC:
    ctx->pc = 0x7F3A5FFCu;
    ctx->downcount -= 6;
    // 7F3A5FFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6000:
    ctx->pc = 0x7F3A6000u;
    // 7F3A6000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6004:
    ctx->pc = 0x7F3A6004u;
    // 7F3A6004: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6008:
    ctx->pc = 0x7F3A6008u;
    // 7F3A6008: lha     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A600C:
    ctx->pc = 0x7F3A600Cu;
    // 7F3A600C: cmpwi   r0, 5
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

label_7F3A6010:
    ctx->pc = 0x7F3A6010u;
    // 7F3A6010: bc    12, 2, 0x7F3A6038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6038;
        }
    }

label_7F3A6014:
    ctx->pc = 0x7F3A6014u;
    ctx->downcount -= 1;
    // 7F3A6014: bc    4, 0, 0x7F3A6024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6024;
        }
    }

label_7F3A6018:
    ctx->pc = 0x7F3A6018u;
    ctx->downcount -= 2;
    // 7F3A6018: cmpwi   r0, 4
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

label_7F3A601C:
    ctx->pc = 0x7F3A601Cu;
    // 7F3A601C: bc    4, 0, 0x7F3A6030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6030;
        }
    }

label_7F3A6020:
    ctx->pc = 0x7F3A6020u;
    ctx->downcount -= 1;
    // 7F3A6020: b       0x7F3A6044
    {
            goto label_7F3A6044;
    }

label_7F3A6024:
    ctx->pc = 0x7F3A6024u;
    ctx->downcount -= 2;
    // 7F3A6024: cmpwi   r0, 7
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

label_7F3A6028:
    ctx->pc = 0x7F3A6028u;
    // 7F3A6028: bc    4, 0, 0x7F3A6044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6044;
        }
    }

label_7F3A602C:
    ctx->pc = 0x7F3A602Cu;
    ctx->downcount -= 1;
    // 7F3A602C: b       0x7F3A6040
    {
            goto label_7F3A6040;
    }

label_7F3A6030:
    ctx->pc = 0x7F3A6030u;
    ctx->downcount -= 1;
    // 7F3A6030: bl      0x7F3A5470
    {
            ctx->lr = 0x7F3A6034u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5470u;
                return;
            }
            goto label_7F3A5470;
    }

label_7F3A6034:
    ctx->pc = 0x7F3A6034u;
    ctx->downcount -= 1;
    // 7F3A6034: b       0x7F3A6044
    {
            goto label_7F3A6044;
    }

label_7F3A6038:
    ctx->pc = 0x7F3A6038u;
    ctx->downcount -= 1;
    // 7F3A6038: bl      0x7F3A4D1C
    {
            ctx->lr = 0x7F3A603Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4D1Cu;
                return;
            }
            goto label_7F3A4D1C;
    }

label_7F3A603C:
    ctx->pc = 0x7F3A603Cu;
    ctx->downcount -= 1;
    // 7F3A603C: b       0x7F3A6044
    {
            goto label_7F3A6044;
    }

label_7F3A6040:
    ctx->pc = 0x7F3A6040u;
    ctx->downcount -= 1;
    // 7F3A6040: bl      0x7F3A4EFC
    {
            ctx->lr = 0x7F3A6044u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A4EFCu;
                return;
            }
            goto label_7F3A4EFC;
    }

label_7F3A6044:
    ctx->pc = 0x7F3A6044u;
    ctx->downcount -= 5;
    // 7F3A6044: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6048:
    ctx->pc = 0x7F3A6048u;
    // 7F3A6048: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A604C:
    ctx->pc = 0x7F3A604Cu;
    // 7F3A604C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6050:
    ctx->pc = 0x7F3A6050u;
    // 7F3A6050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6054:
    ctx->pc = 0x7F3A6054u;
    ctx->downcount -= 6;
    // 7F3A6054: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6058:
    ctx->pc = 0x7F3A6058u;
    // 7F3A6058: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A605C:
    ctx->pc = 0x7F3A605Cu;
    // 7F3A605C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6060:
    ctx->pc = 0x7F3A6060u;
    // 7F3A6060: lha     r0, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6064:
    ctx->pc = 0x7F3A6064u;
    // 7F3A6064: cmpwi   r0, 0
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

label_7F3A6068:
    ctx->pc = 0x7F3A6068u;
    // 7F3A6068: bc    12, 2, 0x7F3A6070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6070;
        }
    }

label_7F3A606C:
    ctx->pc = 0x7F3A606Cu;
    ctx->downcount -= 1;
    // 7F3A606C: b       0x7F3A6074
    {
            goto label_7F3A6074;
    }

label_7F3A6070:
    ctx->pc = 0x7F3A6070u;
    ctx->downcount -= 1;
    // 7F3A6070: bl      0x7F3A5DB0
    {
            ctx->lr = 0x7F3A6074u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5DB0u;
                return;
            }
            goto label_7F3A5DB0;
    }

label_7F3A6074:
    ctx->pc = 0x7F3A6074u;
    ctx->downcount -= 5;
    // 7F3A6074: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6078:
    ctx->pc = 0x7F3A6078u;
    // 7F3A6078: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A607C:
    ctx->pc = 0x7F3A607Cu;
    // 7F3A607C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6080:
    ctx->pc = 0x7F3A6080u;
    // 7F3A6080: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6084:
    ctx->pc = 0x7F3A6084u;
    ctx->downcount -= 6;
    // 7F3A6084: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6088:
    ctx->pc = 0x7F3A6088u;
    // 7F3A6088: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A608C:
    ctx->pc = 0x7F3A608Cu;
    // 7F3A608C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6090:
    ctx->pc = 0x7F3A6090u;
    // 7F3A6090: lha     r0, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6094:
    ctx->pc = 0x7F3A6094u;
    // 7F3A6094: cmpwi   r0, 3
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

label_7F3A6098:
    ctx->pc = 0x7F3A6098u;
    // 7F3A6098: bc    12, 2, 0x7F3A60B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A60B4;
        }
    }

label_7F3A609C:
    ctx->pc = 0x7F3A609Cu;
    ctx->downcount -= 1;
    // 7F3A609C: bc    4, 0, 0x7F3A60B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A60B8;
        }
    }

label_7F3A60A0:
    ctx->pc = 0x7F3A60A0u;
    ctx->downcount -= 2;
    // 7F3A60A0: cmpwi   r0, 2
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

label_7F3A60A4:
    ctx->pc = 0x7F3A60A4u;
    // 7F3A60A4: bc    4, 0, 0x7F3A60AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A60AC;
        }
    }

label_7F3A60A8:
    ctx->pc = 0x7F3A60A8u;
    ctx->downcount -= 1;
    // 7F3A60A8: b       0x7F3A60B8
    {
            goto label_7F3A60B8;
    }

label_7F3A60AC:
    ctx->pc = 0x7F3A60ACu;
    ctx->downcount -= 1;
    // 7F3A60AC: bl      0x7F3A5EAC
    {
            ctx->lr = 0x7F3A60B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5EACu;
                return;
            }
            goto label_7F3A5EAC;
    }

label_7F3A60B0:
    ctx->pc = 0x7F3A60B0u;
    ctx->downcount -= 1;
    // 7F3A60B0: b       0x7F3A60B8
    {
            goto label_7F3A60B8;
    }

label_7F3A60B4:
    ctx->pc = 0x7F3A60B4u;
    ctx->downcount -= 1;
    // 7F3A60B4: bl      0x7F3A5F2C
    {
            ctx->lr = 0x7F3A60B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5F2Cu;
                return;
            }
            goto label_7F3A5F2C;
    }

label_7F3A60B8:
    ctx->pc = 0x7F3A60B8u;
    ctx->downcount -= 5;
    // 7F3A60B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A60BC:
    ctx->pc = 0x7F3A60BCu;
    // 7F3A60BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A60C0:
    ctx->pc = 0x7F3A60C0u;
    // 7F3A60C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A60C4:
    ctx->pc = 0x7F3A60C4u;
    // 7F3A60C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A60C8:
    ctx->pc = 0x7F3A60C8u;
    ctx->downcount -= 6;
    // 7F3A60C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A60CC:
    ctx->pc = 0x7F3A60CCu;
    // 7F3A60CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A60D0:
    ctx->pc = 0x7F3A60D0u;
    // 7F3A60D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A60D4:
    ctx->pc = 0x7F3A60D4u;
    // 7F3A60D4: lha     r0, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A60D8:
    ctx->pc = 0x7F3A60D8u;
    // 7F3A60D8: cmpwi   r0, 2
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

label_7F3A60DC:
    ctx->pc = 0x7F3A60DCu;
    // 7F3A60DC: bc    12, 2, 0x7F3A6104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6104;
        }
    }

label_7F3A60E0:
    ctx->pc = 0x7F3A60E0u;
    ctx->downcount -= 1;
    // 7F3A60E0: bc    4, 0, 0x7F3A60F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A60F0;
        }
    }

label_7F3A60E4:
    ctx->pc = 0x7F3A60E4u;
    ctx->downcount -= 2;
    // 7F3A60E4: cmpwi   r0, 1
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

label_7F3A60E8:
    ctx->pc = 0x7F3A60E8u;
    // 7F3A60E8: bc    4, 0, 0x7F3A60FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A60FC;
        }
    }

label_7F3A60EC:
    ctx->pc = 0x7F3A60ECu;
    ctx->downcount -= 1;
    // 7F3A60EC: b       0x7F3A6110
    {
            goto label_7F3A6110;
    }

label_7F3A60F0:
    ctx->pc = 0x7F3A60F0u;
    ctx->downcount -= 2;
    // 7F3A60F0: cmpwi   r0, 4
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

label_7F3A60F4:
    ctx->pc = 0x7F3A60F4u;
    // 7F3A60F4: bc    4, 0, 0x7F3A6110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6110;
        }
    }

label_7F3A60F8:
    ctx->pc = 0x7F3A60F8u;
    ctx->downcount -= 1;
    // 7F3A60F8: b       0x7F3A610C
    {
            goto label_7F3A610C;
    }

label_7F3A60FC:
    ctx->pc = 0x7F3A60FCu;
    ctx->downcount -= 1;
    // 7F3A60FC: bl      0x7F3A5E24
    {
            ctx->lr = 0x7F3A6100u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5E24u;
                return;
            }
            goto label_7F3A5E24;
    }

label_7F3A6100:
    ctx->pc = 0x7F3A6100u;
    ctx->downcount -= 1;
    // 7F3A6100: b       0x7F3A6110
    {
            goto label_7F3A6110;
    }

label_7F3A6104:
    ctx->pc = 0x7F3A6104u;
    ctx->downcount -= 1;
    // 7F3A6104: bl      0x7F3A5FA4
    {
            ctx->lr = 0x7F3A6108u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5FA4u;
                return;
            }
            goto label_7F3A5FA4;
    }

label_7F3A6108:
    ctx->pc = 0x7F3A6108u;
    ctx->downcount -= 1;
    // 7F3A6108: b       0x7F3A6110
    {
            goto label_7F3A6110;
    }

label_7F3A610C:
    ctx->pc = 0x7F3A610Cu;
    ctx->downcount -= 1;
    // 7F3A610C: bl      0x7F3A5F2C
    {
            ctx->lr = 0x7F3A6110u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5F2Cu;
                return;
            }
            goto label_7F3A5F2C;
    }

label_7F3A6110:
    ctx->pc = 0x7F3A6110u;
    ctx->downcount -= 5;
    // 7F3A6110: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6114:
    ctx->pc = 0x7F3A6114u;
    // 7F3A6114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6118:
    ctx->pc = 0x7F3A6118u;
    // 7F3A6118: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A611C:
    ctx->pc = 0x7F3A611Cu;
    // 7F3A611C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6120:
    ctx->pc = 0x7F3A6120u;
    ctx->downcount -= 6;
    // 7F3A6120: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6124:
    ctx->pc = 0x7F3A6124u;
    // 7F3A6124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6128:
    ctx->pc = 0x7F3A6128u;
    // 7F3A6128: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A612C:
    ctx->pc = 0x7F3A612Cu;
    // 7F3A612C: lha     r0, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6130:
    ctx->pc = 0x7F3A6130u;
    // 7F3A6130: cmpwi   r0, 2
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

label_7F3A6134:
    ctx->pc = 0x7F3A6134u;
    // 7F3A6134: bc    12, 2, 0x7F3A6168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6168;
        }
    }

label_7F3A6138:
    ctx->pc = 0x7F3A6138u;
    ctx->downcount -= 1;
    // 7F3A6138: bc    4, 0, 0x7F3A614C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A614C;
        }
    }

label_7F3A613C:
    ctx->pc = 0x7F3A613Cu;
    ctx->downcount -= 2;
    // 7F3A613C: cmpwi   r0, 0
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

label_7F3A6140:
    ctx->pc = 0x7F3A6140u;
    // 7F3A6140: bc    12, 2, 0x7F3A6158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6158;
        }
    }

label_7F3A6144:
    ctx->pc = 0x7F3A6144u;
    ctx->downcount -= 1;
    // 7F3A6144: bc    4, 0, 0x7F3A6160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6160;
        }
    }

label_7F3A6148:
    ctx->pc = 0x7F3A6148u;
    ctx->downcount -= 1;
    // 7F3A6148: b       0x7F3A6174
    {
            goto label_7F3A6174;
    }

label_7F3A614C:
    ctx->pc = 0x7F3A614Cu;
    ctx->downcount -= 2;
    // 7F3A614C: cmpwi   r0, 4
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

label_7F3A6150:
    ctx->pc = 0x7F3A6150u;
    // 7F3A6150: bc    4, 0, 0x7F3A6174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6174;
        }
    }

label_7F3A6154:
    ctx->pc = 0x7F3A6154u;
    ctx->downcount -= 1;
    // 7F3A6154: b       0x7F3A6170
    {
            goto label_7F3A6170;
    }

label_7F3A6158:
    ctx->pc = 0x7F3A6158u;
    ctx->downcount -= 1;
    // 7F3A6158: bl      0x7F3A5DE0
    {
            ctx->lr = 0x7F3A615Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5DE0u;
                return;
            }
            goto label_7F3A5DE0;
    }

label_7F3A615C:
    ctx->pc = 0x7F3A615Cu;
    ctx->downcount -= 1;
    // 7F3A615C: b       0x7F3A6174
    {
            goto label_7F3A6174;
    }

label_7F3A6160:
    ctx->pc = 0x7F3A6160u;
    ctx->downcount -= 1;
    // 7F3A6160: bl      0x7F3A5E68
    {
            ctx->lr = 0x7F3A6164u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5E68u;
                return;
            }
            goto label_7F3A5E68;
    }

label_7F3A6164:
    ctx->pc = 0x7F3A6164u;
    ctx->downcount -= 1;
    // 7F3A6164: b       0x7F3A6174
    {
            goto label_7F3A6174;
    }

label_7F3A6168:
    ctx->pc = 0x7F3A6168u;
    ctx->downcount -= 1;
    // 7F3A6168: bl      0x7F3A5FFC
    {
            ctx->lr = 0x7F3A616Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5FFCu;
                return;
            }
            goto label_7F3A5FFC;
    }

label_7F3A616C:
    ctx->pc = 0x7F3A616Cu;
    ctx->downcount -= 1;
    // 7F3A616C: b       0x7F3A6174
    {
            goto label_7F3A6174;
    }

label_7F3A6170:
    ctx->pc = 0x7F3A6170u;
    ctx->downcount -= 1;
    // 7F3A6170: bl      0x7F3A5F2C
    {
            ctx->lr = 0x7F3A6174u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A5F2Cu;
                return;
            }
            goto label_7F3A5F2C;
    }

label_7F3A6174:
    ctx->pc = 0x7F3A6174u;
    ctx->downcount -= 5;
    // 7F3A6174: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6178:
    ctx->pc = 0x7F3A6178u;
    // 7F3A6178: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A617C:
    ctx->pc = 0x7F3A617Cu;
    // 7F3A617C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6180:
    ctx->pc = 0x7F3A6180u;
    // 7F3A6180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6184:
    ctx->pc = 0x7F3A6184u;
    ctx->downcount -= 12;
    // 7F3A6184: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6188:
    ctx->pc = 0x7F3A6188u;
    // 7F3A6188: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A618C:
    ctx->pc = 0x7F3A618Cu;
    // 7F3A618C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6190:
    ctx->pc = 0x7F3A6190u;
    // 7F3A6190: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A6194:
    ctx->pc = 0x7F3A6194u;
    // 7F3A6194: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6198:
    ctx->pc = 0x7F3A6198u;
    // 7F3A6198: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A619C:
    ctx->pc = 0x7F3A619Cu;
    // 7F3A619C: sth     r0, 4854(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A61A0:
    ctx->pc = 0x7F3A61A0u;
    // 7F3A61A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A61A4:
    ctx->pc = 0x7F3A61A4u;
    // 7F3A61A4: stw     r0, 4840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A61A8:
    ctx->pc = 0x7F3A61A8u;
    // 7F3A61A8: lha     r0, 4824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4824);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A61AC:
    ctx->pc = 0x7F3A61ACu;
    // 7F3A61AC: cmpwi   r0, 2
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

label_7F3A61B0:
    ctx->pc = 0x7F3A61B0u;
    // 7F3A61B0: bc    12, 2, 0x7F3A61E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A61E4;
        }
    }

label_7F3A61B4:
    ctx->pc = 0x7F3A61B4u;
    ctx->downcount -= 1;
    // 7F3A61B4: bc    4, 0, 0x7F3A61C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A61C8;
        }
    }

label_7F3A61B8:
    ctx->pc = 0x7F3A61B8u;
    ctx->downcount -= 2;
    // 7F3A61B8: cmpwi   r0, 0
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

label_7F3A61BC:
    ctx->pc = 0x7F3A61BCu;
    // 7F3A61BC: bc    12, 2, 0x7F3A61D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A61D4;
        }
    }

label_7F3A61C0:
    ctx->pc = 0x7F3A61C0u;
    ctx->downcount -= 1;
    // 7F3A61C0: bc    4, 0, 0x7F3A61DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A61DC;
        }
    }

label_7F3A61C4:
    ctx->pc = 0x7F3A61C4u;
    ctx->downcount -= 1;
    // 7F3A61C4: b       0x7F3A61F0
    {
            goto label_7F3A61F0;
    }

label_7F3A61C8:
    ctx->pc = 0x7F3A61C8u;
    ctx->downcount -= 2;
    // 7F3A61C8: cmpwi   r0, 4
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

label_7F3A61CC:
    ctx->pc = 0x7F3A61CCu;
    // 7F3A61CC: bc    4, 0, 0x7F3A61F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A61F0;
        }
    }

label_7F3A61D0:
    ctx->pc = 0x7F3A61D0u;
    ctx->downcount -= 1;
    // 7F3A61D0: b       0x7F3A61EC
    {
            goto label_7F3A61EC;
    }

label_7F3A61D4:
    ctx->pc = 0x7F3A61D4u;
    ctx->downcount -= 1;
    // 7F3A61D4: bl      0x7F3A6054
    {
            ctx->lr = 0x7F3A61D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6054u;
                return;
            }
            goto label_7F3A6054;
    }

label_7F3A61D8:
    ctx->pc = 0x7F3A61D8u;
    ctx->downcount -= 1;
    // 7F3A61D8: b       0x7F3A61F0
    {
            goto label_7F3A61F0;
    }

label_7F3A61DC:
    ctx->pc = 0x7F3A61DCu;
    ctx->downcount -= 1;
    // 7F3A61DC: bl      0x7F3A6084
    {
            ctx->lr = 0x7F3A61E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6084u;
                return;
            }
            goto label_7F3A6084;
    }

label_7F3A61E0:
    ctx->pc = 0x7F3A61E0u;
    ctx->downcount -= 1;
    // 7F3A61E0: b       0x7F3A61F0
    {
            goto label_7F3A61F0;
    }

label_7F3A61E4:
    ctx->pc = 0x7F3A61E4u;
    ctx->downcount -= 1;
    // 7F3A61E4: bl      0x7F3A60C8
    {
            ctx->lr = 0x7F3A61E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A60C8u;
                return;
            }
            goto label_7F3A60C8;
    }

label_7F3A61E8:
    ctx->pc = 0x7F3A61E8u;
    ctx->downcount -= 1;
    // 7F3A61E8: b       0x7F3A61F0
    {
            goto label_7F3A61F0;
    }

label_7F3A61EC:
    ctx->pc = 0x7F3A61ECu;
    ctx->downcount -= 1;
    // 7F3A61EC: bl      0x7F3A6120
    {
            ctx->lr = 0x7F3A61F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6120u;
                return;
            }
            goto label_7F3A6120;
    }

label_7F3A61F0:
    ctx->pc = 0x7F3A61F0u;
    ctx->downcount -= 5;
    // 7F3A61F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A61F4:
    ctx->pc = 0x7F3A61F4u;
    // 7F3A61F4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A61F8:
    ctx->pc = 0x7F3A61F8u;
    // 7F3A61F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A61FC:
    ctx->pc = 0x7F3A61FCu;
    // 7F3A61FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A6200:
    ctx->downcount -= 7;
    // 7F3A6200: addi    r6, r3, 5300
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(5300);

label_7F3A6204:
    ctx->pc = 0x7F3A6204u;
    // 7F3A6204: lwzx    r5, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6208:
    // 7F3A6208: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F3A620C:
    ctx->pc = 0x7F3A620Cu;
    // 7F3A620C: stwx    r0, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6210:
    ctx->pc = 0x7F3A6210u;
    // 7F3A6210: lwzx    r0, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6214:
    // 7F3A6214: cmpwi   r0, 0
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

label_7F3A6218:
    // 7F3A6218: bc    4, 0, 0x7F3A6220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6220;
        }
    }

label_7F3A621C:
    ctx->pc = 0x7F3A621Cu;
    ctx->downcount -= 1;
    // 7F3A621C: stwx    r4, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6220:
    ctx->downcount -= 2;
    // 7F3A6220: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3A6224:
    // 7F3A6224: bc    16, 0, 0x7F3A6200
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6200u;
                return;
            }
            goto label_7F3A6200;
        }
    }

label_7F3A6228:
    ctx->pc = 0x7F3A6228u;
    ctx->downcount -= 6;
    // 7F3A6228: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A622C:
    ctx->pc = 0x7F3A622Cu;
    // 7F3A622C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6230:
    ctx->pc = 0x7F3A6230u;
    // 7F3A6230: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6234:
    ctx->pc = 0x7F3A6234u;
    // 7F3A6234: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6238:
    ctx->pc = 0x7F3A6238u;
    // 7F3A6238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A623C:
    ctx->pc = 0x7F3A623Cu;
    ctx->downcount -= 4;
    // 7F3A623C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A6240:
    ctx->pc = 0x7F3A6240u;
    // 7F3A6240: addi    r3, r3, 15432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15432);

label_7F3A6244:
    ctx->pc = 0x7F3A6244u;
    // 7F3A6244: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6248:
    ctx->pc = 0x7F3A6248u;
    // 7F3A6248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A624C:
    ctx->pc = 0x7F3A624Cu;
    ctx->downcount -= 9;
    // 7F3A624C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6250:
    ctx->pc = 0x7F3A6250u;
    // 7F3A6250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6254:
    ctx->pc = 0x7F3A6254u;
    // 7F3A6254: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6258:
    ctx->pc = 0x7F3A6258u;
    // 7F3A6258: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A625C:
    ctx->pc = 0x7F3A625Cu;
    // 7F3A625C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6260:
    ctx->pc = 0x7F3A6260u;
    // 7F3A6260: lwz     r0, 4264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6264:
    ctx->pc = 0x7F3A6264u;
    // 7F3A6264: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F3A6268:
    ctx->pc = 0x7F3A6268u;
    // 7F3A6268: stw     r0, 4264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A626C:
    ctx->pc = 0x7F3A626Cu;
    // 7F3A626C: bl      0x7F3A62CC
    {
            ctx->lr = 0x7F3A6270u;
            goto label_7F3A62CC;
    }

label_7F3A6270:
    ctx->pc = 0x7F3A6270u;
    ctx->downcount -= 2;
    // 7F3A6270: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6274:
    ctx->pc = 0x7F3A6274u;
    // 7F3A6274: bl      0x7F3A6394
    {
            ctx->lr = 0x7F3A6278u;
            goto label_7F3A6394;
    }

label_7F3A6278:
    ctx->pc = 0x7F3A6278u;
    ctx->downcount -= 6;
    // 7F3A6278: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A627C:
    ctx->pc = 0x7F3A627Cu;
    // 7F3A627C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6280:
    ctx->pc = 0x7F3A6280u;
    // 7F3A6280: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6284:
    ctx->pc = 0x7F3A6284u;
    // 7F3A6284: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6288:
    ctx->pc = 0x7F3A6288u;
    // 7F3A6288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A628C:
    ctx->pc = 0x7F3A628Cu;
    ctx->downcount -= 9;
    // 7F3A628C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6290:
    ctx->pc = 0x7F3A6290u;
    // 7F3A6290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6294:
    ctx->pc = 0x7F3A6294u;
    // 7F3A6294: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6298:
    ctx->pc = 0x7F3A6298u;
    // 7F3A6298: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A629C:
    ctx->pc = 0x7F3A629Cu;
    // 7F3A629C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A62A0:
    ctx->pc = 0x7F3A62A0u;
    // 7F3A62A0: lwz     r0, 4264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A62A4:
    ctx->pc = 0x7F3A62A4u;
    // 7F3A62A4: rlwinm r0, r0, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFDFu;
    }

label_7F3A62A8:
    ctx->pc = 0x7F3A62A8u;
    // 7F3A62A8: stw     r0, 4264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A62AC:
    ctx->pc = 0x7F3A62ACu;
    // 7F3A62AC: bl      0x7F3A63D8
    {
            ctx->lr = 0x7F3A62B0u;
            goto label_7F3A63D8;
    }

label_7F3A62B0:
    ctx->pc = 0x7F3A62B0u;
    ctx->downcount -= 2;
    // 7F3A62B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A62B4:
    ctx->pc = 0x7F3A62B4u;
    // 7F3A62B4: bl      0x7F3A643C
    {
            ctx->lr = 0x7F3A62B8u;
            goto label_7F3A643C;
    }

label_7F3A62B8:
    ctx->pc = 0x7F3A62B8u;
    ctx->downcount -= 6;
    // 7F3A62B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A62BC:
    ctx->pc = 0x7F3A62BCu;
    // 7F3A62BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A62C0:
    ctx->pc = 0x7F3A62C0u;
    // 7F3A62C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A62C4:
    ctx->pc = 0x7F3A62C4u;
    // 7F3A62C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A62C8:
    ctx->pc = 0x7F3A62C8u;
    // 7F3A62C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A62CC:
    ctx->pc = 0x7F3A62CCu;
    ctx->downcount -= 18;
    // 7F3A62CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A62D0:
    ctx->pc = 0x7F3A62D0u;
    // 7F3A62D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A62D4:
    ctx->pc = 0x7F3A62D4u;
    // 7F3A62D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A62D8:
    ctx->pc = 0x7F3A62D8u;
    // 7F3A62D8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A62DC:
    ctx->pc = 0x7F3A62DCu;
    // 7F3A62DC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A62E0:
    ctx->pc = 0x7F3A62E0u;
    // 7F3A62E0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3A62E4:
    ctx->pc = 0x7F3A62E4u;
    // 7F3A62E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A62E8:
    ctx->pc = 0x7F3A62E8u;
    // 7F3A62E8: lis     r30, 512
    ctx->gpr[30] = ((u32)(s32)(512) << 16);

label_7F3A62EC:
    ctx->downcount -= 5;
    // 7F3A62EC: addi    r29, r31, 864
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A62F0:
    // 7F3A62F0: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F3A62F4:
    // 7F3A62F4: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3A62F8:
    // 7F3A62F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A62FC:
    // 7F3A62FC: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F3A6300u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F3A6300:
    ctx->downcount -= 3;
    // 7F3A6300: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6304:
    // 7F3A6304: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F3A6308:
    // 7F3A6308: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F3A630Cu;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F3A630C:
    ctx->downcount -= 4;
    // 7F3A630C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3A6310:
    // 7F3A6310: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F3A6314:
    // 7F3A6314: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A6318:
    // 7F3A6318: bc    12, 0, 0x7F3A62EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A62ECu;
                return;
            }
            goto label_7F3A62EC;
        }
    }

label_7F3A631C:
    ctx->pc = 0x7F3A631Cu;
    ctx->downcount -= 16;
    // 7F3A631C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6320:
    ctx->pc = 0x7F3A6320u;
    // 7F3A6320: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6324:
    ctx->pc = 0x7F3A6324u;
    // 7F3A6324: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6328:
    ctx->pc = 0x7F3A6328u;
    // 7F3A6328: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A632C:
    ctx->pc = 0x7F3A632Cu;
    // 7F3A632C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6330:
    ctx->pc = 0x7F3A6330u;
    ctx->downcount -= 18;
    // 7F3A6330: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6334:
    ctx->pc = 0x7F3A6334u;
    // 7F3A6334: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6338:
    ctx->pc = 0x7F3A6338u;
    // 7F3A6338: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A633C:
    ctx->pc = 0x7F3A633Cu;
    // 7F3A633C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6340:
    ctx->pc = 0x7F3A6340u;
    // 7F3A6340: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6344:
    ctx->pc = 0x7F3A6344u;
    // 7F3A6344: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3A6348:
    ctx->pc = 0x7F3A6348u;
    // 7F3A6348: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A634C:
    ctx->pc = 0x7F3A634Cu;
    // 7F3A634C: lis     r30, 520
    ctx->gpr[30] = ((u32)(s32)(520) << 16);

label_7F3A6350:
    ctx->downcount -= 5;
    // 7F3A6350: addi    r29, r31, 864
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A6354:
    // 7F3A6354: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F3A6358:
    // 7F3A6358: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3A635C:
    // 7F3A635C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6360:
    // 7F3A6360: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F3A6364u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F3A6364:
    ctx->downcount -= 3;
    // 7F3A6364: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6368:
    // 7F3A6368: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A636C:
    // 7F3A636C: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F3A6370u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F3A6370:
    ctx->downcount -= 4;
    // 7F3A6370: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3A6374:
    // 7F3A6374: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F3A6378:
    // 7F3A6378: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A637C:
    // 7F3A637C: bc    12, 0, 0x7F3A6350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6350u;
                return;
            }
            goto label_7F3A6350;
        }
    }

label_7F3A6380:
    ctx->pc = 0x7F3A6380u;
    ctx->downcount -= 16;
    // 7F3A6380: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6384:
    ctx->pc = 0x7F3A6384u;
    // 7F3A6384: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6388:
    ctx->pc = 0x7F3A6388u;
    // 7F3A6388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A638C:
    ctx->pc = 0x7F3A638Cu;
    // 7F3A638C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A6390:
    ctx->pc = 0x7F3A6390u;
    // 7F3A6390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6394:
    ctx->pc = 0x7F3A6394u;
    ctx->downcount -= 8;
    // 7F3A6394: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6398:
    ctx->pc = 0x7F3A6398u;
    // 7F3A6398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A639C:
    ctx->pc = 0x7F3A639Cu;
    // 7F3A639C: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F3A63A0:
    ctx->pc = 0x7F3A63A0u;
    // 7F3A63A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A63A4:
    ctx->pc = 0x7F3A63A4u;
    // 7F3A63A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A63A8:
    ctx->pc = 0x7F3A63A8u;
    // 7F3A63A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A63AC:
    ctx->pc = 0x7F3A63ACu;
    // 7F3A63AC: addi    r3, r31, 3744
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F3A63B0:
    ctx->pc = 0x7F3A63B0u;
    // 7F3A63B0: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F3A63B4u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F3A63B4:
    ctx->pc = 0x7F3A63B4u;
    ctx->downcount -= 4;
    // 7F3A63B4: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F3A63B8:
    ctx->pc = 0x7F3A63B8u;
    // 7F3A63B8: addi    r3, r31, 3744
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F3A63BC:
    ctx->pc = 0x7F3A63BCu;
    // 7F3A63BC: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F3A63C0:
    ctx->pc = 0x7F3A63C0u;
    // 7F3A63C0: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F3A63C4u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F3A63C4:
    ctx->pc = 0x7F3A63C4u;
    ctx->downcount -= 6;
    // 7F3A63C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A63C8:
    ctx->pc = 0x7F3A63C8u;
    // 7F3A63C8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A63CC:
    ctx->pc = 0x7F3A63CCu;
    // 7F3A63CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A63D0:
    ctx->pc = 0x7F3A63D0u;
    // 7F3A63D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A63D4:
    ctx->pc = 0x7F3A63D4u;
    // 7F3A63D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A63D8:
    ctx->pc = 0x7F3A63D8u;
    ctx->downcount -= 18;
    // 7F3A63D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A63DC:
    ctx->pc = 0x7F3A63DCu;
    // 7F3A63DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A63E0:
    ctx->pc = 0x7F3A63E0u;
    // 7F3A63E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A63E4:
    ctx->pc = 0x7F3A63E4u;
    // 7F3A63E4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A63E8:
    ctx->pc = 0x7F3A63E8u;
    // 7F3A63E8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A63EC:
    ctx->pc = 0x7F3A63ECu;
    // 7F3A63EC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F3A63F0:
    ctx->pc = 0x7F3A63F0u;
    // 7F3A63F0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A63F4:
    ctx->pc = 0x7F3A63F4u;
    // 7F3A63F4: lis     r30, 512
    ctx->gpr[30] = ((u32)(s32)(512) << 16);

label_7F3A63F8:
    ctx->downcount -= 5;
    // 7F3A63F8: addi    r29, r31, 864
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A63FC:
    // 7F3A63FC: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F3A6400:
    // 7F3A6400: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F3A6404:
    // 7F3A6404: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6408:
    // 7F3A6408: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F3A640Cu;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F3A640C:
    ctx->downcount -= 3;
    // 7F3A640C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6410:
    // 7F3A6410: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F3A6414:
    // 7F3A6414: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F3A6418u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F3A6418:
    ctx->downcount -= 4;
    // 7F3A6418: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F3A641C:
    // 7F3A641C: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F3A6420:
    // 7F3A6420: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A6424:
    // 7F3A6424: bc    12, 0, 0x7F3A63F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A63F8u;
                return;
            }
            goto label_7F3A63F8;
        }
    }

label_7F3A6428:
    ctx->pc = 0x7F3A6428u;
    ctx->downcount -= 16;
    // 7F3A6428: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A642C:
    ctx->pc = 0x7F3A642Cu;
    // 7F3A642C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6430:
    ctx->pc = 0x7F3A6430u;
    // 7F3A6430: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6434:
    ctx->pc = 0x7F3A6434u;
    // 7F3A6434: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A6438:
    ctx->pc = 0x7F3A6438u;
    // 7F3A6438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A643C:
    ctx->pc = 0x7F3A643Cu;
    ctx->downcount -= 9;
    // 7F3A643C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6440:
    ctx->pc = 0x7F3A6440u;
    // 7F3A6440: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6444:
    ctx->pc = 0x7F3A6444u;
    // 7F3A6444: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F3A6448:
    ctx->pc = 0x7F3A6448u;
    // 7F3A6448: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A644C:
    ctx->pc = 0x7F3A644Cu;
    // 7F3A644C: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F3A6450:
    ctx->pc = 0x7F3A6450u;
    // 7F3A6450: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6454:
    ctx->pc = 0x7F3A6454u;
    // 7F3A6454: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6458:
    ctx->pc = 0x7F3A6458u;
    // 7F3A6458: addi    r3, r31, 3744
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F3A645C:
    ctx->pc = 0x7F3A645Cu;
    // 7F3A645C: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F3A6460u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F3A6460:
    ctx->pc = 0x7F3A6460u;
    ctx->downcount -= 3;
    // 7F3A6460: addi    r3, r31, 3744
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F3A6464:
    ctx->pc = 0x7F3A6464u;
    // 7F3A6464: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F3A6468:
    ctx->pc = 0x7F3A6468u;
    // 7F3A6468: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F3A646Cu;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F3A646C:
    ctx->pc = 0x7F3A646Cu;
    ctx->downcount -= 6;
    // 7F3A646C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6470:
    ctx->pc = 0x7F3A6470u;
    // 7F3A6470: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6474:
    ctx->pc = 0x7F3A6474u;
    // 7F3A6474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6478:
    ctx->pc = 0x7F3A6478u;
    // 7F3A6478: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A647C:
    ctx->pc = 0x7F3A647Cu;
    // 7F3A647C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6480:
    ctx->pc = 0x7F3A6480u;
    ctx->downcount -= 6;
    // 7F3A6480: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A6484:
    ctx->pc = 0x7F3A6484u;
    // 7F3A6484: lwz     r5, -5728(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5728);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6488:
    ctx->pc = 0x7F3A6488u;
    // 7F3A6488: rlwinm r4, r5, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_7F3A648C:
    ctx->pc = 0x7F3A648Cu;
    // 7F3A648C: rlwinm r0, r5, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 24u) & 0x000000FFu;
    }

label_7F3A6490:
    ctx->pc = 0x7F3A6490u;
    // 7F3A6490: cmpw    r4, r0
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

label_7F3A6494:
    ctx->pc = 0x7F3A6494u;
    // 7F3A6494: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6498:
    ctx->pc = 0x7F3A6498u;
    ctx->downcount -= 2;
    // 7F3A6498: cmpwi   r4, 255
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

label_7F3A649C:
    ctx->pc = 0x7F3A649Cu;
    // 7F3A649C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A64A0:
    ctx->pc = 0x7F3A64A0u;
    ctx->downcount -= 15;
    // 7F3A64A0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A64A4:
    ctx->pc = 0x7F3A64A4u;
    // 7F3A64A4: stw     r5, 5032(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5032);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A64A8:
    ctx->pc = 0x7F3A64A8u;
    // 7F3A64A8: addi    r6, r4, -5708
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F3A64AC:
    ctx->pc = 0x7F3A64ACu;
    // 7F3A64AC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A64B0:
    ctx->pc = 0x7F3A64B0u;
    // 7F3A64B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A64B4:
    ctx->pc = 0x7F3A64B4u;
    // 7F3A64B4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A64B8:
    ctx->pc = 0x7F3A64B8u;
    // 7F3A64B8: stw     r5, 5036(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5036);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A64BC:
    ctx->pc = 0x7F3A64BCu;
    // 7F3A64BC: stw     r0, 5040(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5040);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A64C0:
    ctx->pc = 0x7F3A64C0u;
    // 7F3A64C0: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A64C4:
    ctx->pc = 0x7F3A64C4u;
    // 7F3A64C4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A64C8:
    ctx->pc = 0x7F3A64C8u;
    // 7F3A64C8: stw     r5, 5044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5044);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A64CC:
    ctx->pc = 0x7F3A64CCu;
    // 7F3A64CC: stw     r0, 5048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5048);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A64D0:
    ctx->pc = 0x7F3A64D0u;
    // 7F3A64D0: lwz     r0, -5848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A64D4:
    ctx->pc = 0x7F3A64D4u;
    // 7F3A64D4: stw     r0, 5052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A64D8:
    ctx->pc = 0x7F3A64D8u;
    // 7F3A64D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A64DC:
    ctx->pc = 0x7F3A64DCu;
    ctx->downcount -= 18;
    // 7F3A64DC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A64E0:
    ctx->pc = 0x7F3A64E0u;
    // 7F3A64E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A64E4:
    ctx->pc = 0x7F3A64E4u;
    // 7F3A64E4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A64E8:
    ctx->pc = 0x7F3A64E8u;
    // 7F3A64E8: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A64EC:
    ctx->pc = 0x7F3A64ECu;
    // 7F3A64EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A64F0:
    ctx->pc = 0x7F3A64F0u;
    // 7F3A64F0: addi    r4, r31, 120
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(120);

label_7F3A64F4:
    ctx->pc = 0x7F3A64F4u;
    // 7F3A64F4: lwz     r3, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A64F8:
    ctx->pc = 0x7F3A64F8u;
    // 7F3A64F8: bl      0x7F3C9624
    {
            ctx->lr = 0x7F3A64FCu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F3A64FC:
    ctx->pc = 0x7F3A64FCu;
    ctx->downcount -= 6;
    // 7F3A64FC: sth     r3, 118(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(118);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A6500:
    ctx->pc = 0x7F3A6500u;
    // 7F3A6500: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A6504:
    ctx->pc = 0x7F3A6504u;
    // 7F3A6504: addi    r30, r3, 12232
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(12232);

label_7F3A6508:
    ctx->pc = 0x7F3A6508u;
    // 7F3A6508: lwz     r29, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3A650C:
    ctx->pc = 0x7F3A650Cu;
    // 7F3A650C: lhz     r28, 118(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(118);
        ctx->gpr[28] = mem_read16(ctx, ea);
    }

label_7F3A6510:
    ctx->pc = 0x7F3A6510u;
    // 7F3A6510: b       0x7F3A65C4
    {
            goto label_7F3A65C4;
    }

label_7F3A6514:
    ctx->pc = 0x7F3A6514u;
    ctx->downcount -= 4;
    // 7F3A6514: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A6518:
    // 7F3A6518: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A651C:
    ctx->pc = 0x7F3A651Cu;
    // 7F3A651C: lwz     r27, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F3A6520:
    // 7F3A6520: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3A6524u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3A6524:
    ctx->downcount -= 2;
    // 7F3A6524: cmpw    r27, r3
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

label_7F3A6528:
    // 7F3A6528: bc    4, 2, 0x7F3A65BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A65BC;
        }
    }

label_7F3A652C:
    ctx->pc = 0x7F3A652Cu;
    ctx->downcount -= 32;
    // 7F3A652C: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A6530:
    // 7F3A6530: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3A6534:
    // 7F3A6534: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A6538:
    ctx->pc = 0x7F3A6538u;
    // 7F3A6538: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A653C:
    ctx->pc = 0x7F3A653Cu;
    // 7F3A653C: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6540:
    // 7F3A6540: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F3A6544:
    ctx->pc = 0x7F3A6544u;
    // 7F3A6544: lfd     f1, -21440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6544u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21440);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A6548:
    // 7F3A6548: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A654C:
    ctx->pc = 0x7F3A654Cu;
    // 7F3A654C: stb     r5, 4903(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4903);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3A6550:
    // 7F3A6550: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A6554:
    ctx->pc = 0x7F3A6554u;
    // 7F3A6554: lwz     r7, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A6558:
    ctx->pc = 0x7F3A6558u;
    // 7F3A6558: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A655C:
    ctx->pc = 0x7F3A655Cu;
    // 7F3A655C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A6560:
    ctx->pc = 0x7F3A6560u;
    // 7F3A6560: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6564:
    // 7F3A6564: rlwinm r0, r6, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_7F3A6568:
    ctx->pc = 0x7F3A6568u;
    // 7F3A6568: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A656C:
    ctx->pc = 0x7F3A656Cu;
    // 7F3A656C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A656Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A6570:
    ctx->pc = 0x7F3A6570u;
    // 7F3A6570: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3A6570u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3A6574:
    ctx->pc = 0x7F3A6574u;
    // 7F3A6574: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6578:
    ctx->pc = 0x7F3A6578u;
    // 7F3A6578: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A657C:
    // 7F3A657C: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A6580:
    ctx->pc = 0x7F3A6580u;
    // 7F3A6580: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6584:
    ctx->pc = 0x7F3A6584u;
    // 7F3A6584: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A6588:
    ctx->pc = 0x7F3A6588u;
    // 7F3A6588: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3A6588u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3A658C:
    ctx->pc = 0x7F3A658Cu;
    // 7F3A658C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A658Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6590:
    ctx->pc = 0x7F3A6590u;
    // 7F3A6590: lwz     r0, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6594:
    // 7F3A6594: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3A6598:
    ctx->pc = 0x7F3A6598u;
    // 7F3A6598: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A659C:
    ctx->pc = 0x7F3A659Cu;
    // 7F3A659C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A659Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A65A0:
    ctx->pc = 0x7F3A65A0u;
    // 7F3A65A0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3A65A0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3A65A4:
    ctx->pc = 0x7F3A65A4u;
    // 7F3A65A4: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A65A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A65A8:
    // 7F3A65A8: bl      0x7F103FC0
    {
            ctx->lr = 0x7F3A65ACu;
            ctx->pc = 0x7F103FC0u;
            return;
    }

label_7F3A65AC:
    ctx->pc = 0x7F3A65ACu;
    ctx->downcount -= 4;
    // 7F3A65AC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A65B0:
    // 7F3A65B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A65B4:
    ctx->pc = 0x7F3A65B4u;
    // 7F3A65B4: stb     r0, 4888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4888);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A65B8:
    // 7F3A65B8: b       0x7F3A65D0
    {
            goto label_7F3A65D0;
    }

label_7F3A65BC:
    ctx->downcount -= 2;
    // 7F3A65BC: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_7F3A65C0:
    // 7F3A65C0: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F3A65C4:
    ctx->downcount -= 2;
    // 7F3A65C4: cmpwi   r28, 0
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

label_7F3A65C8:
    // 7F3A65C8: bc    12, 1, 0x7F3A6514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6514u;
                return;
            }
            goto label_7F3A6514;
        }
    }

label_7F3A65CC:
    ctx->pc = 0x7F3A65CCu;
    ctx->downcount -= 1;
    // 7F3A65CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A65D0:
    ctx->pc = 0x7F3A65D0u;
    ctx->downcount -= 16;
    // 7F3A65D0: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A65D4:
    ctx->pc = 0x7F3A65D4u;
    // 7F3A65D4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A65D8:
    ctx->pc = 0x7F3A65D8u;
    // 7F3A65D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A65DC:
    ctx->pc = 0x7F3A65DCu;
    // 7F3A65DC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F3A65E0:
    ctx->pc = 0x7F3A65E0u;
    // 7F3A65E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A65E4:
    ctx->pc = 0x7F3A65E4u;
    ctx->downcount -= 19;
    // 7F3A65E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A65E8:
    ctx->pc = 0x7F3A65E8u;
    // 7F3A65E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A65EC:
    ctx->pc = 0x7F3A65ECu;
    // 7F3A65EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A65F0:
    ctx->pc = 0x7F3A65F0u;
    // 7F3A65F0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A65F4:
    ctx->pc = 0x7F3A65F4u;
    // 7F3A65F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A65F8:
    ctx->pc = 0x7F3A65F8u;
    // 7F3A65F8: lwz     r30, 4276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4276);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3A65FC:
    ctx->pc = 0x7F3A65FCu;
    // 7F3A65FC: lwz     r31, 4280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4280);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6600:
    ctx->pc = 0x7F3A6600u;
    // 7F3A6600: rlwinm. r0, r30, 0, 31, 31
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

label_7F3A6604:
    ctx->pc = 0x7F3A6604u;
    // 7F3A6604: bc    12, 2, 0x7F3A6610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6610;
        }
    }

label_7F3A6608:
    ctx->pc = 0x7F3A6608u;
    ctx->downcount -= 2;
    // 7F3A6608: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A660C:
    ctx->pc = 0x7F3A660Cu;
    // 7F3A660C: b       0x7F3A6634
    {
            goto label_7F3A6634;
    }

label_7F3A6610:
    ctx->pc = 0x7F3A6610u;
    ctx->downcount -= 2;
    // 7F3A6610: rlwinm. r0, r30, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A6614:
    ctx->pc = 0x7F3A6614u;
    // 7F3A6614: bc    12, 2, 0x7F3A6620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6620;
        }
    }

label_7F3A6618:
    ctx->pc = 0x7F3A6618u;
    ctx->downcount -= 2;
    // 7F3A6618: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A661C:
    ctx->pc = 0x7F3A661Cu;
    // 7F3A661C: b       0x7F3A6634
    {
            goto label_7F3A6634;
    }

label_7F3A6620:
    ctx->pc = 0x7F3A6620u;
    ctx->downcount -= 2;
    // 7F3A6620: rlwinm. r0, r30, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A6624:
    ctx->pc = 0x7F3A6624u;
    // 7F3A6624: bc    12, 2, 0x7F3A6630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6630;
        }
    }

label_7F3A6628:
    ctx->pc = 0x7F3A6628u;
    ctx->downcount -= 2;
    // 7F3A6628: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A662C:
    ctx->pc = 0x7F3A662Cu;
    // 7F3A662C: b       0x7F3A6634
    {
            goto label_7F3A6634;
    }

label_7F3A6630:
    ctx->pc = 0x7F3A6630u;
    ctx->downcount -= 1;
    // 7F3A6630: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3A6634:
    ctx->pc = 0x7F3A6634u;
    ctx->downcount -= 2;
    // 7F3A6634: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6638:
    ctx->pc = 0x7F3A6638u;
    // 7F3A6638: bl      0x7F2D2900
    {
            ctx->lr = 0x7F3A663Cu;
            ctx->pc = 0x7F2D2900u;
            return;
    }

label_7F3A663C:
    ctx->pc = 0x7F3A663Cu;
    ctx->downcount -= 2;
    // 7F3A663C: rlwinm. r0, r30, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A6640:
    ctx->pc = 0x7F3A6640u;
    // 7F3A6640: bc    12, 2, 0x7F3A6688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6688;
        }
    }

label_7F3A6644:
    ctx->pc = 0x7F3A6644u;
    ctx->downcount -= 2;
    // 7F3A6644: lwz     r3, 4120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6648:
    ctx->pc = 0x7F3A6648u;
    // 7F3A6648: bl      0x7F0B2170
    {
            ctx->lr = 0x7F3A664Cu;
            ctx->pc = 0x7F0B2170u;
            return;
    }

label_7F3A664C:
    ctx->pc = 0x7F3A664Cu;
    ctx->downcount -= 3;
    // 7F3A664C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6650:
    ctx->pc = 0x7F3A6650u;
    // 7F3A6650: cmpwi   r4, 12
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A6654:
    ctx->pc = 0x7F3A6654u;
    // 7F3A6654: bc    12, 2, 0x7F3A6670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6670;
        }
    }

label_7F3A6658:
    ctx->pc = 0x7F3A6658u;
    ctx->downcount -= 1;
    // 7F3A6658: bc    4, 0, 0x7F3A6680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6680;
        }
    }

label_7F3A665C:
    ctx->pc = 0x7F3A665Cu;
    ctx->downcount -= 2;
    // 7F3A665C: cmpwi   r4, 3
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

label_7F3A6660:
    ctx->pc = 0x7F3A6660u;
    // 7F3A6660: bc    4, 0, 0x7F3A6680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6680;
        }
    }

label_7F3A6664:
    ctx->pc = 0x7F3A6664u;
    ctx->downcount -= 2;
    // 7F3A6664: cmpwi   r4, 0
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

label_7F3A6668:
    ctx->pc = 0x7F3A6668u;
    // 7F3A6668: bc    4, 0, 0x7F3A6670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6670;
        }
    }

label_7F3A666C:
    ctx->pc = 0x7F3A666Cu;
    ctx->downcount -= 1;
    // 7F3A666C: b       0x7F3A6680
    {
            goto label_7F3A6680;
    }

label_7F3A6670:
    ctx->pc = 0x7F3A6670u;
    ctx->downcount -= 3;
    // 7F3A6670: lwz     r3, 4280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6674:
    ctx->pc = 0x7F3A6674u;
    // 7F3A6674: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3A6678:
    ctx->pc = 0x7F3A6678u;
    // 7F3A6678: bl      0x7F2D2D64
    {
            ctx->lr = 0x7F3A667Cu;
            ctx->pc = 0x7F2D2D64u;
            return;
    }

label_7F3A667C:
    ctx->pc = 0x7F3A667Cu;
    ctx->downcount -= 1;
    // 7F3A667C: b       0x7F3A6688
    {
            goto label_7F3A6688;
    }

label_7F3A6680:
    ctx->pc = 0x7F3A6680u;
    ctx->downcount -= 2;
    // 7F3A6680: lwz     r3, 4280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6684:
    ctx->pc = 0x7F3A6684u;
    // 7F3A6684: bl      0x7F2D2D64
    {
            ctx->lr = 0x7F3A6688u;
            ctx->pc = 0x7F2D2D64u;
            return;
    }

label_7F3A6688:
    ctx->pc = 0x7F3A6688u;
    ctx->downcount -= 2;
    // 7F3A6688: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A668C:
    ctx->pc = 0x7F3A668Cu;
    // 7F3A668C: bl      0x7F2D1DE0
    {
            ctx->lr = 0x7F3A6690u;
            ctx->pc = 0x7F2D1DE0u;
            return;
    }

label_7F3A6690:
    ctx->pc = 0x7F3A6690u;
    ctx->downcount -= 16;
    // 7F3A6690: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6694:
    ctx->pc = 0x7F3A6694u;
    // 7F3A6694: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6698:
    ctx->pc = 0x7F3A6698u;
    // 7F3A6698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A669C:
    ctx->pc = 0x7F3A669Cu;
    // 7F3A669C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A66A0:
    ctx->pc = 0x7F3A66A0u;
    // 7F3A66A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A66A4:
    ctx->pc = 0x7F3A66A4u;
    ctx->downcount -= 20;
    // 7F3A66A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A66A8:
    ctx->pc = 0x7F3A66A8u;
    // 7F3A66A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A66AC:
    ctx->pc = 0x7F3A66ACu;
    // 7F3A66AC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A66B0:
    ctx->pc = 0x7F3A66B0u;
    // 7F3A66B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A66B4:
    ctx->pc = 0x7F3A66B4u;
    // 7F3A66B4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A66B8:
    ctx->pc = 0x7F3A66B8u;
    // 7F3A66B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A66BC:
    ctx->pc = 0x7F3A66BCu;
    // 7F3A66BC: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F3A66C0:
    ctx->pc = 0x7F3A66C0u;
    // 7F3A66C0: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F3A66C4:
    ctx->pc = 0x7F3A66C4u;
    // 7F3A66C4: stw     r30, 15432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15432);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3A66C8:
    ctx->pc = 0x7F3A66C8u;
    // 7F3A66C8: bl      0x7F04291C
    {
            ctx->lr = 0x7F3A66CCu;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F3A66CC:
    ctx->pc = 0x7F3A66CCu;
    ctx->downcount -= 2;
    // 7F3A66CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A66D0:
    ctx->pc = 0x7F3A66D0u;
    // 7F3A66D0: bl      0x7F023170
    {
            ctx->lr = 0x7F3A66D4u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F3A66D4:
    ctx->pc = 0x7F3A66D4u;
    ctx->downcount -= 2;
    // 7F3A66D4: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F3A66D8:
    ctx->pc = 0x7F3A66D8u;
    // 7F3A66D8: bl      0x7F0429C4
    {
            ctx->lr = 0x7F3A66DCu;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F3A66DC:
    ctx->pc = 0x7F3A66DCu;
    ctx->downcount -= 5;
    // 7F3A66DC: lwz     r0, 4264(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A66E0:
    ctx->pc = 0x7F3A66E0u;
    // 7F3A66E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A66E4:
    ctx->pc = 0x7F3A66E4u;
    // 7F3A66E4: rlwinm r0, r0, 0, 26, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_7F3A66E8:
    ctx->pc = 0x7F3A66E8u;
    // 7F3A66E8: stw     r0, 4264(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A66EC:
    ctx->pc = 0x7F3A66ECu;
    // 7F3A66EC: bl      0x7F3A65E4
    {
            ctx->lr = 0x7F3A66F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A65E4u;
                return;
            }
            goto label_7F3A65E4;
    }

label_7F3A66F0:
    ctx->pc = 0x7F3A66F0u;
    ctx->downcount -= 10;
    // 7F3A66F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A66F4:
    ctx->pc = 0x7F3A66F4u;
    // 7F3A66F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A66F8:
    ctx->pc = 0x7F3A66F8u;
    // 7F3A66F8: stw     r0, 4276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A66FC:
    ctx->pc = 0x7F3A66FCu;
    // 7F3A66FC: addi    r4, r30, 688
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(688);

label_7F3A6700:
    ctx->pc = 0x7F3A6700u;
    // 7F3A6700: stw     r0, 4120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6704:
    ctx->pc = 0x7F3A6704u;
    // 7F3A6704: stw     r0, 4116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6708:
    ctx->pc = 0x7F3A6708u;
    // 7F3A6708: stw     r0, 4112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A670C:
    ctx->pc = 0x7F3A670Cu;
    // 7F3A670C: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6710:
    ctx->pc = 0x7F3A6710u;
    // 7F3A6710: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F3A6714:
    ctx->pc = 0x7F3A6714u;
    // 7F3A6714: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F3A6718u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F3A6718:
    ctx->pc = 0x7F3A6718u;
    ctx->downcount -= 2;
    // 7F3A6718: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A671C:
    ctx->pc = 0x7F3A671Cu;
    // 7F3A671C: bl      0x7F3A6480
    {
            ctx->lr = 0x7F3A6720u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6480u;
                return;
            }
            goto label_7F3A6480;
    }

label_7F3A6720:
    ctx->pc = 0x7F3A6720u;
    ctx->downcount -= 2;
    // 7F3A6720: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6724:
    ctx->pc = 0x7F3A6724u;
    // 7F3A6724: bl      0x7F3A64DC
    {
            ctx->lr = 0x7F3A6728u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A64DCu;
                return;
            }
            goto label_7F3A64DC;
    }

label_7F3A6728:
    ctx->pc = 0x7F3A6728u;
    ctx->downcount -= 2;
    // 7F3A6728: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A672C:
    ctx->pc = 0x7F3A672Cu;
    // 7F3A672C: bl      0x7F3A25B8
    {
            ctx->lr = 0x7F3A6730u;
            ctx->pc = 0x7F3A25B8u;
            return;
    }

label_7F3A6730:
    ctx->pc = 0x7F3A6730u;
    ctx->downcount -= 5;
    // 7F3A6730: addi    r3, r30, 864
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(864);

label_7F3A6734:
    ctx->pc = 0x7F3A6734u;
    // 7F3A6734: addi    r4, r30, 3744
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3744);

label_7F3A6738:
    ctx->pc = 0x7F3A6738u;
    // 7F3A6738: addi    r5, r30, 448
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(448);

label_7F3A673C:
    ctx->pc = 0x7F3A673Cu;
    // 7F3A673C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6740:
    ctx->pc = 0x7F3A6740u;
    // 7F3A6740: bl      0x7F0B1F28
    {
            ctx->lr = 0x7F3A6744u;
            ctx->pc = 0x7F0B1F28u;
            return;
    }

label_7F3A6744:
    ctx->pc = 0x7F3A6744u;
    ctx->downcount -= 5;
    // 7F3A6744: lha     r4, 3954(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3954);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6748:
    ctx->pc = 0x7F3A6748u;
    // 7F3A6748: addi    r3, r30, 4160
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4160);

label_7F3A674C:
    ctx->pc = 0x7F3A674Cu;
    // 7F3A674C: lwz     r5, 4092(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4092);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6750:
    ctx->pc = 0x7F3A6750u;
    // 7F3A6750: addi    r6, r30, 5338
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(5338);

label_7F3A6754:
    ctx->pc = 0x7F3A6754u;
    // 7F3A6754: bl      0x7F0DCEC8
    {
            ctx->lr = 0x7F3A6758u;
            ctx->pc = 0x7F0DCEC8u;
            return;
    }

label_7F3A6758:
    ctx->pc = 0x7F3A6758u;
    ctx->downcount -= 2;
    // 7F3A6758: addi    r3, r30, 4160
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4160);

label_7F3A675C:
    ctx->pc = 0x7F3A675Cu;
    // 7F3A675C: bl      0x7F27E638
    {
            ctx->lr = 0x7F3A6760u;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F3A6760:
    ctx->pc = 0x7F3A6760u;
    ctx->downcount -= 2;
    // 7F3A6760: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A6764:
    ctx->pc = 0x7F3A6764u;
    // 7F3A6764: bl      0x7F2BB23C
    {
            ctx->lr = 0x7F3A6768u;
            ctx->pc = 0x7F2BB23Cu;
            return;
    }

label_7F3A6768:
    ctx->pc = 0x7F3A6768u;
    ctx->downcount -= 10;
    // 7F3A6768: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A676C:
    ctx->pc = 0x7F3A676Cu;
    // 7F3A676C: lha     r0, 3954(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3954);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6770:
    ctx->pc = 0x7F3A6770u;
    // 7F3A6770: addi    r4, r3, 15424
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15424);

label_7F3A6774:
    ctx->pc = 0x7F3A6774u;
    // 7F3A6774: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6778:
    ctx->pc = 0x7F3A6778u;
    // 7F3A6778: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A677C:
    ctx->pc = 0x7F3A677Cu;
    // 7F3A677C: lha     r0, 3958(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3958);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6780:
    ctx->pc = 0x7F3A6780u;
    // 7F3A6780: stw     r0, 15428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6784:
    ctx->pc = 0x7F3A6784u;
    // 7F3A6784: lwz     r0, 4124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6788:
    ctx->pc = 0x7F3A6788u;
    // 7F3A6788: cmpwi   r0, 0
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

label_7F3A678C:
    ctx->pc = 0x7F3A678Cu;
    // 7F3A678C: bc    12, 2, 0x7F3A67A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A67A4;
        }
    }

label_7F3A6790:
    ctx->pc = 0x7F3A6790u;
    ctx->downcount -= 5;
    // 7F3A6790: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F3A6794:
    ctx->pc = 0x7F3A6794u;
    // 7F3A6794: addi    r4, r30, 4128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4128);

label_7F3A6798:
    ctx->pc = 0x7F3A6798u;
    // 7F3A6798: addi    r5, r30, 4132
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(4132);

label_7F3A679C:
    ctx->pc = 0x7F3A679Cu;
    // 7F3A679C: addi    r6, r30, 4124
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(4124);

label_7F3A67A0:
    ctx->pc = 0x7F3A67A0u;
    // 7F3A67A0: bl      0x7F0DD028
    {
            ctx->lr = 0x7F3A67A4u;
            ctx->pc = 0x7F0DD028u;
            return;
    }

label_7F3A67A4:
    ctx->pc = 0x7F3A67A4u;
    ctx->downcount -= 16;
    // 7F3A67A4: lwz     r5, 5284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A67A8:
    ctx->pc = 0x7F3A67A8u;
    // 7F3A67A8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A67AC:
    ctx->pc = 0x7F3A67ACu;
    // 7F3A67AC: addi    r4, r3, 15444
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15444);

label_7F3A67B0:
    ctx->pc = 0x7F3A67B0u;
    // 7F3A67B0: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3A67B4:
    ctx->pc = 0x7F3A67B4u;
    // 7F3A67B4: stw     r0, 5284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A67B8:
    ctx->pc = 0x7F3A67B8u;
    // 7F3A67B8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A67BC:
    ctx->pc = 0x7F3A67BCu;
    // 7F3A67BC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A67C0:
    ctx->pc = 0x7F3A67C0u;
    // 7F3A67C0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A67C4:
    ctx->pc = 0x7F3A67C4u;
    // 7F3A67C4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A67C8:
    ctx->pc = 0x7F3A67C8u;
    // 7F3A67C8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A67CC:
    ctx->pc = 0x7F3A67CCu;
    // 7F3A67CC: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A67D0:
    ctx->pc = 0x7F3A67D0u;
    // 7F3A67D0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A67D4:
    ctx->pc = 0x7F3A67D4u;
    // 7F3A67D4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A67D8:
    ctx->pc = 0x7F3A67D8u;
    // 7F3A67D8: lwz     r0, 4264(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A67DC:
    ctx->pc = 0x7F3A67DCu;
    // 7F3A67DC: rlwinm. r0, r0, 0, 25, 25
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

label_7F3A67E0:
    ctx->pc = 0x7F3A67E0u;
    // 7F3A67E0: bc    12, 2, 0x7F3A67F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A67F4;
        }
    }

label_7F3A67E4:
    ctx->pc = 0x7F3A67E4u;
    ctx->downcount -= 4;
    // 7F3A67E4: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3A67E8:
    ctx->pc = 0x7F3A67E8u;
    // 7F3A67E8: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F3A67EC:
    ctx->pc = 0x7F3A67ECu;
    // 7F3A67EC: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A67F0:
    ctx->pc = 0x7F3A67F0u;
    // 7F3A67F0: b       0x7F3A6800
    {
            goto label_7F3A6800;
    }

label_7F3A67F4:
    ctx->pc = 0x7F3A67F4u;
    ctx->downcount -= 3;
    // 7F3A67F4: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3A67F8:
    ctx->pc = 0x7F3A67F8u;
    // 7F3A67F8: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F3A67FC:
    ctx->pc = 0x7F3A67FCu;
    // 7F3A67FC: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A6800:
    ctx->pc = 0x7F3A6800u;
    ctx->downcount -= 4;
    // 7F3A6800: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A6804:
    ctx->pc = 0x7F3A6804u;
    // 7F3A6804: lwz     r0, 12244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6808:
    ctx->pc = 0x7F3A6808u;
    // 7F3A6808: cmpwi   r0, 0
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

label_7F3A680C:
    ctx->pc = 0x7F3A680Cu;
    // 7F3A680C: bc    12, 2, 0x7F3A6830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6830;
        }
    }

label_7F3A6810:
    ctx->pc = 0x7F3A6810u;
    ctx->downcount -= 3;
    // 7F3A6810: lwz     r3, 5356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6814:
    ctx->pc = 0x7F3A6814u;
    // 7F3A6814: cmplwi  r3, 0x0000
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

label_7F3A6818:
    ctx->pc = 0x7F3A6818u;
    // 7F3A6818: bc    12, 2, 0x7F3A6820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6820;
        }
    }

label_7F3A681C:
    ctx->pc = 0x7F3A681Cu;
    ctx->downcount -= 1;
    // 7F3A681C: bl      0x7F306938
    {
            ctx->lr = 0x7F3A6820u;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F3A6820:
    ctx->pc = 0x7F3A6820u;
    ctx->downcount -= 3;
    // 7F3A6820: lwz     r3, 5360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6824:
    ctx->pc = 0x7F3A6824u;
    // 7F3A6824: cmplwi  r3, 0x0000
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

label_7F3A6828:
    ctx->pc = 0x7F3A6828u;
    // 7F3A6828: bc    12, 2, 0x7F3A6830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6830;
        }
    }

label_7F3A682C:
    ctx->pc = 0x7F3A682Cu;
    ctx->downcount -= 1;
    // 7F3A682C: bl      0x7F306938
    {
            ctx->lr = 0x7F3A6830u;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F3A6830:
    ctx->pc = 0x7F3A6830u;
    ctx->downcount -= 16;
    // 7F3A6830: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6834:
    ctx->pc = 0x7F3A6834u;
    // 7F3A6834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6838:
    ctx->pc = 0x7F3A6838u;
    // 7F3A6838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A683C:
    ctx->pc = 0x7F3A683Cu;
    // 7F3A683C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6840:
    ctx->pc = 0x7F3A6840u;
    // 7F3A6840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6844:
    ctx->pc = 0x7F3A6844u;
    ctx->downcount -= 59;
    // 7F3A6844: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6848:
    ctx->pc = 0x7F3A6848u;
    // 7F3A6848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A684C:
    ctx->pc = 0x7F3A684Cu;
    // 7F3A684C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A6850:
    ctx->pc = 0x7F3A6850u;
    // 7F3A6850: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6854:
    ctx->pc = 0x7F3A6854u;
    // 7F3A6854: addi    r7, r4, -21432
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-21432);

label_7F3A6858:
    ctx->pc = 0x7F3A6858u;
    // 7F3A6858: lis     r4, 32570
    ctx->gpr[4] = ((u32)(s32)(32570) << 16);

label_7F3A685C:
    ctx->pc = 0x7F3A685Cu;
    // 7F3A685C: addi    r10, r1, 8
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A6860:
    ctx->pc = 0x7F3A6860u;
    // 7F3A6860: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6864:
    ctx->pc = 0x7F3A6864u;
    // 7F3A6864: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6868:
    ctx->pc = 0x7F3A6868u;
    // 7F3A6868: addi    r12, r4, 8360
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(8360);

label_7F3A686C:
    ctx->pc = 0x7F3A686Cu;
    // 7F3A686C: li      r29, 100
    ctx->gpr[29] = (u32)(s32)(100);

label_7F3A6870:
    ctx->pc = 0x7F3A6870u;
    // 7F3A6870: addi    r30, r31, 3936
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(3936);

label_7F3A6874:
    ctx->pc = 0x7F3A6874u;
    // 7F3A6874: addi    r11, r31, 864
    ctx->gpr[11] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A6878:
    ctx->pc = 0x7F3A6878u;
    // 7F3A6878: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F3A687C:
    ctx->pc = 0x7F3A687Cu;
    // 7F3A687C: addi    r9, r31, 4032
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(4032);

label_7F3A6880:
    ctx->pc = 0x7F3A6880u;
    // 7F3A6880: addi    r8, r31, 48
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A6884:
    ctx->pc = 0x7F3A6884u;
    // 7F3A6884: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A6888:
    ctx->pc = 0x7F3A6888u;
    // 7F3A6888: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A688C:
    ctx->pc = 0x7F3A688Cu;
    // 7F3A688C: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6890:
    ctx->pc = 0x7F3A6890u;
    // 7F3A6890: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6894:
    ctx->pc = 0x7F3A6894u;
    // 7F3A6894: lwz     r28, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F3A6898:
    ctx->pc = 0x7F3A6898u;
    // 7F3A6898: addi    r7, r31, 448
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A689C:
    ctx->pc = 0x7F3A689Cu;
    // 7F3A689C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A68A0:
    ctx->pc = 0x7F3A68A0u;
    // 7F3A68A0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F3A68A4:
    ctx->pc = 0x7F3A68A4u;
    // 7F3A68A4: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A68A8:
    ctx->pc = 0x7F3A68A8u;
    // 7F3A68A8: addi    r5, r31, 3744
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F3A68AC:
    ctx->pc = 0x7F3A68ACu;
    // 7F3A68AC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A68B0:
    ctx->pc = 0x7F3A68B0u;
    // 7F3A68B0: addi    r0, r3, 8704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8704);

label_7F3A68B4:
    ctx->pc = 0x7F3A68B4u;
    // 7F3A68B4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A68B8:
    ctx->pc = 0x7F3A68B8u;
    // 7F3A68B8: stw     r28, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3A68BC:
    ctx->pc = 0x7F3A68BCu;
    // 7F3A68BC: stw     r29, 4092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4092);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3A68C0:
    ctx->pc = 0x7F3A68C0u;
    // 7F3A68C0: stw     r29, 4096(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4096);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3A68C4:
    ctx->pc = 0x7F3A68C4u;
    // 7F3A68C4: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A68C8:
    ctx->pc = 0x7F3A68C8u;
    // 7F3A68C8: stw     r30, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3A68CC:
    ctx->pc = 0x7F3A68CCu;
    // 7F3A68CC: stw     r12, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3A68D0:
    ctx->pc = 0x7F3A68D0u;
    // 7F3A68D0: stw     r11, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3A68D4:
    ctx->pc = 0x7F3A68D4u;
    // 7F3A68D4: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A68D8:
    ctx->pc = 0x7F3A68D8u;
    // 7F3A68D8: lha     r10, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A68DC:
    ctx->pc = 0x7F3A68DCu;
    // 7F3A68DC: stw     r10, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A68E0:
    ctx->pc = 0x7F3A68E0u;
    // 7F3A68E0: lha     r10, 4900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4900);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A68E4:
    ctx->pc = 0x7F3A68E4u;
    // 7F3A68E4: stw     r10, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A68E8:
    ctx->pc = 0x7F3A68E8u;
    // 7F3A68E8: stw     r9, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3A68EC:
    ctx->pc = 0x7F3A68ECu;
    // 7F3A68EC: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A68F0:
    ctx->pc = 0x7F3A68F0u;
    // 7F3A68F0: stw     r7, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A68F4:
    ctx->pc = 0x7F3A68F4u;
    // 7F3A68F4: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A68F8:
    ctx->pc = 0x7F3A68F8u;
    // 7F3A68F8: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A68FC:
    ctx->pc = 0x7F3A68FCu;
    // 7F3A68FC: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A6900:
    ctx->pc = 0x7F3A6900u;
    // 7F3A6900: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6904:
    ctx->pc = 0x7F3A6904u;
    // 7F3A6904: bl      0x7F0B1A5C
    {
            ctx->lr = 0x7F3A6908u;
            ctx->pc = 0x7F0B1A5Cu;
            return;
    }

label_7F3A6908:
    ctx->pc = 0x7F3A6908u;
    ctx->downcount -= 11;
    // 7F3A6908: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F3A690C:
    ctx->pc = 0x7F3A690Cu;
    // 7F3A690C: addi    r3, r31, 4000
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4000);

label_7F3A6910:
    ctx->pc = 0x7F3A6910u;
    // 7F3A6910: addi    r0, r4, 22417
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(22417);

label_7F3A6914:
    ctx->pc = 0x7F3A6914u;
    // 7F3A6914: addi    r4, r31, 864
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A6918:
    ctx->pc = 0x7F3A6918u;
    // 7F3A6918: stw     r0, 3932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3932);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A691C:
    ctx->pc = 0x7F3A691Cu;
    // 7F3A691C: addi    r6, r31, 448
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A6920:
    ctx->pc = 0x7F3A6920u;
    // 7F3A6920: addi    r7, r31, 48
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A6924:
    ctx->pc = 0x7F3A6924u;
    // 7F3A6924: addi    r8, r31, 212
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(212);

label_7F3A6928:
    ctx->pc = 0x7F3A6928u;
    // 7F3A6928: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F3A692C:
    ctx->pc = 0x7F3A692Cu;
    // 7F3A692C: li      r9, 4
    ctx->gpr[9] = (u32)(s32)(4);

label_7F3A6930:
    ctx->pc = 0x7F3A6930u;
    // 7F3A6930: bl      0x7F0B2258
    {
            ctx->lr = 0x7F3A6934u;
            ctx->pc = 0x7F0B2258u;
            return;
    }

label_7F3A6934:
    ctx->pc = 0x7F3A6934u;
    ctx->downcount -= 22;
    // 7F3A6934: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A6938:
    ctx->pc = 0x7F3A6938u;
    // 7F3A6938: stw     r0, 4120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A693C:
    ctx->pc = 0x7F3A693Cu;
    // 7F3A693C: sth     r0, 4100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A6940:
    ctx->pc = 0x7F3A6940u;
    // 7F3A6940: lwz     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6944:
    ctx->pc = 0x7F3A6944u;
    // 7F3A6944: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F3A6948:
    ctx->pc = 0x7F3A6948u;
    // 7F3A6948: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A694C:
    ctx->pc = 0x7F3A694Cu;
    // 7F3A694C: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6950:
    ctx->pc = 0x7F3A6950u;
    // 7F3A6950: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6954:
    ctx->pc = 0x7F3A6954u;
    // 7F3A6954: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6958:
    ctx->pc = 0x7F3A6958u;
    // 7F3A6958: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F3A695C:
    ctx->pc = 0x7F3A695Cu;
    // 7F3A695C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6960:
    ctx->pc = 0x7F3A6960u;
    ctx->downcount -= 22;
    // 7F3A6960: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6964:
    ctx->pc = 0x7F3A6964u;
    // 7F3A6964: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6968:
    ctx->pc = 0x7F3A6968u;
    // 7F3A6968: li      r5, 104
    ctx->gpr[5] = (u32)(s32)(104);

label_7F3A696C:
    ctx->pc = 0x7F3A696Cu;
    // 7F3A696C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6970:
    ctx->pc = 0x7F3A6970u;
    // 7F3A6970: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6974:
    ctx->pc = 0x7F3A6974u;
    // 7F3A6974: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6978:
    ctx->pc = 0x7F3A6978u;
    // 7F3A6978: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A697C:
    ctx->pc = 0x7F3A697Cu;
    // 7F3A697C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A6980:
    ctx->pc = 0x7F3A6980u;
    // 7F3A6980: addi    r0, r30, 4160
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(4160);

label_7F3A6984:
    ctx->pc = 0x7F3A6984u;
    // 7F3A6984: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6988:
    ctx->pc = 0x7F3A6988u;
    // 7F3A6988: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A698C:
    ctx->pc = 0x7F3A698Cu;
    // 7F3A698C: bl      0x800050B4
    {
            ctx->lr = 0x7F3A6990u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F3A6990:
    ctx->pc = 0x7F3A6990u;
    ctx->downcount -= 4;
    // 7F3A6990: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F3A6994:
    ctx->pc = 0x7F3A6994u;
    // 7F3A6994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6998:
    ctx->pc = 0x7F3A6998u;
    // 7F3A6998: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A699C:
    loop_7F3A699C(ctx);
    if (ctx->pc == 0x7F3A69B8u) goto label_7F3A69B8;
    return;
label_7F3A69A0:
    // 7F3A69A0: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3A69A4:
    // 7F3A69A4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3A69A8:
    ctx->pc = 0x7F3A69A8u;
    // 7F3A69A8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A69AC:
    ctx->pc = 0x7F3A69ACu;
    // 7F3A69AC: lha     r0, 3954(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3954);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A69B0:
    ctx->pc = 0x7F3A69B0u;
    // 7F3A69B0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A69B4:
    // 7F3A69B4: bc    16, 0, 0x7F3A699C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A699Cu;
                return;
            }
            goto label_7F3A699C;
        }
    }

label_7F3A69B8:
    ctx->pc = 0x7F3A69B8u;
    ctx->downcount -= 23;
    // 7F3A69B8: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F3A69BC:
    ctx->pc = 0x7F3A69BCu;
    // 7F3A69BC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A69C0:
    ctx->pc = 0x7F3A69C0u;
    // 7F3A69C0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A69C4:
    ctx->pc = 0x7F3A69C4u;
    // 7F3A69C4: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F3A69C8:
    ctx->pc = 0x7F3A69C8u;
    // 7F3A69C8: addi    r4, r3, 12248
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12248);

label_7F3A69CC:
    ctx->pc = 0x7F3A69CCu;
    // 7F3A69CC: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F3A69D0:
    ctx->pc = 0x7F3A69D0u;
    // 7F3A69D0: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A69D4:
    ctx->pc = 0x7F3A69D4u;
    // 7F3A69D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A69D8:
    ctx->pc = 0x7F3A69D8u;
    // 7F3A69D8: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A69DC:
    ctx->pc = 0x7F3A69DCu;
    // 7F3A69DC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A69E0:
    ctx->pc = 0x7F3A69E0u;
    // 7F3A69E0: stw     r8, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A69E4:
    ctx->pc = 0x7F3A69E4u;
    // 7F3A69E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A69E8:
    ctx->pc = 0x7F3A69E8u;
    // 7F3A69E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A69EC:
    ctx->pc = 0x7F3A69ECu;
    // 7F3A69EC: stw     r7, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A69F0:
    ctx->pc = 0x7F3A69F0u;
    // 7F3A69F0: stw     r6, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A69F4:
    ctx->pc = 0x7F3A69F4u;
    // 7F3A69F4: stw     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A69F8:
    ctx->pc = 0x7F3A69F8u;
    // 7F3A69F8: stw     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A69FC:
    ctx->pc = 0x7F3A69FCu;
    // 7F3A69FC: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6A00:
    ctx->pc = 0x7F3A6A00u;
    // 7F3A6A00: stw     r7, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A6A04:
    ctx->pc = 0x7F3A6A04u;
    // 7F3A6A04: stw     r7, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A6A08:
    ctx->pc = 0x7F3A6A08u;
    // 7F3A6A08: stw     r7, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A6A0C:
    ctx->pc = 0x7F3A6A0Cu;
    // 7F3A6A0C: stw     r7, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A6A10:
    ctx->pc = 0x7F3A6A10u;
    // 7F3A6A10: bl      0x7F0DCDF4
    {
            ctx->lr = 0x7F3A6A14u;
            ctx->pc = 0x7F0DCDF4u;
            return;
    }

label_7F3A6A14:
    ctx->pc = 0x7F3A6A14u;
    ctx->downcount -= 4;
    // 7F3A6A14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A6A18:
    ctx->pc = 0x7F3A6A18u;
    // 7F3A6A18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A6A1C:
    ctx->pc = 0x7F3A6A1Cu;
    // 7F3A6A1C: sth     r0, 5338(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5338);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A6A20:
    ctx->pc = 0x7F3A6A20u;
    // 7F3A6A20: bl      0x7F2BB23C
    {
            ctx->lr = 0x7F3A6A24u;
            ctx->pc = 0x7F2BB23Cu;
            return;
    }

label_7F3A6A24:
    ctx->pc = 0x7F3A6A24u;
    ctx->downcount -= 16;
    // 7F3A6A24: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6A28:
    ctx->pc = 0x7F3A6A28u;
    // 7F3A6A28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6A2C:
    ctx->pc = 0x7F3A6A2Cu;
    // 7F3A6A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6A30:
    ctx->pc = 0x7F3A6A30u;
    // 7F3A6A30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6A34:
    ctx->pc = 0x7F3A6A34u;
    // 7F3A6A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6A38:
    ctx->pc = 0x7F3A6A38u;
    ctx->downcount -= 8;
    // 7F3A6A38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6A3C:
    ctx->pc = 0x7F3A6A3Cu;
    // 7F3A6A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6A40:
    ctx->pc = 0x7F3A6A40u;
    // 7F3A6A40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6A44:
    ctx->pc = 0x7F3A6A44u;
    // 7F3A6A44: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6A48:
    ctx->pc = 0x7F3A6A48u;
    // 7F3A6A48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6A4C:
    ctx->pc = 0x7F3A6A4Cu;
    // 7F3A6A4C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A6A50:
    ctx->pc = 0x7F3A6A50u;
    // 7F3A6A50: addi    r4, r31, 448
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A6A54:
    ctx->pc = 0x7F3A6A54u;
    // 7F3A6A54: bl      0x7F2D2410
    {
            ctx->lr = 0x7F3A6A58u;
            ctx->pc = 0x7F2D2410u;
            return;
    }

label_7F3A6A58:
    ctx->pc = 0x7F3A6A58u;
    ctx->downcount -= 9;
    // 7F3A6A58: stw     r3, 4280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6A5C:
    ctx->pc = 0x7F3A6A5Cu;
    // 7F3A6A5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A6A60:
    ctx->pc = 0x7F3A6A60u;
    // 7F3A6A60: stw     r0, 4276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6A64:
    ctx->pc = 0x7F3A6A64u;
    // 7F3A6A64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6A68:
    ctx->pc = 0x7F3A6A68u;
    // 7F3A6A68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6A6C:
    ctx->pc = 0x7F3A6A6Cu;
    // 7F3A6A6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6A70:
    ctx->pc = 0x7F3A6A70u;
    // 7F3A6A70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6A74:
    ctx->pc = 0x7F3A6A74u;
    // 7F3A6A74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6A78:
    ctx->pc = 0x7F3A6A78u;
    ctx->downcount -= 19;
    // 7F3A6A78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6A7C:
    ctx->pc = 0x7F3A6A7Cu;
    // 7F3A6A7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6A80:
    ctx->pc = 0x7F3A6A80u;
    // 7F3A6A80: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3A6A84:
    ctx->pc = 0x7F3A6A84u;
    // 7F3A6A84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6A88:
    ctx->pc = 0x7F3A6A88u;
    // 7F3A6A88: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6A8C:
    ctx->pc = 0x7F3A6A8Cu;
    // 7F3A6A8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6A90:
    ctx->pc = 0x7F3A6A90u;
    // 7F3A6A90: addi    r31, r30, 816
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(816);

label_7F3A6A94:
    ctx->pc = 0x7F3A6A94u;
    // 7F3A6A94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6A98:
    ctx->pc = 0x7F3A6A98u;
    // 7F3A6A98: bl      0x7F3C9120
    {
            ctx->lr = 0x7F3A6A9Cu;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F3A6A9C:
    ctx->pc = 0x7F3A6A9Cu;
    ctx->downcount -= 26;
    // 7F3A6A9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A6AA0:
    ctx->pc = 0x7F3A6AA0u;
    // 7F3A6AA0: li      r3, 450
    ctx->gpr[3] = (u32)(s32)(450);

label_7F3A6AA4:
    ctx->pc = 0x7F3A6AA4u;
    // 7F3A6AA4: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6AA8:
    ctx->pc = 0x7F3A6AA8u;
    // 7F3A6AA8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A6AAC:
    ctx->pc = 0x7F3A6AACu;
    // 7F3A6AAC: sth     r3, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A6AB0:
    ctx->pc = 0x7F3A6AB0u;
    // 7F3A6AB0: sth     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A6AB4:
    ctx->pc = 0x7F3A6AB4u;
    // 7F3A6AB4: stw     r4, 848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6AB8:
    ctx->pc = 0x7F3A6AB8u;
    // 7F3A6AB8: stw     r4, 852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6ABC:
    ctx->pc = 0x7F3A6ABCu;
    // 7F3A6ABC: stw     r4, 856(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6AC0:
    ctx->pc = 0x7F3A6AC0u;
    // 7F3A6AC0: stw     r4, 860(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6AC4:
    ctx->pc = 0x7F3A6AC4u;
    // 7F3A6AC4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6AC8:
    ctx->pc = 0x7F3A6AC8u;
    // 7F3A6AC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6ACC:
    ctx->pc = 0x7F3A6ACCu;
    // 7F3A6ACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6AD0:
    ctx->pc = 0x7F3A6AD0u;
    // 7F3A6AD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6AD4:
    ctx->pc = 0x7F3A6AD4u;
    // 7F3A6AD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6AD8:
    ctx->pc = 0x7F3A6AD8u;
    ctx->downcount -= 21;
    // 7F3A6AD8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6ADC:
    ctx->pc = 0x7F3A6ADCu;
    // 7F3A6ADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6AE0:
    ctx->pc = 0x7F3A6AE0u;
    // 7F3A6AE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A6AE4:
    ctx->pc = 0x7F3A6AE4u;
    // 7F3A6AE4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6AE8:
    ctx->pc = 0x7F3A6AE8u;
    // 7F3A6AE8: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6AEC:
    ctx->pc = 0x7F3A6AECu;
    // 7F3A6AEC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6AF0:
    ctx->pc = 0x7F3A6AF0u;
    // 7F3A6AF0: addi    r31, r28, 48
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(48);

label_7F3A6AF4:
    ctx->pc = 0x7F3A6AF4u;
    // 7F3A6AF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6AF8:
    ctx->pc = 0x7F3A6AF8u;
    // 7F3A6AF8: addi    r30, r28, 448
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(448);

label_7F3A6AFC:
    ctx->pc = 0x7F3A6AFCu;
    // 7F3A6AFC: addi    r29, r28, 644
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(644);

label_7F3A6B00:
    ctx->pc = 0x7F3A6B00u;
    // 7F3A6B00: bl      0x7F022FB4
    {
            ctx->lr = 0x7F3A6B04u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F3A6B04:
    ctx->pc = 0x7F3A6B04u;
    ctx->downcount -= 2;
    // 7F3A6B04: cmpwi   r3, 0
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

label_7F3A6B08:
    ctx->pc = 0x7F3A6B08u;
    // 7F3A6B08: bc    4, 0, 0x7F3A6B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6B14;
        }
    }

label_7F3A6B0C:
    ctx->pc = 0x7F3A6B0Cu;
    ctx->downcount -= 2;
    // 7F3A6B0C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A6B10:
    ctx->pc = 0x7F3A6B10u;
    // 7F3A6B10: b       0x7F3A6DFC
    {
            goto label_7F3A6DFC;
    }

label_7F3A6B14:
    ctx->pc = 0x7F3A6B14u;
    ctx->downcount -= 9;
    // 7F3A6B14: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A6B18:
    ctx->pc = 0x7F3A6B18u;
    // 7F3A6B18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B1C:
    ctx->pc = 0x7F3A6B1Cu;
    // 7F3A6B1C: addi    r5, r4, -21416
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-21416);

label_7F3A6B20:
    ctx->pc = 0x7F3A6B20u;
    // 7F3A6B20: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F3A6B24:
    ctx->pc = 0x7F3A6B24u;
    // 7F3A6B24: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6B24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6B28:
    ctx->pc = 0x7F3A6B28u;
    // 7F3A6B28: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F3A6B2C:
    ctx->pc = 0x7F3A6B2Cu;
    // 7F3A6B2C: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F3A6B30:
    ctx->pc = 0x7F3A6B30u;
    // 7F3A6B30: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6B30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6B34:
    ctx->pc = 0x7F3A6B34u;
    // 7F3A6B34: bl      0x7F023F7C
    {
            ctx->lr = 0x7F3A6B38u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F3A6B38:
    ctx->pc = 0x7F3A6B38u;
    ctx->downcount -= 2;
    // 7F3A6B38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B3C:
    ctx->pc = 0x7F3A6B3Cu;
    // 7F3A6B3C: bl      0x7F023FEC
    {
            ctx->lr = 0x7F3A6B40u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F3A6B40:
    ctx->pc = 0x7F3A6B40u;
    ctx->downcount -= 2;
    // 7F3A6B40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B44:
    ctx->pc = 0x7F3A6B44u;
    // 7F3A6B44: bl      0x7F024034
    {
            ctx->lr = 0x7F3A6B48u;
            ctx->pc = 0x7F024034u;
            return;
    }

label_7F3A6B48:
    ctx->pc = 0x7F3A6B48u;
    ctx->downcount -= 2;
    // 7F3A6B48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B4C:
    ctx->pc = 0x7F3A6B4Cu;
    // 7F3A6B4C: bl      0x7F023FDC
    {
            ctx->lr = 0x7F3A6B50u;
            ctx->pc = 0x7F023FDCu;
            return;
    }

label_7F3A6B50:
    ctx->pc = 0x7F3A6B50u;
    ctx->downcount -= 2;
    // 7F3A6B50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B54:
    ctx->pc = 0x7F3A6B54u;
    // 7F3A6B54: bl      0x7F023FCC
    {
            ctx->lr = 0x7F3A6B58u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F3A6B58:
    ctx->pc = 0x7F3A6B58u;
    ctx->downcount -= 8;
    // 7F3A6B58: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6B5C:
    ctx->pc = 0x7F3A6B5Cu;
    // 7F3A6B5C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F3A6B60:
    ctx->pc = 0x7F3A6B60u;
    // 7F3A6B60: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F3A6B64:
    ctx->pc = 0x7F3A6B64u;
    // 7F3A6B64: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6B68:
    ctx->pc = 0x7F3A6B68u;
    // 7F3A6B68: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3A6B6C:
    ctx->pc = 0x7F3A6B6Cu;
    // 7F3A6B6C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F3A6B70:
    ctx->pc = 0x7F3A6B70u;
    // 7F3A6B70: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A6B74:
    ctx->pc = 0x7F3A6B74u;
    // 7F3A6B74: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A6B78u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A6B78:
    ctx->pc = 0x7F3A6B78u;
    ctx->downcount -= 3;
    // 7F3A6B78: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6B7C:
    ctx->pc = 0x7F3A6B7Cu;
    // 7F3A6B7C: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F3A6B80:
    ctx->pc = 0x7F3A6B80u;
    // 7F3A6B80: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A6B84u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A6B84:
    ctx->pc = 0x7F3A6B84u;
    ctx->downcount -= 4;
    // 7F3A6B84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6B88:
    ctx->pc = 0x7F3A6B88u;
    // 7F3A6B88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B8C:
    ctx->pc = 0x7F3A6B8Cu;
    // 7F3A6B8C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A6B90:
    ctx->pc = 0x7F3A6B90u;
    // 7F3A6B90: bl      0x7F0242F4
    {
            ctx->lr = 0x7F3A6B94u;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F3A6B94:
    ctx->pc = 0x7F3A6B94u;
    ctx->downcount -= 3;
    // 7F3A6B94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6B98:
    ctx->pc = 0x7F3A6B98u;
    // 7F3A6B98: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F3A6B9C:
    ctx->pc = 0x7F3A6B9Cu;
    // 7F3A6B9C: bl      0x7F024060
    {
            ctx->lr = 0x7F3A6BA0u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F3A6BA0:
    ctx->pc = 0x7F3A6BA0u;
    ctx->downcount -= 3;
    // 7F3A6BA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6BA4:
    ctx->pc = 0x7F3A6BA4u;
    // 7F3A6BA4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3A6BA8:
    ctx->pc = 0x7F3A6BA8u;
    // 7F3A6BA8: bl      0x7F0688B0
    {
            ctx->lr = 0x7F3A6BACu;
            ctx->pc = 0x7F0688B0u;
            return;
    }

label_7F3A6BAC:
    ctx->pc = 0x7F3A6BACu;
    ctx->downcount -= 4;
    // 7F3A6BAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6BB0:
    ctx->pc = 0x7F3A6BB0u;
    // 7F3A6BB0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3A6BB4:
    ctx->pc = 0x7F3A6BB4u;
    // 7F3A6BB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A6BB8:
    ctx->pc = 0x7F3A6BB8u;
    // 7F3A6BB8: bl      0x7F023FC0
    {
            ctx->lr = 0x7F3A6BBCu;
            ctx->pc = 0x7F023FC0u;
            return;
    }

label_7F3A6BBC:
    ctx->pc = 0x7F3A6BBCu;
    ctx->downcount -= 6;
    // 7F3A6BBC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6BC0:
    ctx->pc = 0x7F3A6BC0u;
    // 7F3A6BC0: addi    r3, r28, 496
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(496);

label_7F3A6BC4:
    ctx->pc = 0x7F3A6BC4u;
    // 7F3A6BC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A6BC8:
    ctx->pc = 0x7F3A6BC8u;
    // 7F3A6BC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A6BCC:
    ctx->pc = 0x7F3A6BCCu;
    // 7F3A6BCC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F3A6BD0:
    ctx->pc = 0x7F3A6BD0u;
    // 7F3A6BD0: bl      0x7F01CD70
    {
            ctx->lr = 0x7F3A6BD4u;
            ctx->pc = 0x7F01CD70u;
            return;
    }

label_7F3A6BD4:
    ctx->pc = 0x7F3A6BD4u;
    ctx->downcount -= 2;
    // 7F3A6BD4: addi    r3, r28, 496
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(496);

label_7F3A6BD8:
    ctx->pc = 0x7F3A6BD8u;
    // 7F3A6BD8: bl      0x7F01CD8C
    {
            ctx->lr = 0x7F3A6BDCu;
            ctx->pc = 0x7F01CD8Cu;
            return;
    }

label_7F3A6BDC:
    ctx->pc = 0x7F3A6BDCu;
    ctx->downcount -= 10;
    // 7F3A6BDC: lha     r0, 5072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5072);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6BE0:
    ctx->pc = 0x7F3A6BE0u;
    // 7F3A6BE0: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F3A6BE4:
    ctx->pc = 0x7F3A6BE4u;
    // 7F3A6BE4: addi    r27, r3, 9997
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(9997);

label_7F3A6BE8:
    ctx->pc = 0x7F3A6BE8u;
    // 7F3A6BE8: cmpwi   r0, 0
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

label_7F3A6BEC:
    ctx->pc = 0x7F3A6BECu;
    // 7F3A6BEC: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F3A6BF0:
    ctx->pc = 0x7F3A6BF0u;
    // 7F3A6BF0: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F3A6BF4:
    ctx->pc = 0x7F3A6BF4u;
    // 7F3A6BF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6BF8:
    ctx->pc = 0x7F3A6BF8u;
    // 7F3A6BF8: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F3A6BFC:
    ctx->pc = 0x7F3A6BFCu;
    // 7F3A6BFC: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F3A6C00:
    ctx->pc = 0x7F3A6C00u;
    // 7F3A6C00: bl      0x7F04272C
    {
            ctx->lr = 0x7F3A6C04u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F3A6C04:
    ctx->pc = 0x7F3A6C04u;
    ctx->downcount -= 5;
    // 7F3A6C04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C08:
    ctx->pc = 0x7F3A6C08u;
    // 7F3A6C08: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3A6C0C:
    ctx->pc = 0x7F3A6C0Cu;
    // 7F3A6C0C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F3A6C10:
    ctx->pc = 0x7F3A6C10u;
    // 7F3A6C10: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F3A6C14:
    ctx->pc = 0x7F3A6C14u;
    // 7F3A6C14: bl      0x7F042C2C
    {
            ctx->lr = 0x7F3A6C18u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F3A6C18:
    ctx->pc = 0x7F3A6C18u;
    ctx->downcount -= 3;
    // 7F3A6C18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C1C:
    ctx->pc = 0x7F3A6C1Cu;
    // 7F3A6C1C: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F3A6C20:
    ctx->pc = 0x7F3A6C20u;
    // 7F3A6C20: bl      0x7F042B6C
    {
            ctx->lr = 0x7F3A6C24u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F3A6C24:
    ctx->pc = 0x7F3A6C24u;
    ctx->downcount -= 9;
    // 7F3A6C24: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F3A6C28:
    ctx->pc = 0x7F3A6C28u;
    // 7F3A6C28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C2C:
    ctx->pc = 0x7F3A6C2Cu;
    // 7F3A6C2C: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F3A6C30:
    ctx->pc = 0x7F3A6C30u;
    // 7F3A6C30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A6C34:
    ctx->pc = 0x7F3A6C34u;
    // 7F3A6C34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A6C38:
    ctx->pc = 0x7F3A6C38u;
    // 7F3A6C38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A6C3C:
    ctx->pc = 0x7F3A6C3Cu;
    // 7F3A6C3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A6C40:
    ctx->pc = 0x7F3A6C40u;
    // 7F3A6C40: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A6C44:
    ctx->pc = 0x7F3A6C44u;
    // 7F3A6C44: bl      0x7F042C94
    {
            ctx->lr = 0x7F3A6C48u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F3A6C48:
    ctx->pc = 0x7F3A6C48u;
    ctx->downcount -= 3;
    // 7F3A6C48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C4C:
    ctx->pc = 0x7F3A6C4Cu;
    // 7F3A6C4C: addi    r4, r28, 688
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(688);

label_7F3A6C50:
    ctx->pc = 0x7F3A6C50u;
    // 7F3A6C50: bl      0x7F042B20
    {
            ctx->lr = 0x7F3A6C54u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F3A6C54:
    ctx->pc = 0x7F3A6C54u;
    ctx->downcount -= 3;
    // 7F3A6C54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6C58:
    ctx->pc = 0x7F3A6C58u;
    // 7F3A6C58: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C5C:
    ctx->pc = 0x7F3A6C5Cu;
    // 7F3A6C5C: bl      0x7F023E5C
    {
            ctx->lr = 0x7F3A6C60u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F3A6C60:
    ctx->pc = 0x7F3A6C60u;
    ctx->downcount -= 5;
    // 7F3A6C60: lis     r4, 128
    ctx->gpr[4] = ((u32)(s32)(128) << 16);

label_7F3A6C64:
    ctx->pc = 0x7F3A6C64u;
    // 7F3A6C64: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6C68:
    ctx->pc = 0x7F3A6C68u;
    // 7F3A6C68: addi    r4, r4, 27727
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27727);

label_7F3A6C6C:
    ctx->pc = 0x7F3A6C6Cu;
    // 7F3A6C6C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F3A6C70:
    ctx->pc = 0x7F3A6C70u;
    // 7F3A6C70: bl      0x7F04272C
    {
            ctx->lr = 0x7F3A6C74u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F3A6C74:
    ctx->pc = 0x7F3A6C74u;
    ctx->downcount -= 3;
    // 7F3A6C74: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6C78:
    ctx->pc = 0x7F3A6C78u;
    // 7F3A6C78: addi    r4, r28, 688
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(688);

label_7F3A6C7C:
    ctx->pc = 0x7F3A6C7Cu;
    // 7F3A6C7C: bl      0x7F042B20
    {
            ctx->lr = 0x7F3A6C80u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F3A6C80:
    ctx->pc = 0x7F3A6C80u;
    ctx->downcount -= 4;
    // 7F3A6C80: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A6C84:
    ctx->pc = 0x7F3A6C84u;
    // 7F3A6C84: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6C88:
    ctx->pc = 0x7F3A6C88u;
    // 7F3A6C88: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F3A6C8C:
    ctx->pc = 0x7F3A6C8Cu;
    // 7F3A6C8C: bl      0x7F042B74
    {
            ctx->lr = 0x7F3A6C90u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F3A6C90:
    ctx->pc = 0x7F3A6C90u;
    ctx->downcount -= 4;
    // 7F3A6C90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6C94:
    ctx->pc = 0x7F3A6C94u;
    // 7F3A6C94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A6C98:
    ctx->pc = 0x7F3A6C98u;
    // 7F3A6C98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6C9C:
    ctx->pc = 0x7F3A6C9Cu;
    // 7F3A6C9C: b       0x7F3A6CB0
    {
            goto label_7F3A6CB0;
    }

label_7F3A6CA0:
    loop_7F3A6CA0(ctx);
    if (ctx->pc == 0x7F3A6CB8u) goto label_7F3A6CB8;
    return;
label_7F3A6CA4:
    // 7F3A6CA4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3A6CA8:
    ctx->pc = 0x7F3A6CA8u;
    // 7F3A6CA8: stwx    r4, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6CAC:
    // 7F3A6CAC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3A6CB0:
    ctx->downcount -= 2;
    // 7F3A6CB0: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A6CB4:
    // 7F3A6CB4: bc    12, 1, 0x7F3A6CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6CA0u;
                return;
            }
            goto label_7F3A6CA0;
        }
    }

label_7F3A6CB8:
    ctx->pc = 0x7F3A6CB8u;
    ctx->downcount -= 3;
    // 7F3A6CB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A6CBC:
    ctx->pc = 0x7F3A6CBCu;
    // 7F3A6CBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A6CC0:
    ctx->pc = 0x7F3A6CC0u;
    // 7F3A6CC0: bl      0x7F3A15B8
    {
            ctx->lr = 0x7F3A6CC4u;
            ctx->pc = 0x7F3A15B8u;
            return;
    }

label_7F3A6CC4:
    ctx->pc = 0x7F3A6CC4u;
    ctx->downcount -= 12;
    // 7F3A6CC4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A6CC8:
    ctx->pc = 0x7F3A6CC8u;
    // 7F3A6CC8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A6CCC:
    ctx->pc = 0x7F3A6CCCu;
    // 7F3A6CCC: addi    r5, r3, -21456
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21456);

label_7F3A6CD0:
    ctx->pc = 0x7F3A6CD0u;
    // 7F3A6CD0: lfs     f0, -21412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6CD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6CD4:
    ctx->pc = 0x7F3A6CD4u;
    // 7F3A6CD4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6CD4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A6CD8:
    ctx->pc = 0x7F3A6CD8u;
    // 7F3A6CD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6CDC:
    ctx->pc = 0x7F3A6CDCu;
    // 7F3A6CDC: stfs     f1, 4132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6CDCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A6CE0:
    ctx->pc = 0x7F3A6CE0u;
    // 7F3A6CE0: stfs     f0, 4144(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6CE0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6CE4:
    ctx->pc = 0x7F3A6CE4u;
    // 7F3A6CE4: stw     r3, 4128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6CE8:
    ctx->pc = 0x7F3A6CE8u;
    // 7F3A6CE8: lha     r0, 5072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5072);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6CEC:
    ctx->pc = 0x7F3A6CECu;
    // 7F3A6CEC: cmpwi   r0, 0
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

label_7F3A6CF0:
    ctx->pc = 0x7F3A6CF0u;
    // 7F3A6CF0: bc    12, 2, 0x7F3A6D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6D18;
        }
    }

label_7F3A6CF4:
    ctx->pc = 0x7F3A6CF4u;
    ctx->downcount -= 9;
    // 7F3A6CF4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A6CF8:
    ctx->pc = 0x7F3A6CF8u;
    // 7F3A6CF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A6CFC:
    ctx->pc = 0x7F3A6CFCu;
    // 7F3A6CFC: lfs     f1, -21408(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6CFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A6D00:
    ctx->pc = 0x7F3A6D00u;
    // 7F3A6D00: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F3A6D04:
    ctx->pc = 0x7F3A6D04u;
    // 7F3A6D04: lfs     f0, -21404(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6D08:
    ctx->pc = 0x7F3A6D08u;
    // 7F3A6D08: stfs     f1, 4136(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D08u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A6D0C:
    ctx->pc = 0x7F3A6D0Cu;
    // 7F3A6D0C: stfs     f0, 4140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D0Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6D10:
    ctx->pc = 0x7F3A6D10u;
    // 7F3A6D10: stw     r0, 4124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6D14:
    ctx->pc = 0x7F3A6D14u;
    // 7F3A6D14: b       0x7F3A6D24
    {
            goto label_7F3A6D24;
    }

label_7F3A6D18:
    ctx->pc = 0x7F3A6D18u;
    ctx->downcount -= 3;
    // 7F3A6D18: stfs     f1, 4136(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A6D1C:
    ctx->pc = 0x7F3A6D1Cu;
    // 7F3A6D1C: stfs     f1, 4140(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D1Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A6D20:
    ctx->pc = 0x7F3A6D20u;
    // 7F3A6D20: stw     r3, 4124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6D24:
    ctx->pc = 0x7F3A6D24u;
    ctx->downcount -= 18;
    // 7F3A6D24: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F3A6D28:
    ctx->pc = 0x7F3A6D28u;
    // 7F3A6D28: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A6D2C:
    ctx->pc = 0x7F3A6D2Cu;
    // 7F3A6D2C: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F3A6D30:
    ctx->pc = 0x7F3A6D30u;
    // 7F3A6D30: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3A6D34:
    ctx->pc = 0x7F3A6D34u;
    // 7F3A6D34: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3A6D38:
    ctx->pc = 0x7F3A6D38u;
    // 7F3A6D38: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6D3C:
    ctx->pc = 0x7F3A6D3Cu;
    // 7F3A6D3C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F3A6D40:
    ctx->pc = 0x7F3A6D40u;
    // 7F3A6D40: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F3A6D44:
    ctx->pc = 0x7F3A6D44u;
    // 7F3A6D44: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F3A6D48:
    ctx->pc = 0x7F3A6D48u;
    // 7F3A6D48: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F3A6D4C:
    ctx->pc = 0x7F3A6D4Cu;
    // 7F3A6D4C: lfs     f1, -21400(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6D4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A6D50:
    ctx->pc = 0x7F3A6D50u;
    // 7F3A6D50: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F3A6D54:
    ctx->pc = 0x7F3A6D54u;
    // 7F3A6D54: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A6D58:
    ctx->pc = 0x7F3A6D58u;
    // 7F3A6D58: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F3A6D5C:
    ctx->pc = 0x7F3A6D5Cu;
    // 7F3A6D5C: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F3A6D60:
    ctx->pc = 0x7F3A6D60u;
    // 7F3A6D60: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3A6D64:
    ctx->pc = 0x7F3A6D64u;
    // 7F3A6D64: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A6D68:
    ctx->pc = 0x7F3A6D68u;
    // 7F3A6D68: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3A6D6Cu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3A6D6C:
    ctx->pc = 0x7F3A6D6Cu;
    ctx->downcount -= 3;
    // 7F3A6D6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6D70:
    ctx->pc = 0x7F3A6D70u;
    // 7F3A6D70: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A6D74:
    ctx->pc = 0x7F3A6D74u;
    // 7F3A6D74: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3A6D78u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3A6D78:
    ctx->pc = 0x7F3A6D78u;
    ctx->downcount -= 4;
    // 7F3A6D78: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F3A6D7C:
    ctx->pc = 0x7F3A6D7Cu;
    // 7F3A6D7C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6D80:
    ctx->pc = 0x7F3A6D80u;
    // 7F3A6D80: addi    r4, r4, 14640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14640);

label_7F3A6D84:
    ctx->pc = 0x7F3A6D84u;
    // 7F3A6D84: bl      0x7F2D8CF0
    {
            ctx->lr = 0x7F3A6D88u;
            ctx->pc = 0x7F2D8CF0u;
            return;
    }

label_7F3A6D88:
    ctx->pc = 0x7F3A6D88u;
    ctx->downcount -= 3;
    // 7F3A6D88: stw     r3, 4284(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6D8C:
    ctx->pc = 0x7F3A6D8Cu;
    // 7F3A6D8C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3A6D90:
    ctx->pc = 0x7F3A6D90u;
    // 7F3A6D90: bl      0x7F3A6A78
    {
            ctx->lr = 0x7F3A6D94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6A78u;
                return;
            }
            goto label_7F3A6A78;
    }

label_7F3A6D94:
    ctx->pc = 0x7F3A6D94u;
    ctx->downcount -= 6;
    // 7F3A6D94: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6D98:
    ctx->pc = 0x7F3A6D98u;
    // 7F3A6D98: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F3A6D9C:
    ctx->pc = 0x7F3A6D9Cu;
    // 7F3A6D9C: li      r5, 87
    ctx->gpr[5] = (u32)(s32)(87);

label_7F3A6DA0:
    ctx->pc = 0x7F3A6DA0u;
    // 7F3A6DA0: li      r6, 87
    ctx->gpr[6] = (u32)(s32)(87);

label_7F3A6DA4:
    ctx->pc = 0x7F3A6DA4u;
    // 7F3A6DA4: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F3A6DA8:
    ctx->pc = 0x7F3A6DA8u;
    // 7F3A6DA8: bl      0x7F306788
    {
            ctx->lr = 0x7F3A6DACu;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F3A6DAC:
    ctx->pc = 0x7F3A6DACu;
    ctx->downcount -= 3;
    // 7F3A6DAC: cmplwi  r3, 0x0000
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

label_7F3A6DB0:
    ctx->pc = 0x7F3A6DB0u;
    // 7F3A6DB0: stw     r3, 5356(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6DB4:
    ctx->pc = 0x7F3A6DB4u;
    // 7F3A6DB4: bc    4, 2, 0x7F3A6DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6DC0;
        }
    }

label_7F3A6DB8:
    ctx->pc = 0x7F3A6DB8u;
    ctx->downcount -= 2;
    // 7F3A6DB8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A6DBC:
    ctx->pc = 0x7F3A6DBCu;
    // 7F3A6DBC: b       0x7F3A6DFC
    {
            goto label_7F3A6DFC;
    }

label_7F3A6DC0:
    ctx->pc = 0x7F3A6DC0u;
    ctx->downcount -= 6;
    // 7F3A6DC0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6DC4:
    ctx->pc = 0x7F3A6DC4u;
    // 7F3A6DC4: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F3A6DC8:
    ctx->pc = 0x7F3A6DC8u;
    // 7F3A6DC8: li      r5, 87
    ctx->gpr[5] = (u32)(s32)(87);

label_7F3A6DCC:
    ctx->pc = 0x7F3A6DCCu;
    // 7F3A6DCC: li      r6, 87
    ctx->gpr[6] = (u32)(s32)(87);

label_7F3A6DD0:
    ctx->pc = 0x7F3A6DD0u;
    // 7F3A6DD0: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F3A6DD4:
    ctx->pc = 0x7F3A6DD4u;
    // 7F3A6DD4: bl      0x7F306788
    {
            ctx->lr = 0x7F3A6DD8u;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F3A6DD8:
    ctx->pc = 0x7F3A6DD8u;
    ctx->downcount -= 3;
    // 7F3A6DD8: cmplwi  r3, 0x0000
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

label_7F3A6DDC:
    ctx->pc = 0x7F3A6DDCu;
    // 7F3A6DDC: stw     r3, 5360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6DE0:
    ctx->pc = 0x7F3A6DE0u;
    // 7F3A6DE0: bc    4, 2, 0x7F3A6DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6DEC;
        }
    }

label_7F3A6DE4:
    ctx->pc = 0x7F3A6DE4u;
    ctx->downcount -= 2;
    // 7F3A6DE4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A6DE8:
    ctx->pc = 0x7F3A6DE8u;
    // 7F3A6DE8: b       0x7F3A6DFC
    {
            goto label_7F3A6DFC;
    }

label_7F3A6DEC:
    ctx->pc = 0x7F3A6DECu;
    ctx->downcount -= 2;
    // 7F3A6DEC: addi    r3, r28, 448
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(448);

label_7F3A6DF0:
    ctx->pc = 0x7F3A6DF0u;
    // 7F3A6DF0: bl      0x7F07CCC4
    {
            ctx->lr = 0x7F3A6DF4u;
            ctx->pc = 0x7F07CCC4u;
            return;
    }

label_7F3A6DF4:
    ctx->pc = 0x7F3A6DF4u;
    ctx->downcount -= 2;
    // 7F3A6DF4: stw     r3, 5364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A6DF8:
    ctx->pc = 0x7F3A6DF8u;
    // 7F3A6DF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6DFC:
    ctx->pc = 0x7F3A6DFCu;
    ctx->downcount -= 16;
    // 7F3A6DFC: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6E00:
    ctx->pc = 0x7F3A6E00u;
    // 7F3A6E00: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6E04:
    ctx->pc = 0x7F3A6E04u;
    // 7F3A6E04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6E08:
    ctx->pc = 0x7F3A6E08u;
    // 7F3A6E08: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3A6E0C:
    ctx->pc = 0x7F3A6E0Cu;
    // 7F3A6E0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6E10:
    ctx->pc = 0x7F3A6E10u;
    ctx->downcount -= 7;
    // 7F3A6E10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6E14:
    ctx->pc = 0x7F3A6E14u;
    // 7F3A6E14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6E18:
    ctx->pc = 0x7F3A6E18u;
    // 7F3A6E18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6E1C:
    ctx->pc = 0x7F3A6E1Cu;
    // 7F3A6E1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6E20:
    ctx->pc = 0x7F3A6E20u;
    // 7F3A6E20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6E24:
    ctx->pc = 0x7F3A6E24u;
    // 7F3A6E24: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A6E28:
    ctx->pc = 0x7F3A6E28u;
    // 7F3A6E28: bl      0x7F023E10
    {
            ctx->lr = 0x7F3A6E2Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F3A6E2C:
    ctx->pc = 0x7F3A6E2Cu;
    ctx->downcount -= 2;
    // 7F3A6E2C: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A6E30:
    ctx->pc = 0x7F3A6E30u;
    // 7F3A6E30: bl      0x7F042AAC
    {
            ctx->lr = 0x7F3A6E34u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F3A6E34:
    ctx->pc = 0x7F3A6E34u;
    ctx->downcount -= 2;
    // 7F3A6E34: addi    r3, r31, 644
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(644);

label_7F3A6E38:
    ctx->pc = 0x7F3A6E38u;
    // 7F3A6E38: bl      0x7F042AAC
    {
            ctx->lr = 0x7F3A6E3Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F3A6E3C:
    ctx->pc = 0x7F3A6E3Cu;
    ctx->downcount -= 2;
    // 7F3A6E3C: addi    r3, r31, 864
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A6E40:
    ctx->pc = 0x7F3A6E40u;
    // 7F3A6E40: bl      0x7F0146B0
    {
            ctx->lr = 0x7F3A6E44u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F3A6E44:
    ctx->pc = 0x7F3A6E44u;
    ctx->downcount -= 2;
    // 7F3A6E44: addi    r3, r31, 4160
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4160);

label_7F3A6E48:
    ctx->pc = 0x7F3A6E48u;
    // 7F3A6E48: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F3A6E4Cu;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F3A6E4C:
    ctx->pc = 0x7F3A6E4Cu;
    ctx->downcount -= 2;
    // 7F3A6E4C: lwz     r3, 4280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6E50:
    ctx->pc = 0x7F3A6E50u;
    // 7F3A6E50: bl      0x7F2D23E8
    {
            ctx->lr = 0x7F3A6E54u;
            ctx->pc = 0x7F2D23E8u;
            return;
    }

label_7F3A6E54:
    ctx->pc = 0x7F3A6E54u;
    ctx->downcount -= 6;
    // 7F3A6E54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6E58:
    ctx->pc = 0x7F3A6E58u;
    // 7F3A6E58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6E5C:
    ctx->pc = 0x7F3A6E5Cu;
    // 7F3A6E5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6E60:
    ctx->pc = 0x7F3A6E60u;
    // 7F3A6E60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6E64:
    ctx->pc = 0x7F3A6E64u;
    // 7F3A6E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6E68:
    ctx->pc = 0x7F3A6E68u;
    ctx->downcount -= 10;
    // 7F3A6E68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6E6C:
    ctx->pc = 0x7F3A6E6Cu;
    // 7F3A6E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6E70:
    ctx->pc = 0x7F3A6E70u;
    // 7F3A6E70: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A6E74:
    ctx->pc = 0x7F3A6E74u;
    // 7F3A6E74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6E78:
    ctx->pc = 0x7F3A6E78u;
    // 7F3A6E78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A6E7C:
    ctx->pc = 0x7F3A6E7Cu;
    // 7F3A6E7C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6E80:
    ctx->pc = 0x7F3A6E80u;
    // 7F3A6E80: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6E84:
    ctx->pc = 0x7F3A6E84u;
    // 7F3A6E84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6E88:
    ctx->pc = 0x7F3A6E88u;
    // 7F3A6E88: stw     r0, 15432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6E8C:
    ctx->pc = 0x7F3A6E8Cu;
    // 7F3A6E8C: bl      0x7F2BB23C
    {
            ctx->lr = 0x7F3A6E90u;
            ctx->pc = 0x7F2BB23Cu;
            return;
    }

label_7F3A6E90:
    ctx->pc = 0x7F3A6E90u;
    ctx->downcount -= 1;
    // 7F3A6E90: bl      0x7F3A7B50
    {
            ctx->lr = 0x7F3A6E94u;
            goto label_7F3A7B50;
    }

label_7F3A6E94:
    ctx->pc = 0x7F3A6E94u;
    ctx->downcount -= 2;
    // 7F3A6E94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6E98:
    ctx->pc = 0x7F3A6E98u;
    // 7F3A6E98: bl      0x7F3A6E10
    {
            ctx->lr = 0x7F3A6E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6E10u;
                return;
            }
            goto label_7F3A6E10;
    }

label_7F3A6E9C:
    ctx->pc = 0x7F3A6E9Cu;
    ctx->downcount -= 3;
    // 7F3A6E9C: lwz     r3, 5356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6EA0:
    ctx->pc = 0x7F3A6EA0u;
    // 7F3A6EA0: cmplwi  r3, 0x0000
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

label_7F3A6EA4:
    ctx->pc = 0x7F3A6EA4u;
    // 7F3A6EA4: bc    12, 2, 0x7F3A6EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6EAC;
        }
    }

label_7F3A6EA8:
    ctx->pc = 0x7F3A6EA8u;
    ctx->downcount -= 1;
    // 7F3A6EA8: bl      0x7F306768
    {
            ctx->lr = 0x7F3A6EACu;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F3A6EAC:
    ctx->pc = 0x7F3A6EACu;
    ctx->downcount -= 3;
    // 7F3A6EAC: lwz     r3, 5360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6EB0:
    ctx->pc = 0x7F3A6EB0u;
    // 7F3A6EB0: cmplwi  r3, 0x0000
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

label_7F3A6EB4:
    ctx->pc = 0x7F3A6EB4u;
    // 7F3A6EB4: bc    12, 2, 0x7F3A6EBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6EBC;
        }
    }

label_7F3A6EB8:
    ctx->pc = 0x7F3A6EB8u;
    ctx->downcount -= 1;
    // 7F3A6EB8: bl      0x7F306768
    {
            ctx->lr = 0x7F3A6EBCu;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F3A6EBC:
    ctx->pc = 0x7F3A6EBCu;
    ctx->downcount -= 3;
    // 7F3A6EBC: lwz     r3, 5364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A6EC0:
    ctx->pc = 0x7F3A6EC0u;
    // 7F3A6EC0: cmplwi  r3, 0x0000
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

label_7F3A6EC4:
    ctx->pc = 0x7F3A6EC4u;
    // 7F3A6EC4: bc    12, 2, 0x7F3A6ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6ECC;
        }
    }

label_7F3A6EC8:
    ctx->pc = 0x7F3A6EC8u;
    ctx->downcount -= 1;
    // 7F3A6EC8: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3A6ECCu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3A6ECC:
    ctx->pc = 0x7F3A6ECCu;
    ctx->downcount -= 6;
    // 7F3A6ECC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6ED0:
    ctx->pc = 0x7F3A6ED0u;
    // 7F3A6ED0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6ED4:
    ctx->pc = 0x7F3A6ED4u;
    // 7F3A6ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6ED8:
    ctx->pc = 0x7F3A6ED8u;
    // 7F3A6ED8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6EDC:
    ctx->pc = 0x7F3A6EDCu;
    // 7F3A6EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6EE0:
    ctx->pc = 0x7F3A6EE0u;
    ctx->downcount -= 6;
    // 7F3A6EE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6EE4:
    ctx->pc = 0x7F3A6EE4u;
    // 7F3A6EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6EE8:
    ctx->pc = 0x7F3A6EE8u;
    // 7F3A6EE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6EEC:
    ctx->pc = 0x7F3A6EECu;
    // 7F3A6EEC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A6EF0:
    ctx->pc = 0x7F3A6EF0u;
    // 7F3A6EF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A6EF4:
    ctx->pc = 0x7F3A6EF4u;
    // 7F3A6EF4: bl      0x7F039A44
    {
            ctx->lr = 0x7F3A6EF8u;
            ctx->pc = 0x7F039A44u;
            return;
    }

label_7F3A6EF8:
    ctx->pc = 0x7F3A6EF8u;
    ctx->downcount -= 21;
    // 7F3A6EF8: lbz     r0, 4887(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4887);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A6EFC:
    ctx->pc = 0x7F3A6EFCu;
    // 7F3A6EFC: addi    r6, r31, 4884
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4884);

label_7F3A6F00:
    ctx->pc = 0x7F3A6F00u;
    // 7F3A6F00: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A6F04:
    ctx->pc = 0x7F3A6F04u;
    // 7F3A6F04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A6F08:
    ctx->pc = 0x7F3A6F08u;
    // 7F3A6F08: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3A6F0C:
    ctx->pc = 0x7F3A6F0Cu;
    // 7F3A6F0C: lfd     f1, -21448(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21448);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A6F10:
    ctx->pc = 0x7F3A6F10u;
    // 7F3A6F10: add   r3, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3A6F14:
    ctx->pc = 0x7F3A6F14u;
    // 7F3A6F14: lwz     r5, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A6F18:
    ctx->pc = 0x7F3A6F18u;
    // 7F3A6F18: lbz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A6F1C:
    ctx->pc = 0x7F3A6F1Cu;
    // 7F3A6F1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A6F20:
    ctx->pc = 0x7F3A6F20u;
    // 7F3A6F20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6F24:
    ctx->pc = 0x7F3A6F24u;
    // 7F3A6F24: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F3A6F28:
    ctx->pc = 0x7F3A6F28u;
    // 7F3A6F28: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3A6F2C:
    ctx->pc = 0x7F3A6F2Cu;
    // 7F3A6F2C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F3A6F30:
    ctx->pc = 0x7F3A6F30u;
    // 7F3A6F30: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3A6F34:
    ctx->pc = 0x7F3A6F34u;
    // 7F3A6F34: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6F38:
    ctx->pc = 0x7F3A6F38u;
    // 7F3A6F38: stw     r0, 4304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6F3C:
    ctx->pc = 0x7F3A6F3Cu;
    // 7F3A6F3C: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A6F40:
    ctx->pc = 0x7F3A6F40u;
    // 7F3A6F40: b       0x7F3A6F88
    {
            goto label_7F3A6F88;
    }

label_7F3A6F44:
    ctx->pc = 0x7F3A6F44u;
    ctx->downcount -= 17;
    // 7F3A6F44: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F44u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6F48:
    // 7F3A6F48: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F3A6F4C:
    ctx->pc = 0x7F3A6F4Cu;
    // 7F3A6F4C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A6F50:
    // 7F3A6F50: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F3A6F54:
    // 7F3A6F54: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F3A6F58:
    ctx->pc = 0x7F3A6F58u;
    // 7F3A6F58: stfs     f0, 4308(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6F5C:
    ctx->pc = 0x7F3A6F5Cu;
    // 7F3A6F5C: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F5Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6F60:
    ctx->pc = 0x7F3A6F60u;
    // 7F3A6F60: stfs     f0, 4312(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4312);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6F64:
    ctx->pc = 0x7F3A6F64u;
    // 7F3A6F64: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F64u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A6F68:
    ctx->pc = 0x7F3A6F68u;
    // 7F3A6F68: stfs     f0, 4316(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4316);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6F6C:
    ctx->pc = 0x7F3A6F6Cu;
    // 7F3A6F6C: lha     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A6F70:
    // 7F3A6F70: addi    r6, r6, 40
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(40);

label_7F3A6F74:
    // 7F3A6F74: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3A6F78:
    ctx->pc = 0x7F3A6F78u;
    // 7F3A6F78: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6F7C:
    ctx->pc = 0x7F3A6F7Cu;
    // 7F3A6F7C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A6F80:
    ctx->pc = 0x7F3A6F80u;
    // 7F3A6F80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3A6F84:
    ctx->pc = 0x7F3A6F84u;
    // 7F3A6F84: stfs     f0, 4320(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A6F84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4320);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A6F88:
    ctx->pc = 0x7F3A6F88u;
    ctx->downcount -= 3;
    // 7F3A6F88: lwz     r0, 4304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6F8C:
    // 7F3A6F8C: cmpw    r7, r0
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

label_7F3A6F90:
    // 7F3A6F90: bc    12, 0, 0x7F3A6F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6F44u;
                return;
            }
            goto label_7F3A6F44;
        }
    }

label_7F3A6F94:
    ctx->pc = 0x7F3A6F94u;
    ctx->downcount -= 7;
    // 7F3A6F94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6F98:
    ctx->pc = 0x7F3A6F98u;
    // 7F3A6F98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A6F9C:
    ctx->pc = 0x7F3A6F9Cu;
    // 7F3A6F9C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A6FA0:
    ctx->pc = 0x7F3A6FA0u;
    // 7F3A6FA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6FA4:
    ctx->pc = 0x7F3A6FA4u;
    // 7F3A6FA4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A6FA8:
    ctx->pc = 0x7F3A6FA8u;
    // 7F3A6FA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6FAC:
    ctx->pc = 0x7F3A6FACu;
    ctx->downcount -= 16;
    // 7F3A6FAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A6FB0:
    ctx->pc = 0x7F3A6FB0u;
    // 7F3A6FB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A6FB4:
    ctx->pc = 0x7F3A6FB4u;
    // 7F3A6FB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A6FB8:
    ctx->pc = 0x7F3A6FB8u;
    // 7F3A6FB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A6FBC:
    ctx->pc = 0x7F3A6FBCu;
    // 7F3A6FBC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A6FC0:
    ctx->pc = 0x7F3A6FC0u;
    // 7F3A6FC0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A6FC4:
    ctx->downcount -= 1;
    // 7F3A6FC4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A6FC8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A6FC8:
    ctx->downcount -= 2;
    // 7F3A6FC8: cmplwi  r3, 0x0000
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

label_7F3A6FCC:
    // 7F3A6FCC: bc    12, 2, 0x7F3A6FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A6FE4;
        }
    }

label_7F3A6FD0:
    ctx->downcount -= 1;
    // 7F3A6FD0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A6FD4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A6FD4:
    ctx->pc = 0x7F3A6FD4u;
    ctx->downcount -= 4;
    // 7F3A6FD4: stb     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A6FD8:
    // 7F3A6FD8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3A6FDC:
    // 7F3A6FDC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F3A6FE0:
    // 7F3A6FE0: b       0x7F3A6FC4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6FC4u;
                return;
            }
            goto label_7F3A6FC4;
    }

label_7F3A6FE4:
    ctx->pc = 0x7F3A6FE4u;
    ctx->downcount -= 17;
    // 7F3A6FE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A6FE8:
    ctx->pc = 0x7F3A6FE8u;
    // 7F3A6FE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A6FEC:
    ctx->pc = 0x7F3A6FECu;
    // 7F3A6FEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A6FF0:
    ctx->pc = 0x7F3A6FF0u;
    // 7F3A6FF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A6FF4:
    ctx->pc = 0x7F3A6FF4u;
    // 7F3A6FF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A6FF8:
    ctx->pc = 0x7F3A6FF8u;
    // 7F3A6FF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A6FFC:
    ctx->pc = 0x7F3A6FFCu;
    ctx->downcount -= 16;
    // 7F3A6FFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7000:
    ctx->pc = 0x7F3A7000u;
    // 7F3A7000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7004:
    ctx->pc = 0x7F3A7004u;
    // 7F3A7004: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7008:
    ctx->pc = 0x7F3A7008u;
    // 7F3A7008: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A700C:
    ctx->pc = 0x7F3A700Cu;
    // 7F3A700C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A7010:
    ctx->pc = 0x7F3A7010u;
    // 7F3A7010: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A7014:
    ctx->downcount -= 1;
    // 7F3A7014: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7018u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7018:
    ctx->downcount -= 2;
    // 7F3A7018: cmplwi  r3, 0x0000
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

label_7F3A701C:
    // 7F3A701C: bc    12, 2, 0x7F3A7034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7034;
        }
    }

label_7F3A7020:
    ctx->downcount -= 1;
    // 7F3A7020: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A7024u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A7024:
    ctx->pc = 0x7F3A7024u;
    ctx->downcount -= 4;
    // 7F3A7024: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7028:
    // 7F3A7028: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F3A702C:
    // 7F3A702C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F3A7030:
    // 7F3A7030: b       0x7F3A7014
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7014u;
                return;
            }
            goto label_7F3A7014;
    }

label_7F3A7034:
    ctx->pc = 0x7F3A7034u;
    ctx->downcount -= 17;
    // 7F3A7034: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7038:
    ctx->pc = 0x7F3A7038u;
    // 7F3A7038: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A703C:
    ctx->pc = 0x7F3A703Cu;
    // 7F3A703C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7040:
    ctx->pc = 0x7F3A7040u;
    // 7F3A7040: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7044:
    ctx->pc = 0x7F3A7044u;
    // 7F3A7044: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7048:
    ctx->pc = 0x7F3A7048u;
    // 7F3A7048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A704C:
    ctx->pc = 0x7F3A704Cu;
    ctx->downcount -= 16;
    // 7F3A704C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7050:
    ctx->pc = 0x7F3A7050u;
    // 7F3A7050: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7054:
    ctx->pc = 0x7F3A7054u;
    // 7F3A7054: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7058:
    ctx->pc = 0x7F3A7058u;
    // 7F3A7058: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A705C:
    ctx->pc = 0x7F3A705Cu;
    // 7F3A705C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A7060:
    ctx->pc = 0x7F3A7060u;
    // 7F3A7060: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A7064:
    ctx->downcount -= 1;
    // 7F3A7064: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7068u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7068:
    ctx->downcount -= 2;
    // 7F3A7068: cmplwi  r3, 0x0000
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

label_7F3A706C:
    // 7F3A706C: bc    12, 2, 0x7F3A708C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A708C;
        }
    }

label_7F3A7070:
    ctx->downcount -= 1;
    // 7F3A7070: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3A7074u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3A7074:
    ctx->downcount -= 2;
    // 7F3A7074: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A7078:
    // 7F3A7078: bc    12, 2, 0x7F3A708C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A708C;
        }
    }

label_7F3A707C:
    ctx->pc = 0x7F3A707Cu;
    ctx->downcount -= 4;
    // 7F3A707C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7080:
    // 7F3A7080: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F3A7084:
    // 7F3A7084: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F3A7088:
    // 7F3A7088: b       0x7F3A7064
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7064u;
                return;
            }
            goto label_7F3A7064;
    }

label_7F3A708C:
    ctx->pc = 0x7F3A708Cu;
    ctx->downcount -= 17;
    // 7F3A708C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7090:
    ctx->pc = 0x7F3A7090u;
    // 7F3A7090: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A7094:
    ctx->pc = 0x7F3A7094u;
    // 7F3A7094: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7098:
    ctx->pc = 0x7F3A7098u;
    // 7F3A7098: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A709C:
    ctx->pc = 0x7F3A709Cu;
    // 7F3A709C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A70A0:
    ctx->pc = 0x7F3A70A0u;
    // 7F3A70A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A70A4:
    ctx->pc = 0x7F3A70A4u;
    ctx->downcount -= 7;
    // 7F3A70A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A70A8:
    ctx->pc = 0x7F3A70A8u;
    // 7F3A70A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A70AC:
    ctx->pc = 0x7F3A70ACu;
    // 7F3A70AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A70B0:
    ctx->pc = 0x7F3A70B0u;
    // 7F3A70B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A70B4:
    ctx->pc = 0x7F3A70B4u;
    // 7F3A70B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A70B8:
    ctx->pc = 0x7F3A70B8u;
    // 7F3A70B8: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F3A70BC:
    ctx->pc = 0x7F3A70BCu;
    // 7F3A70BC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A70C0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A70C0:
    ctx->pc = 0x7F3A70C0u;
    ctx->downcount -= 2;
    // 7F3A70C0: cmplwi  r3, 0x0000
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

label_7F3A70C4:
    ctx->pc = 0x7F3A70C4u;
    // 7F3A70C4: bc    12, 2, 0x7F3A70E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A70E0;
        }
    }

label_7F3A70C8:
    ctx->pc = 0x7F3A70C8u;
    ctx->downcount -= 2;
    // 7F3A70C8: addi    r4, r31, 5084
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5084);

label_7F3A70CC:
    ctx->pc = 0x7F3A70CCu;
    // 7F3A70CC: bl      0x7F3A6FFC
    {
            ctx->lr = 0x7F3A70D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6FFCu;
                return;
            }
            goto label_7F3A6FFC;
    }

label_7F3A70D0:
    ctx->pc = 0x7F3A70D0u;
    ctx->downcount -= 2;
    // 7F3A70D0: cmpwi   r3, 25
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A70D4:
    ctx->pc = 0x7F3A70D4u;
    // 7F3A70D4: bc    4, 1, 0x7F3A70E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A70E0;
        }
    }

label_7F3A70D8:
    ctx->pc = 0x7F3A70D8u;
    ctx->downcount -= 2;
    // 7F3A70D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A70DC:
    ctx->pc = 0x7F3A70DCu;
    // 7F3A70DC: b       0x7F3A710C
    {
            goto label_7F3A710C;
    }

label_7F3A70E0:
    ctx->pc = 0x7F3A70E0u;
    ctx->downcount -= 2;
    // 7F3A70E0: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F3A70E4:
    ctx->pc = 0x7F3A70E4u;
    // 7F3A70E4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A70E8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A70E8:
    ctx->pc = 0x7F3A70E8u;
    ctx->downcount -= 2;
    // 7F3A70E8: cmplwi  r3, 0x0000
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

label_7F3A70EC:
    ctx->pc = 0x7F3A70ECu;
    // 7F3A70EC: bc    12, 2, 0x7F3A7108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7108;
        }
    }

label_7F3A70F0:
    ctx->pc = 0x7F3A70F0u;
    ctx->downcount -= 2;
    // 7F3A70F0: addi    r4, r31, 5184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5184);

label_7F3A70F4:
    ctx->pc = 0x7F3A70F4u;
    // 7F3A70F4: bl      0x7F3A704C
    {
            ctx->lr = 0x7F3A70F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A704Cu;
                return;
            }
            goto label_7F3A704C;
    }

label_7F3A70F8:
    ctx->pc = 0x7F3A70F8u;
    ctx->downcount -= 2;
    // 7F3A70F8: cmpwi   r3, 25
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A70FC:
    ctx->pc = 0x7F3A70FCu;
    // 7F3A70FC: bc    4, 1, 0x7F3A7108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7108;
        }
    }

label_7F3A7100:
    ctx->pc = 0x7F3A7100u;
    ctx->downcount -= 2;
    // 7F3A7100: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A7104:
    ctx->pc = 0x7F3A7104u;
    // 7F3A7104: b       0x7F3A710C
    {
            goto label_7F3A710C;
    }

label_7F3A7108:
    ctx->pc = 0x7F3A7108u;
    ctx->downcount -= 1;
    // 7F3A7108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A710C:
    ctx->pc = 0x7F3A710Cu;
    ctx->downcount -= 6;
    // 7F3A710C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7110:
    ctx->pc = 0x7F3A7110u;
    // 7F3A7110: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7114:
    ctx->pc = 0x7F3A7114u;
    // 7F3A7114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7118:
    ctx->pc = 0x7F3A7118u;
    // 7F3A7118: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A711C:
    ctx->pc = 0x7F3A711Cu;
    // 7F3A711C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7120:
    ctx->pc = 0x7F3A7120u;
    ctx->downcount -= 17;
    // 7F3A7120: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7124:
    ctx->pc = 0x7F3A7124u;
    // 7F3A7124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7128:
    ctx->pc = 0x7F3A7128u;
    // 7F3A7128: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A712C:
    ctx->pc = 0x7F3A712Cu;
    // 7F3A712C: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A7130:
    ctx->pc = 0x7F3A7130u;
    // 7F3A7130: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7134:
    ctx->pc = 0x7F3A7134u;
    // 7F3A7134: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A7138:
    ctx->pc = 0x7F3A7138u;
    // 7F3A7138: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A713C:
    ctx->downcount -= 1;
    // 7F3A713C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7140u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7140:
    ctx->downcount -= 2;
    // 7F3A7140: or.   r29, r3, r3
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

label_7F3A7144:
    // 7F3A7144: bc    12, 2, 0x7F3A71A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A71A0;
        }
    }

label_7F3A7148:
    ctx->downcount -= 1;
    // 7F3A7148: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A714Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A714C:
    ctx->pc = 0x7F3A714Cu;
    ctx->downcount -= 4;
    // 7F3A714C: stb     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A7150:
    // 7F3A7150: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A7154:
    // 7F3A7154: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A7158:
    // 7F3A7158: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F3A715Cu;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F3A715C:
    ctx->pc = 0x7F3A715Cu;
    ctx->downcount -= 3;
    // 7F3A715C: lha     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7160:
    // 7F3A7160: cmpwi   r0, 30000
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

label_7F3A7164:
    // 7F3A7164: bc    4, 0, 0x7F3A718C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A718C;
        }
    }

label_7F3A7168:
    ctx->downcount -= 3;
    // 7F3A7168: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A716C:
    // 7F3A716C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7170:
    // 7F3A7170: bl      0x7F3CC990
    {
            ctx->lr = 0x7F3A7174u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F3A7174:
    ctx->pc = 0x7F3A7174u;
    ctx->downcount -= 4;
    // 7F3A7174: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7178:
    // 7F3A7178: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A717C:
    // 7F3A717C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3A7180:
    // 7F3A7180: bl      0x7F1025F8
    {
            ctx->lr = 0x7F3A7184u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F3A7184:
    ctx->pc = 0x7F3A7184u;
    ctx->downcount -= 2;
    // 7F3A7184: stb     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A7188:
    // 7F3A7188: b       0x7F3A7194
    {
            goto label_7F3A7194;
    }

label_7F3A718C:
    ctx->downcount -= 2;
    // 7F3A718C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A7190:
    ctx->pc = 0x7F3A7190u;
    // 7F3A7190: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7194:
    ctx->downcount -= 3;
    // 7F3A7194: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3A7198:
    // 7F3A7198: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F3A719C:
    // 7F3A719C: b       0x7F3A713C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A713Cu;
                return;
            }
            goto label_7F3A713C;
    }

label_7F3A71A0:
    ctx->pc = 0x7F3A71A0u;
    ctx->downcount -= 17;
    // 7F3A71A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A71A4:
    ctx->pc = 0x7F3A71A4u;
    // 7F3A71A4: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A71A8:
    ctx->pc = 0x7F3A71A8u;
    // 7F3A71A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A71AC:
    ctx->pc = 0x7F3A71ACu;
    // 7F3A71AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A71B0:
    ctx->pc = 0x7F3A71B0u;
    // 7F3A71B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3A71B4:
    ctx->pc = 0x7F3A71B4u;
    // 7F3A71B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A71B8:
    ctx->pc = 0x7F3A71B8u;
    ctx->downcount -= 17;
    // 7F3A71B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A71BC:
    ctx->pc = 0x7F3A71BCu;
    // 7F3A71BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A71C0:
    ctx->pc = 0x7F3A71C0u;
    // 7F3A71C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A71C4:
    ctx->pc = 0x7F3A71C4u;
    // 7F3A71C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A71C8:
    ctx->pc = 0x7F3A71C8u;
    // 7F3A71C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A71CC:
    ctx->pc = 0x7F3A71CCu;
    // 7F3A71CC: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F3A71D0:
    ctx->pc = 0x7F3A71D0u;
    // 7F3A71D0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A71D4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A71D4:
    ctx->pc = 0x7F3A71D4u;
    ctx->downcount -= 2;
    // 7F3A71D4: cmplwi  r3, 0x0000
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

label_7F3A71D8:
    ctx->pc = 0x7F3A71D8u;
    // 7F3A71D8: bc    12, 2, 0x7F3A71EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A71EC;
        }
    }

label_7F3A71DC:
    ctx->pc = 0x7F3A71DCu;
    ctx->downcount -= 1;
    // 7F3A71DC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A71E0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A71E0:
    ctx->pc = 0x7F3A71E0u;
    ctx->downcount -= 1;
    // 7F3A71E0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A71E4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A71E4:
    ctx->pc = 0x7F3A71E4u;
    ctx->downcount -= 2;
    // 7F3A71E4: stw     r3, 5344(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5344);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A71E8:
    ctx->pc = 0x7F3A71E8u;
    // 7F3A71E8: b       0x7F3A71F4
    {
            goto label_7F3A71F4;
    }

label_7F3A71EC:
    ctx->pc = 0x7F3A71ECu;
    ctx->downcount -= 2;
    // 7F3A71EC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A71F0:
    ctx->pc = 0x7F3A71F0u;
    // 7F3A71F0: stw     r0, 5344(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A71F4:
    ctx->pc = 0x7F3A71F4u;
    ctx->downcount -= 2;
    // 7F3A71F4: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F3A71F8:
    ctx->pc = 0x7F3A71F8u;
    // 7F3A71F8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A71FCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A71FC:
    ctx->pc = 0x7F3A71FCu;
    ctx->downcount -= 2;
    // 7F3A71FC: cmplwi  r3, 0x0000
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

label_7F3A7200:
    ctx->pc = 0x7F3A7200u;
    // 7F3A7200: bc    12, 2, 0x7F3A7214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7214;
        }
    }

label_7F3A7204:
    ctx->pc = 0x7F3A7204u;
    ctx->downcount -= 1;
    // 7F3A7204: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7208u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7208:
    ctx->pc = 0x7F3A7208u;
    ctx->downcount -= 1;
    // 7F3A7208: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A720Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A720C:
    ctx->pc = 0x7F3A720Cu;
    ctx->downcount -= 2;
    // 7F3A720C: stw     r3, 5348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5348);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7210:
    ctx->pc = 0x7F3A7210u;
    // 7F3A7210: b       0x7F3A721C
    {
            goto label_7F3A721C;
    }

label_7F3A7214:
    ctx->pc = 0x7F3A7214u;
    ctx->downcount -= 2;
    // 7F3A7214: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A7218:
    ctx->pc = 0x7F3A7218u;
    // 7F3A7218: stw     r0, 5348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A721C:
    ctx->pc = 0x7F3A721Cu;
    ctx->downcount -= 5;
    // 7F3A721C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F3A7220:
    ctx->pc = 0x7F3A7220u;
    // 7F3A7220: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7224:
    ctx->pc = 0x7F3A7224u;
    // 7F3A7224: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3A7228:
    ctx->pc = 0x7F3A7228u;
    // 7F3A7228: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A722C:
    loop_7F3A722C(ctx);
    if (ctx->pc == 0x7F3A723Cu) goto label_7F3A723C;
    return;
label_7F3A7230:
    // 7F3A7230: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3A7234:
    ctx->pc = 0x7F3A7234u;
    // 7F3A7234: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7238:
    // 7F3A7238: bc    16, 0, 0x7F3A722C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A722Cu;
                return;
            }
            goto label_7F3A722C;
        }
    }

label_7F3A723C:
    ctx->pc = 0x7F3A723Cu;
    ctx->downcount -= 4;
    // 7F3A723C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3A7240:
    ctx->pc = 0x7F3A7240u;
    // 7F3A7240: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A7244:
    ctx->pc = 0x7F3A7244u;
    // 7F3A7244: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F3A7248:
    ctx->pc = 0x7F3A7248u;
    // 7F3A7248: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A724Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A724C:
    ctx->pc = 0x7F3A724Cu;
    ctx->downcount -= 2;
    // 7F3A724C: cmplwi  r3, 0x0000
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

label_7F3A7250:
    ctx->pc = 0x7F3A7250u;
    // 7F3A7250: bc    12, 2, 0x7F3A7288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7288;
        }
    }

label_7F3A7254:
    ctx->pc = 0x7F3A7254u;
    ctx->downcount -= 1;
    // 7F3A7254: b       0x7F3A7280
    {
            goto label_7F3A7280;
    }

label_7F3A7258:
    ctx->downcount -= 2;
    // 7F3A7258: cmpwi   r30, 6
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A725C:
    // 7F3A725C: bc    12, 0, 0x7F3A7268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7268;
        }
    }

label_7F3A7260:
    ctx->downcount -= 2;
    // 7F3A7260: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A7264:
    // 7F3A7264: b       0x7F3A728C
    {
            goto label_7F3A728C;
    }

label_7F3A7268:
    ctx->downcount -= 1;
    // 7F3A7268: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A726Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A726C:
    ctx->downcount -= 3;
    // 7F3A726C: addi    r0, r31, 5312
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(5312);

label_7F3A7270:
    ctx->pc = 0x7F3A7270u;
    // 7F3A7270: stwx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7274:
    // 7F3A7274: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7278u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7278:
    ctx->downcount -= 2;
    // 7F3A7278: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F3A727C:
    // 7F3A727C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3A7280:
    ctx->downcount -= 2;
    // 7F3A7280: cmplwi  r3, 0x0000
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

label_7F3A7284:
    // 7F3A7284: bc    4, 2, 0x7F3A7258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7258u;
                return;
            }
            goto label_7F3A7258;
        }
    }

label_7F3A7288:
    ctx->pc = 0x7F3A7288u;
    ctx->downcount -= 1;
    // 7F3A7288: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A728C:
    ctx->pc = 0x7F3A728Cu;
    ctx->downcount -= 16;
    // 7F3A728C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A7290:
    ctx->pc = 0x7F3A7290u;
    // 7F3A7290: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7294:
    ctx->pc = 0x7F3A7294u;
    // 7F3A7294: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7298:
    ctx->pc = 0x7F3A7298u;
    // 7F3A7298: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A729C:
    ctx->pc = 0x7F3A729Cu;
    // 7F3A729C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A72A0:
    ctx->pc = 0x7F3A72A0u;
    ctx->downcount -= 10;
    // 7F3A72A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A72A4:
    ctx->pc = 0x7F3A72A4u;
    // 7F3A72A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A72A8:
    ctx->pc = 0x7F3A72A8u;
    // 7F3A72A8: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F3A72AC:
    ctx->pc = 0x7F3A72ACu;
    // 7F3A72AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A72B0:
    ctx->pc = 0x7F3A72B0u;
    // 7F3A72B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A72B4:
    ctx->pc = 0x7F3A72B4u;
    // 7F3A72B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A72B8:
    ctx->pc = 0x7F3A72B8u;
    // 7F3A72B8: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A72BC:
    ctx->pc = 0x7F3A72BCu;
    // 7F3A72BC: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A72C0:
    ctx->pc = 0x7F3A72C0u;
    // 7F3A72C0: addi    r3, r31, 4048
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4048);

label_7F3A72C4:
    ctx->pc = 0x7F3A72C4u;
    // 7F3A72C4: bl      0x7F0120F4
    {
            ctx->lr = 0x7F3A72C8u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F3A72C8:
    ctx->pc = 0x7F3A72C8u;
    ctx->downcount -= 7;
    // 7F3A72C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A72CC:
    ctx->pc = 0x7F3A72CCu;
    // 7F3A72CC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A72D0:
    ctx->pc = 0x7F3A72D0u;
    // 7F3A72D0: addi    r5, r3, -21396
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21396);

label_7F3A72D4:
    ctx->pc = 0x7F3A72D4u;
    // 7F3A72D4: lfs     f2, -21392(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A72D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3A72D8:
    ctx->pc = 0x7F3A72D8u;
    // 7F3A72D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A72D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A72DC:
    ctx->pc = 0x7F3A72DCu;
    // 7F3A72DC: addi    r3, r31, 4048
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4048);

label_7F3A72E0:
    ctx->pc = 0x7F3A72E0u;
    // 7F3A72E0: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F3A72E4u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F3A72E4:
    ctx->pc = 0x7F3A72E4u;
    ctx->downcount -= 8;
    // 7F3A72E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3A72E8:
    ctx->pc = 0x7F3A72E8u;
    // 7F3A72E8: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A72EC:
    ctx->pc = 0x7F3A72ECu;
    // 7F3A72EC: addi    r5, r3, -21388
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-21388);

label_7F3A72F0:
    ctx->pc = 0x7F3A72F0u;
    // 7F3A72F0: addi    r3, r31, 4048
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4048);

label_7F3A72F4:
    ctx->pc = 0x7F3A72F4u;
    // 7F3A72F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A72F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A72F8:
    ctx->pc = 0x7F3A72F8u;
    // 7F3A72F8: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F3A72FC:
    ctx->pc = 0x7F3A72FCu;
    // 7F3A72FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7300:
    ctx->pc = 0x7F3A7300u;
    // 7F3A7300: bl      0x7F041A9C
    {
            ctx->lr = 0x7F3A7304u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F3A7304:
    ctx->pc = 0x7F3A7304u;
    ctx->downcount -= 8;
    // 7F3A7304: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F3A7308:
    ctx->pc = 0x7F3A7308u;
    // 7F3A7308: sth     r0, 4058(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4058);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A730C:
    ctx->pc = 0x7F3A730Cu;
    // 7F3A730C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7310:
    ctx->pc = 0x7F3A7310u;
    // 7F3A7310: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7314:
    ctx->pc = 0x7F3A7314u;
    // 7F3A7314: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7318:
    ctx->pc = 0x7F3A7318u;
    // 7F3A7318: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A731C:
    ctx->pc = 0x7F3A731Cu;
    // 7F3A731C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7320:
    ctx->pc = 0x7F3A7320u;
    ctx->downcount -= 10;
    // 7F3A7320: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7324:
    ctx->pc = 0x7F3A7324u;
    // 7F3A7324: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7328:
    ctx->pc = 0x7F3A7328u;
    // 7F3A7328: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A732C:
    ctx->pc = 0x7F3A732Cu;
    // 7F3A732C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7330:
    ctx->pc = 0x7F3A7330u;
    // 7F3A7330: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7334:
    ctx->pc = 0x7F3A7334u;
    // 7F3A7334: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7338:
    ctx->pc = 0x7F3A7338u;
    // 7F3A7338: stb     r0, 4892(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4892);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A733C:
    ctx->pc = 0x7F3A733Cu;
    // 7F3A733C: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F3A7340:
    ctx->pc = 0x7F3A7340u;
    // 7F3A7340: stb     r0, 4887(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4887);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7344:
    ctx->pc = 0x7F3A7344u;
    // 7F3A7344: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7348u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7348:
    ctx->pc = 0x7F3A7348u;
    ctx->downcount -= 2;
    // 7F3A7348: cmplwi  r3, 0x0000
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

label_7F3A734C:
    ctx->pc = 0x7F3A734Cu;
    // 7F3A734C: bc    12, 2, 0x7F3A7358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7358;
        }
    }

label_7F3A7350:
    ctx->pc = 0x7F3A7350u;
    ctx->downcount -= 2;
    // 7F3A7350: addi    r4, r31, 4892
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4892);

label_7F3A7354:
    ctx->pc = 0x7F3A7354u;
    // 7F3A7354: bl      0x7F3A6FAC
    {
            ctx->lr = 0x7F3A7358u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6FACu;
                return;
            }
            goto label_7F3A6FAC;
    }

label_7F3A7358:
    ctx->pc = 0x7F3A7358u;
    ctx->downcount -= 8;
    // 7F3A7358: lbz     r0, 4892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4892);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A735C:
    ctx->pc = 0x7F3A735Cu;
    // 7F3A735C: stb     r0, 4903(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4903);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7360:
    ctx->pc = 0x7F3A7360u;
    // 7F3A7360: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7364:
    ctx->pc = 0x7F3A7364u;
    // 7F3A7364: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7368:
    ctx->pc = 0x7F3A7368u;
    // 7F3A7368: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A736C:
    ctx->pc = 0x7F3A736Cu;
    // 7F3A736C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7370:
    ctx->pc = 0x7F3A7370u;
    // 7F3A7370: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7374:
    ctx->pc = 0x7F3A7374u;
    ctx->downcount -= 20;
    // 7F3A7374: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7378:
    ctx->pc = 0x7F3A7378u;
    // 7F3A7378: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A737C:
    ctx->pc = 0x7F3A737Cu;
    // 7F3A737C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3A7380:
    ctx->pc = 0x7F3A7380u;
    // 7F3A7380: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7384:
    ctx->pc = 0x7F3A7384u;
    // 7F3A7384: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7388:
    ctx->pc = 0x7F3A7388u;
    // 7F3A7388: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A738C:
    ctx->pc = 0x7F3A738Cu;
    // 7F3A738C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A7390:
    ctx->pc = 0x7F3A7390u;
    // 7F3A7390: lwz     r6, 4340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4340);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A7394:
    ctx->pc = 0x7F3A7394u;
    // 7F3A7394: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A7398:
    ctx->pc = 0x7F3A7398u;
    // 7F3A7398: lwz     r0, 4344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A739C:
    ctx->pc = 0x7F3A739Cu;
    // 7F3A739C: stw     r6, 4932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4932);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A73A0:
    ctx->pc = 0x7F3A73A0u;
    // 7F3A73A0: stw     r0, 4936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4936);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A73A4:
    ctx->pc = 0x7F3A73A4u;
    // 7F3A73A4: lwz     r6, 4348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4348);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A73A8:
    ctx->pc = 0x7F3A73A8u;
    // 7F3A73A8: lwz     r0, 4352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A73AC:
    ctx->pc = 0x7F3A73ACu;
    // 7F3A73AC: stw     r6, 4940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4940);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A73B0:
    ctx->pc = 0x7F3A73B0u;
    // 7F3A73B0: stw     r0, 4944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A73B4:
    ctx->pc = 0x7F3A73B4u;
    // 7F3A73B4: lwz     r0, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A73B8:
    ctx->pc = 0x7F3A73B8u;
    // 7F3A73B8: stw     r0, 4968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4968);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A73BC:
    ctx->pc = 0x7F3A73BCu;
    // 7F3A73BC: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A73C0:
    ctx->pc = 0x7F3A73C0u;
    // 7F3A73C0: bl      0x7F1025F8
    {
            ctx->lr = 0x7F3A73C4u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F3A73C4:
    ctx->pc = 0x7F3A73C4u;
    ctx->downcount -= 23;
    // 7F3A73C4: stw     r3, 4964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4964);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A73C8:
    ctx->pc = 0x7F3A73C8u;
    // 7F3A73C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A73CC:
    ctx->pc = 0x7F3A73CCu;
    // 7F3A73CC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F3A73D0:
    ctx->pc = 0x7F3A73D0u;
    // 7F3A73D0: lwz     r4, 4964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4964);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A73D4:
    ctx->pc = 0x7F3A73D4u;
    // 7F3A73D4: stw     r4, 4988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4988);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A73D8:
    ctx->pc = 0x7F3A73D8u;
    // 7F3A73D8: stw     r4, 4972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4972);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A73DC:
    ctx->pc = 0x7F3A73DCu;
    // 7F3A73DC: lwz     r5, 4932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A73E0:
    ctx->pc = 0x7F3A73E0u;
    // 7F3A73E0: lwz     r4, 4936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A73E4:
    ctx->pc = 0x7F3A73E4u;
    // 7F3A73E4: stw     r5, 5000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5000);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A73E8:
    ctx->pc = 0x7F3A73E8u;
    // 7F3A73E8: stw     r4, 5004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A73EC:
    ctx->pc = 0x7F3A73ECu;
    // 7F3A73EC: lwz     r5, 4940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4940);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A73F0:
    ctx->pc = 0x7F3A73F0u;
    // 7F3A73F0: lwz     r4, 4944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4944);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A73F4:
    ctx->pc = 0x7F3A73F4u;
    // 7F3A73F4: stw     r5, 5008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5008);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A73F8:
    ctx->pc = 0x7F3A73F8u;
    // 7F3A73F8: stw     r4, 5012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5012);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A73FC:
    ctx->pc = 0x7F3A73FCu;
    // 7F3A73FC: stw     r3, 5284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7400:
    ctx->pc = 0x7F3A7400u;
    // 7F3A7400: stw     r0, 4880(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7404:
    ctx->pc = 0x7F3A7404u;
    // 7F3A7404: stw     r3, 4148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7408:
    ctx->pc = 0x7F3A7408u;
    // 7F3A7408: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A740C:
    ctx->pc = 0x7F3A740Cu;
    // 7F3A740C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7410:
    ctx->pc = 0x7F3A7410u;
    // 7F3A7410: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7414:
    ctx->pc = 0x7F3A7414u;
    // 7F3A7414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7418:
    ctx->pc = 0x7F3A7418u;
    // 7F3A7418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A741C:
    ctx->pc = 0x7F3A741Cu;
    ctx->downcount -= 9;
    // 7F3A741C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7420:
    ctx->pc = 0x7F3A7420u;
    // 7F3A7420: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7424:
    ctx->pc = 0x7F3A7424u;
    // 7F3A7424: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7428:
    ctx->pc = 0x7F3A7428u;
    // 7F3A7428: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F3A742C:
    ctx->pc = 0x7F3A742Cu;
    // 7F3A742C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7430:
    ctx->pc = 0x7F3A7430u;
    // 7F3A7430: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7434:
    ctx->pc = 0x7F3A7434u;
    // 7F3A7434: sth     r0, 4896(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4896);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7438:
    ctx->pc = 0x7F3A7438u;
    // 7F3A7438: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F3A743C:
    ctx->pc = 0x7F3A743Cu;
    // 7F3A743C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7440u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7440:
    ctx->pc = 0x7F3A7440u;
    ctx->downcount -= 2;
    // 7F3A7440: cmplwi  r3, 0x0000
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

label_7F3A7444:
    ctx->pc = 0x7F3A7444u;
    // 7F3A7444: bc    12, 2, 0x7F3A7450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7450;
        }
    }

label_7F3A7448:
    ctx->pc = 0x7F3A7448u;
    ctx->downcount -= 1;
    // 7F3A7448: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A744Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A744C:
    ctx->pc = 0x7F3A744Cu;
    ctx->downcount -= 1;
    // 7F3A744C: sth     r3, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A7450:
    ctx->pc = 0x7F3A7450u;
    ctx->downcount -= 3;
    // 7F3A7450: lha     r0, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7454:
    ctx->pc = 0x7F3A7454u;
    // 7F3A7454: cmpwi   r0, 32
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

label_7F3A7458:
    ctx->pc = 0x7F3A7458u;
    // 7F3A7458: bc    4, 0, 0x7F3A7464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7464;
        }
    }

label_7F3A745C:
    ctx->pc = 0x7F3A745Cu;
    ctx->downcount -= 2;
    // 7F3A745C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F3A7460:
    ctx->pc = 0x7F3A7460u;
    // 7F3A7460: sth     r0, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7464:
    ctx->pc = 0x7F3A7464u;
    ctx->downcount -= 11;
    // 7F3A7464: lha     r0, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7468:
    ctx->pc = 0x7F3A7468u;
    // 7F3A7468: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A746C:
    ctx->pc = 0x7F3A746Cu;
    // 7F3A746C: sth     r0, 4898(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4898);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7470:
    ctx->pc = 0x7F3A7470u;
    // 7F3A7470: lha     r0, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7474:
    ctx->pc = 0x7F3A7474u;
    // 7F3A7474: stw     r0, 15424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7478:
    ctx->pc = 0x7F3A7478u;
    // 7F3A7478: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A747C:
    ctx->pc = 0x7F3A747Cu;
    // 7F3A747C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7480:
    ctx->pc = 0x7F3A7480u;
    // 7F3A7480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7484:
    ctx->pc = 0x7F3A7484u;
    // 7F3A7484: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7488:
    ctx->pc = 0x7F3A7488u;
    // 7F3A7488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A748C:
    ctx->pc = 0x7F3A748Cu;
    ctx->downcount -= 9;
    // 7F3A748C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7490:
    ctx->pc = 0x7F3A7490u;
    // 7F3A7490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7494:
    ctx->pc = 0x7F3A7494u;
    // 7F3A7494: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7498:
    ctx->pc = 0x7F3A7498u;
    // 7F3A7498: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F3A749C:
    ctx->pc = 0x7F3A749Cu;
    // 7F3A749C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A74A0:
    ctx->pc = 0x7F3A74A0u;
    // 7F3A74A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A74A4:
    ctx->pc = 0x7F3A74A4u;
    // 7F3A74A4: sth     r0, 4900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4900);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A74A8:
    ctx->pc = 0x7F3A74A8u;
    // 7F3A74A8: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F3A74AC:
    ctx->pc = 0x7F3A74ACu;
    // 7F3A74AC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A74B0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A74B0:
    ctx->pc = 0x7F3A74B0u;
    ctx->downcount -= 2;
    // 7F3A74B0: cmplwi  r3, 0x0000
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

label_7F3A74B4:
    ctx->pc = 0x7F3A74B4u;
    // 7F3A74B4: bc    12, 2, 0x7F3A74C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A74C0;
        }
    }

label_7F3A74B8:
    ctx->pc = 0x7F3A74B8u;
    ctx->downcount -= 1;
    // 7F3A74B8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A74BCu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A74BC:
    ctx->pc = 0x7F3A74BCu;
    ctx->downcount -= 1;
    // 7F3A74BC: sth     r3, 4900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4900);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A74C0:
    ctx->pc = 0x7F3A74C0u;
    ctx->downcount -= 9;
    // 7F3A74C0: lha     r0, 4900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4900);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A74C4:
    ctx->pc = 0x7F3A74C4u;
    // 7F3A74C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A74C8:
    ctx->pc = 0x7F3A74C8u;
    // 7F3A74C8: stw     r0, 15428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A74CC:
    ctx->pc = 0x7F3A74CCu;
    // 7F3A74CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A74D0:
    ctx->pc = 0x7F3A74D0u;
    // 7F3A74D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A74D4:
    ctx->pc = 0x7F3A74D4u;
    // 7F3A74D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A74D8:
    ctx->pc = 0x7F3A74D8u;
    // 7F3A74D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A74DC:
    ctx->pc = 0x7F3A74DCu;
    // 7F3A74DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A74E0:
    ctx->pc = 0x7F3A74E0u;
    ctx->downcount -= 9;
    // 7F3A74E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A74E4:
    ctx->pc = 0x7F3A74E4u;
    // 7F3A74E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A74E8:
    ctx->pc = 0x7F3A74E8u;
    // 7F3A74E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A74EC:
    ctx->pc = 0x7F3A74ECu;
    // 7F3A74EC: li      r0, 65
    ctx->gpr[0] = (u32)(s32)(65);

label_7F3A74F0:
    ctx->pc = 0x7F3A74F0u;
    // 7F3A74F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A74F4:
    ctx->pc = 0x7F3A74F4u;
    // 7F3A74F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A74F8:
    ctx->pc = 0x7F3A74F8u;
    // 7F3A74F8: stb     r0, 4885(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4885);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A74FC:
    ctx->pc = 0x7F3A74FCu;
    // 7F3A74FC: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F3A7500:
    ctx->pc = 0x7F3A7500u;
    // 7F3A7500: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7504u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7504:
    ctx->pc = 0x7F3A7504u;
    ctx->downcount -= 2;
    // 7F3A7504: cmplwi  r3, 0x0000
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

label_7F3A7508:
    ctx->pc = 0x7F3A7508u;
    // 7F3A7508: bc    12, 2, 0x7F3A7514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7514;
        }
    }

label_7F3A750C:
    ctx->pc = 0x7F3A750Cu;
    ctx->downcount -= 1;
    // 7F3A750C: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A7510u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A7510:
    ctx->pc = 0x7F3A7510u;
    ctx->downcount -= 1;
    // 7F3A7510: stb     r3, 4885(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4885);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A7514:
    ctx->pc = 0x7F3A7514u;
    ctx->downcount -= 6;
    // 7F3A7514: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7518:
    ctx->pc = 0x7F3A7518u;
    // 7F3A7518: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A751C:
    ctx->pc = 0x7F3A751Cu;
    // 7F3A751C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7520:
    ctx->pc = 0x7F3A7520u;
    // 7F3A7520: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7524:
    ctx->pc = 0x7F3A7524u;
    // 7F3A7524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7528:
    ctx->pc = 0x7F3A7528u;
    ctx->downcount -= 12;
    // 7F3A7528: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A752C:
    ctx->pc = 0x7F3A752Cu;
    // 7F3A752C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7530:
    ctx->pc = 0x7F3A7530u;
    // 7F3A7530: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F3A7534:
    ctx->pc = 0x7F3A7534u;
    // 7F3A7534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7538:
    ctx->pc = 0x7F3A7538u;
    // 7F3A7538: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A753C:
    ctx->pc = 0x7F3A753Cu;
    // 7F3A753C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7540:
    ctx->pc = 0x7F3A7540u;
    // 7F3A7540: lbz     r0, 4887(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4887);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A7544:
    ctx->pc = 0x7F3A7544u;
    // 7F3A7544: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F3A7548:
    ctx->pc = 0x7F3A7548u;
    // 7F3A7548: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3A754C:
    ctx->pc = 0x7F3A754Cu;
    // 7F3A754C: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F3A7550:
    ctx->pc = 0x7F3A7550u;
    // 7F3A7550: stb     r5, 4888(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4888);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3A7554:
    ctx->pc = 0x7F3A7554u;
    // 7F3A7554: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7558u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7558:
    ctx->pc = 0x7F3A7558u;
    ctx->downcount -= 2;
    // 7F3A7558: or.   r4, r3, r3
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

label_7F3A755C:
    ctx->pc = 0x7F3A755Cu;
    // 7F3A755C: bc    12, 2, 0x7F3A756C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A756C;
        }
    }

label_7F3A7560:
    ctx->pc = 0x7F3A7560u;
    ctx->downcount -= 3;
    // 7F3A7560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7564:
    ctx->pc = 0x7F3A7564u;
    // 7F3A7564: addi    r5, r31, 4888
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(4888);

label_7F3A7568:
    ctx->pc = 0x7F3A7568u;
    // 7F3A7568: bl      0x7F3A7120
    {
            ctx->lr = 0x7F3A756Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7120u;
                return;
            }
            goto label_7F3A7120;
    }

label_7F3A756C:
    ctx->pc = 0x7F3A756Cu;
    ctx->downcount -= 6;
    // 7F3A756C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7570:
    ctx->pc = 0x7F3A7570u;
    // 7F3A7570: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7574:
    ctx->pc = 0x7F3A7574u;
    // 7F3A7574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7578:
    ctx->pc = 0x7F3A7578u;
    // 7F3A7578: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A757C:
    ctx->pc = 0x7F3A757Cu;
    // 7F3A757C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7580:
    ctx->pc = 0x7F3A7580u;
    ctx->downcount -= 9;
    // 7F3A7580: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7584:
    ctx->pc = 0x7F3A7584u;
    // 7F3A7584: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7588:
    ctx->pc = 0x7F3A7588u;
    // 7F3A7588: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A758C:
    ctx->pc = 0x7F3A758Cu;
    // 7F3A758C: li      r0, 65
    ctx->gpr[0] = (u32)(s32)(65);

label_7F3A7590:
    ctx->pc = 0x7F3A7590u;
    // 7F3A7590: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7594:
    ctx->pc = 0x7F3A7594u;
    // 7F3A7594: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7598:
    ctx->pc = 0x7F3A7598u;
    // 7F3A7598: stb     r0, 4886(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4886);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A759C:
    ctx->pc = 0x7F3A759Cu;
    // 7F3A759C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F3A75A0:
    ctx->pc = 0x7F3A75A0u;
    // 7F3A75A0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A75A4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A75A4:
    ctx->pc = 0x7F3A75A4u;
    ctx->downcount -= 2;
    // 7F3A75A4: cmplwi  r3, 0x0000
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

label_7F3A75A8:
    ctx->pc = 0x7F3A75A8u;
    // 7F3A75A8: bc    12, 2, 0x7F3A75B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A75B4;
        }
    }

label_7F3A75AC:
    ctx->pc = 0x7F3A75ACu;
    ctx->downcount -= 1;
    // 7F3A75AC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A75B0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A75B0:
    ctx->pc = 0x7F3A75B0u;
    ctx->downcount -= 1;
    // 7F3A75B0: stb     r3, 4886(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4886);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A75B4:
    ctx->pc = 0x7F3A75B4u;
    ctx->downcount -= 6;
    // 7F3A75B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A75B8:
    ctx->pc = 0x7F3A75B8u;
    // 7F3A75B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A75BC:
    ctx->pc = 0x7F3A75BCu;
    // 7F3A75BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A75C0:
    ctx->pc = 0x7F3A75C0u;
    // 7F3A75C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A75C4:
    ctx->pc = 0x7F3A75C4u;
    // 7F3A75C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A75C8:
    ctx->pc = 0x7F3A75C8u;
    ctx->downcount -= 23;
    // 7F3A75C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A75CC:
    ctx->pc = 0x7F3A75CCu;
    // 7F3A75CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A75D0:
    ctx->pc = 0x7F3A75D0u;
    // 7F3A75D0: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F3A75D4:
    ctx->pc = 0x7F3A75D4u;
    // 7F3A75D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A75D8:
    ctx->pc = 0x7F3A75D8u;
    // 7F3A75D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A75DC:
    ctx->pc = 0x7F3A75DCu;
    // 7F3A75DC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A75E0:
    ctx->pc = 0x7F3A75E0u;
    // 7F3A75E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A75E4:
    ctx->pc = 0x7F3A75E4u;
    // 7F3A75E4: addi    r4, r31, 4948
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4948);

label_7F3A75E8:
    ctx->pc = 0x7F3A75E8u;
    // 7F3A75E8: sth     r0, 4824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4824);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A75EC:
    ctx->pc = 0x7F3A75ECu;
    // 7F3A75EC: sth     r0, 4826(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4826);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A75F0:
    ctx->pc = 0x7F3A75F0u;
    // 7F3A75F0: sth     r0, 4828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A75F4:
    ctx->pc = 0x7F3A75F4u;
    // 7F3A75F4: stw     r0, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A75F8:
    ctx->pc = 0x7F3A75F8u;
    // 7F3A75F8: stw     r0, 4836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A75FC:
    ctx->pc = 0x7F3A75FCu;
    // 7F3A75FC: lwz     r3, 4308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7600:
    ctx->pc = 0x7F3A7600u;
    // 7F3A7600: lwz     r0, 4312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7604:
    ctx->pc = 0x7F3A7604u;
    // 7F3A7604: stw     r3, 4948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4948);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7608:
    ctx->pc = 0x7F3A7608u;
    // 7F3A7608: stw     r0, 4952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A760C:
    ctx->pc = 0x7F3A760Cu;
    // 7F3A760C: lwz     r3, 4316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7610:
    ctx->pc = 0x7F3A7610u;
    // 7F3A7610: lwz     r0, 4320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7614:
    ctx->pc = 0x7F3A7614u;
    // 7F3A7614: stw     r3, 4956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4956);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7618:
    ctx->pc = 0x7F3A7618u;
    // 7F3A7618: stw     r0, 4960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A761C:
    ctx->pc = 0x7F3A761Cu;
    // 7F3A761C: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7620:
    ctx->pc = 0x7F3A7620u;
    // 7F3A7620: bl      0x7F1025F8
    {
            ctx->lr = 0x7F3A7624u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F3A7624:
    ctx->pc = 0x7F3A7624u;
    ctx->downcount -= 27;
    // 7F3A7624: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F3A7628:
    ctx->pc = 0x7F3A7628u;
    // 7F3A7628: stw     r3, 4976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A762C:
    ctx->pc = 0x7F3A762Cu;
    // 7F3A762C: addi    r3, r4, 18312
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F3A7630:
    ctx->pc = 0x7F3A7630u;
    // 7F3A7630: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7634:
    ctx->pc = 0x7F3A7634u;
    // 7F3A7634: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A7638:
    ctx->pc = 0x7F3A7638u;
    // 7F3A7638: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F3A763C:
    ctx->pc = 0x7F3A763Cu;
    // 7F3A763C: li      r0, 4000
    ctx->gpr[0] = (u32)(s32)(4000);

label_7F3A7640:
    ctx->pc = 0x7F3A7640u;
    // 7F3A7640: stw     r5, 4980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4980);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A7644:
    ctx->pc = 0x7F3A7644u;
    // 7F3A7644: stw     r4, 4916(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4916);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7648:
    ctx->pc = 0x7F3A7648u;
    // 7F3A7648: sth     r4, 4908(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4908);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A764C:
    ctx->pc = 0x7F3A764Cu;
    // 7F3A764C: sth     r3, 4910(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4910);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A7650:
    ctx->pc = 0x7F3A7650u;
    // 7F3A7650: sth     r0, 4912(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4912);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7654:
    ctx->pc = 0x7F3A7654u;
    // 7F3A7654: sth     r4, 4856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4856);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A7658:
    ctx->pc = 0x7F3A7658u;
    // 7F3A7658: sth     r4, 4852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4852);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A765C:
    ctx->pc = 0x7F3A765Cu;
    // 7F3A765C: stw     r4, 4872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4872);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7660:
    ctx->pc = 0x7F3A7660u;
    // 7F3A7660: stw     r4, 5076(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5076);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7664:
    ctx->pc = 0x7F3A7664u;
    // 7F3A7664: sth     r4, 5290(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5290);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A7668:
    ctx->pc = 0x7F3A7668u;
    // 7F3A7668: sth     r4, 5292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5292);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A766C:
    ctx->pc = 0x7F3A766Cu;
    // 7F3A766C: sth     r4, 5294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5294);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A7670:
    ctx->pc = 0x7F3A7670u;
    // 7F3A7670: sth     r4, 5296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5296);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3A7674:
    ctx->pc = 0x7F3A7674u;
    // 7F3A7674: stw     r4, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7678:
    ctx->pc = 0x7F3A7678u;
    // 7F3A7678: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A767C:
    ctx->pc = 0x7F3A767Cu;
    // 7F3A767C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7680:
    ctx->pc = 0x7F3A7680u;
    // 7F3A7680: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7684:
    ctx->pc = 0x7F3A7684u;
    // 7F3A7684: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7688:
    ctx->pc = 0x7F3A7688u;
    // 7F3A7688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A768C:
    ctx->pc = 0x7F3A768Cu;
    ctx->downcount -= 6;
    // 7F3A768C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7690:
    ctx->pc = 0x7F3A7690u;
    // 7F3A7690: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7694:
    ctx->pc = 0x7F3A7694u;
    // 7F3A7694: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7698:
    ctx->pc = 0x7F3A7698u;
    // 7F3A7698: lha     r0, 5074(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5074);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A769C:
    ctx->pc = 0x7F3A769Cu;
    // 7F3A769C: cmpwi   r0, 0
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

label_7F3A76A0:
    ctx->pc = 0x7F3A76A0u;
    // 7F3A76A0: bc    12, 2, 0x7F3A76C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A76C8;
        }
    }

label_7F3A76A4:
    ctx->pc = 0x7F3A76A4u;
    ctx->downcount -= 9;
    // 7F3A76A4: lwz     r4, 4356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A76A8:
    ctx->pc = 0x7F3A76A8u;
    // 7F3A76A8: lwz     r0, 4360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A76AC:
    ctx->pc = 0x7F3A76ACu;
    // 7F3A76AC: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A76B0:
    ctx->pc = 0x7F3A76B0u;
    // 7F3A76B0: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A76B4:
    ctx->pc = 0x7F3A76B4u;
    // 7F3A76B4: lwz     r4, 4364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4364);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A76B8:
    ctx->pc = 0x7F3A76B8u;
    // 7F3A76B8: lwz     r0, 4368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A76BC:
    ctx->pc = 0x7F3A76BCu;
    // 7F3A76BC: stw     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A76C0:
    ctx->pc = 0x7F3A76C0u;
    // 7F3A76C0: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A76C4:
    ctx->pc = 0x7F3A76C4u;
    // 7F3A76C4: b       0x7F3A7734
    {
            goto label_7F3A7734;
    }

label_7F3A76C8:
    ctx->pc = 0x7F3A76C8u;
    ctx->downcount -= 11;
    // 7F3A76C8: lwz     r4, 4340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A76CC:
    ctx->pc = 0x7F3A76CCu;
    // 7F3A76CC: lwz     r0, 4344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A76D0:
    ctx->pc = 0x7F3A76D0u;
    // 7F3A76D0: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A76D4:
    ctx->pc = 0x7F3A76D4u;
    // 7F3A76D4: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A76D8:
    ctx->pc = 0x7F3A76D8u;
    // 7F3A76D8: lwz     r4, 4348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4348);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A76DC:
    ctx->pc = 0x7F3A76DCu;
    // 7F3A76DC: lwz     r0, 4352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A76E0:
    ctx->pc = 0x7F3A76E0u;
    // 7F3A76E0: stw     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A76E4:
    ctx->pc = 0x7F3A76E4u;
    // 7F3A76E4: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A76E8:
    ctx->pc = 0x7F3A76E8u;
    // 7F3A76E8: lha     r0, 5072(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5072);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A76EC:
    ctx->pc = 0x7F3A76ECu;
    // 7F3A76EC: cmpwi   r0, 0
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

label_7F3A76F0:
    ctx->pc = 0x7F3A76F0u;
    // 7F3A76F0: bc    4, 2, 0x7F3A7734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7734;
        }
    }

label_7F3A76F4:
    ctx->pc = 0x7F3A76F4u;
    ctx->downcount -= 16;
    // 7F3A76F4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A76F8:
    ctx->pc = 0x7F3A76F8u;
    // 7F3A76F8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3A76FC:
    ctx->pc = 0x7F3A76FCu;
    // 7F3A76FC: addi    r6, r4, -21384
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-21384);

label_7F3A7700:
    ctx->pc = 0x7F3A7700u;
    // 7F3A7700: addi    r7, r5, -5664
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-5664);

label_7F3A7704:
    ctx->pc = 0x7F3A7704u;
    // 7F3A7704: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3A7704u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A7708:
    ctx->pc = 0x7F3A7708u;
    // 7F3A7708: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A770C:
    ctx->pc = 0x7F3A770Cu;
    // 7F3A770C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A7710:
    ctx->pc = 0x7F3A7710u;
    // 7F3A7710: addi    r5, r4, -21456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-21456);

label_7F3A7714:
    ctx->pc = 0x7F3A7714u;
    // 7F3A7714: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F3A7714u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A7718:
    ctx->pc = 0x7F3A7718u;
    // 7F3A7718: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A771C:
    ctx->pc = 0x7F3A771Cu;
    // 7F3A771C: lfs     f0, -21380(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A771Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3A7720:
    ctx->pc = 0x7F3A7720u;
    // 7F3A7720: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3A7720u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3A7724:
    ctx->pc = 0x7F3A7724u;
    // 7F3A7724: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7728:
    ctx->pc = 0x7F3A7728u;
    // 7F3A7728: stfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A7728u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3A772C:
    ctx->pc = 0x7F3A772Cu;
    // 7F3A772C: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7730:
    ctx->pc = 0x7F3A7730u;
    // 7F3A7730: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3A7730u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3A7734:
    ctx->pc = 0x7F3A7734u;
    ctx->downcount -= 2;
    // 7F3A7734: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F3A7738:
    ctx->pc = 0x7F3A7738u;
    // 7F3A7738: bl      0x7F023EA8
    {
            ctx->lr = 0x7F3A773Cu;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F3A773C:
    ctx->pc = 0x7F3A773Cu;
    ctx->downcount -= 5;
    // 7F3A773C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7740:
    ctx->pc = 0x7F3A7740u;
    // 7F3A7740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7744:
    ctx->pc = 0x7F3A7744u;
    // 7F3A7744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7748:
    ctx->pc = 0x7F3A7748u;
    // 7F3A7748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A774C:
    ctx->pc = 0x7F3A774Cu;
    ctx->downcount -= 23;
    // 7F3A774C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7750:
    ctx->pc = 0x7F3A7750u;
    // 7F3A7750: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7754:
    ctx->pc = 0x7F3A7754u;
    // 7F3A7754: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F3A7758:
    ctx->pc = 0x7F3A7758u;
    // 7F3A7758: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A775C:
    ctx->pc = 0x7F3A775Cu;
    // 7F3A775C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7760:
    ctx->pc = 0x7F3A7760u;
    // 7F3A7760: stmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A7764:
    ctx->pc = 0x7F3A7764u;
    // 7F3A7764: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7768:
    ctx->pc = 0x7F3A7768u;
    // 7F3A7768: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A776C:
    ctx->pc = 0x7F3A776Cu;
    // 7F3A776C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A7770:
    ctx->pc = 0x7F3A7770u;
    // 7F3A7770: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F3A7774:
    ctx->pc = 0x7F3A7774u;
    // 7F3A7774: stw     r31, 15432(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15432);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7778:
    ctx->pc = 0x7F3A7778u;
    // 7F3A7778: sth     r0, 5072(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5072);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A777C:
    ctx->pc = 0x7F3A777Cu;
    // 7F3A777C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7780u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7780:
    ctx->pc = 0x7F3A7780u;
    ctx->downcount -= 2;
    // 7F3A7780: cmplwi  r3, 0x0000
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

label_7F3A7784:
    ctx->pc = 0x7F3A7784u;
    // 7F3A7784: bc    12, 2, 0x7F3A7790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7790;
        }
    }

label_7F3A7788:
    ctx->pc = 0x7F3A7788u;
    ctx->downcount -= 1;
    // 7F3A7788: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A778Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A778C:
    ctx->pc = 0x7F3A778Cu;
    ctx->downcount -= 1;
    // 7F3A778C: sth     r3, 5072(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5072);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A7790:
    ctx->pc = 0x7F3A7790u;
    ctx->downcount -= 4;
    // 7F3A7790: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7794:
    ctx->pc = 0x7F3A7794u;
    // 7F3A7794: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F3A7798:
    ctx->pc = 0x7F3A7798u;
    // 7F3A7798: sth     r0, 5074(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5074);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A779C:
    ctx->pc = 0x7F3A779Cu;
    // 7F3A779C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A77A0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A77A0:
    ctx->pc = 0x7F3A77A0u;
    ctx->downcount -= 2;
    // 7F3A77A0: cmplwi  r3, 0x0000
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

label_7F3A77A4:
    ctx->pc = 0x7F3A77A4u;
    // 7F3A77A4: bc    12, 2, 0x7F3A77B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A77B0;
        }
    }

label_7F3A77A8:
    ctx->pc = 0x7F3A77A8u;
    ctx->downcount -= 1;
    // 7F3A77A8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A77ACu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A77AC:
    ctx->pc = 0x7F3A77ACu;
    ctx->downcount -= 1;
    // 7F3A77AC: sth     r3, 5074(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5074);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A77B0:
    ctx->pc = 0x7F3A77B0u;
    ctx->downcount -= 4;
    // 7F3A77B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A77B4:
    ctx->pc = 0x7F3A77B4u;
    // 7F3A77B4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A77B8:
    ctx->pc = 0x7F3A77B8u;
    // 7F3A77B8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A77BC:
    ctx->pc = 0x7F3A77BCu;
    // 7F3A77BC: bl      0x7F3A6AD8
    {
            ctx->lr = 0x7F3A77C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6AD8u;
                return;
            }
            goto label_7F3A6AD8;
    }

label_7F3A77C0:
    ctx->pc = 0x7F3A77C0u;
    ctx->downcount -= 2;
    // 7F3A77C0: cmpwi   r3, 0
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

label_7F3A77C4:
    ctx->pc = 0x7F3A77C4u;
    // 7F3A77C4: bc    12, 2, 0x7F3A77D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A77D0;
        }
    }

label_7F3A77C8:
    ctx->pc = 0x7F3A77C8u;
    ctx->downcount -= 2;
    // 7F3A77C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A77CC:
    ctx->pc = 0x7F3A77CCu;
    // 7F3A77CC: b       0x7F3A7A7C
    {
            goto label_7F3A7A7C;
    }

label_7F3A77D0:
    ctx->pc = 0x7F3A77D0u;
    ctx->downcount -= 2;
    // 7F3A77D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A77D4:
    ctx->pc = 0x7F3A77D4u;
    // 7F3A77D4: bl      0x7F3A70A4
    {
            ctx->lr = 0x7F3A77D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A70A4u;
                return;
            }
            goto label_7F3A70A4;
    }

label_7F3A77D8:
    ctx->pc = 0x7F3A77D8u;
    ctx->downcount -= 2;
    // 7F3A77D8: cmpwi   r3, 0
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

label_7F3A77DC:
    ctx->pc = 0x7F3A77DCu;
    // 7F3A77DC: bc    4, 0, 0x7F3A77E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A77E8;
        }
    }

label_7F3A77E0:
    ctx->pc = 0x7F3A77E0u;
    ctx->downcount -= 2;
    // 7F3A77E0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A77E4:
    ctx->pc = 0x7F3A77E4u;
    // 7F3A77E4: b       0x7F3A7A7C
    {
            goto label_7F3A7A7C;
    }

label_7F3A77E8:
    ctx->pc = 0x7F3A77E8u;
    ctx->downcount -= 2;
    // 7F3A77E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A77EC:
    ctx->pc = 0x7F3A77ECu;
    // 7F3A77EC: bl      0x7F3A71B8
    {
            ctx->lr = 0x7F3A77F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A71B8u;
                return;
            }
            goto label_7F3A71B8;
    }

label_7F3A77F0:
    ctx->pc = 0x7F3A77F0u;
    ctx->downcount -= 2;
    // 7F3A77F0: cmpwi   r3, 0
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

label_7F3A77F4:
    ctx->pc = 0x7F3A77F4u;
    // 7F3A77F4: bc    4, 0, 0x7F3A7800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7800;
        }
    }

label_7F3A77F8:
    ctx->pc = 0x7F3A77F8u;
    ctx->downcount -= 2;
    // 7F3A77F8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A77FC:
    ctx->pc = 0x7F3A77FCu;
    // 7F3A77FC: b       0x7F3A7A7C
    {
            goto label_7F3A7A7C;
    }

label_7F3A7800:
    ctx->pc = 0x7F3A7800u;
    ctx->downcount -= 5;
    // 7F3A7800: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7804:
    ctx->pc = 0x7F3A7804u;
    // 7F3A7804: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7808:
    ctx->pc = 0x7F3A7808u;
    // 7F3A7808: stb     r0, 4884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4884);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A780C:
    ctx->pc = 0x7F3A780Cu;
    // 7F3A780C: stw     r0, 4264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7810:
    ctx->pc = 0x7F3A7810u;
    // 7F3A7810: bl      0x7F3A7320
    {
            ctx->lr = 0x7F3A7814u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7320u;
                return;
            }
            goto label_7F3A7320;
    }

label_7F3A7814:
    ctx->pc = 0x7F3A7814u;
    ctx->downcount -= 2;
    // 7F3A7814: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7818:
    ctx->pc = 0x7F3A7818u;
    // 7F3A7818: bl      0x7F3A741C
    {
            ctx->lr = 0x7F3A781Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A741Cu;
                return;
            }
            goto label_7F3A741C;
    }

label_7F3A781C:
    ctx->pc = 0x7F3A781Cu;
    ctx->downcount -= 2;
    // 7F3A781C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7820:
    ctx->pc = 0x7F3A7820u;
    // 7F3A7820: bl      0x7F3A748C
    {
            ctx->lr = 0x7F3A7824u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A748Cu;
                return;
            }
            goto label_7F3A748C;
    }

label_7F3A7824:
    ctx->pc = 0x7F3A7824u;
    ctx->downcount -= 2;
    // 7F3A7824: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7828:
    ctx->pc = 0x7F3A7828u;
    // 7F3A7828: bl      0x7F3A74E0
    {
            ctx->lr = 0x7F3A782Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A74E0u;
                return;
            }
            goto label_7F3A74E0;
    }

label_7F3A782C:
    ctx->pc = 0x7F3A782Cu;
    ctx->downcount -= 4;
    // 7F3A782C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A7830:
    ctx->pc = 0x7F3A7830u;
    // 7F3A7830: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7834:
    ctx->pc = 0x7F3A7834u;
    // 7F3A7834: stb     r0, 4902(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4902);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7838:
    ctx->pc = 0x7F3A7838u;
    // 7F3A7838: bl      0x7F3A6EE0
    {
            ctx->lr = 0x7F3A783Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6EE0u;
                return;
            }
            goto label_7F3A6EE0;
    }

label_7F3A783C:
    ctx->pc = 0x7F3A783Cu;
    ctx->downcount -= 2;
    // 7F3A783C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7840:
    ctx->pc = 0x7F3A7840u;
    // 7F3A7840: bl      0x7F3A768C
    {
            ctx->lr = 0x7F3A7844u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A768Cu;
                return;
            }
            goto label_7F3A768C;
    }

label_7F3A7844:
    ctx->pc = 0x7F3A7844u;
    ctx->downcount -= 2;
    // 7F3A7844: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7848:
    ctx->pc = 0x7F3A7848u;
    // 7F3A7848: bl      0x7F3A7528
    {
            ctx->lr = 0x7F3A784Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7528u;
                return;
            }
            goto label_7F3A7528;
    }

label_7F3A784C:
    ctx->pc = 0x7F3A784Cu;
    ctx->downcount -= 2;
    // 7F3A784C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7850:
    ctx->pc = 0x7F3A7850u;
    // 7F3A7850: bl      0x7F3A7580
    {
            ctx->lr = 0x7F3A7854u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7580u;
                return;
            }
            goto label_7F3A7580;
    }

label_7F3A7854:
    ctx->pc = 0x7F3A7854u;
    ctx->downcount -= 2;
    // 7F3A7854: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7858:
    ctx->pc = 0x7F3A7858u;
    // 7F3A7858: bl      0x7F3A6844
    {
            ctx->lr = 0x7F3A785Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6844u;
                return;
            }
            goto label_7F3A6844;
    }

label_7F3A785C:
    ctx->pc = 0x7F3A785Cu;
    ctx->downcount -= 2;
    // 7F3A785C: li      r3, 122
    ctx->gpr[3] = (u32)(s32)(122);

label_7F3A7860:
    ctx->pc = 0x7F3A7860u;
    // 7F3A7860: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7864u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7864:
    ctx->pc = 0x7F3A7864u;
    ctx->downcount -= 2;
    // 7F3A7864: cmplwi  r3, 0x0000
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

label_7F3A7868:
    ctx->pc = 0x7F3A7868u;
    // 7F3A7868: bc    12, 2, 0x7F3A787C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A787C;
        }
    }

label_7F3A786C:
    ctx->pc = 0x7F3A786Cu;
    ctx->downcount -= 1;
    // 7F3A786C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3A7870u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3A7870:
    ctx->pc = 0x7F3A7870u;
    ctx->downcount -= 1;
    // 7F3A7870: bl      0x7F3C674C
    {
            ctx->lr = 0x7F3A7874u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F3A7874:
    ctx->pc = 0x7F3A7874u;
    ctx->downcount -= 2;
    // 7F3A7874: stw     r3, 5352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7878:
    ctx->pc = 0x7F3A7878u;
    // 7F3A7878: b       0x7F3A7884
    {
            goto label_7F3A7884;
    }

label_7F3A787C:
    ctx->pc = 0x7F3A787Cu;
    ctx->downcount -= 2;
    // 7F3A787C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A7880:
    ctx->pc = 0x7F3A7880u;
    // 7F3A7880: stw     r0, 5352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5352);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7884:
    ctx->pc = 0x7F3A7884u;
    ctx->downcount -= 2;
    // 7F3A7884: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7888:
    ctx->pc = 0x7F3A7888u;
    // 7F3A7888: bl      0x7F3A75C8
    {
            ctx->lr = 0x7F3A788Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A75C8u;
                return;
            }
            goto label_7F3A75C8;
    }

label_7F3A788C:
    ctx->pc = 0x7F3A788Cu;
    ctx->downcount -= 10;
    // 7F3A788C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7890:
    ctx->pc = 0x7F3A7890u;
    // 7F3A7890: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3A7894:
    ctx->pc = 0x7F3A7894u;
    // 7F3A7894: stw     r3, 5308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7898:
    ctx->pc = 0x7F3A7898u;
    // 7F3A7898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A789C:
    ctx->pc = 0x7F3A789Cu;
    // 7F3A789C: stw     r3, 5304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A78A0:
    ctx->pc = 0x7F3A78A0u;
    // 7F3A78A0: stw     r3, 5300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A78A4:
    ctx->pc = 0x7F3A78A4u;
    // 7F3A78A4: sth     r3, 5336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5336);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A78A8:
    ctx->pc = 0x7F3A78A8u;
    // 7F3A78A8: stw     r3, 4104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A78AC:
    ctx->pc = 0x7F3A78ACu;
    // 7F3A78AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A78B0:
    loop_7F3A78B0(ctx);
    if (ctx->pc == 0x7F3A78C0u) goto label_7F3A78C0;
    return;
label_7F3A78B4:
    // 7F3A78B4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3A78B8:
    ctx->pc = 0x7F3A78B8u;
    // 7F3A78B8: stbx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A78BC:
    // 7F3A78BC: bc    16, 0, 0x7F3A78B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A78B0u;
                return;
            }
            goto label_7F3A78B0;
        }
    }

label_7F3A78C0:
    ctx->pc = 0x7F3A78C0u;
    ctx->downcount -= 6;
    // 7F3A78C0: li      r3, 23
    ctx->gpr[3] = (u32)(s32)(23);

label_7F3A78C4:
    ctx->pc = 0x7F3A78C4u;
    // 7F3A78C4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3A78C8:
    ctx->pc = 0x7F3A78C8u;
    // 7F3A78C8: stb     r3, 4927(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4927);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3A78CC:
    ctx->pc = 0x7F3A78CCu;
    // 7F3A78CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A78D0:
    ctx->pc = 0x7F3A78D0u;
    // 7F3A78D0: stb     r0, 4924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4924);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A78D4:
    ctx->pc = 0x7F3A78D4u;
    // 7F3A78D4: bl      0x7F3A72A0
    {
            ctx->lr = 0x7F3A78D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A72A0u;
                return;
            }
            goto label_7F3A72A0;
    }

label_7F3A78D8:
    ctx->pc = 0x7F3A78D8u;
    ctx->downcount -= 2;
    // 7F3A78D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A78DC:
    ctx->pc = 0x7F3A78DCu;
    // 7F3A78DC: bl      0x7F3A7374
    {
            ctx->lr = 0x7F3A78E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7374u;
                return;
            }
            goto label_7F3A7374;
    }

label_7F3A78E0:
    ctx->pc = 0x7F3A78E0u;
    ctx->downcount -= 3;
    // 7F3A78E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A78E4:
    ctx->pc = 0x7F3A78E4u;
    // 7F3A78E4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3A78E8:
    ctx->pc = 0x7F3A78E8u;
    // 7F3A78E8: bl      0x7F3A6960
    {
            ctx->lr = 0x7F3A78ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6960u;
                return;
            }
            goto label_7F3A6960;
    }

label_7F3A78EC:
    ctx->pc = 0x7F3A78ECu;
    ctx->downcount -= 2;
    // 7F3A78EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A78F0:
    ctx->pc = 0x7F3A78F0u;
    // 7F3A78F0: bl      0x7F3A6A38
    {
            ctx->lr = 0x7F3A78F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A6A38u;
                return;
            }
            goto label_7F3A6A38;
    }

label_7F3A78F4:
    ctx->pc = 0x7F3A78F4u;
    ctx->downcount -= 1;
    // 7F3A78F4: bl      0x7F3A7B90
    {
            ctx->lr = 0x7F3A78F8u;
            goto label_7F3A7B90;
    }

label_7F3A78F8:
    ctx->pc = 0x7F3A78F8u;
    ctx->downcount -= 1;
    // 7F3A78F8: bl      0x7F3A7B50
    {
            ctx->lr = 0x7F3A78FCu;
            goto label_7F3A7B50;
    }

label_7F3A78FC:
    ctx->pc = 0x7F3A78FCu;
    ctx->downcount -= 2;
    // 7F3A78FC: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_7F3A7900:
    ctx->pc = 0x7F3A7900u;
    // 7F3A7900: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3A7904u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3A7904:
    ctx->pc = 0x7F3A7904u;
    ctx->downcount -= 2;
    // 7F3A7904: cmplwi  r3, 0x0000
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

label_7F3A7908:
    ctx->pc = 0x7F3A7908u;
    // 7F3A7908: bc    12, 2, 0x7F3A7A38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7A38;
        }
    }

label_7F3A790C:
    ctx->pc = 0x7F3A790Cu;
    ctx->downcount -= 7;
    // 7F3A790C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A7910:
    ctx->pc = 0x7F3A7910u;
    // 7F3A7910: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F3A7914:
    ctx->pc = 0x7F3A7914u;
    // 7F3A7914: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F3A7918:
    ctx->pc = 0x7F3A7918u;
    // 7F3A7918: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A791C:
    ctx->pc = 0x7F3A791Cu;
    // 7F3A791C: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7920:
    ctx->pc = 0x7F3A7920u;
    // 7F3A7920: cmpwi   r0, 30
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

label_7F3A7924:
    ctx->pc = 0x7F3A7924u;
    // 7F3A7924: bc    12, 2, 0x7F3A7964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7964;
        }
    }

label_7F3A7928:
    ctx->pc = 0x7F3A7928u;
    ctx->downcount -= 1;
    // 7F3A7928: bc    4, 0, 0x7F3A7944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7944;
        }
    }

label_7F3A792C:
    ctx->pc = 0x7F3A792Cu;
    ctx->downcount -= 2;
    // 7F3A792C: cmpwi   r0, 20
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

label_7F3A7930:
    ctx->pc = 0x7F3A7930u;
    // 7F3A7930: bc    12, 2, 0x7F3A795C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A795C;
        }
    }

label_7F3A7934:
    ctx->pc = 0x7F3A7934u;
    ctx->downcount -= 1;
    // 7F3A7934: bc    4, 0, 0x7F3A7978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7978;
        }
    }

label_7F3A7938:
    ctx->pc = 0x7F3A7938u;
    ctx->downcount -= 2;
    // 7F3A7938: cmpwi   r0, 10
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

label_7F3A793C:
    ctx->pc = 0x7F3A793Cu;
    // 7F3A793C: bc    12, 2, 0x7F3A7978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7978;
        }
    }

label_7F3A7940:
    ctx->pc = 0x7F3A7940u;
    ctx->downcount -= 1;
    // 7F3A7940: b       0x7F3A7978
    {
            goto label_7F3A7978;
    }

label_7F3A7944:
    ctx->pc = 0x7F3A7944u;
    ctx->downcount -= 2;
    // 7F3A7944: cmpwi   r0, 50
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

label_7F3A7948:
    ctx->pc = 0x7F3A7948u;
    // 7F3A7948: bc    12, 2, 0x7F3A7974
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7974;
        }
    }

label_7F3A794C:
    ctx->pc = 0x7F3A794Cu;
    ctx->downcount -= 1;
    // 7F3A794C: bc    4, 0, 0x7F3A7978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7978;
        }
    }

label_7F3A7950:
    ctx->pc = 0x7F3A7950u;
    ctx->downcount -= 2;
    // 7F3A7950: cmpwi   r0, 40
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

label_7F3A7954:
    ctx->pc = 0x7F3A7954u;
    // 7F3A7954: bc    12, 2, 0x7F3A796C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A796C;
        }
    }

label_7F3A7958:
    ctx->pc = 0x7F3A7958u;
    ctx->downcount -= 1;
    // 7F3A7958: b       0x7F3A7978
    {
            goto label_7F3A7978;
    }

label_7F3A795C:
    ctx->pc = 0x7F3A795Cu;
    ctx->downcount -= 2;
    // 7F3A795C: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F3A7960:
    ctx->pc = 0x7F3A7960u;
    // 7F3A7960: b       0x7F3A7978
    {
            goto label_7F3A7978;
    }

label_7F3A7964:
    ctx->pc = 0x7F3A7964u;
    ctx->downcount -= 2;
    // 7F3A7964: li      r29, 2
    ctx->gpr[29] = (u32)(s32)(2);

label_7F3A7968:
    ctx->pc = 0x7F3A7968u;
    // 7F3A7968: b       0x7F3A7978
    {
            goto label_7F3A7978;
    }

label_7F3A796C:
    ctx->pc = 0x7F3A796Cu;
    ctx->downcount -= 2;
    // 7F3A796C: li      r29, 3
    ctx->gpr[29] = (u32)(s32)(3);

label_7F3A7970:
    ctx->pc = 0x7F3A7970u;
    // 7F3A7970: b       0x7F3A7978
    {
            goto label_7F3A7978;
    }

label_7F3A7974:
    ctx->pc = 0x7F3A7974u;
    ctx->downcount -= 1;
    // 7F3A7974: li      r29, 4
    ctx->gpr[29] = (u32)(s32)(4);

label_7F3A7978:
    ctx->pc = 0x7F3A7978u;
    ctx->downcount -= 3;
    // 7F3A7978: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A797C:
    ctx->pc = 0x7F3A797Cu;
    // 7F3A797C: stw     r0, 5408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7980:
    ctx->pc = 0x7F3A7980u;
    // 7F3A7980: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3A7984u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3A7984:
    ctx->pc = 0x7F3A7984u;
    ctx->downcount -= 2;
    // 7F3A7984: stw     r3, 5368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5368);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7988:
    ctx->pc = 0x7F3A7988u;
    // 7F3A7988: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F3A798Cu;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F3A798C:
    ctx->pc = 0x7F3A798Cu;
    ctx->downcount -= 2;
    // 7F3A798C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F3A7990:
    ctx->pc = 0x7F3A7990u;
    // 7F3A7990: b       0x7F3A799C
    {
            goto label_7F3A799C;
    }

label_7F3A7994:
    ctx->downcount -= 1;
    // 7F3A7994: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F3A7998u;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F3A7998:
    ctx->downcount -= 1;
    // 7F3A7998: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3A799C:
    ctx->downcount -= 2;
    // 7F3A799C: cmpw    r30, r29
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A79A0:
    // 7F3A79A0: bc    12, 0, 0x7F3A7994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7994u;
                return;
            }
            goto label_7F3A7994;
        }
    }

label_7F3A79A4:
    ctx->pc = 0x7F3A79A4u;
    ctx->downcount -= 1;
    // 7F3A79A4: bl      0x7F3C6640
    {
            ctx->lr = 0x7F3A79A8u;
            ctx->pc = 0x7F3C6640u;
            return;
    }

label_7F3A79A8:
    ctx->pc = 0x7F3A79A8u;
    ctx->downcount -= 1;
    // 7F3A79A8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3A79ACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3A79AC:
    ctx->pc = 0x7F3A79ACu;
    ctx->downcount -= 2;
    // 7F3A79AC: stw     r3, 5404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A79B0:
    ctx->pc = 0x7F3A79B0u;
    // 7F3A79B0: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F3A79B4u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F3A79B4:
    ctx->pc = 0x7F3A79B4u;
    ctx->downcount -= 2;
    // 7F3A79B4: stw     r3, 5396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5396);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A79B8:
    ctx->pc = 0x7F3A79B8u;
    // 7F3A79B8: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F3A79BCu;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F3A79BC:
    ctx->pc = 0x7F3A79BCu;
    ctx->downcount -= 1;
    // 7F3A79BC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3A79C0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3A79C0:
    ctx->pc = 0x7F3A79C0u;
    ctx->downcount -= 8;
    // 7F3A79C0: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F3A79C4:
    ctx->pc = 0x7F3A79C4u;
    // 7F3A79C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A79C8:
    ctx->pc = 0x7F3A79C8u;
    // 7F3A79C8: stb     r0, 5384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5384);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A79CC:
    ctx->pc = 0x7F3A79CCu;
    // 7F3A79CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A79D0:
    ctx->pc = 0x7F3A79D0u;
    // 7F3A79D0: sth     r3, 5390(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5390);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3A79D4:
    ctx->pc = 0x7F3A79D4u;
    // 7F3A79D4: sth     r0, 5388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5388);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A79D8:
    ctx->pc = 0x7F3A79D8u;
    // 7F3A79D8: lwz     r3, 5404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A79DC:
    ctx->pc = 0x7F3A79DCu;
    // 7F3A79DC: bl      0x7F37CE50
    {
            ctx->lr = 0x7F3A79E0u;
            ctx->pc = 0x7F37CE50u;
            return;
    }

label_7F3A79E0:
    ctx->pc = 0x7F3A79E0u;
    ctx->downcount -= 2;
    // 7F3A79E0: cmpwi   r3, 0
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

label_7F3A79E4:
    ctx->pc = 0x7F3A79E4u;
    // 7F3A79E4: bc    12, 2, 0x7F3A79F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A79F4;
        }
    }

label_7F3A79E8:
    ctx->pc = 0x7F3A79E8u;
    ctx->downcount -= 3;
    // 7F3A79E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3A79EC:
    ctx->pc = 0x7F3A79ECu;
    // 7F3A79EC: sth     r0, 5388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5388);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A79F0:
    ctx->pc = 0x7F3A79F0u;
    // 7F3A79F0: b       0x7F3A7A4C
    {
            goto label_7F3A7A4C;
    }

label_7F3A79F4:
    ctx->pc = 0x7F3A79F4u;
    ctx->downcount -= 3;
    // 7F3A79F4: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A79F8:
    ctx->pc = 0x7F3A79F8u;
    // 7F3A79F8: addi    r4, r31, 5408
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5408);

label_7F3A79FC:
    ctx->pc = 0x7F3A79FCu;
    // 7F3A79FC: bl      0x7F17D79C
    {
            ctx->lr = 0x7F3A7A00u;
            ctx->pc = 0x7F17D79Cu;
            return;
    }

label_7F3A7A00:
    ctx->pc = 0x7F3A7A00u;
    ctx->downcount -= 3;
    // 7F3A7A00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7A04:
    ctx->pc = 0x7F3A7A04u;
    // 7F3A7A04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7A08:
    ctx->pc = 0x7F3A7A08u;
    // 7F3A7A08: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3A7A0Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3A7A0C:
    ctx->pc = 0x7F3A7A0Cu;
    ctx->downcount -= 7;
    // 7F3A7A0C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A7A10:
    ctx->pc = 0x7F3A7A10u;
    // 7F3A7A10: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F3A7A14:
    ctx->pc = 0x7F3A7A14u;
    // 7F3A7A14: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F3A7A18:
    ctx->pc = 0x7F3A7A18u;
    // 7F3A7A18: addi    r6, r31, 5408
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(5408);

label_7F3A7A1C:
    ctx->pc = 0x7F3A7A1Cu;
    // 7F3A7A1C: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F3A7A20:
    ctx->pc = 0x7F3A7A20u;
    // 7F3A7A20: addi    r4, r4, -32696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32696);

label_7F3A7A24:
    ctx->pc = 0x7F3A7A24u;
    // 7F3A7A24: bl      0x7F2136D0
    {
            ctx->lr = 0x7F3A7A28u;
            ctx->pc = 0x7F2136D0u;
            return;
    }

label_7F3A7A28:
    ctx->pc = 0x7F3A7A28u;
    ctx->downcount -= 3;
    // 7F3A7A28: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7A2C:
    ctx->pc = 0x7F3A7A2Cu;
    // 7F3A7A2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7A30:
    ctx->pc = 0x7F3A7A30u;
    // 7F3A7A30: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3A7A34u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3A7A34:
    ctx->pc = 0x7F3A7A34u;
    ctx->downcount -= 1;
    // 7F3A7A34: b       0x7F3A7A4C
    {
            goto label_7F3A7A4C;
    }

label_7F3A7A38:
    ctx->pc = 0x7F3A7A38u;
    ctx->downcount -= 5;
    // 7F3A7A38: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3A7A3C:
    ctx->pc = 0x7F3A7A3Cu;
    // 7F3A7A3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7A40:
    ctx->pc = 0x7F3A7A40u;
    // 7F3A7A40: stw     r3, 5404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7A44:
    ctx->pc = 0x7F3A7A44u;
    // 7F3A7A44: sth     r0, 5390(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5390);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7A48:
    ctx->pc = 0x7F3A7A48u;
    // 7F3A7A48: sth     r0, 5388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5388);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3A7A4C:
    ctx->pc = 0x7F3A7A4Cu;
    ctx->downcount -= 7;
    // 7F3A7A4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7A50:
    ctx->pc = 0x7F3A7A50u;
    // 7F3A7A50: addi    r4, r31, 864
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(864);

label_7F3A7A54:
    ctx->pc = 0x7F3A7A54u;
    // 7F3A7A54: stw     r0, 4268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7A58:
    ctx->pc = 0x7F3A7A58u;
    // 7F3A7A58: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3A7A5C:
    ctx->pc = 0x7F3A7A5Cu;
    // 7F3A7A5C: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7A60:
    ctx->pc = 0x7F3A7A60u;
    // 7F3A7A60: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F3A7A64:
    ctx->pc = 0x7F3A7A64u;
    // 7F3A7A64: bl      0x7F22DD68
    {
            ctx->lr = 0x7F3A7A68u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F3A7A68:
    ctx->pc = 0x7F3A7A68u;
    ctx->downcount -= 4;
    // 7F3A7A68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7A6C:
    ctx->pc = 0x7F3A7A6Cu;
    // 7F3A7A6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7A70:
    ctx->pc = 0x7F3A7A70u;
    // 7F3A7A70: stw     r4, 4272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7A74:
    ctx->pc = 0x7F3A7A74u;
    // 7F3A7A74: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3A7A78u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3A7A78:
    ctx->pc = 0x7F3A7A78u;
    ctx->downcount -= 1;
    // 7F3A7A78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7A7C:
    ctx->pc = 0x7F3A7A7Cu;
    ctx->downcount -= 16;
    // 7F3A7A7C: lmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A7A80:
    ctx->pc = 0x7F3A7A80u;
    // 7F3A7A80: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7A84:
    ctx->pc = 0x7F3A7A84u;
    // 7F3A7A84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7A88:
    ctx->pc = 0x7F3A7A88u;
    // 7F3A7A88: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F3A7A8C:
    ctx->pc = 0x7F3A7A8Cu;
    // 7F3A7A8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7A90:
    ctx->pc = 0x7F3A7A90u;
    ctx->downcount -= 21;
    // 7F3A7A90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7A94:
    ctx->pc = 0x7F3A7A94u;
    // 7F3A7A94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7A98:
    ctx->pc = 0x7F3A7A98u;
    // 7F3A7A98: li      r5, 5424
    ctx->gpr[5] = (u32)(s32)(5424);

label_7F3A7A9C:
    ctx->pc = 0x7F3A7A9Cu;
    // 7F3A7A9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7AA0:
    ctx->pc = 0x7F3A7AA0u;
    // 7F3A7AA0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7AA4:
    ctx->pc = 0x7F3A7AA4u;
    // 7F3A7AA4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A7AA8:
    ctx->pc = 0x7F3A7AA8u;
    // 7F3A7AA8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7AAC:
    ctx->pc = 0x7F3A7AACu;
    // 7F3A7AAC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A7AB0:
    ctx->pc = 0x7F3A7AB0u;
    // 7F3A7AB0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A7AB4:
    ctx->pc = 0x7F3A7AB4u;
    // 7F3A7AB4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F3A7AB8:
    ctx->pc = 0x7F3A7AB8u;
    // 7F3A7AB8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3A7ABCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3A7ABC:
    ctx->pc = 0x7F3A7ABCu;
    ctx->downcount -= 2;
    // 7F3A7ABC: or.   r31, r3, r3
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

label_7F3A7AC0:
    ctx->pc = 0x7F3A7AC0u;
    // 7F3A7AC0: bc    12, 2, 0x7F3A7B38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7B38;
        }
    }

label_7F3A7AC4:
    ctx->pc = 0x7F3A7AC4u;
    ctx->downcount -= 5;
    // 7F3A7AC4: lis     r4, 32570
    ctx->gpr[4] = ((u32)(s32)(32570) << 16);

label_7F3A7AC8:
    ctx->pc = 0x7F3A7AC8u;
    // 7F3A7AC8: lis     r5, 32570
    ctx->gpr[5] = ((u32)(s32)(32570) << 16);

label_7F3A7ACC:
    ctx->pc = 0x7F3A7ACCu;
    // 7F3A7ACC: addi    r4, r4, 26276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26276);

label_7F3A7AD0:
    ctx->pc = 0x7F3A7AD0u;
    // 7F3A7AD0: addi    r5, r5, 28264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28264);

label_7F3A7AD4:
    ctx->pc = 0x7F3A7AD4u;
    // 7F3A7AD4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F3A7AD8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F3A7AD8:
    ctx->pc = 0x7F3A7AD8u;
    ctx->downcount -= 14;
    // 7F3A7AD8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7ADC:
    ctx->pc = 0x7F3A7ADCu;
    // 7F3A7ADC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F3A7AE0:
    ctx->pc = 0x7F3A7AE0u;
    // 7F3A7AE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7AE4:
    ctx->pc = 0x7F3A7AE4u;
    // 7F3A7AE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7AE8:
    ctx->pc = 0x7F3A7AE8u;
    // 7F3A7AE8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F3A7AEC:
    ctx->pc = 0x7F3A7AECu;
    // 7F3A7AEC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F3A7AF0:
    ctx->pc = 0x7F3A7AF0u;
    // 7F3A7AF0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A7AF4:
    ctx->pc = 0x7F3A7AF4u;
    // 7F3A7AF4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3A7AF8:
    ctx->pc = 0x7F3A7AF8u;
    // 7F3A7AF8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3A7AFC:
    ctx->pc = 0x7F3A7AFCu;
    // 7F3A7AFC: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A7B00:
    ctx->pc = 0x7F3A7B00u;
    // 7F3A7B00: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A7B04:
    ctx->pc = 0x7F3A7B04u;
    // 7F3A7B04: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A7B08:
    ctx->pc = 0x7F3A7B08u;
    // 7F3A7B08: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7B0C:
    ctx->pc = 0x7F3A7B0Cu;
    // 7F3A7B0C: bl      0x7F3A774C
    {
            ctx->lr = 0x7F3A7B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A774Cu;
                return;
            }
            goto label_7F3A774C;
    }

label_7F3A7B10:
    ctx->pc = 0x7F3A7B10u;
    ctx->downcount -= 2;
    // 7F3A7B10: cmpwi   r3, 0
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

label_7F3A7B14:
    ctx->pc = 0x7F3A7B14u;
    // 7F3A7B14: bc    4, 0, 0x7F3A7B38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7B38;
        }
    }

label_7F3A7B18:
    ctx->pc = 0x7F3A7B18u;
    ctx->downcount -= 6;
    // 7F3A7B18: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A7B1C:
    ctx->pc = 0x7F3A7B1Cu;
    // 7F3A7B1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7B20:
    ctx->pc = 0x7F3A7B20u;
    // 7F3A7B20: addi    r4, r3, 15432
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15432);

label_7F3A7B24:
    ctx->pc = 0x7F3A7B24u;
    // 7F3A7B24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7B28:
    ctx->pc = 0x7F3A7B28u;
    // 7F3A7B28: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7B2C:
    ctx->pc = 0x7F3A7B2Cu;
    // 7F3A7B2C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3A7B30u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3A7B30:
    ctx->pc = 0x7F3A7B30u;
    ctx->downcount -= 2;
    // 7F3A7B30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7B34:
    ctx->pc = 0x7F3A7B34u;
    // 7F3A7B34: b       0x7F3A7B3C
    {
            goto label_7F3A7B3C;
    }

label_7F3A7B38:
    ctx->pc = 0x7F3A7B38u;
    ctx->downcount -= 1;
    // 7F3A7B38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7B3C:
    ctx->pc = 0x7F3A7B3Cu;
    ctx->downcount -= 16;
    // 7F3A7B3C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A7B40:
    ctx->pc = 0x7F3A7B40u;
    // 7F3A7B40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7B44:
    ctx->pc = 0x7F3A7B44u;
    // 7F3A7B44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7B48:
    ctx->pc = 0x7F3A7B48u;
    // 7F3A7B48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A7B4C:
    ctx->pc = 0x7F3A7B4Cu;
    // 7F3A7B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7B50:
    ctx->pc = 0x7F3A7B50u;
    ctx->downcount -= 16;
    // 7F3A7B50: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3A7B54:
    ctx->pc = 0x7F3A7B54u;
    // 7F3A7B54: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3A7B58:
    ctx->pc = 0x7F3A7B58u;
    // 7F3A7B58: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F3A7B5C:
    ctx->pc = 0x7F3A7B5Cu;
    // 7F3A7B5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7B60:
    ctx->pc = 0x7F3A7B60u;
    // 7F3A7B60: addi    r8, r5, 15444
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(15444);

label_7F3A7B64:
    ctx->pc = 0x7F3A7B64u;
    // 7F3A7B64: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A7B68:
    ctx->pc = 0x7F3A7B68u;
    // 7F3A7B68: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A7B6C:
    ctx->pc = 0x7F3A7B6Cu;
    // 7F3A7B6C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A7B70:
    ctx->pc = 0x7F3A7B70u;
    // 7F3A7B70: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A7B74:
    ctx->pc = 0x7F3A7B74u;
    // 7F3A7B74: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7B78:
    ctx->pc = 0x7F3A7B78u;
    // 7F3A7B78: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A7B7C:
    ctx->pc = 0x7F3A7B7Cu;
    // 7F3A7B7C: stw     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A7B80:
    ctx->pc = 0x7F3A7B80u;
    // 7F3A7B80: stw     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3A7B84:
    ctx->pc = 0x7F3A7B84u;
    // 7F3A7B84: stw     r4, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3A7B88:
    ctx->pc = 0x7F3A7B88u;
    // 7F3A7B88: stw     r0, 15440(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7B8C:
    ctx->pc = 0x7F3A7B8Cu;
    // 7F3A7B8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7B90:
    ctx->pc = 0x7F3A7B90u;
    ctx->downcount -= 1;
    // 7F3A7B90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7B94:
    ctx->pc = 0x7F3A7B94u;
    ctx->downcount -= 1;
    // 7F3A7B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7B98:
    ctx->pc = 0x7F3A7B98u;
    ctx->downcount -= 9;
    // 7F3A7B98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7B9C:
    ctx->pc = 0x7F3A7B9Cu;
    // 7F3A7B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7BA0:
    ctx->pc = 0x7F3A7BA0u;
    // 7F3A7BA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7BA4:
    ctx->pc = 0x7F3A7BA4u;
    // 7F3A7BA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7BA8:
    ctx->pc = 0x7F3A7BA8u;
    // 7F3A7BA8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7BAC:
    ctx->pc = 0x7F3A7BACu;
    // 7F3A7BAC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7BB0:
    ctx->pc = 0x7F3A7BB0u;
    // 7F3A7BB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7BB4:
    ctx->pc = 0x7F3A7BB4u;
    // 7F3A7BB4: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7BB8:
    ctx->pc = 0x7F3A7BB8u;
    // 7F3A7BB8: bl      0x80051BB0
    {
            ctx->lr = 0x7F3A7BBCu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F3A7BBC:
    ctx->pc = 0x7F3A7BBCu;
    ctx->downcount -= 2;
    // 7F3A7BBC: cmpwi   r3, 0
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

label_7F3A7BC0:
    ctx->pc = 0x7F3A7BC0u;
    // 7F3A7BC0: bc    4, 2, 0x7F3A7C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7C64;
        }
    }

label_7F3A7BC4:
    ctx->pc = 0x7F3A7BC4u;
    ctx->downcount -= 3;
    // 7F3A7BC4: lbz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3A7BC8:
    ctx->pc = 0x7F3A7BC8u;
    // 7F3A7BC8: rlwinm. r0, r3, 0, 30, 30
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

label_7F3A7BCC:
    ctx->pc = 0x7F3A7BCCu;
    // 7F3A7BCC: bc    4, 2, 0x7F3A7C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7C64;
        }
    }

label_7F3A7BD0:
    ctx->pc = 0x7F3A7BD0u;
    ctx->downcount -= 2;
    // 7F3A7BD0: rlwinm. r0, r3, 0, 31, 31
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

label_7F3A7BD4:
    ctx->pc = 0x7F3A7BD4u;
    // 7F3A7BD4: bc    4, 2, 0x7F3A7C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7C4C;
        }
    }

label_7F3A7BD8:
    ctx->pc = 0x7F3A7BD8u;
    ctx->downcount -= 6;
    // 7F3A7BD8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A7BDC:
    ctx->pc = 0x7F3A7BDCu;
    // 7F3A7BDC: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F3A7BE0:
    ctx->pc = 0x7F3A7BE0u;
    // 7F3A7BE0: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7BE4:
    ctx->pc = 0x7F3A7BE4u;
    // 7F3A7BE4: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7BE8:
    ctx->pc = 0x7F3A7BE8u;
    // 7F3A7BE8: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A7BEC:
    ctx->pc = 0x7F3A7BECu;
    // 7F3A7BEC: bc    12, 2, 0x7F3A7BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7BFC;
        }
    }

label_7F3A7BF0:
    ctx->pc = 0x7F3A7BF0u;
    ctx->downcount -= 3;
    // 7F3A7BF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7BF4:
    ctx->pc = 0x7F3A7BF4u;
    // 7F3A7BF4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F3A7BF8:
    ctx->pc = 0x7F3A7BF8u;
    // 7F3A7BF8: bl      0x7F017DC4
    {
            ctx->lr = 0x7F3A7BFCu;
            ctx->pc = 0x7F017DC4u;
            return;
    }

label_7F3A7BFC:
    ctx->pc = 0x7F3A7BFCu;
    ctx->downcount -= 3;
    // 7F3A7BFC: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7C00:
    ctx->pc = 0x7F3A7C00u;
    // 7F3A7C00: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A7C04:
    ctx->pc = 0x7F3A7C04u;
    // 7F3A7C04: bc    12, 2, 0x7F3A7C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7C3C;
        }
    }

label_7F3A7C08:
    ctx->pc = 0x7F3A7C08u;
    ctx->downcount -= 12;
    // 7F3A7C08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7C0C:
    ctx->pc = 0x7F3A7C0Cu;
    // 7F3A7C0C: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F3A7C10:
    ctx->pc = 0x7F3A7C10u;
    // 7F3A7C10: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7C14:
    ctx->pc = 0x7F3A7C14u;
    // 7F3A7C14: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F3A7C18:
    ctx->pc = 0x7F3A7C18u;
    // 7F3A7C18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7C1C:
    ctx->pc = 0x7F3A7C1Cu;
    // 7F3A7C1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7C20:
    ctx->pc = 0x7F3A7C20u;
    // 7F3A7C20: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7C24:
    ctx->pc = 0x7F3A7C24u;
    // 7F3A7C24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A7C28:
    ctx->pc = 0x7F3A7C28u;
    // 7F3A7C28: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A7C2C:
    ctx->pc = 0x7F3A7C2Cu;
    // 7F3A7C2C: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F3A7C30:
    ctx->pc = 0x7F3A7C30u;
    // 7F3A7C30: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A7C34:
    ctx->pc = 0x7F3A7C34u;
    // 7F3A7C34: bl      0x800501FC
    {
            ctx->lr = 0x7F3A7C38u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F3A7C38:
    ctx->pc = 0x7F3A7C38u;
    ctx->downcount -= 1;
    // 7F3A7C38: stw     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7C3C:
    ctx->pc = 0x7F3A7C3Cu;
    ctx->downcount -= 4;
    // 7F3A7C3C: lbz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A7C40:
    ctx->pc = 0x7F3A7C40u;
    // 7F3A7C40: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F3A7C44:
    ctx->pc = 0x7F3A7C44u;
    // 7F3A7C44: stb     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7C48:
    ctx->pc = 0x7F3A7C48u;
    // 7F3A7C48: b       0x7F3A7C64
    {
            goto label_7F3A7C64;
    }

label_7F3A7C4C:
    ctx->pc = 0x7F3A7C4Cu;
    ctx->downcount -= 6;
    // 7F3A7C4C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F3A7C50:
    ctx->pc = 0x7F3A7C50u;
    // 7F3A7C50: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F3A7C54:
    ctx->pc = 0x7F3A7C54u;
    // 7F3A7C54: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7C58:
    ctx->pc = 0x7F3A7C58u;
    // 7F3A7C58: lbz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A7C5C:
    ctx->pc = 0x7F3A7C5Cu;
    // 7F3A7C5C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F3A7C60:
    ctx->pc = 0x7F3A7C60u;
    // 7F3A7C60: stb     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7C64:
    ctx->pc = 0x7F3A7C64u;
    ctx->downcount -= 6;
    // 7F3A7C64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7C68:
    ctx->pc = 0x7F3A7C68u;
    // 7F3A7C68: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7C6C:
    ctx->pc = 0x7F3A7C6Cu;
    // 7F3A7C6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7C70:
    ctx->pc = 0x7F3A7C70u;
    // 7F3A7C70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3A7C74:
    ctx->pc = 0x7F3A7C74u;
    // 7F3A7C74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7C78:
    ctx->pc = 0x7F3A7C78u;
    ctx->downcount -= 21;
    // 7F3A7C78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7C7C:
    ctx->pc = 0x7F3A7C7Cu;
    // 7F3A7C7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7C80:
    ctx->pc = 0x7F3A7C80u;
    // 7F3A7C80: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3A7C84:
    ctx->pc = 0x7F3A7C84u;
    // 7F3A7C84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7C88:
    ctx->pc = 0x7F3A7C88u;
    // 7F3A7C88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7C8C:
    ctx->pc = 0x7F3A7C8Cu;
    // 7F3A7C8C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A7C90:
    ctx->pc = 0x7F3A7C90u;
    // 7F3A7C90: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7C94:
    ctx->pc = 0x7F3A7C94u;
    // 7F3A7C94: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A7C98:
    ctx->pc = 0x7F3A7C98u;
    // 7F3A7C98: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7C9C:
    ctx->pc = 0x7F3A7C9Cu;
    // 7F3A7C9C: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F3A7CA0:
    ctx->pc = 0x7F3A7CA0u;
    // 7F3A7CA0: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F3A7CA4u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F3A7CA4:
    ctx->pc = 0x7F3A7CA4u;
    ctx->downcount -= 3;
    // 7F3A7CA4: cmpwi   r3, 0
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

label_7F3A7CA8:
    ctx->pc = 0x7F3A7CA8u;
    // 7F3A7CA8: stw     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7CAC:
    ctx->pc = 0x7F3A7CACu;
    // 7F3A7CAC: bc    4, 0, 0x7F3A7CB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7CB4;
        }
    }

label_7F3A7CB0:
    ctx->pc = 0x7F3A7CB0u;
    ctx->downcount -= 1;
    // 7F3A7CB0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3A7CB4:
    ctx->pc = 0x7F3A7CB4u;
    ctx->downcount -= 3;
    // 7F3A7CB4: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F3A7CB8:
    ctx->pc = 0x7F3A7CB8u;
    // 7F3A7CB8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3A7CBC:
    ctx->pc = 0x7F3A7CBCu;
    // 7F3A7CBC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F3A7CC0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F3A7CC0:
    ctx->pc = 0x7F3A7CC0u;
    ctx->downcount -= 3;
    // 7F3A7CC0: cmpwi   r3, 0
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

label_7F3A7CC4:
    ctx->pc = 0x7F3A7CC4u;
    // 7F3A7CC4: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7CC8:
    ctx->pc = 0x7F3A7CC8u;
    // 7F3A7CC8: bc    4, 0, 0x7F3A7CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7CD0;
        }
    }

label_7F3A7CCC:
    ctx->pc = 0x7F3A7CCCu;
    ctx->downcount -= 1;
    // 7F3A7CCC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3A7CD0:
    ctx->pc = 0x7F3A7CD0u;
    ctx->downcount -= 19;
    // 7F3A7CD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3A7CD4:
    ctx->pc = 0x7F3A7CD4u;
    // 7F3A7CD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7CD8:
    ctx->pc = 0x7F3A7CD8u;
    // 7F3A7CD8: stb     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3A7CDC:
    ctx->pc = 0x7F3A7CDCu;
    // 7F3A7CDC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3A7CE0:
    ctx->pc = 0x7F3A7CE0u;
    // 7F3A7CE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7CE4:
    ctx->pc = 0x7F3A7CE4u;
    // 7F3A7CE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7CE8:
    ctx->pc = 0x7F3A7CE8u;
    // 7F3A7CE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7CEC:
    ctx->pc = 0x7F3A7CECu;
    // 7F3A7CEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7CF0:
    ctx->pc = 0x7F3A7CF0u;
    ctx->downcount -= 9;
    // 7F3A7CF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7CF4:
    ctx->pc = 0x7F3A7CF4u;
    // 7F3A7CF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7CF8:
    ctx->pc = 0x7F3A7CF8u;
    // 7F3A7CF8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F3A7CFC:
    ctx->pc = 0x7F3A7CFCu;
    // 7F3A7CFC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F3A7D00:
    ctx->pc = 0x7F3A7D00u;
    // 7F3A7D00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7D04:
    ctx->pc = 0x7F3A7D04u;
    // 7F3A7D04: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F3A7D08:
    ctx->pc = 0x7F3A7D08u;
    // 7F3A7D08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7D0C:
    ctx->pc = 0x7F3A7D0Cu;
    // 7F3A7D0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3A7D10:
    ctx->pc = 0x7F3A7D10u;
    // 7F3A7D10: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F3A7D14u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F3A7D14:
    ctx->pc = 0x7F3A7D14u;
    ctx->downcount -= 2;
    // 7F3A7D14: or.   r31, r3, r3
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

label_7F3A7D18:
    ctx->pc = 0x7F3A7D18u;
    // 7F3A7D18: bc    12, 2, 0x7F3A7D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7D4C;
        }
    }

label_7F3A7D1C:
    ctx->pc = 0x7F3A7D1Cu;
    ctx->downcount -= 5;
    // 7F3A7D1C: lis     r4, 32570
    ctx->gpr[4] = ((u32)(s32)(32570) << 16);

label_7F3A7D20:
    ctx->pc = 0x7F3A7D20u;
    // 7F3A7D20: lis     r5, 32570
    ctx->gpr[5] = ((u32)(s32)(32570) << 16);

label_7F3A7D24:
    ctx->pc = 0x7F3A7D24u;
    // 7F3A7D24: addi    r4, r4, 31640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31640);

label_7F3A7D28:
    ctx->pc = 0x7F3A7D28u;
    // 7F3A7D28: addi    r5, r5, 31636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31636);

label_7F3A7D2C:
    ctx->pc = 0x7F3A7D2Cu;
    // 7F3A7D2C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F3A7D30u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F3A7D30:
    ctx->pc = 0x7F3A7D30u;
    ctx->downcount -= 2;
    // 7F3A7D30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7D34:
    ctx->pc = 0x7F3A7D34u;
    // 7F3A7D34: bl      0x7F3A7C78
    {
            ctx->lr = 0x7F3A7D38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7C78u;
                return;
            }
            goto label_7F3A7C78;
    }

label_7F3A7D38:
    ctx->pc = 0x7F3A7D38u;
    ctx->downcount -= 2;
    // 7F3A7D38: cmpwi   r3, 0
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

label_7F3A7D3C:
    ctx->pc = 0x7F3A7D3Cu;
    // 7F3A7D3C: bc    12, 2, 0x7F3A7D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7D4C;
        }
    }

label_7F3A7D40:
    ctx->pc = 0x7F3A7D40u;
    ctx->downcount -= 2;
    // 7F3A7D40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7D44:
    ctx->pc = 0x7F3A7D44u;
    // 7F3A7D44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3A7D48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3A7D48:
    ctx->pc = 0x7F3A7D48u;
    ctx->downcount -= 1;
    // 7F3A7D48: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F3A7D4C:
    ctx->pc = 0x7F3A7D4Cu;
    ctx->downcount -= 2;
    // 7F3A7D4C: li      r3, 240
    ctx->gpr[3] = (u32)(s32)(240);

label_7F3A7D50:
    ctx->pc = 0x7F3A7D50u;
    // 7F3A7D50: bl      0x7F01F538
    {
            ctx->lr = 0x7F3A7D54u;
            ctx->pc = 0x7F01F538u;
            return;
    }

label_7F3A7D54:
    ctx->pc = 0x7F3A7D54u;
    ctx->downcount -= 7;
    // 7F3A7D54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7D58:
    ctx->pc = 0x7F3A7D58u;
    // 7F3A7D58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3A7D5C:
    ctx->pc = 0x7F3A7D5Cu;
    // 7F3A7D5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3A7D60:
    ctx->pc = 0x7F3A7D60u;
    // 7F3A7D60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7D64:
    ctx->pc = 0x7F3A7D64u;
    // 7F3A7D64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7D68:
    ctx->pc = 0x7F3A7D68u;
    // 7F3A7D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7D6C:
    ctx->pc = 0x7F3A7D6Cu;
    ctx->downcount -= 7;
    // 7F3A7D6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7D70:
    ctx->pc = 0x7F3A7D70u;
    // 7F3A7D70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7D74:
    ctx->pc = 0x7F3A7D74u;
    // 7F3A7D74: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A7D78:
    ctx->pc = 0x7F3A7D78u;
    // 7F3A7D78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7D7C:
    ctx->pc = 0x7F3A7D7Cu;
    // 7F3A7D7C: addi    r3, r3, -5728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5728);

label_7F3A7D80:
    ctx->pc = 0x7F3A7D80u;
    // 7F3A7D80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7D84:
    ctx->pc = 0x7F3A7D84u;
    // 7F3A7D84: bl      0x7F01A16C
    {
            ctx->lr = 0x7F3A7D88u;
            ctx->pc = 0x7F01A16Cu;
            return;
    }

label_7F3A7D88:
    ctx->pc = 0x7F3A7D88u;
    ctx->downcount -= 5;
    // 7F3A7D88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7D8C:
    ctx->pc = 0x7F3A7D8Cu;
    // 7F3A7D8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3A7D90:
    ctx->pc = 0x7F3A7D90u;
    // 7F3A7D90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3A7D94:
    ctx->pc = 0x7F3A7D94u;
    // 7F3A7D94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7D98:
    ctx->pc = 0x7F3A7D98u;
    ctx->downcount -= 8;
    // 7F3A7D98: lis     r5, 32592
    ctx->gpr[5] = ((u32)(s32)(32592) << 16);

label_7F3A7D9C:
    ctx->pc = 0x7F3A7D9Cu;
    // 7F3A7D9C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3A7DA0:
    ctx->pc = 0x7F3A7DA0u;
    // 7F3A7DA0: addi    r7, r5, -21852
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-21852);

label_7F3A7DA4:
    ctx->pc = 0x7F3A7DA4u;
    // 7F3A7DA4: addi    r9, r3, 444
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(444);

label_7F3A7DA8:
    ctx->pc = 0x7F3A7DA8u;
    // 7F3A7DA8: lwz     r8, 3204(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3204);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3A7DAC:
    ctx->pc = 0x7F3A7DACu;
    // 7F3A7DAC: addi    r6, r4, 15512
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15512);

label_7F3A7DB0:
    ctx->pc = 0x7F3A7DB0u;
    // 7F3A7DB0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3A7DB4:
    ctx->pc = 0x7F3A7DB4u;
    // 7F3A7DB4: b       0x7F3A7E60
    {
            goto label_7F3A7E60;
    }

label_7F3A7DB8:
    ctx->pc = 0x7F3A7DB8u;
    ctx->downcount -= 3;
    // 7F3A7DB8: lwz     r5, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A7DBC:
    // 7F3A7DBC: rlwinm. r0, r5, 0, 3, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x10000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A7DC0:
    // 7F3A7DC0: bc    12, 2, 0x7F3A7DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7DD0;
        }
    }

label_7F3A7DC4:
    ctx->downcount -= 2;
    // 7F3A7DC4: cmpwi   r10, 0
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

label_7F3A7DC8:
    // 7F3A7DC8: bc    4, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7DCC:
    ctx->downcount -= 1;
    // 7F3A7DCC: b       0x7F3A7DF4
    {
            goto label_7F3A7DF4;
    }

label_7F3A7DD0:
    ctx->pc = 0x7F3A7DD0u;
    ctx->downcount -= 3;
    // 7F3A7DD0: lha     r0, 200(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(200);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7DD4:
    // 7F3A7DD4: rlwinm. r0, r0, 0, 30, 30
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

label_7F3A7DD8:
    // 7F3A7DD8: bc    4, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7DDC:
    ctx->pc = 0x7F3A7DDCu;
    ctx->downcount -= 4;
    // 7F3A7DDC: lwz     r4, 216(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7DE0:
    ctx->pc = 0x7F3A7DE0u;
    // 7F3A7DE0: lhz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F3A7DE4:
    // 7F3A7DE4: cmplwi  r0, 0x0000
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

label_7F3A7DE8:
    // 7F3A7DE8: bc    12, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7DEC:
    ctx->downcount -= 2;
    // 7F3A7DEC: rlwinm. r0, r5, 0, 20, 20
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

label_7F3A7DF0:
    // 7F3A7DF0: bc    12, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7DF4:
    ctx->pc = 0x7F3A7DF4u;
    ctx->downcount -= 3;
    // 7F3A7DF4: lwz     r4, 192(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7DF8:
    // 7F3A7DF8: rlwinm. r0, r4, 0, 9, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00400000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A7DFC:
    // 7F3A7DFC: bc    12, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7E00:
    ctx->pc = 0x7F3A7E00u;
    ctx->downcount -= 3;
    // 7F3A7E00: lwz     r0, 3208(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7E04:
    // 7F3A7E04: and.   r0, r4, r0
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

label_7F3A7E08:
    // 7F3A7E08: bc    4, 2, 0x7F3A7E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3A7E58;
        }
    }

label_7F3A7E0C:
    ctx->pc = 0x7F3A7E0Cu;
    ctx->downcount -= 19;
    // 7F3A7E0C: lwz     r4, 196(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7E10:
    ctx->pc = 0x7F3A7E10u;
    // 7F3A7E10: lwz     r5, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A7E14:
    // 7F3A7E14: addis   r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(128) << 16);

label_7F3A7E18:
    ctx->pc = 0x7F3A7E18u;
    // 7F3A7E18: stw     r10, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3A7E1C:
    // 7F3A7E1C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F3A7E20:
    // 7F3A7E20: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3A7E24:
    ctx->pc = 0x7F3A7E24u;
    // 7F3A7E24: stw     r3, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3A7E28:
    // 7F3A7E28: rlwinm r4, r0, 28, 24, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x000000FCu;
    }

label_7F3A7E2C:
    // 7F3A7E2C: rlwinm r0, r0, 26, 6, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 26u) & 0x03FFFFFFu;
    }

label_7F3A7E30:
    ctx->pc = 0x7F3A7E30u;
    // 7F3A7E30: stw     r9, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3A7E34:
    // 7F3A7E34: addi    r5, r4, 15872
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15872);

label_7F3A7E38:
    ctx->pc = 0x7F3A7E38u;
    // 7F3A7E38: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7E3C:
    ctx->pc = 0x7F3A7E3Cu;
    // 7F3A7E3C: lwzx    r0, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7E40:
    ctx->pc = 0x7F3A7E40u;
    // 7F3A7E40: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7E44:
    ctx->pc = 0x7F3A7E44u;
    // 7F3A7E44: lwz     r4, 3200(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7E48:
    ctx->pc = 0x7F3A7E48u;
    // 7F3A7E48: stwx    r8, r6, r5
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A7E4C:
    // 7F3A7E4C: addi    r8, r8, 20
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20);

label_7F3A7E50:
    // 7F3A7E50: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F3A7E54:
    ctx->pc = 0x7F3A7E54u;
    // 7F3A7E54: stw     r0, 3200(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7E58:
    ctx->downcount -= 2;
    // 7F3A7E58: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F3A7E5C:
    // 7F3A7E5C: addi    r9, r9, 324
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(324);

label_7F3A7E60:
    ctx->pc = 0x7F3A7E60u;
    ctx->downcount -= 3;
    // 7F3A7E60: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3A7E64:
    // 7F3A7E64: cmpw    r10, r0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A7E68:
    // 7F3A7E68: bc    12, 0, 0x7F3A7DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7DB8u;
                return;
            }
            goto label_7F3A7DB8;
        }
    }

label_7F3A7E6C:
    ctx->pc = 0x7F3A7E6Cu;
    ctx->downcount -= 2;
    // 7F3A7E6C: stw     r8, 3204(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3204);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A7E70:
    ctx->pc = 0x7F3A7E70u;
    // 7F3A7E70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7E74:
    ctx->pc = 0x7F3A7E74u;
    ctx->downcount -= 6;
    // 7F3A7E74: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3A7E78:
    ctx->pc = 0x7F3A7E78u;
    // 7F3A7E78: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F3A7E7C:
    ctx->pc = 0x7F3A7E7Cu;
    // 7F3A7E7C: addi    r5, r3, 15512
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15512);

label_7F3A7E80:
    ctx->pc = 0x7F3A7E80u;
    // 7F3A7E80: li      r3, 252
    ctx->gpr[3] = (u32)(s32)(252);

label_7F3A7E84:
    ctx->pc = 0x7F3A7E84u;
    // 7F3A7E84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A7E88:
    ctx->downcount -= 3;
    // 7F3A7E88: addi    r0, r3, 15872
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15872);

label_7F3A7E8C:
    ctx->pc = 0x7F3A7E8Cu;
    // 7F3A7E8C: lwzx    r7, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A7E90:
    // 7F3A7E90: b       0x7F3A7EB4
    {
            goto label_7F3A7EB4;
    }

label_7F3A7E94:
    loop_7F3A7E94(ctx);
    if (ctx->pc == 0x7F3A7EBCu) goto label_7F3A7EBC;
    return;
label_7F3A7E98:
    ctx->pc = 0x7F3A7E98u;
    // 7F3A7E98: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3A7E9C:
    ctx->pc = 0x7F3A7E9Cu;
    // 7F3A7E9C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7EA0:
    // 7F3A7EA0: rlwinm r4, r0, 28, 24, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x000000FCu;
    }

label_7F3A7EA4:
    // 7F3A7EA4: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_7F3A7EA8:
    ctx->pc = 0x7F3A7EA8u;
    // 7F3A7EA8: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7EAC:
    ctx->pc = 0x7F3A7EACu;
    // 7F3A7EAC: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7EB0:
    ctx->pc = 0x7F3A7EB0u;
    // 7F3A7EB0: stwx    r6, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3A7EB4:
    ctx->downcount -= 2;
    // 7F3A7EB4: cmplwi  r7, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3A7EB8:
    // 7F3A7EB8: bc    4, 2, 0x7F3A7E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7E94u;
                return;
            }
            goto label_7F3A7E94;
        }
    }

label_7F3A7EBC:
    ctx->downcount -= 2;
    // 7F3A7EBC: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F3A7EC0:
    // 7F3A7EC0: bc    16, 0, 0x7F3A7E88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7E88u;
                return;
            }
            goto label_7F3A7E88;
        }
    }

label_7F3A7EC4:
    ctx->pc = 0x7F3A7EC4u;
    ctx->downcount -= 4;
    // 7F3A7EC4: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F3A7EC8:
    ctx->pc = 0x7F3A7EC8u;
    // 7F3A7EC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7ECC:
    ctx->pc = 0x7F3A7ECCu;
    // 7F3A7ECC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3A7ED0:
    ctx->downcount -= 3;
    // 7F3A7ED0: addi    r0, r3, 15616
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15616);

label_7F3A7ED4:
    ctx->pc = 0x7F3A7ED4u;
    // 7F3A7ED4: lwzx    r6, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A7ED8:
    // 7F3A7ED8: b       0x7F3A7EFC
    {
            goto label_7F3A7EFC;
    }

label_7F3A7EDC:
    loop_7F3A7EDC(ctx);
    if (ctx->pc == 0x7F3A7F04u) goto label_7F3A7F04;
    return;
label_7F3A7EE0:
    ctx->pc = 0x7F3A7EE0u;
    // 7F3A7EE0: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3A7EE4:
    ctx->pc = 0x7F3A7EE4u;
    // 7F3A7EE4: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7EE8:
    // 7F3A7EE8: rlwinm r4, r0, 22, 24, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 22u) & 0x000000FCu;
    }

label_7F3A7EEC:
    // 7F3A7EEC: addi    r4, r4, 15360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15360);

label_7F3A7EF0:
    ctx->pc = 0x7F3A7EF0u;
    // 7F3A7EF0: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A7EF4:
    ctx->pc = 0x7F3A7EF4u;
    // 7F3A7EF4: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7EF8:
    ctx->pc = 0x7F3A7EF8u;
    // 7F3A7EF8: stwx    r7, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A7EFC:
    ctx->downcount -= 2;
    // 7F3A7EFC: cmplwi  r6, 0x0000
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

label_7F3A7F00:
    // 7F3A7F00: bc    4, 2, 0x7F3A7EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7EDCu;
                return;
            }
            goto label_7F3A7EDC;
        }
    }

label_7F3A7F04:
    ctx->downcount -= 2;
    // 7F3A7F04: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F3A7F08:
    // 7F3A7F08: bc    16, 0, 0x7F3A7ED0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3A7ED0u;
                return;
            }
            goto label_7F3A7ED0;
        }
    }

label_7F3A7F0C:
    ctx->pc = 0x7F3A7F0Cu;
    ctx->downcount -= 1;
    // 7F3A7F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3A40EC;
        }
    }

label_7F3A7F10:
    ctx->pc = 0x7F3A7F10u;
    ctx->downcount -= 23;
    // 7F3A7F10: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3A7F14:
    ctx->pc = 0x7F3A7F14u;
    // 7F3A7F14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3A7F18:
    ctx->pc = 0x7F3A7F18u;
    // 7F3A7F18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3A7F1C:
    ctx->pc = 0x7F3A7F1Cu;
    // 7F3A7F1C: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3A7F20:
    ctx->pc = 0x7F3A7F20u;
    // 7F3A7F20: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F3A7F24:
    ctx->pc = 0x7F3A7F24u;
    // 7F3A7F24: stmw     r27, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3A7F28:
    ctx->pc = 0x7F3A7F28u;
    // 7F3A7F28: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3A7F2C:
    ctx->pc = 0x7F3A7F2Cu;
    // 7F3A7F2C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3A7F30:
    ctx->pc = 0x7F3A7F30u;
    // 7F3A7F30: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3A7F34:
    ctx->pc = 0x7F3A7F34u;
    // 7F3A7F34: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F3A7F38:
    ctx->pc = 0x7F3A7F38u;
    // 7F3A7F38: lwz     r3, 312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7F3C:
    ctx->pc = 0x7F3A7F3Cu;
    // 7F3A7F3C: lwz     r4, 316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A7F40:
    ctx->pc = 0x7F3A7F40u;
    // 7F3A7F40: bl      0x7F3B8D58
    {
            ctx->lr = 0x7F3A7F44u;
            ctx->pc = 0x7F3B8D58u;
            return;
    }

label_7F3A7F44:
    ctx->pc = 0x7F3A7F44u;
    ctx->downcount -= 4;
    // 7F3A7F44: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F3A7F48:
    ctx->pc = 0x7F3A7F48u;
    // 7F3A7F48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7F4C:
    ctx->pc = 0x7F3A7F4Cu;
    // 7F3A7F4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7F50:
    ctx->pc = 0x7F3A7F50u;
    // 7F3A7F50: bl      0x80044794
    {
            ctx->lr = 0x7F3A7F54u;
            ctx->pc = 0x80044794u;
            return;
    }

label_7F3A7F54:
    ctx->pc = 0x7F3A7F54u;
    ctx->downcount -= 3;
    // 7F3A7F54: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F3A7F58:
    ctx->pc = 0x7F3A7F58u;
    // 7F3A7F58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7F5C:
    ctx->pc = 0x7F3A7F5Cu;
    // 7F3A7F5C: bl      0x80044978
    {
            ctx->lr = 0x7F3A7F60u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F3A7F60:
    ctx->pc = 0x7F3A7F60u;
    ctx->downcount -= 2;
    // 7F3A7F60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A7F64:
    ctx->pc = 0x7F3A7F64u;
    // 7F3A7F64: bl      0x80045EC8
    {
            ctx->lr = 0x7F3A7F68u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_7F3A7F68:
    ctx->pc = 0x7F3A7F68u;
    ctx->downcount -= 6;
    // 7F3A7F68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7F6C:
    ctx->pc = 0x7F3A7F6Cu;
    // 7F3A7F6C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3A7F70:
    ctx->pc = 0x7F3A7F70u;
    // 7F3A7F70: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F3A7F74:
    ctx->pc = 0x7F3A7F74u;
    // 7F3A7F74: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F3A7F78:
    ctx->pc = 0x7F3A7F78u;
    // 7F3A7F78: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F3A7F7C:
    ctx->pc = 0x7F3A7F7Cu;
    // 7F3A7F7C: bl      0x8004585C
    {
            ctx->lr = 0x7F3A7F80u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F3A7F80:
    ctx->pc = 0x7F3A7F80u;
    ctx->downcount -= 7;
    // 7F3A7F80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7F84:
    ctx->pc = 0x7F3A7F84u;
    // 7F3A7F84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7F88:
    ctx->pc = 0x7F3A7F88u;
    // 7F3A7F88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7F8C:
    ctx->pc = 0x7F3A7F8Cu;
    // 7F3A7F8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7F90:
    ctx->pc = 0x7F3A7F90u;
    // 7F3A7F90: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A7F94:
    ctx->pc = 0x7F3A7F94u;
    // 7F3A7F94: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A7F98:
    ctx->pc = 0x7F3A7F98u;
    // 7F3A7F98: bl      0x80045908
    {
            ctx->lr = 0x7F3A7F9Cu;
            ctx->pc = 0x80045908u;
            return;
    }

label_7F3A7F9C:
    ctx->pc = 0x7F3A7F9Cu;
    ctx->downcount -= 6;
    // 7F3A7F9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7FA0:
    ctx->pc = 0x7F3A7FA0u;
    // 7F3A7FA0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F3A7FA4:
    ctx->pc = 0x7F3A7FA4u;
    // 7F3A7FA4: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F3A7FA8:
    ctx->pc = 0x7F3A7FA8u;
    // 7F3A7FA8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F3A7FAC:
    ctx->pc = 0x7F3A7FACu;
    // 7F3A7FAC: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F3A7FB0:
    ctx->pc = 0x7F3A7FB0u;
    // 7F3A7FB0: bl      0x80045818
    {
            ctx->lr = 0x7F3A7FB4u;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F3A7FB4:
    ctx->pc = 0x7F3A7FB4u;
    ctx->downcount -= 7;
    // 7F3A7FB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7FB8:
    ctx->pc = 0x7F3A7FB8u;
    // 7F3A7FB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7FBC:
    ctx->pc = 0x7F3A7FBCu;
    // 7F3A7FBC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7FC0:
    ctx->pc = 0x7F3A7FC0u;
    // 7F3A7FC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3A7FC4:
    ctx->pc = 0x7F3A7FC4u;
    // 7F3A7FC4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F3A7FC8:
    ctx->pc = 0x7F3A7FC8u;
    // 7F3A7FC8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3A7FCC:
    ctx->pc = 0x7F3A7FCCu;
    // 7F3A7FCC: bl      0x800458A0
    {
            ctx->lr = 0x7F3A7FD0u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F3A7FD0:
    ctx->pc = 0x7F3A7FD0u;
    ctx->downcount -= 5;
    // 7F3A7FD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A7FD4:
    ctx->pc = 0x7F3A7FD4u;
    // 7F3A7FD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7FD8:
    ctx->pc = 0x7F3A7FD8u;
    // 7F3A7FD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7FDC:
    ctx->pc = 0x7F3A7FDCu;
    // 7F3A7FDC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F3A7FE0:
    ctx->pc = 0x7F3A7FE0u;
    // 7F3A7FE0: bl      0x80045D2C
    {
            ctx->lr = 0x7F3A7FE4u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_7F3A7FE4:
    ctx->pc = 0x7F3A7FE4u;
    ctx->downcount -= 3;
    // 7F3A7FE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3A7FE8:
    ctx->pc = 0x7F3A7FE8u;
    // 7F3A7FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A7FEC:
    ctx->pc = 0x7F3A7FECu;
    // 7F3A7FEC: bl      0x7F3B9BC8
    {
            ctx->lr = 0x7F3A7FF0u;
            ctx->pc = 0x7F3B9BC8u;
            return;
    }

label_7F3A7FF0:
    ctx->pc = 0x7F3A7FF0u;
    ctx->downcount -= 4;
    // 7F3A7FF0: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A7FF4:
    ctx->pc = 0x7F3A7FF4u;
    // 7F3A7FF4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F3A7FF8:
    ctx->pc = 0x7F3A7FF8u;
    // 7F3A7FF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A7FFC:
    ctx->pc = 0x7F3A7FFCu;
    // 7F3A7FFC: bl      0x80046B68
    {
            ctx->lr = 0x7F3A8000u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_7F3A8000:
    ctx->pc = 0x7F3A8000u;
    ctx->downcount -= 2;
    // 7F3A8000: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8004:
    ctx->pc = 0x7F3A8004u;
    // 7F3A8004: bl      0x80046B34
    {
            ctx->lr = 0x7F3A8008u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_7F3A8008:
    ctx->pc = 0x7F3A8008u;
    ctx->downcount -= 1;
    // 7F3A8008: bl      0x80041BD4
    {
            ctx->lr = 0x7F3A800Cu;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F3A800C:
    ctx->pc = 0x7F3A800Cu;
    ctx->downcount -= 3;
    // 7F3A800C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8010:
    ctx->pc = 0x7F3A8010u;
    // 7F3A8010: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3A8014:
    ctx->pc = 0x7F3A8014u;
    // 7F3A8014: bl      0x80041500
    {
            ctx->lr = 0x7F3A8018u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A8018:
    ctx->pc = 0x7F3A8018u;
    ctx->downcount -= 3;
    // 7F3A8018: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F3A801C:
    ctx->pc = 0x7F3A801Cu;
    // 7F3A801C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8020:
    ctx->pc = 0x7F3A8020u;
    // 7F3A8020: bl      0x80041500
    {
            ctx->lr = 0x7F3A8024u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A8024:
    ctx->pc = 0x7F3A8024u;
    ctx->downcount -= 3;
    // 7F3A8024: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3A8028:
    ctx->pc = 0x7F3A8028u;
    // 7F3A8028: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A802C:
    ctx->pc = 0x7F3A802Cu;
    // 7F3A802C: bl      0x80041500
    {
            ctx->lr = 0x7F3A8030u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F3A8030:
    ctx->pc = 0x7F3A8030u;
    ctx->downcount -= 3;
    // 7F3A8030: lwz     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8034:
    ctx->pc = 0x7F3A8034u;
    // 7F3A8034: rlwinm. r0, r0, 0, 11, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00180000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3A8038:
    ctx->pc = 0x7F3A8038u;
    // 7F3A8038: bc    12, 2, 0x7F3A8058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3A8058;
        }
    }

label_7F3A803C:
    ctx->pc = 0x7F3A803Cu;
    ctx->downcount -= 4;
    // 7F3A803C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A8040:
    ctx->pc = 0x7F3A8040u;
    // 7F3A8040: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8044:
    ctx->pc = 0x7F3A8044u;
    // 7F3A8044: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8048:
    ctx->pc = 0x7F3A8048u;
    // 7F3A8048: bl      0x800462E4
    {
            ctx->lr = 0x7F3A804Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A804C:
    ctx->pc = 0x7F3A804Cu;
    ctx->downcount -= 2;
    // 7F3A804C: lwz     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3A8050:
    ctx->pc = 0x7F3A8050u;
    // 7F3A8050: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3A8054u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3A8054:
    ctx->pc = 0x7F3A8054u;
    ctx->downcount -= 1;
    // 7F3A8054: b       0x7F3A8060
    {
            goto label_7F3A8060;
    }

label_7F3A8058:
    ctx->pc = 0x7F3A8058u;
    ctx->downcount -= 2;
    // 7F3A8058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A805C:
    ctx->pc = 0x7F3A805Cu;
    // 7F3A805C: bl      0x7F3B94BC
    {
            ctx->lr = 0x7F3A8060u;
            ctx->pc = 0x7F3B94BCu;
            return;
    }

label_7F3A8060:
    ctx->pc = 0x7F3A8060u;
    ctx->downcount -= 5;
    // 7F3A8060: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8064:
    ctx->pc = 0x7F3A8064u;
    // 7F3A8064: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3A8068:
    ctx->pc = 0x7F3A8068u;
    // 7F3A8068: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A806C:
    ctx->pc = 0x7F3A806Cu;
    // 7F3A806C: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F3A8070:
    ctx->pc = 0x7F3A8070u;
    // 7F3A8070: bl      0x7F3A840C
    {
            ctx->lr = 0x7F3A8074u;
            ctx->pc = 0x7F3A840Cu;
            return;
    }

label_7F3A8074:
    ctx->pc = 0x7F3A8074u;
    ctx->downcount -= 2;
    // 7F3A8074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3A8078:
    ctx->pc = 0x7F3A8078u;
    // 7F3A8078: bl      0x7F1DED48
    {
            ctx->lr = 0x7F3A807Cu;
            ctx->pc = 0x7F1DED48u;
            return;
    }

label_7F3A807C:
    ctx->pc = 0x7F3A807Cu;
    ctx->downcount -= 3;
    // 7F3A807C: lwz     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A8080:
    ctx->pc = 0x7F3A8080u;
    // 7F3A8080: rlwinm. r0, r0, 0, 24, 24
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

label_7F3A8084:
    ctx->pc = 0x7F3A8084u;
    // 7F3A8084: bc    12, 2, 0x7F3A83F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3A83F8u;
            return;
        }
    }

label_7F3A8088:
    ctx->pc = 0x7F3A8088u;
    ctx->downcount -= 4;
    // 7F3A8088: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3A808C:
    ctx->pc = 0x7F3A808Cu;
    // 7F3A808C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F3A8090:
    ctx->pc = 0x7F3A8090u;
    // 7F3A8090: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3A8094:
    ctx->pc = 0x7F3A8094u;
    // 7F3A8094: bl      0x800462E4
    {
            ctx->lr = 0x7F3A8098u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F3A8098:
    ctx->pc = 0x7F3A8098u;
    ctx->downcount -= 21;
    // 7F3A8098: lwz     r0, 928(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(928);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A809C:
    ctx->pc = 0x7F3A809Cu;
    // 7F3A809C: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F3A80A0:
    ctx->pc = 0x7F3A80A0u;
    // 7F3A80A0: lwz     r4, 920(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(920);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3A80A4:
    ctx->pc = 0x7F3A80A4u;
    // 7F3A80A4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F3A80A8:
    ctx->pc = 0x7F3A80A8u;
    // 7F3A80A8: xoris   r9, r0, 0x8000
    ctx->gpr[9] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3A80AC:
    ctx->pc = 0x7F3A80ACu;
    // 7F3A80AC: lwz     r5, 932(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3A80B0:
    ctx->pc = 0x7F3A80B0u;
    // 7F3A80B0: xoris   r6, r4, 0x8000
    ctx->gpr[6] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F3A80B4:
    ctx->pc = 0x7F3A80B4u;
    // 7F3A80B4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A80B8:
    ctx->pc = 0x7F3A80B8u;
    // 7F3A80B8: addi    r10, r4, -21360
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-21360);

label_7F3A80BC:
    ctx->pc = 0x7F3A80BCu;
    // 7F3A80BC: xoris   r7, r5, 0x8000
    ctx->gpr[7] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F3A80C0:
    ctx->pc = 0x7F3A80C0u;
    // 7F3A80C0: stw     r9, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3A80C4:
    ctx->pc = 0x7F3A80C4u;
    // 7F3A80C4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3A80C8:
    ctx->pc = 0x7F3A80C8u;
    // 7F3A80C8: lwz     r0, 924(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3A80CC:
    ctx->pc = 0x7F3A80CCu;
    // 7F3A80CC: stw     r8, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3A80D0:
    ctx->pc = 0x7F3A80D0u;
    // 7F3A80D0: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F3A80D4:
    ctx->pc = 0x7F3A80D4u;
    // 7F3A80D4: lfd     f4, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F3A80D4u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A80D8:
    ctx->pc = 0x7F3A80D8u;
    // 7F3A80D8: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3A80D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3A80DC:
    ctx->pc = 0x7F3A80DCu;
    // 7F3A80DC: stw     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F3A80E0:
    ctx->pc = 0x7F3A80E0u;
    // 7F3A80E0: lbz     r0, 4444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3A80E4:
    ctx->pc = 0x7F3A80E4u;
    // 7F3A80E4: fsubs   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F3A80E4u)) return;
    ppc_fsubs(ctx, 1, 0, 4);

label_7F3A80E8:
    ctx->pc = 0x7F3A80E8u;
    // 7F3A80E8: stw     r8, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F3A80ECu;
    return;
return_dispatch_7F3A40EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F3A40F4u: goto label_7F3A40F4;
    case 0x7F3A40FCu: goto label_7F3A40FC;
    case 0x7F3A4118u: goto label_7F3A4118;
    case 0x7F3A4120u: goto label_7F3A4120;
    case 0x7F3A414Cu: goto label_7F3A414C;
    case 0x7F3A4160u: goto label_7F3A4160;
    case 0x7F3A41B8u: goto label_7F3A41B8;
    case 0x7F3A41C0u: goto label_7F3A41C0;
    case 0x7F3A42A4u: goto label_7F3A42A4;
    case 0x7F3A42F0u: goto label_7F3A42F0;
    case 0x7F3A4344u: goto label_7F3A4344;
    case 0x7F3A437Cu: goto label_7F3A437C;
    case 0x7F3A43E4u: goto label_7F3A43E4;
    case 0x7F3A43F4u: goto label_7F3A43F4;
    case 0x7F3A43FCu: goto label_7F3A43FC;
    case 0x7F3A4410u: goto label_7F3A4410;
    case 0x7F3A4418u: goto label_7F3A4418;
    case 0x7F3A4534u: goto label_7F3A4534;
    case 0x7F3A45D4u: goto label_7F3A45D4;
    case 0x7F3A45ECu: goto label_7F3A45EC;
    case 0x7F3A4624u: goto label_7F3A4624;
    case 0x7F3A4700u: goto label_7F3A4700;
    case 0x7F3A4714u: goto label_7F3A4714;
    case 0x7F3A473Cu: goto label_7F3A473C;
    case 0x7F3A4774u: goto label_7F3A4774;
    case 0x7F3A47B0u: goto label_7F3A47B0;
    case 0x7F3A47D0u: goto label_7F3A47D0;
    case 0x7F3A47E0u: goto label_7F3A47E0;
    case 0x7F3A483Cu: goto label_7F3A483C;
    case 0x7F3A4850u: goto label_7F3A4850;
    case 0x7F3A4858u: goto label_7F3A4858;
    case 0x7F3A486Cu: goto label_7F3A486C;
    case 0x7F3A4878u: goto label_7F3A4878;
    case 0x7F3A49E4u: goto label_7F3A49E4;
    case 0x7F3A4A14u: goto label_7F3A4A14;
    case 0x7F3A4A60u: goto label_7F3A4A60;
    case 0x7F3A4A98u: goto label_7F3A4A98;
    case 0x7F3A4ABCu: goto label_7F3A4ABC;
    case 0x7F3A4B08u: goto label_7F3A4B08;
    case 0x7F3A4B40u: goto label_7F3A4B40;
    case 0x7F3A4B64u: goto label_7F3A4B64;
    case 0x7F3A4BB0u: goto label_7F3A4BB0;
    case 0x7F3A4BE8u: goto label_7F3A4BE8;
    case 0x7F3A4C68u: goto label_7F3A4C68;
    case 0x7F3A4CC4u: goto label_7F3A4CC4;
    case 0x7F3A4CD0u: goto label_7F3A4CD0;
    case 0x7F3A4D68u: goto label_7F3A4D68;
    case 0x7F3A4D7Cu: goto label_7F3A4D7C;
    case 0x7F3A4DA4u: goto label_7F3A4DA4;
    case 0x7F3A4DF0u: goto label_7F3A4DF0;
    case 0x7F3A4E34u: goto label_7F3A4E34;
    case 0x7F3A4EACu: goto label_7F3A4EAC;
    case 0x7F3A4F48u: goto label_7F3A4F48;
    case 0x7F3A4F5Cu: goto label_7F3A4F5C;
    case 0x7F3A4F84u: goto label_7F3A4F84;
    case 0x7F3A4FE4u: goto label_7F3A4FE4;
    case 0x7F3A5020u: goto label_7F3A5020;
    case 0x7F3A5058u: goto label_7F3A5058;
    case 0x7F3A50CCu: goto label_7F3A50CC;
    case 0x7F3A5124u: goto label_7F3A5124;
    case 0x7F3A5170u: goto label_7F3A5170;
    case 0x7F3A51A8u: goto label_7F3A51A8;
    case 0x7F3A51CCu: goto label_7F3A51CC;
    case 0x7F3A5218u: goto label_7F3A5218;
    case 0x7F3A5250u: goto label_7F3A5250;
    case 0x7F3A5274u: goto label_7F3A5274;
    case 0x7F3A52C0u: goto label_7F3A52C0;
    case 0x7F3A52F8u: goto label_7F3A52F8;
    case 0x7F3A53C4u: goto label_7F3A53C4;
    case 0x7F3A53CCu: goto label_7F3A53CC;
    case 0x7F3A53E0u: goto label_7F3A53E0;
    case 0x7F3A54BCu: goto label_7F3A54BC;
    case 0x7F3A54E8u: goto label_7F3A54E8;
    case 0x7F3A54F4u: goto label_7F3A54F4;
    case 0x7F3A5618u: goto label_7F3A5618;
    case 0x7F3A5620u: goto label_7F3A5620;
    case 0x7F3A56A0u: goto label_7F3A56A0;
    case 0x7F3A5738u: goto label_7F3A5738;
    case 0x7F3A57C0u: goto label_7F3A57C0;
    case 0x7F3A57C8u: goto label_7F3A57C8;
    case 0x7F3A5840u: goto label_7F3A5840;
    case 0x7F3A5870u: goto label_7F3A5870;
    case 0x7F3A589Cu: goto label_7F3A589C;
    case 0x7F3A5904u: goto label_7F3A5904;
    case 0x7F3A5924u: goto label_7F3A5924;
    case 0x7F3A59E4u: goto label_7F3A59E4;
    case 0x7F3A5A14u: goto label_7F3A5A14;
    case 0x7F3A5ABCu: goto label_7F3A5ABC;
    case 0x7F3A5AD8u: goto label_7F3A5AD8;
    case 0x7F3A5AE8u: goto label_7F3A5AE8;
    case 0x7F3A5B10u: goto label_7F3A5B10;
    case 0x7F3A5BA0u: goto label_7F3A5BA0;
    case 0x7F3A5C30u: goto label_7F3A5C30;
    case 0x7F3A5C3Cu: goto label_7F3A5C3C;
    case 0x7F3A5D2Cu: goto label_7F3A5D2C;
    case 0x7F3A5D3Cu: goto label_7F3A5D3C;
    case 0x7F3A5D64u: goto label_7F3A5D64;
    case 0x7F3A5E0Cu: goto label_7F3A5E0C;
    case 0x7F3A5E14u: goto label_7F3A5E14;
    case 0x7F3A5E50u: goto label_7F3A5E50;
    case 0x7F3A5E58u: goto label_7F3A5E58;
    case 0x7F3A5E94u: goto label_7F3A5E94;
    case 0x7F3A5E9Cu: goto label_7F3A5E9C;
    case 0x7F3A5EF4u: goto label_7F3A5EF4;
    case 0x7F3A5EFCu: goto label_7F3A5EFC;
    case 0x7F3A5F04u: goto label_7F3A5F04;
    case 0x7F3A5F0Cu: goto label_7F3A5F0C;
    case 0x7F3A5F14u: goto label_7F3A5F14;
    case 0x7F3A5F1Cu: goto label_7F3A5F1C;
    case 0x7F3A5F74u: goto label_7F3A5F74;
    case 0x7F3A5F7Cu: goto label_7F3A5F7C;
    case 0x7F3A5F84u: goto label_7F3A5F84;
    case 0x7F3A5F8Cu: goto label_7F3A5F8C;
    case 0x7F3A5F94u: goto label_7F3A5F94;
    case 0x7F3A5FDCu: goto label_7F3A5FDC;
    case 0x7F3A5FE4u: goto label_7F3A5FE4;
    case 0x7F3A5FECu: goto label_7F3A5FEC;
    case 0x7F3A6034u: goto label_7F3A6034;
    case 0x7F3A603Cu: goto label_7F3A603C;
    case 0x7F3A6044u: goto label_7F3A6044;
    case 0x7F3A6074u: goto label_7F3A6074;
    case 0x7F3A60B0u: goto label_7F3A60B0;
    case 0x7F3A60B8u: goto label_7F3A60B8;
    case 0x7F3A6100u: goto label_7F3A6100;
    case 0x7F3A6108u: goto label_7F3A6108;
    case 0x7F3A6110u: goto label_7F3A6110;
    case 0x7F3A615Cu: goto label_7F3A615C;
    case 0x7F3A6164u: goto label_7F3A6164;
    case 0x7F3A616Cu: goto label_7F3A616C;
    case 0x7F3A6174u: goto label_7F3A6174;
    case 0x7F3A61D8u: goto label_7F3A61D8;
    case 0x7F3A61E0u: goto label_7F3A61E0;
    case 0x7F3A61E8u: goto label_7F3A61E8;
    case 0x7F3A61F0u: goto label_7F3A61F0;
    case 0x7F3A6270u: goto label_7F3A6270;
    case 0x7F3A6278u: goto label_7F3A6278;
    case 0x7F3A62B0u: goto label_7F3A62B0;
    case 0x7F3A62B8u: goto label_7F3A62B8;
    case 0x7F3A6300u: goto label_7F3A6300;
    case 0x7F3A630Cu: goto label_7F3A630C;
    case 0x7F3A6364u: goto label_7F3A6364;
    case 0x7F3A6370u: goto label_7F3A6370;
    case 0x7F3A63B4u: goto label_7F3A63B4;
    case 0x7F3A63C4u: goto label_7F3A63C4;
    case 0x7F3A640Cu: goto label_7F3A640C;
    case 0x7F3A6418u: goto label_7F3A6418;
    case 0x7F3A6460u: goto label_7F3A6460;
    case 0x7F3A646Cu: goto label_7F3A646C;
    case 0x7F3A64FCu: goto label_7F3A64FC;
    case 0x7F3A6524u: goto label_7F3A6524;
    case 0x7F3A65ACu: goto label_7F3A65AC;
    case 0x7F3A663Cu: goto label_7F3A663C;
    case 0x7F3A664Cu: goto label_7F3A664C;
    case 0x7F3A667Cu: goto label_7F3A667C;
    case 0x7F3A6688u: goto label_7F3A6688;
    case 0x7F3A6690u: goto label_7F3A6690;
    case 0x7F3A66CCu: goto label_7F3A66CC;
    case 0x7F3A66D4u: goto label_7F3A66D4;
    case 0x7F3A66DCu: goto label_7F3A66DC;
    case 0x7F3A66F0u: goto label_7F3A66F0;
    case 0x7F3A6718u: goto label_7F3A6718;
    case 0x7F3A6720u: goto label_7F3A6720;
    case 0x7F3A6728u: goto label_7F3A6728;
    case 0x7F3A6730u: goto label_7F3A6730;
    case 0x7F3A6744u: goto label_7F3A6744;
    case 0x7F3A6758u: goto label_7F3A6758;
    case 0x7F3A6760u: goto label_7F3A6760;
    case 0x7F3A6768u: goto label_7F3A6768;
    case 0x7F3A67A4u: goto label_7F3A67A4;
    case 0x7F3A6820u: goto label_7F3A6820;
    case 0x7F3A6830u: goto label_7F3A6830;
    case 0x7F3A6908u: goto label_7F3A6908;
    case 0x7F3A6934u: goto label_7F3A6934;
    case 0x7F3A6990u: goto label_7F3A6990;
    case 0x7F3A6A14u: goto label_7F3A6A14;
    case 0x7F3A6A24u: goto label_7F3A6A24;
    case 0x7F3A6A58u: goto label_7F3A6A58;
    case 0x7F3A6A9Cu: goto label_7F3A6A9C;
    case 0x7F3A6B04u: goto label_7F3A6B04;
    case 0x7F3A6B38u: goto label_7F3A6B38;
    case 0x7F3A6B40u: goto label_7F3A6B40;
    case 0x7F3A6B48u: goto label_7F3A6B48;
    case 0x7F3A6B50u: goto label_7F3A6B50;
    case 0x7F3A6B58u: goto label_7F3A6B58;
    case 0x7F3A6B78u: goto label_7F3A6B78;
    case 0x7F3A6B84u: goto label_7F3A6B84;
    case 0x7F3A6B94u: goto label_7F3A6B94;
    case 0x7F3A6BA0u: goto label_7F3A6BA0;
    case 0x7F3A6BACu: goto label_7F3A6BAC;
    case 0x7F3A6BBCu: goto label_7F3A6BBC;
    case 0x7F3A6BD4u: goto label_7F3A6BD4;
    case 0x7F3A6BDCu: goto label_7F3A6BDC;
    case 0x7F3A6C04u: goto label_7F3A6C04;
    case 0x7F3A6C18u: goto label_7F3A6C18;
    case 0x7F3A6C24u: goto label_7F3A6C24;
    case 0x7F3A6C48u: goto label_7F3A6C48;
    case 0x7F3A6C54u: goto label_7F3A6C54;
    case 0x7F3A6C60u: goto label_7F3A6C60;
    case 0x7F3A6C74u: goto label_7F3A6C74;
    case 0x7F3A6C80u: goto label_7F3A6C80;
    case 0x7F3A6C90u: goto label_7F3A6C90;
    case 0x7F3A6CC4u: goto label_7F3A6CC4;
    case 0x7F3A6D6Cu: goto label_7F3A6D6C;
    case 0x7F3A6D78u: goto label_7F3A6D78;
    case 0x7F3A6D88u: goto label_7F3A6D88;
    case 0x7F3A6D94u: goto label_7F3A6D94;
    case 0x7F3A6DACu: goto label_7F3A6DAC;
    case 0x7F3A6DD8u: goto label_7F3A6DD8;
    case 0x7F3A6DF4u: goto label_7F3A6DF4;
    case 0x7F3A6E2Cu: goto label_7F3A6E2C;
    case 0x7F3A6E34u: goto label_7F3A6E34;
    case 0x7F3A6E3Cu: goto label_7F3A6E3C;
    case 0x7F3A6E44u: goto label_7F3A6E44;
    case 0x7F3A6E4Cu: goto label_7F3A6E4C;
    case 0x7F3A6E54u: goto label_7F3A6E54;
    case 0x7F3A6E90u: goto label_7F3A6E90;
    case 0x7F3A6E94u: goto label_7F3A6E94;
    case 0x7F3A6E9Cu: goto label_7F3A6E9C;
    case 0x7F3A6EACu: goto label_7F3A6EAC;
    case 0x7F3A6EBCu: goto label_7F3A6EBC;
    case 0x7F3A6ECCu: goto label_7F3A6ECC;
    case 0x7F3A6EF8u: goto label_7F3A6EF8;
    case 0x7F3A6FC8u: goto label_7F3A6FC8;
    case 0x7F3A6FD4u: goto label_7F3A6FD4;
    case 0x7F3A7018u: goto label_7F3A7018;
    case 0x7F3A7024u: goto label_7F3A7024;
    case 0x7F3A7068u: goto label_7F3A7068;
    case 0x7F3A7074u: goto label_7F3A7074;
    case 0x7F3A70C0u: goto label_7F3A70C0;
    case 0x7F3A70D0u: goto label_7F3A70D0;
    case 0x7F3A70E8u: goto label_7F3A70E8;
    case 0x7F3A70F8u: goto label_7F3A70F8;
    case 0x7F3A7140u: goto label_7F3A7140;
    case 0x7F3A714Cu: goto label_7F3A714C;
    case 0x7F3A715Cu: goto label_7F3A715C;
    case 0x7F3A7174u: goto label_7F3A7174;
    case 0x7F3A7184u: goto label_7F3A7184;
    case 0x7F3A71D4u: goto label_7F3A71D4;
    case 0x7F3A71E0u: goto label_7F3A71E0;
    case 0x7F3A71E4u: goto label_7F3A71E4;
    case 0x7F3A71FCu: goto label_7F3A71FC;
    case 0x7F3A7208u: goto label_7F3A7208;
    case 0x7F3A720Cu: goto label_7F3A720C;
    case 0x7F3A724Cu: goto label_7F3A724C;
    case 0x7F3A726Cu: goto label_7F3A726C;
    case 0x7F3A7278u: goto label_7F3A7278;
    case 0x7F3A72C8u: goto label_7F3A72C8;
    case 0x7F3A72E4u: goto label_7F3A72E4;
    case 0x7F3A7304u: goto label_7F3A7304;
    case 0x7F3A7348u: goto label_7F3A7348;
    case 0x7F3A7358u: goto label_7F3A7358;
    case 0x7F3A73C4u: goto label_7F3A73C4;
    case 0x7F3A7440u: goto label_7F3A7440;
    case 0x7F3A744Cu: goto label_7F3A744C;
    case 0x7F3A74B0u: goto label_7F3A74B0;
    case 0x7F3A74BCu: goto label_7F3A74BC;
    case 0x7F3A7504u: goto label_7F3A7504;
    case 0x7F3A7510u: goto label_7F3A7510;
    case 0x7F3A7558u: goto label_7F3A7558;
    case 0x7F3A756Cu: goto label_7F3A756C;
    case 0x7F3A75A4u: goto label_7F3A75A4;
    case 0x7F3A75B0u: goto label_7F3A75B0;
    case 0x7F3A7624u: goto label_7F3A7624;
    case 0x7F3A773Cu: goto label_7F3A773C;
    case 0x7F3A7780u: goto label_7F3A7780;
    case 0x7F3A778Cu: goto label_7F3A778C;
    case 0x7F3A77A0u: goto label_7F3A77A0;
    case 0x7F3A77ACu: goto label_7F3A77AC;
    case 0x7F3A77C0u: goto label_7F3A77C0;
    case 0x7F3A77D8u: goto label_7F3A77D8;
    case 0x7F3A77F0u: goto label_7F3A77F0;
    case 0x7F3A7814u: goto label_7F3A7814;
    case 0x7F3A781Cu: goto label_7F3A781C;
    case 0x7F3A7824u: goto label_7F3A7824;
    case 0x7F3A782Cu: goto label_7F3A782C;
    case 0x7F3A783Cu: goto label_7F3A783C;
    case 0x7F3A7844u: goto label_7F3A7844;
    case 0x7F3A784Cu: goto label_7F3A784C;
    case 0x7F3A7854u: goto label_7F3A7854;
    case 0x7F3A785Cu: goto label_7F3A785C;
    case 0x7F3A7864u: goto label_7F3A7864;
    case 0x7F3A7870u: goto label_7F3A7870;
    case 0x7F3A7874u: goto label_7F3A7874;
    case 0x7F3A788Cu: goto label_7F3A788C;
    case 0x7F3A78D8u: goto label_7F3A78D8;
    case 0x7F3A78E0u: goto label_7F3A78E0;
    case 0x7F3A78ECu: goto label_7F3A78EC;
    case 0x7F3A78F4u: goto label_7F3A78F4;
    case 0x7F3A78F8u: goto label_7F3A78F8;
    case 0x7F3A78FCu: goto label_7F3A78FC;
    case 0x7F3A7904u: goto label_7F3A7904;
    case 0x7F3A7984u: goto label_7F3A7984;
    case 0x7F3A798Cu: goto label_7F3A798C;
    case 0x7F3A7998u: goto label_7F3A7998;
    case 0x7F3A79A8u: goto label_7F3A79A8;
    case 0x7F3A79ACu: goto label_7F3A79AC;
    case 0x7F3A79B4u: goto label_7F3A79B4;
    case 0x7F3A79BCu: goto label_7F3A79BC;
    case 0x7F3A79C0u: goto label_7F3A79C0;
    case 0x7F3A79E0u: goto label_7F3A79E0;
    case 0x7F3A7A00u: goto label_7F3A7A00;
    case 0x7F3A7A0Cu: goto label_7F3A7A0C;
    case 0x7F3A7A28u: goto label_7F3A7A28;
    case 0x7F3A7A34u: goto label_7F3A7A34;
    case 0x7F3A7A68u: goto label_7F3A7A68;
    case 0x7F3A7A78u: goto label_7F3A7A78;
    case 0x7F3A7ABCu: goto label_7F3A7ABC;
    case 0x7F3A7AD8u: goto label_7F3A7AD8;
    case 0x7F3A7B10u: goto label_7F3A7B10;
    case 0x7F3A7B30u: goto label_7F3A7B30;
    case 0x7F3A7BBCu: goto label_7F3A7BBC;
    case 0x7F3A7BFCu: goto label_7F3A7BFC;
    case 0x7F3A7C38u: goto label_7F3A7C38;
    case 0x7F3A7CA4u: goto label_7F3A7CA4;
    case 0x7F3A7CC0u: goto label_7F3A7CC0;
    case 0x7F3A7D14u: goto label_7F3A7D14;
    case 0x7F3A7D30u: goto label_7F3A7D30;
    case 0x7F3A7D38u: goto label_7F3A7D38;
    case 0x7F3A7D48u: goto label_7F3A7D48;
    case 0x7F3A7D54u: goto label_7F3A7D54;
    case 0x7F3A7D88u: goto label_7F3A7D88;
    case 0x7F3A7F44u: goto label_7F3A7F44;
    case 0x7F3A7F54u: goto label_7F3A7F54;
    case 0x7F3A7F60u: goto label_7F3A7F60;
    case 0x7F3A7F68u: goto label_7F3A7F68;
    case 0x7F3A7F80u: goto label_7F3A7F80;
    case 0x7F3A7F9Cu: goto label_7F3A7F9C;
    case 0x7F3A7FB4u: goto label_7F3A7FB4;
    case 0x7F3A7FD0u: goto label_7F3A7FD0;
    case 0x7F3A7FE4u: goto label_7F3A7FE4;
    case 0x7F3A7FF0u: goto label_7F3A7FF0;
    case 0x7F3A8000u: goto label_7F3A8000;
    case 0x7F3A8008u: goto label_7F3A8008;
    case 0x7F3A800Cu: goto label_7F3A800C;
    case 0x7F3A8018u: goto label_7F3A8018;
    case 0x7F3A8024u: goto label_7F3A8024;
    case 0x7F3A8030u: goto label_7F3A8030;
    case 0x7F3A804Cu: goto label_7F3A804C;
    case 0x7F3A8054u: goto label_7F3A8054;
    case 0x7F3A8060u: goto label_7F3A8060;
    case 0x7F3A8074u: goto label_7F3A8074;
    case 0x7F3A807Cu: goto label_7F3A807C;
    case 0x7F3A8098u: goto label_7F3A8098;
    default: return;
    }
}

