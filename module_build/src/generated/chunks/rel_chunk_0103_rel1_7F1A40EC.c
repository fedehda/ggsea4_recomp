// DolRecomp output
#include "../generated.h"

static void loop_7F1A46B4(CPUState* ctx) {
label_7F1A46B4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1A46B4u;
    // 7F1A46B4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A46B8u;
    // 7F1A46B8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1A46BCu;
    // 7F1A46BC: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1A46C0u;
    // 7F1A46C0: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F1A46C4: bc    16, 0, 0x7F1A46B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A46B4u;
                return;
            }
            goto label_7F1A46B4;
        }
    }

    ctx->pc = 0x7F1A46C8u;
}

static void loop_7F1A4774(CPUState* ctx) {
label_7F1A4774:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1A4774u;
    // 7F1A4774: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A4778u;
    // 7F1A4778: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1A477Cu;
    // 7F1A477C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1A4780u;
    // 7F1A4780: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1A4784: bc    16, 0, 0x7F1A4774
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4774u;
                return;
            }
            goto label_7F1A4774;
        }
    }

    ctx->pc = 0x7F1A4788u;
}

static void loop_7F1A50F8(CPUState* ctx) {
label_7F1A50F8:
    ctx->downcount -= 4;
    // 7F1A50F8: addi    r0, r3, 84
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(84);

    // 7F1A50FC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

    ctx->pc = 0x7F1A5100u;
    // 7F1A5100: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F1A5104: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    ctx->pc = 0x7F1A5108u;
    // 7F1A5108: lwz     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F1A510C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F1A5110: bc    12, 0, 0x7F1A50F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A50F8u;
                return;
            }
            goto label_7F1A50F8;
        }
    }

    ctx->pc = 0x7F1A5114u;
}

static void loop_7F1A60EC(CPUState* ctx) {
label_7F1A60EC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1A60ECu;
    // 7F1A60EC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A60F0u;
    // 7F1A60F0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1A60F4u;
    // 7F1A60F4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1A60F8u;
    // 7F1A60F8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1A60FC: bc    16, 0, 0x7F1A60EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A60ECu;
                return;
            }
            goto label_7F1A60EC;
        }
    }

    ctx->pc = 0x7F1A6100u;
}

static void loop_7F1A61AC(CPUState* ctx) {
label_7F1A61AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1A61ACu;
    // 7F1A61AC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A61B0u;
    // 7F1A61B0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1A61B4u;
    // 7F1A61B4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1A61B8u;
    // 7F1A61B8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1A61BC: bc    16, 0, 0x7F1A61AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A61ACu;
                return;
            }
            goto label_7F1A61AC;
        }
    }

    ctx->pc = 0x7F1A61C0u;
}

static void loop_7F1A61D0(CPUState* ctx) {
label_7F1A61D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1A61D0u;
    // 7F1A61D0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A61D4u;
    // 7F1A61D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1A61D8u;
    // 7F1A61D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1A61DCu;
    // 7F1A61DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1A61E0: bc    16, 0, 0x7F1A61D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A61D0u;
                return;
            }
            goto label_7F1A61D0;
        }
    }

    ctx->pc = 0x7F1A61E4u;
}

void func_7F1A40EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1A40ECu: goto label_7F1A40EC;
    case 0x7F1A40F0u: goto label_7F1A40F0;
    case 0x7F1A40F4u: goto label_7F1A40F4;
    case 0x7F1A40F8u: goto label_7F1A40F8;
    case 0x7F1A40FCu: goto label_7F1A40FC;
    case 0x7F1A4100u: goto label_7F1A4100;
    case 0x7F1A4104u: goto label_7F1A4104;
    case 0x7F1A4108u: goto label_7F1A4108;
    case 0x7F1A410Cu: goto label_7F1A410C;
    case 0x7F1A4110u: goto label_7F1A4110;
    case 0x7F1A4114u: goto label_7F1A4114;
    case 0x7F1A4118u: goto label_7F1A4118;
    case 0x7F1A411Cu: goto label_7F1A411C;
    case 0x7F1A4120u: goto label_7F1A4120;
    case 0x7F1A4124u: goto label_7F1A4124;
    case 0x7F1A4128u: goto label_7F1A4128;
    case 0x7F1A412Cu: goto label_7F1A412C;
    case 0x7F1A4130u: goto label_7F1A4130;
    case 0x7F1A4134u: goto label_7F1A4134;
    case 0x7F1A4138u: goto label_7F1A4138;
    case 0x7F1A413Cu: goto label_7F1A413C;
    case 0x7F1A4140u: goto label_7F1A4140;
    case 0x7F1A4144u: goto label_7F1A4144;
    case 0x7F1A4148u: goto label_7F1A4148;
    case 0x7F1A414Cu: goto label_7F1A414C;
    case 0x7F1A4150u: goto label_7F1A4150;
    case 0x7F1A4154u: goto label_7F1A4154;
    case 0x7F1A4158u: goto label_7F1A4158;
    case 0x7F1A415Cu: goto label_7F1A415C;
    case 0x7F1A4160u: goto label_7F1A4160;
    case 0x7F1A4164u: goto label_7F1A4164;
    case 0x7F1A4168u: goto label_7F1A4168;
    case 0x7F1A416Cu: goto label_7F1A416C;
    case 0x7F1A4170u: goto label_7F1A4170;
    case 0x7F1A4174u: goto label_7F1A4174;
    case 0x7F1A4178u: goto label_7F1A4178;
    case 0x7F1A417Cu: goto label_7F1A417C;
    case 0x7F1A4180u: goto label_7F1A4180;
    case 0x7F1A4184u: goto label_7F1A4184;
    case 0x7F1A4188u: goto label_7F1A4188;
    case 0x7F1A418Cu: goto label_7F1A418C;
    case 0x7F1A4190u: goto label_7F1A4190;
    case 0x7F1A4194u: goto label_7F1A4194;
    case 0x7F1A4198u: goto label_7F1A4198;
    case 0x7F1A419Cu: goto label_7F1A419C;
    case 0x7F1A41A0u: goto label_7F1A41A0;
    case 0x7F1A41A4u: goto label_7F1A41A4;
    case 0x7F1A41A8u: goto label_7F1A41A8;
    case 0x7F1A41ACu: goto label_7F1A41AC;
    case 0x7F1A41B0u: goto label_7F1A41B0;
    case 0x7F1A41B4u: goto label_7F1A41B4;
    case 0x7F1A41B8u: goto label_7F1A41B8;
    case 0x7F1A41BCu: goto label_7F1A41BC;
    case 0x7F1A41C0u: goto label_7F1A41C0;
    case 0x7F1A41C4u: goto label_7F1A41C4;
    case 0x7F1A41C8u: goto label_7F1A41C8;
    case 0x7F1A41CCu: goto label_7F1A41CC;
    case 0x7F1A41D0u: goto label_7F1A41D0;
    case 0x7F1A41D4u: goto label_7F1A41D4;
    case 0x7F1A41D8u: goto label_7F1A41D8;
    case 0x7F1A41DCu: goto label_7F1A41DC;
    case 0x7F1A41E0u: goto label_7F1A41E0;
    case 0x7F1A41E4u: goto label_7F1A41E4;
    case 0x7F1A41E8u: goto label_7F1A41E8;
    case 0x7F1A41ECu: goto label_7F1A41EC;
    case 0x7F1A41F0u: goto label_7F1A41F0;
    case 0x7F1A41F4u: goto label_7F1A41F4;
    case 0x7F1A41F8u: goto label_7F1A41F8;
    case 0x7F1A41FCu: goto label_7F1A41FC;
    case 0x7F1A4200u: goto label_7F1A4200;
    case 0x7F1A4204u: goto label_7F1A4204;
    case 0x7F1A4208u: goto label_7F1A4208;
    case 0x7F1A420Cu: goto label_7F1A420C;
    case 0x7F1A4210u: goto label_7F1A4210;
    case 0x7F1A4214u: goto label_7F1A4214;
    case 0x7F1A4218u: goto label_7F1A4218;
    case 0x7F1A421Cu: goto label_7F1A421C;
    case 0x7F1A4220u: goto label_7F1A4220;
    case 0x7F1A4224u: goto label_7F1A4224;
    case 0x7F1A4228u: goto label_7F1A4228;
    case 0x7F1A422Cu: goto label_7F1A422C;
    case 0x7F1A4230u: goto label_7F1A4230;
    case 0x7F1A4234u: goto label_7F1A4234;
    case 0x7F1A4238u: goto label_7F1A4238;
    case 0x7F1A423Cu: goto label_7F1A423C;
    case 0x7F1A4240u: goto label_7F1A4240;
    case 0x7F1A4244u: goto label_7F1A4244;
    case 0x7F1A4248u: goto label_7F1A4248;
    case 0x7F1A424Cu: goto label_7F1A424C;
    case 0x7F1A4250u: goto label_7F1A4250;
    case 0x7F1A4254u: goto label_7F1A4254;
    case 0x7F1A4258u: goto label_7F1A4258;
    case 0x7F1A425Cu: goto label_7F1A425C;
    case 0x7F1A4260u: goto label_7F1A4260;
    case 0x7F1A4264u: goto label_7F1A4264;
    case 0x7F1A4268u: goto label_7F1A4268;
    case 0x7F1A426Cu: goto label_7F1A426C;
    case 0x7F1A4270u: goto label_7F1A4270;
    case 0x7F1A4274u: goto label_7F1A4274;
    case 0x7F1A4278u: goto label_7F1A4278;
    case 0x7F1A427Cu: goto label_7F1A427C;
    case 0x7F1A4280u: goto label_7F1A4280;
    case 0x7F1A4284u: goto label_7F1A4284;
    case 0x7F1A4288u: goto label_7F1A4288;
    case 0x7F1A428Cu: goto label_7F1A428C;
    case 0x7F1A4290u: goto label_7F1A4290;
    case 0x7F1A4294u: goto label_7F1A4294;
    case 0x7F1A4298u: goto label_7F1A4298;
    case 0x7F1A429Cu: goto label_7F1A429C;
    case 0x7F1A42A0u: goto label_7F1A42A0;
    case 0x7F1A42A4u: goto label_7F1A42A4;
    case 0x7F1A42A8u: goto label_7F1A42A8;
    case 0x7F1A42ACu: goto label_7F1A42AC;
    case 0x7F1A42B0u: goto label_7F1A42B0;
    case 0x7F1A42B4u: goto label_7F1A42B4;
    case 0x7F1A42B8u: goto label_7F1A42B8;
    case 0x7F1A42BCu: goto label_7F1A42BC;
    case 0x7F1A42C0u: goto label_7F1A42C0;
    case 0x7F1A42C4u: goto label_7F1A42C4;
    case 0x7F1A42C8u: goto label_7F1A42C8;
    case 0x7F1A42CCu: goto label_7F1A42CC;
    case 0x7F1A42D0u: goto label_7F1A42D0;
    case 0x7F1A42D4u: goto label_7F1A42D4;
    case 0x7F1A42D8u: goto label_7F1A42D8;
    case 0x7F1A42DCu: goto label_7F1A42DC;
    case 0x7F1A42E0u: goto label_7F1A42E0;
    case 0x7F1A42E4u: goto label_7F1A42E4;
    case 0x7F1A42E8u: goto label_7F1A42E8;
    case 0x7F1A42ECu: goto label_7F1A42EC;
    case 0x7F1A42F0u: goto label_7F1A42F0;
    case 0x7F1A42F4u: goto label_7F1A42F4;
    case 0x7F1A42F8u: goto label_7F1A42F8;
    case 0x7F1A42FCu: goto label_7F1A42FC;
    case 0x7F1A4300u: goto label_7F1A4300;
    case 0x7F1A4304u: goto label_7F1A4304;
    case 0x7F1A4308u: goto label_7F1A4308;
    case 0x7F1A430Cu: goto label_7F1A430C;
    case 0x7F1A4310u: goto label_7F1A4310;
    case 0x7F1A4314u: goto label_7F1A4314;
    case 0x7F1A4318u: goto label_7F1A4318;
    case 0x7F1A431Cu: goto label_7F1A431C;
    case 0x7F1A4320u: goto label_7F1A4320;
    case 0x7F1A4324u: goto label_7F1A4324;
    case 0x7F1A4328u: goto label_7F1A4328;
    case 0x7F1A432Cu: goto label_7F1A432C;
    case 0x7F1A4330u: goto label_7F1A4330;
    case 0x7F1A4334u: goto label_7F1A4334;
    case 0x7F1A4338u: goto label_7F1A4338;
    case 0x7F1A433Cu: goto label_7F1A433C;
    case 0x7F1A4340u: goto label_7F1A4340;
    case 0x7F1A4344u: goto label_7F1A4344;
    case 0x7F1A4348u: goto label_7F1A4348;
    case 0x7F1A434Cu: goto label_7F1A434C;
    case 0x7F1A4350u: goto label_7F1A4350;
    case 0x7F1A4354u: goto label_7F1A4354;
    case 0x7F1A4358u: goto label_7F1A4358;
    case 0x7F1A435Cu: goto label_7F1A435C;
    case 0x7F1A4360u: goto label_7F1A4360;
    case 0x7F1A4364u: goto label_7F1A4364;
    case 0x7F1A4368u: goto label_7F1A4368;
    case 0x7F1A436Cu: goto label_7F1A436C;
    case 0x7F1A4370u: goto label_7F1A4370;
    case 0x7F1A4374u: goto label_7F1A4374;
    case 0x7F1A4378u: goto label_7F1A4378;
    case 0x7F1A437Cu: goto label_7F1A437C;
    case 0x7F1A4380u: goto label_7F1A4380;
    case 0x7F1A4384u: goto label_7F1A4384;
    case 0x7F1A4388u: goto label_7F1A4388;
    case 0x7F1A438Cu: goto label_7F1A438C;
    case 0x7F1A4390u: goto label_7F1A4390;
    case 0x7F1A4394u: goto label_7F1A4394;
    case 0x7F1A4398u: goto label_7F1A4398;
    case 0x7F1A439Cu: goto label_7F1A439C;
    case 0x7F1A43A0u: goto label_7F1A43A0;
    case 0x7F1A43A4u: goto label_7F1A43A4;
    case 0x7F1A43A8u: goto label_7F1A43A8;
    case 0x7F1A43ACu: goto label_7F1A43AC;
    case 0x7F1A43B0u: goto label_7F1A43B0;
    case 0x7F1A43B4u: goto label_7F1A43B4;
    case 0x7F1A43B8u: goto label_7F1A43B8;
    case 0x7F1A43BCu: goto label_7F1A43BC;
    case 0x7F1A43C0u: goto label_7F1A43C0;
    case 0x7F1A43C4u: goto label_7F1A43C4;
    case 0x7F1A43C8u: goto label_7F1A43C8;
    case 0x7F1A43CCu: goto label_7F1A43CC;
    case 0x7F1A43D0u: goto label_7F1A43D0;
    case 0x7F1A43D4u: goto label_7F1A43D4;
    case 0x7F1A43D8u: goto label_7F1A43D8;
    case 0x7F1A43DCu: goto label_7F1A43DC;
    case 0x7F1A43E0u: goto label_7F1A43E0;
    case 0x7F1A43E4u: goto label_7F1A43E4;
    case 0x7F1A43E8u: goto label_7F1A43E8;
    case 0x7F1A43ECu: goto label_7F1A43EC;
    case 0x7F1A43F0u: goto label_7F1A43F0;
    case 0x7F1A43F4u: goto label_7F1A43F4;
    case 0x7F1A43F8u: goto label_7F1A43F8;
    case 0x7F1A43FCu: goto label_7F1A43FC;
    case 0x7F1A4400u: goto label_7F1A4400;
    case 0x7F1A4404u: goto label_7F1A4404;
    case 0x7F1A4408u: goto label_7F1A4408;
    case 0x7F1A440Cu: goto label_7F1A440C;
    case 0x7F1A4410u: goto label_7F1A4410;
    case 0x7F1A4414u: goto label_7F1A4414;
    case 0x7F1A4418u: goto label_7F1A4418;
    case 0x7F1A441Cu: goto label_7F1A441C;
    case 0x7F1A4420u: goto label_7F1A4420;
    case 0x7F1A4424u: goto label_7F1A4424;
    case 0x7F1A4428u: goto label_7F1A4428;
    case 0x7F1A442Cu: goto label_7F1A442C;
    case 0x7F1A4430u: goto label_7F1A4430;
    case 0x7F1A4434u: goto label_7F1A4434;
    case 0x7F1A4438u: goto label_7F1A4438;
    case 0x7F1A443Cu: goto label_7F1A443C;
    case 0x7F1A4440u: goto label_7F1A4440;
    case 0x7F1A4444u: goto label_7F1A4444;
    case 0x7F1A4448u: goto label_7F1A4448;
    case 0x7F1A444Cu: goto label_7F1A444C;
    case 0x7F1A4450u: goto label_7F1A4450;
    case 0x7F1A4454u: goto label_7F1A4454;
    case 0x7F1A4458u: goto label_7F1A4458;
    case 0x7F1A445Cu: goto label_7F1A445C;
    case 0x7F1A4460u: goto label_7F1A4460;
    case 0x7F1A4464u: goto label_7F1A4464;
    case 0x7F1A4468u: goto label_7F1A4468;
    case 0x7F1A446Cu: goto label_7F1A446C;
    case 0x7F1A4470u: goto label_7F1A4470;
    case 0x7F1A4474u: goto label_7F1A4474;
    case 0x7F1A4478u: goto label_7F1A4478;
    case 0x7F1A447Cu: goto label_7F1A447C;
    case 0x7F1A4480u: goto label_7F1A4480;
    case 0x7F1A4484u: goto label_7F1A4484;
    case 0x7F1A4488u: goto label_7F1A4488;
    case 0x7F1A448Cu: goto label_7F1A448C;
    case 0x7F1A4490u: goto label_7F1A4490;
    case 0x7F1A4494u: goto label_7F1A4494;
    case 0x7F1A4498u: goto label_7F1A4498;
    case 0x7F1A449Cu: goto label_7F1A449C;
    case 0x7F1A44A0u: goto label_7F1A44A0;
    case 0x7F1A44A4u: goto label_7F1A44A4;
    case 0x7F1A44A8u: goto label_7F1A44A8;
    case 0x7F1A44ACu: goto label_7F1A44AC;
    case 0x7F1A44B0u: goto label_7F1A44B0;
    case 0x7F1A44B4u: goto label_7F1A44B4;
    case 0x7F1A44B8u: goto label_7F1A44B8;
    case 0x7F1A44BCu: goto label_7F1A44BC;
    case 0x7F1A44C0u: goto label_7F1A44C0;
    case 0x7F1A44C4u: goto label_7F1A44C4;
    case 0x7F1A44C8u: goto label_7F1A44C8;
    case 0x7F1A44CCu: goto label_7F1A44CC;
    case 0x7F1A44D0u: goto label_7F1A44D0;
    case 0x7F1A44D4u: goto label_7F1A44D4;
    case 0x7F1A44D8u: goto label_7F1A44D8;
    case 0x7F1A44DCu: goto label_7F1A44DC;
    case 0x7F1A44E0u: goto label_7F1A44E0;
    case 0x7F1A44E4u: goto label_7F1A44E4;
    case 0x7F1A44E8u: goto label_7F1A44E8;
    case 0x7F1A44ECu: goto label_7F1A44EC;
    case 0x7F1A44F0u: goto label_7F1A44F0;
    case 0x7F1A44F4u: goto label_7F1A44F4;
    case 0x7F1A44F8u: goto label_7F1A44F8;
    case 0x7F1A44FCu: goto label_7F1A44FC;
    case 0x7F1A4500u: goto label_7F1A4500;
    case 0x7F1A4504u: goto label_7F1A4504;
    case 0x7F1A4508u: goto label_7F1A4508;
    case 0x7F1A450Cu: goto label_7F1A450C;
    case 0x7F1A4510u: goto label_7F1A4510;
    case 0x7F1A4514u: goto label_7F1A4514;
    case 0x7F1A4518u: goto label_7F1A4518;
    case 0x7F1A451Cu: goto label_7F1A451C;
    case 0x7F1A4520u: goto label_7F1A4520;
    case 0x7F1A4524u: goto label_7F1A4524;
    case 0x7F1A4528u: goto label_7F1A4528;
    case 0x7F1A452Cu: goto label_7F1A452C;
    case 0x7F1A4530u: goto label_7F1A4530;
    case 0x7F1A4534u: goto label_7F1A4534;
    case 0x7F1A4538u: goto label_7F1A4538;
    case 0x7F1A453Cu: goto label_7F1A453C;
    case 0x7F1A4540u: goto label_7F1A4540;
    case 0x7F1A4544u: goto label_7F1A4544;
    case 0x7F1A4548u: goto label_7F1A4548;
    case 0x7F1A454Cu: goto label_7F1A454C;
    case 0x7F1A4550u: goto label_7F1A4550;
    case 0x7F1A4554u: goto label_7F1A4554;
    case 0x7F1A4558u: goto label_7F1A4558;
    case 0x7F1A455Cu: goto label_7F1A455C;
    case 0x7F1A4560u: goto label_7F1A4560;
    case 0x7F1A4564u: goto label_7F1A4564;
    case 0x7F1A4568u: goto label_7F1A4568;
    case 0x7F1A456Cu: goto label_7F1A456C;
    case 0x7F1A4570u: goto label_7F1A4570;
    case 0x7F1A4574u: goto label_7F1A4574;
    case 0x7F1A4578u: goto label_7F1A4578;
    case 0x7F1A457Cu: goto label_7F1A457C;
    case 0x7F1A4580u: goto label_7F1A4580;
    case 0x7F1A4584u: goto label_7F1A4584;
    case 0x7F1A4588u: goto label_7F1A4588;
    case 0x7F1A458Cu: goto label_7F1A458C;
    case 0x7F1A4590u: goto label_7F1A4590;
    case 0x7F1A4594u: goto label_7F1A4594;
    case 0x7F1A4598u: goto label_7F1A4598;
    case 0x7F1A459Cu: goto label_7F1A459C;
    case 0x7F1A45A0u: goto label_7F1A45A0;
    case 0x7F1A45A4u: goto label_7F1A45A4;
    case 0x7F1A45A8u: goto label_7F1A45A8;
    case 0x7F1A45ACu: goto label_7F1A45AC;
    case 0x7F1A45B0u: goto label_7F1A45B0;
    case 0x7F1A45B4u: goto label_7F1A45B4;
    case 0x7F1A45B8u: goto label_7F1A45B8;
    case 0x7F1A45BCu: goto label_7F1A45BC;
    case 0x7F1A45C0u: goto label_7F1A45C0;
    case 0x7F1A45C4u: goto label_7F1A45C4;
    case 0x7F1A45C8u: goto label_7F1A45C8;
    case 0x7F1A45CCu: goto label_7F1A45CC;
    case 0x7F1A45D0u: goto label_7F1A45D0;
    case 0x7F1A45D4u: goto label_7F1A45D4;
    case 0x7F1A45D8u: goto label_7F1A45D8;
    case 0x7F1A45DCu: goto label_7F1A45DC;
    case 0x7F1A45E0u: goto label_7F1A45E0;
    case 0x7F1A45E4u: goto label_7F1A45E4;
    case 0x7F1A45E8u: goto label_7F1A45E8;
    case 0x7F1A45ECu: goto label_7F1A45EC;
    case 0x7F1A45F0u: goto label_7F1A45F0;
    case 0x7F1A45F4u: goto label_7F1A45F4;
    case 0x7F1A45F8u: goto label_7F1A45F8;
    case 0x7F1A45FCu: goto label_7F1A45FC;
    case 0x7F1A4600u: goto label_7F1A4600;
    case 0x7F1A4604u: goto label_7F1A4604;
    case 0x7F1A4608u: goto label_7F1A4608;
    case 0x7F1A460Cu: goto label_7F1A460C;
    case 0x7F1A4610u: goto label_7F1A4610;
    case 0x7F1A4614u: goto label_7F1A4614;
    case 0x7F1A4618u: goto label_7F1A4618;
    case 0x7F1A461Cu: goto label_7F1A461C;
    case 0x7F1A4620u: goto label_7F1A4620;
    case 0x7F1A4624u: goto label_7F1A4624;
    case 0x7F1A4628u: goto label_7F1A4628;
    case 0x7F1A462Cu: goto label_7F1A462C;
    case 0x7F1A4630u: goto label_7F1A4630;
    case 0x7F1A4634u: goto label_7F1A4634;
    case 0x7F1A4638u: goto label_7F1A4638;
    case 0x7F1A463Cu: goto label_7F1A463C;
    case 0x7F1A4640u: goto label_7F1A4640;
    case 0x7F1A4644u: goto label_7F1A4644;
    case 0x7F1A4648u: goto label_7F1A4648;
    case 0x7F1A464Cu: goto label_7F1A464C;
    case 0x7F1A4650u: goto label_7F1A4650;
    case 0x7F1A4654u: goto label_7F1A4654;
    case 0x7F1A4658u: goto label_7F1A4658;
    case 0x7F1A465Cu: goto label_7F1A465C;
    case 0x7F1A4660u: goto label_7F1A4660;
    case 0x7F1A4664u: goto label_7F1A4664;
    case 0x7F1A4668u: goto label_7F1A4668;
    case 0x7F1A466Cu: goto label_7F1A466C;
    case 0x7F1A4670u: goto label_7F1A4670;
    case 0x7F1A4674u: goto label_7F1A4674;
    case 0x7F1A4678u: goto label_7F1A4678;
    case 0x7F1A467Cu: goto label_7F1A467C;
    case 0x7F1A4680u: goto label_7F1A4680;
    case 0x7F1A4684u: goto label_7F1A4684;
    case 0x7F1A4688u: goto label_7F1A4688;
    case 0x7F1A468Cu: goto label_7F1A468C;
    case 0x7F1A4690u: goto label_7F1A4690;
    case 0x7F1A4694u: goto label_7F1A4694;
    case 0x7F1A4698u: goto label_7F1A4698;
    case 0x7F1A469Cu: goto label_7F1A469C;
    case 0x7F1A46A0u: goto label_7F1A46A0;
    case 0x7F1A46A4u: goto label_7F1A46A4;
    case 0x7F1A46A8u: goto label_7F1A46A8;
    case 0x7F1A46ACu: goto label_7F1A46AC;
    case 0x7F1A46B0u: goto label_7F1A46B0;
    case 0x7F1A46B4u: goto label_7F1A46B4;
    case 0x7F1A46B8u: goto label_7F1A46B8;
    case 0x7F1A46BCu: goto label_7F1A46BC;
    case 0x7F1A46C0u: goto label_7F1A46C0;
    case 0x7F1A46C4u: goto label_7F1A46C4;
    case 0x7F1A46C8u: goto label_7F1A46C8;
    case 0x7F1A46CCu: goto label_7F1A46CC;
    case 0x7F1A46D0u: goto label_7F1A46D0;
    case 0x7F1A46D4u: goto label_7F1A46D4;
    case 0x7F1A46D8u: goto label_7F1A46D8;
    case 0x7F1A46DCu: goto label_7F1A46DC;
    case 0x7F1A46E0u: goto label_7F1A46E0;
    case 0x7F1A46E4u: goto label_7F1A46E4;
    case 0x7F1A46E8u: goto label_7F1A46E8;
    case 0x7F1A46ECu: goto label_7F1A46EC;
    case 0x7F1A46F0u: goto label_7F1A46F0;
    case 0x7F1A46F4u: goto label_7F1A46F4;
    case 0x7F1A46F8u: goto label_7F1A46F8;
    case 0x7F1A46FCu: goto label_7F1A46FC;
    case 0x7F1A4700u: goto label_7F1A4700;
    case 0x7F1A4704u: goto label_7F1A4704;
    case 0x7F1A4708u: goto label_7F1A4708;
    case 0x7F1A470Cu: goto label_7F1A470C;
    case 0x7F1A4710u: goto label_7F1A4710;
    case 0x7F1A4714u: goto label_7F1A4714;
    case 0x7F1A4718u: goto label_7F1A4718;
    case 0x7F1A471Cu: goto label_7F1A471C;
    case 0x7F1A4720u: goto label_7F1A4720;
    case 0x7F1A4724u: goto label_7F1A4724;
    case 0x7F1A4728u: goto label_7F1A4728;
    case 0x7F1A472Cu: goto label_7F1A472C;
    case 0x7F1A4730u: goto label_7F1A4730;
    case 0x7F1A4734u: goto label_7F1A4734;
    case 0x7F1A4738u: goto label_7F1A4738;
    case 0x7F1A473Cu: goto label_7F1A473C;
    case 0x7F1A4740u: goto label_7F1A4740;
    case 0x7F1A4744u: goto label_7F1A4744;
    case 0x7F1A4748u: goto label_7F1A4748;
    case 0x7F1A474Cu: goto label_7F1A474C;
    case 0x7F1A4750u: goto label_7F1A4750;
    case 0x7F1A4754u: goto label_7F1A4754;
    case 0x7F1A4758u: goto label_7F1A4758;
    case 0x7F1A475Cu: goto label_7F1A475C;
    case 0x7F1A4760u: goto label_7F1A4760;
    case 0x7F1A4764u: goto label_7F1A4764;
    case 0x7F1A4768u: goto label_7F1A4768;
    case 0x7F1A476Cu: goto label_7F1A476C;
    case 0x7F1A4770u: goto label_7F1A4770;
    case 0x7F1A4774u: goto label_7F1A4774;
    case 0x7F1A4778u: goto label_7F1A4778;
    case 0x7F1A477Cu: goto label_7F1A477C;
    case 0x7F1A4780u: goto label_7F1A4780;
    case 0x7F1A4784u: goto label_7F1A4784;
    case 0x7F1A4788u: goto label_7F1A4788;
    case 0x7F1A478Cu: goto label_7F1A478C;
    case 0x7F1A4790u: goto label_7F1A4790;
    case 0x7F1A4794u: goto label_7F1A4794;
    case 0x7F1A4798u: goto label_7F1A4798;
    case 0x7F1A479Cu: goto label_7F1A479C;
    case 0x7F1A47A0u: goto label_7F1A47A0;
    case 0x7F1A47A4u: goto label_7F1A47A4;
    case 0x7F1A47A8u: goto label_7F1A47A8;
    case 0x7F1A47ACu: goto label_7F1A47AC;
    case 0x7F1A47B0u: goto label_7F1A47B0;
    case 0x7F1A47B4u: goto label_7F1A47B4;
    case 0x7F1A47B8u: goto label_7F1A47B8;
    case 0x7F1A47BCu: goto label_7F1A47BC;
    case 0x7F1A47C0u: goto label_7F1A47C0;
    case 0x7F1A47C4u: goto label_7F1A47C4;
    case 0x7F1A47C8u: goto label_7F1A47C8;
    case 0x7F1A47CCu: goto label_7F1A47CC;
    case 0x7F1A47D0u: goto label_7F1A47D0;
    case 0x7F1A47D4u: goto label_7F1A47D4;
    case 0x7F1A47D8u: goto label_7F1A47D8;
    case 0x7F1A47DCu: goto label_7F1A47DC;
    case 0x7F1A47E0u: goto label_7F1A47E0;
    case 0x7F1A47E4u: goto label_7F1A47E4;
    case 0x7F1A47E8u: goto label_7F1A47E8;
    case 0x7F1A47ECu: goto label_7F1A47EC;
    case 0x7F1A47F0u: goto label_7F1A47F0;
    case 0x7F1A47F4u: goto label_7F1A47F4;
    case 0x7F1A47F8u: goto label_7F1A47F8;
    case 0x7F1A47FCu: goto label_7F1A47FC;
    case 0x7F1A4800u: goto label_7F1A4800;
    case 0x7F1A4804u: goto label_7F1A4804;
    case 0x7F1A4808u: goto label_7F1A4808;
    case 0x7F1A480Cu: goto label_7F1A480C;
    case 0x7F1A4810u: goto label_7F1A4810;
    case 0x7F1A4814u: goto label_7F1A4814;
    case 0x7F1A4818u: goto label_7F1A4818;
    case 0x7F1A481Cu: goto label_7F1A481C;
    case 0x7F1A4820u: goto label_7F1A4820;
    case 0x7F1A4824u: goto label_7F1A4824;
    case 0x7F1A4828u: goto label_7F1A4828;
    case 0x7F1A482Cu: goto label_7F1A482C;
    case 0x7F1A4830u: goto label_7F1A4830;
    case 0x7F1A4834u: goto label_7F1A4834;
    case 0x7F1A4838u: goto label_7F1A4838;
    case 0x7F1A483Cu: goto label_7F1A483C;
    case 0x7F1A4840u: goto label_7F1A4840;
    case 0x7F1A4844u: goto label_7F1A4844;
    case 0x7F1A4848u: goto label_7F1A4848;
    case 0x7F1A484Cu: goto label_7F1A484C;
    case 0x7F1A4850u: goto label_7F1A4850;
    case 0x7F1A4854u: goto label_7F1A4854;
    case 0x7F1A4858u: goto label_7F1A4858;
    case 0x7F1A485Cu: goto label_7F1A485C;
    case 0x7F1A4860u: goto label_7F1A4860;
    case 0x7F1A4864u: goto label_7F1A4864;
    case 0x7F1A4868u: goto label_7F1A4868;
    case 0x7F1A486Cu: goto label_7F1A486C;
    case 0x7F1A4870u: goto label_7F1A4870;
    case 0x7F1A4874u: goto label_7F1A4874;
    case 0x7F1A4878u: goto label_7F1A4878;
    case 0x7F1A487Cu: goto label_7F1A487C;
    case 0x7F1A4880u: goto label_7F1A4880;
    case 0x7F1A4884u: goto label_7F1A4884;
    case 0x7F1A4888u: goto label_7F1A4888;
    case 0x7F1A488Cu: goto label_7F1A488C;
    case 0x7F1A4890u: goto label_7F1A4890;
    case 0x7F1A4894u: goto label_7F1A4894;
    case 0x7F1A4898u: goto label_7F1A4898;
    case 0x7F1A489Cu: goto label_7F1A489C;
    case 0x7F1A48A0u: goto label_7F1A48A0;
    case 0x7F1A48A4u: goto label_7F1A48A4;
    case 0x7F1A48A8u: goto label_7F1A48A8;
    case 0x7F1A48ACu: goto label_7F1A48AC;
    case 0x7F1A48B0u: goto label_7F1A48B0;
    case 0x7F1A48B4u: goto label_7F1A48B4;
    case 0x7F1A48B8u: goto label_7F1A48B8;
    case 0x7F1A48BCu: goto label_7F1A48BC;
    case 0x7F1A48C0u: goto label_7F1A48C0;
    case 0x7F1A48C4u: goto label_7F1A48C4;
    case 0x7F1A48C8u: goto label_7F1A48C8;
    case 0x7F1A48CCu: goto label_7F1A48CC;
    case 0x7F1A48D0u: goto label_7F1A48D0;
    case 0x7F1A48D4u: goto label_7F1A48D4;
    case 0x7F1A48D8u: goto label_7F1A48D8;
    case 0x7F1A48DCu: goto label_7F1A48DC;
    case 0x7F1A48E0u: goto label_7F1A48E0;
    case 0x7F1A48E4u: goto label_7F1A48E4;
    case 0x7F1A48E8u: goto label_7F1A48E8;
    case 0x7F1A48ECu: goto label_7F1A48EC;
    case 0x7F1A48F0u: goto label_7F1A48F0;
    case 0x7F1A48F4u: goto label_7F1A48F4;
    case 0x7F1A48F8u: goto label_7F1A48F8;
    case 0x7F1A48FCu: goto label_7F1A48FC;
    case 0x7F1A4900u: goto label_7F1A4900;
    case 0x7F1A4904u: goto label_7F1A4904;
    case 0x7F1A4908u: goto label_7F1A4908;
    case 0x7F1A490Cu: goto label_7F1A490C;
    case 0x7F1A4910u: goto label_7F1A4910;
    case 0x7F1A4914u: goto label_7F1A4914;
    case 0x7F1A4918u: goto label_7F1A4918;
    case 0x7F1A491Cu: goto label_7F1A491C;
    case 0x7F1A4920u: goto label_7F1A4920;
    case 0x7F1A4924u: goto label_7F1A4924;
    case 0x7F1A4928u: goto label_7F1A4928;
    case 0x7F1A492Cu: goto label_7F1A492C;
    case 0x7F1A4930u: goto label_7F1A4930;
    case 0x7F1A4934u: goto label_7F1A4934;
    case 0x7F1A4938u: goto label_7F1A4938;
    case 0x7F1A493Cu: goto label_7F1A493C;
    case 0x7F1A4940u: goto label_7F1A4940;
    case 0x7F1A4944u: goto label_7F1A4944;
    case 0x7F1A4948u: goto label_7F1A4948;
    case 0x7F1A494Cu: goto label_7F1A494C;
    case 0x7F1A4950u: goto label_7F1A4950;
    case 0x7F1A4954u: goto label_7F1A4954;
    case 0x7F1A4958u: goto label_7F1A4958;
    case 0x7F1A495Cu: goto label_7F1A495C;
    case 0x7F1A4960u: goto label_7F1A4960;
    case 0x7F1A4964u: goto label_7F1A4964;
    case 0x7F1A4968u: goto label_7F1A4968;
    case 0x7F1A496Cu: goto label_7F1A496C;
    case 0x7F1A4970u: goto label_7F1A4970;
    case 0x7F1A4974u: goto label_7F1A4974;
    case 0x7F1A4978u: goto label_7F1A4978;
    case 0x7F1A497Cu: goto label_7F1A497C;
    case 0x7F1A4980u: goto label_7F1A4980;
    case 0x7F1A4984u: goto label_7F1A4984;
    case 0x7F1A4988u: goto label_7F1A4988;
    case 0x7F1A498Cu: goto label_7F1A498C;
    case 0x7F1A4990u: goto label_7F1A4990;
    case 0x7F1A4994u: goto label_7F1A4994;
    case 0x7F1A4998u: goto label_7F1A4998;
    case 0x7F1A499Cu: goto label_7F1A499C;
    case 0x7F1A49A0u: goto label_7F1A49A0;
    case 0x7F1A49A4u: goto label_7F1A49A4;
    case 0x7F1A49A8u: goto label_7F1A49A8;
    case 0x7F1A49ACu: goto label_7F1A49AC;
    case 0x7F1A49B0u: goto label_7F1A49B0;
    case 0x7F1A49B4u: goto label_7F1A49B4;
    case 0x7F1A49B8u: goto label_7F1A49B8;
    case 0x7F1A49BCu: goto label_7F1A49BC;
    case 0x7F1A49C0u: goto label_7F1A49C0;
    case 0x7F1A49C4u: goto label_7F1A49C4;
    case 0x7F1A49C8u: goto label_7F1A49C8;
    case 0x7F1A49CCu: goto label_7F1A49CC;
    case 0x7F1A49D0u: goto label_7F1A49D0;
    case 0x7F1A49D4u: goto label_7F1A49D4;
    case 0x7F1A49D8u: goto label_7F1A49D8;
    case 0x7F1A49DCu: goto label_7F1A49DC;
    case 0x7F1A49E0u: goto label_7F1A49E0;
    case 0x7F1A49E4u: goto label_7F1A49E4;
    case 0x7F1A49E8u: goto label_7F1A49E8;
    case 0x7F1A49ECu: goto label_7F1A49EC;
    case 0x7F1A49F0u: goto label_7F1A49F0;
    case 0x7F1A49F4u: goto label_7F1A49F4;
    case 0x7F1A49F8u: goto label_7F1A49F8;
    case 0x7F1A49FCu: goto label_7F1A49FC;
    case 0x7F1A4A00u: goto label_7F1A4A00;
    case 0x7F1A4A04u: goto label_7F1A4A04;
    case 0x7F1A4A08u: goto label_7F1A4A08;
    case 0x7F1A4A0Cu: goto label_7F1A4A0C;
    case 0x7F1A4A10u: goto label_7F1A4A10;
    case 0x7F1A4A14u: goto label_7F1A4A14;
    case 0x7F1A4A18u: goto label_7F1A4A18;
    case 0x7F1A4A1Cu: goto label_7F1A4A1C;
    case 0x7F1A4A20u: goto label_7F1A4A20;
    case 0x7F1A4A24u: goto label_7F1A4A24;
    case 0x7F1A4A28u: goto label_7F1A4A28;
    case 0x7F1A4A2Cu: goto label_7F1A4A2C;
    case 0x7F1A4A30u: goto label_7F1A4A30;
    case 0x7F1A4A34u: goto label_7F1A4A34;
    case 0x7F1A4A38u: goto label_7F1A4A38;
    case 0x7F1A4A3Cu: goto label_7F1A4A3C;
    case 0x7F1A4A40u: goto label_7F1A4A40;
    case 0x7F1A4A44u: goto label_7F1A4A44;
    case 0x7F1A4A48u: goto label_7F1A4A48;
    case 0x7F1A4A4Cu: goto label_7F1A4A4C;
    case 0x7F1A4A50u: goto label_7F1A4A50;
    case 0x7F1A4A54u: goto label_7F1A4A54;
    case 0x7F1A4A58u: goto label_7F1A4A58;
    case 0x7F1A4A5Cu: goto label_7F1A4A5C;
    case 0x7F1A4A60u: goto label_7F1A4A60;
    case 0x7F1A4A64u: goto label_7F1A4A64;
    case 0x7F1A4A68u: goto label_7F1A4A68;
    case 0x7F1A4A6Cu: goto label_7F1A4A6C;
    case 0x7F1A4A70u: goto label_7F1A4A70;
    case 0x7F1A4A74u: goto label_7F1A4A74;
    case 0x7F1A4A78u: goto label_7F1A4A78;
    case 0x7F1A4A7Cu: goto label_7F1A4A7C;
    case 0x7F1A4A80u: goto label_7F1A4A80;
    case 0x7F1A4A84u: goto label_7F1A4A84;
    case 0x7F1A4A88u: goto label_7F1A4A88;
    case 0x7F1A4A8Cu: goto label_7F1A4A8C;
    case 0x7F1A4A90u: goto label_7F1A4A90;
    case 0x7F1A4A94u: goto label_7F1A4A94;
    case 0x7F1A4A98u: goto label_7F1A4A98;
    case 0x7F1A4A9Cu: goto label_7F1A4A9C;
    case 0x7F1A4AA0u: goto label_7F1A4AA0;
    case 0x7F1A4AA4u: goto label_7F1A4AA4;
    case 0x7F1A4AA8u: goto label_7F1A4AA8;
    case 0x7F1A4AACu: goto label_7F1A4AAC;
    case 0x7F1A4AB0u: goto label_7F1A4AB0;
    case 0x7F1A4AB4u: goto label_7F1A4AB4;
    case 0x7F1A4AB8u: goto label_7F1A4AB8;
    case 0x7F1A4ABCu: goto label_7F1A4ABC;
    case 0x7F1A4AC0u: goto label_7F1A4AC0;
    case 0x7F1A4AC4u: goto label_7F1A4AC4;
    case 0x7F1A4AC8u: goto label_7F1A4AC8;
    case 0x7F1A4ACCu: goto label_7F1A4ACC;
    case 0x7F1A4AD0u: goto label_7F1A4AD0;
    case 0x7F1A4AD4u: goto label_7F1A4AD4;
    case 0x7F1A4AD8u: goto label_7F1A4AD8;
    case 0x7F1A4ADCu: goto label_7F1A4ADC;
    case 0x7F1A4AE0u: goto label_7F1A4AE0;
    case 0x7F1A4AE4u: goto label_7F1A4AE4;
    case 0x7F1A4AE8u: goto label_7F1A4AE8;
    case 0x7F1A4AECu: goto label_7F1A4AEC;
    case 0x7F1A4AF0u: goto label_7F1A4AF0;
    case 0x7F1A4AF4u: goto label_7F1A4AF4;
    case 0x7F1A4AF8u: goto label_7F1A4AF8;
    case 0x7F1A4AFCu: goto label_7F1A4AFC;
    case 0x7F1A4B00u: goto label_7F1A4B00;
    case 0x7F1A4B04u: goto label_7F1A4B04;
    case 0x7F1A4B08u: goto label_7F1A4B08;
    case 0x7F1A4B0Cu: goto label_7F1A4B0C;
    case 0x7F1A4B10u: goto label_7F1A4B10;
    case 0x7F1A4B14u: goto label_7F1A4B14;
    case 0x7F1A4B18u: goto label_7F1A4B18;
    case 0x7F1A4B1Cu: goto label_7F1A4B1C;
    case 0x7F1A4B20u: goto label_7F1A4B20;
    case 0x7F1A4B24u: goto label_7F1A4B24;
    case 0x7F1A4B28u: goto label_7F1A4B28;
    case 0x7F1A4B2Cu: goto label_7F1A4B2C;
    case 0x7F1A4B30u: goto label_7F1A4B30;
    case 0x7F1A4B34u: goto label_7F1A4B34;
    case 0x7F1A4B38u: goto label_7F1A4B38;
    case 0x7F1A4B3Cu: goto label_7F1A4B3C;
    case 0x7F1A4B40u: goto label_7F1A4B40;
    case 0x7F1A4B44u: goto label_7F1A4B44;
    case 0x7F1A4B48u: goto label_7F1A4B48;
    case 0x7F1A4B4Cu: goto label_7F1A4B4C;
    case 0x7F1A4B50u: goto label_7F1A4B50;
    case 0x7F1A4B54u: goto label_7F1A4B54;
    case 0x7F1A4B58u: goto label_7F1A4B58;
    case 0x7F1A4B5Cu: goto label_7F1A4B5C;
    case 0x7F1A4B60u: goto label_7F1A4B60;
    case 0x7F1A4B64u: goto label_7F1A4B64;
    case 0x7F1A4B68u: goto label_7F1A4B68;
    case 0x7F1A4B6Cu: goto label_7F1A4B6C;
    case 0x7F1A4B70u: goto label_7F1A4B70;
    case 0x7F1A4B74u: goto label_7F1A4B74;
    case 0x7F1A4B78u: goto label_7F1A4B78;
    case 0x7F1A4B7Cu: goto label_7F1A4B7C;
    case 0x7F1A4B80u: goto label_7F1A4B80;
    case 0x7F1A4B84u: goto label_7F1A4B84;
    case 0x7F1A4B88u: goto label_7F1A4B88;
    case 0x7F1A4B8Cu: goto label_7F1A4B8C;
    case 0x7F1A4B90u: goto label_7F1A4B90;
    case 0x7F1A4B94u: goto label_7F1A4B94;
    case 0x7F1A4B98u: goto label_7F1A4B98;
    case 0x7F1A4B9Cu: goto label_7F1A4B9C;
    case 0x7F1A4BA0u: goto label_7F1A4BA0;
    case 0x7F1A4BA4u: goto label_7F1A4BA4;
    case 0x7F1A4BA8u: goto label_7F1A4BA8;
    case 0x7F1A4BACu: goto label_7F1A4BAC;
    case 0x7F1A4BB0u: goto label_7F1A4BB0;
    case 0x7F1A4BB4u: goto label_7F1A4BB4;
    case 0x7F1A4BB8u: goto label_7F1A4BB8;
    case 0x7F1A4BBCu: goto label_7F1A4BBC;
    case 0x7F1A4BC0u: goto label_7F1A4BC0;
    case 0x7F1A4BC4u: goto label_7F1A4BC4;
    case 0x7F1A4BC8u: goto label_7F1A4BC8;
    case 0x7F1A4BCCu: goto label_7F1A4BCC;
    case 0x7F1A4BD0u: goto label_7F1A4BD0;
    case 0x7F1A4BD4u: goto label_7F1A4BD4;
    case 0x7F1A4BD8u: goto label_7F1A4BD8;
    case 0x7F1A4BDCu: goto label_7F1A4BDC;
    case 0x7F1A4BE0u: goto label_7F1A4BE0;
    case 0x7F1A4BE4u: goto label_7F1A4BE4;
    case 0x7F1A4BE8u: goto label_7F1A4BE8;
    case 0x7F1A4BECu: goto label_7F1A4BEC;
    case 0x7F1A4BF0u: goto label_7F1A4BF0;
    case 0x7F1A4BF4u: goto label_7F1A4BF4;
    case 0x7F1A4BF8u: goto label_7F1A4BF8;
    case 0x7F1A4BFCu: goto label_7F1A4BFC;
    case 0x7F1A4C00u: goto label_7F1A4C00;
    case 0x7F1A4C04u: goto label_7F1A4C04;
    case 0x7F1A4C08u: goto label_7F1A4C08;
    case 0x7F1A4C0Cu: goto label_7F1A4C0C;
    case 0x7F1A4C10u: goto label_7F1A4C10;
    case 0x7F1A4C14u: goto label_7F1A4C14;
    case 0x7F1A4C18u: goto label_7F1A4C18;
    case 0x7F1A4C1Cu: goto label_7F1A4C1C;
    case 0x7F1A4C20u: goto label_7F1A4C20;
    case 0x7F1A4C24u: goto label_7F1A4C24;
    case 0x7F1A4C28u: goto label_7F1A4C28;
    case 0x7F1A4C2Cu: goto label_7F1A4C2C;
    case 0x7F1A4C30u: goto label_7F1A4C30;
    case 0x7F1A4C34u: goto label_7F1A4C34;
    case 0x7F1A4C38u: goto label_7F1A4C38;
    case 0x7F1A4C3Cu: goto label_7F1A4C3C;
    case 0x7F1A4C40u: goto label_7F1A4C40;
    case 0x7F1A4C44u: goto label_7F1A4C44;
    case 0x7F1A4C48u: goto label_7F1A4C48;
    case 0x7F1A4C4Cu: goto label_7F1A4C4C;
    case 0x7F1A4C50u: goto label_7F1A4C50;
    case 0x7F1A4C54u: goto label_7F1A4C54;
    case 0x7F1A4C58u: goto label_7F1A4C58;
    case 0x7F1A4C5Cu: goto label_7F1A4C5C;
    case 0x7F1A4C60u: goto label_7F1A4C60;
    case 0x7F1A4C64u: goto label_7F1A4C64;
    case 0x7F1A4C68u: goto label_7F1A4C68;
    case 0x7F1A4C6Cu: goto label_7F1A4C6C;
    case 0x7F1A4C70u: goto label_7F1A4C70;
    case 0x7F1A4C74u: goto label_7F1A4C74;
    case 0x7F1A4C78u: goto label_7F1A4C78;
    case 0x7F1A4C7Cu: goto label_7F1A4C7C;
    case 0x7F1A4C80u: goto label_7F1A4C80;
    case 0x7F1A4C84u: goto label_7F1A4C84;
    case 0x7F1A4C88u: goto label_7F1A4C88;
    case 0x7F1A4C8Cu: goto label_7F1A4C8C;
    case 0x7F1A4C90u: goto label_7F1A4C90;
    case 0x7F1A4C94u: goto label_7F1A4C94;
    case 0x7F1A4C98u: goto label_7F1A4C98;
    case 0x7F1A4C9Cu: goto label_7F1A4C9C;
    case 0x7F1A4CA0u: goto label_7F1A4CA0;
    case 0x7F1A4CA4u: goto label_7F1A4CA4;
    case 0x7F1A4CA8u: goto label_7F1A4CA8;
    case 0x7F1A4CACu: goto label_7F1A4CAC;
    case 0x7F1A4CB0u: goto label_7F1A4CB0;
    case 0x7F1A4CB4u: goto label_7F1A4CB4;
    case 0x7F1A4CB8u: goto label_7F1A4CB8;
    case 0x7F1A4CBCu: goto label_7F1A4CBC;
    case 0x7F1A4CC0u: goto label_7F1A4CC0;
    case 0x7F1A4CC4u: goto label_7F1A4CC4;
    case 0x7F1A4CC8u: goto label_7F1A4CC8;
    case 0x7F1A4CCCu: goto label_7F1A4CCC;
    case 0x7F1A4CD0u: goto label_7F1A4CD0;
    case 0x7F1A4CD4u: goto label_7F1A4CD4;
    case 0x7F1A4CD8u: goto label_7F1A4CD8;
    case 0x7F1A4CDCu: goto label_7F1A4CDC;
    case 0x7F1A4CE0u: goto label_7F1A4CE0;
    case 0x7F1A4CE4u: goto label_7F1A4CE4;
    case 0x7F1A4CE8u: goto label_7F1A4CE8;
    case 0x7F1A4CECu: goto label_7F1A4CEC;
    case 0x7F1A4CF0u: goto label_7F1A4CF0;
    case 0x7F1A4CF4u: goto label_7F1A4CF4;
    case 0x7F1A4CF8u: goto label_7F1A4CF8;
    case 0x7F1A4CFCu: goto label_7F1A4CFC;
    case 0x7F1A4D00u: goto label_7F1A4D00;
    case 0x7F1A4D04u: goto label_7F1A4D04;
    case 0x7F1A4D08u: goto label_7F1A4D08;
    case 0x7F1A4D0Cu: goto label_7F1A4D0C;
    case 0x7F1A4D10u: goto label_7F1A4D10;
    case 0x7F1A4D14u: goto label_7F1A4D14;
    case 0x7F1A4D18u: goto label_7F1A4D18;
    case 0x7F1A4D1Cu: goto label_7F1A4D1C;
    case 0x7F1A4D20u: goto label_7F1A4D20;
    case 0x7F1A4D24u: goto label_7F1A4D24;
    case 0x7F1A4D28u: goto label_7F1A4D28;
    case 0x7F1A4D2Cu: goto label_7F1A4D2C;
    case 0x7F1A4D30u: goto label_7F1A4D30;
    case 0x7F1A4D34u: goto label_7F1A4D34;
    case 0x7F1A4D38u: goto label_7F1A4D38;
    case 0x7F1A4D3Cu: goto label_7F1A4D3C;
    case 0x7F1A4D40u: goto label_7F1A4D40;
    case 0x7F1A4D44u: goto label_7F1A4D44;
    case 0x7F1A4D48u: goto label_7F1A4D48;
    case 0x7F1A4D4Cu: goto label_7F1A4D4C;
    case 0x7F1A4D50u: goto label_7F1A4D50;
    case 0x7F1A4D54u: goto label_7F1A4D54;
    case 0x7F1A4D58u: goto label_7F1A4D58;
    case 0x7F1A4D5Cu: goto label_7F1A4D5C;
    case 0x7F1A4D60u: goto label_7F1A4D60;
    case 0x7F1A4D64u: goto label_7F1A4D64;
    case 0x7F1A4D68u: goto label_7F1A4D68;
    case 0x7F1A4D6Cu: goto label_7F1A4D6C;
    case 0x7F1A4D70u: goto label_7F1A4D70;
    case 0x7F1A4D74u: goto label_7F1A4D74;
    case 0x7F1A4D78u: goto label_7F1A4D78;
    case 0x7F1A4D7Cu: goto label_7F1A4D7C;
    case 0x7F1A4D80u: goto label_7F1A4D80;
    case 0x7F1A4D84u: goto label_7F1A4D84;
    case 0x7F1A4D88u: goto label_7F1A4D88;
    case 0x7F1A4D8Cu: goto label_7F1A4D8C;
    case 0x7F1A4D90u: goto label_7F1A4D90;
    case 0x7F1A4D94u: goto label_7F1A4D94;
    case 0x7F1A4D98u: goto label_7F1A4D98;
    case 0x7F1A4D9Cu: goto label_7F1A4D9C;
    case 0x7F1A4DA0u: goto label_7F1A4DA0;
    case 0x7F1A4DA4u: goto label_7F1A4DA4;
    case 0x7F1A4DA8u: goto label_7F1A4DA8;
    case 0x7F1A4DACu: goto label_7F1A4DAC;
    case 0x7F1A4DB0u: goto label_7F1A4DB0;
    case 0x7F1A4DB4u: goto label_7F1A4DB4;
    case 0x7F1A4DB8u: goto label_7F1A4DB8;
    case 0x7F1A4DBCu: goto label_7F1A4DBC;
    case 0x7F1A4DC0u: goto label_7F1A4DC0;
    case 0x7F1A4DC4u: goto label_7F1A4DC4;
    case 0x7F1A4DC8u: goto label_7F1A4DC8;
    case 0x7F1A4DCCu: goto label_7F1A4DCC;
    case 0x7F1A4DD0u: goto label_7F1A4DD0;
    case 0x7F1A4DD4u: goto label_7F1A4DD4;
    case 0x7F1A4DD8u: goto label_7F1A4DD8;
    case 0x7F1A4DDCu: goto label_7F1A4DDC;
    case 0x7F1A4DE0u: goto label_7F1A4DE0;
    case 0x7F1A4DE4u: goto label_7F1A4DE4;
    case 0x7F1A4DE8u: goto label_7F1A4DE8;
    case 0x7F1A4DECu: goto label_7F1A4DEC;
    case 0x7F1A4DF0u: goto label_7F1A4DF0;
    case 0x7F1A4DF4u: goto label_7F1A4DF4;
    case 0x7F1A4DF8u: goto label_7F1A4DF8;
    case 0x7F1A4DFCu: goto label_7F1A4DFC;
    case 0x7F1A4E00u: goto label_7F1A4E00;
    case 0x7F1A4E04u: goto label_7F1A4E04;
    case 0x7F1A4E08u: goto label_7F1A4E08;
    case 0x7F1A4E0Cu: goto label_7F1A4E0C;
    case 0x7F1A4E10u: goto label_7F1A4E10;
    case 0x7F1A4E14u: goto label_7F1A4E14;
    case 0x7F1A4E18u: goto label_7F1A4E18;
    case 0x7F1A4E1Cu: goto label_7F1A4E1C;
    case 0x7F1A4E20u: goto label_7F1A4E20;
    case 0x7F1A4E24u: goto label_7F1A4E24;
    case 0x7F1A4E28u: goto label_7F1A4E28;
    case 0x7F1A4E2Cu: goto label_7F1A4E2C;
    case 0x7F1A4E30u: goto label_7F1A4E30;
    case 0x7F1A4E34u: goto label_7F1A4E34;
    case 0x7F1A4E38u: goto label_7F1A4E38;
    case 0x7F1A4E3Cu: goto label_7F1A4E3C;
    case 0x7F1A4E40u: goto label_7F1A4E40;
    case 0x7F1A4E44u: goto label_7F1A4E44;
    case 0x7F1A4E48u: goto label_7F1A4E48;
    case 0x7F1A4E4Cu: goto label_7F1A4E4C;
    case 0x7F1A4E50u: goto label_7F1A4E50;
    case 0x7F1A4E54u: goto label_7F1A4E54;
    case 0x7F1A4E58u: goto label_7F1A4E58;
    case 0x7F1A4E5Cu: goto label_7F1A4E5C;
    case 0x7F1A4E60u: goto label_7F1A4E60;
    case 0x7F1A4E64u: goto label_7F1A4E64;
    case 0x7F1A4E68u: goto label_7F1A4E68;
    case 0x7F1A4E6Cu: goto label_7F1A4E6C;
    case 0x7F1A4E70u: goto label_7F1A4E70;
    case 0x7F1A4E74u: goto label_7F1A4E74;
    case 0x7F1A4E78u: goto label_7F1A4E78;
    case 0x7F1A4E7Cu: goto label_7F1A4E7C;
    case 0x7F1A4E80u: goto label_7F1A4E80;
    case 0x7F1A4E84u: goto label_7F1A4E84;
    case 0x7F1A4E88u: goto label_7F1A4E88;
    case 0x7F1A4E8Cu: goto label_7F1A4E8C;
    case 0x7F1A4E90u: goto label_7F1A4E90;
    case 0x7F1A4E94u: goto label_7F1A4E94;
    case 0x7F1A4E98u: goto label_7F1A4E98;
    case 0x7F1A4E9Cu: goto label_7F1A4E9C;
    case 0x7F1A4EA0u: goto label_7F1A4EA0;
    case 0x7F1A4EA4u: goto label_7F1A4EA4;
    case 0x7F1A4EA8u: goto label_7F1A4EA8;
    case 0x7F1A4EACu: goto label_7F1A4EAC;
    case 0x7F1A4EB0u: goto label_7F1A4EB0;
    case 0x7F1A4EB4u: goto label_7F1A4EB4;
    case 0x7F1A4EB8u: goto label_7F1A4EB8;
    case 0x7F1A4EBCu: goto label_7F1A4EBC;
    case 0x7F1A4EC0u: goto label_7F1A4EC0;
    case 0x7F1A4EC4u: goto label_7F1A4EC4;
    case 0x7F1A4EC8u: goto label_7F1A4EC8;
    case 0x7F1A4ECCu: goto label_7F1A4ECC;
    case 0x7F1A4ED0u: goto label_7F1A4ED0;
    case 0x7F1A4ED4u: goto label_7F1A4ED4;
    case 0x7F1A4ED8u: goto label_7F1A4ED8;
    case 0x7F1A4EDCu: goto label_7F1A4EDC;
    case 0x7F1A4EE0u: goto label_7F1A4EE0;
    case 0x7F1A4EE4u: goto label_7F1A4EE4;
    case 0x7F1A4EE8u: goto label_7F1A4EE8;
    case 0x7F1A4EECu: goto label_7F1A4EEC;
    case 0x7F1A4EF0u: goto label_7F1A4EF0;
    case 0x7F1A4EF4u: goto label_7F1A4EF4;
    case 0x7F1A4EF8u: goto label_7F1A4EF8;
    case 0x7F1A4EFCu: goto label_7F1A4EFC;
    case 0x7F1A4F00u: goto label_7F1A4F00;
    case 0x7F1A4F04u: goto label_7F1A4F04;
    case 0x7F1A4F08u: goto label_7F1A4F08;
    case 0x7F1A4F0Cu: goto label_7F1A4F0C;
    case 0x7F1A4F10u: goto label_7F1A4F10;
    case 0x7F1A4F14u: goto label_7F1A4F14;
    case 0x7F1A4F18u: goto label_7F1A4F18;
    case 0x7F1A4F1Cu: goto label_7F1A4F1C;
    case 0x7F1A4F20u: goto label_7F1A4F20;
    case 0x7F1A4F24u: goto label_7F1A4F24;
    case 0x7F1A4F28u: goto label_7F1A4F28;
    case 0x7F1A4F2Cu: goto label_7F1A4F2C;
    case 0x7F1A4F30u: goto label_7F1A4F30;
    case 0x7F1A4F34u: goto label_7F1A4F34;
    case 0x7F1A4F38u: goto label_7F1A4F38;
    case 0x7F1A4F3Cu: goto label_7F1A4F3C;
    case 0x7F1A4F40u: goto label_7F1A4F40;
    case 0x7F1A4F44u: goto label_7F1A4F44;
    case 0x7F1A4F48u: goto label_7F1A4F48;
    case 0x7F1A4F4Cu: goto label_7F1A4F4C;
    case 0x7F1A4F50u: goto label_7F1A4F50;
    case 0x7F1A4F54u: goto label_7F1A4F54;
    case 0x7F1A4F58u: goto label_7F1A4F58;
    case 0x7F1A4F5Cu: goto label_7F1A4F5C;
    case 0x7F1A4F60u: goto label_7F1A4F60;
    case 0x7F1A4F64u: goto label_7F1A4F64;
    case 0x7F1A4F68u: goto label_7F1A4F68;
    case 0x7F1A4F6Cu: goto label_7F1A4F6C;
    case 0x7F1A4F70u: goto label_7F1A4F70;
    case 0x7F1A4F74u: goto label_7F1A4F74;
    case 0x7F1A4F78u: goto label_7F1A4F78;
    case 0x7F1A4F7Cu: goto label_7F1A4F7C;
    case 0x7F1A4F80u: goto label_7F1A4F80;
    case 0x7F1A4F84u: goto label_7F1A4F84;
    case 0x7F1A4F88u: goto label_7F1A4F88;
    case 0x7F1A4F8Cu: goto label_7F1A4F8C;
    case 0x7F1A4F90u: goto label_7F1A4F90;
    case 0x7F1A4F94u: goto label_7F1A4F94;
    case 0x7F1A4F98u: goto label_7F1A4F98;
    case 0x7F1A4F9Cu: goto label_7F1A4F9C;
    case 0x7F1A4FA0u: goto label_7F1A4FA0;
    case 0x7F1A4FA4u: goto label_7F1A4FA4;
    case 0x7F1A4FA8u: goto label_7F1A4FA8;
    case 0x7F1A4FACu: goto label_7F1A4FAC;
    case 0x7F1A4FB0u: goto label_7F1A4FB0;
    case 0x7F1A4FB4u: goto label_7F1A4FB4;
    case 0x7F1A4FB8u: goto label_7F1A4FB8;
    case 0x7F1A4FBCu: goto label_7F1A4FBC;
    case 0x7F1A4FC0u: goto label_7F1A4FC0;
    case 0x7F1A4FC4u: goto label_7F1A4FC4;
    case 0x7F1A4FC8u: goto label_7F1A4FC8;
    case 0x7F1A4FCCu: goto label_7F1A4FCC;
    case 0x7F1A4FD0u: goto label_7F1A4FD0;
    case 0x7F1A4FD4u: goto label_7F1A4FD4;
    case 0x7F1A4FD8u: goto label_7F1A4FD8;
    case 0x7F1A4FDCu: goto label_7F1A4FDC;
    case 0x7F1A4FE0u: goto label_7F1A4FE0;
    case 0x7F1A4FE4u: goto label_7F1A4FE4;
    case 0x7F1A4FE8u: goto label_7F1A4FE8;
    case 0x7F1A4FECu: goto label_7F1A4FEC;
    case 0x7F1A4FF0u: goto label_7F1A4FF0;
    case 0x7F1A4FF4u: goto label_7F1A4FF4;
    case 0x7F1A4FF8u: goto label_7F1A4FF8;
    case 0x7F1A4FFCu: goto label_7F1A4FFC;
    case 0x7F1A5000u: goto label_7F1A5000;
    case 0x7F1A5004u: goto label_7F1A5004;
    case 0x7F1A5008u: goto label_7F1A5008;
    case 0x7F1A500Cu: goto label_7F1A500C;
    case 0x7F1A5010u: goto label_7F1A5010;
    case 0x7F1A5014u: goto label_7F1A5014;
    case 0x7F1A5018u: goto label_7F1A5018;
    case 0x7F1A501Cu: goto label_7F1A501C;
    case 0x7F1A5020u: goto label_7F1A5020;
    case 0x7F1A5024u: goto label_7F1A5024;
    case 0x7F1A5028u: goto label_7F1A5028;
    case 0x7F1A502Cu: goto label_7F1A502C;
    case 0x7F1A5030u: goto label_7F1A5030;
    case 0x7F1A5034u: goto label_7F1A5034;
    case 0x7F1A5038u: goto label_7F1A5038;
    case 0x7F1A503Cu: goto label_7F1A503C;
    case 0x7F1A5040u: goto label_7F1A5040;
    case 0x7F1A5044u: goto label_7F1A5044;
    case 0x7F1A5048u: goto label_7F1A5048;
    case 0x7F1A504Cu: goto label_7F1A504C;
    case 0x7F1A5050u: goto label_7F1A5050;
    case 0x7F1A5054u: goto label_7F1A5054;
    case 0x7F1A5058u: goto label_7F1A5058;
    case 0x7F1A505Cu: goto label_7F1A505C;
    case 0x7F1A5060u: goto label_7F1A5060;
    case 0x7F1A5064u: goto label_7F1A5064;
    case 0x7F1A5068u: goto label_7F1A5068;
    case 0x7F1A506Cu: goto label_7F1A506C;
    case 0x7F1A5070u: goto label_7F1A5070;
    case 0x7F1A5074u: goto label_7F1A5074;
    case 0x7F1A5078u: goto label_7F1A5078;
    case 0x7F1A507Cu: goto label_7F1A507C;
    case 0x7F1A5080u: goto label_7F1A5080;
    case 0x7F1A5084u: goto label_7F1A5084;
    case 0x7F1A5088u: goto label_7F1A5088;
    case 0x7F1A508Cu: goto label_7F1A508C;
    case 0x7F1A5090u: goto label_7F1A5090;
    case 0x7F1A5094u: goto label_7F1A5094;
    case 0x7F1A5098u: goto label_7F1A5098;
    case 0x7F1A509Cu: goto label_7F1A509C;
    case 0x7F1A50A0u: goto label_7F1A50A0;
    case 0x7F1A50A4u: goto label_7F1A50A4;
    case 0x7F1A50A8u: goto label_7F1A50A8;
    case 0x7F1A50ACu: goto label_7F1A50AC;
    case 0x7F1A50B0u: goto label_7F1A50B0;
    case 0x7F1A50B4u: goto label_7F1A50B4;
    case 0x7F1A50B8u: goto label_7F1A50B8;
    case 0x7F1A50BCu: goto label_7F1A50BC;
    case 0x7F1A50C0u: goto label_7F1A50C0;
    case 0x7F1A50C4u: goto label_7F1A50C4;
    case 0x7F1A50C8u: goto label_7F1A50C8;
    case 0x7F1A50CCu: goto label_7F1A50CC;
    case 0x7F1A50D0u: goto label_7F1A50D0;
    case 0x7F1A50D4u: goto label_7F1A50D4;
    case 0x7F1A50D8u: goto label_7F1A50D8;
    case 0x7F1A50DCu: goto label_7F1A50DC;
    case 0x7F1A50E0u: goto label_7F1A50E0;
    case 0x7F1A50E4u: goto label_7F1A50E4;
    case 0x7F1A50E8u: goto label_7F1A50E8;
    case 0x7F1A50ECu: goto label_7F1A50EC;
    case 0x7F1A50F0u: goto label_7F1A50F0;
    case 0x7F1A50F4u: goto label_7F1A50F4;
    case 0x7F1A50F8u: goto label_7F1A50F8;
    case 0x7F1A50FCu: goto label_7F1A50FC;
    case 0x7F1A5100u: goto label_7F1A5100;
    case 0x7F1A5104u: goto label_7F1A5104;
    case 0x7F1A5108u: goto label_7F1A5108;
    case 0x7F1A510Cu: goto label_7F1A510C;
    case 0x7F1A5110u: goto label_7F1A5110;
    case 0x7F1A5114u: goto label_7F1A5114;
    case 0x7F1A5118u: goto label_7F1A5118;
    case 0x7F1A511Cu: goto label_7F1A511C;
    case 0x7F1A5120u: goto label_7F1A5120;
    case 0x7F1A5124u: goto label_7F1A5124;
    case 0x7F1A5128u: goto label_7F1A5128;
    case 0x7F1A512Cu: goto label_7F1A512C;
    case 0x7F1A5130u: goto label_7F1A5130;
    case 0x7F1A5134u: goto label_7F1A5134;
    case 0x7F1A5138u: goto label_7F1A5138;
    case 0x7F1A513Cu: goto label_7F1A513C;
    case 0x7F1A5140u: goto label_7F1A5140;
    case 0x7F1A5144u: goto label_7F1A5144;
    case 0x7F1A5148u: goto label_7F1A5148;
    case 0x7F1A514Cu: goto label_7F1A514C;
    case 0x7F1A5150u: goto label_7F1A5150;
    case 0x7F1A5154u: goto label_7F1A5154;
    case 0x7F1A5158u: goto label_7F1A5158;
    case 0x7F1A515Cu: goto label_7F1A515C;
    case 0x7F1A5160u: goto label_7F1A5160;
    case 0x7F1A5164u: goto label_7F1A5164;
    case 0x7F1A5168u: goto label_7F1A5168;
    case 0x7F1A516Cu: goto label_7F1A516C;
    case 0x7F1A5170u: goto label_7F1A5170;
    case 0x7F1A5174u: goto label_7F1A5174;
    case 0x7F1A5178u: goto label_7F1A5178;
    case 0x7F1A517Cu: goto label_7F1A517C;
    case 0x7F1A5180u: goto label_7F1A5180;
    case 0x7F1A5184u: goto label_7F1A5184;
    case 0x7F1A5188u: goto label_7F1A5188;
    case 0x7F1A518Cu: goto label_7F1A518C;
    case 0x7F1A5190u: goto label_7F1A5190;
    case 0x7F1A5194u: goto label_7F1A5194;
    case 0x7F1A5198u: goto label_7F1A5198;
    case 0x7F1A519Cu: goto label_7F1A519C;
    case 0x7F1A51A0u: goto label_7F1A51A0;
    case 0x7F1A51A4u: goto label_7F1A51A4;
    case 0x7F1A51A8u: goto label_7F1A51A8;
    case 0x7F1A51ACu: goto label_7F1A51AC;
    case 0x7F1A51B0u: goto label_7F1A51B0;
    case 0x7F1A51B4u: goto label_7F1A51B4;
    case 0x7F1A51B8u: goto label_7F1A51B8;
    case 0x7F1A51BCu: goto label_7F1A51BC;
    case 0x7F1A51C0u: goto label_7F1A51C0;
    case 0x7F1A51C4u: goto label_7F1A51C4;
    case 0x7F1A51C8u: goto label_7F1A51C8;
    case 0x7F1A51CCu: goto label_7F1A51CC;
    case 0x7F1A51D0u: goto label_7F1A51D0;
    case 0x7F1A51D4u: goto label_7F1A51D4;
    case 0x7F1A51D8u: goto label_7F1A51D8;
    case 0x7F1A51DCu: goto label_7F1A51DC;
    case 0x7F1A51E0u: goto label_7F1A51E0;
    case 0x7F1A51E4u: goto label_7F1A51E4;
    case 0x7F1A51E8u: goto label_7F1A51E8;
    case 0x7F1A51ECu: goto label_7F1A51EC;
    case 0x7F1A51F0u: goto label_7F1A51F0;
    case 0x7F1A51F4u: goto label_7F1A51F4;
    case 0x7F1A51F8u: goto label_7F1A51F8;
    case 0x7F1A51FCu: goto label_7F1A51FC;
    case 0x7F1A5200u: goto label_7F1A5200;
    case 0x7F1A5204u: goto label_7F1A5204;
    case 0x7F1A5208u: goto label_7F1A5208;
    case 0x7F1A520Cu: goto label_7F1A520C;
    case 0x7F1A5210u: goto label_7F1A5210;
    case 0x7F1A5214u: goto label_7F1A5214;
    case 0x7F1A5218u: goto label_7F1A5218;
    case 0x7F1A521Cu: goto label_7F1A521C;
    case 0x7F1A5220u: goto label_7F1A5220;
    case 0x7F1A5224u: goto label_7F1A5224;
    case 0x7F1A5228u: goto label_7F1A5228;
    case 0x7F1A522Cu: goto label_7F1A522C;
    case 0x7F1A5230u: goto label_7F1A5230;
    case 0x7F1A5234u: goto label_7F1A5234;
    case 0x7F1A5238u: goto label_7F1A5238;
    case 0x7F1A523Cu: goto label_7F1A523C;
    case 0x7F1A5240u: goto label_7F1A5240;
    case 0x7F1A5244u: goto label_7F1A5244;
    case 0x7F1A5248u: goto label_7F1A5248;
    case 0x7F1A524Cu: goto label_7F1A524C;
    case 0x7F1A5250u: goto label_7F1A5250;
    case 0x7F1A5254u: goto label_7F1A5254;
    case 0x7F1A5258u: goto label_7F1A5258;
    case 0x7F1A525Cu: goto label_7F1A525C;
    case 0x7F1A5260u: goto label_7F1A5260;
    case 0x7F1A5264u: goto label_7F1A5264;
    case 0x7F1A5268u: goto label_7F1A5268;
    case 0x7F1A526Cu: goto label_7F1A526C;
    case 0x7F1A5270u: goto label_7F1A5270;
    case 0x7F1A5274u: goto label_7F1A5274;
    case 0x7F1A5278u: goto label_7F1A5278;
    case 0x7F1A527Cu: goto label_7F1A527C;
    case 0x7F1A5280u: goto label_7F1A5280;
    case 0x7F1A5284u: goto label_7F1A5284;
    case 0x7F1A5288u: goto label_7F1A5288;
    case 0x7F1A528Cu: goto label_7F1A528C;
    case 0x7F1A5290u: goto label_7F1A5290;
    case 0x7F1A5294u: goto label_7F1A5294;
    case 0x7F1A5298u: goto label_7F1A5298;
    case 0x7F1A529Cu: goto label_7F1A529C;
    case 0x7F1A52A0u: goto label_7F1A52A0;
    case 0x7F1A52A4u: goto label_7F1A52A4;
    case 0x7F1A52A8u: goto label_7F1A52A8;
    case 0x7F1A52ACu: goto label_7F1A52AC;
    case 0x7F1A52B0u: goto label_7F1A52B0;
    case 0x7F1A52B4u: goto label_7F1A52B4;
    case 0x7F1A52B8u: goto label_7F1A52B8;
    case 0x7F1A52BCu: goto label_7F1A52BC;
    case 0x7F1A52C0u: goto label_7F1A52C0;
    case 0x7F1A52C4u: goto label_7F1A52C4;
    case 0x7F1A52C8u: goto label_7F1A52C8;
    case 0x7F1A52CCu: goto label_7F1A52CC;
    case 0x7F1A52D0u: goto label_7F1A52D0;
    case 0x7F1A52D4u: goto label_7F1A52D4;
    case 0x7F1A52D8u: goto label_7F1A52D8;
    case 0x7F1A52DCu: goto label_7F1A52DC;
    case 0x7F1A52E0u: goto label_7F1A52E0;
    case 0x7F1A52E4u: goto label_7F1A52E4;
    case 0x7F1A52E8u: goto label_7F1A52E8;
    case 0x7F1A52ECu: goto label_7F1A52EC;
    case 0x7F1A52F0u: goto label_7F1A52F0;
    case 0x7F1A52F4u: goto label_7F1A52F4;
    case 0x7F1A52F8u: goto label_7F1A52F8;
    case 0x7F1A52FCu: goto label_7F1A52FC;
    case 0x7F1A5300u: goto label_7F1A5300;
    case 0x7F1A5304u: goto label_7F1A5304;
    case 0x7F1A5308u: goto label_7F1A5308;
    case 0x7F1A530Cu: goto label_7F1A530C;
    case 0x7F1A5310u: goto label_7F1A5310;
    case 0x7F1A5314u: goto label_7F1A5314;
    case 0x7F1A5318u: goto label_7F1A5318;
    case 0x7F1A531Cu: goto label_7F1A531C;
    case 0x7F1A5320u: goto label_7F1A5320;
    case 0x7F1A5324u: goto label_7F1A5324;
    case 0x7F1A5328u: goto label_7F1A5328;
    case 0x7F1A532Cu: goto label_7F1A532C;
    case 0x7F1A5330u: goto label_7F1A5330;
    case 0x7F1A5334u: goto label_7F1A5334;
    case 0x7F1A5338u: goto label_7F1A5338;
    case 0x7F1A533Cu: goto label_7F1A533C;
    case 0x7F1A5340u: goto label_7F1A5340;
    case 0x7F1A5344u: goto label_7F1A5344;
    case 0x7F1A5348u: goto label_7F1A5348;
    case 0x7F1A534Cu: goto label_7F1A534C;
    case 0x7F1A5350u: goto label_7F1A5350;
    case 0x7F1A5354u: goto label_7F1A5354;
    case 0x7F1A5358u: goto label_7F1A5358;
    case 0x7F1A535Cu: goto label_7F1A535C;
    case 0x7F1A5360u: goto label_7F1A5360;
    case 0x7F1A5364u: goto label_7F1A5364;
    case 0x7F1A5368u: goto label_7F1A5368;
    case 0x7F1A536Cu: goto label_7F1A536C;
    case 0x7F1A5370u: goto label_7F1A5370;
    case 0x7F1A5374u: goto label_7F1A5374;
    case 0x7F1A5378u: goto label_7F1A5378;
    case 0x7F1A537Cu: goto label_7F1A537C;
    case 0x7F1A5380u: goto label_7F1A5380;
    case 0x7F1A5384u: goto label_7F1A5384;
    case 0x7F1A5388u: goto label_7F1A5388;
    case 0x7F1A538Cu: goto label_7F1A538C;
    case 0x7F1A5390u: goto label_7F1A5390;
    case 0x7F1A5394u: goto label_7F1A5394;
    case 0x7F1A5398u: goto label_7F1A5398;
    case 0x7F1A539Cu: goto label_7F1A539C;
    case 0x7F1A53A0u: goto label_7F1A53A0;
    case 0x7F1A53A4u: goto label_7F1A53A4;
    case 0x7F1A53A8u: goto label_7F1A53A8;
    case 0x7F1A53ACu: goto label_7F1A53AC;
    case 0x7F1A53B0u: goto label_7F1A53B0;
    case 0x7F1A53B4u: goto label_7F1A53B4;
    case 0x7F1A53B8u: goto label_7F1A53B8;
    case 0x7F1A53BCu: goto label_7F1A53BC;
    case 0x7F1A53C0u: goto label_7F1A53C0;
    case 0x7F1A53C4u: goto label_7F1A53C4;
    case 0x7F1A53C8u: goto label_7F1A53C8;
    case 0x7F1A53CCu: goto label_7F1A53CC;
    case 0x7F1A53D0u: goto label_7F1A53D0;
    case 0x7F1A53D4u: goto label_7F1A53D4;
    case 0x7F1A53D8u: goto label_7F1A53D8;
    case 0x7F1A53DCu: goto label_7F1A53DC;
    case 0x7F1A53E0u: goto label_7F1A53E0;
    case 0x7F1A53E4u: goto label_7F1A53E4;
    case 0x7F1A53E8u: goto label_7F1A53E8;
    case 0x7F1A53ECu: goto label_7F1A53EC;
    case 0x7F1A53F0u: goto label_7F1A53F0;
    case 0x7F1A53F4u: goto label_7F1A53F4;
    case 0x7F1A53F8u: goto label_7F1A53F8;
    case 0x7F1A53FCu: goto label_7F1A53FC;
    case 0x7F1A5400u: goto label_7F1A5400;
    case 0x7F1A5404u: goto label_7F1A5404;
    case 0x7F1A5408u: goto label_7F1A5408;
    case 0x7F1A540Cu: goto label_7F1A540C;
    case 0x7F1A5410u: goto label_7F1A5410;
    case 0x7F1A5414u: goto label_7F1A5414;
    case 0x7F1A5418u: goto label_7F1A5418;
    case 0x7F1A541Cu: goto label_7F1A541C;
    case 0x7F1A5420u: goto label_7F1A5420;
    case 0x7F1A5424u: goto label_7F1A5424;
    case 0x7F1A5428u: goto label_7F1A5428;
    case 0x7F1A542Cu: goto label_7F1A542C;
    case 0x7F1A5430u: goto label_7F1A5430;
    case 0x7F1A5434u: goto label_7F1A5434;
    case 0x7F1A5438u: goto label_7F1A5438;
    case 0x7F1A543Cu: goto label_7F1A543C;
    case 0x7F1A5440u: goto label_7F1A5440;
    case 0x7F1A5444u: goto label_7F1A5444;
    case 0x7F1A5448u: goto label_7F1A5448;
    case 0x7F1A544Cu: goto label_7F1A544C;
    case 0x7F1A5450u: goto label_7F1A5450;
    case 0x7F1A5454u: goto label_7F1A5454;
    case 0x7F1A5458u: goto label_7F1A5458;
    case 0x7F1A545Cu: goto label_7F1A545C;
    case 0x7F1A5460u: goto label_7F1A5460;
    case 0x7F1A5464u: goto label_7F1A5464;
    case 0x7F1A5468u: goto label_7F1A5468;
    case 0x7F1A546Cu: goto label_7F1A546C;
    case 0x7F1A5470u: goto label_7F1A5470;
    case 0x7F1A5474u: goto label_7F1A5474;
    case 0x7F1A5478u: goto label_7F1A5478;
    case 0x7F1A547Cu: goto label_7F1A547C;
    case 0x7F1A5480u: goto label_7F1A5480;
    case 0x7F1A5484u: goto label_7F1A5484;
    case 0x7F1A5488u: goto label_7F1A5488;
    case 0x7F1A548Cu: goto label_7F1A548C;
    case 0x7F1A5490u: goto label_7F1A5490;
    case 0x7F1A5494u: goto label_7F1A5494;
    case 0x7F1A5498u: goto label_7F1A5498;
    case 0x7F1A549Cu: goto label_7F1A549C;
    case 0x7F1A54A0u: goto label_7F1A54A0;
    case 0x7F1A54A4u: goto label_7F1A54A4;
    case 0x7F1A54A8u: goto label_7F1A54A8;
    case 0x7F1A54ACu: goto label_7F1A54AC;
    case 0x7F1A54B0u: goto label_7F1A54B0;
    case 0x7F1A54B4u: goto label_7F1A54B4;
    case 0x7F1A54B8u: goto label_7F1A54B8;
    case 0x7F1A54BCu: goto label_7F1A54BC;
    case 0x7F1A54C0u: goto label_7F1A54C0;
    case 0x7F1A54C4u: goto label_7F1A54C4;
    case 0x7F1A54C8u: goto label_7F1A54C8;
    case 0x7F1A54CCu: goto label_7F1A54CC;
    case 0x7F1A54D0u: goto label_7F1A54D0;
    case 0x7F1A54D4u: goto label_7F1A54D4;
    case 0x7F1A54D8u: goto label_7F1A54D8;
    case 0x7F1A54DCu: goto label_7F1A54DC;
    case 0x7F1A54E0u: goto label_7F1A54E0;
    case 0x7F1A54E4u: goto label_7F1A54E4;
    case 0x7F1A54E8u: goto label_7F1A54E8;
    case 0x7F1A54ECu: goto label_7F1A54EC;
    case 0x7F1A54F0u: goto label_7F1A54F0;
    case 0x7F1A54F4u: goto label_7F1A54F4;
    case 0x7F1A54F8u: goto label_7F1A54F8;
    case 0x7F1A54FCu: goto label_7F1A54FC;
    case 0x7F1A5500u: goto label_7F1A5500;
    case 0x7F1A5504u: goto label_7F1A5504;
    case 0x7F1A5508u: goto label_7F1A5508;
    case 0x7F1A550Cu: goto label_7F1A550C;
    case 0x7F1A5510u: goto label_7F1A5510;
    case 0x7F1A5514u: goto label_7F1A5514;
    case 0x7F1A5518u: goto label_7F1A5518;
    case 0x7F1A551Cu: goto label_7F1A551C;
    case 0x7F1A5520u: goto label_7F1A5520;
    case 0x7F1A5524u: goto label_7F1A5524;
    case 0x7F1A5528u: goto label_7F1A5528;
    case 0x7F1A552Cu: goto label_7F1A552C;
    case 0x7F1A5530u: goto label_7F1A5530;
    case 0x7F1A5534u: goto label_7F1A5534;
    case 0x7F1A5538u: goto label_7F1A5538;
    case 0x7F1A553Cu: goto label_7F1A553C;
    case 0x7F1A5540u: goto label_7F1A5540;
    case 0x7F1A5544u: goto label_7F1A5544;
    case 0x7F1A5548u: goto label_7F1A5548;
    case 0x7F1A554Cu: goto label_7F1A554C;
    case 0x7F1A5550u: goto label_7F1A5550;
    case 0x7F1A5554u: goto label_7F1A5554;
    case 0x7F1A5558u: goto label_7F1A5558;
    case 0x7F1A555Cu: goto label_7F1A555C;
    case 0x7F1A5560u: goto label_7F1A5560;
    case 0x7F1A5564u: goto label_7F1A5564;
    case 0x7F1A5568u: goto label_7F1A5568;
    case 0x7F1A556Cu: goto label_7F1A556C;
    case 0x7F1A5570u: goto label_7F1A5570;
    case 0x7F1A5574u: goto label_7F1A5574;
    case 0x7F1A5578u: goto label_7F1A5578;
    case 0x7F1A557Cu: goto label_7F1A557C;
    case 0x7F1A5580u: goto label_7F1A5580;
    case 0x7F1A5584u: goto label_7F1A5584;
    case 0x7F1A5588u: goto label_7F1A5588;
    case 0x7F1A558Cu: goto label_7F1A558C;
    case 0x7F1A5590u: goto label_7F1A5590;
    case 0x7F1A5594u: goto label_7F1A5594;
    case 0x7F1A5598u: goto label_7F1A5598;
    case 0x7F1A559Cu: goto label_7F1A559C;
    case 0x7F1A55A0u: goto label_7F1A55A0;
    case 0x7F1A55A4u: goto label_7F1A55A4;
    case 0x7F1A55A8u: goto label_7F1A55A8;
    case 0x7F1A55ACu: goto label_7F1A55AC;
    case 0x7F1A55B0u: goto label_7F1A55B0;
    case 0x7F1A55B4u: goto label_7F1A55B4;
    case 0x7F1A55B8u: goto label_7F1A55B8;
    case 0x7F1A55BCu: goto label_7F1A55BC;
    case 0x7F1A55C0u: goto label_7F1A55C0;
    case 0x7F1A55C4u: goto label_7F1A55C4;
    case 0x7F1A55C8u: goto label_7F1A55C8;
    case 0x7F1A55CCu: goto label_7F1A55CC;
    case 0x7F1A55D0u: goto label_7F1A55D0;
    case 0x7F1A55D4u: goto label_7F1A55D4;
    case 0x7F1A55D8u: goto label_7F1A55D8;
    case 0x7F1A55DCu: goto label_7F1A55DC;
    case 0x7F1A55E0u: goto label_7F1A55E0;
    case 0x7F1A55E4u: goto label_7F1A55E4;
    case 0x7F1A55E8u: goto label_7F1A55E8;
    case 0x7F1A55ECu: goto label_7F1A55EC;
    case 0x7F1A55F0u: goto label_7F1A55F0;
    case 0x7F1A55F4u: goto label_7F1A55F4;
    case 0x7F1A55F8u: goto label_7F1A55F8;
    case 0x7F1A55FCu: goto label_7F1A55FC;
    case 0x7F1A5600u: goto label_7F1A5600;
    case 0x7F1A5604u: goto label_7F1A5604;
    case 0x7F1A5608u: goto label_7F1A5608;
    case 0x7F1A560Cu: goto label_7F1A560C;
    case 0x7F1A5610u: goto label_7F1A5610;
    case 0x7F1A5614u: goto label_7F1A5614;
    case 0x7F1A5618u: goto label_7F1A5618;
    case 0x7F1A561Cu: goto label_7F1A561C;
    case 0x7F1A5620u: goto label_7F1A5620;
    case 0x7F1A5624u: goto label_7F1A5624;
    case 0x7F1A5628u: goto label_7F1A5628;
    case 0x7F1A562Cu: goto label_7F1A562C;
    case 0x7F1A5630u: goto label_7F1A5630;
    case 0x7F1A5634u: goto label_7F1A5634;
    case 0x7F1A5638u: goto label_7F1A5638;
    case 0x7F1A563Cu: goto label_7F1A563C;
    case 0x7F1A5640u: goto label_7F1A5640;
    case 0x7F1A5644u: goto label_7F1A5644;
    case 0x7F1A5648u: goto label_7F1A5648;
    case 0x7F1A564Cu: goto label_7F1A564C;
    case 0x7F1A5650u: goto label_7F1A5650;
    case 0x7F1A5654u: goto label_7F1A5654;
    case 0x7F1A5658u: goto label_7F1A5658;
    case 0x7F1A565Cu: goto label_7F1A565C;
    case 0x7F1A5660u: goto label_7F1A5660;
    case 0x7F1A5664u: goto label_7F1A5664;
    case 0x7F1A5668u: goto label_7F1A5668;
    case 0x7F1A566Cu: goto label_7F1A566C;
    case 0x7F1A5670u: goto label_7F1A5670;
    case 0x7F1A5674u: goto label_7F1A5674;
    case 0x7F1A5678u: goto label_7F1A5678;
    case 0x7F1A567Cu: goto label_7F1A567C;
    case 0x7F1A5680u: goto label_7F1A5680;
    case 0x7F1A5684u: goto label_7F1A5684;
    case 0x7F1A5688u: goto label_7F1A5688;
    case 0x7F1A568Cu: goto label_7F1A568C;
    case 0x7F1A5690u: goto label_7F1A5690;
    case 0x7F1A5694u: goto label_7F1A5694;
    case 0x7F1A5698u: goto label_7F1A5698;
    case 0x7F1A569Cu: goto label_7F1A569C;
    case 0x7F1A56A0u: goto label_7F1A56A0;
    case 0x7F1A56A4u: goto label_7F1A56A4;
    case 0x7F1A56A8u: goto label_7F1A56A8;
    case 0x7F1A56ACu: goto label_7F1A56AC;
    case 0x7F1A56B0u: goto label_7F1A56B0;
    case 0x7F1A56B4u: goto label_7F1A56B4;
    case 0x7F1A56B8u: goto label_7F1A56B8;
    case 0x7F1A56BCu: goto label_7F1A56BC;
    case 0x7F1A56C0u: goto label_7F1A56C0;
    case 0x7F1A56C4u: goto label_7F1A56C4;
    case 0x7F1A56C8u: goto label_7F1A56C8;
    case 0x7F1A56CCu: goto label_7F1A56CC;
    case 0x7F1A56D0u: goto label_7F1A56D0;
    case 0x7F1A56D4u: goto label_7F1A56D4;
    case 0x7F1A56D8u: goto label_7F1A56D8;
    case 0x7F1A56DCu: goto label_7F1A56DC;
    case 0x7F1A56E0u: goto label_7F1A56E0;
    case 0x7F1A56E4u: goto label_7F1A56E4;
    case 0x7F1A56E8u: goto label_7F1A56E8;
    case 0x7F1A56ECu: goto label_7F1A56EC;
    case 0x7F1A56F0u: goto label_7F1A56F0;
    case 0x7F1A56F4u: goto label_7F1A56F4;
    case 0x7F1A56F8u: goto label_7F1A56F8;
    case 0x7F1A56FCu: goto label_7F1A56FC;
    case 0x7F1A5700u: goto label_7F1A5700;
    case 0x7F1A5704u: goto label_7F1A5704;
    case 0x7F1A5708u: goto label_7F1A5708;
    case 0x7F1A570Cu: goto label_7F1A570C;
    case 0x7F1A5710u: goto label_7F1A5710;
    case 0x7F1A5714u: goto label_7F1A5714;
    case 0x7F1A5718u: goto label_7F1A5718;
    case 0x7F1A571Cu: goto label_7F1A571C;
    case 0x7F1A5720u: goto label_7F1A5720;
    case 0x7F1A5724u: goto label_7F1A5724;
    case 0x7F1A5728u: goto label_7F1A5728;
    case 0x7F1A572Cu: goto label_7F1A572C;
    case 0x7F1A5730u: goto label_7F1A5730;
    case 0x7F1A5734u: goto label_7F1A5734;
    case 0x7F1A5738u: goto label_7F1A5738;
    case 0x7F1A573Cu: goto label_7F1A573C;
    case 0x7F1A5740u: goto label_7F1A5740;
    case 0x7F1A5744u: goto label_7F1A5744;
    case 0x7F1A5748u: goto label_7F1A5748;
    case 0x7F1A574Cu: goto label_7F1A574C;
    case 0x7F1A5750u: goto label_7F1A5750;
    case 0x7F1A5754u: goto label_7F1A5754;
    case 0x7F1A5758u: goto label_7F1A5758;
    case 0x7F1A575Cu: goto label_7F1A575C;
    case 0x7F1A5760u: goto label_7F1A5760;
    case 0x7F1A5764u: goto label_7F1A5764;
    case 0x7F1A5768u: goto label_7F1A5768;
    case 0x7F1A576Cu: goto label_7F1A576C;
    case 0x7F1A5770u: goto label_7F1A5770;
    case 0x7F1A5774u: goto label_7F1A5774;
    case 0x7F1A5778u: goto label_7F1A5778;
    case 0x7F1A577Cu: goto label_7F1A577C;
    case 0x7F1A5780u: goto label_7F1A5780;
    case 0x7F1A5784u: goto label_7F1A5784;
    case 0x7F1A5788u: goto label_7F1A5788;
    case 0x7F1A578Cu: goto label_7F1A578C;
    case 0x7F1A5790u: goto label_7F1A5790;
    case 0x7F1A5794u: goto label_7F1A5794;
    case 0x7F1A5798u: goto label_7F1A5798;
    case 0x7F1A579Cu: goto label_7F1A579C;
    case 0x7F1A57A0u: goto label_7F1A57A0;
    case 0x7F1A57A4u: goto label_7F1A57A4;
    case 0x7F1A57A8u: goto label_7F1A57A8;
    case 0x7F1A57ACu: goto label_7F1A57AC;
    case 0x7F1A57B0u: goto label_7F1A57B0;
    case 0x7F1A57B4u: goto label_7F1A57B4;
    case 0x7F1A57B8u: goto label_7F1A57B8;
    case 0x7F1A57BCu: goto label_7F1A57BC;
    case 0x7F1A57C0u: goto label_7F1A57C0;
    case 0x7F1A57C4u: goto label_7F1A57C4;
    case 0x7F1A57C8u: goto label_7F1A57C8;
    case 0x7F1A57CCu: goto label_7F1A57CC;
    case 0x7F1A57D0u: goto label_7F1A57D0;
    case 0x7F1A57D4u: goto label_7F1A57D4;
    case 0x7F1A57D8u: goto label_7F1A57D8;
    case 0x7F1A57DCu: goto label_7F1A57DC;
    case 0x7F1A57E0u: goto label_7F1A57E0;
    case 0x7F1A57E4u: goto label_7F1A57E4;
    case 0x7F1A57E8u: goto label_7F1A57E8;
    case 0x7F1A57ECu: goto label_7F1A57EC;
    case 0x7F1A57F0u: goto label_7F1A57F0;
    case 0x7F1A57F4u: goto label_7F1A57F4;
    case 0x7F1A57F8u: goto label_7F1A57F8;
    case 0x7F1A57FCu: goto label_7F1A57FC;
    case 0x7F1A5800u: goto label_7F1A5800;
    case 0x7F1A5804u: goto label_7F1A5804;
    case 0x7F1A5808u: goto label_7F1A5808;
    case 0x7F1A580Cu: goto label_7F1A580C;
    case 0x7F1A5810u: goto label_7F1A5810;
    case 0x7F1A5814u: goto label_7F1A5814;
    case 0x7F1A5818u: goto label_7F1A5818;
    case 0x7F1A581Cu: goto label_7F1A581C;
    case 0x7F1A5820u: goto label_7F1A5820;
    case 0x7F1A5824u: goto label_7F1A5824;
    case 0x7F1A5828u: goto label_7F1A5828;
    case 0x7F1A582Cu: goto label_7F1A582C;
    case 0x7F1A5830u: goto label_7F1A5830;
    case 0x7F1A5834u: goto label_7F1A5834;
    case 0x7F1A5838u: goto label_7F1A5838;
    case 0x7F1A583Cu: goto label_7F1A583C;
    case 0x7F1A5840u: goto label_7F1A5840;
    case 0x7F1A5844u: goto label_7F1A5844;
    case 0x7F1A5848u: goto label_7F1A5848;
    case 0x7F1A584Cu: goto label_7F1A584C;
    case 0x7F1A5850u: goto label_7F1A5850;
    case 0x7F1A5854u: goto label_7F1A5854;
    case 0x7F1A5858u: goto label_7F1A5858;
    case 0x7F1A585Cu: goto label_7F1A585C;
    case 0x7F1A5860u: goto label_7F1A5860;
    case 0x7F1A5864u: goto label_7F1A5864;
    case 0x7F1A5868u: goto label_7F1A5868;
    case 0x7F1A586Cu: goto label_7F1A586C;
    case 0x7F1A5870u: goto label_7F1A5870;
    case 0x7F1A5874u: goto label_7F1A5874;
    case 0x7F1A5878u: goto label_7F1A5878;
    case 0x7F1A587Cu: goto label_7F1A587C;
    case 0x7F1A5880u: goto label_7F1A5880;
    case 0x7F1A5884u: goto label_7F1A5884;
    case 0x7F1A5888u: goto label_7F1A5888;
    case 0x7F1A588Cu: goto label_7F1A588C;
    case 0x7F1A5890u: goto label_7F1A5890;
    case 0x7F1A5894u: goto label_7F1A5894;
    case 0x7F1A5898u: goto label_7F1A5898;
    case 0x7F1A589Cu: goto label_7F1A589C;
    case 0x7F1A58A0u: goto label_7F1A58A0;
    case 0x7F1A58A4u: goto label_7F1A58A4;
    case 0x7F1A58A8u: goto label_7F1A58A8;
    case 0x7F1A58ACu: goto label_7F1A58AC;
    case 0x7F1A58B0u: goto label_7F1A58B0;
    case 0x7F1A58B4u: goto label_7F1A58B4;
    case 0x7F1A58B8u: goto label_7F1A58B8;
    case 0x7F1A58BCu: goto label_7F1A58BC;
    case 0x7F1A58C0u: goto label_7F1A58C0;
    case 0x7F1A58C4u: goto label_7F1A58C4;
    case 0x7F1A58C8u: goto label_7F1A58C8;
    case 0x7F1A58CCu: goto label_7F1A58CC;
    case 0x7F1A58D0u: goto label_7F1A58D0;
    case 0x7F1A58D4u: goto label_7F1A58D4;
    case 0x7F1A58D8u: goto label_7F1A58D8;
    case 0x7F1A58DCu: goto label_7F1A58DC;
    case 0x7F1A58E0u: goto label_7F1A58E0;
    case 0x7F1A58E4u: goto label_7F1A58E4;
    case 0x7F1A58E8u: goto label_7F1A58E8;
    case 0x7F1A58ECu: goto label_7F1A58EC;
    case 0x7F1A58F0u: goto label_7F1A58F0;
    case 0x7F1A58F4u: goto label_7F1A58F4;
    case 0x7F1A58F8u: goto label_7F1A58F8;
    case 0x7F1A58FCu: goto label_7F1A58FC;
    case 0x7F1A5900u: goto label_7F1A5900;
    case 0x7F1A5904u: goto label_7F1A5904;
    case 0x7F1A5908u: goto label_7F1A5908;
    case 0x7F1A590Cu: goto label_7F1A590C;
    case 0x7F1A5910u: goto label_7F1A5910;
    case 0x7F1A5914u: goto label_7F1A5914;
    case 0x7F1A5918u: goto label_7F1A5918;
    case 0x7F1A591Cu: goto label_7F1A591C;
    case 0x7F1A5920u: goto label_7F1A5920;
    case 0x7F1A5924u: goto label_7F1A5924;
    case 0x7F1A5928u: goto label_7F1A5928;
    case 0x7F1A592Cu: goto label_7F1A592C;
    case 0x7F1A5930u: goto label_7F1A5930;
    case 0x7F1A5934u: goto label_7F1A5934;
    case 0x7F1A5938u: goto label_7F1A5938;
    case 0x7F1A593Cu: goto label_7F1A593C;
    case 0x7F1A5940u: goto label_7F1A5940;
    case 0x7F1A5944u: goto label_7F1A5944;
    case 0x7F1A5948u: goto label_7F1A5948;
    case 0x7F1A594Cu: goto label_7F1A594C;
    case 0x7F1A5950u: goto label_7F1A5950;
    case 0x7F1A5954u: goto label_7F1A5954;
    case 0x7F1A5958u: goto label_7F1A5958;
    case 0x7F1A595Cu: goto label_7F1A595C;
    case 0x7F1A5960u: goto label_7F1A5960;
    case 0x7F1A5964u: goto label_7F1A5964;
    case 0x7F1A5968u: goto label_7F1A5968;
    case 0x7F1A596Cu: goto label_7F1A596C;
    case 0x7F1A5970u: goto label_7F1A5970;
    case 0x7F1A5974u: goto label_7F1A5974;
    case 0x7F1A5978u: goto label_7F1A5978;
    case 0x7F1A597Cu: goto label_7F1A597C;
    case 0x7F1A5980u: goto label_7F1A5980;
    case 0x7F1A5984u: goto label_7F1A5984;
    case 0x7F1A5988u: goto label_7F1A5988;
    case 0x7F1A598Cu: goto label_7F1A598C;
    case 0x7F1A5990u: goto label_7F1A5990;
    case 0x7F1A5994u: goto label_7F1A5994;
    case 0x7F1A5998u: goto label_7F1A5998;
    case 0x7F1A599Cu: goto label_7F1A599C;
    case 0x7F1A59A0u: goto label_7F1A59A0;
    case 0x7F1A59A4u: goto label_7F1A59A4;
    case 0x7F1A59A8u: goto label_7F1A59A8;
    case 0x7F1A59ACu: goto label_7F1A59AC;
    case 0x7F1A59B0u: goto label_7F1A59B0;
    case 0x7F1A59B4u: goto label_7F1A59B4;
    case 0x7F1A59B8u: goto label_7F1A59B8;
    case 0x7F1A59BCu: goto label_7F1A59BC;
    case 0x7F1A59C0u: goto label_7F1A59C0;
    case 0x7F1A59C4u: goto label_7F1A59C4;
    case 0x7F1A59C8u: goto label_7F1A59C8;
    case 0x7F1A59CCu: goto label_7F1A59CC;
    case 0x7F1A59D0u: goto label_7F1A59D0;
    case 0x7F1A59D4u: goto label_7F1A59D4;
    case 0x7F1A59D8u: goto label_7F1A59D8;
    case 0x7F1A59DCu: goto label_7F1A59DC;
    case 0x7F1A59E0u: goto label_7F1A59E0;
    case 0x7F1A59E4u: goto label_7F1A59E4;
    case 0x7F1A59E8u: goto label_7F1A59E8;
    case 0x7F1A59ECu: goto label_7F1A59EC;
    case 0x7F1A59F0u: goto label_7F1A59F0;
    case 0x7F1A59F4u: goto label_7F1A59F4;
    case 0x7F1A59F8u: goto label_7F1A59F8;
    case 0x7F1A59FCu: goto label_7F1A59FC;
    case 0x7F1A5A00u: goto label_7F1A5A00;
    case 0x7F1A5A04u: goto label_7F1A5A04;
    case 0x7F1A5A08u: goto label_7F1A5A08;
    case 0x7F1A5A0Cu: goto label_7F1A5A0C;
    case 0x7F1A5A10u: goto label_7F1A5A10;
    case 0x7F1A5A14u: goto label_7F1A5A14;
    case 0x7F1A5A18u: goto label_7F1A5A18;
    case 0x7F1A5A1Cu: goto label_7F1A5A1C;
    case 0x7F1A5A20u: goto label_7F1A5A20;
    case 0x7F1A5A24u: goto label_7F1A5A24;
    case 0x7F1A5A28u: goto label_7F1A5A28;
    case 0x7F1A5A2Cu: goto label_7F1A5A2C;
    case 0x7F1A5A30u: goto label_7F1A5A30;
    case 0x7F1A5A34u: goto label_7F1A5A34;
    case 0x7F1A5A38u: goto label_7F1A5A38;
    case 0x7F1A5A3Cu: goto label_7F1A5A3C;
    case 0x7F1A5A40u: goto label_7F1A5A40;
    case 0x7F1A5A44u: goto label_7F1A5A44;
    case 0x7F1A5A48u: goto label_7F1A5A48;
    case 0x7F1A5A4Cu: goto label_7F1A5A4C;
    case 0x7F1A5A50u: goto label_7F1A5A50;
    case 0x7F1A5A54u: goto label_7F1A5A54;
    case 0x7F1A5A58u: goto label_7F1A5A58;
    case 0x7F1A5A5Cu: goto label_7F1A5A5C;
    case 0x7F1A5A60u: goto label_7F1A5A60;
    case 0x7F1A5A64u: goto label_7F1A5A64;
    case 0x7F1A5A68u: goto label_7F1A5A68;
    case 0x7F1A5A6Cu: goto label_7F1A5A6C;
    case 0x7F1A5A70u: goto label_7F1A5A70;
    case 0x7F1A5A74u: goto label_7F1A5A74;
    case 0x7F1A5A78u: goto label_7F1A5A78;
    case 0x7F1A5A7Cu: goto label_7F1A5A7C;
    case 0x7F1A5A80u: goto label_7F1A5A80;
    case 0x7F1A5A84u: goto label_7F1A5A84;
    case 0x7F1A5A88u: goto label_7F1A5A88;
    case 0x7F1A5A8Cu: goto label_7F1A5A8C;
    case 0x7F1A5A90u: goto label_7F1A5A90;
    case 0x7F1A5A94u: goto label_7F1A5A94;
    case 0x7F1A5A98u: goto label_7F1A5A98;
    case 0x7F1A5A9Cu: goto label_7F1A5A9C;
    case 0x7F1A5AA0u: goto label_7F1A5AA0;
    case 0x7F1A5AA4u: goto label_7F1A5AA4;
    case 0x7F1A5AA8u: goto label_7F1A5AA8;
    case 0x7F1A5AACu: goto label_7F1A5AAC;
    case 0x7F1A5AB0u: goto label_7F1A5AB0;
    case 0x7F1A5AB4u: goto label_7F1A5AB4;
    case 0x7F1A5AB8u: goto label_7F1A5AB8;
    case 0x7F1A5ABCu: goto label_7F1A5ABC;
    case 0x7F1A5AC0u: goto label_7F1A5AC0;
    case 0x7F1A5AC4u: goto label_7F1A5AC4;
    case 0x7F1A5AC8u: goto label_7F1A5AC8;
    case 0x7F1A5ACCu: goto label_7F1A5ACC;
    case 0x7F1A5AD0u: goto label_7F1A5AD0;
    case 0x7F1A5AD4u: goto label_7F1A5AD4;
    case 0x7F1A5AD8u: goto label_7F1A5AD8;
    case 0x7F1A5ADCu: goto label_7F1A5ADC;
    case 0x7F1A5AE0u: goto label_7F1A5AE0;
    case 0x7F1A5AE4u: goto label_7F1A5AE4;
    case 0x7F1A5AE8u: goto label_7F1A5AE8;
    case 0x7F1A5AECu: goto label_7F1A5AEC;
    case 0x7F1A5AF0u: goto label_7F1A5AF0;
    case 0x7F1A5AF4u: goto label_7F1A5AF4;
    case 0x7F1A5AF8u: goto label_7F1A5AF8;
    case 0x7F1A5AFCu: goto label_7F1A5AFC;
    case 0x7F1A5B00u: goto label_7F1A5B00;
    case 0x7F1A5B04u: goto label_7F1A5B04;
    case 0x7F1A5B08u: goto label_7F1A5B08;
    case 0x7F1A5B0Cu: goto label_7F1A5B0C;
    case 0x7F1A5B10u: goto label_7F1A5B10;
    case 0x7F1A5B14u: goto label_7F1A5B14;
    case 0x7F1A5B18u: goto label_7F1A5B18;
    case 0x7F1A5B1Cu: goto label_7F1A5B1C;
    case 0x7F1A5B20u: goto label_7F1A5B20;
    case 0x7F1A5B24u: goto label_7F1A5B24;
    case 0x7F1A5B28u: goto label_7F1A5B28;
    case 0x7F1A5B2Cu: goto label_7F1A5B2C;
    case 0x7F1A5B30u: goto label_7F1A5B30;
    case 0x7F1A5B34u: goto label_7F1A5B34;
    case 0x7F1A5B38u: goto label_7F1A5B38;
    case 0x7F1A5B3Cu: goto label_7F1A5B3C;
    case 0x7F1A5B40u: goto label_7F1A5B40;
    case 0x7F1A5B44u: goto label_7F1A5B44;
    case 0x7F1A5B48u: goto label_7F1A5B48;
    case 0x7F1A5B4Cu: goto label_7F1A5B4C;
    case 0x7F1A5B50u: goto label_7F1A5B50;
    case 0x7F1A5B54u: goto label_7F1A5B54;
    case 0x7F1A5B58u: goto label_7F1A5B58;
    case 0x7F1A5B5Cu: goto label_7F1A5B5C;
    case 0x7F1A5B60u: goto label_7F1A5B60;
    case 0x7F1A5B64u: goto label_7F1A5B64;
    case 0x7F1A5B68u: goto label_7F1A5B68;
    case 0x7F1A5B6Cu: goto label_7F1A5B6C;
    case 0x7F1A5B70u: goto label_7F1A5B70;
    case 0x7F1A5B74u: goto label_7F1A5B74;
    case 0x7F1A5B78u: goto label_7F1A5B78;
    case 0x7F1A5B7Cu: goto label_7F1A5B7C;
    case 0x7F1A5B80u: goto label_7F1A5B80;
    case 0x7F1A5B84u: goto label_7F1A5B84;
    case 0x7F1A5B88u: goto label_7F1A5B88;
    case 0x7F1A5B8Cu: goto label_7F1A5B8C;
    case 0x7F1A5B90u: goto label_7F1A5B90;
    case 0x7F1A5B94u: goto label_7F1A5B94;
    case 0x7F1A5B98u: goto label_7F1A5B98;
    case 0x7F1A5B9Cu: goto label_7F1A5B9C;
    case 0x7F1A5BA0u: goto label_7F1A5BA0;
    case 0x7F1A5BA4u: goto label_7F1A5BA4;
    case 0x7F1A5BA8u: goto label_7F1A5BA8;
    case 0x7F1A5BACu: goto label_7F1A5BAC;
    case 0x7F1A5BB0u: goto label_7F1A5BB0;
    case 0x7F1A5BB4u: goto label_7F1A5BB4;
    case 0x7F1A5BB8u: goto label_7F1A5BB8;
    case 0x7F1A5BBCu: goto label_7F1A5BBC;
    case 0x7F1A5BC0u: goto label_7F1A5BC0;
    case 0x7F1A5BC4u: goto label_7F1A5BC4;
    case 0x7F1A5BC8u: goto label_7F1A5BC8;
    case 0x7F1A5BCCu: goto label_7F1A5BCC;
    case 0x7F1A5BD0u: goto label_7F1A5BD0;
    case 0x7F1A5BD4u: goto label_7F1A5BD4;
    case 0x7F1A5BD8u: goto label_7F1A5BD8;
    case 0x7F1A5BDCu: goto label_7F1A5BDC;
    case 0x7F1A5BE0u: goto label_7F1A5BE0;
    case 0x7F1A5BE4u: goto label_7F1A5BE4;
    case 0x7F1A5BE8u: goto label_7F1A5BE8;
    case 0x7F1A5BECu: goto label_7F1A5BEC;
    case 0x7F1A5BF0u: goto label_7F1A5BF0;
    case 0x7F1A5BF4u: goto label_7F1A5BF4;
    case 0x7F1A5BF8u: goto label_7F1A5BF8;
    case 0x7F1A5BFCu: goto label_7F1A5BFC;
    case 0x7F1A5C00u: goto label_7F1A5C00;
    case 0x7F1A5C04u: goto label_7F1A5C04;
    case 0x7F1A5C08u: goto label_7F1A5C08;
    case 0x7F1A5C0Cu: goto label_7F1A5C0C;
    case 0x7F1A5C10u: goto label_7F1A5C10;
    case 0x7F1A5C14u: goto label_7F1A5C14;
    case 0x7F1A5C18u: goto label_7F1A5C18;
    case 0x7F1A5C1Cu: goto label_7F1A5C1C;
    case 0x7F1A5C20u: goto label_7F1A5C20;
    case 0x7F1A5C24u: goto label_7F1A5C24;
    case 0x7F1A5C28u: goto label_7F1A5C28;
    case 0x7F1A5C2Cu: goto label_7F1A5C2C;
    case 0x7F1A5C30u: goto label_7F1A5C30;
    case 0x7F1A5C34u: goto label_7F1A5C34;
    case 0x7F1A5C38u: goto label_7F1A5C38;
    case 0x7F1A5C3Cu: goto label_7F1A5C3C;
    case 0x7F1A5C40u: goto label_7F1A5C40;
    case 0x7F1A5C44u: goto label_7F1A5C44;
    case 0x7F1A5C48u: goto label_7F1A5C48;
    case 0x7F1A5C4Cu: goto label_7F1A5C4C;
    case 0x7F1A5C50u: goto label_7F1A5C50;
    case 0x7F1A5C54u: goto label_7F1A5C54;
    case 0x7F1A5C58u: goto label_7F1A5C58;
    case 0x7F1A5C5Cu: goto label_7F1A5C5C;
    case 0x7F1A5C60u: goto label_7F1A5C60;
    case 0x7F1A5C64u: goto label_7F1A5C64;
    case 0x7F1A5C68u: goto label_7F1A5C68;
    case 0x7F1A5C6Cu: goto label_7F1A5C6C;
    case 0x7F1A5C70u: goto label_7F1A5C70;
    case 0x7F1A5C74u: goto label_7F1A5C74;
    case 0x7F1A5C78u: goto label_7F1A5C78;
    case 0x7F1A5C7Cu: goto label_7F1A5C7C;
    case 0x7F1A5C80u: goto label_7F1A5C80;
    case 0x7F1A5C84u: goto label_7F1A5C84;
    case 0x7F1A5C88u: goto label_7F1A5C88;
    case 0x7F1A5C8Cu: goto label_7F1A5C8C;
    case 0x7F1A5C90u: goto label_7F1A5C90;
    case 0x7F1A5C94u: goto label_7F1A5C94;
    case 0x7F1A5C98u: goto label_7F1A5C98;
    case 0x7F1A5C9Cu: goto label_7F1A5C9C;
    case 0x7F1A5CA0u: goto label_7F1A5CA0;
    case 0x7F1A5CA4u: goto label_7F1A5CA4;
    case 0x7F1A5CA8u: goto label_7F1A5CA8;
    case 0x7F1A5CACu: goto label_7F1A5CAC;
    case 0x7F1A5CB0u: goto label_7F1A5CB0;
    case 0x7F1A5CB4u: goto label_7F1A5CB4;
    case 0x7F1A5CB8u: goto label_7F1A5CB8;
    case 0x7F1A5CBCu: goto label_7F1A5CBC;
    case 0x7F1A5CC0u: goto label_7F1A5CC0;
    case 0x7F1A5CC4u: goto label_7F1A5CC4;
    case 0x7F1A5CC8u: goto label_7F1A5CC8;
    case 0x7F1A5CCCu: goto label_7F1A5CCC;
    case 0x7F1A5CD0u: goto label_7F1A5CD0;
    case 0x7F1A5CD4u: goto label_7F1A5CD4;
    case 0x7F1A5CD8u: goto label_7F1A5CD8;
    case 0x7F1A5CDCu: goto label_7F1A5CDC;
    case 0x7F1A5CE0u: goto label_7F1A5CE0;
    case 0x7F1A5CE4u: goto label_7F1A5CE4;
    case 0x7F1A5CE8u: goto label_7F1A5CE8;
    case 0x7F1A5CECu: goto label_7F1A5CEC;
    case 0x7F1A5CF0u: goto label_7F1A5CF0;
    case 0x7F1A5CF4u: goto label_7F1A5CF4;
    case 0x7F1A5CF8u: goto label_7F1A5CF8;
    case 0x7F1A5CFCu: goto label_7F1A5CFC;
    case 0x7F1A5D00u: goto label_7F1A5D00;
    case 0x7F1A5D04u: goto label_7F1A5D04;
    case 0x7F1A5D08u: goto label_7F1A5D08;
    case 0x7F1A5D0Cu: goto label_7F1A5D0C;
    case 0x7F1A5D10u: goto label_7F1A5D10;
    case 0x7F1A5D14u: goto label_7F1A5D14;
    case 0x7F1A5D18u: goto label_7F1A5D18;
    case 0x7F1A5D1Cu: goto label_7F1A5D1C;
    case 0x7F1A5D20u: goto label_7F1A5D20;
    case 0x7F1A5D24u: goto label_7F1A5D24;
    case 0x7F1A5D28u: goto label_7F1A5D28;
    case 0x7F1A5D2Cu: goto label_7F1A5D2C;
    case 0x7F1A5D30u: goto label_7F1A5D30;
    case 0x7F1A5D34u: goto label_7F1A5D34;
    case 0x7F1A5D38u: goto label_7F1A5D38;
    case 0x7F1A5D3Cu: goto label_7F1A5D3C;
    case 0x7F1A5D40u: goto label_7F1A5D40;
    case 0x7F1A5D44u: goto label_7F1A5D44;
    case 0x7F1A5D48u: goto label_7F1A5D48;
    case 0x7F1A5D4Cu: goto label_7F1A5D4C;
    case 0x7F1A5D50u: goto label_7F1A5D50;
    case 0x7F1A5D54u: goto label_7F1A5D54;
    case 0x7F1A5D58u: goto label_7F1A5D58;
    case 0x7F1A5D5Cu: goto label_7F1A5D5C;
    case 0x7F1A5D60u: goto label_7F1A5D60;
    case 0x7F1A5D64u: goto label_7F1A5D64;
    case 0x7F1A5D68u: goto label_7F1A5D68;
    case 0x7F1A5D6Cu: goto label_7F1A5D6C;
    case 0x7F1A5D70u: goto label_7F1A5D70;
    case 0x7F1A5D74u: goto label_7F1A5D74;
    case 0x7F1A5D78u: goto label_7F1A5D78;
    case 0x7F1A5D7Cu: goto label_7F1A5D7C;
    case 0x7F1A5D80u: goto label_7F1A5D80;
    case 0x7F1A5D84u: goto label_7F1A5D84;
    case 0x7F1A5D88u: goto label_7F1A5D88;
    case 0x7F1A5D8Cu: goto label_7F1A5D8C;
    case 0x7F1A5D90u: goto label_7F1A5D90;
    case 0x7F1A5D94u: goto label_7F1A5D94;
    case 0x7F1A5D98u: goto label_7F1A5D98;
    case 0x7F1A5D9Cu: goto label_7F1A5D9C;
    case 0x7F1A5DA0u: goto label_7F1A5DA0;
    case 0x7F1A5DA4u: goto label_7F1A5DA4;
    case 0x7F1A5DA8u: goto label_7F1A5DA8;
    case 0x7F1A5DACu: goto label_7F1A5DAC;
    case 0x7F1A5DB0u: goto label_7F1A5DB0;
    case 0x7F1A5DB4u: goto label_7F1A5DB4;
    case 0x7F1A5DB8u: goto label_7F1A5DB8;
    case 0x7F1A5DBCu: goto label_7F1A5DBC;
    case 0x7F1A5DC0u: goto label_7F1A5DC0;
    case 0x7F1A5DC4u: goto label_7F1A5DC4;
    case 0x7F1A5DC8u: goto label_7F1A5DC8;
    case 0x7F1A5DCCu: goto label_7F1A5DCC;
    case 0x7F1A5DD0u: goto label_7F1A5DD0;
    case 0x7F1A5DD4u: goto label_7F1A5DD4;
    case 0x7F1A5DD8u: goto label_7F1A5DD8;
    case 0x7F1A5DDCu: goto label_7F1A5DDC;
    case 0x7F1A5DE0u: goto label_7F1A5DE0;
    case 0x7F1A5DE4u: goto label_7F1A5DE4;
    case 0x7F1A5DE8u: goto label_7F1A5DE8;
    case 0x7F1A5DECu: goto label_7F1A5DEC;
    case 0x7F1A5DF0u: goto label_7F1A5DF0;
    case 0x7F1A5DF4u: goto label_7F1A5DF4;
    case 0x7F1A5DF8u: goto label_7F1A5DF8;
    case 0x7F1A5DFCu: goto label_7F1A5DFC;
    case 0x7F1A5E00u: goto label_7F1A5E00;
    case 0x7F1A5E04u: goto label_7F1A5E04;
    case 0x7F1A5E08u: goto label_7F1A5E08;
    case 0x7F1A5E0Cu: goto label_7F1A5E0C;
    case 0x7F1A5E10u: goto label_7F1A5E10;
    case 0x7F1A5E14u: goto label_7F1A5E14;
    case 0x7F1A5E18u: goto label_7F1A5E18;
    case 0x7F1A5E1Cu: goto label_7F1A5E1C;
    case 0x7F1A5E20u: goto label_7F1A5E20;
    case 0x7F1A5E24u: goto label_7F1A5E24;
    case 0x7F1A5E28u: goto label_7F1A5E28;
    case 0x7F1A5E2Cu: goto label_7F1A5E2C;
    case 0x7F1A5E30u: goto label_7F1A5E30;
    case 0x7F1A5E34u: goto label_7F1A5E34;
    case 0x7F1A5E38u: goto label_7F1A5E38;
    case 0x7F1A5E3Cu: goto label_7F1A5E3C;
    case 0x7F1A5E40u: goto label_7F1A5E40;
    case 0x7F1A5E44u: goto label_7F1A5E44;
    case 0x7F1A5E48u: goto label_7F1A5E48;
    case 0x7F1A5E4Cu: goto label_7F1A5E4C;
    case 0x7F1A5E50u: goto label_7F1A5E50;
    case 0x7F1A5E54u: goto label_7F1A5E54;
    case 0x7F1A5E58u: goto label_7F1A5E58;
    case 0x7F1A5E5Cu: goto label_7F1A5E5C;
    case 0x7F1A5E60u: goto label_7F1A5E60;
    case 0x7F1A5E64u: goto label_7F1A5E64;
    case 0x7F1A5E68u: goto label_7F1A5E68;
    case 0x7F1A5E6Cu: goto label_7F1A5E6C;
    case 0x7F1A5E70u: goto label_7F1A5E70;
    case 0x7F1A5E74u: goto label_7F1A5E74;
    case 0x7F1A5E78u: goto label_7F1A5E78;
    case 0x7F1A5E7Cu: goto label_7F1A5E7C;
    case 0x7F1A5E80u: goto label_7F1A5E80;
    case 0x7F1A5E84u: goto label_7F1A5E84;
    case 0x7F1A5E88u: goto label_7F1A5E88;
    case 0x7F1A5E8Cu: goto label_7F1A5E8C;
    case 0x7F1A5E90u: goto label_7F1A5E90;
    case 0x7F1A5E94u: goto label_7F1A5E94;
    case 0x7F1A5E98u: goto label_7F1A5E98;
    case 0x7F1A5E9Cu: goto label_7F1A5E9C;
    case 0x7F1A5EA0u: goto label_7F1A5EA0;
    case 0x7F1A5EA4u: goto label_7F1A5EA4;
    case 0x7F1A5EA8u: goto label_7F1A5EA8;
    case 0x7F1A5EACu: goto label_7F1A5EAC;
    case 0x7F1A5EB0u: goto label_7F1A5EB0;
    case 0x7F1A5EB4u: goto label_7F1A5EB4;
    case 0x7F1A5EB8u: goto label_7F1A5EB8;
    case 0x7F1A5EBCu: goto label_7F1A5EBC;
    case 0x7F1A5EC0u: goto label_7F1A5EC0;
    case 0x7F1A5EC4u: goto label_7F1A5EC4;
    case 0x7F1A5EC8u: goto label_7F1A5EC8;
    case 0x7F1A5ECCu: goto label_7F1A5ECC;
    case 0x7F1A5ED0u: goto label_7F1A5ED0;
    case 0x7F1A5ED4u: goto label_7F1A5ED4;
    case 0x7F1A5ED8u: goto label_7F1A5ED8;
    case 0x7F1A5EDCu: goto label_7F1A5EDC;
    case 0x7F1A5EE0u: goto label_7F1A5EE0;
    case 0x7F1A5EE4u: goto label_7F1A5EE4;
    case 0x7F1A5EE8u: goto label_7F1A5EE8;
    case 0x7F1A5EECu: goto label_7F1A5EEC;
    case 0x7F1A5EF0u: goto label_7F1A5EF0;
    case 0x7F1A5EF4u: goto label_7F1A5EF4;
    case 0x7F1A5EF8u: goto label_7F1A5EF8;
    case 0x7F1A5EFCu: goto label_7F1A5EFC;
    case 0x7F1A5F00u: goto label_7F1A5F00;
    case 0x7F1A5F04u: goto label_7F1A5F04;
    case 0x7F1A5F08u: goto label_7F1A5F08;
    case 0x7F1A5F0Cu: goto label_7F1A5F0C;
    case 0x7F1A5F10u: goto label_7F1A5F10;
    case 0x7F1A5F14u: goto label_7F1A5F14;
    case 0x7F1A5F18u: goto label_7F1A5F18;
    case 0x7F1A5F1Cu: goto label_7F1A5F1C;
    case 0x7F1A5F20u: goto label_7F1A5F20;
    case 0x7F1A5F24u: goto label_7F1A5F24;
    case 0x7F1A5F28u: goto label_7F1A5F28;
    case 0x7F1A5F2Cu: goto label_7F1A5F2C;
    case 0x7F1A5F30u: goto label_7F1A5F30;
    case 0x7F1A5F34u: goto label_7F1A5F34;
    case 0x7F1A5F38u: goto label_7F1A5F38;
    case 0x7F1A5F3Cu: goto label_7F1A5F3C;
    case 0x7F1A5F40u: goto label_7F1A5F40;
    case 0x7F1A5F44u: goto label_7F1A5F44;
    case 0x7F1A5F48u: goto label_7F1A5F48;
    case 0x7F1A5F4Cu: goto label_7F1A5F4C;
    case 0x7F1A5F50u: goto label_7F1A5F50;
    case 0x7F1A5F54u: goto label_7F1A5F54;
    case 0x7F1A5F58u: goto label_7F1A5F58;
    case 0x7F1A5F5Cu: goto label_7F1A5F5C;
    case 0x7F1A5F60u: goto label_7F1A5F60;
    case 0x7F1A5F64u: goto label_7F1A5F64;
    case 0x7F1A5F68u: goto label_7F1A5F68;
    case 0x7F1A5F6Cu: goto label_7F1A5F6C;
    case 0x7F1A5F70u: goto label_7F1A5F70;
    case 0x7F1A5F74u: goto label_7F1A5F74;
    case 0x7F1A5F78u: goto label_7F1A5F78;
    case 0x7F1A5F7Cu: goto label_7F1A5F7C;
    case 0x7F1A5F80u: goto label_7F1A5F80;
    case 0x7F1A5F84u: goto label_7F1A5F84;
    case 0x7F1A5F88u: goto label_7F1A5F88;
    case 0x7F1A5F8Cu: goto label_7F1A5F8C;
    case 0x7F1A5F90u: goto label_7F1A5F90;
    case 0x7F1A5F94u: goto label_7F1A5F94;
    case 0x7F1A5F98u: goto label_7F1A5F98;
    case 0x7F1A5F9Cu: goto label_7F1A5F9C;
    case 0x7F1A5FA0u: goto label_7F1A5FA0;
    case 0x7F1A5FA4u: goto label_7F1A5FA4;
    case 0x7F1A5FA8u: goto label_7F1A5FA8;
    case 0x7F1A5FACu: goto label_7F1A5FAC;
    case 0x7F1A5FB0u: goto label_7F1A5FB0;
    case 0x7F1A5FB4u: goto label_7F1A5FB4;
    case 0x7F1A5FB8u: goto label_7F1A5FB8;
    case 0x7F1A5FBCu: goto label_7F1A5FBC;
    case 0x7F1A5FC0u: goto label_7F1A5FC0;
    case 0x7F1A5FC4u: goto label_7F1A5FC4;
    case 0x7F1A5FC8u: goto label_7F1A5FC8;
    case 0x7F1A5FCCu: goto label_7F1A5FCC;
    case 0x7F1A5FD0u: goto label_7F1A5FD0;
    case 0x7F1A5FD4u: goto label_7F1A5FD4;
    case 0x7F1A5FD8u: goto label_7F1A5FD8;
    case 0x7F1A5FDCu: goto label_7F1A5FDC;
    case 0x7F1A5FE0u: goto label_7F1A5FE0;
    case 0x7F1A5FE4u: goto label_7F1A5FE4;
    case 0x7F1A5FE8u: goto label_7F1A5FE8;
    case 0x7F1A5FECu: goto label_7F1A5FEC;
    case 0x7F1A5FF0u: goto label_7F1A5FF0;
    case 0x7F1A5FF4u: goto label_7F1A5FF4;
    case 0x7F1A5FF8u: goto label_7F1A5FF8;
    case 0x7F1A5FFCu: goto label_7F1A5FFC;
    case 0x7F1A6000u: goto label_7F1A6000;
    case 0x7F1A6004u: goto label_7F1A6004;
    case 0x7F1A6008u: goto label_7F1A6008;
    case 0x7F1A600Cu: goto label_7F1A600C;
    case 0x7F1A6010u: goto label_7F1A6010;
    case 0x7F1A6014u: goto label_7F1A6014;
    case 0x7F1A6018u: goto label_7F1A6018;
    case 0x7F1A601Cu: goto label_7F1A601C;
    case 0x7F1A6020u: goto label_7F1A6020;
    case 0x7F1A6024u: goto label_7F1A6024;
    case 0x7F1A6028u: goto label_7F1A6028;
    case 0x7F1A602Cu: goto label_7F1A602C;
    case 0x7F1A6030u: goto label_7F1A6030;
    case 0x7F1A6034u: goto label_7F1A6034;
    case 0x7F1A6038u: goto label_7F1A6038;
    case 0x7F1A603Cu: goto label_7F1A603C;
    case 0x7F1A6040u: goto label_7F1A6040;
    case 0x7F1A6044u: goto label_7F1A6044;
    case 0x7F1A6048u: goto label_7F1A6048;
    case 0x7F1A604Cu: goto label_7F1A604C;
    case 0x7F1A6050u: goto label_7F1A6050;
    case 0x7F1A6054u: goto label_7F1A6054;
    case 0x7F1A6058u: goto label_7F1A6058;
    case 0x7F1A605Cu: goto label_7F1A605C;
    case 0x7F1A6060u: goto label_7F1A6060;
    case 0x7F1A6064u: goto label_7F1A6064;
    case 0x7F1A6068u: goto label_7F1A6068;
    case 0x7F1A606Cu: goto label_7F1A606C;
    case 0x7F1A6070u: goto label_7F1A6070;
    case 0x7F1A6074u: goto label_7F1A6074;
    case 0x7F1A6078u: goto label_7F1A6078;
    case 0x7F1A607Cu: goto label_7F1A607C;
    case 0x7F1A6080u: goto label_7F1A6080;
    case 0x7F1A6084u: goto label_7F1A6084;
    case 0x7F1A6088u: goto label_7F1A6088;
    case 0x7F1A608Cu: goto label_7F1A608C;
    case 0x7F1A6090u: goto label_7F1A6090;
    case 0x7F1A6094u: goto label_7F1A6094;
    case 0x7F1A6098u: goto label_7F1A6098;
    case 0x7F1A609Cu: goto label_7F1A609C;
    case 0x7F1A60A0u: goto label_7F1A60A0;
    case 0x7F1A60A4u: goto label_7F1A60A4;
    case 0x7F1A60A8u: goto label_7F1A60A8;
    case 0x7F1A60ACu: goto label_7F1A60AC;
    case 0x7F1A60B0u: goto label_7F1A60B0;
    case 0x7F1A60B4u: goto label_7F1A60B4;
    case 0x7F1A60B8u: goto label_7F1A60B8;
    case 0x7F1A60BCu: goto label_7F1A60BC;
    case 0x7F1A60C0u: goto label_7F1A60C0;
    case 0x7F1A60C4u: goto label_7F1A60C4;
    case 0x7F1A60C8u: goto label_7F1A60C8;
    case 0x7F1A60CCu: goto label_7F1A60CC;
    case 0x7F1A60D0u: goto label_7F1A60D0;
    case 0x7F1A60D4u: goto label_7F1A60D4;
    case 0x7F1A60D8u: goto label_7F1A60D8;
    case 0x7F1A60DCu: goto label_7F1A60DC;
    case 0x7F1A60E0u: goto label_7F1A60E0;
    case 0x7F1A60E4u: goto label_7F1A60E4;
    case 0x7F1A60E8u: goto label_7F1A60E8;
    case 0x7F1A60ECu: goto label_7F1A60EC;
    case 0x7F1A60F0u: goto label_7F1A60F0;
    case 0x7F1A60F4u: goto label_7F1A60F4;
    case 0x7F1A60F8u: goto label_7F1A60F8;
    case 0x7F1A60FCu: goto label_7F1A60FC;
    case 0x7F1A6100u: goto label_7F1A6100;
    case 0x7F1A6104u: goto label_7F1A6104;
    case 0x7F1A6108u: goto label_7F1A6108;
    case 0x7F1A610Cu: goto label_7F1A610C;
    case 0x7F1A6110u: goto label_7F1A6110;
    case 0x7F1A6114u: goto label_7F1A6114;
    case 0x7F1A6118u: goto label_7F1A6118;
    case 0x7F1A611Cu: goto label_7F1A611C;
    case 0x7F1A6120u: goto label_7F1A6120;
    case 0x7F1A6124u: goto label_7F1A6124;
    case 0x7F1A6128u: goto label_7F1A6128;
    case 0x7F1A612Cu: goto label_7F1A612C;
    case 0x7F1A6130u: goto label_7F1A6130;
    case 0x7F1A6134u: goto label_7F1A6134;
    case 0x7F1A6138u: goto label_7F1A6138;
    case 0x7F1A613Cu: goto label_7F1A613C;
    case 0x7F1A6140u: goto label_7F1A6140;
    case 0x7F1A6144u: goto label_7F1A6144;
    case 0x7F1A6148u: goto label_7F1A6148;
    case 0x7F1A614Cu: goto label_7F1A614C;
    case 0x7F1A6150u: goto label_7F1A6150;
    case 0x7F1A6154u: goto label_7F1A6154;
    case 0x7F1A6158u: goto label_7F1A6158;
    case 0x7F1A615Cu: goto label_7F1A615C;
    case 0x7F1A6160u: goto label_7F1A6160;
    case 0x7F1A6164u: goto label_7F1A6164;
    case 0x7F1A6168u: goto label_7F1A6168;
    case 0x7F1A616Cu: goto label_7F1A616C;
    case 0x7F1A6170u: goto label_7F1A6170;
    case 0x7F1A6174u: goto label_7F1A6174;
    case 0x7F1A6178u: goto label_7F1A6178;
    case 0x7F1A617Cu: goto label_7F1A617C;
    case 0x7F1A6180u: goto label_7F1A6180;
    case 0x7F1A6184u: goto label_7F1A6184;
    case 0x7F1A6188u: goto label_7F1A6188;
    case 0x7F1A618Cu: goto label_7F1A618C;
    case 0x7F1A6190u: goto label_7F1A6190;
    case 0x7F1A6194u: goto label_7F1A6194;
    case 0x7F1A6198u: goto label_7F1A6198;
    case 0x7F1A619Cu: goto label_7F1A619C;
    case 0x7F1A61A0u: goto label_7F1A61A0;
    case 0x7F1A61A4u: goto label_7F1A61A4;
    case 0x7F1A61A8u: goto label_7F1A61A8;
    case 0x7F1A61ACu: goto label_7F1A61AC;
    case 0x7F1A61B0u: goto label_7F1A61B0;
    case 0x7F1A61B4u: goto label_7F1A61B4;
    case 0x7F1A61B8u: goto label_7F1A61B8;
    case 0x7F1A61BCu: goto label_7F1A61BC;
    case 0x7F1A61C0u: goto label_7F1A61C0;
    case 0x7F1A61C4u: goto label_7F1A61C4;
    case 0x7F1A61C8u: goto label_7F1A61C8;
    case 0x7F1A61CCu: goto label_7F1A61CC;
    case 0x7F1A61D0u: goto label_7F1A61D0;
    case 0x7F1A61D4u: goto label_7F1A61D4;
    case 0x7F1A61D8u: goto label_7F1A61D8;
    case 0x7F1A61DCu: goto label_7F1A61DC;
    case 0x7F1A61E0u: goto label_7F1A61E0;
    case 0x7F1A61E4u: goto label_7F1A61E4;
    case 0x7F1A61E8u: goto label_7F1A61E8;
    case 0x7F1A61ECu: goto label_7F1A61EC;
    case 0x7F1A61F0u: goto label_7F1A61F0;
    case 0x7F1A61F4u: goto label_7F1A61F4;
    case 0x7F1A61F8u: goto label_7F1A61F8;
    case 0x7F1A61FCu: goto label_7F1A61FC;
    case 0x7F1A6200u: goto label_7F1A6200;
    case 0x7F1A6204u: goto label_7F1A6204;
    case 0x7F1A6208u: goto label_7F1A6208;
    case 0x7F1A620Cu: goto label_7F1A620C;
    case 0x7F1A6210u: goto label_7F1A6210;
    case 0x7F1A6214u: goto label_7F1A6214;
    case 0x7F1A6218u: goto label_7F1A6218;
    case 0x7F1A621Cu: goto label_7F1A621C;
    case 0x7F1A6220u: goto label_7F1A6220;
    case 0x7F1A6224u: goto label_7F1A6224;
    case 0x7F1A6228u: goto label_7F1A6228;
    case 0x7F1A622Cu: goto label_7F1A622C;
    case 0x7F1A6230u: goto label_7F1A6230;
    case 0x7F1A6234u: goto label_7F1A6234;
    case 0x7F1A6238u: goto label_7F1A6238;
    case 0x7F1A623Cu: goto label_7F1A623C;
    case 0x7F1A6240u: goto label_7F1A6240;
    case 0x7F1A6244u: goto label_7F1A6244;
    case 0x7F1A6248u: goto label_7F1A6248;
    case 0x7F1A624Cu: goto label_7F1A624C;
    case 0x7F1A6250u: goto label_7F1A6250;
    case 0x7F1A6254u: goto label_7F1A6254;
    case 0x7F1A6258u: goto label_7F1A6258;
    case 0x7F1A625Cu: goto label_7F1A625C;
    case 0x7F1A6260u: goto label_7F1A6260;
    case 0x7F1A6264u: goto label_7F1A6264;
    case 0x7F1A6268u: goto label_7F1A6268;
    case 0x7F1A626Cu: goto label_7F1A626C;
    case 0x7F1A6270u: goto label_7F1A6270;
    case 0x7F1A6274u: goto label_7F1A6274;
    case 0x7F1A6278u: goto label_7F1A6278;
    case 0x7F1A627Cu: goto label_7F1A627C;
    case 0x7F1A6280u: goto label_7F1A6280;
    case 0x7F1A6284u: goto label_7F1A6284;
    case 0x7F1A6288u: goto label_7F1A6288;
    case 0x7F1A628Cu: goto label_7F1A628C;
    case 0x7F1A6290u: goto label_7F1A6290;
    case 0x7F1A6294u: goto label_7F1A6294;
    case 0x7F1A6298u: goto label_7F1A6298;
    case 0x7F1A629Cu: goto label_7F1A629C;
    case 0x7F1A62A0u: goto label_7F1A62A0;
    case 0x7F1A62A4u: goto label_7F1A62A4;
    case 0x7F1A62A8u: goto label_7F1A62A8;
    case 0x7F1A62ACu: goto label_7F1A62AC;
    case 0x7F1A62B0u: goto label_7F1A62B0;
    case 0x7F1A62B4u: goto label_7F1A62B4;
    case 0x7F1A62B8u: goto label_7F1A62B8;
    case 0x7F1A62BCu: goto label_7F1A62BC;
    case 0x7F1A62C0u: goto label_7F1A62C0;
    case 0x7F1A62C4u: goto label_7F1A62C4;
    case 0x7F1A62C8u: goto label_7F1A62C8;
    case 0x7F1A62CCu: goto label_7F1A62CC;
    case 0x7F1A62D0u: goto label_7F1A62D0;
    case 0x7F1A62D4u: goto label_7F1A62D4;
    case 0x7F1A62D8u: goto label_7F1A62D8;
    case 0x7F1A62DCu: goto label_7F1A62DC;
    case 0x7F1A62E0u: goto label_7F1A62E0;
    case 0x7F1A62E4u: goto label_7F1A62E4;
    case 0x7F1A62E8u: goto label_7F1A62E8;
    case 0x7F1A62ECu: goto label_7F1A62EC;
    case 0x7F1A62F0u: goto label_7F1A62F0;
    case 0x7F1A62F4u: goto label_7F1A62F4;
    case 0x7F1A62F8u: goto label_7F1A62F8;
    case 0x7F1A62FCu: goto label_7F1A62FC;
    case 0x7F1A6300u: goto label_7F1A6300;
    case 0x7F1A6304u: goto label_7F1A6304;
    case 0x7F1A6308u: goto label_7F1A6308;
    case 0x7F1A630Cu: goto label_7F1A630C;
    case 0x7F1A6310u: goto label_7F1A6310;
    case 0x7F1A6314u: goto label_7F1A6314;
    case 0x7F1A6318u: goto label_7F1A6318;
    case 0x7F1A631Cu: goto label_7F1A631C;
    case 0x7F1A6320u: goto label_7F1A6320;
    case 0x7F1A6324u: goto label_7F1A6324;
    case 0x7F1A6328u: goto label_7F1A6328;
    case 0x7F1A632Cu: goto label_7F1A632C;
    case 0x7F1A6330u: goto label_7F1A6330;
    case 0x7F1A6334u: goto label_7F1A6334;
    case 0x7F1A6338u: goto label_7F1A6338;
    case 0x7F1A633Cu: goto label_7F1A633C;
    case 0x7F1A6340u: goto label_7F1A6340;
    case 0x7F1A6344u: goto label_7F1A6344;
    case 0x7F1A6348u: goto label_7F1A6348;
    case 0x7F1A634Cu: goto label_7F1A634C;
    case 0x7F1A6350u: goto label_7F1A6350;
    case 0x7F1A6354u: goto label_7F1A6354;
    case 0x7F1A6358u: goto label_7F1A6358;
    case 0x7F1A635Cu: goto label_7F1A635C;
    case 0x7F1A6360u: goto label_7F1A6360;
    case 0x7F1A6364u: goto label_7F1A6364;
    case 0x7F1A6368u: goto label_7F1A6368;
    case 0x7F1A636Cu: goto label_7F1A636C;
    case 0x7F1A6370u: goto label_7F1A6370;
    case 0x7F1A6374u: goto label_7F1A6374;
    case 0x7F1A6378u: goto label_7F1A6378;
    case 0x7F1A637Cu: goto label_7F1A637C;
    case 0x7F1A6380u: goto label_7F1A6380;
    case 0x7F1A6384u: goto label_7F1A6384;
    case 0x7F1A6388u: goto label_7F1A6388;
    case 0x7F1A638Cu: goto label_7F1A638C;
    case 0x7F1A6390u: goto label_7F1A6390;
    case 0x7F1A6394u: goto label_7F1A6394;
    case 0x7F1A6398u: goto label_7F1A6398;
    case 0x7F1A639Cu: goto label_7F1A639C;
    case 0x7F1A63A0u: goto label_7F1A63A0;
    case 0x7F1A63A4u: goto label_7F1A63A4;
    case 0x7F1A63A8u: goto label_7F1A63A8;
    case 0x7F1A63ACu: goto label_7F1A63AC;
    case 0x7F1A63B0u: goto label_7F1A63B0;
    case 0x7F1A63B4u: goto label_7F1A63B4;
    case 0x7F1A63B8u: goto label_7F1A63B8;
    case 0x7F1A63BCu: goto label_7F1A63BC;
    case 0x7F1A63C0u: goto label_7F1A63C0;
    case 0x7F1A63C4u: goto label_7F1A63C4;
    case 0x7F1A63C8u: goto label_7F1A63C8;
    case 0x7F1A63CCu: goto label_7F1A63CC;
    case 0x7F1A63D0u: goto label_7F1A63D0;
    case 0x7F1A63D4u: goto label_7F1A63D4;
    case 0x7F1A63D8u: goto label_7F1A63D8;
    case 0x7F1A63DCu: goto label_7F1A63DC;
    case 0x7F1A63E0u: goto label_7F1A63E0;
    case 0x7F1A63E4u: goto label_7F1A63E4;
    case 0x7F1A63E8u: goto label_7F1A63E8;
    case 0x7F1A63ECu: goto label_7F1A63EC;
    case 0x7F1A63F0u: goto label_7F1A63F0;
    case 0x7F1A63F4u: goto label_7F1A63F4;
    case 0x7F1A63F8u: goto label_7F1A63F8;
    case 0x7F1A63FCu: goto label_7F1A63FC;
    case 0x7F1A6400u: goto label_7F1A6400;
    case 0x7F1A6404u: goto label_7F1A6404;
    case 0x7F1A6408u: goto label_7F1A6408;
    case 0x7F1A640Cu: goto label_7F1A640C;
    case 0x7F1A6410u: goto label_7F1A6410;
    case 0x7F1A6414u: goto label_7F1A6414;
    case 0x7F1A6418u: goto label_7F1A6418;
    case 0x7F1A641Cu: goto label_7F1A641C;
    case 0x7F1A6420u: goto label_7F1A6420;
    case 0x7F1A6424u: goto label_7F1A6424;
    case 0x7F1A6428u: goto label_7F1A6428;
    case 0x7F1A642Cu: goto label_7F1A642C;
    case 0x7F1A6430u: goto label_7F1A6430;
    case 0x7F1A6434u: goto label_7F1A6434;
    case 0x7F1A6438u: goto label_7F1A6438;
    case 0x7F1A643Cu: goto label_7F1A643C;
    case 0x7F1A6440u: goto label_7F1A6440;
    case 0x7F1A6444u: goto label_7F1A6444;
    case 0x7F1A6448u: goto label_7F1A6448;
    case 0x7F1A644Cu: goto label_7F1A644C;
    case 0x7F1A6450u: goto label_7F1A6450;
    case 0x7F1A6454u: goto label_7F1A6454;
    case 0x7F1A6458u: goto label_7F1A6458;
    case 0x7F1A645Cu: goto label_7F1A645C;
    case 0x7F1A6460u: goto label_7F1A6460;
    case 0x7F1A6464u: goto label_7F1A6464;
    case 0x7F1A6468u: goto label_7F1A6468;
    case 0x7F1A646Cu: goto label_7F1A646C;
    case 0x7F1A6470u: goto label_7F1A6470;
    case 0x7F1A6474u: goto label_7F1A6474;
    case 0x7F1A6478u: goto label_7F1A6478;
    case 0x7F1A647Cu: goto label_7F1A647C;
    case 0x7F1A6480u: goto label_7F1A6480;
    case 0x7F1A6484u: goto label_7F1A6484;
    case 0x7F1A6488u: goto label_7F1A6488;
    case 0x7F1A648Cu: goto label_7F1A648C;
    case 0x7F1A6490u: goto label_7F1A6490;
    case 0x7F1A6494u: goto label_7F1A6494;
    case 0x7F1A6498u: goto label_7F1A6498;
    case 0x7F1A649Cu: goto label_7F1A649C;
    case 0x7F1A64A0u: goto label_7F1A64A0;
    case 0x7F1A64A4u: goto label_7F1A64A4;
    case 0x7F1A64A8u: goto label_7F1A64A8;
    case 0x7F1A64ACu: goto label_7F1A64AC;
    case 0x7F1A64B0u: goto label_7F1A64B0;
    case 0x7F1A64B4u: goto label_7F1A64B4;
    case 0x7F1A64B8u: goto label_7F1A64B8;
    case 0x7F1A64BCu: goto label_7F1A64BC;
    case 0x7F1A64C0u: goto label_7F1A64C0;
    case 0x7F1A64C4u: goto label_7F1A64C4;
    case 0x7F1A64C8u: goto label_7F1A64C8;
    case 0x7F1A64CCu: goto label_7F1A64CC;
    case 0x7F1A64D0u: goto label_7F1A64D0;
    case 0x7F1A64D4u: goto label_7F1A64D4;
    case 0x7F1A64D8u: goto label_7F1A64D8;
    case 0x7F1A64DCu: goto label_7F1A64DC;
    case 0x7F1A64E0u: goto label_7F1A64E0;
    case 0x7F1A64E4u: goto label_7F1A64E4;
    case 0x7F1A64E8u: goto label_7F1A64E8;
    case 0x7F1A64ECu: goto label_7F1A64EC;
    case 0x7F1A64F0u: goto label_7F1A64F0;
    case 0x7F1A64F4u: goto label_7F1A64F4;
    case 0x7F1A64F8u: goto label_7F1A64F8;
    case 0x7F1A64FCu: goto label_7F1A64FC;
    case 0x7F1A6500u: goto label_7F1A6500;
    case 0x7F1A6504u: goto label_7F1A6504;
    case 0x7F1A6508u: goto label_7F1A6508;
    case 0x7F1A650Cu: goto label_7F1A650C;
    case 0x7F1A6510u: goto label_7F1A6510;
    case 0x7F1A6514u: goto label_7F1A6514;
    case 0x7F1A6518u: goto label_7F1A6518;
    case 0x7F1A651Cu: goto label_7F1A651C;
    case 0x7F1A6520u: goto label_7F1A6520;
    case 0x7F1A6524u: goto label_7F1A6524;
    case 0x7F1A6528u: goto label_7F1A6528;
    case 0x7F1A652Cu: goto label_7F1A652C;
    case 0x7F1A6530u: goto label_7F1A6530;
    case 0x7F1A6534u: goto label_7F1A6534;
    case 0x7F1A6538u: goto label_7F1A6538;
    case 0x7F1A653Cu: goto label_7F1A653C;
    case 0x7F1A6540u: goto label_7F1A6540;
    case 0x7F1A6544u: goto label_7F1A6544;
    case 0x7F1A6548u: goto label_7F1A6548;
    case 0x7F1A654Cu: goto label_7F1A654C;
    case 0x7F1A6550u: goto label_7F1A6550;
    case 0x7F1A6554u: goto label_7F1A6554;
    case 0x7F1A6558u: goto label_7F1A6558;
    case 0x7F1A655Cu: goto label_7F1A655C;
    case 0x7F1A6560u: goto label_7F1A6560;
    case 0x7F1A6564u: goto label_7F1A6564;
    case 0x7F1A6568u: goto label_7F1A6568;
    case 0x7F1A656Cu: goto label_7F1A656C;
    case 0x7F1A6570u: goto label_7F1A6570;
    case 0x7F1A6574u: goto label_7F1A6574;
    case 0x7F1A6578u: goto label_7F1A6578;
    case 0x7F1A657Cu: goto label_7F1A657C;
    case 0x7F1A6580u: goto label_7F1A6580;
    case 0x7F1A6584u: goto label_7F1A6584;
    case 0x7F1A6588u: goto label_7F1A6588;
    case 0x7F1A658Cu: goto label_7F1A658C;
    case 0x7F1A6590u: goto label_7F1A6590;
    case 0x7F1A6594u: goto label_7F1A6594;
    case 0x7F1A6598u: goto label_7F1A6598;
    case 0x7F1A659Cu: goto label_7F1A659C;
    case 0x7F1A65A0u: goto label_7F1A65A0;
    case 0x7F1A65A4u: goto label_7F1A65A4;
    case 0x7F1A65A8u: goto label_7F1A65A8;
    case 0x7F1A65ACu: goto label_7F1A65AC;
    case 0x7F1A65B0u: goto label_7F1A65B0;
    case 0x7F1A65B4u: goto label_7F1A65B4;
    case 0x7F1A65B8u: goto label_7F1A65B8;
    case 0x7F1A65BCu: goto label_7F1A65BC;
    case 0x7F1A65C0u: goto label_7F1A65C0;
    case 0x7F1A65C4u: goto label_7F1A65C4;
    case 0x7F1A65C8u: goto label_7F1A65C8;
    case 0x7F1A65CCu: goto label_7F1A65CC;
    case 0x7F1A65D0u: goto label_7F1A65D0;
    case 0x7F1A65D4u: goto label_7F1A65D4;
    case 0x7F1A65D8u: goto label_7F1A65D8;
    case 0x7F1A65DCu: goto label_7F1A65DC;
    case 0x7F1A65E0u: goto label_7F1A65E0;
    case 0x7F1A65E4u: goto label_7F1A65E4;
    case 0x7F1A65E8u: goto label_7F1A65E8;
    case 0x7F1A65ECu: goto label_7F1A65EC;
    case 0x7F1A65F0u: goto label_7F1A65F0;
    case 0x7F1A65F4u: goto label_7F1A65F4;
    case 0x7F1A65F8u: goto label_7F1A65F8;
    case 0x7F1A65FCu: goto label_7F1A65FC;
    case 0x7F1A6600u: goto label_7F1A6600;
    case 0x7F1A6604u: goto label_7F1A6604;
    case 0x7F1A6608u: goto label_7F1A6608;
    case 0x7F1A660Cu: goto label_7F1A660C;
    case 0x7F1A6610u: goto label_7F1A6610;
    case 0x7F1A6614u: goto label_7F1A6614;
    case 0x7F1A6618u: goto label_7F1A6618;
    case 0x7F1A661Cu: goto label_7F1A661C;
    case 0x7F1A6620u: goto label_7F1A6620;
    case 0x7F1A6624u: goto label_7F1A6624;
    case 0x7F1A6628u: goto label_7F1A6628;
    case 0x7F1A662Cu: goto label_7F1A662C;
    case 0x7F1A6630u: goto label_7F1A6630;
    case 0x7F1A6634u: goto label_7F1A6634;
    case 0x7F1A6638u: goto label_7F1A6638;
    case 0x7F1A663Cu: goto label_7F1A663C;
    case 0x7F1A6640u: goto label_7F1A6640;
    case 0x7F1A6644u: goto label_7F1A6644;
    case 0x7F1A6648u: goto label_7F1A6648;
    case 0x7F1A664Cu: goto label_7F1A664C;
    case 0x7F1A6650u: goto label_7F1A6650;
    case 0x7F1A6654u: goto label_7F1A6654;
    case 0x7F1A6658u: goto label_7F1A6658;
    case 0x7F1A665Cu: goto label_7F1A665C;
    case 0x7F1A6660u: goto label_7F1A6660;
    case 0x7F1A6664u: goto label_7F1A6664;
    case 0x7F1A6668u: goto label_7F1A6668;
    case 0x7F1A666Cu: goto label_7F1A666C;
    case 0x7F1A6670u: goto label_7F1A6670;
    case 0x7F1A6674u: goto label_7F1A6674;
    case 0x7F1A6678u: goto label_7F1A6678;
    case 0x7F1A667Cu: goto label_7F1A667C;
    case 0x7F1A6680u: goto label_7F1A6680;
    case 0x7F1A6684u: goto label_7F1A6684;
    case 0x7F1A6688u: goto label_7F1A6688;
    case 0x7F1A668Cu: goto label_7F1A668C;
    case 0x7F1A6690u: goto label_7F1A6690;
    case 0x7F1A6694u: goto label_7F1A6694;
    case 0x7F1A6698u: goto label_7F1A6698;
    case 0x7F1A669Cu: goto label_7F1A669C;
    case 0x7F1A66A0u: goto label_7F1A66A0;
    case 0x7F1A66A4u: goto label_7F1A66A4;
    case 0x7F1A66A8u: goto label_7F1A66A8;
    case 0x7F1A66ACu: goto label_7F1A66AC;
    case 0x7F1A66B0u: goto label_7F1A66B0;
    case 0x7F1A66B4u: goto label_7F1A66B4;
    case 0x7F1A66B8u: goto label_7F1A66B8;
    case 0x7F1A66BCu: goto label_7F1A66BC;
    case 0x7F1A66C0u: goto label_7F1A66C0;
    case 0x7F1A66C4u: goto label_7F1A66C4;
    case 0x7F1A66C8u: goto label_7F1A66C8;
    case 0x7F1A66CCu: goto label_7F1A66CC;
    case 0x7F1A66D0u: goto label_7F1A66D0;
    case 0x7F1A66D4u: goto label_7F1A66D4;
    case 0x7F1A66D8u: goto label_7F1A66D8;
    case 0x7F1A66DCu: goto label_7F1A66DC;
    case 0x7F1A66E0u: goto label_7F1A66E0;
    case 0x7F1A66E4u: goto label_7F1A66E4;
    case 0x7F1A66E8u: goto label_7F1A66E8;
    case 0x7F1A66ECu: goto label_7F1A66EC;
    case 0x7F1A66F0u: goto label_7F1A66F0;
    case 0x7F1A66F4u: goto label_7F1A66F4;
    case 0x7F1A66F8u: goto label_7F1A66F8;
    case 0x7F1A66FCu: goto label_7F1A66FC;
    case 0x7F1A6700u: goto label_7F1A6700;
    case 0x7F1A6704u: goto label_7F1A6704;
    case 0x7F1A6708u: goto label_7F1A6708;
    case 0x7F1A670Cu: goto label_7F1A670C;
    case 0x7F1A6710u: goto label_7F1A6710;
    case 0x7F1A6714u: goto label_7F1A6714;
    case 0x7F1A6718u: goto label_7F1A6718;
    case 0x7F1A671Cu: goto label_7F1A671C;
    case 0x7F1A6720u: goto label_7F1A6720;
    case 0x7F1A6724u: goto label_7F1A6724;
    case 0x7F1A6728u: goto label_7F1A6728;
    case 0x7F1A672Cu: goto label_7F1A672C;
    case 0x7F1A6730u: goto label_7F1A6730;
    case 0x7F1A6734u: goto label_7F1A6734;
    case 0x7F1A6738u: goto label_7F1A6738;
    case 0x7F1A673Cu: goto label_7F1A673C;
    case 0x7F1A6740u: goto label_7F1A6740;
    case 0x7F1A6744u: goto label_7F1A6744;
    case 0x7F1A6748u: goto label_7F1A6748;
    case 0x7F1A674Cu: goto label_7F1A674C;
    case 0x7F1A6750u: goto label_7F1A6750;
    case 0x7F1A6754u: goto label_7F1A6754;
    case 0x7F1A6758u: goto label_7F1A6758;
    case 0x7F1A675Cu: goto label_7F1A675C;
    case 0x7F1A6760u: goto label_7F1A6760;
    case 0x7F1A6764u: goto label_7F1A6764;
    case 0x7F1A6768u: goto label_7F1A6768;
    case 0x7F1A676Cu: goto label_7F1A676C;
    case 0x7F1A6770u: goto label_7F1A6770;
    case 0x7F1A6774u: goto label_7F1A6774;
    case 0x7F1A6778u: goto label_7F1A6778;
    case 0x7F1A677Cu: goto label_7F1A677C;
    case 0x7F1A6780u: goto label_7F1A6780;
    case 0x7F1A6784u: goto label_7F1A6784;
    case 0x7F1A6788u: goto label_7F1A6788;
    case 0x7F1A678Cu: goto label_7F1A678C;
    case 0x7F1A6790u: goto label_7F1A6790;
    case 0x7F1A6794u: goto label_7F1A6794;
    case 0x7F1A6798u: goto label_7F1A6798;
    case 0x7F1A679Cu: goto label_7F1A679C;
    case 0x7F1A67A0u: goto label_7F1A67A0;
    case 0x7F1A67A4u: goto label_7F1A67A4;
    case 0x7F1A67A8u: goto label_7F1A67A8;
    case 0x7F1A67ACu: goto label_7F1A67AC;
    case 0x7F1A67B0u: goto label_7F1A67B0;
    case 0x7F1A67B4u: goto label_7F1A67B4;
    case 0x7F1A67B8u: goto label_7F1A67B8;
    case 0x7F1A67BCu: goto label_7F1A67BC;
    case 0x7F1A67C0u: goto label_7F1A67C0;
    case 0x7F1A67C4u: goto label_7F1A67C4;
    case 0x7F1A67C8u: goto label_7F1A67C8;
    case 0x7F1A67CCu: goto label_7F1A67CC;
    case 0x7F1A67D0u: goto label_7F1A67D0;
    case 0x7F1A67D4u: goto label_7F1A67D4;
    case 0x7F1A67D8u: goto label_7F1A67D8;
    case 0x7F1A67DCu: goto label_7F1A67DC;
    case 0x7F1A67E0u: goto label_7F1A67E0;
    case 0x7F1A67E4u: goto label_7F1A67E4;
    case 0x7F1A67E8u: goto label_7F1A67E8;
    case 0x7F1A67ECu: goto label_7F1A67EC;
    case 0x7F1A67F0u: goto label_7F1A67F0;
    case 0x7F1A67F4u: goto label_7F1A67F4;
    case 0x7F1A67F8u: goto label_7F1A67F8;
    case 0x7F1A67FCu: goto label_7F1A67FC;
    case 0x7F1A6800u: goto label_7F1A6800;
    case 0x7F1A6804u: goto label_7F1A6804;
    case 0x7F1A6808u: goto label_7F1A6808;
    case 0x7F1A680Cu: goto label_7F1A680C;
    case 0x7F1A6810u: goto label_7F1A6810;
    case 0x7F1A6814u: goto label_7F1A6814;
    case 0x7F1A6818u: goto label_7F1A6818;
    case 0x7F1A681Cu: goto label_7F1A681C;
    case 0x7F1A6820u: goto label_7F1A6820;
    case 0x7F1A6824u: goto label_7F1A6824;
    case 0x7F1A6828u: goto label_7F1A6828;
    case 0x7F1A682Cu: goto label_7F1A682C;
    case 0x7F1A6830u: goto label_7F1A6830;
    case 0x7F1A6834u: goto label_7F1A6834;
    case 0x7F1A6838u: goto label_7F1A6838;
    case 0x7F1A683Cu: goto label_7F1A683C;
    case 0x7F1A6840u: goto label_7F1A6840;
    case 0x7F1A6844u: goto label_7F1A6844;
    case 0x7F1A6848u: goto label_7F1A6848;
    case 0x7F1A684Cu: goto label_7F1A684C;
    case 0x7F1A6850u: goto label_7F1A6850;
    case 0x7F1A6854u: goto label_7F1A6854;
    case 0x7F1A6858u: goto label_7F1A6858;
    case 0x7F1A685Cu: goto label_7F1A685C;
    case 0x7F1A6860u: goto label_7F1A6860;
    case 0x7F1A6864u: goto label_7F1A6864;
    case 0x7F1A6868u: goto label_7F1A6868;
    case 0x7F1A686Cu: goto label_7F1A686C;
    case 0x7F1A6870u: goto label_7F1A6870;
    case 0x7F1A6874u: goto label_7F1A6874;
    case 0x7F1A6878u: goto label_7F1A6878;
    case 0x7F1A687Cu: goto label_7F1A687C;
    case 0x7F1A6880u: goto label_7F1A6880;
    case 0x7F1A6884u: goto label_7F1A6884;
    case 0x7F1A6888u: goto label_7F1A6888;
    case 0x7F1A688Cu: goto label_7F1A688C;
    case 0x7F1A6890u: goto label_7F1A6890;
    case 0x7F1A6894u: goto label_7F1A6894;
    case 0x7F1A6898u: goto label_7F1A6898;
    case 0x7F1A689Cu: goto label_7F1A689C;
    case 0x7F1A68A0u: goto label_7F1A68A0;
    case 0x7F1A68A4u: goto label_7F1A68A4;
    case 0x7F1A68A8u: goto label_7F1A68A8;
    case 0x7F1A68ACu: goto label_7F1A68AC;
    case 0x7F1A68B0u: goto label_7F1A68B0;
    case 0x7F1A68B4u: goto label_7F1A68B4;
    case 0x7F1A68B8u: goto label_7F1A68B8;
    case 0x7F1A68BCu: goto label_7F1A68BC;
    case 0x7F1A68C0u: goto label_7F1A68C0;
    case 0x7F1A68C4u: goto label_7F1A68C4;
    case 0x7F1A68C8u: goto label_7F1A68C8;
    case 0x7F1A68CCu: goto label_7F1A68CC;
    case 0x7F1A68D0u: goto label_7F1A68D0;
    case 0x7F1A68D4u: goto label_7F1A68D4;
    case 0x7F1A68D8u: goto label_7F1A68D8;
    case 0x7F1A68DCu: goto label_7F1A68DC;
    case 0x7F1A68E0u: goto label_7F1A68E0;
    case 0x7F1A68E4u: goto label_7F1A68E4;
    case 0x7F1A68E8u: goto label_7F1A68E8;
    case 0x7F1A68ECu: goto label_7F1A68EC;
    case 0x7F1A68F0u: goto label_7F1A68F0;
    case 0x7F1A68F4u: goto label_7F1A68F4;
    case 0x7F1A68F8u: goto label_7F1A68F8;
    case 0x7F1A68FCu: goto label_7F1A68FC;
    case 0x7F1A6900u: goto label_7F1A6900;
    case 0x7F1A6904u: goto label_7F1A6904;
    case 0x7F1A6908u: goto label_7F1A6908;
    case 0x7F1A690Cu: goto label_7F1A690C;
    case 0x7F1A6910u: goto label_7F1A6910;
    case 0x7F1A6914u: goto label_7F1A6914;
    case 0x7F1A6918u: goto label_7F1A6918;
    case 0x7F1A691Cu: goto label_7F1A691C;
    case 0x7F1A6920u: goto label_7F1A6920;
    case 0x7F1A6924u: goto label_7F1A6924;
    case 0x7F1A6928u: goto label_7F1A6928;
    case 0x7F1A692Cu: goto label_7F1A692C;
    case 0x7F1A6930u: goto label_7F1A6930;
    case 0x7F1A6934u: goto label_7F1A6934;
    case 0x7F1A6938u: goto label_7F1A6938;
    case 0x7F1A693Cu: goto label_7F1A693C;
    case 0x7F1A6940u: goto label_7F1A6940;
    case 0x7F1A6944u: goto label_7F1A6944;
    case 0x7F1A6948u: goto label_7F1A6948;
    case 0x7F1A694Cu: goto label_7F1A694C;
    case 0x7F1A6950u: goto label_7F1A6950;
    case 0x7F1A6954u: goto label_7F1A6954;
    case 0x7F1A6958u: goto label_7F1A6958;
    case 0x7F1A695Cu: goto label_7F1A695C;
    case 0x7F1A6960u: goto label_7F1A6960;
    case 0x7F1A6964u: goto label_7F1A6964;
    case 0x7F1A6968u: goto label_7F1A6968;
    case 0x7F1A696Cu: goto label_7F1A696C;
    case 0x7F1A6970u: goto label_7F1A6970;
    case 0x7F1A6974u: goto label_7F1A6974;
    case 0x7F1A6978u: goto label_7F1A6978;
    case 0x7F1A697Cu: goto label_7F1A697C;
    case 0x7F1A6980u: goto label_7F1A6980;
    case 0x7F1A6984u: goto label_7F1A6984;
    case 0x7F1A6988u: goto label_7F1A6988;
    case 0x7F1A698Cu: goto label_7F1A698C;
    case 0x7F1A6990u: goto label_7F1A6990;
    case 0x7F1A6994u: goto label_7F1A6994;
    case 0x7F1A6998u: goto label_7F1A6998;
    case 0x7F1A699Cu: goto label_7F1A699C;
    case 0x7F1A69A0u: goto label_7F1A69A0;
    case 0x7F1A69A4u: goto label_7F1A69A4;
    case 0x7F1A69A8u: goto label_7F1A69A8;
    case 0x7F1A69ACu: goto label_7F1A69AC;
    case 0x7F1A69B0u: goto label_7F1A69B0;
    case 0x7F1A69B4u: goto label_7F1A69B4;
    case 0x7F1A69B8u: goto label_7F1A69B8;
    case 0x7F1A69BCu: goto label_7F1A69BC;
    case 0x7F1A69C0u: goto label_7F1A69C0;
    case 0x7F1A69C4u: goto label_7F1A69C4;
    case 0x7F1A69C8u: goto label_7F1A69C8;
    case 0x7F1A69CCu: goto label_7F1A69CC;
    case 0x7F1A69D0u: goto label_7F1A69D0;
    case 0x7F1A69D4u: goto label_7F1A69D4;
    case 0x7F1A69D8u: goto label_7F1A69D8;
    case 0x7F1A69DCu: goto label_7F1A69DC;
    case 0x7F1A69E0u: goto label_7F1A69E0;
    case 0x7F1A69E4u: goto label_7F1A69E4;
    case 0x7F1A69E8u: goto label_7F1A69E8;
    case 0x7F1A69ECu: goto label_7F1A69EC;
    case 0x7F1A69F0u: goto label_7F1A69F0;
    case 0x7F1A69F4u: goto label_7F1A69F4;
    case 0x7F1A69F8u: goto label_7F1A69F8;
    case 0x7F1A69FCu: goto label_7F1A69FC;
    case 0x7F1A6A00u: goto label_7F1A6A00;
    case 0x7F1A6A04u: goto label_7F1A6A04;
    case 0x7F1A6A08u: goto label_7F1A6A08;
    case 0x7F1A6A0Cu: goto label_7F1A6A0C;
    case 0x7F1A6A10u: goto label_7F1A6A10;
    case 0x7F1A6A14u: goto label_7F1A6A14;
    case 0x7F1A6A18u: goto label_7F1A6A18;
    case 0x7F1A6A1Cu: goto label_7F1A6A1C;
    case 0x7F1A6A20u: goto label_7F1A6A20;
    case 0x7F1A6A24u: goto label_7F1A6A24;
    case 0x7F1A6A28u: goto label_7F1A6A28;
    case 0x7F1A6A2Cu: goto label_7F1A6A2C;
    case 0x7F1A6A30u: goto label_7F1A6A30;
    case 0x7F1A6A34u: goto label_7F1A6A34;
    case 0x7F1A6A38u: goto label_7F1A6A38;
    case 0x7F1A6A3Cu: goto label_7F1A6A3C;
    case 0x7F1A6A40u: goto label_7F1A6A40;
    case 0x7F1A6A44u: goto label_7F1A6A44;
    case 0x7F1A6A48u: goto label_7F1A6A48;
    case 0x7F1A6A4Cu: goto label_7F1A6A4C;
    case 0x7F1A6A50u: goto label_7F1A6A50;
    case 0x7F1A6A54u: goto label_7F1A6A54;
    case 0x7F1A6A58u: goto label_7F1A6A58;
    case 0x7F1A6A5Cu: goto label_7F1A6A5C;
    case 0x7F1A6A60u: goto label_7F1A6A60;
    case 0x7F1A6A64u: goto label_7F1A6A64;
    case 0x7F1A6A68u: goto label_7F1A6A68;
    case 0x7F1A6A6Cu: goto label_7F1A6A6C;
    case 0x7F1A6A70u: goto label_7F1A6A70;
    case 0x7F1A6A74u: goto label_7F1A6A74;
    case 0x7F1A6A78u: goto label_7F1A6A78;
    case 0x7F1A6A7Cu: goto label_7F1A6A7C;
    case 0x7F1A6A80u: goto label_7F1A6A80;
    case 0x7F1A6A84u: goto label_7F1A6A84;
    case 0x7F1A6A88u: goto label_7F1A6A88;
    case 0x7F1A6A8Cu: goto label_7F1A6A8C;
    case 0x7F1A6A90u: goto label_7F1A6A90;
    case 0x7F1A6A94u: goto label_7F1A6A94;
    case 0x7F1A6A98u: goto label_7F1A6A98;
    case 0x7F1A6A9Cu: goto label_7F1A6A9C;
    case 0x7F1A6AA0u: goto label_7F1A6AA0;
    case 0x7F1A6AA4u: goto label_7F1A6AA4;
    case 0x7F1A6AA8u: goto label_7F1A6AA8;
    case 0x7F1A6AACu: goto label_7F1A6AAC;
    case 0x7F1A6AB0u: goto label_7F1A6AB0;
    case 0x7F1A6AB4u: goto label_7F1A6AB4;
    case 0x7F1A6AB8u: goto label_7F1A6AB8;
    case 0x7F1A6ABCu: goto label_7F1A6ABC;
    case 0x7F1A6AC0u: goto label_7F1A6AC0;
    case 0x7F1A6AC4u: goto label_7F1A6AC4;
    case 0x7F1A6AC8u: goto label_7F1A6AC8;
    case 0x7F1A6ACCu: goto label_7F1A6ACC;
    case 0x7F1A6AD0u: goto label_7F1A6AD0;
    case 0x7F1A6AD4u: goto label_7F1A6AD4;
    case 0x7F1A6AD8u: goto label_7F1A6AD8;
    case 0x7F1A6ADCu: goto label_7F1A6ADC;
    case 0x7F1A6AE0u: goto label_7F1A6AE0;
    case 0x7F1A6AE4u: goto label_7F1A6AE4;
    case 0x7F1A6AE8u: goto label_7F1A6AE8;
    case 0x7F1A6AECu: goto label_7F1A6AEC;
    case 0x7F1A6AF0u: goto label_7F1A6AF0;
    case 0x7F1A6AF4u: goto label_7F1A6AF4;
    case 0x7F1A6AF8u: goto label_7F1A6AF8;
    case 0x7F1A6AFCu: goto label_7F1A6AFC;
    case 0x7F1A6B00u: goto label_7F1A6B00;
    case 0x7F1A6B04u: goto label_7F1A6B04;
    case 0x7F1A6B08u: goto label_7F1A6B08;
    case 0x7F1A6B0Cu: goto label_7F1A6B0C;
    case 0x7F1A6B10u: goto label_7F1A6B10;
    case 0x7F1A6B14u: goto label_7F1A6B14;
    case 0x7F1A6B18u: goto label_7F1A6B18;
    case 0x7F1A6B1Cu: goto label_7F1A6B1C;
    case 0x7F1A6B20u: goto label_7F1A6B20;
    case 0x7F1A6B24u: goto label_7F1A6B24;
    case 0x7F1A6B28u: goto label_7F1A6B28;
    case 0x7F1A6B2Cu: goto label_7F1A6B2C;
    case 0x7F1A6B30u: goto label_7F1A6B30;
    case 0x7F1A6B34u: goto label_7F1A6B34;
    case 0x7F1A6B38u: goto label_7F1A6B38;
    case 0x7F1A6B3Cu: goto label_7F1A6B3C;
    case 0x7F1A6B40u: goto label_7F1A6B40;
    case 0x7F1A6B44u: goto label_7F1A6B44;
    case 0x7F1A6B48u: goto label_7F1A6B48;
    case 0x7F1A6B4Cu: goto label_7F1A6B4C;
    case 0x7F1A6B50u: goto label_7F1A6B50;
    case 0x7F1A6B54u: goto label_7F1A6B54;
    case 0x7F1A6B58u: goto label_7F1A6B58;
    case 0x7F1A6B5Cu: goto label_7F1A6B5C;
    case 0x7F1A6B60u: goto label_7F1A6B60;
    case 0x7F1A6B64u: goto label_7F1A6B64;
    case 0x7F1A6B68u: goto label_7F1A6B68;
    case 0x7F1A6B6Cu: goto label_7F1A6B6C;
    case 0x7F1A6B70u: goto label_7F1A6B70;
    case 0x7F1A6B74u: goto label_7F1A6B74;
    case 0x7F1A6B78u: goto label_7F1A6B78;
    case 0x7F1A6B7Cu: goto label_7F1A6B7C;
    case 0x7F1A6B80u: goto label_7F1A6B80;
    case 0x7F1A6B84u: goto label_7F1A6B84;
    case 0x7F1A6B88u: goto label_7F1A6B88;
    case 0x7F1A6B8Cu: goto label_7F1A6B8C;
    case 0x7F1A6B90u: goto label_7F1A6B90;
    case 0x7F1A6B94u: goto label_7F1A6B94;
    case 0x7F1A6B98u: goto label_7F1A6B98;
    case 0x7F1A6B9Cu: goto label_7F1A6B9C;
    case 0x7F1A6BA0u: goto label_7F1A6BA0;
    case 0x7F1A6BA4u: goto label_7F1A6BA4;
    case 0x7F1A6BA8u: goto label_7F1A6BA8;
    case 0x7F1A6BACu: goto label_7F1A6BAC;
    case 0x7F1A6BB0u: goto label_7F1A6BB0;
    case 0x7F1A6BB4u: goto label_7F1A6BB4;
    case 0x7F1A6BB8u: goto label_7F1A6BB8;
    case 0x7F1A6BBCu: goto label_7F1A6BBC;
    case 0x7F1A6BC0u: goto label_7F1A6BC0;
    case 0x7F1A6BC4u: goto label_7F1A6BC4;
    case 0x7F1A6BC8u: goto label_7F1A6BC8;
    case 0x7F1A6BCCu: goto label_7F1A6BCC;
    case 0x7F1A6BD0u: goto label_7F1A6BD0;
    case 0x7F1A6BD4u: goto label_7F1A6BD4;
    case 0x7F1A6BD8u: goto label_7F1A6BD8;
    case 0x7F1A6BDCu: goto label_7F1A6BDC;
    case 0x7F1A6BE0u: goto label_7F1A6BE0;
    case 0x7F1A6BE4u: goto label_7F1A6BE4;
    case 0x7F1A6BE8u: goto label_7F1A6BE8;
    case 0x7F1A6BECu: goto label_7F1A6BEC;
    case 0x7F1A6BF0u: goto label_7F1A6BF0;
    case 0x7F1A6BF4u: goto label_7F1A6BF4;
    case 0x7F1A6BF8u: goto label_7F1A6BF8;
    case 0x7F1A6BFCu: goto label_7F1A6BFC;
    case 0x7F1A6C00u: goto label_7F1A6C00;
    case 0x7F1A6C04u: goto label_7F1A6C04;
    case 0x7F1A6C08u: goto label_7F1A6C08;
    case 0x7F1A6C0Cu: goto label_7F1A6C0C;
    case 0x7F1A6C10u: goto label_7F1A6C10;
    case 0x7F1A6C14u: goto label_7F1A6C14;
    case 0x7F1A6C18u: goto label_7F1A6C18;
    case 0x7F1A6C1Cu: goto label_7F1A6C1C;
    case 0x7F1A6C20u: goto label_7F1A6C20;
    case 0x7F1A6C24u: goto label_7F1A6C24;
    case 0x7F1A6C28u: goto label_7F1A6C28;
    case 0x7F1A6C2Cu: goto label_7F1A6C2C;
    case 0x7F1A6C30u: goto label_7F1A6C30;
    case 0x7F1A6C34u: goto label_7F1A6C34;
    case 0x7F1A6C38u: goto label_7F1A6C38;
    case 0x7F1A6C3Cu: goto label_7F1A6C3C;
    case 0x7F1A6C40u: goto label_7F1A6C40;
    case 0x7F1A6C44u: goto label_7F1A6C44;
    case 0x7F1A6C48u: goto label_7F1A6C48;
    case 0x7F1A6C4Cu: goto label_7F1A6C4C;
    case 0x7F1A6C50u: goto label_7F1A6C50;
    case 0x7F1A6C54u: goto label_7F1A6C54;
    case 0x7F1A6C58u: goto label_7F1A6C58;
    case 0x7F1A6C5Cu: goto label_7F1A6C5C;
    case 0x7F1A6C60u: goto label_7F1A6C60;
    case 0x7F1A6C64u: goto label_7F1A6C64;
    case 0x7F1A6C68u: goto label_7F1A6C68;
    case 0x7F1A6C6Cu: goto label_7F1A6C6C;
    case 0x7F1A6C70u: goto label_7F1A6C70;
    case 0x7F1A6C74u: goto label_7F1A6C74;
    case 0x7F1A6C78u: goto label_7F1A6C78;
    case 0x7F1A6C7Cu: goto label_7F1A6C7C;
    case 0x7F1A6C80u: goto label_7F1A6C80;
    case 0x7F1A6C84u: goto label_7F1A6C84;
    case 0x7F1A6C88u: goto label_7F1A6C88;
    case 0x7F1A6C8Cu: goto label_7F1A6C8C;
    case 0x7F1A6C90u: goto label_7F1A6C90;
    case 0x7F1A6C94u: goto label_7F1A6C94;
    case 0x7F1A6C98u: goto label_7F1A6C98;
    case 0x7F1A6C9Cu: goto label_7F1A6C9C;
    case 0x7F1A6CA0u: goto label_7F1A6CA0;
    case 0x7F1A6CA4u: goto label_7F1A6CA4;
    case 0x7F1A6CA8u: goto label_7F1A6CA8;
    case 0x7F1A6CACu: goto label_7F1A6CAC;
    case 0x7F1A6CB0u: goto label_7F1A6CB0;
    case 0x7F1A6CB4u: goto label_7F1A6CB4;
    case 0x7F1A6CB8u: goto label_7F1A6CB8;
    case 0x7F1A6CBCu: goto label_7F1A6CBC;
    case 0x7F1A6CC0u: goto label_7F1A6CC0;
    case 0x7F1A6CC4u: goto label_7F1A6CC4;
    case 0x7F1A6CC8u: goto label_7F1A6CC8;
    case 0x7F1A6CCCu: goto label_7F1A6CCC;
    case 0x7F1A6CD0u: goto label_7F1A6CD0;
    case 0x7F1A6CD4u: goto label_7F1A6CD4;
    case 0x7F1A6CD8u: goto label_7F1A6CD8;
    case 0x7F1A6CDCu: goto label_7F1A6CDC;
    case 0x7F1A6CE0u: goto label_7F1A6CE0;
    case 0x7F1A6CE4u: goto label_7F1A6CE4;
    case 0x7F1A6CE8u: goto label_7F1A6CE8;
    case 0x7F1A6CECu: goto label_7F1A6CEC;
    case 0x7F1A6CF0u: goto label_7F1A6CF0;
    case 0x7F1A6CF4u: goto label_7F1A6CF4;
    case 0x7F1A6CF8u: goto label_7F1A6CF8;
    case 0x7F1A6CFCu: goto label_7F1A6CFC;
    case 0x7F1A6D00u: goto label_7F1A6D00;
    case 0x7F1A6D04u: goto label_7F1A6D04;
    case 0x7F1A6D08u: goto label_7F1A6D08;
    case 0x7F1A6D0Cu: goto label_7F1A6D0C;
    case 0x7F1A6D10u: goto label_7F1A6D10;
    case 0x7F1A6D14u: goto label_7F1A6D14;
    case 0x7F1A6D18u: goto label_7F1A6D18;
    case 0x7F1A6D1Cu: goto label_7F1A6D1C;
    case 0x7F1A6D20u: goto label_7F1A6D20;
    case 0x7F1A6D24u: goto label_7F1A6D24;
    case 0x7F1A6D28u: goto label_7F1A6D28;
    case 0x7F1A6D2Cu: goto label_7F1A6D2C;
    case 0x7F1A6D30u: goto label_7F1A6D30;
    case 0x7F1A6D34u: goto label_7F1A6D34;
    case 0x7F1A6D38u: goto label_7F1A6D38;
    case 0x7F1A6D3Cu: goto label_7F1A6D3C;
    case 0x7F1A6D40u: goto label_7F1A6D40;
    case 0x7F1A6D44u: goto label_7F1A6D44;
    case 0x7F1A6D48u: goto label_7F1A6D48;
    case 0x7F1A6D4Cu: goto label_7F1A6D4C;
    case 0x7F1A6D50u: goto label_7F1A6D50;
    case 0x7F1A6D54u: goto label_7F1A6D54;
    case 0x7F1A6D58u: goto label_7F1A6D58;
    case 0x7F1A6D5Cu: goto label_7F1A6D5C;
    case 0x7F1A6D60u: goto label_7F1A6D60;
    case 0x7F1A6D64u: goto label_7F1A6D64;
    case 0x7F1A6D68u: goto label_7F1A6D68;
    case 0x7F1A6D6Cu: goto label_7F1A6D6C;
    case 0x7F1A6D70u: goto label_7F1A6D70;
    case 0x7F1A6D74u: goto label_7F1A6D74;
    case 0x7F1A6D78u: goto label_7F1A6D78;
    case 0x7F1A6D7Cu: goto label_7F1A6D7C;
    case 0x7F1A6D80u: goto label_7F1A6D80;
    case 0x7F1A6D84u: goto label_7F1A6D84;
    case 0x7F1A6D88u: goto label_7F1A6D88;
    case 0x7F1A6D8Cu: goto label_7F1A6D8C;
    case 0x7F1A6D90u: goto label_7F1A6D90;
    case 0x7F1A6D94u: goto label_7F1A6D94;
    case 0x7F1A6D98u: goto label_7F1A6D98;
    case 0x7F1A6D9Cu: goto label_7F1A6D9C;
    case 0x7F1A6DA0u: goto label_7F1A6DA0;
    case 0x7F1A6DA4u: goto label_7F1A6DA4;
    case 0x7F1A6DA8u: goto label_7F1A6DA8;
    case 0x7F1A6DACu: goto label_7F1A6DAC;
    case 0x7F1A6DB0u: goto label_7F1A6DB0;
    case 0x7F1A6DB4u: goto label_7F1A6DB4;
    case 0x7F1A6DB8u: goto label_7F1A6DB8;
    case 0x7F1A6DBCu: goto label_7F1A6DBC;
    case 0x7F1A6DC0u: goto label_7F1A6DC0;
    case 0x7F1A6DC4u: goto label_7F1A6DC4;
    case 0x7F1A6DC8u: goto label_7F1A6DC8;
    case 0x7F1A6DCCu: goto label_7F1A6DCC;
    case 0x7F1A6DD0u: goto label_7F1A6DD0;
    case 0x7F1A6DD4u: goto label_7F1A6DD4;
    case 0x7F1A6DD8u: goto label_7F1A6DD8;
    case 0x7F1A6DDCu: goto label_7F1A6DDC;
    case 0x7F1A6DE0u: goto label_7F1A6DE0;
    case 0x7F1A6DE4u: goto label_7F1A6DE4;
    case 0x7F1A6DE8u: goto label_7F1A6DE8;
    case 0x7F1A6DECu: goto label_7F1A6DEC;
    case 0x7F1A6DF0u: goto label_7F1A6DF0;
    case 0x7F1A6DF4u: goto label_7F1A6DF4;
    case 0x7F1A6DF8u: goto label_7F1A6DF8;
    case 0x7F1A6DFCu: goto label_7F1A6DFC;
    case 0x7F1A6E00u: goto label_7F1A6E00;
    case 0x7F1A6E04u: goto label_7F1A6E04;
    case 0x7F1A6E08u: goto label_7F1A6E08;
    case 0x7F1A6E0Cu: goto label_7F1A6E0C;
    case 0x7F1A6E10u: goto label_7F1A6E10;
    case 0x7F1A6E14u: goto label_7F1A6E14;
    case 0x7F1A6E18u: goto label_7F1A6E18;
    case 0x7F1A6E1Cu: goto label_7F1A6E1C;
    case 0x7F1A6E20u: goto label_7F1A6E20;
    case 0x7F1A6E24u: goto label_7F1A6E24;
    case 0x7F1A6E28u: goto label_7F1A6E28;
    case 0x7F1A6E2Cu: goto label_7F1A6E2C;
    case 0x7F1A6E30u: goto label_7F1A6E30;
    case 0x7F1A6E34u: goto label_7F1A6E34;
    case 0x7F1A6E38u: goto label_7F1A6E38;
    case 0x7F1A6E3Cu: goto label_7F1A6E3C;
    case 0x7F1A6E40u: goto label_7F1A6E40;
    case 0x7F1A6E44u: goto label_7F1A6E44;
    case 0x7F1A6E48u: goto label_7F1A6E48;
    case 0x7F1A6E4Cu: goto label_7F1A6E4C;
    case 0x7F1A6E50u: goto label_7F1A6E50;
    case 0x7F1A6E54u: goto label_7F1A6E54;
    case 0x7F1A6E58u: goto label_7F1A6E58;
    case 0x7F1A6E5Cu: goto label_7F1A6E5C;
    case 0x7F1A6E60u: goto label_7F1A6E60;
    case 0x7F1A6E64u: goto label_7F1A6E64;
    case 0x7F1A6E68u: goto label_7F1A6E68;
    case 0x7F1A6E6Cu: goto label_7F1A6E6C;
    case 0x7F1A6E70u: goto label_7F1A6E70;
    case 0x7F1A6E74u: goto label_7F1A6E74;
    case 0x7F1A6E78u: goto label_7F1A6E78;
    case 0x7F1A6E7Cu: goto label_7F1A6E7C;
    case 0x7F1A6E80u: goto label_7F1A6E80;
    case 0x7F1A6E84u: goto label_7F1A6E84;
    case 0x7F1A6E88u: goto label_7F1A6E88;
    case 0x7F1A6E8Cu: goto label_7F1A6E8C;
    case 0x7F1A6E90u: goto label_7F1A6E90;
    case 0x7F1A6E94u: goto label_7F1A6E94;
    case 0x7F1A6E98u: goto label_7F1A6E98;
    case 0x7F1A6E9Cu: goto label_7F1A6E9C;
    case 0x7F1A6EA0u: goto label_7F1A6EA0;
    case 0x7F1A6EA4u: goto label_7F1A6EA4;
    case 0x7F1A6EA8u: goto label_7F1A6EA8;
    case 0x7F1A6EACu: goto label_7F1A6EAC;
    case 0x7F1A6EB0u: goto label_7F1A6EB0;
    case 0x7F1A6EB4u: goto label_7F1A6EB4;
    case 0x7F1A6EB8u: goto label_7F1A6EB8;
    case 0x7F1A6EBCu: goto label_7F1A6EBC;
    case 0x7F1A6EC0u: goto label_7F1A6EC0;
    case 0x7F1A6EC4u: goto label_7F1A6EC4;
    case 0x7F1A6EC8u: goto label_7F1A6EC8;
    case 0x7F1A6ECCu: goto label_7F1A6ECC;
    case 0x7F1A6ED0u: goto label_7F1A6ED0;
    case 0x7F1A6ED4u: goto label_7F1A6ED4;
    case 0x7F1A6ED8u: goto label_7F1A6ED8;
    case 0x7F1A6EDCu: goto label_7F1A6EDC;
    case 0x7F1A6EE0u: goto label_7F1A6EE0;
    case 0x7F1A6EE4u: goto label_7F1A6EE4;
    case 0x7F1A6EE8u: goto label_7F1A6EE8;
    case 0x7F1A6EECu: goto label_7F1A6EEC;
    case 0x7F1A6EF0u: goto label_7F1A6EF0;
    case 0x7F1A6EF4u: goto label_7F1A6EF4;
    case 0x7F1A6EF8u: goto label_7F1A6EF8;
    case 0x7F1A6EFCu: goto label_7F1A6EFC;
    case 0x7F1A6F00u: goto label_7F1A6F00;
    case 0x7F1A6F04u: goto label_7F1A6F04;
    case 0x7F1A6F08u: goto label_7F1A6F08;
    case 0x7F1A6F0Cu: goto label_7F1A6F0C;
    case 0x7F1A6F10u: goto label_7F1A6F10;
    case 0x7F1A6F14u: goto label_7F1A6F14;
    case 0x7F1A6F18u: goto label_7F1A6F18;
    case 0x7F1A6F1Cu: goto label_7F1A6F1C;
    case 0x7F1A6F20u: goto label_7F1A6F20;
    case 0x7F1A6F24u: goto label_7F1A6F24;
    case 0x7F1A6F28u: goto label_7F1A6F28;
    case 0x7F1A6F2Cu: goto label_7F1A6F2C;
    case 0x7F1A6F30u: goto label_7F1A6F30;
    case 0x7F1A6F34u: goto label_7F1A6F34;
    case 0x7F1A6F38u: goto label_7F1A6F38;
    case 0x7F1A6F3Cu: goto label_7F1A6F3C;
    case 0x7F1A6F40u: goto label_7F1A6F40;
    case 0x7F1A6F44u: goto label_7F1A6F44;
    case 0x7F1A6F48u: goto label_7F1A6F48;
    case 0x7F1A6F4Cu: goto label_7F1A6F4C;
    case 0x7F1A6F50u: goto label_7F1A6F50;
    case 0x7F1A6F54u: goto label_7F1A6F54;
    case 0x7F1A6F58u: goto label_7F1A6F58;
    case 0x7F1A6F5Cu: goto label_7F1A6F5C;
    case 0x7F1A6F60u: goto label_7F1A6F60;
    case 0x7F1A6F64u: goto label_7F1A6F64;
    case 0x7F1A6F68u: goto label_7F1A6F68;
    case 0x7F1A6F6Cu: goto label_7F1A6F6C;
    case 0x7F1A6F70u: goto label_7F1A6F70;
    case 0x7F1A6F74u: goto label_7F1A6F74;
    case 0x7F1A6F78u: goto label_7F1A6F78;
    case 0x7F1A6F7Cu: goto label_7F1A6F7C;
    case 0x7F1A6F80u: goto label_7F1A6F80;
    case 0x7F1A6F84u: goto label_7F1A6F84;
    case 0x7F1A6F88u: goto label_7F1A6F88;
    case 0x7F1A6F8Cu: goto label_7F1A6F8C;
    case 0x7F1A6F90u: goto label_7F1A6F90;
    case 0x7F1A6F94u: goto label_7F1A6F94;
    case 0x7F1A6F98u: goto label_7F1A6F98;
    case 0x7F1A6F9Cu: goto label_7F1A6F9C;
    case 0x7F1A6FA0u: goto label_7F1A6FA0;
    case 0x7F1A6FA4u: goto label_7F1A6FA4;
    case 0x7F1A6FA8u: goto label_7F1A6FA8;
    case 0x7F1A6FACu: goto label_7F1A6FAC;
    case 0x7F1A6FB0u: goto label_7F1A6FB0;
    case 0x7F1A6FB4u: goto label_7F1A6FB4;
    case 0x7F1A6FB8u: goto label_7F1A6FB8;
    case 0x7F1A6FBCu: goto label_7F1A6FBC;
    case 0x7F1A6FC0u: goto label_7F1A6FC0;
    case 0x7F1A6FC4u: goto label_7F1A6FC4;
    case 0x7F1A6FC8u: goto label_7F1A6FC8;
    case 0x7F1A6FCCu: goto label_7F1A6FCC;
    case 0x7F1A6FD0u: goto label_7F1A6FD0;
    case 0x7F1A6FD4u: goto label_7F1A6FD4;
    case 0x7F1A6FD8u: goto label_7F1A6FD8;
    case 0x7F1A6FDCu: goto label_7F1A6FDC;
    case 0x7F1A6FE0u: goto label_7F1A6FE0;
    case 0x7F1A6FE4u: goto label_7F1A6FE4;
    case 0x7F1A6FE8u: goto label_7F1A6FE8;
    case 0x7F1A6FECu: goto label_7F1A6FEC;
    case 0x7F1A6FF0u: goto label_7F1A6FF0;
    case 0x7F1A6FF4u: goto label_7F1A6FF4;
    case 0x7F1A6FF8u: goto label_7F1A6FF8;
    case 0x7F1A6FFCu: goto label_7F1A6FFC;
    case 0x7F1A7000u: goto label_7F1A7000;
    case 0x7F1A7004u: goto label_7F1A7004;
    case 0x7F1A7008u: goto label_7F1A7008;
    case 0x7F1A700Cu: goto label_7F1A700C;
    case 0x7F1A7010u: goto label_7F1A7010;
    case 0x7F1A7014u: goto label_7F1A7014;
    case 0x7F1A7018u: goto label_7F1A7018;
    case 0x7F1A701Cu: goto label_7F1A701C;
    case 0x7F1A7020u: goto label_7F1A7020;
    case 0x7F1A7024u: goto label_7F1A7024;
    case 0x7F1A7028u: goto label_7F1A7028;
    case 0x7F1A702Cu: goto label_7F1A702C;
    case 0x7F1A7030u: goto label_7F1A7030;
    case 0x7F1A7034u: goto label_7F1A7034;
    case 0x7F1A7038u: goto label_7F1A7038;
    case 0x7F1A703Cu: goto label_7F1A703C;
    case 0x7F1A7040u: goto label_7F1A7040;
    case 0x7F1A7044u: goto label_7F1A7044;
    case 0x7F1A7048u: goto label_7F1A7048;
    case 0x7F1A704Cu: goto label_7F1A704C;
    case 0x7F1A7050u: goto label_7F1A7050;
    case 0x7F1A7054u: goto label_7F1A7054;
    case 0x7F1A7058u: goto label_7F1A7058;
    case 0x7F1A705Cu: goto label_7F1A705C;
    case 0x7F1A7060u: goto label_7F1A7060;
    case 0x7F1A7064u: goto label_7F1A7064;
    case 0x7F1A7068u: goto label_7F1A7068;
    case 0x7F1A706Cu: goto label_7F1A706C;
    case 0x7F1A7070u: goto label_7F1A7070;
    case 0x7F1A7074u: goto label_7F1A7074;
    case 0x7F1A7078u: goto label_7F1A7078;
    case 0x7F1A707Cu: goto label_7F1A707C;
    case 0x7F1A7080u: goto label_7F1A7080;
    case 0x7F1A7084u: goto label_7F1A7084;
    case 0x7F1A7088u: goto label_7F1A7088;
    case 0x7F1A708Cu: goto label_7F1A708C;
    case 0x7F1A7090u: goto label_7F1A7090;
    case 0x7F1A7094u: goto label_7F1A7094;
    case 0x7F1A7098u: goto label_7F1A7098;
    case 0x7F1A709Cu: goto label_7F1A709C;
    case 0x7F1A70A0u: goto label_7F1A70A0;
    case 0x7F1A70A4u: goto label_7F1A70A4;
    case 0x7F1A70A8u: goto label_7F1A70A8;
    case 0x7F1A70ACu: goto label_7F1A70AC;
    case 0x7F1A70B0u: goto label_7F1A70B0;
    case 0x7F1A70B4u: goto label_7F1A70B4;
    case 0x7F1A70B8u: goto label_7F1A70B8;
    case 0x7F1A70BCu: goto label_7F1A70BC;
    case 0x7F1A70C0u: goto label_7F1A70C0;
    case 0x7F1A70C4u: goto label_7F1A70C4;
    case 0x7F1A70C8u: goto label_7F1A70C8;
    case 0x7F1A70CCu: goto label_7F1A70CC;
    case 0x7F1A70D0u: goto label_7F1A70D0;
    case 0x7F1A70D4u: goto label_7F1A70D4;
    case 0x7F1A70D8u: goto label_7F1A70D8;
    case 0x7F1A70DCu: goto label_7F1A70DC;
    case 0x7F1A70E0u: goto label_7F1A70E0;
    case 0x7F1A70E4u: goto label_7F1A70E4;
    case 0x7F1A70E8u: goto label_7F1A70E8;
    case 0x7F1A70ECu: goto label_7F1A70EC;
    case 0x7F1A70F0u: goto label_7F1A70F0;
    case 0x7F1A70F4u: goto label_7F1A70F4;
    case 0x7F1A70F8u: goto label_7F1A70F8;
    case 0x7F1A70FCu: goto label_7F1A70FC;
    case 0x7F1A7100u: goto label_7F1A7100;
    case 0x7F1A7104u: goto label_7F1A7104;
    case 0x7F1A7108u: goto label_7F1A7108;
    case 0x7F1A710Cu: goto label_7F1A710C;
    case 0x7F1A7110u: goto label_7F1A7110;
    case 0x7F1A7114u: goto label_7F1A7114;
    case 0x7F1A7118u: goto label_7F1A7118;
    case 0x7F1A711Cu: goto label_7F1A711C;
    case 0x7F1A7120u: goto label_7F1A7120;
    case 0x7F1A7124u: goto label_7F1A7124;
    case 0x7F1A7128u: goto label_7F1A7128;
    case 0x7F1A712Cu: goto label_7F1A712C;
    case 0x7F1A7130u: goto label_7F1A7130;
    case 0x7F1A7134u: goto label_7F1A7134;
    case 0x7F1A7138u: goto label_7F1A7138;
    case 0x7F1A713Cu: goto label_7F1A713C;
    case 0x7F1A7140u: goto label_7F1A7140;
    case 0x7F1A7144u: goto label_7F1A7144;
    case 0x7F1A7148u: goto label_7F1A7148;
    case 0x7F1A714Cu: goto label_7F1A714C;
    case 0x7F1A7150u: goto label_7F1A7150;
    case 0x7F1A7154u: goto label_7F1A7154;
    case 0x7F1A7158u: goto label_7F1A7158;
    case 0x7F1A715Cu: goto label_7F1A715C;
    case 0x7F1A7160u: goto label_7F1A7160;
    case 0x7F1A7164u: goto label_7F1A7164;
    case 0x7F1A7168u: goto label_7F1A7168;
    case 0x7F1A716Cu: goto label_7F1A716C;
    case 0x7F1A7170u: goto label_7F1A7170;
    case 0x7F1A7174u: goto label_7F1A7174;
    case 0x7F1A7178u: goto label_7F1A7178;
    case 0x7F1A717Cu: goto label_7F1A717C;
    case 0x7F1A7180u: goto label_7F1A7180;
    case 0x7F1A7184u: goto label_7F1A7184;
    case 0x7F1A7188u: goto label_7F1A7188;
    case 0x7F1A718Cu: goto label_7F1A718C;
    case 0x7F1A7190u: goto label_7F1A7190;
    case 0x7F1A7194u: goto label_7F1A7194;
    case 0x7F1A7198u: goto label_7F1A7198;
    case 0x7F1A719Cu: goto label_7F1A719C;
    case 0x7F1A71A0u: goto label_7F1A71A0;
    case 0x7F1A71A4u: goto label_7F1A71A4;
    case 0x7F1A71A8u: goto label_7F1A71A8;
    case 0x7F1A71ACu: goto label_7F1A71AC;
    case 0x7F1A71B0u: goto label_7F1A71B0;
    case 0x7F1A71B4u: goto label_7F1A71B4;
    case 0x7F1A71B8u: goto label_7F1A71B8;
    case 0x7F1A71BCu: goto label_7F1A71BC;
    case 0x7F1A71C0u: goto label_7F1A71C0;
    case 0x7F1A71C4u: goto label_7F1A71C4;
    case 0x7F1A71C8u: goto label_7F1A71C8;
    case 0x7F1A71CCu: goto label_7F1A71CC;
    case 0x7F1A71D0u: goto label_7F1A71D0;
    case 0x7F1A71D4u: goto label_7F1A71D4;
    case 0x7F1A71D8u: goto label_7F1A71D8;
    case 0x7F1A71DCu: goto label_7F1A71DC;
    case 0x7F1A71E0u: goto label_7F1A71E0;
    case 0x7F1A71E4u: goto label_7F1A71E4;
    case 0x7F1A71E8u: goto label_7F1A71E8;
    case 0x7F1A71ECu: goto label_7F1A71EC;
    case 0x7F1A71F0u: goto label_7F1A71F0;
    case 0x7F1A71F4u: goto label_7F1A71F4;
    case 0x7F1A71F8u: goto label_7F1A71F8;
    case 0x7F1A71FCu: goto label_7F1A71FC;
    case 0x7F1A7200u: goto label_7F1A7200;
    case 0x7F1A7204u: goto label_7F1A7204;
    case 0x7F1A7208u: goto label_7F1A7208;
    case 0x7F1A720Cu: goto label_7F1A720C;
    case 0x7F1A7210u: goto label_7F1A7210;
    case 0x7F1A7214u: goto label_7F1A7214;
    case 0x7F1A7218u: goto label_7F1A7218;
    case 0x7F1A721Cu: goto label_7F1A721C;
    case 0x7F1A7220u: goto label_7F1A7220;
    case 0x7F1A7224u: goto label_7F1A7224;
    case 0x7F1A7228u: goto label_7F1A7228;
    case 0x7F1A722Cu: goto label_7F1A722C;
    case 0x7F1A7230u: goto label_7F1A7230;
    case 0x7F1A7234u: goto label_7F1A7234;
    case 0x7F1A7238u: goto label_7F1A7238;
    case 0x7F1A723Cu: goto label_7F1A723C;
    case 0x7F1A7240u: goto label_7F1A7240;
    case 0x7F1A7244u: goto label_7F1A7244;
    case 0x7F1A7248u: goto label_7F1A7248;
    case 0x7F1A724Cu: goto label_7F1A724C;
    case 0x7F1A7250u: goto label_7F1A7250;
    case 0x7F1A7254u: goto label_7F1A7254;
    case 0x7F1A7258u: goto label_7F1A7258;
    case 0x7F1A725Cu: goto label_7F1A725C;
    case 0x7F1A7260u: goto label_7F1A7260;
    case 0x7F1A7264u: goto label_7F1A7264;
    case 0x7F1A7268u: goto label_7F1A7268;
    case 0x7F1A726Cu: goto label_7F1A726C;
    case 0x7F1A7270u: goto label_7F1A7270;
    case 0x7F1A7274u: goto label_7F1A7274;
    case 0x7F1A7278u: goto label_7F1A7278;
    case 0x7F1A727Cu: goto label_7F1A727C;
    case 0x7F1A7280u: goto label_7F1A7280;
    case 0x7F1A7284u: goto label_7F1A7284;
    case 0x7F1A7288u: goto label_7F1A7288;
    case 0x7F1A728Cu: goto label_7F1A728C;
    case 0x7F1A7290u: goto label_7F1A7290;
    case 0x7F1A7294u: goto label_7F1A7294;
    case 0x7F1A7298u: goto label_7F1A7298;
    case 0x7F1A729Cu: goto label_7F1A729C;
    case 0x7F1A72A0u: goto label_7F1A72A0;
    case 0x7F1A72A4u: goto label_7F1A72A4;
    case 0x7F1A72A8u: goto label_7F1A72A8;
    case 0x7F1A72ACu: goto label_7F1A72AC;
    case 0x7F1A72B0u: goto label_7F1A72B0;
    case 0x7F1A72B4u: goto label_7F1A72B4;
    case 0x7F1A72B8u: goto label_7F1A72B8;
    case 0x7F1A72BCu: goto label_7F1A72BC;
    case 0x7F1A72C0u: goto label_7F1A72C0;
    case 0x7F1A72C4u: goto label_7F1A72C4;
    case 0x7F1A72C8u: goto label_7F1A72C8;
    case 0x7F1A72CCu: goto label_7F1A72CC;
    case 0x7F1A72D0u: goto label_7F1A72D0;
    case 0x7F1A72D4u: goto label_7F1A72D4;
    case 0x7F1A72D8u: goto label_7F1A72D8;
    case 0x7F1A72DCu: goto label_7F1A72DC;
    case 0x7F1A72E0u: goto label_7F1A72E0;
    case 0x7F1A72E4u: goto label_7F1A72E4;
    case 0x7F1A72E8u: goto label_7F1A72E8;
    case 0x7F1A72ECu: goto label_7F1A72EC;
    case 0x7F1A72F0u: goto label_7F1A72F0;
    case 0x7F1A72F4u: goto label_7F1A72F4;
    case 0x7F1A72F8u: goto label_7F1A72F8;
    case 0x7F1A72FCu: goto label_7F1A72FC;
    case 0x7F1A7300u: goto label_7F1A7300;
    case 0x7F1A7304u: goto label_7F1A7304;
    case 0x7F1A7308u: goto label_7F1A7308;
    case 0x7F1A730Cu: goto label_7F1A730C;
    case 0x7F1A7310u: goto label_7F1A7310;
    case 0x7F1A7314u: goto label_7F1A7314;
    case 0x7F1A7318u: goto label_7F1A7318;
    case 0x7F1A731Cu: goto label_7F1A731C;
    case 0x7F1A7320u: goto label_7F1A7320;
    case 0x7F1A7324u: goto label_7F1A7324;
    case 0x7F1A7328u: goto label_7F1A7328;
    case 0x7F1A732Cu: goto label_7F1A732C;
    case 0x7F1A7330u: goto label_7F1A7330;
    case 0x7F1A7334u: goto label_7F1A7334;
    case 0x7F1A7338u: goto label_7F1A7338;
    case 0x7F1A733Cu: goto label_7F1A733C;
    case 0x7F1A7340u: goto label_7F1A7340;
    case 0x7F1A7344u: goto label_7F1A7344;
    case 0x7F1A7348u: goto label_7F1A7348;
    case 0x7F1A734Cu: goto label_7F1A734C;
    case 0x7F1A7350u: goto label_7F1A7350;
    case 0x7F1A7354u: goto label_7F1A7354;
    case 0x7F1A7358u: goto label_7F1A7358;
    case 0x7F1A735Cu: goto label_7F1A735C;
    case 0x7F1A7360u: goto label_7F1A7360;
    case 0x7F1A7364u: goto label_7F1A7364;
    case 0x7F1A7368u: goto label_7F1A7368;
    case 0x7F1A736Cu: goto label_7F1A736C;
    case 0x7F1A7370u: goto label_7F1A7370;
    case 0x7F1A7374u: goto label_7F1A7374;
    case 0x7F1A7378u: goto label_7F1A7378;
    case 0x7F1A737Cu: goto label_7F1A737C;
    case 0x7F1A7380u: goto label_7F1A7380;
    case 0x7F1A7384u: goto label_7F1A7384;
    case 0x7F1A7388u: goto label_7F1A7388;
    case 0x7F1A738Cu: goto label_7F1A738C;
    case 0x7F1A7390u: goto label_7F1A7390;
    case 0x7F1A7394u: goto label_7F1A7394;
    case 0x7F1A7398u: goto label_7F1A7398;
    case 0x7F1A739Cu: goto label_7F1A739C;
    case 0x7F1A73A0u: goto label_7F1A73A0;
    case 0x7F1A73A4u: goto label_7F1A73A4;
    case 0x7F1A73A8u: goto label_7F1A73A8;
    case 0x7F1A73ACu: goto label_7F1A73AC;
    case 0x7F1A73B0u: goto label_7F1A73B0;
    case 0x7F1A73B4u: goto label_7F1A73B4;
    case 0x7F1A73B8u: goto label_7F1A73B8;
    case 0x7F1A73BCu: goto label_7F1A73BC;
    case 0x7F1A73C0u: goto label_7F1A73C0;
    case 0x7F1A73C4u: goto label_7F1A73C4;
    case 0x7F1A73C8u: goto label_7F1A73C8;
    case 0x7F1A73CCu: goto label_7F1A73CC;
    case 0x7F1A73D0u: goto label_7F1A73D0;
    case 0x7F1A73D4u: goto label_7F1A73D4;
    case 0x7F1A73D8u: goto label_7F1A73D8;
    case 0x7F1A73DCu: goto label_7F1A73DC;
    case 0x7F1A73E0u: goto label_7F1A73E0;
    case 0x7F1A73E4u: goto label_7F1A73E4;
    case 0x7F1A73E8u: goto label_7F1A73E8;
    case 0x7F1A73ECu: goto label_7F1A73EC;
    case 0x7F1A73F0u: goto label_7F1A73F0;
    case 0x7F1A73F4u: goto label_7F1A73F4;
    case 0x7F1A73F8u: goto label_7F1A73F8;
    case 0x7F1A73FCu: goto label_7F1A73FC;
    case 0x7F1A7400u: goto label_7F1A7400;
    case 0x7F1A7404u: goto label_7F1A7404;
    case 0x7F1A7408u: goto label_7F1A7408;
    case 0x7F1A740Cu: goto label_7F1A740C;
    case 0x7F1A7410u: goto label_7F1A7410;
    case 0x7F1A7414u: goto label_7F1A7414;
    case 0x7F1A7418u: goto label_7F1A7418;
    case 0x7F1A741Cu: goto label_7F1A741C;
    case 0x7F1A7420u: goto label_7F1A7420;
    case 0x7F1A7424u: goto label_7F1A7424;
    case 0x7F1A7428u: goto label_7F1A7428;
    case 0x7F1A742Cu: goto label_7F1A742C;
    case 0x7F1A7430u: goto label_7F1A7430;
    case 0x7F1A7434u: goto label_7F1A7434;
    case 0x7F1A7438u: goto label_7F1A7438;
    case 0x7F1A743Cu: goto label_7F1A743C;
    case 0x7F1A7440u: goto label_7F1A7440;
    case 0x7F1A7444u: goto label_7F1A7444;
    case 0x7F1A7448u: goto label_7F1A7448;
    case 0x7F1A744Cu: goto label_7F1A744C;
    case 0x7F1A7450u: goto label_7F1A7450;
    case 0x7F1A7454u: goto label_7F1A7454;
    case 0x7F1A7458u: goto label_7F1A7458;
    case 0x7F1A745Cu: goto label_7F1A745C;
    case 0x7F1A7460u: goto label_7F1A7460;
    case 0x7F1A7464u: goto label_7F1A7464;
    case 0x7F1A7468u: goto label_7F1A7468;
    case 0x7F1A746Cu: goto label_7F1A746C;
    case 0x7F1A7470u: goto label_7F1A7470;
    case 0x7F1A7474u: goto label_7F1A7474;
    case 0x7F1A7478u: goto label_7F1A7478;
    case 0x7F1A747Cu: goto label_7F1A747C;
    case 0x7F1A7480u: goto label_7F1A7480;
    case 0x7F1A7484u: goto label_7F1A7484;
    case 0x7F1A7488u: goto label_7F1A7488;
    case 0x7F1A748Cu: goto label_7F1A748C;
    case 0x7F1A7490u: goto label_7F1A7490;
    case 0x7F1A7494u: goto label_7F1A7494;
    case 0x7F1A7498u: goto label_7F1A7498;
    case 0x7F1A749Cu: goto label_7F1A749C;
    case 0x7F1A74A0u: goto label_7F1A74A0;
    case 0x7F1A74A4u: goto label_7F1A74A4;
    case 0x7F1A74A8u: goto label_7F1A74A8;
    case 0x7F1A74ACu: goto label_7F1A74AC;
    case 0x7F1A74B0u: goto label_7F1A74B0;
    case 0x7F1A74B4u: goto label_7F1A74B4;
    case 0x7F1A74B8u: goto label_7F1A74B8;
    case 0x7F1A74BCu: goto label_7F1A74BC;
    case 0x7F1A74C0u: goto label_7F1A74C0;
    case 0x7F1A74C4u: goto label_7F1A74C4;
    case 0x7F1A74C8u: goto label_7F1A74C8;
    case 0x7F1A74CCu: goto label_7F1A74CC;
    case 0x7F1A74D0u: goto label_7F1A74D0;
    case 0x7F1A74D4u: goto label_7F1A74D4;
    case 0x7F1A74D8u: goto label_7F1A74D8;
    case 0x7F1A74DCu: goto label_7F1A74DC;
    case 0x7F1A74E0u: goto label_7F1A74E0;
    case 0x7F1A74E4u: goto label_7F1A74E4;
    case 0x7F1A74E8u: goto label_7F1A74E8;
    case 0x7F1A74ECu: goto label_7F1A74EC;
    case 0x7F1A74F0u: goto label_7F1A74F0;
    case 0x7F1A74F4u: goto label_7F1A74F4;
    case 0x7F1A74F8u: goto label_7F1A74F8;
    case 0x7F1A74FCu: goto label_7F1A74FC;
    case 0x7F1A7500u: goto label_7F1A7500;
    case 0x7F1A7504u: goto label_7F1A7504;
    case 0x7F1A7508u: goto label_7F1A7508;
    case 0x7F1A750Cu: goto label_7F1A750C;
    case 0x7F1A7510u: goto label_7F1A7510;
    case 0x7F1A7514u: goto label_7F1A7514;
    case 0x7F1A7518u: goto label_7F1A7518;
    case 0x7F1A751Cu: goto label_7F1A751C;
    case 0x7F1A7520u: goto label_7F1A7520;
    case 0x7F1A7524u: goto label_7F1A7524;
    case 0x7F1A7528u: goto label_7F1A7528;
    case 0x7F1A752Cu: goto label_7F1A752C;
    case 0x7F1A7530u: goto label_7F1A7530;
    case 0x7F1A7534u: goto label_7F1A7534;
    case 0x7F1A7538u: goto label_7F1A7538;
    case 0x7F1A753Cu: goto label_7F1A753C;
    case 0x7F1A7540u: goto label_7F1A7540;
    case 0x7F1A7544u: goto label_7F1A7544;
    case 0x7F1A7548u: goto label_7F1A7548;
    case 0x7F1A754Cu: goto label_7F1A754C;
    case 0x7F1A7550u: goto label_7F1A7550;
    case 0x7F1A7554u: goto label_7F1A7554;
    case 0x7F1A7558u: goto label_7F1A7558;
    case 0x7F1A755Cu: goto label_7F1A755C;
    case 0x7F1A7560u: goto label_7F1A7560;
    case 0x7F1A7564u: goto label_7F1A7564;
    case 0x7F1A7568u: goto label_7F1A7568;
    case 0x7F1A756Cu: goto label_7F1A756C;
    case 0x7F1A7570u: goto label_7F1A7570;
    case 0x7F1A7574u: goto label_7F1A7574;
    case 0x7F1A7578u: goto label_7F1A7578;
    case 0x7F1A757Cu: goto label_7F1A757C;
    case 0x7F1A7580u: goto label_7F1A7580;
    case 0x7F1A7584u: goto label_7F1A7584;
    case 0x7F1A7588u: goto label_7F1A7588;
    case 0x7F1A758Cu: goto label_7F1A758C;
    case 0x7F1A7590u: goto label_7F1A7590;
    case 0x7F1A7594u: goto label_7F1A7594;
    case 0x7F1A7598u: goto label_7F1A7598;
    case 0x7F1A759Cu: goto label_7F1A759C;
    case 0x7F1A75A0u: goto label_7F1A75A0;
    case 0x7F1A75A4u: goto label_7F1A75A4;
    case 0x7F1A75A8u: goto label_7F1A75A8;
    case 0x7F1A75ACu: goto label_7F1A75AC;
    case 0x7F1A75B0u: goto label_7F1A75B0;
    case 0x7F1A75B4u: goto label_7F1A75B4;
    case 0x7F1A75B8u: goto label_7F1A75B8;
    case 0x7F1A75BCu: goto label_7F1A75BC;
    case 0x7F1A75C0u: goto label_7F1A75C0;
    case 0x7F1A75C4u: goto label_7F1A75C4;
    case 0x7F1A75C8u: goto label_7F1A75C8;
    case 0x7F1A75CCu: goto label_7F1A75CC;
    case 0x7F1A75D0u: goto label_7F1A75D0;
    case 0x7F1A75D4u: goto label_7F1A75D4;
    case 0x7F1A75D8u: goto label_7F1A75D8;
    case 0x7F1A75DCu: goto label_7F1A75DC;
    case 0x7F1A75E0u: goto label_7F1A75E0;
    case 0x7F1A75E4u: goto label_7F1A75E4;
    case 0x7F1A75E8u: goto label_7F1A75E8;
    case 0x7F1A75ECu: goto label_7F1A75EC;
    case 0x7F1A75F0u: goto label_7F1A75F0;
    case 0x7F1A75F4u: goto label_7F1A75F4;
    case 0x7F1A75F8u: goto label_7F1A75F8;
    case 0x7F1A75FCu: goto label_7F1A75FC;
    case 0x7F1A7600u: goto label_7F1A7600;
    case 0x7F1A7604u: goto label_7F1A7604;
    case 0x7F1A7608u: goto label_7F1A7608;
    case 0x7F1A760Cu: goto label_7F1A760C;
    case 0x7F1A7610u: goto label_7F1A7610;
    case 0x7F1A7614u: goto label_7F1A7614;
    case 0x7F1A7618u: goto label_7F1A7618;
    case 0x7F1A761Cu: goto label_7F1A761C;
    case 0x7F1A7620u: goto label_7F1A7620;
    case 0x7F1A7624u: goto label_7F1A7624;
    case 0x7F1A7628u: goto label_7F1A7628;
    case 0x7F1A762Cu: goto label_7F1A762C;
    case 0x7F1A7630u: goto label_7F1A7630;
    case 0x7F1A7634u: goto label_7F1A7634;
    case 0x7F1A7638u: goto label_7F1A7638;
    case 0x7F1A763Cu: goto label_7F1A763C;
    case 0x7F1A7640u: goto label_7F1A7640;
    case 0x7F1A7644u: goto label_7F1A7644;
    case 0x7F1A7648u: goto label_7F1A7648;
    case 0x7F1A764Cu: goto label_7F1A764C;
    case 0x7F1A7650u: goto label_7F1A7650;
    case 0x7F1A7654u: goto label_7F1A7654;
    case 0x7F1A7658u: goto label_7F1A7658;
    case 0x7F1A765Cu: goto label_7F1A765C;
    case 0x7F1A7660u: goto label_7F1A7660;
    case 0x7F1A7664u: goto label_7F1A7664;
    case 0x7F1A7668u: goto label_7F1A7668;
    case 0x7F1A766Cu: goto label_7F1A766C;
    case 0x7F1A7670u: goto label_7F1A7670;
    case 0x7F1A7674u: goto label_7F1A7674;
    case 0x7F1A7678u: goto label_7F1A7678;
    case 0x7F1A767Cu: goto label_7F1A767C;
    case 0x7F1A7680u: goto label_7F1A7680;
    case 0x7F1A7684u: goto label_7F1A7684;
    case 0x7F1A7688u: goto label_7F1A7688;
    case 0x7F1A768Cu: goto label_7F1A768C;
    case 0x7F1A7690u: goto label_7F1A7690;
    case 0x7F1A7694u: goto label_7F1A7694;
    case 0x7F1A7698u: goto label_7F1A7698;
    case 0x7F1A769Cu: goto label_7F1A769C;
    case 0x7F1A76A0u: goto label_7F1A76A0;
    case 0x7F1A76A4u: goto label_7F1A76A4;
    case 0x7F1A76A8u: goto label_7F1A76A8;
    case 0x7F1A76ACu: goto label_7F1A76AC;
    case 0x7F1A76B0u: goto label_7F1A76B0;
    case 0x7F1A76B4u: goto label_7F1A76B4;
    case 0x7F1A76B8u: goto label_7F1A76B8;
    case 0x7F1A76BCu: goto label_7F1A76BC;
    case 0x7F1A76C0u: goto label_7F1A76C0;
    case 0x7F1A76C4u: goto label_7F1A76C4;
    case 0x7F1A76C8u: goto label_7F1A76C8;
    case 0x7F1A76CCu: goto label_7F1A76CC;
    case 0x7F1A76D0u: goto label_7F1A76D0;
    case 0x7F1A76D4u: goto label_7F1A76D4;
    case 0x7F1A76D8u: goto label_7F1A76D8;
    case 0x7F1A76DCu: goto label_7F1A76DC;
    case 0x7F1A76E0u: goto label_7F1A76E0;
    case 0x7F1A76E4u: goto label_7F1A76E4;
    case 0x7F1A76E8u: goto label_7F1A76E8;
    case 0x7F1A76ECu: goto label_7F1A76EC;
    case 0x7F1A76F0u: goto label_7F1A76F0;
    case 0x7F1A76F4u: goto label_7F1A76F4;
    case 0x7F1A76F8u: goto label_7F1A76F8;
    case 0x7F1A76FCu: goto label_7F1A76FC;
    case 0x7F1A7700u: goto label_7F1A7700;
    case 0x7F1A7704u: goto label_7F1A7704;
    case 0x7F1A7708u: goto label_7F1A7708;
    case 0x7F1A770Cu: goto label_7F1A770C;
    case 0x7F1A7710u: goto label_7F1A7710;
    case 0x7F1A7714u: goto label_7F1A7714;
    case 0x7F1A7718u: goto label_7F1A7718;
    case 0x7F1A771Cu: goto label_7F1A771C;
    case 0x7F1A7720u: goto label_7F1A7720;
    case 0x7F1A7724u: goto label_7F1A7724;
    case 0x7F1A7728u: goto label_7F1A7728;
    case 0x7F1A772Cu: goto label_7F1A772C;
    case 0x7F1A7730u: goto label_7F1A7730;
    case 0x7F1A7734u: goto label_7F1A7734;
    case 0x7F1A7738u: goto label_7F1A7738;
    case 0x7F1A773Cu: goto label_7F1A773C;
    case 0x7F1A7740u: goto label_7F1A7740;
    case 0x7F1A7744u: goto label_7F1A7744;
    case 0x7F1A7748u: goto label_7F1A7748;
    case 0x7F1A774Cu: goto label_7F1A774C;
    case 0x7F1A7750u: goto label_7F1A7750;
    case 0x7F1A7754u: goto label_7F1A7754;
    case 0x7F1A7758u: goto label_7F1A7758;
    case 0x7F1A775Cu: goto label_7F1A775C;
    case 0x7F1A7760u: goto label_7F1A7760;
    case 0x7F1A7764u: goto label_7F1A7764;
    case 0x7F1A7768u: goto label_7F1A7768;
    case 0x7F1A776Cu: goto label_7F1A776C;
    case 0x7F1A7770u: goto label_7F1A7770;
    case 0x7F1A7774u: goto label_7F1A7774;
    case 0x7F1A7778u: goto label_7F1A7778;
    case 0x7F1A777Cu: goto label_7F1A777C;
    case 0x7F1A7780u: goto label_7F1A7780;
    case 0x7F1A7784u: goto label_7F1A7784;
    case 0x7F1A7788u: goto label_7F1A7788;
    case 0x7F1A778Cu: goto label_7F1A778C;
    case 0x7F1A7790u: goto label_7F1A7790;
    case 0x7F1A7794u: goto label_7F1A7794;
    case 0x7F1A7798u: goto label_7F1A7798;
    case 0x7F1A779Cu: goto label_7F1A779C;
    case 0x7F1A77A0u: goto label_7F1A77A0;
    case 0x7F1A77A4u: goto label_7F1A77A4;
    case 0x7F1A77A8u: goto label_7F1A77A8;
    case 0x7F1A77ACu: goto label_7F1A77AC;
    case 0x7F1A77B0u: goto label_7F1A77B0;
    case 0x7F1A77B4u: goto label_7F1A77B4;
    case 0x7F1A77B8u: goto label_7F1A77B8;
    case 0x7F1A77BCu: goto label_7F1A77BC;
    case 0x7F1A77C0u: goto label_7F1A77C0;
    case 0x7F1A77C4u: goto label_7F1A77C4;
    case 0x7F1A77C8u: goto label_7F1A77C8;
    case 0x7F1A77CCu: goto label_7F1A77CC;
    case 0x7F1A77D0u: goto label_7F1A77D0;
    case 0x7F1A77D4u: goto label_7F1A77D4;
    case 0x7F1A77D8u: goto label_7F1A77D8;
    case 0x7F1A77DCu: goto label_7F1A77DC;
    case 0x7F1A77E0u: goto label_7F1A77E0;
    case 0x7F1A77E4u: goto label_7F1A77E4;
    case 0x7F1A77E8u: goto label_7F1A77E8;
    case 0x7F1A77ECu: goto label_7F1A77EC;
    case 0x7F1A77F0u: goto label_7F1A77F0;
    case 0x7F1A77F4u: goto label_7F1A77F4;
    case 0x7F1A77F8u: goto label_7F1A77F8;
    case 0x7F1A77FCu: goto label_7F1A77FC;
    case 0x7F1A7800u: goto label_7F1A7800;
    case 0x7F1A7804u: goto label_7F1A7804;
    case 0x7F1A7808u: goto label_7F1A7808;
    case 0x7F1A780Cu: goto label_7F1A780C;
    case 0x7F1A7810u: goto label_7F1A7810;
    case 0x7F1A7814u: goto label_7F1A7814;
    case 0x7F1A7818u: goto label_7F1A7818;
    case 0x7F1A781Cu: goto label_7F1A781C;
    case 0x7F1A7820u: goto label_7F1A7820;
    case 0x7F1A7824u: goto label_7F1A7824;
    case 0x7F1A7828u: goto label_7F1A7828;
    case 0x7F1A782Cu: goto label_7F1A782C;
    case 0x7F1A7830u: goto label_7F1A7830;
    case 0x7F1A7834u: goto label_7F1A7834;
    case 0x7F1A7838u: goto label_7F1A7838;
    case 0x7F1A783Cu: goto label_7F1A783C;
    case 0x7F1A7840u: goto label_7F1A7840;
    case 0x7F1A7844u: goto label_7F1A7844;
    case 0x7F1A7848u: goto label_7F1A7848;
    case 0x7F1A784Cu: goto label_7F1A784C;
    case 0x7F1A7850u: goto label_7F1A7850;
    case 0x7F1A7854u: goto label_7F1A7854;
    case 0x7F1A7858u: goto label_7F1A7858;
    case 0x7F1A785Cu: goto label_7F1A785C;
    case 0x7F1A7860u: goto label_7F1A7860;
    case 0x7F1A7864u: goto label_7F1A7864;
    case 0x7F1A7868u: goto label_7F1A7868;
    case 0x7F1A786Cu: goto label_7F1A786C;
    case 0x7F1A7870u: goto label_7F1A7870;
    case 0x7F1A7874u: goto label_7F1A7874;
    case 0x7F1A7878u: goto label_7F1A7878;
    case 0x7F1A787Cu: goto label_7F1A787C;
    case 0x7F1A7880u: goto label_7F1A7880;
    case 0x7F1A7884u: goto label_7F1A7884;
    case 0x7F1A7888u: goto label_7F1A7888;
    case 0x7F1A788Cu: goto label_7F1A788C;
    case 0x7F1A7890u: goto label_7F1A7890;
    case 0x7F1A7894u: goto label_7F1A7894;
    case 0x7F1A7898u: goto label_7F1A7898;
    case 0x7F1A789Cu: goto label_7F1A789C;
    case 0x7F1A78A0u: goto label_7F1A78A0;
    case 0x7F1A78A4u: goto label_7F1A78A4;
    case 0x7F1A78A8u: goto label_7F1A78A8;
    case 0x7F1A78ACu: goto label_7F1A78AC;
    case 0x7F1A78B0u: goto label_7F1A78B0;
    case 0x7F1A78B4u: goto label_7F1A78B4;
    case 0x7F1A78B8u: goto label_7F1A78B8;
    case 0x7F1A78BCu: goto label_7F1A78BC;
    case 0x7F1A78C0u: goto label_7F1A78C0;
    case 0x7F1A78C4u: goto label_7F1A78C4;
    case 0x7F1A78C8u: goto label_7F1A78C8;
    case 0x7F1A78CCu: goto label_7F1A78CC;
    case 0x7F1A78D0u: goto label_7F1A78D0;
    case 0x7F1A78D4u: goto label_7F1A78D4;
    case 0x7F1A78D8u: goto label_7F1A78D8;
    case 0x7F1A78DCu: goto label_7F1A78DC;
    case 0x7F1A78E0u: goto label_7F1A78E0;
    case 0x7F1A78E4u: goto label_7F1A78E4;
    case 0x7F1A78E8u: goto label_7F1A78E8;
    case 0x7F1A78ECu: goto label_7F1A78EC;
    case 0x7F1A78F0u: goto label_7F1A78F0;
    case 0x7F1A78F4u: goto label_7F1A78F4;
    case 0x7F1A78F8u: goto label_7F1A78F8;
    case 0x7F1A78FCu: goto label_7F1A78FC;
    case 0x7F1A7900u: goto label_7F1A7900;
    case 0x7F1A7904u: goto label_7F1A7904;
    case 0x7F1A7908u: goto label_7F1A7908;
    case 0x7F1A790Cu: goto label_7F1A790C;
    case 0x7F1A7910u: goto label_7F1A7910;
    case 0x7F1A7914u: goto label_7F1A7914;
    case 0x7F1A7918u: goto label_7F1A7918;
    case 0x7F1A791Cu: goto label_7F1A791C;
    case 0x7F1A7920u: goto label_7F1A7920;
    case 0x7F1A7924u: goto label_7F1A7924;
    case 0x7F1A7928u: goto label_7F1A7928;
    case 0x7F1A792Cu: goto label_7F1A792C;
    case 0x7F1A7930u: goto label_7F1A7930;
    case 0x7F1A7934u: goto label_7F1A7934;
    case 0x7F1A7938u: goto label_7F1A7938;
    case 0x7F1A793Cu: goto label_7F1A793C;
    case 0x7F1A7940u: goto label_7F1A7940;
    case 0x7F1A7944u: goto label_7F1A7944;
    case 0x7F1A7948u: goto label_7F1A7948;
    case 0x7F1A794Cu: goto label_7F1A794C;
    case 0x7F1A7950u: goto label_7F1A7950;
    case 0x7F1A7954u: goto label_7F1A7954;
    case 0x7F1A7958u: goto label_7F1A7958;
    case 0x7F1A795Cu: goto label_7F1A795C;
    case 0x7F1A7960u: goto label_7F1A7960;
    case 0x7F1A7964u: goto label_7F1A7964;
    case 0x7F1A7968u: goto label_7F1A7968;
    case 0x7F1A796Cu: goto label_7F1A796C;
    case 0x7F1A7970u: goto label_7F1A7970;
    case 0x7F1A7974u: goto label_7F1A7974;
    case 0x7F1A7978u: goto label_7F1A7978;
    case 0x7F1A797Cu: goto label_7F1A797C;
    case 0x7F1A7980u: goto label_7F1A7980;
    case 0x7F1A7984u: goto label_7F1A7984;
    case 0x7F1A7988u: goto label_7F1A7988;
    case 0x7F1A798Cu: goto label_7F1A798C;
    case 0x7F1A7990u: goto label_7F1A7990;
    case 0x7F1A7994u: goto label_7F1A7994;
    case 0x7F1A7998u: goto label_7F1A7998;
    case 0x7F1A799Cu: goto label_7F1A799C;
    case 0x7F1A79A0u: goto label_7F1A79A0;
    case 0x7F1A79A4u: goto label_7F1A79A4;
    case 0x7F1A79A8u: goto label_7F1A79A8;
    case 0x7F1A79ACu: goto label_7F1A79AC;
    case 0x7F1A79B0u: goto label_7F1A79B0;
    case 0x7F1A79B4u: goto label_7F1A79B4;
    case 0x7F1A79B8u: goto label_7F1A79B8;
    case 0x7F1A79BCu: goto label_7F1A79BC;
    case 0x7F1A79C0u: goto label_7F1A79C0;
    case 0x7F1A79C4u: goto label_7F1A79C4;
    case 0x7F1A79C8u: goto label_7F1A79C8;
    case 0x7F1A79CCu: goto label_7F1A79CC;
    case 0x7F1A79D0u: goto label_7F1A79D0;
    case 0x7F1A79D4u: goto label_7F1A79D4;
    case 0x7F1A79D8u: goto label_7F1A79D8;
    case 0x7F1A79DCu: goto label_7F1A79DC;
    case 0x7F1A79E0u: goto label_7F1A79E0;
    case 0x7F1A79E4u: goto label_7F1A79E4;
    case 0x7F1A79E8u: goto label_7F1A79E8;
    case 0x7F1A79ECu: goto label_7F1A79EC;
    case 0x7F1A79F0u: goto label_7F1A79F0;
    case 0x7F1A79F4u: goto label_7F1A79F4;
    case 0x7F1A79F8u: goto label_7F1A79F8;
    case 0x7F1A79FCu: goto label_7F1A79FC;
    case 0x7F1A7A00u: goto label_7F1A7A00;
    case 0x7F1A7A04u: goto label_7F1A7A04;
    case 0x7F1A7A08u: goto label_7F1A7A08;
    case 0x7F1A7A0Cu: goto label_7F1A7A0C;
    case 0x7F1A7A10u: goto label_7F1A7A10;
    case 0x7F1A7A14u: goto label_7F1A7A14;
    case 0x7F1A7A18u: goto label_7F1A7A18;
    case 0x7F1A7A1Cu: goto label_7F1A7A1C;
    case 0x7F1A7A20u: goto label_7F1A7A20;
    case 0x7F1A7A24u: goto label_7F1A7A24;
    case 0x7F1A7A28u: goto label_7F1A7A28;
    case 0x7F1A7A2Cu: goto label_7F1A7A2C;
    case 0x7F1A7A30u: goto label_7F1A7A30;
    case 0x7F1A7A34u: goto label_7F1A7A34;
    case 0x7F1A7A38u: goto label_7F1A7A38;
    case 0x7F1A7A3Cu: goto label_7F1A7A3C;
    case 0x7F1A7A40u: goto label_7F1A7A40;
    case 0x7F1A7A44u: goto label_7F1A7A44;
    case 0x7F1A7A48u: goto label_7F1A7A48;
    case 0x7F1A7A4Cu: goto label_7F1A7A4C;
    case 0x7F1A7A50u: goto label_7F1A7A50;
    case 0x7F1A7A54u: goto label_7F1A7A54;
    case 0x7F1A7A58u: goto label_7F1A7A58;
    case 0x7F1A7A5Cu: goto label_7F1A7A5C;
    case 0x7F1A7A60u: goto label_7F1A7A60;
    case 0x7F1A7A64u: goto label_7F1A7A64;
    case 0x7F1A7A68u: goto label_7F1A7A68;
    case 0x7F1A7A6Cu: goto label_7F1A7A6C;
    case 0x7F1A7A70u: goto label_7F1A7A70;
    case 0x7F1A7A74u: goto label_7F1A7A74;
    case 0x7F1A7A78u: goto label_7F1A7A78;
    case 0x7F1A7A7Cu: goto label_7F1A7A7C;
    case 0x7F1A7A80u: goto label_7F1A7A80;
    case 0x7F1A7A84u: goto label_7F1A7A84;
    case 0x7F1A7A88u: goto label_7F1A7A88;
    case 0x7F1A7A8Cu: goto label_7F1A7A8C;
    case 0x7F1A7A90u: goto label_7F1A7A90;
    case 0x7F1A7A94u: goto label_7F1A7A94;
    case 0x7F1A7A98u: goto label_7F1A7A98;
    case 0x7F1A7A9Cu: goto label_7F1A7A9C;
    case 0x7F1A7AA0u: goto label_7F1A7AA0;
    case 0x7F1A7AA4u: goto label_7F1A7AA4;
    case 0x7F1A7AA8u: goto label_7F1A7AA8;
    case 0x7F1A7AACu: goto label_7F1A7AAC;
    case 0x7F1A7AB0u: goto label_7F1A7AB0;
    case 0x7F1A7AB4u: goto label_7F1A7AB4;
    case 0x7F1A7AB8u: goto label_7F1A7AB8;
    case 0x7F1A7ABCu: goto label_7F1A7ABC;
    case 0x7F1A7AC0u: goto label_7F1A7AC0;
    case 0x7F1A7AC4u: goto label_7F1A7AC4;
    case 0x7F1A7AC8u: goto label_7F1A7AC8;
    case 0x7F1A7ACCu: goto label_7F1A7ACC;
    case 0x7F1A7AD0u: goto label_7F1A7AD0;
    case 0x7F1A7AD4u: goto label_7F1A7AD4;
    case 0x7F1A7AD8u: goto label_7F1A7AD8;
    case 0x7F1A7ADCu: goto label_7F1A7ADC;
    case 0x7F1A7AE0u: goto label_7F1A7AE0;
    case 0x7F1A7AE4u: goto label_7F1A7AE4;
    case 0x7F1A7AE8u: goto label_7F1A7AE8;
    case 0x7F1A7AECu: goto label_7F1A7AEC;
    case 0x7F1A7AF0u: goto label_7F1A7AF0;
    case 0x7F1A7AF4u: goto label_7F1A7AF4;
    case 0x7F1A7AF8u: goto label_7F1A7AF8;
    case 0x7F1A7AFCu: goto label_7F1A7AFC;
    case 0x7F1A7B00u: goto label_7F1A7B00;
    case 0x7F1A7B04u: goto label_7F1A7B04;
    case 0x7F1A7B08u: goto label_7F1A7B08;
    case 0x7F1A7B0Cu: goto label_7F1A7B0C;
    case 0x7F1A7B10u: goto label_7F1A7B10;
    case 0x7F1A7B14u: goto label_7F1A7B14;
    case 0x7F1A7B18u: goto label_7F1A7B18;
    case 0x7F1A7B1Cu: goto label_7F1A7B1C;
    case 0x7F1A7B20u: goto label_7F1A7B20;
    case 0x7F1A7B24u: goto label_7F1A7B24;
    case 0x7F1A7B28u: goto label_7F1A7B28;
    case 0x7F1A7B2Cu: goto label_7F1A7B2C;
    case 0x7F1A7B30u: goto label_7F1A7B30;
    case 0x7F1A7B34u: goto label_7F1A7B34;
    case 0x7F1A7B38u: goto label_7F1A7B38;
    case 0x7F1A7B3Cu: goto label_7F1A7B3C;
    case 0x7F1A7B40u: goto label_7F1A7B40;
    case 0x7F1A7B44u: goto label_7F1A7B44;
    case 0x7F1A7B48u: goto label_7F1A7B48;
    case 0x7F1A7B4Cu: goto label_7F1A7B4C;
    case 0x7F1A7B50u: goto label_7F1A7B50;
    case 0x7F1A7B54u: goto label_7F1A7B54;
    case 0x7F1A7B58u: goto label_7F1A7B58;
    case 0x7F1A7B5Cu: goto label_7F1A7B5C;
    case 0x7F1A7B60u: goto label_7F1A7B60;
    case 0x7F1A7B64u: goto label_7F1A7B64;
    case 0x7F1A7B68u: goto label_7F1A7B68;
    case 0x7F1A7B6Cu: goto label_7F1A7B6C;
    case 0x7F1A7B70u: goto label_7F1A7B70;
    case 0x7F1A7B74u: goto label_7F1A7B74;
    case 0x7F1A7B78u: goto label_7F1A7B78;
    case 0x7F1A7B7Cu: goto label_7F1A7B7C;
    case 0x7F1A7B80u: goto label_7F1A7B80;
    case 0x7F1A7B84u: goto label_7F1A7B84;
    case 0x7F1A7B88u: goto label_7F1A7B88;
    case 0x7F1A7B8Cu: goto label_7F1A7B8C;
    case 0x7F1A7B90u: goto label_7F1A7B90;
    case 0x7F1A7B94u: goto label_7F1A7B94;
    case 0x7F1A7B98u: goto label_7F1A7B98;
    case 0x7F1A7B9Cu: goto label_7F1A7B9C;
    case 0x7F1A7BA0u: goto label_7F1A7BA0;
    case 0x7F1A7BA4u: goto label_7F1A7BA4;
    case 0x7F1A7BA8u: goto label_7F1A7BA8;
    case 0x7F1A7BACu: goto label_7F1A7BAC;
    case 0x7F1A7BB0u: goto label_7F1A7BB0;
    case 0x7F1A7BB4u: goto label_7F1A7BB4;
    case 0x7F1A7BB8u: goto label_7F1A7BB8;
    case 0x7F1A7BBCu: goto label_7F1A7BBC;
    case 0x7F1A7BC0u: goto label_7F1A7BC0;
    case 0x7F1A7BC4u: goto label_7F1A7BC4;
    case 0x7F1A7BC8u: goto label_7F1A7BC8;
    case 0x7F1A7BCCu: goto label_7F1A7BCC;
    case 0x7F1A7BD0u: goto label_7F1A7BD0;
    case 0x7F1A7BD4u: goto label_7F1A7BD4;
    case 0x7F1A7BD8u: goto label_7F1A7BD8;
    case 0x7F1A7BDCu: goto label_7F1A7BDC;
    case 0x7F1A7BE0u: goto label_7F1A7BE0;
    case 0x7F1A7BE4u: goto label_7F1A7BE4;
    case 0x7F1A7BE8u: goto label_7F1A7BE8;
    case 0x7F1A7BECu: goto label_7F1A7BEC;
    case 0x7F1A7BF0u: goto label_7F1A7BF0;
    case 0x7F1A7BF4u: goto label_7F1A7BF4;
    case 0x7F1A7BF8u: goto label_7F1A7BF8;
    case 0x7F1A7BFCu: goto label_7F1A7BFC;
    case 0x7F1A7C00u: goto label_7F1A7C00;
    case 0x7F1A7C04u: goto label_7F1A7C04;
    case 0x7F1A7C08u: goto label_7F1A7C08;
    case 0x7F1A7C0Cu: goto label_7F1A7C0C;
    case 0x7F1A7C10u: goto label_7F1A7C10;
    case 0x7F1A7C14u: goto label_7F1A7C14;
    case 0x7F1A7C18u: goto label_7F1A7C18;
    case 0x7F1A7C1Cu: goto label_7F1A7C1C;
    case 0x7F1A7C20u: goto label_7F1A7C20;
    case 0x7F1A7C24u: goto label_7F1A7C24;
    case 0x7F1A7C28u: goto label_7F1A7C28;
    case 0x7F1A7C2Cu: goto label_7F1A7C2C;
    case 0x7F1A7C30u: goto label_7F1A7C30;
    case 0x7F1A7C34u: goto label_7F1A7C34;
    case 0x7F1A7C38u: goto label_7F1A7C38;
    case 0x7F1A7C3Cu: goto label_7F1A7C3C;
    case 0x7F1A7C40u: goto label_7F1A7C40;
    case 0x7F1A7C44u: goto label_7F1A7C44;
    case 0x7F1A7C48u: goto label_7F1A7C48;
    case 0x7F1A7C4Cu: goto label_7F1A7C4C;
    case 0x7F1A7C50u: goto label_7F1A7C50;
    case 0x7F1A7C54u: goto label_7F1A7C54;
    case 0x7F1A7C58u: goto label_7F1A7C58;
    case 0x7F1A7C5Cu: goto label_7F1A7C5C;
    case 0x7F1A7C60u: goto label_7F1A7C60;
    case 0x7F1A7C64u: goto label_7F1A7C64;
    case 0x7F1A7C68u: goto label_7F1A7C68;
    case 0x7F1A7C6Cu: goto label_7F1A7C6C;
    case 0x7F1A7C70u: goto label_7F1A7C70;
    case 0x7F1A7C74u: goto label_7F1A7C74;
    case 0x7F1A7C78u: goto label_7F1A7C78;
    case 0x7F1A7C7Cu: goto label_7F1A7C7C;
    case 0x7F1A7C80u: goto label_7F1A7C80;
    case 0x7F1A7C84u: goto label_7F1A7C84;
    case 0x7F1A7C88u: goto label_7F1A7C88;
    case 0x7F1A7C8Cu: goto label_7F1A7C8C;
    case 0x7F1A7C90u: goto label_7F1A7C90;
    case 0x7F1A7C94u: goto label_7F1A7C94;
    case 0x7F1A7C98u: goto label_7F1A7C98;
    case 0x7F1A7C9Cu: goto label_7F1A7C9C;
    case 0x7F1A7CA0u: goto label_7F1A7CA0;
    case 0x7F1A7CA4u: goto label_7F1A7CA4;
    case 0x7F1A7CA8u: goto label_7F1A7CA8;
    case 0x7F1A7CACu: goto label_7F1A7CAC;
    case 0x7F1A7CB0u: goto label_7F1A7CB0;
    case 0x7F1A7CB4u: goto label_7F1A7CB4;
    case 0x7F1A7CB8u: goto label_7F1A7CB8;
    case 0x7F1A7CBCu: goto label_7F1A7CBC;
    case 0x7F1A7CC0u: goto label_7F1A7CC0;
    case 0x7F1A7CC4u: goto label_7F1A7CC4;
    case 0x7F1A7CC8u: goto label_7F1A7CC8;
    case 0x7F1A7CCCu: goto label_7F1A7CCC;
    case 0x7F1A7CD0u: goto label_7F1A7CD0;
    case 0x7F1A7CD4u: goto label_7F1A7CD4;
    case 0x7F1A7CD8u: goto label_7F1A7CD8;
    case 0x7F1A7CDCu: goto label_7F1A7CDC;
    case 0x7F1A7CE0u: goto label_7F1A7CE0;
    case 0x7F1A7CE4u: goto label_7F1A7CE4;
    case 0x7F1A7CE8u: goto label_7F1A7CE8;
    case 0x7F1A7CECu: goto label_7F1A7CEC;
    case 0x7F1A7CF0u: goto label_7F1A7CF0;
    case 0x7F1A7CF4u: goto label_7F1A7CF4;
    case 0x7F1A7CF8u: goto label_7F1A7CF8;
    case 0x7F1A7CFCu: goto label_7F1A7CFC;
    case 0x7F1A7D00u: goto label_7F1A7D00;
    case 0x7F1A7D04u: goto label_7F1A7D04;
    case 0x7F1A7D08u: goto label_7F1A7D08;
    case 0x7F1A7D0Cu: goto label_7F1A7D0C;
    case 0x7F1A7D10u: goto label_7F1A7D10;
    case 0x7F1A7D14u: goto label_7F1A7D14;
    case 0x7F1A7D18u: goto label_7F1A7D18;
    case 0x7F1A7D1Cu: goto label_7F1A7D1C;
    case 0x7F1A7D20u: goto label_7F1A7D20;
    case 0x7F1A7D24u: goto label_7F1A7D24;
    case 0x7F1A7D28u: goto label_7F1A7D28;
    case 0x7F1A7D2Cu: goto label_7F1A7D2C;
    case 0x7F1A7D30u: goto label_7F1A7D30;
    case 0x7F1A7D34u: goto label_7F1A7D34;
    case 0x7F1A7D38u: goto label_7F1A7D38;
    case 0x7F1A7D3Cu: goto label_7F1A7D3C;
    case 0x7F1A7D40u: goto label_7F1A7D40;
    case 0x7F1A7D44u: goto label_7F1A7D44;
    case 0x7F1A7D48u: goto label_7F1A7D48;
    case 0x7F1A7D4Cu: goto label_7F1A7D4C;
    case 0x7F1A7D50u: goto label_7F1A7D50;
    case 0x7F1A7D54u: goto label_7F1A7D54;
    case 0x7F1A7D58u: goto label_7F1A7D58;
    case 0x7F1A7D5Cu: goto label_7F1A7D5C;
    case 0x7F1A7D60u: goto label_7F1A7D60;
    case 0x7F1A7D64u: goto label_7F1A7D64;
    case 0x7F1A7D68u: goto label_7F1A7D68;
    case 0x7F1A7D6Cu: goto label_7F1A7D6C;
    case 0x7F1A7D70u: goto label_7F1A7D70;
    case 0x7F1A7D74u: goto label_7F1A7D74;
    case 0x7F1A7D78u: goto label_7F1A7D78;
    case 0x7F1A7D7Cu: goto label_7F1A7D7C;
    case 0x7F1A7D80u: goto label_7F1A7D80;
    case 0x7F1A7D84u: goto label_7F1A7D84;
    case 0x7F1A7D88u: goto label_7F1A7D88;
    case 0x7F1A7D8Cu: goto label_7F1A7D8C;
    case 0x7F1A7D90u: goto label_7F1A7D90;
    case 0x7F1A7D94u: goto label_7F1A7D94;
    case 0x7F1A7D98u: goto label_7F1A7D98;
    case 0x7F1A7D9Cu: goto label_7F1A7D9C;
    case 0x7F1A7DA0u: goto label_7F1A7DA0;
    case 0x7F1A7DA4u: goto label_7F1A7DA4;
    case 0x7F1A7DA8u: goto label_7F1A7DA8;
    case 0x7F1A7DACu: goto label_7F1A7DAC;
    case 0x7F1A7DB0u: goto label_7F1A7DB0;
    case 0x7F1A7DB4u: goto label_7F1A7DB4;
    case 0x7F1A7DB8u: goto label_7F1A7DB8;
    case 0x7F1A7DBCu: goto label_7F1A7DBC;
    case 0x7F1A7DC0u: goto label_7F1A7DC0;
    case 0x7F1A7DC4u: goto label_7F1A7DC4;
    case 0x7F1A7DC8u: goto label_7F1A7DC8;
    case 0x7F1A7DCCu: goto label_7F1A7DCC;
    case 0x7F1A7DD0u: goto label_7F1A7DD0;
    case 0x7F1A7DD4u: goto label_7F1A7DD4;
    case 0x7F1A7DD8u: goto label_7F1A7DD8;
    case 0x7F1A7DDCu: goto label_7F1A7DDC;
    case 0x7F1A7DE0u: goto label_7F1A7DE0;
    case 0x7F1A7DE4u: goto label_7F1A7DE4;
    case 0x7F1A7DE8u: goto label_7F1A7DE8;
    case 0x7F1A7DECu: goto label_7F1A7DEC;
    case 0x7F1A7DF0u: goto label_7F1A7DF0;
    case 0x7F1A7DF4u: goto label_7F1A7DF4;
    case 0x7F1A7DF8u: goto label_7F1A7DF8;
    case 0x7F1A7DFCu: goto label_7F1A7DFC;
    case 0x7F1A7E00u: goto label_7F1A7E00;
    case 0x7F1A7E04u: goto label_7F1A7E04;
    case 0x7F1A7E08u: goto label_7F1A7E08;
    case 0x7F1A7E0Cu: goto label_7F1A7E0C;
    case 0x7F1A7E10u: goto label_7F1A7E10;
    case 0x7F1A7E14u: goto label_7F1A7E14;
    case 0x7F1A7E18u: goto label_7F1A7E18;
    case 0x7F1A7E1Cu: goto label_7F1A7E1C;
    case 0x7F1A7E20u: goto label_7F1A7E20;
    case 0x7F1A7E24u: goto label_7F1A7E24;
    case 0x7F1A7E28u: goto label_7F1A7E28;
    case 0x7F1A7E2Cu: goto label_7F1A7E2C;
    case 0x7F1A7E30u: goto label_7F1A7E30;
    case 0x7F1A7E34u: goto label_7F1A7E34;
    case 0x7F1A7E38u: goto label_7F1A7E38;
    case 0x7F1A7E3Cu: goto label_7F1A7E3C;
    case 0x7F1A7E40u: goto label_7F1A7E40;
    case 0x7F1A7E44u: goto label_7F1A7E44;
    case 0x7F1A7E48u: goto label_7F1A7E48;
    case 0x7F1A7E4Cu: goto label_7F1A7E4C;
    case 0x7F1A7E50u: goto label_7F1A7E50;
    case 0x7F1A7E54u: goto label_7F1A7E54;
    case 0x7F1A7E58u: goto label_7F1A7E58;
    case 0x7F1A7E5Cu: goto label_7F1A7E5C;
    case 0x7F1A7E60u: goto label_7F1A7E60;
    case 0x7F1A7E64u: goto label_7F1A7E64;
    case 0x7F1A7E68u: goto label_7F1A7E68;
    case 0x7F1A7E6Cu: goto label_7F1A7E6C;
    case 0x7F1A7E70u: goto label_7F1A7E70;
    case 0x7F1A7E74u: goto label_7F1A7E74;
    case 0x7F1A7E78u: goto label_7F1A7E78;
    case 0x7F1A7E7Cu: goto label_7F1A7E7C;
    case 0x7F1A7E80u: goto label_7F1A7E80;
    case 0x7F1A7E84u: goto label_7F1A7E84;
    case 0x7F1A7E88u: goto label_7F1A7E88;
    case 0x7F1A7E8Cu: goto label_7F1A7E8C;
    case 0x7F1A7E90u: goto label_7F1A7E90;
    case 0x7F1A7E94u: goto label_7F1A7E94;
    case 0x7F1A7E98u: goto label_7F1A7E98;
    case 0x7F1A7E9Cu: goto label_7F1A7E9C;
    case 0x7F1A7EA0u: goto label_7F1A7EA0;
    case 0x7F1A7EA4u: goto label_7F1A7EA4;
    case 0x7F1A7EA8u: goto label_7F1A7EA8;
    case 0x7F1A7EACu: goto label_7F1A7EAC;
    case 0x7F1A7EB0u: goto label_7F1A7EB0;
    case 0x7F1A7EB4u: goto label_7F1A7EB4;
    case 0x7F1A7EB8u: goto label_7F1A7EB8;
    case 0x7F1A7EBCu: goto label_7F1A7EBC;
    case 0x7F1A7EC0u: goto label_7F1A7EC0;
    case 0x7F1A7EC4u: goto label_7F1A7EC4;
    case 0x7F1A7EC8u: goto label_7F1A7EC8;
    case 0x7F1A7ECCu: goto label_7F1A7ECC;
    case 0x7F1A7ED0u: goto label_7F1A7ED0;
    case 0x7F1A7ED4u: goto label_7F1A7ED4;
    case 0x7F1A7ED8u: goto label_7F1A7ED8;
    case 0x7F1A7EDCu: goto label_7F1A7EDC;
    case 0x7F1A7EE0u: goto label_7F1A7EE0;
    case 0x7F1A7EE4u: goto label_7F1A7EE4;
    case 0x7F1A7EE8u: goto label_7F1A7EE8;
    case 0x7F1A7EECu: goto label_7F1A7EEC;
    case 0x7F1A7EF0u: goto label_7F1A7EF0;
    case 0x7F1A7EF4u: goto label_7F1A7EF4;
    case 0x7F1A7EF8u: goto label_7F1A7EF8;
    case 0x7F1A7EFCu: goto label_7F1A7EFC;
    case 0x7F1A7F00u: goto label_7F1A7F00;
    case 0x7F1A7F04u: goto label_7F1A7F04;
    case 0x7F1A7F08u: goto label_7F1A7F08;
    case 0x7F1A7F0Cu: goto label_7F1A7F0C;
    case 0x7F1A7F10u: goto label_7F1A7F10;
    case 0x7F1A7F14u: goto label_7F1A7F14;
    case 0x7F1A7F18u: goto label_7F1A7F18;
    case 0x7F1A7F1Cu: goto label_7F1A7F1C;
    case 0x7F1A7F20u: goto label_7F1A7F20;
    case 0x7F1A7F24u: goto label_7F1A7F24;
    case 0x7F1A7F28u: goto label_7F1A7F28;
    case 0x7F1A7F2Cu: goto label_7F1A7F2C;
    case 0x7F1A7F30u: goto label_7F1A7F30;
    case 0x7F1A7F34u: goto label_7F1A7F34;
    case 0x7F1A7F38u: goto label_7F1A7F38;
    case 0x7F1A7F3Cu: goto label_7F1A7F3C;
    case 0x7F1A7F40u: goto label_7F1A7F40;
    case 0x7F1A7F44u: goto label_7F1A7F44;
    case 0x7F1A7F48u: goto label_7F1A7F48;
    case 0x7F1A7F4Cu: goto label_7F1A7F4C;
    case 0x7F1A7F50u: goto label_7F1A7F50;
    case 0x7F1A7F54u: goto label_7F1A7F54;
    case 0x7F1A7F58u: goto label_7F1A7F58;
    case 0x7F1A7F5Cu: goto label_7F1A7F5C;
    case 0x7F1A7F60u: goto label_7F1A7F60;
    case 0x7F1A7F64u: goto label_7F1A7F64;
    case 0x7F1A7F68u: goto label_7F1A7F68;
    case 0x7F1A7F6Cu: goto label_7F1A7F6C;
    case 0x7F1A7F70u: goto label_7F1A7F70;
    case 0x7F1A7F74u: goto label_7F1A7F74;
    case 0x7F1A7F78u: goto label_7F1A7F78;
    case 0x7F1A7F7Cu: goto label_7F1A7F7C;
    case 0x7F1A7F80u: goto label_7F1A7F80;
    case 0x7F1A7F84u: goto label_7F1A7F84;
    case 0x7F1A7F88u: goto label_7F1A7F88;
    case 0x7F1A7F8Cu: goto label_7F1A7F8C;
    case 0x7F1A7F90u: goto label_7F1A7F90;
    case 0x7F1A7F94u: goto label_7F1A7F94;
    case 0x7F1A7F98u: goto label_7F1A7F98;
    case 0x7F1A7F9Cu: goto label_7F1A7F9C;
    case 0x7F1A7FA0u: goto label_7F1A7FA0;
    case 0x7F1A7FA4u: goto label_7F1A7FA4;
    case 0x7F1A7FA8u: goto label_7F1A7FA8;
    case 0x7F1A7FACu: goto label_7F1A7FAC;
    case 0x7F1A7FB0u: goto label_7F1A7FB0;
    case 0x7F1A7FB4u: goto label_7F1A7FB4;
    case 0x7F1A7FB8u: goto label_7F1A7FB8;
    case 0x7F1A7FBCu: goto label_7F1A7FBC;
    case 0x7F1A7FC0u: goto label_7F1A7FC0;
    case 0x7F1A7FC4u: goto label_7F1A7FC4;
    case 0x7F1A7FC8u: goto label_7F1A7FC8;
    case 0x7F1A7FCCu: goto label_7F1A7FCC;
    case 0x7F1A7FD0u: goto label_7F1A7FD0;
    case 0x7F1A7FD4u: goto label_7F1A7FD4;
    case 0x7F1A7FD8u: goto label_7F1A7FD8;
    case 0x7F1A7FDCu: goto label_7F1A7FDC;
    case 0x7F1A7FE0u: goto label_7F1A7FE0;
    case 0x7F1A7FE4u: goto label_7F1A7FE4;
    case 0x7F1A7FE8u: goto label_7F1A7FE8;
    case 0x7F1A7FECu: goto label_7F1A7FEC;
    case 0x7F1A7FF0u: goto label_7F1A7FF0;
    case 0x7F1A7FF4u: goto label_7F1A7FF4;
    case 0x7F1A7FF8u: goto label_7F1A7FF8;
    case 0x7F1A7FFCu: goto label_7F1A7FFC;
    case 0x7F1A8000u: goto label_7F1A8000;
    case 0x7F1A8004u: goto label_7F1A8004;
    case 0x7F1A8008u: goto label_7F1A8008;
    case 0x7F1A800Cu: goto label_7F1A800C;
    case 0x7F1A8010u: goto label_7F1A8010;
    case 0x7F1A8014u: goto label_7F1A8014;
    case 0x7F1A8018u: goto label_7F1A8018;
    case 0x7F1A801Cu: goto label_7F1A801C;
    case 0x7F1A8020u: goto label_7F1A8020;
    case 0x7F1A8024u: goto label_7F1A8024;
    case 0x7F1A8028u: goto label_7F1A8028;
    case 0x7F1A802Cu: goto label_7F1A802C;
    case 0x7F1A8030u: goto label_7F1A8030;
    case 0x7F1A8034u: goto label_7F1A8034;
    case 0x7F1A8038u: goto label_7F1A8038;
    case 0x7F1A803Cu: goto label_7F1A803C;
    case 0x7F1A8040u: goto label_7F1A8040;
    case 0x7F1A8044u: goto label_7F1A8044;
    case 0x7F1A8048u: goto label_7F1A8048;
    case 0x7F1A804Cu: goto label_7F1A804C;
    case 0x7F1A8050u: goto label_7F1A8050;
    case 0x7F1A8054u: goto label_7F1A8054;
    case 0x7F1A8058u: goto label_7F1A8058;
    case 0x7F1A805Cu: goto label_7F1A805C;
    case 0x7F1A8060u: goto label_7F1A8060;
    case 0x7F1A8064u: goto label_7F1A8064;
    case 0x7F1A8068u: goto label_7F1A8068;
    case 0x7F1A806Cu: goto label_7F1A806C;
    case 0x7F1A8070u: goto label_7F1A8070;
    case 0x7F1A8074u: goto label_7F1A8074;
    case 0x7F1A8078u: goto label_7F1A8078;
    case 0x7F1A807Cu: goto label_7F1A807C;
    case 0x7F1A8080u: goto label_7F1A8080;
    case 0x7F1A8084u: goto label_7F1A8084;
    case 0x7F1A8088u: goto label_7F1A8088;
    case 0x7F1A808Cu: goto label_7F1A808C;
    case 0x7F1A8090u: goto label_7F1A8090;
    case 0x7F1A8094u: goto label_7F1A8094;
    case 0x7F1A8098u: goto label_7F1A8098;
    case 0x7F1A809Cu: goto label_7F1A809C;
    case 0x7F1A80A0u: goto label_7F1A80A0;
    case 0x7F1A80A4u: goto label_7F1A80A4;
    case 0x7F1A80A8u: goto label_7F1A80A8;
    case 0x7F1A80ACu: goto label_7F1A80AC;
    case 0x7F1A80B0u: goto label_7F1A80B0;
    case 0x7F1A80B4u: goto label_7F1A80B4;
    case 0x7F1A80B8u: goto label_7F1A80B8;
    case 0x7F1A80BCu: goto label_7F1A80BC;
    case 0x7F1A80C0u: goto label_7F1A80C0;
    case 0x7F1A80C4u: goto label_7F1A80C4;
    case 0x7F1A80C8u: goto label_7F1A80C8;
    case 0x7F1A80CCu: goto label_7F1A80CC;
    case 0x7F1A80D0u: goto label_7F1A80D0;
    case 0x7F1A80D4u: goto label_7F1A80D4;
    case 0x7F1A80D8u: goto label_7F1A80D8;
    case 0x7F1A80DCu: goto label_7F1A80DC;
    case 0x7F1A80E0u: goto label_7F1A80E0;
    case 0x7F1A80E4u: goto label_7F1A80E4;
    case 0x7F1A80E8u: goto label_7F1A80E8;
    default: return;
    }
label_7F1A40EC:
    ctx->pc = 0x7F1A40ECu;
    ctx->downcount -= 11;
    // 7F1A40EC: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A40ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A40F0:
    ctx->pc = 0x7F1A40F0u;
    // 7F1A40F0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A40F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A40F4:
    ctx->pc = 0x7F1A40F4u;
    // 7F1A40F4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A40F4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1A40F8:
    ctx->pc = 0x7F1A40F8u;
    // 7F1A40F8: lwz     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A40FC:
    ctx->pc = 0x7F1A40FCu;
    // 7F1A40FC: lwz     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4100:
    ctx->pc = 0x7F1A4100u;
    // 7F1A4100: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4104:
    ctx->pc = 0x7F1A4104u;
    // 7F1A4104: fcmpu   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4104u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], false);

label_7F1A4108:
    ctx->pc = 0x7F1A4108u;
    // 7F1A4108: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A410C:
    ctx->pc = 0x7F1A410Cu;
    // 7F1A410C: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4110:
    ctx->pc = 0x7F1A4110u;
    // 7F1A4110: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4114:
    ctx->pc = 0x7F1A4114u;
    // 7F1A4114: bc    4, 2, 0x7F1A412C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A412C;
        }
    }

label_7F1A4118:
    ctx->pc = 0x7F1A4118u;
    ctx->downcount -= 5;
    // 7F1A4118: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A411C:
    ctx->pc = 0x7F1A411Cu;
    // 7F1A411C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4120:
    ctx->pc = 0x7F1A4120u;
    // 7F1A4120: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1A4124:
    ctx->pc = 0x7F1A4124u;
    // 7F1A4124: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4128:
    ctx->pc = 0x7F1A4128u;
    // 7F1A4128: b       0x7F1A4300
    {
            goto label_7F1A4300;
    }

label_7F1A412C:
    ctx->pc = 0x7F1A412Cu;
    ctx->downcount -= 19;
    // 7F1A412C: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A4130:
    ctx->pc = 0x7F1A4130u;
    // 7F1A4130: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4134:
    ctx->pc = 0x7F1A4134u;
    // 7F1A4134: addi    r4, r3, 5916
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5916);

label_7F1A4138:
    ctx->pc = 0x7F1A4138u;
    // 7F1A4138: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A413C:
    ctx->pc = 0x7F1A413Cu;
    // 7F1A413C: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4140:
    ctx->pc = 0x7F1A4140u;
    // 7F1A4140: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1A4144:
    ctx->pc = 0x7F1A4144u;
    // 7F1A4144: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4144u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4148:
    ctx->pc = 0x7F1A4148u;
    // 7F1A4148: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1A414C:
    ctx->pc = 0x7F1A414Cu;
    // 7F1A414C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A4150:
    ctx->pc = 0x7F1A4150u;
    // 7F1A4150: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A4154:
    ctx->pc = 0x7F1A4154u;
    // 7F1A4154: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1A4158:
    ctx->pc = 0x7F1A4158u;
    // 7F1A4158: lwz     r30, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1A415C:
    ctx->pc = 0x7F1A415Cu;
    // 7F1A415C: stfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A415Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4160:
    ctx->pc = 0x7F1A4160u;
    // 7F1A4160: lfs     f1, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4164:
    ctx->pc = 0x7F1A4164u;
    // 7F1A4164: stfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4164u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4168:
    ctx->pc = 0x7F1A4168u;
    // 7F1A4168: lfs     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A416C:
    ctx->pc = 0x7F1A416Cu;
    // 7F1A416C: stfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A416Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4170:
    ctx->pc = 0x7F1A4170u;
    // 7F1A4170: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4170u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4174:
    ctx->pc = 0x7F1A4174u;
    // 7F1A4174: bl      0x7F114508
    {
            ctx->lr = 0x7F1A4178u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1A4178:
    ctx->pc = 0x7F1A4178u;
    ctx->downcount -= 3;
    // 7F1A4178: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A417C:
    ctx->pc = 0x7F1A417Cu;
    // 7F1A417C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4180:
    ctx->pc = 0x7F1A4180u;
    // 7F1A4180: bl      0x7F114F50
    {
            ctx->lr = 0x7F1A4184u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1A4184:
    ctx->pc = 0x7F1A4184u;
    ctx->downcount -= 68;
    // 7F1A4184: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4188:
    ctx->pc = 0x7F1A4188u;
    // 7F1A4188: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F1A418C:
    ctx->pc = 0x7F1A418Cu;
    // 7F1A418C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4190:
    ctx->pc = 0x7F1A4190u;
    // 7F1A4190: stw     r6, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4194:
    ctx->pc = 0x7F1A4194u;
    // 7F1A4194: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A4198:
    ctx->pc = 0x7F1A4198u;
    // 7F1A4198: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A419C:
    ctx->pc = 0x7F1A419Cu;
    // 7F1A419C: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A41A0:
    ctx->pc = 0x7F1A41A0u;
    // 7F1A41A0: addi    r7, r5, 5928
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(5928);

label_7F1A41A4:
    ctx->pc = 0x7F1A41A4u;
    // 7F1A41A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A41A8:
    ctx->pc = 0x7F1A41A8u;
    // 7F1A41A8: lfd     f7, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41A8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A41AC:
    ctx->pc = 0x7F1A41ACu;
    // 7F1A41AC: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A41B0:
    ctx->pc = 0x7F1A41B0u;
    // 7F1A41B0: addi    r5, r4, 5916
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(5916);

label_7F1A41B4:
    ctx->pc = 0x7F1A41B4u;
    // 7F1A41B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A41B8:
    ctx->pc = 0x7F1A41B8u;
    // 7F1A41B8: stw     r6, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A41BC:
    ctx->pc = 0x7F1A41BCu;
    // 7F1A41BC: fsubs   f1, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A41BCu)) return;
    ppc_fsubs(ctx, 1, 0, 7);

label_7F1A41C0:
    ctx->pc = 0x7F1A41C0u;
    // 7F1A41C0: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A41C4:
    ctx->pc = 0x7F1A41C4u;
    // 7F1A41C4: addi    r4, r3, 5920
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5920);

label_7F1A41C8:
    ctx->pc = 0x7F1A41C8u;
    // 7F1A41C8: lfs     f4, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1A41CC:
    ctx->pc = 0x7F1A41CCu;
    // 7F1A41CC: stw     r6, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A41D0:
    ctx->pc = 0x7F1A41D0u;
    // 7F1A41D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A41D4:
    ctx->pc = 0x7F1A41D4u;
    // 7F1A41D4: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A41D4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1A41D8:
    ctx->pc = 0x7F1A41D8u;
    // 7F1A41D8: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A41DC:
    ctx->pc = 0x7F1A41DCu;
    // 7F1A41DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A41E0:
    ctx->pc = 0x7F1A41E0u;
    // 7F1A41E0: lfs     f2, 5924(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A41E4:
    ctx->pc = 0x7F1A41E4u;
    // 7F1A41E4: stfs     f1, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A41E8:
    ctx->pc = 0x7F1A41E8u;
    // 7F1A41E8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A41EC:
    ctx->pc = 0x7F1A41ECu;
    // 7F1A41EC: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A41F0:
    ctx->pc = 0x7F1A41F0u;
    // 7F1A41F0: lfs     f6, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A41F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1A41F4:
    ctx->pc = 0x7F1A41F4u;
    // 7F1A41F4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A41F8:
    ctx->pc = 0x7F1A41F8u;
    // 7F1A41F8: stw     r6, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A41FC:
    ctx->pc = 0x7F1A41FCu;
    // 7F1A41FC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4200:
    ctx->pc = 0x7F1A4200u;
    // 7F1A4200: lfd     f5, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4200u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4204:
    ctx->pc = 0x7F1A4204u;
    // 7F1A4204: fsubs   f5, f5, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A4204u)) return;
    ppc_fsubs(ctx, 5, 5, 7);

label_7F1A4208:
    ctx->pc = 0x7F1A4208u;
    // 7F1A4208: fmadds f4, f6, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1A4208u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[6], ctx->fpr[5], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_7F1A420C:
    ctx->pc = 0x7F1A420Cu;
    // 7F1A420C: stfs     f4, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A420Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F1A4210:
    ctx->pc = 0x7F1A4210u;
    // 7F1A4210: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4214:
    ctx->pc = 0x7F1A4214u;
    // 7F1A4214: lfs     f5, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1A4218:
    ctx->pc = 0x7F1A4218u;
    // 7F1A4218: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A421C:
    ctx->pc = 0x7F1A421Cu;
    // 7F1A421C: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4220:
    ctx->pc = 0x7F1A4220u;
    // 7F1A4220: lfd     f4, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4224:
    ctx->pc = 0x7F1A4224u;
    // 7F1A4224: fsubs   f4, f4, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A4224u)) return;
    ppc_fsubs(ctx, 4, 4, 7);

label_7F1A4228:
    ctx->pc = 0x7F1A4228u;
    // 7F1A4228: fmadds f0, f5, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4228u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[4], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A422C:
    ctx->pc = 0x7F1A422Cu;
    // 7F1A422C: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A422Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4230:
    ctx->pc = 0x7F1A4230u;
    // 7F1A4230: stfs     f3, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4230u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1A4234:
    ctx->pc = 0x7F1A4234u;
    // 7F1A4234: lfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4234u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4238:
    ctx->pc = 0x7F1A4238u;
    // 7F1A4238: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A423C:
    ctx->pc = 0x7F1A423Cu;
    // 7F1A423C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A423Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A4240:
    ctx->pc = 0x7F1A4240u;
    // 7F1A4240: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4244:
    ctx->pc = 0x7F1A4244u;
    // 7F1A4244: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4244u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4248:
    ctx->pc = 0x7F1A4248u;
    // 7F1A4248: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A424C:
    ctx->pc = 0x7F1A424Cu;
    // 7F1A424C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A4250:
    ctx->pc = 0x7F1A4250u;
    // 7F1A4250: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4254:
    ctx->pc = 0x7F1A4254u;
    // 7F1A4254: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4258:
    ctx->pc = 0x7F1A4258u;
    // 7F1A4258: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A425C:
    ctx->pc = 0x7F1A425Cu;
    // 7F1A425C: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4260:
    ctx->pc = 0x7F1A4260u;
    // 7F1A4260: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4264:
    ctx->pc = 0x7F1A4264u;
    // 7F1A4264: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4268:
    ctx->pc = 0x7F1A4268u;
    // 7F1A4268: lfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4268u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A426C:
    ctx->pc = 0x7F1A426Cu;
    // 7F1A426C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A4270:
    ctx->pc = 0x7F1A4270u;
    // 7F1A4270: stw     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4274:
    ctx->pc = 0x7F1A4274u;
    // 7F1A4274: lfd     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4278:
    ctx->pc = 0x7F1A4278u;
    // 7F1A4278: fsubs   f1, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A4278u)) return;
    ppc_fsubs(ctx, 1, 1, 7);

label_7F1A427C:
    ctx->pc = 0x7F1A427Cu;
    // 7F1A427C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A427Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A4280:
    ctx->pc = 0x7F1A4280u;
    // 7F1A4280: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4280u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4284:
    ctx->pc = 0x7F1A4284u;
    // 7F1A4284: lfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4284u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4288:
    ctx->pc = 0x7F1A4288u;
    // 7F1A4288: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A4288u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_7F1A428C:
    ctx->pc = 0x7F1A428Cu;
    // 7F1A428C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A4290:
    ctx->pc = 0x7F1A4290u;
    // 7F1A4290: bc    4, 2, 0x7F1A42BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A42BC;
        }
    }

label_7F1A4294:
    ctx->pc = 0x7F1A4294u;
    ctx->downcount -= 4;
    // 7F1A4294: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4298:
    ctx->pc = 0x7F1A4298u;
    // 7F1A4298: lfs     f0, 5912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4298u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A429C:
    ctx->pc = 0x7F1A429Cu;
    // 7F1A429C: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A429Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A42A0:
    ctx->pc = 0x7F1A42A0u;
    // 7F1A42A0: bl      0x800147F8
    {
            ctx->lr = 0x7F1A42A4u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1A42A4:
    ctx->pc = 0x7F1A42A4u;
    ctx->downcount -= 6;
    // 7F1A42A4: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F1A42A8:
    ctx->pc = 0x7F1A42A8u;
    // 7F1A42A8: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F1A42AC:
    ctx->pc = 0x7F1A42ACu;
    // 7F1A42AC: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F1A42B0:
    ctx->pc = 0x7F1A42B0u;
    // 7F1A42B0: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1A42B4:
    ctx->pc = 0x7F1A42B4u;
    // 7F1A42B4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A42B8:
    ctx->pc = 0x7F1A42B8u;
    // 7F1A42B8: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A42BC:
    ctx->pc = 0x7F1A42BCu;
    ctx->downcount -= 17;
    // 7F1A42BC: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A42C0:
    ctx->pc = 0x7F1A42C0u;
    // 7F1A42C0: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A42C4:
    ctx->pc = 0x7F1A42C4u;
    // 7F1A42C4: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A42C8:
    ctx->pc = 0x7F1A42C8u;
    // 7F1A42C8: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A42CC:
    ctx->pc = 0x7F1A42CCu;
    // 7F1A42CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A42D0:
    ctx->pc = 0x7F1A42D0u;
    // 7F1A42D0: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A42D4:
    ctx->pc = 0x7F1A42D4u;
    // 7F1A42D4: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1A42D8:
    ctx->pc = 0x7F1A42D8u;
    // 7F1A42D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A42DC:
    ctx->pc = 0x7F1A42DCu;
    // 7F1A42DC: lwz     r7, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1A42E0:
    ctx->pc = 0x7F1A42E0u;
    // 7F1A42E0: lwz     r6, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A42E4:
    ctx->pc = 0x7F1A42E4u;
    // 7F1A42E4: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A42E8:
    ctx->pc = 0x7F1A42E8u;
    // 7F1A42E8: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A42EC:
    ctx->pc = 0x7F1A42ECu;
    // 7F1A42EC: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A42F0:
    ctx->pc = 0x7F1A42F0u;
    // 7F1A42F0: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A42F4:
    ctx->pc = 0x7F1A42F4u;
    // 7F1A42F4: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A42F8:
    ctx->pc = 0x7F1A42F8u;
    // 7F1A42F8: sth     r0, 10(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A42FC:
    ctx->pc = 0x7F1A42FCu;
    // 7F1A42FC: sth     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4300:
    ctx->pc = 0x7F1A4300u;
    ctx->downcount -= 16;
    // 7F1A4300: lmw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A4304:
    ctx->pc = 0x7F1A4304u;
    // 7F1A4304: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4308:
    ctx->pc = 0x7F1A4308u;
    // 7F1A4308: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A430C:
    ctx->pc = 0x7F1A430Cu;
    // 7F1A430C: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F1A4310:
    ctx->pc = 0x7F1A4310u;
    // 7F1A4310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4314:
    ctx->pc = 0x7F1A4314u;
    ctx->downcount -= 7;
    // 7F1A4314: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4318:
    ctx->pc = 0x7F1A4318u;
    // 7F1A4318: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A431C:
    ctx->pc = 0x7F1A431Cu;
    // 7F1A431C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4320:
    ctx->pc = 0x7F1A4320u;
    // 7F1A4320: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A4324:
    ctx->pc = 0x7F1A4324u;
    // 7F1A4324: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4328:
    ctx->pc = 0x7F1A4328u;
    // 7F1A4328: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A432C:
    ctx->pc = 0x7F1A432Cu;
    // 7F1A432C: bl      0x7F3C2440
    {
            ctx->lr = 0x7F1A4330u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F1A4330:
    ctx->pc = 0x7F1A4330u;
    ctx->downcount -= 2;
    // 7F1A4330: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4334:
    ctx->pc = 0x7F1A4334u;
    // 7F1A4334: bl      0x7F3C2440
    {
            ctx->lr = 0x7F1A4338u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F1A4338:
    ctx->pc = 0x7F1A4338u;
    ctx->downcount -= 6;
    // 7F1A4338: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A433C:
    ctx->pc = 0x7F1A433Cu;
    // 7F1A433C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A4340:
    ctx->pc = 0x7F1A4340u;
    // 7F1A4340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A4344:
    ctx->pc = 0x7F1A4344u;
    // 7F1A4344: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A4348:
    ctx->pc = 0x7F1A4348u;
    // 7F1A4348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A434C:
    ctx->pc = 0x7F1A434Cu;
    ctx->downcount -= 18;
    // 7F1A434C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4350:
    ctx->pc = 0x7F1A4350u;
    // 7F1A4350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4354:
    ctx->pc = 0x7F1A4354u;
    // 7F1A4354: lis     r4, 102
    ctx->gpr[4] = ((u32)(s32)(102) << 16);

label_7F1A4358:
    ctx->pc = 0x7F1A4358u;
    // 7F1A4358: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A435C:
    ctx->pc = 0x7F1A435Cu;
    // 7F1A435C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4360:
    ctx->pc = 0x7F1A4360u;
    // 7F1A4360: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4364:
    ctx->pc = 0x7F1A4364u;
    // 7F1A4364: addi    r3, r4, 30416
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(30416);

label_7F1A4368:
    ctx->pc = 0x7F1A4368u;
    // 7F1A4368: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1A436Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1A436C:
    ctx->pc = 0x7F1A436Cu;
    ctx->downcount -= 7;
    // 7F1A436C: lis     r5, 14
    ctx->gpr[5] = ((u32)(s32)(14) << 16);

label_7F1A4370:
    ctx->pc = 0x7F1A4370u;
    // 7F1A4370: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4374:
    ctx->pc = 0x7F1A4374u;
    // 7F1A4374: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F1A4378:
    ctx->pc = 0x7F1A4378u;
    // 7F1A4378: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A437C:
    ctx->pc = 0x7F1A437Cu;
    // 7F1A437C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A4380:
    ctx->pc = 0x7F1A4380u;
    // 7F1A4380: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A4384:
    ctx->pc = 0x7F1A4384u;
    // 7F1A4384: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1A4388u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1A4388:
    ctx->pc = 0x7F1A4388u;
    ctx->downcount -= 3;
    // 7F1A4388: or.   r30, r3, r3
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

label_7F1A438C:
    ctx->pc = 0x7F1A438Cu;
    // 7F1A438C: stw     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4390:
    ctx->pc = 0x7F1A4390u;
    // 7F1A4390: bc    4, 2, 0x7F1A439C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A439C;
        }
    }

label_7F1A4394:
    ctx->pc = 0x7F1A4394u;
    ctx->downcount -= 2;
    // 7F1A4394: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A4398:
    ctx->pc = 0x7F1A4398u;
    // 7F1A4398: b       0x7F1A4438
    {
            goto label_7F1A4438;
    }

label_7F1A439C:
    ctx->pc = 0x7F1A439Cu;
    ctx->downcount -= 2;
    // 7F1A439C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A43A0:
    ctx->pc = 0x7F1A43A0u;
    // 7F1A43A0: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1A43A4u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1A43A4:
    ctx->pc = 0x7F1A43A4u;
    ctx->downcount -= 23;
    // 7F1A43A4: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1A43A8:
    ctx->pc = 0x7F1A43A8u;
    // 7F1A43A8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F1A43AC:
    ctx->pc = 0x7F1A43ACu;
    // 7F1A43AC: stw     r0, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A43B0:
    ctx->pc = 0x7F1A43B0u;
    // 7F1A43B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A43B4:
    ctx->pc = 0x7F1A43B4u;
    // 7F1A43B4: addi    r3, r3, -21852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F1A43B8:
    ctx->pc = 0x7F1A43B8u;
    // 7F1A43B8: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_7F1A43BC:
    ctx->pc = 0x7F1A43BCu;
    // 7F1A43BC: stw     r8, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A43C0:
    ctx->pc = 0x7F1A43C0u;
    // 7F1A43C0: addi    r31, r3, 8192
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(8192);

label_7F1A43C4:
    ctx->pc = 0x7F1A43C4u;
    // 7F1A43C4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F1A43C8:
    ctx->pc = 0x7F1A43C8u;
    // 7F1A43C8: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1A43CC:
    ctx->pc = 0x7F1A43CCu;
    // 7F1A43CC: sth     r8, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1A43D0:
    ctx->pc = 0x7F1A43D0u;
    // 7F1A43D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A43D4:
    ctx->pc = 0x7F1A43D4u;
    // 7F1A43D4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1A43D8:
    ctx->pc = 0x7F1A43D8u;
    // 7F1A43D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1A43DC:
    ctx->pc = 0x7F1A43DCu;
    // 7F1A43DC: sth     r8, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1A43E0:
    ctx->pc = 0x7F1A43E0u;
    // 7F1A43E0: sth     r7, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1A43E4:
    ctx->pc = 0x7F1A43E4u;
    // 7F1A43E4: sth     r7, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1A43E8:
    ctx->pc = 0x7F1A43E8u;
    // 7F1A43E8: stb     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A43EC:
    ctx->pc = 0x7F1A43ECu;
    // 7F1A43EC: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A43F0:
    ctx->pc = 0x7F1A43F0u;
    // 7F1A43F0: stb     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A43F4:
    ctx->pc = 0x7F1A43F4u;
    // 7F1A43F4: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A43F8:
    ctx->pc = 0x7F1A43F8u;
    // 7F1A43F8: lwz     r3, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A43FC:
    ctx->pc = 0x7F1A43FCu;
    // 7F1A43FC: bl      0x7F1A444C
    {
            ctx->lr = 0x7F1A4400u;
            goto label_7F1A444C;
    }

label_7F1A4400:
    ctx->pc = 0x7F1A4400u;
    ctx->downcount -= 5;
    // 7F1A4400: lwz     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4404:
    ctx->pc = 0x7F1A4404u;
    // 7F1A4404: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A4408:
    ctx->pc = 0x7F1A4408u;
    // 7F1A4408: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1A440C:
    ctx->pc = 0x7F1A440Cu;
    // 7F1A440C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1A4410:
    ctx->pc = 0x7F1A4410u;
    // 7F1A4410: bl      0x7F1A444C
    {
            ctx->lr = 0x7F1A4414u;
            goto label_7F1A444C;
    }

label_7F1A4414:
    ctx->pc = 0x7F1A4414u;
    ctx->downcount -= 4;
    // 7F1A4414: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1A4418:
    ctx->pc = 0x7F1A4418u;
    // 7F1A4418: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A441C:
    ctx->pc = 0x7F1A441Cu;
    // 7F1A441C: addi    r3, r3, 12924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12924);

label_7F1A4420:
    ctx->pc = 0x7F1A4420u;
    // 7F1A4420: bl      0x80025A3C
    {
            ctx->lr = 0x7F1A4424u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F1A4424:
    ctx->pc = 0x7F1A4424u;
    ctx->downcount -= 5;
    // 7F1A4424: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4428:
    ctx->pc = 0x7F1A4428u;
    // 7F1A4428: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A442C:
    ctx->pc = 0x7F1A442Cu;
    // 7F1A442C: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4430:
    ctx->pc = 0x7F1A4430u;
    // 7F1A4430: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F1A4434:
    ctx->pc = 0x7F1A4434u;
    // 7F1A4434: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4438:
    ctx->pc = 0x7F1A4438u;
    ctx->downcount -= 16;
    // 7F1A4438: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A443C:
    ctx->pc = 0x7F1A443Cu;
    // 7F1A443C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4440:
    ctx->pc = 0x7F1A4440u;
    // 7F1A4440: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A4444:
    ctx->pc = 0x7F1A4444u;
    // 7F1A4444: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A4448:
    ctx->pc = 0x7F1A4448u;
    // 7F1A4448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A444C:
    ctx->pc = 0x7F1A444Cu;
    ctx->downcount -= 10;
    // 7F1A444C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4450:
    ctx->pc = 0x7F1A4450u;
    // 7F1A4450: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4454:
    ctx->pc = 0x7F1A4454u;
    // 7F1A4454: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4458:
    ctx->pc = 0x7F1A4458u;
    // 7F1A4458: mullw   r0, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F1A445C:
    ctx->pc = 0x7F1A445Cu;
    // 7F1A445C: rlwinm r5, r0, 0, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF0u;
    }

label_7F1A4460:
    ctx->pc = 0x7F1A4460u;
    // 7F1A4460: bl      0x8000519C
    {
            ctx->lr = 0x7F1A4464u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1A4464:
    ctx->pc = 0x7F1A4464u;
    ctx->downcount -= 5;
    // 7F1A4464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4468:
    ctx->pc = 0x7F1A4468u;
    // 7F1A4468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A446C:
    ctx->pc = 0x7F1A446Cu;
    // 7F1A446C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A4470:
    ctx->pc = 0x7F1A4470u;
    // 7F1A4470: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4474:
    ctx->pc = 0x7F1A4474u;
    ctx->downcount -= 18;
    // 7F1A4474: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4478:
    ctx->pc = 0x7F1A4478u;
    // 7F1A4478: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A447C:
    ctx->pc = 0x7F1A447Cu;
    // 7F1A447C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4480:
    ctx->pc = 0x7F1A4480u;
    // 7F1A4480: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A4484:
    ctx->pc = 0x7F1A4484u;
    // 7F1A4484: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4488:
    ctx->pc = 0x7F1A4488u;
    // 7F1A4488: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A448C:
    ctx->pc = 0x7F1A448Cu;
    // 7F1A448C: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4490:
    ctx->pc = 0x7F1A4490u;
    // 7F1A4490: bl      0x7F1A434C
    {
            ctx->lr = 0x7F1A4494u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A434Cu;
                return;
            }
            goto label_7F1A434C;
    }

label_7F1A4494:
    ctx->pc = 0x7F1A4494u;
    ctx->downcount -= 2;
    // 7F1A4494: cmpwi   r3, 0
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

label_7F1A4498:
    ctx->pc = 0x7F1A4498u;
    // 7F1A4498: bc    4, 0, 0x7F1A44A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A44A4;
        }
    }

label_7F1A449C:
    ctx->pc = 0x7F1A449Cu;
    ctx->downcount -= 2;
    // 7F1A449C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A44A0:
    ctx->pc = 0x7F1A44A0u;
    // 7F1A44A0: b       0x7F1A4600
    {
            goto label_7F1A4600;
    }

label_7F1A44A4:
    ctx->pc = 0x7F1A44A4u;
    ctx->downcount -= 6;
    // 7F1A44A4: lis     r3, 19
    ctx->gpr[3] = ((u32)(s32)(19) << 16);

label_7F1A44A8:
    ctx->pc = 0x7F1A44A8u;
    // 7F1A44A8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A44AC:
    ctx->pc = 0x7F1A44ACu;
    // 7F1A44AC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A44B0:
    ctx->pc = 0x7F1A44B0u;
    // 7F1A44B0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1A44B4:
    ctx->pc = 0x7F1A44B4u;
    // 7F1A44B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A44B8:
    ctx->pc = 0x7F1A44B8u;
    // 7F1A44B8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1A44BCu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1A44BC:
    ctx->pc = 0x7F1A44BCu;
    ctx->downcount -= 3;
    // 7F1A44BC: or.   r30, r3, r3
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

label_7F1A44C0:
    ctx->pc = 0x7F1A44C0u;
    // 7F1A44C0: stw     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A44C4:
    ctx->pc = 0x7F1A44C4u;
    // 7F1A44C4: bc    4, 2, 0x7F1A44D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A44D0;
        }
    }

label_7F1A44C8:
    ctx->pc = 0x7F1A44C8u;
    ctx->downcount -= 2;
    // 7F1A44C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A44CC:
    ctx->pc = 0x7F1A44CCu;
    // 7F1A44CC: b       0x7F1A4600
    {
            goto label_7F1A4600;
    }

label_7F1A44D0:
    ctx->pc = 0x7F1A44D0u;
    ctx->downcount -= 3;
    // 7F1A44D0: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F1A44D4:
    ctx->pc = 0x7F1A44D4u;
    // 7F1A44D4: addi    r3, r3, -23184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23184);

label_7F1A44D8:
    ctx->pc = 0x7F1A44D8u;
    // 7F1A44D8: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1A44DCu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1A44DC:
    ctx->pc = 0x7F1A44DCu;
    ctx->downcount -= 5;
    // 7F1A44DC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A44E0:
    ctx->pc = 0x7F1A44E0u;
    // 7F1A44E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A44E4:
    ctx->pc = 0x7F1A44E4u;
    // 7F1A44E4: stw     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A44E8:
    ctx->pc = 0x7F1A44E8u;
    // 7F1A44E8: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A44EC:
    ctx->pc = 0x7F1A44ECu;
    // 7F1A44EC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1A44F0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1A44F0:
    ctx->pc = 0x7F1A44F0u;
    ctx->downcount -= 11;
    // 7F1A44F0: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1A44F4:
    ctx->pc = 0x7F1A44F4u;
    // 7F1A44F4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F1A44F8:
    ctx->pc = 0x7F1A44F8u;
    // 7F1A44F8: stw     r0, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A44FC:
    ctx->pc = 0x7F1A44FCu;
    // 7F1A44FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A4500:
    ctx->pc = 0x7F1A4500u;
    // 7F1A4500: addi    r3, r3, -21852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F1A4504:
    ctx->pc = 0x7F1A4504u;
    // 7F1A4504: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1A4508:
    ctx->pc = 0x7F1A4508u;
    // 7F1A4508: stw     r4, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A450C:
    ctx->pc = 0x7F1A450Cu;
    // 7F1A450C: addi    r31, r3, 8192
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(8192);

label_7F1A4510:
    ctx->pc = 0x7F1A4510u;
    // 7F1A4510: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A4514:
    ctx->pc = 0x7F1A4514u;
    // 7F1A4514: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A4518:
    ctx->downcount -= 2;
    // 7F1A4518: cmpwi   r6, 0
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

label_7F1A451C:
    // 7F1A451C: bc    4, 2, 0x7F1A4534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4534;
        }
    }

label_7F1A4520:
    ctx->downcount -= 5;
    // 7F1A4520: add   r3, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A4524:
    // 7F1A4524: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A4528:
    ctx->pc = 0x7F1A4528u;
    // 7F1A4528: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A452C:
    ctx->pc = 0x7F1A452Cu;
    // 7F1A452C: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4530:
    // 7F1A4530: b       0x7F1A4548
    {
            goto label_7F1A4548;
    }

label_7F1A4534:
    ctx->downcount -= 5;
    // 7F1A4534: add   r3, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A4538:
    // 7F1A4538: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F1A453C:
    ctx->pc = 0x7F1A453Cu;
    // 7F1A453C: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4540:
    // 7F1A4540: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A4544:
    ctx->pc = 0x7F1A4544u;
    // 7F1A4544: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4548:
    ctx->pc = 0x7F1A4548u;
    ctx->downcount -= 16;
    // 7F1A4548: lwz     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A454C:
    // 7F1A454C: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1A4550:
    // 7F1A4550: cmpwi   r6, 0
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

label_7F1A4554:
    // 7F1A4554: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F1A4558:
    ctx->pc = 0x7F1A4558u;
    // 7F1A4558: stb     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A455C:
    ctx->pc = 0x7F1A455Cu;
    // 7F1A455C: lwz     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4560:
    // 7F1A4560: rlwinm r3, r3, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x000000FFu;
    }

label_7F1A4564:
    ctx->pc = 0x7F1A4564u;
    // 7F1A4564: stb     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A4568:
    ctx->pc = 0x7F1A4568u;
    // 7F1A4568: lwz     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A456C:
    // 7F1A456C: rlwinm r3, r3, 16, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x000000FFu;
    }

label_7F1A4570:
    ctx->pc = 0x7F1A4570u;
    // 7F1A4570: stb     r3, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A4574:
    ctx->pc = 0x7F1A4574u;
    // 7F1A4574: lwz     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4578:
    // 7F1A4578: rlwinm r3, r3, 8, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x000000FFu;
    }

label_7F1A457C:
    ctx->pc = 0x7F1A457Cu;
    // 7F1A457C: stb     r3, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A4580:
    ctx->pc = 0x7F1A4580u;
    // 7F1A4580: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4584:
    // 7F1A4584: bc    4, 2, 0x7F1A4598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4598;
        }
    }

label_7F1A4588:
    ctx->downcount -= 4;
    // 7F1A4588: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1A458C:
    // 7F1A458C: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F1A4590:
    ctx->pc = 0x7F1A4590u;
    // 7F1A4590: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4594:
    // 7F1A4594: b       0x7F1A45A0
    {
            goto label_7F1A45A0;
    }

label_7F1A4598:
    ctx->downcount -= 2;
    // 7F1A4598: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F1A459C:
    ctx->pc = 0x7F1A459Cu;
    // 7F1A459C: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A45A0:
    ctx->downcount -= 3;
    // 7F1A45A0: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1A45A4:
    // 7F1A45A4: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_7F1A45A8:
    // 7F1A45A8: bc    16, 0, 0x7F1A4518
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4518u;
                return;
            }
            goto label_7F1A4518;
        }
    }

label_7F1A45AC:
    ctx->pc = 0x7F1A45ACu;
    ctx->downcount -= 5;
    // 7F1A45AC: lwz     r3, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A45B0:
    ctx->pc = 0x7F1A45B0u;
    // 7F1A45B0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A45B4:
    ctx->pc = 0x7F1A45B4u;
    // 7F1A45B4: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F1A45B8:
    ctx->pc = 0x7F1A45B8u;
    // 7F1A45B8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1A45BC:
    ctx->pc = 0x7F1A45BCu;
    // 7F1A45BC: bl      0x7F1A444C
    {
            ctx->lr = 0x7F1A45C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A444Cu;
                return;
            }
            goto label_7F1A444C;
    }

label_7F1A45C0:
    ctx->pc = 0x7F1A45C0u;
    ctx->downcount -= 5;
    // 7F1A45C0: lwz     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A45C4:
    ctx->pc = 0x7F1A45C4u;
    // 7F1A45C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A45C8:
    ctx->pc = 0x7F1A45C8u;
    // 7F1A45C8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F1A45CC:
    ctx->pc = 0x7F1A45CCu;
    // 7F1A45CC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1A45D0:
    ctx->pc = 0x7F1A45D0u;
    // 7F1A45D0: bl      0x7F1A444C
    {
            ctx->lr = 0x7F1A45D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A444Cu;
                return;
            }
            goto label_7F1A444C;
    }

label_7F1A45D4:
    ctx->pc = 0x7F1A45D4u;
    ctx->downcount -= 4;
    // 7F1A45D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1A45D8:
    ctx->pc = 0x7F1A45D8u;
    // 7F1A45D8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A45DC:
    ctx->pc = 0x7F1A45DCu;
    // 7F1A45DC: addi    r3, r3, 12924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12924);

label_7F1A45E0:
    ctx->pc = 0x7F1A45E0u;
    // 7F1A45E0: bl      0x80025A3C
    {
            ctx->lr = 0x7F1A45E4u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F1A45E4:
    ctx->pc = 0x7F1A45E4u;
    ctx->downcount -= 7;
    // 7F1A45E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A45E8:
    ctx->pc = 0x7F1A45E8u;
    // 7F1A45E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A45EC:
    ctx->pc = 0x7F1A45ECu;
    // 7F1A45EC: addi    r4, r3, 5912
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5912);

label_7F1A45F0:
    ctx->pc = 0x7F1A45F0u;
    // 7F1A45F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A45F4:
    ctx->pc = 0x7F1A45F4u;
    // 7F1A45F4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A45F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A45F8:
    ctx->pc = 0x7F1A45F8u;
    // 7F1A45F8: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A45F8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A45FC:
    ctx->pc = 0x7F1A45FCu;
    // 7F1A45FC: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4600:
    ctx->pc = 0x7F1A4600u;
    ctx->downcount -= 16;
    // 7F1A4600: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A4604:
    ctx->pc = 0x7F1A4604u;
    // 7F1A4604: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4608:
    ctx->pc = 0x7F1A4608u;
    // 7F1A4608: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A460C:
    ctx->pc = 0x7F1A460Cu;
    // 7F1A460C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A4610:
    ctx->pc = 0x7F1A4610u;
    // 7F1A4610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4614:
    ctx->pc = 0x7F1A4614u;
    ctx->downcount -= 5;
    // 7F1A4614: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4618:
    ctx->pc = 0x7F1A4618u;
    // 7F1A4618: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A461C:
    ctx->pc = 0x7F1A461Cu;
    // 7F1A461C: cmpwi   r4, 1
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

label_7F1A4620:
    ctx->pc = 0x7F1A4620u;
    // 7F1A4620: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4624:
    ctx->pc = 0x7F1A4624u;
    // 7F1A4624: bc    12, 2, 0x7F1A4678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4678;
        }
    }

label_7F1A4628:
    ctx->pc = 0x7F1A4628u;
    ctx->downcount -= 1;
    // 7F1A4628: bc    4, 0, 0x7F1A4638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4638;
        }
    }

label_7F1A462C:
    ctx->pc = 0x7F1A462Cu;
    ctx->downcount -= 2;
    // 7F1A462C: cmpwi   r4, 0
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

label_7F1A4630:
    ctx->pc = 0x7F1A4630u;
    // 7F1A4630: bc    4, 0, 0x7F1A464C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A464C;
        }
    }

label_7F1A4634:
    ctx->pc = 0x7F1A4634u;
    ctx->downcount -= 1;
    // 7F1A4634: b       0x7F1A46CC
    {
            goto label_7F1A46CC;
    }

label_7F1A4638:
    ctx->pc = 0x7F1A4638u;
    ctx->downcount -= 4;
    // 7F1A4638: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1A463C:
    ctx->pc = 0x7F1A463Cu;
    // 7F1A463C: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1A4640:
    ctx->pc = 0x7F1A4640u;
    // 7F1A4640: cmpw    r4, r0
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

label_7F1A4644:
    ctx->pc = 0x7F1A4644u;
    // 7F1A4644: bc    12, 2, 0x7F1A46A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A46A4;
        }
    }

label_7F1A4648:
    ctx->pc = 0x7F1A4648u;
    ctx->downcount -= 1;
    // 7F1A4648: b       0x7F1A46CC
    {
            goto label_7F1A46CC;
    }

label_7F1A464C:
    ctx->pc = 0x7F1A464Cu;
    ctx->downcount -= 11;
    // 7F1A464C: lwz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4650:
    ctx->pc = 0x7F1A4650u;
    // 7F1A4650: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A4654:
    ctx->pc = 0x7F1A4654u;
    // 7F1A4654: lwz     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4658:
    ctx->pc = 0x7F1A4658u;
    // 7F1A4658: rlwinm r4, r4, 0, 20, 17
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F1A465C:
    ctx->pc = 0x7F1A465Cu;
    // 7F1A465C: stw     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4660:
    ctx->pc = 0x7F1A4660u;
    // 7F1A4660: lwz     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4664:
    ctx->pc = 0x7F1A4664u;
    // 7F1A4664: lwz     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4668:
    ctx->pc = 0x7F1A4668u;
    // 7F1A4668: rlwinm r4, r4, 0, 20, 17
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFCFFFu;
    }

label_7F1A466C:
    ctx->pc = 0x7F1A466Cu;
    // 7F1A466C: stw     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4670:
    ctx->pc = 0x7F1A4670u;
    // 7F1A4670: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4674:
    ctx->pc = 0x7F1A4674u;
    // 7F1A4674: b       0x7F1A46D4
    {
            goto label_7F1A46D4;
    }

label_7F1A4678:
    ctx->pc = 0x7F1A4678u;
    ctx->downcount -= 11;
    // 7F1A4678: lwz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A467C:
    ctx->pc = 0x7F1A467Cu;
    // 7F1A467C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A4680:
    ctx->pc = 0x7F1A4680u;
    // 7F1A4680: lwz     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4684:
    ctx->pc = 0x7F1A4684u;
    // 7F1A4684: ori     r4, r4, 0x3000
    ctx->gpr[4] = ctx->gpr[4] | 0x3000u;

label_7F1A4688:
    ctx->pc = 0x7F1A4688u;
    // 7F1A4688: stw     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A468C:
    ctx->pc = 0x7F1A468Cu;
    // 7F1A468C: lwz     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4690:
    ctx->pc = 0x7F1A4690u;
    // 7F1A4690: lwz     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4694:
    ctx->pc = 0x7F1A4694u;
    // 7F1A4694: ori     r4, r4, 0x3000
    ctx->gpr[4] = ctx->gpr[4] | 0x3000u;

label_7F1A4698:
    ctx->pc = 0x7F1A4698u;
    // 7F1A4698: stw     r4, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A469C:
    ctx->pc = 0x7F1A469Cu;
    // 7F1A469C: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A46A0:
    ctx->pc = 0x7F1A46A0u;
    // 7F1A46A0: b       0x7F1A46D4
    {
            goto label_7F1A46D4;
    }

label_7F1A46A4:
    ctx->pc = 0x7F1A46A4u;
    ctx->downcount -= 5;
    // 7F1A46A4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1A46A8:
    ctx->pc = 0x7F1A46A8u;
    // 7F1A46A8: addi    r6, r3, 72
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(72);

label_7F1A46AC:
    ctx->pc = 0x7F1A46ACu;
    // 7F1A46AC: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1A46B0:
    ctx->pc = 0x7F1A46B0u;
    // 7F1A46B0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A46B4:
    loop_7F1A46B4(ctx);
    if (ctx->pc == 0x7F1A46C8u) goto label_7F1A46C8;
    return;
label_7F1A46B8:
    ctx->pc = 0x7F1A46B8u;
    // 7F1A46B8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1A46BC:
    ctx->pc = 0x7F1A46BCu;
    // 7F1A46BC: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A46C0:
    ctx->pc = 0x7F1A46C0u;
    // 7F1A46C0: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F1A46C4:
    // 7F1A46C4: bc    16, 0, 0x7F1A46B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A46B4u;
                return;
            }
            goto label_7F1A46B4;
        }
    }

label_7F1A46C8:
    ctx->pc = 0x7F1A46C8u;
    ctx->downcount -= 1;
    // 7F1A46C8: b       0x7F1A46D4
    {
            goto label_7F1A46D4;
    }

label_7F1A46CC:
    ctx->pc = 0x7F1A46CCu;
    ctx->downcount -= 1;
    // 7F1A46CC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A46D0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A46D0:
    ctx->pc = 0x7F1A46D0u;
    ctx->downcount -= 1;
    // 7F1A46D0: b       0x7F1A46D8
    {
            goto label_7F1A46D8;
    }

label_7F1A46D4:
    ctx->pc = 0x7F1A46D4u;
    ctx->downcount -= 1;
    // 7F1A46D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A46D8:
    ctx->pc = 0x7F1A46D8u;
    ctx->downcount -= 5;
    // 7F1A46D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A46DC:
    ctx->pc = 0x7F1A46DCu;
    // 7F1A46DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A46E0:
    ctx->pc = 0x7F1A46E0u;
    // 7F1A46E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A46E4:
    ctx->pc = 0x7F1A46E4u;
    // 7F1A46E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A46E8:
    ctx->pc = 0x7F1A46E8u;
    ctx->downcount -= 24;
    // 7F1A46E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A46EC:
    ctx->pc = 0x7F1A46ECu;
    // 7F1A46EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A46F0:
    ctx->pc = 0x7F1A46F0u;
    // 7F1A46F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A46F4:
    ctx->pc = 0x7F1A46F4u;
    // 7F1A46F4: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A46F8:
    ctx->pc = 0x7F1A46F8u;
    // 7F1A46F8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A46FC:
    ctx->pc = 0x7F1A46FCu;
    // 7F1A46FC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A4700:
    ctx->pc = 0x7F1A4700u;
    // 7F1A4700: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A4704:
    ctx->pc = 0x7F1A4704u;
    // 7F1A4704: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A4708:
    ctx->pc = 0x7F1A4708u;
    // 7F1A4708: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A470C:
    ctx->pc = 0x7F1A470Cu;
    // 7F1A470C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1A4710:
    ctx->pc = 0x7F1A4710u;
    // 7F1A4710: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A4714:
    ctx->pc = 0x7F1A4714u;
    // 7F1A4714: li      r5, 156
    ctx->gpr[5] = (u32)(s32)(156);

label_7F1A4718:
    ctx->pc = 0x7F1A4718u;
    // 7F1A4718: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A471C:
    ctx->pc = 0x7F1A471Cu;
    // 7F1A471C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A4720u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A4720:
    ctx->pc = 0x7F1A4720u;
    ctx->downcount -= 2;
    // 7F1A4720: or.   r31, r3, r3
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

label_7F1A4724:
    ctx->pc = 0x7F1A4724u;
    // 7F1A4724: bc    12, 2, 0x7F1A47C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A47C8;
        }
    }

label_7F1A4728:
    ctx->pc = 0x7F1A4728u;
    ctx->downcount -= 5;
    // 7F1A4728: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A472C:
    ctx->pc = 0x7F1A472Cu;
    // 7F1A472C: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A4730:
    ctx->pc = 0x7F1A4730u;
    // 7F1A4730: addi    r4, r4, 16464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16464);

label_7F1A4734:
    ctx->pc = 0x7F1A4734u;
    // 7F1A4734: addi    r5, r5, 17172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17172);

label_7F1A4738:
    ctx->pc = 0x7F1A4738u;
    // 7F1A4738: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A473Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A473C:
    ctx->pc = 0x7F1A473Cu;
    ctx->downcount -= 15;
    // 7F1A473C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4740:
    ctx->pc = 0x7F1A4740u;
    // 7F1A4740: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1A4744:
    ctx->pc = 0x7F1A4744u;
    // 7F1A4744: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A4748:
    ctx->pc = 0x7F1A4748u;
    // 7F1A4748: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1A474C:
    ctx->pc = 0x7F1A474Cu;
    // 7F1A474C: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1A4750:
    ctx->pc = 0x7F1A4750u;
    // 7F1A4750: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1A4754:
    ctx->pc = 0x7F1A4754u;
    // 7F1A4754: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4758:
    ctx->pc = 0x7F1A4758u;
    // 7F1A4758: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_7F1A475C:
    ctx->pc = 0x7F1A475Cu;
    // 7F1A475C: addi    r4, r26, -4
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(-4);

label_7F1A4760:
    ctx->pc = 0x7F1A4760u;
    // 7F1A4760: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4764:
    ctx->pc = 0x7F1A4764u;
    // 7F1A4764: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4768:
    ctx->pc = 0x7F1A4768u;
    // 7F1A4768: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A476C:
    ctx->pc = 0x7F1A476Cu;
    // 7F1A476C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4770:
    ctx->pc = 0x7F1A4770u;
    // 7F1A4770: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A4774:
    loop_7F1A4774(ctx);
    if (ctx->pc == 0x7F1A4788u) goto label_7F1A4788;
    return;
label_7F1A4778:
    ctx->pc = 0x7F1A4778u;
    // 7F1A4778: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1A477C:
    ctx->pc = 0x7F1A477Cu;
    // 7F1A477C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4780:
    ctx->pc = 0x7F1A4780u;
    // 7F1A4780: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1A4784:
    // 7F1A4784: bc    16, 0, 0x7F1A4774
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4774u;
                return;
            }
            goto label_7F1A4774;
        }
    }

label_7F1A4788:
    ctx->pc = 0x7F1A4788u;
    ctx->downcount -= 6;
    // 7F1A4788: stw     r27, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A478C:
    ctx->pc = 0x7F1A478Cu;
    // 7F1A478C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A4790:
    ctx->pc = 0x7F1A4790u;
    // 7F1A4790: stw     r28, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1A4794:
    ctx->pc = 0x7F1A4794u;
    // 7F1A4794: stw     r29, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1A4798:
    ctx->pc = 0x7F1A4798u;
    // 7F1A4798: stw     r30, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A479C:
    ctx->pc = 0x7F1A479Cu;
    // 7F1A479C: bl      0x7F1A4474
    {
            ctx->lr = 0x7F1A47A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4474u;
                return;
            }
            goto label_7F1A4474;
    }

label_7F1A47A0:
    ctx->pc = 0x7F1A47A0u;
    ctx->downcount -= 2;
    // 7F1A47A0: cmpwi   r3, 0
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

label_7F1A47A4:
    ctx->pc = 0x7F1A47A4u;
    // 7F1A47A4: bc    4, 0, 0x7F1A47B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A47B8;
        }
    }

label_7F1A47A8:
    ctx->pc = 0x7F1A47A8u;
    ctx->downcount -= 2;
    // 7F1A47A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A47AC:
    ctx->pc = 0x7F1A47ACu;
    // 7F1A47AC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A47B0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A47B0:
    ctx->pc = 0x7F1A47B0u;
    ctx->downcount -= 2;
    // 7F1A47B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A47B4:
    ctx->pc = 0x7F1A47B4u;
    // 7F1A47B4: b       0x7F1A47CC
    {
            goto label_7F1A47CC;
    }

label_7F1A47B8:
    ctx->pc = 0x7F1A47B8u;
    ctx->downcount -= 4;
    // 7F1A47B8: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A47BC:
    ctx->pc = 0x7F1A47BCu;
    // 7F1A47BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A47C0:
    ctx->pc = 0x7F1A47C0u;
    // 7F1A47C0: addi    r4, r4, 17940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17940);

label_7F1A47C4:
    ctx->pc = 0x7F1A47C4u;
    // 7F1A47C4: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A47C8u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A47C8:
    ctx->pc = 0x7F1A47C8u;
    ctx->downcount -= 1;
    // 7F1A47C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A47CC:
    ctx->pc = 0x7F1A47CCu;
    ctx->downcount -= 16;
    // 7F1A47CC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A47D0:
    ctx->pc = 0x7F1A47D0u;
    // 7F1A47D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A47D4:
    ctx->pc = 0x7F1A47D4u;
    // 7F1A47D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A47D8:
    ctx->pc = 0x7F1A47D8u;
    // 7F1A47D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A47DC:
    ctx->pc = 0x7F1A47DCu;
    // 7F1A47DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A47E0:
    ctx->pc = 0x7F1A47E0u;
    ctx->downcount -= 10;
    // 7F1A47E0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A47E4:
    ctx->pc = 0x7F1A47E4u;
    // 7F1A47E4: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A47E8:
    ctx->pc = 0x7F1A47E8u;
    // 7F1A47E8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A47EC:
    ctx->pc = 0x7F1A47ECu;
    // 7F1A47EC: stwu     r4, 13916(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13916);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_7F1A47F0:
    ctx->pc = 0x7F1A47F0u;
    // 7F1A47F0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A47F4:
    ctx->pc = 0x7F1A47F4u;
    // 7F1A47F4: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A47F8:
    ctx->pc = 0x7F1A47F8u;
    // 7F1A47F8: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A47FC:
    ctx->pc = 0x7F1A47FCu;
    // 7F1A47FC: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4800:
    ctx->pc = 0x7F1A4800u;
    // 7F1A4800: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4804:
    ctx->pc = 0x7F1A4804u;
    // 7F1A4804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4808:
    ctx->pc = 0x7F1A4808u;
    ctx->downcount -= 20;
    // 7F1A4808: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A480C:
    ctx->pc = 0x7F1A480Cu;
    // 7F1A480C: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A4810:
    ctx->pc = 0x7F1A4810u;
    // 7F1A4810: addi    r7, r5, 13900
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(13900);

label_7F1A4814:
    ctx->pc = 0x7F1A4814u;
    // 7F1A4814: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4818:
    ctx->pc = 0x7F1A4818u;
    // 7F1A4818: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A481C:
    ctx->pc = 0x7F1A481Cu;
    // 7F1A481C: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4820:
    ctx->pc = 0x7F1A4820u;
    // 7F1A4820: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4824:
    ctx->pc = 0x7F1A4824u;
    // 7F1A4824: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A4828:
    ctx->pc = 0x7F1A4828u;
    // 7F1A4828: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A482C:
    ctx->pc = 0x7F1A482Cu;
    // 7F1A482C: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4830:
    ctx->pc = 0x7F1A4830u;
    // 7F1A4830: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4834:
    ctx->pc = 0x7F1A4834u;
    // 7F1A4834: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4838:
    ctx->pc = 0x7F1A4838u;
    // 7F1A4838: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A483C:
    ctx->pc = 0x7F1A483Cu;
    // 7F1A483C: stwu     r3, 13884(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13884);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
        ctx->gpr[5] = ea;
    }

label_7F1A4840:
    ctx->pc = 0x7F1A4840u;
    // 7F1A4840: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4844:
    ctx->pc = 0x7F1A4844u;
    // 7F1A4844: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4848:
    ctx->pc = 0x7F1A4848u;
    // 7F1A4848: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A484C:
    ctx->pc = 0x7F1A484Cu;
    // 7F1A484C: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4850:
    ctx->pc = 0x7F1A4850u;
    // 7F1A4850: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4854:
    ctx->pc = 0x7F1A4854u;
    // 7F1A4854: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4858:
    ctx->pc = 0x7F1A4858u;
    ctx->downcount -= 64;
    // 7F1A4858: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A485C:
    ctx->pc = 0x7F1A485Cu;
    // 7F1A485C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4860:
    ctx->pc = 0x7F1A4860u;
    // 7F1A4860: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1A4864:
    ctx->pc = 0x7F1A4864u;
    // 7F1A4864: lis     r12, 32588
    ctx->gpr[12] = ((u32)(s32)(32588) << 16);

label_7F1A4868:
    ctx->pc = 0x7F1A4868u;
    // 7F1A4868: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A486C:
    ctx->pc = 0x7F1A486Cu;
    // 7F1A486C: lis     r11, 32588
    ctx->gpr[11] = ((u32)(s32)(32588) << 16);

label_7F1A4870:
    ctx->pc = 0x7F1A4870u;
    // 7F1A4870: lis     r10, 32588
    ctx->gpr[10] = ((u32)(s32)(32588) << 16);

label_7F1A4874:
    ctx->pc = 0x7F1A4874u;
    // 7F1A4874: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4878:
    ctx->pc = 0x7F1A4878u;
    // 7F1A4878: addi    r27, r9, 13820
    ctx->gpr[27] = ctx->gpr[9] + (u32)(s32)(13820);

label_7F1A487C:
    ctx->pc = 0x7F1A487Cu;
    // 7F1A487C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A4880:
    ctx->pc = 0x7F1A4880u;
    // 7F1A4880: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4884:
    ctx->pc = 0x7F1A4884u;
    // 7F1A4884: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A4888:
    ctx->pc = 0x7F1A4888u;
    // 7F1A4888: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1A488C:
    ctx->pc = 0x7F1A488Cu;
    // 7F1A488C: addi    r6, r10, 13868
    ctx->gpr[6] = ctx->gpr[10] + (u32)(s32)(13868);

label_7F1A4890:
    ctx->pc = 0x7F1A4890u;
    // 7F1A4890: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A4894:
    ctx->pc = 0x7F1A4894u;
    // 7F1A4894: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1A4898:
    ctx->pc = 0x7F1A4898u;
    // 7F1A4898: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A489C:
    ctx->pc = 0x7F1A489Cu;
    // 7F1A489C: stw     r8, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A48A0:
    ctx->pc = 0x7F1A48A0u;
    // 7F1A48A0: lis     r8, 32588
    ctx->gpr[8] = ((u32)(s32)(32588) << 16);

label_7F1A48A4:
    ctx->pc = 0x7F1A48A4u;
    // 7F1A48A4: lfs     f1, 13900(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1A48A4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(13900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A48A8:
    ctx->pc = 0x7F1A48A8u;
    // 7F1A48A8: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A48AC:
    ctx->pc = 0x7F1A48ACu;
    // 7F1A48AC: addi    r0, r9, 13756
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(13756);

label_7F1A48B0:
    ctx->pc = 0x7F1A48B0u;
    // 7F1A48B0: addi    r9, r11, 13852
    ctx->gpr[9] = ctx->gpr[11] + (u32)(s32)(13852);

label_7F1A48B4:
    ctx->pc = 0x7F1A48B4u;
    // 7F1A48B4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A48B8:
    ctx->pc = 0x7F1A48B8u;
    // 7F1A48B8: lwz     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A48BC:
    ctx->pc = 0x7F1A48BCu;
    // 7F1A48BC: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A48C0:
    ctx->pc = 0x7F1A48C0u;
    // 7F1A48C0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A48C4:
    ctx->pc = 0x7F1A48C4u;
    // 7F1A48C4: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A48C8:
    ctx->pc = 0x7F1A48C8u;
    // 7F1A48C8: stw     r5, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A48CC:
    ctx->pc = 0x7F1A48CCu;
    // 7F1A48CC: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A48D0:
    ctx->pc = 0x7F1A48D0u;
    // 7F1A48D0: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A48D4:
    ctx->pc = 0x7F1A48D4u;
    // 7F1A48D4: stwu     r5, 13836(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(13836);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[12] = ea;
    }

label_7F1A48D8:
    ctx->pc = 0x7F1A48D8u;
    // 7F1A48D8: stw     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A48DC:
    ctx->pc = 0x7F1A48DCu;
    // 7F1A48DC: lwz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A48E0:
    ctx->pc = 0x7F1A48E0u;
    // 7F1A48E0: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A48E4:
    ctx->pc = 0x7F1A48E4u;
    // 7F1A48E4: stw     r5, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A48E8:
    ctx->pc = 0x7F1A48E8u;
    // 7F1A48E8: stw     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A48EC:
    ctx->pc = 0x7F1A48ECu;
    // 7F1A48EC: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A48F0:
    ctx->pc = 0x7F1A48F0u;
    // 7F1A48F0: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A48F4:
    ctx->pc = 0x7F1A48F4u;
    // 7F1A48F4: stw     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A48F8:
    ctx->pc = 0x7F1A48F8u;
    // 7F1A48F8: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A48FC:
    ctx->pc = 0x7F1A48FCu;
    // 7F1A48FC: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4900:
    ctx->pc = 0x7F1A4900u;
    // 7F1A4900: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4904:
    ctx->pc = 0x7F1A4904u;
    // 7F1A4904: stw     r5, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4908:
    ctx->pc = 0x7F1A4908u;
    // 7F1A4908: stw     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A490C:
    ctx->pc = 0x7F1A490Cu;
    // 7F1A490C: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4910:
    ctx->pc = 0x7F1A4910u;
    // 7F1A4910: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4914:
    ctx->pc = 0x7F1A4914u;
    // 7F1A4914: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4918:
    ctx->pc = 0x7F1A4918u;
    // 7F1A4918: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A491C:
    ctx->pc = 0x7F1A491Cu;
    // 7F1A491C: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4920:
    ctx->pc = 0x7F1A4920u;
    // 7F1A4920: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4924:
    ctx->pc = 0x7F1A4924u;
    // 7F1A4924: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4928:
    ctx->pc = 0x7F1A4928u;
    // 7F1A4928: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A492C:
    ctx->pc = 0x7F1A492Cu;
    // 7F1A492C: bl      0x80026020
    {
            ctx->lr = 0x7F1A4930u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4930:
    ctx->pc = 0x7F1A4930u;
    ctx->downcount -= 7;
    // 7F1A4930: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4934:
    ctx->pc = 0x7F1A4934u;
    // 7F1A4934: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4938:
    ctx->pc = 0x7F1A4938u;
    // 7F1A4938: addi    r27, r3, 13900
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A493C:
    ctx->pc = 0x7F1A493Cu;
    // 7F1A493C: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1A493Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4940:
    ctx->pc = 0x7F1A4940u;
    // 7F1A4940: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A4944:
    ctx->pc = 0x7F1A4944u;
    // 7F1A4944: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_7F1A4948:
    ctx->pc = 0x7F1A4948u;
    // 7F1A4948: bl      0x80026020
    {
            ctx->lr = 0x7F1A494Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A494C:
    ctx->pc = 0x7F1A494Cu;
    ctx->downcount -= 6;
    // 7F1A494C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4950:
    ctx->pc = 0x7F1A4950u;
    // 7F1A4950: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4954:
    ctx->pc = 0x7F1A4954u;
    // 7F1A4954: addi    r3, r3, 13804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13804);

label_7F1A4958:
    ctx->pc = 0x7F1A4958u;
    // 7F1A4958: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A495C:
    ctx->pc = 0x7F1A495Cu;
    // 7F1A495C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4960:
    ctx->pc = 0x7F1A4960u;
    // 7F1A4960: bl      0x800261B4
    {
            ctx->lr = 0x7F1A4964u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A4964:
    ctx->pc = 0x7F1A4964u;
    ctx->downcount -= 7;
    // 7F1A4964: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4968:
    ctx->pc = 0x7F1A4968u;
    // 7F1A4968: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A496C:
    ctx->pc = 0x7F1A496Cu;
    // 7F1A496C: addi    r5, r3, 13900
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A4970:
    ctx->pc = 0x7F1A4970u;
    // 7F1A4970: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4970u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4974:
    ctx->pc = 0x7F1A4974u;
    // 7F1A4974: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A4978:
    ctx->pc = 0x7F1A4978u;
    // 7F1A4978: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A497C:
    ctx->pc = 0x7F1A497Cu;
    // 7F1A497C: bl      0x80026020
    {
            ctx->lr = 0x7F1A4980u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4980:
    ctx->pc = 0x7F1A4980u;
    ctx->downcount -= 5;
    // 7F1A4980: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4984:
    ctx->pc = 0x7F1A4984u;
    // 7F1A4984: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4984u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4988:
    ctx->pc = 0x7F1A4988u;
    // 7F1A4988: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_7F1A498C:
    ctx->pc = 0x7F1A498Cu;
    // 7F1A498C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A4990:
    ctx->pc = 0x7F1A4990u;
    // 7F1A4990: bl      0x80026020
    {
            ctx->lr = 0x7F1A4994u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4994:
    ctx->pc = 0x7F1A4994u;
    ctx->downcount -= 6;
    // 7F1A4994: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4998:
    ctx->pc = 0x7F1A4998u;
    // 7F1A4998: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A499C:
    ctx->pc = 0x7F1A499Cu;
    // 7F1A499C: addi    r3, r3, 13788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13788);

label_7F1A49A0:
    ctx->pc = 0x7F1A49A0u;
    // 7F1A49A0: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A49A4:
    ctx->pc = 0x7F1A49A4u;
    // 7F1A49A4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A49A8:
    ctx->pc = 0x7F1A49A8u;
    // 7F1A49A8: bl      0x800261B4
    {
            ctx->lr = 0x7F1A49ACu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A49AC:
    ctx->pc = 0x7F1A49ACu;
    ctx->downcount -= 8;
    // 7F1A49AC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A49B0:
    ctx->pc = 0x7F1A49B0u;
    // 7F1A49B0: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1A49B4:
    ctx->pc = 0x7F1A49B4u;
    // 7F1A49B4: addi    r4, r3, 13900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A49B8:
    ctx->pc = 0x7F1A49B8u;
    // 7F1A49B8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A49BC:
    ctx->pc = 0x7F1A49BCu;
    // 7F1A49BC: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A49BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A49C0:
    ctx->pc = 0x7F1A49C0u;
    // 7F1A49C0: addi    r3, r6, 13804
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13804);

label_7F1A49C4:
    ctx->pc = 0x7F1A49C4u;
    // 7F1A49C4: addi    r4, r5, 13756
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(13756);

label_7F1A49C8:
    ctx->pc = 0x7F1A49C8u;
    // 7F1A49C8: bl      0x80026020
    {
            ctx->lr = 0x7F1A49CCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A49CC:
    ctx->pc = 0x7F1A49CCu;
    ctx->downcount -= 8;
    // 7F1A49CC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A49D0:
    ctx->pc = 0x7F1A49D0u;
    // 7F1A49D0: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1A49D4:
    ctx->pc = 0x7F1A49D4u;
    // 7F1A49D4: addi    r4, r3, 13900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A49D8:
    ctx->pc = 0x7F1A49D8u;
    // 7F1A49D8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A49DC:
    ctx->pc = 0x7F1A49DCu;
    // 7F1A49DC: lfs     f1, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A49DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A49E0:
    ctx->pc = 0x7F1A49E0u;
    // 7F1A49E0: addi    r3, r6, 13788
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13788);

label_7F1A49E4:
    ctx->pc = 0x7F1A49E4u;
    // 7F1A49E4: addi    r4, r5, 13772
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(13772);

label_7F1A49E8:
    ctx->pc = 0x7F1A49E8u;
    // 7F1A49E8: bl      0x80026020
    {
            ctx->lr = 0x7F1A49ECu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A49EC:
    ctx->pc = 0x7F1A49ECu;
    ctx->downcount -= 6;
    // 7F1A49EC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A49F0:
    ctx->pc = 0x7F1A49F0u;
    // 7F1A49F0: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A49F4:
    ctx->pc = 0x7F1A49F4u;
    // 7F1A49F4: addi    r3, r3, 13772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13772);

label_7F1A49F8:
    ctx->pc = 0x7F1A49F8u;
    // 7F1A49F8: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A49FC:
    ctx->pc = 0x7F1A49FCu;
    // 7F1A49FC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4A00:
    ctx->pc = 0x7F1A4A00u;
    // 7F1A4A00: bl      0x800261B4
    {
            ctx->lr = 0x7F1A4A04u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A4A04:
    ctx->pc = 0x7F1A4A04u;
    ctx->downcount -= 6;
    // 7F1A4A04: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4A08:
    ctx->pc = 0x7F1A4A08u;
    // 7F1A4A08: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A4A0C:
    ctx->pc = 0x7F1A4A0Cu;
    // 7F1A4A0C: addi    r4, r3, 13772
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13772);

label_7F1A4A10:
    ctx->pc = 0x7F1A4A10u;
    // 7F1A4A10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A4A14:
    ctx->pc = 0x7F1A4A14u;
    // 7F1A4A14: addi    r5, r5, 13884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13884);

label_7F1A4A18:
    ctx->pc = 0x7F1A4A18u;
    // 7F1A4A18: bl      0x7F115684
    {
            ctx->lr = 0x7F1A4A1Cu;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F1A4A1C:
    ctx->pc = 0x7F1A4A1Cu;
    ctx->downcount -= 16;
    // 7F1A4A1C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A4A20:
    ctx->pc = 0x7F1A4A20u;
    // 7F1A4A20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4A24:
    ctx->pc = 0x7F1A4A24u;
    // 7F1A4A24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A4A28:
    ctx->pc = 0x7F1A4A28u;
    // 7F1A4A28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A4A2C:
    ctx->pc = 0x7F1A4A2Cu;
    // 7F1A4A2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4A30:
    ctx->pc = 0x7F1A4A30u;
    ctx->downcount -= 25;
    // 7F1A4A30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4A34:
    ctx->pc = 0x7F1A4A34u;
    // 7F1A4A34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4A38:
    ctx->pc = 0x7F1A4A38u;
    // 7F1A4A38: lis     r8, 32588
    ctx->gpr[8] = ((u32)(s32)(32588) << 16);

label_7F1A4A3C:
    ctx->pc = 0x7F1A4A3Cu;
    // 7F1A4A3C: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1A4A40:
    ctx->pc = 0x7F1A4A40u;
    // 7F1A4A40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4A44:
    ctx->pc = 0x7F1A4A44u;
    // 7F1A4A44: addi    r0, r9, 13756
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(13756);

label_7F1A4A48:
    ctx->pc = 0x7F1A4A48u;
    // 7F1A4A48: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4A4C:
    ctx->pc = 0x7F1A4A4Cu;
    // 7F1A4A4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4A50:
    ctx->pc = 0x7F1A4A50u;
    // 7F1A4A50: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A4A54:
    ctx->pc = 0x7F1A4A54u;
    // 7F1A4A54: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A4A58:
    ctx->pc = 0x7F1A4A58u;
    // 7F1A4A58: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A4A5C:
    ctx->pc = 0x7F1A4A5Cu;
    // 7F1A4A5C: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A4A60:
    ctx->pc = 0x7F1A4A60u;
    // 7F1A4A60: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A4A64:
    ctx->pc = 0x7F1A4A64u;
    // 7F1A4A64: lfs     f1, 13900(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4A64u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(13900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4A68:
    ctx->pc = 0x7F1A4A68u;
    // 7F1A4A68: bl      0x80026020
    {
            ctx->lr = 0x7F1A4A6Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4A6C:
    ctx->pc = 0x7F1A4A6Cu;
    ctx->downcount -= 7;
    // 7F1A4A6C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4A70:
    ctx->pc = 0x7F1A4A70u;
    // 7F1A4A70: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4A74:
    ctx->pc = 0x7F1A4A74u;
    // 7F1A4A74: addi    r30, r3, 13900
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A4A78:
    ctx->pc = 0x7F1A4A78u;
    // 7F1A4A78: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4A78u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4A7C:
    ctx->pc = 0x7F1A4A7Cu;
    // 7F1A4A7C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A4A80:
    ctx->pc = 0x7F1A4A80u;
    // 7F1A4A80: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_7F1A4A84:
    ctx->pc = 0x7F1A4A84u;
    // 7F1A4A84: bl      0x80026020
    {
            ctx->lr = 0x7F1A4A88u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4A88:
    ctx->pc = 0x7F1A4A88u;
    ctx->downcount -= 6;
    // 7F1A4A88: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4A8C:
    ctx->pc = 0x7F1A4A8Cu;
    // 7F1A4A8C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4A90:
    ctx->pc = 0x7F1A4A90u;
    // 7F1A4A90: addi    r3, r3, 13804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13804);

label_7F1A4A94:
    ctx->pc = 0x7F1A4A94u;
    // 7F1A4A94: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A4A98:
    ctx->pc = 0x7F1A4A98u;
    // 7F1A4A98: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4A9C:
    ctx->pc = 0x7F1A4A9Cu;
    // 7F1A4A9C: bl      0x800261B4
    {
            ctx->lr = 0x7F1A4AA0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A4AA0:
    ctx->pc = 0x7F1A4AA0u;
    ctx->downcount -= 7;
    // 7F1A4AA0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4AA4:
    ctx->pc = 0x7F1A4AA4u;
    // 7F1A4AA4: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4AA8:
    ctx->pc = 0x7F1A4AA8u;
    // 7F1A4AA8: addi    r5, r3, 13900
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A4AAC:
    ctx->pc = 0x7F1A4AACu;
    // 7F1A4AAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4AACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4AB0:
    ctx->pc = 0x7F1A4AB0u;
    // 7F1A4AB0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A4AB4:
    ctx->pc = 0x7F1A4AB4u;
    // 7F1A4AB4: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A4AB8:
    ctx->pc = 0x7F1A4AB8u;
    // 7F1A4AB8: bl      0x80026020
    {
            ctx->lr = 0x7F1A4ABCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4ABC:
    ctx->pc = 0x7F1A4ABCu;
    ctx->downcount -= 5;
    // 7F1A4ABC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4AC0:
    ctx->pc = 0x7F1A4AC0u;
    // 7F1A4AC0: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4AC0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4AC4:
    ctx->pc = 0x7F1A4AC4u;
    // 7F1A4AC4: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_7F1A4AC8:
    ctx->pc = 0x7F1A4AC8u;
    // 7F1A4AC8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A4ACC:
    ctx->pc = 0x7F1A4ACCu;
    // 7F1A4ACC: bl      0x80026020
    {
            ctx->lr = 0x7F1A4AD0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4AD0:
    ctx->pc = 0x7F1A4AD0u;
    ctx->downcount -= 6;
    // 7F1A4AD0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4AD4:
    ctx->pc = 0x7F1A4AD4u;
    // 7F1A4AD4: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4AD8:
    ctx->pc = 0x7F1A4AD8u;
    // 7F1A4AD8: addi    r3, r3, 13788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13788);

label_7F1A4ADC:
    ctx->pc = 0x7F1A4ADCu;
    // 7F1A4ADC: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A4AE0:
    ctx->pc = 0x7F1A4AE0u;
    // 7F1A4AE0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4AE4:
    ctx->pc = 0x7F1A4AE4u;
    // 7F1A4AE4: bl      0x800261B4
    {
            ctx->lr = 0x7F1A4AE8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A4AE8:
    ctx->pc = 0x7F1A4AE8u;
    ctx->downcount -= 8;
    // 7F1A4AE8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4AEC:
    ctx->pc = 0x7F1A4AECu;
    // 7F1A4AEC: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1A4AF0:
    ctx->pc = 0x7F1A4AF0u;
    // 7F1A4AF0: addi    r4, r3, 13900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A4AF4:
    ctx->pc = 0x7F1A4AF4u;
    // 7F1A4AF4: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A4AF8:
    ctx->pc = 0x7F1A4AF8u;
    // 7F1A4AF8: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4AF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4AFC:
    ctx->pc = 0x7F1A4AFCu;
    // 7F1A4AFC: addi    r3, r6, 13804
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13804);

label_7F1A4B00:
    ctx->pc = 0x7F1A4B00u;
    // 7F1A4B00: addi    r4, r5, 13756
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(13756);

label_7F1A4B04:
    ctx->pc = 0x7F1A4B04u;
    // 7F1A4B04: bl      0x80026020
    {
            ctx->lr = 0x7F1A4B08u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4B08:
    ctx->pc = 0x7F1A4B08u;
    ctx->downcount -= 8;
    // 7F1A4B08: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4B0C:
    ctx->pc = 0x7F1A4B0Cu;
    // 7F1A4B0C: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1A4B10:
    ctx->pc = 0x7F1A4B10u;
    // 7F1A4B10: addi    r4, r3, 13900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13900);

label_7F1A4B14:
    ctx->pc = 0x7F1A4B14u;
    // 7F1A4B14: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A4B18:
    ctx->pc = 0x7F1A4B18u;
    // 7F1A4B18: lfs     f1, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4B1C:
    ctx->pc = 0x7F1A4B1Cu;
    // 7F1A4B1C: addi    r3, r6, 13788
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13788);

label_7F1A4B20:
    ctx->pc = 0x7F1A4B20u;
    // 7F1A4B20: addi    r4, r5, 13772
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(13772);

label_7F1A4B24:
    ctx->pc = 0x7F1A4B24u;
    // 7F1A4B24: bl      0x80026020
    {
            ctx->lr = 0x7F1A4B28u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1A4B28:
    ctx->pc = 0x7F1A4B28u;
    ctx->downcount -= 6;
    // 7F1A4B28: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4B2C:
    ctx->pc = 0x7F1A4B2Cu;
    // 7F1A4B2C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1A4B30:
    ctx->pc = 0x7F1A4B30u;
    // 7F1A4B30: addi    r3, r3, 13772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13772);

label_7F1A4B34:
    ctx->pc = 0x7F1A4B34u;
    // 7F1A4B34: addi    r4, r4, 13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13756);

label_7F1A4B38:
    ctx->pc = 0x7F1A4B38u;
    // 7F1A4B38: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4B3C:
    ctx->pc = 0x7F1A4B3Cu;
    // 7F1A4B3C: bl      0x800261B4
    {
            ctx->lr = 0x7F1A4B40u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1A4B40:
    ctx->pc = 0x7F1A4B40u;
    ctx->downcount -= 6;
    // 7F1A4B40: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A4B44:
    ctx->pc = 0x7F1A4B44u;
    // 7F1A4B44: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1A4B48:
    ctx->pc = 0x7F1A4B48u;
    // 7F1A4B48: addi    r4, r3, 13772
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13772);

label_7F1A4B4C:
    ctx->pc = 0x7F1A4B4Cu;
    // 7F1A4B4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A4B50:
    ctx->pc = 0x7F1A4B50u;
    // 7F1A4B50: addi    r5, r5, 13916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13916);

label_7F1A4B54:
    ctx->pc = 0x7F1A4B54u;
    // 7F1A4B54: bl      0x7F115684
    {
            ctx->lr = 0x7F1A4B58u;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F1A4B58:
    ctx->pc = 0x7F1A4B58u;
    ctx->downcount -= 16;
    // 7F1A4B58: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A4B5C:
    ctx->pc = 0x7F1A4B5Cu;
    // 7F1A4B5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4B60:
    ctx->pc = 0x7F1A4B60u;
    // 7F1A4B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A4B64:
    ctx->pc = 0x7F1A4B64u;
    // 7F1A4B64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A4B68:
    ctx->pc = 0x7F1A4B68u;
    // 7F1A4B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4B6C:
    ctx->pc = 0x7F1A4B6Cu;
    ctx->downcount -= 100;
    // 7F1A4B6C: stwu     r1, -400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-400);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4B70:
    ctx->pc = 0x7F1A4B70u;
    // 7F1A4B70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4B74:
    ctx->pc = 0x7F1A4B74u;
    // 7F1A4B74: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4B78:
    ctx->pc = 0x7F1A4B78u;
    // 7F1A4B78: stfd     f31, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1A4B7C:
    ctx->pc = 0x7F1A4B7Cu;
    // 7F1A4B7C: psq_st   f31, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A4B7Cu);
        if (ctx->exception) return;
    }

label_7F1A4B80:
    ctx->pc = 0x7F1A4B80u;
    // 7F1A4B80: stfd     f30, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1A4B84:
    ctx->pc = 0x7F1A4B84u;
    // 7F1A4B84: psq_st   f30, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A4B84u);
        if (ctx->exception) return;
    }

label_7F1A4B88:
    ctx->pc = 0x7F1A4B88u;
    // 7F1A4B88: stfd     f29, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1A4B8C:
    ctx->pc = 0x7F1A4B8Cu;
    // 7F1A4B8C: psq_st   f29, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1A4B8Cu);
        if (ctx->exception) return;
    }

label_7F1A4B90:
    ctx->pc = 0x7F1A4B90u;
    // 7F1A4B90: stfd     f28, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1A4B94:
    ctx->pc = 0x7F1A4B94u;
    // 7F1A4B94: psq_st   f28, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4B94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1A4B94u);
        if (ctx->exception) return;
    }

label_7F1A4B98:
    ctx->pc = 0x7F1A4B98u;
    // 7F1A4B98: stmw     r20, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4B9C:
    ctx->pc = 0x7F1A4B9Cu;
    // 7F1A4B9C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A4BA0:
    ctx->pc = 0x7F1A4BA0u;
    // 7F1A4BA0: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4BA4:
    ctx->pc = 0x7F1A4BA4u;
    // 7F1A4BA4: addi    r8, r6, 5952
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(5952);

label_7F1A4BA8:
    ctx->pc = 0x7F1A4BA8u;
    // 7F1A4BA8: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F1A4BAC:
    ctx->pc = 0x7F1A4BACu;
    // 7F1A4BAC: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4BB0:
    ctx->pc = 0x7F1A4BB0u;
    // 7F1A4BB0: add   r9, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F1A4BB4:
    ctx->pc = 0x7F1A4BB4u;
    // 7F1A4BB4: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4BB8:
    ctx->pc = 0x7F1A4BB8u;
    // 7F1A4BB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4BBC:
    ctx->pc = 0x7F1A4BBCu;
    // 7F1A4BBC: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4BC0:
    ctx->pc = 0x7F1A4BC0u;
    // 7F1A4BC0: addi    r7, r3, 6000
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(6000);

label_7F1A4BC4:
    ctx->pc = 0x7F1A4BC4u;
    // 7F1A4BC4: lfs     f1, 0(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4BC4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4BC8:
    ctx->pc = 0x7F1A4BC8u;
    // 7F1A4BC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4BCC:
    ctx->pc = 0x7F1A4BCCu;
    // 7F1A4BCC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4BD0:
    ctx->pc = 0x7F1A4BD0u;
    // 7F1A4BD0: addi    r5, r3, 5968
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(5968);

label_7F1A4BD4:
    ctx->pc = 0x7F1A4BD4u;
    // 7F1A4BD4: lfs     f0, 4(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4BD4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4BD8:
    ctx->pc = 0x7F1A4BD8u;
    // 7F1A4BD8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4BDC:
    ctx->pc = 0x7F1A4BDCu;
    // 7F1A4BDC: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4BE0:
    ctx->pc = 0x7F1A4BE0u;
    // 7F1A4BE0: addi    r6, r3, 5984
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(5984);

label_7F1A4BE4:
    ctx->pc = 0x7F1A4BE4u;
    // 7F1A4BE4: lwz     r24, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F1A4BE8:
    ctx->pc = 0x7F1A4BE8u;
    // 7F1A4BE8: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A4BEC:
    ctx->pc = 0x7F1A4BECu;
    // 7F1A4BEC: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4BECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4BF0:
    ctx->pc = 0x7F1A4BF0u;
    // 7F1A4BF0: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F1A4BF4:
    ctx->pc = 0x7F1A4BF4u;
    // 7F1A4BF4: lwz     r23, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F1A4BF8:
    ctx->pc = 0x7F1A4BF8u;
    // 7F1A4BF8: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F1A4BFC:
    ctx->pc = 0x7F1A4BFCu;
    // 7F1A4BFC: lwz     r26, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F1A4C00:
    ctx->pc = 0x7F1A4C00u;
    // 7F1A4C00: lwz     r25, 64(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(64);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F1A4C04:
    ctx->pc = 0x7F1A4C04u;
    // 7F1A4C04: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4C08:
    ctx->pc = 0x7F1A4C08u;
    // 7F1A4C08: lwz     r12, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1A4C0C:
    ctx->pc = 0x7F1A4C0Cu;
    // 7F1A4C0C: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1A4C10:
    ctx->pc = 0x7F1A4C10u;
    // 7F1A4C10: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A4C14:
    ctx->pc = 0x7F1A4C14u;
    // 7F1A4C14: lwz     r9, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1A4C18:
    ctx->pc = 0x7F1A4C18u;
    // 7F1A4C18: lwz     r8, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1A4C1C:
    ctx->pc = 0x7F1A4C1Cu;
    // 7F1A4C1C: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4C20:
    ctx->pc = 0x7F1A4C20u;
    // 7F1A4C20: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4C24:
    ctx->pc = 0x7F1A4C24u;
    // 7F1A4C24: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4C28:
    ctx->pc = 0x7F1A4C28u;
    // 7F1A4C28: stw     r12, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1A4C2C:
    ctx->pc = 0x7F1A4C2Cu;
    // 7F1A4C2C: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C2Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4C30:
    ctx->pc = 0x7F1A4C30u;
    // 7F1A4C30: stw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1A4C34:
    ctx->pc = 0x7F1A4C34u;
    // 7F1A4C34: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1A4C38:
    ctx->pc = 0x7F1A4C38u;
    // 7F1A4C38: stw     r23, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1A4C3C:
    ctx->pc = 0x7F1A4C3Cu;
    // 7F1A4C3C: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A4C40:
    ctx->pc = 0x7F1A4C40u;
    // 7F1A4C40: lfs     f2, 24(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C40u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A4C44:
    ctx->pc = 0x7F1A4C44u;
    // 7F1A4C44: lfs     f3, 28(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C44u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A4C48:
    ctx->pc = 0x7F1A4C48u;
    // 7F1A4C48: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1A4C4C:
    ctx->pc = 0x7F1A4C4Cu;
    // 7F1A4C4C: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C4Cu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A4C50:
    ctx->pc = 0x7F1A4C50u;
    // 7F1A4C50: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C50u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1A4C54:
    ctx->pc = 0x7F1A4C54u;
    // 7F1A4C54: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1A4C58:
    ctx->pc = 0x7F1A4C58u;
    // 7F1A4C58: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1A4C5C:
    ctx->pc = 0x7F1A4C5Cu;
    // 7F1A4C5C: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A4C60:
    ctx->pc = 0x7F1A4C60u;
    // 7F1A4C60: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A4C64:
    ctx->pc = 0x7F1A4C64u;
    // 7F1A4C64: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4C68:
    ctx->pc = 0x7F1A4C68u;
    // 7F1A4C68: lwz     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1A4C6C:
    ctx->pc = 0x7F1A4C6Cu;
    // 7F1A4C6C: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1A4C70:
    ctx->pc = 0x7F1A4C70u;
    // 7F1A4C70: lwz     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A4C74:
    ctx->pc = 0x7F1A4C74u;
    // 7F1A4C74: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4C78:
    ctx->pc = 0x7F1A4C78u;
    // 7F1A4C78: lwz     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1A4C7C:
    ctx->pc = 0x7F1A4C7Cu;
    // 7F1A4C7C: lwz     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1A4C80:
    ctx->pc = 0x7F1A4C80u;
    // 7F1A4C80: stw     r11, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1A4C84:
    ctx->pc = 0x7F1A4C84u;
    // 7F1A4C84: stw     r10, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1A4C88:
    ctx->pc = 0x7F1A4C88u;
    // 7F1A4C88: stw     r9, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1A4C8C:
    ctx->pc = 0x7F1A4C8Cu;
    // 7F1A4C8C: stw     r8, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A4C90:
    ctx->pc = 0x7F1A4C90u;
    // 7F1A4C90: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4C94:
    ctx->pc = 0x7F1A4C94u;
    // 7F1A4C94: lfs     f1, 8(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C94u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4C98:
    ctx->pc = 0x7F1A4C98u;
    // 7F1A4C98: lfs     f0, 12(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4C98u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4C9C:
    ctx->pc = 0x7F1A4C9Cu;
    // 7F1A4C9C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4CA0:
    ctx->pc = 0x7F1A4CA0u;
    // 7F1A4CA0: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A4CA4:
    ctx->pc = 0x7F1A4CA4u;
    // 7F1A4CA4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4CA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A4CA8:
    ctx->pc = 0x7F1A4CA8u;
    // 7F1A4CA8: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A4CAC:
    ctx->pc = 0x7F1A4CACu;
    // 7F1A4CAC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4CB0:
    ctx->pc = 0x7F1A4CB0u;
    // 7F1A4CB0: stw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1A4CB4:
    ctx->pc = 0x7F1A4CB4u;
    // 7F1A4CB4: stw     r23, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1A4CB8:
    ctx->pc = 0x7F1A4CB8u;
    // 7F1A4CB8: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A4CBC:
    ctx->pc = 0x7F1A4CBCu;
    // 7F1A4CBC: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4CC0:
    ctx->pc = 0x7F1A4CC0u;
    // 7F1A4CC0: stw     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4CC4:
    ctx->pc = 0x7F1A4CC4u;
    // 7F1A4CC4: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4CC8:
    ctx->pc = 0x7F1A4CC8u;
    // 7F1A4CC8: stw     r7, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A4CCC:
    ctx->pc = 0x7F1A4CCCu;
    // 7F1A4CCC: stw     r6, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A4CD0:
    ctx->pc = 0x7F1A4CD0u;
    // 7F1A4CD0: bl      0x7F1A4808
    {
            ctx->lr = 0x7F1A4CD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4808u;
                return;
            }
            goto label_7F1A4808;
    }

label_7F1A4CD4:
    ctx->pc = 0x7F1A4CD4u;
    ctx->downcount -= 2;
    // 7F1A4CD4: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F1A4CD8:
    ctx->pc = 0x7F1A4CD8u;
    // 7F1A4CD8: bl      0x7F1A47E0
    {
            ctx->lr = 0x7F1A4CDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A47E0u;
                return;
            }
            goto label_7F1A47E0;
    }

label_7F1A4CDC:
    ctx->pc = 0x7F1A4CDCu;
    ctx->downcount -= 25;
    // 7F1A4CDC: lbz     r3, 52(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F1A4CE0:
    ctx->pc = 0x7F1A4CE0u;
    // 7F1A4CE0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A4CE4:
    ctx->pc = 0x7F1A4CE4u;
    // 7F1A4CE4: lbz     r0, 54(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1A4CE8:
    ctx->pc = 0x7F1A4CE8u;
    // 7F1A4CE8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4CEC:
    ctx->pc = 0x7F1A4CECu;
    // 7F1A4CEC: mulli   r7, r3, 56
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)56);

label_7F1A4CF0:
    ctx->pc = 0x7F1A4CF0u;
    // 7F1A4CF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A4CF4:
    ctx->pc = 0x7F1A4CF4u;
    // 7F1A4CF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A4CF8:
    ctx->pc = 0x7F1A4CF8u;
    // 7F1A4CF8: lfd     f31, 5944(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4CF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5944);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4CFC:
    ctx->pc = 0x7F1A4CFCu;
    // 7F1A4CFC: lfs     f28, 6004(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4CFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1A4D00:
    ctx->pc = 0x7F1A4D00u;
    // 7F1A4D00: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F1A4D04:
    ctx->pc = 0x7F1A4D04u;
    // 7F1A4D04: add   r7, r22, r7
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1A4D08:
    ctx->pc = 0x7F1A4D08u;
    // 7F1A4D08: lfs     f29, 6008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1A4D0C:
    ctx->pc = 0x7F1A4D0Cu;
    // 7F1A4D0C: mulli   r0, r0, 56
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)56);

label_7F1A4D10:
    ctx->pc = 0x7F1A4D10u;
    // 7F1A4D10: lwz     r30, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1A4D14:
    ctx->pc = 0x7F1A4D14u;
    // 7F1A4D14: lwz     r28, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1A4D18:
    ctx->pc = 0x7F1A4D18u;
    // 7F1A4D18: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F1A4D1C:
    ctx->pc = 0x7F1A4D1Cu;
    // 7F1A4D1C: lfs     f30, 6012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1A4D20:
    ctx->pc = 0x7F1A4D20u;
    // 7F1A4D20: add   r7, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1A4D24:
    ctx->pc = 0x7F1A4D24u;
    // 7F1A4D24: lwz     r29, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1A4D28:
    ctx->pc = 0x7F1A4D28u;
    // 7F1A4D28: lwz     r27, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1A4D2C:
    ctx->pc = 0x7F1A4D2Cu;
    // 7F1A4D2C: b       0x7F1A4F80
    {
            goto label_7F1A4F80;
    }

label_7F1A4D30:
    ctx->pc = 0x7F1A4D30u;
    ctx->downcount -= 10;
    // 7F1A4D30: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A4D34:
    // 7F1A4D34: rlwinm r0, r24, 1, 15, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[24], 1u) & 0x0001FFFEu;
    }

label_7F1A4D38:
    // 7F1A4D38: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F1A4D3C:
    ctx->pc = 0x7F1A4D3Cu;
    // 7F1A4D3C: lhax    r23, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[23] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A4D40:
    // 7F1A4D40: rlwinm r20, r23, 4, 0, 27
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[23], 4u) & 0xFFFFFFF0u;
    }

label_7F1A4D44:
    // 7F1A4D44: add   r4, r30, r20
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A4D48:
    // 7F1A4D48: add   r6, r29, r20
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1A4D4C:
    // 7F1A4D4C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A4D50:
    // 7F1A4D50: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A4D54:
    // 7F1A4D54: bl      0x7F1A4858
    {
            ctx->lr = 0x7F1A4D58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4858u;
                return;
            }
            goto label_7F1A4858;
    }

label_7F1A4D58:
    ctx->downcount -= 6;
    // 7F1A4D58: add   r4, r28, r20
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A4D5C:
    // 7F1A4D5C: add   r6, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1A4D60:
    // 7F1A4D60: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A4D64:
    // 7F1A4D64: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1A4D68:
    // 7F1A4D68: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A4D6C:
    // 7F1A4D6C: bl      0x7F1A4A30
    {
            ctx->lr = 0x7F1A4D70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4A30u;
                return;
            }
            goto label_7F1A4A30;
    }

label_7F1A4D70:
    ctx->pc = 0x7F1A4D70u;
    ctx->downcount -= 16;
    // 7F1A4D70: lfs     f0, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D70u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4D74:
    ctx->pc = 0x7F1A4D74u;
    // 7F1A4D74: stw     r31, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A4D78:
    ctx->pc = 0x7F1A4D78u;
    // 7F1A4D78: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D78u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4D7C:
    ctx->pc = 0x7F1A4D7Cu;
    // 7F1A4D7C: lfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4D80:
    ctx->pc = 0x7F1A4D80u;
    // 7F1A4D80: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4D84:
    ctx->pc = 0x7F1A4D84u;
    // 7F1A4D84: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4D88:
    // 7F1A4D88: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A4D8C:
    ctx->pc = 0x7F1A4D8Cu;
    // 7F1A4D8C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4D90:
    ctx->pc = 0x7F1A4D90u;
    // 7F1A4D90: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4D94:
    ctx->pc = 0x7F1A4D94u;
    // 7F1A4D94: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D94u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1A4D98:
    ctx->pc = 0x7F1A4D98u;
    // 7F1A4D98: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D98u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A4D9C:
    ctx->pc = 0x7F1A4D9Cu;
    // 7F1A4D9C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4D9Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4DA0:
    ctx->pc = 0x7F1A4DA0u;
    // 7F1A4DA0: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4DA4:
    ctx->pc = 0x7F1A4DA4u;
    // 7F1A4DA4: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4DA8:
    // 7F1A4DA8: cmpwi   r0, 0
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

label_7F1A4DAC:
    // 7F1A4DAC: bc    4, 0, 0x7F1A4DE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4DE8;
        }
    }

label_7F1A4DB0:
    ctx->downcount -= 14;
    // 7F1A4DB0: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A4DB4:
    // 7F1A4DB4: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A4DB8:
    ctx->pc = 0x7F1A4DB8u;
    // 7F1A4DB8: stw     r4, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4DBC:
    // 7F1A4DBC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4DC0:
    ctx->pc = 0x7F1A4DC0u;
    // 7F1A4DC0: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4DC4:
    ctx->pc = 0x7F1A4DC4u;
    // 7F1A4DC4: stw     r3, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4DC8:
    ctx->pc = 0x7F1A4DC8u;
    // 7F1A4DC8: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4DCC:
    ctx->pc = 0x7F1A4DCCu;
    // 7F1A4DCC: lfd     f1, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4DD0:
    ctx->pc = 0x7F1A4DD0u;
    // 7F1A4DD0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DD0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A4DD4:
    ctx->pc = 0x7F1A4DD4u;
    // 7F1A4DD4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DD4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1A4DD8:
    ctx->pc = 0x7F1A4DD8u;
    // 7F1A4DD8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DD8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4DDC:
    ctx->pc = 0x7F1A4DDCu;
    // 7F1A4DDC: stfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4DE0:
    ctx->pc = 0x7F1A4DE0u;
    // 7F1A4DE0: lwz     r8, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1A4DE4:
    // 7F1A4DE4: b       0x7F1A4E1C
    {
            goto label_7F1A4E1C;
    }

label_7F1A4DE8:
    ctx->downcount -= 13;
    // 7F1A4DE8: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A4DEC:
    // 7F1A4DEC: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A4DF0:
    ctx->pc = 0x7F1A4DF0u;
    // 7F1A4DF0: stw     r4, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4DF4:
    // 7F1A4DF4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4DF8:
    ctx->pc = 0x7F1A4DF8u;
    // 7F1A4DF8: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4DF8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4DFC:
    ctx->pc = 0x7F1A4DFCu;
    // 7F1A4DFC: stw     r3, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4E00:
    ctx->pc = 0x7F1A4E00u;
    // 7F1A4E00: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4E04:
    ctx->pc = 0x7F1A4E04u;
    // 7F1A4E04: lfd     f1, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4E08:
    ctx->pc = 0x7F1A4E08u;
    // 7F1A4E08: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E08u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A4E0C:
    ctx->pc = 0x7F1A4E0Cu;
    // 7F1A4E0C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E0Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A4E10:
    ctx->pc = 0x7F1A4E10u;
    // 7F1A4E10: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E10u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4E14:
    ctx->pc = 0x7F1A4E14u;
    // 7F1A4E14: stfd     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4E18:
    ctx->pc = 0x7F1A4E18u;
    // 7F1A4E18: lwz     r8, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1A4E1C:
    ctx->pc = 0x7F1A4E1Cu;
    ctx->downcount -= 16;
    // 7F1A4E1C: lfs     f0, 20(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E1Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4E20:
    ctx->pc = 0x7F1A4E20u;
    // 7F1A4E20: stw     r31, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A4E24:
    ctx->pc = 0x7F1A4E24u;
    // 7F1A4E24: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E24u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4E28:
    ctx->pc = 0x7F1A4E28u;
    // 7F1A4E28: lfs     f1, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A4E2C:
    ctx->pc = 0x7F1A4E2Cu;
    // 7F1A4E2C: stfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4E30:
    ctx->pc = 0x7F1A4E30u;
    // 7F1A4E30: lwz     r3, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4E34:
    // 7F1A4E34: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A4E38:
    ctx->pc = 0x7F1A4E38u;
    // 7F1A4E38: stw     r3, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4E3C:
    ctx->pc = 0x7F1A4E3Cu;
    // 7F1A4E3C: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4E40:
    ctx->pc = 0x7F1A4E40u;
    // 7F1A4E40: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E40u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1A4E44:
    ctx->pc = 0x7F1A4E44u;
    // 7F1A4E44: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E44u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A4E48:
    ctx->pc = 0x7F1A4E48u;
    // 7F1A4E48: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E48u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4E4C:
    ctx->pc = 0x7F1A4E4Cu;
    // 7F1A4E4C: stfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4E50:
    ctx->pc = 0x7F1A4E50u;
    // 7F1A4E50: lwz     r6, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A4E54:
    // 7F1A4E54: cmpwi   r6, 0
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

label_7F1A4E58:
    // 7F1A4E58: bc    4, 0, 0x7F1A4E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4E94;
        }
    }

label_7F1A4E5C:
    ctx->downcount -= 14;
    // 7F1A4E5C: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A4E60:
    // 7F1A4E60: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A4E64:
    ctx->pc = 0x7F1A4E64u;
    // 7F1A4E64: stw     r4, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4E68:
    // 7F1A4E68: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4E6C:
    ctx->pc = 0x7F1A4E6Cu;
    // 7F1A4E6C: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4E70:
    ctx->pc = 0x7F1A4E70u;
    // 7F1A4E70: stw     r3, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4E74:
    ctx->pc = 0x7F1A4E74u;
    // 7F1A4E74: lfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4E78:
    ctx->pc = 0x7F1A4E78u;
    // 7F1A4E78: lfd     f1, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4E7C:
    ctx->pc = 0x7F1A4E7Cu;
    // 7F1A4E7C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E7Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A4E80:
    ctx->pc = 0x7F1A4E80u;
    // 7F1A4E80: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E80u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1A4E84:
    ctx->pc = 0x7F1A4E84u;
    // 7F1A4E84: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E84u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4E88:
    ctx->pc = 0x7F1A4E88u;
    // 7F1A4E88: stfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4E8C:
    ctx->pc = 0x7F1A4E8Cu;
    // 7F1A4E8C: lwz     r3, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4E90:
    // 7F1A4E90: b       0x7F1A4EC8
    {
            goto label_7F1A4EC8;
    }

label_7F1A4E94:
    ctx->downcount -= 13;
    // 7F1A4E94: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A4E98:
    // 7F1A4E98: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A4E9C:
    ctx->pc = 0x7F1A4E9Cu;
    // 7F1A4E9C: stw     r4, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A4EA0:
    // 7F1A4EA0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A4EA4:
    ctx->pc = 0x7F1A4EA4u;
    // 7F1A4EA4: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4EA8:
    ctx->pc = 0x7F1A4EA8u;
    // 7F1A4EA8: stw     r3, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4EAC:
    ctx->pc = 0x7F1A4EACu;
    // 7F1A4EAC: lfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A4EB0:
    ctx->pc = 0x7F1A4EB0u;
    // 7F1A4EB0: lfd     f1, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4EB4:
    ctx->pc = 0x7F1A4EB4u;
    // 7F1A4EB4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EB4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A4EB8:
    ctx->pc = 0x7F1A4EB8u;
    // 7F1A4EB8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EB8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A4EBC:
    ctx->pc = 0x7F1A4EBCu;
    // 7F1A4EBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4EC0:
    ctx->pc = 0x7F1A4EC0u;
    // 7F1A4EC0: stfd     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4EC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4EC4:
    ctx->pc = 0x7F1A4EC4u;
    // 7F1A4EC4: lwz     r3, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4EC8:
    ctx->downcount -= 2;
    // 7F1A4EC8: cmpwi   r8, 504
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(504);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A4ECC:
    // 7F1A4ECC: bc    4, 1, 0x7F1A4ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4ED4;
        }
    }

label_7F1A4ED0:
    ctx->downcount -= 1;
    // 7F1A4ED0: li      r8, 504
    ctx->gpr[8] = (u32)(s32)(504);

label_7F1A4ED4:
    ctx->downcount -= 2;
    // 7F1A4ED4: cmpwi   r8, 8
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A4ED8:
    // 7F1A4ED8: bc    4, 0, 0x7F1A4EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4EE0;
        }
    }

label_7F1A4EDC:
    ctx->downcount -= 1;
    // 7F1A4EDC: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_7F1A4EE0:
    ctx->downcount -= 2;
    // 7F1A4EE0: cmpwi   r3, 440
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(440);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A4EE4:
    // 7F1A4EE4: bc    4, 1, 0x7F1A4EEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4EEC;
        }
    }

label_7F1A4EE8:
    ctx->downcount -= 1;
    // 7F1A4EE8: li      r3, 440
    ctx->gpr[3] = (u32)(s32)(440);

label_7F1A4EEC:
    ctx->downcount -= 2;
    // 7F1A4EEC: cmpwi   r3, 8
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

label_7F1A4EF0:
    // 7F1A4EF0: bc    4, 0, 0x7F1A4EF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A4EF8;
        }
    }

label_7F1A4EF4:
    ctx->downcount -= 1;
    // 7F1A4EF4: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1A4EF8:
    ctx->downcount -= 91;
    // 7F1A4EF8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A4EFC:
    // 7F1A4EFC: rlwinm r4, r0, 13, 0, 18
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 13u) & 0xFFFFE000u;
    }

label_7F1A4F00:
    ctx->pc = 0x7F1A4F00u;
    // 7F1A4F00: stw     r3, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A4F04:
    // 7F1A4F04: xoris   r5, r8, 0x8000
    ctx->gpr[5] = ctx->gpr[8] ^ (0x8000u << 16);

label_7F1A4F08:
    // 7F1A4F08: srawi r4, r4, 9
    {
        u32 sh = 9u;
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

label_7F1A4F0C:
    // 7F1A4F0C: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F1A4F10:
    ctx->pc = 0x7F1A4F10u;
    // 7F1A4F10: stw     r31, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A4F14:
    // 7F1A4F14: mulli   r3, r6, 7168
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)7168);

label_7F1A4F18:
    // 7F1A4F18: rlwinm r7, r23, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[23], 2u) & 0xFFFFFFFCu;
    }

label_7F1A4F1C:
    ctx->pc = 0x7F1A4F1Cu;
    // 7F1A4F1C: lfd     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4F20:
    // 7F1A4F20: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A4F24:
    ctx->pc = 0x7F1A4F24u;
    // 7F1A4F24: stw     r5, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A4F28:
    // 7F1A4F28: add   r6, r26, r7
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1A4F2C:
    ctx->pc = 0x7F1A4F2Cu;
    // 7F1A4F2C: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F2Cu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1A4F30:
    // 7F1A4F30: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A4F34:
    ctx->pc = 0x7F1A4F34u;
    // 7F1A4F34: stw     r31, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A4F38:
    // 7F1A4F38: add   r5, r25, r7
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1A4F3C:
    // 7F1A4F3C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F1A4F40:
    ctx->pc = 0x7F1A4F40u;
    // 7F1A4F40: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F40u)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F1A4F44:
    ctx->pc = 0x7F1A4F44u;
    // 7F1A4F44: lfd     f1, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4F48:
    ctx->pc = 0x7F1A4F48u;
    // 7F1A4F48: fsubs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F48u)) return;
    ppc_fsubs(ctx, 1, 1, 31);

label_7F1A4F4C:
    ctx->pc = 0x7F1A4F4Cu;
    // 7F1A4F4C: sth     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1A4F50:
    ctx->pc = 0x7F1A4F50u;
    // 7F1A4F50: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F50u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F1A4F54:
    ctx->pc = 0x7F1A4F54u;
    // 7F1A4F54: sth     r0, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4F58:
    ctx->pc = 0x7F1A4F58u;
    // 7F1A4F58: fmuls   f1, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F58u)) return;
    ppc_fmuls(ctx, 1, 1, 29);

label_7F1A4F5C:
    ctx->pc = 0x7F1A4F5Cu;
    // 7F1A4F5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4F60:
    ctx->pc = 0x7F1A4F60u;
    // 7F1A4F60: fmuls   f1, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F60u)) return;
    ppc_fmuls(ctx, 1, 28, 1);

label_7F1A4F64:
    ctx->pc = 0x7F1A4F64u;
    // 7F1A4F64: stfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4F68:
    ctx->pc = 0x7F1A4F68u;
    // 7F1A4F68: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F68u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A4F6C:
    ctx->pc = 0x7F1A4F6Cu;
    // 7F1A4F6C: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4F70:
    ctx->pc = 0x7F1A4F70u;
    // 7F1A4F70: stfd     f0, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A4F74:
    ctx->pc = 0x7F1A4F74u;
    // 7F1A4F74: lwz     r3, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4F78:
    ctx->pc = 0x7F1A4F78u;
    // 7F1A4F78: sth     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A4F7C:
    ctx->pc = 0x7F1A4F7Cu;
    // 7F1A4F7C: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A4F80:
    ctx->pc = 0x7F1A4F80u;
    ctx->downcount -= 9;
    // 7F1A4F80: lbz     r0, 52(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1A4F84:
    // 7F1A4F84: rlwinm r3, r24, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x0000FFFFu;
    }

label_7F1A4F88:
    // 7F1A4F88: mulli   r0, r0, 56
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)56);

label_7F1A4F8C:
    // 7F1A4F8C: add   r4, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A4F90:
    ctx->pc = 0x7F1A4F90u;
    // 7F1A4F90: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4F94:
    // 7F1A4F94: cmpw    r3, r0
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

label_7F1A4F98:
    // 7F1A4F98: bc    12, 0, 0x7F1A4D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4D30u;
                return;
            }
            goto label_7F1A4D30;
        }
    }

label_7F1A4F9C:
    ctx->pc = 0x7F1A4F9Cu;
    ctx->downcount -= 24;
    // 7F1A4F9C: psq_l   f31, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4F9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A4F9Cu);
        if (ctx->exception) return;
    }

label_7F1A4FA0:
    ctx->pc = 0x7F1A4FA0u;
    // 7F1A4FA0: lfd     f31, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4FA4:
    ctx->pc = 0x7F1A4FA4u;
    // 7F1A4FA4: psq_l   f30, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A4FA4u);
        if (ctx->exception) return;
    }

label_7F1A4FA8:
    ctx->pc = 0x7F1A4FA8u;
    // 7F1A4FA8: lfd     f30, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4FAC:
    ctx->pc = 0x7F1A4FACu;
    // 7F1A4FAC: psq_l   f29, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1A4FACu);
        if (ctx->exception) return;
    }

label_7F1A4FB0:
    ctx->pc = 0x7F1A4FB0u;
    // 7F1A4FB0: lfd     f29, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4FB4:
    ctx->pc = 0x7F1A4FB4u;
    // 7F1A4FB4: psq_l   f28, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1A4FB4u);
        if (ctx->exception) return;
    }

label_7F1A4FB8:
    ctx->pc = 0x7F1A4FB8u;
    // 7F1A4FB8: lfd     f28, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A4FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A4FBC:
    ctx->pc = 0x7F1A4FBCu;
    // 7F1A4FBC: lmw     r20, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A4FC0:
    ctx->pc = 0x7F1A4FC0u;
    // 7F1A4FC0: lwz     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A4FC4:
    ctx->pc = 0x7F1A4FC4u;
    // 7F1A4FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A4FC8:
    ctx->pc = 0x7F1A4FC8u;
    // 7F1A4FC8: addi    r1, r1, 400
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(400);

label_7F1A4FCC:
    ctx->pc = 0x7F1A4FCCu;
    // 7F1A4FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A4FD0:
    ctx->pc = 0x7F1A4FD0u;
    ctx->downcount -= 22;
    // 7F1A4FD0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A4FD4:
    ctx->pc = 0x7F1A4FD4u;
    // 7F1A4FD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A4FD8:
    ctx->pc = 0x7F1A4FD8u;
    // 7F1A4FD8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A4FDC:
    ctx->pc = 0x7F1A4FDCu;
    // 7F1A4FDC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A4FE0:
    ctx->pc = 0x7F1A4FE0u;
    // 7F1A4FE0: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A4FE4:
    ctx->pc = 0x7F1A4FE4u;
    // 7F1A4FE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A4FE8:
    ctx->pc = 0x7F1A4FE8u;
    // 7F1A4FE8: addi    r3, r4, 13880
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F1A4FEC:
    ctx->pc = 0x7F1A4FECu;
    // 7F1A4FEC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A4FF0:
    ctx->pc = 0x7F1A4FF0u;
    // 7F1A4FF0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A4FF4:
    ctx->pc = 0x7F1A4FF4u;
    // 7F1A4FF4: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A4FF8:
    ctx->pc = 0x7F1A4FF8u;
    // 7F1A4FF8: cmpwi   r0, 25
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

label_7F1A4FFC:
    ctx->pc = 0x7F1A4FFCu;
    // 7F1A4FFC: bc    4, 2, 0x7F1A5018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5018;
        }
    }

label_7F1A5000:
    ctx->pc = 0x7F1A5000u;
    ctx->downcount -= 1;
    // 7F1A5000: bl      0x7F0B3544
    {
            ctx->lr = 0x7F1A5004u;
            ctx->pc = 0x7F0B3544u;
            return;
    }

label_7F1A5004:
    ctx->pc = 0x7F1A5004u;
    ctx->downcount -= 5;
    // 7F1A5004: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F1A5008:
    ctx->pc = 0x7F1A5008u;
    // 7F1A5008: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1A500C:
    ctx->pc = 0x7F1A500Cu;
    // 7F1A500C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F1A5010:
    ctx->pc = 0x7F1A5010u;
    // 7F1A5010: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A5014:
    ctx->pc = 0x7F1A5014u;
    // 7F1A5014: b       0x7F1A50B0
    {
            goto label_7F1A50B0;
    }

label_7F1A5018:
    ctx->pc = 0x7F1A5018u;
    ctx->downcount -= 2;
    // 7F1A5018: cmpwi   r0, 22
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A501C:
    ctx->pc = 0x7F1A501Cu;
    // 7F1A501C: bc    4, 2, 0x7F1A5024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5024;
        }
    }

label_7F1A5020:
    ctx->pc = 0x7F1A5020u;
    ctx->downcount -= 1;
    // 7F1A5020: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1A5024:
    ctx->pc = 0x7F1A5024u;
    ctx->downcount -= 6;
    // 7F1A5024: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A5028:
    ctx->pc = 0x7F1A5028u;
    // 7F1A5028: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F1A502C:
    ctx->pc = 0x7F1A502Cu;
    // 7F1A502C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5030:
    ctx->pc = 0x7F1A5030u;
    // 7F1A5030: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5034:
    ctx->pc = 0x7F1A5034u;
    // 7F1A5034: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5038:
    ctx->pc = 0x7F1A5038u;
    // 7F1A5038: bl      0x7F012018
    {
            ctx->lr = 0x7F1A503Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F1A503C:
    ctx->pc = 0x7F1A503Cu;
    ctx->downcount -= 5;
    // 7F1A503C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5040:
    ctx->pc = 0x7F1A5040u;
    // 7F1A5040: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F1A5044:
    ctx->pc = 0x7F1A5044u;
    // 7F1A5044: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F1A5048:
    ctx->pc = 0x7F1A5048u;
    // 7F1A5048: or.   r0, r4, r0
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

label_7F1A504C:
    ctx->pc = 0x7F1A504Cu;
    // 7F1A504C: bc    12, 2, 0x7F1A5078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5078;
        }
    }

label_7F1A5050:
    ctx->pc = 0x7F1A5050u;
    ctx->downcount -= 5;
    // 7F1A5050: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A5054:
    ctx->pc = 0x7F1A5054u;
    // 7F1A5054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5058:
    ctx->pc = 0x7F1A5058u;
    // 7F1A5058: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A505C:
    ctx->pc = 0x7F1A505Cu;
    // 7F1A505C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5060:
    ctx->pc = 0x7F1A5060u;
    // 7F1A5060: bl      0x7F012018
    {
            ctx->lr = 0x7F1A5064u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F1A5064:
    ctx->pc = 0x7F1A5064u;
    ctx->downcount -= 5;
    // 7F1A5064: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5068:
    ctx->pc = 0x7F1A5068u;
    // 7F1A5068: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F1A506C:
    ctx->pc = 0x7F1A506Cu;
    // 7F1A506C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F1A5070:
    ctx->pc = 0x7F1A5070u;
    // 7F1A5070: or.   r0, r4, r0
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

label_7F1A5074:
    ctx->pc = 0x7F1A5074u;
    // 7F1A5074: bc    4, 2, 0x7F1A50A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A50A0;
        }
    }

label_7F1A5078:
    ctx->pc = 0x7F1A5078u;
    ctx->downcount -= 5;
    // 7F1A5078: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A507C:
    ctx->pc = 0x7F1A507Cu;
    // 7F1A507C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5080:
    ctx->pc = 0x7F1A5080u;
    // 7F1A5080: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5084:
    ctx->pc = 0x7F1A5084u;
    // 7F1A5084: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5088:
    ctx->pc = 0x7F1A5088u;
    // 7F1A5088: bl      0x7F012018
    {
            ctx->lr = 0x7F1A508Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F1A508C:
    ctx->pc = 0x7F1A508Cu;
    ctx->downcount -= 5;
    // 7F1A508C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5090:
    ctx->pc = 0x7F1A5090u;
    // 7F1A5090: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F1A5094:
    ctx->pc = 0x7F1A5094u;
    // 7F1A5094: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F1A5098:
    ctx->pc = 0x7F1A5098u;
    // 7F1A5098: or.   r0, r4, r0
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

label_7F1A509C:
    ctx->pc = 0x7F1A509Cu;
    // 7F1A509C: bc    4, 2, 0x7F1A50A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A50A4;
        }
    }

label_7F1A50A0:
    ctx->pc = 0x7F1A50A0u;
    ctx->downcount -= 1;
    // 7F1A50A0: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F1A50A4:
    ctx->pc = 0x7F1A50A4u;
    ctx->downcount -= 3;
    // 7F1A50A4: addic   r0, r28, -1
    {
        u64 a = ctx->gpr[28];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A50A8:
    ctx->pc = 0x7F1A50A8u;
    // 7F1A50A8: subfe   r0, r0, r28
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A50AC:
    ctx->pc = 0x7F1A50ACu;
    // 7F1A50AC: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A50B0:
    ctx->pc = 0x7F1A50B0u;
    ctx->downcount -= 2;
    // 7F1A50B0: lis     r3, 4096
    ctx->gpr[3] = ((u32)(s32)(4096) << 16);

label_7F1A50B4:
    ctx->pc = 0x7F1A50B4u;
    // 7F1A50B4: bl      0x7F012050
    {
            ctx->lr = 0x7F1A50B8u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F1A50B8:
    ctx->pc = 0x7F1A50B8u;
    ctx->downcount -= 2;
    // 7F1A50B8: cmpwi   r3, 0
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

label_7F1A50BC:
    ctx->pc = 0x7F1A50BCu;
    // 7F1A50BC: bc    4, 2, 0x7F1A5118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5118;
        }
    }

label_7F1A50C0:
    ctx->pc = 0x7F1A50C0u;
    ctx->downcount -= 2;
    // 7F1A50C0: cmpwi   r28, 0
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

label_7F1A50C4:
    ctx->pc = 0x7F1A50C4u;
    // 7F1A50C4: bc    4, 2, 0x7F1A50E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A50E8;
        }
    }

label_7F1A50C8:
    ctx->pc = 0x7F1A50C8u;
    ctx->downcount -= 2;
    // 7F1A50C8: cmpwi   r30, 0
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

label_7F1A50CC:
    ctx->pc = 0x7F1A50CCu;
    // 7F1A50CC: bc    4, 2, 0x7F1A5118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5118;
        }
    }

label_7F1A50D0:
    ctx->pc = 0x7F1A50D0u;
    ctx->downcount -= 6;
    // 7F1A50D0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1A50D4:
    ctx->pc = 0x7F1A50D4u;
    // 7F1A50D4: addi    r3, r3, -5664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F1A50D8:
    ctx->pc = 0x7F1A50D8u;
    // 7F1A50D8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A50DC:
    ctx->pc = 0x7F1A50DCu;
    // 7F1A50DC: lwz     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A50E0:
    ctx->pc = 0x7F1A50E0u;
    // 7F1A50E0: rlwinm. r0, r0, 0, 30, 30
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

label_7F1A50E4:
    ctx->pc = 0x7F1A50E4u;
    // 7F1A50E4: bc    12, 2, 0x7F1A5118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5118;
        }
    }

label_7F1A50E8:
    ctx->pc = 0x7F1A50E8u;
    ctx->downcount -= 4;
    // 7F1A50E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A50EC:
    ctx->pc = 0x7F1A50ECu;
    // 7F1A50EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A50F0:
    ctx->pc = 0x7F1A50F0u;
    // 7F1A50F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A50F4:
    ctx->pc = 0x7F1A50F4u;
    // 7F1A50F4: b       0x7F1A5108
    {
            goto label_7F1A5108;
    }

label_7F1A50F8:
    loop_7F1A50F8(ctx);
    if (ctx->pc == 0x7F1A5114u) goto label_7F1A5114;
    return;
label_7F1A50FC:
    // 7F1A50FC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_7F1A5100:
    ctx->pc = 0x7F1A5100u;
    // 7F1A5100: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5104:
    // 7F1A5104: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1A5108:
    ctx->pc = 0x7F1A5108u;
    ctx->downcount -= 3;
    // 7F1A5108: lwz     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A510C:
    // 7F1A510C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A5110:
    // 7F1A5110: bc    12, 0, 0x7F1A50F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A50F8u;
                return;
            }
            goto label_7F1A50F8;
        }
    }

label_7F1A5114:
    ctx->pc = 0x7F1A5114u;
    ctx->downcount -= 1;
    // 7F1A5114: b       0x7F1A52BC
    {
            goto label_7F1A52BC;
    }

label_7F1A5118:
    ctx->pc = 0x7F1A5118u;
    ctx->downcount -= 3;
    // 7F1A5118: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A511C:
    ctx->pc = 0x7F1A511Cu;
    // 7F1A511C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A5120:
    ctx->pc = 0x7F1A5120u;
    // 7F1A5120: b       0x7F1A52B0
    {
            goto label_7F1A52B0;
    }

label_7F1A5124:
    ctx->downcount -= 4;
    // 7F1A5124: add   r31, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F1A5128:
    ctx->pc = 0x7F1A5128u;
    // 7F1A5128: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A512C:
    // 7F1A512C: cmpwi   r0, 0
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

label_7F1A5130:
    // 7F1A5130: bc    4, 1, 0x7F1A52A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A52A8;
        }
    }

label_7F1A5134:
    ctx->pc = 0x7F1A5134u;
    ctx->downcount -= 4;
    // 7F1A5134: lwz     r4, 2048(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2048);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5138:
    // 7F1A5138: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1A513C:
    ctx->pc = 0x7F1A513Cu;
    // 7F1A513C: lwz     r5, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A5140:
    // 7F1A5140: bl      0x7F1A4B6C
    {
            ctx->lr = 0x7F1A5144u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A4B6Cu;
                return;
            }
            goto label_7F1A4B6C;
    }

label_7F1A5144:
    ctx->pc = 0x7F1A5144u;
    ctx->downcount -= 3;
    // 7F1A5144: lha     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A5148:
    // 7F1A5148: cmpwi   r3, 0
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

label_7F1A514C:
    // 7F1A514C: bc    12, 2, 0x7F1A5158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5158;
        }
    }

label_7F1A5150:
    ctx->downcount -= 2;
    // 7F1A5150: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1A5154:
    ctx->pc = 0x7F1A5154u;
    // 7F1A5154: sth     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5158:
    ctx->downcount -= 4;
    // 7F1A5158: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1A515C:
    ctx->pc = 0x7F1A515Cu;
    // 7F1A515C: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5160:
    // 7F1A5160: rlwinm. r0, r0, 0, 29, 29
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

label_7F1A5164:
    // 7F1A5164: bc    4, 2, 0x7F1A52A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A52A8;
        }
    }

label_7F1A5168:
    ctx->pc = 0x7F1A5168u;
    ctx->downcount -= 4;
    // 7F1A5168: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A516C:
    ctx->pc = 0x7F1A516Cu;
    // 7F1A516C: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5170:
    // 7F1A5170: cmpw    r5, r4
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

label_7F1A5174:
    // 7F1A5174: bc    4, 1, 0x7F1A5210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5210;
        }
    }

label_7F1A5178:
    ctx->downcount -= 70;
    // 7F1A5178: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A517C:
    ctx->pc = 0x7F1A517Cu;
    // 7F1A517C: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5180:
    // 7F1A5180: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1A5184:
    ctx->pc = 0x7F1A5184u;
    // 7F1A5184: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5188:
    // 7F1A5188: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A518C:
    // 7F1A518C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A5190:
    ctx->pc = 0x7F1A5190u;
    // 7F1A5190: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5194:
    // 7F1A5194: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A5198:
    ctx->pc = 0x7F1A5198u;
    // 7F1A5198: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5198u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A519C:
    ctx->pc = 0x7F1A519Cu;
    // 7F1A519C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A519Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A51A0:
    ctx->pc = 0x7F1A51A0u;
    // 7F1A51A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A51A4:
    ctx->pc = 0x7F1A51A4u;
    // 7F1A51A4: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A51A4u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A51A8:
    ctx->pc = 0x7F1A51A8u;
    // 7F1A51A8: lfs     f3, 6016(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A51AC:
    ctx->pc = 0x7F1A51ACu;
    // 7F1A51AC: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A51B0:
    ctx->pc = 0x7F1A51B0u;
    // 7F1A51B0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A51B4:
    ctx->pc = 0x7F1A51B4u;
    // 7F1A51B4: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A51B8:
    ctx->pc = 0x7F1A51B8u;
    // 7F1A51B8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A51B8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A51BC:
    ctx->pc = 0x7F1A51BCu;
    // 7F1A51BC: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A51C0:
    ctx->pc = 0x7F1A51C0u;
    // 7F1A51C0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A51C0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A51C4:
    ctx->pc = 0x7F1A51C4u;
    // 7F1A51C4: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A51C4u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A51C8:
    ctx->pc = 0x7F1A51C8u;
    // 7F1A51C8: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A51CC:
    ctx->pc = 0x7F1A51CCu;
    // 7F1A51CC: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A51D0:
    ctx->pc = 0x7F1A51D0u;
    // 7F1A51D0: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A51D4:
    // 7F1A51D4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A51D8:
    // 7F1A51D8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A51DC:
    ctx->pc = 0x7F1A51DCu;
    // 7F1A51DC: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A51E0:
    ctx->pc = 0x7F1A51E0u;
    // 7F1A51E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A51E4:
    ctx->pc = 0x7F1A51E4u;
    // 7F1A51E4: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A51E8:
    ctx->pc = 0x7F1A51E8u;
    // 7F1A51E8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A51EC:
    ctx->pc = 0x7F1A51ECu;
    // 7F1A51EC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A51ECu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A51F0:
    ctx->pc = 0x7F1A51F0u;
    // 7F1A51F0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A51F0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A51F4:
    ctx->pc = 0x7F1A51F4u;
    // 7F1A51F4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A51F4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A51F8:
    ctx->pc = 0x7F1A51F8u;
    // 7F1A51F8: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A51F8u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A51FC:
    ctx->pc = 0x7F1A51FCu;
    // 7F1A51FC: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A51FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5200:
    ctx->pc = 0x7F1A5200u;
    // 7F1A5200: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5204:
    // 7F1A5204: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A5208:
    ctx->pc = 0x7F1A5208u;
    // 7F1A5208: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A520C:
    // 7F1A520C: b       0x7F1A5298
    {
            goto label_7F1A5298;
    }

label_7F1A5210:
    ctx->downcount -= 66;
    // 7F1A5210: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A5214:
    // 7F1A5214: xoris   r4, r5, 0x8000
    ctx->gpr[4] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1A5218:
    ctx->pc = 0x7F1A5218u;
    // 7F1A5218: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A521C:
    // 7F1A521C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A5220:
    ctx->pc = 0x7F1A5220u;
    // 7F1A5220: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5224:
    // 7F1A5224: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A5228:
    // 7F1A5228: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A522C:
    ctx->pc = 0x7F1A522Cu;
    // 7F1A522C: lfd     f2, 5944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A522Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5944);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5230:
    ctx->pc = 0x7F1A5230u;
    // 7F1A5230: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5234:
    ctx->pc = 0x7F1A5234u;
    // 7F1A5234: lfs     f3, 6016(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5234u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A5238:
    ctx->pc = 0x7F1A5238u;
    // 7F1A5238: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A523C:
    ctx->pc = 0x7F1A523Cu;
    // 7F1A523C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5240:
    ctx->pc = 0x7F1A5240u;
    // 7F1A5240: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A5240u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A5244:
    ctx->pc = 0x7F1A5244u;
    // 7F1A5244: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5248:
    ctx->pc = 0x7F1A5248u;
    // 7F1A5248: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A524C:
    ctx->pc = 0x7F1A524Cu;
    // 7F1A524C: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5250:
    ctx->pc = 0x7F1A5250u;
    // 7F1A5250: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A5250u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A5254:
    ctx->pc = 0x7F1A5254u;
    // 7F1A5254: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5258:
    ctx->pc = 0x7F1A5258u;
    // 7F1A5258: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5258u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A525C:
    ctx->pc = 0x7F1A525Cu;
    // 7F1A525C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A525Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A5260:
    ctx->pc = 0x7F1A5260u;
    // 7F1A5260: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5260u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5264:
    ctx->pc = 0x7F1A5264u;
    // 7F1A5264: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5268:
    ctx->pc = 0x7F1A5268u;
    // 7F1A5268: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A526C:
    // 7F1A526C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A5270:
    // 7F1A5270: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A5274:
    ctx->pc = 0x7F1A5274u;
    // 7F1A5274: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5278:
    ctx->pc = 0x7F1A5278u;
    // 7F1A5278: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A527C:
    ctx->pc = 0x7F1A527Cu;
    // 7F1A527C: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A527Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5280:
    ctx->pc = 0x7F1A5280u;
    // 7F1A5280: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5284:
    ctx->pc = 0x7F1A5284u;
    // 7F1A5284: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A5284u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A5288:
    ctx->pc = 0x7F1A5288u;
    // 7F1A5288: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A5288u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A528C:
    ctx->pc = 0x7F1A528Cu;
    // 7F1A528C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A528Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A5290:
    ctx->pc = 0x7F1A5290u;
    // 7F1A5290: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5290u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A5294:
    ctx->pc = 0x7F1A5294u;
    // 7F1A5294: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5294u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5298:
    ctx->pc = 0x7F1A5298u;
    ctx->downcount -= 4;
    // 7F1A5298: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A529C:
    ctx->pc = 0x7F1A529Cu;
    // 7F1A529C: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A52A0:
    // 7F1A52A0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A52A4:
    ctx->pc = 0x7F1A52A4u;
    // 7F1A52A4: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A52A8:
    ctx->downcount -= 2;
    // 7F1A52A8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1A52AC:
    // 7F1A52AC: addi    r28, r28, 100
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(100);

label_7F1A52B0:
    ctx->pc = 0x7F1A52B0u;
    ctx->downcount -= 3;
    // 7F1A52B0: lwz     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A52B4:
    // 7F1A52B4: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A52B8:
    // 7F1A52B8: bc    12, 0, 0x7F1A5124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5124u;
                return;
            }
            goto label_7F1A5124;
        }
    }

label_7F1A52BC:
    ctx->pc = 0x7F1A52BCu;
    ctx->downcount -= 16;
    // 7F1A52BC: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A52C0:
    ctx->pc = 0x7F1A52C0u;
    // 7F1A52C0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A52C4:
    ctx->pc = 0x7F1A52C4u;
    // 7F1A52C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A52C8:
    ctx->pc = 0x7F1A52C8u;
    // 7F1A52C8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1A52CC:
    ctx->pc = 0x7F1A52CCu;
    // 7F1A52CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A52D0:
    ctx->pc = 0x7F1A52D0u;
    ctx->downcount -= 18;
    // 7F1A52D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A52D4:
    ctx->pc = 0x7F1A52D4u;
    // 7F1A52D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A52D8:
    ctx->pc = 0x7F1A52D8u;
    // 7F1A52D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A52DC:
    ctx->pc = 0x7F1A52DCu;
    // 7F1A52DC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A52E0:
    ctx->pc = 0x7F1A52E0u;
    // 7F1A52E0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A52E4:
    ctx->pc = 0x7F1A52E4u;
    // 7F1A52E4: lwz     r3, 2052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2052);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A52E8:
    ctx->pc = 0x7F1A52E8u;
    // 7F1A52E8: cmplwi  r3, 0x0000
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

label_7F1A52EC:
    ctx->pc = 0x7F1A52ECu;
    // 7F1A52EC: bc    12, 2, 0x7F1A52FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A52FC;
        }
    }

label_7F1A52F0:
    ctx->pc = 0x7F1A52F0u;
    ctx->downcount -= 1;
    // 7F1A52F0: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1A52F4u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1A52F4:
    ctx->pc = 0x7F1A52F4u;
    ctx->downcount -= 2;
    // 7F1A52F4: lwz     r3, 2052(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2052);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A52F8:
    ctx->pc = 0x7F1A52F8u;
    // 7F1A52F8: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1A52FCu;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1A52FC:
    ctx->pc = 0x7F1A52FCu;
    ctx->downcount -= 3;
    // 7F1A52FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1A5300:
    ctx->pc = 0x7F1A5300u;
    // 7F1A5300: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1A5304:
    ctx->pc = 0x7F1A5304u;
    // 7F1A5304: b       0x7F1A5348
    {
            goto label_7F1A5348;
    }

label_7F1A5308:
    ctx->downcount -= 4;
    // 7F1A5308: add   r30, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F1A530C:
    ctx->pc = 0x7F1A530Cu;
    // 7F1A530C: lwz     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5310:
    // 7F1A5310: cmplwi  r3, 0x0000
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

label_7F1A5314:
    // 7F1A5314: bc    12, 2, 0x7F1A531C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A531C;
        }
    }

label_7F1A5318:
    ctx->downcount -= 1;
    // 7F1A5318: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F1A531Cu;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F1A531C:
    ctx->pc = 0x7F1A531Cu;
    ctx->downcount -= 3;
    // 7F1A531C: lwz     r3, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5320:
    // 7F1A5320: cmplwi  r3, 0x0000
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

label_7F1A5324:
    // 7F1A5324: bc    12, 2, 0x7F1A532C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A532C;
        }
    }

label_7F1A5328:
    ctx->downcount -= 1;
    // 7F1A5328: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F1A532Cu;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F1A532C:
    ctx->pc = 0x7F1A532Cu;
    ctx->downcount -= 3;
    // 7F1A532C: lwz     r0, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5330:
    // 7F1A5330: cmplwi  r0, 0x0000
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

label_7F1A5334:
    // 7F1A5334: bc    12, 2, 0x7F1A5340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5340;
        }
    }

label_7F1A5338:
    ctx->downcount -= 2;
    // 7F1A5338: addi    r3, r30, 120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(120);

label_7F1A533C:
    // 7F1A533C: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F1A5340u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F1A5340:
    ctx->downcount -= 2;
    // 7F1A5340: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F1A5344:
    // 7F1A5344: addi    r31, r31, 100
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1A5348:
    ctx->pc = 0x7F1A5348u;
    ctx->downcount -= 3;
    // 7F1A5348: lwz     r0, 2136(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A534C:
    // 7F1A534C: cmpw    r29, r0
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

label_7F1A5350:
    // 7F1A5350: bc    12, 0, 0x7F1A5308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5308u;
                return;
            }
            goto label_7F1A5308;
        }
    }

label_7F1A5354:
    ctx->pc = 0x7F1A5354u;
    ctx->downcount -= 16;
    // 7F1A5354: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A5358:
    ctx->pc = 0x7F1A5358u;
    // 7F1A5358: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A535C:
    ctx->pc = 0x7F1A535Cu;
    // 7F1A535C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5360:
    ctx->pc = 0x7F1A5360u;
    // 7F1A5360: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A5364:
    ctx->pc = 0x7F1A5364u;
    // 7F1A5364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5368:
    ctx->pc = 0x7F1A5368u;
    ctx->downcount -= 10;
    // 7F1A5368: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A536C:
    ctx->pc = 0x7F1A536Cu;
    // 7F1A536C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5370:
    ctx->pc = 0x7F1A5370u;
    // 7F1A5370: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A5374:
    ctx->pc = 0x7F1A5374u;
    // 7F1A5374: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5378:
    ctx->pc = 0x7F1A5378u;
    // 7F1A5378: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A537C:
    ctx->pc = 0x7F1A537Cu;
    // 7F1A537C: lfs     f1, 6028(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A537Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5380:
    ctx->pc = 0x7F1A5380u;
    // 7F1A5380: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5384:
    ctx->pc = 0x7F1A5384u;
    // 7F1A5384: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5388:
    ctx->pc = 0x7F1A5388u;
    // 7F1A5388: lfs     f2, 6032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5388u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A538C:
    ctx->pc = 0x7F1A538Cu;
    // 7F1A538C: bl      0x7F1A5510
    {
            ctx->lr = 0x7F1A5390u;
            goto label_7F1A5510;
    }

label_7F1A5390:
    ctx->pc = 0x7F1A5390u;
    ctx->downcount -= 12;
    // 7F1A5390: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5394:
    ctx->pc = 0x7F1A5394u;
    // 7F1A5394: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5398:
    ctx->pc = 0x7F1A5398u;
    // 7F1A5398: addi    r5, r4, 6024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6024);

label_7F1A539C:
    ctx->pc = 0x7F1A539Cu;
    // 7F1A539C: lfs     f0, 6020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A539Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A53A0:
    ctx->pc = 0x7F1A53A0u;
    // 7F1A53A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A53A4:
    ctx->pc = 0x7F1A53A4u;
    // 7F1A53A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A53A8:
    ctx->pc = 0x7F1A53A8u;
    // 7F1A53A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A53AC:
    ctx->pc = 0x7F1A53ACu;
    // 7F1A53AC: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A53ACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A53B0:
    ctx->pc = 0x7F1A53B0u;
    // 7F1A53B0: lfs     f1, 6028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A53B4:
    ctx->pc = 0x7F1A53B4u;
    // 7F1A53B4: lfs     f2, 6032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A53B8:
    ctx->pc = 0x7F1A53B8u;
    // 7F1A53B8: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A53BC:
    ctx->pc = 0x7F1A53BCu;
    // 7F1A53BC: bl      0x7F1A5510
    {
            ctx->lr = 0x7F1A53C0u;
            goto label_7F1A5510;
    }

label_7F1A53C0:
    ctx->pc = 0x7F1A53C0u;
    ctx->downcount -= 10;
    // 7F1A53C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A53C4:
    ctx->pc = 0x7F1A53C4u;
    // 7F1A53C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A53C8:
    ctx->pc = 0x7F1A53C8u;
    // 7F1A53C8: lfs     f2, 6024(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A53CC:
    ctx->pc = 0x7F1A53CCu;
    // 7F1A53CC: lfs     f0, 6020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A53D0:
    ctx->pc = 0x7F1A53D0u;
    // 7F1A53D0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A53D0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A53D4:
    ctx->pc = 0x7F1A53D4u;
    // 7F1A53D4: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A53D8:
    ctx->pc = 0x7F1A53D8u;
    // 7F1A53D8: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A53DC:
    ctx->pc = 0x7F1A53DCu;
    // 7F1A53DC: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A53E0:
    ctx->pc = 0x7F1A53E0u;
    // 7F1A53E0: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A53E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1A53E4:
    ctx->pc = 0x7F1A53E4u;
    // 7F1A53E4: bc    4, 0, 0x7F1A53F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A53F0;
        }
    }

label_7F1A53E8:
    ctx->pc = 0x7F1A53E8u;
    ctx->downcount -= 2;
    // 7F1A53E8: stfs     f1, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A53EC:
    ctx->pc = 0x7F1A53ECu;
    // 7F1A53EC: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A53F0:
    ctx->pc = 0x7F1A53F0u;
    ctx->downcount -= 17;
    // 7F1A53F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A53F4:
    ctx->pc = 0x7F1A53F4u;
    // 7F1A53F4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A53F8:
    ctx->pc = 0x7F1A53F8u;
    // 7F1A53F8: addi    r5, r3, 6016
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6016);

label_7F1A53FC:
    ctx->pc = 0x7F1A53FCu;
    // 7F1A53FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A53FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5400:
    ctx->pc = 0x7F1A5400u;
    // 7F1A5400: addi    r5, r4, 6036
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6036);

label_7F1A5404:
    ctx->pc = 0x7F1A5404u;
    // 7F1A5404: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5408:
    ctx->pc = 0x7F1A5408u;
    // 7F1A5408: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5408u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A540C:
    ctx->pc = 0x7F1A540Cu;
    // 7F1A540C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A540Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A5410:
    ctx->pc = 0x7F1A5410u;
    // 7F1A5410: addi    r4, r3, 6040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6040);

label_7F1A5414:
    ctx->pc = 0x7F1A5414u;
    // 7F1A5414: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5418:
    ctx->pc = 0x7F1A5418u;
    // 7F1A5418: stfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5418u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A541C:
    ctx->pc = 0x7F1A541Cu;
    // 7F1A541C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A541Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5420:
    ctx->pc = 0x7F1A5420u;
    // 7F1A5420: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5420u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5424:
    ctx->pc = 0x7F1A5424u;
    // 7F1A5424: lfs     f0, 5936(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A5428:
    ctx->pc = 0x7F1A5428u;
    // 7F1A5428: stfs     f1, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5428u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A542C:
    ctx->pc = 0x7F1A542Cu;
    // 7F1A542C: stfs     f0, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A542Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5430:
    ctx->pc = 0x7F1A5430u;
    // 7F1A5430: bl      0x7F1A54C8
    {
            ctx->lr = 0x7F1A5434u;
            goto label_7F1A54C8;
    }

label_7F1A5434:
    ctx->pc = 0x7F1A5434u;
    ctx->downcount -= 2;
    // 7F1A5434: stfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5434u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A5438:
    ctx->pc = 0x7F1A5438u;
    // 7F1A5438: bl      0x7F1A54C8
    {
            ctx->lr = 0x7F1A543Cu;
            goto label_7F1A54C8;
    }

label_7F1A543C:
    ctx->pc = 0x7F1A543Cu;
    ctx->downcount -= 19;
    // 7F1A543C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5440:
    ctx->pc = 0x7F1A5440u;
    // 7F1A5440: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5444:
    ctx->pc = 0x7F1A5444u;
    // 7F1A5444: lfs     f0, 6044(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5444u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A5448:
    ctx->pc = 0x7F1A5448u;
    // 7F1A5448: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A544C:
    ctx->pc = 0x7F1A544Cu;
    // 7F1A544C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A544Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1A5450:
    ctx->pc = 0x7F1A5450u;
    // 7F1A5450: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5450u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A5454:
    ctx->pc = 0x7F1A5454u;
    // 7F1A5454: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A5458:
    ctx->pc = 0x7F1A5458u;
    // 7F1A5458: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A545C:
    ctx->pc = 0x7F1A545Cu;
    // 7F1A545C: stb     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1A5460:
    ctx->pc = 0x7F1A5460u;
    // 7F1A5460: lbz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F1A5464:
    ctx->pc = 0x7F1A5464u;
    // 7F1A5464: addi    r4, r5, 1
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1A5468:
    ctx->pc = 0x7F1A5468u;
    // 7F1A5468: stb     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1A546C:
    ctx->pc = 0x7F1A546Cu;
    // 7F1A546C: stb     r5, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A5470:
    ctx->pc = 0x7F1A5470u;
    // 7F1A5470: stb     r3, 53(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(53);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1A5474:
    ctx->pc = 0x7F1A5474u;
    // 7F1A5474: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5478:
    ctx->pc = 0x7F1A5478u;
    // 7F1A5478: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A547C:
    ctx->pc = 0x7F1A547Cu;
    // 7F1A547C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5480:
    ctx->pc = 0x7F1A5480u;
    // 7F1A5480: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5484:
    ctx->pc = 0x7F1A5484u;
    // 7F1A5484: bl      0x7F1A54A4
    {
            ctx->lr = 0x7F1A5488u;
            goto label_7F1A54A4;
    }

label_7F1A5488:
    ctx->pc = 0x7F1A5488u;
    ctx->downcount -= 8;
    // 7F1A5488: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1A548C:
    ctx->pc = 0x7F1A548Cu;
    // 7F1A548C: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5490:
    ctx->pc = 0x7F1A5490u;
    // 7F1A5490: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5494:
    ctx->pc = 0x7F1A5494u;
    // 7F1A5494: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A5498:
    ctx->pc = 0x7F1A5498u;
    // 7F1A5498: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A549C:
    ctx->pc = 0x7F1A549Cu;
    // 7F1A549C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A54A0:
    ctx->pc = 0x7F1A54A0u;
    // 7F1A54A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A54A4:
    ctx->pc = 0x7F1A54A4u;
    ctx->downcount -= 13;
    // 7F1A54A4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1A54A8:
    ctx->pc = 0x7F1A54A8u;
    // 7F1A54A8: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1A54AC:
    ctx->pc = 0x7F1A54ACu;
    // 7F1A54AC: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1A54B0:
    ctx->pc = 0x7F1A54B0u;
    // 7F1A54B0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A54B4:
    ctx->pc = 0x7F1A54B4u;
    // 7F1A54B4: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1A54B8:
    ctx->pc = 0x7F1A54B8u;
    // 7F1A54B8: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1A54BC:
    ctx->pc = 0x7F1A54BCu;
    // 7F1A54BC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A54C0:
    ctx->pc = 0x7F1A54C0u;
    // 7F1A54C0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A54C4:
    ctx->pc = 0x7F1A54C4u;
    // 7F1A54C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A54C8:
    ctx->pc = 0x7F1A54C8u;
    ctx->downcount -= 4;
    // 7F1A54C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A54CC:
    ctx->pc = 0x7F1A54CCu;
    // 7F1A54CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A54D0:
    ctx->pc = 0x7F1A54D0u;
    // 7F1A54D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A54D4:
    ctx->pc = 0x7F1A54D4u;
    // 7F1A54D4: bl      0x7F1A54A4
    {
            ctx->lr = 0x7F1A54D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A54A4u;
                return;
            }
            goto label_7F1A54A4;
    }

label_7F1A54D8:
    ctx->pc = 0x7F1A54D8u;
    ctx->downcount -= 31;
    // 7F1A54D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A54DC:
    ctx->pc = 0x7F1A54DCu;
    // 7F1A54DC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A54E0:
    ctx->pc = 0x7F1A54E0u;
    // 7F1A54E0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A54E4:
    ctx->pc = 0x7F1A54E4u;
    // 7F1A54E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A54E8:
    ctx->pc = 0x7F1A54E8u;
    // 7F1A54E8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A54EC:
    ctx->pc = 0x7F1A54ECu;
    // 7F1A54EC: lfd     f2, 6056(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A54ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6056);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A54F0:
    ctx->pc = 0x7F1A54F0u;
    // 7F1A54F0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A54F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A54F4:
    ctx->pc = 0x7F1A54F4u;
    // 7F1A54F4: lfs     f0, 6048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A54F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A54F8:
    ctx->pc = 0x7F1A54F8u;
    // 7F1A54F8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A54F8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A54FC:
    ctx->pc = 0x7F1A54FCu;
    // 7F1A54FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5500:
    ctx->pc = 0x7F1A5500u;
    // 7F1A5500: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5500u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1A5504:
    ctx->pc = 0x7F1A5504u;
    // 7F1A5504: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5508:
    ctx->pc = 0x7F1A5508u;
    // 7F1A5508: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A550C:
    ctx->pc = 0x7F1A550Cu;
    // 7F1A550C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5510:
    ctx->pc = 0x7F1A5510u;
    ctx->downcount -= 19;
    // 7F1A5510: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5514:
    ctx->pc = 0x7F1A5514u;
    // 7F1A5514: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5518:
    ctx->pc = 0x7F1A5518u;
    // 7F1A5518: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A551C:
    ctx->pc = 0x7F1A551Cu;
    // 7F1A551C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A551Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1A5520:
    ctx->pc = 0x7F1A5520u;
    // 7F1A5520: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A5520u);
        if (ctx->exception) return;
    }

label_7F1A5524:
    ctx->pc = 0x7F1A5524u;
    // 7F1A5524: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5524u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1A5528:
    ctx->pc = 0x7F1A5528u;
    // 7F1A5528: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A5528u);
        if (ctx->exception) return;
    }

label_7F1A552C:
    ctx->pc = 0x7F1A552Cu;
    // 7F1A552C: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A552Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1A5530:
    ctx->pc = 0x7F1A5530u;
    // 7F1A5530: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1A5530u);
        if (ctx->exception) return;
    }

label_7F1A5534:
    ctx->pc = 0x7F1A5534u;
    // 7F1A5534: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1A5538:
    ctx->pc = 0x7F1A5538u;
    // 7F1A5538: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1A5538u);
        if (ctx->exception) return;
    }

label_7F1A553C:
    ctx->pc = 0x7F1A553Cu;
    // 7F1A553C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5540:
    ctx->pc = 0x7F1A5540u;
    // 7F1A5540: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5544:
    ctx->pc = 0x7F1A5544u;
    // 7F1A5544: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5548:
    ctx->pc = 0x7F1A5548u;
    // 7F1A5548: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5548u)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F1A554C:
    ctx->pc = 0x7F1A554Cu;
    // 7F1A554C: lfd     f30, 6056(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A554Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6056);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5550:
    ctx->pc = 0x7F1A5550u;
    // 7F1A5550: fmr    f29, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A5550u)) return;
    ctx->fpr[29] = ctx->fpr[2];

label_7F1A5554:
    ctx->pc = 0x7F1A5554u;
    // 7F1A5554: lfs     f31, 6048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5554u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1A5558:
    ctx->pc = 0x7F1A5558u;
    // 7F1A5558: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F1A555C:
    ctx->downcount -= 1;
    // 7F1A555C: bl      0x7F1A54A4
    {
            ctx->lr = 0x7F1A5560u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A54A4u;
                return;
            }
            goto label_7F1A54A4;
    }

label_7F1A5560:
    ctx->pc = 0x7F1A5560u;
    ctx->downcount -= 23;
    // 7F1A5560: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5564:
    ctx->pc = 0x7F1A5564u;
    // 7F1A5564: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5568:
    ctx->pc = 0x7F1A5568u;
    // 7F1A5568: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A556C:
    ctx->pc = 0x7F1A556Cu;
    // 7F1A556C: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1A556Cu)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F1A5570:
    ctx->pc = 0x7F1A5570u;
    // 7F1A5570: fdivs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1A5570u)) return;
    ppc_fdivs(ctx, 1, 0, 31);

label_7F1A5574:
    ctx->pc = 0x7F1A5574u;
    // 7F1A5574: fcmpo   cr0, f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1A5574u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[28], true);

label_7F1A5578:
    // 7F1A5578: bc    12, 0, 0x7F1A555C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A555Cu;
                return;
            }
            goto label_7F1A555C;
        }
    }

label_7F1A557C:
    ctx->pc = 0x7F1A557Cu;
    ctx->downcount -= 2;
    // 7F1A557C: fcmpo   cr0, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1A557Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[29], true);

label_7F1A5580:
    // 7F1A5580: bc    12, 1, 0x7F1A555C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A555Cu;
                return;
            }
            goto label_7F1A555C;
        }
    }

label_7F1A5584:
    ctx->pc = 0x7F1A5584u;
    ctx->downcount -= 14;
    // 7F1A5584: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1A5584u);
        if (ctx->exception) return;
    }

label_7F1A5588:
    ctx->pc = 0x7F1A5588u;
    // 7F1A5588: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5588u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A558C:
    ctx->pc = 0x7F1A558Cu;
    // 7F1A558C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A558Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1A558Cu);
        if (ctx->exception) return;
    }

label_7F1A5590:
    ctx->pc = 0x7F1A5590u;
    // 7F1A5590: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5594:
    ctx->pc = 0x7F1A5594u;
    // 7F1A5594: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1A5594u);
        if (ctx->exception) return;
    }

label_7F1A5598:
    ctx->pc = 0x7F1A5598u;
    // 7F1A5598: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A559C:
    ctx->pc = 0x7F1A559Cu;
    // 7F1A559C: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1A559Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1A559Cu);
        if (ctx->exception) return;
    }

label_7F1A55A0:
    ctx->pc = 0x7F1A55A0u;
    // 7F1A55A0: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A55A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A55A4:
    ctx->pc = 0x7F1A55A4u;
    // 7F1A55A4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A55A8:
    ctx->pc = 0x7F1A55A8u;
    // 7F1A55A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A55AC:
    ctx->pc = 0x7F1A55ACu;
    // 7F1A55AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A55B0:
    ctx->pc = 0x7F1A55B0u;
    // 7F1A55B0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1A55B4:
    ctx->pc = 0x7F1A55B4u;
    // 7F1A55B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A55B8:
    ctx->pc = 0x7F1A55B8u;
    ctx->downcount -= 21;
    // 7F1A55B8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A55BC:
    ctx->pc = 0x7F1A55BCu;
    // 7F1A55BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A55C0:
    ctx->pc = 0x7F1A55C0u;
    // 7F1A55C0: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1A55C4:
    ctx->pc = 0x7F1A55C4u;
    // 7F1A55C4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A55C8:
    ctx->pc = 0x7F1A55C8u;
    // 7F1A55C8: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A55CC:
    ctx->pc = 0x7F1A55CCu;
    // 7F1A55CC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A55D0:
    ctx->pc = 0x7F1A55D0u;
    // 7F1A55D0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A55D4:
    ctx->pc = 0x7F1A55D4u;
    // 7F1A55D4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A55D8:
    ctx->pc = 0x7F1A55D8u;
    // 7F1A55D8: lwz     r31, 13752(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(13752);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A55DC:
    ctx->pc = 0x7F1A55DCu;
    // 7F1A55DC: cmplwi  r31, 0x0000
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

label_7F1A55E0:
    ctx->pc = 0x7F1A55E0u;
    // 7F1A55E0: bc    12, 2, 0x7F1A5764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5764;
        }
    }

label_7F1A55E4:
    ctx->pc = 0x7F1A55E4u;
    ctx->downcount -= 6;
    // 7F1A55E4: lwz     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A55E8:
    ctx->pc = 0x7F1A55E8u;
    // 7F1A55E8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1A55EC:
    ctx->pc = 0x7F1A55ECu;
    // 7F1A55EC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A55F0:
    ctx->pc = 0x7F1A55F0u;
    // 7F1A55F0: cmpwi   r0, 0
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

label_7F1A55F4:
    ctx->pc = 0x7F1A55F4u;
    // 7F1A55F4: bc    4, 1, 0x7F1A5764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5764;
        }
    }

label_7F1A55F8:
    ctx->downcount -= 4;
    // 7F1A55F8: addi    r0, r27, 84
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(84);

label_7F1A55FC:
    ctx->pc = 0x7F1A55FCu;
    // 7F1A55FC: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5600:
    // 7F1A5600: cmpwi   r0, 0
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

label_7F1A5604:
    // 7F1A5604: bc    12, 1, 0x7F1A575C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A575C;
        }
    }

label_7F1A5608:
    ctx->downcount -= 5;
    // 7F1A5608: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A560C:
    // 7F1A560C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5610:
    ctx->pc = 0x7F1A5610u;
    // 7F1A5610: lfs     f1, 6028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5610u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5614:
    ctx->pc = 0x7F1A5614u;
    // 7F1A5614: lfs     f2, 6032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5614u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A5618:
    // 7F1A5618: bl      0x7F1A5510
    {
            ctx->lr = 0x7F1A561Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5510u;
                return;
            }
            goto label_7F1A5510;
    }

label_7F1A561C:
    ctx->downcount -= 13;
    // 7F1A561C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5620:
    // 7F1A5620: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5624:
    // 7F1A5624: addi    r5, r4, 6024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6024);

label_7F1A5628:
    ctx->pc = 0x7F1A5628u;
    // 7F1A5628: lfs     f0, 6020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5628u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A562C:
    ctx->pc = 0x7F1A562Cu;
    // 7F1A562C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A562Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A5630:
    // 7F1A5630: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5634:
    // 7F1A5634: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5638:
    // 7F1A5638: add   r5, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1A563C:
    ctx->pc = 0x7F1A563Cu;
    // 7F1A563C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A563Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A5640:
    ctx->pc = 0x7F1A5640u;
    // 7F1A5640: lfs     f1, 6028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5640u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5644:
    ctx->pc = 0x7F1A5644u;
    // 7F1A5644: lfs     f2, 6032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5644u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A5648:
    ctx->pc = 0x7F1A5648u;
    // 7F1A5648: stfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5648u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A564C:
    // 7F1A564C: bl      0x7F1A5510
    {
            ctx->lr = 0x7F1A5650u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5510u;
                return;
            }
            goto label_7F1A5510;
    }

label_7F1A5650:
    ctx->downcount -= 33;
    // 7F1A5650: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5654:
    // 7F1A5654: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5658:
    // 7F1A5658: addi    r5, r4, 6024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6024);

label_7F1A565C:
    ctx->pc = 0x7F1A565Cu;
    // 7F1A565C: lfs     f0, 6020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A565Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A5660:
    ctx->pc = 0x7F1A5660u;
    // 7F1A5660: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5660u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A5664:
    // 7F1A5664: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1A5668:
    // 7F1A5668: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A566C:
    // 7F1A566C: xoris   r0, r28, 0x8000
    ctx->gpr[0] = ctx->gpr[28] ^ (0x8000u << 16);

label_7F1A5670:
    ctx->pc = 0x7F1A5670u;
    // 7F1A5670: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A5670u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1A5674:
    // 7F1A5674: add   r7, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1A5678:
    // 7F1A5678: addi    r6, r5, 6016
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(6016);

label_7F1A567C:
    // 7F1A567C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5680:
    // 7F1A5680: addi    r5, r3, 5944
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(5944);

label_7F1A5684:
    ctx->pc = 0x7F1A5684u;
    // 7F1A5684: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5688:
    // 7F1A5688: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F1A568C:
    ctx->pc = 0x7F1A568Cu;
    // 7F1A568C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5690:
    ctx->pc = 0x7F1A5690u;
    // 7F1A5690: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5690u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5694:
    // 7F1A5694: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5698:
    ctx->pc = 0x7F1A5698u;
    // 7F1A5698: stfs     f0, 60(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5698u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A569C:
    ctx->pc = 0x7F1A569Cu;
    // 7F1A569C: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A569Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A56A0:
    ctx->pc = 0x7F1A56A0u;
    // 7F1A56A0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A56A4:
    ctx->pc = 0x7F1A56A4u;
    // 7F1A56A4: stfs     f1, 48(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56A4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A56A8:
    ctx->pc = 0x7F1A56A8u;
    // 7F1A56A8: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A56A8u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1A56AC:
    ctx->pc = 0x7F1A56ACu;
    // 7F1A56AC: lfs     f0, 5936(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A56B0:
    ctx->pc = 0x7F1A56B0u;
    // 7F1A56B0: stfs     f1, 52(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56B0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A56B4:
    ctx->pc = 0x7F1A56B4u;
    // 7F1A56B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A56B8:
    ctx->pc = 0x7F1A56B8u;
    // 7F1A56B8: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A56BC:
    ctx->pc = 0x7F1A56BCu;
    // 7F1A56BC: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A56C0:
    ctx->pc = 0x7F1A56C0u;
    // 7F1A56C0: stfs     f2, 64(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56C0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A56C4:
    ctx->pc = 0x7F1A56C4u;
    // 7F1A56C4: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A56C4u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F1A56C8:
    ctx->pc = 0x7F1A56C8u;
    // 7F1A56C8: stfs     f1, 68(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A56CC:
    ctx->pc = 0x7F1A56CCu;
    // 7F1A56CC: stfs     f0, 76(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56CCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A56D0:
    // 7F1A56D0: bl      0x7F1A54C8
    {
            ctx->lr = 0x7F1A56D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A54C8u;
                return;
            }
            goto label_7F1A54C8;
    }

label_7F1A56D4:
    ctx->downcount -= 6;
    // 7F1A56D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A56D8:
    // 7F1A56D8: add   r3, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A56DC:
    ctx->pc = 0x7F1A56DCu;
    // 7F1A56DC: lfs     f0, 6064(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A56E0:
    ctx->pc = 0x7F1A56E0u;
    // 7F1A56E0: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A56E0u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F1A56E4:
    ctx->pc = 0x7F1A56E4u;
    // 7F1A56E4: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A56E8:
    // 7F1A56E8: bl      0x7F1A54C8
    {
            ctx->lr = 0x7F1A56ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A54C8u;
                return;
            }
            goto label_7F1A54C8;
    }

label_7F1A56EC:
    ctx->downcount -= 22;
    // 7F1A56EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A56F0:
    // 7F1A56F0: srawi r0, r30, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[30];
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

label_7F1A56F4:
    ctx->pc = 0x7F1A56F4u;
    // 7F1A56F4: lfs     f0, 6068(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A56F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A56F8:
    // 7F1A56F8: add   r7, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1A56FC:
    // 7F1A56FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5700:
    // 7F1A5700: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F1A5704:
    ctx->pc = 0x7F1A5704u;
    // 7F1A5704: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5704u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1A5708:
    // 7F1A5708: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A570C:
    ctx->pc = 0x7F1A570Cu;
    // 7F1A570C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A570Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A5710:
    ctx->pc = 0x7F1A5710u;
    // 7F1A5710: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5710u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A5714:
    ctx->pc = 0x7F1A5714u;
    // 7F1A5714: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A5718:
    ctx->pc = 0x7F1A5718u;
    // 7F1A5718: stb     r5, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A571C:
    ctx->pc = 0x7F1A571Cu;
    // 7F1A571C: lbz     r6, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F1A5720:
    // 7F1A5720: addi    r5, r6, 1
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1A5724:
    ctx->pc = 0x7F1A5724u;
    // 7F1A5724: stb     r5, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A5728:
    ctx->pc = 0x7F1A5728u;
    // 7F1A5728: stb     r6, 102(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(102);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F1A572C:
    ctx->pc = 0x7F1A572Cu;
    // 7F1A572C: stb     r4, 101(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(101);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1A5730:
    ctx->pc = 0x7F1A5730u;
    // 7F1A5730: stw     r3, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5734:
    ctx->pc = 0x7F1A5734u;
    // 7F1A5734: stw     r30, 84(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A5738:
    ctx->pc = 0x7F1A5738u;
    // 7F1A5738: stw     r0, 92(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A573C:
    ctx->pc = 0x7F1A573Cu;
    // 7F1A573C: stw     r4, 88(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5740:
    // 7F1A5740: bl      0x7F1A54A4
    {
            ctx->lr = 0x7F1A5744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A54A4u;
                return;
            }
            goto label_7F1A54A4;
    }

label_7F1A5744:
    ctx->downcount -= 6;
    // 7F1A5744: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1A5748:
    // 7F1A5748: add   r3, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A574C:
    ctx->pc = 0x7F1A574Cu;
    // 7F1A574C: sth     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5750:
    // 7F1A5750: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1A5754:
    ctx->pc = 0x7F1A5754u;
    // 7F1A5754: sth     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5758:
    // 7F1A5758: b       0x7F1A5764
    {
            goto label_7F1A5764;
    }

label_7F1A575C:
    ctx->downcount -= 2;
    // 7F1A575C: addi    r27, r27, 100
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(100);

label_7F1A5760:
    // 7F1A5760: bc    16, 0, 0x7F1A55F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A55F8u;
                return;
            }
            goto label_7F1A55F8;
        }
    }

label_7F1A5764:
    ctx->pc = 0x7F1A5764u;
    ctx->downcount -= 16;
    // 7F1A5764: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A5768:
    ctx->pc = 0x7F1A5768u;
    // 7F1A5768: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A576C:
    ctx->pc = 0x7F1A576Cu;
    // 7F1A576C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5770:
    ctx->pc = 0x7F1A5770u;
    // 7F1A5770: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1A5774:
    ctx->pc = 0x7F1A5774u;
    // 7F1A5774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5778:
    ctx->pc = 0x7F1A5778u;
    ctx->downcount -= 19;
    // 7F1A5778: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A577C:
    ctx->pc = 0x7F1A577Cu;
    // 7F1A577C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5780:
    ctx->pc = 0x7F1A5780u;
    // 7F1A5780: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5784:
    ctx->pc = 0x7F1A5784u;
    // 7F1A5784: stmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A5788:
    ctx->pc = 0x7F1A5788u;
    // 7F1A5788: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A578C:
    ctx->pc = 0x7F1A578Cu;
    // 7F1A578C: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A5790:
    ctx->pc = 0x7F1A5790u;
    // 7F1A5790: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A5794:
    ctx->pc = 0x7F1A5794u;
    // 7F1A5794: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A5798:
    ctx->pc = 0x7F1A5798u;
    // 7F1A5798: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F1A579C:
    ctx->downcount -= 7;
    // 7F1A579C: add   r3, r21, r20
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A57A0:
    // 7F1A57A0: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F1A57A4:
    ctx->pc = 0x7F1A57A4u;
    // 7F1A57A4: lwz     r30, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1A57A8:
    // 7F1A57A8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1A57AC:
    ctx->pc = 0x7F1A57ACu;
    // 7F1A57AC: lwz     r29, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1A57B0:
    // 7F1A57B0: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F1A57B4:
    // 7F1A57B4: b       0x7F1A5870
    {
            goto label_7F1A5870;
    }

label_7F1A57B8:
    ctx->downcount -= 3;
    // 7F1A57B8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1A57BC:
    // 7F1A57BC: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F1A57C0:
    // 7F1A57C0: b       0x7F1A584C
    {
            goto label_7F1A584C;
    }

label_7F1A57C4:
    ctx->pc = 0x7F1A57C4u;
    ctx->downcount -= 7;
    // 7F1A57C4: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A57C8:
    // 7F1A57C8: addi    r0, r18, 28
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(28);

label_7F1A57CC:
    // 7F1A57CC: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F1A57D0:
    // 7F1A57D0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A57D4:
    ctx->pc = 0x7F1A57D4u;
    // 7F1A57D4: lhzx    r24, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[24] = mem_read16(ctx, ea);
    }

label_7F1A57D8:
    // 7F1A57D8: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1A57DC:
    // 7F1A57DC: bl      0x80042E0C
    {
            ctx->lr = 0x7F1A57E0u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F1A57E0:
    ctx->downcount -= 3;
    // 7F1A57E0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1A57E4:
    // 7F1A57E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1A57E8:
    // 7F1A57E8: b       0x7F1A5838
    {
            goto label_7F1A5838;
    }

label_7F1A57EC:
    ctx->pc = 0x7F1A57ECu;
    ctx->downcount -= 13;
    // 7F1A57EC: lwz     r3, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A57F0:
    ctx->pc = 0x7F1A57F0u;
    // 7F1A57F0: lhax    r0, r3, r17
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[17];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A57F4:
    // 7F1A57F4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A57F8:
    // 7F1A57F8: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A57FC:
    ctx->pc = 0x7F1A57FCu;
    // 7F1A57FC: sth     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1A5800:
    // 7F1A5800: add   r4, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A5804:
    ctx->pc = 0x7F1A5804u;
    // 7F1A5804: sth     r31, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1A5808:
    ctx->pc = 0x7F1A5808u;
    // 7F1A5808: sth     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1A580C:
    ctx->pc = 0x7F1A580Cu;
    // 7F1A580C: sth     r31, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1A5810:
    ctx->pc = 0x7F1A5810u;
    // 7F1A5810: lwz     r3, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5814:
    ctx->pc = 0x7F1A5814u;
    // 7F1A5814: lhax    r0, r3, r17
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[17];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A5818:
    // 7F1A5818: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F1A581C:
    // 7F1A581C: bl      0x7F1A58B8
    {
            ctx->lr = 0x7F1A5820u;
            goto label_7F1A58B8;
    }

label_7F1A5820:
    ctx->pc = 0x7F1A5820u;
    ctx->downcount -= 4;
    // 7F1A5820: lwz     r3, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5824:
    ctx->pc = 0x7F1A5824u;
    // 7F1A5824: lhax    r0, r3, r17
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[17];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A5828:
    // 7F1A5828: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F1A582C:
    // 7F1A582C: bl      0x7F1A58AC
    {
            ctx->lr = 0x7F1A5830u;
            goto label_7F1A58AC;
    }

label_7F1A5830:
    ctx->downcount -= 2;
    // 7F1A5830: addi    r17, r17, 2
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(2);

label_7F1A5834:
    // 7F1A5834: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1A5838:
    ctx->downcount -= 2;
    // 7F1A5838: cmpw    r27, r24
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

label_7F1A583C:
    // 7F1A583C: bc    12, 0, 0x7F1A57EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A57ECu;
                return;
            }
            goto label_7F1A57EC;
        }
    }

label_7F1A5840:
    ctx->downcount -= 1;
    // 7F1A5840: bl      0x7F1A58A8
    {
            ctx->lr = 0x7F1A5844u;
            goto label_7F1A58A8;
    }

label_7F1A5844:
    ctx->downcount -= 2;
    // 7F1A5844: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F1A5848:
    // 7F1A5848: addi    r18, r18, 32
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(32);

label_7F1A584C:
    ctx->pc = 0x7F1A584Cu;
    ctx->downcount -= 7;
    // 7F1A584C: lwz     r3, 92(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5850:
    ctx->pc = 0x7F1A5850u;
    // 7F1A5850: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5854:
    ctx->pc = 0x7F1A5854u;
    // 7F1A5854: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5858:
    // 7F1A5858: add   r3, r19, r0
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A585C:
    ctx->pc = 0x7F1A585Cu;
    // 7F1A585C: lhz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F1A5860:
    // 7F1A5860: cmpw    r25, r0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A5864:
    // 7F1A5864: bc    12, 0, 0x7F1A57C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A57C4u;
                return;
            }
            goto label_7F1A57C4;
        }
    }

label_7F1A5868:
    ctx->downcount -= 2;
    // 7F1A5868: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1A586C:
    // 7F1A586C: addi    r19, r19, 36
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(36);

label_7F1A5870:
    ctx->pc = 0x7F1A5870u;
    ctx->downcount -= 5;
    // 7F1A5870: lwz     r3, 92(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5874:
    ctx->pc = 0x7F1A5874u;
    // 7F1A5874: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5878:
    ctx->pc = 0x7F1A5878u;
    // 7F1A5878: lhz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F1A587C:
    // 7F1A587C: cmpw    r26, r0
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

label_7F1A5880:
    // 7F1A5880: bc    12, 0, 0x7F1A57B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A57B8u;
                return;
            }
            goto label_7F1A57B8;
        }
    }

label_7F1A5884:
    ctx->downcount -= 4;
    // 7F1A5884: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1A5888:
    // 7F1A5888: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_7F1A588C:
    // 7F1A588C: cmpwi   r28, 2
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

label_7F1A5890:
    // 7F1A5890: bc    12, 0, 0x7F1A579C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A579Cu;
                return;
            }
            goto label_7F1A579C;
        }
    }

label_7F1A5894:
    ctx->pc = 0x7F1A5894u;
    ctx->downcount -= 16;
    // 7F1A5894: lmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A5898:
    ctx->pc = 0x7F1A5898u;
    // 7F1A5898: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A589C:
    ctx->pc = 0x7F1A589Cu;
    // 7F1A589C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A58A0:
    ctx->pc = 0x7F1A58A0u;
    // 7F1A58A0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A58A4:
    ctx->pc = 0x7F1A58A4u;
    // 7F1A58A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A58A8:
    ctx->pc = 0x7F1A58A8u;
    ctx->downcount -= 1;
    // 7F1A58A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A58AC:
    ctx->pc = 0x7F1A58ACu;
    ctx->downcount -= 3;
    // 7F1A58AC: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F1A58B0:
    ctx->pc = 0x7F1A58B0u;
    // 7F1A58B0: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A58B4:
    ctx->pc = 0x7F1A58B4u;
    // 7F1A58B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A58B8:
    ctx->pc = 0x7F1A58B8u;
    ctx->downcount -= 3;
    // 7F1A58B8: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F1A58BC:
    ctx->pc = 0x7F1A58BCu;
    // 7F1A58BC: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1A58C0:
    ctx->pc = 0x7F1A58C0u;
    // 7F1A58C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A58C4:
    ctx->pc = 0x7F1A58C4u;
    ctx->downcount -= 4;
    // 7F1A58C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A58C8:
    ctx->pc = 0x7F1A58C8u;
    // 7F1A58C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A58CC:
    ctx->pc = 0x7F1A58CCu;
    // 7F1A58CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A58D0:
    ctx->pc = 0x7F1A58D0u;
    // 7F1A58D0: bl      0x80041BD4
    {
            ctx->lr = 0x7F1A58D4u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F1A58D4:
    ctx->pc = 0x7F1A58D4u;
    ctx->downcount -= 3;
    // 7F1A58D4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1A58D8:
    ctx->pc = 0x7F1A58D8u;
    // 7F1A58D8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A58DC:
    ctx->pc = 0x7F1A58DCu;
    // 7F1A58DC: bl      0x80041500
    {
            ctx->lr = 0x7F1A58E0u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F1A58E0:
    ctx->pc = 0x7F1A58E0u;
    ctx->downcount -= 3;
    // 7F1A58E0: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F1A58E4:
    ctx->pc = 0x7F1A58E4u;
    // 7F1A58E4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A58E8:
    ctx->pc = 0x7F1A58E8u;
    // 7F1A58E8: bl      0x80041500
    {
            ctx->lr = 0x7F1A58ECu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F1A58EC:
    ctx->pc = 0x7F1A58ECu;
    ctx->downcount -= 5;
    // 7F1A58EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A58F0:
    ctx->pc = 0x7F1A58F0u;
    // 7F1A58F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A58F4:
    ctx->pc = 0x7F1A58F4u;
    // 7F1A58F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A58F8:
    ctx->pc = 0x7F1A58F8u;
    // 7F1A58F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A58FC:
    ctx->pc = 0x7F1A58FCu;
    ctx->downcount -= 16;
    // 7F1A58FC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5900:
    ctx->pc = 0x7F1A5900u;
    // 7F1A5900: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5904:
    ctx->pc = 0x7F1A5904u;
    // 7F1A5904: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5908:
    ctx->pc = 0x7F1A5908u;
    // 7F1A5908: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A590C:
    ctx->pc = 0x7F1A590Cu;
    // 7F1A590C: or.   r29, r3, r3
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

label_7F1A5910:
    ctx->pc = 0x7F1A5910u;
    // 7F1A5910: bc    12, 2, 0x7F1A5B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5B20;
        }
    }

label_7F1A5914:
    ctx->pc = 0x7F1A5914u;
    ctx->downcount -= 5;
    // 7F1A5914: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1A5918:
    ctx->pc = 0x7F1A5918u;
    // 7F1A5918: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A591C:
    ctx->pc = 0x7F1A591Cu;
    // 7F1A591C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5920:
    ctx->pc = 0x7F1A5920u;
    // 7F1A5920: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F1A5924:
    ctx->pc = 0x7F1A5924u;
    // 7F1A5924: bl      0x80046238
    {
            ctx->lr = 0x7F1A5928u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F1A5928:
    ctx->pc = 0x7F1A5928u;
    ctx->downcount -= 5;
    // 7F1A5928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A592C:
    ctx->pc = 0x7F1A592Cu;
    // 7F1A592C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5930:
    ctx->pc = 0x7F1A5930u;
    // 7F1A5930: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A5934:
    ctx->pc = 0x7F1A5934u;
    // 7F1A5934: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A5938:
    ctx->pc = 0x7F1A5938u;
    // 7F1A5938: bl      0x80043188
    {
            ctx->lr = 0x7F1A593Cu;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F1A593C:
    ctx->pc = 0x7F1A593Cu;
    ctx->downcount -= 1;
    // 7F1A593C: bl      0x8004C3D0
    {
            ctx->lr = 0x7F1A5940u;
            ctx->pc = 0x8004C3D0u;
            return;
    }

label_7F1A5940:
    ctx->pc = 0x7F1A5940u;
    ctx->downcount -= 2;
    // 7F1A5940: or.   r28, r3, r3
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

label_7F1A5944:
    ctx->pc = 0x7F1A5944u;
    // 7F1A5944: bc    12, 2, 0x7F1A5990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5990;
        }
    }

label_7F1A5948:
    ctx->pc = 0x7F1A5948u;
    ctx->downcount -= 3;
    // 7F1A5948: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1A594C:
    ctx->pc = 0x7F1A594Cu;
    // 7F1A594C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A5950:
    ctx->pc = 0x7F1A5950u;
    // 7F1A5950: bl      0x8004B588
    {
            ctx->lr = 0x7F1A5954u;
            ctx->pc = 0x8004B588u;
            return;
    }

label_7F1A5954:
    ctx->pc = 0x7F1A5954u;
    ctx->downcount -= 5;
    // 7F1A5954: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1A5958:
    ctx->pc = 0x7F1A5958u;
    // 7F1A5958: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1A595C:
    ctx->pc = 0x7F1A595Cu;
    // 7F1A595C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A5960:
    ctx->pc = 0x7F1A5960u;
    // 7F1A5960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5964:
    ctx->pc = 0x7F1A5964u;
    // 7F1A5964: bl      0x80043238
    {
            ctx->lr = 0x7F1A5968u;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1A5968:
    ctx->pc = 0x7F1A5968u;
    ctx->downcount -= 9;
    // 7F1A5968: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A596C:
    ctx->pc = 0x7F1A596Cu;
    // 7F1A596C: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A5970:
    ctx->pc = 0x7F1A5970u;
    // 7F1A5970: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A5974:
    ctx->pc = 0x7F1A5974u;
    // 7F1A5974: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A5978:
    ctx->pc = 0x7F1A5978u;
    // 7F1A5978: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F1A597C:
    ctx->pc = 0x7F1A597Cu;
    // 7F1A597C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A5980:
    ctx->pc = 0x7F1A5980u;
    // 7F1A5980: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A5984:
    ctx->pc = 0x7F1A5984u;
    // 7F1A5984: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A5988:
    ctx->pc = 0x7F1A5988u;
    // 7F1A5988: bl      0x8004439C
    {
            ctx->lr = 0x7F1A598Cu;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A598C:
    ctx->pc = 0x7F1A598Cu;
    ctx->downcount -= 1;
    // 7F1A598C: b       0x7F1A59E0
    {
            goto label_7F1A59E0;
    }

label_7F1A5990:
    ctx->pc = 0x7F1A5990u;
    ctx->downcount -= 1;
    // 7F1A5990: bl      0x8004C6F0
    {
            ctx->lr = 0x7F1A5994u;
            ctx->pc = 0x8004C6F0u;
            return;
    }

label_7F1A5994:
    ctx->pc = 0x7F1A5994u;
    ctx->downcount -= 5;
    // 7F1A5994: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5998:
    ctx->pc = 0x7F1A5998u;
    // 7F1A5998: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1A599C:
    ctx->pc = 0x7F1A599Cu;
    // 7F1A599C: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A59A0:
    ctx->pc = 0x7F1A59A0u;
    // 7F1A59A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A59A4:
    ctx->pc = 0x7F1A59A4u;
    // 7F1A59A4: bl      0x8004B784
    {
            ctx->lr = 0x7F1A59A8u;
            ctx->pc = 0x8004B784u;
            return;
    }

label_7F1A59A8:
    ctx->pc = 0x7F1A59A8u;
    ctx->downcount -= 5;
    // 7F1A59A8: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1A59AC:
    ctx->pc = 0x7F1A59ACu;
    // 7F1A59AC: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1A59B0:
    ctx->pc = 0x7F1A59B0u;
    // 7F1A59B0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A59B4:
    ctx->pc = 0x7F1A59B4u;
    // 7F1A59B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A59B8:
    ctx->pc = 0x7F1A59B8u;
    // 7F1A59B8: bl      0x80043238
    {
            ctx->lr = 0x7F1A59BCu;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1A59BC:
    ctx->pc = 0x7F1A59BCu;
    ctx->downcount -= 9;
    // 7F1A59BC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A59C0:
    ctx->pc = 0x7F1A59C0u;
    // 7F1A59C0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A59C4:
    ctx->pc = 0x7F1A59C4u;
    // 7F1A59C4: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A59C8:
    ctx->pc = 0x7F1A59C8u;
    // 7F1A59C8: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A59CC:
    ctx->pc = 0x7F1A59CCu;
    // 7F1A59CC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F1A59D0:
    ctx->pc = 0x7F1A59D0u;
    // 7F1A59D0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A59D4:
    ctx->pc = 0x7F1A59D4u;
    // 7F1A59D4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A59D8:
    ctx->pc = 0x7F1A59D8u;
    // 7F1A59D8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A59DC:
    ctx->pc = 0x7F1A59DCu;
    // 7F1A59DC: bl      0x8004439C
    {
            ctx->lr = 0x7F1A59E0u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A59E0:
    ctx->pc = 0x7F1A59E0u;
    ctx->downcount -= 3;
    // 7F1A59E0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A59E4:
    ctx->pc = 0x7F1A59E4u;
    // 7F1A59E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A59E8:
    ctx->pc = 0x7F1A59E8u;
    // 7F1A59E8: bl      0x800438AC
    {
            ctx->lr = 0x7F1A59ECu;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F1A59EC:
    ctx->pc = 0x7F1A59ECu;
    ctx->downcount -= 12;
    // 7F1A59EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A59F0:
    ctx->pc = 0x7F1A59F0u;
    // 7F1A59F0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A59F4:
    ctx->pc = 0x7F1A59F4u;
    // 7F1A59F4: addi    r5, r4, 5936
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(5936);

label_7F1A59F8:
    ctx->pc = 0x7F1A59F8u;
    // 7F1A59F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A59FC:
    ctx->pc = 0x7F1A59FCu;
    // 7F1A59FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A59FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5A00:
    ctx->pc = 0x7F1A5A00u;
    // 7F1A5A00: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A5A04:
    ctx->pc = 0x7F1A5A04u;
    // 7F1A5A04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5A08:
    ctx->pc = 0x7F1A5A08u;
    // 7F1A5A08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A5A0C:
    ctx->pc = 0x7F1A5A0Cu;
    // 7F1A5A0C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5A0Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1A5A10:
    ctx->pc = 0x7F1A5A10u;
    // 7F1A5A10: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A5A14:
    ctx->pc = 0x7F1A5A14u;
    // 7F1A5A14: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5A14u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1A5A18:
    ctx->pc = 0x7F1A5A18u;
    // 7F1A5A18: bl      0x80044630
    {
            ctx->lr = 0x7F1A5A1Cu;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F1A5A1C:
    ctx->pc = 0x7F1A5A1Cu;
    ctx->downcount -= 1;
    // 7F1A5A1C: bl      0x80042A40
    {
            ctx->lr = 0x7F1A5A20u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F1A5A20:
    ctx->pc = 0x7F1A5A20u;
    ctx->downcount -= 3;
    // 7F1A5A20: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1A5A24:
    ctx->pc = 0x7F1A5A24u;
    // 7F1A5A24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5A28:
    ctx->pc = 0x7F1A5A28u;
    // 7F1A5A28: bl      0x80044978
    {
            ctx->lr = 0x7F1A5A2Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F1A5A2C:
    ctx->pc = 0x7F1A5A2Cu;
    ctx->downcount -= 7;
    // 7F1A5A2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5A30:
    ctx->pc = 0x7F1A5A30u;
    // 7F1A5A30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A5A34:
    ctx->pc = 0x7F1A5A34u;
    // 7F1A5A34: addi    r5, r3, 6072
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6072);

label_7F1A5A38:
    ctx->pc = 0x7F1A5A38u;
    // 7F1A5A38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A5A3C:
    ctx->pc = 0x7F1A5A3Cu;
    // 7F1A5A3C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5A40:
    ctx->pc = 0x7F1A5A40u;
    // 7F1A5A40: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5A44:
    ctx->pc = 0x7F1A5A44u;
    // 7F1A5A44: bl      0x80045970
    {
            ctx->lr = 0x7F1A5A48u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1A5A48:
    ctx->pc = 0x7F1A5A48u;
    ctx->downcount -= 1;
    // 7F1A5A48: bl      0x8004D870
    {
            ctx->lr = 0x7F1A5A4Cu;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F1A5A4C:
    ctx->pc = 0x7F1A5A4Cu;
    ctx->downcount -= 3;
    // 7F1A5A4C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1A5A50:
    ctx->pc = 0x7F1A5A50u;
    // 7F1A5A50: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A5A54:
    ctx->pc = 0x7F1A5A54u;
    // 7F1A5A54: b       0x7F1A5B04
    {
            goto label_7F1A5B04;
    }

label_7F1A5A58:
    ctx->downcount -= 4;
    // 7F1A5A58: add   r31, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F1A5A5C:
    ctx->pc = 0x7F1A5A5Cu;
    // 7F1A5A5C: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5A60:
    // 7F1A5A60: cmpwi   r0, 0
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

label_7F1A5A64:
    // 7F1A5A64: bc    4, 1, 0x7F1A5AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5AFC;
        }
    }

label_7F1A5A68:
    ctx->pc = 0x7F1A5A68u;
    ctx->downcount -= 3;
    // 7F1A5A68: lha     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A5A6C:
    // 7F1A5A6C: cmpwi   r0, 0
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

label_7F1A5A70:
    // 7F1A5A70: bc    4, 2, 0x7F1A5AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5AFC;
        }
    }

label_7F1A5A74:
    ctx->pc = 0x7F1A5A74u;
    ctx->downcount -= 7;
    // 7F1A5A74: lwz     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5A78:
    // 7F1A5A78: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1A5A7C:
    // 7F1A5A7C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A5A80:
    // 7F1A5A80: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5A84:
    // 7F1A5A84: addi    r0, r4, 104
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(104);

label_7F1A5A88:
    ctx->pc = 0x7F1A5A88u;
    // 7F1A5A88: lwzx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5A8C:
    // 7F1A5A8C: bl      0x80042184
    {
            ctx->lr = 0x7F1A5A90u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F1A5A90:
    ctx->pc = 0x7F1A5A90u;
    ctx->downcount -= 7;
    // 7F1A5A90: lwz     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5A94:
    // 7F1A5A94: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F1A5A98:
    // 7F1A5A98: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A5A9C:
    // 7F1A5A9C: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5AA0:
    // 7F1A5AA0: addi    r0, r4, 112
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(112);

label_7F1A5AA4:
    ctx->pc = 0x7F1A5AA4u;
    // 7F1A5AA4: lwzx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5AA8:
    // 7F1A5AA8: bl      0x80042184
    {
            ctx->lr = 0x7F1A5AACu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F1A5AAC:
    ctx->pc = 0x7F1A5AACu;
    ctx->downcount -= 3;
    // 7F1A5AAC: lwz     r3, 2124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5AB0:
    // 7F1A5AB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5AB4:
    // 7F1A5AB4: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F1A5AB8u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F1A5AB8:
    ctx->pc = 0x7F1A5AB8u;
    ctx->downcount -= 6;
    // 7F1A5AB8: lwz     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5ABC:
    // 7F1A5ABC: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5AC0:
    // 7F1A5AC0: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5AC4:
    // 7F1A5AC4: addi    r0, r3, 104
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(104);

label_7F1A5AC8:
    ctx->pc = 0x7F1A5AC8u;
    // 7F1A5AC8: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5ACC:
    // 7F1A5ACC: bl      0x8001DA4C
    {
            ctx->lr = 0x7F1A5AD0u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F1A5AD0:
    ctx->pc = 0x7F1A5AD0u;
    ctx->downcount -= 3;
    // 7F1A5AD0: lwz     r3, 2124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5AD4:
    // 7F1A5AD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5AD8:
    // 7F1A5AD8: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F1A5ADCu;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F1A5ADC:
    ctx->pc = 0x7F1A5ADCu;
    ctx->downcount -= 6;
    // 7F1A5ADC: lwz     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5AE0:
    // 7F1A5AE0: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5AE4:
    // 7F1A5AE4: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5AE8:
    // 7F1A5AE8: addi    r0, r3, 112
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(112);

label_7F1A5AEC:
    ctx->pc = 0x7F1A5AECu;
    // 7F1A5AEC: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A5AF0:
    // 7F1A5AF0: bl      0x8001DA4C
    {
            ctx->lr = 0x7F1A5AF4u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F1A5AF4:
    ctx->downcount -= 2;
    // 7F1A5AF4: addi    r3, r31, 120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(120);

label_7F1A5AF8:
    // 7F1A5AF8: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F1A5AFCu;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F1A5AFC:
    ctx->downcount -= 2;
    // 7F1A5AFC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1A5B00:
    // 7F1A5B00: addi    r28, r28, 100
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(100);

label_7F1A5B04:
    ctx->pc = 0x7F1A5B04u;
    ctx->downcount -= 3;
    // 7F1A5B04: lwz     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5B08:
    // 7F1A5B08: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A5B0C:
    // 7F1A5B0C: bc    12, 0, 0x7F1A5A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5A58u;
                return;
            }
            goto label_7F1A5A58;
        }
    }

label_7F1A5B10:
    ctx->pc = 0x7F1A5B10u;
    ctx->downcount -= 1;
    // 7F1A5B10: bl      0x8004D990
    {
            ctx->lr = 0x7F1A5B14u;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F1A5B14:
    ctx->pc = 0x7F1A5B14u;
    ctx->downcount -= 3;
    // 7F1A5B14: lwz     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5B18:
    ctx->pc = 0x7F1A5B18u;
    // 7F1A5B18: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A5B1C:
    ctx->pc = 0x7F1A5B1Cu;
    // 7F1A5B1C: stw     r0, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5B20:
    ctx->pc = 0x7F1A5B20u;
    ctx->downcount -= 16;
    // 7F1A5B20: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A5B24:
    ctx->pc = 0x7F1A5B24u;
    // 7F1A5B24: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5B28:
    ctx->pc = 0x7F1A5B28u;
    // 7F1A5B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5B2C:
    ctx->pc = 0x7F1A5B2Cu;
    // 7F1A5B2C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1A5B30:
    ctx->pc = 0x7F1A5B30u;
    // 7F1A5B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5B34:
    ctx->pc = 0x7F1A5B34u;
    ctx->downcount -= 17;
    // 7F1A5B34: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5B38:
    ctx->pc = 0x7F1A5B38u;
    // 7F1A5B38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5B3C:
    ctx->pc = 0x7F1A5B3Cu;
    // 7F1A5B3C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5B40:
    ctx->pc = 0x7F1A5B40u;
    // 7F1A5B40: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A5B44:
    ctx->pc = 0x7F1A5B44u;
    // 7F1A5B44: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5B48:
    ctx->pc = 0x7F1A5B48u;
    // 7F1A5B48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5B4C:
    ctx->pc = 0x7F1A5B4Cu;
    // 7F1A5B4C: bl      0x7F026F5C
    {
            ctx->lr = 0x7F1A5B50u;
            ctx->pc = 0x7F026F5Cu;
            return;
    }

label_7F1A5B50:
    ctx->pc = 0x7F1A5B50u;
    ctx->downcount -= 2;
    // 7F1A5B50: cmplwi  r3, 0x0000
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

label_7F1A5B54:
    ctx->pc = 0x7F1A5B54u;
    // 7F1A5B54: bc    4, 2, 0x7F1A5B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5B60;
        }
    }

label_7F1A5B58:
    ctx->pc = 0x7F1A5B58u;
    ctx->downcount -= 2;
    // 7F1A5B58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5B5C:
    ctx->pc = 0x7F1A5B5Cu;
    // 7F1A5B5C: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5B60:
    ctx->pc = 0x7F1A5B60u;
    ctx->downcount -= 15;
    // 7F1A5B60: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_7F1A5B64:
    ctx->pc = 0x7F1A5B64u;
    // 7F1A5B64: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1A5B68:
    ctx->pc = 0x7F1A5B68u;
    // 7F1A5B68: stw     r0, 2080(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5B6C:
    ctx->pc = 0x7F1A5B6Cu;
    // 7F1A5B6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5B70:
    ctx->pc = 0x7F1A5B70u;
    // 7F1A5B70: addi    r0, r4, -7248
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7248);

label_7F1A5B74:
    ctx->pc = 0x7F1A5B74u;
    // 7F1A5B74: lwz     r6, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1A5B78:
    ctx->pc = 0x7F1A5B78u;
    // 7F1A5B78: lwz     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5B7C:
    ctx->pc = 0x7F1A5B7Cu;
    // 7F1A5B7C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1A5B80:
    ctx->pc = 0x7F1A5B80u;
    // 7F1A5B80: stw     r6, 2084(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2084);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A5B84:
    ctx->pc = 0x7F1A5B84u;
    // 7F1A5B84: stw     r4, 2088(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2088);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5B88:
    ctx->pc = 0x7F1A5B88u;
    // 7F1A5B88: sth     r5, 2092(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2092);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1A5B8C:
    ctx->pc = 0x7F1A5B8Cu;
    // 7F1A5B8C: sth     r5, 2094(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2094);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1A5B90:
    ctx->pc = 0x7F1A5B90u;
    // 7F1A5B90: sth     r5, 2096(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2096);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1A5B94:
    ctx->pc = 0x7F1A5B94u;
    // 7F1A5B94: stw     r5, 2056(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2056);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5B98:
    ctx->pc = 0x7F1A5B98u;
    // 7F1A5B98: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A5B9Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A5B9C:
    ctx->pc = 0x7F1A5B9Cu;
    ctx->downcount -= 2;
    // 7F1A5B9C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F1A5BA0:
    ctx->pc = 0x7F1A5BA0u;
    // 7F1A5BA0: bl      0x7F3C8470
    {
            ctx->lr = 0x7F1A5BA4u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F1A5BA4:
    ctx->pc = 0x7F1A5BA4u;
    ctx->downcount -= 1;
    // 7F1A5BA4: bl      0x7F3C8480
    {
            ctx->lr = 0x7F1A5BA8u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F1A5BA8:
    ctx->pc = 0x7F1A5BA8u;
    ctx->downcount -= 3;
    // 7F1A5BA8: or.   r31, r3, r3
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

label_7F1A5BAC:
    ctx->pc = 0x7F1A5BACu;
    // 7F1A5BAC: stw     r3, 2124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5BB0:
    ctx->pc = 0x7F1A5BB0u;
    // 7F1A5BB0: bc    4, 2, 0x7F1A5BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5BBC;
        }
    }

label_7F1A5BB4:
    ctx->pc = 0x7F1A5BB4u;
    ctx->downcount -= 2;
    // 7F1A5BB4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5BB8:
    ctx->pc = 0x7F1A5BB8u;
    // 7F1A5BB8: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5BBC:
    ctx->pc = 0x7F1A5BBCu;
    ctx->downcount -= 3;
    // 7F1A5BBC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A5BC0:
    ctx->pc = 0x7F1A5BC0u;
    // 7F1A5BC0: addi    r3, r3, -7248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7248);

label_7F1A5BC4:
    ctx->pc = 0x7F1A5BC4u;
    // 7F1A5BC4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A5BC8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A5BC8:
    ctx->pc = 0x7F1A5BC8u;
    ctx->downcount -= 2;
    // 7F1A5BC8: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F1A5BCC:
    ctx->pc = 0x7F1A5BCCu;
    // 7F1A5BCC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F1A5BD0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F1A5BD0:
    ctx->pc = 0x7F1A5BD0u;
    ctx->downcount -= 1;
    // 7F1A5BD0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F1A5BD4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F1A5BD4:
    ctx->pc = 0x7F1A5BD4u;
    ctx->downcount -= 3;
    // 7F1A5BD4: or.   r30, r3, r3
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

label_7F1A5BD8:
    ctx->pc = 0x7F1A5BD8u;
    // 7F1A5BD8: stw     r3, 2048(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2048);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5BDC:
    ctx->pc = 0x7F1A5BDCu;
    // 7F1A5BDC: bc    4, 2, 0x7F1A5BE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5BE8;
        }
    }

label_7F1A5BE0:
    ctx->pc = 0x7F1A5BE0u;
    ctx->downcount -= 2;
    // 7F1A5BE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5BE4:
    ctx->pc = 0x7F1A5BE4u;
    // 7F1A5BE4: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5BE8:
    ctx->pc = 0x7F1A5BE8u;
    ctx->downcount -= 4;
    // 7F1A5BE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A5BEC:
    ctx->pc = 0x7F1A5BECu;
    // 7F1A5BEC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A5BF0:
    ctx->pc = 0x7F1A5BF0u;
    // 7F1A5BF0: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F1A5BF4:
    ctx->pc = 0x7F1A5BF4u;
    // 7F1A5BF4: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1A5BF8u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1A5BF8:
    ctx->pc = 0x7F1A5BF8u;
    ctx->downcount -= 3;
    // 7F1A5BF8: or.   r25, r3, r3
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

label_7F1A5BFC:
    ctx->pc = 0x7F1A5BFCu;
    // 7F1A5BFC: stw     r25, 2052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2052);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1A5C00:
    ctx->pc = 0x7F1A5C00u;
    // 7F1A5C00: bc    4, 2, 0x7F1A5C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5C0C;
        }
    }

label_7F1A5C04:
    ctx->pc = 0x7F1A5C04u;
    ctx->downcount -= 2;
    // 7F1A5C04: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5C08:
    ctx->pc = 0x7F1A5C08u;
    // 7F1A5C08: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5C0C:
    ctx->pc = 0x7F1A5C0Cu;
    ctx->downcount -= 5;
    // 7F1A5C0C: lwz     r4, 2052(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2052);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5C10:
    ctx->pc = 0x7F1A5C10u;
    // 7F1A5C10: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5C14:
    ctx->pc = 0x7F1A5C14u;
    // 7F1A5C14: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F1A5C18:
    ctx->pc = 0x7F1A5C18u;
    // 7F1A5C18: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5C1C:
    ctx->pc = 0x7F1A5C1Cu;
    // 7F1A5C1C: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1A5C20u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1A5C20:
    ctx->pc = 0x7F1A5C20u;
    ctx->downcount -= 5;
    // 7F1A5C20: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A5C24:
    ctx->pc = 0x7F1A5C24u;
    // 7F1A5C24: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1A5C28:
    ctx->pc = 0x7F1A5C28u;
    // 7F1A5C28: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_7F1A5C2C:
    ctx->pc = 0x7F1A5C2Cu;
    // 7F1A5C2C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A5C30:
    ctx->pc = 0x7F1A5C30u;
    // 7F1A5C30: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1A5C34u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1A5C34:
    ctx->pc = 0x7F1A5C34u;
    ctx->downcount -= 3;
    // 7F1A5C34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5C38:
    ctx->pc = 0x7F1A5C38u;
    // 7F1A5C38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A5C3C:
    ctx->pc = 0x7F1A5C3Cu;
    // 7F1A5C3C: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F1A5C40u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F1A5C40:
    ctx->pc = 0x7F1A5C40u;
    ctx->downcount -= 6;
    // 7F1A5C40: stw     r3, 2120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5C44:
    ctx->pc = 0x7F1A5C44u;
    // 7F1A5C44: rlwinm r24, r3, 2, 0, 29
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F1A5C48:
    ctx->pc = 0x7F1A5C48u;
    // 7F1A5C48: rlwinm r27, r3, 3, 0, 28
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_7F1A5C4C:
    ctx->pc = 0x7F1A5C4Cu;
    // 7F1A5C4C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F1A5C50:
    ctx->pc = 0x7F1A5C50u;
    // 7F1A5C50: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A5C54:
    ctx->pc = 0x7F1A5C54u;
    // 7F1A5C54: b       0x7F1A5CFC
    {
            goto label_7F1A5CFC;
    }

label_7F1A5C58:
    ctx->downcount -= 2;
    // 7F1A5C58: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A5C5C:
    // 7F1A5C5C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F1A5C60u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F1A5C60:
    ctx->downcount -= 2;
    // 7F1A5C60: cmplwi  r3, 0x0000
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

label_7F1A5C64:
    // 7F1A5C64: bc    4, 2, 0x7F1A5C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5C70;
        }
    }

label_7F1A5C68:
    ctx->downcount -= 2;
    // 7F1A5C68: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5C6C:
    // 7F1A5C6C: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5C70:
    ctx->downcount -= 6;
    // 7F1A5C70: add   r26, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F1A5C74:
    // 7F1A5C74: add   r0, r3, r24
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A5C78:
    ctx->pc = 0x7F1A5C78u;
    // 7F1A5C78: stw     r3, 104(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5C7C:
    // 7F1A5C7C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1A5C80:
    ctx->pc = 0x7F1A5C80u;
    // 7F1A5C80: stw     r0, 108(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5C84:
    // 7F1A5C84: bl      0x7F3C9148
    {
            ctx->lr = 0x7F1A5C88u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F1A5C88:
    ctx->downcount -= 2;
    // 7F1A5C88: cmplwi  r3, 0x0000
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

label_7F1A5C8C:
    // 7F1A5C8C: bc    4, 2, 0x7F1A5C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5C98;
        }
    }

label_7F1A5C90:
    ctx->downcount -= 2;
    // 7F1A5C90: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A5C94:
    // 7F1A5C94: b       0x7F1A5D30
    {
            goto label_7F1A5D30;
    }

label_7F1A5C98:
    ctx->pc = 0x7F1A5C98u;
    ctx->downcount -= 7;
    // 7F1A5C98: stw     r3, 112(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5C9C:
    // 7F1A5C9C: add   r0, r3, r24
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A5CA0:
    // 7F1A5CA0: addi    r25, r26, 120
    ctx->gpr[25] = ctx->gpr[26] + (u32)(s32)(120);

label_7F1A5CA4:
    // 7F1A5CA4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F1A5CA8:
    ctx->pc = 0x7F1A5CA8u;
    // 7F1A5CA8: stw     r0, 116(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5CAC:
    // 7F1A5CAC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1A5CB0:
    // 7F1A5CB0: bl      0x7F2EA328
    {
            ctx->lr = 0x7F1A5CB4u;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F1A5CB4:
    ctx->downcount -= 3;
    // 7F1A5CB4: addi    r26, r26, 48
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(48);

label_7F1A5CB8:
    // 7F1A5CB8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1A5CBC:
    // 7F1A5CBC: bl      0x7F1A5368
    {
            ctx->lr = 0x7F1A5CC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5368u;
                return;
            }
            goto label_7F1A5368;
    }

label_7F1A5CC0:
    ctx->downcount -= 2;
    // 7F1A5CC0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1A5CC4:
    // 7F1A5CC4: bl      0x7F2EA428
    {
            ctx->lr = 0x7F1A5CC8u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F1A5CC8:
    ctx->downcount -= 2;
    // 7F1A5CC8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1A5CCC:
    // 7F1A5CCC: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F1A5CD0u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F1A5CD0:
    ctx->downcount -= 2;
    // 7F1A5CD0: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5CD4:
    // 7F1A5CD4: bl      0x7F1A58C4
    {
            ctx->lr = 0x7F1A5CD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A58C4u;
                return;
            }
            goto label_7F1A58C4;
    }

label_7F1A5CD8:
    ctx->downcount -= 4;
    // 7F1A5CD8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1A5CDC:
    // 7F1A5CDC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A5CE0:
    // 7F1A5CE0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5CE4:
    // 7F1A5CE4: bl      0x7F1A5778
    {
            ctx->lr = 0x7F1A5CE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5778u;
                return;
            }
            goto label_7F1A5778;
    }

label_7F1A5CE8:
    ctx->downcount -= 3;
    // 7F1A5CE8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1A5CEC:
    // 7F1A5CEC: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F1A5CF0:
    // 7F1A5CF0: bl      0x7F2EA688
    {
            ctx->lr = 0x7F1A5CF4u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F1A5CF4:
    ctx->downcount -= 2;
    // 7F1A5CF4: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F1A5CF8:
    // 7F1A5CF8: addi    r28, r28, 100
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(100);

label_7F1A5CFC:
    ctx->pc = 0x7F1A5CFCu;
    ctx->downcount -= 3;
    // 7F1A5CFC: lwz     r0, 2136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5D00:
    // 7F1A5D00: cmpw    r23, r0
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

label_7F1A5D04:
    // 7F1A5D04: bc    12, 0, 0x7F1A5C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5C58u;
                return;
            }
            goto label_7F1A5C58;
        }
    }

label_7F1A5D08:
    ctx->pc = 0x7F1A5D08u;
    ctx->downcount -= 10;
    // 7F1A5D08: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F1A5D0C:
    ctx->pc = 0x7F1A5D0Cu;
    // 7F1A5D0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A5D10:
    ctx->pc = 0x7F1A5D10u;
    // 7F1A5D10: stw     r4, 2068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2068);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5D14:
    ctx->pc = 0x7F1A5D14u;
    // 7F1A5D14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5D18:
    ctx->pc = 0x7F1A5D18u;
    // 7F1A5D18: lfs     f0, 5936(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5D18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A5D1C:
    ctx->pc = 0x7F1A5D1Cu;
    // 7F1A5D1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5D20:
    ctx->pc = 0x7F1A5D20u;
    // 7F1A5D20: stw     r4, 2064(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2064);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5D24:
    ctx->pc = 0x7F1A5D24u;
    // 7F1A5D24: stw     r0, 2060(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2060);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5D28:
    ctx->pc = 0x7F1A5D28u;
    // 7F1A5D28: stfs     f0, 2112(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5D28u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5D2C:
    ctx->pc = 0x7F1A5D2Cu;
    // 7F1A5D2C: stfs     f0, 2116(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5D2Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5D30:
    ctx->pc = 0x7F1A5D30u;
    ctx->downcount -= 16;
    // 7F1A5D30: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A5D34:
    ctx->pc = 0x7F1A5D34u;
    // 7F1A5D34: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5D38:
    ctx->pc = 0x7F1A5D38u;
    // 7F1A5D38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5D3C:
    ctx->pc = 0x7F1A5D3Cu;
    // 7F1A5D3C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1A5D40:
    ctx->pc = 0x7F1A5D40u;
    // 7F1A5D40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5D44:
    ctx->pc = 0x7F1A5D44u;
    ctx->downcount -= 13;
    // 7F1A5D44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5D48:
    ctx->pc = 0x7F1A5D48u;
    // 7F1A5D48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5D4C:
    ctx->pc = 0x7F1A5D4Cu;
    // 7F1A5D4C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A5D50:
    ctx->pc = 0x7F1A5D50u;
    // 7F1A5D50: li      r5, 2144
    ctx->gpr[5] = (u32)(s32)(2144);

label_7F1A5D54:
    ctx->pc = 0x7F1A5D54u;
    // 7F1A5D54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5D58:
    ctx->pc = 0x7F1A5D58u;
    // 7F1A5D58: addi    r4, r3, 13752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13752);

label_7F1A5D5C:
    ctx->pc = 0x7F1A5D5Cu;
    // 7F1A5D5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5D60:
    ctx->pc = 0x7F1A5D60u;
    // 7F1A5D60: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A5D64:
    ctx->pc = 0x7F1A5D64u;
    // 7F1A5D64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5D68:
    ctx->pc = 0x7F1A5D68u;
    // 7F1A5D68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5D6C:
    ctx->pc = 0x7F1A5D6Cu;
    // 7F1A5D6C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5D70:
    ctx->pc = 0x7F1A5D70u;
    // 7F1A5D70: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A5D74:
    ctx->pc = 0x7F1A5D74u;
    // 7F1A5D74: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A5D78u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A5D78:
    ctx->pc = 0x7F1A5D78u;
    ctx->downcount -= 2;
    // 7F1A5D78: or.   r31, r3, r3
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

label_7F1A5D7C:
    ctx->pc = 0x7F1A5D7Cu;
    // 7F1A5D7C: bc    12, 2, 0x7F1A5DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5DEC;
        }
    }

label_7F1A5D80:
    ctx->pc = 0x7F1A5D80u;
    ctx->downcount -= 5;
    // 7F1A5D80: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A5D84:
    ctx->pc = 0x7F1A5D84u;
    // 7F1A5D84: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A5D88:
    ctx->pc = 0x7F1A5D88u;
    // 7F1A5D88: addi    r4, r4, 20432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20432);

label_7F1A5D8C:
    ctx->pc = 0x7F1A5D8Cu;
    // 7F1A5D8C: addi    r5, r5, 21200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21200);

label_7F1A5D90:
    ctx->pc = 0x7F1A5D90u;
    // 7F1A5D90: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A5D94u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A5D94:
    ctx->pc = 0x7F1A5D94u;
    ctx->downcount -= 14;
    // 7F1A5D94: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A5D98:
    ctx->pc = 0x7F1A5D98u;
    // 7F1A5D98: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1A5D9C:
    ctx->pc = 0x7F1A5D9Cu;
    // 7F1A5D9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5DA0:
    ctx->pc = 0x7F1A5DA0u;
    // 7F1A5DA0: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F1A5DA4:
    ctx->pc = 0x7F1A5DA4u;
    // 7F1A5DA4: ori     r6, r4, 0x0080
    ctx->gpr[6] = ctx->gpr[4] | 0x0080u;

label_7F1A5DA8:
    ctx->pc = 0x7F1A5DA8u;
    // 7F1A5DA8: addi    r4, r3, 32548
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1A5DAC:
    ctx->pc = 0x7F1A5DACu;
    // 7F1A5DAC: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A5DB0:
    ctx->pc = 0x7F1A5DB0u;
    // 7F1A5DB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5DB4:
    ctx->pc = 0x7F1A5DB4u;
    // 7F1A5DB4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5DB8:
    ctx->pc = 0x7F1A5DB8u;
    // 7F1A5DB8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5DBC:
    ctx->pc = 0x7F1A5DBCu;
    // 7F1A5DBC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5DC0:
    ctx->pc = 0x7F1A5DC0u;
    // 7F1A5DC0: stw     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A5DC4:
    ctx->pc = 0x7F1A5DC4u;
    // 7F1A5DC4: stw     r0, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5DC8:
    ctx->pc = 0x7F1A5DC8u;
    // 7F1A5DC8: bl      0x7F1A5B34
    {
            ctx->lr = 0x7F1A5DCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5B34u;
                return;
            }
            goto label_7F1A5B34;
    }

label_7F1A5DCC:
    ctx->pc = 0x7F1A5DCCu;
    ctx->downcount -= 2;
    // 7F1A5DCC: cmpwi   r3, 0
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

label_7F1A5DD0:
    ctx->pc = 0x7F1A5DD0u;
    // 7F1A5DD0: bc    4, 0, 0x7F1A5DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5DE4;
        }
    }

label_7F1A5DD4:
    ctx->pc = 0x7F1A5DD4u;
    ctx->downcount -= 2;
    // 7F1A5DD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5DD8:
    ctx->pc = 0x7F1A5DD8u;
    // 7F1A5DD8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A5DDCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A5DDC:
    ctx->pc = 0x7F1A5DDCu;
    ctx->downcount -= 2;
    // 7F1A5DDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5DE0:
    ctx->pc = 0x7F1A5DE0u;
    // 7F1A5DE0: b       0x7F1A5DF0
    {
            goto label_7F1A5DF0;
    }

label_7F1A5DE4:
    ctx->pc = 0x7F1A5DE4u;
    ctx->downcount -= 2;
    // 7F1A5DE4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A5DE8:
    ctx->pc = 0x7F1A5DE8u;
    // 7F1A5DE8: stw     r31, 13752(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13752);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5DEC:
    ctx->pc = 0x7F1A5DECu;
    ctx->downcount -= 1;
    // 7F1A5DEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5DF0:
    ctx->pc = 0x7F1A5DF0u;
    ctx->downcount -= 6;
    // 7F1A5DF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5DF4:
    ctx->pc = 0x7F1A5DF4u;
    // 7F1A5DF4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A5DF8:
    ctx->pc = 0x7F1A5DF8u;
    // 7F1A5DF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5DFC:
    ctx->pc = 0x7F1A5DFCu;
    // 7F1A5DFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A5E00:
    ctx->pc = 0x7F1A5E00u;
    // 7F1A5E00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5E04:
    ctx->pc = 0x7F1A5E04u;
    ctx->downcount -= 13;
    // 7F1A5E04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5E08:
    ctx->pc = 0x7F1A5E08u;
    // 7F1A5E08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5E0C:
    ctx->pc = 0x7F1A5E0Cu;
    // 7F1A5E0C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A5E10:
    ctx->pc = 0x7F1A5E10u;
    // 7F1A5E10: li      r5, 2144
    ctx->gpr[5] = (u32)(s32)(2144);

label_7F1A5E14:
    ctx->pc = 0x7F1A5E14u;
    // 7F1A5E14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5E18:
    ctx->pc = 0x7F1A5E18u;
    // 7F1A5E18: addi    r4, r3, 13752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13752);

label_7F1A5E1C:
    ctx->pc = 0x7F1A5E1Cu;
    // 7F1A5E1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A5E20:
    ctx->pc = 0x7F1A5E20u;
    // 7F1A5E20: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A5E24:
    ctx->pc = 0x7F1A5E24u;
    // 7F1A5E24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5E28:
    ctx->pc = 0x7F1A5E28u;
    // 7F1A5E28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A5E2C:
    ctx->pc = 0x7F1A5E2Cu;
    // 7F1A5E2C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5E30:
    ctx->pc = 0x7F1A5E30u;
    // 7F1A5E30: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A5E34:
    ctx->pc = 0x7F1A5E34u;
    // 7F1A5E34: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A5E38u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A5E38:
    ctx->pc = 0x7F1A5E38u;
    ctx->downcount -= 2;
    // 7F1A5E38: or.   r31, r3, r3
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

label_7F1A5E3C:
    ctx->pc = 0x7F1A5E3Cu;
    // 7F1A5E3C: bc    12, 2, 0x7F1A5EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5EB4;
        }
    }

label_7F1A5E40:
    ctx->pc = 0x7F1A5E40u;
    ctx->downcount -= 5;
    // 7F1A5E40: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A5E44:
    ctx->pc = 0x7F1A5E44u;
    // 7F1A5E44: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A5E48:
    ctx->pc = 0x7F1A5E48u;
    // 7F1A5E48: addi    r4, r4, 20432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20432);

label_7F1A5E4C:
    ctx->pc = 0x7F1A5E4Cu;
    // 7F1A5E4C: addi    r5, r5, 21200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21200);

label_7F1A5E50:
    ctx->pc = 0x7F1A5E50u;
    // 7F1A5E50: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A5E54u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A5E54:
    ctx->pc = 0x7F1A5E54u;
    ctx->downcount -= 13;
    // 7F1A5E54: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5E58:
    ctx->pc = 0x7F1A5E58u;
    // 7F1A5E58: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A5E5C:
    ctx->pc = 0x7F1A5E5Cu;
    // 7F1A5E5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A5E60:
    ctx->pc = 0x7F1A5E60u;
    // 7F1A5E60: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1A5E64:
    ctx->pc = 0x7F1A5E64u;
    // 7F1A5E64: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A5E68:
    ctx->pc = 0x7F1A5E68u;
    // 7F1A5E68: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A5E6C:
    ctx->pc = 0x7F1A5E6Cu;
    // 7F1A5E6C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A5E70:
    ctx->pc = 0x7F1A5E70u;
    // 7F1A5E70: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F1A5E74:
    ctx->pc = 0x7F1A5E74u;
    // 7F1A5E74: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5E78:
    ctx->pc = 0x7F1A5E78u;
    // 7F1A5E78: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5E7C:
    ctx->pc = 0x7F1A5E7Cu;
    // 7F1A5E7C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A5E80:
    ctx->pc = 0x7F1A5E80u;
    // 7F1A5E80: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5E84:
    ctx->pc = 0x7F1A5E84u;
    // 7F1A5E84: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F1A5E88u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F1A5E88:
    ctx->pc = 0x7F1A5E88u;
    ctx->downcount -= 3;
    // 7F1A5E88: stw     r3, 2136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5E8C:
    ctx->pc = 0x7F1A5E8Cu;
    // 7F1A5E8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5E90:
    ctx->pc = 0x7F1A5E90u;
    // 7F1A5E90: bl      0x7F1A5B34
    {
            ctx->lr = 0x7F1A5E94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5B34u;
                return;
            }
            goto label_7F1A5B34;
    }

label_7F1A5E94:
    ctx->pc = 0x7F1A5E94u;
    ctx->downcount -= 2;
    // 7F1A5E94: cmpwi   r3, 0
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

label_7F1A5E98:
    ctx->pc = 0x7F1A5E98u;
    // 7F1A5E98: bc    4, 0, 0x7F1A5EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5EAC;
        }
    }

label_7F1A5E9C:
    ctx->pc = 0x7F1A5E9Cu;
    ctx->downcount -= 2;
    // 7F1A5E9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5EA0:
    ctx->pc = 0x7F1A5EA0u;
    // 7F1A5EA0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A5EA4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A5EA4:
    ctx->pc = 0x7F1A5EA4u;
    ctx->downcount -= 2;
    // 7F1A5EA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5EA8:
    ctx->pc = 0x7F1A5EA8u;
    // 7F1A5EA8: b       0x7F1A5EB8
    {
            goto label_7F1A5EB8;
    }

label_7F1A5EAC:
    ctx->pc = 0x7F1A5EACu;
    ctx->downcount -= 2;
    // 7F1A5EAC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A5EB0:
    ctx->pc = 0x7F1A5EB0u;
    // 7F1A5EB0: stw     r31, 13752(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13752);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A5EB4:
    ctx->pc = 0x7F1A5EB4u;
    ctx->downcount -= 1;
    // 7F1A5EB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A5EB8:
    ctx->pc = 0x7F1A5EB8u;
    ctx->downcount -= 6;
    // 7F1A5EB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5EBC:
    ctx->pc = 0x7F1A5EBCu;
    // 7F1A5EBC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A5EC0:
    ctx->pc = 0x7F1A5EC0u;
    // 7F1A5EC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5EC4:
    ctx->pc = 0x7F1A5EC4u;
    // 7F1A5EC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A5EC8:
    ctx->pc = 0x7F1A5EC8u;
    // 7F1A5EC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5ECC:
    ctx->pc = 0x7F1A5ECCu;
    ctx->downcount -= 26;
    // 7F1A5ECC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5ED0:
    ctx->pc = 0x7F1A5ED0u;
    // 7F1A5ED0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5ED4:
    ctx->pc = 0x7F1A5ED4u;
    // 7F1A5ED4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A5ED8:
    ctx->pc = 0x7F1A5ED8u;
    // 7F1A5ED8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A5EDC:
    ctx->pc = 0x7F1A5EDCu;
    // 7F1A5EDC: lfs     f1, 6096(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5EDCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A5EE0:
    ctx->pc = 0x7F1A5EE0u;
    // 7F1A5EE0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A5EE4:
    ctx->pc = 0x7F1A5EE4u;
    // 7F1A5EE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5EE8:
    ctx->pc = 0x7F1A5EE8u;
    // 7F1A5EE8: li      r8, -128
    ctx->gpr[8] = (u32)(s32)(-128);

label_7F1A5EEC:
    ctx->pc = 0x7F1A5EECu;
    // 7F1A5EEC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A5EF0:
    ctx->pc = 0x7F1A5EF0u;
    // 7F1A5EF0: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F1A5EF4:
    ctx->pc = 0x7F1A5EF4u;
    // 7F1A5EF4: lfs     f2, 6100(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5EF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A5EF8:
    ctx->pc = 0x7F1A5EF8u;
    // 7F1A5EF8: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A5EFC:
    ctx->pc = 0x7F1A5EFCu;
    // 7F1A5EFC: lfs     f3, 6080(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5EFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A5F00:
    ctx->pc = 0x7F1A5F00u;
    // 7F1A5F00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5F04:
    ctx->pc = 0x7F1A5F04u;
    // 7F1A5F04: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5F04u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_7F1A5F08:
    ctx->pc = 0x7F1A5F08u;
    // 7F1A5F08: sth     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1A5F0C:
    ctx->pc = 0x7F1A5F0Cu;
    // 7F1A5F0C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A5F10:
    ctx->pc = 0x7F1A5F10u;
    // 7F1A5F10: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A5F14:
    ctx->pc = 0x7F1A5F14u;
    // 7F1A5F14: sth     r8, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1A5F18:
    ctx->pc = 0x7F1A5F18u;
    // 7F1A5F18: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F1A5F1C:
    ctx->pc = 0x7F1A5F1Cu;
    // 7F1A5F1C: sth     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1A5F20:
    ctx->pc = 0x7F1A5F20u;
    // 7F1A5F20: li      r8, 15
    ctx->gpr[8] = (u32)(s32)(15);

label_7F1A5F24:
    ctx->pc = 0x7F1A5F24u;
    // 7F1A5F24: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5F28:
    ctx->pc = 0x7F1A5F28u;
    // 7F1A5F28: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1A5F2C:
    ctx->pc = 0x7F1A5F2Cu;
    // 7F1A5F2C: sth     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1A5F30:
    ctx->pc = 0x7F1A5F30u;
    // 7F1A5F30: bl      0x7F1D4CD8
    {
            ctx->lr = 0x7F1A5F34u;
            ctx->pc = 0x7F1D4CD8u;
            return;
    }

label_7F1A5F34:
    ctx->pc = 0x7F1A5F34u;
    ctx->downcount -= 5;
    // 7F1A5F34: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5F38:
    ctx->pc = 0x7F1A5F38u;
    // 7F1A5F38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A5F3C:
    ctx->pc = 0x7F1A5F3Cu;
    // 7F1A5F3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A5F40:
    ctx->pc = 0x7F1A5F40u;
    // 7F1A5F40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5F44:
    ctx->pc = 0x7F1A5F44u;
    ctx->downcount -= 1;
    // 7F1A5F44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5F48:
    ctx->pc = 0x7F1A5F48u;
    ctx->downcount -= 1;
    // 7F1A5F48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5F4C:
    ctx->pc = 0x7F1A5F4Cu;
    ctx->downcount -= 2;
    // 7F1A5F4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A5F50:
    ctx->pc = 0x7F1A5F50u;
    // 7F1A5F50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A5F54:
    ctx->pc = 0x7F1A5F54u;
    ctx->downcount -= 18;
    // 7F1A5F54: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A5F58:
    ctx->pc = 0x7F1A5F58u;
    // 7F1A5F58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A5F5C:
    ctx->pc = 0x7F1A5F5Cu;
    // 7F1A5F5C: cmpwi   r4, 2
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

label_7F1A5F60:
    ctx->pc = 0x7F1A5F60u;
    // 7F1A5F60: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5F64:
    ctx->pc = 0x7F1A5F64u;
    // 7F1A5F64: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A5F68:
    ctx->pc = 0x7F1A5F68u;
    // 7F1A5F68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A5F6C:
    ctx->pc = 0x7F1A5F6Cu;
    // 7F1A5F6C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A5F70:
    ctx->pc = 0x7F1A5F70u;
    // 7F1A5F70: bc    12, 2, 0x7F1A607C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A607C;
        }
    }

label_7F1A5F74:
    ctx->pc = 0x7F1A5F74u;
    ctx->downcount -= 1;
    // 7F1A5F74: bc    4, 0, 0x7F1A5F88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5F88;
        }
    }

label_7F1A5F78:
    ctx->pc = 0x7F1A5F78u;
    ctx->downcount -= 2;
    // 7F1A5F78: cmpwi   r4, 0
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

label_7F1A5F7C:
    ctx->pc = 0x7F1A5F7Cu;
    // 7F1A5F7C: bc    12, 2, 0x7F1A5F9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A5F9C;
        }
    }

label_7F1A5F80:
    ctx->pc = 0x7F1A5F80u;
    ctx->downcount -= 1;
    // 7F1A5F80: bc    4, 0, 0x7F1A6020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6020;
        }
    }

label_7F1A5F84:
    ctx->pc = 0x7F1A5F84u;
    ctx->downcount -= 1;
    // 7F1A5F84: b       0x7F1A6104
    {
            goto label_7F1A6104;
    }

label_7F1A5F88:
    ctx->pc = 0x7F1A5F88u;
    ctx->downcount -= 4;
    // 7F1A5F88: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1A5F8C:
    ctx->pc = 0x7F1A5F8Cu;
    // 7F1A5F8C: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F1A5F90:
    ctx->pc = 0x7F1A5F90u;
    // 7F1A5F90: cmpw    r4, r0
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

label_7F1A5F94:
    ctx->pc = 0x7F1A5F94u;
    // 7F1A5F94: bc    12, 2, 0x7F1A60DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A60DC;
        }
    }

label_7F1A5F98:
    ctx->pc = 0x7F1A5F98u;
    ctx->downcount -= 1;
    // 7F1A5F98: b       0x7F1A6104
    {
            goto label_7F1A6104;
    }

label_7F1A5F9C:
    ctx->pc = 0x7F1A5F9Cu;
    ctx->downcount -= 33;
    // 7F1A5F9C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5FA0:
    ctx->pc = 0x7F1A5FA0u;
    // 7F1A5FA0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1A5FA4:
    ctx->pc = 0x7F1A5FA4u;
    // 7F1A5FA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A5FA8:
    ctx->pc = 0x7F1A5FA8u;
    // 7F1A5FA8: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5FAC:
    ctx->pc = 0x7F1A5FACu;
    // 7F1A5FAC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A5FB0:
    ctx->pc = 0x7F1A5FB0u;
    // 7F1A5FB0: lfd     f1, 6088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6088);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5FB4:
    ctx->pc = 0x7F1A5FB4u;
    // 7F1A5FB4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5FB8:
    ctx->pc = 0x7F1A5FB8u;
    // 7F1A5FB8: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5FBC:
    ctx->pc = 0x7F1A5FBCu;
    // 7F1A5FBC: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5FC0:
    ctx->pc = 0x7F1A5FC0u;
    // 7F1A5FC0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FC0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1A5FC4:
    ctx->pc = 0x7F1A5FC4u;
    // 7F1A5FC4: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5FC8:
    ctx->pc = 0x7F1A5FC8u;
    // 7F1A5FC8: stfs     f0, 116(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5FCC:
    ctx->pc = 0x7F1A5FCCu;
    // 7F1A5FCC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5FD0:
    ctx->pc = 0x7F1A5FD0u;
    // 7F1A5FD0: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A5FD4:
    ctx->pc = 0x7F1A5FD4u;
    // 7F1A5FD4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A5FD8:
    ctx->pc = 0x7F1A5FD8u;
    // 7F1A5FD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5FDC:
    ctx->pc = 0x7F1A5FDCu;
    // 7F1A5FDC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5FE0:
    ctx->pc = 0x7F1A5FE0u;
    // 7F1A5FE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1A5FE4:
    ctx->pc = 0x7F1A5FE4u;
    // 7F1A5FE4: stfs     f0, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FE4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A5FE8:
    ctx->pc = 0x7F1A5FE8u;
    // 7F1A5FE8: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A5FEC:
    ctx->pc = 0x7F1A5FECu;
    // 7F1A5FEC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A5FF0:
    ctx->pc = 0x7F1A5FF0u;
    // 7F1A5FF0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A5FF4:
    ctx->pc = 0x7F1A5FF4u;
    // 7F1A5FF4: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A5FF8:
    ctx->pc = 0x7F1A5FF8u;
    // 7F1A5FF8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FF8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1A5FFC:
    ctx->pc = 0x7F1A5FFCu;
    // 7F1A5FFC: stfs     f0, 124(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A5FFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A6000:
    ctx->pc = 0x7F1A6000u;
    // 7F1A6000: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6004:
    ctx->pc = 0x7F1A6004u;
    // 7F1A6004: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1A6008:
    ctx->pc = 0x7F1A6008u;
    // 7F1A6008: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A600C:
    ctx->pc = 0x7F1A600Cu;
    // 7F1A600C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6010:
    ctx->pc = 0x7F1A6010u;
    // 7F1A6010: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A6014:
    ctx->pc = 0x7F1A6014u;
    // 7F1A6014: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A6014u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1A6018:
    ctx->pc = 0x7F1A6018u;
    // 7F1A6018: stfs     f0, 128(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6018u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A601C:
    ctx->pc = 0x7F1A601Cu;
    // 7F1A601C: b       0x7F1A6114
    {
            goto label_7F1A6114;
    }

label_7F1A6020:
    ctx->pc = 0x7F1A6020u;
    ctx->downcount -= 23;
    // 7F1A6020: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6024:
    ctx->pc = 0x7F1A6024u;
    // 7F1A6024: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6028:
    ctx->pc = 0x7F1A6028u;
    // 7F1A6028: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A602C:
    ctx->pc = 0x7F1A602Cu;
    // 7F1A602C: lwz     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6030:
    ctx->pc = 0x7F1A6030u;
    // 7F1A6030: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1A6034:
    ctx->pc = 0x7F1A6034u;
    // 7F1A6034: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A6038:
    ctx->pc = 0x7F1A6038u;
    // 7F1A6038: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A603C:
    ctx->pc = 0x7F1A603Cu;
    // 7F1A603C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6040:
    ctx->pc = 0x7F1A6040u;
    // 7F1A6040: lwz     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6044:
    ctx->pc = 0x7F1A6044u;
    // 7F1A6044: rlwinm r0, r0, 8, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x0000FF00u;
    }

label_7F1A6048:
    ctx->pc = 0x7F1A6048u;
    // 7F1A6048: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A604C:
    ctx->pc = 0x7F1A604Cu;
    // 7F1A604C: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6050:
    ctx->pc = 0x7F1A6050u;
    // 7F1A6050: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6054:
    ctx->pc = 0x7F1A6054u;
    // 7F1A6054: lwz     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6058:
    ctx->pc = 0x7F1A6058u;
    // 7F1A6058: rlwinm r0, r0, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00FF0000u;
    }

label_7F1A605C:
    ctx->pc = 0x7F1A605Cu;
    // 7F1A605C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A6060:
    ctx->pc = 0x7F1A6060u;
    // 7F1A6060: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6064:
    ctx->pc = 0x7F1A6064u;
    // 7F1A6064: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6068:
    ctx->pc = 0x7F1A6068u;
    // 7F1A6068: lwz     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A606C:
    ctx->pc = 0x7F1A606Cu;
    // 7F1A606C: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1A6070:
    ctx->pc = 0x7F1A6070u;
    // 7F1A6070: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A6074:
    ctx->pc = 0x7F1A6074u;
    // 7F1A6074: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6078:
    ctx->pc = 0x7F1A6078u;
    // 7F1A6078: b       0x7F1A6114
    {
            goto label_7F1A6114;
    }

label_7F1A607C:
    ctx->pc = 0x7F1A607Cu;
    ctx->downcount -= 11;
    // 7F1A607C: lwz     r5, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A6080:
    ctx->pc = 0x7F1A6080u;
    // 7F1A6080: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1A6084:
    ctx->pc = 0x7F1A6084u;
    // 7F1A6084: lwz     r0, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6088:
    ctx->pc = 0x7F1A6088u;
    // 7F1A6088: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A608C:
    ctx->pc = 0x7F1A608Cu;
    // 7F1A608C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A6090:
    ctx->pc = 0x7F1A6090u;
    // 7F1A6090: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6094:
    ctx->pc = 0x7F1A6094u;
    // 7F1A6094: lwz     r5, 124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A6098:
    ctx->pc = 0x7F1A6098u;
    // 7F1A6098: lwz     r0, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A609C:
    ctx->pc = 0x7F1A609Cu;
    // 7F1A609C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A60A0:
    ctx->pc = 0x7F1A60A0u;
    // 7F1A60A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A60A4:
    ctx->pc = 0x7F1A60A4u;
    // 7F1A60A4: bl      0x7F1A5ECC
    {
            ctx->lr = 0x7F1A60A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5ECCu;
                return;
            }
            goto label_7F1A5ECC;
    }

label_7F1A60A8:
    ctx->pc = 0x7F1A60A8u;
    ctx->downcount -= 3;
    // 7F1A60A8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A60AC:
    ctx->pc = 0x7F1A60ACu;
    // 7F1A60AC: cmpwi   r0, 1
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

label_7F1A60B0:
    ctx->pc = 0x7F1A60B0u;
    // 7F1A60B0: bc    4, 2, 0x7F1A6114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6114;
        }
    }

label_7F1A60B4:
    ctx->pc = 0x7F1A60B4u;
    ctx->downcount -= 6;
    // 7F1A60B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A60B8:
    ctx->pc = 0x7F1A60B8u;
    // 7F1A60B8: lwz     r4, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A60BC:
    ctx->pc = 0x7F1A60BCu;
    // 7F1A60BC: addi    r5, r3, 6096
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6096);

label_7F1A60C0:
    ctx->pc = 0x7F1A60C0u;
    // 7F1A60C0: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F1A60C4:
    ctx->pc = 0x7F1A60C4u;
    // 7F1A60C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A60C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A60C8:
    ctx->pc = 0x7F1A60C8u;
    // 7F1A60C8: bl      0x7F407DBC
    {
            ctx->lr = 0x7F1A60CCu;
            ctx->pc = 0x7F407DBCu;
            return;
    }

label_7F1A60CC:
    ctx->pc = 0x7F1A60CCu;
    ctx->downcount -= 3;
    // 7F1A60CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A60D0:
    ctx->pc = 0x7F1A60D0u;
    // 7F1A60D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A60D4:
    ctx->pc = 0x7F1A60D4u;
    // 7F1A60D4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A60D8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A60D8:
    ctx->pc = 0x7F1A60D8u;
    ctx->downcount -= 1;
    // 7F1A60D8: b       0x7F1A6114
    {
            goto label_7F1A6114;
    }

label_7F1A60DC:
    ctx->pc = 0x7F1A60DCu;
    ctx->downcount -= 5;
    // 7F1A60DC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1A60E0:
    ctx->pc = 0x7F1A60E0u;
    // 7F1A60E0: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1A60E4:
    ctx->pc = 0x7F1A60E4u;
    // 7F1A60E4: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F1A60E8:
    ctx->pc = 0x7F1A60E8u;
    // 7F1A60E8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A60EC:
    loop_7F1A60EC(ctx);
    if (ctx->pc == 0x7F1A6100u) goto label_7F1A6100;
    return;
label_7F1A60F0:
    ctx->pc = 0x7F1A60F0u;
    // 7F1A60F0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1A60F4:
    ctx->pc = 0x7F1A60F4u;
    // 7F1A60F4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A60F8:
    ctx->pc = 0x7F1A60F8u;
    // 7F1A60F8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1A60FC:
    // 7F1A60FC: bc    16, 0, 0x7F1A60EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A60ECu;
                return;
            }
            goto label_7F1A60EC;
        }
    }

label_7F1A6100:
    ctx->pc = 0x7F1A6100u;
    ctx->downcount -= 1;
    // 7F1A6100: b       0x7F1A6114
    {
            goto label_7F1A6114;
    }

label_7F1A6104:
    ctx->pc = 0x7F1A6104u;
    ctx->downcount -= 3;
    // 7F1A6104: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6108:
    ctx->pc = 0x7F1A6108u;
    // 7F1A6108: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A610C:
    ctx->pc = 0x7F1A610Cu;
    // 7F1A610C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A6110u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A6110:
    ctx->pc = 0x7F1A6110u;
    ctx->downcount -= 1;
    // 7F1A6110: b       0x7F1A6118
    {
            goto label_7F1A6118;
    }

label_7F1A6114:
    ctx->pc = 0x7F1A6114u;
    ctx->downcount -= 1;
    // 7F1A6114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6118:
    ctx->pc = 0x7F1A6118u;
    ctx->downcount -= 16;
    // 7F1A6118: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A611C:
    ctx->pc = 0x7F1A611Cu;
    // 7F1A611C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6120:
    ctx->pc = 0x7F1A6120u;
    // 7F1A6120: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6124:
    ctx->pc = 0x7F1A6124u;
    // 7F1A6124: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1A6128:
    ctx->pc = 0x7F1A6128u;
    // 7F1A6128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A612C:
    ctx->pc = 0x7F1A612Cu;
    ctx->downcount -= 21;
    // 7F1A612C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6130:
    ctx->pc = 0x7F1A6130u;
    // 7F1A6130: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6134:
    ctx->pc = 0x7F1A6134u;
    // 7F1A6134: li      r5, 136
    ctx->gpr[5] = (u32)(s32)(136);

label_7F1A6138:
    ctx->pc = 0x7F1A6138u;
    // 7F1A6138: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A613C:
    ctx->pc = 0x7F1A613Cu;
    // 7F1A613C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6140:
    ctx->pc = 0x7F1A6140u;
    // 7F1A6140: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6144:
    ctx->pc = 0x7F1A6144u;
    // 7F1A6144: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6148:
    ctx->pc = 0x7F1A6148u;
    // 7F1A6148: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A614C:
    ctx->pc = 0x7F1A614Cu;
    // 7F1A614C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1A6150:
    ctx->pc = 0x7F1A6150u;
    // 7F1A6150: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6154:
    ctx->pc = 0x7F1A6154u;
    // 7F1A6154: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A6158u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A6158:
    ctx->pc = 0x7F1A6158u;
    ctx->downcount -= 2;
    // 7F1A6158: or.   r31, r3, r3
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

label_7F1A615C:
    ctx->pc = 0x7F1A615Cu;
    // 7F1A615C: bc    12, 2, 0x7F1A6294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6294;
        }
    }

label_7F1A6160:
    ctx->pc = 0x7F1A6160u;
    ctx->downcount -= 5;
    // 7F1A6160: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A6164:
    ctx->pc = 0x7F1A6164u;
    // 7F1A6164: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A6168:
    ctx->pc = 0x7F1A6168u;
    // 7F1A6168: addi    r4, r4, 24388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24388);

label_7F1A616C:
    ctx->pc = 0x7F1A616Cu;
    // 7F1A616C: addi    r5, r5, 24392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24392);

label_7F1A6170:
    ctx->pc = 0x7F1A6170u;
    // 7F1A6170: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A6174u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A6174:
    ctx->pc = 0x7F1A6174u;
    ctx->downcount -= 15;
    // 7F1A6174: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A6178:
    ctx->pc = 0x7F1A6178u;
    // 7F1A6178: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1A617C:
    ctx->pc = 0x7F1A617Cu;
    // 7F1A617C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A6180:
    ctx->pc = 0x7F1A6180u;
    // 7F1A6180: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1A6184:
    ctx->pc = 0x7F1A6184u;
    // 7F1A6184: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1A6188:
    ctx->pc = 0x7F1A6188u;
    // 7F1A6188: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1A618C:
    ctx->pc = 0x7F1A618Cu;
    // 7F1A618C: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A6190:
    ctx->pc = 0x7F1A6190u;
    // 7F1A6190: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F1A6194:
    ctx->pc = 0x7F1A6194u;
    // 7F1A6194: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F1A6198:
    ctx->pc = 0x7F1A6198u;
    // 7F1A6198: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A619C:
    ctx->pc = 0x7F1A619Cu;
    // 7F1A619C: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A61A0:
    ctx->pc = 0x7F1A61A0u;
    // 7F1A61A0: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A61A4:
    ctx->pc = 0x7F1A61A4u;
    // 7F1A61A4: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A61A8:
    ctx->pc = 0x7F1A61A8u;
    // 7F1A61A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A61AC:
    loop_7F1A61AC(ctx);
    if (ctx->pc == 0x7F1A61C0u) goto label_7F1A61C0;
    return;
label_7F1A61B0:
    ctx->pc = 0x7F1A61B0u;
    // 7F1A61B0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1A61B4:
    ctx->pc = 0x7F1A61B4u;
    // 7F1A61B4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A61B8:
    ctx->pc = 0x7F1A61B8u;
    // 7F1A61B8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1A61BC:
    // 7F1A61BC: bc    16, 0, 0x7F1A61AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A61ACu;
                return;
            }
            goto label_7F1A61AC;
        }
    }

label_7F1A61C0:
    ctx->pc = 0x7F1A61C0u;
    ctx->downcount -= 5;
    // 7F1A61C0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1A61C4:
    ctx->pc = 0x7F1A61C4u;
    // 7F1A61C4: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1A61C8:
    ctx->pc = 0x7F1A61C8u;
    // 7F1A61C8: addi    r4, r29, -4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F1A61CC:
    ctx->pc = 0x7F1A61CCu;
    // 7F1A61CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A61D0:
    loop_7F1A61D0(ctx);
    if (ctx->pc == 0x7F1A61E4u) goto label_7F1A61E4;
    return;
label_7F1A61D4:
    ctx->pc = 0x7F1A61D4u;
    // 7F1A61D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1A61D8:
    ctx->pc = 0x7F1A61D8u;
    // 7F1A61D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A61DC:
    ctx->pc = 0x7F1A61DCu;
    // 7F1A61DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1A61E0:
    // 7F1A61E0: bc    16, 0, 0x7F1A61D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A61D0u;
                return;
            }
            goto label_7F1A61D0;
        }
    }

label_7F1A61E4:
    ctx->pc = 0x7F1A61E4u;
    ctx->downcount -= 19;
    // 7F1A61E4: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A61E8:
    ctx->pc = 0x7F1A61E8u;
    // 7F1A61E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A61EC:
    ctx->pc = 0x7F1A61ECu;
    // 7F1A61EC: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A61F0:
    ctx->pc = 0x7F1A61F0u;
    // 7F1A61F0: addi    r4, r3, 6104
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6104);

label_7F1A61F4:
    ctx->pc = 0x7F1A61F4u;
    // 7F1A61F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A61F8:
    ctx->pc = 0x7F1A61F8u;
    // 7F1A61F8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A61F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A61FC:
    ctx->pc = 0x7F1A61FCu;
    // 7F1A61FC: stw     r5, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A6200:
    ctx->pc = 0x7F1A6200u;
    // 7F1A6200: lfs     f0, 6108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6200u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A6204:
    ctx->pc = 0x7F1A6204u;
    // 7F1A6204: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6208:
    ctx->pc = 0x7F1A6208u;
    // 7F1A6208: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A620C:
    ctx->pc = 0x7F1A620Cu;
    // 7F1A620C: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6210:
    ctx->pc = 0x7F1A6210u;
    // 7F1A6210: stw     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A6214:
    ctx->pc = 0x7F1A6214u;
    // 7F1A6214: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6218:
    ctx->pc = 0x7F1A6218u;
    // 7F1A6218: lfs     f2, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6218u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A621C:
    ctx->pc = 0x7F1A621Cu;
    // 7F1A621C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A621Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A6220:
    ctx->pc = 0x7F1A6220u;
    // 7F1A6220: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6220u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A6224:
    ctx->pc = 0x7F1A6224u;
    // 7F1A6224: lfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6224u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6228:
    ctx->pc = 0x7F1A6228u;
    // 7F1A6228: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A6228u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A622C:
    ctx->pc = 0x7F1A622Cu;
    // 7F1A622C: bc    4, 1, 0x7F1A6234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6234;
        }
    }

label_7F1A6230:
    ctx->pc = 0x7F1A6230u;
    ctx->downcount -= 1;
    // 7F1A6230: stfs     f0, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6230u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A6234:
    ctx->pc = 0x7F1A6234u;
    ctx->downcount -= 14;
    // 7F1A6234: lwz     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A6238:
    ctx->pc = 0x7F1A6238u;
    // 7F1A6238: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A623C:
    ctx->pc = 0x7F1A623Cu;
    // 7F1A623C: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F1A6240:
    ctx->pc = 0x7F1A6240u;
    // 7F1A6240: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6244:
    ctx->pc = 0x7F1A6244u;
    // 7F1A6244: lwz     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A6248:
    ctx->pc = 0x7F1A6248u;
    // 7F1A6248: addi    r0, r4, 16384
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16384);

label_7F1A624C:
    ctx->pc = 0x7F1A624Cu;
    // 7F1A624C: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6250:
    ctx->pc = 0x7F1A6250u;
    // 7F1A6250: lwz     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A6254:
    ctx->pc = 0x7F1A6254u;
    // 7F1A6254: addis   r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(64) << 16);

label_7F1A6258:
    ctx->pc = 0x7F1A6258u;
    // 7F1A6258: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A625C:
    ctx->pc = 0x7F1A625Cu;
    // 7F1A625C: lwz     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A6260:
    ctx->pc = 0x7F1A6260u;
    // 7F1A6260: addis   r0, r4, 8192
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(8192) << 16);

label_7F1A6264:
    ctx->pc = 0x7F1A6264u;
    // 7F1A6264: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6268:
    ctx->pc = 0x7F1A6268u;
    // 7F1A6268: bl      0x7F1A5F4C
    {
            ctx->lr = 0x7F1A626Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A5F4Cu;
                return;
            }
            goto label_7F1A5F4C;
    }

label_7F1A626C:
    ctx->pc = 0x7F1A626Cu;
    ctx->downcount -= 2;
    // 7F1A626C: cmpwi   r3, 0
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

label_7F1A6270:
    ctx->pc = 0x7F1A6270u;
    // 7F1A6270: bc    4, 0, 0x7F1A6284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6284;
        }
    }

label_7F1A6274:
    ctx->pc = 0x7F1A6274u;
    ctx->downcount -= 2;
    // 7F1A6274: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6278:
    ctx->pc = 0x7F1A6278u;
    // 7F1A6278: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A627Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A627C:
    ctx->pc = 0x7F1A627Cu;
    ctx->downcount -= 2;
    // 7F1A627C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6280:
    ctx->pc = 0x7F1A6280u;
    // 7F1A6280: b       0x7F1A6298
    {
            goto label_7F1A6298;
    }

label_7F1A6284:
    ctx->pc = 0x7F1A6284u;
    ctx->downcount -= 4;
    // 7F1A6284: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A6288:
    ctx->pc = 0x7F1A6288u;
    // 7F1A6288: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A628C:
    ctx->pc = 0x7F1A628Cu;
    // 7F1A628C: addi    r4, r4, 24404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24404);

label_7F1A6290:
    ctx->pc = 0x7F1A6290u;
    // 7F1A6290: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A6294u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A6294:
    ctx->pc = 0x7F1A6294u;
    ctx->downcount -= 1;
    // 7F1A6294: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6298:
    ctx->pc = 0x7F1A6298u;
    ctx->downcount -= 16;
    // 7F1A6298: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A629C:
    ctx->pc = 0x7F1A629Cu;
    // 7F1A629C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A62A0:
    ctx->pc = 0x7F1A62A0u;
    // 7F1A62A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A62A4:
    ctx->pc = 0x7F1A62A4u;
    // 7F1A62A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A62A8:
    ctx->pc = 0x7F1A62A8u;
    // 7F1A62A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A62AC:
    ctx->pc = 0x7F1A62ACu;
    ctx->downcount -= 1;
    // 7F1A62AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A62B0:
    ctx->pc = 0x7F1A62B0u;
    ctx->downcount -= 1;
    // 7F1A62B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A62B4:
    ctx->pc = 0x7F1A62B4u;
    ctx->downcount -= 2;
    // 7F1A62B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A62B8:
    ctx->pc = 0x7F1A62B8u;
    // 7F1A62B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A62BC:
    ctx->pc = 0x7F1A62BCu;
    ctx->downcount -= 7;
    // 7F1A62BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A62C0:
    ctx->pc = 0x7F1A62C0u;
    // 7F1A62C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A62C4:
    ctx->pc = 0x7F1A62C4u;
    // 7F1A62C4: cmpwi   r4, 0
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

label_7F1A62C8:
    ctx->pc = 0x7F1A62C8u;
    // 7F1A62C8: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A62CC:
    ctx->pc = 0x7F1A62CCu;
    // 7F1A62CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A62D0:
    ctx->pc = 0x7F1A62D0u;
    // 7F1A62D0: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A62D4:
    ctx->pc = 0x7F1A62D4u;
    // 7F1A62D4: bc    12, 2, 0x7F1A62DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A62DC;
        }
    }

label_7F1A62D8:
    ctx->pc = 0x7F1A62D8u;
    ctx->downcount -= 1;
    // 7F1A62D8: b       0x7F1A6324
    {
            goto label_7F1A6324;
    }

label_7F1A62DC:
    ctx->pc = 0x7F1A62DCu;
    ctx->downcount -= 17;
    // 7F1A62DC: lwz     r0, 80(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A62E0:
    ctx->pc = 0x7F1A62E0u;
    // 7F1A62E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A62E4:
    ctx->pc = 0x7F1A62E4u;
    // 7F1A62E4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A62E8:
    ctx->pc = 0x7F1A62E8u;
    // 7F1A62E8: lwz     r0, 84(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A62EC:
    ctx->pc = 0x7F1A62ECu;
    // 7F1A62EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A62F0:
    ctx->pc = 0x7F1A62F0u;
    // 7F1A62F0: lwz     r0, 88(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A62F4:
    ctx->pc = 0x7F1A62F4u;
    // 7F1A62F4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A62F8:
    ctx->pc = 0x7F1A62F8u;
    // 7F1A62F8: lwz     r4, 48(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A62FC:
    ctx->pc = 0x7F1A62FCu;
    // 7F1A62FC: lha     r5, 60(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(60);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A6300:
    ctx->pc = 0x7F1A6300u;
    // 7F1A6300: lha     r6, 62(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(62);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A6304:
    ctx->pc = 0x7F1A6304u;
    // 7F1A6304: lha     r7, 56(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(56);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A6308:
    ctx->pc = 0x7F1A6308u;
    // 7F1A6308: lha     r8, 58(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(58);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A630C:
    ctx->pc = 0x7F1A630Cu;
    // 7F1A630C: lwz     r9, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1A6310:
    ctx->pc = 0x7F1A6310u;
    // 7F1A6310: lfs     f1, 68(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6310u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6314:
    ctx->pc = 0x7F1A6314u;
    // 7F1A6314: lfs     f2, 72(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6314u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A6318:
    ctx->pc = 0x7F1A6318u;
    // 7F1A6318: lwz     r10, 76(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(76);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A631C:
    ctx->pc = 0x7F1A631Cu;
    // 7F1A631C: bl      0x7F352350
    {
            ctx->lr = 0x7F1A6320u;
            ctx->pc = 0x7F352350u;
            return;
    }

label_7F1A6320:
    ctx->pc = 0x7F1A6320u;
    ctx->downcount -= 1;
    // 7F1A6320: b       0x7F1A632C
    {
            goto label_7F1A632C;
    }

label_7F1A6324:
    ctx->pc = 0x7F1A6324u;
    ctx->downcount -= 1;
    // 7F1A6324: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1A6328u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1A6328:
    ctx->pc = 0x7F1A6328u;
    ctx->downcount -= 1;
    // 7F1A6328: b       0x7F1A6330
    {
            goto label_7F1A6330;
    }

label_7F1A632C:
    ctx->pc = 0x7F1A632Cu;
    ctx->downcount -= 1;
    // 7F1A632C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6330:
    ctx->pc = 0x7F1A6330u;
    ctx->downcount -= 5;
    // 7F1A6330: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6334:
    ctx->pc = 0x7F1A6334u;
    // 7F1A6334: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6338:
    ctx->pc = 0x7F1A6338u;
    // 7F1A6338: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A633C:
    ctx->pc = 0x7F1A633Cu;
    // 7F1A633C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6340:
    ctx->pc = 0x7F1A6340u;
    ctx->downcount -= 34;
    // 7F1A6340: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6344:
    ctx->pc = 0x7F1A6344u;
    // 7F1A6344: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6348:
    ctx->pc = 0x7F1A6348u;
    // 7F1A6348: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A634C:
    ctx->pc = 0x7F1A634Cu;
    // 7F1A634C: stfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A634Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1A6350:
    ctx->pc = 0x7F1A6350u;
    // 7F1A6350: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A6350u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F1A6354:
    ctx->pc = 0x7F1A6354u;
    // 7F1A6354: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1A6358:
    ctx->pc = 0x7F1A6358u;
    // 7F1A6358: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A6358u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F1A635C:
    ctx->pc = 0x7F1A635Cu;
    // 7F1A635C: stmw     r20, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6360:
    ctx->pc = 0x7F1A6360u;
    // 7F1A6360: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6364:
    ctx->pc = 0x7F1A6364u;
    // 7F1A6364: or   r21, r4, r4
    {
        ctx->gpr[21] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A6368:
    ctx->pc = 0x7F1A6368u;
    // 7F1A6368: or   r22, r5, r5
    {
        ctx->gpr[22] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A636C:
    ctx->pc = 0x7F1A636Cu;
    // 7F1A636C: or   r23, r6, r6
    {
        ctx->gpr[23] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A6370:
    ctx->pc = 0x7F1A6370u;
    // 7F1A6370: lwz     r28, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1A6374:
    ctx->pc = 0x7F1A6374u;
    // 7F1A6374: lwz     r29, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1A6378:
    ctx->pc = 0x7F1A6378u;
    // 7F1A6378: or   r24, r7, r7
    {
        ctx->gpr[24] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A637C:
    ctx->pc = 0x7F1A637Cu;
    // 7F1A637C: lwz     r30, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1A6380:
    ctx->pc = 0x7F1A6380u;
    // 7F1A6380: or   r25, r8, r8
    {
        ctx->gpr[25] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1A6384:
    ctx->pc = 0x7F1A6384u;
    // 7F1A6384: or   r26, r9, r9
    {
        ctx->gpr[26] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F1A6388:
    ctx->pc = 0x7F1A6388u;
    // 7F1A6388: or   r27, r10, r10
    {
        ctx->gpr[27] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F1A638C:
    ctx->pc = 0x7F1A638Cu;
    // 7F1A638C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1A6390:
    ctx->pc = 0x7F1A6390u;
    // 7F1A6390: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6394:
    ctx->pc = 0x7F1A6394u;
    // 7F1A6394: li      r5, 92
    ctx->gpr[5] = (u32)(s32)(92);

label_7F1A6398:
    ctx->pc = 0x7F1A6398u;
    // 7F1A6398: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A639C:
    ctx->pc = 0x7F1A639Cu;
    // 7F1A639C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A63A0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A63A0:
    ctx->pc = 0x7F1A63A0u;
    ctx->downcount -= 2;
    // 7F1A63A0: or.   r31, r3, r3
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

label_7F1A63A4:
    ctx->pc = 0x7F1A63A4u;
    // 7F1A63A4: bc    12, 2, 0x7F1A6448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6448;
        }
    }

label_7F1A63A8:
    ctx->pc = 0x7F1A63A8u;
    ctx->downcount -= 5;
    // 7F1A63A8: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A63AC:
    ctx->pc = 0x7F1A63ACu;
    // 7F1A63AC: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A63B0:
    ctx->pc = 0x7F1A63B0u;
    // 7F1A63B0: addi    r4, r4, 25260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25260);

label_7F1A63B4:
    ctx->pc = 0x7F1A63B4u;
    // 7F1A63B4: addi    r5, r5, 25264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25264);

label_7F1A63B8:
    ctx->pc = 0x7F1A63B8u;
    // 7F1A63B8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A63BCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A63BC:
    ctx->pc = 0x7F1A63BCu;
    ctx->downcount -= 25;
    // 7F1A63BC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A63C0:
    ctx->pc = 0x7F1A63C0u;
    // 7F1A63C0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A63C4:
    ctx->pc = 0x7F1A63C4u;
    // 7F1A63C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A63C8:
    ctx->pc = 0x7F1A63C8u;
    // 7F1A63C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A63CC:
    ctx->pc = 0x7F1A63CCu;
    // 7F1A63CC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1A63D0:
    ctx->pc = 0x7F1A63D0u;
    // 7F1A63D0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A63D4:
    ctx->pc = 0x7F1A63D4u;
    // 7F1A63D4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A63D8:
    ctx->pc = 0x7F1A63D8u;
    // 7F1A63D8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A63DC:
    ctx->pc = 0x7F1A63DCu;
    // 7F1A63DC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A63E0:
    ctx->pc = 0x7F1A63E0u;
    // 7F1A63E0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A63E4:
    ctx->pc = 0x7F1A63E4u;
    // 7F1A63E4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A63E8:
    ctx->pc = 0x7F1A63E8u;
    // 7F1A63E8: stw     r20, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F1A63EC:
    ctx->pc = 0x7F1A63ECu;
    // 7F1A63EC: stw     r21, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F1A63F0:
    ctx->pc = 0x7F1A63F0u;
    // 7F1A63F0: sth     r22, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F1A63F4:
    ctx->pc = 0x7F1A63F4u;
    // 7F1A63F4: sth     r23, 58(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[23]);
    }

label_7F1A63F8:
    ctx->pc = 0x7F1A63F8u;
    // 7F1A63F8: sth     r24, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F1A63FC:
    ctx->pc = 0x7F1A63FCu;
    // 7F1A63FC: sth     r25, 62(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_7F1A6400:
    ctx->pc = 0x7F1A6400u;
    // 7F1A6400: stw     r26, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1A6404:
    ctx->pc = 0x7F1A6404u;
    // 7F1A6404: stfs     f30, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6404u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1A6408:
    ctx->pc = 0x7F1A6408u;
    // 7F1A6408: stfs     f31, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6408u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1A640C:
    ctx->pc = 0x7F1A640Cu;
    // 7F1A640C: stw     r27, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A6410:
    ctx->pc = 0x7F1A6410u;
    // 7F1A6410: stw     r28, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1A6414:
    ctx->pc = 0x7F1A6414u;
    // 7F1A6414: stw     r29, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1A6418:
    ctx->pc = 0x7F1A6418u;
    // 7F1A6418: stw     r30, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A641C:
    ctx->pc = 0x7F1A641Cu;
    // 7F1A641C: bl      0x7F1A62B4
    {
            ctx->lr = 0x7F1A6420u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A62B4u;
                return;
            }
            goto label_7F1A62B4;
    }

label_7F1A6420:
    ctx->pc = 0x7F1A6420u;
    ctx->downcount -= 2;
    // 7F1A6420: cmpwi   r3, 0
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

label_7F1A6424:
    ctx->pc = 0x7F1A6424u;
    // 7F1A6424: bc    4, 0, 0x7F1A6438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6438;
        }
    }

label_7F1A6428:
    ctx->pc = 0x7F1A6428u;
    ctx->downcount -= 2;
    // 7F1A6428: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A642C:
    ctx->pc = 0x7F1A642Cu;
    // 7F1A642C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A6430u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A6430:
    ctx->pc = 0x7F1A6430u;
    ctx->downcount -= 2;
    // 7F1A6430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6434:
    ctx->pc = 0x7F1A6434u;
    // 7F1A6434: b       0x7F1A644C
    {
            goto label_7F1A644C;
    }

label_7F1A6438:
    ctx->pc = 0x7F1A6438u;
    ctx->downcount -= 4;
    // 7F1A6438: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A643C:
    ctx->pc = 0x7F1A643Cu;
    // 7F1A643C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6440:
    ctx->pc = 0x7F1A6440u;
    // 7F1A6440: addi    r4, r4, 25276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25276);

label_7F1A6444:
    ctx->pc = 0x7F1A6444u;
    // 7F1A6444: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1A6448u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1A6448:
    ctx->pc = 0x7F1A6448u;
    ctx->downcount -= 1;
    // 7F1A6448: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A644C:
    ctx->pc = 0x7F1A644Cu;
    ctx->downcount -= 18;
    // 7F1A644C: lfd     f31, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A644Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A6450:
    ctx->pc = 0x7F1A6450u;
    // 7F1A6450: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A6454:
    ctx->pc = 0x7F1A6454u;
    // 7F1A6454: lmw     r20, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6458:
    ctx->pc = 0x7F1A6458u;
    // 7F1A6458: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A645C:
    ctx->pc = 0x7F1A645Cu;
    // 7F1A645C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6460:
    ctx->pc = 0x7F1A6460u;
    // 7F1A6460: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A6464:
    ctx->pc = 0x7F1A6464u;
    // 7F1A6464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6468:
    ctx->pc = 0x7F1A6468u;
    ctx->downcount -= 1;
    // 7F1A6468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A646C:
    ctx->pc = 0x7F1A646Cu;
    ctx->downcount -= 1;
    // 7F1A646C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6470:
    ctx->pc = 0x7F1A6470u;
    ctx->downcount -= 20;
    // 7F1A6470: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6474:
    ctx->pc = 0x7F1A6474u;
    // 7F1A6474: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6478:
    ctx->pc = 0x7F1A6478u;
    // 7F1A6478: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A647C:
    ctx->pc = 0x7F1A647Cu;
    // 7F1A647C: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6480:
    ctx->pc = 0x7F1A6480u;
    // 7F1A6480: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6484:
    ctx->pc = 0x7F1A6484u;
    // 7F1A6484: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6488:
    ctx->pc = 0x7F1A6488u;
    // 7F1A6488: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A648C:
    ctx->pc = 0x7F1A648Cu;
    // 7F1A648C: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A6490:
    ctx->pc = 0x7F1A6490u;
    // 7F1A6490: stw     r30, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A6494:
    ctx->pc = 0x7F1A6494u;
    // 7F1A6494: bc    12, 2, 0x7F1A6598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6598;
        }
    }

label_7F1A6498:
    ctx->pc = 0x7F1A6498u;
    ctx->downcount -= 18;
    // 7F1A6498: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A649C:
    ctx->pc = 0x7F1A649Cu;
    // 7F1A649C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A64A0:
    ctx->pc = 0x7F1A64A0u;
    // 7F1A64A0: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A64A4:
    ctx->pc = 0x7F1A64A4u;
    // 7F1A64A4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A64A8:
    ctx->pc = 0x7F1A64A8u;
    // 7F1A64A8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A64AC:
    ctx->pc = 0x7F1A64ACu;
    // 7F1A64AC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A64B0:
    ctx->pc = 0x7F1A64B0u;
    // 7F1A64B0: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A64B4:
    ctx->pc = 0x7F1A64B4u;
    // 7F1A64B4: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A64B8:
    ctx->pc = 0x7F1A64B8u;
    // 7F1A64B8: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A64BC:
    ctx->pc = 0x7F1A64BCu;
    // 7F1A64BC: lis     r4, 192
    ctx->gpr[4] = ((u32)(s32)(192) << 16);

label_7F1A64C0:
    ctx->pc = 0x7F1A64C0u;
    // 7F1A64C0: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A64C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A64C4:
    ctx->pc = 0x7F1A64C4u;
    // 7F1A64C4: addi    r3, r5, -15265
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-15265);

label_7F1A64C8:
    ctx->pc = 0x7F1A64C8u;
    // 7F1A64C8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A64CC:
    ctx->pc = 0x7F1A64CCu;
    // 7F1A64CC: addi    r4, r4, 8143
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8143);

label_7F1A64D0:
    ctx->pc = 0x7F1A64D0u;
    // 7F1A64D0: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1A64D4:
    ctx->pc = 0x7F1A64D4u;
    // 7F1A64D4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A64D8:
    ctx->pc = 0x7F1A64D8u;
    // 7F1A64D8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A64DC:
    ctx->pc = 0x7F1A64DCu;
    // 7F1A64DC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A64E0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A64E0:
    ctx->pc = 0x7F1A64E0u;
    ctx->downcount -= 3;
    // 7F1A64E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A64E4:
    ctx->pc = 0x7F1A64E4u;
    // 7F1A64E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A64E8:
    ctx->pc = 0x7F1A64E8u;
    // 7F1A64E8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A64ECu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A64EC:
    ctx->pc = 0x7F1A64ECu;
    ctx->downcount -= 18;
    // 7F1A64EC: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A64F0:
    ctx->pc = 0x7F1A64F0u;
    // 7F1A64F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A64F4:
    ctx->pc = 0x7F1A64F4u;
    // 7F1A64F4: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A64F8:
    ctx->pc = 0x7F1A64F8u;
    // 7F1A64F8: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A64FC:
    ctx->pc = 0x7F1A64FCu;
    // 7F1A64FC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6500:
    ctx->pc = 0x7F1A6500u;
    // 7F1A6500: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6504:
    ctx->pc = 0x7F1A6504u;
    // 7F1A6504: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6508:
    ctx->pc = 0x7F1A6508u;
    // 7F1A6508: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A650C:
    ctx->pc = 0x7F1A650Cu;
    // 7F1A650C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6510:
    ctx->pc = 0x7F1A6510u;
    // 7F1A6510: lis     r4, 32
    ctx->gpr[4] = ((u32)(s32)(32) << 16);

label_7F1A6514:
    ctx->pc = 0x7F1A6514u;
    // 7F1A6514: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6514u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6518:
    ctx->pc = 0x7F1A6518u;
    // 7F1A6518: addi    r3, r5, -2977
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2977);

label_7F1A651C:
    ctx->pc = 0x7F1A651Cu;
    // 7F1A651C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6520:
    ctx->pc = 0x7F1A6520u;
    // 7F1A6520: addi    r4, r4, 8144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8144);

label_7F1A6524:
    ctx->pc = 0x7F1A6524u;
    // 7F1A6524: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A6528:
    ctx->pc = 0x7F1A6528u;
    // 7F1A6528: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A652C:
    ctx->pc = 0x7F1A652Cu;
    // 7F1A652C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6530:
    ctx->pc = 0x7F1A6530u;
    // 7F1A6530: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6534u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6534:
    ctx->pc = 0x7F1A6534u;
    ctx->downcount -= 3;
    // 7F1A6534: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6538:
    ctx->pc = 0x7F1A6538u;
    // 7F1A6538: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A653C:
    ctx->pc = 0x7F1A653Cu;
    // 7F1A653C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6540u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6540:
    ctx->pc = 0x7F1A6540u;
    ctx->downcount -= 18;
    // 7F1A6540: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A6544:
    ctx->pc = 0x7F1A6544u;
    // 7F1A6544: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6548:
    ctx->pc = 0x7F1A6548u;
    // 7F1A6548: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A654C:
    ctx->pc = 0x7F1A654Cu;
    // 7F1A654C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6550:
    ctx->pc = 0x7F1A6550u;
    // 7F1A6550: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6554:
    ctx->pc = 0x7F1A6554u;
    // 7F1A6554: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6558:
    ctx->pc = 0x7F1A6558u;
    // 7F1A6558: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A655C:
    ctx->pc = 0x7F1A655Cu;
    // 7F1A655C: lis     r5, 246
    ctx->gpr[5] = ((u32)(s32)(246) << 16);

label_7F1A6560:
    ctx->pc = 0x7F1A6560u;
    // 7F1A6560: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6564:
    ctx->pc = 0x7F1A6564u;
    // 7F1A6564: lis     r4, 90
    ctx->gpr[4] = ((u32)(s32)(90) << 16);

label_7F1A6568:
    ctx->pc = 0x7F1A6568u;
    // 7F1A6568: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6568u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A656C:
    ctx->pc = 0x7F1A656Cu;
    // 7F1A656C: addi    r3, r5, -1814
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1814);

label_7F1A6570:
    ctx->pc = 0x7F1A6570u;
    // 7F1A6570: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6574:
    ctx->pc = 0x7F1A6574u;
    // 7F1A6574: addi    r4, r4, -18173
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18173);

label_7F1A6578:
    ctx->pc = 0x7F1A6578u;
    // 7F1A6578: li      r5, 19
    ctx->gpr[5] = (u32)(s32)(19);

label_7F1A657C:
    ctx->pc = 0x7F1A657Cu;
    // 7F1A657C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6580:
    ctx->pc = 0x7F1A6580u;
    // 7F1A6580: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6584:
    ctx->pc = 0x7F1A6584u;
    // 7F1A6584: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6588u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6588:
    ctx->pc = 0x7F1A6588u;
    ctx->downcount -= 3;
    // 7F1A6588: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A658C:
    ctx->pc = 0x7F1A658Cu;
    // 7F1A658C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6590:
    ctx->pc = 0x7F1A6590u;
    // 7F1A6590: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6594u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6594:
    ctx->pc = 0x7F1A6594u;
    ctx->downcount -= 1;
    // 7F1A6594: b       0x7F1A6750
    {
            goto label_7F1A6750;
    }

label_7F1A6598:
    ctx->pc = 0x7F1A6598u;
    ctx->downcount -= 2;
    // 7F1A6598: rlwinm. r0, r6, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A659C:
    ctx->pc = 0x7F1A659Cu;
    // 7F1A659C: bc    12, 2, 0x7F1A66A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A66A0;
        }
    }

label_7F1A65A0:
    ctx->pc = 0x7F1A65A0u;
    ctx->downcount -= 18;
    // 7F1A65A0: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A65A4:
    ctx->pc = 0x7F1A65A4u;
    // 7F1A65A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A65A8:
    ctx->pc = 0x7F1A65A8u;
    // 7F1A65A8: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A65AC:
    ctx->pc = 0x7F1A65ACu;
    // 7F1A65AC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A65B0:
    ctx->pc = 0x7F1A65B0u;
    // 7F1A65B0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A65B4:
    ctx->pc = 0x7F1A65B4u;
    // 7F1A65B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A65B8:
    ctx->pc = 0x7F1A65B8u;
    // 7F1A65B8: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A65BC:
    ctx->pc = 0x7F1A65BCu;
    // 7F1A65BC: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A65C0:
    ctx->pc = 0x7F1A65C0u;
    // 7F1A65C0: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A65C4:
    ctx->pc = 0x7F1A65C4u;
    // 7F1A65C4: lis     r4, 45
    ctx->gpr[4] = ((u32)(s32)(45) << 16);

label_7F1A65C8:
    ctx->pc = 0x7F1A65C8u;
    // 7F1A65C8: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A65C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A65CC:
    ctx->pc = 0x7F1A65CCu;
    // 7F1A65CC: addi    r3, r5, -15265
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-15265);

label_7F1A65D0:
    ctx->pc = 0x7F1A65D0u;
    // 7F1A65D0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A65D4:
    ctx->pc = 0x7F1A65D4u;
    // 7F1A65D4: addi    r4, r4, 8369
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8369);

label_7F1A65D8:
    ctx->pc = 0x7F1A65D8u;
    // 7F1A65D8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1A65DC:
    ctx->pc = 0x7F1A65DCu;
    // 7F1A65DC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A65E0:
    ctx->pc = 0x7F1A65E0u;
    // 7F1A65E0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A65E4:
    ctx->pc = 0x7F1A65E4u;
    // 7F1A65E4: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A65E8u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A65E8:
    ctx->pc = 0x7F1A65E8u;
    ctx->downcount -= 3;
    // 7F1A65E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A65EC:
    ctx->pc = 0x7F1A65ECu;
    // 7F1A65EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A65F0:
    ctx->pc = 0x7F1A65F0u;
    // 7F1A65F0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A65F4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A65F4:
    ctx->pc = 0x7F1A65F4u;
    ctx->downcount -= 18;
    // 7F1A65F4: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A65F8:
    ctx->pc = 0x7F1A65F8u;
    // 7F1A65F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A65FC:
    ctx->pc = 0x7F1A65FCu;
    // 7F1A65FC: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A6600:
    ctx->pc = 0x7F1A6600u;
    // 7F1A6600: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6604:
    ctx->pc = 0x7F1A6604u;
    // 7F1A6604: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6608:
    ctx->pc = 0x7F1A6608u;
    // 7F1A6608: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A660C:
    ctx->pc = 0x7F1A660Cu;
    // 7F1A660C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6610:
    ctx->pc = 0x7F1A6610u;
    // 7F1A6610: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A6614:
    ctx->pc = 0x7F1A6614u;
    // 7F1A6614: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6618:
    ctx->pc = 0x7F1A6618u;
    // 7F1A6618: lis     r4, 51
    ctx->gpr[4] = ((u32)(s32)(51) << 16);

label_7F1A661C:
    ctx->pc = 0x7F1A661Cu;
    // 7F1A661C: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A661Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6620:
    ctx->pc = 0x7F1A6620u;
    // 7F1A6620: addi    r3, r5, -2977
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2977);

label_7F1A6624:
    ctx->pc = 0x7F1A6624u;
    // 7F1A6624: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6628:
    ctx->pc = 0x7F1A6628u;
    // 7F1A6628: addi    r4, r4, 8369
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8369);

label_7F1A662C:
    ctx->pc = 0x7F1A662Cu;
    // 7F1A662C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A6630:
    ctx->pc = 0x7F1A6630u;
    // 7F1A6630: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6634:
    ctx->pc = 0x7F1A6634u;
    // 7F1A6634: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6638:
    ctx->pc = 0x7F1A6638u;
    // 7F1A6638: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A663Cu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A663C:
    ctx->pc = 0x7F1A663Cu;
    ctx->downcount -= 3;
    // 7F1A663C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6640:
    ctx->pc = 0x7F1A6640u;
    // 7F1A6640: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6644:
    ctx->pc = 0x7F1A6644u;
    // 7F1A6644: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6648u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6648:
    ctx->pc = 0x7F1A6648u;
    ctx->downcount -= 18;
    // 7F1A6648: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A664C:
    ctx->pc = 0x7F1A664Cu;
    // 7F1A664C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6650:
    ctx->pc = 0x7F1A6650u;
    // 7F1A6650: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A6654:
    ctx->pc = 0x7F1A6654u;
    // 7F1A6654: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6658:
    ctx->pc = 0x7F1A6658u;
    // 7F1A6658: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A665C:
    ctx->pc = 0x7F1A665Cu;
    // 7F1A665C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6660:
    ctx->pc = 0x7F1A6660u;
    // 7F1A6660: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6664:
    ctx->pc = 0x7F1A6664u;
    // 7F1A6664: lis     r5, 246
    ctx->gpr[5] = ((u32)(s32)(246) << 16);

label_7F1A6668:
    ctx->pc = 0x7F1A6668u;
    // 7F1A6668: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A666C:
    ctx->pc = 0x7F1A666Cu;
    // 7F1A666C: lis     r4, 103
    ctx->gpr[4] = ((u32)(s32)(103) << 16);

label_7F1A6670:
    ctx->pc = 0x7F1A6670u;
    // 7F1A6670: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6670u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6674:
    ctx->pc = 0x7F1A6674u;
    // 7F1A6674: addi    r3, r5, -1814
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1814);

label_7F1A6678:
    ctx->pc = 0x7F1A6678u;
    // 7F1A6678: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A667C:
    ctx->pc = 0x7F1A667Cu;
    // 7F1A667C: addi    r4, r4, -17852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17852);

label_7F1A6680:
    ctx->pc = 0x7F1A6680u;
    // 7F1A6680: li      r5, 19
    ctx->gpr[5] = (u32)(s32)(19);

label_7F1A6684:
    ctx->pc = 0x7F1A6684u;
    // 7F1A6684: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6688:
    ctx->pc = 0x7F1A6688u;
    // 7F1A6688: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A668C:
    ctx->pc = 0x7F1A668Cu;
    // 7F1A668C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6690u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6690:
    ctx->pc = 0x7F1A6690u;
    ctx->downcount -= 3;
    // 7F1A6690: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6694:
    ctx->pc = 0x7F1A6694u;
    // 7F1A6694: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6698:
    ctx->pc = 0x7F1A6698u;
    // 7F1A6698: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A669Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A669C:
    ctx->pc = 0x7F1A669Cu;
    ctx->downcount -= 1;
    // 7F1A669C: b       0x7F1A6750
    {
            goto label_7F1A6750;
    }

label_7F1A66A0:
    ctx->pc = 0x7F1A66A0u;
    ctx->downcount -= 2;
    // 7F1A66A0: rlwinm. r0, r6, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A66A4:
    ctx->pc = 0x7F1A66A4u;
    // 7F1A66A4: bc    12, 2, 0x7F1A6750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6750;
        }
    }

label_7F1A66A8:
    ctx->pc = 0x7F1A66A8u;
    ctx->downcount -= 18;
    // 7F1A66A8: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A66AC:
    ctx->pc = 0x7F1A66ACu;
    // 7F1A66AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A66B0:
    ctx->pc = 0x7F1A66B0u;
    // 7F1A66B0: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A66B4:
    ctx->pc = 0x7F1A66B4u;
    // 7F1A66B4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A66B8:
    ctx->pc = 0x7F1A66B8u;
    // 7F1A66B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A66BC:
    ctx->pc = 0x7F1A66BCu;
    // 7F1A66BC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A66C0:
    ctx->pc = 0x7F1A66C0u;
    // 7F1A66C0: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A66C4:
    ctx->pc = 0x7F1A66C4u;
    // 7F1A66C4: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A66C8:
    ctx->pc = 0x7F1A66C8u;
    // 7F1A66C8: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A66CC:
    ctx->pc = 0x7F1A66CCu;
    // 7F1A66CC: lis     r4, 100
    ctx->gpr[4] = ((u32)(s32)(100) << 16);

label_7F1A66D0:
    ctx->pc = 0x7F1A66D0u;
    // 7F1A66D0: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A66D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A66D4:
    ctx->pc = 0x7F1A66D4u;
    // 7F1A66D4: addi    r3, r5, -15265
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-15265);

label_7F1A66D8:
    ctx->pc = 0x7F1A66D8u;
    // 7F1A66D8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A66DC:
    ctx->pc = 0x7F1A66DCu;
    // 7F1A66DC: addi    r4, r4, -31714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31714);

label_7F1A66E0:
    ctx->pc = 0x7F1A66E0u;
    // 7F1A66E0: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F1A66E4:
    ctx->pc = 0x7F1A66E4u;
    // 7F1A66E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A66E8:
    ctx->pc = 0x7F1A66E8u;
    // 7F1A66E8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A66EC:
    ctx->pc = 0x7F1A66ECu;
    // 7F1A66EC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A66F0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A66F0:
    ctx->pc = 0x7F1A66F0u;
    ctx->downcount -= 3;
    // 7F1A66F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A66F4:
    ctx->pc = 0x7F1A66F4u;
    // 7F1A66F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A66F8:
    ctx->pc = 0x7F1A66F8u;
    // 7F1A66F8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A66FCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A66FC:
    ctx->pc = 0x7F1A66FCu;
    ctx->downcount -= 18;
    // 7F1A66FC: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1A6700:
    ctx->pc = 0x7F1A6700u;
    // 7F1A6700: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6704:
    ctx->pc = 0x7F1A6704u;
    // 7F1A6704: addi    r0, r4, 4406
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4406);

label_7F1A6708:
    ctx->pc = 0x7F1A6708u;
    // 7F1A6708: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A670C:
    ctx->pc = 0x7F1A670Cu;
    // 7F1A670C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6710:
    ctx->pc = 0x7F1A6710u;
    // 7F1A6710: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6714:
    ctx->pc = 0x7F1A6714u;
    // 7F1A6714: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6718:
    ctx->pc = 0x7F1A6718u;
    // 7F1A6718: lis     r5, 217
    ctx->gpr[5] = ((u32)(s32)(217) << 16);

label_7F1A671C:
    ctx->pc = 0x7F1A671Cu;
    // 7F1A671C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6720:
    ctx->pc = 0x7F1A6720u;
    // 7F1A6720: lis     r4, 106
    ctx->gpr[4] = ((u32)(s32)(106) << 16);

label_7F1A6724:
    ctx->pc = 0x7F1A6724u;
    // 7F1A6724: lfs     f1, 6112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6724u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6728:
    ctx->pc = 0x7F1A6728u;
    // 7F1A6728: addi    r3, r5, -2977
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2977);

label_7F1A672C:
    ctx->pc = 0x7F1A672Cu;
    // 7F1A672C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6730:
    ctx->pc = 0x7F1A6730u;
    // 7F1A6730: addi    r4, r4, -31714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31714);

label_7F1A6734:
    ctx->pc = 0x7F1A6734u;
    // 7F1A6734: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A6738:
    ctx->pc = 0x7F1A6738u;
    // 7F1A6738: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A673C:
    ctx->pc = 0x7F1A673Cu;
    // 7F1A673C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6740:
    ctx->pc = 0x7F1A6740u;
    // 7F1A6740: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6744u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6744:
    ctx->pc = 0x7F1A6744u;
    ctx->downcount -= 3;
    // 7F1A6744: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6748:
    ctx->pc = 0x7F1A6748u;
    // 7F1A6748: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A674C:
    ctx->pc = 0x7F1A674Cu;
    // 7F1A674C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6750u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6750:
    ctx->pc = 0x7F1A6750u;
    ctx->downcount -= 17;
    // 7F1A6750: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6754:
    ctx->pc = 0x7F1A6754u;
    // 7F1A6754: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6758:
    ctx->pc = 0x7F1A6758u;
    // 7F1A6758: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A675C:
    ctx->pc = 0x7F1A675Cu;
    // 7F1A675C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6760:
    ctx->pc = 0x7F1A6760u;
    // 7F1A6760: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6764:
    ctx->pc = 0x7F1A6764u;
    // 7F1A6764: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6768:
    ctx->pc = 0x7F1A6768u;
    ctx->downcount -= 22;
    // 7F1A6768: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A676C:
    ctx->pc = 0x7F1A676Cu;
    // 7F1A676C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6770:
    ctx->pc = 0x7F1A6770u;
    // 7F1A6770: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A6774:
    ctx->pc = 0x7F1A6774u;
    // 7F1A6774: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6778:
    ctx->pc = 0x7F1A6778u;
    // 7F1A6778: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A677C:
    ctx->pc = 0x7F1A677Cu;
    // 7F1A677C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6780:
    ctx->pc = 0x7F1A6780u;
    // 7F1A6780: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A6784:
    ctx->pc = 0x7F1A6784u;
    // 7F1A6784: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6788:
    ctx->pc = 0x7F1A6788u;
    // 7F1A6788: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1A678C:
    ctx->pc = 0x7F1A678Cu;
    // 7F1A678C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6790:
    ctx->pc = 0x7F1A6790u;
    // 7F1A6790: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F1A6794:
    ctx->pc = 0x7F1A6794u;
    // 7F1A6794: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A6798u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A6798:
    ctx->pc = 0x7F1A6798u;
    ctx->downcount -= 2;
    // 7F1A6798: or.   r31, r3, r3
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

label_7F1A679C:
    ctx->pc = 0x7F1A679Cu;
    // 7F1A679C: bc    12, 2, 0x7F1A6808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6808;
        }
    }

label_7F1A67A0:
    ctx->pc = 0x7F1A67A0u;
    ctx->downcount -= 5;
    // 7F1A67A0: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A67A4:
    ctx->pc = 0x7F1A67A4u;
    // 7F1A67A4: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A67A8:
    ctx->pc = 0x7F1A67A8u;
    // 7F1A67A8: addi    r4, r4, 25704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25704);

label_7F1A67AC:
    ctx->pc = 0x7F1A67ACu;
    // 7F1A67AC: addi    r5, r5, 25708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25708);

label_7F1A67B0:
    ctx->pc = 0x7F1A67B0u;
    // 7F1A67B0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A67B4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A67B4:
    ctx->pc = 0x7F1A67B4u;
    ctx->downcount -= 15;
    // 7F1A67B4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A67B8:
    ctx->pc = 0x7F1A67B8u;
    // 7F1A67B8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A67BC:
    ctx->pc = 0x7F1A67BCu;
    // 7F1A67BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A67C0:
    ctx->pc = 0x7F1A67C0u;
    // 7F1A67C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A67C4:
    ctx->pc = 0x7F1A67C4u;
    // 7F1A67C4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A67C8:
    ctx->pc = 0x7F1A67C8u;
    // 7F1A67C8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A67CC:
    ctx->pc = 0x7F1A67CCu;
    // 7F1A67CC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A67D0:
    ctx->pc = 0x7F1A67D0u;
    // 7F1A67D0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A67D4:
    ctx->pc = 0x7F1A67D4u;
    // 7F1A67D4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A67D8:
    ctx->pc = 0x7F1A67D8u;
    // 7F1A67D8: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A67DC:
    ctx->pc = 0x7F1A67DCu;
    // 7F1A67DC: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A67E0:
    ctx->pc = 0x7F1A67E0u;
    // 7F1A67E0: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A67E4:
    ctx->pc = 0x7F1A67E4u;
    // 7F1A67E4: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A67E8:
    ctx->pc = 0x7F1A67E8u;
    // 7F1A67E8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A67EC:
    ctx->pc = 0x7F1A67ECu;
    // 7F1A67EC: bl      0x7F1A6470
    {
            ctx->lr = 0x7F1A67F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A6470u;
                return;
            }
            goto label_7F1A6470;
    }

label_7F1A67F0:
    ctx->pc = 0x7F1A67F0u;
    ctx->downcount -= 2;
    // 7F1A67F0: cmpwi   r3, 0
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

label_7F1A67F4:
    ctx->pc = 0x7F1A67F4u;
    // 7F1A67F4: bc    4, 0, 0x7F1A6808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6808;
        }
    }

label_7F1A67F8:
    ctx->pc = 0x7F1A67F8u;
    ctx->downcount -= 2;
    // 7F1A67F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A67FC:
    ctx->pc = 0x7F1A67FCu;
    // 7F1A67FC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A6800u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A6800:
    ctx->pc = 0x7F1A6800u;
    ctx->downcount -= 2;
    // 7F1A6800: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6804:
    ctx->pc = 0x7F1A6804u;
    // 7F1A6804: b       0x7F1A680C
    {
            goto label_7F1A680C;
    }

label_7F1A6808:
    ctx->pc = 0x7F1A6808u;
    ctx->downcount -= 1;
    // 7F1A6808: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A680C:
    ctx->pc = 0x7F1A680Cu;
    ctx->downcount -= 16;
    // 7F1A680C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6810:
    ctx->pc = 0x7F1A6810u;
    // 7F1A6810: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6814:
    ctx->pc = 0x7F1A6814u;
    // 7F1A6814: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6818:
    ctx->pc = 0x7F1A6818u;
    // 7F1A6818: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A681C:
    ctx->pc = 0x7F1A681Cu;
    // 7F1A681C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6820:
    ctx->pc = 0x7F1A6820u;
    ctx->downcount -= 21;
    // 7F1A6820: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6824:
    ctx->pc = 0x7F1A6824u;
    // 7F1A6824: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6828:
    ctx->pc = 0x7F1A6828u;
    // 7F1A6828: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A682C:
    ctx->pc = 0x7F1A682Cu;
    // 7F1A682C: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6830:
    ctx->pc = 0x7F1A6830u;
    // 7F1A6830: rlwinm. r29, r6, 0, 31, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6834:
    ctx->pc = 0x7F1A6834u;
    // 7F1A6834: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6838:
    ctx->pc = 0x7F1A6838u;
    // 7F1A6838: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A683C:
    ctx->pc = 0x7F1A683Cu;
    // 7F1A683C: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A6840:
    ctx->pc = 0x7F1A6840u;
    // 7F1A6840: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A6844:
    ctx->pc = 0x7F1A6844u;
    // 7F1A6844: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A6848:
    ctx->pc = 0x7F1A6848u;
    // 7F1A6848: bc    12, 2, 0x7F1A68A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A68A0;
        }
    }

label_7F1A684C:
    ctx->pc = 0x7F1A684Cu;
    ctx->downcount -= 18;
    // 7F1A684C: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F1A6850:
    ctx->pc = 0x7F1A6850u;
    // 7F1A6850: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6854:
    ctx->pc = 0x7F1A6854u;
    // 7F1A6854: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F1A6858:
    ctx->pc = 0x7F1A6858u;
    // 7F1A6858: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A685C:
    ctx->pc = 0x7F1A685Cu;
    // 7F1A685C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6860:
    ctx->pc = 0x7F1A6860u;
    // 7F1A6860: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6864:
    ctx->pc = 0x7F1A6864u;
    // 7F1A6864: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6868:
    ctx->pc = 0x7F1A6868u;
    // 7F1A6868: lis     r5, 31
    ctx->gpr[5] = ((u32)(s32)(31) << 16);

label_7F1A686C:
    ctx->pc = 0x7F1A686Cu;
    // 7F1A686C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6870:
    ctx->pc = 0x7F1A6870u;
    // 7F1A6870: lis     r4, 227
    ctx->gpr[4] = ((u32)(s32)(227) << 16);

label_7F1A6874:
    ctx->pc = 0x7F1A6874u;
    // 7F1A6874: lfs     f1, 6120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6874u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6878:
    ctx->pc = 0x7F1A6878u;
    // 7F1A6878: addi    r3, r5, -22073
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-22073);

label_7F1A687C:
    ctx->pc = 0x7F1A687Cu;
    // 7F1A687C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6880:
    ctx->pc = 0x7F1A6880u;
    // 7F1A6880: addi    r4, r4, 18113
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18113);

label_7F1A6884:
    ctx->pc = 0x7F1A6884u;
    // 7F1A6884: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A6888:
    ctx->pc = 0x7F1A6888u;
    // 7F1A6888: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A688C:
    ctx->pc = 0x7F1A688Cu;
    // 7F1A688C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6890:
    ctx->pc = 0x7F1A6890u;
    // 7F1A6890: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6894u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6894:
    ctx->pc = 0x7F1A6894u;
    ctx->downcount -= 3;
    // 7F1A6894: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6898:
    ctx->pc = 0x7F1A6898u;
    // 7F1A6898: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A689C:
    ctx->pc = 0x7F1A689Cu;
    // 7F1A689C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A68A0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A68A0:
    ctx->pc = 0x7F1A68A0u;
    ctx->downcount -= 2;
    // 7F1A68A0: rlwinm. r28, r27, 0, 28, 28
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A68A4:
    ctx->pc = 0x7F1A68A4u;
    // 7F1A68A4: bc    12, 2, 0x7F1A68FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A68FC;
        }
    }

label_7F1A68A8:
    ctx->pc = 0x7F1A68A8u;
    ctx->downcount -= 18;
    // 7F1A68A8: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F1A68AC:
    ctx->pc = 0x7F1A68ACu;
    // 7F1A68AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A68B0:
    ctx->pc = 0x7F1A68B0u;
    // 7F1A68B0: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F1A68B4:
    ctx->pc = 0x7F1A68B4u;
    // 7F1A68B4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A68B8:
    ctx->pc = 0x7F1A68B8u;
    // 7F1A68B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A68BC:
    ctx->pc = 0x7F1A68BCu;
    // 7F1A68BC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A68C0:
    ctx->pc = 0x7F1A68C0u;
    // 7F1A68C0: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A68C4:
    ctx->pc = 0x7F1A68C4u;
    // 7F1A68C4: lis     r5, 45
    ctx->gpr[5] = ((u32)(s32)(45) << 16);

label_7F1A68C8:
    ctx->pc = 0x7F1A68C8u;
    // 7F1A68C8: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A68CC:
    ctx->pc = 0x7F1A68CCu;
    // 7F1A68CC: lis     r4, 136
    ctx->gpr[4] = ((u32)(s32)(136) << 16);

label_7F1A68D0:
    ctx->pc = 0x7F1A68D0u;
    // 7F1A68D0: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A68D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A68D4:
    ctx->pc = 0x7F1A68D4u;
    // 7F1A68D4: addi    r3, r5, 3794
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(3794);

label_7F1A68D8:
    ctx->pc = 0x7F1A68D8u;
    // 7F1A68D8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A68DC:
    ctx->pc = 0x7F1A68DCu;
    // 7F1A68DC: addi    r4, r4, 27307
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27307);

label_7F1A68E0:
    ctx->pc = 0x7F1A68E0u;
    // 7F1A68E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A68E4:
    ctx->pc = 0x7F1A68E4u;
    // 7F1A68E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A68E8:
    ctx->pc = 0x7F1A68E8u;
    // 7F1A68E8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A68EC:
    ctx->pc = 0x7F1A68ECu;
    // 7F1A68EC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A68F0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A68F0:
    ctx->pc = 0x7F1A68F0u;
    ctx->downcount -= 3;
    // 7F1A68F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A68F4:
    ctx->pc = 0x7F1A68F4u;
    // 7F1A68F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A68F8:
    ctx->pc = 0x7F1A68F8u;
    // 7F1A68F8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A68FCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A68FC:
    ctx->pc = 0x7F1A68FCu;
    ctx->downcount -= 2;
    // 7F1A68FC: rlwinm. r0, r27, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6900:
    ctx->pc = 0x7F1A6900u;
    // 7F1A6900: bc    12, 2, 0x7F1A6958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6958;
        }
    }

label_7F1A6904:
    ctx->pc = 0x7F1A6904u;
    ctx->downcount -= 18;
    // 7F1A6904: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F1A6908:
    ctx->pc = 0x7F1A6908u;
    // 7F1A6908: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A690C:
    ctx->pc = 0x7F1A690Cu;
    // 7F1A690C: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F1A6910:
    ctx->pc = 0x7F1A6910u;
    // 7F1A6910: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6914:
    ctx->pc = 0x7F1A6914u;
    // 7F1A6914: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6918:
    ctx->pc = 0x7F1A6918u;
    // 7F1A6918: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A691C:
    ctx->pc = 0x7F1A691Cu;
    // 7F1A691C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6920:
    ctx->pc = 0x7F1A6920u;
    // 7F1A6920: lis     r5, 30
    ctx->gpr[5] = ((u32)(s32)(30) << 16);

label_7F1A6924:
    ctx->pc = 0x7F1A6924u;
    // 7F1A6924: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6928:
    ctx->pc = 0x7F1A6928u;
    // 7F1A6928: lis     r4, 18
    ctx->gpr[4] = ((u32)(s32)(18) << 16);

label_7F1A692C:
    ctx->pc = 0x7F1A692Cu;
    // 7F1A692C: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A692Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6930:
    ctx->pc = 0x7F1A6930u;
    // 7F1A6930: addi    r3, r5, -12658
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-12658);

label_7F1A6934:
    ctx->pc = 0x7F1A6934u;
    // 7F1A6934: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6938:
    ctx->pc = 0x7F1A6938u;
    // 7F1A6938: addi    r4, r4, -732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-732);

label_7F1A693C:
    ctx->pc = 0x7F1A693Cu;
    // 7F1A693C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F1A6940:
    ctx->pc = 0x7F1A6940u;
    // 7F1A6940: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6944:
    ctx->pc = 0x7F1A6944u;
    // 7F1A6944: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6948:
    ctx->pc = 0x7F1A6948u;
    // 7F1A6948: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A694Cu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A694C:
    ctx->pc = 0x7F1A694Cu;
    ctx->downcount -= 3;
    // 7F1A694C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6950:
    ctx->pc = 0x7F1A6950u;
    // 7F1A6950: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6954:
    ctx->pc = 0x7F1A6954u;
    // 7F1A6954: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6958u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6958:
    ctx->pc = 0x7F1A6958u;
    ctx->downcount -= 2;
    // 7F1A6958: rlwinm. r0, r27, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A695C:
    ctx->pc = 0x7F1A695Cu;
    // 7F1A695C: bc    12, 2, 0x7F1A6A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6A78;
        }
    }

label_7F1A6960:
    ctx->pc = 0x7F1A6960u;
    ctx->downcount -= 2;
    // 7F1A6960: cmpwi   r29, 0
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

label_7F1A6964:
    ctx->pc = 0x7F1A6964u;
    // 7F1A6964: bc    12, 2, 0x7F1A69C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A69C0;
        }
    }

label_7F1A6968:
    ctx->pc = 0x7F1A6968u;
    ctx->downcount -= 18;
    // 7F1A6968: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F1A696C:
    ctx->pc = 0x7F1A696Cu;
    // 7F1A696C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6970:
    ctx->pc = 0x7F1A6970u;
    // 7F1A6970: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F1A6974:
    ctx->pc = 0x7F1A6974u;
    // 7F1A6974: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6978:
    ctx->pc = 0x7F1A6978u;
    // 7F1A6978: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A697C:
    ctx->pc = 0x7F1A697Cu;
    // 7F1A697C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6980:
    ctx->pc = 0x7F1A6980u;
    // 7F1A6980: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6984:
    ctx->pc = 0x7F1A6984u;
    // 7F1A6984: lis     r5, 67
    ctx->gpr[5] = ((u32)(s32)(67) << 16);

label_7F1A6988:
    ctx->pc = 0x7F1A6988u;
    // 7F1A6988: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A698C:
    ctx->pc = 0x7F1A698Cu;
    // 7F1A698C: lis     r4, 115
    ctx->gpr[4] = ((u32)(s32)(115) << 16);

label_7F1A6990:
    ctx->pc = 0x7F1A6990u;
    // 7F1A6990: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6990u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6994:
    ctx->pc = 0x7F1A6994u;
    // 7F1A6994: addi    r3, r5, 10440
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10440);

label_7F1A6998:
    ctx->pc = 0x7F1A6998u;
    // 7F1A6998: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A699C:
    ctx->pc = 0x7F1A699Cu;
    // 7F1A699C: addi    r4, r4, 6416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6416);

label_7F1A69A0:
    ctx->pc = 0x7F1A69A0u;
    // 7F1A69A0: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F1A69A4:
    ctx->pc = 0x7F1A69A4u;
    // 7F1A69A4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A69A8:
    ctx->pc = 0x7F1A69A8u;
    // 7F1A69A8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A69AC:
    ctx->pc = 0x7F1A69ACu;
    // 7F1A69AC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A69B0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A69B0:
    ctx->pc = 0x7F1A69B0u;
    ctx->downcount -= 3;
    // 7F1A69B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A69B4:
    ctx->pc = 0x7F1A69B4u;
    // 7F1A69B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A69B8:
    ctx->pc = 0x7F1A69B8u;
    // 7F1A69B8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A69BCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A69BC:
    ctx->pc = 0x7F1A69BCu;
    ctx->downcount -= 1;
    // 7F1A69BC: b       0x7F1A6AD4
    {
            goto label_7F1A6AD4;
    }

label_7F1A69C0:
    ctx->pc = 0x7F1A69C0u;
    ctx->downcount -= 2;
    // 7F1A69C0: cmpwi   r28, 0
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

label_7F1A69C4:
    ctx->pc = 0x7F1A69C4u;
    // 7F1A69C4: bc    12, 2, 0x7F1A6A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6A20;
        }
    }

label_7F1A69C8:
    ctx->pc = 0x7F1A69C8u;
    ctx->downcount -= 18;
    // 7F1A69C8: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F1A69CC:
    ctx->pc = 0x7F1A69CCu;
    // 7F1A69CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A69D0:
    ctx->pc = 0x7F1A69D0u;
    // 7F1A69D0: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F1A69D4:
    ctx->pc = 0x7F1A69D4u;
    // 7F1A69D4: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A69D8:
    ctx->pc = 0x7F1A69D8u;
    // 7F1A69D8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A69DC:
    ctx->pc = 0x7F1A69DCu;
    // 7F1A69DC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A69E0:
    ctx->pc = 0x7F1A69E0u;
    // 7F1A69E0: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A69E4:
    ctx->pc = 0x7F1A69E4u;
    // 7F1A69E4: lis     r5, 67
    ctx->gpr[5] = ((u32)(s32)(67) << 16);

label_7F1A69E8:
    ctx->pc = 0x7F1A69E8u;
    // 7F1A69E8: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A69EC:
    ctx->pc = 0x7F1A69ECu;
    // 7F1A69EC: lis     r4, 192
    ctx->gpr[4] = ((u32)(s32)(192) << 16);

label_7F1A69F0:
    ctx->pc = 0x7F1A69F0u;
    // 7F1A69F0: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A69F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A69F4:
    ctx->pc = 0x7F1A69F4u;
    // 7F1A69F4: addi    r3, r5, 10440
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10440);

label_7F1A69F8:
    ctx->pc = 0x7F1A69F8u;
    // 7F1A69F8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A69FC:
    ctx->pc = 0x7F1A69FCu;
    // 7F1A69FC: addi    r4, r4, 16943
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16943);

label_7F1A6A00:
    ctx->pc = 0x7F1A6A00u;
    // 7F1A6A00: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1A6A04:
    ctx->pc = 0x7F1A6A04u;
    // 7F1A6A04: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6A08:
    ctx->pc = 0x7F1A6A08u;
    // 7F1A6A08: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6A0C:
    ctx->pc = 0x7F1A6A0Cu;
    // 7F1A6A0C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6A10u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6A10:
    ctx->pc = 0x7F1A6A10u;
    ctx->downcount -= 3;
    // 7F1A6A10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6A14:
    ctx->pc = 0x7F1A6A14u;
    // 7F1A6A14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6A18:
    ctx->pc = 0x7F1A6A18u;
    // 7F1A6A18: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6A1Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6A1C:
    ctx->pc = 0x7F1A6A1Cu;
    ctx->downcount -= 1;
    // 7F1A6A1C: b       0x7F1A6AD4
    {
            goto label_7F1A6AD4;
    }

label_7F1A6A20:
    ctx->pc = 0x7F1A6A20u;
    ctx->downcount -= 18;
    // 7F1A6A20: lis     r4, 94
    ctx->gpr[4] = ((u32)(s32)(94) << 16);

label_7F1A6A24:
    ctx->pc = 0x7F1A6A24u;
    // 7F1A6A24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6A28:
    ctx->pc = 0x7F1A6A28u;
    // 7F1A6A28: addi    r0, r4, 1524
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1524);

label_7F1A6A2C:
    ctx->pc = 0x7F1A6A2Cu;
    // 7F1A6A2C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6A30:
    ctx->pc = 0x7F1A6A30u;
    // 7F1A6A30: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6A34:
    ctx->pc = 0x7F1A6A34u;
    // 7F1A6A34: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6A38:
    ctx->pc = 0x7F1A6A38u;
    // 7F1A6A38: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6A3C:
    ctx->pc = 0x7F1A6A3Cu;
    // 7F1A6A3C: lis     r5, 67
    ctx->gpr[5] = ((u32)(s32)(67) << 16);

label_7F1A6A40:
    ctx->pc = 0x7F1A6A40u;
    // 7F1A6A40: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6A44:
    ctx->pc = 0x7F1A6A44u;
    // 7F1A6A44: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F1A6A48:
    ctx->pc = 0x7F1A6A48u;
    // 7F1A6A48: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6A48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6A4C:
    ctx->pc = 0x7F1A6A4Cu;
    // 7F1A6A4C: addi    r3, r5, 10440
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10440);

label_7F1A6A50:
    ctx->pc = 0x7F1A6A50u;
    // 7F1A6A50: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6A54:
    ctx->pc = 0x7F1A6A54u;
    // 7F1A6A54: addi    r4, r4, 3258
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3258);

label_7F1A6A58:
    ctx->pc = 0x7F1A6A58u;
    // 7F1A6A58: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F1A6A5C:
    ctx->pc = 0x7F1A6A5Cu;
    // 7F1A6A5C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6A60:
    ctx->pc = 0x7F1A6A60u;
    // 7F1A6A60: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6A64:
    ctx->pc = 0x7F1A6A64u;
    // 7F1A6A64: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6A68u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6A68:
    ctx->pc = 0x7F1A6A68u;
    ctx->downcount -= 3;
    // 7F1A6A68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6A6C:
    ctx->pc = 0x7F1A6A6Cu;
    // 7F1A6A6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6A70:
    ctx->pc = 0x7F1A6A70u;
    // 7F1A6A70: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6A74u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6A74:
    ctx->pc = 0x7F1A6A74u;
    ctx->downcount -= 1;
    // 7F1A6A74: b       0x7F1A6AD4
    {
            goto label_7F1A6AD4;
    }

label_7F1A6A78:
    ctx->pc = 0x7F1A6A78u;
    ctx->downcount -= 2;
    // 7F1A6A78: rlwinm. r0, r27, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6A7C:
    ctx->pc = 0x7F1A6A7Cu;
    // 7F1A6A7C: bc    12, 2, 0x7F1A6AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6AD4;
        }
    }

label_7F1A6A80:
    ctx->pc = 0x7F1A6A80u;
    ctx->downcount -= 18;
    // 7F1A6A80: lis     r4, 94
    ctx->gpr[4] = ((u32)(s32)(94) << 16);

label_7F1A6A84:
    ctx->pc = 0x7F1A6A84u;
    // 7F1A6A84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A6A88:
    ctx->pc = 0x7F1A6A88u;
    // 7F1A6A88: addi    r0, r4, 1524
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1524);

label_7F1A6A8C:
    ctx->pc = 0x7F1A6A8Cu;
    // 7F1A6A8C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6A90:
    ctx->pc = 0x7F1A6A90u;
    // 7F1A6A90: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6A94:
    ctx->pc = 0x7F1A6A94u;
    // 7F1A6A94: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6A98:
    ctx->pc = 0x7F1A6A98u;
    // 7F1A6A98: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1A6A9C:
    ctx->pc = 0x7F1A6A9Cu;
    // 7F1A6A9C: lis     r5, 67
    ctx->gpr[5] = ((u32)(s32)(67) << 16);

label_7F1A6AA0:
    ctx->pc = 0x7F1A6AA0u;
    // 7F1A6AA0: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6AA4:
    ctx->pc = 0x7F1A6AA4u;
    // 7F1A6AA4: lis     r4, 192
    ctx->gpr[4] = ((u32)(s32)(192) << 16);

label_7F1A6AA8:
    ctx->pc = 0x7F1A6AA8u;
    // 7F1A6AA8: lfs     f1, 6124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6AA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6AAC:
    ctx->pc = 0x7F1A6AACu;
    // 7F1A6AAC: addi    r3, r5, 10440
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10440);

label_7F1A6AB0:
    ctx->pc = 0x7F1A6AB0u;
    // 7F1A6AB0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6AB4:
    ctx->pc = 0x7F1A6AB4u;
    // 7F1A6AB4: addi    r4, r4, 16943
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16943);

label_7F1A6AB8:
    ctx->pc = 0x7F1A6AB8u;
    // 7F1A6AB8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1A6ABC:
    ctx->pc = 0x7F1A6ABCu;
    // 7F1A6ABC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6AC0:
    ctx->pc = 0x7F1A6AC0u;
    // 7F1A6AC0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6AC4:
    ctx->pc = 0x7F1A6AC4u;
    // 7F1A6AC4: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6AC8u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6AC8:
    ctx->pc = 0x7F1A6AC8u;
    ctx->downcount -= 3;
    // 7F1A6AC8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6ACC:
    ctx->pc = 0x7F1A6ACCu;
    // 7F1A6ACC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6AD0:
    ctx->pc = 0x7F1A6AD0u;
    // 7F1A6AD0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6AD4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6AD4:
    ctx->pc = 0x7F1A6AD4u;
    ctx->downcount -= 17;
    // 7F1A6AD4: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6AD8:
    ctx->pc = 0x7F1A6AD8u;
    // 7F1A6AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6ADC:
    ctx->pc = 0x7F1A6ADCu;
    // 7F1A6ADC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6AE0:
    ctx->pc = 0x7F1A6AE0u;
    // 7F1A6AE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6AE4:
    ctx->pc = 0x7F1A6AE4u;
    // 7F1A6AE4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1A6AE8:
    ctx->pc = 0x7F1A6AE8u;
    // 7F1A6AE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6AEC:
    ctx->pc = 0x7F1A6AECu;
    ctx->downcount -= 22;
    // 7F1A6AEC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6AF0:
    ctx->pc = 0x7F1A6AF0u;
    // 7F1A6AF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6AF4:
    ctx->pc = 0x7F1A6AF4u;
    // 7F1A6AF4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A6AF8:
    ctx->pc = 0x7F1A6AF8u;
    // 7F1A6AF8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6AFC:
    ctx->pc = 0x7F1A6AFCu;
    // 7F1A6AFC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6B00:
    ctx->pc = 0x7F1A6B00u;
    // 7F1A6B00: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6B04:
    ctx->pc = 0x7F1A6B04u;
    // 7F1A6B04: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A6B08:
    ctx->pc = 0x7F1A6B08u;
    // 7F1A6B08: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6B0C:
    ctx->pc = 0x7F1A6B0Cu;
    // 7F1A6B0C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1A6B10:
    ctx->pc = 0x7F1A6B10u;
    // 7F1A6B10: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6B14:
    ctx->pc = 0x7F1A6B14u;
    // 7F1A6B14: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F1A6B18:
    ctx->pc = 0x7F1A6B18u;
    // 7F1A6B18: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A6B1Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A6B1C:
    ctx->pc = 0x7F1A6B1Cu;
    ctx->downcount -= 2;
    // 7F1A6B1C: or.   r31, r3, r3
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

label_7F1A6B20:
    ctx->pc = 0x7F1A6B20u;
    // 7F1A6B20: bc    12, 2, 0x7F1A6B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6B84;
        }
    }

label_7F1A6B24:
    ctx->pc = 0x7F1A6B24u;
    ctx->downcount -= 3;
    // 7F1A6B24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A6B28:
    ctx->pc = 0x7F1A6B28u;
    // 7F1A6B28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A6B2C:
    ctx->pc = 0x7F1A6B2Cu;
    // 7F1A6B2C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A6B30u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A6B30:
    ctx->pc = 0x7F1A6B30u;
    ctx->downcount -= 15;
    // 7F1A6B30: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6B34:
    ctx->pc = 0x7F1A6B34u;
    // 7F1A6B34: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A6B38:
    ctx->pc = 0x7F1A6B38u;
    // 7F1A6B38: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A6B3C:
    ctx->pc = 0x7F1A6B3Cu;
    // 7F1A6B3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6B40:
    ctx->pc = 0x7F1A6B40u;
    // 7F1A6B40: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A6B44:
    ctx->pc = 0x7F1A6B44u;
    // 7F1A6B44: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A6B48:
    ctx->pc = 0x7F1A6B48u;
    // 7F1A6B48: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A6B4C:
    ctx->pc = 0x7F1A6B4Cu;
    // 7F1A6B4C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A6B50:
    ctx->pc = 0x7F1A6B50u;
    // 7F1A6B50: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A6B54:
    ctx->pc = 0x7F1A6B54u;
    // 7F1A6B54: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6B58:
    ctx->pc = 0x7F1A6B58u;
    // 7F1A6B58: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6B5C:
    ctx->pc = 0x7F1A6B5Cu;
    // 7F1A6B5C: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6B60:
    ctx->pc = 0x7F1A6B60u;
    // 7F1A6B60: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6B64:
    ctx->pc = 0x7F1A6B64u;
    // 7F1A6B64: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6B68:
    ctx->pc = 0x7F1A6B68u;
    // 7F1A6B68: bl      0x7F1A6820
    {
            ctx->lr = 0x7F1A6B6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A6820u;
                return;
            }
            goto label_7F1A6820;
    }

label_7F1A6B6C:
    ctx->pc = 0x7F1A6B6Cu;
    ctx->downcount -= 2;
    // 7F1A6B6C: cmpwi   r3, 0
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

label_7F1A6B70:
    ctx->pc = 0x7F1A6B70u;
    // 7F1A6B70: bc    4, 0, 0x7F1A6B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6B84;
        }
    }

label_7F1A6B74:
    ctx->pc = 0x7F1A6B74u;
    ctx->downcount -= 2;
    // 7F1A6B74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6B78:
    ctx->pc = 0x7F1A6B78u;
    // 7F1A6B78: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A6B7Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A6B7C:
    ctx->pc = 0x7F1A6B7Cu;
    ctx->downcount -= 2;
    // 7F1A6B7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6B80:
    ctx->pc = 0x7F1A6B80u;
    // 7F1A6B80: b       0x7F1A6B88
    {
            goto label_7F1A6B88;
    }

label_7F1A6B84:
    ctx->pc = 0x7F1A6B84u;
    ctx->downcount -= 1;
    // 7F1A6B84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6B88:
    ctx->pc = 0x7F1A6B88u;
    ctx->downcount -= 16;
    // 7F1A6B88: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6B8C:
    ctx->pc = 0x7F1A6B8Cu;
    // 7F1A6B8C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6B90:
    ctx->pc = 0x7F1A6B90u;
    // 7F1A6B90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6B94:
    ctx->pc = 0x7F1A6B94u;
    // 7F1A6B94: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6B98:
    ctx->pc = 0x7F1A6B98u;
    // 7F1A6B98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6B9C:
    ctx->pc = 0x7F1A6B9Cu;
    ctx->downcount -= 1;
    // 7F1A6B9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6BA0:
    ctx->pc = 0x7F1A6BA0u;
    ctx->downcount -= 1;
    // 7F1A6BA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6BA4:
    ctx->pc = 0x7F1A6BA4u;
    ctx->downcount -= 21;
    // 7F1A6BA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6BA8:
    ctx->pc = 0x7F1A6BA8u;
    // 7F1A6BA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6BAC:
    ctx->pc = 0x7F1A6BACu;
    // 7F1A6BAC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6BB0:
    ctx->pc = 0x7F1A6BB0u;
    // 7F1A6BB0: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6BB4:
    ctx->pc = 0x7F1A6BB4u;
    // 7F1A6BB4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6BB8:
    ctx->pc = 0x7F1A6BB8u;
    // 7F1A6BB8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6BBC:
    ctx->pc = 0x7F1A6BBCu;
    // 7F1A6BBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6BC0:
    ctx->pc = 0x7F1A6BC0u;
    // 7F1A6BC0: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A6BC4:
    ctx->pc = 0x7F1A6BC4u;
    // 7F1A6BC4: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A6BC8:
    ctx->pc = 0x7F1A6BC8u;
    // 7F1A6BC8: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A6BCC:
    ctx->pc = 0x7F1A6BCCu;
    // 7F1A6BCC: bc    12, 2, 0x7F1A6C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6C30;
        }
    }

label_7F1A6BD0:
    ctx->pc = 0x7F1A6BD0u;
    ctx->downcount -= 3;
    // 7F1A6BD0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A6BD4:
    ctx->pc = 0x7F1A6BD4u;
    // 7F1A6BD4: addi    r3, r3, -7232
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7232);

label_7F1A6BD8:
    ctx->pc = 0x7F1A6BD8u;
    // 7F1A6BD8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A6BDCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A6BDC:
    ctx->pc = 0x7F1A6BDCu;
    ctx->downcount -= 18;
    // 7F1A6BDC: lis     r5, 59
    ctx->gpr[5] = ((u32)(s32)(59) << 16);

label_7F1A6BE0:
    ctx->pc = 0x7F1A6BE0u;
    // 7F1A6BE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6BE4:
    ctx->pc = 0x7F1A6BE4u;
    // 7F1A6BE4: addi    r0, r5, -17103
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-17103);

label_7F1A6BE8:
    ctx->pc = 0x7F1A6BE8u;
    // 7F1A6BE8: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1A6BEC:
    ctx->pc = 0x7F1A6BECu;
    // 7F1A6BEC: addi    r5, r4, 6128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6128);

label_7F1A6BF0:
    ctx->pc = 0x7F1A6BF0u;
    // 7F1A6BF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6BF4:
    ctx->pc = 0x7F1A6BF4u;
    // 7F1A6BF4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6BF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6BF8:
    ctx->pc = 0x7F1A6BF8u;
    // 7F1A6BF8: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1A6BFC:
    ctx->pc = 0x7F1A6BFCu;
    // 7F1A6BFC: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6C00:
    ctx->pc = 0x7F1A6C00u;
    // 7F1A6C00: lis     r9, 199
    ctx->gpr[9] = ((u32)(s32)(199) << 16);

label_7F1A6C04:
    ctx->pc = 0x7F1A6C04u;
    // 7F1A6C04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6C08:
    ctx->pc = 0x7F1A6C08u;
    // 7F1A6C08: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6C0C:
    ctx->pc = 0x7F1A6C0Cu;
    // 7F1A6C0C: addi    r3, r9, 11444
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(11444);

label_7F1A6C10:
    ctx->pc = 0x7F1A6C10u;
    // 7F1A6C10: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6C14:
    ctx->pc = 0x7F1A6C14u;
    // 7F1A6C14: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A6C18:
    ctx->pc = 0x7F1A6C18u;
    // 7F1A6C18: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6C1C:
    ctx->pc = 0x7F1A6C1Cu;
    // 7F1A6C1C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6C20:
    ctx->pc = 0x7F1A6C20u;
    // 7F1A6C20: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6C24u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6C24:
    ctx->pc = 0x7F1A6C24u;
    ctx->downcount -= 3;
    // 7F1A6C24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6C28:
    ctx->pc = 0x7F1A6C28u;
    // 7F1A6C28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6C2C:
    ctx->pc = 0x7F1A6C2Cu;
    // 7F1A6C2C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6C30u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6C30:
    ctx->pc = 0x7F1A6C30u;
    ctx->downcount -= 2;
    // 7F1A6C30: rlwinm. r0, r29, 0, 30, 30
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

label_7F1A6C34:
    ctx->pc = 0x7F1A6C34u;
    // 7F1A6C34: bc    12, 2, 0x7F1A6C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6C98;
        }
    }

label_7F1A6C38:
    ctx->pc = 0x7F1A6C38u;
    ctx->downcount -= 3;
    // 7F1A6C38: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A6C3C:
    ctx->pc = 0x7F1A6C3Cu;
    // 7F1A6C3C: addi    r3, r3, -7216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7216);

label_7F1A6C40:
    ctx->pc = 0x7F1A6C40u;
    // 7F1A6C40: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A6C44u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A6C44:
    ctx->pc = 0x7F1A6C44u;
    ctx->downcount -= 18;
    // 7F1A6C44: lis     r5, 59
    ctx->gpr[5] = ((u32)(s32)(59) << 16);

label_7F1A6C48:
    ctx->pc = 0x7F1A6C48u;
    // 7F1A6C48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6C4C:
    ctx->pc = 0x7F1A6C4Cu;
    // 7F1A6C4C: addi    r0, r5, -17103
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-17103);

label_7F1A6C50:
    ctx->pc = 0x7F1A6C50u;
    // 7F1A6C50: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1A6C54:
    ctx->pc = 0x7F1A6C54u;
    // 7F1A6C54: addi    r5, r4, 6128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6128);

label_7F1A6C58:
    ctx->pc = 0x7F1A6C58u;
    // 7F1A6C58: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6C5C:
    ctx->pc = 0x7F1A6C5Cu;
    // 7F1A6C5C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6C5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6C60:
    ctx->pc = 0x7F1A6C60u;
    // 7F1A6C60: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1A6C64:
    ctx->pc = 0x7F1A6C64u;
    // 7F1A6C64: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6C68:
    ctx->pc = 0x7F1A6C68u;
    // 7F1A6C68: lis     r9, 199
    ctx->gpr[9] = ((u32)(s32)(199) << 16);

label_7F1A6C6C:
    ctx->pc = 0x7F1A6C6Cu;
    // 7F1A6C6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6C70:
    ctx->pc = 0x7F1A6C70u;
    // 7F1A6C70: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6C74:
    ctx->pc = 0x7F1A6C74u;
    // 7F1A6C74: addi    r3, r9, 11444
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(11444);

label_7F1A6C78:
    ctx->pc = 0x7F1A6C78u;
    // 7F1A6C78: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6C7C:
    ctx->pc = 0x7F1A6C7Cu;
    // 7F1A6C7C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F1A6C80:
    ctx->pc = 0x7F1A6C80u;
    // 7F1A6C80: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6C84:
    ctx->pc = 0x7F1A6C84u;
    // 7F1A6C84: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6C88:
    ctx->pc = 0x7F1A6C88u;
    // 7F1A6C88: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6C8Cu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6C8C:
    ctx->pc = 0x7F1A6C8Cu;
    ctx->downcount -= 3;
    // 7F1A6C8C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6C90:
    ctx->pc = 0x7F1A6C90u;
    // 7F1A6C90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6C94:
    ctx->pc = 0x7F1A6C94u;
    // 7F1A6C94: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1A6C98u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1A6C98:
    ctx->pc = 0x7F1A6C98u;
    ctx->downcount -= 17;
    // 7F1A6C98: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6C9C:
    ctx->pc = 0x7F1A6C9Cu;
    // 7F1A6C9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6CA0:
    ctx->pc = 0x7F1A6CA0u;
    // 7F1A6CA0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6CA4:
    ctx->pc = 0x7F1A6CA4u;
    // 7F1A6CA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6CA8:
    ctx->pc = 0x7F1A6CA8u;
    // 7F1A6CA8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6CAC:
    ctx->pc = 0x7F1A6CACu;
    // 7F1A6CAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6CB0:
    ctx->pc = 0x7F1A6CB0u;
    ctx->downcount -= 22;
    // 7F1A6CB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6CB4:
    ctx->pc = 0x7F1A6CB4u;
    // 7F1A6CB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6CB8:
    ctx->pc = 0x7F1A6CB8u;
    // 7F1A6CB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A6CBC:
    ctx->pc = 0x7F1A6CBCu;
    // 7F1A6CBC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6CC0:
    ctx->pc = 0x7F1A6CC0u;
    // 7F1A6CC0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6CC4:
    ctx->pc = 0x7F1A6CC4u;
    // 7F1A6CC4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6CC8:
    ctx->pc = 0x7F1A6CC8u;
    // 7F1A6CC8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A6CCC:
    ctx->pc = 0x7F1A6CCCu;
    // 7F1A6CCC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6CD0:
    ctx->pc = 0x7F1A6CD0u;
    // 7F1A6CD0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1A6CD4:
    ctx->pc = 0x7F1A6CD4u;
    // 7F1A6CD4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6CD8:
    ctx->pc = 0x7F1A6CD8u;
    // 7F1A6CD8: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F1A6CDC:
    ctx->pc = 0x7F1A6CDCu;
    // 7F1A6CDC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A6CE0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A6CE0:
    ctx->pc = 0x7F1A6CE0u;
    ctx->downcount -= 2;
    // 7F1A6CE0: or.   r31, r3, r3
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

label_7F1A6CE4:
    ctx->pc = 0x7F1A6CE4u;
    // 7F1A6CE4: bc    12, 2, 0x7F1A6D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6D50;
        }
    }

label_7F1A6CE8:
    ctx->pc = 0x7F1A6CE8u;
    ctx->downcount -= 5;
    // 7F1A6CE8: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A6CEC:
    ctx->pc = 0x7F1A6CECu;
    // 7F1A6CEC: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A6CF0:
    ctx->pc = 0x7F1A6CF0u;
    // 7F1A6CF0: addi    r4, r4, 27548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27548);

label_7F1A6CF4:
    ctx->pc = 0x7F1A6CF4u;
    // 7F1A6CF4: addi    r5, r5, 27552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27552);

label_7F1A6CF8:
    ctx->pc = 0x7F1A6CF8u;
    // 7F1A6CF8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A6CFCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A6CFC:
    ctx->pc = 0x7F1A6CFCu;
    ctx->downcount -= 15;
    // 7F1A6CFC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6D00:
    ctx->pc = 0x7F1A6D00u;
    // 7F1A6D00: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A6D04:
    ctx->pc = 0x7F1A6D04u;
    // 7F1A6D04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A6D08:
    ctx->pc = 0x7F1A6D08u;
    // 7F1A6D08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6D0C:
    ctx->pc = 0x7F1A6D0Cu;
    // 7F1A6D0C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A6D10:
    ctx->pc = 0x7F1A6D10u;
    // 7F1A6D10: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A6D14:
    ctx->pc = 0x7F1A6D14u;
    // 7F1A6D14: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A6D18:
    ctx->pc = 0x7F1A6D18u;
    // 7F1A6D18: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A6D1C:
    ctx->pc = 0x7F1A6D1Cu;
    // 7F1A6D1C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A6D20:
    ctx->pc = 0x7F1A6D20u;
    // 7F1A6D20: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6D24:
    ctx->pc = 0x7F1A6D24u;
    // 7F1A6D24: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6D28:
    ctx->pc = 0x7F1A6D28u;
    // 7F1A6D28: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6D2C:
    ctx->pc = 0x7F1A6D2Cu;
    // 7F1A6D2C: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6D30:
    ctx->pc = 0x7F1A6D30u;
    // 7F1A6D30: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6D34:
    ctx->pc = 0x7F1A6D34u;
    // 7F1A6D34: bl      0x7F1A6BA4
    {
            ctx->lr = 0x7F1A6D38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A6BA4u;
                return;
            }
            goto label_7F1A6BA4;
    }

label_7F1A6D38:
    ctx->pc = 0x7F1A6D38u;
    ctx->downcount -= 2;
    // 7F1A6D38: cmpwi   r3, 0
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

label_7F1A6D3C:
    ctx->pc = 0x7F1A6D3Cu;
    // 7F1A6D3C: bc    4, 0, 0x7F1A6D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6D50;
        }
    }

label_7F1A6D40:
    ctx->pc = 0x7F1A6D40u;
    ctx->downcount -= 2;
    // 7F1A6D40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6D44:
    ctx->pc = 0x7F1A6D44u;
    // 7F1A6D44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A6D48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A6D48:
    ctx->pc = 0x7F1A6D48u;
    ctx->downcount -= 2;
    // 7F1A6D48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6D4C:
    ctx->pc = 0x7F1A6D4Cu;
    // 7F1A6D4C: b       0x7F1A6D54
    {
            goto label_7F1A6D54;
    }

label_7F1A6D50:
    ctx->pc = 0x7F1A6D50u;
    ctx->downcount -= 1;
    // 7F1A6D50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6D54:
    ctx->pc = 0x7F1A6D54u;
    ctx->downcount -= 16;
    // 7F1A6D54: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6D58:
    ctx->pc = 0x7F1A6D58u;
    // 7F1A6D58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6D5C:
    ctx->pc = 0x7F1A6D5Cu;
    // 7F1A6D5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6D60:
    ctx->pc = 0x7F1A6D60u;
    // 7F1A6D60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6D64:
    ctx->pc = 0x7F1A6D64u;
    // 7F1A6D64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6D68:
    ctx->pc = 0x7F1A6D68u;
    ctx->downcount -= 1;
    // 7F1A6D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6D6C:
    ctx->pc = 0x7F1A6D6Cu;
    ctx->downcount -= 8;
    // 7F1A6D6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6D70:
    ctx->pc = 0x7F1A6D70u;
    // 7F1A6D70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6D74:
    ctx->pc = 0x7F1A6D74u;
    // 7F1A6D74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6D78:
    ctx->pc = 0x7F1A6D78u;
    // 7F1A6D78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A6D7C:
    ctx->pc = 0x7F1A6D7Cu;
    // 7F1A6D7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6D80:
    ctx->pc = 0x7F1A6D80u;
    // 7F1A6D80: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6D84:
    ctx->pc = 0x7F1A6D84u;
    // 7F1A6D84: cmplwi  r3, 0x0000
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

label_7F1A6D88:
    ctx->pc = 0x7F1A6D88u;
    // 7F1A6D88: bc    12, 2, 0x7F1A6D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6D98;
        }
    }

label_7F1A6D8C:
    ctx->pc = 0x7F1A6D8Cu;
    ctx->downcount -= 1;
    // 7F1A6D8C: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F1A6D90u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F1A6D90:
    ctx->pc = 0x7F1A6D90u;
    ctx->downcount -= 2;
    // 7F1A6D90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6D94:
    ctx->pc = 0x7F1A6D94u;
    // 7F1A6D94: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6D98:
    ctx->pc = 0x7F1A6D98u;
    ctx->downcount -= 3;
    // 7F1A6D98: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6D9C:
    ctx->pc = 0x7F1A6D9Cu;
    // 7F1A6D9C: cmplwi  r3, 0x0000
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

label_7F1A6DA0:
    ctx->pc = 0x7F1A6DA0u;
    // 7F1A6DA0: bc    12, 2, 0x7F1A6DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6DB0;
        }
    }

label_7F1A6DA4:
    ctx->pc = 0x7F1A6DA4u;
    ctx->downcount -= 1;
    // 7F1A6DA4: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F1A6DA8u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F1A6DA8:
    ctx->pc = 0x7F1A6DA8u;
    ctx->downcount -= 2;
    // 7F1A6DA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6DAC:
    ctx->pc = 0x7F1A6DACu;
    // 7F1A6DAC: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6DB0:
    ctx->pc = 0x7F1A6DB0u;
    ctx->downcount -= 3;
    // 7F1A6DB0: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A6DB4:
    ctx->pc = 0x7F1A6DB4u;
    // 7F1A6DB4: cmplwi  r3, 0x0000
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

label_7F1A6DB8:
    ctx->pc = 0x7F1A6DB8u;
    // 7F1A6DB8: bc    12, 2, 0x7F1A6DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6DC8;
        }
    }

label_7F1A6DBC:
    ctx->pc = 0x7F1A6DBCu;
    ctx->downcount -= 1;
    // 7F1A6DBC: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F1A6DC0u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F1A6DC0:
    ctx->pc = 0x7F1A6DC0u;
    ctx->downcount -= 2;
    // 7F1A6DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6DC4:
    ctx->pc = 0x7F1A6DC4u;
    // 7F1A6DC4: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6DC8:
    ctx->pc = 0x7F1A6DC8u;
    ctx->downcount -= 6;
    // 7F1A6DC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6DCC:
    ctx->pc = 0x7F1A6DCCu;
    // 7F1A6DCC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A6DD0:
    ctx->pc = 0x7F1A6DD0u;
    // 7F1A6DD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6DD4:
    ctx->pc = 0x7F1A6DD4u;
    // 7F1A6DD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A6DD8:
    ctx->pc = 0x7F1A6DD8u;
    // 7F1A6DD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6DDC:
    ctx->pc = 0x7F1A6DDCu;
    ctx->downcount -= 21;
    // 7F1A6DDC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6DE0:
    ctx->pc = 0x7F1A6DE0u;
    // 7F1A6DE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6DE4:
    ctx->pc = 0x7F1A6DE4u;
    // 7F1A6DE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6DE8:
    ctx->pc = 0x7F1A6DE8u;
    // 7F1A6DE8: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A6DEC:
    ctx->pc = 0x7F1A6DECu;
    // 7F1A6DEC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6DF0:
    ctx->pc = 0x7F1A6DF0u;
    // 7F1A6DF0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6DF4:
    ctx->pc = 0x7F1A6DF4u;
    // 7F1A6DF4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6DF8:
    ctx->pc = 0x7F1A6DF8u;
    // 7F1A6DF8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A6DFC:
    ctx->pc = 0x7F1A6DFCu;
    // 7F1A6DFC: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A6E00:
    ctx->pc = 0x7F1A6E00u;
    // 7F1A6E00: stw     r30, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1A6E04:
    ctx->pc = 0x7F1A6E04u;
    // 7F1A6E04: bc    12, 2, 0x7F1A6EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6EA8;
        }
    }

label_7F1A6E08:
    ctx->pc = 0x7F1A6E08u;
    ctx->downcount -= 3;
    // 7F1A6E08: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A6E0C:
    ctx->pc = 0x7F1A6E0Cu;
    // 7F1A6E0C: addi    r3, r3, -7200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7200);

label_7F1A6E10:
    ctx->pc = 0x7F1A6E10u;
    // 7F1A6E10: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A6E14u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A6E14:
    ctx->pc = 0x7F1A6E14u;
    ctx->downcount -= 16;
    // 7F1A6E14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6E18:
    ctx->pc = 0x7F1A6E18u;
    // 7F1A6E18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6E1C:
    ctx->pc = 0x7F1A6E1Cu;
    // 7F1A6E1C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1A6E20:
    ctx->pc = 0x7F1A6E20u;
    // 7F1A6E20: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6E24:
    ctx->pc = 0x7F1A6E24u;
    // 7F1A6E24: lfs     f1, 6136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6E24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6E28:
    ctx->pc = 0x7F1A6E28u;
    // 7F1A6E28: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1A6E2C:
    ctx->pc = 0x7F1A6E2Cu;
    // 7F1A6E2C: addi    r8, r5, 12808
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(12808);

label_7F1A6E30:
    ctx->pc = 0x7F1A6E30u;
    // 7F1A6E30: lis     r9, 171
    ctx->gpr[9] = ((u32)(s32)(171) << 16);

label_7F1A6E34:
    ctx->pc = 0x7F1A6E34u;
    // 7F1A6E34: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6E38:
    ctx->pc = 0x7F1A6E38u;
    // 7F1A6E38: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6E3C:
    ctx->pc = 0x7F1A6E3Cu;
    // 7F1A6E3C: addi    r3, r9, 262
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(262);

label_7F1A6E40:
    ctx->pc = 0x7F1A6E40u;
    // 7F1A6E40: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6E44:
    ctx->pc = 0x7F1A6E44u;
    // 7F1A6E44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A6E48:
    ctx->pc = 0x7F1A6E48u;
    // 7F1A6E48: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6E4C:
    ctx->pc = 0x7F1A6E4Cu;
    // 7F1A6E4C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6E50:
    ctx->pc = 0x7F1A6E50u;
    // 7F1A6E50: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6E54u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6E54:
    ctx->pc = 0x7F1A6E54u;
    ctx->downcount -= 4;
    // 7F1A6E54: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1A6E58:
    ctx->pc = 0x7F1A6E58u;
    // 7F1A6E58: stw     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A6E5C:
    ctx->pc = 0x7F1A6E5Cu;
    // 7F1A6E5C: addi    r3, r4, -7184
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-7184);

label_7F1A6E60:
    ctx->pc = 0x7F1A6E60u;
    // 7F1A6E60: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A6E64u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A6E64:
    ctx->pc = 0x7F1A6E64u;
    ctx->downcount -= 16;
    // 7F1A6E64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6E68:
    ctx->pc = 0x7F1A6E68u;
    // 7F1A6E68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A6E6C:
    ctx->pc = 0x7F1A6E6Cu;
    // 7F1A6E6C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1A6E70:
    ctx->pc = 0x7F1A6E70u;
    // 7F1A6E70: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1A6E74:
    ctx->pc = 0x7F1A6E74u;
    // 7F1A6E74: lfs     f1, 6136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6E74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6E78:
    ctx->pc = 0x7F1A6E78u;
    // 7F1A6E78: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1A6E7C:
    ctx->pc = 0x7F1A6E7Cu;
    // 7F1A6E7C: addi    r8, r5, 12808
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(12808);

label_7F1A6E80:
    ctx->pc = 0x7F1A6E80u;
    // 7F1A6E80: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F1A6E84:
    ctx->pc = 0x7F1A6E84u;
    // 7F1A6E84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6E88:
    ctx->pc = 0x7F1A6E88u;
    // 7F1A6E88: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6E8C:
    ctx->pc = 0x7F1A6E8Cu;
    // 7F1A6E8C: addi    r3, r9, 264
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(264);

label_7F1A6E90:
    ctx->pc = 0x7F1A6E90u;
    // 7F1A6E90: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6E94:
    ctx->pc = 0x7F1A6E94u;
    // 7F1A6E94: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1A6E98:
    ctx->pc = 0x7F1A6E98u;
    // 7F1A6E98: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6E9C:
    ctx->pc = 0x7F1A6E9Cu;
    // 7F1A6E9C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6EA0:
    ctx->pc = 0x7F1A6EA0u;
    // 7F1A6EA0: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6EA4u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6EA4:
    ctx->pc = 0x7F1A6EA4u;
    ctx->downcount -= 1;
    // 7F1A6EA4: stw     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A6EA8:
    ctx->pc = 0x7F1A6EA8u;
    ctx->downcount -= 2;
    // 7F1A6EA8: rlwinm. r0, r31, 0, 30, 30
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

label_7F1A6EAC:
    ctx->pc = 0x7F1A6EACu;
    // 7F1A6EAC: bc    12, 2, 0x7F1A6F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6F08;
        }
    }

label_7F1A6EB0:
    ctx->pc = 0x7F1A6EB0u;
    ctx->downcount -= 3;
    // 7F1A6EB0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A6EB4:
    ctx->pc = 0x7F1A6EB4u;
    // 7F1A6EB4: addi    r3, r3, -7168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7168);

label_7F1A6EB8:
    ctx->pc = 0x7F1A6EB8u;
    // 7F1A6EB8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1A6EBCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1A6EBC:
    ctx->pc = 0x7F1A6EBCu;
    ctx->downcount -= 18;
    // 7F1A6EBC: lis     r5, 126
    ctx->gpr[5] = ((u32)(s32)(126) << 16);

label_7F1A6EC0:
    ctx->pc = 0x7F1A6EC0u;
    // 7F1A6EC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6EC4:
    ctx->pc = 0x7F1A6EC4u;
    // 7F1A6EC4: addi    r0, r5, 1581
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1581);

label_7F1A6EC8:
    ctx->pc = 0x7F1A6EC8u;
    // 7F1A6EC8: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1A6ECC:
    ctx->pc = 0x7F1A6ECCu;
    // 7F1A6ECC: addi    r5, r4, 6136
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6136);

label_7F1A6ED0:
    ctx->pc = 0x7F1A6ED0u;
    // 7F1A6ED0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1A6ED4:
    ctx->pc = 0x7F1A6ED4u;
    // 7F1A6ED4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A6ED4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A6ED8:
    ctx->pc = 0x7F1A6ED8u;
    // 7F1A6ED8: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1A6EDC:
    ctx->pc = 0x7F1A6EDCu;
    // 7F1A6EDC: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1A6EE0:
    ctx->pc = 0x7F1A6EE0u;
    // 7F1A6EE0: lis     r9, 133
    ctx->gpr[9] = ((u32)(s32)(133) << 16);

label_7F1A6EE4:
    ctx->pc = 0x7F1A6EE4u;
    // 7F1A6EE4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6EE8:
    ctx->pc = 0x7F1A6EE8u;
    // 7F1A6EE8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6EEC:
    ctx->pc = 0x7F1A6EECu;
    // 7F1A6EEC: addi    r3, r9, 28780
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(28780);

label_7F1A6EF0:
    ctx->pc = 0x7F1A6EF0u;
    // 7F1A6EF0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6EF4:
    ctx->pc = 0x7F1A6EF4u;
    // 7F1A6EF4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F1A6EF8:
    ctx->pc = 0x7F1A6EF8u;
    // 7F1A6EF8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A6EFC:
    ctx->pc = 0x7F1A6EFCu;
    // 7F1A6EFC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A6F00:
    ctx->pc = 0x7F1A6F00u;
    // 7F1A6F00: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1A6F04u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1A6F04:
    ctx->pc = 0x7F1A6F04u;
    ctx->downcount -= 1;
    // 7F1A6F04: stw     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A6F08:
    ctx->pc = 0x7F1A6F08u;
    ctx->downcount -= 17;
    // 7F1A6F08: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6F0C:
    ctx->pc = 0x7F1A6F0Cu;
    // 7F1A6F0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6F10:
    ctx->pc = 0x7F1A6F10u;
    // 7F1A6F10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6F14:
    ctx->pc = 0x7F1A6F14u;
    // 7F1A6F14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6F18:
    ctx->pc = 0x7F1A6F18u;
    // 7F1A6F18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6F1C:
    ctx->pc = 0x7F1A6F1Cu;
    // 7F1A6F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6F20:
    ctx->pc = 0x7F1A6F20u;
    ctx->downcount -= 22;
    // 7F1A6F20: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6F24:
    ctx->pc = 0x7F1A6F24u;
    // 7F1A6F24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6F28:
    ctx->pc = 0x7F1A6F28u;
    // 7F1A6F28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A6F2C:
    ctx->pc = 0x7F1A6F2Cu;
    // 7F1A6F2C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6F30:
    ctx->pc = 0x7F1A6F30u;
    // 7F1A6F30: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A6F34:
    ctx->pc = 0x7F1A6F34u;
    // 7F1A6F34: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A6F38:
    ctx->pc = 0x7F1A6F38u;
    // 7F1A6F38: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A6F3C:
    ctx->pc = 0x7F1A6F3Cu;
    // 7F1A6F3C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1A6F40:
    ctx->pc = 0x7F1A6F40u;
    // 7F1A6F40: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1A6F44:
    ctx->pc = 0x7F1A6F44u;
    // 7F1A6F44: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A6F48:
    ctx->pc = 0x7F1A6F48u;
    // 7F1A6F48: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_7F1A6F4C:
    ctx->pc = 0x7F1A6F4Cu;
    // 7F1A6F4C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A6F50u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A6F50:
    ctx->pc = 0x7F1A6F50u;
    ctx->downcount -= 2;
    // 7F1A6F50: or.   r31, r3, r3
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

label_7F1A6F54:
    ctx->pc = 0x7F1A6F54u;
    // 7F1A6F54: bc    12, 2, 0x7F1A6FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6FC0;
        }
    }

label_7F1A6F58:
    ctx->pc = 0x7F1A6F58u;
    ctx->downcount -= 5;
    // 7F1A6F58: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A6F5C:
    ctx->pc = 0x7F1A6F5Cu;
    // 7F1A6F5C: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A6F60:
    ctx->pc = 0x7F1A6F60u;
    // 7F1A6F60: addi    r4, r4, 28008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28008);

label_7F1A6F64:
    ctx->pc = 0x7F1A6F64u;
    // 7F1A6F64: addi    r5, r5, 28012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28012);

label_7F1A6F68:
    ctx->pc = 0x7F1A6F68u;
    // 7F1A6F68: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A6F6Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A6F6C:
    ctx->pc = 0x7F1A6F6Cu;
    ctx->downcount -= 15;
    // 7F1A6F6C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6F70:
    ctx->pc = 0x7F1A6F70u;
    // 7F1A6F70: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A6F74:
    ctx->pc = 0x7F1A6F74u;
    // 7F1A6F74: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A6F78:
    ctx->pc = 0x7F1A6F78u;
    // 7F1A6F78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6F7C:
    ctx->pc = 0x7F1A6F7Cu;
    // 7F1A6F7C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A6F80:
    ctx->pc = 0x7F1A6F80u;
    // 7F1A6F80: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A6F84:
    ctx->pc = 0x7F1A6F84u;
    // 7F1A6F84: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A6F88:
    ctx->pc = 0x7F1A6F88u;
    // 7F1A6F88: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1A6F8C:
    ctx->pc = 0x7F1A6F8Cu;
    // 7F1A6F8C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A6F90:
    ctx->pc = 0x7F1A6F90u;
    // 7F1A6F90: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A6F94:
    ctx->pc = 0x7F1A6F94u;
    // 7F1A6F94: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6F98:
    ctx->pc = 0x7F1A6F98u;
    // 7F1A6F98: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6F9C:
    ctx->pc = 0x7F1A6F9Cu;
    // 7F1A6F9C: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1A6FA0:
    ctx->pc = 0x7F1A6FA0u;
    // 7F1A6FA0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6FA4:
    ctx->pc = 0x7F1A6FA4u;
    // 7F1A6FA4: bl      0x7F1A6DDC
    {
            ctx->lr = 0x7F1A6FA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A6DDCu;
                return;
            }
            goto label_7F1A6DDC;
    }

label_7F1A6FA8:
    ctx->pc = 0x7F1A6FA8u;
    ctx->downcount -= 2;
    // 7F1A6FA8: cmpwi   r3, 0
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

label_7F1A6FAC:
    ctx->pc = 0x7F1A6FACu;
    // 7F1A6FAC: bc    4, 0, 0x7F1A6FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A6FC0;
        }
    }

label_7F1A6FB0:
    ctx->pc = 0x7F1A6FB0u;
    ctx->downcount -= 2;
    // 7F1A6FB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6FB4:
    ctx->pc = 0x7F1A6FB4u;
    // 7F1A6FB4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A6FB8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A6FB8:
    ctx->pc = 0x7F1A6FB8u;
    ctx->downcount -= 2;
    // 7F1A6FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A6FBC:
    ctx->pc = 0x7F1A6FBCu;
    // 7F1A6FBC: b       0x7F1A6FC4
    {
            goto label_7F1A6FC4;
    }

label_7F1A6FC0:
    ctx->pc = 0x7F1A6FC0u;
    ctx->downcount -= 1;
    // 7F1A6FC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A6FC4:
    ctx->pc = 0x7F1A6FC4u;
    ctx->downcount -= 16;
    // 7F1A6FC4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A6FC8:
    ctx->pc = 0x7F1A6FC8u;
    // 7F1A6FC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A6FCC:
    ctx->pc = 0x7F1A6FCCu;
    // 7F1A6FCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A6FD0:
    ctx->pc = 0x7F1A6FD0u;
    // 7F1A6FD0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A6FD4:
    ctx->pc = 0x7F1A6FD4u;
    // 7F1A6FD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A6FD8:
    ctx->pc = 0x7F1A6FD8u;
    ctx->downcount -= 6;
    // 7F1A6FD8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A6FDC:
    ctx->pc = 0x7F1A6FDCu;
    // 7F1A6FDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A6FE0:
    ctx->pc = 0x7F1A6FE0u;
    // 7F1A6FE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A6FE4:
    ctx->pc = 0x7F1A6FE4u;
    // 7F1A6FE4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A6FE8:
    ctx->pc = 0x7F1A6FE8u;
    // 7F1A6FE8: or.   r31, r3, r3
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

label_7F1A6FEC:
    ctx->pc = 0x7F1A6FECu;
    // 7F1A6FEC: bc    12, 2, 0x7F1A715C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A715C;
        }
    }

label_7F1A6FF0:
    ctx->pc = 0x7F1A6FF0u;
    ctx->downcount -= 12;
    // 7F1A6FF0: lbz     r5, 127(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(127);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F1A6FF4:
    ctx->pc = 0x7F1A6FF4u;
    // 7F1A6FF4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A6FF8:
    ctx->pc = 0x7F1A6FF8u;
    // 7F1A6FF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A6FFC:
    ctx->pc = 0x7F1A6FFCu;
    // 7F1A6FFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7000:
    ctx->pc = 0x7F1A7000u;
    // 7F1A7000: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A7004:
    ctx->pc = 0x7F1A7004u;
    // 7F1A7004: lfd     f2, 6160(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7004u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6160);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7008:
    ctx->pc = 0x7F1A7008u;
    // 7F1A7008: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A700C:
    ctx->pc = 0x7F1A700Cu;
    // 7F1A700C: lfd     f0, 6144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A700Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7010:
    ctx->pc = 0x7F1A7010u;
    // 7F1A7010: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7014:
    ctx->pc = 0x7F1A7014u;
    // 7F1A7014: fsub   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7014u)) return;
    ppc_fsub(ctx, 1, 1, 2);

label_7F1A7018:
    ctx->pc = 0x7F1A7018u;
    // 7F1A7018: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7018u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A701C:
    ctx->pc = 0x7F1A701Cu;
    // 7F1A701C: bc    4, 1, 0x7F1A715C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A715C;
        }
    }

label_7F1A7020:
    ctx->pc = 0x7F1A7020u;
    ctx->downcount -= 3;
    // 7F1A7020: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7024:
    ctx->pc = 0x7F1A7024u;
    // 7F1A7024: cmpwi   r0, 0
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

label_7F1A7028:
    ctx->pc = 0x7F1A7028u;
    // 7F1A7028: bc    12, 2, 0x7F1A710C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A710C;
        }
    }

label_7F1A702C:
    ctx->pc = 0x7F1A702Cu;
    ctx->downcount -= 4;
    // 7F1A702C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A7030:
    ctx->pc = 0x7F1A7030u;
    // 7F1A7030: lbz     r0, 4444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1A7034:
    ctx->pc = 0x7F1A7034u;
    // 7F1A7034: extsb. r0, r0
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

label_7F1A7038:
    ctx->pc = 0x7F1A7038u;
    // 7F1A7038: bc    12, 2, 0x7F1A70CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A70CC;
        }
    }

label_7F1A703C:
    ctx->pc = 0x7F1A703Cu;
    ctx->downcount -= 5;
    // 7F1A703C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A7040:
    ctx->pc = 0x7F1A7040u;
    // 7F1A7040: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A7044:
    ctx->pc = 0x7F1A7044u;
    // 7F1A7044: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A7048:
    ctx->pc = 0x7F1A7048u;
    // 7F1A7048: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A704C:
    ctx->pc = 0x7F1A704Cu;
    // 7F1A704C: bl      0x80043188
    {
            ctx->lr = 0x7F1A7050u;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F1A7050:
    ctx->pc = 0x7F1A7050u;
    ctx->downcount -= 5;
    // 7F1A7050: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1A7054:
    ctx->pc = 0x7F1A7054u;
    // 7F1A7054: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1A7058:
    ctx->pc = 0x7F1A7058u;
    // 7F1A7058: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1A705C:
    ctx->pc = 0x7F1A705Cu;
    // 7F1A705C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A7060:
    ctx->pc = 0x7F1A7060u;
    // 7F1A7060: bl      0x80043238
    {
            ctx->lr = 0x7F1A7064u;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1A7064:
    ctx->pc = 0x7F1A7064u;
    ctx->downcount -= 9;
    // 7F1A7064: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7068:
    ctx->pc = 0x7F1A7068u;
    // 7F1A7068: addi    r3, r31, 128
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(128);

label_7F1A706C:
    ctx->pc = 0x7F1A706Cu;
    // 7F1A706C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1A7070:
    ctx->pc = 0x7F1A7070u;
    // 7F1A7070: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1A7074:
    ctx->pc = 0x7F1A7074u;
    // 7F1A7074: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F1A7078:
    ctx->pc = 0x7F1A7078u;
    // 7F1A7078: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A707C:
    ctx->pc = 0x7F1A707Cu;
    // 7F1A707C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A7080:
    ctx->pc = 0x7F1A7080u;
    // 7F1A7080: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A7084:
    ctx->pc = 0x7F1A7084u;
    // 7F1A7084: bl      0x8004439C
    {
            ctx->lr = 0x7F1A7088u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A7088:
    ctx->pc = 0x7F1A7088u;
    ctx->downcount -= 12;
    // 7F1A7088: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A708C:
    ctx->pc = 0x7F1A708Cu;
    // 7F1A708C: addi    r3, r31, 128
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(128);

label_7F1A7090:
    ctx->pc = 0x7F1A7090u;
    // 7F1A7090: addi    r5, r4, 6152
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6152);

label_7F1A7094:
    ctx->pc = 0x7F1A7094u;
    // 7F1A7094: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A7098:
    ctx->pc = 0x7F1A7098u;
    // 7F1A7098: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7098u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A709C:
    ctx->pc = 0x7F1A709Cu;
    // 7F1A709C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A70A0:
    ctx->pc = 0x7F1A70A0u;
    // 7F1A70A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A70A4:
    ctx->pc = 0x7F1A70A4u;
    // 7F1A70A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A70A8:
    ctx->pc = 0x7F1A70A8u;
    // 7F1A70A8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A70A8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1A70AC:
    ctx->pc = 0x7F1A70ACu;
    // 7F1A70AC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A70B0:
    ctx->pc = 0x7F1A70B0u;
    // 7F1A70B0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A70B0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1A70B4:
    ctx->pc = 0x7F1A70B4u;
    // 7F1A70B4: bl      0x80044630
    {
            ctx->lr = 0x7F1A70B8u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F1A70B8:
    ctx->pc = 0x7F1A70B8u;
    ctx->downcount -= 3;
    // 7F1A70B8: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A70BC:
    ctx->pc = 0x7F1A70BCu;
    // 7F1A70BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A70C0:
    ctx->pc = 0x7F1A70C0u;
    // 7F1A70C0: bl      0x800438AC
    {
            ctx->lr = 0x7F1A70C4u;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F1A70C4:
    ctx->pc = 0x7F1A70C4u;
    ctx->downcount -= 1;
    // 7F1A70C4: bl      0x80042A40
    {
            ctx->lr = 0x7F1A70C8u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F1A70C8:
    ctx->pc = 0x7F1A70C8u;
    ctx->downcount -= 1;
    // 7F1A70C8: b       0x7F1A7104
    {
            goto label_7F1A7104;
    }

label_7F1A70CC:
    ctx->pc = 0x7F1A70CCu;
    ctx->downcount -= 4;
    // 7F1A70CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A70D0:
    ctx->pc = 0x7F1A70D0u;
    // 7F1A70D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A70D4:
    ctx->pc = 0x7F1A70D4u;
    // 7F1A70D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A70D8:
    ctx->pc = 0x7F1A70D8u;
    // 7F1A70D8: bl      0x8004C490
    {
            ctx->lr = 0x7F1A70DCu;
            ctx->pc = 0x8004C490u;
            return;
    }

label_7F1A70DC:
    ctx->pc = 0x7F1A70DCu;
    ctx->downcount -= 10;
    // 7F1A70DC: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A70E0:
    ctx->pc = 0x7F1A70E0u;
    // 7F1A70E0: addi    r3, r31, 128
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(128);

label_7F1A70E4:
    ctx->pc = 0x7F1A70E4u;
    // 7F1A70E4: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F1A70E8:
    ctx->pc = 0x7F1A70E8u;
    // 7F1A70E8: li      r6, 224
    ctx->gpr[6] = (u32)(s32)(224);

label_7F1A70EC:
    ctx->pc = 0x7F1A70ECu;
    // 7F1A70EC: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A70F0:
    ctx->pc = 0x7F1A70F0u;
    // 7F1A70F0: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F1A70F4:
    ctx->pc = 0x7F1A70F4u;
    // 7F1A70F4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1A70F8:
    ctx->pc = 0x7F1A70F8u;
    // 7F1A70F8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1A70FC:
    ctx->pc = 0x7F1A70FCu;
    // 7F1A70FC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1A7100:
    ctx->pc = 0x7F1A7100u;
    // 7F1A7100: bl      0x8004439C
    {
            ctx->lr = 0x7F1A7104u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1A7104:
    ctx->pc = 0x7F1A7104u;
    ctx->downcount -= 2;
    // 7F1A7104: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A7108:
    ctx->pc = 0x7F1A7108u;
    // 7F1A7108: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A710C:
    ctx->pc = 0x7F1A710Cu;
    ctx->downcount -= 4;
    // 7F1A710C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A7110:
    ctx->pc = 0x7F1A7110u;
    // 7F1A7110: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A7114:
    ctx->pc = 0x7F1A7114u;
    // 7F1A7114: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A7118:
    ctx->pc = 0x7F1A7118u;
    // 7F1A7118: bl      0x800462E4
    {
            ctx->lr = 0x7F1A711Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A711C:
    ctx->pc = 0x7F1A711Cu;
    ctx->downcount -= 1;
    // 7F1A711C: bl      0x7F2EAA28
    {
            ctx->lr = 0x7F1A7120u;
            ctx->pc = 0x7F2EAA28u;
            return;
    }

label_7F1A7120:
    ctx->pc = 0x7F1A7120u;
    ctx->downcount -= 1;
    // 7F1A7120: bl      0x8004D870
    {
            ctx->lr = 0x7F1A7124u;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F1A7124:
    ctx->pc = 0x7F1A7124u;
    ctx->downcount -= 9;
    // 7F1A7124: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7128:
    ctx->pc = 0x7F1A7128u;
    // 7F1A7128: addi    r3, r31, 128
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(128);

label_7F1A712C:
    ctx->pc = 0x7F1A712Cu;
    // 7F1A712C: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7130:
    ctx->pc = 0x7F1A7130u;
    // 7F1A7130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A7134:
    ctx->pc = 0x7F1A7134u;
    // 7F1A7134: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7138:
    ctx->pc = 0x7F1A7138u;
    // 7F1A7138: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A713C:
    ctx->pc = 0x7F1A713Cu;
    // 7F1A713C: li      r6, 8192
    ctx->gpr[6] = (u32)(s32)(8192);

label_7F1A7140:
    ctx->pc = 0x7F1A7140u;
    // 7F1A7140: li      r7, 7168
    ctx->gpr[7] = (u32)(s32)(7168);

label_7F1A7144:
    ctx->pc = 0x7F1A7144u;
    // 7F1A7144: bl      0x7F2EAB18
    {
            ctx->lr = 0x7F1A7148u;
            ctx->pc = 0x7F2EAB18u;
            return;
    }

label_7F1A7148:
    ctx->pc = 0x7F1A7148u;
    ctx->downcount -= 1;
    // 7F1A7148: bl      0x8004D990
    {
            ctx->lr = 0x7F1A714Cu;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F1A714C:
    ctx->pc = 0x7F1A714Cu;
    ctx->downcount -= 4;
    // 7F1A714C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A7150:
    ctx->pc = 0x7F1A7150u;
    // 7F1A7150: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1A7154:
    ctx->pc = 0x7F1A7154u;
    // 7F1A7154: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1A7158:
    ctx->pc = 0x7F1A7158u;
    // 7F1A7158: bl      0x800462E4
    {
            ctx->lr = 0x7F1A715Cu;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1A715C:
    ctx->pc = 0x7F1A715Cu;
    ctx->downcount -= 6;
    // 7F1A715C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7160:
    ctx->pc = 0x7F1A7160u;
    // 7F1A7160: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A7164:
    ctx->pc = 0x7F1A7164u;
    // 7F1A7164: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7168:
    ctx->pc = 0x7F1A7168u;
    // 7F1A7168: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A716C:
    ctx->pc = 0x7F1A716Cu;
    // 7F1A716C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7170:
    ctx->pc = 0x7F1A7170u;
    ctx->downcount -= 8;
    // 7F1A7170: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7174:
    ctx->pc = 0x7F1A7174u;
    // 7F1A7174: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7178:
    ctx->pc = 0x7F1A7178u;
    // 7F1A7178: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A717C:
    ctx->pc = 0x7F1A717Cu;
    // 7F1A717C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7180:
    ctx->pc = 0x7F1A7180u;
    // 7F1A7180: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7184:
    ctx->pc = 0x7F1A7184u;
    // 7F1A7184: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7188:
    ctx->pc = 0x7F1A7188u;
    // 7F1A7188: cmpwi   r0, 0
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

label_7F1A718C:
    ctx->pc = 0x7F1A718Cu;
    // 7F1A718C: bc    12, 2, 0x7F1A71A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A71A0;
        }
    }

label_7F1A7190:
    ctx->pc = 0x7F1A7190u;
    ctx->downcount -= 4;
    // 7F1A7190: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7194:
    ctx->pc = 0x7F1A7194u;
    // 7F1A7194: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7198:
    ctx->pc = 0x7F1A7198u;
    // 7F1A7198: rlwinm r0, r0, 0, 24, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFEFFu;
    }

label_7F1A719C:
    ctx->pc = 0x7F1A719Cu;
    // 7F1A719C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A71A0:
    ctx->pc = 0x7F1A71A0u;
    ctx->downcount -= 4;
    // 7F1A71A0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1A71A4:
    ctx->pc = 0x7F1A71A4u;
    // 7F1A71A4: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A71A8:
    ctx->pc = 0x7F1A71A8u;
    // 7F1A71A8: cmpwi   r0, 0
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

label_7F1A71AC:
    ctx->pc = 0x7F1A71ACu;
    // 7F1A71AC: bc    4, 2, 0x7F1A71E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A71E4;
        }
    }

label_7F1A71B0:
    ctx->pc = 0x7F1A71B0u;
    ctx->downcount -= 13;
    // 7F1A71B0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A71B4:
    ctx->pc = 0x7F1A71B4u;
    // 7F1A71B4: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A71B8:
    ctx->pc = 0x7F1A71B8u;
    // 7F1A71B8: addi    r3, r3, 5000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1A71BC:
    ctx->pc = 0x7F1A71BCu;
    // 7F1A71BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A71C0:
    ctx->pc = 0x7F1A71C0u;
    // 7F1A71C0: mulli   r3, r3, 5
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)5);

label_7F1A71C4:
    ctx->pc = 0x7F1A71C4u;
    // 7F1A71C4: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1A71C8:
    ctx->pc = 0x7F1A71C8u;
    // 7F1A71C8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A71CC:
    ctx->pc = 0x7F1A71CCu;
    // 7F1A71CC: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A71D0:
    ctx->pc = 0x7F1A71D0u;
    // 7F1A71D0: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A71D4:
    ctx->pc = 0x7F1A71D4u;
    // 7F1A71D4: cmpwi   r0, 0
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

label_7F1A71D8:
    ctx->pc = 0x7F1A71D8u;
    // 7F1A71D8: bc    4, 0, 0x7F1A71E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A71E4;
        }
    }

label_7F1A71DC:
    ctx->pc = 0x7F1A71DCu;
    ctx->downcount -= 2;
    // 7F1A71DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A71E0:
    ctx->pc = 0x7F1A71E0u;
    // 7F1A71E0: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A71E4:
    ctx->pc = 0x7F1A71E4u;
    ctx->downcount -= 3;
    // 7F1A71E4: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A71E8:
    ctx->pc = 0x7F1A71E8u;
    // 7F1A71E8: cmpwi   r0, 1
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

label_7F1A71EC:
    ctx->pc = 0x7F1A71ECu;
    // 7F1A71EC: bc    12, 2, 0x7F1A7220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7220;
        }
    }

label_7F1A71F0:
    ctx->pc = 0x7F1A71F0u;
    ctx->downcount -= 1;
    // 7F1A71F0: bc    4, 0, 0x7F1A7220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7220;
        }
    }

label_7F1A71F4:
    ctx->pc = 0x7F1A71F4u;
    ctx->downcount -= 2;
    // 7F1A71F4: cmpwi   r0, 0
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

label_7F1A71F8:
    ctx->pc = 0x7F1A71F8u;
    // 7F1A71F8: bc    4, 0, 0x7F1A7200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7200;
        }
    }

label_7F1A71FC:
    ctx->pc = 0x7F1A71FCu;
    ctx->downcount -= 1;
    // 7F1A71FC: b       0x7F1A7220
    {
            goto label_7F1A7220;
    }

label_7F1A7200:
    ctx->pc = 0x7F1A7200u;
    ctx->downcount -= 49;
    // 7F1A7200: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7204:
    ctx->pc = 0x7F1A7204u;
    // 7F1A7204: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7208:
    ctx->pc = 0x7F1A7208u;
    // 7F1A7208: mulli   r3, r3, 255
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)255);

label_7F1A720C:
    ctx->pc = 0x7F1A720Cu;
    // 7F1A720C: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A7210:
    ctx->pc = 0x7F1A7210u;
    // 7F1A7210: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1A7214:
    ctx->pc = 0x7F1A7214u;
    // 7F1A7214: oris    r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | (0x0080u << 16);

label_7F1A7218:
    ctx->pc = 0x7F1A7218u;
    // 7F1A7218: ori     r4, r4, 0x8080
    ctx->gpr[4] = ctx->gpr[4] | 0x8080u;

label_7F1A721C:
    ctx->pc = 0x7F1A721Cu;
    // 7F1A721C: b       0x7F1A7354
    {
            goto label_7F1A7354;
    }

label_7F1A7220:
    ctx->pc = 0x7F1A7220u;
    ctx->downcount -= 4;
    // 7F1A7220: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1A7224:
    ctx->pc = 0x7F1A7224u;
    // 7F1A7224: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7228:
    ctx->pc = 0x7F1A7228u;
    // 7F1A7228: cmpwi   r0, 0
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

label_7F1A722C:
    ctx->pc = 0x7F1A722Cu;
    // 7F1A722C: bc    4, 2, 0x7F1A7338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7338;
        }
    }

label_7F1A7230:
    ctx->pc = 0x7F1A7230u;
    ctx->downcount -= 30;
    // 7F1A7230: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A7234:
    ctx->pc = 0x7F1A7234u;
    // 7F1A7234: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7238:
    ctx->pc = 0x7F1A7238u;
    // 7F1A7238: addi    r4, r3, 5000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1A723C:
    ctx->pc = 0x7F1A723Cu;
    // 7F1A723C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7240:
    ctx->pc = 0x7F1A7240u;
    // 7F1A7240: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1A7244:
    ctx->pc = 0x7F1A7244u;
    // 7F1A7244: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1A7248:
    ctx->pc = 0x7F1A7248u;
    // 7F1A7248: addi    r0, r3, 5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1A724C:
    ctx->pc = 0x7F1A724Cu;
    // 7F1A724C: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7250:
    ctx->pc = 0x7F1A7250u;
    // 7F1A7250: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7254:
    ctx->pc = 0x7F1A7254u;
    // 7F1A7254: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7258:
    ctx->pc = 0x7F1A7258u;
    // 7F1A7258: mulli   r3, r3, 5
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)5);

label_7F1A725C:
    ctx->pc = 0x7F1A725Cu;
    // 7F1A725C: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1A7260:
    ctx->pc = 0x7F1A7260u;
    // 7F1A7260: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A7264:
    ctx->pc = 0x7F1A7264u;
    // 7F1A7264: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7268:
    ctx->pc = 0x7F1A7268u;
    // 7F1A7268: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A726C:
    ctx->pc = 0x7F1A726Cu;
    // 7F1A726C: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7270:
    ctx->pc = 0x7F1A7270u;
    // 7F1A7270: mulli   r3, r3, 5
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)5);

label_7F1A7274:
    ctx->pc = 0x7F1A7274u;
    // 7F1A7274: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1A7278:
    ctx->pc = 0x7F1A7278u;
    // 7F1A7278: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A727C:
    ctx->pc = 0x7F1A727Cu;
    // 7F1A727C: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7280:
    ctx->pc = 0x7F1A7280u;
    // 7F1A7280: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7284:
    ctx->pc = 0x7F1A7284u;
    // 7F1A7284: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7288:
    ctx->pc = 0x7F1A7288u;
    // 7F1A7288: cmpw    r0, r3
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

label_7F1A728C:
    ctx->pc = 0x7F1A728Cu;
    // 7F1A728C: bc    4, 1, 0x7F1A72C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A72C0;
        }
    }

label_7F1A7290:
    ctx->pc = 0x7F1A7290u;
    ctx->downcount -= 12;
    // 7F1A7290: subf   r3, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1A7294:
    ctx->pc = 0x7F1A7294u;
    // 7F1A7294: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A7298:
    ctx->pc = 0x7F1A7298u;
    // 7F1A7298: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A729C:
    ctx->pc = 0x7F1A729Cu;
    // 7F1A729C: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A72A0:
    ctx->pc = 0x7F1A72A0u;
    // 7F1A72A0: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A72A4:
    ctx->pc = 0x7F1A72A4u;
    // 7F1A72A4: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A72A8:
    ctx->pc = 0x7F1A72A8u;
    // 7F1A72A8: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A72AC:
    ctx->pc = 0x7F1A72ACu;
    // 7F1A72AC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A72B0:
    ctx->pc = 0x7F1A72B0u;
    // 7F1A72B0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A72B4:
    ctx->pc = 0x7F1A72B4u;
    // 7F1A72B4: ori     r3, r3, 0x0100
    ctx->gpr[3] = ctx->gpr[3] | 0x0100u;

label_7F1A72B8:
    ctx->pc = 0x7F1A72B8u;
    // 7F1A72B8: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A72BC:
    ctx->pc = 0x7F1A72BCu;
    // 7F1A72BC: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A72C0:
    ctx->pc = 0x7F1A72C0u;
    ctx->downcount -= 3;
    // 7F1A72C0: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A72C4:
    ctx->pc = 0x7F1A72C4u;
    // 7F1A72C4: cmpwi   r0, 0
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

label_7F1A72C8:
    ctx->pc = 0x7F1A72C8u;
    // 7F1A72C8: bc    4, 0, 0x7F1A72D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A72D4;
        }
    }

label_7F1A72CC:
    ctx->pc = 0x7F1A72CCu;
    ctx->downcount -= 2;
    // 7F1A72CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A72D0:
    ctx->pc = 0x7F1A72D0u;
    // 7F1A72D0: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A72D4:
    ctx->pc = 0x7F1A72D4u;
    ctx->downcount -= 3;
    // 7F1A72D4: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A72D8:
    ctx->pc = 0x7F1A72D8u;
    // 7F1A72D8: cmpwi   r3, 0
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

label_7F1A72DC:
    ctx->pc = 0x7F1A72DCu;
    // 7F1A72DC: bc    12, 2, 0x7F1A72F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A72F4;
        }
    }

label_7F1A72E0:
    ctx->pc = 0x7F1A72E0u;
    ctx->downcount -= 44;
    // 7F1A72E0: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A72E4:
    ctx->pc = 0x7F1A72E4u;
    // 7F1A72E4: rlwinm r0, r0, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFF80u;
    }

label_7F1A72E8:
    ctx->pc = 0x7F1A72E8u;
    // 7F1A72E8: divw   r0, r0, r3
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A72EC:
    ctx->pc = 0x7F1A72ECu;
    // 7F1A72EC: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A72F0:
    ctx->pc = 0x7F1A72F0u;
    // 7F1A72F0: b       0x7F1A72FC
    {
            goto label_7F1A72FC;
    }

label_7F1A72F4:
    ctx->pc = 0x7F1A72F4u;
    ctx->downcount -= 2;
    // 7F1A72F4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F1A72F8:
    ctx->pc = 0x7F1A72F8u;
    // 7F1A72F8: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A72FC:
    ctx->pc = 0x7F1A72FCu;
    ctx->downcount -= 3;
    // 7F1A72FC: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7300:
    ctx->pc = 0x7F1A7300u;
    // 7F1A7300: cmpwi   r0, 0
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

label_7F1A7304:
    ctx->pc = 0x7F1A7304u;
    // 7F1A7304: bc    4, 0, 0x7F1A7310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7310;
        }
    }

label_7F1A7308:
    ctx->pc = 0x7F1A7308u;
    ctx->downcount -= 2;
    // 7F1A7308: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A730C:
    ctx->pc = 0x7F1A730Cu;
    // 7F1A730C: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7310:
    ctx->pc = 0x7F1A7310u;
    ctx->downcount -= 3;
    // 7F1A7310: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7314:
    ctx->pc = 0x7F1A7314u;
    // 7F1A7314: cmpwi   r3, 0
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

label_7F1A7318:
    ctx->pc = 0x7F1A7318u;
    // 7F1A7318: bc    12, 2, 0x7F1A7330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7330;
        }
    }

label_7F1A731C:
    ctx->pc = 0x7F1A731Cu;
    ctx->downcount -= 44;
    // 7F1A731C: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7320:
    ctx->pc = 0x7F1A7320u;
    // 7F1A7320: rlwinm r0, r0, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFF80u;
    }

label_7F1A7324:
    ctx->pc = 0x7F1A7324u;
    // 7F1A7324: divw   r0, r0, r3
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A7328:
    ctx->pc = 0x7F1A7328u;
    // 7F1A7328: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A732C:
    ctx->pc = 0x7F1A732Cu;
    // 7F1A732C: b       0x7F1A7338
    {
            goto label_7F1A7338;
    }

label_7F1A7330:
    ctx->pc = 0x7F1A7330u;
    ctx->downcount -= 2;
    // 7F1A7330: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F1A7334:
    ctx->pc = 0x7F1A7334u;
    // 7F1A7334: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7338:
    ctx->pc = 0x7F1A7338u;
    ctx->downcount -= 7;
    // 7F1A7338: lwz     r4, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A733C:
    ctx->pc = 0x7F1A733Cu;
    // 7F1A733C: rlwinm r0, r4, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F1A7340:
    ctx->pc = 0x7F1A7340u;
    // 7F1A7340: rlwinm r3, r4, 16, 0, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1A7344:
    ctx->pc = 0x7F1A7344u;
    // 7F1A7344: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1A7348:
    ctx->pc = 0x7F1A7348u;
    // 7F1A7348: rlwinm r4, r4, 24, 0, 7
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0xFF000000u;
    }

label_7F1A734C:
    ctx->pc = 0x7F1A734Cu;
    // 7F1A734C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F1A7350:
    ctx->pc = 0x7F1A7350u;
    // 7F1A7350: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1A7354:
    ctx->pc = 0x7F1A7354u;
    ctx->downcount -= 2;
    // 7F1A7354: addi    r3, r31, 124
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(124);

label_7F1A7358:
    ctx->pc = 0x7F1A7358u;
    // 7F1A7358: bl      0x7F1A7384
    {
            ctx->lr = 0x7F1A735Cu;
            goto label_7F1A7384;
    }

label_7F1A735C:
    ctx->pc = 0x7F1A735Cu;
    ctx->downcount -= 3;
    // 7F1A735C: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7360:
    ctx->pc = 0x7F1A7360u;
    // 7F1A7360: cmpwi   r0, 0
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

label_7F1A7364:
    ctx->pc = 0x7F1A7364u;
    // 7F1A7364: bc    4, 2, 0x7F1A7370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7370;
        }
    }

label_7F1A7368:
    ctx->pc = 0x7F1A7368u;
    ctx->downcount -= 2;
    // 7F1A7368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A736C:
    ctx->pc = 0x7F1A736Cu;
    // 7F1A736C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A7370u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A7370:
    ctx->pc = 0x7F1A7370u;
    ctx->downcount -= 6;
    // 7F1A7370: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7374:
    ctx->pc = 0x7F1A7374u;
    // 7F1A7374: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A7378:
    ctx->pc = 0x7F1A7378u;
    // 7F1A7378: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A737C:
    ctx->pc = 0x7F1A737Cu;
    // 7F1A737C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A7380:
    ctx->pc = 0x7F1A7380u;
    // 7F1A7380: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7384:
    ctx->pc = 0x7F1A7384u;
    ctx->downcount -= 8;
    // 7F1A7384: stb     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1A7388:
    ctx->pc = 0x7F1A7388u;
    // 7F1A7388: rlwinm r6, r4, 24, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x000000FFu;
    }

label_7F1A738C:
    ctx->pc = 0x7F1A738Cu;
    // 7F1A738C: rlwinm r5, r4, 16, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x000000FFu;
    }

label_7F1A7390:
    ctx->pc = 0x7F1A7390u;
    // 7F1A7390: rlwinm r0, r4, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0x000000FFu;
    }

label_7F1A7394:
    ctx->pc = 0x7F1A7394u;
    // 7F1A7394: stb     r6, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F1A7398:
    ctx->pc = 0x7F1A7398u;
    // 7F1A7398: stb     r5, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1A739C:
    ctx->pc = 0x7F1A739Cu;
    // 7F1A739C: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A73A0:
    ctx->pc = 0x7F1A73A0u;
    // 7F1A73A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A73A4:
    ctx->pc = 0x7F1A73A4u;
    ctx->downcount -= 8;
    // 7F1A73A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A73A8:
    ctx->pc = 0x7F1A73A8u;
    // 7F1A73A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A73AC:
    ctx->pc = 0x7F1A73ACu;
    // 7F1A73AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A73B0:
    ctx->pc = 0x7F1A73B0u;
    // 7F1A73B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A73B4:
    ctx->pc = 0x7F1A73B4u;
    // 7F1A73B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A73B8:
    ctx->pc = 0x7F1A73B8u;
    // 7F1A73B8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A73BC:
    ctx->pc = 0x7F1A73BCu;
    // 7F1A73BC: cmplwi  r3, 0x0000
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

label_7F1A73C0:
    ctx->pc = 0x7F1A73C0u;
    // 7F1A73C0: bc    12, 2, 0x7F1A73D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A73D0;
        }
    }

label_7F1A73C4:
    ctx->pc = 0x7F1A73C4u;
    ctx->downcount -= 1;
    // 7F1A73C4: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1A73C8u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1A73C8:
    ctx->pc = 0x7F1A73C8u;
    ctx->downcount -= 2;
    // 7F1A73C8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A73CC:
    ctx->pc = 0x7F1A73CCu;
    // 7F1A73CC: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1A73D0u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1A73D0:
    ctx->pc = 0x7F1A73D0u;
    ctx->downcount -= 4;
    // 7F1A73D0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A73D4:
    ctx->pc = 0x7F1A73D4u;
    // 7F1A73D4: lbz     r0, 4444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1A73D8:
    ctx->pc = 0x7F1A73D8u;
    // 7F1A73D8: extsb. r0, r0
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

label_7F1A73DC:
    ctx->pc = 0x7F1A73DCu;
    // 7F1A73DC: bc    4, 2, 0x7F1A73F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A73F8;
        }
    }

label_7F1A73E0:
    ctx->pc = 0x7F1A73E0u;
    ctx->downcount -= 3;
    // 7F1A73E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A73E4:
    ctx->pc = 0x7F1A73E4u;
    // 7F1A73E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A73E8:
    ctx->pc = 0x7F1A73E8u;
    // 7F1A73E8: bl      0x8004B850
    {
            ctx->lr = 0x7F1A73ECu;
            ctx->pc = 0x8004B850u;
            return;
    }

label_7F1A73EC:
    ctx->pc = 0x7F1A73ECu;
    ctx->downcount -= 3;
    // 7F1A73EC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A73F0:
    ctx->pc = 0x7F1A73F0u;
    // 7F1A73F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A73F4:
    ctx->pc = 0x7F1A73F4u;
    // 7F1A73F4: stb     r0, 13936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13936);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A73F8:
    ctx->pc = 0x7F1A73F8u;
    ctx->downcount -= 6;
    // 7F1A73F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A73FC:
    ctx->pc = 0x7F1A73FCu;
    // 7F1A73FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A7400:
    ctx->pc = 0x7F1A7400u;
    // 7F1A7400: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7404:
    ctx->pc = 0x7F1A7404u;
    // 7F1A7404: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A7408:
    ctx->pc = 0x7F1A7408u;
    // 7F1A7408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A740C:
    ctx->pc = 0x7F1A740Cu;
    ctx->downcount -= 15;
    // 7F1A740C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7410:
    ctx->pc = 0x7F1A7410u;
    // 7F1A7410: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7414:
    ctx->pc = 0x7F1A7414u;
    // 7F1A7414: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1A7418:
    ctx->pc = 0x7F1A7418u;
    // 7F1A7418: li      r5, 127
    ctx->gpr[5] = (u32)(s32)(127);

label_7F1A741C:
    ctx->pc = 0x7F1A741Cu;
    // 7F1A741C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7420:
    ctx->pc = 0x7F1A7420u;
    // 7F1A7420: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A7424:
    ctx->pc = 0x7F1A7424u;
    // 7F1A7424: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7428:
    ctx->pc = 0x7F1A7428u;
    // 7F1A7428: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A742C:
    ctx->pc = 0x7F1A742Cu;
    // 7F1A742C: stw     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A7430:
    ctx->pc = 0x7F1A7430u;
    // 7F1A7430: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1A7434:
    ctx->pc = 0x7F1A7434u;
    // 7F1A7434: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A7438:
    ctx->pc = 0x7F1A7438u;
    // 7F1A7438: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1A743C:
    ctx->pc = 0x7F1A743Cu;
    // 7F1A743C: stw     r6, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7440:
    ctx->pc = 0x7F1A7440u;
    // 7F1A7440: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7444:
    ctx->pc = 0x7F1A7444u;
    // 7F1A7444: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1A7448u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1A7448:
    ctx->pc = 0x7F1A7448u;
    ctx->downcount -= 4;
    // 7F1A7448: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A744C:
    ctx->pc = 0x7F1A744Cu;
    // 7F1A744C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7450:
    ctx->pc = 0x7F1A7450u;
    // 7F1A7450: cmplwi  r3, 0x0000
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

label_7F1A7454:
    ctx->pc = 0x7F1A7454u;
    // 7F1A7454: bc    4, 2, 0x7F1A7460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7460;
        }
    }

label_7F1A7458:
    ctx->pc = 0x7F1A7458u;
    ctx->downcount -= 2;
    // 7F1A7458: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1A745C:
    ctx->pc = 0x7F1A745Cu;
    // 7F1A745C: b       0x7F1A74C8
    {
            goto label_7F1A74C8;
    }

label_7F1A7460:
    ctx->pc = 0x7F1A7460u;
    ctx->downcount -= 1;
    // 7F1A7460: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1A7464u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1A7464:
    ctx->pc = 0x7F1A7464u;
    ctx->downcount -= 5;
    // 7F1A7464: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A7468:
    ctx->pc = 0x7F1A7468u;
    // 7F1A7468: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A746C:
    ctx->pc = 0x7F1A746Cu;
    // 7F1A746C: addi    r4, r4, 28632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28632);

label_7F1A7470:
    ctx->pc = 0x7F1A7470u;
    // 7F1A7470: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A7474:
    ctx->pc = 0x7F1A7474u;
    // 7F1A7474: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1A7478u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1A7478:
    ctx->pc = 0x7F1A7478u;
    ctx->downcount -= 4;
    // 7F1A7478: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A747C:
    ctx->pc = 0x7F1A747Cu;
    // 7F1A747C: lbz     r0, 4444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1A7480:
    ctx->pc = 0x7F1A7480u;
    // 7F1A7480: extsb. r0, r0
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

label_7F1A7484:
    ctx->pc = 0x7F1A7484u;
    // 7F1A7484: bc    12, 2, 0x7F1A74A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A74A0;
        }
    }

label_7F1A7488:
    ctx->pc = 0x7F1A7488u;
    ctx->downcount -= 4;
    // 7F1A7488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A748C:
    ctx->pc = 0x7F1A748Cu;
    // 7F1A748C: lis     r4, 14
    ctx->gpr[4] = ((u32)(s32)(14) << 16);

label_7F1A7490:
    ctx->pc = 0x7F1A7490u;
    // 7F1A7490: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1A7494:
    ctx->pc = 0x7F1A7494u;
    // 7F1A7494: bl      0x7F3CA6A4
    {
            ctx->lr = 0x7F1A7498u;
            ctx->pc = 0x7F3CA6A4u;
            return;
    }

label_7F1A7498:
    ctx->pc = 0x7F1A7498u;
    ctx->downcount -= 2;
    // 7F1A7498: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A749C:
    ctx->pc = 0x7F1A749Cu;
    // 7F1A749C: b       0x7F1A74C4
    {
            goto label_7F1A74C4;
    }

label_7F1A74A0:
    ctx->pc = 0x7F1A74A0u;
    ctx->downcount -= 3;
    // 7F1A74A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A74A4:
    ctx->pc = 0x7F1A74A4u;
    // 7F1A74A4: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F1A74A8:
    ctx->pc = 0x7F1A74A8u;
    // 7F1A74A8: bl      0x8004B7D8
    {
            ctx->lr = 0x7F1A74ACu;
            ctx->pc = 0x8004B7D8u;
            return;
    }

label_7F1A74AC:
    ctx->pc = 0x7F1A74ACu;
    ctx->downcount -= 3;
    // 7F1A74AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A74B0:
    ctx->pc = 0x7F1A74B0u;
    // 7F1A74B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1A74B4:
    ctx->pc = 0x7F1A74B4u;
    // 7F1A74B4: bl      0x8004B850
    {
            ctx->lr = 0x7F1A74B8u;
            ctx->pc = 0x8004B850u;
            return;
    }

label_7F1A74B8:
    ctx->pc = 0x7F1A74B8u;
    ctx->downcount -= 3;
    // 7F1A74B8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A74BC:
    ctx->pc = 0x7F1A74BCu;
    // 7F1A74BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A74C0:
    ctx->pc = 0x7F1A74C0u;
    // 7F1A74C0: stb     r0, 13936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13936);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1A74C4:
    ctx->pc = 0x7F1A74C4u;
    ctx->downcount -= 1;
    // 7F1A74C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A74C8:
    ctx->pc = 0x7F1A74C8u;
    ctx->downcount -= 6;
    // 7F1A74C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A74CC:
    ctx->pc = 0x7F1A74CCu;
    // 7F1A74CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A74D0:
    ctx->pc = 0x7F1A74D0u;
    // 7F1A74D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A74D4:
    ctx->pc = 0x7F1A74D4u;
    // 7F1A74D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A74D8:
    ctx->pc = 0x7F1A74D8u;
    // 7F1A74D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A74DC:
    ctx->pc = 0x7F1A74DCu;
    ctx->downcount -= 20;
    // 7F1A74DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A74E0:
    ctx->pc = 0x7F1A74E0u;
    // 7F1A74E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A74E4:
    ctx->pc = 0x7F1A74E4u;
    // 7F1A74E4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A74E8:
    ctx->pc = 0x7F1A74E8u;
    // 7F1A74E8: li      r5, 160
    ctx->gpr[5] = (u32)(s32)(160);

label_7F1A74EC:
    ctx->pc = 0x7F1A74ECu;
    // 7F1A74EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A74F0:
    ctx->pc = 0x7F1A74F0u;
    // 7F1A74F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A74F4:
    ctx->pc = 0x7F1A74F4u;
    // 7F1A74F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A74F8:
    ctx->pc = 0x7F1A74F8u;
    // 7F1A74F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A74FC:
    ctx->pc = 0x7F1A74FCu;
    // 7F1A74FC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A7500:
    ctx->pc = 0x7F1A7500u;
    // 7F1A7500: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A7504u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A7504:
    ctx->pc = 0x7F1A7504u;
    ctx->downcount -= 2;
    // 7F1A7504: or.   r31, r3, r3
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

label_7F1A7508:
    ctx->pc = 0x7F1A7508u;
    // 7F1A7508: bc    12, 2, 0x7F1A7570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7570;
        }
    }

label_7F1A750C:
    ctx->pc = 0x7F1A750Cu;
    ctx->downcount -= 5;
    // 7F1A750C: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A7510:
    ctx->pc = 0x7F1A7510u;
    // 7F1A7510: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A7514:
    ctx->pc = 0x7F1A7514u;
    // 7F1A7514: addi    r4, r4, 29040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29040);

label_7F1A7518:
    ctx->pc = 0x7F1A7518u;
    // 7F1A7518: addi    r5, r5, 29604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29604);

label_7F1A751C:
    ctx->pc = 0x7F1A751Cu;
    // 7F1A751C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A7520u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A7520:
    ctx->pc = 0x7F1A7520u;
    ctx->downcount -= 14;
    // 7F1A7520: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7524:
    ctx->pc = 0x7F1A7524u;
    // 7F1A7524: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A7528:
    ctx->pc = 0x7F1A7528u;
    // 7F1A7528: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A752C:
    ctx->pc = 0x7F1A752Cu;
    // 7F1A752C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A7530:
    ctx->pc = 0x7F1A7530u;
    // 7F1A7530: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A7534:
    ctx->pc = 0x7F1A7534u;
    // 7F1A7534: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A7538:
    ctx->pc = 0x7F1A7538u;
    // 7F1A7538: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A753C:
    ctx->pc = 0x7F1A753Cu;
    // 7F1A753C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A7540:
    ctx->pc = 0x7F1A7540u;
    // 7F1A7540: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A7544:
    ctx->pc = 0x7F1A7544u;
    // 7F1A7544: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7548:
    ctx->pc = 0x7F1A7548u;
    // 7F1A7548: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A754C:
    ctx->pc = 0x7F1A754Cu;
    // 7F1A754C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7550:
    ctx->pc = 0x7F1A7550u;
    // 7F1A7550: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7554:
    ctx->pc = 0x7F1A7554u;
    // 7F1A7554: bl      0x7F1A740C
    {
            ctx->lr = 0x7F1A7558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A740Cu;
                return;
            }
            goto label_7F1A740C;
    }

label_7F1A7558:
    ctx->pc = 0x7F1A7558u;
    ctx->downcount -= 2;
    // 7F1A7558: cmpwi   r3, 0
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

label_7F1A755C:
    ctx->pc = 0x7F1A755Cu;
    // 7F1A755C: bc    4, 0, 0x7F1A7570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7570;
        }
    }

label_7F1A7560:
    ctx->pc = 0x7F1A7560u;
    ctx->downcount -= 2;
    // 7F1A7560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A7564:
    ctx->pc = 0x7F1A7564u;
    // 7F1A7564: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A7568u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A7568:
    ctx->pc = 0x7F1A7568u;
    ctx->downcount -= 2;
    // 7F1A7568: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A756C:
    ctx->pc = 0x7F1A756Cu;
    // 7F1A756C: b       0x7F1A7574
    {
            goto label_7F1A7574;
    }

label_7F1A7570:
    ctx->pc = 0x7F1A7570u;
    ctx->downcount -= 1;
    // 7F1A7570: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A7574:
    ctx->pc = 0x7F1A7574u;
    ctx->downcount -= 16;
    // 7F1A7574: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A7578:
    ctx->pc = 0x7F1A7578u;
    // 7F1A7578: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A757C:
    ctx->pc = 0x7F1A757Cu;
    // 7F1A757C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7580:
    ctx->pc = 0x7F1A7580u;
    // 7F1A7580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1A7584:
    ctx->pc = 0x7F1A7584u;
    // 7F1A7584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7588:
    ctx->pc = 0x7F1A7588u;
    ctx->downcount -= 20;
    // 7F1A7588: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A758C:
    ctx->pc = 0x7F1A758Cu;
    // 7F1A758C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7590:
    ctx->pc = 0x7F1A7590u;
    // 7F1A7590: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7594:
    ctx->pc = 0x7F1A7594u;
    // 7F1A7594: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A7598:
    ctx->pc = 0x7F1A7598u;
    // 7F1A7598: or.   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1A759C:
    ctx->pc = 0x7F1A759Cu;
    // 7F1A759C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A75A0:
    ctx->pc = 0x7F1A75A0u;
    // 7F1A75A0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1A75A4:
    ctx->pc = 0x7F1A75A4u;
    // 7F1A75A4: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1A75A8:
    ctx->pc = 0x7F1A75A8u;
    // 7F1A75A8: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1A75AC:
    ctx->pc = 0x7F1A75ACu;
    // 7F1A75AC: bc    4, 2, 0x7F1A75D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A75D0;
        }
    }

label_7F1A75B0:
    ctx->pc = 0x7F1A75B0u;
    ctx->downcount -= 2;
    // 7F1A75B0: cmpwi   r28, 0
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

label_7F1A75B4:
    ctx->pc = 0x7F1A75B4u;
    // 7F1A75B4: bc    4, 2, 0x7F1A75D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A75D0;
        }
    }

label_7F1A75B8:
    ctx->pc = 0x7F1A75B8u;
    ctx->downcount -= 2;
    // 7F1A75B8: cmpwi   r29, 0
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

label_7F1A75BC:
    ctx->pc = 0x7F1A75BCu;
    // 7F1A75BC: bc    4, 2, 0x7F1A75D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A75D0;
        }
    }

label_7F1A75C0:
    ctx->pc = 0x7F1A75C0u;
    ctx->downcount -= 42;
    // 7F1A75C0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F1A75C4:
    ctx->pc = 0x7F1A75C4u;
    // 7F1A75C4: divw   r4, r31, r0
    {
        s32 dividend = (s32)ctx->gpr[31];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A75C8:
    ctx->pc = 0x7F1A75C8u;
    // 7F1A75C8: bl      0x7F1A8BF0
    {
            ctx->lr = 0x7F1A75CCu;
            ctx->pc = 0x7F1A8BF0u;
            return;
    }

label_7F1A75CC:
    ctx->pc = 0x7F1A75CCu;
    ctx->downcount -= 1;
    // 7F1A75CC: b       0x7F1A7688
    {
            goto label_7F1A7688;
    }

label_7F1A75D0:
    ctx->pc = 0x7F1A75D0u;
    ctx->downcount -= 5;
    // 7F1A75D0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1A75D4:
    ctx->pc = 0x7F1A75D4u;
    // 7F1A75D4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1A75D8:
    ctx->pc = 0x7F1A75D8u;
    // 7F1A75D8: li      r5, 160
    ctx->gpr[5] = (u32)(s32)(160);

label_7F1A75DC:
    ctx->pc = 0x7F1A75DCu;
    // 7F1A75DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A75E0:
    ctx->pc = 0x7F1A75E0u;
    // 7F1A75E0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1A75E4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1A75E4:
    ctx->pc = 0x7F1A75E4u;
    ctx->downcount -= 2;
    // 7F1A75E4: or.   r30, r3, r3
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

label_7F1A75E8:
    ctx->pc = 0x7F1A75E8u;
    // 7F1A75E8: bc    12, 2, 0x7F1A7684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7684;
        }
    }

label_7F1A75EC:
    ctx->pc = 0x7F1A75ECu;
    ctx->downcount -= 5;
    // 7F1A75EC: lis     r4, 32538
    ctx->gpr[4] = ((u32)(s32)(32538) << 16);

label_7F1A75F0:
    ctx->pc = 0x7F1A75F0u;
    // 7F1A75F0: lis     r5, 32538
    ctx->gpr[5] = ((u32)(s32)(32538) << 16);

label_7F1A75F4:
    ctx->pc = 0x7F1A75F4u;
    // 7F1A75F4: addi    r4, r4, 29040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29040);

label_7F1A75F8:
    ctx->pc = 0x7F1A75F8u;
    // 7F1A75F8: addi    r5, r5, 29604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29604);

label_7F1A75FC:
    ctx->pc = 0x7F1A75FCu;
    // 7F1A75FC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1A7600u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1A7600:
    ctx->pc = 0x7F1A7600u;
    ctx->downcount -= 14;
    // 7F1A7600: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7604:
    ctx->pc = 0x7F1A7604u;
    // 7F1A7604: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1A7608:
    ctx->pc = 0x7F1A7608u;
    // 7F1A7608: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1A760C:
    ctx->pc = 0x7F1A760Cu;
    // 7F1A760C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A7610:
    ctx->pc = 0x7F1A7610u;
    // 7F1A7610: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1A7614:
    ctx->pc = 0x7F1A7614u;
    // 7F1A7614: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1A7618:
    ctx->pc = 0x7F1A7618u;
    // 7F1A7618: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A761C:
    ctx->pc = 0x7F1A761Cu;
    // 7F1A761C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1A7620:
    ctx->pc = 0x7F1A7620u;
    // 7F1A7620: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A7624:
    ctx->pc = 0x7F1A7624u;
    // 7F1A7624: stw     r6, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7628:
    ctx->pc = 0x7F1A7628u;
    // 7F1A7628: stw     r6, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A762C:
    ctx->pc = 0x7F1A762Cu;
    // 7F1A762C: stw     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7630:
    ctx->pc = 0x7F1A7630u;
    // 7F1A7630: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7634:
    ctx->pc = 0x7F1A7634u;
    // 7F1A7634: bl      0x7F1A740C
    {
            ctx->lr = 0x7F1A7638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A740Cu;
                return;
            }
            goto label_7F1A740C;
    }

label_7F1A7638:
    ctx->pc = 0x7F1A7638u;
    ctx->downcount -= 2;
    // 7F1A7638: cmpwi   r3, 0
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

label_7F1A763C:
    ctx->pc = 0x7F1A763Cu;
    // 7F1A763C: bc    4, 0, 0x7F1A7650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7650;
        }
    }

label_7F1A7640:
    ctx->pc = 0x7F1A7640u;
    ctx->downcount -= 2;
    // 7F1A7640: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A7644:
    ctx->pc = 0x7F1A7644u;
    // 7F1A7644: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1A7648u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1A7648:
    ctx->pc = 0x7F1A7648u;
    ctx->downcount -= 2;
    // 7F1A7648: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1A764C:
    ctx->pc = 0x7F1A764Cu;
    // 7F1A764C: b       0x7F1A7688
    {
            goto label_7F1A7688;
    }

label_7F1A7650:
    ctx->pc = 0x7F1A7650u;
    ctx->downcount -= 13;
    // 7F1A7650: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F1A7654:
    ctx->pc = 0x7F1A7654u;
    // 7F1A7654: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1A7658:
    ctx->pc = 0x7F1A7658u;
    // 7F1A7658: stw     r4, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A765C:
    ctx->pc = 0x7F1A765Cu;
    // 7F1A765C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A7660:
    ctx->pc = 0x7F1A7660u;
    // 7F1A7660: stw     r4, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A7664:
    ctx->pc = 0x7F1A7664u;
    // 7F1A7664: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7668:
    ctx->pc = 0x7F1A7668u;
    // 7F1A7668: stw     r28, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1A766C:
    ctx->pc = 0x7F1A766Cu;
    // 7F1A766C: stw     r27, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A7670:
    ctx->pc = 0x7F1A7670u;
    // 7F1A7670: stw     r31, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7674:
    ctx->pc = 0x7F1A7674u;
    // 7F1A7674: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7678:
    ctx->pc = 0x7F1A7678u;
    // 7F1A7678: stw     r28, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1A767C:
    ctx->pc = 0x7F1A767Cu;
    // 7F1A767C: stw     r27, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1A7680:
    ctx->pc = 0x7F1A7680u;
    // 7F1A7680: stw     r29, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1A7684:
    ctx->pc = 0x7F1A7684u;
    ctx->downcount -= 1;
    // 7F1A7684: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A7688:
    ctx->pc = 0x7F1A7688u;
    ctx->downcount -= 16;
    // 7F1A7688: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A768C:
    ctx->pc = 0x7F1A768Cu;
    // 7F1A768C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7690:
    ctx->pc = 0x7F1A7690u;
    // 7F1A7690: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7694:
    ctx->pc = 0x7F1A7694u;
    // 7F1A7694: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1A7698:
    ctx->pc = 0x7F1A7698u;
    // 7F1A7698: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A769C:
    ctx->pc = 0x7F1A769Cu;
    ctx->downcount -= 5;
    // 7F1A769C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1A76A0:
    ctx->pc = 0x7F1A76A0u;
    // 7F1A76A0: addi    r3, r3, 13936
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13936);

label_7F1A76A4:
    ctx->pc = 0x7F1A76A4u;
    // 7F1A76A4: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F1A76A8:
    ctx->pc = 0x7F1A76A8u;
    // 7F1A76A8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F1A76AC:
    ctx->pc = 0x7F1A76ACu;
    // 7F1A76AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A76B0:
    ctx->pc = 0x7F1A76B0u;
    ctx->downcount -= 18;
    // 7F1A76B0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A76B4:
    ctx->pc = 0x7F1A76B4u;
    // 7F1A76B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A76B8:
    ctx->pc = 0x7F1A76B8u;
    // 7F1A76B8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A76BC:
    ctx->pc = 0x7F1A76BCu;
    // 7F1A76BC: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A76C0:
    ctx->pc = 0x7F1A76C0u;
    // 7F1A76C0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A76C4:
    ctx->pc = 0x7F1A76C4u;
    // 7F1A76C4: lwz     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A76C8:
    ctx->pc = 0x7F1A76C8u;
    // 7F1A76C8: rlwinm. r0, r0, 0, 28, 28
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

label_7F1A76CC:
    ctx->pc = 0x7F1A76CCu;
    // 7F1A76CC: bc    4, 2, 0x7F1A7A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7A34;
        }
    }

label_7F1A76D0:
    ctx->pc = 0x7F1A76D0u;
    ctx->downcount -= 23;
    // 7F1A76D0: lwz     r5, 64(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A76D4:
    ctx->pc = 0x7F1A76D4u;
    // 7F1A76D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A76D8:
    ctx->pc = 0x7F1A76D8u;
    // 7F1A76D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A76DC:
    ctx->pc = 0x7F1A76DCu;
    // 7F1A76DC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1A76E0:
    ctx->pc = 0x7F1A76E0u;
    // 7F1A76E0: lha     r6, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A76E4:
    ctx->pc = 0x7F1A76E4u;
    // 7F1A76E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A76E8:
    ctx->pc = 0x7F1A76E8u;
    // 7F1A76E8: addi    r5, r4, 6176
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(6176);

label_7F1A76EC:
    ctx->pc = 0x7F1A76ECu;
    // 7F1A76EC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A76F0:
    ctx->pc = 0x7F1A76F0u;
    // 7F1A76F0: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A76F4:
    ctx->pc = 0x7F1A76F4u;
    // 7F1A76F4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A76F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A76F8:
    ctx->pc = 0x7F1A76F8u;
    // 7F1A76F8: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1A76FC:
    ctx->pc = 0x7F1A76FCu;
    // 7F1A76FC: li      r29, -180
    ctx->gpr[29] = (u32)(s32)(-180);

label_7F1A7700:
    ctx->pc = 0x7F1A7700u;
    // 7F1A7700: lfs     f0, 6188(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7700u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7704:
    ctx->pc = 0x7F1A7704u;
    // 7F1A7704: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A7708:
    ctx->pc = 0x7F1A7708u;
    // 7F1A7708: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7708u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A770C:
    ctx->pc = 0x7F1A770Cu;
    // 7F1A770C: lfs     f3, 6184(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A770Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A7710:
    ctx->pc = 0x7F1A7710u;
    // 7F1A7710: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7710u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A7714:
    ctx->pc = 0x7F1A7714u;
    // 7F1A7714: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7714u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1A7718:
    ctx->pc = 0x7F1A7718u;
    // 7F1A7718: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7718u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1A771C:
    ctx->pc = 0x7F1A771Cu;
    // 7F1A771C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A771Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7720:
    ctx->pc = 0x7F1A7720u;
    // 7F1A7720: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7720u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7724:
    ctx->pc = 0x7F1A7724u;
    // 7F1A7724: lwz     r30, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1A7728:
    ctx->pc = 0x7F1A7728u;
    // 7F1A7728: addi    r31, r30, -230
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(-230);

label_7F1A772C:
    ctx->downcount -= 2;
    // 7F1A772C: cmpwi   r31, 200
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7730:
    // 7F1A7730: bc    4, 0, 0x7F1A7784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7784;
        }
    }

label_7F1A7734:
    ctx->downcount -= 36;
    // 7F1A7734: subfic  r3, r31, 200
    {
        u64 res = (u64)(u32)(s32)(200) + (u64)(~ctx->gpr[31]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7738:
    // 7F1A7738: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A773C:
    // 7F1A773C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A7740:
    // 7F1A7740: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7744:
    ctx->pc = 0x7F1A7744u;
    // 7F1A7744: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7748:
    // 7F1A7748: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A774C:
    ctx->pc = 0x7F1A774Cu;
    // 7F1A774C: lfd     f2, 6176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A774Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6176);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7750:
    // 7F1A7750: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A7754:
    ctx->pc = 0x7F1A7754u;
    // 7F1A7754: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7758:
    ctx->pc = 0x7F1A7758u;
    // 7F1A7758: lfs     f0, 6196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7758u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A775C:
    ctx->pc = 0x7F1A775Cu;
    // 7F1A775C: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A775Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7760:
    ctx->pc = 0x7F1A7760u;
    // 7F1A7760: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7760u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A7764:
    ctx->pc = 0x7F1A7764u;
    // 7F1A7764: lfs     f2, 6192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7764u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7768:
    ctx->pc = 0x7F1A7768u;
    // 7F1A7768: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7768u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A776C:
    ctx->pc = 0x7F1A776Cu;
    // 7F1A776C: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A776Cu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A7770:
    ctx->pc = 0x7F1A7770u;
    // 7F1A7770: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7770u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7774:
    ctx->pc = 0x7F1A7774u;
    // 7F1A7774: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7778:
    ctx->pc = 0x7F1A7778u;
    // 7F1A7778: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A777C:
    // 7F1A777C: subfic  r26, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7780:
    // 7F1A7780: b       0x7F1A77D0
    {
            goto label_7F1A77D0;
    }

label_7F1A7784:
    ctx->downcount -= 35;
    // 7F1A7784: addi    r3, r31, -200
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(-200);

label_7F1A7788:
    // 7F1A7788: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A778C:
    // 7F1A778C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A7790:
    // 7F1A7790: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7794:
    ctx->pc = 0x7F1A7794u;
    // 7F1A7794: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7798:
    // 7F1A7798: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A779C:
    ctx->pc = 0x7F1A779Cu;
    // 7F1A779C: lfd     f2, 6176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A779Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6176);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A77A0:
    // 7F1A77A0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A77A4:
    ctx->pc = 0x7F1A77A4u;
    // 7F1A77A4: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A77A8:
    ctx->pc = 0x7F1A77A8u;
    // 7F1A77A8: lfs     f0, 6196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A77A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A77AC:
    ctx->pc = 0x7F1A77ACu;
    // 7F1A77AC: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A77ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A77B0:
    ctx->pc = 0x7F1A77B0u;
    // 7F1A77B0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A77B0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A77B4:
    ctx->pc = 0x7F1A77B4u;
    // 7F1A77B4: lfs     f2, 6192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A77B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A77B8:
    ctx->pc = 0x7F1A77B8u;
    // 7F1A77B8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A77B8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A77BC:
    ctx->pc = 0x7F1A77BCu;
    // 7F1A77BC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A77BCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A77C0:
    ctx->pc = 0x7F1A77C0u;
    // 7F1A77C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A77C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A77C4:
    ctx->pc = 0x7F1A77C4u;
    // 7F1A77C4: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A77C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A77C8:
    ctx->pc = 0x7F1A77C8u;
    // 7F1A77C8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A77CC:
    // 7F1A77CC: subfic  r26, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A77D0:
    ctx->downcount -= 2;
    // 7F1A77D0: cmpwi   r26, 0
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

label_7F1A77D4:
    // 7F1A77D4: bc    4, 1, 0x7F1A78D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A78D0;
        }
    }

label_7F1A77D8:
    ctx->downcount -= 2;
    // 7F1A77D8: cmpwi   r29, 0
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

label_7F1A77DC:
    // 7F1A77DC: bc    4, 2, 0x7F1A77FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A77FC;
        }
    }

label_7F1A77E0:
    ctx->downcount -= 6;
    // 7F1A77E0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A77E4:
    // 7F1A77E4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A77E8:
    // 7F1A77E8: addi    r4, r3, -7144
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7144);

label_7F1A77EC:
    // 7F1A77EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A77F0:
    // 7F1A77F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A77F4:
    // 7F1A77F4: bl      0x8001258C
    {
            ctx->lr = 0x7F1A77F8u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A77F8:
    ctx->downcount -= 1;
    // 7F1A77F8: b       0x7F1A788C
    {
            goto label_7F1A788C;
    }

label_7F1A77FC:
    ctx->downcount -= 2;
    // 7F1A77FC: cmpwi   r29, 100
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7800:
    // 7F1A7800: bc    4, 0, 0x7F1A7814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7814;
        }
    }

label_7F1A7804:
    ctx->downcount -= 2;
    // 7F1A7804: cmpwi   r29, 0
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

label_7F1A7808:
    // 7F1A7808: bc    4, 0, 0x7F1A7830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7830;
        }
    }

label_7F1A780C:
    ctx->downcount -= 2;
    // 7F1A780C: cmpwi   r29, -100
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7810:
    // 7F1A7810: bc    4, 1, 0x7F1A7830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7830;
        }
    }

label_7F1A7814:
    ctx->downcount -= 6;
    // 7F1A7814: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A7818:
    // 7F1A7818: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A781C:
    // 7F1A781C: addi    r4, r3, -7136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7136);

label_7F1A7820:
    // 7F1A7820: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7824:
    // 7F1A7824: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A7828:
    // 7F1A7828: bl      0x8001258C
    {
            ctx->lr = 0x7F1A782Cu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A782C:
    ctx->downcount -= 1;
    // 7F1A782C: b       0x7F1A788C
    {
            goto label_7F1A788C;
    }

label_7F1A7830:
    ctx->downcount -= 2;
    // 7F1A7830: cmpwi   r29, -100
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7834:
    // 7F1A7834: bc    12, 1, 0x7F1A7854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7854;
        }
    }

label_7F1A7838:
    ctx->downcount -= 6;
    // 7F1A7838: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A783C:
    // 7F1A783C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A7840:
    // 7F1A7840: addi    r4, r3, -7132
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7132);

label_7F1A7844:
    // 7F1A7844: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7848:
    // 7F1A7848: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A784C:
    // 7F1A784C: bl      0x8001258C
    {
            ctx->lr = 0x7F1A7850u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A7850:
    ctx->downcount -= 1;
    // 7F1A7850: b       0x7F1A788C
    {
            goto label_7F1A788C;
    }

label_7F1A7854:
    ctx->downcount -= 1;
    // 7F1A7854: bc    4, 0, 0x7F1A7874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7874;
        }
    }

label_7F1A7858:
    ctx->downcount -= 6;
    // 7F1A7858: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A785C:
    // 7F1A785C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A7860:
    // 7F1A7860: addi    r4, r3, -7136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7136);

label_7F1A7864:
    // 7F1A7864: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7868:
    // 7F1A7868: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A786C:
    // 7F1A786C: bl      0x8001258C
    {
            ctx->lr = 0x7F1A7870u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A7870:
    ctx->downcount -= 1;
    // 7F1A7870: b       0x7F1A788C
    {
            goto label_7F1A788C;
    }

label_7F1A7874:
    ctx->downcount -= 6;
    // 7F1A7874: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A7878:
    // 7F1A7878: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A787C:
    // 7F1A787C: addi    r4, r3, -7128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7128);

label_7F1A7880:
    // 7F1A7880: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7884:
    // 7F1A7884: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A7888:
    // 7F1A7888: bl      0x8001258C
    {
            ctx->lr = 0x7F1A788Cu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A788C:
    ctx->pc = 0x7F1A788Cu;
    ctx->downcount -= 6;
    // 7F1A788C: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7890:
    // 7F1A7890: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1A7894:
    // 7F1A7894: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7898:
    // 7F1A7898: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F1A789C:
    // 7F1A789C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A78A0:
    // 7F1A78A0: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1A78A4u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1A78A4:
    ctx->pc = 0x7F1A78A4u;
    ctx->downcount -= 7;
    // 7F1A78A4: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A78A8:
    // 7F1A78A8: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1A78AC:
    // 7F1A78AC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A78B0:
    // 7F1A78B0: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1A78B4:
    // 7F1A78B4: li      r6, 213
    ctx->gpr[6] = (u32)(s32)(213);

label_7F1A78B8:
    // 7F1A78B8: li      r7, 45
    ctx->gpr[7] = (u32)(s32)(45);

label_7F1A78BC:
    // 7F1A78BC: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1A78C0u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1A78C0:
    ctx->pc = 0x7F1A78C0u;
    ctx->downcount -= 4;
    // 7F1A78C0: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A78C4:
    // 7F1A78C4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A78C8:
    // 7F1A78C8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A78CC:
    // 7F1A78CC: bl      0x7F0BA3C8
    {
            ctx->lr = 0x7F1A78D0u;
            ctx->pc = 0x7F0BA3C8u;
            return;
    }

label_7F1A78D0:
    ctx->downcount -= 5;
    // 7F1A78D0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1A78D4:
    // 7F1A78D4: addi    r29, r29, 10
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(10);

label_7F1A78D8:
    // 7F1A78D8: cmpwi   r28, 36
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A78DC:
    // 7F1A78DC: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_7F1A78E0:
    // 7F1A78E0: bc    12, 0, 0x7F1A772C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A772Cu;
                return;
            }
            goto label_7F1A772C;
        }
    }

label_7F1A78E4:
    ctx->pc = 0x7F1A78E4u;
    ctx->downcount -= 14;
    // 7F1A78E4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A78E8:
    ctx->pc = 0x7F1A78E8u;
    // 7F1A78E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A78EC:
    ctx->pc = 0x7F1A78ECu;
    // 7F1A78EC: addi    r7, r5, 6212
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(6212);

label_7F1A78F0:
    ctx->pc = 0x7F1A78F0u;
    // 7F1A78F0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1A78F4:
    ctx->pc = 0x7F1A78F4u;
    // 7F1A78F4: addi    r5, r3, 6176
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6176);

label_7F1A78F8:
    ctx->pc = 0x7F1A78F8u;
    // 7F1A78F8: lfs     f4, 6208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A78F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1A78FC:
    ctx->pc = 0x7F1A78FCu;
    // 7F1A78FC: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1A7900:
    ctx->pc = 0x7F1A7900u;
    // 7F1A7900: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1A7904:
    ctx->pc = 0x7F1A7904u;
    // 7F1A7904: addi    r3, r30, -191
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(-191);

label_7F1A7908:
    ctx->pc = 0x7F1A7908u;
    // 7F1A7908: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F1A790C:
    ctx->pc = 0x7F1A790Cu;
    // 7F1A790C: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A790Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A7910:
    ctx->pc = 0x7F1A7910u;
    // 7F1A7910: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7910u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7914:
    ctx->pc = 0x7F1A7914u;
    // 7F1A7914: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1A7918:
    ctx->downcount -= 2;
    // 7F1A7918: cmpwi   r3, 170
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(170);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A791C:
    // 7F1A791C: bc    4, 0, 0x7F1A7970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7970;
        }
    }

label_7F1A7920:
    ctx->downcount -= 36;
    // 7F1A7920: subfic  r5, r3, 170
    {
        u64 res = (u64)(u32)(s32)(170) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7924:
    // 7F1A7924: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7928:
    // 7F1A7928: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1A792C:
    // 7F1A792C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1A7930:
    ctx->pc = 0x7F1A7930u;
    // 7F1A7930: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A7934:
    // 7F1A7934: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A7938:
    ctx->pc = 0x7F1A7938u;
    // 7F1A7938: lfd     f5, 6176(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7938u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6176);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A793C:
    // 7F1A793C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1A7940:
    ctx->pc = 0x7F1A7940u;
    // 7F1A7940: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7944:
    ctx->pc = 0x7F1A7944u;
    // 7F1A7944: lfs     f0, 6200(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7944u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7948:
    ctx->pc = 0x7F1A7948u;
    // 7F1A7948: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A794C:
    ctx->pc = 0x7F1A794Cu;
    // 7F1A794C: fsubs   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1A794Cu)) return;
    ppc_fsubs(ctx, 1, 1, 5);

label_7F1A7950:
    ctx->pc = 0x7F1A7950u;
    // 7F1A7950: lfs     f5, 6192(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7950u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1A7954:
    ctx->pc = 0x7F1A7954u;
    // 7F1A7954: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7954u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A7958:
    ctx->pc = 0x7F1A7958u;
    // 7F1A7958: fmuls   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7958u)) return;
    ppc_fmuls(ctx, 0, 5, 0);

label_7F1A795C:
    ctx->pc = 0x7F1A795Cu;
    // 7F1A795C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A795Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7960:
    ctx->pc = 0x7F1A7960u;
    // 7F1A7960: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7964:
    ctx->pc = 0x7F1A7964u;
    // 7F1A7964: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7968:
    // 7F1A7968: subfic  r5, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A796C:
    // 7F1A796C: b       0x7F1A79BC
    {
            goto label_7F1A79BC;
    }

label_7F1A7970:
    ctx->downcount -= 35;
    // 7F1A7970: addi    r5, r3, -170
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-170);

label_7F1A7974:
    // 7F1A7974: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7978:
    // 7F1A7978: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1A797C:
    // 7F1A797C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1A7980:
    ctx->pc = 0x7F1A7980u;
    // 7F1A7980: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1A7984:
    // 7F1A7984: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A7988:
    ctx->pc = 0x7F1A7988u;
    // 7F1A7988: lfd     f5, 6176(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7988u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6176);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A798C:
    // 7F1A798C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1A7990:
    ctx->pc = 0x7F1A7990u;
    // 7F1A7990: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7994:
    ctx->pc = 0x7F1A7994u;
    // 7F1A7994: lfs     f0, 6204(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7994u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7998:
    ctx->pc = 0x7F1A7998u;
    // 7F1A7998: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A799C:
    ctx->pc = 0x7F1A799Cu;
    // 7F1A799C: fsubs   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1A799Cu)) return;
    ppc_fsubs(ctx, 1, 1, 5);

label_7F1A79A0:
    ctx->pc = 0x7F1A79A0u;
    // 7F1A79A0: lfs     f5, 6192(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1A79A0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1A79A4:
    ctx->pc = 0x7F1A79A4u;
    // 7F1A79A4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A79A4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A79A8:
    ctx->pc = 0x7F1A79A8u;
    // 7F1A79A8: fmuls   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A79A8u)) return;
    ppc_fmuls(ctx, 0, 5, 0);

label_7F1A79AC:
    ctx->pc = 0x7F1A79ACu;
    // 7F1A79AC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A79ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A79B0:
    ctx->pc = 0x7F1A79B0u;
    // 7F1A79B0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A79B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A79B4:
    ctx->pc = 0x7F1A79B4u;
    // 7F1A79B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A79B8:
    // 7F1A79B8: subfic  r5, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A79BC:
    ctx->downcount -= 2;
    // 7F1A79BC: cmpwi   r5, 0
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

label_7F1A79C0:
    // 7F1A79C0: bc    4, 0, 0x7F1A79C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A79C8;
        }
    }

label_7F1A79C4:
    ctx->downcount -= 1;
    // 7F1A79C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1A79C8:
    ctx->downcount -= 27;
    // 7F1A79C8: addi    r8, r4, 96
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(96);

label_7F1A79CC:
    // 7F1A79CC: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A79D0:
    // 7F1A79D0: srawi r7, r5, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[7] = value;
        } else if (sh > 31) {
            ctx->gpr[7] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[7] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F1A79D4:
    ctx->pc = 0x7F1A79D4u;
    // 7F1A79D4: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A79D8:
    // 7F1A79D8: addze  r7, r7
    {
        u32 a = ctx->gpr[7];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1A79DC:
    ctx->pc = 0x7F1A79DCu;
    // 7F1A79DC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A79E0:
    // 7F1A79E0: addi    r3, r3, 10
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10);

label_7F1A79E4:
    // 7F1A79E4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1A79E8:
    ctx->pc = 0x7F1A79E8u;
    // 7F1A79E8: stb     r7, 55(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(55);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F1A79EC:
    ctx->pc = 0x7F1A79ECu;
    // 7F1A79EC: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A79F0:
    ctx->pc = 0x7F1A79F0u;
    // 7F1A79F0: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A79F4:
    ctx->pc = 0x7F1A79F4u;
    // 7F1A79F4: stb     r7, 59(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(59);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F1A79F8:
    ctx->pc = 0x7F1A79F8u;
    // 7F1A79F8: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A79F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A79FC:
    ctx->pc = 0x7F1A79FCu;
    // 7F1A79FC: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7A00:
    ctx->pc = 0x7F1A7A00u;
    // 7F1A7A00: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7A04:
    ctx->pc = 0x7F1A7A04u;
    // 7F1A7A04: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A04u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1A7A08:
    ctx->pc = 0x7F1A7A08u;
    // 7F1A7A08: stfs     f4, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A08u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F1A7A0C:
    ctx->pc = 0x7F1A7A0Cu;
    // 7F1A7A0C: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7A10:
    ctx->pc = 0x7F1A7A10u;
    // 7F1A7A10: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1A7A14:
    ctx->pc = 0x7F1A7A14u;
    // 7F1A7A14: stfs     f3, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A14u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1A7A18:
    ctx->pc = 0x7F1A7A18u;
    // 7F1A7A18: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7A1C:
    ctx->pc = 0x7F1A7A1Cu;
    // 7F1A7A1C: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7A20:
    ctx->pc = 0x7F1A7A20u;
    // 7F1A7A20: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A20u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1A7A24:
    ctx->pc = 0x7F1A7A24u;
    // 7F1A7A24: stfs     f1, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7A28:
    ctx->pc = 0x7F1A7A28u;
    // 7F1A7A28: lwzx    r5, r27, r8
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[8];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7A2C:
    ctx->pc = 0x7F1A7A2Cu;
    // 7F1A7A2C: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7A2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7A30:
    // 7F1A7A30: bc    16, 0, 0x7F1A7918
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A7918u;
                return;
            }
            goto label_7F1A7918;
        }
    }

label_7F1A7A34:
    ctx->pc = 0x7F1A7A34u;
    ctx->downcount -= 16;
    // 7F1A7A34: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A7A38:
    ctx->pc = 0x7F1A7A38u;
    // 7F1A7A38: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7A3C:
    ctx->pc = 0x7F1A7A3Cu;
    // 7F1A7A3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7A40:
    ctx->pc = 0x7F1A7A40u;
    // 7F1A7A40: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1A7A44:
    ctx->pc = 0x7F1A7A44u;
    // 7F1A7A44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7A48:
    ctx->pc = 0x7F1A7A48u;
    ctx->downcount -= 18;
    // 7F1A7A48: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7A4C:
    ctx->pc = 0x7F1A7A4Cu;
    // 7F1A7A4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7A50:
    ctx->pc = 0x7F1A7A50u;
    // 7F1A7A50: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7A54:
    ctx->pc = 0x7F1A7A54u;
    // 7F1A7A54: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1A7A58:
    ctx->pc = 0x7F1A7A58u;
    // 7F1A7A58: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7A5C:
    ctx->pc = 0x7F1A7A5Cu;
    // 7F1A7A5C: lwz     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7A60:
    ctx->pc = 0x7F1A7A60u;
    // 7F1A7A60: rlwinm. r0, r0, 0, 28, 28
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

label_7F1A7A64:
    ctx->pc = 0x7F1A7A64u;
    // 7F1A7A64: bc    4, 2, 0x7F1A7C84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7C84;
        }
    }

label_7F1A7A68:
    ctx->pc = 0x7F1A7A68u;
    ctx->downcount -= 3;
    // 7F1A7A68: lwz     r0, 76(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7A6C:
    ctx->pc = 0x7F1A7A6Cu;
    // 7F1A7A6C: cmpwi   r0, 0
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

label_7F1A7A70:
    ctx->pc = 0x7F1A7A70u;
    // 7F1A7A70: bc    12, 1, 0x7F1A7AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7AAC;
        }
    }

label_7F1A7A74:
    ctx->pc = 0x7F1A7A74u;
    ctx->downcount -= 1;
    // 7F1A7A74: bl      0x800147F8
    {
            ctx->lr = 0x7F1A7A78u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1A7A78:
    ctx->pc = 0x7F1A7A78u;
    ctx->downcount -= 50;
    // 7F1A7A78: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F1A7A7C:
    ctx->pc = 0x7F1A7A7Cu;
    // 7F1A7A7C: divw   r0, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1A7A80:
    ctx->pc = 0x7F1A7A80u;
    // 7F1A7A80: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F1A7A84:
    ctx->pc = 0x7F1A7A84u;
    // 7F1A7A84: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1A7A88:
    ctx->pc = 0x7F1A7A88u;
    // 7F1A7A88: addi    r0, r3, 5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5);

label_7F1A7A8C:
    ctx->pc = 0x7F1A7A8Cu;
    // 7F1A7A8C: stw     r0, 76(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7A90:
    ctx->pc = 0x7F1A7A90u;
    // 7F1A7A90: bl      0x800147F8
    {
            ctx->lr = 0x7F1A7A94u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F1A7A94:
    ctx->pc = 0x7F1A7A94u;
    ctx->downcount -= 6;
    // 7F1A7A94: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F1A7A98:
    ctx->pc = 0x7F1A7A98u;
    // 7F1A7A98: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F1A7A9C:
    ctx->pc = 0x7F1A7A9Cu;
    // 7F1A7A9C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F1A7AA0:
    ctx->pc = 0x7F1A7AA0u;
    // 7F1A7AA0: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1A7AA4:
    ctx->pc = 0x7F1A7AA4u;
    // 7F1A7AA4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1A7AA8:
    ctx->pc = 0x7F1A7AA8u;
    // 7F1A7AA8: stw     r0, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7AAC:
    ctx->pc = 0x7F1A7AACu;
    ctx->downcount -= 10;
    // 7F1A7AAC: lwz     r3, 76(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7AB0:
    ctx->pc = 0x7F1A7AB0u;
    // 7F1A7AB0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1A7AB4:
    ctx->pc = 0x7F1A7AB4u;
    // 7F1A7AB4: stw     r0, 76(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7AB8:
    ctx->pc = 0x7F1A7AB8u;
    // 7F1A7AB8: lwz     r3, 80(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7ABC:
    ctx->pc = 0x7F1A7ABCu;
    // 7F1A7ABC: lwz     r0, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7AC0:
    ctx->pc = 0x7F1A7AC0u;
    // 7F1A7AC0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A7AC4:
    ctx->pc = 0x7F1A7AC4u;
    // 7F1A7AC4: stw     r0, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7AC8:
    ctx->pc = 0x7F1A7AC8u;
    // 7F1A7AC8: lwz     r0, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7ACC:
    ctx->pc = 0x7F1A7ACCu;
    // 7F1A7ACC: cmpwi   r0, 0
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

label_7F1A7AD0:
    ctx->pc = 0x7F1A7AD0u;
    // 7F1A7AD0: bc    4, 0, 0x7F1A7B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7B00;
        }
    }

label_7F1A7AD4:
    ctx->pc = 0x7F1A7AD4u;
    ctx->downcount -= 9;
    // 7F1A7AD4: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F1A7AD8:
    ctx->pc = 0x7F1A7AD8u;
    // 7F1A7AD8: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F1A7ADC:
    ctx->pc = 0x7F1A7ADCu;
    // 7F1A7ADC: stw     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7AE0:
    ctx->pc = 0x7F1A7AE0u;
    // 7F1A7AE0: lwz     r3, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7AE4:
    ctx->pc = 0x7F1A7AE4u;
    // 7F1A7AE4: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_7F1A7AE8:
    ctx->pc = 0x7F1A7AE8u;
    // 7F1A7AE8: stw     r3, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7AEC:
    ctx->pc = 0x7F1A7AECu;
    // 7F1A7AEC: lwz     r3, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7AF0:
    ctx->pc = 0x7F1A7AF0u;
    // 7F1A7AF0: cmpw    r3, r0
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

label_7F1A7AF4:
    ctx->pc = 0x7F1A7AF4u;
    // 7F1A7AF4: bc    4, 1, 0x7F1A7B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7B00;
        }
    }

label_7F1A7AF8:
    ctx->pc = 0x7F1A7AF8u;
    ctx->downcount -= 2;
    // 7F1A7AF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A7AFC:
    ctx->pc = 0x7F1A7AFCu;
    // 7F1A7AFC: stw     r0, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7B00:
    ctx->pc = 0x7F1A7B00u;
    ctx->downcount -= 10;
    // 7F1A7B00: lwz     r0, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7B04:
    ctx->pc = 0x7F1A7B04u;
    // 7F1A7B04: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1A7B08:
    ctx->pc = 0x7F1A7B08u;
    // 7F1A7B08: lwz     r4, 384(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7B0C:
    ctx->pc = 0x7F1A7B0Cu;
    // 7F1A7B0C: lis     r26, 8
    ctx->gpr[26] = ((u32)(s32)(8) << 16);

label_7F1A7B10:
    ctx->pc = 0x7F1A7B10u;
    // 7F1A7B10: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1A7B14:
    ctx->pc = 0x7F1A7B14u;
    // 7F1A7B14: lwz     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7B18:
    ctx->pc = 0x7F1A7B18u;
    // 7F1A7B18: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1A7B1C:
    ctx->pc = 0x7F1A7B1Cu;
    // 7F1A7B1C: addi    r0, r4, 31
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31);

label_7F1A7B20:
    ctx->pc = 0x7F1A7B20u;
    // 7F1A7B20: addi    r30, r3, 70
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(70);

label_7F1A7B24:
    ctx->pc = 0x7F1A7B24u;
    // 7F1A7B24: rlwinm r31, r0, 0, 0, 26
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_7F1A7B28:
    ctx->downcount -= 2;
    // 7F1A7B28: cmpwi   r30, 200
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7B2C:
    // 7F1A7B2C: bc    4, 0, 0x7F1A7B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7B80;
        }
    }

label_7F1A7B30:
    ctx->downcount -= 36;
    // 7F1A7B30: subfic  r3, r30, 200
    {
        u64 res = (u64)(u32)(s32)(200) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7B34:
    // 7F1A7B34: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7B38:
    // 7F1A7B38: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A7B3C:
    // 7F1A7B3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7B40:
    ctx->pc = 0x7F1A7B40u;
    // 7F1A7B40: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7B44:
    // 7F1A7B44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7B48:
    ctx->pc = 0x7F1A7B48u;
    // 7F1A7B48: lfd     f2, 6176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6176);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7B4C:
    // 7F1A7B4C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A7B50:
    ctx->pc = 0x7F1A7B50u;
    // 7F1A7B50: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7B54:
    ctx->pc = 0x7F1A7B54u;
    // 7F1A7B54: lfs     f0, 6196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7B58:
    ctx->pc = 0x7F1A7B58u;
    // 7F1A7B58: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7B5C:
    ctx->pc = 0x7F1A7B5Cu;
    // 7F1A7B5C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B5Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A7B60:
    ctx->pc = 0x7F1A7B60u;
    // 7F1A7B60: lfs     f2, 6192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7B64:
    ctx->pc = 0x7F1A7B64u;
    // 7F1A7B64: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B64u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A7B68:
    ctx->pc = 0x7F1A7B68u;
    // 7F1A7B68: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B68u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A7B6C:
    ctx->pc = 0x7F1A7B6Cu;
    // 7F1A7B6C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7B70:
    ctx->pc = 0x7F1A7B70u;
    // 7F1A7B70: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7B74:
    ctx->pc = 0x7F1A7B74u;
    // 7F1A7B74: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7B78:
    // 7F1A7B78: subfic  r29, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7B7C:
    // 7F1A7B7C: b       0x7F1A7BCC
    {
            goto label_7F1A7BCC;
    }

label_7F1A7B80:
    ctx->downcount -= 35;
    // 7F1A7B80: addi    r3, r30, -200
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(-200);

label_7F1A7B84:
    // 7F1A7B84: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7B88:
    // 7F1A7B88: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1A7B8C:
    // 7F1A7B8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7B90:
    ctx->pc = 0x7F1A7B90u;
    // 7F1A7B90: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1A7B94:
    // 7F1A7B94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7B98:
    ctx->pc = 0x7F1A7B98u;
    // 7F1A7B98: lfd     f2, 6176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7B98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6176);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7B9C:
    // 7F1A7B9C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1A7BA0:
    ctx->pc = 0x7F1A7BA0u;
    // 7F1A7BA0: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7BA4:
    ctx->pc = 0x7F1A7BA4u;
    // 7F1A7BA4: lfs     f0, 6196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7BA8:
    ctx->pc = 0x7F1A7BA8u;
    // 7F1A7BA8: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7BAC:
    ctx->pc = 0x7F1A7BACu;
    // 7F1A7BAC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BACu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1A7BB0:
    ctx->pc = 0x7F1A7BB0u;
    // 7F1A7BB0: lfs     f2, 6192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BB0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7BB4:
    ctx->pc = 0x7F1A7BB4u;
    // 7F1A7BB4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BB4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1A7BB8:
    ctx->pc = 0x7F1A7BB8u;
    // 7F1A7BB8: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BB8u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1A7BBC:
    ctx->pc = 0x7F1A7BBCu;
    // 7F1A7BBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7BC0:
    ctx->pc = 0x7F1A7BC0u;
    // 7F1A7BC0: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7BC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7BC4:
    ctx->pc = 0x7F1A7BC4u;
    // 7F1A7BC4: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7BC8:
    // 7F1A7BC8: subfic  r29, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1A7BCC:
    ctx->pc = 0x7F1A7BCCu;
    ctx->downcount -= 13;
    // 7F1A7BCC: lwz     r3, 396(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(396);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7BD0:
    ctx->pc = 0x7F1A7BD0u;
    // 7F1A7BD0: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7BD4:
    ctx->pc = 0x7F1A7BD4u;
    // 7F1A7BD4: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7BD8:
    // 7F1A7BD8: addi    r0, r3, 2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2);

label_7F1A7BDC:
    // 7F1A7BDC: rlwinm r5, r5, 0, 21, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000007FFu;
    }

label_7F1A7BE0:
    // 7F1A7BE0: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F1A7BE4:
    ctx->pc = 0x7F1A7BE4u;
    // 7F1A7BE4: stw     r0, 396(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7BE8:
    // 7F1A7BE8: rlwinm r6, r4, 0, 21, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000007FFu;
    }

label_7F1A7BEC:
    ctx->pc = 0x7F1A7BECu;
    // 7F1A7BEC: lwz     r3, 396(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(396);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7BF0:
    ctx->pc = 0x7F1A7BF0u;
    // 7F1A7BF0: lwz     r0, 392(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7BF4:
    // 7F1A7BF4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1A7BF8:
    // 7F1A7BF8: cmpw    r0, r26
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7BFC:
    // 7F1A7BFC: bc    4, 1, 0x7F1A7C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7C14;
        }
    }

label_7F1A7C00:
    ctx->downcount -= 5;
    // 7F1A7C00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1A7C04:
    ctx->pc = 0x7F1A7C04u;
    // 7F1A7C04: stw     r0, 396(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7C08:
    ctx->pc = 0x7F1A7C08u;
    // 7F1A7C08: lwz     r3, 384(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7C0C:
    // 7F1A7C0C: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_7F1A7C10:
    // 7F1A7C10: rlwinm r31, r0, 0, 0, 26
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_7F1A7C14:
    ctx->downcount -= 2;
    // 7F1A7C14: cmpwi   r29, 0
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

label_7F1A7C18:
    // 7F1A7C18: bc    4, 1, 0x7F1A7C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7C74;
        }
    }

label_7F1A7C1C:
    ctx->downcount -= 5;
    // 7F1A7C1C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A7C20:
    // 7F1A7C20: addi    r4, r3, -7120
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7120);

label_7F1A7C24:
    // 7F1A7C24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7C28:
    // 7F1A7C28: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A7C2C:
    // 7F1A7C2C: bl      0x8001258C
    {
            ctx->lr = 0x7F1A7C30u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A7C30:
    ctx->pc = 0x7F1A7C30u;
    ctx->downcount -= 6;
    // 7F1A7C30: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7C34:
    // 7F1A7C34: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1A7C38:
    // 7F1A7C38: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7C3C:
    // 7F1A7C3C: li      r5, 360
    ctx->gpr[5] = (u32)(s32)(360);

label_7F1A7C40:
    // 7F1A7C40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A7C44:
    // 7F1A7C44: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1A7C48u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1A7C48:
    ctx->pc = 0x7F1A7C48u;
    ctx->downcount -= 7;
    // 7F1A7C48: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7C4C:
    // 7F1A7C4C: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1A7C50:
    // 7F1A7C50: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7C54:
    // 7F1A7C54: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1A7C58:
    // 7F1A7C58: li      r6, 213
    ctx->gpr[6] = (u32)(s32)(213);

label_7F1A7C5C:
    // 7F1A7C5C: li      r7, 45
    ctx->gpr[7] = (u32)(s32)(45);

label_7F1A7C60:
    // 7F1A7C60: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1A7C64u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1A7C64:
    ctx->pc = 0x7F1A7C64u;
    ctx->downcount -= 4;
    // 7F1A7C64: lwz     r3, 404(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7C68:
    // 7F1A7C68: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7C6C:
    // 7F1A7C6C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7C70:
    // 7F1A7C70: bl      0x7F0BA3C8
    {
            ctx->lr = 0x7F1A7C74u;
            ctx->pc = 0x7F0BA3C8u;
            return;
    }

label_7F1A7C74:
    ctx->downcount -= 4;
    // 7F1A7C74: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1A7C78:
    // 7F1A7C78: addi    r30, r30, 14
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(14);

label_7F1A7C7C:
    // 7F1A7C7C: cmpwi   r28, 20
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1A7C80:
    // 7F1A7C80: bc    12, 0, 0x7F1A7B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1A7B28u;
                return;
            }
            goto label_7F1A7B28;
        }
    }

label_7F1A7C84:
    ctx->pc = 0x7F1A7C84u;
    ctx->downcount -= 16;
    // 7F1A7C84: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1A7C88:
    ctx->pc = 0x7F1A7C88u;
    // 7F1A7C88: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7C8C:
    ctx->pc = 0x7F1A7C8Cu;
    // 7F1A7C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7C90:
    ctx->pc = 0x7F1A7C90u;
    // 7F1A7C90: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1A7C94:
    ctx->pc = 0x7F1A7C94u;
    // 7F1A7C94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7C98:
    ctx->pc = 0x7F1A7C98u;
    ctx->downcount -= 8;
    // 7F1A7C98: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7C9C:
    ctx->pc = 0x7F1A7C9Cu;
    // 7F1A7C9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7CA0:
    ctx->pc = 0x7F1A7CA0u;
    // 7F1A7CA0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7CA4:
    ctx->pc = 0x7F1A7CA4u;
    // 7F1A7CA4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7CA8:
    ctx->pc = 0x7F1A7CA8u;
    // 7F1A7CA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7CAC:
    ctx->pc = 0x7F1A7CACu;
    // 7F1A7CAC: lwz     r0, 400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(400);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7CB0:
    ctx->pc = 0x7F1A7CB0u;
    // 7F1A7CB0: rlwinm. r0, r0, 0, 28, 28
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

label_7F1A7CB4:
    ctx->pc = 0x7F1A7CB4u;
    // 7F1A7CB4: bc    4, 2, 0x7F1A7D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7D3C;
        }
    }

label_7F1A7CB8:
    ctx->pc = 0x7F1A7CB8u;
    ctx->downcount -= 16;
    // 7F1A7CB8: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7CBC:
    ctx->pc = 0x7F1A7CBCu;
    // 7F1A7CBC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1A7CC0:
    ctx->pc = 0x7F1A7CC0u;
    // 7F1A7CC0: addi    r4, r3, -7100
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7100);

label_7F1A7CC4:
    ctx->pc = 0x7F1A7CC4u;
    // 7F1A7CC4: lfs     f1, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7CC8:
    ctx->pc = 0x7F1A7CC8u;
    // 7F1A7CC8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7CCC:
    ctx->pc = 0x7F1A7CCCu;
    // 7F1A7CCC: lfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CCCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7CD0:
    ctx->pc = 0x7F1A7CD0u;
    // 7F1A7CD0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1A7CD4:
    ctx->pc = 0x7F1A7CD4u;
    // 7F1A7CD4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CD4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1A7CD8:
    ctx->pc = 0x7F1A7CD8u;
    // 7F1A7CD8: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1A7CDC:
    ctx->pc = 0x7F1A7CDCu;
    // 7F1A7CDC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1A7CE0:
    ctx->pc = 0x7F1A7CE0u;
    // 7F1A7CE0: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1A7CE4:
    ctx->pc = 0x7F1A7CE4u;
    // 7F1A7CE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7CE8:
    ctx->pc = 0x7F1A7CE8u;
    // 7F1A7CE8: rlwinm r5, r5, 0, 21, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000007FFu;
    }

label_7F1A7CEC:
    ctx->pc = 0x7F1A7CECu;
    // 7F1A7CEC: rlwinm r6, r0, 0, 21, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000007FFu;
    }

label_7F1A7CF0:
    ctx->pc = 0x7F1A7CF0u;
    // 7F1A7CF0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1A7CF4:
    ctx->pc = 0x7F1A7CF4u;
    // 7F1A7CF4: bl      0x8001258C
    {
            ctx->lr = 0x7F1A7CF8u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1A7CF8:
    ctx->pc = 0x7F1A7CF8u;
    ctx->downcount -= 6;
    // 7F1A7CF8: lwz     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7CFC:
    ctx->pc = 0x7F1A7CFCu;
    // 7F1A7CFC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7D00:
    ctx->pc = 0x7F1A7D00u;
    // 7F1A7D00: li      r5, 140
    ctx->gpr[5] = (u32)(s32)(140);

label_7F1A7D04:
    ctx->pc = 0x7F1A7D04u;
    // 7F1A7D04: li      r6, 315
    ctx->gpr[6] = (u32)(s32)(315);

label_7F1A7D08:
    ctx->pc = 0x7F1A7D08u;
    // 7F1A7D08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1A7D0C:
    ctx->pc = 0x7F1A7D0Cu;
    // 7F1A7D0C: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1A7D10u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1A7D10:
    ctx->pc = 0x7F1A7D10u;
    ctx->downcount -= 7;
    // 7F1A7D10: lwz     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7D14:
    ctx->pc = 0x7F1A7D14u;
    // 7F1A7D14: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7D18:
    ctx->pc = 0x7F1A7D18u;
    // 7F1A7D18: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1A7D1C:
    ctx->pc = 0x7F1A7D1Cu;
    // 7F1A7D1C: li      r6, 213
    ctx->gpr[6] = (u32)(s32)(213);

label_7F1A7D20:
    ctx->pc = 0x7F1A7D20u;
    // 7F1A7D20: li      r7, 45
    ctx->gpr[7] = (u32)(s32)(45);

label_7F1A7D24:
    ctx->pc = 0x7F1A7D24u;
    // 7F1A7D24: li      r8, 100
    ctx->gpr[8] = (u32)(s32)(100);

label_7F1A7D28:
    ctx->pc = 0x7F1A7D28u;
    // 7F1A7D28: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1A7D2Cu;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1A7D2C:
    ctx->pc = 0x7F1A7D2Cu;
    ctx->downcount -= 4;
    // 7F1A7D2C: lwz     r3, 404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7D30:
    ctx->pc = 0x7F1A7D30u;
    // 7F1A7D30: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7D34:
    ctx->pc = 0x7F1A7D34u;
    // 7F1A7D34: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1A7D38:
    ctx->pc = 0x7F1A7D38u;
    // 7F1A7D38: bl      0x7F0BA3C8
    {
            ctx->lr = 0x7F1A7D3Cu;
            ctx->pc = 0x7F0BA3C8u;
            return;
    }

label_7F1A7D3C:
    ctx->pc = 0x7F1A7D3Cu;
    ctx->downcount -= 6;
    // 7F1A7D3C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7D40:
    ctx->pc = 0x7F1A7D40u;
    // 7F1A7D40: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A7D44:
    ctx->pc = 0x7F1A7D44u;
    // 7F1A7D44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7D48:
    ctx->pc = 0x7F1A7D48u;
    // 7F1A7D48: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1A7D4C:
    ctx->pc = 0x7F1A7D4Cu;
    // 7F1A7D4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7D50:
    ctx->pc = 0x7F1A7D50u;
    ctx->downcount -= 59;
    // 7F1A7D50: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7D54:
    ctx->pc = 0x7F1A7D54u;
    // 7F1A7D54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7D58:
    ctx->pc = 0x7F1A7D58u;
    // 7F1A7D58: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7D5C:
    ctx->pc = 0x7F1A7D5Cu;
    // 7F1A7D5C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7D60:
    ctx->pc = 0x7F1A7D60u;
    // 7F1A7D60: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7D64:
    ctx->pc = 0x7F1A7D64u;
    // 7F1A7D64: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7D68:
    ctx->pc = 0x7F1A7D68u;
    // 7F1A7D68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7D6C:
    ctx->pc = 0x7F1A7D6Cu;
    // 7F1A7D6C: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A7D70:
    ctx->pc = 0x7F1A7D70u;
    // 7F1A7D70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7D74:
    ctx->pc = 0x7F1A7D74u;
    // 7F1A7D74: addi    r9, r3, 6176
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(6176);

label_7F1A7D78:
    ctx->pc = 0x7F1A7D78u;
    // 7F1A7D78: lha     r8, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A7D7C:
    ctx->pc = 0x7F1A7D7Cu;
    // 7F1A7D7C: lha     r6, 130(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(130);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A7D80:
    ctx->pc = 0x7F1A7D80u;
    // 7F1A7D80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7D84:
    ctx->pc = 0x7F1A7D84u;
    // 7F1A7D84: addi    r7, r3, 6216
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(6216);

label_7F1A7D88:
    ctx->pc = 0x7F1A7D88u;
    // 7F1A7D88: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7D8C:
    ctx->pc = 0x7F1A7D8Cu;
    // 7F1A7D8C: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1A7D90:
    ctx->pc = 0x7F1A7D90u;
    // 7F1A7D90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7D94:
    ctx->pc = 0x7F1A7D94u;
    // 7F1A7D94: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A7D98:
    ctx->pc = 0x7F1A7D98u;
    // 7F1A7D98: lfd     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7D98u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7D9C:
    ctx->pc = 0x7F1A7D9Cu;
    // 7F1A7D9C: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A7DA0:
    ctx->pc = 0x7F1A7DA0u;
    // 7F1A7DA0: addi    r5, r3, 6220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6220);

label_7F1A7DA4:
    ctx->pc = 0x7F1A7DA4u;
    // 7F1A7DA4: addi    r6, r4, 6172
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6172);

label_7F1A7DA8:
    ctx->pc = 0x7F1A7DA8u;
    // 7F1A7DA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7DAC:
    ctx->pc = 0x7F1A7DACu;
    // 7F1A7DAC: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7DB0:
    ctx->pc = 0x7F1A7DB0u;
    // 7F1A7DB0: addi    r4, r3, 6224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6224);

label_7F1A7DB4:
    ctx->pc = 0x7F1A7DB4u;
    // 7F1A7DB4: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DB4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7DB8:
    ctx->pc = 0x7F1A7DB8u;
    // 7F1A7DB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7DBC:
    ctx->pc = 0x7F1A7DBCu;
    // 7F1A7DBC: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DBCu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F1A7DC0:
    ctx->pc = 0x7F1A7DC0u;
    // 7F1A7DC0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A7DC4:
    ctx->pc = 0x7F1A7DC4u;
    // 7F1A7DC4: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1A7DC8:
    ctx->pc = 0x7F1A7DC8u;
    // 7F1A7DC8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7DCC:
    ctx->pc = 0x7F1A7DCCu;
    // 7F1A7DCC: fmuls   f5, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DCCu)) return;
    ppc_fmuls(ctx, 5, 2, 0);

label_7F1A7DD0:
    ctx->pc = 0x7F1A7DD0u;
    // 7F1A7DD0: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A7DD4:
    ctx->pc = 0x7F1A7DD4u;
    // 7F1A7DD4: lfs     f0, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7DD8:
    ctx->pc = 0x7F1A7DD8u;
    // 7F1A7DD8: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1A7DDC:
    ctx->pc = 0x7F1A7DDCu;
    // 7F1A7DDC: lfs     f2, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DDCu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7DE0:
    ctx->pc = 0x7F1A7DE0u;
    // 7F1A7DE0: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DE0u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1A7DE4:
    ctx->pc = 0x7F1A7DE4u;
    // 7F1A7DE4: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DE4u)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_7F1A7DE8:
    ctx->pc = 0x7F1A7DE8u;
    // 7F1A7DE8: fmuls   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DE8u)) return;
    ppc_fmuls(ctx, 2, 2, 5);

label_7F1A7DEC:
    ctx->pc = 0x7F1A7DECu;
    // 7F1A7DEC: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DECu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1A7DF0:
    ctx->pc = 0x7F1A7DF0u;
    // 7F1A7DF0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DF0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A7DF4:
    ctx->pc = 0x7F1A7DF4u;
    // 7F1A7DF4: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7DF8:
    ctx->pc = 0x7F1A7DF8u;
    // 7F1A7DF8: bc    4, 0, 0x7F1A7E04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E04;
        }
    }

label_7F1A7DFC:
    ctx->pc = 0x7F1A7DFCu;
    ctx->downcount -= 2;
    // 7F1A7DFC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A7E00:
    ctx->pc = 0x7F1A7E00u;
    // 7F1A7E00: b       0x7F1A7E08
    {
            goto label_7F1A7E08;
    }

label_7F1A7E04:
    ctx->pc = 0x7F1A7E04u;
    ctx->downcount -= 1;
    // 7F1A7E04: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A7E08:
    ctx->pc = 0x7F1A7E08u;
    ctx->downcount -= 2;
    // 7F1A7E08: cmpwi   r0, 0
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

label_7F1A7E0C:
    ctx->pc = 0x7F1A7E0Cu;
    // 7F1A7E0C: bc    4, 0, 0x7F1A7E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E28;
        }
    }

label_7F1A7E10:
    ctx->pc = 0x7F1A7E10u;
    ctx->downcount -= 4;
    // 7F1A7E10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7E14:
    ctx->pc = 0x7F1A7E14u;
    // 7F1A7E14: lfs     f0, 6228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7E18:
    ctx->pc = 0x7F1A7E18u;
    // 7F1A7E18: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A7E1C:
    ctx->pc = 0x7F1A7E1Cu;
    // 7F1A7E1C: bc    4, 0, 0x7F1A7E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E3C;
        }
    }

label_7F1A7E20:
    ctx->pc = 0x7F1A7E20u;
    ctx->downcount -= 2;
    // 7F1A7E20: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7E24:
    ctx->pc = 0x7F1A7E24u;
    // 7F1A7E24: b       0x7F1A7E3C
    {
            goto label_7F1A7E3C;
    }

label_7F1A7E28:
    ctx->pc = 0x7F1A7E28u;
    ctx->downcount -= 4;
    // 7F1A7E28: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7E2C:
    ctx->pc = 0x7F1A7E2Cu;
    // 7F1A7E2C: lfs     f0, 6232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7E30:
    ctx->pc = 0x7F1A7E30u;
    // 7F1A7E30: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A7E34:
    ctx->pc = 0x7F1A7E34u;
    // 7F1A7E34: bc    4, 1, 0x7F1A7E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E3C;
        }
    }

label_7F1A7E38:
    ctx->pc = 0x7F1A7E38u;
    ctx->downcount -= 1;
    // 7F1A7E38: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7E3C:
    ctx->pc = 0x7F1A7E3Cu;
    ctx->downcount -= 11;
    // 7F1A7E3C: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7E40:
    ctx->pc = 0x7F1A7E40u;
    // 7F1A7E40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7E44:
    ctx->pc = 0x7F1A7E44u;
    // 7F1A7E44: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7E48:
    ctx->pc = 0x7F1A7E48u;
    // 7F1A7E48: lfs     f2, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7E4C:
    ctx->pc = 0x7F1A7E4Cu;
    // 7F1A7E4C: lfs     f0, 6236(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7E50:
    ctx->pc = 0x7F1A7E50u;
    // 7F1A7E50: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E50u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1A7E54:
    ctx->pc = 0x7F1A7E54u;
    // 7F1A7E54: stfs     f1, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7E58:
    ctx->pc = 0x7F1A7E58u;
    // 7F1A7E58: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7E5C:
    ctx->pc = 0x7F1A7E5Cu;
    // 7F1A7E5C: lfs     f1, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7E60:
    ctx->pc = 0x7F1A7E60u;
    // 7F1A7E60: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A7E64:
    ctx->pc = 0x7F1A7E64u;
    // 7F1A7E64: bc    4, 0, 0x7F1A7E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E70;
        }
    }

label_7F1A7E68:
    ctx->pc = 0x7F1A7E68u;
    ctx->downcount -= 2;
    // 7F1A7E68: stfs     f0, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7E6C:
    ctx->pc = 0x7F1A7E6Cu;
    // 7F1A7E6C: b       0x7F1A7E84
    {
            goto label_7F1A7E84;
    }

label_7F1A7E70:
    ctx->pc = 0x7F1A7E70u;
    ctx->downcount -= 4;
    // 7F1A7E70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7E74:
    ctx->pc = 0x7F1A7E74u;
    // 7F1A7E74: lfs     f0, 6240(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7E78:
    ctx->pc = 0x7F1A7E78u;
    // 7F1A7E78: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A7E7C:
    ctx->pc = 0x7F1A7E7Cu;
    // 7F1A7E7C: bc    4, 1, 0x7F1A7E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7E84;
        }
    }

label_7F1A7E80:
    ctx->pc = 0x7F1A7E80u;
    ctx->downcount -= 1;
    // 7F1A7E80: stfs     f0, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7E84:
    ctx->pc = 0x7F1A7E84u;
    ctx->downcount -= 5;
    // 7F1A7E84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7E88:
    ctx->pc = 0x7F1A7E88u;
    // 7F1A7E88: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7E8C:
    ctx->pc = 0x7F1A7E8Cu;
    // 7F1A7E8C: lfs     f1, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7E90:
    ctx->pc = 0x7F1A7E90u;
    // 7F1A7E90: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A7E94:
    ctx->pc = 0x7F1A7E94u;
    // 7F1A7E94: bc    4, 2, 0x7F1A7F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7F38;
        }
    }

label_7F1A7E98:
    ctx->pc = 0x7F1A7E98u;
    ctx->downcount -= 4;
    // 7F1A7E98: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7E9C:
    ctx->pc = 0x7F1A7E9Cu;
    // 7F1A7E9C: lfs     f0, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7E9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7EA0:
    ctx->pc = 0x7F1A7EA0u;
    // 7F1A7EA0: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EA0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1A7EA4:
    ctx->pc = 0x7F1A7EA4u;
    // 7F1A7EA4: bc    4, 0, 0x7F1A7EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7EC4;
        }
    }

label_7F1A7EA8:
    ctx->pc = 0x7F1A7EA8u;
    ctx->downcount -= 7;
    // 7F1A7EA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7EAC:
    ctx->pc = 0x7F1A7EACu;
    // 7F1A7EAC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7EB0:
    ctx->pc = 0x7F1A7EB0u;
    // 7F1A7EB0: lfs     f0, 6244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7EB4:
    ctx->pc = 0x7F1A7EB4u;
    // 7F1A7EB4: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7EB8:
    ctx->pc = 0x7F1A7EB8u;
    // 7F1A7EB8: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7EBC:
    ctx->pc = 0x7F1A7EBCu;
    // 7F1A7EBC: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7EC0:
    ctx->pc = 0x7F1A7EC0u;
    // 7F1A7EC0: b       0x7F1A7EDC
    {
            goto label_7F1A7EDC;
    }

label_7F1A7EC4:
    ctx->pc = 0x7F1A7EC4u;
    ctx->downcount -= 6;
    // 7F1A7EC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7EC8:
    ctx->pc = 0x7F1A7EC8u;
    // 7F1A7EC8: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7ECC:
    ctx->pc = 0x7F1A7ECCu;
    // 7F1A7ECC: lfs     f0, 6248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7ECCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7ED0:
    ctx->pc = 0x7F1A7ED0u;
    // 7F1A7ED0: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7ED0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7ED4:
    ctx->pc = 0x7F1A7ED4u;
    // 7F1A7ED4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7ED8:
    ctx->pc = 0x7F1A7ED8u;
    // 7F1A7ED8: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7ED8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7EDC:
    ctx->pc = 0x7F1A7EDCu;
    ctx->downcount -= 13;
    // 7F1A7EDC: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7EE0:
    ctx->pc = 0x7F1A7EE0u;
    // 7F1A7EE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7EE4:
    ctx->pc = 0x7F1A7EE4u;
    // 7F1A7EE4: addi    r5, r3, 6168
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6168);

label_7F1A7EE8:
    ctx->pc = 0x7F1A7EE8u;
    // 7F1A7EE8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1A7EEC:
    ctx->pc = 0x7F1A7EECu;
    // 7F1A7EEC: lfs     f1, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7EF0:
    ctx->pc = 0x7F1A7EF0u;
    // 7F1A7EF0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1A7EF4:
    ctx->pc = 0x7F1A7EF4u;
    // 7F1A7EF4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7EF8:
    ctx->pc = 0x7F1A7EF8u;
    // 7F1A7EF8: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A7EFC:
    ctx->pc = 0x7F1A7EFCu;
    // 7F1A7EFC: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A7F00:
    ctx->pc = 0x7F1A7F00u;
    // 7F1A7F00: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7F04:
    ctx->pc = 0x7F1A7F04u;
    // 7F1A7F04: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7F08:
    ctx->pc = 0x7F1A7F08u;
    // 7F1A7F08: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7F0C:
    ctx->pc = 0x7F1A7F0Cu;
    // 7F1A7F0C: bl      0x800261D8
    {
            ctx->lr = 0x7F1A7F10u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1A7F10:
    ctx->pc = 0x7F1A7F10u;
    ctx->downcount -= 5;
    // 7F1A7F10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7F14:
    ctx->pc = 0x7F1A7F14u;
    // 7F1A7F14: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1A7F18:
    ctx->pc = 0x7F1A7F18u;
    // 7F1A7F18: lfs     f1, 6252(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7F1C:
    ctx->pc = 0x7F1A7F1Cu;
    // 7F1A7F1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7F20:
    ctx->pc = 0x7F1A7F20u;
    // 7F1A7F20: bl      0x800261FC
    {
            ctx->lr = 0x7F1A7F24u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1A7F24:
    ctx->pc = 0x7F1A7F24u;
    ctx->downcount -= 5;
    // 7F1A7F24: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1A7F28:
    ctx->pc = 0x7F1A7F28u;
    // 7F1A7F28: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7F2C:
    ctx->pc = 0x7F1A7F2Cu;
    // 7F1A7F2C: lfs     f1, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7F30:
    ctx->pc = 0x7F1A7F30u;
    // 7F1A7F30: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F30u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1A7F34:
    ctx->pc = 0x7F1A7F34u;
    // 7F1A7F34: stfs     f0, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7F38:
    ctx->pc = 0x7F1A7F38u;
    ctx->downcount -= 6;
    // 7F1A7F38: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1A7F3C:
    ctx->pc = 0x7F1A7F3Cu;
    // 7F1A7F3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7F40:
    ctx->pc = 0x7F1A7F40u;
    // 7F1A7F40: lfs     f1, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7F44:
    ctx->pc = 0x7F1A7F44u;
    // 7F1A7F44: lfs     f0, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7F48:
    ctx->pc = 0x7F1A7F48u;
    // 7F1A7F48: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F48u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1A7F4C:
    ctx->pc = 0x7F1A7F4Cu;
    // 7F1A7F4C: bc    4, 2, 0x7F1A7F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A7F5C;
        }
    }

label_7F1A7F50:
    ctx->pc = 0x7F1A7F50u;
    ctx->downcount -= 3;
    // 7F1A7F50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7F54:
    ctx->pc = 0x7F1A7F54u;
    // 7F1A7F54: lfs     f0, 6248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A7F58:
    ctx->pc = 0x7F1A7F58u;
    // 7F1A7F58: stfs     f0, 144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7F58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7F5C:
    ctx->pc = 0x7F1A7F5Cu;
    ctx->downcount -= 6;
    // 7F1A7F5C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1A7F60:
    ctx->pc = 0x7F1A7F60u;
    // 7F1A7F60: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1A7F64:
    ctx->pc = 0x7F1A7F64u;
    // 7F1A7F64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1A7F68:
    ctx->pc = 0x7F1A7F68u;
    // 7F1A7F68: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1A7F6C:
    ctx->pc = 0x7F1A7F6Cu;
    // 7F1A7F6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1A40EC;
        }
    }

label_7F1A7F70:
    ctx->pc = 0x7F1A7F70u;
    ctx->downcount -= 89;
    // 7F1A7F70: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1A7F74:
    ctx->pc = 0x7F1A7F74u;
    // 7F1A7F74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1A7F78:
    ctx->pc = 0x7F1A7F78u;
    // 7F1A7F78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1A7F7C:
    ctx->pc = 0x7F1A7F7Cu;
    // 7F1A7F7C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7F80:
    ctx->pc = 0x7F1A7F80u;
    // 7F1A7F80: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1A7F84:
    ctx->pc = 0x7F1A7F84u;
    // 7F1A7F84: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1A7F88:
    ctx->pc = 0x7F1A7F88u;
    // 7F1A7F88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1A7F8C:
    ctx->pc = 0x7F1A7F8Cu;
    // 7F1A7F8C: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1A7F90:
    ctx->pc = 0x7F1A7F90u;
    // 7F1A7F90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7F94:
    ctx->pc = 0x7F1A7F94u;
    // 7F1A7F94: addi    r9, r3, 6176
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(6176);

label_7F1A7F98:
    ctx->pc = 0x7F1A7F98u;
    // 7F1A7F98: lha     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A7F9C:
    ctx->pc = 0x7F1A7F9Cu;
    // 7F1A7F9C: lha     r6, 128(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(128);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A7FA0:
    ctx->pc = 0x7F1A7FA0u;
    // 7F1A7FA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7FA4:
    ctx->pc = 0x7F1A7FA4u;
    // 7F1A7FA4: addi    r7, r3, 6216
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(6216);

label_7F1A7FA8:
    ctx->pc = 0x7F1A7FA8u;
    // 7F1A7FA8: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7FAC:
    ctx->pc = 0x7F1A7FACu;
    // 7F1A7FAC: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1A7FB0:
    ctx->pc = 0x7F1A7FB0u;
    // 7F1A7FB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7FB4:
    ctx->pc = 0x7F1A7FB4u;
    // 7F1A7FB4: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1A7FB8:
    ctx->pc = 0x7F1A7FB8u;
    // 7F1A7FB8: lfd     f7, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FB8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7FBC:
    ctx->pc = 0x7F1A7FBCu;
    // 7F1A7FBC: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1A7FC0:
    ctx->pc = 0x7F1A7FC0u;
    // 7F1A7FC0: addi    r5, r3, 6220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(6220);

label_7F1A7FC4:
    ctx->pc = 0x7F1A7FC4u;
    // 7F1A7FC4: addi    r6, r4, 6172
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(6172);

label_7F1A7FC8:
    ctx->pc = 0x7F1A7FC8u;
    // 7F1A7FC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7FCC:
    ctx->pc = 0x7F1A7FCCu;
    // 7F1A7FCC: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A7FD0:
    ctx->pc = 0x7F1A7FD0u;
    // 7F1A7FD0: addi    r4, r3, 6224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6224);

label_7F1A7FD4:
    ctx->pc = 0x7F1A7FD4u;
    // 7F1A7FD4: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A7FD8:
    ctx->pc = 0x7F1A7FD8u;
    // 7F1A7FD8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A7FDC:
    ctx->pc = 0x7F1A7FDCu;
    // 7F1A7FDC: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FDCu)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_7F1A7FE0:
    ctx->pc = 0x7F1A7FE0u;
    // 7F1A7FE0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FE0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A7FE4:
    ctx->pc = 0x7F1A7FE4u;
    // 7F1A7FE4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1A7FE8:
    ctx->pc = 0x7F1A7FE8u;
    // 7F1A7FE8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1A7FEC:
    ctx->pc = 0x7F1A7FECu;
    // 7F1A7FEC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A7FF0:
    ctx->pc = 0x7F1A7FF0u;
    // 7F1A7FF0: fmuls   f6, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FF0u)) return;
    ppc_fmuls(ctx, 6, 0, 1);

label_7F1A7FF4:
    ctx->pc = 0x7F1A7FF4u;
    // 7F1A7FF4: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1A7FF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1A7FF8:
    ctx->pc = 0x7F1A7FF8u;
    // 7F1A7FF8: lha     r4, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A7FFC:
    ctx->pc = 0x7F1A7FFCu;
    // 7F1A7FFC: lha     r0, 130(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(130);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1A8000:
    ctx->pc = 0x7F1A8000u;
    // 7F1A8000: lfs     f0, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8000u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8004:
    ctx->pc = 0x7F1A8004u;
    // 7F1A8004: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1A8008:
    ctx->pc = 0x7F1A8008u;
    // 7F1A8008: stfs     f6, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F1A800C:
    ctx->pc = 0x7F1A800Cu;
    // 7F1A800C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1A8010:
    ctx->pc = 0x7F1A8010u;
    // 7F1A8010: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1A8014:
    ctx->pc = 0x7F1A8014u;
    // 7F1A8014: lfd     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1A8018:
    ctx->pc = 0x7F1A8018u;
    // 7F1A8018: fsubs   f7, f5, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1A8018u)) return;
    ppc_fsubs(ctx, 7, 5, 7);

label_7F1A801C:
    ctx->pc = 0x7F1A801Cu;
    // 7F1A801C: fmuls   f5, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A801Cu)) return;
    ppc_fmuls(ctx, 5, 7, 1);

label_7F1A8020:
    ctx->pc = 0x7F1A8020u;
    // 7F1A8020: stfs     f7, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F1A8024:
    ctx->pc = 0x7F1A8024u;
    // 7F1A8024: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1A8028:
    ctx->pc = 0x7F1A8028u;
    // 7F1A8028: lfs     f1, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8028u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A802C:
    ctx->pc = 0x7F1A802Cu;
    // 7F1A802C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A802Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1A8030:
    ctx->pc = 0x7F1A8030u;
    // 7F1A8030: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1A8030u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_7F1A8034:
    ctx->pc = 0x7F1A8034u;
    // 7F1A8034: fmuls   f2, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1A8034u)) return;
    ppc_fmuls(ctx, 2, 1, 5);

label_7F1A8038:
    ctx->pc = 0x7F1A8038u;
    // 7F1A8038: fmuls   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1A8038u)) return;
    ppc_fmuls(ctx, 1, 1, 6);

label_7F1A803C:
    ctx->pc = 0x7F1A803Cu;
    // 7F1A803C: fdivs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A803Cu)) return;
    ppc_fdivs(ctx, 2, 2, 3);

label_7F1A8040:
    ctx->pc = 0x7F1A8040u;
    // 7F1A8040: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1A8040u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F1A8044:
    ctx->pc = 0x7F1A8044u;
    // 7F1A8044: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1A8048:
    ctx->pc = 0x7F1A8048u;
    // 7F1A8048: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8048u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A804C:
    ctx->pc = 0x7F1A804Cu;
    // 7F1A804C: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A804Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1A8050:
    ctx->pc = 0x7F1A8050u;
    // 7F1A8050: bc    4, 0, 0x7F1A805C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A805C;
        }
    }

label_7F1A8054:
    ctx->pc = 0x7F1A8054u;
    ctx->downcount -= 2;
    // 7F1A8054: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A8058:
    ctx->pc = 0x7F1A8058u;
    // 7F1A8058: b       0x7F1A8060
    {
            goto label_7F1A8060;
    }

label_7F1A805C:
    ctx->pc = 0x7F1A805Cu;
    ctx->downcount -= 1;
    // 7F1A805C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A8060:
    ctx->pc = 0x7F1A8060u;
    ctx->downcount -= 2;
    // 7F1A8060: cmpwi   r0, 0
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

label_7F1A8064:
    ctx->pc = 0x7F1A8064u;
    // 7F1A8064: bc    4, 0, 0x7F1A8080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8080;
        }
    }

label_7F1A8068:
    ctx->pc = 0x7F1A8068u;
    ctx->downcount -= 4;
    // 7F1A8068: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A806C:
    ctx->pc = 0x7F1A806Cu;
    // 7F1A806C: lfs     f0, 6228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A806Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8070:
    ctx->pc = 0x7F1A8070u;
    // 7F1A8070: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8070u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A8074:
    ctx->pc = 0x7F1A8074u;
    // 7F1A8074: bc    4, 0, 0x7F1A8094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8094;
        }
    }

label_7F1A8078:
    ctx->pc = 0x7F1A8078u;
    ctx->downcount -= 2;
    // 7F1A8078: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A807C:
    ctx->pc = 0x7F1A807Cu;
    // 7F1A807C: b       0x7F1A8094
    {
            goto label_7F1A8094;
    }

label_7F1A8080:
    ctx->pc = 0x7F1A8080u;
    ctx->downcount -= 4;
    // 7F1A8080: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8084:
    ctx->pc = 0x7F1A8084u;
    // 7F1A8084: lfs     f0, 6232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8084u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A8088:
    ctx->pc = 0x7F1A8088u;
    // 7F1A8088: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A8088u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1A808C:
    ctx->pc = 0x7F1A808Cu;
    // 7F1A808C: bc    4, 1, 0x7F1A8094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A8094;
        }
    }

label_7F1A8090:
    ctx->pc = 0x7F1A8090u;
    ctx->downcount -= 1;
    // 7F1A8090: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A8094:
    ctx->pc = 0x7F1A8094u;
    ctx->downcount -= 5;
    // 7F1A8094: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A8098:
    ctx->pc = 0x7F1A8098u;
    // 7F1A8098: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A8098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1A809C:
    ctx->pc = 0x7F1A809Cu;
    // 7F1A809C: lfs     f0, 6168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A809Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A80A0:
    ctx->pc = 0x7F1A80A0u;
    // 7F1A80A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A80A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A80A4:
    ctx->pc = 0x7F1A80A4u;
    // 7F1A80A4: bc    4, 0, 0x7F1A80B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A80B0;
        }
    }

label_7F1A80A8:
    ctx->pc = 0x7F1A80A8u;
    ctx->downcount -= 2;
    // 7F1A80A8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1A80AC:
    ctx->pc = 0x7F1A80ACu;
    // 7F1A80AC: b       0x7F1A80B4
    {
            goto label_7F1A80B4;
    }

label_7F1A80B0:
    ctx->pc = 0x7F1A80B0u;
    ctx->downcount -= 1;
    // 7F1A80B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1A80B4:
    ctx->pc = 0x7F1A80B4u;
    ctx->downcount -= 2;
    // 7F1A80B4: cmpwi   r0, 0
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

label_7F1A80B8:
    ctx->pc = 0x7F1A80B8u;
    // 7F1A80B8: bc    4, 0, 0x7F1A80D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A80D4;
        }
    }

label_7F1A80BC:
    ctx->pc = 0x7F1A80BCu;
    ctx->downcount -= 4;
    // 7F1A80BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A80C0:
    ctx->pc = 0x7F1A80C0u;
    // 7F1A80C0: lfs     f0, 6228(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A80C4:
    ctx->pc = 0x7F1A80C4u;
    // 7F1A80C4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A80C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A80C8:
    ctx->pc = 0x7F1A80C8u;
    // 7F1A80C8: bc    4, 0, 0x7F1A80E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A80E8;
        }
    }

label_7F1A80CC:
    ctx->pc = 0x7F1A80CCu;
    ctx->downcount -= 2;
    // 7F1A80CC: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A80D0:
    ctx->pc = 0x7F1A80D0u;
    // 7F1A80D0: b       0x7F1A80E8
    {
            goto label_7F1A80E8;
    }

label_7F1A80D4:
    ctx->pc = 0x7F1A80D4u;
    ctx->downcount -= 4;
    // 7F1A80D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1A80D8:
    ctx->pc = 0x7F1A80D8u;
    // 7F1A80D8: lfs     f0, 6232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1A80DC:
    ctx->pc = 0x7F1A80DCu;
    // 7F1A80DC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1A80DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1A80E0:
    ctx->pc = 0x7F1A80E0u;
    // 7F1A80E0: bc    4, 1, 0x7F1A80E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1A80E8;
        }
    }

label_7F1A80E4:
    ctx->pc = 0x7F1A80E4u;
    ctx->downcount -= 1;
    // 7F1A80E4: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1A80E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1A80E8:
    ctx->pc = 0x7F1A80E8u;
    ctx->downcount -= 1;
    // 7F1A80E8: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1A80ECu;
    return;
return_dispatch_7F1A40EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1A4178u: goto label_7F1A4178;
    case 0x7F1A4184u: goto label_7F1A4184;
    case 0x7F1A42A4u: goto label_7F1A42A4;
    case 0x7F1A4330u: goto label_7F1A4330;
    case 0x7F1A4338u: goto label_7F1A4338;
    case 0x7F1A436Cu: goto label_7F1A436C;
    case 0x7F1A4388u: goto label_7F1A4388;
    case 0x7F1A43A4u: goto label_7F1A43A4;
    case 0x7F1A4400u: goto label_7F1A4400;
    case 0x7F1A4414u: goto label_7F1A4414;
    case 0x7F1A4424u: goto label_7F1A4424;
    case 0x7F1A4464u: goto label_7F1A4464;
    case 0x7F1A4494u: goto label_7F1A4494;
    case 0x7F1A44BCu: goto label_7F1A44BC;
    case 0x7F1A44DCu: goto label_7F1A44DC;
    case 0x7F1A44F0u: goto label_7F1A44F0;
    case 0x7F1A45C0u: goto label_7F1A45C0;
    case 0x7F1A45D4u: goto label_7F1A45D4;
    case 0x7F1A45E4u: goto label_7F1A45E4;
    case 0x7F1A46D0u: goto label_7F1A46D0;
    case 0x7F1A4720u: goto label_7F1A4720;
    case 0x7F1A473Cu: goto label_7F1A473C;
    case 0x7F1A47A0u: goto label_7F1A47A0;
    case 0x7F1A47B0u: goto label_7F1A47B0;
    case 0x7F1A47C8u: goto label_7F1A47C8;
    case 0x7F1A4930u: goto label_7F1A4930;
    case 0x7F1A494Cu: goto label_7F1A494C;
    case 0x7F1A4964u: goto label_7F1A4964;
    case 0x7F1A4980u: goto label_7F1A4980;
    case 0x7F1A4994u: goto label_7F1A4994;
    case 0x7F1A49ACu: goto label_7F1A49AC;
    case 0x7F1A49CCu: goto label_7F1A49CC;
    case 0x7F1A49ECu: goto label_7F1A49EC;
    case 0x7F1A4A04u: goto label_7F1A4A04;
    case 0x7F1A4A1Cu: goto label_7F1A4A1C;
    case 0x7F1A4A6Cu: goto label_7F1A4A6C;
    case 0x7F1A4A88u: goto label_7F1A4A88;
    case 0x7F1A4AA0u: goto label_7F1A4AA0;
    case 0x7F1A4ABCu: goto label_7F1A4ABC;
    case 0x7F1A4AD0u: goto label_7F1A4AD0;
    case 0x7F1A4AE8u: goto label_7F1A4AE8;
    case 0x7F1A4B08u: goto label_7F1A4B08;
    case 0x7F1A4B28u: goto label_7F1A4B28;
    case 0x7F1A4B40u: goto label_7F1A4B40;
    case 0x7F1A4B58u: goto label_7F1A4B58;
    case 0x7F1A4CD4u: goto label_7F1A4CD4;
    case 0x7F1A4CDCu: goto label_7F1A4CDC;
    case 0x7F1A4D58u: goto label_7F1A4D58;
    case 0x7F1A4D70u: goto label_7F1A4D70;
    case 0x7F1A5004u: goto label_7F1A5004;
    case 0x7F1A503Cu: goto label_7F1A503C;
    case 0x7F1A5064u: goto label_7F1A5064;
    case 0x7F1A508Cu: goto label_7F1A508C;
    case 0x7F1A50B8u: goto label_7F1A50B8;
    case 0x7F1A5144u: goto label_7F1A5144;
    case 0x7F1A52F4u: goto label_7F1A52F4;
    case 0x7F1A52FCu: goto label_7F1A52FC;
    case 0x7F1A531Cu: goto label_7F1A531C;
    case 0x7F1A532Cu: goto label_7F1A532C;
    case 0x7F1A5340u: goto label_7F1A5340;
    case 0x7F1A5390u: goto label_7F1A5390;
    case 0x7F1A53C0u: goto label_7F1A53C0;
    case 0x7F1A5434u: goto label_7F1A5434;
    case 0x7F1A543Cu: goto label_7F1A543C;
    case 0x7F1A5488u: goto label_7F1A5488;
    case 0x7F1A54D8u: goto label_7F1A54D8;
    case 0x7F1A5560u: goto label_7F1A5560;
    case 0x7F1A561Cu: goto label_7F1A561C;
    case 0x7F1A5650u: goto label_7F1A5650;
    case 0x7F1A56D4u: goto label_7F1A56D4;
    case 0x7F1A56ECu: goto label_7F1A56EC;
    case 0x7F1A5744u: goto label_7F1A5744;
    case 0x7F1A57E0u: goto label_7F1A57E0;
    case 0x7F1A5820u: goto label_7F1A5820;
    case 0x7F1A5830u: goto label_7F1A5830;
    case 0x7F1A5844u: goto label_7F1A5844;
    case 0x7F1A58D4u: goto label_7F1A58D4;
    case 0x7F1A58E0u: goto label_7F1A58E0;
    case 0x7F1A58ECu: goto label_7F1A58EC;
    case 0x7F1A5928u: goto label_7F1A5928;
    case 0x7F1A593Cu: goto label_7F1A593C;
    case 0x7F1A5940u: goto label_7F1A5940;
    case 0x7F1A5954u: goto label_7F1A5954;
    case 0x7F1A5968u: goto label_7F1A5968;
    case 0x7F1A598Cu: goto label_7F1A598C;
    case 0x7F1A5994u: goto label_7F1A5994;
    case 0x7F1A59A8u: goto label_7F1A59A8;
    case 0x7F1A59BCu: goto label_7F1A59BC;
    case 0x7F1A59E0u: goto label_7F1A59E0;
    case 0x7F1A59ECu: goto label_7F1A59EC;
    case 0x7F1A5A1Cu: goto label_7F1A5A1C;
    case 0x7F1A5A20u: goto label_7F1A5A20;
    case 0x7F1A5A2Cu: goto label_7F1A5A2C;
    case 0x7F1A5A48u: goto label_7F1A5A48;
    case 0x7F1A5A4Cu: goto label_7F1A5A4C;
    case 0x7F1A5A90u: goto label_7F1A5A90;
    case 0x7F1A5AACu: goto label_7F1A5AAC;
    case 0x7F1A5AB8u: goto label_7F1A5AB8;
    case 0x7F1A5AD0u: goto label_7F1A5AD0;
    case 0x7F1A5ADCu: goto label_7F1A5ADC;
    case 0x7F1A5AF4u: goto label_7F1A5AF4;
    case 0x7F1A5AFCu: goto label_7F1A5AFC;
    case 0x7F1A5B14u: goto label_7F1A5B14;
    case 0x7F1A5B50u: goto label_7F1A5B50;
    case 0x7F1A5B9Cu: goto label_7F1A5B9C;
    case 0x7F1A5BA4u: goto label_7F1A5BA4;
    case 0x7F1A5BA8u: goto label_7F1A5BA8;
    case 0x7F1A5BC8u: goto label_7F1A5BC8;
    case 0x7F1A5BD0u: goto label_7F1A5BD0;
    case 0x7F1A5BD4u: goto label_7F1A5BD4;
    case 0x7F1A5BF8u: goto label_7F1A5BF8;
    case 0x7F1A5C20u: goto label_7F1A5C20;
    case 0x7F1A5C34u: goto label_7F1A5C34;
    case 0x7F1A5C40u: goto label_7F1A5C40;
    case 0x7F1A5C60u: goto label_7F1A5C60;
    case 0x7F1A5C88u: goto label_7F1A5C88;
    case 0x7F1A5CB4u: goto label_7F1A5CB4;
    case 0x7F1A5CC0u: goto label_7F1A5CC0;
    case 0x7F1A5CC8u: goto label_7F1A5CC8;
    case 0x7F1A5CD0u: goto label_7F1A5CD0;
    case 0x7F1A5CD8u: goto label_7F1A5CD8;
    case 0x7F1A5CE8u: goto label_7F1A5CE8;
    case 0x7F1A5CF4u: goto label_7F1A5CF4;
    case 0x7F1A5D78u: goto label_7F1A5D78;
    case 0x7F1A5D94u: goto label_7F1A5D94;
    case 0x7F1A5DCCu: goto label_7F1A5DCC;
    case 0x7F1A5DDCu: goto label_7F1A5DDC;
    case 0x7F1A5E38u: goto label_7F1A5E38;
    case 0x7F1A5E54u: goto label_7F1A5E54;
    case 0x7F1A5E88u: goto label_7F1A5E88;
    case 0x7F1A5E94u: goto label_7F1A5E94;
    case 0x7F1A5EA4u: goto label_7F1A5EA4;
    case 0x7F1A5F34u: goto label_7F1A5F34;
    case 0x7F1A60A8u: goto label_7F1A60A8;
    case 0x7F1A60CCu: goto label_7F1A60CC;
    case 0x7F1A60D8u: goto label_7F1A60D8;
    case 0x7F1A6110u: goto label_7F1A6110;
    case 0x7F1A6158u: goto label_7F1A6158;
    case 0x7F1A6174u: goto label_7F1A6174;
    case 0x7F1A626Cu: goto label_7F1A626C;
    case 0x7F1A627Cu: goto label_7F1A627C;
    case 0x7F1A6294u: goto label_7F1A6294;
    case 0x7F1A6320u: goto label_7F1A6320;
    case 0x7F1A6328u: goto label_7F1A6328;
    case 0x7F1A63A0u: goto label_7F1A63A0;
    case 0x7F1A63BCu: goto label_7F1A63BC;
    case 0x7F1A6420u: goto label_7F1A6420;
    case 0x7F1A6430u: goto label_7F1A6430;
    case 0x7F1A6448u: goto label_7F1A6448;
    case 0x7F1A64E0u: goto label_7F1A64E0;
    case 0x7F1A64ECu: goto label_7F1A64EC;
    case 0x7F1A6534u: goto label_7F1A6534;
    case 0x7F1A6540u: goto label_7F1A6540;
    case 0x7F1A6588u: goto label_7F1A6588;
    case 0x7F1A6594u: goto label_7F1A6594;
    case 0x7F1A65E8u: goto label_7F1A65E8;
    case 0x7F1A65F4u: goto label_7F1A65F4;
    case 0x7F1A663Cu: goto label_7F1A663C;
    case 0x7F1A6648u: goto label_7F1A6648;
    case 0x7F1A6690u: goto label_7F1A6690;
    case 0x7F1A669Cu: goto label_7F1A669C;
    case 0x7F1A66F0u: goto label_7F1A66F0;
    case 0x7F1A66FCu: goto label_7F1A66FC;
    case 0x7F1A6744u: goto label_7F1A6744;
    case 0x7F1A6750u: goto label_7F1A6750;
    case 0x7F1A6798u: goto label_7F1A6798;
    case 0x7F1A67B4u: goto label_7F1A67B4;
    case 0x7F1A67F0u: goto label_7F1A67F0;
    case 0x7F1A6800u: goto label_7F1A6800;
    case 0x7F1A6894u: goto label_7F1A6894;
    case 0x7F1A68A0u: goto label_7F1A68A0;
    case 0x7F1A68F0u: goto label_7F1A68F0;
    case 0x7F1A68FCu: goto label_7F1A68FC;
    case 0x7F1A694Cu: goto label_7F1A694C;
    case 0x7F1A6958u: goto label_7F1A6958;
    case 0x7F1A69B0u: goto label_7F1A69B0;
    case 0x7F1A69BCu: goto label_7F1A69BC;
    case 0x7F1A6A10u: goto label_7F1A6A10;
    case 0x7F1A6A1Cu: goto label_7F1A6A1C;
    case 0x7F1A6A68u: goto label_7F1A6A68;
    case 0x7F1A6A74u: goto label_7F1A6A74;
    case 0x7F1A6AC8u: goto label_7F1A6AC8;
    case 0x7F1A6AD4u: goto label_7F1A6AD4;
    case 0x7F1A6B1Cu: goto label_7F1A6B1C;
    case 0x7F1A6B30u: goto label_7F1A6B30;
    case 0x7F1A6B6Cu: goto label_7F1A6B6C;
    case 0x7F1A6B7Cu: goto label_7F1A6B7C;
    case 0x7F1A6BDCu: goto label_7F1A6BDC;
    case 0x7F1A6C24u: goto label_7F1A6C24;
    case 0x7F1A6C30u: goto label_7F1A6C30;
    case 0x7F1A6C44u: goto label_7F1A6C44;
    case 0x7F1A6C8Cu: goto label_7F1A6C8C;
    case 0x7F1A6C98u: goto label_7F1A6C98;
    case 0x7F1A6CE0u: goto label_7F1A6CE0;
    case 0x7F1A6CFCu: goto label_7F1A6CFC;
    case 0x7F1A6D38u: goto label_7F1A6D38;
    case 0x7F1A6D48u: goto label_7F1A6D48;
    case 0x7F1A6D90u: goto label_7F1A6D90;
    case 0x7F1A6DA8u: goto label_7F1A6DA8;
    case 0x7F1A6DC0u: goto label_7F1A6DC0;
    case 0x7F1A6E14u: goto label_7F1A6E14;
    case 0x7F1A6E54u: goto label_7F1A6E54;
    case 0x7F1A6E64u: goto label_7F1A6E64;
    case 0x7F1A6EA4u: goto label_7F1A6EA4;
    case 0x7F1A6EBCu: goto label_7F1A6EBC;
    case 0x7F1A6F04u: goto label_7F1A6F04;
    case 0x7F1A6F50u: goto label_7F1A6F50;
    case 0x7F1A6F6Cu: goto label_7F1A6F6C;
    case 0x7F1A6FA8u: goto label_7F1A6FA8;
    case 0x7F1A6FB8u: goto label_7F1A6FB8;
    case 0x7F1A7050u: goto label_7F1A7050;
    case 0x7F1A7064u: goto label_7F1A7064;
    case 0x7F1A7088u: goto label_7F1A7088;
    case 0x7F1A70B8u: goto label_7F1A70B8;
    case 0x7F1A70C4u: goto label_7F1A70C4;
    case 0x7F1A70C8u: goto label_7F1A70C8;
    case 0x7F1A70DCu: goto label_7F1A70DC;
    case 0x7F1A7104u: goto label_7F1A7104;
    case 0x7F1A711Cu: goto label_7F1A711C;
    case 0x7F1A7120u: goto label_7F1A7120;
    case 0x7F1A7124u: goto label_7F1A7124;
    case 0x7F1A7148u: goto label_7F1A7148;
    case 0x7F1A714Cu: goto label_7F1A714C;
    case 0x7F1A715Cu: goto label_7F1A715C;
    case 0x7F1A735Cu: goto label_7F1A735C;
    case 0x7F1A7370u: goto label_7F1A7370;
    case 0x7F1A73C8u: goto label_7F1A73C8;
    case 0x7F1A73D0u: goto label_7F1A73D0;
    case 0x7F1A73ECu: goto label_7F1A73EC;
    case 0x7F1A7448u: goto label_7F1A7448;
    case 0x7F1A7464u: goto label_7F1A7464;
    case 0x7F1A7478u: goto label_7F1A7478;
    case 0x7F1A7498u: goto label_7F1A7498;
    case 0x7F1A74ACu: goto label_7F1A74AC;
    case 0x7F1A74B8u: goto label_7F1A74B8;
    case 0x7F1A7504u: goto label_7F1A7504;
    case 0x7F1A7520u: goto label_7F1A7520;
    case 0x7F1A7558u: goto label_7F1A7558;
    case 0x7F1A7568u: goto label_7F1A7568;
    case 0x7F1A75CCu: goto label_7F1A75CC;
    case 0x7F1A75E4u: goto label_7F1A75E4;
    case 0x7F1A7600u: goto label_7F1A7600;
    case 0x7F1A7638u: goto label_7F1A7638;
    case 0x7F1A7648u: goto label_7F1A7648;
    case 0x7F1A77F8u: goto label_7F1A77F8;
    case 0x7F1A782Cu: goto label_7F1A782C;
    case 0x7F1A7850u: goto label_7F1A7850;
    case 0x7F1A7870u: goto label_7F1A7870;
    case 0x7F1A788Cu: goto label_7F1A788C;
    case 0x7F1A78A4u: goto label_7F1A78A4;
    case 0x7F1A78C0u: goto label_7F1A78C0;
    case 0x7F1A78D0u: goto label_7F1A78D0;
    case 0x7F1A7A78u: goto label_7F1A7A78;
    case 0x7F1A7A94u: goto label_7F1A7A94;
    case 0x7F1A7C30u: goto label_7F1A7C30;
    case 0x7F1A7C48u: goto label_7F1A7C48;
    case 0x7F1A7C64u: goto label_7F1A7C64;
    case 0x7F1A7C74u: goto label_7F1A7C74;
    case 0x7F1A7CF8u: goto label_7F1A7CF8;
    case 0x7F1A7D10u: goto label_7F1A7D10;
    case 0x7F1A7D2Cu: goto label_7F1A7D2C;
    case 0x7F1A7D3Cu: goto label_7F1A7D3C;
    case 0x7F1A7F10u: goto label_7F1A7F10;
    case 0x7F1A7F24u: goto label_7F1A7F24;
    default: return;
    }
}

