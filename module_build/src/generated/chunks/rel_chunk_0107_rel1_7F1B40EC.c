// DolRecomp output
#include "../generated.h"

static void loop_7F1B4580(CPUState* ctx) {
label_7F1B4580:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1B4580u;
    // 7F1B4580: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B4584u;
    // 7F1B4584: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F1B4588u;
    // 7F1B4588: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1B458Cu;
    // 7F1B458C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F1B4590: bc    16, 0, 0x7F1B4580
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4580u;
                return;
            }
            goto label_7F1B4580;
        }
    }

    ctx->pc = 0x7F1B4594u;
}

static void loop_7F1B4640(CPUState* ctx) {
label_7F1B4640:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1B4640u;
    // 7F1B4640: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B4644u;
    // 7F1B4644: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1B4648u;
    // 7F1B4648: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1B464Cu;
    // 7F1B464C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1B4650: bc    16, 0, 0x7F1B4640
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4640u;
                return;
            }
            goto label_7F1B4640;
        }
    }

    ctx->pc = 0x7F1B4654u;
}

static void loop_7F1B6D70(CPUState* ctx) {
label_7F1B6D70:
    ctx->downcount -= 3;
    ctx->pc = 0x7F1B6D70u;
    // 7F1B6D70: stwx    r8, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    // 7F1B6D74: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F1B6D78: bc    16, 0, 0x7F1B6D70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6D70u;
                return;
            }
            goto label_7F1B6D70;
        }
    }

    ctx->pc = 0x7F1B6D7Cu;
}

void func_7F1B40EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1B40ECu: goto label_7F1B40EC;
    case 0x7F1B40F0u: goto label_7F1B40F0;
    case 0x7F1B40F4u: goto label_7F1B40F4;
    case 0x7F1B40F8u: goto label_7F1B40F8;
    case 0x7F1B40FCu: goto label_7F1B40FC;
    case 0x7F1B4100u: goto label_7F1B4100;
    case 0x7F1B4104u: goto label_7F1B4104;
    case 0x7F1B4108u: goto label_7F1B4108;
    case 0x7F1B410Cu: goto label_7F1B410C;
    case 0x7F1B4110u: goto label_7F1B4110;
    case 0x7F1B4114u: goto label_7F1B4114;
    case 0x7F1B4118u: goto label_7F1B4118;
    case 0x7F1B411Cu: goto label_7F1B411C;
    case 0x7F1B4120u: goto label_7F1B4120;
    case 0x7F1B4124u: goto label_7F1B4124;
    case 0x7F1B4128u: goto label_7F1B4128;
    case 0x7F1B412Cu: goto label_7F1B412C;
    case 0x7F1B4130u: goto label_7F1B4130;
    case 0x7F1B4134u: goto label_7F1B4134;
    case 0x7F1B4138u: goto label_7F1B4138;
    case 0x7F1B413Cu: goto label_7F1B413C;
    case 0x7F1B4140u: goto label_7F1B4140;
    case 0x7F1B4144u: goto label_7F1B4144;
    case 0x7F1B4148u: goto label_7F1B4148;
    case 0x7F1B414Cu: goto label_7F1B414C;
    case 0x7F1B4150u: goto label_7F1B4150;
    case 0x7F1B4154u: goto label_7F1B4154;
    case 0x7F1B4158u: goto label_7F1B4158;
    case 0x7F1B415Cu: goto label_7F1B415C;
    case 0x7F1B4160u: goto label_7F1B4160;
    case 0x7F1B4164u: goto label_7F1B4164;
    case 0x7F1B4168u: goto label_7F1B4168;
    case 0x7F1B416Cu: goto label_7F1B416C;
    case 0x7F1B4170u: goto label_7F1B4170;
    case 0x7F1B4174u: goto label_7F1B4174;
    case 0x7F1B4178u: goto label_7F1B4178;
    case 0x7F1B417Cu: goto label_7F1B417C;
    case 0x7F1B4180u: goto label_7F1B4180;
    case 0x7F1B4184u: goto label_7F1B4184;
    case 0x7F1B4188u: goto label_7F1B4188;
    case 0x7F1B418Cu: goto label_7F1B418C;
    case 0x7F1B4190u: goto label_7F1B4190;
    case 0x7F1B4194u: goto label_7F1B4194;
    case 0x7F1B4198u: goto label_7F1B4198;
    case 0x7F1B419Cu: goto label_7F1B419C;
    case 0x7F1B41A0u: goto label_7F1B41A0;
    case 0x7F1B41A4u: goto label_7F1B41A4;
    case 0x7F1B41A8u: goto label_7F1B41A8;
    case 0x7F1B41ACu: goto label_7F1B41AC;
    case 0x7F1B41B0u: goto label_7F1B41B0;
    case 0x7F1B41B4u: goto label_7F1B41B4;
    case 0x7F1B41B8u: goto label_7F1B41B8;
    case 0x7F1B41BCu: goto label_7F1B41BC;
    case 0x7F1B41C0u: goto label_7F1B41C0;
    case 0x7F1B41C4u: goto label_7F1B41C4;
    case 0x7F1B41C8u: goto label_7F1B41C8;
    case 0x7F1B41CCu: goto label_7F1B41CC;
    case 0x7F1B41D0u: goto label_7F1B41D0;
    case 0x7F1B41D4u: goto label_7F1B41D4;
    case 0x7F1B41D8u: goto label_7F1B41D8;
    case 0x7F1B41DCu: goto label_7F1B41DC;
    case 0x7F1B41E0u: goto label_7F1B41E0;
    case 0x7F1B41E4u: goto label_7F1B41E4;
    case 0x7F1B41E8u: goto label_7F1B41E8;
    case 0x7F1B41ECu: goto label_7F1B41EC;
    case 0x7F1B41F0u: goto label_7F1B41F0;
    case 0x7F1B41F4u: goto label_7F1B41F4;
    case 0x7F1B41F8u: goto label_7F1B41F8;
    case 0x7F1B41FCu: goto label_7F1B41FC;
    case 0x7F1B4200u: goto label_7F1B4200;
    case 0x7F1B4204u: goto label_7F1B4204;
    case 0x7F1B4208u: goto label_7F1B4208;
    case 0x7F1B420Cu: goto label_7F1B420C;
    case 0x7F1B4210u: goto label_7F1B4210;
    case 0x7F1B4214u: goto label_7F1B4214;
    case 0x7F1B4218u: goto label_7F1B4218;
    case 0x7F1B421Cu: goto label_7F1B421C;
    case 0x7F1B4220u: goto label_7F1B4220;
    case 0x7F1B4224u: goto label_7F1B4224;
    case 0x7F1B4228u: goto label_7F1B4228;
    case 0x7F1B422Cu: goto label_7F1B422C;
    case 0x7F1B4230u: goto label_7F1B4230;
    case 0x7F1B4234u: goto label_7F1B4234;
    case 0x7F1B4238u: goto label_7F1B4238;
    case 0x7F1B423Cu: goto label_7F1B423C;
    case 0x7F1B4240u: goto label_7F1B4240;
    case 0x7F1B4244u: goto label_7F1B4244;
    case 0x7F1B4248u: goto label_7F1B4248;
    case 0x7F1B424Cu: goto label_7F1B424C;
    case 0x7F1B4250u: goto label_7F1B4250;
    case 0x7F1B4254u: goto label_7F1B4254;
    case 0x7F1B4258u: goto label_7F1B4258;
    case 0x7F1B425Cu: goto label_7F1B425C;
    case 0x7F1B4260u: goto label_7F1B4260;
    case 0x7F1B4264u: goto label_7F1B4264;
    case 0x7F1B4268u: goto label_7F1B4268;
    case 0x7F1B426Cu: goto label_7F1B426C;
    case 0x7F1B4270u: goto label_7F1B4270;
    case 0x7F1B4274u: goto label_7F1B4274;
    case 0x7F1B4278u: goto label_7F1B4278;
    case 0x7F1B427Cu: goto label_7F1B427C;
    case 0x7F1B4280u: goto label_7F1B4280;
    case 0x7F1B4284u: goto label_7F1B4284;
    case 0x7F1B4288u: goto label_7F1B4288;
    case 0x7F1B428Cu: goto label_7F1B428C;
    case 0x7F1B4290u: goto label_7F1B4290;
    case 0x7F1B4294u: goto label_7F1B4294;
    case 0x7F1B4298u: goto label_7F1B4298;
    case 0x7F1B429Cu: goto label_7F1B429C;
    case 0x7F1B42A0u: goto label_7F1B42A0;
    case 0x7F1B42A4u: goto label_7F1B42A4;
    case 0x7F1B42A8u: goto label_7F1B42A8;
    case 0x7F1B42ACu: goto label_7F1B42AC;
    case 0x7F1B42B0u: goto label_7F1B42B0;
    case 0x7F1B42B4u: goto label_7F1B42B4;
    case 0x7F1B42B8u: goto label_7F1B42B8;
    case 0x7F1B42BCu: goto label_7F1B42BC;
    case 0x7F1B42C0u: goto label_7F1B42C0;
    case 0x7F1B42C4u: goto label_7F1B42C4;
    case 0x7F1B42C8u: goto label_7F1B42C8;
    case 0x7F1B42CCu: goto label_7F1B42CC;
    case 0x7F1B42D0u: goto label_7F1B42D0;
    case 0x7F1B42D4u: goto label_7F1B42D4;
    case 0x7F1B42D8u: goto label_7F1B42D8;
    case 0x7F1B42DCu: goto label_7F1B42DC;
    case 0x7F1B42E0u: goto label_7F1B42E0;
    case 0x7F1B42E4u: goto label_7F1B42E4;
    case 0x7F1B42E8u: goto label_7F1B42E8;
    case 0x7F1B42ECu: goto label_7F1B42EC;
    case 0x7F1B42F0u: goto label_7F1B42F0;
    case 0x7F1B42F4u: goto label_7F1B42F4;
    case 0x7F1B42F8u: goto label_7F1B42F8;
    case 0x7F1B42FCu: goto label_7F1B42FC;
    case 0x7F1B4300u: goto label_7F1B4300;
    case 0x7F1B4304u: goto label_7F1B4304;
    case 0x7F1B4308u: goto label_7F1B4308;
    case 0x7F1B430Cu: goto label_7F1B430C;
    case 0x7F1B4310u: goto label_7F1B4310;
    case 0x7F1B4314u: goto label_7F1B4314;
    case 0x7F1B4318u: goto label_7F1B4318;
    case 0x7F1B431Cu: goto label_7F1B431C;
    case 0x7F1B4320u: goto label_7F1B4320;
    case 0x7F1B4324u: goto label_7F1B4324;
    case 0x7F1B4328u: goto label_7F1B4328;
    case 0x7F1B432Cu: goto label_7F1B432C;
    case 0x7F1B4330u: goto label_7F1B4330;
    case 0x7F1B4334u: goto label_7F1B4334;
    case 0x7F1B4338u: goto label_7F1B4338;
    case 0x7F1B433Cu: goto label_7F1B433C;
    case 0x7F1B4340u: goto label_7F1B4340;
    case 0x7F1B4344u: goto label_7F1B4344;
    case 0x7F1B4348u: goto label_7F1B4348;
    case 0x7F1B434Cu: goto label_7F1B434C;
    case 0x7F1B4350u: goto label_7F1B4350;
    case 0x7F1B4354u: goto label_7F1B4354;
    case 0x7F1B4358u: goto label_7F1B4358;
    case 0x7F1B435Cu: goto label_7F1B435C;
    case 0x7F1B4360u: goto label_7F1B4360;
    case 0x7F1B4364u: goto label_7F1B4364;
    case 0x7F1B4368u: goto label_7F1B4368;
    case 0x7F1B436Cu: goto label_7F1B436C;
    case 0x7F1B4370u: goto label_7F1B4370;
    case 0x7F1B4374u: goto label_7F1B4374;
    case 0x7F1B4378u: goto label_7F1B4378;
    case 0x7F1B437Cu: goto label_7F1B437C;
    case 0x7F1B4380u: goto label_7F1B4380;
    case 0x7F1B4384u: goto label_7F1B4384;
    case 0x7F1B4388u: goto label_7F1B4388;
    case 0x7F1B438Cu: goto label_7F1B438C;
    case 0x7F1B4390u: goto label_7F1B4390;
    case 0x7F1B4394u: goto label_7F1B4394;
    case 0x7F1B4398u: goto label_7F1B4398;
    case 0x7F1B439Cu: goto label_7F1B439C;
    case 0x7F1B43A0u: goto label_7F1B43A0;
    case 0x7F1B43A4u: goto label_7F1B43A4;
    case 0x7F1B43A8u: goto label_7F1B43A8;
    case 0x7F1B43ACu: goto label_7F1B43AC;
    case 0x7F1B43B0u: goto label_7F1B43B0;
    case 0x7F1B43B4u: goto label_7F1B43B4;
    case 0x7F1B43B8u: goto label_7F1B43B8;
    case 0x7F1B43BCu: goto label_7F1B43BC;
    case 0x7F1B43C0u: goto label_7F1B43C0;
    case 0x7F1B43C4u: goto label_7F1B43C4;
    case 0x7F1B43C8u: goto label_7F1B43C8;
    case 0x7F1B43CCu: goto label_7F1B43CC;
    case 0x7F1B43D0u: goto label_7F1B43D0;
    case 0x7F1B43D4u: goto label_7F1B43D4;
    case 0x7F1B43D8u: goto label_7F1B43D8;
    case 0x7F1B43DCu: goto label_7F1B43DC;
    case 0x7F1B43E0u: goto label_7F1B43E0;
    case 0x7F1B43E4u: goto label_7F1B43E4;
    case 0x7F1B43E8u: goto label_7F1B43E8;
    case 0x7F1B43ECu: goto label_7F1B43EC;
    case 0x7F1B43F0u: goto label_7F1B43F0;
    case 0x7F1B43F4u: goto label_7F1B43F4;
    case 0x7F1B43F8u: goto label_7F1B43F8;
    case 0x7F1B43FCu: goto label_7F1B43FC;
    case 0x7F1B4400u: goto label_7F1B4400;
    case 0x7F1B4404u: goto label_7F1B4404;
    case 0x7F1B4408u: goto label_7F1B4408;
    case 0x7F1B440Cu: goto label_7F1B440C;
    case 0x7F1B4410u: goto label_7F1B4410;
    case 0x7F1B4414u: goto label_7F1B4414;
    case 0x7F1B4418u: goto label_7F1B4418;
    case 0x7F1B441Cu: goto label_7F1B441C;
    case 0x7F1B4420u: goto label_7F1B4420;
    case 0x7F1B4424u: goto label_7F1B4424;
    case 0x7F1B4428u: goto label_7F1B4428;
    case 0x7F1B442Cu: goto label_7F1B442C;
    case 0x7F1B4430u: goto label_7F1B4430;
    case 0x7F1B4434u: goto label_7F1B4434;
    case 0x7F1B4438u: goto label_7F1B4438;
    case 0x7F1B443Cu: goto label_7F1B443C;
    case 0x7F1B4440u: goto label_7F1B4440;
    case 0x7F1B4444u: goto label_7F1B4444;
    case 0x7F1B4448u: goto label_7F1B4448;
    case 0x7F1B444Cu: goto label_7F1B444C;
    case 0x7F1B4450u: goto label_7F1B4450;
    case 0x7F1B4454u: goto label_7F1B4454;
    case 0x7F1B4458u: goto label_7F1B4458;
    case 0x7F1B445Cu: goto label_7F1B445C;
    case 0x7F1B4460u: goto label_7F1B4460;
    case 0x7F1B4464u: goto label_7F1B4464;
    case 0x7F1B4468u: goto label_7F1B4468;
    case 0x7F1B446Cu: goto label_7F1B446C;
    case 0x7F1B4470u: goto label_7F1B4470;
    case 0x7F1B4474u: goto label_7F1B4474;
    case 0x7F1B4478u: goto label_7F1B4478;
    case 0x7F1B447Cu: goto label_7F1B447C;
    case 0x7F1B4480u: goto label_7F1B4480;
    case 0x7F1B4484u: goto label_7F1B4484;
    case 0x7F1B4488u: goto label_7F1B4488;
    case 0x7F1B448Cu: goto label_7F1B448C;
    case 0x7F1B4490u: goto label_7F1B4490;
    case 0x7F1B4494u: goto label_7F1B4494;
    case 0x7F1B4498u: goto label_7F1B4498;
    case 0x7F1B449Cu: goto label_7F1B449C;
    case 0x7F1B44A0u: goto label_7F1B44A0;
    case 0x7F1B44A4u: goto label_7F1B44A4;
    case 0x7F1B44A8u: goto label_7F1B44A8;
    case 0x7F1B44ACu: goto label_7F1B44AC;
    case 0x7F1B44B0u: goto label_7F1B44B0;
    case 0x7F1B44B4u: goto label_7F1B44B4;
    case 0x7F1B44B8u: goto label_7F1B44B8;
    case 0x7F1B44BCu: goto label_7F1B44BC;
    case 0x7F1B44C0u: goto label_7F1B44C0;
    case 0x7F1B44C4u: goto label_7F1B44C4;
    case 0x7F1B44C8u: goto label_7F1B44C8;
    case 0x7F1B44CCu: goto label_7F1B44CC;
    case 0x7F1B44D0u: goto label_7F1B44D0;
    case 0x7F1B44D4u: goto label_7F1B44D4;
    case 0x7F1B44D8u: goto label_7F1B44D8;
    case 0x7F1B44DCu: goto label_7F1B44DC;
    case 0x7F1B44E0u: goto label_7F1B44E0;
    case 0x7F1B44E4u: goto label_7F1B44E4;
    case 0x7F1B44E8u: goto label_7F1B44E8;
    case 0x7F1B44ECu: goto label_7F1B44EC;
    case 0x7F1B44F0u: goto label_7F1B44F0;
    case 0x7F1B44F4u: goto label_7F1B44F4;
    case 0x7F1B44F8u: goto label_7F1B44F8;
    case 0x7F1B44FCu: goto label_7F1B44FC;
    case 0x7F1B4500u: goto label_7F1B4500;
    case 0x7F1B4504u: goto label_7F1B4504;
    case 0x7F1B4508u: goto label_7F1B4508;
    case 0x7F1B450Cu: goto label_7F1B450C;
    case 0x7F1B4510u: goto label_7F1B4510;
    case 0x7F1B4514u: goto label_7F1B4514;
    case 0x7F1B4518u: goto label_7F1B4518;
    case 0x7F1B451Cu: goto label_7F1B451C;
    case 0x7F1B4520u: goto label_7F1B4520;
    case 0x7F1B4524u: goto label_7F1B4524;
    case 0x7F1B4528u: goto label_7F1B4528;
    case 0x7F1B452Cu: goto label_7F1B452C;
    case 0x7F1B4530u: goto label_7F1B4530;
    case 0x7F1B4534u: goto label_7F1B4534;
    case 0x7F1B4538u: goto label_7F1B4538;
    case 0x7F1B453Cu: goto label_7F1B453C;
    case 0x7F1B4540u: goto label_7F1B4540;
    case 0x7F1B4544u: goto label_7F1B4544;
    case 0x7F1B4548u: goto label_7F1B4548;
    case 0x7F1B454Cu: goto label_7F1B454C;
    case 0x7F1B4550u: goto label_7F1B4550;
    case 0x7F1B4554u: goto label_7F1B4554;
    case 0x7F1B4558u: goto label_7F1B4558;
    case 0x7F1B455Cu: goto label_7F1B455C;
    case 0x7F1B4560u: goto label_7F1B4560;
    case 0x7F1B4564u: goto label_7F1B4564;
    case 0x7F1B4568u: goto label_7F1B4568;
    case 0x7F1B456Cu: goto label_7F1B456C;
    case 0x7F1B4570u: goto label_7F1B4570;
    case 0x7F1B4574u: goto label_7F1B4574;
    case 0x7F1B4578u: goto label_7F1B4578;
    case 0x7F1B457Cu: goto label_7F1B457C;
    case 0x7F1B4580u: goto label_7F1B4580;
    case 0x7F1B4584u: goto label_7F1B4584;
    case 0x7F1B4588u: goto label_7F1B4588;
    case 0x7F1B458Cu: goto label_7F1B458C;
    case 0x7F1B4590u: goto label_7F1B4590;
    case 0x7F1B4594u: goto label_7F1B4594;
    case 0x7F1B4598u: goto label_7F1B4598;
    case 0x7F1B459Cu: goto label_7F1B459C;
    case 0x7F1B45A0u: goto label_7F1B45A0;
    case 0x7F1B45A4u: goto label_7F1B45A4;
    case 0x7F1B45A8u: goto label_7F1B45A8;
    case 0x7F1B45ACu: goto label_7F1B45AC;
    case 0x7F1B45B0u: goto label_7F1B45B0;
    case 0x7F1B45B4u: goto label_7F1B45B4;
    case 0x7F1B45B8u: goto label_7F1B45B8;
    case 0x7F1B45BCu: goto label_7F1B45BC;
    case 0x7F1B45C0u: goto label_7F1B45C0;
    case 0x7F1B45C4u: goto label_7F1B45C4;
    case 0x7F1B45C8u: goto label_7F1B45C8;
    case 0x7F1B45CCu: goto label_7F1B45CC;
    case 0x7F1B45D0u: goto label_7F1B45D0;
    case 0x7F1B45D4u: goto label_7F1B45D4;
    case 0x7F1B45D8u: goto label_7F1B45D8;
    case 0x7F1B45DCu: goto label_7F1B45DC;
    case 0x7F1B45E0u: goto label_7F1B45E0;
    case 0x7F1B45E4u: goto label_7F1B45E4;
    case 0x7F1B45E8u: goto label_7F1B45E8;
    case 0x7F1B45ECu: goto label_7F1B45EC;
    case 0x7F1B45F0u: goto label_7F1B45F0;
    case 0x7F1B45F4u: goto label_7F1B45F4;
    case 0x7F1B45F8u: goto label_7F1B45F8;
    case 0x7F1B45FCu: goto label_7F1B45FC;
    case 0x7F1B4600u: goto label_7F1B4600;
    case 0x7F1B4604u: goto label_7F1B4604;
    case 0x7F1B4608u: goto label_7F1B4608;
    case 0x7F1B460Cu: goto label_7F1B460C;
    case 0x7F1B4610u: goto label_7F1B4610;
    case 0x7F1B4614u: goto label_7F1B4614;
    case 0x7F1B4618u: goto label_7F1B4618;
    case 0x7F1B461Cu: goto label_7F1B461C;
    case 0x7F1B4620u: goto label_7F1B4620;
    case 0x7F1B4624u: goto label_7F1B4624;
    case 0x7F1B4628u: goto label_7F1B4628;
    case 0x7F1B462Cu: goto label_7F1B462C;
    case 0x7F1B4630u: goto label_7F1B4630;
    case 0x7F1B4634u: goto label_7F1B4634;
    case 0x7F1B4638u: goto label_7F1B4638;
    case 0x7F1B463Cu: goto label_7F1B463C;
    case 0x7F1B4640u: goto label_7F1B4640;
    case 0x7F1B4644u: goto label_7F1B4644;
    case 0x7F1B4648u: goto label_7F1B4648;
    case 0x7F1B464Cu: goto label_7F1B464C;
    case 0x7F1B4650u: goto label_7F1B4650;
    case 0x7F1B4654u: goto label_7F1B4654;
    case 0x7F1B4658u: goto label_7F1B4658;
    case 0x7F1B465Cu: goto label_7F1B465C;
    case 0x7F1B4660u: goto label_7F1B4660;
    case 0x7F1B4664u: goto label_7F1B4664;
    case 0x7F1B4668u: goto label_7F1B4668;
    case 0x7F1B466Cu: goto label_7F1B466C;
    case 0x7F1B4670u: goto label_7F1B4670;
    case 0x7F1B4674u: goto label_7F1B4674;
    case 0x7F1B4678u: goto label_7F1B4678;
    case 0x7F1B467Cu: goto label_7F1B467C;
    case 0x7F1B4680u: goto label_7F1B4680;
    case 0x7F1B4684u: goto label_7F1B4684;
    case 0x7F1B4688u: goto label_7F1B4688;
    case 0x7F1B468Cu: goto label_7F1B468C;
    case 0x7F1B4690u: goto label_7F1B4690;
    case 0x7F1B4694u: goto label_7F1B4694;
    case 0x7F1B4698u: goto label_7F1B4698;
    case 0x7F1B469Cu: goto label_7F1B469C;
    case 0x7F1B46A0u: goto label_7F1B46A0;
    case 0x7F1B46A4u: goto label_7F1B46A4;
    case 0x7F1B46A8u: goto label_7F1B46A8;
    case 0x7F1B46ACu: goto label_7F1B46AC;
    case 0x7F1B46B0u: goto label_7F1B46B0;
    case 0x7F1B46B4u: goto label_7F1B46B4;
    case 0x7F1B46B8u: goto label_7F1B46B8;
    case 0x7F1B46BCu: goto label_7F1B46BC;
    case 0x7F1B46C0u: goto label_7F1B46C0;
    case 0x7F1B46C4u: goto label_7F1B46C4;
    case 0x7F1B46C8u: goto label_7F1B46C8;
    case 0x7F1B46CCu: goto label_7F1B46CC;
    case 0x7F1B46D0u: goto label_7F1B46D0;
    case 0x7F1B46D4u: goto label_7F1B46D4;
    case 0x7F1B46D8u: goto label_7F1B46D8;
    case 0x7F1B46DCu: goto label_7F1B46DC;
    case 0x7F1B46E0u: goto label_7F1B46E0;
    case 0x7F1B46E4u: goto label_7F1B46E4;
    case 0x7F1B46E8u: goto label_7F1B46E8;
    case 0x7F1B46ECu: goto label_7F1B46EC;
    case 0x7F1B46F0u: goto label_7F1B46F0;
    case 0x7F1B46F4u: goto label_7F1B46F4;
    case 0x7F1B46F8u: goto label_7F1B46F8;
    case 0x7F1B46FCu: goto label_7F1B46FC;
    case 0x7F1B4700u: goto label_7F1B4700;
    case 0x7F1B4704u: goto label_7F1B4704;
    case 0x7F1B4708u: goto label_7F1B4708;
    case 0x7F1B470Cu: goto label_7F1B470C;
    case 0x7F1B4710u: goto label_7F1B4710;
    case 0x7F1B4714u: goto label_7F1B4714;
    case 0x7F1B4718u: goto label_7F1B4718;
    case 0x7F1B471Cu: goto label_7F1B471C;
    case 0x7F1B4720u: goto label_7F1B4720;
    case 0x7F1B4724u: goto label_7F1B4724;
    case 0x7F1B4728u: goto label_7F1B4728;
    case 0x7F1B472Cu: goto label_7F1B472C;
    case 0x7F1B4730u: goto label_7F1B4730;
    case 0x7F1B4734u: goto label_7F1B4734;
    case 0x7F1B4738u: goto label_7F1B4738;
    case 0x7F1B473Cu: goto label_7F1B473C;
    case 0x7F1B4740u: goto label_7F1B4740;
    case 0x7F1B4744u: goto label_7F1B4744;
    case 0x7F1B4748u: goto label_7F1B4748;
    case 0x7F1B474Cu: goto label_7F1B474C;
    case 0x7F1B4750u: goto label_7F1B4750;
    case 0x7F1B4754u: goto label_7F1B4754;
    case 0x7F1B4758u: goto label_7F1B4758;
    case 0x7F1B475Cu: goto label_7F1B475C;
    case 0x7F1B4760u: goto label_7F1B4760;
    case 0x7F1B4764u: goto label_7F1B4764;
    case 0x7F1B4768u: goto label_7F1B4768;
    case 0x7F1B476Cu: goto label_7F1B476C;
    case 0x7F1B4770u: goto label_7F1B4770;
    case 0x7F1B4774u: goto label_7F1B4774;
    case 0x7F1B4778u: goto label_7F1B4778;
    case 0x7F1B477Cu: goto label_7F1B477C;
    case 0x7F1B4780u: goto label_7F1B4780;
    case 0x7F1B4784u: goto label_7F1B4784;
    case 0x7F1B4788u: goto label_7F1B4788;
    case 0x7F1B478Cu: goto label_7F1B478C;
    case 0x7F1B4790u: goto label_7F1B4790;
    case 0x7F1B4794u: goto label_7F1B4794;
    case 0x7F1B4798u: goto label_7F1B4798;
    case 0x7F1B479Cu: goto label_7F1B479C;
    case 0x7F1B47A0u: goto label_7F1B47A0;
    case 0x7F1B47A4u: goto label_7F1B47A4;
    case 0x7F1B47A8u: goto label_7F1B47A8;
    case 0x7F1B47ACu: goto label_7F1B47AC;
    case 0x7F1B47B0u: goto label_7F1B47B0;
    case 0x7F1B47B4u: goto label_7F1B47B4;
    case 0x7F1B47B8u: goto label_7F1B47B8;
    case 0x7F1B47BCu: goto label_7F1B47BC;
    case 0x7F1B47C0u: goto label_7F1B47C0;
    case 0x7F1B47C4u: goto label_7F1B47C4;
    case 0x7F1B47C8u: goto label_7F1B47C8;
    case 0x7F1B47CCu: goto label_7F1B47CC;
    case 0x7F1B47D0u: goto label_7F1B47D0;
    case 0x7F1B47D4u: goto label_7F1B47D4;
    case 0x7F1B47D8u: goto label_7F1B47D8;
    case 0x7F1B47DCu: goto label_7F1B47DC;
    case 0x7F1B47E0u: goto label_7F1B47E0;
    case 0x7F1B47E4u: goto label_7F1B47E4;
    case 0x7F1B47E8u: goto label_7F1B47E8;
    case 0x7F1B47ECu: goto label_7F1B47EC;
    case 0x7F1B47F0u: goto label_7F1B47F0;
    case 0x7F1B47F4u: goto label_7F1B47F4;
    case 0x7F1B47F8u: goto label_7F1B47F8;
    case 0x7F1B47FCu: goto label_7F1B47FC;
    case 0x7F1B4800u: goto label_7F1B4800;
    case 0x7F1B4804u: goto label_7F1B4804;
    case 0x7F1B4808u: goto label_7F1B4808;
    case 0x7F1B480Cu: goto label_7F1B480C;
    case 0x7F1B4810u: goto label_7F1B4810;
    case 0x7F1B4814u: goto label_7F1B4814;
    case 0x7F1B4818u: goto label_7F1B4818;
    case 0x7F1B481Cu: goto label_7F1B481C;
    case 0x7F1B4820u: goto label_7F1B4820;
    case 0x7F1B4824u: goto label_7F1B4824;
    case 0x7F1B4828u: goto label_7F1B4828;
    case 0x7F1B482Cu: goto label_7F1B482C;
    case 0x7F1B4830u: goto label_7F1B4830;
    case 0x7F1B4834u: goto label_7F1B4834;
    case 0x7F1B4838u: goto label_7F1B4838;
    case 0x7F1B483Cu: goto label_7F1B483C;
    case 0x7F1B4840u: goto label_7F1B4840;
    case 0x7F1B4844u: goto label_7F1B4844;
    case 0x7F1B4848u: goto label_7F1B4848;
    case 0x7F1B484Cu: goto label_7F1B484C;
    case 0x7F1B4850u: goto label_7F1B4850;
    case 0x7F1B4854u: goto label_7F1B4854;
    case 0x7F1B4858u: goto label_7F1B4858;
    case 0x7F1B485Cu: goto label_7F1B485C;
    case 0x7F1B4860u: goto label_7F1B4860;
    case 0x7F1B4864u: goto label_7F1B4864;
    case 0x7F1B4868u: goto label_7F1B4868;
    case 0x7F1B486Cu: goto label_7F1B486C;
    case 0x7F1B4870u: goto label_7F1B4870;
    case 0x7F1B4874u: goto label_7F1B4874;
    case 0x7F1B4878u: goto label_7F1B4878;
    case 0x7F1B487Cu: goto label_7F1B487C;
    case 0x7F1B4880u: goto label_7F1B4880;
    case 0x7F1B4884u: goto label_7F1B4884;
    case 0x7F1B4888u: goto label_7F1B4888;
    case 0x7F1B488Cu: goto label_7F1B488C;
    case 0x7F1B4890u: goto label_7F1B4890;
    case 0x7F1B4894u: goto label_7F1B4894;
    case 0x7F1B4898u: goto label_7F1B4898;
    case 0x7F1B489Cu: goto label_7F1B489C;
    case 0x7F1B48A0u: goto label_7F1B48A0;
    case 0x7F1B48A4u: goto label_7F1B48A4;
    case 0x7F1B48A8u: goto label_7F1B48A8;
    case 0x7F1B48ACu: goto label_7F1B48AC;
    case 0x7F1B48B0u: goto label_7F1B48B0;
    case 0x7F1B48B4u: goto label_7F1B48B4;
    case 0x7F1B48B8u: goto label_7F1B48B8;
    case 0x7F1B48BCu: goto label_7F1B48BC;
    case 0x7F1B48C0u: goto label_7F1B48C0;
    case 0x7F1B48C4u: goto label_7F1B48C4;
    case 0x7F1B48C8u: goto label_7F1B48C8;
    case 0x7F1B48CCu: goto label_7F1B48CC;
    case 0x7F1B48D0u: goto label_7F1B48D0;
    case 0x7F1B48D4u: goto label_7F1B48D4;
    case 0x7F1B48D8u: goto label_7F1B48D8;
    case 0x7F1B48DCu: goto label_7F1B48DC;
    case 0x7F1B48E0u: goto label_7F1B48E0;
    case 0x7F1B48E4u: goto label_7F1B48E4;
    case 0x7F1B48E8u: goto label_7F1B48E8;
    case 0x7F1B48ECu: goto label_7F1B48EC;
    case 0x7F1B48F0u: goto label_7F1B48F0;
    case 0x7F1B48F4u: goto label_7F1B48F4;
    case 0x7F1B48F8u: goto label_7F1B48F8;
    case 0x7F1B48FCu: goto label_7F1B48FC;
    case 0x7F1B4900u: goto label_7F1B4900;
    case 0x7F1B4904u: goto label_7F1B4904;
    case 0x7F1B4908u: goto label_7F1B4908;
    case 0x7F1B490Cu: goto label_7F1B490C;
    case 0x7F1B4910u: goto label_7F1B4910;
    case 0x7F1B4914u: goto label_7F1B4914;
    case 0x7F1B4918u: goto label_7F1B4918;
    case 0x7F1B491Cu: goto label_7F1B491C;
    case 0x7F1B4920u: goto label_7F1B4920;
    case 0x7F1B4924u: goto label_7F1B4924;
    case 0x7F1B4928u: goto label_7F1B4928;
    case 0x7F1B492Cu: goto label_7F1B492C;
    case 0x7F1B4930u: goto label_7F1B4930;
    case 0x7F1B4934u: goto label_7F1B4934;
    case 0x7F1B4938u: goto label_7F1B4938;
    case 0x7F1B493Cu: goto label_7F1B493C;
    case 0x7F1B4940u: goto label_7F1B4940;
    case 0x7F1B4944u: goto label_7F1B4944;
    case 0x7F1B4948u: goto label_7F1B4948;
    case 0x7F1B494Cu: goto label_7F1B494C;
    case 0x7F1B4950u: goto label_7F1B4950;
    case 0x7F1B4954u: goto label_7F1B4954;
    case 0x7F1B4958u: goto label_7F1B4958;
    case 0x7F1B495Cu: goto label_7F1B495C;
    case 0x7F1B4960u: goto label_7F1B4960;
    case 0x7F1B4964u: goto label_7F1B4964;
    case 0x7F1B4968u: goto label_7F1B4968;
    case 0x7F1B496Cu: goto label_7F1B496C;
    case 0x7F1B4970u: goto label_7F1B4970;
    case 0x7F1B4974u: goto label_7F1B4974;
    case 0x7F1B4978u: goto label_7F1B4978;
    case 0x7F1B497Cu: goto label_7F1B497C;
    case 0x7F1B4980u: goto label_7F1B4980;
    case 0x7F1B4984u: goto label_7F1B4984;
    case 0x7F1B4988u: goto label_7F1B4988;
    case 0x7F1B498Cu: goto label_7F1B498C;
    case 0x7F1B4990u: goto label_7F1B4990;
    case 0x7F1B4994u: goto label_7F1B4994;
    case 0x7F1B4998u: goto label_7F1B4998;
    case 0x7F1B499Cu: goto label_7F1B499C;
    case 0x7F1B49A0u: goto label_7F1B49A0;
    case 0x7F1B49A4u: goto label_7F1B49A4;
    case 0x7F1B49A8u: goto label_7F1B49A8;
    case 0x7F1B49ACu: goto label_7F1B49AC;
    case 0x7F1B49B0u: goto label_7F1B49B0;
    case 0x7F1B49B4u: goto label_7F1B49B4;
    case 0x7F1B49B8u: goto label_7F1B49B8;
    case 0x7F1B49BCu: goto label_7F1B49BC;
    case 0x7F1B49C0u: goto label_7F1B49C0;
    case 0x7F1B49C4u: goto label_7F1B49C4;
    case 0x7F1B49C8u: goto label_7F1B49C8;
    case 0x7F1B49CCu: goto label_7F1B49CC;
    case 0x7F1B49D0u: goto label_7F1B49D0;
    case 0x7F1B49D4u: goto label_7F1B49D4;
    case 0x7F1B49D8u: goto label_7F1B49D8;
    case 0x7F1B49DCu: goto label_7F1B49DC;
    case 0x7F1B49E0u: goto label_7F1B49E0;
    case 0x7F1B49E4u: goto label_7F1B49E4;
    case 0x7F1B49E8u: goto label_7F1B49E8;
    case 0x7F1B49ECu: goto label_7F1B49EC;
    case 0x7F1B49F0u: goto label_7F1B49F0;
    case 0x7F1B49F4u: goto label_7F1B49F4;
    case 0x7F1B49F8u: goto label_7F1B49F8;
    case 0x7F1B49FCu: goto label_7F1B49FC;
    case 0x7F1B4A00u: goto label_7F1B4A00;
    case 0x7F1B4A04u: goto label_7F1B4A04;
    case 0x7F1B4A08u: goto label_7F1B4A08;
    case 0x7F1B4A0Cu: goto label_7F1B4A0C;
    case 0x7F1B4A10u: goto label_7F1B4A10;
    case 0x7F1B4A14u: goto label_7F1B4A14;
    case 0x7F1B4A18u: goto label_7F1B4A18;
    case 0x7F1B4A1Cu: goto label_7F1B4A1C;
    case 0x7F1B4A20u: goto label_7F1B4A20;
    case 0x7F1B4A24u: goto label_7F1B4A24;
    case 0x7F1B4A28u: goto label_7F1B4A28;
    case 0x7F1B4A2Cu: goto label_7F1B4A2C;
    case 0x7F1B4A30u: goto label_7F1B4A30;
    case 0x7F1B4A34u: goto label_7F1B4A34;
    case 0x7F1B4A38u: goto label_7F1B4A38;
    case 0x7F1B4A3Cu: goto label_7F1B4A3C;
    case 0x7F1B4A40u: goto label_7F1B4A40;
    case 0x7F1B4A44u: goto label_7F1B4A44;
    case 0x7F1B4A48u: goto label_7F1B4A48;
    case 0x7F1B4A4Cu: goto label_7F1B4A4C;
    case 0x7F1B4A50u: goto label_7F1B4A50;
    case 0x7F1B4A54u: goto label_7F1B4A54;
    case 0x7F1B4A58u: goto label_7F1B4A58;
    case 0x7F1B4A5Cu: goto label_7F1B4A5C;
    case 0x7F1B4A60u: goto label_7F1B4A60;
    case 0x7F1B4A64u: goto label_7F1B4A64;
    case 0x7F1B4A68u: goto label_7F1B4A68;
    case 0x7F1B4A6Cu: goto label_7F1B4A6C;
    case 0x7F1B4A70u: goto label_7F1B4A70;
    case 0x7F1B4A74u: goto label_7F1B4A74;
    case 0x7F1B4A78u: goto label_7F1B4A78;
    case 0x7F1B4A7Cu: goto label_7F1B4A7C;
    case 0x7F1B4A80u: goto label_7F1B4A80;
    case 0x7F1B4A84u: goto label_7F1B4A84;
    case 0x7F1B4A88u: goto label_7F1B4A88;
    case 0x7F1B4A8Cu: goto label_7F1B4A8C;
    case 0x7F1B4A90u: goto label_7F1B4A90;
    case 0x7F1B4A94u: goto label_7F1B4A94;
    case 0x7F1B4A98u: goto label_7F1B4A98;
    case 0x7F1B4A9Cu: goto label_7F1B4A9C;
    case 0x7F1B4AA0u: goto label_7F1B4AA0;
    case 0x7F1B4AA4u: goto label_7F1B4AA4;
    case 0x7F1B4AA8u: goto label_7F1B4AA8;
    case 0x7F1B4AACu: goto label_7F1B4AAC;
    case 0x7F1B4AB0u: goto label_7F1B4AB0;
    case 0x7F1B4AB4u: goto label_7F1B4AB4;
    case 0x7F1B4AB8u: goto label_7F1B4AB8;
    case 0x7F1B4ABCu: goto label_7F1B4ABC;
    case 0x7F1B4AC0u: goto label_7F1B4AC0;
    case 0x7F1B4AC4u: goto label_7F1B4AC4;
    case 0x7F1B4AC8u: goto label_7F1B4AC8;
    case 0x7F1B4ACCu: goto label_7F1B4ACC;
    case 0x7F1B4AD0u: goto label_7F1B4AD0;
    case 0x7F1B4AD4u: goto label_7F1B4AD4;
    case 0x7F1B4AD8u: goto label_7F1B4AD8;
    case 0x7F1B4ADCu: goto label_7F1B4ADC;
    case 0x7F1B4AE0u: goto label_7F1B4AE0;
    case 0x7F1B4AE4u: goto label_7F1B4AE4;
    case 0x7F1B4AE8u: goto label_7F1B4AE8;
    case 0x7F1B4AECu: goto label_7F1B4AEC;
    case 0x7F1B4AF0u: goto label_7F1B4AF0;
    case 0x7F1B4AF4u: goto label_7F1B4AF4;
    case 0x7F1B4AF8u: goto label_7F1B4AF8;
    case 0x7F1B4AFCu: goto label_7F1B4AFC;
    case 0x7F1B4B00u: goto label_7F1B4B00;
    case 0x7F1B4B04u: goto label_7F1B4B04;
    case 0x7F1B4B08u: goto label_7F1B4B08;
    case 0x7F1B4B0Cu: goto label_7F1B4B0C;
    case 0x7F1B4B10u: goto label_7F1B4B10;
    case 0x7F1B4B14u: goto label_7F1B4B14;
    case 0x7F1B4B18u: goto label_7F1B4B18;
    case 0x7F1B4B1Cu: goto label_7F1B4B1C;
    case 0x7F1B4B20u: goto label_7F1B4B20;
    case 0x7F1B4B24u: goto label_7F1B4B24;
    case 0x7F1B4B28u: goto label_7F1B4B28;
    case 0x7F1B4B2Cu: goto label_7F1B4B2C;
    case 0x7F1B4B30u: goto label_7F1B4B30;
    case 0x7F1B4B34u: goto label_7F1B4B34;
    case 0x7F1B4B38u: goto label_7F1B4B38;
    case 0x7F1B4B3Cu: goto label_7F1B4B3C;
    case 0x7F1B4B40u: goto label_7F1B4B40;
    case 0x7F1B4B44u: goto label_7F1B4B44;
    case 0x7F1B4B48u: goto label_7F1B4B48;
    case 0x7F1B4B4Cu: goto label_7F1B4B4C;
    case 0x7F1B4B50u: goto label_7F1B4B50;
    case 0x7F1B4B54u: goto label_7F1B4B54;
    case 0x7F1B4B58u: goto label_7F1B4B58;
    case 0x7F1B4B5Cu: goto label_7F1B4B5C;
    case 0x7F1B4B60u: goto label_7F1B4B60;
    case 0x7F1B4B64u: goto label_7F1B4B64;
    case 0x7F1B4B68u: goto label_7F1B4B68;
    case 0x7F1B4B6Cu: goto label_7F1B4B6C;
    case 0x7F1B4B70u: goto label_7F1B4B70;
    case 0x7F1B4B74u: goto label_7F1B4B74;
    case 0x7F1B4B78u: goto label_7F1B4B78;
    case 0x7F1B4B7Cu: goto label_7F1B4B7C;
    case 0x7F1B4B80u: goto label_7F1B4B80;
    case 0x7F1B4B84u: goto label_7F1B4B84;
    case 0x7F1B4B88u: goto label_7F1B4B88;
    case 0x7F1B4B8Cu: goto label_7F1B4B8C;
    case 0x7F1B4B90u: goto label_7F1B4B90;
    case 0x7F1B4B94u: goto label_7F1B4B94;
    case 0x7F1B4B98u: goto label_7F1B4B98;
    case 0x7F1B4B9Cu: goto label_7F1B4B9C;
    case 0x7F1B4BA0u: goto label_7F1B4BA0;
    case 0x7F1B4BA4u: goto label_7F1B4BA4;
    case 0x7F1B4BA8u: goto label_7F1B4BA8;
    case 0x7F1B4BACu: goto label_7F1B4BAC;
    case 0x7F1B4BB0u: goto label_7F1B4BB0;
    case 0x7F1B4BB4u: goto label_7F1B4BB4;
    case 0x7F1B4BB8u: goto label_7F1B4BB8;
    case 0x7F1B4BBCu: goto label_7F1B4BBC;
    case 0x7F1B4BC0u: goto label_7F1B4BC0;
    case 0x7F1B4BC4u: goto label_7F1B4BC4;
    case 0x7F1B4BC8u: goto label_7F1B4BC8;
    case 0x7F1B4BCCu: goto label_7F1B4BCC;
    case 0x7F1B4BD0u: goto label_7F1B4BD0;
    case 0x7F1B4BD4u: goto label_7F1B4BD4;
    case 0x7F1B4BD8u: goto label_7F1B4BD8;
    case 0x7F1B4BDCu: goto label_7F1B4BDC;
    case 0x7F1B4BE0u: goto label_7F1B4BE0;
    case 0x7F1B4BE4u: goto label_7F1B4BE4;
    case 0x7F1B4BE8u: goto label_7F1B4BE8;
    case 0x7F1B4BECu: goto label_7F1B4BEC;
    case 0x7F1B4BF0u: goto label_7F1B4BF0;
    case 0x7F1B4BF4u: goto label_7F1B4BF4;
    case 0x7F1B4BF8u: goto label_7F1B4BF8;
    case 0x7F1B4BFCu: goto label_7F1B4BFC;
    case 0x7F1B4C00u: goto label_7F1B4C00;
    case 0x7F1B4C04u: goto label_7F1B4C04;
    case 0x7F1B4C08u: goto label_7F1B4C08;
    case 0x7F1B4C0Cu: goto label_7F1B4C0C;
    case 0x7F1B4C10u: goto label_7F1B4C10;
    case 0x7F1B4C14u: goto label_7F1B4C14;
    case 0x7F1B4C18u: goto label_7F1B4C18;
    case 0x7F1B4C1Cu: goto label_7F1B4C1C;
    case 0x7F1B4C20u: goto label_7F1B4C20;
    case 0x7F1B4C24u: goto label_7F1B4C24;
    case 0x7F1B4C28u: goto label_7F1B4C28;
    case 0x7F1B4C2Cu: goto label_7F1B4C2C;
    case 0x7F1B4C30u: goto label_7F1B4C30;
    case 0x7F1B4C34u: goto label_7F1B4C34;
    case 0x7F1B4C38u: goto label_7F1B4C38;
    case 0x7F1B4C3Cu: goto label_7F1B4C3C;
    case 0x7F1B4C40u: goto label_7F1B4C40;
    case 0x7F1B4C44u: goto label_7F1B4C44;
    case 0x7F1B4C48u: goto label_7F1B4C48;
    case 0x7F1B4C4Cu: goto label_7F1B4C4C;
    case 0x7F1B4C50u: goto label_7F1B4C50;
    case 0x7F1B4C54u: goto label_7F1B4C54;
    case 0x7F1B4C58u: goto label_7F1B4C58;
    case 0x7F1B4C5Cu: goto label_7F1B4C5C;
    case 0x7F1B4C60u: goto label_7F1B4C60;
    case 0x7F1B4C64u: goto label_7F1B4C64;
    case 0x7F1B4C68u: goto label_7F1B4C68;
    case 0x7F1B4C6Cu: goto label_7F1B4C6C;
    case 0x7F1B4C70u: goto label_7F1B4C70;
    case 0x7F1B4C74u: goto label_7F1B4C74;
    case 0x7F1B4C78u: goto label_7F1B4C78;
    case 0x7F1B4C7Cu: goto label_7F1B4C7C;
    case 0x7F1B4C80u: goto label_7F1B4C80;
    case 0x7F1B4C84u: goto label_7F1B4C84;
    case 0x7F1B4C88u: goto label_7F1B4C88;
    case 0x7F1B4C8Cu: goto label_7F1B4C8C;
    case 0x7F1B4C90u: goto label_7F1B4C90;
    case 0x7F1B4C94u: goto label_7F1B4C94;
    case 0x7F1B4C98u: goto label_7F1B4C98;
    case 0x7F1B4C9Cu: goto label_7F1B4C9C;
    case 0x7F1B4CA0u: goto label_7F1B4CA0;
    case 0x7F1B4CA4u: goto label_7F1B4CA4;
    case 0x7F1B4CA8u: goto label_7F1B4CA8;
    case 0x7F1B4CACu: goto label_7F1B4CAC;
    case 0x7F1B4CB0u: goto label_7F1B4CB0;
    case 0x7F1B4CB4u: goto label_7F1B4CB4;
    case 0x7F1B4CB8u: goto label_7F1B4CB8;
    case 0x7F1B4CBCu: goto label_7F1B4CBC;
    case 0x7F1B4CC0u: goto label_7F1B4CC0;
    case 0x7F1B4CC4u: goto label_7F1B4CC4;
    case 0x7F1B4CC8u: goto label_7F1B4CC8;
    case 0x7F1B4CCCu: goto label_7F1B4CCC;
    case 0x7F1B4CD0u: goto label_7F1B4CD0;
    case 0x7F1B4CD4u: goto label_7F1B4CD4;
    case 0x7F1B4CD8u: goto label_7F1B4CD8;
    case 0x7F1B4CDCu: goto label_7F1B4CDC;
    case 0x7F1B4CE0u: goto label_7F1B4CE0;
    case 0x7F1B4CE4u: goto label_7F1B4CE4;
    case 0x7F1B4CE8u: goto label_7F1B4CE8;
    case 0x7F1B4CECu: goto label_7F1B4CEC;
    case 0x7F1B4CF0u: goto label_7F1B4CF0;
    case 0x7F1B4CF4u: goto label_7F1B4CF4;
    case 0x7F1B4CF8u: goto label_7F1B4CF8;
    case 0x7F1B4CFCu: goto label_7F1B4CFC;
    case 0x7F1B4D00u: goto label_7F1B4D00;
    case 0x7F1B4D04u: goto label_7F1B4D04;
    case 0x7F1B4D08u: goto label_7F1B4D08;
    case 0x7F1B4D0Cu: goto label_7F1B4D0C;
    case 0x7F1B4D10u: goto label_7F1B4D10;
    case 0x7F1B4D14u: goto label_7F1B4D14;
    case 0x7F1B4D18u: goto label_7F1B4D18;
    case 0x7F1B4D1Cu: goto label_7F1B4D1C;
    case 0x7F1B4D20u: goto label_7F1B4D20;
    case 0x7F1B4D24u: goto label_7F1B4D24;
    case 0x7F1B4D28u: goto label_7F1B4D28;
    case 0x7F1B4D2Cu: goto label_7F1B4D2C;
    case 0x7F1B4D30u: goto label_7F1B4D30;
    case 0x7F1B4D34u: goto label_7F1B4D34;
    case 0x7F1B4D38u: goto label_7F1B4D38;
    case 0x7F1B4D3Cu: goto label_7F1B4D3C;
    case 0x7F1B4D40u: goto label_7F1B4D40;
    case 0x7F1B4D44u: goto label_7F1B4D44;
    case 0x7F1B4D48u: goto label_7F1B4D48;
    case 0x7F1B4D4Cu: goto label_7F1B4D4C;
    case 0x7F1B4D50u: goto label_7F1B4D50;
    case 0x7F1B4D54u: goto label_7F1B4D54;
    case 0x7F1B4D58u: goto label_7F1B4D58;
    case 0x7F1B4D5Cu: goto label_7F1B4D5C;
    case 0x7F1B4D60u: goto label_7F1B4D60;
    case 0x7F1B4D64u: goto label_7F1B4D64;
    case 0x7F1B4D68u: goto label_7F1B4D68;
    case 0x7F1B4D6Cu: goto label_7F1B4D6C;
    case 0x7F1B4D70u: goto label_7F1B4D70;
    case 0x7F1B4D74u: goto label_7F1B4D74;
    case 0x7F1B4D78u: goto label_7F1B4D78;
    case 0x7F1B4D7Cu: goto label_7F1B4D7C;
    case 0x7F1B4D80u: goto label_7F1B4D80;
    case 0x7F1B4D84u: goto label_7F1B4D84;
    case 0x7F1B4D88u: goto label_7F1B4D88;
    case 0x7F1B4D8Cu: goto label_7F1B4D8C;
    case 0x7F1B4D90u: goto label_7F1B4D90;
    case 0x7F1B4D94u: goto label_7F1B4D94;
    case 0x7F1B4D98u: goto label_7F1B4D98;
    case 0x7F1B4D9Cu: goto label_7F1B4D9C;
    case 0x7F1B4DA0u: goto label_7F1B4DA0;
    case 0x7F1B4DA4u: goto label_7F1B4DA4;
    case 0x7F1B4DA8u: goto label_7F1B4DA8;
    case 0x7F1B4DACu: goto label_7F1B4DAC;
    case 0x7F1B4DB0u: goto label_7F1B4DB0;
    case 0x7F1B4DB4u: goto label_7F1B4DB4;
    case 0x7F1B4DB8u: goto label_7F1B4DB8;
    case 0x7F1B4DBCu: goto label_7F1B4DBC;
    case 0x7F1B4DC0u: goto label_7F1B4DC0;
    case 0x7F1B4DC4u: goto label_7F1B4DC4;
    case 0x7F1B4DC8u: goto label_7F1B4DC8;
    case 0x7F1B4DCCu: goto label_7F1B4DCC;
    case 0x7F1B4DD0u: goto label_7F1B4DD0;
    case 0x7F1B4DD4u: goto label_7F1B4DD4;
    case 0x7F1B4DD8u: goto label_7F1B4DD8;
    case 0x7F1B4DDCu: goto label_7F1B4DDC;
    case 0x7F1B4DE0u: goto label_7F1B4DE0;
    case 0x7F1B4DE4u: goto label_7F1B4DE4;
    case 0x7F1B4DE8u: goto label_7F1B4DE8;
    case 0x7F1B4DECu: goto label_7F1B4DEC;
    case 0x7F1B4DF0u: goto label_7F1B4DF0;
    case 0x7F1B4DF4u: goto label_7F1B4DF4;
    case 0x7F1B4DF8u: goto label_7F1B4DF8;
    case 0x7F1B4DFCu: goto label_7F1B4DFC;
    case 0x7F1B4E00u: goto label_7F1B4E00;
    case 0x7F1B4E04u: goto label_7F1B4E04;
    case 0x7F1B4E08u: goto label_7F1B4E08;
    case 0x7F1B4E0Cu: goto label_7F1B4E0C;
    case 0x7F1B4E10u: goto label_7F1B4E10;
    case 0x7F1B4E14u: goto label_7F1B4E14;
    case 0x7F1B4E18u: goto label_7F1B4E18;
    case 0x7F1B4E1Cu: goto label_7F1B4E1C;
    case 0x7F1B4E20u: goto label_7F1B4E20;
    case 0x7F1B4E24u: goto label_7F1B4E24;
    case 0x7F1B4E28u: goto label_7F1B4E28;
    case 0x7F1B4E2Cu: goto label_7F1B4E2C;
    case 0x7F1B4E30u: goto label_7F1B4E30;
    case 0x7F1B4E34u: goto label_7F1B4E34;
    case 0x7F1B4E38u: goto label_7F1B4E38;
    case 0x7F1B4E3Cu: goto label_7F1B4E3C;
    case 0x7F1B4E40u: goto label_7F1B4E40;
    case 0x7F1B4E44u: goto label_7F1B4E44;
    case 0x7F1B4E48u: goto label_7F1B4E48;
    case 0x7F1B4E4Cu: goto label_7F1B4E4C;
    case 0x7F1B4E50u: goto label_7F1B4E50;
    case 0x7F1B4E54u: goto label_7F1B4E54;
    case 0x7F1B4E58u: goto label_7F1B4E58;
    case 0x7F1B4E5Cu: goto label_7F1B4E5C;
    case 0x7F1B4E60u: goto label_7F1B4E60;
    case 0x7F1B4E64u: goto label_7F1B4E64;
    case 0x7F1B4E68u: goto label_7F1B4E68;
    case 0x7F1B4E6Cu: goto label_7F1B4E6C;
    case 0x7F1B4E70u: goto label_7F1B4E70;
    case 0x7F1B4E74u: goto label_7F1B4E74;
    case 0x7F1B4E78u: goto label_7F1B4E78;
    case 0x7F1B4E7Cu: goto label_7F1B4E7C;
    case 0x7F1B4E80u: goto label_7F1B4E80;
    case 0x7F1B4E84u: goto label_7F1B4E84;
    case 0x7F1B4E88u: goto label_7F1B4E88;
    case 0x7F1B4E8Cu: goto label_7F1B4E8C;
    case 0x7F1B4E90u: goto label_7F1B4E90;
    case 0x7F1B4E94u: goto label_7F1B4E94;
    case 0x7F1B4E98u: goto label_7F1B4E98;
    case 0x7F1B4E9Cu: goto label_7F1B4E9C;
    case 0x7F1B4EA0u: goto label_7F1B4EA0;
    case 0x7F1B4EA4u: goto label_7F1B4EA4;
    case 0x7F1B4EA8u: goto label_7F1B4EA8;
    case 0x7F1B4EACu: goto label_7F1B4EAC;
    case 0x7F1B4EB0u: goto label_7F1B4EB0;
    case 0x7F1B4EB4u: goto label_7F1B4EB4;
    case 0x7F1B4EB8u: goto label_7F1B4EB8;
    case 0x7F1B4EBCu: goto label_7F1B4EBC;
    case 0x7F1B4EC0u: goto label_7F1B4EC0;
    case 0x7F1B4EC4u: goto label_7F1B4EC4;
    case 0x7F1B4EC8u: goto label_7F1B4EC8;
    case 0x7F1B4ECCu: goto label_7F1B4ECC;
    case 0x7F1B4ED0u: goto label_7F1B4ED0;
    case 0x7F1B4ED4u: goto label_7F1B4ED4;
    case 0x7F1B4ED8u: goto label_7F1B4ED8;
    case 0x7F1B4EDCu: goto label_7F1B4EDC;
    case 0x7F1B4EE0u: goto label_7F1B4EE0;
    case 0x7F1B4EE4u: goto label_7F1B4EE4;
    case 0x7F1B4EE8u: goto label_7F1B4EE8;
    case 0x7F1B4EECu: goto label_7F1B4EEC;
    case 0x7F1B4EF0u: goto label_7F1B4EF0;
    case 0x7F1B4EF4u: goto label_7F1B4EF4;
    case 0x7F1B4EF8u: goto label_7F1B4EF8;
    case 0x7F1B4EFCu: goto label_7F1B4EFC;
    case 0x7F1B4F00u: goto label_7F1B4F00;
    case 0x7F1B4F04u: goto label_7F1B4F04;
    case 0x7F1B4F08u: goto label_7F1B4F08;
    case 0x7F1B4F0Cu: goto label_7F1B4F0C;
    case 0x7F1B4F10u: goto label_7F1B4F10;
    case 0x7F1B4F14u: goto label_7F1B4F14;
    case 0x7F1B4F18u: goto label_7F1B4F18;
    case 0x7F1B4F1Cu: goto label_7F1B4F1C;
    case 0x7F1B4F20u: goto label_7F1B4F20;
    case 0x7F1B4F24u: goto label_7F1B4F24;
    case 0x7F1B4F28u: goto label_7F1B4F28;
    case 0x7F1B4F2Cu: goto label_7F1B4F2C;
    case 0x7F1B4F30u: goto label_7F1B4F30;
    case 0x7F1B4F34u: goto label_7F1B4F34;
    case 0x7F1B4F38u: goto label_7F1B4F38;
    case 0x7F1B4F3Cu: goto label_7F1B4F3C;
    case 0x7F1B4F40u: goto label_7F1B4F40;
    case 0x7F1B4F44u: goto label_7F1B4F44;
    case 0x7F1B4F48u: goto label_7F1B4F48;
    case 0x7F1B4F4Cu: goto label_7F1B4F4C;
    case 0x7F1B4F50u: goto label_7F1B4F50;
    case 0x7F1B4F54u: goto label_7F1B4F54;
    case 0x7F1B4F58u: goto label_7F1B4F58;
    case 0x7F1B4F5Cu: goto label_7F1B4F5C;
    case 0x7F1B4F60u: goto label_7F1B4F60;
    case 0x7F1B4F64u: goto label_7F1B4F64;
    case 0x7F1B4F68u: goto label_7F1B4F68;
    case 0x7F1B4F6Cu: goto label_7F1B4F6C;
    case 0x7F1B4F70u: goto label_7F1B4F70;
    case 0x7F1B4F74u: goto label_7F1B4F74;
    case 0x7F1B4F78u: goto label_7F1B4F78;
    case 0x7F1B4F7Cu: goto label_7F1B4F7C;
    case 0x7F1B4F80u: goto label_7F1B4F80;
    case 0x7F1B4F84u: goto label_7F1B4F84;
    case 0x7F1B4F88u: goto label_7F1B4F88;
    case 0x7F1B4F8Cu: goto label_7F1B4F8C;
    case 0x7F1B4F90u: goto label_7F1B4F90;
    case 0x7F1B4F94u: goto label_7F1B4F94;
    case 0x7F1B4F98u: goto label_7F1B4F98;
    case 0x7F1B4F9Cu: goto label_7F1B4F9C;
    case 0x7F1B4FA0u: goto label_7F1B4FA0;
    case 0x7F1B4FA4u: goto label_7F1B4FA4;
    case 0x7F1B4FA8u: goto label_7F1B4FA8;
    case 0x7F1B4FACu: goto label_7F1B4FAC;
    case 0x7F1B4FB0u: goto label_7F1B4FB0;
    case 0x7F1B4FB4u: goto label_7F1B4FB4;
    case 0x7F1B4FB8u: goto label_7F1B4FB8;
    case 0x7F1B4FBCu: goto label_7F1B4FBC;
    case 0x7F1B4FC0u: goto label_7F1B4FC0;
    case 0x7F1B4FC4u: goto label_7F1B4FC4;
    case 0x7F1B4FC8u: goto label_7F1B4FC8;
    case 0x7F1B4FCCu: goto label_7F1B4FCC;
    case 0x7F1B4FD0u: goto label_7F1B4FD0;
    case 0x7F1B4FD4u: goto label_7F1B4FD4;
    case 0x7F1B4FD8u: goto label_7F1B4FD8;
    case 0x7F1B4FDCu: goto label_7F1B4FDC;
    case 0x7F1B4FE0u: goto label_7F1B4FE0;
    case 0x7F1B4FE4u: goto label_7F1B4FE4;
    case 0x7F1B4FE8u: goto label_7F1B4FE8;
    case 0x7F1B4FECu: goto label_7F1B4FEC;
    case 0x7F1B4FF0u: goto label_7F1B4FF0;
    case 0x7F1B4FF4u: goto label_7F1B4FF4;
    case 0x7F1B4FF8u: goto label_7F1B4FF8;
    case 0x7F1B4FFCu: goto label_7F1B4FFC;
    case 0x7F1B5000u: goto label_7F1B5000;
    case 0x7F1B5004u: goto label_7F1B5004;
    case 0x7F1B5008u: goto label_7F1B5008;
    case 0x7F1B500Cu: goto label_7F1B500C;
    case 0x7F1B5010u: goto label_7F1B5010;
    case 0x7F1B5014u: goto label_7F1B5014;
    case 0x7F1B5018u: goto label_7F1B5018;
    case 0x7F1B501Cu: goto label_7F1B501C;
    case 0x7F1B5020u: goto label_7F1B5020;
    case 0x7F1B5024u: goto label_7F1B5024;
    case 0x7F1B5028u: goto label_7F1B5028;
    case 0x7F1B502Cu: goto label_7F1B502C;
    case 0x7F1B5030u: goto label_7F1B5030;
    case 0x7F1B5034u: goto label_7F1B5034;
    case 0x7F1B5038u: goto label_7F1B5038;
    case 0x7F1B503Cu: goto label_7F1B503C;
    case 0x7F1B5040u: goto label_7F1B5040;
    case 0x7F1B5044u: goto label_7F1B5044;
    case 0x7F1B5048u: goto label_7F1B5048;
    case 0x7F1B504Cu: goto label_7F1B504C;
    case 0x7F1B5050u: goto label_7F1B5050;
    case 0x7F1B5054u: goto label_7F1B5054;
    case 0x7F1B5058u: goto label_7F1B5058;
    case 0x7F1B505Cu: goto label_7F1B505C;
    case 0x7F1B5060u: goto label_7F1B5060;
    case 0x7F1B5064u: goto label_7F1B5064;
    case 0x7F1B5068u: goto label_7F1B5068;
    case 0x7F1B506Cu: goto label_7F1B506C;
    case 0x7F1B5070u: goto label_7F1B5070;
    case 0x7F1B5074u: goto label_7F1B5074;
    case 0x7F1B5078u: goto label_7F1B5078;
    case 0x7F1B507Cu: goto label_7F1B507C;
    case 0x7F1B5080u: goto label_7F1B5080;
    case 0x7F1B5084u: goto label_7F1B5084;
    case 0x7F1B5088u: goto label_7F1B5088;
    case 0x7F1B508Cu: goto label_7F1B508C;
    case 0x7F1B5090u: goto label_7F1B5090;
    case 0x7F1B5094u: goto label_7F1B5094;
    case 0x7F1B5098u: goto label_7F1B5098;
    case 0x7F1B509Cu: goto label_7F1B509C;
    case 0x7F1B50A0u: goto label_7F1B50A0;
    case 0x7F1B50A4u: goto label_7F1B50A4;
    case 0x7F1B50A8u: goto label_7F1B50A8;
    case 0x7F1B50ACu: goto label_7F1B50AC;
    case 0x7F1B50B0u: goto label_7F1B50B0;
    case 0x7F1B50B4u: goto label_7F1B50B4;
    case 0x7F1B50B8u: goto label_7F1B50B8;
    case 0x7F1B50BCu: goto label_7F1B50BC;
    case 0x7F1B50C0u: goto label_7F1B50C0;
    case 0x7F1B50C4u: goto label_7F1B50C4;
    case 0x7F1B50C8u: goto label_7F1B50C8;
    case 0x7F1B50CCu: goto label_7F1B50CC;
    case 0x7F1B50D0u: goto label_7F1B50D0;
    case 0x7F1B50D4u: goto label_7F1B50D4;
    case 0x7F1B50D8u: goto label_7F1B50D8;
    case 0x7F1B50DCu: goto label_7F1B50DC;
    case 0x7F1B50E0u: goto label_7F1B50E0;
    case 0x7F1B50E4u: goto label_7F1B50E4;
    case 0x7F1B50E8u: goto label_7F1B50E8;
    case 0x7F1B50ECu: goto label_7F1B50EC;
    case 0x7F1B50F0u: goto label_7F1B50F0;
    case 0x7F1B50F4u: goto label_7F1B50F4;
    case 0x7F1B50F8u: goto label_7F1B50F8;
    case 0x7F1B50FCu: goto label_7F1B50FC;
    case 0x7F1B5100u: goto label_7F1B5100;
    case 0x7F1B5104u: goto label_7F1B5104;
    case 0x7F1B5108u: goto label_7F1B5108;
    case 0x7F1B510Cu: goto label_7F1B510C;
    case 0x7F1B5110u: goto label_7F1B5110;
    case 0x7F1B5114u: goto label_7F1B5114;
    case 0x7F1B5118u: goto label_7F1B5118;
    case 0x7F1B511Cu: goto label_7F1B511C;
    case 0x7F1B5120u: goto label_7F1B5120;
    case 0x7F1B5124u: goto label_7F1B5124;
    case 0x7F1B5128u: goto label_7F1B5128;
    case 0x7F1B512Cu: goto label_7F1B512C;
    case 0x7F1B5130u: goto label_7F1B5130;
    case 0x7F1B5134u: goto label_7F1B5134;
    case 0x7F1B5138u: goto label_7F1B5138;
    case 0x7F1B513Cu: goto label_7F1B513C;
    case 0x7F1B5140u: goto label_7F1B5140;
    case 0x7F1B5144u: goto label_7F1B5144;
    case 0x7F1B5148u: goto label_7F1B5148;
    case 0x7F1B514Cu: goto label_7F1B514C;
    case 0x7F1B5150u: goto label_7F1B5150;
    case 0x7F1B5154u: goto label_7F1B5154;
    case 0x7F1B5158u: goto label_7F1B5158;
    case 0x7F1B515Cu: goto label_7F1B515C;
    case 0x7F1B5160u: goto label_7F1B5160;
    case 0x7F1B5164u: goto label_7F1B5164;
    case 0x7F1B5168u: goto label_7F1B5168;
    case 0x7F1B516Cu: goto label_7F1B516C;
    case 0x7F1B5170u: goto label_7F1B5170;
    case 0x7F1B5174u: goto label_7F1B5174;
    case 0x7F1B5178u: goto label_7F1B5178;
    case 0x7F1B517Cu: goto label_7F1B517C;
    case 0x7F1B5180u: goto label_7F1B5180;
    case 0x7F1B5184u: goto label_7F1B5184;
    case 0x7F1B5188u: goto label_7F1B5188;
    case 0x7F1B518Cu: goto label_7F1B518C;
    case 0x7F1B5190u: goto label_7F1B5190;
    case 0x7F1B5194u: goto label_7F1B5194;
    case 0x7F1B5198u: goto label_7F1B5198;
    case 0x7F1B519Cu: goto label_7F1B519C;
    case 0x7F1B51A0u: goto label_7F1B51A0;
    case 0x7F1B51A4u: goto label_7F1B51A4;
    case 0x7F1B51A8u: goto label_7F1B51A8;
    case 0x7F1B51ACu: goto label_7F1B51AC;
    case 0x7F1B51B0u: goto label_7F1B51B0;
    case 0x7F1B51B4u: goto label_7F1B51B4;
    case 0x7F1B51B8u: goto label_7F1B51B8;
    case 0x7F1B51BCu: goto label_7F1B51BC;
    case 0x7F1B51C0u: goto label_7F1B51C0;
    case 0x7F1B51C4u: goto label_7F1B51C4;
    case 0x7F1B51C8u: goto label_7F1B51C8;
    case 0x7F1B51CCu: goto label_7F1B51CC;
    case 0x7F1B51D0u: goto label_7F1B51D0;
    case 0x7F1B51D4u: goto label_7F1B51D4;
    case 0x7F1B51D8u: goto label_7F1B51D8;
    case 0x7F1B51DCu: goto label_7F1B51DC;
    case 0x7F1B51E0u: goto label_7F1B51E0;
    case 0x7F1B51E4u: goto label_7F1B51E4;
    case 0x7F1B51E8u: goto label_7F1B51E8;
    case 0x7F1B51ECu: goto label_7F1B51EC;
    case 0x7F1B51F0u: goto label_7F1B51F0;
    case 0x7F1B51F4u: goto label_7F1B51F4;
    case 0x7F1B51F8u: goto label_7F1B51F8;
    case 0x7F1B51FCu: goto label_7F1B51FC;
    case 0x7F1B5200u: goto label_7F1B5200;
    case 0x7F1B5204u: goto label_7F1B5204;
    case 0x7F1B5208u: goto label_7F1B5208;
    case 0x7F1B520Cu: goto label_7F1B520C;
    case 0x7F1B5210u: goto label_7F1B5210;
    case 0x7F1B5214u: goto label_7F1B5214;
    case 0x7F1B5218u: goto label_7F1B5218;
    case 0x7F1B521Cu: goto label_7F1B521C;
    case 0x7F1B5220u: goto label_7F1B5220;
    case 0x7F1B5224u: goto label_7F1B5224;
    case 0x7F1B5228u: goto label_7F1B5228;
    case 0x7F1B522Cu: goto label_7F1B522C;
    case 0x7F1B5230u: goto label_7F1B5230;
    case 0x7F1B5234u: goto label_7F1B5234;
    case 0x7F1B5238u: goto label_7F1B5238;
    case 0x7F1B523Cu: goto label_7F1B523C;
    case 0x7F1B5240u: goto label_7F1B5240;
    case 0x7F1B5244u: goto label_7F1B5244;
    case 0x7F1B5248u: goto label_7F1B5248;
    case 0x7F1B524Cu: goto label_7F1B524C;
    case 0x7F1B5250u: goto label_7F1B5250;
    case 0x7F1B5254u: goto label_7F1B5254;
    case 0x7F1B5258u: goto label_7F1B5258;
    case 0x7F1B525Cu: goto label_7F1B525C;
    case 0x7F1B5260u: goto label_7F1B5260;
    case 0x7F1B5264u: goto label_7F1B5264;
    case 0x7F1B5268u: goto label_7F1B5268;
    case 0x7F1B526Cu: goto label_7F1B526C;
    case 0x7F1B5270u: goto label_7F1B5270;
    case 0x7F1B5274u: goto label_7F1B5274;
    case 0x7F1B5278u: goto label_7F1B5278;
    case 0x7F1B527Cu: goto label_7F1B527C;
    case 0x7F1B5280u: goto label_7F1B5280;
    case 0x7F1B5284u: goto label_7F1B5284;
    case 0x7F1B5288u: goto label_7F1B5288;
    case 0x7F1B528Cu: goto label_7F1B528C;
    case 0x7F1B5290u: goto label_7F1B5290;
    case 0x7F1B5294u: goto label_7F1B5294;
    case 0x7F1B5298u: goto label_7F1B5298;
    case 0x7F1B529Cu: goto label_7F1B529C;
    case 0x7F1B52A0u: goto label_7F1B52A0;
    case 0x7F1B52A4u: goto label_7F1B52A4;
    case 0x7F1B52A8u: goto label_7F1B52A8;
    case 0x7F1B52ACu: goto label_7F1B52AC;
    case 0x7F1B52B0u: goto label_7F1B52B0;
    case 0x7F1B52B4u: goto label_7F1B52B4;
    case 0x7F1B52B8u: goto label_7F1B52B8;
    case 0x7F1B52BCu: goto label_7F1B52BC;
    case 0x7F1B52C0u: goto label_7F1B52C0;
    case 0x7F1B52C4u: goto label_7F1B52C4;
    case 0x7F1B52C8u: goto label_7F1B52C8;
    case 0x7F1B52CCu: goto label_7F1B52CC;
    case 0x7F1B52D0u: goto label_7F1B52D0;
    case 0x7F1B52D4u: goto label_7F1B52D4;
    case 0x7F1B52D8u: goto label_7F1B52D8;
    case 0x7F1B52DCu: goto label_7F1B52DC;
    case 0x7F1B52E0u: goto label_7F1B52E0;
    case 0x7F1B52E4u: goto label_7F1B52E4;
    case 0x7F1B52E8u: goto label_7F1B52E8;
    case 0x7F1B52ECu: goto label_7F1B52EC;
    case 0x7F1B52F0u: goto label_7F1B52F0;
    case 0x7F1B52F4u: goto label_7F1B52F4;
    case 0x7F1B52F8u: goto label_7F1B52F8;
    case 0x7F1B52FCu: goto label_7F1B52FC;
    case 0x7F1B5300u: goto label_7F1B5300;
    case 0x7F1B5304u: goto label_7F1B5304;
    case 0x7F1B5308u: goto label_7F1B5308;
    case 0x7F1B530Cu: goto label_7F1B530C;
    case 0x7F1B5310u: goto label_7F1B5310;
    case 0x7F1B5314u: goto label_7F1B5314;
    case 0x7F1B5318u: goto label_7F1B5318;
    case 0x7F1B531Cu: goto label_7F1B531C;
    case 0x7F1B5320u: goto label_7F1B5320;
    case 0x7F1B5324u: goto label_7F1B5324;
    case 0x7F1B5328u: goto label_7F1B5328;
    case 0x7F1B532Cu: goto label_7F1B532C;
    case 0x7F1B5330u: goto label_7F1B5330;
    case 0x7F1B5334u: goto label_7F1B5334;
    case 0x7F1B5338u: goto label_7F1B5338;
    case 0x7F1B533Cu: goto label_7F1B533C;
    case 0x7F1B5340u: goto label_7F1B5340;
    case 0x7F1B5344u: goto label_7F1B5344;
    case 0x7F1B5348u: goto label_7F1B5348;
    case 0x7F1B534Cu: goto label_7F1B534C;
    case 0x7F1B5350u: goto label_7F1B5350;
    case 0x7F1B5354u: goto label_7F1B5354;
    case 0x7F1B5358u: goto label_7F1B5358;
    case 0x7F1B535Cu: goto label_7F1B535C;
    case 0x7F1B5360u: goto label_7F1B5360;
    case 0x7F1B5364u: goto label_7F1B5364;
    case 0x7F1B5368u: goto label_7F1B5368;
    case 0x7F1B536Cu: goto label_7F1B536C;
    case 0x7F1B5370u: goto label_7F1B5370;
    case 0x7F1B5374u: goto label_7F1B5374;
    case 0x7F1B5378u: goto label_7F1B5378;
    case 0x7F1B537Cu: goto label_7F1B537C;
    case 0x7F1B5380u: goto label_7F1B5380;
    case 0x7F1B5384u: goto label_7F1B5384;
    case 0x7F1B5388u: goto label_7F1B5388;
    case 0x7F1B538Cu: goto label_7F1B538C;
    case 0x7F1B5390u: goto label_7F1B5390;
    case 0x7F1B5394u: goto label_7F1B5394;
    case 0x7F1B5398u: goto label_7F1B5398;
    case 0x7F1B539Cu: goto label_7F1B539C;
    case 0x7F1B53A0u: goto label_7F1B53A0;
    case 0x7F1B53A4u: goto label_7F1B53A4;
    case 0x7F1B53A8u: goto label_7F1B53A8;
    case 0x7F1B53ACu: goto label_7F1B53AC;
    case 0x7F1B53B0u: goto label_7F1B53B0;
    case 0x7F1B53B4u: goto label_7F1B53B4;
    case 0x7F1B53B8u: goto label_7F1B53B8;
    case 0x7F1B53BCu: goto label_7F1B53BC;
    case 0x7F1B53C0u: goto label_7F1B53C0;
    case 0x7F1B53C4u: goto label_7F1B53C4;
    case 0x7F1B53C8u: goto label_7F1B53C8;
    case 0x7F1B53CCu: goto label_7F1B53CC;
    case 0x7F1B53D0u: goto label_7F1B53D0;
    case 0x7F1B53D4u: goto label_7F1B53D4;
    case 0x7F1B53D8u: goto label_7F1B53D8;
    case 0x7F1B53DCu: goto label_7F1B53DC;
    case 0x7F1B53E0u: goto label_7F1B53E0;
    case 0x7F1B53E4u: goto label_7F1B53E4;
    case 0x7F1B53E8u: goto label_7F1B53E8;
    case 0x7F1B53ECu: goto label_7F1B53EC;
    case 0x7F1B53F0u: goto label_7F1B53F0;
    case 0x7F1B53F4u: goto label_7F1B53F4;
    case 0x7F1B53F8u: goto label_7F1B53F8;
    case 0x7F1B53FCu: goto label_7F1B53FC;
    case 0x7F1B5400u: goto label_7F1B5400;
    case 0x7F1B5404u: goto label_7F1B5404;
    case 0x7F1B5408u: goto label_7F1B5408;
    case 0x7F1B540Cu: goto label_7F1B540C;
    case 0x7F1B5410u: goto label_7F1B5410;
    case 0x7F1B5414u: goto label_7F1B5414;
    case 0x7F1B5418u: goto label_7F1B5418;
    case 0x7F1B541Cu: goto label_7F1B541C;
    case 0x7F1B5420u: goto label_7F1B5420;
    case 0x7F1B5424u: goto label_7F1B5424;
    case 0x7F1B5428u: goto label_7F1B5428;
    case 0x7F1B542Cu: goto label_7F1B542C;
    case 0x7F1B5430u: goto label_7F1B5430;
    case 0x7F1B5434u: goto label_7F1B5434;
    case 0x7F1B5438u: goto label_7F1B5438;
    case 0x7F1B543Cu: goto label_7F1B543C;
    case 0x7F1B5440u: goto label_7F1B5440;
    case 0x7F1B5444u: goto label_7F1B5444;
    case 0x7F1B5448u: goto label_7F1B5448;
    case 0x7F1B544Cu: goto label_7F1B544C;
    case 0x7F1B5450u: goto label_7F1B5450;
    case 0x7F1B5454u: goto label_7F1B5454;
    case 0x7F1B5458u: goto label_7F1B5458;
    case 0x7F1B545Cu: goto label_7F1B545C;
    case 0x7F1B5460u: goto label_7F1B5460;
    case 0x7F1B5464u: goto label_7F1B5464;
    case 0x7F1B5468u: goto label_7F1B5468;
    case 0x7F1B546Cu: goto label_7F1B546C;
    case 0x7F1B5470u: goto label_7F1B5470;
    case 0x7F1B5474u: goto label_7F1B5474;
    case 0x7F1B5478u: goto label_7F1B5478;
    case 0x7F1B547Cu: goto label_7F1B547C;
    case 0x7F1B5480u: goto label_7F1B5480;
    case 0x7F1B5484u: goto label_7F1B5484;
    case 0x7F1B5488u: goto label_7F1B5488;
    case 0x7F1B548Cu: goto label_7F1B548C;
    case 0x7F1B5490u: goto label_7F1B5490;
    case 0x7F1B5494u: goto label_7F1B5494;
    case 0x7F1B5498u: goto label_7F1B5498;
    case 0x7F1B549Cu: goto label_7F1B549C;
    case 0x7F1B54A0u: goto label_7F1B54A0;
    case 0x7F1B54A4u: goto label_7F1B54A4;
    case 0x7F1B54A8u: goto label_7F1B54A8;
    case 0x7F1B54ACu: goto label_7F1B54AC;
    case 0x7F1B54B0u: goto label_7F1B54B0;
    case 0x7F1B54B4u: goto label_7F1B54B4;
    case 0x7F1B54B8u: goto label_7F1B54B8;
    case 0x7F1B54BCu: goto label_7F1B54BC;
    case 0x7F1B54C0u: goto label_7F1B54C0;
    case 0x7F1B54C4u: goto label_7F1B54C4;
    case 0x7F1B54C8u: goto label_7F1B54C8;
    case 0x7F1B54CCu: goto label_7F1B54CC;
    case 0x7F1B54D0u: goto label_7F1B54D0;
    case 0x7F1B54D4u: goto label_7F1B54D4;
    case 0x7F1B54D8u: goto label_7F1B54D8;
    case 0x7F1B54DCu: goto label_7F1B54DC;
    case 0x7F1B54E0u: goto label_7F1B54E0;
    case 0x7F1B54E4u: goto label_7F1B54E4;
    case 0x7F1B54E8u: goto label_7F1B54E8;
    case 0x7F1B54ECu: goto label_7F1B54EC;
    case 0x7F1B54F0u: goto label_7F1B54F0;
    case 0x7F1B54F4u: goto label_7F1B54F4;
    case 0x7F1B54F8u: goto label_7F1B54F8;
    case 0x7F1B54FCu: goto label_7F1B54FC;
    case 0x7F1B5500u: goto label_7F1B5500;
    case 0x7F1B5504u: goto label_7F1B5504;
    case 0x7F1B5508u: goto label_7F1B5508;
    case 0x7F1B550Cu: goto label_7F1B550C;
    case 0x7F1B5510u: goto label_7F1B5510;
    case 0x7F1B5514u: goto label_7F1B5514;
    case 0x7F1B5518u: goto label_7F1B5518;
    case 0x7F1B551Cu: goto label_7F1B551C;
    case 0x7F1B5520u: goto label_7F1B5520;
    case 0x7F1B5524u: goto label_7F1B5524;
    case 0x7F1B5528u: goto label_7F1B5528;
    case 0x7F1B552Cu: goto label_7F1B552C;
    case 0x7F1B5530u: goto label_7F1B5530;
    case 0x7F1B5534u: goto label_7F1B5534;
    case 0x7F1B5538u: goto label_7F1B5538;
    case 0x7F1B553Cu: goto label_7F1B553C;
    case 0x7F1B5540u: goto label_7F1B5540;
    case 0x7F1B5544u: goto label_7F1B5544;
    case 0x7F1B5548u: goto label_7F1B5548;
    case 0x7F1B554Cu: goto label_7F1B554C;
    case 0x7F1B5550u: goto label_7F1B5550;
    case 0x7F1B5554u: goto label_7F1B5554;
    case 0x7F1B5558u: goto label_7F1B5558;
    case 0x7F1B555Cu: goto label_7F1B555C;
    case 0x7F1B5560u: goto label_7F1B5560;
    case 0x7F1B5564u: goto label_7F1B5564;
    case 0x7F1B5568u: goto label_7F1B5568;
    case 0x7F1B556Cu: goto label_7F1B556C;
    case 0x7F1B5570u: goto label_7F1B5570;
    case 0x7F1B5574u: goto label_7F1B5574;
    case 0x7F1B5578u: goto label_7F1B5578;
    case 0x7F1B557Cu: goto label_7F1B557C;
    case 0x7F1B5580u: goto label_7F1B5580;
    case 0x7F1B5584u: goto label_7F1B5584;
    case 0x7F1B5588u: goto label_7F1B5588;
    case 0x7F1B558Cu: goto label_7F1B558C;
    case 0x7F1B5590u: goto label_7F1B5590;
    case 0x7F1B5594u: goto label_7F1B5594;
    case 0x7F1B5598u: goto label_7F1B5598;
    case 0x7F1B559Cu: goto label_7F1B559C;
    case 0x7F1B55A0u: goto label_7F1B55A0;
    case 0x7F1B55A4u: goto label_7F1B55A4;
    case 0x7F1B55A8u: goto label_7F1B55A8;
    case 0x7F1B55ACu: goto label_7F1B55AC;
    case 0x7F1B55B0u: goto label_7F1B55B0;
    case 0x7F1B55B4u: goto label_7F1B55B4;
    case 0x7F1B55B8u: goto label_7F1B55B8;
    case 0x7F1B55BCu: goto label_7F1B55BC;
    case 0x7F1B55C0u: goto label_7F1B55C0;
    case 0x7F1B55C4u: goto label_7F1B55C4;
    case 0x7F1B55C8u: goto label_7F1B55C8;
    case 0x7F1B55CCu: goto label_7F1B55CC;
    case 0x7F1B55D0u: goto label_7F1B55D0;
    case 0x7F1B55D4u: goto label_7F1B55D4;
    case 0x7F1B55D8u: goto label_7F1B55D8;
    case 0x7F1B55DCu: goto label_7F1B55DC;
    case 0x7F1B55E0u: goto label_7F1B55E0;
    case 0x7F1B55E4u: goto label_7F1B55E4;
    case 0x7F1B55E8u: goto label_7F1B55E8;
    case 0x7F1B55ECu: goto label_7F1B55EC;
    case 0x7F1B55F0u: goto label_7F1B55F0;
    case 0x7F1B55F4u: goto label_7F1B55F4;
    case 0x7F1B55F8u: goto label_7F1B55F8;
    case 0x7F1B55FCu: goto label_7F1B55FC;
    case 0x7F1B5600u: goto label_7F1B5600;
    case 0x7F1B5604u: goto label_7F1B5604;
    case 0x7F1B5608u: goto label_7F1B5608;
    case 0x7F1B560Cu: goto label_7F1B560C;
    case 0x7F1B5610u: goto label_7F1B5610;
    case 0x7F1B5614u: goto label_7F1B5614;
    case 0x7F1B5618u: goto label_7F1B5618;
    case 0x7F1B561Cu: goto label_7F1B561C;
    case 0x7F1B5620u: goto label_7F1B5620;
    case 0x7F1B5624u: goto label_7F1B5624;
    case 0x7F1B5628u: goto label_7F1B5628;
    case 0x7F1B562Cu: goto label_7F1B562C;
    case 0x7F1B5630u: goto label_7F1B5630;
    case 0x7F1B5634u: goto label_7F1B5634;
    case 0x7F1B5638u: goto label_7F1B5638;
    case 0x7F1B563Cu: goto label_7F1B563C;
    case 0x7F1B5640u: goto label_7F1B5640;
    case 0x7F1B5644u: goto label_7F1B5644;
    case 0x7F1B5648u: goto label_7F1B5648;
    case 0x7F1B564Cu: goto label_7F1B564C;
    case 0x7F1B5650u: goto label_7F1B5650;
    case 0x7F1B5654u: goto label_7F1B5654;
    case 0x7F1B5658u: goto label_7F1B5658;
    case 0x7F1B565Cu: goto label_7F1B565C;
    case 0x7F1B5660u: goto label_7F1B5660;
    case 0x7F1B5664u: goto label_7F1B5664;
    case 0x7F1B5668u: goto label_7F1B5668;
    case 0x7F1B566Cu: goto label_7F1B566C;
    case 0x7F1B5670u: goto label_7F1B5670;
    case 0x7F1B5674u: goto label_7F1B5674;
    case 0x7F1B5678u: goto label_7F1B5678;
    case 0x7F1B567Cu: goto label_7F1B567C;
    case 0x7F1B5680u: goto label_7F1B5680;
    case 0x7F1B5684u: goto label_7F1B5684;
    case 0x7F1B5688u: goto label_7F1B5688;
    case 0x7F1B568Cu: goto label_7F1B568C;
    case 0x7F1B5690u: goto label_7F1B5690;
    case 0x7F1B5694u: goto label_7F1B5694;
    case 0x7F1B5698u: goto label_7F1B5698;
    case 0x7F1B569Cu: goto label_7F1B569C;
    case 0x7F1B56A0u: goto label_7F1B56A0;
    case 0x7F1B56A4u: goto label_7F1B56A4;
    case 0x7F1B56A8u: goto label_7F1B56A8;
    case 0x7F1B56ACu: goto label_7F1B56AC;
    case 0x7F1B56B0u: goto label_7F1B56B0;
    case 0x7F1B56B4u: goto label_7F1B56B4;
    case 0x7F1B56B8u: goto label_7F1B56B8;
    case 0x7F1B56BCu: goto label_7F1B56BC;
    case 0x7F1B56C0u: goto label_7F1B56C0;
    case 0x7F1B56C4u: goto label_7F1B56C4;
    case 0x7F1B56C8u: goto label_7F1B56C8;
    case 0x7F1B56CCu: goto label_7F1B56CC;
    case 0x7F1B56D0u: goto label_7F1B56D0;
    case 0x7F1B56D4u: goto label_7F1B56D4;
    case 0x7F1B56D8u: goto label_7F1B56D8;
    case 0x7F1B56DCu: goto label_7F1B56DC;
    case 0x7F1B56E0u: goto label_7F1B56E0;
    case 0x7F1B56E4u: goto label_7F1B56E4;
    case 0x7F1B56E8u: goto label_7F1B56E8;
    case 0x7F1B56ECu: goto label_7F1B56EC;
    case 0x7F1B56F0u: goto label_7F1B56F0;
    case 0x7F1B56F4u: goto label_7F1B56F4;
    case 0x7F1B56F8u: goto label_7F1B56F8;
    case 0x7F1B56FCu: goto label_7F1B56FC;
    case 0x7F1B5700u: goto label_7F1B5700;
    case 0x7F1B5704u: goto label_7F1B5704;
    case 0x7F1B5708u: goto label_7F1B5708;
    case 0x7F1B570Cu: goto label_7F1B570C;
    case 0x7F1B5710u: goto label_7F1B5710;
    case 0x7F1B5714u: goto label_7F1B5714;
    case 0x7F1B5718u: goto label_7F1B5718;
    case 0x7F1B571Cu: goto label_7F1B571C;
    case 0x7F1B5720u: goto label_7F1B5720;
    case 0x7F1B5724u: goto label_7F1B5724;
    case 0x7F1B5728u: goto label_7F1B5728;
    case 0x7F1B572Cu: goto label_7F1B572C;
    case 0x7F1B5730u: goto label_7F1B5730;
    case 0x7F1B5734u: goto label_7F1B5734;
    case 0x7F1B5738u: goto label_7F1B5738;
    case 0x7F1B573Cu: goto label_7F1B573C;
    case 0x7F1B5740u: goto label_7F1B5740;
    case 0x7F1B5744u: goto label_7F1B5744;
    case 0x7F1B5748u: goto label_7F1B5748;
    case 0x7F1B574Cu: goto label_7F1B574C;
    case 0x7F1B5750u: goto label_7F1B5750;
    case 0x7F1B5754u: goto label_7F1B5754;
    case 0x7F1B5758u: goto label_7F1B5758;
    case 0x7F1B575Cu: goto label_7F1B575C;
    case 0x7F1B5760u: goto label_7F1B5760;
    case 0x7F1B5764u: goto label_7F1B5764;
    case 0x7F1B5768u: goto label_7F1B5768;
    case 0x7F1B576Cu: goto label_7F1B576C;
    case 0x7F1B5770u: goto label_7F1B5770;
    case 0x7F1B5774u: goto label_7F1B5774;
    case 0x7F1B5778u: goto label_7F1B5778;
    case 0x7F1B577Cu: goto label_7F1B577C;
    case 0x7F1B5780u: goto label_7F1B5780;
    case 0x7F1B5784u: goto label_7F1B5784;
    case 0x7F1B5788u: goto label_7F1B5788;
    case 0x7F1B578Cu: goto label_7F1B578C;
    case 0x7F1B5790u: goto label_7F1B5790;
    case 0x7F1B5794u: goto label_7F1B5794;
    case 0x7F1B5798u: goto label_7F1B5798;
    case 0x7F1B579Cu: goto label_7F1B579C;
    case 0x7F1B57A0u: goto label_7F1B57A0;
    case 0x7F1B57A4u: goto label_7F1B57A4;
    case 0x7F1B57A8u: goto label_7F1B57A8;
    case 0x7F1B57ACu: goto label_7F1B57AC;
    case 0x7F1B57B0u: goto label_7F1B57B0;
    case 0x7F1B57B4u: goto label_7F1B57B4;
    case 0x7F1B57B8u: goto label_7F1B57B8;
    case 0x7F1B57BCu: goto label_7F1B57BC;
    case 0x7F1B57C0u: goto label_7F1B57C0;
    case 0x7F1B57C4u: goto label_7F1B57C4;
    case 0x7F1B57C8u: goto label_7F1B57C8;
    case 0x7F1B57CCu: goto label_7F1B57CC;
    case 0x7F1B57D0u: goto label_7F1B57D0;
    case 0x7F1B57D4u: goto label_7F1B57D4;
    case 0x7F1B57D8u: goto label_7F1B57D8;
    case 0x7F1B57DCu: goto label_7F1B57DC;
    case 0x7F1B57E0u: goto label_7F1B57E0;
    case 0x7F1B57E4u: goto label_7F1B57E4;
    case 0x7F1B57E8u: goto label_7F1B57E8;
    case 0x7F1B57ECu: goto label_7F1B57EC;
    case 0x7F1B57F0u: goto label_7F1B57F0;
    case 0x7F1B57F4u: goto label_7F1B57F4;
    case 0x7F1B57F8u: goto label_7F1B57F8;
    case 0x7F1B57FCu: goto label_7F1B57FC;
    case 0x7F1B5800u: goto label_7F1B5800;
    case 0x7F1B5804u: goto label_7F1B5804;
    case 0x7F1B5808u: goto label_7F1B5808;
    case 0x7F1B580Cu: goto label_7F1B580C;
    case 0x7F1B5810u: goto label_7F1B5810;
    case 0x7F1B5814u: goto label_7F1B5814;
    case 0x7F1B5818u: goto label_7F1B5818;
    case 0x7F1B581Cu: goto label_7F1B581C;
    case 0x7F1B5820u: goto label_7F1B5820;
    case 0x7F1B5824u: goto label_7F1B5824;
    case 0x7F1B5828u: goto label_7F1B5828;
    case 0x7F1B582Cu: goto label_7F1B582C;
    case 0x7F1B5830u: goto label_7F1B5830;
    case 0x7F1B5834u: goto label_7F1B5834;
    case 0x7F1B5838u: goto label_7F1B5838;
    case 0x7F1B583Cu: goto label_7F1B583C;
    case 0x7F1B5840u: goto label_7F1B5840;
    case 0x7F1B5844u: goto label_7F1B5844;
    case 0x7F1B5848u: goto label_7F1B5848;
    case 0x7F1B584Cu: goto label_7F1B584C;
    case 0x7F1B5850u: goto label_7F1B5850;
    case 0x7F1B5854u: goto label_7F1B5854;
    case 0x7F1B5858u: goto label_7F1B5858;
    case 0x7F1B585Cu: goto label_7F1B585C;
    case 0x7F1B5860u: goto label_7F1B5860;
    case 0x7F1B5864u: goto label_7F1B5864;
    case 0x7F1B5868u: goto label_7F1B5868;
    case 0x7F1B586Cu: goto label_7F1B586C;
    case 0x7F1B5870u: goto label_7F1B5870;
    case 0x7F1B5874u: goto label_7F1B5874;
    case 0x7F1B5878u: goto label_7F1B5878;
    case 0x7F1B587Cu: goto label_7F1B587C;
    case 0x7F1B5880u: goto label_7F1B5880;
    case 0x7F1B5884u: goto label_7F1B5884;
    case 0x7F1B5888u: goto label_7F1B5888;
    case 0x7F1B588Cu: goto label_7F1B588C;
    case 0x7F1B5890u: goto label_7F1B5890;
    case 0x7F1B5894u: goto label_7F1B5894;
    case 0x7F1B5898u: goto label_7F1B5898;
    case 0x7F1B589Cu: goto label_7F1B589C;
    case 0x7F1B58A0u: goto label_7F1B58A0;
    case 0x7F1B58A4u: goto label_7F1B58A4;
    case 0x7F1B58A8u: goto label_7F1B58A8;
    case 0x7F1B58ACu: goto label_7F1B58AC;
    case 0x7F1B58B0u: goto label_7F1B58B0;
    case 0x7F1B58B4u: goto label_7F1B58B4;
    case 0x7F1B58B8u: goto label_7F1B58B8;
    case 0x7F1B58BCu: goto label_7F1B58BC;
    case 0x7F1B58C0u: goto label_7F1B58C0;
    case 0x7F1B58C4u: goto label_7F1B58C4;
    case 0x7F1B58C8u: goto label_7F1B58C8;
    case 0x7F1B58CCu: goto label_7F1B58CC;
    case 0x7F1B58D0u: goto label_7F1B58D0;
    case 0x7F1B58D4u: goto label_7F1B58D4;
    case 0x7F1B58D8u: goto label_7F1B58D8;
    case 0x7F1B58DCu: goto label_7F1B58DC;
    case 0x7F1B58E0u: goto label_7F1B58E0;
    case 0x7F1B58E4u: goto label_7F1B58E4;
    case 0x7F1B58E8u: goto label_7F1B58E8;
    case 0x7F1B58ECu: goto label_7F1B58EC;
    case 0x7F1B58F0u: goto label_7F1B58F0;
    case 0x7F1B58F4u: goto label_7F1B58F4;
    case 0x7F1B58F8u: goto label_7F1B58F8;
    case 0x7F1B58FCu: goto label_7F1B58FC;
    case 0x7F1B5900u: goto label_7F1B5900;
    case 0x7F1B5904u: goto label_7F1B5904;
    case 0x7F1B5908u: goto label_7F1B5908;
    case 0x7F1B590Cu: goto label_7F1B590C;
    case 0x7F1B5910u: goto label_7F1B5910;
    case 0x7F1B5914u: goto label_7F1B5914;
    case 0x7F1B5918u: goto label_7F1B5918;
    case 0x7F1B591Cu: goto label_7F1B591C;
    case 0x7F1B5920u: goto label_7F1B5920;
    case 0x7F1B5924u: goto label_7F1B5924;
    case 0x7F1B5928u: goto label_7F1B5928;
    case 0x7F1B592Cu: goto label_7F1B592C;
    case 0x7F1B5930u: goto label_7F1B5930;
    case 0x7F1B5934u: goto label_7F1B5934;
    case 0x7F1B5938u: goto label_7F1B5938;
    case 0x7F1B593Cu: goto label_7F1B593C;
    case 0x7F1B5940u: goto label_7F1B5940;
    case 0x7F1B5944u: goto label_7F1B5944;
    case 0x7F1B5948u: goto label_7F1B5948;
    case 0x7F1B594Cu: goto label_7F1B594C;
    case 0x7F1B5950u: goto label_7F1B5950;
    case 0x7F1B5954u: goto label_7F1B5954;
    case 0x7F1B5958u: goto label_7F1B5958;
    case 0x7F1B595Cu: goto label_7F1B595C;
    case 0x7F1B5960u: goto label_7F1B5960;
    case 0x7F1B5964u: goto label_7F1B5964;
    case 0x7F1B5968u: goto label_7F1B5968;
    case 0x7F1B596Cu: goto label_7F1B596C;
    case 0x7F1B5970u: goto label_7F1B5970;
    case 0x7F1B5974u: goto label_7F1B5974;
    case 0x7F1B5978u: goto label_7F1B5978;
    case 0x7F1B597Cu: goto label_7F1B597C;
    case 0x7F1B5980u: goto label_7F1B5980;
    case 0x7F1B5984u: goto label_7F1B5984;
    case 0x7F1B5988u: goto label_7F1B5988;
    case 0x7F1B598Cu: goto label_7F1B598C;
    case 0x7F1B5990u: goto label_7F1B5990;
    case 0x7F1B5994u: goto label_7F1B5994;
    case 0x7F1B5998u: goto label_7F1B5998;
    case 0x7F1B599Cu: goto label_7F1B599C;
    case 0x7F1B59A0u: goto label_7F1B59A0;
    case 0x7F1B59A4u: goto label_7F1B59A4;
    case 0x7F1B59A8u: goto label_7F1B59A8;
    case 0x7F1B59ACu: goto label_7F1B59AC;
    case 0x7F1B59B0u: goto label_7F1B59B0;
    case 0x7F1B59B4u: goto label_7F1B59B4;
    case 0x7F1B59B8u: goto label_7F1B59B8;
    case 0x7F1B59BCu: goto label_7F1B59BC;
    case 0x7F1B59C0u: goto label_7F1B59C0;
    case 0x7F1B59C4u: goto label_7F1B59C4;
    case 0x7F1B59C8u: goto label_7F1B59C8;
    case 0x7F1B59CCu: goto label_7F1B59CC;
    case 0x7F1B59D0u: goto label_7F1B59D0;
    case 0x7F1B59D4u: goto label_7F1B59D4;
    case 0x7F1B59D8u: goto label_7F1B59D8;
    case 0x7F1B59DCu: goto label_7F1B59DC;
    case 0x7F1B59E0u: goto label_7F1B59E0;
    case 0x7F1B59E4u: goto label_7F1B59E4;
    case 0x7F1B59E8u: goto label_7F1B59E8;
    case 0x7F1B59ECu: goto label_7F1B59EC;
    case 0x7F1B59F0u: goto label_7F1B59F0;
    case 0x7F1B59F4u: goto label_7F1B59F4;
    case 0x7F1B59F8u: goto label_7F1B59F8;
    case 0x7F1B59FCu: goto label_7F1B59FC;
    case 0x7F1B5A00u: goto label_7F1B5A00;
    case 0x7F1B5A04u: goto label_7F1B5A04;
    case 0x7F1B5A08u: goto label_7F1B5A08;
    case 0x7F1B5A0Cu: goto label_7F1B5A0C;
    case 0x7F1B5A10u: goto label_7F1B5A10;
    case 0x7F1B5A14u: goto label_7F1B5A14;
    case 0x7F1B5A18u: goto label_7F1B5A18;
    case 0x7F1B5A1Cu: goto label_7F1B5A1C;
    case 0x7F1B5A20u: goto label_7F1B5A20;
    case 0x7F1B5A24u: goto label_7F1B5A24;
    case 0x7F1B5A28u: goto label_7F1B5A28;
    case 0x7F1B5A2Cu: goto label_7F1B5A2C;
    case 0x7F1B5A30u: goto label_7F1B5A30;
    case 0x7F1B5A34u: goto label_7F1B5A34;
    case 0x7F1B5A38u: goto label_7F1B5A38;
    case 0x7F1B5A3Cu: goto label_7F1B5A3C;
    case 0x7F1B5A40u: goto label_7F1B5A40;
    case 0x7F1B5A44u: goto label_7F1B5A44;
    case 0x7F1B5A48u: goto label_7F1B5A48;
    case 0x7F1B5A4Cu: goto label_7F1B5A4C;
    case 0x7F1B5A50u: goto label_7F1B5A50;
    case 0x7F1B5A54u: goto label_7F1B5A54;
    case 0x7F1B5A58u: goto label_7F1B5A58;
    case 0x7F1B5A5Cu: goto label_7F1B5A5C;
    case 0x7F1B5A60u: goto label_7F1B5A60;
    case 0x7F1B5A64u: goto label_7F1B5A64;
    case 0x7F1B5A68u: goto label_7F1B5A68;
    case 0x7F1B5A6Cu: goto label_7F1B5A6C;
    case 0x7F1B5A70u: goto label_7F1B5A70;
    case 0x7F1B5A74u: goto label_7F1B5A74;
    case 0x7F1B5A78u: goto label_7F1B5A78;
    case 0x7F1B5A7Cu: goto label_7F1B5A7C;
    case 0x7F1B5A80u: goto label_7F1B5A80;
    case 0x7F1B5A84u: goto label_7F1B5A84;
    case 0x7F1B5A88u: goto label_7F1B5A88;
    case 0x7F1B5A8Cu: goto label_7F1B5A8C;
    case 0x7F1B5A90u: goto label_7F1B5A90;
    case 0x7F1B5A94u: goto label_7F1B5A94;
    case 0x7F1B5A98u: goto label_7F1B5A98;
    case 0x7F1B5A9Cu: goto label_7F1B5A9C;
    case 0x7F1B5AA0u: goto label_7F1B5AA0;
    case 0x7F1B5AA4u: goto label_7F1B5AA4;
    case 0x7F1B5AA8u: goto label_7F1B5AA8;
    case 0x7F1B5AACu: goto label_7F1B5AAC;
    case 0x7F1B5AB0u: goto label_7F1B5AB0;
    case 0x7F1B5AB4u: goto label_7F1B5AB4;
    case 0x7F1B5AB8u: goto label_7F1B5AB8;
    case 0x7F1B5ABCu: goto label_7F1B5ABC;
    case 0x7F1B5AC0u: goto label_7F1B5AC0;
    case 0x7F1B5AC4u: goto label_7F1B5AC4;
    case 0x7F1B5AC8u: goto label_7F1B5AC8;
    case 0x7F1B5ACCu: goto label_7F1B5ACC;
    case 0x7F1B5AD0u: goto label_7F1B5AD0;
    case 0x7F1B5AD4u: goto label_7F1B5AD4;
    case 0x7F1B5AD8u: goto label_7F1B5AD8;
    case 0x7F1B5ADCu: goto label_7F1B5ADC;
    case 0x7F1B5AE0u: goto label_7F1B5AE0;
    case 0x7F1B5AE4u: goto label_7F1B5AE4;
    case 0x7F1B5AE8u: goto label_7F1B5AE8;
    case 0x7F1B5AECu: goto label_7F1B5AEC;
    case 0x7F1B5AF0u: goto label_7F1B5AF0;
    case 0x7F1B5AF4u: goto label_7F1B5AF4;
    case 0x7F1B5AF8u: goto label_7F1B5AF8;
    case 0x7F1B5AFCu: goto label_7F1B5AFC;
    case 0x7F1B5B00u: goto label_7F1B5B00;
    case 0x7F1B5B04u: goto label_7F1B5B04;
    case 0x7F1B5B08u: goto label_7F1B5B08;
    case 0x7F1B5B0Cu: goto label_7F1B5B0C;
    case 0x7F1B5B10u: goto label_7F1B5B10;
    case 0x7F1B5B14u: goto label_7F1B5B14;
    case 0x7F1B5B18u: goto label_7F1B5B18;
    case 0x7F1B5B1Cu: goto label_7F1B5B1C;
    case 0x7F1B5B20u: goto label_7F1B5B20;
    case 0x7F1B5B24u: goto label_7F1B5B24;
    case 0x7F1B5B28u: goto label_7F1B5B28;
    case 0x7F1B5B2Cu: goto label_7F1B5B2C;
    case 0x7F1B5B30u: goto label_7F1B5B30;
    case 0x7F1B5B34u: goto label_7F1B5B34;
    case 0x7F1B5B38u: goto label_7F1B5B38;
    case 0x7F1B5B3Cu: goto label_7F1B5B3C;
    case 0x7F1B5B40u: goto label_7F1B5B40;
    case 0x7F1B5B44u: goto label_7F1B5B44;
    case 0x7F1B5B48u: goto label_7F1B5B48;
    case 0x7F1B5B4Cu: goto label_7F1B5B4C;
    case 0x7F1B5B50u: goto label_7F1B5B50;
    case 0x7F1B5B54u: goto label_7F1B5B54;
    case 0x7F1B5B58u: goto label_7F1B5B58;
    case 0x7F1B5B5Cu: goto label_7F1B5B5C;
    case 0x7F1B5B60u: goto label_7F1B5B60;
    case 0x7F1B5B64u: goto label_7F1B5B64;
    case 0x7F1B5B68u: goto label_7F1B5B68;
    case 0x7F1B5B6Cu: goto label_7F1B5B6C;
    case 0x7F1B5B70u: goto label_7F1B5B70;
    case 0x7F1B5B74u: goto label_7F1B5B74;
    case 0x7F1B5B78u: goto label_7F1B5B78;
    case 0x7F1B5B7Cu: goto label_7F1B5B7C;
    case 0x7F1B5B80u: goto label_7F1B5B80;
    case 0x7F1B5B84u: goto label_7F1B5B84;
    case 0x7F1B5B88u: goto label_7F1B5B88;
    case 0x7F1B5B8Cu: goto label_7F1B5B8C;
    case 0x7F1B5B90u: goto label_7F1B5B90;
    case 0x7F1B5B94u: goto label_7F1B5B94;
    case 0x7F1B5B98u: goto label_7F1B5B98;
    case 0x7F1B5B9Cu: goto label_7F1B5B9C;
    case 0x7F1B5BA0u: goto label_7F1B5BA0;
    case 0x7F1B5BA4u: goto label_7F1B5BA4;
    case 0x7F1B5BA8u: goto label_7F1B5BA8;
    case 0x7F1B5BACu: goto label_7F1B5BAC;
    case 0x7F1B5BB0u: goto label_7F1B5BB0;
    case 0x7F1B5BB4u: goto label_7F1B5BB4;
    case 0x7F1B5BB8u: goto label_7F1B5BB8;
    case 0x7F1B5BBCu: goto label_7F1B5BBC;
    case 0x7F1B5BC0u: goto label_7F1B5BC0;
    case 0x7F1B5BC4u: goto label_7F1B5BC4;
    case 0x7F1B5BC8u: goto label_7F1B5BC8;
    case 0x7F1B5BCCu: goto label_7F1B5BCC;
    case 0x7F1B5BD0u: goto label_7F1B5BD0;
    case 0x7F1B5BD4u: goto label_7F1B5BD4;
    case 0x7F1B5BD8u: goto label_7F1B5BD8;
    case 0x7F1B5BDCu: goto label_7F1B5BDC;
    case 0x7F1B5BE0u: goto label_7F1B5BE0;
    case 0x7F1B5BE4u: goto label_7F1B5BE4;
    case 0x7F1B5BE8u: goto label_7F1B5BE8;
    case 0x7F1B5BECu: goto label_7F1B5BEC;
    case 0x7F1B5BF0u: goto label_7F1B5BF0;
    case 0x7F1B5BF4u: goto label_7F1B5BF4;
    case 0x7F1B5BF8u: goto label_7F1B5BF8;
    case 0x7F1B5BFCu: goto label_7F1B5BFC;
    case 0x7F1B5C00u: goto label_7F1B5C00;
    case 0x7F1B5C04u: goto label_7F1B5C04;
    case 0x7F1B5C08u: goto label_7F1B5C08;
    case 0x7F1B5C0Cu: goto label_7F1B5C0C;
    case 0x7F1B5C10u: goto label_7F1B5C10;
    case 0x7F1B5C14u: goto label_7F1B5C14;
    case 0x7F1B5C18u: goto label_7F1B5C18;
    case 0x7F1B5C1Cu: goto label_7F1B5C1C;
    case 0x7F1B5C20u: goto label_7F1B5C20;
    case 0x7F1B5C24u: goto label_7F1B5C24;
    case 0x7F1B5C28u: goto label_7F1B5C28;
    case 0x7F1B5C2Cu: goto label_7F1B5C2C;
    case 0x7F1B5C30u: goto label_7F1B5C30;
    case 0x7F1B5C34u: goto label_7F1B5C34;
    case 0x7F1B5C38u: goto label_7F1B5C38;
    case 0x7F1B5C3Cu: goto label_7F1B5C3C;
    case 0x7F1B5C40u: goto label_7F1B5C40;
    case 0x7F1B5C44u: goto label_7F1B5C44;
    case 0x7F1B5C48u: goto label_7F1B5C48;
    case 0x7F1B5C4Cu: goto label_7F1B5C4C;
    case 0x7F1B5C50u: goto label_7F1B5C50;
    case 0x7F1B5C54u: goto label_7F1B5C54;
    case 0x7F1B5C58u: goto label_7F1B5C58;
    case 0x7F1B5C5Cu: goto label_7F1B5C5C;
    case 0x7F1B5C60u: goto label_7F1B5C60;
    case 0x7F1B5C64u: goto label_7F1B5C64;
    case 0x7F1B5C68u: goto label_7F1B5C68;
    case 0x7F1B5C6Cu: goto label_7F1B5C6C;
    case 0x7F1B5C70u: goto label_7F1B5C70;
    case 0x7F1B5C74u: goto label_7F1B5C74;
    case 0x7F1B5C78u: goto label_7F1B5C78;
    case 0x7F1B5C7Cu: goto label_7F1B5C7C;
    case 0x7F1B5C80u: goto label_7F1B5C80;
    case 0x7F1B5C84u: goto label_7F1B5C84;
    case 0x7F1B5C88u: goto label_7F1B5C88;
    case 0x7F1B5C8Cu: goto label_7F1B5C8C;
    case 0x7F1B5C90u: goto label_7F1B5C90;
    case 0x7F1B5C94u: goto label_7F1B5C94;
    case 0x7F1B5C98u: goto label_7F1B5C98;
    case 0x7F1B5C9Cu: goto label_7F1B5C9C;
    case 0x7F1B5CA0u: goto label_7F1B5CA0;
    case 0x7F1B5CA4u: goto label_7F1B5CA4;
    case 0x7F1B5CA8u: goto label_7F1B5CA8;
    case 0x7F1B5CACu: goto label_7F1B5CAC;
    case 0x7F1B5CB0u: goto label_7F1B5CB0;
    case 0x7F1B5CB4u: goto label_7F1B5CB4;
    case 0x7F1B5CB8u: goto label_7F1B5CB8;
    case 0x7F1B5CBCu: goto label_7F1B5CBC;
    case 0x7F1B5CC0u: goto label_7F1B5CC0;
    case 0x7F1B5CC4u: goto label_7F1B5CC4;
    case 0x7F1B5CC8u: goto label_7F1B5CC8;
    case 0x7F1B5CCCu: goto label_7F1B5CCC;
    case 0x7F1B5CD0u: goto label_7F1B5CD0;
    case 0x7F1B5CD4u: goto label_7F1B5CD4;
    case 0x7F1B5CD8u: goto label_7F1B5CD8;
    case 0x7F1B5CDCu: goto label_7F1B5CDC;
    case 0x7F1B5CE0u: goto label_7F1B5CE0;
    case 0x7F1B5CE4u: goto label_7F1B5CE4;
    case 0x7F1B5CE8u: goto label_7F1B5CE8;
    case 0x7F1B5CECu: goto label_7F1B5CEC;
    case 0x7F1B5CF0u: goto label_7F1B5CF0;
    case 0x7F1B5CF4u: goto label_7F1B5CF4;
    case 0x7F1B5CF8u: goto label_7F1B5CF8;
    case 0x7F1B5CFCu: goto label_7F1B5CFC;
    case 0x7F1B5D00u: goto label_7F1B5D00;
    case 0x7F1B5D04u: goto label_7F1B5D04;
    case 0x7F1B5D08u: goto label_7F1B5D08;
    case 0x7F1B5D0Cu: goto label_7F1B5D0C;
    case 0x7F1B5D10u: goto label_7F1B5D10;
    case 0x7F1B5D14u: goto label_7F1B5D14;
    case 0x7F1B5D18u: goto label_7F1B5D18;
    case 0x7F1B5D1Cu: goto label_7F1B5D1C;
    case 0x7F1B5D20u: goto label_7F1B5D20;
    case 0x7F1B5D24u: goto label_7F1B5D24;
    case 0x7F1B5D28u: goto label_7F1B5D28;
    case 0x7F1B5D2Cu: goto label_7F1B5D2C;
    case 0x7F1B5D30u: goto label_7F1B5D30;
    case 0x7F1B5D34u: goto label_7F1B5D34;
    case 0x7F1B5D38u: goto label_7F1B5D38;
    case 0x7F1B5D3Cu: goto label_7F1B5D3C;
    case 0x7F1B5D40u: goto label_7F1B5D40;
    case 0x7F1B5D44u: goto label_7F1B5D44;
    case 0x7F1B5D48u: goto label_7F1B5D48;
    case 0x7F1B5D4Cu: goto label_7F1B5D4C;
    case 0x7F1B5D50u: goto label_7F1B5D50;
    case 0x7F1B5D54u: goto label_7F1B5D54;
    case 0x7F1B5D58u: goto label_7F1B5D58;
    case 0x7F1B5D5Cu: goto label_7F1B5D5C;
    case 0x7F1B5D60u: goto label_7F1B5D60;
    case 0x7F1B5D64u: goto label_7F1B5D64;
    case 0x7F1B5D68u: goto label_7F1B5D68;
    case 0x7F1B5D6Cu: goto label_7F1B5D6C;
    case 0x7F1B5D70u: goto label_7F1B5D70;
    case 0x7F1B5D74u: goto label_7F1B5D74;
    case 0x7F1B5D78u: goto label_7F1B5D78;
    case 0x7F1B5D7Cu: goto label_7F1B5D7C;
    case 0x7F1B5D80u: goto label_7F1B5D80;
    case 0x7F1B5D84u: goto label_7F1B5D84;
    case 0x7F1B5D88u: goto label_7F1B5D88;
    case 0x7F1B5D8Cu: goto label_7F1B5D8C;
    case 0x7F1B5D90u: goto label_7F1B5D90;
    case 0x7F1B5D94u: goto label_7F1B5D94;
    case 0x7F1B5D98u: goto label_7F1B5D98;
    case 0x7F1B5D9Cu: goto label_7F1B5D9C;
    case 0x7F1B5DA0u: goto label_7F1B5DA0;
    case 0x7F1B5DA4u: goto label_7F1B5DA4;
    case 0x7F1B5DA8u: goto label_7F1B5DA8;
    case 0x7F1B5DACu: goto label_7F1B5DAC;
    case 0x7F1B5DB0u: goto label_7F1B5DB0;
    case 0x7F1B5DB4u: goto label_7F1B5DB4;
    case 0x7F1B5DB8u: goto label_7F1B5DB8;
    case 0x7F1B5DBCu: goto label_7F1B5DBC;
    case 0x7F1B5DC0u: goto label_7F1B5DC0;
    case 0x7F1B5DC4u: goto label_7F1B5DC4;
    case 0x7F1B5DC8u: goto label_7F1B5DC8;
    case 0x7F1B5DCCu: goto label_7F1B5DCC;
    case 0x7F1B5DD0u: goto label_7F1B5DD0;
    case 0x7F1B5DD4u: goto label_7F1B5DD4;
    case 0x7F1B5DD8u: goto label_7F1B5DD8;
    case 0x7F1B5DDCu: goto label_7F1B5DDC;
    case 0x7F1B5DE0u: goto label_7F1B5DE0;
    case 0x7F1B5DE4u: goto label_7F1B5DE4;
    case 0x7F1B5DE8u: goto label_7F1B5DE8;
    case 0x7F1B5DECu: goto label_7F1B5DEC;
    case 0x7F1B5DF0u: goto label_7F1B5DF0;
    case 0x7F1B5DF4u: goto label_7F1B5DF4;
    case 0x7F1B5DF8u: goto label_7F1B5DF8;
    case 0x7F1B5DFCu: goto label_7F1B5DFC;
    case 0x7F1B5E00u: goto label_7F1B5E00;
    case 0x7F1B5E04u: goto label_7F1B5E04;
    case 0x7F1B5E08u: goto label_7F1B5E08;
    case 0x7F1B5E0Cu: goto label_7F1B5E0C;
    case 0x7F1B5E10u: goto label_7F1B5E10;
    case 0x7F1B5E14u: goto label_7F1B5E14;
    case 0x7F1B5E18u: goto label_7F1B5E18;
    case 0x7F1B5E1Cu: goto label_7F1B5E1C;
    case 0x7F1B5E20u: goto label_7F1B5E20;
    case 0x7F1B5E24u: goto label_7F1B5E24;
    case 0x7F1B5E28u: goto label_7F1B5E28;
    case 0x7F1B5E2Cu: goto label_7F1B5E2C;
    case 0x7F1B5E30u: goto label_7F1B5E30;
    case 0x7F1B5E34u: goto label_7F1B5E34;
    case 0x7F1B5E38u: goto label_7F1B5E38;
    case 0x7F1B5E3Cu: goto label_7F1B5E3C;
    case 0x7F1B5E40u: goto label_7F1B5E40;
    case 0x7F1B5E44u: goto label_7F1B5E44;
    case 0x7F1B5E48u: goto label_7F1B5E48;
    case 0x7F1B5E4Cu: goto label_7F1B5E4C;
    case 0x7F1B5E50u: goto label_7F1B5E50;
    case 0x7F1B5E54u: goto label_7F1B5E54;
    case 0x7F1B5E58u: goto label_7F1B5E58;
    case 0x7F1B5E5Cu: goto label_7F1B5E5C;
    case 0x7F1B5E60u: goto label_7F1B5E60;
    case 0x7F1B5E64u: goto label_7F1B5E64;
    case 0x7F1B5E68u: goto label_7F1B5E68;
    case 0x7F1B5E6Cu: goto label_7F1B5E6C;
    case 0x7F1B5E70u: goto label_7F1B5E70;
    case 0x7F1B5E74u: goto label_7F1B5E74;
    case 0x7F1B5E78u: goto label_7F1B5E78;
    case 0x7F1B5E7Cu: goto label_7F1B5E7C;
    case 0x7F1B5E80u: goto label_7F1B5E80;
    case 0x7F1B5E84u: goto label_7F1B5E84;
    case 0x7F1B5E88u: goto label_7F1B5E88;
    case 0x7F1B5E8Cu: goto label_7F1B5E8C;
    case 0x7F1B5E90u: goto label_7F1B5E90;
    case 0x7F1B5E94u: goto label_7F1B5E94;
    case 0x7F1B5E98u: goto label_7F1B5E98;
    case 0x7F1B5E9Cu: goto label_7F1B5E9C;
    case 0x7F1B5EA0u: goto label_7F1B5EA0;
    case 0x7F1B5EA4u: goto label_7F1B5EA4;
    case 0x7F1B5EA8u: goto label_7F1B5EA8;
    case 0x7F1B5EACu: goto label_7F1B5EAC;
    case 0x7F1B5EB0u: goto label_7F1B5EB0;
    case 0x7F1B5EB4u: goto label_7F1B5EB4;
    case 0x7F1B5EB8u: goto label_7F1B5EB8;
    case 0x7F1B5EBCu: goto label_7F1B5EBC;
    case 0x7F1B5EC0u: goto label_7F1B5EC0;
    case 0x7F1B5EC4u: goto label_7F1B5EC4;
    case 0x7F1B5EC8u: goto label_7F1B5EC8;
    case 0x7F1B5ECCu: goto label_7F1B5ECC;
    case 0x7F1B5ED0u: goto label_7F1B5ED0;
    case 0x7F1B5ED4u: goto label_7F1B5ED4;
    case 0x7F1B5ED8u: goto label_7F1B5ED8;
    case 0x7F1B5EDCu: goto label_7F1B5EDC;
    case 0x7F1B5EE0u: goto label_7F1B5EE0;
    case 0x7F1B5EE4u: goto label_7F1B5EE4;
    case 0x7F1B5EE8u: goto label_7F1B5EE8;
    case 0x7F1B5EECu: goto label_7F1B5EEC;
    case 0x7F1B5EF0u: goto label_7F1B5EF0;
    case 0x7F1B5EF4u: goto label_7F1B5EF4;
    case 0x7F1B5EF8u: goto label_7F1B5EF8;
    case 0x7F1B5EFCu: goto label_7F1B5EFC;
    case 0x7F1B5F00u: goto label_7F1B5F00;
    case 0x7F1B5F04u: goto label_7F1B5F04;
    case 0x7F1B5F08u: goto label_7F1B5F08;
    case 0x7F1B5F0Cu: goto label_7F1B5F0C;
    case 0x7F1B5F10u: goto label_7F1B5F10;
    case 0x7F1B5F14u: goto label_7F1B5F14;
    case 0x7F1B5F18u: goto label_7F1B5F18;
    case 0x7F1B5F1Cu: goto label_7F1B5F1C;
    case 0x7F1B5F20u: goto label_7F1B5F20;
    case 0x7F1B5F24u: goto label_7F1B5F24;
    case 0x7F1B5F28u: goto label_7F1B5F28;
    case 0x7F1B5F2Cu: goto label_7F1B5F2C;
    case 0x7F1B5F30u: goto label_7F1B5F30;
    case 0x7F1B5F34u: goto label_7F1B5F34;
    case 0x7F1B5F38u: goto label_7F1B5F38;
    case 0x7F1B5F3Cu: goto label_7F1B5F3C;
    case 0x7F1B5F40u: goto label_7F1B5F40;
    case 0x7F1B5F44u: goto label_7F1B5F44;
    case 0x7F1B5F48u: goto label_7F1B5F48;
    case 0x7F1B5F4Cu: goto label_7F1B5F4C;
    case 0x7F1B5F50u: goto label_7F1B5F50;
    case 0x7F1B5F54u: goto label_7F1B5F54;
    case 0x7F1B5F58u: goto label_7F1B5F58;
    case 0x7F1B5F5Cu: goto label_7F1B5F5C;
    case 0x7F1B5F60u: goto label_7F1B5F60;
    case 0x7F1B5F64u: goto label_7F1B5F64;
    case 0x7F1B5F68u: goto label_7F1B5F68;
    case 0x7F1B5F6Cu: goto label_7F1B5F6C;
    case 0x7F1B5F70u: goto label_7F1B5F70;
    case 0x7F1B5F74u: goto label_7F1B5F74;
    case 0x7F1B5F78u: goto label_7F1B5F78;
    case 0x7F1B5F7Cu: goto label_7F1B5F7C;
    case 0x7F1B5F80u: goto label_7F1B5F80;
    case 0x7F1B5F84u: goto label_7F1B5F84;
    case 0x7F1B5F88u: goto label_7F1B5F88;
    case 0x7F1B5F8Cu: goto label_7F1B5F8C;
    case 0x7F1B5F90u: goto label_7F1B5F90;
    case 0x7F1B5F94u: goto label_7F1B5F94;
    case 0x7F1B5F98u: goto label_7F1B5F98;
    case 0x7F1B5F9Cu: goto label_7F1B5F9C;
    case 0x7F1B5FA0u: goto label_7F1B5FA0;
    case 0x7F1B5FA4u: goto label_7F1B5FA4;
    case 0x7F1B5FA8u: goto label_7F1B5FA8;
    case 0x7F1B5FACu: goto label_7F1B5FAC;
    case 0x7F1B5FB0u: goto label_7F1B5FB0;
    case 0x7F1B5FB4u: goto label_7F1B5FB4;
    case 0x7F1B5FB8u: goto label_7F1B5FB8;
    case 0x7F1B5FBCu: goto label_7F1B5FBC;
    case 0x7F1B5FC0u: goto label_7F1B5FC0;
    case 0x7F1B5FC4u: goto label_7F1B5FC4;
    case 0x7F1B5FC8u: goto label_7F1B5FC8;
    case 0x7F1B5FCCu: goto label_7F1B5FCC;
    case 0x7F1B5FD0u: goto label_7F1B5FD0;
    case 0x7F1B5FD4u: goto label_7F1B5FD4;
    case 0x7F1B5FD8u: goto label_7F1B5FD8;
    case 0x7F1B5FDCu: goto label_7F1B5FDC;
    case 0x7F1B5FE0u: goto label_7F1B5FE0;
    case 0x7F1B5FE4u: goto label_7F1B5FE4;
    case 0x7F1B5FE8u: goto label_7F1B5FE8;
    case 0x7F1B5FECu: goto label_7F1B5FEC;
    case 0x7F1B5FF0u: goto label_7F1B5FF0;
    case 0x7F1B5FF4u: goto label_7F1B5FF4;
    case 0x7F1B5FF8u: goto label_7F1B5FF8;
    case 0x7F1B5FFCu: goto label_7F1B5FFC;
    case 0x7F1B6000u: goto label_7F1B6000;
    case 0x7F1B6004u: goto label_7F1B6004;
    case 0x7F1B6008u: goto label_7F1B6008;
    case 0x7F1B600Cu: goto label_7F1B600C;
    case 0x7F1B6010u: goto label_7F1B6010;
    case 0x7F1B6014u: goto label_7F1B6014;
    case 0x7F1B6018u: goto label_7F1B6018;
    case 0x7F1B601Cu: goto label_7F1B601C;
    case 0x7F1B6020u: goto label_7F1B6020;
    case 0x7F1B6024u: goto label_7F1B6024;
    case 0x7F1B6028u: goto label_7F1B6028;
    case 0x7F1B602Cu: goto label_7F1B602C;
    case 0x7F1B6030u: goto label_7F1B6030;
    case 0x7F1B6034u: goto label_7F1B6034;
    case 0x7F1B6038u: goto label_7F1B6038;
    case 0x7F1B603Cu: goto label_7F1B603C;
    case 0x7F1B6040u: goto label_7F1B6040;
    case 0x7F1B6044u: goto label_7F1B6044;
    case 0x7F1B6048u: goto label_7F1B6048;
    case 0x7F1B604Cu: goto label_7F1B604C;
    case 0x7F1B6050u: goto label_7F1B6050;
    case 0x7F1B6054u: goto label_7F1B6054;
    case 0x7F1B6058u: goto label_7F1B6058;
    case 0x7F1B605Cu: goto label_7F1B605C;
    case 0x7F1B6060u: goto label_7F1B6060;
    case 0x7F1B6064u: goto label_7F1B6064;
    case 0x7F1B6068u: goto label_7F1B6068;
    case 0x7F1B606Cu: goto label_7F1B606C;
    case 0x7F1B6070u: goto label_7F1B6070;
    case 0x7F1B6074u: goto label_7F1B6074;
    case 0x7F1B6078u: goto label_7F1B6078;
    case 0x7F1B607Cu: goto label_7F1B607C;
    case 0x7F1B6080u: goto label_7F1B6080;
    case 0x7F1B6084u: goto label_7F1B6084;
    case 0x7F1B6088u: goto label_7F1B6088;
    case 0x7F1B608Cu: goto label_7F1B608C;
    case 0x7F1B6090u: goto label_7F1B6090;
    case 0x7F1B6094u: goto label_7F1B6094;
    case 0x7F1B6098u: goto label_7F1B6098;
    case 0x7F1B609Cu: goto label_7F1B609C;
    case 0x7F1B60A0u: goto label_7F1B60A0;
    case 0x7F1B60A4u: goto label_7F1B60A4;
    case 0x7F1B60A8u: goto label_7F1B60A8;
    case 0x7F1B60ACu: goto label_7F1B60AC;
    case 0x7F1B60B0u: goto label_7F1B60B0;
    case 0x7F1B60B4u: goto label_7F1B60B4;
    case 0x7F1B60B8u: goto label_7F1B60B8;
    case 0x7F1B60BCu: goto label_7F1B60BC;
    case 0x7F1B60C0u: goto label_7F1B60C0;
    case 0x7F1B60C4u: goto label_7F1B60C4;
    case 0x7F1B60C8u: goto label_7F1B60C8;
    case 0x7F1B60CCu: goto label_7F1B60CC;
    case 0x7F1B60D0u: goto label_7F1B60D0;
    case 0x7F1B60D4u: goto label_7F1B60D4;
    case 0x7F1B60D8u: goto label_7F1B60D8;
    case 0x7F1B60DCu: goto label_7F1B60DC;
    case 0x7F1B60E0u: goto label_7F1B60E0;
    case 0x7F1B60E4u: goto label_7F1B60E4;
    case 0x7F1B60E8u: goto label_7F1B60E8;
    case 0x7F1B60ECu: goto label_7F1B60EC;
    case 0x7F1B60F0u: goto label_7F1B60F0;
    case 0x7F1B60F4u: goto label_7F1B60F4;
    case 0x7F1B60F8u: goto label_7F1B60F8;
    case 0x7F1B60FCu: goto label_7F1B60FC;
    case 0x7F1B6100u: goto label_7F1B6100;
    case 0x7F1B6104u: goto label_7F1B6104;
    case 0x7F1B6108u: goto label_7F1B6108;
    case 0x7F1B610Cu: goto label_7F1B610C;
    case 0x7F1B6110u: goto label_7F1B6110;
    case 0x7F1B6114u: goto label_7F1B6114;
    case 0x7F1B6118u: goto label_7F1B6118;
    case 0x7F1B611Cu: goto label_7F1B611C;
    case 0x7F1B6120u: goto label_7F1B6120;
    case 0x7F1B6124u: goto label_7F1B6124;
    case 0x7F1B6128u: goto label_7F1B6128;
    case 0x7F1B612Cu: goto label_7F1B612C;
    case 0x7F1B6130u: goto label_7F1B6130;
    case 0x7F1B6134u: goto label_7F1B6134;
    case 0x7F1B6138u: goto label_7F1B6138;
    case 0x7F1B613Cu: goto label_7F1B613C;
    case 0x7F1B6140u: goto label_7F1B6140;
    case 0x7F1B6144u: goto label_7F1B6144;
    case 0x7F1B6148u: goto label_7F1B6148;
    case 0x7F1B614Cu: goto label_7F1B614C;
    case 0x7F1B6150u: goto label_7F1B6150;
    case 0x7F1B6154u: goto label_7F1B6154;
    case 0x7F1B6158u: goto label_7F1B6158;
    case 0x7F1B615Cu: goto label_7F1B615C;
    case 0x7F1B6160u: goto label_7F1B6160;
    case 0x7F1B6164u: goto label_7F1B6164;
    case 0x7F1B6168u: goto label_7F1B6168;
    case 0x7F1B616Cu: goto label_7F1B616C;
    case 0x7F1B6170u: goto label_7F1B6170;
    case 0x7F1B6174u: goto label_7F1B6174;
    case 0x7F1B6178u: goto label_7F1B6178;
    case 0x7F1B617Cu: goto label_7F1B617C;
    case 0x7F1B6180u: goto label_7F1B6180;
    case 0x7F1B6184u: goto label_7F1B6184;
    case 0x7F1B6188u: goto label_7F1B6188;
    case 0x7F1B618Cu: goto label_7F1B618C;
    case 0x7F1B6190u: goto label_7F1B6190;
    case 0x7F1B6194u: goto label_7F1B6194;
    case 0x7F1B6198u: goto label_7F1B6198;
    case 0x7F1B619Cu: goto label_7F1B619C;
    case 0x7F1B61A0u: goto label_7F1B61A0;
    case 0x7F1B61A4u: goto label_7F1B61A4;
    case 0x7F1B61A8u: goto label_7F1B61A8;
    case 0x7F1B61ACu: goto label_7F1B61AC;
    case 0x7F1B61B0u: goto label_7F1B61B0;
    case 0x7F1B61B4u: goto label_7F1B61B4;
    case 0x7F1B61B8u: goto label_7F1B61B8;
    case 0x7F1B61BCu: goto label_7F1B61BC;
    case 0x7F1B61C0u: goto label_7F1B61C0;
    case 0x7F1B61C4u: goto label_7F1B61C4;
    case 0x7F1B61C8u: goto label_7F1B61C8;
    case 0x7F1B61CCu: goto label_7F1B61CC;
    case 0x7F1B61D0u: goto label_7F1B61D0;
    case 0x7F1B61D4u: goto label_7F1B61D4;
    case 0x7F1B61D8u: goto label_7F1B61D8;
    case 0x7F1B61DCu: goto label_7F1B61DC;
    case 0x7F1B61E0u: goto label_7F1B61E0;
    case 0x7F1B61E4u: goto label_7F1B61E4;
    case 0x7F1B61E8u: goto label_7F1B61E8;
    case 0x7F1B61ECu: goto label_7F1B61EC;
    case 0x7F1B61F0u: goto label_7F1B61F0;
    case 0x7F1B61F4u: goto label_7F1B61F4;
    case 0x7F1B61F8u: goto label_7F1B61F8;
    case 0x7F1B61FCu: goto label_7F1B61FC;
    case 0x7F1B6200u: goto label_7F1B6200;
    case 0x7F1B6204u: goto label_7F1B6204;
    case 0x7F1B6208u: goto label_7F1B6208;
    case 0x7F1B620Cu: goto label_7F1B620C;
    case 0x7F1B6210u: goto label_7F1B6210;
    case 0x7F1B6214u: goto label_7F1B6214;
    case 0x7F1B6218u: goto label_7F1B6218;
    case 0x7F1B621Cu: goto label_7F1B621C;
    case 0x7F1B6220u: goto label_7F1B6220;
    case 0x7F1B6224u: goto label_7F1B6224;
    case 0x7F1B6228u: goto label_7F1B6228;
    case 0x7F1B622Cu: goto label_7F1B622C;
    case 0x7F1B6230u: goto label_7F1B6230;
    case 0x7F1B6234u: goto label_7F1B6234;
    case 0x7F1B6238u: goto label_7F1B6238;
    case 0x7F1B623Cu: goto label_7F1B623C;
    case 0x7F1B6240u: goto label_7F1B6240;
    case 0x7F1B6244u: goto label_7F1B6244;
    case 0x7F1B6248u: goto label_7F1B6248;
    case 0x7F1B624Cu: goto label_7F1B624C;
    case 0x7F1B6250u: goto label_7F1B6250;
    case 0x7F1B6254u: goto label_7F1B6254;
    case 0x7F1B6258u: goto label_7F1B6258;
    case 0x7F1B625Cu: goto label_7F1B625C;
    case 0x7F1B6260u: goto label_7F1B6260;
    case 0x7F1B6264u: goto label_7F1B6264;
    case 0x7F1B6268u: goto label_7F1B6268;
    case 0x7F1B626Cu: goto label_7F1B626C;
    case 0x7F1B6270u: goto label_7F1B6270;
    case 0x7F1B6274u: goto label_7F1B6274;
    case 0x7F1B6278u: goto label_7F1B6278;
    case 0x7F1B627Cu: goto label_7F1B627C;
    case 0x7F1B6280u: goto label_7F1B6280;
    case 0x7F1B6284u: goto label_7F1B6284;
    case 0x7F1B6288u: goto label_7F1B6288;
    case 0x7F1B628Cu: goto label_7F1B628C;
    case 0x7F1B6290u: goto label_7F1B6290;
    case 0x7F1B6294u: goto label_7F1B6294;
    case 0x7F1B6298u: goto label_7F1B6298;
    case 0x7F1B629Cu: goto label_7F1B629C;
    case 0x7F1B62A0u: goto label_7F1B62A0;
    case 0x7F1B62A4u: goto label_7F1B62A4;
    case 0x7F1B62A8u: goto label_7F1B62A8;
    case 0x7F1B62ACu: goto label_7F1B62AC;
    case 0x7F1B62B0u: goto label_7F1B62B0;
    case 0x7F1B62B4u: goto label_7F1B62B4;
    case 0x7F1B62B8u: goto label_7F1B62B8;
    case 0x7F1B62BCu: goto label_7F1B62BC;
    case 0x7F1B62C0u: goto label_7F1B62C0;
    case 0x7F1B62C4u: goto label_7F1B62C4;
    case 0x7F1B62C8u: goto label_7F1B62C8;
    case 0x7F1B62CCu: goto label_7F1B62CC;
    case 0x7F1B62D0u: goto label_7F1B62D0;
    case 0x7F1B62D4u: goto label_7F1B62D4;
    case 0x7F1B62D8u: goto label_7F1B62D8;
    case 0x7F1B62DCu: goto label_7F1B62DC;
    case 0x7F1B62E0u: goto label_7F1B62E0;
    case 0x7F1B62E4u: goto label_7F1B62E4;
    case 0x7F1B62E8u: goto label_7F1B62E8;
    case 0x7F1B62ECu: goto label_7F1B62EC;
    case 0x7F1B62F0u: goto label_7F1B62F0;
    case 0x7F1B62F4u: goto label_7F1B62F4;
    case 0x7F1B62F8u: goto label_7F1B62F8;
    case 0x7F1B62FCu: goto label_7F1B62FC;
    case 0x7F1B6300u: goto label_7F1B6300;
    case 0x7F1B6304u: goto label_7F1B6304;
    case 0x7F1B6308u: goto label_7F1B6308;
    case 0x7F1B630Cu: goto label_7F1B630C;
    case 0x7F1B6310u: goto label_7F1B6310;
    case 0x7F1B6314u: goto label_7F1B6314;
    case 0x7F1B6318u: goto label_7F1B6318;
    case 0x7F1B631Cu: goto label_7F1B631C;
    case 0x7F1B6320u: goto label_7F1B6320;
    case 0x7F1B6324u: goto label_7F1B6324;
    case 0x7F1B6328u: goto label_7F1B6328;
    case 0x7F1B632Cu: goto label_7F1B632C;
    case 0x7F1B6330u: goto label_7F1B6330;
    case 0x7F1B6334u: goto label_7F1B6334;
    case 0x7F1B6338u: goto label_7F1B6338;
    case 0x7F1B633Cu: goto label_7F1B633C;
    case 0x7F1B6340u: goto label_7F1B6340;
    case 0x7F1B6344u: goto label_7F1B6344;
    case 0x7F1B6348u: goto label_7F1B6348;
    case 0x7F1B634Cu: goto label_7F1B634C;
    case 0x7F1B6350u: goto label_7F1B6350;
    case 0x7F1B6354u: goto label_7F1B6354;
    case 0x7F1B6358u: goto label_7F1B6358;
    case 0x7F1B635Cu: goto label_7F1B635C;
    case 0x7F1B6360u: goto label_7F1B6360;
    case 0x7F1B6364u: goto label_7F1B6364;
    case 0x7F1B6368u: goto label_7F1B6368;
    case 0x7F1B636Cu: goto label_7F1B636C;
    case 0x7F1B6370u: goto label_7F1B6370;
    case 0x7F1B6374u: goto label_7F1B6374;
    case 0x7F1B6378u: goto label_7F1B6378;
    case 0x7F1B637Cu: goto label_7F1B637C;
    case 0x7F1B6380u: goto label_7F1B6380;
    case 0x7F1B6384u: goto label_7F1B6384;
    case 0x7F1B6388u: goto label_7F1B6388;
    case 0x7F1B638Cu: goto label_7F1B638C;
    case 0x7F1B6390u: goto label_7F1B6390;
    case 0x7F1B6394u: goto label_7F1B6394;
    case 0x7F1B6398u: goto label_7F1B6398;
    case 0x7F1B639Cu: goto label_7F1B639C;
    case 0x7F1B63A0u: goto label_7F1B63A0;
    case 0x7F1B63A4u: goto label_7F1B63A4;
    case 0x7F1B63A8u: goto label_7F1B63A8;
    case 0x7F1B63ACu: goto label_7F1B63AC;
    case 0x7F1B63B0u: goto label_7F1B63B0;
    case 0x7F1B63B4u: goto label_7F1B63B4;
    case 0x7F1B63B8u: goto label_7F1B63B8;
    case 0x7F1B63BCu: goto label_7F1B63BC;
    case 0x7F1B63C0u: goto label_7F1B63C0;
    case 0x7F1B63C4u: goto label_7F1B63C4;
    case 0x7F1B63C8u: goto label_7F1B63C8;
    case 0x7F1B63CCu: goto label_7F1B63CC;
    case 0x7F1B63D0u: goto label_7F1B63D0;
    case 0x7F1B63D4u: goto label_7F1B63D4;
    case 0x7F1B63D8u: goto label_7F1B63D8;
    case 0x7F1B63DCu: goto label_7F1B63DC;
    case 0x7F1B63E0u: goto label_7F1B63E0;
    case 0x7F1B63E4u: goto label_7F1B63E4;
    case 0x7F1B63E8u: goto label_7F1B63E8;
    case 0x7F1B63ECu: goto label_7F1B63EC;
    case 0x7F1B63F0u: goto label_7F1B63F0;
    case 0x7F1B63F4u: goto label_7F1B63F4;
    case 0x7F1B63F8u: goto label_7F1B63F8;
    case 0x7F1B63FCu: goto label_7F1B63FC;
    case 0x7F1B6400u: goto label_7F1B6400;
    case 0x7F1B6404u: goto label_7F1B6404;
    case 0x7F1B6408u: goto label_7F1B6408;
    case 0x7F1B640Cu: goto label_7F1B640C;
    case 0x7F1B6410u: goto label_7F1B6410;
    case 0x7F1B6414u: goto label_7F1B6414;
    case 0x7F1B6418u: goto label_7F1B6418;
    case 0x7F1B641Cu: goto label_7F1B641C;
    case 0x7F1B6420u: goto label_7F1B6420;
    case 0x7F1B6424u: goto label_7F1B6424;
    case 0x7F1B6428u: goto label_7F1B6428;
    case 0x7F1B642Cu: goto label_7F1B642C;
    case 0x7F1B6430u: goto label_7F1B6430;
    case 0x7F1B6434u: goto label_7F1B6434;
    case 0x7F1B6438u: goto label_7F1B6438;
    case 0x7F1B643Cu: goto label_7F1B643C;
    case 0x7F1B6440u: goto label_7F1B6440;
    case 0x7F1B6444u: goto label_7F1B6444;
    case 0x7F1B6448u: goto label_7F1B6448;
    case 0x7F1B644Cu: goto label_7F1B644C;
    case 0x7F1B6450u: goto label_7F1B6450;
    case 0x7F1B6454u: goto label_7F1B6454;
    case 0x7F1B6458u: goto label_7F1B6458;
    case 0x7F1B645Cu: goto label_7F1B645C;
    case 0x7F1B6460u: goto label_7F1B6460;
    case 0x7F1B6464u: goto label_7F1B6464;
    case 0x7F1B6468u: goto label_7F1B6468;
    case 0x7F1B646Cu: goto label_7F1B646C;
    case 0x7F1B6470u: goto label_7F1B6470;
    case 0x7F1B6474u: goto label_7F1B6474;
    case 0x7F1B6478u: goto label_7F1B6478;
    case 0x7F1B647Cu: goto label_7F1B647C;
    case 0x7F1B6480u: goto label_7F1B6480;
    case 0x7F1B6484u: goto label_7F1B6484;
    case 0x7F1B6488u: goto label_7F1B6488;
    case 0x7F1B648Cu: goto label_7F1B648C;
    case 0x7F1B6490u: goto label_7F1B6490;
    case 0x7F1B6494u: goto label_7F1B6494;
    case 0x7F1B6498u: goto label_7F1B6498;
    case 0x7F1B649Cu: goto label_7F1B649C;
    case 0x7F1B64A0u: goto label_7F1B64A0;
    case 0x7F1B64A4u: goto label_7F1B64A4;
    case 0x7F1B64A8u: goto label_7F1B64A8;
    case 0x7F1B64ACu: goto label_7F1B64AC;
    case 0x7F1B64B0u: goto label_7F1B64B0;
    case 0x7F1B64B4u: goto label_7F1B64B4;
    case 0x7F1B64B8u: goto label_7F1B64B8;
    case 0x7F1B64BCu: goto label_7F1B64BC;
    case 0x7F1B64C0u: goto label_7F1B64C0;
    case 0x7F1B64C4u: goto label_7F1B64C4;
    case 0x7F1B64C8u: goto label_7F1B64C8;
    case 0x7F1B64CCu: goto label_7F1B64CC;
    case 0x7F1B64D0u: goto label_7F1B64D0;
    case 0x7F1B64D4u: goto label_7F1B64D4;
    case 0x7F1B64D8u: goto label_7F1B64D8;
    case 0x7F1B64DCu: goto label_7F1B64DC;
    case 0x7F1B64E0u: goto label_7F1B64E0;
    case 0x7F1B64E4u: goto label_7F1B64E4;
    case 0x7F1B64E8u: goto label_7F1B64E8;
    case 0x7F1B64ECu: goto label_7F1B64EC;
    case 0x7F1B64F0u: goto label_7F1B64F0;
    case 0x7F1B64F4u: goto label_7F1B64F4;
    case 0x7F1B64F8u: goto label_7F1B64F8;
    case 0x7F1B64FCu: goto label_7F1B64FC;
    case 0x7F1B6500u: goto label_7F1B6500;
    case 0x7F1B6504u: goto label_7F1B6504;
    case 0x7F1B6508u: goto label_7F1B6508;
    case 0x7F1B650Cu: goto label_7F1B650C;
    case 0x7F1B6510u: goto label_7F1B6510;
    case 0x7F1B6514u: goto label_7F1B6514;
    case 0x7F1B6518u: goto label_7F1B6518;
    case 0x7F1B651Cu: goto label_7F1B651C;
    case 0x7F1B6520u: goto label_7F1B6520;
    case 0x7F1B6524u: goto label_7F1B6524;
    case 0x7F1B6528u: goto label_7F1B6528;
    case 0x7F1B652Cu: goto label_7F1B652C;
    case 0x7F1B6530u: goto label_7F1B6530;
    case 0x7F1B6534u: goto label_7F1B6534;
    case 0x7F1B6538u: goto label_7F1B6538;
    case 0x7F1B653Cu: goto label_7F1B653C;
    case 0x7F1B6540u: goto label_7F1B6540;
    case 0x7F1B6544u: goto label_7F1B6544;
    case 0x7F1B6548u: goto label_7F1B6548;
    case 0x7F1B654Cu: goto label_7F1B654C;
    case 0x7F1B6550u: goto label_7F1B6550;
    case 0x7F1B6554u: goto label_7F1B6554;
    case 0x7F1B6558u: goto label_7F1B6558;
    case 0x7F1B655Cu: goto label_7F1B655C;
    case 0x7F1B6560u: goto label_7F1B6560;
    case 0x7F1B6564u: goto label_7F1B6564;
    case 0x7F1B6568u: goto label_7F1B6568;
    case 0x7F1B656Cu: goto label_7F1B656C;
    case 0x7F1B6570u: goto label_7F1B6570;
    case 0x7F1B6574u: goto label_7F1B6574;
    case 0x7F1B6578u: goto label_7F1B6578;
    case 0x7F1B657Cu: goto label_7F1B657C;
    case 0x7F1B6580u: goto label_7F1B6580;
    case 0x7F1B6584u: goto label_7F1B6584;
    case 0x7F1B6588u: goto label_7F1B6588;
    case 0x7F1B658Cu: goto label_7F1B658C;
    case 0x7F1B6590u: goto label_7F1B6590;
    case 0x7F1B6594u: goto label_7F1B6594;
    case 0x7F1B6598u: goto label_7F1B6598;
    case 0x7F1B659Cu: goto label_7F1B659C;
    case 0x7F1B65A0u: goto label_7F1B65A0;
    case 0x7F1B65A4u: goto label_7F1B65A4;
    case 0x7F1B65A8u: goto label_7F1B65A8;
    case 0x7F1B65ACu: goto label_7F1B65AC;
    case 0x7F1B65B0u: goto label_7F1B65B0;
    case 0x7F1B65B4u: goto label_7F1B65B4;
    case 0x7F1B65B8u: goto label_7F1B65B8;
    case 0x7F1B65BCu: goto label_7F1B65BC;
    case 0x7F1B65C0u: goto label_7F1B65C0;
    case 0x7F1B65C4u: goto label_7F1B65C4;
    case 0x7F1B65C8u: goto label_7F1B65C8;
    case 0x7F1B65CCu: goto label_7F1B65CC;
    case 0x7F1B65D0u: goto label_7F1B65D0;
    case 0x7F1B65D4u: goto label_7F1B65D4;
    case 0x7F1B65D8u: goto label_7F1B65D8;
    case 0x7F1B65DCu: goto label_7F1B65DC;
    case 0x7F1B65E0u: goto label_7F1B65E0;
    case 0x7F1B65E4u: goto label_7F1B65E4;
    case 0x7F1B65E8u: goto label_7F1B65E8;
    case 0x7F1B65ECu: goto label_7F1B65EC;
    case 0x7F1B65F0u: goto label_7F1B65F0;
    case 0x7F1B65F4u: goto label_7F1B65F4;
    case 0x7F1B65F8u: goto label_7F1B65F8;
    case 0x7F1B65FCu: goto label_7F1B65FC;
    case 0x7F1B6600u: goto label_7F1B6600;
    case 0x7F1B6604u: goto label_7F1B6604;
    case 0x7F1B6608u: goto label_7F1B6608;
    case 0x7F1B660Cu: goto label_7F1B660C;
    case 0x7F1B6610u: goto label_7F1B6610;
    case 0x7F1B6614u: goto label_7F1B6614;
    case 0x7F1B6618u: goto label_7F1B6618;
    case 0x7F1B661Cu: goto label_7F1B661C;
    case 0x7F1B6620u: goto label_7F1B6620;
    case 0x7F1B6624u: goto label_7F1B6624;
    case 0x7F1B6628u: goto label_7F1B6628;
    case 0x7F1B662Cu: goto label_7F1B662C;
    case 0x7F1B6630u: goto label_7F1B6630;
    case 0x7F1B6634u: goto label_7F1B6634;
    case 0x7F1B6638u: goto label_7F1B6638;
    case 0x7F1B663Cu: goto label_7F1B663C;
    case 0x7F1B6640u: goto label_7F1B6640;
    case 0x7F1B6644u: goto label_7F1B6644;
    case 0x7F1B6648u: goto label_7F1B6648;
    case 0x7F1B664Cu: goto label_7F1B664C;
    case 0x7F1B6650u: goto label_7F1B6650;
    case 0x7F1B6654u: goto label_7F1B6654;
    case 0x7F1B6658u: goto label_7F1B6658;
    case 0x7F1B665Cu: goto label_7F1B665C;
    case 0x7F1B6660u: goto label_7F1B6660;
    case 0x7F1B6664u: goto label_7F1B6664;
    case 0x7F1B6668u: goto label_7F1B6668;
    case 0x7F1B666Cu: goto label_7F1B666C;
    case 0x7F1B6670u: goto label_7F1B6670;
    case 0x7F1B6674u: goto label_7F1B6674;
    case 0x7F1B6678u: goto label_7F1B6678;
    case 0x7F1B667Cu: goto label_7F1B667C;
    case 0x7F1B6680u: goto label_7F1B6680;
    case 0x7F1B6684u: goto label_7F1B6684;
    case 0x7F1B6688u: goto label_7F1B6688;
    case 0x7F1B668Cu: goto label_7F1B668C;
    case 0x7F1B6690u: goto label_7F1B6690;
    case 0x7F1B6694u: goto label_7F1B6694;
    case 0x7F1B6698u: goto label_7F1B6698;
    case 0x7F1B669Cu: goto label_7F1B669C;
    case 0x7F1B66A0u: goto label_7F1B66A0;
    case 0x7F1B66A4u: goto label_7F1B66A4;
    case 0x7F1B66A8u: goto label_7F1B66A8;
    case 0x7F1B66ACu: goto label_7F1B66AC;
    case 0x7F1B66B0u: goto label_7F1B66B0;
    case 0x7F1B66B4u: goto label_7F1B66B4;
    case 0x7F1B66B8u: goto label_7F1B66B8;
    case 0x7F1B66BCu: goto label_7F1B66BC;
    case 0x7F1B66C0u: goto label_7F1B66C0;
    case 0x7F1B66C4u: goto label_7F1B66C4;
    case 0x7F1B66C8u: goto label_7F1B66C8;
    case 0x7F1B66CCu: goto label_7F1B66CC;
    case 0x7F1B66D0u: goto label_7F1B66D0;
    case 0x7F1B66D4u: goto label_7F1B66D4;
    case 0x7F1B66D8u: goto label_7F1B66D8;
    case 0x7F1B66DCu: goto label_7F1B66DC;
    case 0x7F1B66E0u: goto label_7F1B66E0;
    case 0x7F1B66E4u: goto label_7F1B66E4;
    case 0x7F1B66E8u: goto label_7F1B66E8;
    case 0x7F1B66ECu: goto label_7F1B66EC;
    case 0x7F1B66F0u: goto label_7F1B66F0;
    case 0x7F1B66F4u: goto label_7F1B66F4;
    case 0x7F1B66F8u: goto label_7F1B66F8;
    case 0x7F1B66FCu: goto label_7F1B66FC;
    case 0x7F1B6700u: goto label_7F1B6700;
    case 0x7F1B6704u: goto label_7F1B6704;
    case 0x7F1B6708u: goto label_7F1B6708;
    case 0x7F1B670Cu: goto label_7F1B670C;
    case 0x7F1B6710u: goto label_7F1B6710;
    case 0x7F1B6714u: goto label_7F1B6714;
    case 0x7F1B6718u: goto label_7F1B6718;
    case 0x7F1B671Cu: goto label_7F1B671C;
    case 0x7F1B6720u: goto label_7F1B6720;
    case 0x7F1B6724u: goto label_7F1B6724;
    case 0x7F1B6728u: goto label_7F1B6728;
    case 0x7F1B672Cu: goto label_7F1B672C;
    case 0x7F1B6730u: goto label_7F1B6730;
    case 0x7F1B6734u: goto label_7F1B6734;
    case 0x7F1B6738u: goto label_7F1B6738;
    case 0x7F1B673Cu: goto label_7F1B673C;
    case 0x7F1B6740u: goto label_7F1B6740;
    case 0x7F1B6744u: goto label_7F1B6744;
    case 0x7F1B6748u: goto label_7F1B6748;
    case 0x7F1B674Cu: goto label_7F1B674C;
    case 0x7F1B6750u: goto label_7F1B6750;
    case 0x7F1B6754u: goto label_7F1B6754;
    case 0x7F1B6758u: goto label_7F1B6758;
    case 0x7F1B675Cu: goto label_7F1B675C;
    case 0x7F1B6760u: goto label_7F1B6760;
    case 0x7F1B6764u: goto label_7F1B6764;
    case 0x7F1B6768u: goto label_7F1B6768;
    case 0x7F1B676Cu: goto label_7F1B676C;
    case 0x7F1B6770u: goto label_7F1B6770;
    case 0x7F1B6774u: goto label_7F1B6774;
    case 0x7F1B6778u: goto label_7F1B6778;
    case 0x7F1B677Cu: goto label_7F1B677C;
    case 0x7F1B6780u: goto label_7F1B6780;
    case 0x7F1B6784u: goto label_7F1B6784;
    case 0x7F1B6788u: goto label_7F1B6788;
    case 0x7F1B678Cu: goto label_7F1B678C;
    case 0x7F1B6790u: goto label_7F1B6790;
    case 0x7F1B6794u: goto label_7F1B6794;
    case 0x7F1B6798u: goto label_7F1B6798;
    case 0x7F1B679Cu: goto label_7F1B679C;
    case 0x7F1B67A0u: goto label_7F1B67A0;
    case 0x7F1B67A4u: goto label_7F1B67A4;
    case 0x7F1B67A8u: goto label_7F1B67A8;
    case 0x7F1B67ACu: goto label_7F1B67AC;
    case 0x7F1B67B0u: goto label_7F1B67B0;
    case 0x7F1B67B4u: goto label_7F1B67B4;
    case 0x7F1B67B8u: goto label_7F1B67B8;
    case 0x7F1B67BCu: goto label_7F1B67BC;
    case 0x7F1B67C0u: goto label_7F1B67C0;
    case 0x7F1B67C4u: goto label_7F1B67C4;
    case 0x7F1B67C8u: goto label_7F1B67C8;
    case 0x7F1B67CCu: goto label_7F1B67CC;
    case 0x7F1B67D0u: goto label_7F1B67D0;
    case 0x7F1B67D4u: goto label_7F1B67D4;
    case 0x7F1B67D8u: goto label_7F1B67D8;
    case 0x7F1B67DCu: goto label_7F1B67DC;
    case 0x7F1B67E0u: goto label_7F1B67E0;
    case 0x7F1B67E4u: goto label_7F1B67E4;
    case 0x7F1B67E8u: goto label_7F1B67E8;
    case 0x7F1B67ECu: goto label_7F1B67EC;
    case 0x7F1B67F0u: goto label_7F1B67F0;
    case 0x7F1B67F4u: goto label_7F1B67F4;
    case 0x7F1B67F8u: goto label_7F1B67F8;
    case 0x7F1B67FCu: goto label_7F1B67FC;
    case 0x7F1B6800u: goto label_7F1B6800;
    case 0x7F1B6804u: goto label_7F1B6804;
    case 0x7F1B6808u: goto label_7F1B6808;
    case 0x7F1B680Cu: goto label_7F1B680C;
    case 0x7F1B6810u: goto label_7F1B6810;
    case 0x7F1B6814u: goto label_7F1B6814;
    case 0x7F1B6818u: goto label_7F1B6818;
    case 0x7F1B681Cu: goto label_7F1B681C;
    case 0x7F1B6820u: goto label_7F1B6820;
    case 0x7F1B6824u: goto label_7F1B6824;
    case 0x7F1B6828u: goto label_7F1B6828;
    case 0x7F1B682Cu: goto label_7F1B682C;
    case 0x7F1B6830u: goto label_7F1B6830;
    case 0x7F1B6834u: goto label_7F1B6834;
    case 0x7F1B6838u: goto label_7F1B6838;
    case 0x7F1B683Cu: goto label_7F1B683C;
    case 0x7F1B6840u: goto label_7F1B6840;
    case 0x7F1B6844u: goto label_7F1B6844;
    case 0x7F1B6848u: goto label_7F1B6848;
    case 0x7F1B684Cu: goto label_7F1B684C;
    case 0x7F1B6850u: goto label_7F1B6850;
    case 0x7F1B6854u: goto label_7F1B6854;
    case 0x7F1B6858u: goto label_7F1B6858;
    case 0x7F1B685Cu: goto label_7F1B685C;
    case 0x7F1B6860u: goto label_7F1B6860;
    case 0x7F1B6864u: goto label_7F1B6864;
    case 0x7F1B6868u: goto label_7F1B6868;
    case 0x7F1B686Cu: goto label_7F1B686C;
    case 0x7F1B6870u: goto label_7F1B6870;
    case 0x7F1B6874u: goto label_7F1B6874;
    case 0x7F1B6878u: goto label_7F1B6878;
    case 0x7F1B687Cu: goto label_7F1B687C;
    case 0x7F1B6880u: goto label_7F1B6880;
    case 0x7F1B6884u: goto label_7F1B6884;
    case 0x7F1B6888u: goto label_7F1B6888;
    case 0x7F1B688Cu: goto label_7F1B688C;
    case 0x7F1B6890u: goto label_7F1B6890;
    case 0x7F1B6894u: goto label_7F1B6894;
    case 0x7F1B6898u: goto label_7F1B6898;
    case 0x7F1B689Cu: goto label_7F1B689C;
    case 0x7F1B68A0u: goto label_7F1B68A0;
    case 0x7F1B68A4u: goto label_7F1B68A4;
    case 0x7F1B68A8u: goto label_7F1B68A8;
    case 0x7F1B68ACu: goto label_7F1B68AC;
    case 0x7F1B68B0u: goto label_7F1B68B0;
    case 0x7F1B68B4u: goto label_7F1B68B4;
    case 0x7F1B68B8u: goto label_7F1B68B8;
    case 0x7F1B68BCu: goto label_7F1B68BC;
    case 0x7F1B68C0u: goto label_7F1B68C0;
    case 0x7F1B68C4u: goto label_7F1B68C4;
    case 0x7F1B68C8u: goto label_7F1B68C8;
    case 0x7F1B68CCu: goto label_7F1B68CC;
    case 0x7F1B68D0u: goto label_7F1B68D0;
    case 0x7F1B68D4u: goto label_7F1B68D4;
    case 0x7F1B68D8u: goto label_7F1B68D8;
    case 0x7F1B68DCu: goto label_7F1B68DC;
    case 0x7F1B68E0u: goto label_7F1B68E0;
    case 0x7F1B68E4u: goto label_7F1B68E4;
    case 0x7F1B68E8u: goto label_7F1B68E8;
    case 0x7F1B68ECu: goto label_7F1B68EC;
    case 0x7F1B68F0u: goto label_7F1B68F0;
    case 0x7F1B68F4u: goto label_7F1B68F4;
    case 0x7F1B68F8u: goto label_7F1B68F8;
    case 0x7F1B68FCu: goto label_7F1B68FC;
    case 0x7F1B6900u: goto label_7F1B6900;
    case 0x7F1B6904u: goto label_7F1B6904;
    case 0x7F1B6908u: goto label_7F1B6908;
    case 0x7F1B690Cu: goto label_7F1B690C;
    case 0x7F1B6910u: goto label_7F1B6910;
    case 0x7F1B6914u: goto label_7F1B6914;
    case 0x7F1B6918u: goto label_7F1B6918;
    case 0x7F1B691Cu: goto label_7F1B691C;
    case 0x7F1B6920u: goto label_7F1B6920;
    case 0x7F1B6924u: goto label_7F1B6924;
    case 0x7F1B6928u: goto label_7F1B6928;
    case 0x7F1B692Cu: goto label_7F1B692C;
    case 0x7F1B6930u: goto label_7F1B6930;
    case 0x7F1B6934u: goto label_7F1B6934;
    case 0x7F1B6938u: goto label_7F1B6938;
    case 0x7F1B693Cu: goto label_7F1B693C;
    case 0x7F1B6940u: goto label_7F1B6940;
    case 0x7F1B6944u: goto label_7F1B6944;
    case 0x7F1B6948u: goto label_7F1B6948;
    case 0x7F1B694Cu: goto label_7F1B694C;
    case 0x7F1B6950u: goto label_7F1B6950;
    case 0x7F1B6954u: goto label_7F1B6954;
    case 0x7F1B6958u: goto label_7F1B6958;
    case 0x7F1B695Cu: goto label_7F1B695C;
    case 0x7F1B6960u: goto label_7F1B6960;
    case 0x7F1B6964u: goto label_7F1B6964;
    case 0x7F1B6968u: goto label_7F1B6968;
    case 0x7F1B696Cu: goto label_7F1B696C;
    case 0x7F1B6970u: goto label_7F1B6970;
    case 0x7F1B6974u: goto label_7F1B6974;
    case 0x7F1B6978u: goto label_7F1B6978;
    case 0x7F1B697Cu: goto label_7F1B697C;
    case 0x7F1B6980u: goto label_7F1B6980;
    case 0x7F1B6984u: goto label_7F1B6984;
    case 0x7F1B6988u: goto label_7F1B6988;
    case 0x7F1B698Cu: goto label_7F1B698C;
    case 0x7F1B6990u: goto label_7F1B6990;
    case 0x7F1B6994u: goto label_7F1B6994;
    case 0x7F1B6998u: goto label_7F1B6998;
    case 0x7F1B699Cu: goto label_7F1B699C;
    case 0x7F1B69A0u: goto label_7F1B69A0;
    case 0x7F1B69A4u: goto label_7F1B69A4;
    case 0x7F1B69A8u: goto label_7F1B69A8;
    case 0x7F1B69ACu: goto label_7F1B69AC;
    case 0x7F1B69B0u: goto label_7F1B69B0;
    case 0x7F1B69B4u: goto label_7F1B69B4;
    case 0x7F1B69B8u: goto label_7F1B69B8;
    case 0x7F1B69BCu: goto label_7F1B69BC;
    case 0x7F1B69C0u: goto label_7F1B69C0;
    case 0x7F1B69C4u: goto label_7F1B69C4;
    case 0x7F1B69C8u: goto label_7F1B69C8;
    case 0x7F1B69CCu: goto label_7F1B69CC;
    case 0x7F1B69D0u: goto label_7F1B69D0;
    case 0x7F1B69D4u: goto label_7F1B69D4;
    case 0x7F1B69D8u: goto label_7F1B69D8;
    case 0x7F1B69DCu: goto label_7F1B69DC;
    case 0x7F1B69E0u: goto label_7F1B69E0;
    case 0x7F1B69E4u: goto label_7F1B69E4;
    case 0x7F1B69E8u: goto label_7F1B69E8;
    case 0x7F1B69ECu: goto label_7F1B69EC;
    case 0x7F1B69F0u: goto label_7F1B69F0;
    case 0x7F1B69F4u: goto label_7F1B69F4;
    case 0x7F1B69F8u: goto label_7F1B69F8;
    case 0x7F1B69FCu: goto label_7F1B69FC;
    case 0x7F1B6A00u: goto label_7F1B6A00;
    case 0x7F1B6A04u: goto label_7F1B6A04;
    case 0x7F1B6A08u: goto label_7F1B6A08;
    case 0x7F1B6A0Cu: goto label_7F1B6A0C;
    case 0x7F1B6A10u: goto label_7F1B6A10;
    case 0x7F1B6A14u: goto label_7F1B6A14;
    case 0x7F1B6A18u: goto label_7F1B6A18;
    case 0x7F1B6A1Cu: goto label_7F1B6A1C;
    case 0x7F1B6A20u: goto label_7F1B6A20;
    case 0x7F1B6A24u: goto label_7F1B6A24;
    case 0x7F1B6A28u: goto label_7F1B6A28;
    case 0x7F1B6A2Cu: goto label_7F1B6A2C;
    case 0x7F1B6A30u: goto label_7F1B6A30;
    case 0x7F1B6A34u: goto label_7F1B6A34;
    case 0x7F1B6A38u: goto label_7F1B6A38;
    case 0x7F1B6A3Cu: goto label_7F1B6A3C;
    case 0x7F1B6A40u: goto label_7F1B6A40;
    case 0x7F1B6A44u: goto label_7F1B6A44;
    case 0x7F1B6A48u: goto label_7F1B6A48;
    case 0x7F1B6A4Cu: goto label_7F1B6A4C;
    case 0x7F1B6A50u: goto label_7F1B6A50;
    case 0x7F1B6A54u: goto label_7F1B6A54;
    case 0x7F1B6A58u: goto label_7F1B6A58;
    case 0x7F1B6A5Cu: goto label_7F1B6A5C;
    case 0x7F1B6A60u: goto label_7F1B6A60;
    case 0x7F1B6A64u: goto label_7F1B6A64;
    case 0x7F1B6A68u: goto label_7F1B6A68;
    case 0x7F1B6A6Cu: goto label_7F1B6A6C;
    case 0x7F1B6A70u: goto label_7F1B6A70;
    case 0x7F1B6A74u: goto label_7F1B6A74;
    case 0x7F1B6A78u: goto label_7F1B6A78;
    case 0x7F1B6A7Cu: goto label_7F1B6A7C;
    case 0x7F1B6A80u: goto label_7F1B6A80;
    case 0x7F1B6A84u: goto label_7F1B6A84;
    case 0x7F1B6A88u: goto label_7F1B6A88;
    case 0x7F1B6A8Cu: goto label_7F1B6A8C;
    case 0x7F1B6A90u: goto label_7F1B6A90;
    case 0x7F1B6A94u: goto label_7F1B6A94;
    case 0x7F1B6A98u: goto label_7F1B6A98;
    case 0x7F1B6A9Cu: goto label_7F1B6A9C;
    case 0x7F1B6AA0u: goto label_7F1B6AA0;
    case 0x7F1B6AA4u: goto label_7F1B6AA4;
    case 0x7F1B6AA8u: goto label_7F1B6AA8;
    case 0x7F1B6AACu: goto label_7F1B6AAC;
    case 0x7F1B6AB0u: goto label_7F1B6AB0;
    case 0x7F1B6AB4u: goto label_7F1B6AB4;
    case 0x7F1B6AB8u: goto label_7F1B6AB8;
    case 0x7F1B6ABCu: goto label_7F1B6ABC;
    case 0x7F1B6AC0u: goto label_7F1B6AC0;
    case 0x7F1B6AC4u: goto label_7F1B6AC4;
    case 0x7F1B6AC8u: goto label_7F1B6AC8;
    case 0x7F1B6ACCu: goto label_7F1B6ACC;
    case 0x7F1B6AD0u: goto label_7F1B6AD0;
    case 0x7F1B6AD4u: goto label_7F1B6AD4;
    case 0x7F1B6AD8u: goto label_7F1B6AD8;
    case 0x7F1B6ADCu: goto label_7F1B6ADC;
    case 0x7F1B6AE0u: goto label_7F1B6AE0;
    case 0x7F1B6AE4u: goto label_7F1B6AE4;
    case 0x7F1B6AE8u: goto label_7F1B6AE8;
    case 0x7F1B6AECu: goto label_7F1B6AEC;
    case 0x7F1B6AF0u: goto label_7F1B6AF0;
    case 0x7F1B6AF4u: goto label_7F1B6AF4;
    case 0x7F1B6AF8u: goto label_7F1B6AF8;
    case 0x7F1B6AFCu: goto label_7F1B6AFC;
    case 0x7F1B6B00u: goto label_7F1B6B00;
    case 0x7F1B6B04u: goto label_7F1B6B04;
    case 0x7F1B6B08u: goto label_7F1B6B08;
    case 0x7F1B6B0Cu: goto label_7F1B6B0C;
    case 0x7F1B6B10u: goto label_7F1B6B10;
    case 0x7F1B6B14u: goto label_7F1B6B14;
    case 0x7F1B6B18u: goto label_7F1B6B18;
    case 0x7F1B6B1Cu: goto label_7F1B6B1C;
    case 0x7F1B6B20u: goto label_7F1B6B20;
    case 0x7F1B6B24u: goto label_7F1B6B24;
    case 0x7F1B6B28u: goto label_7F1B6B28;
    case 0x7F1B6B2Cu: goto label_7F1B6B2C;
    case 0x7F1B6B30u: goto label_7F1B6B30;
    case 0x7F1B6B34u: goto label_7F1B6B34;
    case 0x7F1B6B38u: goto label_7F1B6B38;
    case 0x7F1B6B3Cu: goto label_7F1B6B3C;
    case 0x7F1B6B40u: goto label_7F1B6B40;
    case 0x7F1B6B44u: goto label_7F1B6B44;
    case 0x7F1B6B48u: goto label_7F1B6B48;
    case 0x7F1B6B4Cu: goto label_7F1B6B4C;
    case 0x7F1B6B50u: goto label_7F1B6B50;
    case 0x7F1B6B54u: goto label_7F1B6B54;
    case 0x7F1B6B58u: goto label_7F1B6B58;
    case 0x7F1B6B5Cu: goto label_7F1B6B5C;
    case 0x7F1B6B60u: goto label_7F1B6B60;
    case 0x7F1B6B64u: goto label_7F1B6B64;
    case 0x7F1B6B68u: goto label_7F1B6B68;
    case 0x7F1B6B6Cu: goto label_7F1B6B6C;
    case 0x7F1B6B70u: goto label_7F1B6B70;
    case 0x7F1B6B74u: goto label_7F1B6B74;
    case 0x7F1B6B78u: goto label_7F1B6B78;
    case 0x7F1B6B7Cu: goto label_7F1B6B7C;
    case 0x7F1B6B80u: goto label_7F1B6B80;
    case 0x7F1B6B84u: goto label_7F1B6B84;
    case 0x7F1B6B88u: goto label_7F1B6B88;
    case 0x7F1B6B8Cu: goto label_7F1B6B8C;
    case 0x7F1B6B90u: goto label_7F1B6B90;
    case 0x7F1B6B94u: goto label_7F1B6B94;
    case 0x7F1B6B98u: goto label_7F1B6B98;
    case 0x7F1B6B9Cu: goto label_7F1B6B9C;
    case 0x7F1B6BA0u: goto label_7F1B6BA0;
    case 0x7F1B6BA4u: goto label_7F1B6BA4;
    case 0x7F1B6BA8u: goto label_7F1B6BA8;
    case 0x7F1B6BACu: goto label_7F1B6BAC;
    case 0x7F1B6BB0u: goto label_7F1B6BB0;
    case 0x7F1B6BB4u: goto label_7F1B6BB4;
    case 0x7F1B6BB8u: goto label_7F1B6BB8;
    case 0x7F1B6BBCu: goto label_7F1B6BBC;
    case 0x7F1B6BC0u: goto label_7F1B6BC0;
    case 0x7F1B6BC4u: goto label_7F1B6BC4;
    case 0x7F1B6BC8u: goto label_7F1B6BC8;
    case 0x7F1B6BCCu: goto label_7F1B6BCC;
    case 0x7F1B6BD0u: goto label_7F1B6BD0;
    case 0x7F1B6BD4u: goto label_7F1B6BD4;
    case 0x7F1B6BD8u: goto label_7F1B6BD8;
    case 0x7F1B6BDCu: goto label_7F1B6BDC;
    case 0x7F1B6BE0u: goto label_7F1B6BE0;
    case 0x7F1B6BE4u: goto label_7F1B6BE4;
    case 0x7F1B6BE8u: goto label_7F1B6BE8;
    case 0x7F1B6BECu: goto label_7F1B6BEC;
    case 0x7F1B6BF0u: goto label_7F1B6BF0;
    case 0x7F1B6BF4u: goto label_7F1B6BF4;
    case 0x7F1B6BF8u: goto label_7F1B6BF8;
    case 0x7F1B6BFCu: goto label_7F1B6BFC;
    case 0x7F1B6C00u: goto label_7F1B6C00;
    case 0x7F1B6C04u: goto label_7F1B6C04;
    case 0x7F1B6C08u: goto label_7F1B6C08;
    case 0x7F1B6C0Cu: goto label_7F1B6C0C;
    case 0x7F1B6C10u: goto label_7F1B6C10;
    case 0x7F1B6C14u: goto label_7F1B6C14;
    case 0x7F1B6C18u: goto label_7F1B6C18;
    case 0x7F1B6C1Cu: goto label_7F1B6C1C;
    case 0x7F1B6C20u: goto label_7F1B6C20;
    case 0x7F1B6C24u: goto label_7F1B6C24;
    case 0x7F1B6C28u: goto label_7F1B6C28;
    case 0x7F1B6C2Cu: goto label_7F1B6C2C;
    case 0x7F1B6C30u: goto label_7F1B6C30;
    case 0x7F1B6C34u: goto label_7F1B6C34;
    case 0x7F1B6C38u: goto label_7F1B6C38;
    case 0x7F1B6C3Cu: goto label_7F1B6C3C;
    case 0x7F1B6C40u: goto label_7F1B6C40;
    case 0x7F1B6C44u: goto label_7F1B6C44;
    case 0x7F1B6C48u: goto label_7F1B6C48;
    case 0x7F1B6C4Cu: goto label_7F1B6C4C;
    case 0x7F1B6C50u: goto label_7F1B6C50;
    case 0x7F1B6C54u: goto label_7F1B6C54;
    case 0x7F1B6C58u: goto label_7F1B6C58;
    case 0x7F1B6C5Cu: goto label_7F1B6C5C;
    case 0x7F1B6C60u: goto label_7F1B6C60;
    case 0x7F1B6C64u: goto label_7F1B6C64;
    case 0x7F1B6C68u: goto label_7F1B6C68;
    case 0x7F1B6C6Cu: goto label_7F1B6C6C;
    case 0x7F1B6C70u: goto label_7F1B6C70;
    case 0x7F1B6C74u: goto label_7F1B6C74;
    case 0x7F1B6C78u: goto label_7F1B6C78;
    case 0x7F1B6C7Cu: goto label_7F1B6C7C;
    case 0x7F1B6C80u: goto label_7F1B6C80;
    case 0x7F1B6C84u: goto label_7F1B6C84;
    case 0x7F1B6C88u: goto label_7F1B6C88;
    case 0x7F1B6C8Cu: goto label_7F1B6C8C;
    case 0x7F1B6C90u: goto label_7F1B6C90;
    case 0x7F1B6C94u: goto label_7F1B6C94;
    case 0x7F1B6C98u: goto label_7F1B6C98;
    case 0x7F1B6C9Cu: goto label_7F1B6C9C;
    case 0x7F1B6CA0u: goto label_7F1B6CA0;
    case 0x7F1B6CA4u: goto label_7F1B6CA4;
    case 0x7F1B6CA8u: goto label_7F1B6CA8;
    case 0x7F1B6CACu: goto label_7F1B6CAC;
    case 0x7F1B6CB0u: goto label_7F1B6CB0;
    case 0x7F1B6CB4u: goto label_7F1B6CB4;
    case 0x7F1B6CB8u: goto label_7F1B6CB8;
    case 0x7F1B6CBCu: goto label_7F1B6CBC;
    case 0x7F1B6CC0u: goto label_7F1B6CC0;
    case 0x7F1B6CC4u: goto label_7F1B6CC4;
    case 0x7F1B6CC8u: goto label_7F1B6CC8;
    case 0x7F1B6CCCu: goto label_7F1B6CCC;
    case 0x7F1B6CD0u: goto label_7F1B6CD0;
    case 0x7F1B6CD4u: goto label_7F1B6CD4;
    case 0x7F1B6CD8u: goto label_7F1B6CD8;
    case 0x7F1B6CDCu: goto label_7F1B6CDC;
    case 0x7F1B6CE0u: goto label_7F1B6CE0;
    case 0x7F1B6CE4u: goto label_7F1B6CE4;
    case 0x7F1B6CE8u: goto label_7F1B6CE8;
    case 0x7F1B6CECu: goto label_7F1B6CEC;
    case 0x7F1B6CF0u: goto label_7F1B6CF0;
    case 0x7F1B6CF4u: goto label_7F1B6CF4;
    case 0x7F1B6CF8u: goto label_7F1B6CF8;
    case 0x7F1B6CFCu: goto label_7F1B6CFC;
    case 0x7F1B6D00u: goto label_7F1B6D00;
    case 0x7F1B6D04u: goto label_7F1B6D04;
    case 0x7F1B6D08u: goto label_7F1B6D08;
    case 0x7F1B6D0Cu: goto label_7F1B6D0C;
    case 0x7F1B6D10u: goto label_7F1B6D10;
    case 0x7F1B6D14u: goto label_7F1B6D14;
    case 0x7F1B6D18u: goto label_7F1B6D18;
    case 0x7F1B6D1Cu: goto label_7F1B6D1C;
    case 0x7F1B6D20u: goto label_7F1B6D20;
    case 0x7F1B6D24u: goto label_7F1B6D24;
    case 0x7F1B6D28u: goto label_7F1B6D28;
    case 0x7F1B6D2Cu: goto label_7F1B6D2C;
    case 0x7F1B6D30u: goto label_7F1B6D30;
    case 0x7F1B6D34u: goto label_7F1B6D34;
    case 0x7F1B6D38u: goto label_7F1B6D38;
    case 0x7F1B6D3Cu: goto label_7F1B6D3C;
    case 0x7F1B6D40u: goto label_7F1B6D40;
    case 0x7F1B6D44u: goto label_7F1B6D44;
    case 0x7F1B6D48u: goto label_7F1B6D48;
    case 0x7F1B6D4Cu: goto label_7F1B6D4C;
    case 0x7F1B6D50u: goto label_7F1B6D50;
    case 0x7F1B6D54u: goto label_7F1B6D54;
    case 0x7F1B6D58u: goto label_7F1B6D58;
    case 0x7F1B6D5Cu: goto label_7F1B6D5C;
    case 0x7F1B6D60u: goto label_7F1B6D60;
    case 0x7F1B6D64u: goto label_7F1B6D64;
    case 0x7F1B6D68u: goto label_7F1B6D68;
    case 0x7F1B6D6Cu: goto label_7F1B6D6C;
    case 0x7F1B6D70u: goto label_7F1B6D70;
    case 0x7F1B6D74u: goto label_7F1B6D74;
    case 0x7F1B6D78u: goto label_7F1B6D78;
    case 0x7F1B6D7Cu: goto label_7F1B6D7C;
    case 0x7F1B6D80u: goto label_7F1B6D80;
    case 0x7F1B6D84u: goto label_7F1B6D84;
    case 0x7F1B6D88u: goto label_7F1B6D88;
    case 0x7F1B6D8Cu: goto label_7F1B6D8C;
    case 0x7F1B6D90u: goto label_7F1B6D90;
    case 0x7F1B6D94u: goto label_7F1B6D94;
    case 0x7F1B6D98u: goto label_7F1B6D98;
    case 0x7F1B6D9Cu: goto label_7F1B6D9C;
    case 0x7F1B6DA0u: goto label_7F1B6DA0;
    case 0x7F1B6DA4u: goto label_7F1B6DA4;
    case 0x7F1B6DA8u: goto label_7F1B6DA8;
    case 0x7F1B6DACu: goto label_7F1B6DAC;
    case 0x7F1B6DB0u: goto label_7F1B6DB0;
    case 0x7F1B6DB4u: goto label_7F1B6DB4;
    case 0x7F1B6DB8u: goto label_7F1B6DB8;
    case 0x7F1B6DBCu: goto label_7F1B6DBC;
    case 0x7F1B6DC0u: goto label_7F1B6DC0;
    case 0x7F1B6DC4u: goto label_7F1B6DC4;
    case 0x7F1B6DC8u: goto label_7F1B6DC8;
    case 0x7F1B6DCCu: goto label_7F1B6DCC;
    case 0x7F1B6DD0u: goto label_7F1B6DD0;
    case 0x7F1B6DD4u: goto label_7F1B6DD4;
    case 0x7F1B6DD8u: goto label_7F1B6DD8;
    case 0x7F1B6DDCu: goto label_7F1B6DDC;
    case 0x7F1B6DE0u: goto label_7F1B6DE0;
    case 0x7F1B6DE4u: goto label_7F1B6DE4;
    case 0x7F1B6DE8u: goto label_7F1B6DE8;
    case 0x7F1B6DECu: goto label_7F1B6DEC;
    case 0x7F1B6DF0u: goto label_7F1B6DF0;
    case 0x7F1B6DF4u: goto label_7F1B6DF4;
    case 0x7F1B6DF8u: goto label_7F1B6DF8;
    case 0x7F1B6DFCu: goto label_7F1B6DFC;
    case 0x7F1B6E00u: goto label_7F1B6E00;
    case 0x7F1B6E04u: goto label_7F1B6E04;
    case 0x7F1B6E08u: goto label_7F1B6E08;
    case 0x7F1B6E0Cu: goto label_7F1B6E0C;
    case 0x7F1B6E10u: goto label_7F1B6E10;
    case 0x7F1B6E14u: goto label_7F1B6E14;
    case 0x7F1B6E18u: goto label_7F1B6E18;
    case 0x7F1B6E1Cu: goto label_7F1B6E1C;
    case 0x7F1B6E20u: goto label_7F1B6E20;
    case 0x7F1B6E24u: goto label_7F1B6E24;
    case 0x7F1B6E28u: goto label_7F1B6E28;
    case 0x7F1B6E2Cu: goto label_7F1B6E2C;
    case 0x7F1B6E30u: goto label_7F1B6E30;
    case 0x7F1B6E34u: goto label_7F1B6E34;
    case 0x7F1B6E38u: goto label_7F1B6E38;
    case 0x7F1B6E3Cu: goto label_7F1B6E3C;
    case 0x7F1B6E40u: goto label_7F1B6E40;
    case 0x7F1B6E44u: goto label_7F1B6E44;
    case 0x7F1B6E48u: goto label_7F1B6E48;
    case 0x7F1B6E4Cu: goto label_7F1B6E4C;
    case 0x7F1B6E50u: goto label_7F1B6E50;
    case 0x7F1B6E54u: goto label_7F1B6E54;
    case 0x7F1B6E58u: goto label_7F1B6E58;
    case 0x7F1B6E5Cu: goto label_7F1B6E5C;
    case 0x7F1B6E60u: goto label_7F1B6E60;
    case 0x7F1B6E64u: goto label_7F1B6E64;
    case 0x7F1B6E68u: goto label_7F1B6E68;
    case 0x7F1B6E6Cu: goto label_7F1B6E6C;
    case 0x7F1B6E70u: goto label_7F1B6E70;
    case 0x7F1B6E74u: goto label_7F1B6E74;
    case 0x7F1B6E78u: goto label_7F1B6E78;
    case 0x7F1B6E7Cu: goto label_7F1B6E7C;
    case 0x7F1B6E80u: goto label_7F1B6E80;
    case 0x7F1B6E84u: goto label_7F1B6E84;
    case 0x7F1B6E88u: goto label_7F1B6E88;
    case 0x7F1B6E8Cu: goto label_7F1B6E8C;
    case 0x7F1B6E90u: goto label_7F1B6E90;
    case 0x7F1B6E94u: goto label_7F1B6E94;
    case 0x7F1B6E98u: goto label_7F1B6E98;
    case 0x7F1B6E9Cu: goto label_7F1B6E9C;
    case 0x7F1B6EA0u: goto label_7F1B6EA0;
    case 0x7F1B6EA4u: goto label_7F1B6EA4;
    case 0x7F1B6EA8u: goto label_7F1B6EA8;
    case 0x7F1B6EACu: goto label_7F1B6EAC;
    case 0x7F1B6EB0u: goto label_7F1B6EB0;
    case 0x7F1B6EB4u: goto label_7F1B6EB4;
    case 0x7F1B6EB8u: goto label_7F1B6EB8;
    case 0x7F1B6EBCu: goto label_7F1B6EBC;
    case 0x7F1B6EC0u: goto label_7F1B6EC0;
    case 0x7F1B6EC4u: goto label_7F1B6EC4;
    case 0x7F1B6EC8u: goto label_7F1B6EC8;
    case 0x7F1B6ECCu: goto label_7F1B6ECC;
    case 0x7F1B6ED0u: goto label_7F1B6ED0;
    case 0x7F1B6ED4u: goto label_7F1B6ED4;
    case 0x7F1B6ED8u: goto label_7F1B6ED8;
    case 0x7F1B6EDCu: goto label_7F1B6EDC;
    case 0x7F1B6EE0u: goto label_7F1B6EE0;
    case 0x7F1B6EE4u: goto label_7F1B6EE4;
    case 0x7F1B6EE8u: goto label_7F1B6EE8;
    case 0x7F1B6EECu: goto label_7F1B6EEC;
    case 0x7F1B6EF0u: goto label_7F1B6EF0;
    case 0x7F1B6EF4u: goto label_7F1B6EF4;
    case 0x7F1B6EF8u: goto label_7F1B6EF8;
    case 0x7F1B6EFCu: goto label_7F1B6EFC;
    case 0x7F1B6F00u: goto label_7F1B6F00;
    case 0x7F1B6F04u: goto label_7F1B6F04;
    case 0x7F1B6F08u: goto label_7F1B6F08;
    case 0x7F1B6F0Cu: goto label_7F1B6F0C;
    case 0x7F1B6F10u: goto label_7F1B6F10;
    case 0x7F1B6F14u: goto label_7F1B6F14;
    case 0x7F1B6F18u: goto label_7F1B6F18;
    case 0x7F1B6F1Cu: goto label_7F1B6F1C;
    case 0x7F1B6F20u: goto label_7F1B6F20;
    case 0x7F1B6F24u: goto label_7F1B6F24;
    case 0x7F1B6F28u: goto label_7F1B6F28;
    case 0x7F1B6F2Cu: goto label_7F1B6F2C;
    case 0x7F1B6F30u: goto label_7F1B6F30;
    case 0x7F1B6F34u: goto label_7F1B6F34;
    case 0x7F1B6F38u: goto label_7F1B6F38;
    case 0x7F1B6F3Cu: goto label_7F1B6F3C;
    case 0x7F1B6F40u: goto label_7F1B6F40;
    case 0x7F1B6F44u: goto label_7F1B6F44;
    case 0x7F1B6F48u: goto label_7F1B6F48;
    case 0x7F1B6F4Cu: goto label_7F1B6F4C;
    case 0x7F1B6F50u: goto label_7F1B6F50;
    case 0x7F1B6F54u: goto label_7F1B6F54;
    case 0x7F1B6F58u: goto label_7F1B6F58;
    case 0x7F1B6F5Cu: goto label_7F1B6F5C;
    case 0x7F1B6F60u: goto label_7F1B6F60;
    case 0x7F1B6F64u: goto label_7F1B6F64;
    case 0x7F1B6F68u: goto label_7F1B6F68;
    case 0x7F1B6F6Cu: goto label_7F1B6F6C;
    case 0x7F1B6F70u: goto label_7F1B6F70;
    case 0x7F1B6F74u: goto label_7F1B6F74;
    case 0x7F1B6F78u: goto label_7F1B6F78;
    case 0x7F1B6F7Cu: goto label_7F1B6F7C;
    case 0x7F1B6F80u: goto label_7F1B6F80;
    case 0x7F1B6F84u: goto label_7F1B6F84;
    case 0x7F1B6F88u: goto label_7F1B6F88;
    case 0x7F1B6F8Cu: goto label_7F1B6F8C;
    case 0x7F1B6F90u: goto label_7F1B6F90;
    case 0x7F1B6F94u: goto label_7F1B6F94;
    case 0x7F1B6F98u: goto label_7F1B6F98;
    case 0x7F1B6F9Cu: goto label_7F1B6F9C;
    case 0x7F1B6FA0u: goto label_7F1B6FA0;
    case 0x7F1B6FA4u: goto label_7F1B6FA4;
    case 0x7F1B6FA8u: goto label_7F1B6FA8;
    case 0x7F1B6FACu: goto label_7F1B6FAC;
    case 0x7F1B6FB0u: goto label_7F1B6FB0;
    case 0x7F1B6FB4u: goto label_7F1B6FB4;
    case 0x7F1B6FB8u: goto label_7F1B6FB8;
    case 0x7F1B6FBCu: goto label_7F1B6FBC;
    case 0x7F1B6FC0u: goto label_7F1B6FC0;
    case 0x7F1B6FC4u: goto label_7F1B6FC4;
    case 0x7F1B6FC8u: goto label_7F1B6FC8;
    case 0x7F1B6FCCu: goto label_7F1B6FCC;
    case 0x7F1B6FD0u: goto label_7F1B6FD0;
    case 0x7F1B6FD4u: goto label_7F1B6FD4;
    case 0x7F1B6FD8u: goto label_7F1B6FD8;
    case 0x7F1B6FDCu: goto label_7F1B6FDC;
    case 0x7F1B6FE0u: goto label_7F1B6FE0;
    case 0x7F1B6FE4u: goto label_7F1B6FE4;
    case 0x7F1B6FE8u: goto label_7F1B6FE8;
    case 0x7F1B6FECu: goto label_7F1B6FEC;
    case 0x7F1B6FF0u: goto label_7F1B6FF0;
    case 0x7F1B6FF4u: goto label_7F1B6FF4;
    case 0x7F1B6FF8u: goto label_7F1B6FF8;
    case 0x7F1B6FFCu: goto label_7F1B6FFC;
    case 0x7F1B7000u: goto label_7F1B7000;
    case 0x7F1B7004u: goto label_7F1B7004;
    case 0x7F1B7008u: goto label_7F1B7008;
    case 0x7F1B700Cu: goto label_7F1B700C;
    case 0x7F1B7010u: goto label_7F1B7010;
    case 0x7F1B7014u: goto label_7F1B7014;
    case 0x7F1B7018u: goto label_7F1B7018;
    case 0x7F1B701Cu: goto label_7F1B701C;
    case 0x7F1B7020u: goto label_7F1B7020;
    case 0x7F1B7024u: goto label_7F1B7024;
    case 0x7F1B7028u: goto label_7F1B7028;
    case 0x7F1B702Cu: goto label_7F1B702C;
    case 0x7F1B7030u: goto label_7F1B7030;
    case 0x7F1B7034u: goto label_7F1B7034;
    case 0x7F1B7038u: goto label_7F1B7038;
    case 0x7F1B703Cu: goto label_7F1B703C;
    case 0x7F1B7040u: goto label_7F1B7040;
    case 0x7F1B7044u: goto label_7F1B7044;
    case 0x7F1B7048u: goto label_7F1B7048;
    case 0x7F1B704Cu: goto label_7F1B704C;
    case 0x7F1B7050u: goto label_7F1B7050;
    case 0x7F1B7054u: goto label_7F1B7054;
    case 0x7F1B7058u: goto label_7F1B7058;
    case 0x7F1B705Cu: goto label_7F1B705C;
    case 0x7F1B7060u: goto label_7F1B7060;
    case 0x7F1B7064u: goto label_7F1B7064;
    case 0x7F1B7068u: goto label_7F1B7068;
    case 0x7F1B706Cu: goto label_7F1B706C;
    case 0x7F1B7070u: goto label_7F1B7070;
    case 0x7F1B7074u: goto label_7F1B7074;
    case 0x7F1B7078u: goto label_7F1B7078;
    case 0x7F1B707Cu: goto label_7F1B707C;
    case 0x7F1B7080u: goto label_7F1B7080;
    case 0x7F1B7084u: goto label_7F1B7084;
    case 0x7F1B7088u: goto label_7F1B7088;
    case 0x7F1B708Cu: goto label_7F1B708C;
    case 0x7F1B7090u: goto label_7F1B7090;
    case 0x7F1B7094u: goto label_7F1B7094;
    case 0x7F1B7098u: goto label_7F1B7098;
    case 0x7F1B709Cu: goto label_7F1B709C;
    case 0x7F1B70A0u: goto label_7F1B70A0;
    case 0x7F1B70A4u: goto label_7F1B70A4;
    case 0x7F1B70A8u: goto label_7F1B70A8;
    case 0x7F1B70ACu: goto label_7F1B70AC;
    case 0x7F1B70B0u: goto label_7F1B70B0;
    case 0x7F1B70B4u: goto label_7F1B70B4;
    case 0x7F1B70B8u: goto label_7F1B70B8;
    case 0x7F1B70BCu: goto label_7F1B70BC;
    case 0x7F1B70C0u: goto label_7F1B70C0;
    case 0x7F1B70C4u: goto label_7F1B70C4;
    case 0x7F1B70C8u: goto label_7F1B70C8;
    case 0x7F1B70CCu: goto label_7F1B70CC;
    case 0x7F1B70D0u: goto label_7F1B70D0;
    case 0x7F1B70D4u: goto label_7F1B70D4;
    case 0x7F1B70D8u: goto label_7F1B70D8;
    case 0x7F1B70DCu: goto label_7F1B70DC;
    case 0x7F1B70E0u: goto label_7F1B70E0;
    case 0x7F1B70E4u: goto label_7F1B70E4;
    case 0x7F1B70E8u: goto label_7F1B70E8;
    case 0x7F1B70ECu: goto label_7F1B70EC;
    case 0x7F1B70F0u: goto label_7F1B70F0;
    case 0x7F1B70F4u: goto label_7F1B70F4;
    case 0x7F1B70F8u: goto label_7F1B70F8;
    case 0x7F1B70FCu: goto label_7F1B70FC;
    case 0x7F1B7100u: goto label_7F1B7100;
    case 0x7F1B7104u: goto label_7F1B7104;
    case 0x7F1B7108u: goto label_7F1B7108;
    case 0x7F1B710Cu: goto label_7F1B710C;
    case 0x7F1B7110u: goto label_7F1B7110;
    case 0x7F1B7114u: goto label_7F1B7114;
    case 0x7F1B7118u: goto label_7F1B7118;
    case 0x7F1B711Cu: goto label_7F1B711C;
    case 0x7F1B7120u: goto label_7F1B7120;
    case 0x7F1B7124u: goto label_7F1B7124;
    case 0x7F1B7128u: goto label_7F1B7128;
    case 0x7F1B712Cu: goto label_7F1B712C;
    case 0x7F1B7130u: goto label_7F1B7130;
    case 0x7F1B7134u: goto label_7F1B7134;
    case 0x7F1B7138u: goto label_7F1B7138;
    case 0x7F1B713Cu: goto label_7F1B713C;
    case 0x7F1B7140u: goto label_7F1B7140;
    case 0x7F1B7144u: goto label_7F1B7144;
    case 0x7F1B7148u: goto label_7F1B7148;
    case 0x7F1B714Cu: goto label_7F1B714C;
    case 0x7F1B7150u: goto label_7F1B7150;
    case 0x7F1B7154u: goto label_7F1B7154;
    case 0x7F1B7158u: goto label_7F1B7158;
    case 0x7F1B715Cu: goto label_7F1B715C;
    case 0x7F1B7160u: goto label_7F1B7160;
    case 0x7F1B7164u: goto label_7F1B7164;
    case 0x7F1B7168u: goto label_7F1B7168;
    case 0x7F1B716Cu: goto label_7F1B716C;
    case 0x7F1B7170u: goto label_7F1B7170;
    case 0x7F1B7174u: goto label_7F1B7174;
    case 0x7F1B7178u: goto label_7F1B7178;
    case 0x7F1B717Cu: goto label_7F1B717C;
    case 0x7F1B7180u: goto label_7F1B7180;
    case 0x7F1B7184u: goto label_7F1B7184;
    case 0x7F1B7188u: goto label_7F1B7188;
    case 0x7F1B718Cu: goto label_7F1B718C;
    case 0x7F1B7190u: goto label_7F1B7190;
    case 0x7F1B7194u: goto label_7F1B7194;
    case 0x7F1B7198u: goto label_7F1B7198;
    case 0x7F1B719Cu: goto label_7F1B719C;
    case 0x7F1B71A0u: goto label_7F1B71A0;
    case 0x7F1B71A4u: goto label_7F1B71A4;
    case 0x7F1B71A8u: goto label_7F1B71A8;
    case 0x7F1B71ACu: goto label_7F1B71AC;
    case 0x7F1B71B0u: goto label_7F1B71B0;
    case 0x7F1B71B4u: goto label_7F1B71B4;
    case 0x7F1B71B8u: goto label_7F1B71B8;
    case 0x7F1B71BCu: goto label_7F1B71BC;
    case 0x7F1B71C0u: goto label_7F1B71C0;
    case 0x7F1B71C4u: goto label_7F1B71C4;
    case 0x7F1B71C8u: goto label_7F1B71C8;
    case 0x7F1B71CCu: goto label_7F1B71CC;
    case 0x7F1B71D0u: goto label_7F1B71D0;
    case 0x7F1B71D4u: goto label_7F1B71D4;
    case 0x7F1B71D8u: goto label_7F1B71D8;
    case 0x7F1B71DCu: goto label_7F1B71DC;
    case 0x7F1B71E0u: goto label_7F1B71E0;
    case 0x7F1B71E4u: goto label_7F1B71E4;
    case 0x7F1B71E8u: goto label_7F1B71E8;
    case 0x7F1B71ECu: goto label_7F1B71EC;
    case 0x7F1B71F0u: goto label_7F1B71F0;
    case 0x7F1B71F4u: goto label_7F1B71F4;
    case 0x7F1B71F8u: goto label_7F1B71F8;
    case 0x7F1B71FCu: goto label_7F1B71FC;
    case 0x7F1B7200u: goto label_7F1B7200;
    case 0x7F1B7204u: goto label_7F1B7204;
    case 0x7F1B7208u: goto label_7F1B7208;
    case 0x7F1B720Cu: goto label_7F1B720C;
    case 0x7F1B7210u: goto label_7F1B7210;
    case 0x7F1B7214u: goto label_7F1B7214;
    case 0x7F1B7218u: goto label_7F1B7218;
    case 0x7F1B721Cu: goto label_7F1B721C;
    case 0x7F1B7220u: goto label_7F1B7220;
    case 0x7F1B7224u: goto label_7F1B7224;
    case 0x7F1B7228u: goto label_7F1B7228;
    case 0x7F1B722Cu: goto label_7F1B722C;
    case 0x7F1B7230u: goto label_7F1B7230;
    case 0x7F1B7234u: goto label_7F1B7234;
    case 0x7F1B7238u: goto label_7F1B7238;
    case 0x7F1B723Cu: goto label_7F1B723C;
    case 0x7F1B7240u: goto label_7F1B7240;
    case 0x7F1B7244u: goto label_7F1B7244;
    case 0x7F1B7248u: goto label_7F1B7248;
    case 0x7F1B724Cu: goto label_7F1B724C;
    case 0x7F1B7250u: goto label_7F1B7250;
    case 0x7F1B7254u: goto label_7F1B7254;
    case 0x7F1B7258u: goto label_7F1B7258;
    case 0x7F1B725Cu: goto label_7F1B725C;
    case 0x7F1B7260u: goto label_7F1B7260;
    case 0x7F1B7264u: goto label_7F1B7264;
    case 0x7F1B7268u: goto label_7F1B7268;
    case 0x7F1B726Cu: goto label_7F1B726C;
    case 0x7F1B7270u: goto label_7F1B7270;
    case 0x7F1B7274u: goto label_7F1B7274;
    case 0x7F1B7278u: goto label_7F1B7278;
    case 0x7F1B727Cu: goto label_7F1B727C;
    case 0x7F1B7280u: goto label_7F1B7280;
    case 0x7F1B7284u: goto label_7F1B7284;
    case 0x7F1B7288u: goto label_7F1B7288;
    case 0x7F1B728Cu: goto label_7F1B728C;
    case 0x7F1B7290u: goto label_7F1B7290;
    case 0x7F1B7294u: goto label_7F1B7294;
    case 0x7F1B7298u: goto label_7F1B7298;
    case 0x7F1B729Cu: goto label_7F1B729C;
    case 0x7F1B72A0u: goto label_7F1B72A0;
    case 0x7F1B72A4u: goto label_7F1B72A4;
    case 0x7F1B72A8u: goto label_7F1B72A8;
    case 0x7F1B72ACu: goto label_7F1B72AC;
    case 0x7F1B72B0u: goto label_7F1B72B0;
    case 0x7F1B72B4u: goto label_7F1B72B4;
    case 0x7F1B72B8u: goto label_7F1B72B8;
    case 0x7F1B72BCu: goto label_7F1B72BC;
    case 0x7F1B72C0u: goto label_7F1B72C0;
    case 0x7F1B72C4u: goto label_7F1B72C4;
    case 0x7F1B72C8u: goto label_7F1B72C8;
    case 0x7F1B72CCu: goto label_7F1B72CC;
    case 0x7F1B72D0u: goto label_7F1B72D0;
    case 0x7F1B72D4u: goto label_7F1B72D4;
    case 0x7F1B72D8u: goto label_7F1B72D8;
    case 0x7F1B72DCu: goto label_7F1B72DC;
    case 0x7F1B72E0u: goto label_7F1B72E0;
    case 0x7F1B72E4u: goto label_7F1B72E4;
    case 0x7F1B72E8u: goto label_7F1B72E8;
    case 0x7F1B72ECu: goto label_7F1B72EC;
    case 0x7F1B72F0u: goto label_7F1B72F0;
    case 0x7F1B72F4u: goto label_7F1B72F4;
    case 0x7F1B72F8u: goto label_7F1B72F8;
    case 0x7F1B72FCu: goto label_7F1B72FC;
    case 0x7F1B7300u: goto label_7F1B7300;
    case 0x7F1B7304u: goto label_7F1B7304;
    case 0x7F1B7308u: goto label_7F1B7308;
    case 0x7F1B730Cu: goto label_7F1B730C;
    case 0x7F1B7310u: goto label_7F1B7310;
    case 0x7F1B7314u: goto label_7F1B7314;
    case 0x7F1B7318u: goto label_7F1B7318;
    case 0x7F1B731Cu: goto label_7F1B731C;
    case 0x7F1B7320u: goto label_7F1B7320;
    case 0x7F1B7324u: goto label_7F1B7324;
    case 0x7F1B7328u: goto label_7F1B7328;
    case 0x7F1B732Cu: goto label_7F1B732C;
    case 0x7F1B7330u: goto label_7F1B7330;
    case 0x7F1B7334u: goto label_7F1B7334;
    case 0x7F1B7338u: goto label_7F1B7338;
    case 0x7F1B733Cu: goto label_7F1B733C;
    case 0x7F1B7340u: goto label_7F1B7340;
    case 0x7F1B7344u: goto label_7F1B7344;
    case 0x7F1B7348u: goto label_7F1B7348;
    case 0x7F1B734Cu: goto label_7F1B734C;
    case 0x7F1B7350u: goto label_7F1B7350;
    case 0x7F1B7354u: goto label_7F1B7354;
    case 0x7F1B7358u: goto label_7F1B7358;
    case 0x7F1B735Cu: goto label_7F1B735C;
    case 0x7F1B7360u: goto label_7F1B7360;
    case 0x7F1B7364u: goto label_7F1B7364;
    case 0x7F1B7368u: goto label_7F1B7368;
    case 0x7F1B736Cu: goto label_7F1B736C;
    case 0x7F1B7370u: goto label_7F1B7370;
    case 0x7F1B7374u: goto label_7F1B7374;
    case 0x7F1B7378u: goto label_7F1B7378;
    case 0x7F1B737Cu: goto label_7F1B737C;
    case 0x7F1B7380u: goto label_7F1B7380;
    case 0x7F1B7384u: goto label_7F1B7384;
    case 0x7F1B7388u: goto label_7F1B7388;
    case 0x7F1B738Cu: goto label_7F1B738C;
    case 0x7F1B7390u: goto label_7F1B7390;
    case 0x7F1B7394u: goto label_7F1B7394;
    case 0x7F1B7398u: goto label_7F1B7398;
    case 0x7F1B739Cu: goto label_7F1B739C;
    case 0x7F1B73A0u: goto label_7F1B73A0;
    case 0x7F1B73A4u: goto label_7F1B73A4;
    case 0x7F1B73A8u: goto label_7F1B73A8;
    case 0x7F1B73ACu: goto label_7F1B73AC;
    case 0x7F1B73B0u: goto label_7F1B73B0;
    case 0x7F1B73B4u: goto label_7F1B73B4;
    case 0x7F1B73B8u: goto label_7F1B73B8;
    case 0x7F1B73BCu: goto label_7F1B73BC;
    case 0x7F1B73C0u: goto label_7F1B73C0;
    case 0x7F1B73C4u: goto label_7F1B73C4;
    case 0x7F1B73C8u: goto label_7F1B73C8;
    case 0x7F1B73CCu: goto label_7F1B73CC;
    case 0x7F1B73D0u: goto label_7F1B73D0;
    case 0x7F1B73D4u: goto label_7F1B73D4;
    case 0x7F1B73D8u: goto label_7F1B73D8;
    case 0x7F1B73DCu: goto label_7F1B73DC;
    case 0x7F1B73E0u: goto label_7F1B73E0;
    case 0x7F1B73E4u: goto label_7F1B73E4;
    case 0x7F1B73E8u: goto label_7F1B73E8;
    case 0x7F1B73ECu: goto label_7F1B73EC;
    case 0x7F1B73F0u: goto label_7F1B73F0;
    case 0x7F1B73F4u: goto label_7F1B73F4;
    case 0x7F1B73F8u: goto label_7F1B73F8;
    case 0x7F1B73FCu: goto label_7F1B73FC;
    case 0x7F1B7400u: goto label_7F1B7400;
    case 0x7F1B7404u: goto label_7F1B7404;
    case 0x7F1B7408u: goto label_7F1B7408;
    case 0x7F1B740Cu: goto label_7F1B740C;
    case 0x7F1B7410u: goto label_7F1B7410;
    case 0x7F1B7414u: goto label_7F1B7414;
    case 0x7F1B7418u: goto label_7F1B7418;
    case 0x7F1B741Cu: goto label_7F1B741C;
    case 0x7F1B7420u: goto label_7F1B7420;
    case 0x7F1B7424u: goto label_7F1B7424;
    case 0x7F1B7428u: goto label_7F1B7428;
    case 0x7F1B742Cu: goto label_7F1B742C;
    case 0x7F1B7430u: goto label_7F1B7430;
    case 0x7F1B7434u: goto label_7F1B7434;
    case 0x7F1B7438u: goto label_7F1B7438;
    case 0x7F1B743Cu: goto label_7F1B743C;
    case 0x7F1B7440u: goto label_7F1B7440;
    case 0x7F1B7444u: goto label_7F1B7444;
    case 0x7F1B7448u: goto label_7F1B7448;
    case 0x7F1B744Cu: goto label_7F1B744C;
    case 0x7F1B7450u: goto label_7F1B7450;
    case 0x7F1B7454u: goto label_7F1B7454;
    case 0x7F1B7458u: goto label_7F1B7458;
    case 0x7F1B745Cu: goto label_7F1B745C;
    case 0x7F1B7460u: goto label_7F1B7460;
    case 0x7F1B7464u: goto label_7F1B7464;
    case 0x7F1B7468u: goto label_7F1B7468;
    case 0x7F1B746Cu: goto label_7F1B746C;
    case 0x7F1B7470u: goto label_7F1B7470;
    case 0x7F1B7474u: goto label_7F1B7474;
    case 0x7F1B7478u: goto label_7F1B7478;
    case 0x7F1B747Cu: goto label_7F1B747C;
    case 0x7F1B7480u: goto label_7F1B7480;
    case 0x7F1B7484u: goto label_7F1B7484;
    case 0x7F1B7488u: goto label_7F1B7488;
    case 0x7F1B748Cu: goto label_7F1B748C;
    case 0x7F1B7490u: goto label_7F1B7490;
    case 0x7F1B7494u: goto label_7F1B7494;
    case 0x7F1B7498u: goto label_7F1B7498;
    case 0x7F1B749Cu: goto label_7F1B749C;
    case 0x7F1B74A0u: goto label_7F1B74A0;
    case 0x7F1B74A4u: goto label_7F1B74A4;
    case 0x7F1B74A8u: goto label_7F1B74A8;
    case 0x7F1B74ACu: goto label_7F1B74AC;
    case 0x7F1B74B0u: goto label_7F1B74B0;
    case 0x7F1B74B4u: goto label_7F1B74B4;
    case 0x7F1B74B8u: goto label_7F1B74B8;
    case 0x7F1B74BCu: goto label_7F1B74BC;
    case 0x7F1B74C0u: goto label_7F1B74C0;
    case 0x7F1B74C4u: goto label_7F1B74C4;
    case 0x7F1B74C8u: goto label_7F1B74C8;
    case 0x7F1B74CCu: goto label_7F1B74CC;
    case 0x7F1B74D0u: goto label_7F1B74D0;
    case 0x7F1B74D4u: goto label_7F1B74D4;
    case 0x7F1B74D8u: goto label_7F1B74D8;
    case 0x7F1B74DCu: goto label_7F1B74DC;
    case 0x7F1B74E0u: goto label_7F1B74E0;
    case 0x7F1B74E4u: goto label_7F1B74E4;
    case 0x7F1B74E8u: goto label_7F1B74E8;
    case 0x7F1B74ECu: goto label_7F1B74EC;
    case 0x7F1B74F0u: goto label_7F1B74F0;
    case 0x7F1B74F4u: goto label_7F1B74F4;
    case 0x7F1B74F8u: goto label_7F1B74F8;
    case 0x7F1B74FCu: goto label_7F1B74FC;
    case 0x7F1B7500u: goto label_7F1B7500;
    case 0x7F1B7504u: goto label_7F1B7504;
    case 0x7F1B7508u: goto label_7F1B7508;
    case 0x7F1B750Cu: goto label_7F1B750C;
    case 0x7F1B7510u: goto label_7F1B7510;
    case 0x7F1B7514u: goto label_7F1B7514;
    case 0x7F1B7518u: goto label_7F1B7518;
    case 0x7F1B751Cu: goto label_7F1B751C;
    case 0x7F1B7520u: goto label_7F1B7520;
    case 0x7F1B7524u: goto label_7F1B7524;
    case 0x7F1B7528u: goto label_7F1B7528;
    case 0x7F1B752Cu: goto label_7F1B752C;
    case 0x7F1B7530u: goto label_7F1B7530;
    case 0x7F1B7534u: goto label_7F1B7534;
    case 0x7F1B7538u: goto label_7F1B7538;
    case 0x7F1B753Cu: goto label_7F1B753C;
    case 0x7F1B7540u: goto label_7F1B7540;
    case 0x7F1B7544u: goto label_7F1B7544;
    case 0x7F1B7548u: goto label_7F1B7548;
    case 0x7F1B754Cu: goto label_7F1B754C;
    case 0x7F1B7550u: goto label_7F1B7550;
    case 0x7F1B7554u: goto label_7F1B7554;
    case 0x7F1B7558u: goto label_7F1B7558;
    case 0x7F1B755Cu: goto label_7F1B755C;
    case 0x7F1B7560u: goto label_7F1B7560;
    case 0x7F1B7564u: goto label_7F1B7564;
    case 0x7F1B7568u: goto label_7F1B7568;
    case 0x7F1B756Cu: goto label_7F1B756C;
    case 0x7F1B7570u: goto label_7F1B7570;
    case 0x7F1B7574u: goto label_7F1B7574;
    case 0x7F1B7578u: goto label_7F1B7578;
    case 0x7F1B757Cu: goto label_7F1B757C;
    case 0x7F1B7580u: goto label_7F1B7580;
    case 0x7F1B7584u: goto label_7F1B7584;
    case 0x7F1B7588u: goto label_7F1B7588;
    case 0x7F1B758Cu: goto label_7F1B758C;
    case 0x7F1B7590u: goto label_7F1B7590;
    case 0x7F1B7594u: goto label_7F1B7594;
    case 0x7F1B7598u: goto label_7F1B7598;
    case 0x7F1B759Cu: goto label_7F1B759C;
    case 0x7F1B75A0u: goto label_7F1B75A0;
    case 0x7F1B75A4u: goto label_7F1B75A4;
    case 0x7F1B75A8u: goto label_7F1B75A8;
    case 0x7F1B75ACu: goto label_7F1B75AC;
    case 0x7F1B75B0u: goto label_7F1B75B0;
    case 0x7F1B75B4u: goto label_7F1B75B4;
    case 0x7F1B75B8u: goto label_7F1B75B8;
    case 0x7F1B75BCu: goto label_7F1B75BC;
    case 0x7F1B75C0u: goto label_7F1B75C0;
    case 0x7F1B75C4u: goto label_7F1B75C4;
    case 0x7F1B75C8u: goto label_7F1B75C8;
    case 0x7F1B75CCu: goto label_7F1B75CC;
    case 0x7F1B75D0u: goto label_7F1B75D0;
    case 0x7F1B75D4u: goto label_7F1B75D4;
    case 0x7F1B75D8u: goto label_7F1B75D8;
    case 0x7F1B75DCu: goto label_7F1B75DC;
    case 0x7F1B75E0u: goto label_7F1B75E0;
    case 0x7F1B75E4u: goto label_7F1B75E4;
    case 0x7F1B75E8u: goto label_7F1B75E8;
    case 0x7F1B75ECu: goto label_7F1B75EC;
    case 0x7F1B75F0u: goto label_7F1B75F0;
    case 0x7F1B75F4u: goto label_7F1B75F4;
    case 0x7F1B75F8u: goto label_7F1B75F8;
    case 0x7F1B75FCu: goto label_7F1B75FC;
    case 0x7F1B7600u: goto label_7F1B7600;
    case 0x7F1B7604u: goto label_7F1B7604;
    case 0x7F1B7608u: goto label_7F1B7608;
    case 0x7F1B760Cu: goto label_7F1B760C;
    case 0x7F1B7610u: goto label_7F1B7610;
    case 0x7F1B7614u: goto label_7F1B7614;
    case 0x7F1B7618u: goto label_7F1B7618;
    case 0x7F1B761Cu: goto label_7F1B761C;
    case 0x7F1B7620u: goto label_7F1B7620;
    case 0x7F1B7624u: goto label_7F1B7624;
    case 0x7F1B7628u: goto label_7F1B7628;
    case 0x7F1B762Cu: goto label_7F1B762C;
    case 0x7F1B7630u: goto label_7F1B7630;
    case 0x7F1B7634u: goto label_7F1B7634;
    case 0x7F1B7638u: goto label_7F1B7638;
    case 0x7F1B763Cu: goto label_7F1B763C;
    case 0x7F1B7640u: goto label_7F1B7640;
    case 0x7F1B7644u: goto label_7F1B7644;
    case 0x7F1B7648u: goto label_7F1B7648;
    case 0x7F1B764Cu: goto label_7F1B764C;
    case 0x7F1B7650u: goto label_7F1B7650;
    case 0x7F1B7654u: goto label_7F1B7654;
    case 0x7F1B7658u: goto label_7F1B7658;
    case 0x7F1B765Cu: goto label_7F1B765C;
    case 0x7F1B7660u: goto label_7F1B7660;
    case 0x7F1B7664u: goto label_7F1B7664;
    case 0x7F1B7668u: goto label_7F1B7668;
    case 0x7F1B766Cu: goto label_7F1B766C;
    case 0x7F1B7670u: goto label_7F1B7670;
    case 0x7F1B7674u: goto label_7F1B7674;
    case 0x7F1B7678u: goto label_7F1B7678;
    case 0x7F1B767Cu: goto label_7F1B767C;
    case 0x7F1B7680u: goto label_7F1B7680;
    case 0x7F1B7684u: goto label_7F1B7684;
    case 0x7F1B7688u: goto label_7F1B7688;
    case 0x7F1B768Cu: goto label_7F1B768C;
    case 0x7F1B7690u: goto label_7F1B7690;
    case 0x7F1B7694u: goto label_7F1B7694;
    case 0x7F1B7698u: goto label_7F1B7698;
    case 0x7F1B769Cu: goto label_7F1B769C;
    case 0x7F1B76A0u: goto label_7F1B76A0;
    case 0x7F1B76A4u: goto label_7F1B76A4;
    case 0x7F1B76A8u: goto label_7F1B76A8;
    case 0x7F1B76ACu: goto label_7F1B76AC;
    case 0x7F1B76B0u: goto label_7F1B76B0;
    case 0x7F1B76B4u: goto label_7F1B76B4;
    case 0x7F1B76B8u: goto label_7F1B76B8;
    case 0x7F1B76BCu: goto label_7F1B76BC;
    case 0x7F1B76C0u: goto label_7F1B76C0;
    case 0x7F1B76C4u: goto label_7F1B76C4;
    case 0x7F1B76C8u: goto label_7F1B76C8;
    case 0x7F1B76CCu: goto label_7F1B76CC;
    case 0x7F1B76D0u: goto label_7F1B76D0;
    case 0x7F1B76D4u: goto label_7F1B76D4;
    case 0x7F1B76D8u: goto label_7F1B76D8;
    case 0x7F1B76DCu: goto label_7F1B76DC;
    case 0x7F1B76E0u: goto label_7F1B76E0;
    case 0x7F1B76E4u: goto label_7F1B76E4;
    case 0x7F1B76E8u: goto label_7F1B76E8;
    case 0x7F1B76ECu: goto label_7F1B76EC;
    case 0x7F1B76F0u: goto label_7F1B76F0;
    case 0x7F1B76F4u: goto label_7F1B76F4;
    case 0x7F1B76F8u: goto label_7F1B76F8;
    case 0x7F1B76FCu: goto label_7F1B76FC;
    case 0x7F1B7700u: goto label_7F1B7700;
    case 0x7F1B7704u: goto label_7F1B7704;
    case 0x7F1B7708u: goto label_7F1B7708;
    case 0x7F1B770Cu: goto label_7F1B770C;
    case 0x7F1B7710u: goto label_7F1B7710;
    case 0x7F1B7714u: goto label_7F1B7714;
    case 0x7F1B7718u: goto label_7F1B7718;
    case 0x7F1B771Cu: goto label_7F1B771C;
    case 0x7F1B7720u: goto label_7F1B7720;
    case 0x7F1B7724u: goto label_7F1B7724;
    case 0x7F1B7728u: goto label_7F1B7728;
    case 0x7F1B772Cu: goto label_7F1B772C;
    case 0x7F1B7730u: goto label_7F1B7730;
    case 0x7F1B7734u: goto label_7F1B7734;
    case 0x7F1B7738u: goto label_7F1B7738;
    case 0x7F1B773Cu: goto label_7F1B773C;
    case 0x7F1B7740u: goto label_7F1B7740;
    case 0x7F1B7744u: goto label_7F1B7744;
    case 0x7F1B7748u: goto label_7F1B7748;
    case 0x7F1B774Cu: goto label_7F1B774C;
    case 0x7F1B7750u: goto label_7F1B7750;
    case 0x7F1B7754u: goto label_7F1B7754;
    case 0x7F1B7758u: goto label_7F1B7758;
    case 0x7F1B775Cu: goto label_7F1B775C;
    case 0x7F1B7760u: goto label_7F1B7760;
    case 0x7F1B7764u: goto label_7F1B7764;
    case 0x7F1B7768u: goto label_7F1B7768;
    case 0x7F1B776Cu: goto label_7F1B776C;
    case 0x7F1B7770u: goto label_7F1B7770;
    case 0x7F1B7774u: goto label_7F1B7774;
    case 0x7F1B7778u: goto label_7F1B7778;
    case 0x7F1B777Cu: goto label_7F1B777C;
    case 0x7F1B7780u: goto label_7F1B7780;
    case 0x7F1B7784u: goto label_7F1B7784;
    case 0x7F1B7788u: goto label_7F1B7788;
    case 0x7F1B778Cu: goto label_7F1B778C;
    case 0x7F1B7790u: goto label_7F1B7790;
    case 0x7F1B7794u: goto label_7F1B7794;
    case 0x7F1B7798u: goto label_7F1B7798;
    case 0x7F1B779Cu: goto label_7F1B779C;
    case 0x7F1B77A0u: goto label_7F1B77A0;
    case 0x7F1B77A4u: goto label_7F1B77A4;
    case 0x7F1B77A8u: goto label_7F1B77A8;
    case 0x7F1B77ACu: goto label_7F1B77AC;
    case 0x7F1B77B0u: goto label_7F1B77B0;
    case 0x7F1B77B4u: goto label_7F1B77B4;
    case 0x7F1B77B8u: goto label_7F1B77B8;
    case 0x7F1B77BCu: goto label_7F1B77BC;
    case 0x7F1B77C0u: goto label_7F1B77C0;
    case 0x7F1B77C4u: goto label_7F1B77C4;
    case 0x7F1B77C8u: goto label_7F1B77C8;
    case 0x7F1B77CCu: goto label_7F1B77CC;
    case 0x7F1B77D0u: goto label_7F1B77D0;
    case 0x7F1B77D4u: goto label_7F1B77D4;
    case 0x7F1B77D8u: goto label_7F1B77D8;
    case 0x7F1B77DCu: goto label_7F1B77DC;
    case 0x7F1B77E0u: goto label_7F1B77E0;
    case 0x7F1B77E4u: goto label_7F1B77E4;
    case 0x7F1B77E8u: goto label_7F1B77E8;
    case 0x7F1B77ECu: goto label_7F1B77EC;
    case 0x7F1B77F0u: goto label_7F1B77F0;
    case 0x7F1B77F4u: goto label_7F1B77F4;
    case 0x7F1B77F8u: goto label_7F1B77F8;
    case 0x7F1B77FCu: goto label_7F1B77FC;
    case 0x7F1B7800u: goto label_7F1B7800;
    case 0x7F1B7804u: goto label_7F1B7804;
    case 0x7F1B7808u: goto label_7F1B7808;
    case 0x7F1B780Cu: goto label_7F1B780C;
    case 0x7F1B7810u: goto label_7F1B7810;
    case 0x7F1B7814u: goto label_7F1B7814;
    case 0x7F1B7818u: goto label_7F1B7818;
    case 0x7F1B781Cu: goto label_7F1B781C;
    case 0x7F1B7820u: goto label_7F1B7820;
    case 0x7F1B7824u: goto label_7F1B7824;
    case 0x7F1B7828u: goto label_7F1B7828;
    case 0x7F1B782Cu: goto label_7F1B782C;
    case 0x7F1B7830u: goto label_7F1B7830;
    case 0x7F1B7834u: goto label_7F1B7834;
    case 0x7F1B7838u: goto label_7F1B7838;
    case 0x7F1B783Cu: goto label_7F1B783C;
    case 0x7F1B7840u: goto label_7F1B7840;
    case 0x7F1B7844u: goto label_7F1B7844;
    case 0x7F1B7848u: goto label_7F1B7848;
    case 0x7F1B784Cu: goto label_7F1B784C;
    case 0x7F1B7850u: goto label_7F1B7850;
    case 0x7F1B7854u: goto label_7F1B7854;
    case 0x7F1B7858u: goto label_7F1B7858;
    case 0x7F1B785Cu: goto label_7F1B785C;
    case 0x7F1B7860u: goto label_7F1B7860;
    case 0x7F1B7864u: goto label_7F1B7864;
    case 0x7F1B7868u: goto label_7F1B7868;
    case 0x7F1B786Cu: goto label_7F1B786C;
    case 0x7F1B7870u: goto label_7F1B7870;
    case 0x7F1B7874u: goto label_7F1B7874;
    case 0x7F1B7878u: goto label_7F1B7878;
    case 0x7F1B787Cu: goto label_7F1B787C;
    case 0x7F1B7880u: goto label_7F1B7880;
    case 0x7F1B7884u: goto label_7F1B7884;
    case 0x7F1B7888u: goto label_7F1B7888;
    case 0x7F1B788Cu: goto label_7F1B788C;
    case 0x7F1B7890u: goto label_7F1B7890;
    case 0x7F1B7894u: goto label_7F1B7894;
    case 0x7F1B7898u: goto label_7F1B7898;
    case 0x7F1B789Cu: goto label_7F1B789C;
    case 0x7F1B78A0u: goto label_7F1B78A0;
    case 0x7F1B78A4u: goto label_7F1B78A4;
    case 0x7F1B78A8u: goto label_7F1B78A8;
    case 0x7F1B78ACu: goto label_7F1B78AC;
    case 0x7F1B78B0u: goto label_7F1B78B0;
    case 0x7F1B78B4u: goto label_7F1B78B4;
    case 0x7F1B78B8u: goto label_7F1B78B8;
    case 0x7F1B78BCu: goto label_7F1B78BC;
    case 0x7F1B78C0u: goto label_7F1B78C0;
    case 0x7F1B78C4u: goto label_7F1B78C4;
    case 0x7F1B78C8u: goto label_7F1B78C8;
    case 0x7F1B78CCu: goto label_7F1B78CC;
    case 0x7F1B78D0u: goto label_7F1B78D0;
    case 0x7F1B78D4u: goto label_7F1B78D4;
    case 0x7F1B78D8u: goto label_7F1B78D8;
    case 0x7F1B78DCu: goto label_7F1B78DC;
    case 0x7F1B78E0u: goto label_7F1B78E0;
    case 0x7F1B78E4u: goto label_7F1B78E4;
    case 0x7F1B78E8u: goto label_7F1B78E8;
    case 0x7F1B78ECu: goto label_7F1B78EC;
    case 0x7F1B78F0u: goto label_7F1B78F0;
    case 0x7F1B78F4u: goto label_7F1B78F4;
    case 0x7F1B78F8u: goto label_7F1B78F8;
    case 0x7F1B78FCu: goto label_7F1B78FC;
    case 0x7F1B7900u: goto label_7F1B7900;
    case 0x7F1B7904u: goto label_7F1B7904;
    case 0x7F1B7908u: goto label_7F1B7908;
    case 0x7F1B790Cu: goto label_7F1B790C;
    case 0x7F1B7910u: goto label_7F1B7910;
    case 0x7F1B7914u: goto label_7F1B7914;
    case 0x7F1B7918u: goto label_7F1B7918;
    case 0x7F1B791Cu: goto label_7F1B791C;
    case 0x7F1B7920u: goto label_7F1B7920;
    case 0x7F1B7924u: goto label_7F1B7924;
    case 0x7F1B7928u: goto label_7F1B7928;
    case 0x7F1B792Cu: goto label_7F1B792C;
    case 0x7F1B7930u: goto label_7F1B7930;
    case 0x7F1B7934u: goto label_7F1B7934;
    case 0x7F1B7938u: goto label_7F1B7938;
    case 0x7F1B793Cu: goto label_7F1B793C;
    case 0x7F1B7940u: goto label_7F1B7940;
    case 0x7F1B7944u: goto label_7F1B7944;
    case 0x7F1B7948u: goto label_7F1B7948;
    case 0x7F1B794Cu: goto label_7F1B794C;
    case 0x7F1B7950u: goto label_7F1B7950;
    case 0x7F1B7954u: goto label_7F1B7954;
    case 0x7F1B7958u: goto label_7F1B7958;
    case 0x7F1B795Cu: goto label_7F1B795C;
    case 0x7F1B7960u: goto label_7F1B7960;
    case 0x7F1B7964u: goto label_7F1B7964;
    case 0x7F1B7968u: goto label_7F1B7968;
    case 0x7F1B796Cu: goto label_7F1B796C;
    case 0x7F1B7970u: goto label_7F1B7970;
    case 0x7F1B7974u: goto label_7F1B7974;
    case 0x7F1B7978u: goto label_7F1B7978;
    case 0x7F1B797Cu: goto label_7F1B797C;
    case 0x7F1B7980u: goto label_7F1B7980;
    case 0x7F1B7984u: goto label_7F1B7984;
    case 0x7F1B7988u: goto label_7F1B7988;
    case 0x7F1B798Cu: goto label_7F1B798C;
    case 0x7F1B7990u: goto label_7F1B7990;
    case 0x7F1B7994u: goto label_7F1B7994;
    case 0x7F1B7998u: goto label_7F1B7998;
    case 0x7F1B799Cu: goto label_7F1B799C;
    case 0x7F1B79A0u: goto label_7F1B79A0;
    case 0x7F1B79A4u: goto label_7F1B79A4;
    case 0x7F1B79A8u: goto label_7F1B79A8;
    case 0x7F1B79ACu: goto label_7F1B79AC;
    case 0x7F1B79B0u: goto label_7F1B79B0;
    case 0x7F1B79B4u: goto label_7F1B79B4;
    case 0x7F1B79B8u: goto label_7F1B79B8;
    case 0x7F1B79BCu: goto label_7F1B79BC;
    case 0x7F1B79C0u: goto label_7F1B79C0;
    case 0x7F1B79C4u: goto label_7F1B79C4;
    case 0x7F1B79C8u: goto label_7F1B79C8;
    case 0x7F1B79CCu: goto label_7F1B79CC;
    case 0x7F1B79D0u: goto label_7F1B79D0;
    case 0x7F1B79D4u: goto label_7F1B79D4;
    case 0x7F1B79D8u: goto label_7F1B79D8;
    case 0x7F1B79DCu: goto label_7F1B79DC;
    case 0x7F1B79E0u: goto label_7F1B79E0;
    case 0x7F1B79E4u: goto label_7F1B79E4;
    case 0x7F1B79E8u: goto label_7F1B79E8;
    case 0x7F1B79ECu: goto label_7F1B79EC;
    case 0x7F1B79F0u: goto label_7F1B79F0;
    case 0x7F1B79F4u: goto label_7F1B79F4;
    case 0x7F1B79F8u: goto label_7F1B79F8;
    case 0x7F1B79FCu: goto label_7F1B79FC;
    case 0x7F1B7A00u: goto label_7F1B7A00;
    case 0x7F1B7A04u: goto label_7F1B7A04;
    case 0x7F1B7A08u: goto label_7F1B7A08;
    case 0x7F1B7A0Cu: goto label_7F1B7A0C;
    case 0x7F1B7A10u: goto label_7F1B7A10;
    case 0x7F1B7A14u: goto label_7F1B7A14;
    case 0x7F1B7A18u: goto label_7F1B7A18;
    case 0x7F1B7A1Cu: goto label_7F1B7A1C;
    case 0x7F1B7A20u: goto label_7F1B7A20;
    case 0x7F1B7A24u: goto label_7F1B7A24;
    case 0x7F1B7A28u: goto label_7F1B7A28;
    case 0x7F1B7A2Cu: goto label_7F1B7A2C;
    case 0x7F1B7A30u: goto label_7F1B7A30;
    case 0x7F1B7A34u: goto label_7F1B7A34;
    case 0x7F1B7A38u: goto label_7F1B7A38;
    case 0x7F1B7A3Cu: goto label_7F1B7A3C;
    case 0x7F1B7A40u: goto label_7F1B7A40;
    case 0x7F1B7A44u: goto label_7F1B7A44;
    case 0x7F1B7A48u: goto label_7F1B7A48;
    case 0x7F1B7A4Cu: goto label_7F1B7A4C;
    case 0x7F1B7A50u: goto label_7F1B7A50;
    case 0x7F1B7A54u: goto label_7F1B7A54;
    case 0x7F1B7A58u: goto label_7F1B7A58;
    case 0x7F1B7A5Cu: goto label_7F1B7A5C;
    case 0x7F1B7A60u: goto label_7F1B7A60;
    case 0x7F1B7A64u: goto label_7F1B7A64;
    case 0x7F1B7A68u: goto label_7F1B7A68;
    case 0x7F1B7A6Cu: goto label_7F1B7A6C;
    case 0x7F1B7A70u: goto label_7F1B7A70;
    case 0x7F1B7A74u: goto label_7F1B7A74;
    case 0x7F1B7A78u: goto label_7F1B7A78;
    case 0x7F1B7A7Cu: goto label_7F1B7A7C;
    case 0x7F1B7A80u: goto label_7F1B7A80;
    case 0x7F1B7A84u: goto label_7F1B7A84;
    case 0x7F1B7A88u: goto label_7F1B7A88;
    case 0x7F1B7A8Cu: goto label_7F1B7A8C;
    case 0x7F1B7A90u: goto label_7F1B7A90;
    case 0x7F1B7A94u: goto label_7F1B7A94;
    case 0x7F1B7A98u: goto label_7F1B7A98;
    case 0x7F1B7A9Cu: goto label_7F1B7A9C;
    case 0x7F1B7AA0u: goto label_7F1B7AA0;
    case 0x7F1B7AA4u: goto label_7F1B7AA4;
    case 0x7F1B7AA8u: goto label_7F1B7AA8;
    case 0x7F1B7AACu: goto label_7F1B7AAC;
    case 0x7F1B7AB0u: goto label_7F1B7AB0;
    case 0x7F1B7AB4u: goto label_7F1B7AB4;
    case 0x7F1B7AB8u: goto label_7F1B7AB8;
    case 0x7F1B7ABCu: goto label_7F1B7ABC;
    case 0x7F1B7AC0u: goto label_7F1B7AC0;
    case 0x7F1B7AC4u: goto label_7F1B7AC4;
    case 0x7F1B7AC8u: goto label_7F1B7AC8;
    case 0x7F1B7ACCu: goto label_7F1B7ACC;
    case 0x7F1B7AD0u: goto label_7F1B7AD0;
    case 0x7F1B7AD4u: goto label_7F1B7AD4;
    case 0x7F1B7AD8u: goto label_7F1B7AD8;
    case 0x7F1B7ADCu: goto label_7F1B7ADC;
    case 0x7F1B7AE0u: goto label_7F1B7AE0;
    case 0x7F1B7AE4u: goto label_7F1B7AE4;
    case 0x7F1B7AE8u: goto label_7F1B7AE8;
    case 0x7F1B7AECu: goto label_7F1B7AEC;
    case 0x7F1B7AF0u: goto label_7F1B7AF0;
    case 0x7F1B7AF4u: goto label_7F1B7AF4;
    case 0x7F1B7AF8u: goto label_7F1B7AF8;
    case 0x7F1B7AFCu: goto label_7F1B7AFC;
    case 0x7F1B7B00u: goto label_7F1B7B00;
    case 0x7F1B7B04u: goto label_7F1B7B04;
    case 0x7F1B7B08u: goto label_7F1B7B08;
    case 0x7F1B7B0Cu: goto label_7F1B7B0C;
    case 0x7F1B7B10u: goto label_7F1B7B10;
    case 0x7F1B7B14u: goto label_7F1B7B14;
    case 0x7F1B7B18u: goto label_7F1B7B18;
    case 0x7F1B7B1Cu: goto label_7F1B7B1C;
    case 0x7F1B7B20u: goto label_7F1B7B20;
    case 0x7F1B7B24u: goto label_7F1B7B24;
    case 0x7F1B7B28u: goto label_7F1B7B28;
    case 0x7F1B7B2Cu: goto label_7F1B7B2C;
    case 0x7F1B7B30u: goto label_7F1B7B30;
    case 0x7F1B7B34u: goto label_7F1B7B34;
    case 0x7F1B7B38u: goto label_7F1B7B38;
    case 0x7F1B7B3Cu: goto label_7F1B7B3C;
    case 0x7F1B7B40u: goto label_7F1B7B40;
    case 0x7F1B7B44u: goto label_7F1B7B44;
    case 0x7F1B7B48u: goto label_7F1B7B48;
    case 0x7F1B7B4Cu: goto label_7F1B7B4C;
    case 0x7F1B7B50u: goto label_7F1B7B50;
    case 0x7F1B7B54u: goto label_7F1B7B54;
    case 0x7F1B7B58u: goto label_7F1B7B58;
    case 0x7F1B7B5Cu: goto label_7F1B7B5C;
    case 0x7F1B7B60u: goto label_7F1B7B60;
    case 0x7F1B7B64u: goto label_7F1B7B64;
    case 0x7F1B7B68u: goto label_7F1B7B68;
    case 0x7F1B7B6Cu: goto label_7F1B7B6C;
    case 0x7F1B7B70u: goto label_7F1B7B70;
    case 0x7F1B7B74u: goto label_7F1B7B74;
    case 0x7F1B7B78u: goto label_7F1B7B78;
    case 0x7F1B7B7Cu: goto label_7F1B7B7C;
    case 0x7F1B7B80u: goto label_7F1B7B80;
    case 0x7F1B7B84u: goto label_7F1B7B84;
    case 0x7F1B7B88u: goto label_7F1B7B88;
    case 0x7F1B7B8Cu: goto label_7F1B7B8C;
    case 0x7F1B7B90u: goto label_7F1B7B90;
    case 0x7F1B7B94u: goto label_7F1B7B94;
    case 0x7F1B7B98u: goto label_7F1B7B98;
    case 0x7F1B7B9Cu: goto label_7F1B7B9C;
    case 0x7F1B7BA0u: goto label_7F1B7BA0;
    case 0x7F1B7BA4u: goto label_7F1B7BA4;
    case 0x7F1B7BA8u: goto label_7F1B7BA8;
    case 0x7F1B7BACu: goto label_7F1B7BAC;
    case 0x7F1B7BB0u: goto label_7F1B7BB0;
    case 0x7F1B7BB4u: goto label_7F1B7BB4;
    case 0x7F1B7BB8u: goto label_7F1B7BB8;
    case 0x7F1B7BBCu: goto label_7F1B7BBC;
    case 0x7F1B7BC0u: goto label_7F1B7BC0;
    case 0x7F1B7BC4u: goto label_7F1B7BC4;
    case 0x7F1B7BC8u: goto label_7F1B7BC8;
    case 0x7F1B7BCCu: goto label_7F1B7BCC;
    case 0x7F1B7BD0u: goto label_7F1B7BD0;
    case 0x7F1B7BD4u: goto label_7F1B7BD4;
    case 0x7F1B7BD8u: goto label_7F1B7BD8;
    case 0x7F1B7BDCu: goto label_7F1B7BDC;
    case 0x7F1B7BE0u: goto label_7F1B7BE0;
    case 0x7F1B7BE4u: goto label_7F1B7BE4;
    case 0x7F1B7BE8u: goto label_7F1B7BE8;
    case 0x7F1B7BECu: goto label_7F1B7BEC;
    case 0x7F1B7BF0u: goto label_7F1B7BF0;
    case 0x7F1B7BF4u: goto label_7F1B7BF4;
    case 0x7F1B7BF8u: goto label_7F1B7BF8;
    case 0x7F1B7BFCu: goto label_7F1B7BFC;
    case 0x7F1B7C00u: goto label_7F1B7C00;
    case 0x7F1B7C04u: goto label_7F1B7C04;
    case 0x7F1B7C08u: goto label_7F1B7C08;
    case 0x7F1B7C0Cu: goto label_7F1B7C0C;
    case 0x7F1B7C10u: goto label_7F1B7C10;
    case 0x7F1B7C14u: goto label_7F1B7C14;
    case 0x7F1B7C18u: goto label_7F1B7C18;
    case 0x7F1B7C1Cu: goto label_7F1B7C1C;
    case 0x7F1B7C20u: goto label_7F1B7C20;
    case 0x7F1B7C24u: goto label_7F1B7C24;
    case 0x7F1B7C28u: goto label_7F1B7C28;
    case 0x7F1B7C2Cu: goto label_7F1B7C2C;
    case 0x7F1B7C30u: goto label_7F1B7C30;
    case 0x7F1B7C34u: goto label_7F1B7C34;
    case 0x7F1B7C38u: goto label_7F1B7C38;
    case 0x7F1B7C3Cu: goto label_7F1B7C3C;
    case 0x7F1B7C40u: goto label_7F1B7C40;
    case 0x7F1B7C44u: goto label_7F1B7C44;
    case 0x7F1B7C48u: goto label_7F1B7C48;
    case 0x7F1B7C4Cu: goto label_7F1B7C4C;
    case 0x7F1B7C50u: goto label_7F1B7C50;
    case 0x7F1B7C54u: goto label_7F1B7C54;
    case 0x7F1B7C58u: goto label_7F1B7C58;
    case 0x7F1B7C5Cu: goto label_7F1B7C5C;
    case 0x7F1B7C60u: goto label_7F1B7C60;
    case 0x7F1B7C64u: goto label_7F1B7C64;
    case 0x7F1B7C68u: goto label_7F1B7C68;
    case 0x7F1B7C6Cu: goto label_7F1B7C6C;
    case 0x7F1B7C70u: goto label_7F1B7C70;
    case 0x7F1B7C74u: goto label_7F1B7C74;
    case 0x7F1B7C78u: goto label_7F1B7C78;
    case 0x7F1B7C7Cu: goto label_7F1B7C7C;
    case 0x7F1B7C80u: goto label_7F1B7C80;
    case 0x7F1B7C84u: goto label_7F1B7C84;
    case 0x7F1B7C88u: goto label_7F1B7C88;
    case 0x7F1B7C8Cu: goto label_7F1B7C8C;
    case 0x7F1B7C90u: goto label_7F1B7C90;
    case 0x7F1B7C94u: goto label_7F1B7C94;
    case 0x7F1B7C98u: goto label_7F1B7C98;
    case 0x7F1B7C9Cu: goto label_7F1B7C9C;
    case 0x7F1B7CA0u: goto label_7F1B7CA0;
    case 0x7F1B7CA4u: goto label_7F1B7CA4;
    case 0x7F1B7CA8u: goto label_7F1B7CA8;
    case 0x7F1B7CACu: goto label_7F1B7CAC;
    case 0x7F1B7CB0u: goto label_7F1B7CB0;
    case 0x7F1B7CB4u: goto label_7F1B7CB4;
    case 0x7F1B7CB8u: goto label_7F1B7CB8;
    case 0x7F1B7CBCu: goto label_7F1B7CBC;
    case 0x7F1B7CC0u: goto label_7F1B7CC0;
    case 0x7F1B7CC4u: goto label_7F1B7CC4;
    case 0x7F1B7CC8u: goto label_7F1B7CC8;
    case 0x7F1B7CCCu: goto label_7F1B7CCC;
    case 0x7F1B7CD0u: goto label_7F1B7CD0;
    case 0x7F1B7CD4u: goto label_7F1B7CD4;
    case 0x7F1B7CD8u: goto label_7F1B7CD8;
    case 0x7F1B7CDCu: goto label_7F1B7CDC;
    case 0x7F1B7CE0u: goto label_7F1B7CE0;
    case 0x7F1B7CE4u: goto label_7F1B7CE4;
    case 0x7F1B7CE8u: goto label_7F1B7CE8;
    case 0x7F1B7CECu: goto label_7F1B7CEC;
    case 0x7F1B7CF0u: goto label_7F1B7CF0;
    case 0x7F1B7CF4u: goto label_7F1B7CF4;
    case 0x7F1B7CF8u: goto label_7F1B7CF8;
    case 0x7F1B7CFCu: goto label_7F1B7CFC;
    case 0x7F1B7D00u: goto label_7F1B7D00;
    case 0x7F1B7D04u: goto label_7F1B7D04;
    case 0x7F1B7D08u: goto label_7F1B7D08;
    case 0x7F1B7D0Cu: goto label_7F1B7D0C;
    case 0x7F1B7D10u: goto label_7F1B7D10;
    case 0x7F1B7D14u: goto label_7F1B7D14;
    case 0x7F1B7D18u: goto label_7F1B7D18;
    case 0x7F1B7D1Cu: goto label_7F1B7D1C;
    case 0x7F1B7D20u: goto label_7F1B7D20;
    case 0x7F1B7D24u: goto label_7F1B7D24;
    case 0x7F1B7D28u: goto label_7F1B7D28;
    case 0x7F1B7D2Cu: goto label_7F1B7D2C;
    case 0x7F1B7D30u: goto label_7F1B7D30;
    case 0x7F1B7D34u: goto label_7F1B7D34;
    case 0x7F1B7D38u: goto label_7F1B7D38;
    case 0x7F1B7D3Cu: goto label_7F1B7D3C;
    case 0x7F1B7D40u: goto label_7F1B7D40;
    case 0x7F1B7D44u: goto label_7F1B7D44;
    case 0x7F1B7D48u: goto label_7F1B7D48;
    case 0x7F1B7D4Cu: goto label_7F1B7D4C;
    case 0x7F1B7D50u: goto label_7F1B7D50;
    case 0x7F1B7D54u: goto label_7F1B7D54;
    case 0x7F1B7D58u: goto label_7F1B7D58;
    case 0x7F1B7D5Cu: goto label_7F1B7D5C;
    case 0x7F1B7D60u: goto label_7F1B7D60;
    case 0x7F1B7D64u: goto label_7F1B7D64;
    case 0x7F1B7D68u: goto label_7F1B7D68;
    case 0x7F1B7D6Cu: goto label_7F1B7D6C;
    case 0x7F1B7D70u: goto label_7F1B7D70;
    case 0x7F1B7D74u: goto label_7F1B7D74;
    case 0x7F1B7D78u: goto label_7F1B7D78;
    case 0x7F1B7D7Cu: goto label_7F1B7D7C;
    case 0x7F1B7D80u: goto label_7F1B7D80;
    case 0x7F1B7D84u: goto label_7F1B7D84;
    case 0x7F1B7D88u: goto label_7F1B7D88;
    case 0x7F1B7D8Cu: goto label_7F1B7D8C;
    case 0x7F1B7D90u: goto label_7F1B7D90;
    case 0x7F1B7D94u: goto label_7F1B7D94;
    case 0x7F1B7D98u: goto label_7F1B7D98;
    case 0x7F1B7D9Cu: goto label_7F1B7D9C;
    case 0x7F1B7DA0u: goto label_7F1B7DA0;
    case 0x7F1B7DA4u: goto label_7F1B7DA4;
    case 0x7F1B7DA8u: goto label_7F1B7DA8;
    case 0x7F1B7DACu: goto label_7F1B7DAC;
    case 0x7F1B7DB0u: goto label_7F1B7DB0;
    case 0x7F1B7DB4u: goto label_7F1B7DB4;
    case 0x7F1B7DB8u: goto label_7F1B7DB8;
    case 0x7F1B7DBCu: goto label_7F1B7DBC;
    case 0x7F1B7DC0u: goto label_7F1B7DC0;
    case 0x7F1B7DC4u: goto label_7F1B7DC4;
    case 0x7F1B7DC8u: goto label_7F1B7DC8;
    case 0x7F1B7DCCu: goto label_7F1B7DCC;
    case 0x7F1B7DD0u: goto label_7F1B7DD0;
    case 0x7F1B7DD4u: goto label_7F1B7DD4;
    case 0x7F1B7DD8u: goto label_7F1B7DD8;
    case 0x7F1B7DDCu: goto label_7F1B7DDC;
    case 0x7F1B7DE0u: goto label_7F1B7DE0;
    case 0x7F1B7DE4u: goto label_7F1B7DE4;
    case 0x7F1B7DE8u: goto label_7F1B7DE8;
    case 0x7F1B7DECu: goto label_7F1B7DEC;
    case 0x7F1B7DF0u: goto label_7F1B7DF0;
    case 0x7F1B7DF4u: goto label_7F1B7DF4;
    case 0x7F1B7DF8u: goto label_7F1B7DF8;
    case 0x7F1B7DFCu: goto label_7F1B7DFC;
    case 0x7F1B7E00u: goto label_7F1B7E00;
    case 0x7F1B7E04u: goto label_7F1B7E04;
    case 0x7F1B7E08u: goto label_7F1B7E08;
    case 0x7F1B7E0Cu: goto label_7F1B7E0C;
    case 0x7F1B7E10u: goto label_7F1B7E10;
    case 0x7F1B7E14u: goto label_7F1B7E14;
    case 0x7F1B7E18u: goto label_7F1B7E18;
    case 0x7F1B7E1Cu: goto label_7F1B7E1C;
    case 0x7F1B7E20u: goto label_7F1B7E20;
    case 0x7F1B7E24u: goto label_7F1B7E24;
    case 0x7F1B7E28u: goto label_7F1B7E28;
    case 0x7F1B7E2Cu: goto label_7F1B7E2C;
    case 0x7F1B7E30u: goto label_7F1B7E30;
    case 0x7F1B7E34u: goto label_7F1B7E34;
    case 0x7F1B7E38u: goto label_7F1B7E38;
    case 0x7F1B7E3Cu: goto label_7F1B7E3C;
    case 0x7F1B7E40u: goto label_7F1B7E40;
    case 0x7F1B7E44u: goto label_7F1B7E44;
    case 0x7F1B7E48u: goto label_7F1B7E48;
    case 0x7F1B7E4Cu: goto label_7F1B7E4C;
    case 0x7F1B7E50u: goto label_7F1B7E50;
    case 0x7F1B7E54u: goto label_7F1B7E54;
    case 0x7F1B7E58u: goto label_7F1B7E58;
    case 0x7F1B7E5Cu: goto label_7F1B7E5C;
    case 0x7F1B7E60u: goto label_7F1B7E60;
    case 0x7F1B7E64u: goto label_7F1B7E64;
    case 0x7F1B7E68u: goto label_7F1B7E68;
    case 0x7F1B7E6Cu: goto label_7F1B7E6C;
    case 0x7F1B7E70u: goto label_7F1B7E70;
    case 0x7F1B7E74u: goto label_7F1B7E74;
    case 0x7F1B7E78u: goto label_7F1B7E78;
    case 0x7F1B7E7Cu: goto label_7F1B7E7C;
    case 0x7F1B7E80u: goto label_7F1B7E80;
    case 0x7F1B7E84u: goto label_7F1B7E84;
    case 0x7F1B7E88u: goto label_7F1B7E88;
    case 0x7F1B7E8Cu: goto label_7F1B7E8C;
    case 0x7F1B7E90u: goto label_7F1B7E90;
    case 0x7F1B7E94u: goto label_7F1B7E94;
    case 0x7F1B7E98u: goto label_7F1B7E98;
    case 0x7F1B7E9Cu: goto label_7F1B7E9C;
    case 0x7F1B7EA0u: goto label_7F1B7EA0;
    case 0x7F1B7EA4u: goto label_7F1B7EA4;
    case 0x7F1B7EA8u: goto label_7F1B7EA8;
    case 0x7F1B7EACu: goto label_7F1B7EAC;
    case 0x7F1B7EB0u: goto label_7F1B7EB0;
    case 0x7F1B7EB4u: goto label_7F1B7EB4;
    case 0x7F1B7EB8u: goto label_7F1B7EB8;
    case 0x7F1B7EBCu: goto label_7F1B7EBC;
    case 0x7F1B7EC0u: goto label_7F1B7EC0;
    case 0x7F1B7EC4u: goto label_7F1B7EC4;
    case 0x7F1B7EC8u: goto label_7F1B7EC8;
    case 0x7F1B7ECCu: goto label_7F1B7ECC;
    case 0x7F1B7ED0u: goto label_7F1B7ED0;
    case 0x7F1B7ED4u: goto label_7F1B7ED4;
    case 0x7F1B7ED8u: goto label_7F1B7ED8;
    case 0x7F1B7EDCu: goto label_7F1B7EDC;
    case 0x7F1B7EE0u: goto label_7F1B7EE0;
    case 0x7F1B7EE4u: goto label_7F1B7EE4;
    case 0x7F1B7EE8u: goto label_7F1B7EE8;
    case 0x7F1B7EECu: goto label_7F1B7EEC;
    case 0x7F1B7EF0u: goto label_7F1B7EF0;
    case 0x7F1B7EF4u: goto label_7F1B7EF4;
    case 0x7F1B7EF8u: goto label_7F1B7EF8;
    case 0x7F1B7EFCu: goto label_7F1B7EFC;
    case 0x7F1B7F00u: goto label_7F1B7F00;
    case 0x7F1B7F04u: goto label_7F1B7F04;
    case 0x7F1B7F08u: goto label_7F1B7F08;
    case 0x7F1B7F0Cu: goto label_7F1B7F0C;
    case 0x7F1B7F10u: goto label_7F1B7F10;
    case 0x7F1B7F14u: goto label_7F1B7F14;
    case 0x7F1B7F18u: goto label_7F1B7F18;
    case 0x7F1B7F1Cu: goto label_7F1B7F1C;
    case 0x7F1B7F20u: goto label_7F1B7F20;
    case 0x7F1B7F24u: goto label_7F1B7F24;
    case 0x7F1B7F28u: goto label_7F1B7F28;
    case 0x7F1B7F2Cu: goto label_7F1B7F2C;
    case 0x7F1B7F30u: goto label_7F1B7F30;
    case 0x7F1B7F34u: goto label_7F1B7F34;
    case 0x7F1B7F38u: goto label_7F1B7F38;
    case 0x7F1B7F3Cu: goto label_7F1B7F3C;
    case 0x7F1B7F40u: goto label_7F1B7F40;
    case 0x7F1B7F44u: goto label_7F1B7F44;
    case 0x7F1B7F48u: goto label_7F1B7F48;
    case 0x7F1B7F4Cu: goto label_7F1B7F4C;
    case 0x7F1B7F50u: goto label_7F1B7F50;
    case 0x7F1B7F54u: goto label_7F1B7F54;
    case 0x7F1B7F58u: goto label_7F1B7F58;
    case 0x7F1B7F5Cu: goto label_7F1B7F5C;
    case 0x7F1B7F60u: goto label_7F1B7F60;
    case 0x7F1B7F64u: goto label_7F1B7F64;
    case 0x7F1B7F68u: goto label_7F1B7F68;
    case 0x7F1B7F6Cu: goto label_7F1B7F6C;
    case 0x7F1B7F70u: goto label_7F1B7F70;
    case 0x7F1B7F74u: goto label_7F1B7F74;
    case 0x7F1B7F78u: goto label_7F1B7F78;
    case 0x7F1B7F7Cu: goto label_7F1B7F7C;
    case 0x7F1B7F80u: goto label_7F1B7F80;
    case 0x7F1B7F84u: goto label_7F1B7F84;
    case 0x7F1B7F88u: goto label_7F1B7F88;
    case 0x7F1B7F8Cu: goto label_7F1B7F8C;
    case 0x7F1B7F90u: goto label_7F1B7F90;
    case 0x7F1B7F94u: goto label_7F1B7F94;
    case 0x7F1B7F98u: goto label_7F1B7F98;
    case 0x7F1B7F9Cu: goto label_7F1B7F9C;
    case 0x7F1B7FA0u: goto label_7F1B7FA0;
    case 0x7F1B7FA4u: goto label_7F1B7FA4;
    case 0x7F1B7FA8u: goto label_7F1B7FA8;
    case 0x7F1B7FACu: goto label_7F1B7FAC;
    case 0x7F1B7FB0u: goto label_7F1B7FB0;
    case 0x7F1B7FB4u: goto label_7F1B7FB4;
    case 0x7F1B7FB8u: goto label_7F1B7FB8;
    case 0x7F1B7FBCu: goto label_7F1B7FBC;
    case 0x7F1B7FC0u: goto label_7F1B7FC0;
    case 0x7F1B7FC4u: goto label_7F1B7FC4;
    case 0x7F1B7FC8u: goto label_7F1B7FC8;
    case 0x7F1B7FCCu: goto label_7F1B7FCC;
    case 0x7F1B7FD0u: goto label_7F1B7FD0;
    case 0x7F1B7FD4u: goto label_7F1B7FD4;
    case 0x7F1B7FD8u: goto label_7F1B7FD8;
    case 0x7F1B7FDCu: goto label_7F1B7FDC;
    case 0x7F1B7FE0u: goto label_7F1B7FE0;
    case 0x7F1B7FE4u: goto label_7F1B7FE4;
    case 0x7F1B7FE8u: goto label_7F1B7FE8;
    case 0x7F1B7FECu: goto label_7F1B7FEC;
    case 0x7F1B7FF0u: goto label_7F1B7FF0;
    case 0x7F1B7FF4u: goto label_7F1B7FF4;
    case 0x7F1B7FF8u: goto label_7F1B7FF8;
    case 0x7F1B7FFCu: goto label_7F1B7FFC;
    case 0x7F1B8000u: goto label_7F1B8000;
    case 0x7F1B8004u: goto label_7F1B8004;
    case 0x7F1B8008u: goto label_7F1B8008;
    case 0x7F1B800Cu: goto label_7F1B800C;
    case 0x7F1B8010u: goto label_7F1B8010;
    case 0x7F1B8014u: goto label_7F1B8014;
    case 0x7F1B8018u: goto label_7F1B8018;
    case 0x7F1B801Cu: goto label_7F1B801C;
    case 0x7F1B8020u: goto label_7F1B8020;
    case 0x7F1B8024u: goto label_7F1B8024;
    case 0x7F1B8028u: goto label_7F1B8028;
    case 0x7F1B802Cu: goto label_7F1B802C;
    case 0x7F1B8030u: goto label_7F1B8030;
    case 0x7F1B8034u: goto label_7F1B8034;
    case 0x7F1B8038u: goto label_7F1B8038;
    case 0x7F1B803Cu: goto label_7F1B803C;
    case 0x7F1B8040u: goto label_7F1B8040;
    case 0x7F1B8044u: goto label_7F1B8044;
    case 0x7F1B8048u: goto label_7F1B8048;
    case 0x7F1B804Cu: goto label_7F1B804C;
    case 0x7F1B8050u: goto label_7F1B8050;
    case 0x7F1B8054u: goto label_7F1B8054;
    case 0x7F1B8058u: goto label_7F1B8058;
    case 0x7F1B805Cu: goto label_7F1B805C;
    case 0x7F1B8060u: goto label_7F1B8060;
    case 0x7F1B8064u: goto label_7F1B8064;
    case 0x7F1B8068u: goto label_7F1B8068;
    case 0x7F1B806Cu: goto label_7F1B806C;
    case 0x7F1B8070u: goto label_7F1B8070;
    case 0x7F1B8074u: goto label_7F1B8074;
    case 0x7F1B8078u: goto label_7F1B8078;
    case 0x7F1B807Cu: goto label_7F1B807C;
    case 0x7F1B8080u: goto label_7F1B8080;
    case 0x7F1B8084u: goto label_7F1B8084;
    case 0x7F1B8088u: goto label_7F1B8088;
    case 0x7F1B808Cu: goto label_7F1B808C;
    case 0x7F1B8090u: goto label_7F1B8090;
    case 0x7F1B8094u: goto label_7F1B8094;
    case 0x7F1B8098u: goto label_7F1B8098;
    case 0x7F1B809Cu: goto label_7F1B809C;
    case 0x7F1B80A0u: goto label_7F1B80A0;
    case 0x7F1B80A4u: goto label_7F1B80A4;
    case 0x7F1B80A8u: goto label_7F1B80A8;
    case 0x7F1B80ACu: goto label_7F1B80AC;
    case 0x7F1B80B0u: goto label_7F1B80B0;
    case 0x7F1B80B4u: goto label_7F1B80B4;
    case 0x7F1B80B8u: goto label_7F1B80B8;
    case 0x7F1B80BCu: goto label_7F1B80BC;
    case 0x7F1B80C0u: goto label_7F1B80C0;
    case 0x7F1B80C4u: goto label_7F1B80C4;
    case 0x7F1B80C8u: goto label_7F1B80C8;
    case 0x7F1B80CCu: goto label_7F1B80CC;
    case 0x7F1B80D0u: goto label_7F1B80D0;
    case 0x7F1B80D4u: goto label_7F1B80D4;
    case 0x7F1B80D8u: goto label_7F1B80D8;
    case 0x7F1B80DCu: goto label_7F1B80DC;
    case 0x7F1B80E0u: goto label_7F1B80E0;
    case 0x7F1B80E4u: goto label_7F1B80E4;
    case 0x7F1B80E8u: goto label_7F1B80E8;
    default: return;
    }
label_7F1B40EC:
    ctx->pc = 0x7F1B40ECu;
    ctx->downcount -= 2;
    // 7F1B40EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B40F0:
    ctx->pc = 0x7F1B40F0u;
    // 7F1B40F0: bl      0x7F023FEC
    {
            ctx->lr = 0x7F1B40F4u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F1B40F4:
    ctx->pc = 0x7F1B40F4u;
    ctx->downcount -= 8;
    // 7F1B40F4: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B40F8:
    ctx->pc = 0x7F1B40F8u;
    // 7F1B40F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B40FC:
    ctx->pc = 0x7F1B40FCu;
    // 7F1B40FC: oris    r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | (0x0100u << 16);

label_7F1B4100:
    ctx->pc = 0x7F1B4100u;
    // 7F1B4100: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4104:
    ctx->pc = 0x7F1B4104u;
    // 7F1B4104: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B4108:
    ctx->pc = 0x7F1B4108u;
    // 7F1B4108: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B410C:
    ctx->pc = 0x7F1B410Cu;
    // 7F1B410C: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4110:
    ctx->pc = 0x7F1B4110u;
    // 7F1B4110: bl      0x7F1B3E28
    {
            ctx->lr = 0x7F1B4114u;
            ctx->pc = 0x7F1B3E28u;
            return;
    }

label_7F1B4114:
    ctx->pc = 0x7F1B4114u;
    ctx->downcount -= 21;
    // 7F1B4114: lwz     r4, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4118:
    ctx->pc = 0x7F1B4118u;
    // 7F1B4118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B411C:
    ctx->pc = 0x7F1B411Cu;
    // 7F1B411C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4120:
    ctx->pc = 0x7F1B4120u;
    // 7F1B4120: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1B4124:
    ctx->pc = 0x7F1B4124u;
    // 7F1B4124: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4128:
    ctx->pc = 0x7F1B4128u;
    // 7F1B4128: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B412C:
    ctx->pc = 0x7F1B412Cu;
    // 7F1B412C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4130:
    ctx->pc = 0x7F1B4130u;
    // 7F1B4130: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4134:
    ctx->pc = 0x7F1B4134u;
    // 7F1B4134: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B4138:
    ctx->pc = 0x7F1B4138u;
    // 7F1B4138: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B413C:
    ctx->pc = 0x7F1B413Cu;
    ctx->downcount -= 2;
    // 7F1B413C: cmpwi   r6, 0
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

label_7F1B4140:
    ctx->pc = 0x7F1B4140u;
    // 7F1B4140: bc    4, 2, 0x7F1B4148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4148;
        }
    }

label_7F1B4144:
    ctx->pc = 0x7F1B4144u;
    ctx->downcount -= 1;
    // 7F1B4144: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1B4148:
    ctx->pc = 0x7F1B4148u;
    ctx->downcount -= 6;
    // 7F1B4148: stw     r4, 632(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B414C:
    ctx->pc = 0x7F1B414Cu;
    // 7F1B414C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B4150:
    ctx->pc = 0x7F1B4150u;
    // 7F1B4150: stw     r5, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B4154:
    ctx->pc = 0x7F1B4154u;
    // 7F1B4154: stw     r6, 648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(648);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B4158:
    ctx->pc = 0x7F1B4158u;
    // 7F1B4158: stw     r0, 644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B415C:
    ctx->pc = 0x7F1B415Cu;
    // 7F1B415C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4160:
    ctx->pc = 0x7F1B4160u;
    ctx->downcount -= 5;
    // 7F1B4160: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4164:
    ctx->pc = 0x7F1B4164u;
    // 7F1B4164: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4168:
    ctx->pc = 0x7F1B4168u;
    // 7F1B4168: cmpwi   r4, 1
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

label_7F1B416C:
    ctx->pc = 0x7F1B416Cu;
    // 7F1B416C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4170:
    ctx->pc = 0x7F1B4170u;
    // 7F1B4170: bc    12, 2, 0x7F1B41AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B41AC;
        }
    }

label_7F1B4174:
    ctx->pc = 0x7F1B4174u;
    ctx->downcount -= 1;
    // 7F1B4174: bc    4, 0, 0x7F1B4184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4184;
        }
    }

label_7F1B4178:
    ctx->pc = 0x7F1B4178u;
    ctx->downcount -= 2;
    // 7F1B4178: cmpwi   r4, 0
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

label_7F1B417C:
    ctx->pc = 0x7F1B417Cu;
    // 7F1B417C: bc    4, 0, 0x7F1B4190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4190;
        }
    }

label_7F1B4180:
    ctx->pc = 0x7F1B4180u;
    ctx->downcount -= 1;
    // 7F1B4180: b       0x7F1B4264
    {
            goto label_7F1B4264;
    }

label_7F1B4184:
    ctx->pc = 0x7F1B4184u;
    ctx->downcount -= 2;
    // 7F1B4184: cmpwi   r4, 3
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

label_7F1B4188:
    ctx->pc = 0x7F1B4188u;
    // 7F1B4188: bc    4, 0, 0x7F1B4264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4264;
        }
    }

label_7F1B418C:
    ctx->pc = 0x7F1B418Cu;
    ctx->downcount -= 1;
    // 7F1B418C: b       0x7F1B41D4
    {
            goto label_7F1B41D4;
    }

label_7F1B4190:
    ctx->pc = 0x7F1B4190u;
    ctx->downcount -= 3;
    // 7F1B4190: lwz     r3, 576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(576);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4194:
    ctx->pc = 0x7F1B4194u;
    // 7F1B4194: cmplwi  r3, 0x0000
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

label_7F1B4198:
    ctx->pc = 0x7F1B4198u;
    // 7F1B4198: bc    12, 2, 0x7F1B426C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B426C;
        }
    }

label_7F1B419C:
    ctx->pc = 0x7F1B419Cu;
    ctx->downcount -= 4;
    // 7F1B419C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B41A0:
    ctx->pc = 0x7F1B41A0u;
    // 7F1B41A0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1B41A4:
    ctx->pc = 0x7F1B41A4u;
    // 7F1B41A4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B41A8:
    ctx->pc = 0x7F1B41A8u;
    // 7F1B41A8: b       0x7F1B426C
    {
            goto label_7F1B426C;
    }

label_7F1B41AC:
    ctx->pc = 0x7F1B41ACu;
    ctx->downcount -= 3;
    // 7F1B41AC: lwz     r5, 576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(576);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B41B0:
    ctx->pc = 0x7F1B41B0u;
    // 7F1B41B0: cmplwi  r5, 0x0000
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

label_7F1B41B4:
    ctx->pc = 0x7F1B41B4u;
    // 7F1B41B4: bc    12, 2, 0x7F1B426C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B426C;
        }
    }

label_7F1B41B8:
    ctx->pc = 0x7F1B41B8u;
    ctx->downcount -= 6;
    // 7F1B41B8: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B41BC:
    ctx->pc = 0x7F1B41BCu;
    // 7F1B41BC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B41C0:
    ctx->pc = 0x7F1B41C0u;
    // 7F1B41C0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1B41C4:
    ctx->pc = 0x7F1B41C4u;
    // 7F1B41C4: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B41C8:
    ctx->pc = 0x7F1B41C8u;
    // 7F1B41C8: lwz     r3, 576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(576);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B41CC:
    ctx->pc = 0x7F1B41CCu;
    // 7F1B41CC: bl      0x7F3AB6A0
    {
            ctx->lr = 0x7F1B41D0u;
            ctx->pc = 0x7F3AB6A0u;
            return;
    }

label_7F1B41D0:
    ctx->pc = 0x7F1B41D0u;
    ctx->downcount -= 1;
    // 7F1B41D0: b       0x7F1B426C
    {
            goto label_7F1B426C;
    }

label_7F1B41D4:
    ctx->pc = 0x7F1B41D4u;
    ctx->downcount -= 54;
    // 7F1B41D4: lwz     r7, 644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(644);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B41D8:
    ctx->pc = 0x7F1B41D8u;
    // 7F1B41D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B41DC:
    ctx->pc = 0x7F1B41DCu;
    // 7F1B41DC: lwz     r6, 648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(648);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B41E0:
    ctx->pc = 0x7F1B41E0u;
    // 7F1B41E0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B41E4:
    ctx->pc = 0x7F1B41E4u;
    // 7F1B41E4: lwz     r8, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1B41E8:
    ctx->pc = 0x7F1B41E8u;
    // 7F1B41E8: divw   r6, r7, r6
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B41EC:
    ctx->pc = 0x7F1B41ECu;
    // 7F1B41EC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B41F0:
    ctx->pc = 0x7F1B41F0u;
    // 7F1B41F0: rlwinm r8, r8, 1, 0, 30
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 1u) & 0xFFFFFFFEu;
    }

label_7F1B41F4:
    ctx->pc = 0x7F1B41F4u;
    // 7F1B41F4: lfd     f1, 7176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B41F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B41F8:
    ctx->pc = 0x7F1B41F8u;
    // 7F1B41F8: cmpwi   r8, 255
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B41FC:
    ctx->pc = 0x7F1B41FCu;
    // 7F1B41FC: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1B4200:
    ctx->pc = 0x7F1B4200u;
    // 7F1B4200: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4204:
    ctx->pc = 0x7F1B4204u;
    // 7F1B4204: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4208:
    ctx->pc = 0x7F1B4208u;
    // 7F1B4208: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4208u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F1B420C:
    ctx->pc = 0x7F1B420Cu;
    // 7F1B420C: bc    4, 1, 0x7F1B4214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4214;
        }
    }

label_7F1B4210:
    ctx->pc = 0x7F1B4210u;
    ctx->downcount -= 1;
    // 7F1B4210: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B4214:
    ctx->pc = 0x7F1B4214u;
    ctx->downcount -= 19;
    // 7F1B4214: lwz     r7, 632(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(632);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B4218:
    ctx->pc = 0x7F1B4218u;
    // 7F1B4218: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B421C:
    ctx->pc = 0x7F1B421Cu;
    // 7F1B421C: lwz     r6, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4220:
    ctx->pc = 0x7F1B4220u;
    // 7F1B4220: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B4224:
    ctx->pc = 0x7F1B4224u;
    // 7F1B4224: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4228:
    ctx->pc = 0x7F1B4228u;
    // 7F1B4228: subf   r0, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1B422C:
    ctx->pc = 0x7F1B422Cu;
    // 7F1B422C: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4230:
    ctx->pc = 0x7F1B4230u;
    // 7F1B4230: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1B4234:
    ctx->pc = 0x7F1B4234u;
    // 7F1B4234: lfd     f1, 7176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4234u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4238:
    ctx->pc = 0x7F1B4238u;
    // 7F1B4238: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B423C:
    ctx->pc = 0x7F1B423Cu;
    // 7F1B423C: or   r5, r8, r8
    {
        ctx->gpr[5] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1B4240:
    ctx->pc = 0x7F1B4240u;
    // 7F1B4240: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4244:
    ctx->pc = 0x7F1B4244u;
    // 7F1B4244: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4244u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1B4248:
    ctx->pc = 0x7F1B4248u;
    // 7F1B4248: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4248u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1B424C:
    ctx->pc = 0x7F1B424Cu;
    // 7F1B424C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B424Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B4250:
    ctx->pc = 0x7F1B4250u;
    // 7F1B4250: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B4254:
    ctx->pc = 0x7F1B4254u;
    // 7F1B4254: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4258:
    ctx->pc = 0x7F1B4258u;
    // 7F1B4258: add   r4, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1B425C:
    ctx->pc = 0x7F1B425Cu;
    // 7F1B425C: bl      0x7F1B413C
    {
            ctx->lr = 0x7F1B4260u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B413Cu;
                return;
            }
            goto label_7F1B413C;
    }

label_7F1B4260:
    ctx->pc = 0x7F1B4260u;
    ctx->downcount -= 1;
    // 7F1B4260: b       0x7F1B426C
    {
            goto label_7F1B426C;
    }

label_7F1B4264:
    ctx->pc = 0x7F1B4264u;
    ctx->downcount -= 1;
    // 7F1B4264: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B4268u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B4268:
    ctx->pc = 0x7F1B4268u;
    ctx->downcount -= 1;
    // 7F1B4268: b       0x7F1B4270
    {
            goto label_7F1B4270;
    }

label_7F1B426C:
    ctx->pc = 0x7F1B426Cu;
    ctx->downcount -= 1;
    // 7F1B426C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B4270:
    ctx->pc = 0x7F1B4270u;
    ctx->downcount -= 5;
    // 7F1B4270: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4274:
    ctx->pc = 0x7F1B4274u;
    // 7F1B4274: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4278:
    ctx->pc = 0x7F1B4278u;
    // 7F1B4278: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B427C:
    ctx->pc = 0x7F1B427Cu;
    // 7F1B427C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4280:
    ctx->pc = 0x7F1B4280u;
    ctx->downcount -= 23;
    // 7F1B4280: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4284:
    ctx->pc = 0x7F1B4284u;
    // 7F1B4284: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4288:
    ctx->pc = 0x7F1B4288u;
    // 7F1B4288: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1B428C:
    ctx->pc = 0x7F1B428Cu;
    // 7F1B428C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4290:
    ctx->pc = 0x7F1B4290u;
    // 7F1B4290: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B4294:
    ctx->pc = 0x7F1B4294u;
    // 7F1B4294: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4298:
    ctx->pc = 0x7F1B4298u;
    // 7F1B4298: addi    r3, r6, 13880
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13880);

label_7F1B429C:
    ctx->pc = 0x7F1B429Cu;
    // 7F1B429C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B42A0:
    ctx->pc = 0x7F1B42A0u;
    // 7F1B42A0: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B42A4:
    ctx->pc = 0x7F1B42A4u;
    // 7F1B42A4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B42A8:
    ctx->pc = 0x7F1B42A8u;
    // 7F1B42A8: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B42AC:
    ctx->pc = 0x7F1B42ACu;
    // 7F1B42AC: rlwinm. r0, r0, 0, 28, 28
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

label_7F1B42B0:
    ctx->pc = 0x7F1B42B0u;
    // 7F1B42B0: bc    12, 2, 0x7F1B42CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B42CC;
        }
    }

label_7F1B42B4:
    ctx->pc = 0x7F1B42B4u;
    ctx->downcount -= 2;
    // 7F1B42B4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B42B8:
    ctx->pc = 0x7F1B42B8u;
    // 7F1B42B8: bl      0x7F1B4378
    {
            ctx->lr = 0x7F1B42BCu;
            goto label_7F1B4378;
    }

label_7F1B42BC:
    ctx->pc = 0x7F1B42BCu;
    ctx->downcount -= 2;
    // 7F1B42BC: rlwinm. r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B42C0:
    ctx->pc = 0x7F1B42C0u;
    // 7F1B42C0: bc    12, 2, 0x7F1B42CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B42CC;
        }
    }

label_7F1B42C4:
    ctx->pc = 0x7F1B42C4u;
    ctx->downcount -= 2;
    // 7F1B42C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B42C8:
    ctx->pc = 0x7F1B42C8u;
    // 7F1B42C8: b       0x7F1B4364
    {
            goto label_7F1B4364;
    }

label_7F1B42CC:
    ctx->pc = 0x7F1B42CCu;
    ctx->downcount -= 5;
    // 7F1B42CC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1B42D0:
    ctx->pc = 0x7F1B42D0u;
    // 7F1B42D0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B42D4:
    ctx->pc = 0x7F1B42D4u;
    // 7F1B42D4: li      r5, 656
    ctx->gpr[5] = (u32)(s32)(656);

label_7F1B42D8:
    ctx->pc = 0x7F1B42D8u;
    // 7F1B42D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B42DC:
    ctx->pc = 0x7F1B42DCu;
    // 7F1B42DC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B42E0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B42E0:
    ctx->pc = 0x7F1B42E0u;
    ctx->downcount -= 2;
    // 7F1B42E0: or.   r29, r3, r3
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

label_7F1B42E4:
    ctx->pc = 0x7F1B42E4u;
    // 7F1B42E4: bc    12, 2, 0x7F1B4360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4360;
        }
    }

label_7F1B42E8:
    ctx->pc = 0x7F1B42E8u;
    ctx->downcount -= 5;
    // 7F1B42E8: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B42EC:
    ctx->pc = 0x7F1B42ECu;
    // 7F1B42EC: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B42F0:
    ctx->pc = 0x7F1B42F0u;
    // 7F1B42F0: addi    r4, r4, 15912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15912);

label_7F1B42F4:
    ctx->pc = 0x7F1B42F4u;
    // 7F1B42F4: addi    r5, r5, 16348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16348);

label_7F1B42F8:
    ctx->pc = 0x7F1B42F8u;
    // 7F1B42F8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B42FCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B42FC:
    ctx->pc = 0x7F1B42FCu;
    ctx->downcount -= 15;
    // 7F1B42FC: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4300:
    ctx->pc = 0x7F1B4300u;
    // 7F1B4300: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B4304:
    ctx->pc = 0x7F1B4304u;
    // 7F1B4304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B4308:
    ctx->pc = 0x7F1B4308u;
    // 7F1B4308: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B430C:
    ctx->pc = 0x7F1B430Cu;
    // 7F1B430C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B4310:
    ctx->pc = 0x7F1B4310u;
    // 7F1B4310: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B4314:
    ctx->pc = 0x7F1B4314u;
    // 7F1B4314: stw     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B4318:
    ctx->pc = 0x7F1B4318u;
    // 7F1B4318: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B431C:
    ctx->pc = 0x7F1B431Cu;
    // 7F1B431C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4320:
    ctx->pc = 0x7F1B4320u;
    // 7F1B4320: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B4324:
    ctx->pc = 0x7F1B4324u;
    // 7F1B4324: stw     r7, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B4328:
    ctx->pc = 0x7F1B4328u;
    // 7F1B4328: stw     r7, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B432C:
    ctx->pc = 0x7F1B432Cu;
    // 7F1B432C: stw     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B4330:
    ctx->pc = 0x7F1B4330u;
    // 7F1B4330: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4334:
    ctx->pc = 0x7F1B4334u;
    // 7F1B4334: bl      0x7F1B401C
    {
            ctx->lr = 0x7F1B4338u;
            ctx->pc = 0x7F1B401Cu;
            return;
    }

label_7F1B4338:
    ctx->pc = 0x7F1B4338u;
    ctx->downcount -= 2;
    // 7F1B4338: cmpwi   r3, 0
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

label_7F1B433C:
    ctx->pc = 0x7F1B433Cu;
    // 7F1B433C: bc    4, 0, 0x7F1B4350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4350;
        }
    }

label_7F1B4340:
    ctx->pc = 0x7F1B4340u;
    ctx->downcount -= 2;
    // 7F1B4340: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B4344:
    ctx->pc = 0x7F1B4344u;
    // 7F1B4344: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B4348u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B4348:
    ctx->pc = 0x7F1B4348u;
    ctx->downcount -= 2;
    // 7F1B4348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B434C:
    ctx->pc = 0x7F1B434Cu;
    // 7F1B434C: b       0x7F1B4364
    {
            goto label_7F1B4364;
    }

label_7F1B4350:
    ctx->pc = 0x7F1B4350u;
    ctx->downcount -= 4;
    // 7F1B4350: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B4354:
    ctx->pc = 0x7F1B4354u;
    // 7F1B4354: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B4358:
    ctx->pc = 0x7F1B4358u;
    // 7F1B4358: addi    r4, r4, 16736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16736);

label_7F1B435C:
    ctx->pc = 0x7F1B435Cu;
    // 7F1B435C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B4360u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B4360:
    ctx->pc = 0x7F1B4360u;
    ctx->downcount -= 1;
    // 7F1B4360: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B4364:
    ctx->pc = 0x7F1B4364u;
    ctx->downcount -= 16;
    // 7F1B4364: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B4368:
    ctx->pc = 0x7F1B4368u;
    // 7F1B4368: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B436C:
    ctx->pc = 0x7F1B436Cu;
    // 7F1B436C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4370:
    ctx->pc = 0x7F1B4370u;
    // 7F1B4370: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B4374:
    ctx->pc = 0x7F1B4374u;
    // 7F1B4374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4378:
    ctx->pc = 0x7F1B4378u;
    ctx->downcount -= 4;
    // 7F1B4378: lis     r6, 160
    ctx->gpr[6] = ((u32)(s32)(160) << 16);

label_7F1B437C:
    ctx->pc = 0x7F1B437Cu;
    // 7F1B437C: addi    r0, r6, 20869
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(20869);

label_7F1B4380:
    ctx->pc = 0x7F1B4380u;
    // 7F1B4380: cmpw    r3, r0
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

label_7F1B4384:
    ctx->pc = 0x7F1B4384u;
    // 7F1B4384: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4388:
    ctx->pc = 0x7F1B4388u;
    ctx->downcount -= 1;
    // 7F1B4388: bc    4, 0, 0x7F1B4438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4438;
        }
    }

label_7F1B438C:
    ctx->pc = 0x7F1B438Cu;
    ctx->downcount -= 4;
    // 7F1B438C: lis     r4, 35
    ctx->gpr[4] = ((u32)(s32)(35) << 16);

label_7F1B4390:
    ctx->pc = 0x7F1B4390u;
    // 7F1B4390: addi    r0, r4, 8402
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8402);

label_7F1B4394:
    ctx->pc = 0x7F1B4394u;
    // 7F1B4394: cmpw    r3, r0
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

label_7F1B4398:
    ctx->pc = 0x7F1B4398u;
    // 7F1B4398: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B439C:
    ctx->pc = 0x7F1B439Cu;
    ctx->downcount -= 1;
    // 7F1B439C: bc    4, 0, 0x7F1B43EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B43EC;
        }
    }

label_7F1B43A0:
    ctx->pc = 0x7F1B43A0u;
    ctx->downcount -= 4;
    // 7F1B43A0: lis     r4, 10
    ctx->gpr[4] = ((u32)(s32)(10) << 16);

label_7F1B43A4:
    ctx->pc = 0x7F1B43A4u;
    // 7F1B43A4: addi    r0, r4, 12602
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12602);

label_7F1B43A8:
    ctx->pc = 0x7F1B43A8u;
    // 7F1B43A8: cmpw    r3, r0
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

label_7F1B43AC:
    ctx->pc = 0x7F1B43ACu;
    // 7F1B43AC: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B43B0:
    ctx->pc = 0x7F1B43B0u;
    ctx->downcount -= 1;
    // 7F1B43B0: bc    4, 0, 0x7F1B43D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B43D8;
        }
    }

label_7F1B43B4:
    ctx->pc = 0x7F1B43B4u;
    ctx->downcount -= 3;
    // 7F1B43B4: addi    r0, r4, 12598
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12598);

label_7F1B43B8:
    ctx->pc = 0x7F1B43B8u;
    // 7F1B43B8: cmpw    r3, r0
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

label_7F1B43BC:
    ctx->pc = 0x7F1B43BCu;
    // 7F1B43BC: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B43C0:
    ctx->pc = 0x7F1B43C0u;
    ctx->downcount -= 1;
    // 7F1B43C0: bc    4, 0, 0x7F1B44E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44E0;
        }
    }

label_7F1B43C4:
    ctx->pc = 0x7F1B43C4u;
    ctx->downcount -= 4;
    // 7F1B43C4: lis     r4, 5
    ctx->gpr[4] = ((u32)(s32)(5) << 16);

label_7F1B43C8:
    ctx->pc = 0x7F1B43C8u;
    // 7F1B43C8: addi    r0, r4, 9928
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9928);

label_7F1B43CC:
    ctx->pc = 0x7F1B43CCu;
    // 7F1B43CC: cmpw    r3, r0
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

label_7F1B43D0:
    ctx->pc = 0x7F1B43D0u;
    // 7F1B43D0: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B43D4:
    ctx->pc = 0x7F1B43D4u;
    ctx->downcount -= 1;
    // 7F1B43D4: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B43D8:
    ctx->pc = 0x7F1B43D8u;
    ctx->downcount -= 4;
    // 7F1B43D8: lis     r4, 21
    ctx->gpr[4] = ((u32)(s32)(21) << 16);

label_7F1B43DC:
    ctx->pc = 0x7F1B43DCu;
    // 7F1B43DC: addi    r0, r4, -4463
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4463);

label_7F1B43E0:
    ctx->pc = 0x7F1B43E0u;
    // 7F1B43E0: cmpw    r3, r0
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

label_7F1B43E4:
    ctx->pc = 0x7F1B43E4u;
    // 7F1B43E4: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B43E8:
    ctx->pc = 0x7F1B43E8u;
    ctx->downcount -= 1;
    // 7F1B43E8: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B43EC:
    ctx->pc = 0x7F1B43ECu;
    ctx->downcount -= 4;
    // 7F1B43EC: lis     r4, 146
    ctx->gpr[4] = ((u32)(s32)(146) << 16);

label_7F1B43F0:
    ctx->pc = 0x7F1B43F0u;
    // 7F1B43F0: addi    r0, r4, 1190
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1190);

label_7F1B43F4:
    ctx->pc = 0x7F1B43F4u;
    // 7F1B43F4: cmpw    r3, r0
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

label_7F1B43F8:
    ctx->pc = 0x7F1B43F8u;
    // 7F1B43F8: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B43FC:
    ctx->pc = 0x7F1B43FCu;
    ctx->downcount -= 1;
    // 7F1B43FC: bc    4, 0, 0x7F1B4424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4424;
        }
    }

label_7F1B4400:
    ctx->pc = 0x7F1B4400u;
    ctx->downcount -= 4;
    // 7F1B4400: lis     r4, 83
    ctx->gpr[4] = ((u32)(s32)(83) << 16);

label_7F1B4404:
    ctx->pc = 0x7F1B4404u;
    // 7F1B4404: addi    r0, r4, -27672
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-27672);

label_7F1B4408:
    ctx->pc = 0x7F1B4408u;
    // 7F1B4408: cmpw    r3, r0
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

label_7F1B440C:
    ctx->pc = 0x7F1B440Cu;
    // 7F1B440C: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4410:
    ctx->pc = 0x7F1B4410u;
    ctx->downcount -= 1;
    // 7F1B4410: bc    4, 0, 0x7F1B44E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44E0;
        }
    }

label_7F1B4414:
    ctx->pc = 0x7F1B4414u;
    ctx->downcount -= 3;
    // 7F1B4414: addi    r0, r4, -27937
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-27937);

label_7F1B4418:
    ctx->pc = 0x7F1B4418u;
    // 7F1B4418: cmpw    r3, r0
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

label_7F1B441C:
    ctx->pc = 0x7F1B441Cu;
    // 7F1B441C: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4420:
    ctx->pc = 0x7F1B4420u;
    ctx->downcount -= 1;
    // 7F1B4420: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B4424:
    ctx->pc = 0x7F1B4424u;
    ctx->downcount -= 4;
    // 7F1B4424: lis     r4, 159
    ctx->gpr[4] = ((u32)(s32)(159) << 16);

label_7F1B4428:
    ctx->pc = 0x7F1B4428u;
    // 7F1B4428: addi    r0, r4, 9696
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9696);

label_7F1B442C:
    ctx->pc = 0x7F1B442Cu;
    // 7F1B442C: cmpw    r3, r0
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

label_7F1B4430:
    ctx->pc = 0x7F1B4430u;
    // 7F1B4430: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4434:
    ctx->pc = 0x7F1B4434u;
    ctx->downcount -= 1;
    // 7F1B4434: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B4438:
    ctx->pc = 0x7F1B4438u;
    ctx->downcount -= 4;
    // 7F1B4438: lis     r5, 180
    ctx->gpr[5] = ((u32)(s32)(180) << 16);

label_7F1B443C:
    ctx->pc = 0x7F1B443Cu;
    // 7F1B443C: addi    r0, r5, 6669
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(6669);

label_7F1B4440:
    ctx->pc = 0x7F1B4440u;
    // 7F1B4440: cmpw    r3, r0
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

label_7F1B4444:
    ctx->pc = 0x7F1B4444u;
    // 7F1B4444: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4448:
    ctx->pc = 0x7F1B4448u;
    ctx->downcount -= 1;
    // 7F1B4448: bc    4, 0, 0x7F1B44A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44A0;
        }
    }

label_7F1B444C:
    ctx->pc = 0x7F1B444Cu;
    ctx->downcount -= 4;
    // 7F1B444C: lis     r4, 166
    ctx->gpr[4] = ((u32)(s32)(166) << 16);

label_7F1B4450:
    ctx->pc = 0x7F1B4450u;
    // 7F1B4450: addi    r0, r4, -25964
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25964);

label_7F1B4454:
    ctx->pc = 0x7F1B4454u;
    // 7F1B4454: cmpw    r3, r0
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

label_7F1B4458:
    ctx->pc = 0x7F1B4458u;
    // 7F1B4458: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B445C:
    ctx->pc = 0x7F1B445Cu;
    ctx->downcount -= 1;
    // 7F1B445C: bc    4, 0, 0x7F1B4490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4490;
        }
    }

label_7F1B4460:
    ctx->pc = 0x7F1B4460u;
    ctx->downcount -= 4;
    // 7F1B4460: lis     r4, 165
    ctx->gpr[4] = ((u32)(s32)(165) << 16);

label_7F1B4464:
    ctx->pc = 0x7F1B4464u;
    // 7F1B4464: addi    r0, r4, 22612
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(22612);

label_7F1B4468:
    ctx->pc = 0x7F1B4468u;
    // 7F1B4468: cmpw    r3, r0
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

label_7F1B446C:
    ctx->pc = 0x7F1B446Cu;
    // 7F1B446C: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B4470:
    ctx->pc = 0x7F1B4470u;
    ctx->downcount -= 1;
    // 7F1B4470: bc    4, 0, 0x7F1B44E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44E0;
        }
    }

label_7F1B4474:
    ctx->pc = 0x7F1B4474u;
    ctx->downcount -= 3;
    // 7F1B4474: addi    r0, r6, 20873
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(20873);

label_7F1B4478:
    ctx->pc = 0x7F1B4478u;
    // 7F1B4478: cmpw    r3, r0
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

label_7F1B447C:
    ctx->pc = 0x7F1B447Cu;
    // 7F1B447C: bc    4, 0, 0x7F1B44E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44E0;
        }
    }

label_7F1B4480:
    ctx->pc = 0x7F1B4480u;
    ctx->downcount -= 3;
    // 7F1B4480: addi    r0, r6, 20871
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(20871);

label_7F1B4484:
    ctx->pc = 0x7F1B4484u;
    // 7F1B4484: cmpw    r3, r0
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

label_7F1B4488:
    ctx->pc = 0x7F1B4488u;
    // 7F1B4488: bc    4, 0, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B448C:
    ctx->pc = 0x7F1B448Cu;
    ctx->downcount -= 1;
    // 7F1B448C: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B4490:
    ctx->pc = 0x7F1B4490u;
    ctx->downcount -= 3;
    // 7F1B4490: addi    r0, r4, 8984
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8984);

label_7F1B4494:
    ctx->pc = 0x7F1B4494u;
    // 7F1B4494: cmpw    r3, r0
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

label_7F1B4498:
    ctx->pc = 0x7F1B4498u;
    // 7F1B4498: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B449C:
    ctx->pc = 0x7F1B449Cu;
    ctx->downcount -= 1;
    // 7F1B449C: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B44A0:
    ctx->pc = 0x7F1B44A0u;
    ctx->downcount -= 4;
    // 7F1B44A0: lis     r4, 183
    ctx->gpr[4] = ((u32)(s32)(183) << 16);

label_7F1B44A4:
    ctx->pc = 0x7F1B44A4u;
    // 7F1B44A4: addi    r0, r4, 17511
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(17511);

label_7F1B44A8:
    ctx->pc = 0x7F1B44A8u;
    // 7F1B44A8: cmpw    r3, r0
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

label_7F1B44AC:
    ctx->pc = 0x7F1B44ACu;
    // 7F1B44AC: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B44B0:
    ctx->pc = 0x7F1B44B0u;
    ctx->downcount -= 1;
    // 7F1B44B0: bc    4, 0, 0x7F1B44C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44C4;
        }
    }

label_7F1B44B4:
    ctx->pc = 0x7F1B44B4u;
    ctx->downcount -= 3;
    // 7F1B44B4: addi    r0, r5, 17511
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(17511);

label_7F1B44B8:
    ctx->pc = 0x7F1B44B8u;
    // 7F1B44B8: cmpw    r3, r0
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

label_7F1B44BC:
    ctx->pc = 0x7F1B44BCu;
    // 7F1B44BC: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B44C0:
    ctx->pc = 0x7F1B44C0u;
    ctx->downcount -= 1;
    // 7F1B44C0: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B44C4:
    ctx->pc = 0x7F1B44C4u;
    ctx->downcount -= 4;
    // 7F1B44C4: lis     r4, 200
    ctx->gpr[4] = ((u32)(s32)(200) << 16);

label_7F1B44C8:
    ctx->pc = 0x7F1B44C8u;
    // 7F1B44C8: addi    r0, r4, 30216
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(30216);

label_7F1B44CC:
    ctx->pc = 0x7F1B44CCu;
    // 7F1B44CC: cmpw    r3, r0
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

label_7F1B44D0:
    ctx->pc = 0x7F1B44D0u;
    // 7F1B44D0: bc    12, 2, 0x7F1B44D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B44D8;
        }
    }

label_7F1B44D4:
    ctx->pc = 0x7F1B44D4u;
    ctx->downcount -= 1;
    // 7F1B44D4: b       0x7F1B44E0
    {
            goto label_7F1B44E0;
    }

label_7F1B44D8:
    ctx->pc = 0x7F1B44D8u;
    ctx->downcount -= 2;
    // 7F1B44D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B44DC:
    ctx->pc = 0x7F1B44DCu;
    // 7F1B44DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B44E0:
    ctx->pc = 0x7F1B44E0u;
    ctx->downcount -= 2;
    // 7F1B44E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B44E4:
    ctx->pc = 0x7F1B44E4u;
    // 7F1B44E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B44E8:
    ctx->pc = 0x7F1B44E8u;
    ctx->downcount -= 18;
    // 7F1B44E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B44EC:
    ctx->pc = 0x7F1B44ECu;
    // 7F1B44EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B44F0:
    ctx->pc = 0x7F1B44F0u;
    // 7F1B44F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B44F4:
    ctx->pc = 0x7F1B44F4u;
    // 7F1B44F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B44F8:
    ctx->pc = 0x7F1B44F8u;
    // 7F1B44F8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B44FC:
    ctx->pc = 0x7F1B44FCu;
    // 7F1B44FC: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B4500:
    ctx->pc = 0x7F1B4500u;
    // 7F1B4500: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4504:
    ctx->pc = 0x7F1B4504u;
    // 7F1B4504: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B4508u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B4508:
    ctx->pc = 0x7F1B4508u;
    ctx->downcount -= 1;
    // 7F1B4508: bl      0x7F199494
    {
            ctx->lr = 0x7F1B450Cu;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B450C:
    ctx->pc = 0x7F1B450Cu;
    ctx->downcount -= 4;
    // 7F1B450C: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B4510:
    ctx->pc = 0x7F1B4510u;
    // 7F1B4510: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4514:
    ctx->pc = 0x7F1B4514u;
    // 7F1B4514: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4518:
    ctx->pc = 0x7F1B4518u;
    // 7F1B4518: bl      0x7F1B4280
    {
            ctx->lr = 0x7F1B451Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4280u;
                return;
            }
            goto label_7F1B4280;
    }

label_7F1B451C:
    ctx->pc = 0x7F1B451Cu;
    ctx->downcount -= 16;
    // 7F1B451C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B4520:
    ctx->pc = 0x7F1B4520u;
    // 7F1B4520: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4524:
    ctx->pc = 0x7F1B4524u;
    // 7F1B4524: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4528:
    ctx->pc = 0x7F1B4528u;
    // 7F1B4528: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B452C:
    ctx->pc = 0x7F1B452Cu;
    // 7F1B452C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4530:
    ctx->pc = 0x7F1B4530u;
    ctx->downcount -= 1;
    // 7F1B4530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4534:
    ctx->pc = 0x7F1B4534u;
    ctx->downcount -= 5;
    // 7F1B4534: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B4538:
    ctx->pc = 0x7F1B4538u;
    // 7F1B4538: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B453C:
    ctx->pc = 0x7F1B453Cu;
    // 7F1B453C: lfs     f0, 7184(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B453Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4540:
    ctx->pc = 0x7F1B4540u;
    // 7F1B4540: stfs     f0, -6704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4540u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6704);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4544:
    ctx->pc = 0x7F1B4544u;
    // 7F1B4544: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4548:
    ctx->pc = 0x7F1B4548u;
    ctx->downcount -= 2;
    // 7F1B4548: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B454C:
    ctx->pc = 0x7F1B454Cu;
    // 7F1B454C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4550:
    ctx->pc = 0x7F1B4550u;
    ctx->downcount -= 7;
    // 7F1B4550: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4554:
    ctx->pc = 0x7F1B4554u;
    // 7F1B4554: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4558:
    ctx->pc = 0x7F1B4558u;
    // 7F1B4558: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1B455C:
    ctx->pc = 0x7F1B455Cu;
    // 7F1B455C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4560:
    ctx->pc = 0x7F1B4560u;
    // 7F1B4560: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F1B4564:
    ctx->pc = 0x7F1B4564u;
    // 7F1B4564: cmpw    r4, r0
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

label_7F1B4568:
    ctx->pc = 0x7F1B4568u;
    // 7F1B4568: bc    12, 2, 0x7F1B4570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4570;
        }
    }

label_7F1B456C:
    ctx->pc = 0x7F1B456Cu;
    ctx->downcount -= 1;
    // 7F1B456C: b       0x7F1B45A4
    {
            goto label_7F1B45A4;
    }

label_7F1B4570:
    ctx->pc = 0x7F1B4570u;
    ctx->downcount -= 5;
    // 7F1B4570: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1B4574:
    ctx->pc = 0x7F1B4574u;
    // 7F1B4574: addi    r6, r3, 48
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1B4578:
    ctx->pc = 0x7F1B4578u;
    // 7F1B4578: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1B457C:
    ctx->pc = 0x7F1B457Cu;
    // 7F1B457C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B4580:
    loop_7F1B4580(ctx);
    if (ctx->pc == 0x7F1B4594u) goto label_7F1B4594;
    return;
label_7F1B4584:
    ctx->pc = 0x7F1B4584u;
    // 7F1B4584: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F1B4588:
    ctx->pc = 0x7F1B4588u;
    // 7F1B4588: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B458C:
    ctx->pc = 0x7F1B458Cu;
    // 7F1B458C: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F1B4590:
    // 7F1B4590: bc    16, 0, 0x7F1B4580
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4580u;
                return;
            }
            goto label_7F1B4580;
        }
    }

label_7F1B4594:
    ctx->pc = 0x7F1B4594u;
    ctx->downcount -= 4;
    // 7F1B4594: lfs     f0, 100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4594u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4598:
    ctx->pc = 0x7F1B4598u;
    // 7F1B4598: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B459C:
    ctx->pc = 0x7F1B459Cu;
    // 7F1B459C: stfs     f0, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B459Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B45A0:
    ctx->pc = 0x7F1B45A0u;
    // 7F1B45A0: b       0x7F1B45AC
    {
            goto label_7F1B45AC;
    }

label_7F1B45A4:
    ctx->pc = 0x7F1B45A4u;
    ctx->downcount -= 1;
    // 7F1B45A4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B45A8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B45A8:
    ctx->pc = 0x7F1B45A8u;
    ctx->downcount -= 1;
    // 7F1B45A8: b       0x7F1B45B0
    {
            goto label_7F1B45B0;
    }

label_7F1B45AC:
    ctx->pc = 0x7F1B45ACu;
    ctx->downcount -= 1;
    // 7F1B45AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B45B0:
    ctx->pc = 0x7F1B45B0u;
    ctx->downcount -= 5;
    // 7F1B45B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B45B4:
    ctx->pc = 0x7F1B45B4u;
    // 7F1B45B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B45B8:
    ctx->pc = 0x7F1B45B8u;
    // 7F1B45B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B45BC:
    ctx->pc = 0x7F1B45BCu;
    // 7F1B45BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B45C0:
    ctx->pc = 0x7F1B45C0u;
    ctx->downcount -= 20;
    // 7F1B45C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B45C4:
    ctx->pc = 0x7F1B45C4u;
    // 7F1B45C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B45C8:
    ctx->pc = 0x7F1B45C8u;
    // 7F1B45C8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B45CC:
    ctx->pc = 0x7F1B45CCu;
    // 7F1B45CC: li      r5, 116
    ctx->gpr[5] = (u32)(s32)(116);

label_7F1B45D0:
    ctx->pc = 0x7F1B45D0u;
    // 7F1B45D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B45D4:
    ctx->pc = 0x7F1B45D4u;
    // 7F1B45D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B45D8:
    ctx->pc = 0x7F1B45D8u;
    // 7F1B45D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B45DC:
    ctx->pc = 0x7F1B45DCu;
    // 7F1B45DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B45E0:
    ctx->pc = 0x7F1B45E0u;
    // 7F1B45E0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1B45E4:
    ctx->pc = 0x7F1B45E4u;
    // 7F1B45E4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B45E8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B45E8:
    ctx->pc = 0x7F1B45E8u;
    ctx->downcount -= 2;
    // 7F1B45E8: or.   r31, r3, r3
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

label_7F1B45EC:
    ctx->pc = 0x7F1B45ECu;
    // 7F1B45EC: bc    12, 2, 0x7F1B4694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4694;
        }
    }

label_7F1B45F0:
    ctx->pc = 0x7F1B45F0u;
    ctx->downcount -= 5;
    // 7F1B45F0: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B45F4:
    ctx->pc = 0x7F1B45F4u;
    // 7F1B45F4: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B45F8:
    ctx->pc = 0x7F1B45F8u;
    // 7F1B45F8: addi    r4, r4, 17712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17712);

label_7F1B45FC:
    ctx->pc = 0x7F1B45FCu;
    // 7F1B45FC: addi    r5, r5, 17716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17716);

label_7F1B4600:
    ctx->pc = 0x7F1B4600u;
    // 7F1B4600: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B4604u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B4604:
    ctx->pc = 0x7F1B4604u;
    ctx->downcount -= 16;
    // 7F1B4604: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4608:
    ctx->pc = 0x7F1B4608u;
    // 7F1B4608: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1B460C:
    ctx->pc = 0x7F1B460Cu;
    // 7F1B460C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B4610:
    ctx->pc = 0x7F1B4610u;
    // 7F1B4610: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1B4614:
    ctx->pc = 0x7F1B4614u;
    // 7F1B4614: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1B4618:
    ctx->pc = 0x7F1B4618u;
    // 7F1B4618: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1B461C:
    ctx->pc = 0x7F1B461Cu;
    // 7F1B461C: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B4620:
    ctx->pc = 0x7F1B4620u;
    // 7F1B4620: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1B4624:
    ctx->pc = 0x7F1B4624u;
    // 7F1B4624: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1B4628:
    ctx->pc = 0x7F1B4628u;
    // 7F1B4628: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B462C:
    ctx->pc = 0x7F1B462Cu;
    // 7F1B462C: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B4630:
    ctx->pc = 0x7F1B4630u;
    // 7F1B4630: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B4634:
    ctx->pc = 0x7F1B4634u;
    // 7F1B4634: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B4638:
    ctx->pc = 0x7F1B4638u;
    // 7F1B4638: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1B463C:
    ctx->pc = 0x7F1B463Cu;
    // 7F1B463C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B4640:
    loop_7F1B4640(ctx);
    if (ctx->pc == 0x7F1B4654u) goto label_7F1B4654;
    return;
label_7F1B4644:
    ctx->pc = 0x7F1B4644u;
    // 7F1B4644: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1B4648:
    ctx->pc = 0x7F1B4648u;
    // 7F1B4648: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B464C:
    ctx->pc = 0x7F1B464Cu;
    // 7F1B464C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1B4650:
    // 7F1B4650: bc    16, 0, 0x7F1B4640
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4640u;
                return;
            }
            goto label_7F1B4640;
        }
    }

label_7F1B4654:
    ctx->pc = 0x7F1B4654u;
    ctx->downcount -= 6;
    // 7F1B4654: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B4658:
    ctx->pc = 0x7F1B4658u;
    // 7F1B4658: lfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4658u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B465C:
    ctx->pc = 0x7F1B465Cu;
    // 7F1B465C: addi    r4, r3, -6704
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6704);

label_7F1B4660:
    ctx->pc = 0x7F1B4660u;
    // 7F1B4660: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4664:
    ctx->pc = 0x7F1B4664u;
    // 7F1B4664: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4664u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4668:
    ctx->pc = 0x7F1B4668u;
    // 7F1B4668: bl      0x7F1B4548
    {
            ctx->lr = 0x7F1B466Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4548u;
                return;
            }
            goto label_7F1B4548;
    }

label_7F1B466C:
    ctx->pc = 0x7F1B466Cu;
    ctx->downcount -= 2;
    // 7F1B466C: cmpwi   r3, 0
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

label_7F1B4670:
    ctx->pc = 0x7F1B4670u;
    // 7F1B4670: bc    4, 0, 0x7F1B4684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4684;
        }
    }

label_7F1B4674:
    ctx->pc = 0x7F1B4674u;
    ctx->downcount -= 2;
    // 7F1B4674: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4678:
    ctx->pc = 0x7F1B4678u;
    // 7F1B4678: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B467Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B467C:
    ctx->pc = 0x7F1B467Cu;
    ctx->downcount -= 2;
    // 7F1B467C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B4680:
    ctx->pc = 0x7F1B4680u;
    // 7F1B4680: b       0x7F1B4698
    {
            goto label_7F1B4698;
    }

label_7F1B4684:
    ctx->pc = 0x7F1B4684u;
    ctx->downcount -= 4;
    // 7F1B4684: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B4688:
    ctx->pc = 0x7F1B4688u;
    // 7F1B4688: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B468C:
    ctx->pc = 0x7F1B468Cu;
    // 7F1B468C: addi    r4, r4, 17744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17744);

label_7F1B4690:
    ctx->pc = 0x7F1B4690u;
    // 7F1B4690: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B4694u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B4694:
    ctx->pc = 0x7F1B4694u;
    ctx->downcount -= 1;
    // 7F1B4694: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4698:
    ctx->pc = 0x7F1B4698u;
    ctx->downcount -= 16;
    // 7F1B4698: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B469C:
    ctx->pc = 0x7F1B469Cu;
    // 7F1B469C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B46A0:
    ctx->pc = 0x7F1B46A0u;
    // 7F1B46A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B46A4:
    ctx->pc = 0x7F1B46A4u;
    // 7F1B46A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B46A8:
    ctx->pc = 0x7F1B46A8u;
    // 7F1B46A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B46AC:
    ctx->pc = 0x7F1B46ACu;
    ctx->downcount -= 7;
    // 7F1B46AC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B46B0:
    ctx->pc = 0x7F1B46B0u;
    // 7F1B46B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B46B4:
    ctx->pc = 0x7F1B46B4u;
    // 7F1B46B4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B46B8:
    ctx->pc = 0x7F1B46B8u;
    // 7F1B46B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B46BC:
    ctx->pc = 0x7F1B46BCu;
    // 7F1B46BC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B46C0:
    ctx->pc = 0x7F1B46C0u;
    // 7F1B46C0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B46C4:
    ctx->pc = 0x7F1B46C4u;
    // 7F1B46C4: bl      0x80025A08
    {
            ctx->lr = 0x7F1B46C8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B46C8:
    ctx->pc = 0x7F1B46C8u;
    ctx->downcount -= 4;
    // 7F1B46C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B46CC:
    ctx->pc = 0x7F1B46CCu;
    // 7F1B46CC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B46CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B46D0:
    ctx->pc = 0x7F1B46D0u;
    // 7F1B46D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B46D4:
    ctx->pc = 0x7F1B46D4u;
    // 7F1B46D4: bl      0x7F114738
    {
            ctx->lr = 0x7F1B46D8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B46D8:
    ctx->pc = 0x7F1B46D8u;
    ctx->downcount -= 4;
    // 7F1B46D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B46DC:
    ctx->pc = 0x7F1B46DCu;
    // 7F1B46DC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B46DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B46E0:
    ctx->pc = 0x7F1B46E0u;
    // 7F1B46E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B46E4:
    ctx->pc = 0x7F1B46E4u;
    // 7F1B46E4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B46E8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B46E8:
    ctx->pc = 0x7F1B46E8u;
    ctx->downcount -= 4;
    // 7F1B46E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B46EC:
    ctx->pc = 0x7F1B46ECu;
    // 7F1B46EC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B46ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B46F0:
    ctx->pc = 0x7F1B46F0u;
    // 7F1B46F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B46F4:
    ctx->pc = 0x7F1B46F4u;
    // 7F1B46F4: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B46F8u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B46F8:
    ctx->pc = 0x7F1B46F8u;
    ctx->downcount -= 4;
    // 7F1B46F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B46FC:
    ctx->pc = 0x7F1B46FCu;
    // 7F1B46FC: addi    r5, r31, 16
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B4700:
    ctx->pc = 0x7F1B4700u;
    // 7F1B4700: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4704:
    ctx->pc = 0x7F1B4704u;
    // 7F1B4704: bl      0x7F114B40
    {
            ctx->lr = 0x7F1B4708u;
            ctx->pc = 0x7F114B40u;
            return;
    }

label_7F1B4708:
    ctx->pc = 0x7F1B4708u;
    ctx->downcount -= 2;
    // 7F1B4708: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B470C:
    ctx->pc = 0x7F1B470Cu;
    // 7F1B470C: bl      0x7F1B45C0
    {
            ctx->lr = 0x7F1B4710u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B45C0u;
                return;
            }
            goto label_7F1B45C0;
    }

label_7F1B4710:
    ctx->pc = 0x7F1B4710u;
    ctx->downcount -= 6;
    // 7F1B4710: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4714:
    ctx->pc = 0x7F1B4714u;
    // 7F1B4714: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B4718:
    ctx->pc = 0x7F1B4718u;
    // 7F1B4718: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B471C:
    ctx->pc = 0x7F1B471Cu;
    // 7F1B471C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B4720:
    ctx->pc = 0x7F1B4720u;
    // 7F1B4720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4724:
    ctx->pc = 0x7F1B4724u;
    ctx->downcount -= 9;
    // 7F1B4724: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4728:
    ctx->pc = 0x7F1B4728u;
    // 7F1B4728: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B472C:
    ctx->pc = 0x7F1B472Cu;
    // 7F1B472C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4730:
    ctx->pc = 0x7F1B4730u;
    // 7F1B4730: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B4734:
    ctx->pc = 0x7F1B4734u;
    // 7F1B4734: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4738:
    ctx->pc = 0x7F1B4738u;
    // 7F1B4738: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B473C:
    ctx->pc = 0x7F1B473Cu;
    // 7F1B473C: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4740:
    ctx->pc = 0x7F1B4740u;
    // 7F1B4740: cmpw    r4, r0
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

label_7F1B4744:
    ctx->pc = 0x7F1B4744u;
    // 7F1B4744: bc    12, 2, 0x7F1B47D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B47D4;
        }
    }

label_7F1B4748:
    ctx->pc = 0x7F1B4748u;
    ctx->downcount -= 13;
    // 7F1B4748: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B474C:
    ctx->pc = 0x7F1B474Cu;
    // 7F1B474C: addi    r3, r3, 5000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1B4750:
    ctx->pc = 0x7F1B4750u;
    // 7F1B4750: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4754:
    ctx->pc = 0x7F1B4754u;
    // 7F1B4754: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B4758:
    ctx->pc = 0x7F1B4758u;
    // 7F1B4758: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1B475C:
    ctx->pc = 0x7F1B475Cu;
    // 7F1B475C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B4760:
    ctx->pc = 0x7F1B4760u;
    // 7F1B4760: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4764:
    ctx->pc = 0x7F1B4764u;
    // 7F1B4764: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4768:
    ctx->pc = 0x7F1B4768u;
    // 7F1B4768: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B476C:
    ctx->pc = 0x7F1B476Cu;
    // 7F1B476C: cmpw    r0, r3
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

label_7F1B4770:
    ctx->pc = 0x7F1B4770u;
    // 7F1B4770: bc    12, 0, 0x7F1B4778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4778;
        }
    }

label_7F1B4774:
    ctx->pc = 0x7F1B4774u;
    ctx->downcount -= 1;
    // 7F1B4774: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B4778:
    ctx->pc = 0x7F1B4778u;
    ctx->downcount -= 19;
    // 7F1B4778: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B477C:
    ctx->pc = 0x7F1B477Cu;
    // 7F1B477C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1B4780:
    ctx->pc = 0x7F1B4780u;
    // 7F1B4780: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4784:
    ctx->pc = 0x7F1B4784u;
    // 7F1B4784: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B4788:
    ctx->pc = 0x7F1B4788u;
    // 7F1B4788: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B478C:
    ctx->pc = 0x7F1B478Cu;
    // 7F1B478C: lfd     f2, 7200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B478Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4790:
    ctx->pc = 0x7F1B4790u;
    // 7F1B4790: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B4794:
    ctx->pc = 0x7F1B4794u;
    // 7F1B4794: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1B4798:
    ctx->pc = 0x7F1B4798u;
    // 7F1B4798: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B479C:
    ctx->pc = 0x7F1B479Cu;
    // 7F1B479C: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F1B47A0:
    ctx->pc = 0x7F1B47A0u;
    // 7F1B47A0: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B47A4:
    ctx->pc = 0x7F1B47A4u;
    // 7F1B47A4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B47A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B47A8:
    ctx->pc = 0x7F1B47A8u;
    // 7F1B47A8: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B47AC:
    ctx->pc = 0x7F1B47ACu;
    // 7F1B47AC: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B47ACu)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1B47B0:
    ctx->pc = 0x7F1B47B0u;
    // 7F1B47B0: lwz     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B47B4:
    ctx->pc = 0x7F1B47B4u;
    // 7F1B47B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B47B8:
    ctx->pc = 0x7F1B47B8u;
    // 7F1B47B8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B47B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B47BC:
    ctx->pc = 0x7F1B47BCu;
    // 7F1B47BC: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B47BCu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1B47C0:
    ctx->pc = 0x7F1B47C0u;
    // 7F1B47C0: bl      0x7F1B48FC
    {
            ctx->lr = 0x7F1B47C4u;
            goto label_7F1B48FC;
    }

label_7F1B47C4:
    ctx->pc = 0x7F1B47C4u;
    ctx->downcount -= 4;
    // 7F1B47C4: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B47C8:
    ctx->pc = 0x7F1B47C8u;
    // 7F1B47C8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B47CC:
    ctx->pc = 0x7F1B47CCu;
    // 7F1B47CC: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F1B47D0:
    ctx->pc = 0x7F1B47D0u;
    // 7F1B47D0: bl      0x7F3B1348
    {
            ctx->lr = 0x7F1B47D4u;
            ctx->pc = 0x7F3B1348u;
            return;
    }

label_7F1B47D4:
    ctx->pc = 0x7F1B47D4u;
    ctx->downcount -= 4;
    // 7F1B47D4: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B47D8:
    ctx->pc = 0x7F1B47D8u;
    // 7F1B47D8: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B47DC:
    ctx->pc = 0x7F1B47DCu;
    // 7F1B47DC: cmpw    r4, r0
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

label_7F1B47E0:
    ctx->pc = 0x7F1B47E0u;
    // 7F1B47E0: bc    12, 2, 0x7F1B48E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B48E8;
        }
    }

label_7F1B47E4:
    ctx->pc = 0x7F1B47E4u;
    ctx->downcount -= 13;
    // 7F1B47E4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B47E8:
    ctx->pc = 0x7F1B47E8u;
    // 7F1B47E8: addi    r3, r3, 5000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5000);

label_7F1B47EC:
    ctx->pc = 0x7F1B47ECu;
    // 7F1B47EC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B47F0:
    ctx->pc = 0x7F1B47F0u;
    // 7F1B47F0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B47F4:
    ctx->pc = 0x7F1B47F4u;
    // 7F1B47F4: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1B47F8:
    ctx->pc = 0x7F1B47F8u;
    // 7F1B47F8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B47FC:
    ctx->pc = 0x7F1B47FCu;
    // 7F1B47FC: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4800:
    ctx->pc = 0x7F1B4800u;
    // 7F1B4800: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4804:
    ctx->pc = 0x7F1B4804u;
    // 7F1B4804: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4808:
    ctx->pc = 0x7F1B4808u;
    // 7F1B4808: cmpw    r0, r4
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

label_7F1B480C:
    ctx->pc = 0x7F1B480Cu;
    // 7F1B480C: bc    12, 0, 0x7F1B482C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B482C;
        }
    }

label_7F1B4810:
    ctx->pc = 0x7F1B4810u;
    ctx->downcount -= 7;
    // 7F1B4810: stw     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B4814:
    ctx->pc = 0x7F1B4814u;
    // 7F1B4814: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B4818:
    ctx->pc = 0x7F1B4818u;
    // 7F1B4818: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B481C:
    ctx->pc = 0x7F1B481Cu;
    // 7F1B481C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B4820:
    ctx->pc = 0x7F1B4820u;
    // 7F1B4820: stw     r0, 13944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4824:
    ctx->pc = 0x7F1B4824u;
    // 7F1B4824: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4828:
    ctx->pc = 0x7F1B4828u;
    // 7F1B4828: bl      0x7F3B1398
    {
            ctx->lr = 0x7F1B482Cu;
            ctx->pc = 0x7F3B1398u;
            return;
    }

label_7F1B482C:
    ctx->pc = 0x7F1B482Cu;
    ctx->downcount -= 3;
    // 7F1B482C: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4830:
    ctx->pc = 0x7F1B4830u;
    // 7F1B4830: cmpwi   r0, 0
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

label_7F1B4834:
    ctx->pc = 0x7F1B4834u;
    // 7F1B4834: bc    12, 2, 0x7F1B4850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4850;
        }
    }

label_7F1B4838:
    ctx->pc = 0x7F1B4838u;
    ctx->downcount -= 6;
    // 7F1B4838: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B483C:
    ctx->pc = 0x7F1B483Cu;
    // 7F1B483C: lwz     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4840:
    ctx->pc = 0x7F1B4840u;
    // 7F1B4840: lwz     r0, -6612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4844:
    ctx->pc = 0x7F1B4844u;
    // 7F1B4844: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B4848:
    ctx->pc = 0x7F1B4848u;
    // 7F1B4848: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B484C:
    ctx->pc = 0x7F1B484Cu;
    // 7F1B484C: b       0x7F1B4868
    {
            goto label_7F1B4868;
    }

label_7F1B4850:
    ctx->pc = 0x7F1B4850u;
    ctx->downcount -= 6;
    // 7F1B4850: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B4854:
    ctx->pc = 0x7F1B4854u;
    // 7F1B4854: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4858:
    ctx->pc = 0x7F1B4858u;
    // 7F1B4858: addi    r3, r3, -6612
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6612);

label_7F1B485C:
    ctx->pc = 0x7F1B485Cu;
    // 7F1B485C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4860:
    ctx->pc = 0x7F1B4860u;
    // 7F1B4860: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1B4864:
    ctx->pc = 0x7F1B4864u;
    // 7F1B4864: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4868:
    ctx->pc = 0x7F1B4868u;
    ctx->downcount -= 5;
    // 7F1B4868: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B486C:
    ctx->pc = 0x7F1B486Cu;
    // 7F1B486C: lwz     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4870:
    ctx->pc = 0x7F1B4870u;
    // 7F1B4870: lwz     r0, -6608(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6608);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4874:
    ctx->pc = 0x7F1B4874u;
    // 7F1B4874: cmpw    r4, r0
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

label_7F1B4878:
    ctx->pc = 0x7F1B4878u;
    // 7F1B4878: bc    4, 1, 0x7F1B488C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B488C;
        }
    }

label_7F1B487C:
    ctx->pc = 0x7F1B487Cu;
    ctx->downcount -= 4;
    // 7F1B487C: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4880:
    ctx->pc = 0x7F1B4880u;
    // 7F1B4880: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B4884:
    ctx->pc = 0x7F1B4884u;
    // 7F1B4884: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4888:
    ctx->pc = 0x7F1B4888u;
    // 7F1B4888: b       0x7F1B48A4
    {
            goto label_7F1B48A4;
    }

label_7F1B488C:
    ctx->pc = 0x7F1B488Cu;
    ctx->downcount -= 3;
    // 7F1B488C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F1B4890:
    ctx->pc = 0x7F1B4890u;
    // 7F1B4890: cmpw    r4, r0
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

label_7F1B4894:
    ctx->pc = 0x7F1B4894u;
    // 7F1B4894: bc    4, 0, 0x7F1B48A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B48A4;
        }
    }

label_7F1B4898:
    ctx->pc = 0x7F1B4898u;
    ctx->downcount -= 3;
    // 7F1B4898: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B489C:
    ctx->pc = 0x7F1B489Cu;
    // 7F1B489C: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B48A0:
    ctx->pc = 0x7F1B48A0u;
    // 7F1B48A0: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B48A4:
    ctx->pc = 0x7F1B48A4u;
    ctx->downcount -= 14;
    // 7F1B48A4: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B48A8:
    ctx->pc = 0x7F1B48A8u;
    // 7F1B48A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B48AC:
    ctx->pc = 0x7F1B48ACu;
    // 7F1B48AC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B48B0:
    ctx->pc = 0x7F1B48B0u;
    // 7F1B48B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B48B4:
    ctx->pc = 0x7F1B48B4u;
    // 7F1B48B4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B48B8:
    ctx->pc = 0x7F1B48B8u;
    // 7F1B48B8: lfs     f1, 7192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B48B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B48BC:
    ctx->pc = 0x7F1B48BCu;
    // 7F1B48BC: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B48C0:
    ctx->pc = 0x7F1B48C0u;
    // 7F1B48C0: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B48C4:
    ctx->pc = 0x7F1B48C4u;
    // 7F1B48C4: lfd     f2, 7200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B48C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B48C8:
    ctx->pc = 0x7F1B48C8u;
    // 7F1B48C8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B48C8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1B48CC:
    ctx->pc = 0x7F1B48CCu;
    // 7F1B48CC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B48D0:
    ctx->pc = 0x7F1B48D0u;
    // 7F1B48D0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B48D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B48D4:
    ctx->pc = 0x7F1B48D4u;
    // 7F1B48D4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B48D4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1B48D8:
    ctx->pc = 0x7F1B48D8u;
    // 7F1B48D8: bl      0x8002548C
    {
            ctx->lr = 0x7F1B48DCu;
            ctx->pc = 0x8002548Cu;
            return;
    }

label_7F1B48DC:
    ctx->pc = 0x7F1B48DCu;
    ctx->downcount -= 3;
    // 7F1B48DC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B48E0:
    ctx->pc = 0x7F1B48E0u;
    // 7F1B48E0: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B48E4:
    ctx->pc = 0x7F1B48E4u;
    // 7F1B48E4: bl      0x7F3B13E8
    {
            ctx->lr = 0x7F1B48E8u;
            ctx->pc = 0x7F3B13E8u;
            return;
    }

label_7F1B48E8:
    ctx->pc = 0x7F1B48E8u;
    ctx->downcount -= 6;
    // 7F1B48E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B48EC:
    ctx->pc = 0x7F1B48ECu;
    // 7F1B48EC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B48F0:
    ctx->pc = 0x7F1B48F0u;
    // 7F1B48F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B48F4:
    ctx->pc = 0x7F1B48F4u;
    // 7F1B48F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B48F8:
    ctx->pc = 0x7F1B48F8u;
    // 7F1B48F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B48FC:
    ctx->pc = 0x7F1B48FCu;
    ctx->downcount -= 5;
    // 7F1B48FC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1B4900:
    ctx->pc = 0x7F1B4900u;
    // 7F1B4900: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4904:
    ctx->pc = 0x7F1B4904u;
    // 7F1B4904: lfs     f3, 7192(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4904u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B4908:
    ctx->pc = 0x7F1B4908u;
    // 7F1B4908: fcmpu   cr0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4908u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[2], false);

label_7F1B490C:
    ctx->pc = 0x7F1B490Cu;
    // 7F1B490C: bc    4, 2, 0x7F1B4914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4914;
        }
    }

label_7F1B4910:
    ctx->pc = 0x7F1B4910u;
    ctx->downcount -= 1;
    // 7F1B4910: b       0x7F1B4918
    {
            goto label_7F1B4918;
    }

label_7F1B4914:
    ctx->pc = 0x7F1B4914u;
    ctx->downcount -= 17;
    // 7F1B4914: fdivs   f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4914u)) return;
    ppc_fdivs(ctx, 3, 1, 2);

label_7F1B4918:
    ctx->pc = 0x7F1B4918u;
    ctx->downcount -= 17;
    // 7F1B4918: subf   r5, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F1B491C:
    ctx->pc = 0x7F1B491Cu;
    // 7F1B491C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B4920:
    ctx->pc = 0x7F1B4920u;
    // 7F1B4920: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1B4924:
    ctx->pc = 0x7F1B4924u;
    // 7F1B4924: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1B4928:
    ctx->pc = 0x7F1B4928u;
    // 7F1B4928: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B492C:
    ctx->pc = 0x7F1B492Cu;
    // 7F1B492C: lfd     f1, 7200(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B492Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4930:
    ctx->pc = 0x7F1B4930u;
    // 7F1B4930: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4934:
    ctx->pc = 0x7F1B4934u;
    // 7F1B4934: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4934u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4938:
    ctx->pc = 0x7F1B4938u;
    // 7F1B4938: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4938u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1B493C:
    ctx->pc = 0x7F1B493Cu;
    // 7F1B493C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B493Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F1B4940:
    ctx->pc = 0x7F1B4940u;
    // 7F1B4940: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4940u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B4944:
    ctx->pc = 0x7F1B4944u;
    // 7F1B4944: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B4948:
    ctx->pc = 0x7F1B4948u;
    // 7F1B4948: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B494C:
    ctx->pc = 0x7F1B494Cu;
    // 7F1B494C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B4950:
    ctx->pc = 0x7F1B4950u;
    // 7F1B4950: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4954:
    ctx->pc = 0x7F1B4954u;
    // 7F1B4954: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B4958:
    ctx->pc = 0x7F1B4958u;
    // 7F1B4958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B495C:
    ctx->pc = 0x7F1B495Cu;
    ctx->downcount -= 4;
    // 7F1B495C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B4960:
    ctx->pc = 0x7F1B4960u;
    // 7F1B4960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B4964:
    ctx->pc = 0x7F1B4964u;
    // 7F1B4964: stw     r0, 13944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4968:
    ctx->pc = 0x7F1B4968u;
    // 7F1B4968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B496C:
    ctx->pc = 0x7F1B496Cu;
    ctx->downcount -= 14;
    // 7F1B496C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4970:
    ctx->pc = 0x7F1B4970u;
    // 7F1B4970: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4974:
    ctx->pc = 0x7F1B4974u;
    // 7F1B4974: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4978:
    ctx->pc = 0x7F1B4978u;
    // 7F1B4978: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B497C:
    ctx->pc = 0x7F1B497Cu;
    // 7F1B497C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B4980:
    ctx->pc = 0x7F1B4980u;
    // 7F1B4980: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4984:
    ctx->pc = 0x7F1B4984u;
    // 7F1B4984: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4988:
    ctx->pc = 0x7F1B4988u;
    // 7F1B4988: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B498C:
    ctx->pc = 0x7F1B498Cu;
    // 7F1B498C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4990:
    ctx->pc = 0x7F1B4990u;
    // 7F1B4990: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4994:
    ctx->pc = 0x7F1B4994u;
    // 7F1B4994: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4998:
    ctx->pc = 0x7F1B4998u;
    // 7F1B4998: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B499C:
    ctx->pc = 0x7F1B499Cu;
    // 7F1B499C: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B49A0:
    ctx->pc = 0x7F1B49A0u;
    // 7F1B49A0: bl      0x80025030
    {
            ctx->lr = 0x7F1B49A4u;
            ctx->pc = 0x80025030u;
            return;
    }

label_7F1B49A4:
    ctx->pc = 0x7F1B49A4u;
    ctx->downcount -= 2;
    // 7F1B49A4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B49A8:
    ctx->pc = 0x7F1B49A8u;
    // 7F1B49A8: bl      0x7F3B1520
    {
            ctx->lr = 0x7F1B49ACu;
            ctx->pc = 0x7F3B1520u;
            return;
    }

label_7F1B49AC:
    ctx->pc = 0x7F1B49ACu;
    ctx->downcount -= 3;
    // 7F1B49AC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B49B0:
    ctx->pc = 0x7F1B49B0u;
    // 7F1B49B0: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B49B4:
    ctx->pc = 0x7F1B49B4u;
    // 7F1B49B4: bl      0x7F3B13E8
    {
            ctx->lr = 0x7F1B49B8u;
            ctx->pc = 0x7F3B13E8u;
            return;
    }

label_7F1B49B8:
    ctx->pc = 0x7F1B49B8u;
    ctx->downcount -= 7;
    // 7F1B49B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B49BC:
    ctx->pc = 0x7F1B49BCu;
    // 7F1B49BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B49C0:
    ctx->pc = 0x7F1B49C0u;
    // 7F1B49C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B49C4:
    ctx->pc = 0x7F1B49C4u;
    // 7F1B49C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B49C8:
    ctx->pc = 0x7F1B49C8u;
    // 7F1B49C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B49CC:
    ctx->pc = 0x7F1B49CCu;
    // 7F1B49CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B49D0:
    ctx->pc = 0x7F1B49D0u;
    ctx->downcount -= 27;
    // 7F1B49D0: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B49D4:
    ctx->pc = 0x7F1B49D4u;
    // 7F1B49D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B49D8:
    ctx->pc = 0x7F1B49D8u;
    // 7F1B49D8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1B49DC:
    ctx->pc = 0x7F1B49DCu;
    // 7F1B49DC: cmpwi   r4, 1
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

label_7F1B49E0:
    ctx->pc = 0x7F1B49E0u;
    // 7F1B49E0: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B49E4:
    ctx->pc = 0x7F1B49E4u;
    // 7F1B49E4: stmw     r21, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B49E8:
    ctx->pc = 0x7F1B49E8u;
    // 7F1B49E8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B49EC:
    ctx->pc = 0x7F1B49ECu;
    // 7F1B49EC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B49F0:
    ctx->pc = 0x7F1B49F0u;
    // 7F1B49F0: lwzu     r23, 7208(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7208);
        ctx->gpr[23] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F1B49F4:
    ctx->pc = 0x7F1B49F4u;
    // 7F1B49F4: lwz     r24, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F1B49F8:
    ctx->pc = 0x7F1B49F8u;
    // 7F1B49F8: lwz     r25, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F1B49FC:
    ctx->pc = 0x7F1B49FCu;
    // 7F1B49FC: lwz     r26, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F1B4A00:
    ctx->pc = 0x7F1B4A00u;
    // 7F1B4A00: stw     r23, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1B4A04:
    ctx->pc = 0x7F1B4A04u;
    // 7F1B4A04: stw     r24, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1B4A08:
    ctx->pc = 0x7F1B4A08u;
    // 7F1B4A08: stw     r25, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1B4A0C:
    ctx->pc = 0x7F1B4A0Cu;
    // 7F1B4A0C: stw     r26, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1B4A10:
    ctx->pc = 0x7F1B4A10u;
    // 7F1B4A10: bc    12, 2, 0x7F1B4AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4AE0;
        }
    }

label_7F1B4A14:
    ctx->pc = 0x7F1B4A14u;
    ctx->downcount -= 1;
    // 7F1B4A14: bc    4, 0, 0x7F1B4A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4A24;
        }
    }

label_7F1B4A18:
    ctx->pc = 0x7F1B4A18u;
    ctx->downcount -= 2;
    // 7F1B4A18: cmpwi   r4, 0
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

label_7F1B4A1C:
    ctx->pc = 0x7F1B4A1Cu;
    // 7F1B4A1C: bc    4, 0, 0x7F1B4A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4A30;
        }
    }

label_7F1B4A20:
    ctx->pc = 0x7F1B4A20u;
    ctx->downcount -= 1;
    // 7F1B4A20: b       0x7F1B4BBC
    {
            goto label_7F1B4BBC;
    }

label_7F1B4A24:
    ctx->pc = 0x7F1B4A24u;
    ctx->downcount -= 2;
    // 7F1B4A24: cmpwi   r4, 3
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

label_7F1B4A28:
    ctx->pc = 0x7F1B4A28u;
    // 7F1B4A28: bc    4, 0, 0x7F1B4BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4BBC;
        }
    }

label_7F1B4A2C:
    ctx->pc = 0x7F1B4A2Cu;
    ctx->downcount -= 1;
    // 7F1B4A2C: b       0x7F1B4B00
    {
            goto label_7F1B4B00;
    }

label_7F1B4A30:
    ctx->pc = 0x7F1B4A30u;
    ctx->downcount -= 4;
    // 7F1B4A30: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B4A34:
    ctx->pc = 0x7F1B4A34u;
    // 7F1B4A34: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B4A38:
    ctx->pc = 0x7F1B4A38u;
    // 7F1B4A38: addi    r27, r3, -6696
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-6696);

label_7F1B4A3C:
    ctx->pc = 0x7F1B4A3Cu;
    // 7F1B4A3C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B4A40:
    ctx->pc = 0x7F1B4A40u;
    ctx->downcount -= 60;
    // 7F1B4A40: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4A44:
    // 7F1B4A44: add   r4, r27, r28
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1B4A48:
    // 7F1B4A48: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F1B4A4C:
    ctx->pc = 0x7F1B4A4Cu;
    // 7F1B4A4C: lwz     r10, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1B4A50:
    // 7F1B4A50: divw   r8, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B4A54:
    ctx->pc = 0x7F1B4A54u;
    // 7F1B4A54: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4A58:
    ctx->pc = 0x7F1B4A58u;
    // 7F1B4A58: lwz     r9, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1B4A5C:
    // 7F1B4A5C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F1B4A60:
    ctx->pc = 0x7F1B4A60u;
    // 7F1B4A60: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B4A64:
    // 7F1B4A64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B4A68:
    // 7F1B4A68: mulli   r22, r10, 324
    ctx->gpr[22] = (u32)((s64)(s32)ctx->gpr[10] * (s64)(s32)324);

label_7F1B4A6C:
    // 7F1B4A6C: mulli   r21, r0, 324
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F1B4A70:
    // 7F1B4A70: addi    r3, r22, 492
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(492);

label_7F1B4A74:
    // 7F1B4A74: addi    r4, r21, 492
    ctx->gpr[4] = ctx->gpr[21] + (u32)(s32)(492);

label_7F1B4A78:
    // 7F1B4A78: add   r3, r9, r3
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B4A7C:
    // 7F1B4A7C: add   r4, r9, r4
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1B4A80:
    // 7F1B4A80: bl      0x7F209DA0
    {
            ctx->lr = 0x7F1B4A84u;
            ctx->pc = 0x7F209DA0u;
            return;
    }

label_7F1B4A84:
    ctx->pc = 0x7F1B4A84u;
    ctx->downcount -= 9;
    // 7F1B4A84: stw     r23, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1B4A88:
    // 7F1B4A88: addi    r3, r22, 444
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(444);

label_7F1B4A8C:
    // 7F1B4A8C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B4A90:
    ctx->pc = 0x7F1B4A90u;
    // 7F1B4A90: stw     r24, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1B4A94:
    ctx->pc = 0x7F1B4A94u;
    // 7F1B4A94: stw     r25, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1B4A98:
    ctx->pc = 0x7F1B4A98u;
    // 7F1B4A98: stw     r26, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1B4A9C:
    ctx->pc = 0x7F1B4A9Cu;
    // 7F1B4A9C: lwz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4AA0:
    // 7F1B4AA0: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B4AA4:
    // 7F1B4AA4: bl      0x7F1A5ECC
    {
            ctx->lr = 0x7F1B4AA8u;
            ctx->pc = 0x7F1A5ECCu;
            return;
    }

label_7F1B4AA8:
    ctx->pc = 0x7F1B4AA8u;
    ctx->downcount -= 9;
    // 7F1B4AA8: stw     r23, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1B4AAC:
    // 7F1B4AAC: addi    r3, r21, 444
    ctx->gpr[3] = ctx->gpr[21] + (u32)(s32)(444);

label_7F1B4AB0:
    // 7F1B4AB0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4AB4:
    ctx->pc = 0x7F1B4AB4u;
    // 7F1B4AB4: stw     r24, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1B4AB8:
    ctx->pc = 0x7F1B4AB8u;
    // 7F1B4AB8: stw     r25, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1B4ABC:
    ctx->pc = 0x7F1B4ABCu;
    // 7F1B4ABC: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1B4AC0:
    ctx->pc = 0x7F1B4AC0u;
    // 7F1B4AC0: lwz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4AC4:
    // 7F1B4AC4: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B4AC8:
    // 7F1B4AC8: bl      0x7F1A5ECC
    {
            ctx->lr = 0x7F1B4ACCu;
            ctx->pc = 0x7F1A5ECCu;
            return;
    }

label_7F1B4ACC:
    ctx->downcount -= 4;
    // 7F1B4ACC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1B4AD0:
    // 7F1B4AD0: addi    r28, r28, 12
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(12);

label_7F1B4AD4:
    // 7F1B4AD4: cmpwi   r31, 7
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B4AD8:
    // 7F1B4AD8: bc    12, 0, 0x7F1B4A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4A40u;
                return;
            }
            goto label_7F1B4A40;
        }
    }

label_7F1B4ADC:
    ctx->pc = 0x7F1B4ADCu;
    ctx->downcount -= 1;
    // 7F1B4ADC: b       0x7F1B4BCC
    {
            goto label_7F1B4BCC;
    }

label_7F1B4AE0:
    ctx->pc = 0x7F1B4AE0u;
    ctx->downcount -= 3;
    // 7F1B4AE0: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4AE4:
    ctx->pc = 0x7F1B4AE4u;
    // 7F1B4AE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B4AE8:
    ctx->pc = 0x7F1B4AE8u;
    // 7F1B4AE8: bl      0x7F3B1398
    {
            ctx->lr = 0x7F1B4AECu;
            ctx->pc = 0x7F3B1398u;
            return;
    }

label_7F1B4AEC:
    ctx->pc = 0x7F1B4AECu;
    ctx->downcount -= 5;
    // 7F1B4AEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B4AF0:
    ctx->pc = 0x7F1B4AF0u;
    // 7F1B4AF0: stw     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4AF4:
    ctx->pc = 0x7F1B4AF4u;
    // 7F1B4AF4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4AF8:
    ctx->pc = 0x7F1B4AF8u;
    // 7F1B4AF8: stw     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4AFC:
    ctx->pc = 0x7F1B4AFCu;
    // 7F1B4AFC: b       0x7F1B4BCC
    {
            goto label_7F1B4BCC;
    }

label_7F1B4B00:
    ctx->pc = 0x7F1B4B00u;
    ctx->downcount -= 54;
    // 7F1B4B00: lwz     r5, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B4B04:
    ctx->pc = 0x7F1B4B04u;
    // 7F1B4B04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B4B08:
    ctx->pc = 0x7F1B4B08u;
    // 7F1B4B08: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4B0C:
    ctx->pc = 0x7F1B4B0Cu;
    // 7F1B4B0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4B10:
    ctx->pc = 0x7F1B4B10u;
    // 7F1B4B10: lwz     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4B14:
    ctx->pc = 0x7F1B4B14u;
    // 7F1B4B14: divw   r4, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B4B18:
    ctx->pc = 0x7F1B4B18u;
    // 7F1B4B18: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4B1C:
    ctx->pc = 0x7F1B4B1Cu;
    // 7F1B4B1C: rlwinm r7, r6, 1, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_7F1B4B20:
    ctx->pc = 0x7F1B4B20u;
    // 7F1B4B20: lfd     f1, 7200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4B24:
    ctx->pc = 0x7F1B4B24u;
    // 7F1B4B24: cmpwi   r7, 255
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

label_7F1B4B28:
    ctx->pc = 0x7F1B4B28u;
    // 7F1B4B28: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B4B2C:
    ctx->pc = 0x7F1B4B2Cu;
    // 7F1B4B2C: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4B30:
    ctx->pc = 0x7F1B4B30u;
    // 7F1B4B30: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4B34:
    ctx->pc = 0x7F1B4B34u;
    // 7F1B4B34: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B34u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F1B4B38:
    ctx->pc = 0x7F1B4B38u;
    // 7F1B4B38: bc    4, 1, 0x7F1B4B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4B40;
        }
    }

label_7F1B4B3C:
    ctx->pc = 0x7F1B4B3Cu;
    ctx->downcount -= 1;
    // 7F1B4B3C: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B4B40:
    ctx->pc = 0x7F1B4B40u;
    ctx->downcount -= 19;
    // 7F1B4B40: lwz     r5, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B4B44:
    ctx->pc = 0x7F1B4B44u;
    // 7F1B4B44: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B4B48:
    ctx->pc = 0x7F1B4B48u;
    // 7F1B4B48: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4B4C:
    ctx->pc = 0x7F1B4B4Cu;
    // 7F1B4B4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4B50:
    ctx->pc = 0x7F1B4B50u;
    // 7F1B4B50: lwz     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4B54:
    ctx->pc = 0x7F1B4B54u;
    // 7F1B4B54: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1B4B58:
    ctx->pc = 0x7F1B4B58u;
    // 7F1B4B58: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4B5C:
    ctx->pc = 0x7F1B4B5Cu;
    // 7F1B4B5C: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B4B60:
    ctx->pc = 0x7F1B4B60u;
    // 7F1B4B60: lfd     f1, 7200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4B64:
    ctx->pc = 0x7F1B4B64u;
    // 7F1B4B64: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4B68:
    ctx->pc = 0x7F1B4B68u;
    // 7F1B4B68: cmpwi   r6, 0
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

label_7F1B4B6C:
    ctx->pc = 0x7F1B4B6Cu;
    // 7F1B4B6C: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4B70:
    ctx->pc = 0x7F1B4B70u;
    // 7F1B4B70: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B70u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1B4B74:
    ctx->pc = 0x7F1B4B74u;
    // 7F1B4B74: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B74u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1B4B78:
    ctx->pc = 0x7F1B4B78u;
    // 7F1B4B78: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B78u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B4B7C:
    ctx->pc = 0x7F1B4B7Cu;
    // 7F1B4B7C: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B4B80:
    ctx->pc = 0x7F1B4B80u;
    // 7F1B4B80: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4B84:
    ctx->pc = 0x7F1B4B84u;
    // 7F1B4B84: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B4B88:
    ctx->pc = 0x7F1B4B88u;
    // 7F1B4B88: bc    4, 2, 0x7F1B4B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4B98;
        }
    }

label_7F1B4B8C:
    ctx->pc = 0x7F1B4B8Cu;
    ctx->downcount -= 3;
    // 7F1B4B8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B4B90:
    ctx->pc = 0x7F1B4B90u;
    // 7F1B4B90: stw     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4B94:
    ctx->pc = 0x7F1B4B94u;
    // 7F1B4B94: b       0x7F1B4B9C
    {
            goto label_7F1B4B9C;
    }

label_7F1B4B98:
    ctx->pc = 0x7F1B4B98u;
    ctx->downcount -= 1;
    // 7F1B4B98: stw     r6, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B4B9C:
    ctx->pc = 0x7F1B4B9Cu;
    ctx->downcount -= 8;
    // 7F1B4B9C: stw     r3, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B4BA0:
    ctx->pc = 0x7F1B4BA0u;
    // 7F1B4BA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B4BA4:
    ctx->pc = 0x7F1B4BA4u;
    // 7F1B4BA4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B4BA8:
    ctx->pc = 0x7F1B4BA8u;
    // 7F1B4BA8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B4BAC:
    ctx->pc = 0x7F1B4BACu;
    // 7F1B4BAC: stw     r7, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B4BB0:
    ctx->pc = 0x7F1B4BB0u;
    // 7F1B4BB0: stw     r4, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B4BB4:
    ctx->pc = 0x7F1B4BB4u;
    // 7F1B4BB4: stw     r0, 13944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4BB8:
    ctx->pc = 0x7F1B4BB8u;
    // 7F1B4BB8: b       0x7F1B4BCC
    {
            goto label_7F1B4BCC;
    }

label_7F1B4BBC:
    ctx->pc = 0x7F1B4BBCu;
    ctx->downcount -= 3;
    // 7F1B4BBC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B4BC0:
    ctx->pc = 0x7F1B4BC0u;
    // 7F1B4BC0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B4BC4:
    ctx->pc = 0x7F1B4BC4u;
    // 7F1B4BC4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B4BC8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B4BC8:
    ctx->pc = 0x7F1B4BC8u;
    ctx->downcount -= 1;
    // 7F1B4BC8: b       0x7F1B4BD0
    {
            goto label_7F1B4BD0;
    }

label_7F1B4BCC:
    ctx->pc = 0x7F1B4BCCu;
    ctx->downcount -= 1;
    // 7F1B4BCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B4BD0:
    ctx->pc = 0x7F1B4BD0u;
    ctx->downcount -= 16;
    // 7F1B4BD0: lmw     r21, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B4BD4:
    ctx->pc = 0x7F1B4BD4u;
    // 7F1B4BD4: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4BD8:
    ctx->pc = 0x7F1B4BD8u;
    // 7F1B4BD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4BDC:
    ctx->pc = 0x7F1B4BDCu;
    // 7F1B4BDC: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1B4BE0:
    ctx->pc = 0x7F1B4BE0u;
    // 7F1B4BE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4BE4:
    ctx->pc = 0x7F1B4BE4u;
    ctx->downcount -= 20;
    // 7F1B4BE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4BE8:
    ctx->pc = 0x7F1B4BE8u;
    // 7F1B4BE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4BEC:
    ctx->pc = 0x7F1B4BECu;
    // 7F1B4BEC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B4BF0:
    ctx->pc = 0x7F1B4BF0u;
    // 7F1B4BF0: li      r5, 136
    ctx->gpr[5] = (u32)(s32)(136);

label_7F1B4BF4:
    ctx->pc = 0x7F1B4BF4u;
    // 7F1B4BF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4BF8:
    ctx->pc = 0x7F1B4BF8u;
    // 7F1B4BF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B4BFC:
    ctx->pc = 0x7F1B4BFCu;
    // 7F1B4BFC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B4C00:
    ctx->pc = 0x7F1B4C00u;
    // 7F1B4C00: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4C04:
    ctx->pc = 0x7F1B4C04u;
    // 7F1B4C04: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1B4C08:
    ctx->pc = 0x7F1B4C08u;
    // 7F1B4C08: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B4C0Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B4C0C:
    ctx->pc = 0x7F1B4C0Cu;
    ctx->downcount -= 2;
    // 7F1B4C0C: or.   r31, r3, r3
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

label_7F1B4C10:
    ctx->pc = 0x7F1B4C10u;
    // 7F1B4C10: bc    12, 2, 0x7F1B4C84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4C84;
        }
    }

label_7F1B4C14:
    ctx->pc = 0x7F1B4C14u;
    ctx->downcount -= 5;
    // 7F1B4C14: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B4C18:
    ctx->pc = 0x7F1B4C18u;
    // 7F1B4C18: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B4C1C:
    ctx->pc = 0x7F1B4C1Cu;
    // 7F1B4C1C: addi    r4, r4, 18212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18212);

label_7F1B4C20:
    ctx->pc = 0x7F1B4C20u;
    // 7F1B4C20: addi    r5, r5, 18780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18780);

label_7F1B4C24:
    ctx->pc = 0x7F1B4C24u;
    // 7F1B4C24: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B4C28u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B4C28:
    ctx->pc = 0x7F1B4C28u;
    ctx->downcount -= 13;
    // 7F1B4C28: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4C2C:
    ctx->pc = 0x7F1B4C2Cu;
    // 7F1B4C2C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B4C30:
    ctx->pc = 0x7F1B4C30u;
    // 7F1B4C30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B4C34:
    ctx->pc = 0x7F1B4C34u;
    // 7F1B4C34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4C38:
    ctx->pc = 0x7F1B4C38u;
    // 7F1B4C38: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1B4C3C:
    ctx->pc = 0x7F1B4C3Cu;
    // 7F1B4C3C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B4C40:
    ctx->pc = 0x7F1B4C40u;
    // 7F1B4C40: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B4C44:
    ctx->pc = 0x7F1B4C44u;
    // 7F1B4C44: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B4C48:
    ctx->pc = 0x7F1B4C48u;
    // 7F1B4C48: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B4C4C:
    ctx->pc = 0x7F1B4C4Cu;
    // 7F1B4C4C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B4C50:
    ctx->pc = 0x7F1B4C50u;
    // 7F1B4C50: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4C54:
    ctx->pc = 0x7F1B4C54u;
    // 7F1B4C54: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1B4C58:
    ctx->pc = 0x7F1B4C58u;
    // 7F1B4C58: bl      0x7F1B496C
    {
            ctx->lr = 0x7F1B4C5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B496Cu;
                return;
            }
            goto label_7F1B496C;
    }

label_7F1B4C5C:
    ctx->pc = 0x7F1B4C5Cu;
    ctx->downcount -= 2;
    // 7F1B4C5C: cmpwi   r3, 0
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

label_7F1B4C60:
    ctx->pc = 0x7F1B4C60u;
    // 7F1B4C60: bc    4, 0, 0x7F1B4C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4C74;
        }
    }

label_7F1B4C64:
    ctx->pc = 0x7F1B4C64u;
    ctx->downcount -= 2;
    // 7F1B4C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4C68:
    ctx->pc = 0x7F1B4C68u;
    // 7F1B4C68: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B4C6Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B4C6C:
    ctx->pc = 0x7F1B4C6Cu;
    ctx->downcount -= 2;
    // 7F1B4C6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B4C70:
    ctx->pc = 0x7F1B4C70u;
    // 7F1B4C70: b       0x7F1B4C88
    {
            goto label_7F1B4C88;
    }

label_7F1B4C74:
    ctx->pc = 0x7F1B4C74u;
    ctx->downcount -= 4;
    // 7F1B4C74: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B4C78:
    ctx->pc = 0x7F1B4C78u;
    // 7F1B4C78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4C7C:
    ctx->pc = 0x7F1B4C7Cu;
    // 7F1B4C7C: addi    r4, r4, 18896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18896);

label_7F1B4C80:
    ctx->pc = 0x7F1B4C80u;
    // 7F1B4C80: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B4C84u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B4C84:
    ctx->pc = 0x7F1B4C84u;
    ctx->downcount -= 1;
    // 7F1B4C84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4C88:
    ctx->pc = 0x7F1B4C88u;
    ctx->downcount -= 16;
    // 7F1B4C88: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B4C8C:
    ctx->pc = 0x7F1B4C8Cu;
    // 7F1B4C8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4C90:
    ctx->pc = 0x7F1B4C90u;
    // 7F1B4C90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4C94:
    ctx->pc = 0x7F1B4C94u;
    // 7F1B4C94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B4C98:
    ctx->pc = 0x7F1B4C98u;
    // 7F1B4C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4C9C:
    ctx->pc = 0x7F1B4C9Cu;
    ctx->downcount -= 28;
    // 7F1B4C9C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4CA0:
    ctx->pc = 0x7F1B4CA0u;
    // 7F1B4CA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4CA4:
    ctx->pc = 0x7F1B4CA4u;
    // 7F1B4CA4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4CA8:
    ctx->pc = 0x7F1B4CA8u;
    // 7F1B4CA8: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B4CAC:
    ctx->pc = 0x7F1B4CACu;
    // 7F1B4CAC: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B4CACu);
        if (ctx->exception) return;
    }

label_7F1B4CB0:
    ctx->pc = 0x7F1B4CB0u;
    // 7F1B4CB0: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1B4CB4:
    ctx->pc = 0x7F1B4CB4u;
    // 7F1B4CB4: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B4CB4u);
        if (ctx->exception) return;
    }

label_7F1B4CB8:
    ctx->pc = 0x7F1B4CB8u;
    // 7F1B4CB8: stmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B4CBC:
    ctx->pc = 0x7F1B4CBCu;
    // 7F1B4CBC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B4CC0:
    ctx->pc = 0x7F1B4CC0u;
    // 7F1B4CC0: lfs     f1, 700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4CC4:
    ctx->pc = 0x7F1B4CC4u;
    // 7F1B4CC4: lfs     f0, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4CC8:
    ctx->pc = 0x7F1B4CC8u;
    // 7F1B4CC8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4CCC:
    ctx->pc = 0x7F1B4CCCu;
    // 7F1B4CCC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CCCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1B4CD0:
    ctx->pc = 0x7F1B4CD0u;
    // 7F1B4CD0: stfs     f0, 700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(700);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4CD4:
    ctx->pc = 0x7F1B4CD4u;
    // 7F1B4CD4: lfs     f1, 700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4CD8:
    ctx->pc = 0x7F1B4CD8u;
    // 7F1B4CD8: lfs     f0, 696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4CDC:
    ctx->pc = 0x7F1B4CDCu;
    // 7F1B4CDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4CDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B4CE0:
    ctx->pc = 0x7F1B4CE0u;
    // 7F1B4CE0: bc    4, 1, 0x7F1B4CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4CF8;
        }
    }

label_7F1B4CE4:
    ctx->pc = 0x7F1B4CE4u;
    ctx->downcount -= 5;
    // 7F1B4CE4: lwz     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B4CE8:
    ctx->pc = 0x7F1B4CE8u;
    // 7F1B4CE8: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4CEC:
    ctx->pc = 0x7F1B4CECu;
    // 7F1B4CEC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1B4CF0:
    ctx->pc = 0x7F1B4CF0u;
    // 7F1B4CF0: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4CF4:
    ctx->pc = 0x7F1B4CF4u;
    // 7F1B4CF4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B4CF8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B4CF8:
    ctx->pc = 0x7F1B4CF8u;
    ctx->downcount -= 24;
    // 7F1B4CF8: lwz     r6, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4CFC:
    ctx->pc = 0x7F1B4CFCu;
    // 7F1B4CFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4D00:
    ctx->pc = 0x7F1B4D00u;
    // 7F1B4D00: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B4D04:
    ctx->pc = 0x7F1B4D04u;
    // 7F1B4D04: lfs     f30, 7244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1B4D08:
    ctx->pc = 0x7F1B4D08u;
    // 7F1B4D08: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4D0C:
    ctx->pc = 0x7F1B4D0Cu;
    // 7F1B4D0C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B4D10:
    ctx->pc = 0x7F1B4D10u;
    // 7F1B4D10: lfs     f31, 7224(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1B4D14:
    ctx->pc = 0x7F1B4D14u;
    // 7F1B4D14: addi    r29, r24, 52
    ctx->gpr[29] = ctx->gpr[24] + (u32)(s32)(52);

label_7F1B4D18:
    ctx->pc = 0x7F1B4D18u;
    // 7F1B4D18: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1B4D1C:
    ctx->pc = 0x7F1B4D1Cu;
    // 7F1B4D1C: addi    r26, r24, 308
    ctx->gpr[26] = ctx->gpr[24] + (u32)(s32)(308);

label_7F1B4D20:
    ctx->pc = 0x7F1B4D20u;
    // 7F1B4D20: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4D24:
    ctx->pc = 0x7F1B4D24u;
    // 7F1B4D24: addi    r25, r24, 500
    ctx->gpr[25] = ctx->gpr[24] + (u32)(s32)(500);

label_7F1B4D28:
    ctx->pc = 0x7F1B4D28u;
    // 7F1B4D28: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1B4D2C:
    ctx->pc = 0x7F1B4D2Cu;
    // 7F1B4D2C: lwz     r3, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4D30:
    ctx->pc = 0x7F1B4D30u;
    // 7F1B4D30: addi    r24, r4, -6704
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(-6704);

label_7F1B4D34:
    ctx->pc = 0x7F1B4D34u;
    // 7F1B4D34: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4D38:
    ctx->pc = 0x7F1B4D38u;
    // 7F1B4D38: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F1B4D3C:
    ctx->pc = 0x7F1B4D3Cu;
    // 7F1B4D3C: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B4D40:
    ctx->pc = 0x7F1B4D40u;
    // 7F1B4D40: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B4D44:
    ctx->pc = 0x7F1B4D44u;
    // 7F1B4D44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B4D48:
    ctx->pc = 0x7F1B4D48u;
    // 7F1B4D48: lwzx    r31, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B4D4C:
    ctx->pc = 0x7F1B4D4Cu;
    // 7F1B4D4C: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B4D50:
    ctx->pc = 0x7F1B4D50u;
    // 7F1B4D50: lwzx    r30, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1B4D54:
    ctx->pc = 0x7F1B4D54u;
    // 7F1B4D54: lwz     r28, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1B4D58:
    ctx->downcount -= 3;
    // 7F1B4D58: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F1B4D5C:
    ctx->pc = 0x7F1B4D5Cu;
    // 7F1B4D5C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B4D60:
    ctx->pc = 0x7F1B4D60u;
    ctx->downcount -= 3;
    // 7F1B4D60: lfs     f3, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D60u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B4D64:
    ctx->pc = 0x7F1B4D64u;
    // 7F1B4D64: fcmpu   cr0, f3, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D64u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[31], false);

label_7F1B4D68:
    // 7F1B4D68: bc    12, 2, 0x7F1B4DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4DA0;
        }
    }

label_7F1B4D6C:
    ctx->downcount -= 12;
    // 7F1B4D6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4D70:
    // 7F1B4D70: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B4D74:
    // 7F1B4D74: addi    r5, r3, 7240
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7240);

label_7F1B4D78:
    ctx->pc = 0x7F1B4D78u;
    // 7F1B4D78: lfs     f1, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4D7C:
    ctx->pc = 0x7F1B4D7Cu;
    // 7F1B4D7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D7Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B4D80:
    // 7F1B4D80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4D84:
    ctx->pc = 0x7F1B4D84u;
    // 7F1B4D84: lfs     f0, 7224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4D88:
    ctx->pc = 0x7F1B4D88u;
    // 7F1B4D88: fnmsubs f1, f2, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D88u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[3], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1B4D8C:
    ctx->pc = 0x7F1B4D8Cu;
    // 7F1B4D8C: stfs     f1, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D8Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B4D90:
    ctx->pc = 0x7F1B4D90u;
    // 7F1B4D90: lfs     f1, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D90u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4D94:
    ctx->pc = 0x7F1B4D94u;
    // 7F1B4D94: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D94u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B4D98:
    // 7F1B4D98: bc    4, 0, 0x7F1B4DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4DA0;
        }
    }

label_7F1B4D9C:
    ctx->pc = 0x7F1B4D9Cu;
    ctx->downcount -= 1;
    // 7F1B4D9C: stfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4D9Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4DA0:
    ctx->pc = 0x7F1B4DA0u;
    ctx->downcount -= 8;
    // 7F1B4DA0: lfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DA0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4DA4:
    ctx->pc = 0x7F1B4DA4u;
    // 7F1B4DA4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B4DA8:
    ctx->pc = 0x7F1B4DA8u;
    // 7F1B4DA8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B4DAC:
    ctx->pc = 0x7F1B4DACu;
    // 7F1B4DAC: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4DB0:
    ctx->pc = 0x7F1B4DB0u;
    // 7F1B4DB0: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B4DB4:
    ctx->pc = 0x7F1B4DB4u;
    // 7F1B4DB4: lfs     f3, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DB4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B4DB8:
    ctx->pc = 0x7F1B4DB8u;
    // 7F1B4DB8: fcmpu   cr0, f3, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DB8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[31], false);

label_7F1B4DBC:
    // 7F1B4DBC: bc    12, 2, 0x7F1B4DF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4DF4;
        }
    }

label_7F1B4DC0:
    ctx->downcount -= 12;
    // 7F1B4DC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4DC4:
    // 7F1B4DC4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B4DC8:
    // 7F1B4DC8: addi    r5, r3, 7240
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7240);

label_7F1B4DCC:
    ctx->pc = 0x7F1B4DCCu;
    // 7F1B4DCC: lfs     f1, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4DD0:
    ctx->pc = 0x7F1B4DD0u;
    // 7F1B4DD0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B4DD4:
    // 7F1B4DD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4DD8:
    ctx->pc = 0x7F1B4DD8u;
    // 7F1B4DD8: lfs     f0, 7224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4DDC:
    ctx->pc = 0x7F1B4DDCu;
    // 7F1B4DDC: fnmsubs f1, f2, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DDCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[3], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1B4DE0:
    ctx->pc = 0x7F1B4DE0u;
    // 7F1B4DE0: stfs     f1, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DE0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B4DE4:
    ctx->pc = 0x7F1B4DE4u;
    // 7F1B4DE4: lfs     f1, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DE4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4DE8:
    ctx->pc = 0x7F1B4DE8u;
    // 7F1B4DE8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B4DEC:
    // 7F1B4DEC: bc    4, 0, 0x7F1B4DF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4DF4;
        }
    }

label_7F1B4DF0:
    ctx->pc = 0x7F1B4DF0u;
    ctx->downcount -= 1;
    // 7F1B4DF0: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DF0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4DF4:
    ctx->pc = 0x7F1B4DF4u;
    ctx->downcount -= 9;
    // 7F1B4DF4: lfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4DF4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4DF8:
    // 7F1B4DF8: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1B4DFC:
    // 7F1B4DFC: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F1B4E00:
    ctx->pc = 0x7F1B4E00u;
    // 7F1B4E00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B4E04:
    ctx->pc = 0x7F1B4E04u;
    // 7F1B4E04: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B4E08:
    ctx->pc = 0x7F1B4E08u;
    // 7F1B4E08: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4E0C:
    ctx->pc = 0x7F1B4E0Cu;
    // 7F1B4E0C: stb     r0, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B4E10:
    // 7F1B4E10: addi    r28, r28, 12
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(12);

label_7F1B4E14:
    // 7F1B4E14: bc    16, 0, 0x7F1B4D60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4D60u;
                return;
            }
            goto label_7F1B4D60;
        }
    }

label_7F1B4E18:
    ctx->downcount -= 4;
    // 7F1B4E18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B4E1C:
    // 7F1B4E1C: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B4E20:
    // 7F1B4E20: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E24:
    // 7F1B4E24: bl      0x80025FFC
    {
            ctx->lr = 0x7F1B4E28u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F1B4E28:
    ctx->downcount -= 4;
    // 7F1B4E28: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E2C:
    ctx->pc = 0x7F1B4E2Cu;
    // 7F1B4E2C: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E2Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4E30:
    // 7F1B4E30: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4E34:
    // 7F1B4E34: bl      0x80026020
    {
            ctx->lr = 0x7F1B4E38u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1B4E38:
    ctx->downcount -= 4;
    // 7F1B4E38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E3C:
    // 7F1B4E3C: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B4E40:
    // 7F1B4E40: addi    r5, r31, 16
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B4E44:
    // 7F1B4E44: bl      0x80025FD8
    {
            ctx->lr = 0x7F1B4E48u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F1B4E48:
    ctx->downcount -= 4;
    // 7F1B4E48: addi    r3, r30, 16
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B4E4C:
    // 7F1B4E4C: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F1B4E50:
    // 7F1B4E50: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E54:
    // 7F1B4E54: bl      0x80025FFC
    {
            ctx->lr = 0x7F1B4E58u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F1B4E58:
    ctx->downcount -= 4;
    // 7F1B4E58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E5C:
    ctx->pc = 0x7F1B4E5Cu;
    // 7F1B4E5C: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E5Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4E60:
    // 7F1B4E60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4E64:
    // 7F1B4E64: bl      0x80026020
    {
            ctx->lr = 0x7F1B4E68u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1B4E68:
    ctx->downcount -= 4;
    // 7F1B4E68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E6C:
    // 7F1B4E6C: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F1B4E70:
    // 7F1B4E70: addi    r5, r31, 32
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(32);

label_7F1B4E74:
    // 7F1B4E74: bl      0x80025FD8
    {
            ctx->lr = 0x7F1B4E78u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F1B4E78:
    ctx->pc = 0x7F1B4E78u;
    ctx->downcount -= 4;
    // 7F1B4E78: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E78u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4E7C:
    // 7F1B4E7C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B4E80:
    // 7F1B4E80: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E84:
    // 7F1B4E84: bl      0x80026020
    {
            ctx->lr = 0x7F1B4E88u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1B4E88:
    ctx->downcount -= 4;
    // 7F1B4E88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B4E8C:
    // 7F1B4E8C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B4E90:
    // 7F1B4E90: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B4E94:
    // 7F1B4E94: bl      0x80025FD8
    {
            ctx->lr = 0x7F1B4E98u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F1B4E98:
    ctx->pc = 0x7F1B4E98u;
    ctx->downcount -= 15;
    // 7F1B4E98: lfs     f2, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E98u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B4E9C:
    ctx->pc = 0x7F1B4E9Cu;
    // 7F1B4E9C: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4E9Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4EA0:
    ctx->pc = 0x7F1B4EA0u;
    // 7F1B4EA0: fnmsubs f0, f30, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EA0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[2], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B4EA4:
    ctx->pc = 0x7F1B4EA4u;
    // 7F1B4EA4: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EA4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B4EA8:
    ctx->pc = 0x7F1B4EA8u;
    // 7F1B4EA8: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4EAC:
    ctx->pc = 0x7F1B4EACu;
    // 7F1B4EAC: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4EB0:
    ctx->pc = 0x7F1B4EB0u;
    // 7F1B4EB0: lfs     f2, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EB0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B4EB4:
    ctx->pc = 0x7F1B4EB4u;
    // 7F1B4EB4: fsubs   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EB4u)) return;
    ppc_fsubs(ctx, 0, 1, 2);

label_7F1B4EB8:
    ctx->pc = 0x7F1B4EB8u;
    // 7F1B4EB8: fnmsubs f0, f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EB8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[0], ctx->fpr[1], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B4EBC:
    ctx->pc = 0x7F1B4EBCu;
    // 7F1B4EBC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EBCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1B4EC0:
    ctx->pc = 0x7F1B4EC0u;
    // 7F1B4EC0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EC0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1B4EC4:
    ctx->pc = 0x7F1B4EC4u;
    // 7F1B4EC4: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EC4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4EC8:
    ctx->pc = 0x7F1B4EC8u;
    // 7F1B4EC8: lfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EC8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4ECC:
    ctx->pc = 0x7F1B4ECCu;
    // 7F1B4ECC: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B4ECCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F1B4ED0:
    // 7F1B4ED0: bc    4, 0, 0x7F1B4EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4EE0;
        }
    }

label_7F1B4ED4:
    ctx->downcount -= 3;
    // 7F1B4ED4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4ED8:
    ctx->pc = 0x7F1B4ED8u;
    // 7F1B4ED8: lfs     f0, 7248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4ED8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4EDC:
    ctx->pc = 0x7F1B4EDCu;
    // 7F1B4EDC: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EDCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4EE0:
    ctx->pc = 0x7F1B4EE0u;
    ctx->downcount -= 11;
    // 7F1B4EE0: lfs     f2, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EE0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B4EE4:
    // 7F1B4EE4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1B4EE8:
    ctx->pc = 0x7F1B4EE8u;
    // 7F1B4EE8: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EE8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B4EEC:
    // 7F1B4EEC: cmpwi   r27, 16
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B4EF0:
    ctx->pc = 0x7F1B4EF0u;
    // 7F1B4EF0: fnmsubs f0, f30, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EF0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[2], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B4EF4:
    // 7F1B4EF4: addi    r30, r30, 48
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(48);

label_7F1B4EF8:
    // 7F1B4EF8: addi    r31, r31, 48
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1B4EFC:
    ctx->pc = 0x7F1B4EFCu;
    // 7F1B4EFC: fnmsubs f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B4EFCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B4F00:
    ctx->pc = 0x7F1B4F00u;
    // 7F1B4F00: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B4F04:
    // 7F1B4F04: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1B4F08:
    // 7F1B4F08: bc    12, 0, 0x7F1B4D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4D58u;
                return;
            }
            goto label_7F1B4D58;
        }
    }

label_7F1B4F0C:
    ctx->pc = 0x7F1B4F0Cu;
    ctx->downcount -= 20;
    // 7F1B4F0C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B4F0Cu);
        if (ctx->exception) return;
    }

label_7F1B4F10:
    ctx->pc = 0x7F1B4F10u;
    // 7F1B4F10: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4F14:
    ctx->pc = 0x7F1B4F14u;
    // 7F1B4F14: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B4F14u);
        if (ctx->exception) return;
    }

label_7F1B4F18:
    ctx->pc = 0x7F1B4F18u;
    // 7F1B4F18: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B4F1C:
    ctx->pc = 0x7F1B4F1Cu;
    // 7F1B4F1C: lmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B4F20:
    ctx->pc = 0x7F1B4F20u;
    // 7F1B4F20: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4F24:
    ctx->pc = 0x7F1B4F24u;
    // 7F1B4F24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4F28:
    ctx->pc = 0x7F1B4F28u;
    // 7F1B4F28: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1B4F2C:
    ctx->pc = 0x7F1B4F2Cu;
    // 7F1B4F2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4F30:
    ctx->pc = 0x7F1B4F30u;
    ctx->downcount -= 6;
    // 7F1B4F30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4F34:
    ctx->pc = 0x7F1B4F34u;
    // 7F1B4F34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4F38:
    ctx->pc = 0x7F1B4F38u;
    // 7F1B4F38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4F3C:
    ctx->pc = 0x7F1B4F3Cu;
    // 7F1B4F3C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B4F40:
    ctx->pc = 0x7F1B4F40u;
    // 7F1B4F40: cmplwi  r3, 0x0000
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

label_7F1B4F44:
    ctx->pc = 0x7F1B4F44u;
    // 7F1B4F44: bc    12, 2, 0x7F1B4F4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4F4C;
        }
    }

label_7F1B4F48:
    ctx->pc = 0x7F1B4F48u;
    ctx->downcount -= 1;
    // 7F1B4F48: bl      0x7F3C2440
    {
            ctx->lr = 0x7F1B4F4Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F1B4F4C:
    ctx->pc = 0x7F1B4F4Cu;
    ctx->downcount -= 5;
    // 7F1B4F4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B4F50:
    ctx->pc = 0x7F1B4F50u;
    // 7F1B4F50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B4F54:
    ctx->pc = 0x7F1B4F54u;
    // 7F1B4F54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B4F58:
    ctx->pc = 0x7F1B4F58u;
    // 7F1B4F58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B4F5C:
    ctx->pc = 0x7F1B4F5Cu;
    ctx->downcount -= 29;
    // 7F1B4F5C: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B4F60:
    ctx->pc = 0x7F1B4F60u;
    // 7F1B4F60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B4F64:
    ctx->pc = 0x7F1B4F64u;
    // 7F1B4F64: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B4F68:
    ctx->pc = 0x7F1B4F68u;
    // 7F1B4F68: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B4F6C:
    ctx->pc = 0x7F1B4F6Cu;
    // 7F1B4F6C: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B4F6Cu);
        if (ctx->exception) return;
    }

label_7F1B4F70:
    ctx->pc = 0x7F1B4F70u;
    // 7F1B4F70: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1B4F74:
    ctx->pc = 0x7F1B4F74u;
    // 7F1B4F74: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B4F74u);
        if (ctx->exception) return;
    }

label_7F1B4F78:
    ctx->pc = 0x7F1B4F78u;
    // 7F1B4F78: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1B4F7C:
    ctx->pc = 0x7F1B4F7Cu;
    // 7F1B4F7C: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B4F7Cu);
        if (ctx->exception) return;
    }

label_7F1B4F80:
    ctx->pc = 0x7F1B4F80u;
    // 7F1B4F80: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1B4F84:
    ctx->pc = 0x7F1B4F84u;
    // 7F1B4F84: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B4F84u);
        if (ctx->exception) return;
    }

label_7F1B4F88:
    ctx->pc = 0x7F1B4F88u;
    // 7F1B4F88: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1B4F8C:
    ctx->pc = 0x7F1B4F8Cu;
    // 7F1B4F8C: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B4F8Cu);
        if (ctx->exception) return;
    }

label_7F1B4F90:
    ctx->pc = 0x7F1B4F90u;
    // 7F1B4F90: stmw     r22, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B4F94:
    ctx->pc = 0x7F1B4F94u;
    // 7F1B4F94: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B4F94u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_7F1B4F98:
    ctx->pc = 0x7F1B4F98u;
    // 7F1B4F98: cmplwi  r6, 0x0000
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

label_7F1B4F9C:
    ctx->pc = 0x7F1B4F9Cu;
    // 7F1B4F9C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B4FA0:
    ctx->pc = 0x7F1B4FA0u;
    // 7F1B4FA0: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B4FA4:
    ctx->pc = 0x7F1B4FA4u;
    // 7F1B4FA4: bc    12, 2, 0x7F1B4FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B4FB8;
        }
    }

label_7F1B4FA8:
    ctx->pc = 0x7F1B4FA8u;
    ctx->downcount -= 3;
    // 7F1B4FA8: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B4FAC:
    ctx->pc = 0x7F1B4FACu;
    // 7F1B4FAC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B4FB0:
    ctx->pc = 0x7F1B4FB0u;
    // 7F1B4FB0: bl      0x7F114F50
    {
            ctx->lr = 0x7F1B4FB4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1B4FB4:
    ctx->pc = 0x7F1B4FB4u;
    ctx->downcount -= 1;
    // 7F1B4FB4: b       0x7F1B4FD0
    {
            goto label_7F1B4FD0;
    }

label_7F1B4FB8:
    ctx->pc = 0x7F1B4FB8u;
    ctx->downcount -= 1;
    // 7F1B4FB8: bl      0x7F1B52A4
    {
            ctx->lr = 0x7F1B4FBCu;
            goto label_7F1B52A4;
    }

label_7F1B4FBC:
    ctx->pc = 0x7F1B4FBCu;
    ctx->downcount -= 2;
    // 7F1B4FBC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B4FC0:
    ctx->pc = 0x7F1B4FC0u;
    // 7F1B4FC0: bl      0x7F1B52A4
    {
            ctx->lr = 0x7F1B4FC4u;
            goto label_7F1B52A4;
    }

label_7F1B4FC4:
    ctx->pc = 0x7F1B4FC4u;
    ctx->downcount -= 2;
    // 7F1B4FC4: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B4FC8:
    ctx->pc = 0x7F1B4FC8u;
    // 7F1B4FC8: bl      0x7F1B52A4
    {
            ctx->lr = 0x7F1B4FCCu;
            goto label_7F1B52A4;
    }

label_7F1B4FCC:
    ctx->pc = 0x7F1B4FCCu;
    ctx->downcount -= 1;
    // 7F1B4FCC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B4FD0:
    ctx->pc = 0x7F1B4FD0u;
    ctx->downcount -= 4;
    // 7F1B4FD0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1B4FD4:
    ctx->pc = 0x7F1B4FD4u;
    // 7F1B4FD4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B4FD8:
    ctx->pc = 0x7F1B4FD8u;
    // 7F1B4FD8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B4FDC:
    ctx->pc = 0x7F1B4FDCu;
    // 7F1B4FDC: bl      0x7F22F07C
    {
            ctx->lr = 0x7F1B4FE0u;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F1B4FE0:
    ctx->pc = 0x7F1B4FE0u;
    ctx->downcount -= 17;
    // 7F1B4FE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4FE4:
    ctx->pc = 0x7F1B4FE4u;
    // 7F1B4FE4: lwz     r6, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B4FE8:
    ctx->pc = 0x7F1B4FE8u;
    // 7F1B4FE8: lfs     f0, 7252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B4FE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B4FEC:
    ctx->pc = 0x7F1B4FECu;
    // 7F1B4FEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B4FF0:
    ctx->pc = 0x7F1B4FF0u;
    // 7F1B4FF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B4FF4:
    ctx->pc = 0x7F1B4FF4u;
    // 7F1B4FF4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B4FF8:
    ctx->pc = 0x7F1B4FF8u;
    // 7F1B4FF8: fmuls   f28, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B4FF8u)) return;
    ppc_fmuls(ctx, 28, 0, 27);

label_7F1B4FFC:
    ctx->pc = 0x7F1B4FFCu;
    // 7F1B4FFC: lwz     r31, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5000:
    ctx->pc = 0x7F1B5000u;
    // 7F1B5000: lwz     r29, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1B5004:
    ctx->pc = 0x7F1B5004u;
    // 7F1B5004: addi    r30, r23, 52
    ctx->gpr[30] = ctx->gpr[23] + (u32)(s32)(52);

label_7F1B5008:
    ctx->pc = 0x7F1B5008u;
    // 7F1B5008: lfs     f30, 7268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5008u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1B500C:
    ctx->pc = 0x7F1B500Cu;
    // 7F1B500C: addi    r26, r23, 308
    ctx->gpr[26] = ctx->gpr[23] + (u32)(s32)(308);

label_7F1B5010:
    ctx->pc = 0x7F1B5010u;
    // 7F1B5010: lfd     f31, 7272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5010u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5014:
    ctx->pc = 0x7F1B5014u;
    // 7F1B5014: addi    r25, r23, 500
    ctx->gpr[25] = ctx->gpr[23] + (u32)(s32)(500);

label_7F1B5018:
    ctx->pc = 0x7F1B5018u;
    // 7F1B5018: lfs     f29, 7224(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5018u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1B501C:
    ctx->pc = 0x7F1B501Cu;
    // 7F1B501C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B5020:
    ctx->pc = 0x7F1B5020u;
    // 7F1B5020: lis     r22, 17200
    ctx->gpr[22] = ((u32)(s32)(17200) << 16);

label_7F1B5024:
    ctx->pc = 0x7F1B5024u;
    ctx->downcount -= 5;
    // 7F1B5024: stfs     f29, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5024u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1B5028:
    ctx->pc = 0x7F1B5028u;
    // 7F1B5028: fcmpo   cr0, f27, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B5028u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[27], ctx->fpr[29], true);

label_7F1B502C:
    ctx->pc = 0x7F1B502Cu;
    // 7F1B502C: stfs     f29, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B502Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1B5030:
    // 7F1B5030: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B5034:
    // 7F1B5034: bc    4, 2, 0x7F1B5058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5058;
        }
    }

label_7F1B5038:
    ctx->downcount -= 1;
    // 7F1B5038: bl      0x7F1B525C
    {
            ctx->lr = 0x7F1B503Cu;
            goto label_7F1B525C;
    }

label_7F1B503C:
    ctx->downcount -= 7;
    // 7F1B503C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B5040:
    // 7F1B5040: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5044:
    ctx->pc = 0x7F1B5044u;
    // 7F1B5044: lfs     f2, 7260(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5044u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B5048:
    ctx->pc = 0x7F1B5048u;
    // 7F1B5048: lfs     f0, 7256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5048u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B504C:
    ctx->pc = 0x7F1B504Cu;
    // 7F1B504C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B504Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B5050:
    ctx->pc = 0x7F1B5050u;
    // 7F1B5050: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5050u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5054:
    // 7F1B5054: b       0x7F1B5070
    {
            goto label_7F1B5070;
    }

label_7F1B5058:
    ctx->downcount -= 1;
    // 7F1B5058: bl      0x7F1B525C
    {
            ctx->lr = 0x7F1B505Cu;
            goto label_7F1B525C;
    }

label_7F1B505C:
    ctx->downcount -= 5;
    // 7F1B505C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5060:
    ctx->pc = 0x7F1B5060u;
    // 7F1B5060: lfs     f0, 7264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5060u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B5064:
    ctx->pc = 0x7F1B5064u;
    // 7F1B5064: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5064u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F1B5068:
    ctx->pc = 0x7F1B5068u;
    // 7F1B5068: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5068u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F1B506C:
    ctx->pc = 0x7F1B506Cu;
    // 7F1B506C: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B506Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5070:
    ctx->pc = 0x7F1B5070u;
    ctx->downcount -= 2;
    // 7F1B5070: stfs     f29, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5070u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1B5074:
    // 7F1B5074: bl      0x7F1B5238
    {
            ctx->lr = 0x7F1B5078u;
            goto label_7F1B5238;
    }

label_7F1B5078:
    ctx->downcount -= 50;
    // 7F1B5078: li      r4, 682
    ctx->gpr[4] = (u32)(s32)(682);

label_7F1B507C:
    // 7F1B507C: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1B5080:
    // 7F1B5080: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F1B5084:
    // 7F1B5084: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1B5088:
    // 7F1B5088: addi    r0, r3, -341
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-341);

label_7F1B508C:
    ctx->pc = 0x7F1B508Cu;
    // 7F1B508C: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B5090:
    // 7F1B5090: bl      0x7F1B5238
    {
            ctx->lr = 0x7F1B5094u;
            goto label_7F1B5238;
    }

label_7F1B5094:
    ctx->downcount -= 53;
    // 7F1B5094: li      r5, 682
    ctx->gpr[5] = (u32)(s32)(682);

label_7F1B5098:
    // 7F1B5098: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B509C:
    // 7F1B509C: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1B50A0:
    ctx->pc = 0x7F1B50A0u;
    // 7F1B50A0: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B50A4:
    // 7F1B50A4: mullw   r0, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F1B50A8:
    // 7F1B50A8: subf   r4, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F1B50AC:
    // 7F1B50AC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B50B0:
    // 7F1B50B0: addi    r0, r4, -341
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-341);

label_7F1B50B4:
    ctx->pc = 0x7F1B50B4u;
    // 7F1B50B4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B50B8:
    // 7F1B50B8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1B50BCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1B50BC:
    ctx->downcount -= 2;
    // 7F1B50BC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B50C0:
    // 7F1B50C0: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F1B50C4u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F1B50C4:
    ctx->downcount -= 4;
    // 7F1B50C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B50C8:
    // 7F1B50C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B50CC:
    // 7F1B50CC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B50D0:
    // 7F1B50D0: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1B50D4u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1B50D4:
    ctx->downcount -= 1;
    // 7F1B50D4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1B50D8:
    ctx->pc = 0x7F1B50D8u;
    ctx->downcount -= 10;
    // 7F1B50D8: lwz     r4, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B50DC:
    // 7F1B50DC: rlwinm. r0, r27, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B50E0:
    ctx->pc = 0x7F1B50E0u;
    // 7F1B50E0: lwz     r3, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B50E4:
    ctx->pc = 0x7F1B50E4u;
    // 7F1B50E4: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B50E8:
    ctx->pc = 0x7F1B50E8u;
    // 7F1B50E8: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B50EC:
    ctx->pc = 0x7F1B50ECu;
    // 7F1B50EC: lwz     r3, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B50F0:
    ctx->pc = 0x7F1B50F0u;
    // 7F1B50F0: lwz     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B50F4:
    ctx->pc = 0x7F1B50F4u;
    // 7F1B50F4: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B50F8:
    ctx->pc = 0x7F1B50F8u;
    // 7F1B50F8: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B50FC:
    // 7F1B50FC: bc    12, 2, 0x7F1B5110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5110;
        }
    }

label_7F1B5100:
    ctx->downcount -= 4;
    // 7F1B5100: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F1B5104:
    ctx->pc = 0x7F1B5104u;
    // 7F1B5104: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B5108:
    ctx->pc = 0x7F1B5108u;
    // 7F1B5108: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B510C:
    // 7F1B510C: b       0x7F1B511C
    {
            goto label_7F1B511C;
    }

label_7F1B5110:
    ctx->downcount -= 3;
    // 7F1B5110: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B5114:
    ctx->pc = 0x7F1B5114u;
    // 7F1B5114: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B5118:
    ctx->pc = 0x7F1B5118u;
    // 7F1B5118: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B511C:
    ctx->downcount -= 2;
    // 7F1B511C: cmpwi   r27, 0
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

label_7F1B5120:
    // 7F1B5120: bc    12, 2, 0x7F1B5130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5130;
        }
    }

label_7F1B5124:
    ctx->downcount -= 3;
    // 7F1B5124: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F1B5128:
    ctx->pc = 0x7F1B5128u;
    // 7F1B5128: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B512C:
    // 7F1B512C: b       0x7F1B513C
    {
            goto label_7F1B513C;
    }

label_7F1B5130:
    ctx->downcount -= 3;
    // 7F1B5130: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1B5134:
    // 7F1B5134: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F1B5138:
    ctx->pc = 0x7F1B5138u;
    // 7F1B5138: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B513C:
    ctx->downcount -= 5;
    // 7F1B513C: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F1B5140:
    // 7F1B5140: li      r0, 176
    ctx->gpr[0] = (u32)(s32)(176);

label_7F1B5144:
    ctx->pc = 0x7F1B5144u;
    // 7F1B5144: sth     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1B5148:
    ctx->pc = 0x7F1B5148u;
    // 7F1B5148: stb     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B514C:
    // 7F1B514C: bl      0x7F1B52A4
    {
            ctx->lr = 0x7F1B5150u;
            goto label_7F1B52A4;
    }

label_7F1B5150:
    ctx->pc = 0x7F1B5150u;
    ctx->downcount -= 29;
    // 7F1B5150: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5150u)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F1B5154:
    // 7F1B5154: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1B5158:
    // 7F1B5158: li      r0, 80
    ctx->gpr[0] = (u32)(s32)(80);

label_7F1B515C:
    ctx->pc = 0x7F1B515Cu;
    // 7F1B515C: stw     r22, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F1B5160:
    // 7F1B5160: cmpwi   r27, 3
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

label_7F1B5164:
    // 7F1B5164: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B5168:
    ctx->pc = 0x7F1B5168u;
    // 7F1B5168: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5168u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B516C:
    ctx->pc = 0x7F1B516Cu;
    // 7F1B516C: stw     r22, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F1B5170:
    ctx->pc = 0x7F1B5170u;
    // 7F1B5170: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B5174:
    ctx->pc = 0x7F1B5174u;
    // 7F1B5174: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B5178:
    // 7F1B5178: addi    r3, r3, 96
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(96);

label_7F1B517C:
    ctx->pc = 0x7F1B517Cu;
    // 7F1B517C: stb     r3, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1B5180:
    ctx->pc = 0x7F1B5180u;
    // 7F1B5180: stb     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B5184:
    ctx->pc = 0x7F1B5184u;
    // 7F1B5184: lwz     r0, 692(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5188:
    ctx->pc = 0x7F1B5188u;
    // 7F1B5188: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B518C:
    ctx->pc = 0x7F1B518Cu;
    // 7F1B518C: lbz     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1B5190:
    ctx->pc = 0x7F1B5190u;
    // 7F1B5190: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5194:
    ctx->pc = 0x7F1B5194u;
    // 7F1B5194: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5198:
    ctx->pc = 0x7F1B5198u;
    // 7F1B5198: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B5198u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1B519C:
    ctx->pc = 0x7F1B519Cu;
    // 7F1B519C: stfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1B519Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B51A0:
    // 7F1B51A0: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1B51A4:
    ctx->pc = 0x7F1B51A4u;
    // 7F1B51A4: lbz     r0, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1B51A8:
    // 7F1B51A8: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F1B51AC:
    ctx->pc = 0x7F1B51ACu;
    // 7F1B51AC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B51B0:
    ctx->pc = 0x7F1B51B0u;
    // 7F1B51B0: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B51B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B51B4:
    ctx->pc = 0x7F1B51B4u;
    // 7F1B51B4: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B51B4u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F1B51B8:
    ctx->pc = 0x7F1B51B8u;
    // 7F1B51B8: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1B51B8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B51BC:
    // 7F1B51BC: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F1B51C0:
    // 7F1B51C0: bc    12, 0, 0x7F1B50D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B50D8u;
                return;
            }
            goto label_7F1B50D8;
        }
    }

label_7F1B51C4:
    ctx->downcount -= 4;
    // 7F1B51C4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B51C8:
    // 7F1B51C8: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B51CC:
    // 7F1B51CC: cmpwi   r28, 16
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B51D0:
    // 7F1B51D0: bc    12, 0, 0x7F1B5024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B5024u;
                return;
            }
            goto label_7F1B5024;
        }
    }

label_7F1B51D4:
    ctx->pc = 0x7F1B51D4u;
    ctx->downcount -= 5;
    // 7F1B51D4: lwz     r4, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B51D8:
    ctx->pc = 0x7F1B51D8u;
    // 7F1B51D8: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F1B51DC:
    ctx->pc = 0x7F1B51DCu;
    // 7F1B51DC: lwz     r3, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B51E0:
    ctx->pc = 0x7F1B51E0u;
    // 7F1B51E0: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B51E4:
    ctx->pc = 0x7F1B51E4u;
    // 7F1B51E4: bl      0x8000519C
    {
            ctx->lr = 0x7F1B51E8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1B51E8:
    ctx->pc = 0x7F1B51E8u;
    ctx->downcount -= 5;
    // 7F1B51E8: lwz     r4, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B51EC:
    ctx->pc = 0x7F1B51ECu;
    // 7F1B51EC: li      r5, 576
    ctx->gpr[5] = (u32)(s32)(576);

label_7F1B51F0:
    ctx->pc = 0x7F1B51F0u;
    // 7F1B51F0: lwz     r3, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B51F4:
    ctx->pc = 0x7F1B51F4u;
    // 7F1B51F4: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B51F8:
    ctx->pc = 0x7F1B51F8u;
    // 7F1B51F8: bl      0x8000519C
    {
            ctx->lr = 0x7F1B51FCu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1B51FC:
    ctx->pc = 0x7F1B51FCu;
    ctx->downcount -= 26;
    // 7F1B51FC: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B51FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B51FCu);
        if (ctx->exception) return;
    }

label_7F1B5200:
    ctx->pc = 0x7F1B5200u;
    // 7F1B5200: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5200u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5204:
    ctx->pc = 0x7F1B5204u;
    // 7F1B5204: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B5204u);
        if (ctx->exception) return;
    }

label_7F1B5208:
    ctx->pc = 0x7F1B5208u;
    // 7F1B5208: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5208u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B520C:
    ctx->pc = 0x7F1B520Cu;
    // 7F1B520C: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B520Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B520Cu);
        if (ctx->exception) return;
    }

label_7F1B5210:
    ctx->pc = 0x7F1B5210u;
    // 7F1B5210: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5214:
    ctx->pc = 0x7F1B5214u;
    // 7F1B5214: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B5214u);
        if (ctx->exception) return;
    }

label_7F1B5218:
    ctx->pc = 0x7F1B5218u;
    // 7F1B5218: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B521C:
    ctx->pc = 0x7F1B521Cu;
    // 7F1B521C: psq_l   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B521Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B521Cu);
        if (ctx->exception) return;
    }

label_7F1B5220:
    ctx->pc = 0x7F1B5220u;
    // 7F1B5220: lfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5224:
    ctx->pc = 0x7F1B5224u;
    // 7F1B5224: lmw     r22, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B5228:
    ctx->pc = 0x7F1B5228u;
    // 7F1B5228: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B522C:
    ctx->pc = 0x7F1B522Cu;
    // 7F1B522C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5230:
    ctx->pc = 0x7F1B5230u;
    // 7F1B5230: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F1B5234:
    ctx->pc = 0x7F1B5234u;
    // 7F1B5234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5238:
    ctx->pc = 0x7F1B5238u;
    ctx->downcount -= 13;
    // 7F1B5238: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B523C:
    ctx->pc = 0x7F1B523Cu;
    // 7F1B523C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1B5240:
    ctx->pc = 0x7F1B5240u;
    // 7F1B5240: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1B5244:
    ctx->pc = 0x7F1B5244u;
    // 7F1B5244: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5248:
    ctx->pc = 0x7F1B5248u;
    // 7F1B5248: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1B524C:
    ctx->pc = 0x7F1B524Cu;
    // 7F1B524C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1B5250:
    ctx->pc = 0x7F1B5250u;
    // 7F1B5250: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B5254:
    ctx->pc = 0x7F1B5254u;
    // 7F1B5254: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B5258:
    ctx->pc = 0x7F1B5258u;
    // 7F1B5258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B525C:
    ctx->pc = 0x7F1B525Cu;
    ctx->downcount -= 4;
    // 7F1B525C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5260:
    ctx->pc = 0x7F1B5260u;
    // 7F1B5260: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5264:
    ctx->pc = 0x7F1B5264u;
    // 7F1B5264: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5268:
    ctx->pc = 0x7F1B5268u;
    // 7F1B5268: bl      0x7F1B5238
    {
            ctx->lr = 0x7F1B526Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B5238u;
                return;
            }
            goto label_7F1B5238;
    }

label_7F1B526C:
    ctx->pc = 0x7F1B526Cu;
    ctx->downcount -= 31;
    // 7F1B526C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5270:
    ctx->pc = 0x7F1B5270u;
    // 7F1B5270: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B5274:
    ctx->pc = 0x7F1B5274u;
    // 7F1B5274: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B5278:
    ctx->pc = 0x7F1B5278u;
    // 7F1B5278: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B527C:
    ctx->pc = 0x7F1B527Cu;
    // 7F1B527C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5280:
    ctx->pc = 0x7F1B5280u;
    // 7F1B5280: lfd     f2, 7272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5280u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7272);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5284:
    ctx->pc = 0x7F1B5284u;
    // 7F1B5284: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5284u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5288:
    ctx->pc = 0x7F1B5288u;
    // 7F1B5288: lfs     f0, 7280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5288u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B528C:
    ctx->pc = 0x7F1B528Cu;
    // 7F1B528C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B528Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B5290:
    ctx->pc = 0x7F1B5290u;
    // 7F1B5290: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5294:
    ctx->pc = 0x7F1B5294u;
    // 7F1B5294: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5294u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1B5298:
    ctx->pc = 0x7F1B5298u;
    // 7F1B5298: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B529C:
    ctx->pc = 0x7F1B529Cu;
    // 7F1B529C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B52A0:
    ctx->pc = 0x7F1B52A0u;
    // 7F1B52A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B52A4:
    ctx->pc = 0x7F1B52A4u;
    ctx->downcount -= 4;
    // 7F1B52A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B52A8:
    ctx->pc = 0x7F1B52A8u;
    // 7F1B52A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B52AC:
    ctx->pc = 0x7F1B52ACu;
    // 7F1B52AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B52B0:
    ctx->pc = 0x7F1B52B0u;
    // 7F1B52B0: bl      0x7F1B5238
    {
            ctx->lr = 0x7F1B52B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B5238u;
                return;
            }
            goto label_7F1B5238;
    }

label_7F1B52B4:
    ctx->pc = 0x7F1B52B4u;
    ctx->downcount -= 35;
    // 7F1B52B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B52B8:
    ctx->pc = 0x7F1B52B8u;
    // 7F1B52B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B52BC:
    ctx->pc = 0x7F1B52BCu;
    // 7F1B52BC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B52C0:
    ctx->pc = 0x7F1B52C0u;
    // 7F1B52C0: addi    r5, r4, 7272
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7272);

label_7F1B52C4:
    ctx->pc = 0x7F1B52C4u;
    // 7F1B52C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B52C8:
    ctx->pc = 0x7F1B52C8u;
    // 7F1B52C8: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B52C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B52CC:
    ctx->pc = 0x7F1B52CCu;
    // 7F1B52CC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B52D0:
    ctx->pc = 0x7F1B52D0u;
    // 7F1B52D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B52D4:
    ctx->pc = 0x7F1B52D4u;
    // 7F1B52D4: lfs     f1, 7284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B52D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B52D8:
    ctx->pc = 0x7F1B52D8u;
    // 7F1B52D8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B52D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B52DC:
    ctx->pc = 0x7F1B52DCu;
    // 7F1B52DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B52E0:
    ctx->pc = 0x7F1B52E0u;
    // 7F1B52E0: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B52E0u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1B52E4:
    ctx->pc = 0x7F1B52E4u;
    // 7F1B52E4: lfs     f0, 7264(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B52E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B52E8:
    ctx->pc = 0x7F1B52E8u;
    // 7F1B52E8: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B52E8u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1B52EC:
    ctx->pc = 0x7F1B52ECu;
    // 7F1B52EC: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B52ECu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1B52F0:
    ctx->pc = 0x7F1B52F0u;
    // 7F1B52F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B52F4:
    ctx->pc = 0x7F1B52F4u;
    // 7F1B52F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B52F8:
    ctx->pc = 0x7F1B52F8u;
    // 7F1B52F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B52FC:
    ctx->pc = 0x7F1B52FCu;
    ctx->downcount -= 26;
    // 7F1B52FC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5300:
    ctx->pc = 0x7F1B5300u;
    // 7F1B5300: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5304:
    ctx->pc = 0x7F1B5304u;
    // 7F1B5304: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5308:
    ctx->pc = 0x7F1B5308u;
    // 7F1B5308: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B530C:
    ctx->pc = 0x7F1B530Cu;
    // 7F1B530C: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B530Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B530Cu);
        if (ctx->exception) return;
    }

label_7F1B5310:
    ctx->pc = 0x7F1B5310u;
    // 7F1B5310: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B5314:
    ctx->pc = 0x7F1B5314u;
    // 7F1B5314: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5314u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1B5318:
    ctx->pc = 0x7F1B5318u;
    // 7F1B5318: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B531C:
    ctx->pc = 0x7F1B531Cu;
    // 7F1B531C: lis     r6, 11
    ctx->gpr[6] = ((u32)(s32)(11) << 16);

label_7F1B5320:
    ctx->pc = 0x7F1B5320u;
    // 7F1B5320: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5324:
    ctx->pc = 0x7F1B5324u;
    // 7F1B5324: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B5328:
    ctx->pc = 0x7F1B5328u;
    // 7F1B5328: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F1B532C:
    ctx->pc = 0x7F1B532Cu;
    // 7F1B532C: addi    r3, r6, 1
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1B5330:
    ctx->pc = 0x7F1B5330u;
    // 7F1B5330: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F1B5334:
    ctx->pc = 0x7F1B5334u;
    // 7F1B5334: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B5338:
    ctx->pc = 0x7F1B5338u;
    // 7F1B5338: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1B533Cu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1B533C:
    ctx->pc = 0x7F1B533Cu;
    ctx->downcount -= 3;
    // 7F1B533C: or.   r31, r3, r3
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

label_7F1B5340:
    ctx->pc = 0x7F1B5340u;
    // 7F1B5340: stw     r3, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B5344:
    ctx->pc = 0x7F1B5344u;
    // 7F1B5344: bc    4, 2, 0x7F1B5350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5350;
        }
    }

label_7F1B5348:
    ctx->pc = 0x7F1B5348u;
    ctx->downcount -= 2;
    // 7F1B5348: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B534C:
    ctx->pc = 0x7F1B534Cu;
    // 7F1B534C: b       0x7F1B53BC
    {
            goto label_7F1B53BC;
    }

label_7F1B5350:
    ctx->pc = 0x7F1B5350u;
    ctx->downcount -= 6;
    // 7F1B5350: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5354:
    ctx->pc = 0x7F1B5354u;
    // 7F1B5354: lis     r3, 112
    ctx->gpr[3] = ((u32)(s32)(112) << 16);

label_7F1B5358:
    ctx->pc = 0x7F1B5358u;
    // 7F1B5358: addi    r3, r3, -1039
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1039);

label_7F1B535C:
    ctx->pc = 0x7F1B535Cu;
    // 7F1B535C: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F1B5360:
    ctx->pc = 0x7F1B5360u;
    // 7F1B5360: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5364:
    ctx->pc = 0x7F1B5364u;
    // 7F1B5364: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1B5368u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1B5368:
    ctx->pc = 0x7F1B5368u;
    ctx->downcount -= 2;
    // 7F1B5368: or.   r30, r3, r3
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

label_7F1B536C:
    ctx->pc = 0x7F1B536Cu;
    // 7F1B536C: bc    4, 2, 0x7F1B5378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5378;
        }
    }

label_7F1B5370:
    ctx->pc = 0x7F1B5370u;
    ctx->downcount -= 2;
    // 7F1B5370: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B5374:
    ctx->pc = 0x7F1B5374u;
    // 7F1B5374: b       0x7F1B53BC
    {
            goto label_7F1B53BC;
    }

label_7F1B5378:
    ctx->pc = 0x7F1B5378u;
    ctx->downcount -= 3;
    // 7F1B5378: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B537C:
    ctx->pc = 0x7F1B537Cu;
    // 7F1B537C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B5380:
    ctx->pc = 0x7F1B5380u;
    // 7F1B5380: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1B5384u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1B5384:
    ctx->pc = 0x7F1B5384u;
    ctx->downcount -= 13;
    // 7F1B5384: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1B5388:
    ctx->pc = 0x7F1B5388u;
    // 7F1B5388: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B538C:
    ctx->pc = 0x7F1B538Cu;
    // 7F1B538C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5390:
    ctx->pc = 0x7F1B5390u;
    // 7F1B5390: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B5394:
    ctx->pc = 0x7F1B5394u;
    // 7F1B5394: lfs     f0, 7224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5394u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B5398:
    ctx->pc = 0x7F1B5398u;
    // 7F1B5398: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B5398u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F1B539C:
    ctx->pc = 0x7F1B539Cu;
    // 7F1B539C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B53A0:
    ctx->pc = 0x7F1B53A0u;
    // 7F1B53A0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1B53A4:
    ctx->pc = 0x7F1B53A4u;
    // 7F1B53A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B53A8:
    ctx->pc = 0x7F1B53A8u;
    // 7F1B53A8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B53AC:
    ctx->pc = 0x7F1B53ACu;
    // 7F1B53AC: stfs     f0, 700(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1B53ACu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(700);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B53B0:
    ctx->pc = 0x7F1B53B0u;
    // 7F1B53B0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B53B4:
    ctx->pc = 0x7F1B53B4u;
    // 7F1B53B4: bl      0x7F1B4F5C
    {
            ctx->lr = 0x7F1B53B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4F5Cu;
                return;
            }
            goto label_7F1B4F5C;
    }

label_7F1B53B8:
    ctx->pc = 0x7F1B53B8u;
    ctx->downcount -= 1;
    // 7F1B53B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B53BC:
    ctx->pc = 0x7F1B53BCu;
    ctx->downcount -= 18;
    // 7F1B53BC: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B53BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B53BCu);
        if (ctx->exception) return;
    }

label_7F1B53C0:
    ctx->pc = 0x7F1B53C0u;
    // 7F1B53C0: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B53C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B53C4:
    ctx->pc = 0x7F1B53C4u;
    // 7F1B53C4: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B53C8:
    ctx->pc = 0x7F1B53C8u;
    // 7F1B53C8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B53CC:
    ctx->pc = 0x7F1B53CCu;
    // 7F1B53CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B53D0:
    ctx->pc = 0x7F1B53D0u;
    // 7F1B53D0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B53D4:
    ctx->pc = 0x7F1B53D4u;
    // 7F1B53D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B53D8:
    ctx->pc = 0x7F1B53D8u;
    ctx->downcount -= 26;
    // 7F1B53D8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B53DC:
    ctx->pc = 0x7F1B53DCu;
    // 7F1B53DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B53E0:
    ctx->pc = 0x7F1B53E0u;
    // 7F1B53E0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B53E4:
    ctx->pc = 0x7F1B53E4u;
    // 7F1B53E4: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B53E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B53E8:
    ctx->pc = 0x7F1B53E8u;
    // 7F1B53E8: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B53E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B53E8u);
        if (ctx->exception) return;
    }

label_7F1B53EC:
    ctx->pc = 0x7F1B53ECu;
    // 7F1B53EC: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B53F0:
    ctx->pc = 0x7F1B53F0u;
    // 7F1B53F0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B53F0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1B53F4:
    ctx->pc = 0x7F1B53F4u;
    // 7F1B53F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B53F8:
    ctx->pc = 0x7F1B53F8u;
    // 7F1B53F8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B53FC:
    ctx->pc = 0x7F1B53FCu;
    // 7F1B53FC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B5400:
    ctx->pc = 0x7F1B5400u;
    // 7F1B5400: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B5404:
    ctx->pc = 0x7F1B5404u;
    // 7F1B5404: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1B5408:
    ctx->pc = 0x7F1B5408u;
    // 7F1B5408: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1B540C:
    ctx->pc = 0x7F1B540Cu;
    // 7F1B540C: li      r5, 704
    ctx->gpr[5] = (u32)(s32)(704);

label_7F1B5410:
    ctx->pc = 0x7F1B5410u;
    // 7F1B5410: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B5414:
    ctx->pc = 0x7F1B5414u;
    // 7F1B5414: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B5418u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B5418:
    ctx->pc = 0x7F1B5418u;
    ctx->downcount -= 2;
    // 7F1B5418: or.   r28, r3, r3
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

label_7F1B541C:
    ctx->pc = 0x7F1B541Cu;
    // 7F1B541C: bc    12, 2, 0x7F1B54B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B54B0;
        }
    }

label_7F1B5420:
    ctx->pc = 0x7F1B5420u;
    ctx->downcount -= 5;
    // 7F1B5420: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B5424:
    ctx->pc = 0x7F1B5424u;
    // 7F1B5424: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B5428:
    ctx->pc = 0x7F1B5428u;
    // 7F1B5428: addi    r4, r4, 19612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19612);

label_7F1B542C:
    ctx->pc = 0x7F1B542Cu;
    // 7F1B542C: addi    r5, r5, 20272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20272);

label_7F1B5430:
    ctx->pc = 0x7F1B5430u;
    // 7F1B5430: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B5434u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B5434:
    ctx->pc = 0x7F1B5434u;
    ctx->downcount -= 25;
    // 7F1B5434: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5438:
    ctx->pc = 0x7F1B5438u;
    // 7F1B5438: xoris   r6, r27, 0x8000
    ctx->gpr[6] = ctx->gpr[27] ^ (0x8000u << 16);

label_7F1B543C:
    ctx->pc = 0x7F1B543Cu;
    // 7F1B543C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5440:
    ctx->pc = 0x7F1B5440u;
    // 7F1B5440: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5444:
    ctx->pc = 0x7F1B5444u;
    // 7F1B5444: ori     r5, r4, 0x0080
    ctx->gpr[5] = ctx->gpr[4] | 0x0080u;

label_7F1B5448:
    ctx->pc = 0x7F1B5448u;
    // 7F1B5448: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B544C:
    ctx->pc = 0x7F1B544Cu;
    // 7F1B544C: stw     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B5450:
    ctx->pc = 0x7F1B5450u;
    // 7F1B5450: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B5454:
    ctx->pc = 0x7F1B5454u;
    // 7F1B5454: addi    r7, r4, 32548
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B5458:
    ctx->pc = 0x7F1B5458u;
    // 7F1B5458: lfd     f2, 7232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5458u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7232);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B545C:
    ctx->pc = 0x7F1B545Cu;
    // 7F1B545C: stw     r8, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B5460:
    ctx->pc = 0x7F1B5460u;
    // 7F1B5460: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B5460u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F1B5464:
    ctx->pc = 0x7F1B5464u;
    // 7F1B5464: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B5468:
    ctx->pc = 0x7F1B5468u;
    // 7F1B5468: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B546C:
    ctx->pc = 0x7F1B546Cu;
    // 7F1B546C: stw     r8, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B5470:
    ctx->pc = 0x7F1B5470u;
    // 7F1B5470: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B5474:
    ctx->pc = 0x7F1B5474u;
    // 7F1B5474: stw     r8, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B5478:
    ctx->pc = 0x7F1B5478u;
    // 7F1B5478: stw     r7, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B547C:
    ctx->pc = 0x7F1B547Cu;
    // 7F1B547C: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B5480:
    ctx->pc = 0x7F1B5480u;
    // 7F1B5480: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5484:
    ctx->pc = 0x7F1B5484u;
    // 7F1B5484: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5484u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5488:
    ctx->pc = 0x7F1B5488u;
    // 7F1B5488: stw     r31, 692(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B548C:
    ctx->pc = 0x7F1B548Cu;
    // 7F1B548C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B548Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1B5490:
    ctx->pc = 0x7F1B5490u;
    // 7F1B5490: stfs     f0, 696(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5490u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5494:
    ctx->pc = 0x7F1B5494u;
    // 7F1B5494: bl      0x7F1B52FC
    {
            ctx->lr = 0x7F1B5498u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B52FCu;
                return;
            }
            goto label_7F1B52FC;
    }

label_7F1B5498:
    ctx->pc = 0x7F1B5498u;
    ctx->downcount -= 2;
    // 7F1B5498: cmpwi   r3, 0
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

label_7F1B549C:
    ctx->pc = 0x7F1B549Cu;
    // 7F1B549C: bc    4, 0, 0x7F1B54B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B54B0;
        }
    }

label_7F1B54A0:
    ctx->pc = 0x7F1B54A0u;
    ctx->downcount -= 2;
    // 7F1B54A0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B54A4:
    ctx->pc = 0x7F1B54A4u;
    // 7F1B54A4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B54A8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B54A8:
    ctx->pc = 0x7F1B54A8u;
    ctx->downcount -= 2;
    // 7F1B54A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B54AC:
    ctx->pc = 0x7F1B54ACu;
    // 7F1B54AC: b       0x7F1B54B4
    {
            goto label_7F1B54B4;
    }

label_7F1B54B0:
    ctx->pc = 0x7F1B54B0u;
    ctx->downcount -= 1;
    // 7F1B54B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B54B4:
    ctx->pc = 0x7F1B54B4u;
    ctx->downcount -= 18;
    // 7F1B54B4: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B54B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B54B4u);
        if (ctx->exception) return;
    }

label_7F1B54B8:
    ctx->pc = 0x7F1B54B8u;
    // 7F1B54B8: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B54B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B54BC:
    ctx->pc = 0x7F1B54BCu;
    // 7F1B54BC: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B54C0:
    ctx->pc = 0x7F1B54C0u;
    // 7F1B54C0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B54C4:
    ctx->pc = 0x7F1B54C4u;
    // 7F1B54C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B54C8:
    ctx->pc = 0x7F1B54C8u;
    // 7F1B54C8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1B54CC:
    ctx->pc = 0x7F1B54CCu;
    // 7F1B54CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B54D0:
    ctx->pc = 0x7F1B54D0u;
    ctx->downcount -= 5;
    // 7F1B54D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B54D4:
    ctx->pc = 0x7F1B54D4u;
    // 7F1B54D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B54D8:
    ctx->pc = 0x7F1B54D8u;
    // 7F1B54D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B54DC:
    ctx->pc = 0x7F1B54DCu;
    // 7F1B54DC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B54E0:
    ctx->pc = 0x7F1B54E0u;
    // 7F1B54E0: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B54E4u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B54E4:
    ctx->pc = 0x7F1B54E4u;
    ctx->downcount -= 1;
    // 7F1B54E4: bl      0x7F1994CC
    {
            ctx->lr = 0x7F1B54E8u;
            ctx->pc = 0x7F1994CCu;
            return;
    }

label_7F1B54E8:
    ctx->pc = 0x7F1B54E8u;
    ctx->downcount -= 1;
    // 7F1B54E8: bl      0x7F1B4BE4
    {
            ctx->lr = 0x7F1B54ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B4BE4u;
                return;
            }
            goto label_7F1B4BE4;
    }

label_7F1B54EC:
    ctx->pc = 0x7F1B54ECu;
    ctx->downcount -= 5;
    // 7F1B54EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B54F0:
    ctx->pc = 0x7F1B54F0u;
    // 7F1B54F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B54F4:
    ctx->pc = 0x7F1B54F4u;
    // 7F1B54F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B54F8:
    ctx->pc = 0x7F1B54F8u;
    // 7F1B54F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B54FC:
    ctx->pc = 0x7F1B54FCu;
    ctx->downcount -= 7;
    // 7F1B54FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5500:
    ctx->pc = 0x7F1B5500u;
    // 7F1B5500: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5504:
    ctx->pc = 0x7F1B5504u;
    // 7F1B5504: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5508:
    ctx->pc = 0x7F1B5508u;
    // 7F1B5508: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B550C:
    ctx->pc = 0x7F1B550Cu;
    // 7F1B550C: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B550Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5510:
    ctx->pc = 0x7F1B5510u;
    // 7F1B5510: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5514:
    ctx->pc = 0x7F1B5514u;
    // 7F1B5514: bl      0x7F2CB23C
    {
            ctx->lr = 0x7F1B5518u;
            ctx->pc = 0x7F2CB23Cu;
            return;
    }

label_7F1B5518:
    ctx->pc = 0x7F1B5518u;
    ctx->downcount -= 5;
    // 7F1B5518: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B551C:
    ctx->pc = 0x7F1B551Cu;
    // 7F1B551C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5520:
    ctx->pc = 0x7F1B5520u;
    // 7F1B5520: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5524:
    ctx->pc = 0x7F1B5524u;
    // 7F1B5524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5528:
    ctx->pc = 0x7F1B5528u;
    ctx->downcount -= 9;
    // 7F1B5528: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B552C:
    ctx->pc = 0x7F1B552Cu;
    // 7F1B552C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5530:
    ctx->pc = 0x7F1B5530u;
    // 7F1B5530: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5534:
    ctx->pc = 0x7F1B5534u;
    // 7F1B5534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5538:
    ctx->pc = 0x7F1B5538u;
    // 7F1B5538: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B553C:
    ctx->pc = 0x7F1B553Cu;
    // 7F1B553C: addi    r4, r6, 16
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16);

label_7F1B5540:
    ctx->pc = 0x7F1B5540u;
    // 7F1B5540: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5544:
    ctx->pc = 0x7F1B5544u;
    // 7F1B5544: lwz     r6, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5548:
    ctx->pc = 0x7F1B5548u;
    // 7F1B5548: bl      0x7F2CB774
    {
            ctx->lr = 0x7F1B554Cu;
            ctx->pc = 0x7F2CB774u;
            return;
    }

label_7F1B554C:
    ctx->pc = 0x7F1B554Cu;
    ctx->downcount -= 5;
    // 7F1B554C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5550:
    ctx->pc = 0x7F1B5550u;
    // 7F1B5550: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5554:
    ctx->pc = 0x7F1B5554u;
    // 7F1B5554: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5558:
    ctx->pc = 0x7F1B5558u;
    // 7F1B5558: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B555C:
    ctx->pc = 0x7F1B555Cu;
    ctx->downcount -= 4;
    // 7F1B555C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5560:
    ctx->pc = 0x7F1B5560u;
    // 7F1B5560: lwz     r4, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5564:
    ctx->pc = 0x7F1B5564u;
    // 7F1B5564: cmplwi  r4, 0x0000
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

label_7F1B5568:
    ctx->pc = 0x7F1B5568u;
    // 7F1B5568: bc    12, 2, 0x7F1B558C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B558C;
        }
    }

label_7F1B556C:
    ctx->pc = 0x7F1B556Cu;
    ctx->downcount -= 3;
    // 7F1B556C: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5570:
    ctx->pc = 0x7F1B5570u;
    // 7F1B5570: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B5574:
    ctx->pc = 0x7F1B5574u;
    // 7F1B5574: bc    4, 2, 0x7F1B558C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B558C;
        }
    }

label_7F1B5578:
    ctx->pc = 0x7F1B5578u;
    ctx->downcount -= 5;
    // 7F1B5578: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B557C:
    ctx->pc = 0x7F1B557Cu;
    // 7F1B557C: lfs     f0, 100(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B557Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B5580:
    ctx->pc = 0x7F1B5580u;
    // 7F1B5580: lfs     f1, 9480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5580u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5584:
    ctx->pc = 0x7F1B5584u;
    // 7F1B5584: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5584u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1B5588:
    ctx->pc = 0x7F1B5588u;
    // 7F1B5588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B558C:
    ctx->pc = 0x7F1B558Cu;
    ctx->downcount -= 3;
    // 7F1B558C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5590:
    ctx->pc = 0x7F1B5590u;
    // 7F1B5590: lfs     f1, 9480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5590u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5594:
    ctx->pc = 0x7F1B5594u;
    // 7F1B5594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5598:
    ctx->pc = 0x7F1B5598u;
    ctx->downcount -= 4;
    // 7F1B5598: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B559C:
    ctx->pc = 0x7F1B559Cu;
    // 7F1B559C: lwz     r4, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B55A0:
    ctx->pc = 0x7F1B55A0u;
    // 7F1B55A0: cmplwi  r4, 0x0000
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

label_7F1B55A4:
    ctx->pc = 0x7F1B55A4u;
    // 7F1B55A4: bc    12, 2, 0x7F1B55C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B55C8;
        }
    }

label_7F1B55A8:
    ctx->pc = 0x7F1B55A8u;
    ctx->downcount -= 3;
    // 7F1B55A8: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B55AC:
    ctx->pc = 0x7F1B55ACu;
    // 7F1B55AC: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B55B0:
    ctx->pc = 0x7F1B55B0u;
    // 7F1B55B0: bc    4, 2, 0x7F1B55C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B55C8;
        }
    }

label_7F1B55B4:
    ctx->pc = 0x7F1B55B4u;
    ctx->downcount -= 5;
    // 7F1B55B4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B55B8:
    ctx->pc = 0x7F1B55B8u;
    // 7F1B55B8: lfs     f0, 120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B55B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B55BC:
    ctx->pc = 0x7F1B55BCu;
    // 7F1B55BC: lfs     f1, 9480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B55BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B55C0:
    ctx->pc = 0x7F1B55C0u;
    // 7F1B55C0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B55C0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1B55C4:
    ctx->pc = 0x7F1B55C4u;
    // 7F1B55C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B55C8:
    ctx->pc = 0x7F1B55C8u;
    ctx->downcount -= 3;
    // 7F1B55C8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B55CC:
    ctx->pc = 0x7F1B55CCu;
    // 7F1B55CC: lfs     f1, 9480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B55CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B55D0:
    ctx->pc = 0x7F1B55D0u;
    // 7F1B55D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B55D4:
    ctx->pc = 0x7F1B55D4u;
    ctx->downcount -= 4;
    // 7F1B55D4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B55D8:
    ctx->pc = 0x7F1B55D8u;
    // 7F1B55D8: lwz     r4, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B55DC:
    ctx->pc = 0x7F1B55DCu;
    // 7F1B55DC: cmplwi  r4, 0x0000
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

label_7F1B55E0:
    ctx->pc = 0x7F1B55E0u;
    // 7F1B55E0: bc    12, 2, 0x7F1B5604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5604;
        }
    }

label_7F1B55E4:
    ctx->pc = 0x7F1B55E4u;
    ctx->downcount -= 3;
    // 7F1B55E4: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B55E8:
    ctx->pc = 0x7F1B55E8u;
    // 7F1B55E8: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B55EC:
    ctx->pc = 0x7F1B55ECu;
    // 7F1B55EC: bc    4, 2, 0x7F1B5604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5604;
        }
    }

label_7F1B55F0:
    ctx->pc = 0x7F1B55F0u;
    ctx->downcount -= 5;
    // 7F1B55F0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B55F4:
    ctx->pc = 0x7F1B55F4u;
    // 7F1B55F4: lfs     f0, 60(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B55F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B55F8:
    ctx->pc = 0x7F1B55F8u;
    // 7F1B55F8: lfs     f1, 9484(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B55F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B55FC:
    ctx->pc = 0x7F1B55FCu;
    // 7F1B55FC: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B55FCu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1B5600:
    ctx->pc = 0x7F1B5600u;
    // 7F1B5600: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5604:
    ctx->pc = 0x7F1B5604u;
    ctx->downcount -= 3;
    // 7F1B5604: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5608:
    ctx->pc = 0x7F1B5608u;
    // 7F1B5608: lfs     f1, 9484(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B560C:
    ctx->pc = 0x7F1B560Cu;
    // 7F1B560C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5610:
    ctx->pc = 0x7F1B5610u;
    ctx->downcount -= 4;
    // 7F1B5610: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5614:
    ctx->pc = 0x7F1B5614u;
    // 7F1B5614: lwz     r4, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5618:
    ctx->pc = 0x7F1B5618u;
    // 7F1B5618: cmplwi  r4, 0x0000
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

label_7F1B561C:
    ctx->pc = 0x7F1B561Cu;
    // 7F1B561C: bc    12, 2, 0x7F1B5640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5640;
        }
    }

label_7F1B5620:
    ctx->pc = 0x7F1B5620u;
    ctx->downcount -= 3;
    // 7F1B5620: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5624:
    ctx->pc = 0x7F1B5624u;
    // 7F1B5624: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B5628:
    ctx->pc = 0x7F1B5628u;
    // 7F1B5628: bc    4, 2, 0x7F1B5640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5640;
        }
    }

label_7F1B562C:
    ctx->pc = 0x7F1B562Cu;
    ctx->downcount -= 5;
    // 7F1B562C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5630:
    ctx->pc = 0x7F1B5630u;
    // 7F1B5630: lfs     f0, 80(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5630u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B5634:
    ctx->pc = 0x7F1B5634u;
    // 7F1B5634: lfs     f1, 9484(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5634u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5638:
    ctx->pc = 0x7F1B5638u;
    // 7F1B5638: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B5638u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1B563C:
    ctx->pc = 0x7F1B563Cu;
    // 7F1B563C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5640:
    ctx->pc = 0x7F1B5640u;
    ctx->downcount -= 3;
    // 7F1B5640: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5644:
    ctx->pc = 0x7F1B5644u;
    // 7F1B5644: lfs     f1, 9484(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5644u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(9484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5648:
    ctx->pc = 0x7F1B5648u;
    // 7F1B5648: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B564C:
    ctx->pc = 0x7F1B564Cu;
    ctx->downcount -= 14;
    // 7F1B564C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5650:
    ctx->pc = 0x7F1B5650u;
    // 7F1B5650: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1B5654:
    ctx->pc = 0x7F1B5654u;
    // 7F1B5654: addi    r6, r6, 5000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(5000);

label_7F1B5658:
    ctx->pc = 0x7F1B5658u;
    // 7F1B5658: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B565C:
    ctx->pc = 0x7F1B565Cu;
    // 7F1B565C: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B5660:
    ctx->pc = 0x7F1B5660u;
    // 7F1B5660: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1B5664:
    ctx->pc = 0x7F1B5664u;
    // 7F1B5664: mulli   r0, r0, 5
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)5);

label_7F1B5668:
    ctx->pc = 0x7F1B5668u;
    // 7F1B5668: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B566C:
    ctx->pc = 0x7F1B566Cu;
    // 7F1B566C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5670:
    ctx->pc = 0x7F1B5670u;
    // 7F1B5670: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5674:
    ctx->pc = 0x7F1B5674u;
    // 7F1B5674: cmpw    r0, r5
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

label_7F1B5678:
    ctx->pc = 0x7F1B5678u;
    // 7F1B5678: bc    4, 1, 0x7F1B5690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5690;
        }
    }

label_7F1B567C:
    ctx->pc = 0x7F1B567Cu;
    ctx->downcount -= 5;
    // 7F1B567C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B5680:
    ctx->pc = 0x7F1B5680u;
    // 7F1B5680: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1B5684:
    ctx->pc = 0x7F1B5684u;
    // 7F1B5684: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5688:
    ctx->pc = 0x7F1B5688u;
    // 7F1B5688: lfs     f3, 7296(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5688u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B568C:
    ctx->pc = 0x7F1B568Cu;
    // 7F1B568C: b       0x7F1B56C8
    {
            goto label_7F1B56C8;
    }

label_7F1B5690:
    ctx->pc = 0x7F1B5690u;
    ctx->downcount -= 30;
    // 7F1B5690: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1B5694:
    ctx->pc = 0x7F1B5694u;
    // 7F1B5694: xoris   r6, r0, 0x8000
    ctx->gpr[6] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1B5698:
    ctx->pc = 0x7F1B5698u;
    // 7F1B5698: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B569C:
    ctx->pc = 0x7F1B569Cu;
    // 7F1B569C: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F1B56A0:
    ctx->pc = 0x7F1B56A0u;
    // 7F1B56A0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B56A4:
    ctx->pc = 0x7F1B56A4u;
    // 7F1B56A4: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B56A8:
    ctx->pc = 0x7F1B56A8u;
    // 7F1B56A8: lfd     f4, 7288(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B56A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7288);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B56AC:
    ctx->pc = 0x7F1B56ACu;
    // 7F1B56AC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B56ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B56B0:
    ctx->pc = 0x7F1B56B0u;
    // 7F1B56B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B56B4:
    ctx->pc = 0x7F1B56B4u;
    // 7F1B56B4: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1B56B4u)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_7F1B56B8:
    ctx->pc = 0x7F1B56B8u;
    // 7F1B56B8: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B56BC:
    ctx->pc = 0x7F1B56BCu;
    // 7F1B56BC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B56BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B56C0:
    ctx->pc = 0x7F1B56C0u;
    // 7F1B56C0: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1B56C0u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F1B56C4:
    ctx->pc = 0x7F1B56C4u;
    // 7F1B56C4: fdivs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B56C4u)) return;
    ppc_fdivs(ctx, 3, 3, 0);

label_7F1B56C8:
    ctx->pc = 0x7F1B56C8u;
    ctx->downcount -= 5;
    // 7F1B56C8: fsubs   f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B56C8u)) return;
    ppc_fsubs(ctx, 0, 2, 1);

label_7F1B56CC:
    ctx->pc = 0x7F1B56CCu;
    // 7F1B56CC: fmadds f0, f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B56CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[0], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1B56D0:
    ctx->pc = 0x7F1B56D0u;
    // 7F1B56D0: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B56D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B56D4:
    ctx->pc = 0x7F1B56D4u;
    // 7F1B56D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B56D8:
    ctx->pc = 0x7F1B56D8u;
    // 7F1B56D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B56DC:
    ctx->pc = 0x7F1B56DCu;
    ctx->downcount -= 8;
    // 7F1B56DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B56E0:
    ctx->pc = 0x7F1B56E0u;
    // 7F1B56E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B56E4:
    ctx->pc = 0x7F1B56E4u;
    // 7F1B56E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B56E8:
    ctx->pc = 0x7F1B56E8u;
    // 7F1B56E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B56EC:
    ctx->pc = 0x7F1B56ECu;
    // 7F1B56EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B56F0:
    ctx->pc = 0x7F1B56F0u;
    // 7F1B56F0: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B56F4:
    ctx->pc = 0x7F1B56F4u;
    // 7F1B56F4: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B56F8:
    ctx->pc = 0x7F1B56F8u;
    // 7F1B56F8: bc    4, 2, 0x7F1B578C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B578C;
        }
    }

label_7F1B56FC:
    ctx->pc = 0x7F1B56FCu;
    ctx->downcount -= 3;
    // 7F1B56FC: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5700:
    ctx->pc = 0x7F1B5700u;
    // 7F1B5700: cmpwi   r0, 0
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

label_7F1B5704:
    ctx->pc = 0x7F1B5704u;
    // 7F1B5704: bc    12, 0, 0x7F1B5720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5720;
        }
    }

label_7F1B5708:
    ctx->pc = 0x7F1B5708u;
    ctx->downcount -= 6;
    // 7F1B5708: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5708u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B570C:
    ctx->pc = 0x7F1B570Cu;
    // 7F1B570C: addi    r3, r31, 60
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(60);

label_7F1B5710:
    ctx->pc = 0x7F1B5710u;
    // 7F1B5710: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5710u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B5714:
    ctx->pc = 0x7F1B5714u;
    // 7F1B5714: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1B5718:
    ctx->pc = 0x7F1B5718u;
    // 7F1B5718: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B571C:
    ctx->pc = 0x7F1B571Cu;
    // 7F1B571C: bl      0x7F1B564C
    {
            ctx->lr = 0x7F1B5720u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B564Cu;
                return;
            }
            goto label_7F1B564C;
    }

label_7F1B5720:
    ctx->pc = 0x7F1B5720u;
    ctx->downcount -= 3;
    // 7F1B5720: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5724:
    ctx->pc = 0x7F1B5724u;
    // 7F1B5724: cmpwi   r0, 0
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

label_7F1B5728:
    ctx->pc = 0x7F1B5728u;
    // 7F1B5728: bc    12, 0, 0x7F1B5744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5744;
        }
    }

label_7F1B572C:
    ctx->pc = 0x7F1B572Cu;
    ctx->downcount -= 6;
    // 7F1B572C: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B572Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5730:
    ctx->pc = 0x7F1B5730u;
    // 7F1B5730: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B5734:
    ctx->pc = 0x7F1B5734u;
    // 7F1B5734: lfs     f2, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B5738:
    ctx->pc = 0x7F1B5738u;
    // 7F1B5738: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_7F1B573C:
    ctx->pc = 0x7F1B573Cu;
    // 7F1B573C: lwz     r5, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5740:
    ctx->pc = 0x7F1B5740u;
    // 7F1B5740: bl      0x7F1B564C
    {
            ctx->lr = 0x7F1B5744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B564Cu;
                return;
            }
            goto label_7F1B564C;
    }

label_7F1B5744:
    ctx->pc = 0x7F1B5744u;
    ctx->downcount -= 3;
    // 7F1B5744: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5748:
    ctx->pc = 0x7F1B5748u;
    // 7F1B5748: cmpwi   r0, 0
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

label_7F1B574C:
    ctx->pc = 0x7F1B574Cu;
    // 7F1B574C: bc    12, 0, 0x7F1B5768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5768;
        }
    }

label_7F1B5750:
    ctx->pc = 0x7F1B5750u;
    ctx->downcount -= 6;
    // 7F1B5750: lfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5750u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5754:
    ctx->pc = 0x7F1B5754u;
    // 7F1B5754: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_7F1B5758:
    ctx->pc = 0x7F1B5758u;
    // 7F1B5758: lfs     f2, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5758u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B575C:
    ctx->pc = 0x7F1B575Cu;
    // 7F1B575C: addi    r4, r31, 104
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(104);

label_7F1B5760:
    ctx->pc = 0x7F1B5760u;
    // 7F1B5760: lwz     r5, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5764:
    ctx->pc = 0x7F1B5764u;
    // 7F1B5764: bl      0x7F1B564C
    {
            ctx->lr = 0x7F1B5768u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B564Cu;
                return;
            }
            goto label_7F1B564C;
    }

label_7F1B5768:
    ctx->pc = 0x7F1B5768u;
    ctx->downcount -= 3;
    // 7F1B5768: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B576C:
    ctx->pc = 0x7F1B576Cu;
    // 7F1B576C: cmpwi   r0, 0
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

label_7F1B5770:
    ctx->pc = 0x7F1B5770u;
    // 7F1B5770: bc    12, 0, 0x7F1B578C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B578C;
        }
    }

label_7F1B5774:
    ctx->pc = 0x7F1B5774u;
    ctx->downcount -= 6;
    // 7F1B5774: lfs     f1, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5774u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5778:
    ctx->pc = 0x7F1B5778u;
    // 7F1B5778: addi    r3, r31, 120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(120);

label_7F1B577C:
    ctx->pc = 0x7F1B577Cu;
    // 7F1B577C: lfs     f2, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B577Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B5780:
    ctx->pc = 0x7F1B5780u;
    // 7F1B5780: addi    r4, r31, 124
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(124);

label_7F1B5784:
    ctx->pc = 0x7F1B5784u;
    // 7F1B5784: lwz     r5, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5788:
    ctx->pc = 0x7F1B5788u;
    // 7F1B5788: bl      0x7F1B564C
    {
            ctx->lr = 0x7F1B578Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B564Cu;
                return;
            }
            goto label_7F1B564C;
    }

label_7F1B578C:
    ctx->pc = 0x7F1B578Cu;
    ctx->downcount -= 6;
    // 7F1B578C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5790:
    ctx->pc = 0x7F1B5790u;
    // 7F1B5790: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5794:
    ctx->pc = 0x7F1B5794u;
    // 7F1B5794: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5798:
    ctx->pc = 0x7F1B5798u;
    // 7F1B5798: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B579C:
    ctx->pc = 0x7F1B579Cu;
    // 7F1B579C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B57A0:
    ctx->pc = 0x7F1B57A0u;
    ctx->downcount -= 4;
    // 7F1B57A0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B57A4:
    ctx->pc = 0x7F1B57A4u;
    // 7F1B57A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B57A8:
    ctx->pc = 0x7F1B57A8u;
    // 7F1B57A8: stw     r0, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B57AC:
    ctx->pc = 0x7F1B57ACu;
    // 7F1B57AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B57B0:
    ctx->pc = 0x7F1B57B0u;
    ctx->downcount -= 2;
    // 7F1B57B0: cmpwi   r6, 0
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

label_7F1B57B4:
    ctx->pc = 0x7F1B57B4u;
    // 7F1B57B4: bc    4, 2, 0x7F1B57BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B57BC;
        }
    }

label_7F1B57B8:
    ctx->pc = 0x7F1B57B8u;
    ctx->downcount -= 1;
    // 7F1B57B8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1B57BC:
    ctx->pc = 0x7F1B57BCu;
    ctx->downcount -= 5;
    // 7F1B57BC: stfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B57BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B57C0:
    ctx->pc = 0x7F1B57C0u;
    // 7F1B57C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B57C4:
    ctx->pc = 0x7F1B57C4u;
    // 7F1B57C4: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B57C8:
    ctx->pc = 0x7F1B57C8u;
    // 7F1B57C8: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B57CC:
    ctx->pc = 0x7F1B57CCu;
    // 7F1B57CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B57D0:
    ctx->pc = 0x7F1B57D0u;
    ctx->downcount -= 18;
    // 7F1B57D0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B57D4:
    ctx->pc = 0x7F1B57D4u;
    // 7F1B57D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B57D8:
    ctx->pc = 0x7F1B57D8u;
    // 7F1B57D8: cmplwi  r4, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B57DC:
    ctx->pc = 0x7F1B57DCu;
    // 7F1B57DC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B57E0:
    ctx->pc = 0x7F1B57E0u;
    // 7F1B57E0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B57E4:
    ctx->pc = 0x7F1B57E4u;
    // 7F1B57E4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B57E8:
    ctx->pc = 0x7F1B57E8u;
    // 7F1B57E8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B57EC:
    ctx->pc = 0x7F1B57ECu;
    // 7F1B57EC: bc    12, 1, 0x7F1B5AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5AE4;
        }
    }

label_7F1B57F0:
    ctx->pc = 0x7F1B57F0u;
    ctx->downcount -= 7;
    // 7F1B57F0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B57F4:
    ctx->pc = 0x7F1B57F4u;
    // 7F1B57F4: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F1B57F8:
    ctx->pc = 0x7F1B57F8u;
    // 7F1B57F8: addi    r3, r3, -6600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6600);

label_7F1B57FC:
    ctx->pc = 0x7F1B57FCu;
    // 7F1B57FC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5800:
    ctx->pc = 0x7F1B5800u;
    // 7F1B5800: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B5804:
    ctx->pc = 0x7F1B5804u;
    // 7F1B5804: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F1B5808:
    ctx->pc = 0x7F1B5808u;
    ctx->downcount -= 4;
    // 7F1B5808: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B580C:
    ctx->pc = 0x7F1B580Cu;
    // 7F1B580C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F1B5810:
    ctx->pc = 0x7F1B5810u;
    // 7F1B5810: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5814:
    ctx->pc = 0x7F1B5814u;
    // 7F1B5814: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5818:
    ctx->pc = 0x7F1B5818u;
    ctx->downcount -= 4;
    // 7F1B5818: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B581C:
    ctx->pc = 0x7F1B581Cu;
    // 7F1B581C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F1B5820:
    ctx->pc = 0x7F1B5820u;
    // 7F1B5820: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5824:
    ctx->pc = 0x7F1B5824u;
    // 7F1B5824: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5828:
    ctx->pc = 0x7F1B5828u;
    ctx->downcount -= 14;
    // 7F1B5828: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B582C:
    ctx->pc = 0x7F1B582Cu;
    // 7F1B582C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5830:
    ctx->pc = 0x7F1B5830u;
    // 7F1B5830: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5834:
    ctx->pc = 0x7F1B5834u;
    // 7F1B5834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5838:
    ctx->pc = 0x7F1B5838u;
    // 7F1B5838: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B583C:
    ctx->pc = 0x7F1B583Cu;
    // 7F1B583C: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B583Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5840:
    ctx->pc = 0x7F1B5840u;
    // 7F1B5840: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5844:
    ctx->pc = 0x7F1B5844u;
    // 7F1B5844: addi    r3, r30, 56
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(56);

label_7F1B5848:
    ctx->pc = 0x7F1B5848u;
    // 7F1B5848: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B584C:
    ctx->pc = 0x7F1B584Cu;
    // 7F1B584C: addi    r4, r30, 68
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(68);

label_7F1B5850:
    ctx->pc = 0x7F1B5850u;
    // 7F1B5850: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5854:
    ctx->pc = 0x7F1B5854u;
    // 7F1B5854: addi    r5, r30, 64
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1B5858:
    ctx->pc = 0x7F1B5858u;
    // 7F1B5858: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5858u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B585C:
    ctx->pc = 0x7F1B585Cu;
    // 7F1B585C: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5860u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5860:
    ctx->pc = 0x7F1B5860u;
    ctx->downcount -= 1;
    // 7F1B5860: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5864:
    ctx->pc = 0x7F1B5864u;
    ctx->downcount -= 14;
    // 7F1B5864: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5868:
    ctx->pc = 0x7F1B5868u;
    // 7F1B5868: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B586C:
    ctx->pc = 0x7F1B586Cu;
    // 7F1B586C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5870:
    ctx->pc = 0x7F1B5870u;
    // 7F1B5870: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5874:
    ctx->pc = 0x7F1B5874u;
    // 7F1B5874: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5878:
    ctx->pc = 0x7F1B5878u;
    // 7F1B5878: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5878u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B587C:
    ctx->pc = 0x7F1B587Cu;
    // 7F1B587C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5880:
    ctx->pc = 0x7F1B5880u;
    // 7F1B5880: addi    r3, r30, 76
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(76);

label_7F1B5884:
    ctx->pc = 0x7F1B5884u;
    // 7F1B5884: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5888:
    ctx->pc = 0x7F1B5888u;
    // 7F1B5888: addi    r4, r30, 88
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(88);

label_7F1B588C:
    ctx->pc = 0x7F1B588Cu;
    // 7F1B588C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B588Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5890:
    ctx->pc = 0x7F1B5890u;
    // 7F1B5890: addi    r5, r30, 84
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(84);

label_7F1B5894:
    ctx->pc = 0x7F1B5894u;
    // 7F1B5894: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5894u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5898:
    ctx->pc = 0x7F1B5898u;
    // 7F1B5898: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B589Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B589C:
    ctx->pc = 0x7F1B589Cu;
    ctx->downcount -= 1;
    // 7F1B589C: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B58A0:
    ctx->pc = 0x7F1B58A0u;
    ctx->downcount -= 14;
    // 7F1B58A0: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B58A4:
    ctx->pc = 0x7F1B58A4u;
    // 7F1B58A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B58A8:
    ctx->pc = 0x7F1B58A8u;
    // 7F1B58A8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B58AC:
    ctx->pc = 0x7F1B58ACu;
    // 7F1B58AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B58B0:
    ctx->pc = 0x7F1B58B0u;
    // 7F1B58B0: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B58B4:
    ctx->pc = 0x7F1B58B4u;
    // 7F1B58B4: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B58B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B58B8:
    ctx->pc = 0x7F1B58B8u;
    // 7F1B58B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B58BC:
    ctx->pc = 0x7F1B58BCu;
    // 7F1B58BC: addi    r3, r30, 56
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(56);

label_7F1B58C0:
    ctx->pc = 0x7F1B58C0u;
    // 7F1B58C0: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B58C4:
    ctx->pc = 0x7F1B58C4u;
    // 7F1B58C4: addi    r4, r30, 68
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(68);

label_7F1B58C8:
    ctx->pc = 0x7F1B58C8u;
    // 7F1B58C8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B58C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B58CC:
    ctx->pc = 0x7F1B58CCu;
    // 7F1B58CC: addi    r5, r30, 64
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1B58D0:
    ctx->pc = 0x7F1B58D0u;
    // 7F1B58D0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B58D0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B58D4:
    ctx->pc = 0x7F1B58D4u;
    // 7F1B58D4: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B58D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B58D8:
    ctx->pc = 0x7F1B58D8u;
    ctx->downcount -= 14;
    // 7F1B58D8: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B58DC:
    ctx->pc = 0x7F1B58DCu;
    // 7F1B58DC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B58E0:
    ctx->pc = 0x7F1B58E0u;
    // 7F1B58E0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B58E4:
    ctx->pc = 0x7F1B58E4u;
    // 7F1B58E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B58E8:
    ctx->pc = 0x7F1B58E8u;
    // 7F1B58E8: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B58EC:
    ctx->pc = 0x7F1B58ECu;
    // 7F1B58EC: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B58ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B58F0:
    ctx->pc = 0x7F1B58F0u;
    // 7F1B58F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B58F4:
    ctx->pc = 0x7F1B58F4u;
    // 7F1B58F4: addi    r3, r30, 76
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(76);

label_7F1B58F8:
    ctx->pc = 0x7F1B58F8u;
    // 7F1B58F8: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B58FC:
    ctx->pc = 0x7F1B58FCu;
    // 7F1B58FC: addi    r4, r30, 88
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(88);

label_7F1B5900:
    ctx->pc = 0x7F1B5900u;
    // 7F1B5900: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5904:
    ctx->pc = 0x7F1B5904u;
    // 7F1B5904: addi    r5, r30, 84
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(84);

label_7F1B5908:
    ctx->pc = 0x7F1B5908u;
    // 7F1B5908: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5908u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B590C:
    ctx->pc = 0x7F1B590Cu;
    // 7F1B590C: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5910u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5910:
    ctx->pc = 0x7F1B5910u;
    ctx->downcount -= 1;
    // 7F1B5910: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5914:
    ctx->pc = 0x7F1B5914u;
    ctx->downcount -= 14;
    // 7F1B5914: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5918:
    ctx->pc = 0x7F1B5918u;
    // 7F1B5918: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B591C:
    ctx->pc = 0x7F1B591Cu;
    // 7F1B591C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5920:
    ctx->pc = 0x7F1B5920u;
    // 7F1B5920: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5924:
    ctx->pc = 0x7F1B5924u;
    // 7F1B5924: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5928:
    ctx->pc = 0x7F1B5928u;
    // 7F1B5928: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5928u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B592C:
    ctx->pc = 0x7F1B592Cu;
    // 7F1B592C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5930:
    ctx->pc = 0x7F1B5930u;
    // 7F1B5930: addi    r3, r30, 96
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(96);

label_7F1B5934:
    ctx->pc = 0x7F1B5934u;
    // 7F1B5934: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5938:
    ctx->pc = 0x7F1B5938u;
    // 7F1B5938: addi    r4, r30, 108
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(108);

label_7F1B593C:
    ctx->pc = 0x7F1B593Cu;
    // 7F1B593C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B593Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5940:
    ctx->pc = 0x7F1B5940u;
    // 7F1B5940: addi    r5, r30, 104
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(104);

label_7F1B5944:
    ctx->pc = 0x7F1B5944u;
    // 7F1B5944: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5944u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5948:
    ctx->pc = 0x7F1B5948u;
    // 7F1B5948: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B594Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B594C:
    ctx->pc = 0x7F1B594Cu;
    ctx->downcount -= 1;
    // 7F1B594C: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5950:
    ctx->pc = 0x7F1B5950u;
    ctx->downcount -= 14;
    // 7F1B5950: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5954:
    ctx->pc = 0x7F1B5954u;
    // 7F1B5954: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5958:
    ctx->pc = 0x7F1B5958u;
    // 7F1B5958: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B595C:
    ctx->pc = 0x7F1B595Cu;
    // 7F1B595C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5960:
    ctx->pc = 0x7F1B5960u;
    // 7F1B5960: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5964:
    ctx->pc = 0x7F1B5964u;
    // 7F1B5964: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5964u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5968:
    ctx->pc = 0x7F1B5968u;
    // 7F1B5968: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B596C:
    ctx->pc = 0x7F1B596Cu;
    // 7F1B596C: addi    r3, r30, 116
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(116);

label_7F1B5970:
    ctx->pc = 0x7F1B5970u;
    // 7F1B5970: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5974:
    ctx->pc = 0x7F1B5974u;
    // 7F1B5974: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F1B5978:
    ctx->pc = 0x7F1B5978u;
    // 7F1B5978: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B597C:
    ctx->pc = 0x7F1B597Cu;
    // 7F1B597C: addi    r5, r30, 124
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(124);

label_7F1B5980:
    ctx->pc = 0x7F1B5980u;
    // 7F1B5980: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5980u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5984:
    ctx->pc = 0x7F1B5984u;
    // 7F1B5984: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5988u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5988:
    ctx->pc = 0x7F1B5988u;
    ctx->downcount -= 1;
    // 7F1B5988: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B598C:
    ctx->pc = 0x7F1B598Cu;
    ctx->downcount -= 14;
    // 7F1B598C: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5990:
    ctx->pc = 0x7F1B5990u;
    // 7F1B5990: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5994:
    ctx->pc = 0x7F1B5994u;
    // 7F1B5994: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5998:
    ctx->pc = 0x7F1B5998u;
    // 7F1B5998: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B599C:
    ctx->pc = 0x7F1B599Cu;
    // 7F1B599C: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B59A0:
    ctx->pc = 0x7F1B59A0u;
    // 7F1B59A0: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B59A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B59A4:
    ctx->pc = 0x7F1B59A4u;
    // 7F1B59A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B59A8:
    ctx->pc = 0x7F1B59A8u;
    // 7F1B59A8: addi    r3, r30, 96
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(96);

label_7F1B59AC:
    ctx->pc = 0x7F1B59ACu;
    // 7F1B59AC: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B59B0:
    ctx->pc = 0x7F1B59B0u;
    // 7F1B59B0: addi    r4, r30, 108
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(108);

label_7F1B59B4:
    ctx->pc = 0x7F1B59B4u;
    // 7F1B59B4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B59B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B59B8:
    ctx->pc = 0x7F1B59B8u;
    // 7F1B59B8: addi    r5, r30, 104
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(104);

label_7F1B59BC:
    ctx->pc = 0x7F1B59BCu;
    // 7F1B59BC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B59BCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B59C0:
    ctx->pc = 0x7F1B59C0u;
    // 7F1B59C0: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B59C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B59C4:
    ctx->pc = 0x7F1B59C4u;
    ctx->downcount -= 14;
    // 7F1B59C4: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B59C8:
    ctx->pc = 0x7F1B59C8u;
    // 7F1B59C8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B59CC:
    ctx->pc = 0x7F1B59CCu;
    // 7F1B59CC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B59D0:
    ctx->pc = 0x7F1B59D0u;
    // 7F1B59D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B59D4:
    ctx->pc = 0x7F1B59D4u;
    // 7F1B59D4: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B59D8:
    ctx->pc = 0x7F1B59D8u;
    // 7F1B59D8: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B59D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B59DC:
    ctx->pc = 0x7F1B59DCu;
    // 7F1B59DC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B59E0:
    ctx->pc = 0x7F1B59E0u;
    // 7F1B59E0: addi    r3, r30, 116
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(116);

label_7F1B59E4:
    ctx->pc = 0x7F1B59E4u;
    // 7F1B59E4: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B59E8:
    ctx->pc = 0x7F1B59E8u;
    // 7F1B59E8: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F1B59EC:
    ctx->pc = 0x7F1B59ECu;
    // 7F1B59EC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B59ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B59F0:
    ctx->pc = 0x7F1B59F0u;
    // 7F1B59F0: addi    r5, r30, 124
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(124);

label_7F1B59F4:
    ctx->pc = 0x7F1B59F4u;
    // 7F1B59F4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B59F4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B59F8:
    ctx->pc = 0x7F1B59F8u;
    // 7F1B59F8: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B59FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B59FC:
    ctx->pc = 0x7F1B59FCu;
    ctx->downcount -= 1;
    // 7F1B59FC: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5A00:
    ctx->pc = 0x7F1B5A00u;
    ctx->downcount -= 14;
    // 7F1B5A00: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5A04:
    ctx->pc = 0x7F1B5A04u;
    // 7F1B5A04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5A08:
    ctx->pc = 0x7F1B5A08u;
    // 7F1B5A08: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A0C:
    ctx->pc = 0x7F1B5A0Cu;
    // 7F1B5A0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5A10:
    ctx->pc = 0x7F1B5A10u;
    // 7F1B5A10: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5A14:
    ctx->pc = 0x7F1B5A14u;
    // 7F1B5A14: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A18:
    ctx->pc = 0x7F1B5A18u;
    // 7F1B5A18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A1C:
    ctx->pc = 0x7F1B5A1Cu;
    // 7F1B5A1C: addi    r3, r30, 56
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(56);

label_7F1B5A20:
    ctx->pc = 0x7F1B5A20u;
    // 7F1B5A20: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5A24:
    ctx->pc = 0x7F1B5A24u;
    // 7F1B5A24: addi    r4, r30, 68
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(68);

label_7F1B5A28:
    ctx->pc = 0x7F1B5A28u;
    // 7F1B5A28: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A2C:
    ctx->pc = 0x7F1B5A2Cu;
    // 7F1B5A2C: addi    r5, r30, 64
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1B5A30:
    ctx->pc = 0x7F1B5A30u;
    // 7F1B5A30: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A30u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5A34:
    ctx->pc = 0x7F1B5A34u;
    // 7F1B5A34: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5A38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5A38:
    ctx->pc = 0x7F1B5A38u;
    ctx->downcount -= 14;
    // 7F1B5A38: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5A3C:
    ctx->pc = 0x7F1B5A3Cu;
    // 7F1B5A3C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5A40:
    ctx->pc = 0x7F1B5A40u;
    // 7F1B5A40: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A44:
    ctx->pc = 0x7F1B5A44u;
    // 7F1B5A44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5A48:
    ctx->pc = 0x7F1B5A48u;
    // 7F1B5A48: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5A4C:
    ctx->pc = 0x7F1B5A4Cu;
    // 7F1B5A4C: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A50:
    ctx->pc = 0x7F1B5A50u;
    // 7F1B5A50: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A54:
    ctx->pc = 0x7F1B5A54u;
    // 7F1B5A54: addi    r3, r30, 76
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(76);

label_7F1B5A58:
    ctx->pc = 0x7F1B5A58u;
    // 7F1B5A58: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5A5C:
    ctx->pc = 0x7F1B5A5Cu;
    // 7F1B5A5C: addi    r4, r30, 88
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(88);

label_7F1B5A60:
    ctx->pc = 0x7F1B5A60u;
    // 7F1B5A60: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A64:
    ctx->pc = 0x7F1B5A64u;
    // 7F1B5A64: addi    r5, r30, 84
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(84);

label_7F1B5A68:
    ctx->pc = 0x7F1B5A68u;
    // 7F1B5A68: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A68u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5A6C:
    ctx->pc = 0x7F1B5A6Cu;
    // 7F1B5A6C: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5A70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5A70:
    ctx->pc = 0x7F1B5A70u;
    ctx->downcount -= 14;
    // 7F1B5A70: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5A74:
    ctx->pc = 0x7F1B5A74u;
    // 7F1B5A74: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5A78:
    ctx->pc = 0x7F1B5A78u;
    // 7F1B5A78: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A7C:
    ctx->pc = 0x7F1B5A7Cu;
    // 7F1B5A7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5A80:
    ctx->pc = 0x7F1B5A80u;
    // 7F1B5A80: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5A84:
    ctx->pc = 0x7F1B5A84u;
    // 7F1B5A84: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A88:
    ctx->pc = 0x7F1B5A88u;
    // 7F1B5A88: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5A8C:
    ctx->pc = 0x7F1B5A8Cu;
    // 7F1B5A8C: addi    r3, r30, 96
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(96);

label_7F1B5A90:
    ctx->pc = 0x7F1B5A90u;
    // 7F1B5A90: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5A94:
    ctx->pc = 0x7F1B5A94u;
    // 7F1B5A94: addi    r4, r30, 108
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(108);

label_7F1B5A98:
    ctx->pc = 0x7F1B5A98u;
    // 7F1B5A98: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5A98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5A9C:
    ctx->pc = 0x7F1B5A9Cu;
    // 7F1B5A9C: addi    r5, r30, 104
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(104);

label_7F1B5AA0:
    ctx->pc = 0x7F1B5AA0u;
    // 7F1B5AA0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5AA0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5AA4:
    ctx->pc = 0x7F1B5AA4u;
    // 7F1B5AA4: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5AA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5AA8:
    ctx->pc = 0x7F1B5AA8u;
    ctx->downcount -= 14;
    // 7F1B5AA8: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5AAC:
    ctx->pc = 0x7F1B5AACu;
    // 7F1B5AAC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B5AB0:
    ctx->pc = 0x7F1B5AB0u;
    // 7F1B5AB0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5AB4:
    ctx->pc = 0x7F1B5AB4u;
    // 7F1B5AB4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B5AB8:
    ctx->pc = 0x7F1B5AB8u;
    // 7F1B5AB8: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1B5ABC:
    ctx->pc = 0x7F1B5ABCu;
    // 7F1B5ABC: lfd     f1, 7288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5ABCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5AC0:
    ctx->pc = 0x7F1B5AC0u;
    // 7F1B5AC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5AC4:
    ctx->pc = 0x7F1B5AC4u;
    // 7F1B5AC4: addi    r3, r30, 116
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(116);

label_7F1B5AC8:
    ctx->pc = 0x7F1B5AC8u;
    // 7F1B5AC8: lwz     r6, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5ACC:
    ctx->pc = 0x7F1B5ACCu;
    // 7F1B5ACC: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F1B5AD0:
    ctx->pc = 0x7F1B5AD0u;
    // 7F1B5AD0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B5AD4:
    ctx->pc = 0x7F1B5AD4u;
    // 7F1B5AD4: addi    r5, r30, 124
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(124);

label_7F1B5AD8:
    ctx->pc = 0x7F1B5AD8u;
    // 7F1B5AD8: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B5AD8u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1B5ADC:
    ctx->pc = 0x7F1B5ADCu;
    // 7F1B5ADC: bl      0x7F1B57B0
    {
            ctx->lr = 0x7F1B5AE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B57B0u;
                return;
            }
            goto label_7F1B57B0;
    }

label_7F1B5AE0:
    ctx->pc = 0x7F1B5AE0u;
    ctx->downcount -= 1;
    // 7F1B5AE0: b       0x7F1B5AF4
    {
            goto label_7F1B5AF4;
    }

label_7F1B5AE4:
    ctx->pc = 0x7F1B5AE4u;
    ctx->downcount -= 3;
    // 7F1B5AE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B5AE8:
    ctx->pc = 0x7F1B5AE8u;
    // 7F1B5AE8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B5AEC:
    ctx->pc = 0x7F1B5AECu;
    // 7F1B5AEC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B5AF0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B5AF0:
    ctx->pc = 0x7F1B5AF0u;
    ctx->downcount -= 1;
    // 7F1B5AF0: b       0x7F1B5AF8
    {
            goto label_7F1B5AF8;
    }

label_7F1B5AF4:
    ctx->pc = 0x7F1B5AF4u;
    ctx->downcount -= 1;
    // 7F1B5AF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B5AF8:
    ctx->pc = 0x7F1B5AF8u;
    ctx->downcount -= 16;
    // 7F1B5AF8: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B5AFC:
    ctx->pc = 0x7F1B5AFCu;
    // 7F1B5AFC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5B00:
    ctx->pc = 0x7F1B5B00u;
    // 7F1B5B00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5B04:
    ctx->pc = 0x7F1B5B04u;
    // 7F1B5B04: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B5B08:
    ctx->pc = 0x7F1B5B08u;
    // 7F1B5B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5B0C:
    ctx->pc = 0x7F1B5B0Cu;
    ctx->downcount -= 8;
    // 7F1B5B0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5B10:
    ctx->pc = 0x7F1B5B10u;
    // 7F1B5B10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5B14:
    ctx->pc = 0x7F1B5B14u;
    // 7F1B5B14: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5B18:
    ctx->pc = 0x7F1B5B18u;
    // 7F1B5B18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5B1C:
    ctx->pc = 0x7F1B5B1Cu;
    // 7F1B5B1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5B20:
    ctx->pc = 0x7F1B5B20u;
    // 7F1B5B20: lwz     r0, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5B24:
    ctx->pc = 0x7F1B5B24u;
    // 7F1B5B24: cmplwi  r0, 0x0000
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

label_7F1B5B28:
    ctx->pc = 0x7F1B5B28u;
    // 7F1B5B28: bc    12, 2, 0x7F1B5B34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5B34;
        }
    }

label_7F1B5B2C:
    ctx->pc = 0x7F1B5B2Cu;
    ctx->downcount -= 2;
    // 7F1B5B2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B5B30:
    ctx->pc = 0x7F1B5B30u;
    // 7F1B5B30: b       0x7F1B5C0C
    {
            goto label_7F1B5C0C;
    }

label_7F1B5B34:
    ctx->pc = 0x7F1B5B34u;
    ctx->downcount -= 5;
    // 7F1B5B34: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F1B5B38:
    ctx->pc = 0x7F1B5B38u;
    // 7F1B5B38: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B5B3C:
    ctx->pc = 0x7F1B5B3Cu;
    // 7F1B5B3C: li      r5, 132
    ctx->gpr[5] = (u32)(s32)(132);

label_7F1B5B40:
    ctx->pc = 0x7F1B5B40u;
    // 7F1B5B40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B5B44:
    ctx->pc = 0x7F1B5B44u;
    // 7F1B5B44: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B5B48u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B5B48:
    ctx->pc = 0x7F1B5B48u;
    ctx->downcount -= 2;
    // 7F1B5B48: or.   r31, r3, r3
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

label_7F1B5B4C:
    ctx->pc = 0x7F1B5B4Cu;
    // 7F1B5B4C: bc    12, 2, 0x7F1B5C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B5C08;
        }
    }

label_7F1B5B50:
    ctx->pc = 0x7F1B5B50u;
    ctx->downcount -= 5;
    // 7F1B5B50: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B5B54:
    ctx->pc = 0x7F1B5B54u;
    // 7F1B5B54: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B5B58:
    ctx->pc = 0x7F1B5B58u;
    // 7F1B5B58: addi    r4, r4, 22236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22236);

label_7F1B5B5C:
    ctx->pc = 0x7F1B5B5Cu;
    // 7F1B5B5C: addi    r5, r5, 22432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22432);

label_7F1B5B60:
    ctx->pc = 0x7F1B5B60u;
    // 7F1B5B60: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B5B64u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B5B64:
    ctx->pc = 0x7F1B5B64u;
    ctx->downcount -= 39;
    // 7F1B5B64: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5B68:
    ctx->pc = 0x7F1B5B68u;
    // 7F1B5B68: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1B5B6C:
    ctx->pc = 0x7F1B5B6Cu;
    // 7F1B5B6C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B5B70:
    ctx->pc = 0x7F1B5B70u;
    // 7F1B5B70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B5B74:
    ctx->pc = 0x7F1B5B74u;
    // 7F1B5B74: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1B5B78:
    ctx->pc = 0x7F1B5B78u;
    // 7F1B5B78: addi    r6, r6, 32548
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1B5B7C:
    ctx->pc = 0x7F1B5B7Cu;
    // 7F1B5B7C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5B80:
    ctx->pc = 0x7F1B5B80u;
    // 7F1B5B80: addi    r5, r4, 7300
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7300);

label_7F1B5B84:
    ctx->pc = 0x7F1B5B84u;
    // 7F1B5B84: lis     r3, 32539
    ctx->gpr[3] = ((u32)(s32)(32539) << 16);

label_7F1B5B88:
    ctx->pc = 0x7F1B5B88u;
    // 7F1B5B88: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5B88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B5B8C:
    ctx->pc = 0x7F1B5B8Cu;
    // 7F1B5B8C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B5B90:
    ctx->pc = 0x7F1B5B90u;
    // 7F1B5B90: addi    r4, r3, 22480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22480);

label_7F1B5B94:
    ctx->pc = 0x7F1B5B94u;
    // 7F1B5B94: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1B5B98:
    ctx->pc = 0x7F1B5B98u;
    // 7F1B5B98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B5B9C:
    ctx->pc = 0x7F1B5B9Cu;
    // 7F1B5B9C: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B5BA0:
    ctx->pc = 0x7F1B5BA0u;
    // 7F1B5BA0: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B5BA4:
    ctx->pc = 0x7F1B5BA4u;
    // 7F1B5BA4: stw     r6, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B5BA8:
    ctx->pc = 0x7F1B5BA8u;
    // 7F1B5BA8: stw     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B5BAC:
    ctx->pc = 0x7F1B5BACu;
    // 7F1B5BAC: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BB0:
    ctx->pc = 0x7F1B5BB0u;
    // 7F1B5BB0: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BB4:
    ctx->pc = 0x7F1B5BB4u;
    // 7F1B5BB4: stfs     f0, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BB8:
    ctx->pc = 0x7F1B5BB8u;
    // 7F1B5BB8: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BBC:
    ctx->pc = 0x7F1B5BBCu;
    // 7F1B5BBC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BC0:
    ctx->pc = 0x7F1B5BC0u;
    // 7F1B5BC0: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BC4:
    ctx->pc = 0x7F1B5BC4u;
    // 7F1B5BC4: stfs     f0, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BC8:
    ctx->pc = 0x7F1B5BC8u;
    // 7F1B5BC8: stfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BCC:
    ctx->pc = 0x7F1B5BCCu;
    // 7F1B5BCC: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BD0:
    ctx->pc = 0x7F1B5BD0u;
    // 7F1B5BD0: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BD4:
    ctx->pc = 0x7F1B5BD4u;
    // 7F1B5BD4: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BD8:
    ctx->pc = 0x7F1B5BD8u;
    // 7F1B5BD8: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BD8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BDC:
    ctx->pc = 0x7F1B5BDCu;
    // 7F1B5BDC: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BE0:
    ctx->pc = 0x7F1B5BE0u;
    // 7F1B5BE0: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BE4:
    ctx->pc = 0x7F1B5BE4u;
    // 7F1B5BE4: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BE8:
    ctx->pc = 0x7F1B5BE8u;
    // 7F1B5BE8: stfs     f0, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BEC:
    ctx->pc = 0x7F1B5BECu;
    // 7F1B5BEC: stfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BF0:
    ctx->pc = 0x7F1B5BF0u;
    // 7F1B5BF0: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5BF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B5BF4:
    ctx->pc = 0x7F1B5BF4u;
    // 7F1B5BF4: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BF8:
    ctx->pc = 0x7F1B5BF8u;
    // 7F1B5BF8: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5BFC:
    ctx->pc = 0x7F1B5BFCu;
    // 7F1B5BFC: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B5C00u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B5C00:
    ctx->pc = 0x7F1B5C00u;
    ctx->downcount -= 2;
    // 7F1B5C00: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B5C04:
    ctx->pc = 0x7F1B5C04u;
    // 7F1B5C04: stw     r31, 13952(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13952);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5C08:
    ctx->pc = 0x7F1B5C08u;
    ctx->downcount -= 1;
    // 7F1B5C08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B5C0C:
    ctx->pc = 0x7F1B5C0Cu;
    ctx->downcount -= 6;
    // 7F1B5C0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5C10:
    ctx->pc = 0x7F1B5C10u;
    // 7F1B5C10: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5C14:
    ctx->pc = 0x7F1B5C14u;
    // 7F1B5C14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5C18:
    ctx->pc = 0x7F1B5C18u;
    // 7F1B5C18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5C1C:
    ctx->pc = 0x7F1B5C1Cu;
    // 7F1B5C1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5C20:
    ctx->pc = 0x7F1B5C20u;
    ctx->downcount -= 7;
    // 7F1B5C20: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5C24:
    ctx->pc = 0x7F1B5C24u;
    // 7F1B5C24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5C28:
    ctx->pc = 0x7F1B5C28u;
    // 7F1B5C28: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5C2C:
    ctx->pc = 0x7F1B5C2Cu;
    // 7F1B5C2C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C30:
    ctx->pc = 0x7F1B5C30u;
    // 7F1B5C30: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5C34:
    ctx->pc = 0x7F1B5C34u;
    // 7F1B5C34: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5C38:
    ctx->pc = 0x7F1B5C38u;
    // 7F1B5C38: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5C3Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5C3C:
    ctx->pc = 0x7F1B5C3Cu;
    ctx->downcount -= 4;
    // 7F1B5C3C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C40:
    ctx->pc = 0x7F1B5C40u;
    // 7F1B5C40: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5C40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5C44:
    ctx->pc = 0x7F1B5C44u;
    // 7F1B5C44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5C48:
    ctx->pc = 0x7F1B5C48u;
    // 7F1B5C48: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5C4Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5C4C:
    ctx->pc = 0x7F1B5C4Cu;
    ctx->downcount -= 4;
    // 7F1B5C4C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C50:
    ctx->pc = 0x7F1B5C50u;
    // 7F1B5C50: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5C50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5C54:
    ctx->pc = 0x7F1B5C54u;
    // 7F1B5C54: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5C58:
    ctx->pc = 0x7F1B5C58u;
    // 7F1B5C58: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5C5Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5C5C:
    ctx->pc = 0x7F1B5C5Cu;
    ctx->downcount -= 4;
    // 7F1B5C5C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C60:
    ctx->pc = 0x7F1B5C60u;
    // 7F1B5C60: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5C60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5C64:
    ctx->pc = 0x7F1B5C64u;
    // 7F1B5C64: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5C68:
    ctx->pc = 0x7F1B5C68u;
    // 7F1B5C68: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5C6Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5C6C:
    ctx->pc = 0x7F1B5C6Cu;
    ctx->downcount -= 2;
    // 7F1B5C6C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C70:
    ctx->pc = 0x7F1B5C70u;
    // 7F1B5C70: bl      0x7F4195D8
    {
            ctx->lr = 0x7F1B5C74u;
            ctx->pc = 0x7F4195D8u;
            return;
    }

label_7F1B5C74:
    ctx->pc = 0x7F1B5C74u;
    ctx->downcount -= 6;
    // 7F1B5C74: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5C78:
    ctx->pc = 0x7F1B5C78u;
    // 7F1B5C78: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5C7C:
    ctx->pc = 0x7F1B5C7Cu;
    // 7F1B5C7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5C80:
    ctx->pc = 0x7F1B5C80u;
    // 7F1B5C80: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5C84:
    ctx->pc = 0x7F1B5C84u;
    // 7F1B5C84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5C88:
    ctx->pc = 0x7F1B5C88u;
    ctx->downcount -= 7;
    // 7F1B5C88: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5C8C:
    ctx->pc = 0x7F1B5C8Cu;
    // 7F1B5C8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5C90:
    ctx->pc = 0x7F1B5C90u;
    // 7F1B5C90: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5C94:
    ctx->pc = 0x7F1B5C94u;
    // 7F1B5C94: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5C98:
    ctx->pc = 0x7F1B5C98u;
    // 7F1B5C98: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5C9C:
    ctx->pc = 0x7F1B5C9Cu;
    // 7F1B5C9C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5CA0:
    ctx->pc = 0x7F1B5CA0u;
    // 7F1B5CA0: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5CA4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5CA4:
    ctx->pc = 0x7F1B5CA4u;
    ctx->downcount -= 4;
    // 7F1B5CA4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5CA8:
    ctx->pc = 0x7F1B5CA8u;
    // 7F1B5CA8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5CA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5CAC:
    ctx->pc = 0x7F1B5CACu;
    // 7F1B5CAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5CB0:
    ctx->pc = 0x7F1B5CB0u;
    // 7F1B5CB0: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5CB4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5CB4:
    ctx->pc = 0x7F1B5CB4u;
    ctx->downcount -= 4;
    // 7F1B5CB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5CB8:
    ctx->pc = 0x7F1B5CB8u;
    // 7F1B5CB8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5CB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5CBC:
    ctx->pc = 0x7F1B5CBCu;
    // 7F1B5CBC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5CC0:
    ctx->pc = 0x7F1B5CC0u;
    // 7F1B5CC0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5CC4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5CC4:
    ctx->pc = 0x7F1B5CC4u;
    ctx->downcount -= 4;
    // 7F1B5CC4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5CC8:
    ctx->pc = 0x7F1B5CC8u;
    // 7F1B5CC8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5CC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5CCC:
    ctx->pc = 0x7F1B5CCCu;
    // 7F1B5CCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5CD0:
    ctx->pc = 0x7F1B5CD0u;
    // 7F1B5CD0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5CD4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5CD4:
    ctx->pc = 0x7F1B5CD4u;
    ctx->downcount -= 13;
    // 7F1B5CD4: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5CD8:
    ctx->pc = 0x7F1B5CD8u;
    // 7F1B5CD8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5CDC:
    ctx->pc = 0x7F1B5CDCu;
    // 7F1B5CDC: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5CE0:
    ctx->pc = 0x7F1B5CE0u;
    // 7F1B5CE0: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5CE4:
    ctx->pc = 0x7F1B5CE4u;
    // 7F1B5CE4: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B5CE8:
    ctx->pc = 0x7F1B5CE8u;
    // 7F1B5CE8: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B5CEC:
    ctx->pc = 0x7F1B5CECu;
    // 7F1B5CEC: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B5CF0:
    ctx->pc = 0x7F1B5CF0u;
    // 7F1B5CF0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1B5CF4:
    ctx->pc = 0x7F1B5CF4u;
    // 7F1B5CF4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5CF8:
    ctx->pc = 0x7F1B5CF8u;
    // 7F1B5CF8: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1B5CFC:
    ctx->pc = 0x7F1B5CFCu;
    // 7F1B5CFC: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B5D00:
    ctx->pc = 0x7F1B5D00u;
    // 7F1B5D00: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1B5D04:
    ctx->pc = 0x7F1B5D04u;
    // 7F1B5D04: bl      0x7F3E9608
    {
            ctx->lr = 0x7F1B5D08u;
            ctx->pc = 0x7F3E9608u;
            return;
    }

label_7F1B5D08:
    ctx->pc = 0x7F1B5D08u;
    ctx->downcount -= 6;
    // 7F1B5D08: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5D0C:
    ctx->pc = 0x7F1B5D0Cu;
    // 7F1B5D0C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5D10:
    ctx->pc = 0x7F1B5D10u;
    // 7F1B5D10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5D14:
    ctx->pc = 0x7F1B5D14u;
    // 7F1B5D14: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5D18:
    ctx->pc = 0x7F1B5D18u;
    // 7F1B5D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5D1C:
    ctx->pc = 0x7F1B5D1Cu;
    ctx->downcount -= 4;
    // 7F1B5D1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5D20:
    ctx->pc = 0x7F1B5D20u;
    // 7F1B5D20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5D24:
    ctx->pc = 0x7F1B5D24u;
    // 7F1B5D24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5D28:
    ctx->pc = 0x7F1B5D28u;
    // 7F1B5D28: bl      0x7F1B5B0C
    {
            ctx->lr = 0x7F1B5D2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B5B0Cu;
                return;
            }
            goto label_7F1B5B0C;
    }

label_7F1B5D2C:
    ctx->pc = 0x7F1B5D2Cu;
    ctx->downcount -= 5;
    // 7F1B5D2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5D30:
    ctx->pc = 0x7F1B5D30u;
    // 7F1B5D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5D34:
    ctx->pc = 0x7F1B5D34u;
    // 7F1B5D34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5D38:
    ctx->pc = 0x7F1B5D38u;
    // 7F1B5D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5D3C:
    ctx->pc = 0x7F1B5D3Cu;
    ctx->downcount -= 7;
    // 7F1B5D3C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5D40:
    ctx->pc = 0x7F1B5D40u;
    // 7F1B5D40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5D44:
    ctx->pc = 0x7F1B5D44u;
    // 7F1B5D44: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5D48:
    ctx->pc = 0x7F1B5D48u;
    // 7F1B5D48: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5D4C:
    ctx->pc = 0x7F1B5D4Cu;
    // 7F1B5D4C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5D50:
    ctx->pc = 0x7F1B5D50u;
    // 7F1B5D50: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5D54:
    ctx->pc = 0x7F1B5D54u;
    // 7F1B5D54: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5D58u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5D58:
    ctx->pc = 0x7F1B5D58u;
    ctx->downcount -= 4;
    // 7F1B5D58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5D5C:
    ctx->pc = 0x7F1B5D5Cu;
    // 7F1B5D5C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5D5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5D60:
    ctx->pc = 0x7F1B5D60u;
    // 7F1B5D60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5D64:
    ctx->pc = 0x7F1B5D64u;
    // 7F1B5D64: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5D68u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5D68:
    ctx->pc = 0x7F1B5D68u;
    ctx->downcount -= 4;
    // 7F1B5D68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5D6C:
    ctx->pc = 0x7F1B5D6Cu;
    // 7F1B5D6C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5D6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5D70:
    ctx->pc = 0x7F1B5D70u;
    // 7F1B5D70: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5D74:
    ctx->pc = 0x7F1B5D74u;
    // 7F1B5D74: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5D78u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5D78:
    ctx->pc = 0x7F1B5D78u;
    ctx->downcount -= 4;
    // 7F1B5D78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5D7C:
    ctx->pc = 0x7F1B5D7Cu;
    // 7F1B5D7C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5D7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5D80:
    ctx->pc = 0x7F1B5D80u;
    // 7F1B5D80: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5D84:
    ctx->pc = 0x7F1B5D84u;
    // 7F1B5D84: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5D88u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5D88:
    ctx->pc = 0x7F1B5D88u;
    ctx->downcount -= 14;
    // 7F1B5D88: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5D8C:
    ctx->pc = 0x7F1B5D8Cu;
    // 7F1B5D8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5D90:
    ctx->pc = 0x7F1B5D90u;
    // 7F1B5D90: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5D94:
    ctx->pc = 0x7F1B5D94u;
    // 7F1B5D94: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5D98:
    ctx->pc = 0x7F1B5D98u;
    // 7F1B5D98: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B5D9C:
    ctx->pc = 0x7F1B5D9Cu;
    // 7F1B5D9C: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B5DA0:
    ctx->pc = 0x7F1B5DA0u;
    // 7F1B5DA0: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B5DA4:
    ctx->pc = 0x7F1B5DA4u;
    // 7F1B5DA4: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1B5DA8:
    ctx->pc = 0x7F1B5DA8u;
    // 7F1B5DA8: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5DAC:
    ctx->pc = 0x7F1B5DACu;
    // 7F1B5DAC: or   r7, r7, r6
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1B5DB0:
    ctx->pc = 0x7F1B5DB0u;
    // 7F1B5DB0: lwz     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B5DB4:
    ctx->pc = 0x7F1B5DB4u;
    // 7F1B5DB4: or   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[5];
    }

label_7F1B5DB8:
    ctx->pc = 0x7F1B5DB8u;
    // 7F1B5DB8: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1B5DBC:
    ctx->pc = 0x7F1B5DBCu;
    // 7F1B5DBC: bl      0x7F3E417C
    {
            ctx->lr = 0x7F1B5DC0u;
            ctx->pc = 0x7F3E417Cu;
            return;
    }

label_7F1B5DC0:
    ctx->pc = 0x7F1B5DC0u;
    ctx->downcount -= 6;
    // 7F1B5DC0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5DC4:
    ctx->pc = 0x7F1B5DC4u;
    // 7F1B5DC4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5DC8:
    ctx->pc = 0x7F1B5DC8u;
    // 7F1B5DC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5DCC:
    ctx->pc = 0x7F1B5DCCu;
    // 7F1B5DCC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5DD0:
    ctx->pc = 0x7F1B5DD0u;
    // 7F1B5DD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5DD4:
    ctx->pc = 0x7F1B5DD4u;
    ctx->downcount -= 7;
    // 7F1B5DD4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5DD8:
    ctx->pc = 0x7F1B5DD8u;
    // 7F1B5DD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5DDC:
    ctx->pc = 0x7F1B5DDCu;
    // 7F1B5DDC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5DE0:
    ctx->pc = 0x7F1B5DE0u;
    // 7F1B5DE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5DE4:
    ctx->pc = 0x7F1B5DE4u;
    // 7F1B5DE4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5DE8:
    ctx->pc = 0x7F1B5DE8u;
    // 7F1B5DE8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5DEC:
    ctx->pc = 0x7F1B5DECu;
    // 7F1B5DEC: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5DF0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5DF0:
    ctx->pc = 0x7F1B5DF0u;
    ctx->downcount -= 4;
    // 7F1B5DF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5DF4:
    ctx->pc = 0x7F1B5DF4u;
    // 7F1B5DF4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5DF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5DF8:
    ctx->pc = 0x7F1B5DF8u;
    // 7F1B5DF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5DFC:
    ctx->pc = 0x7F1B5DFCu;
    // 7F1B5DFC: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5E00u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5E00:
    ctx->pc = 0x7F1B5E00u;
    ctx->downcount -= 4;
    // 7F1B5E00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E04:
    ctx->pc = 0x7F1B5E04u;
    // 7F1B5E04: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E08:
    ctx->pc = 0x7F1B5E08u;
    // 7F1B5E08: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E0C:
    ctx->pc = 0x7F1B5E0Cu;
    // 7F1B5E0C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5E10u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5E10:
    ctx->pc = 0x7F1B5E10u;
    ctx->downcount -= 4;
    // 7F1B5E10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E14:
    ctx->pc = 0x7F1B5E14u;
    // 7F1B5E14: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E18:
    ctx->pc = 0x7F1B5E18u;
    // 7F1B5E18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E1C:
    ctx->pc = 0x7F1B5E1Cu;
    // 7F1B5E1C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5E20u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5E20:
    ctx->pc = 0x7F1B5E20u;
    ctx->downcount -= 3;
    // 7F1B5E20: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E24:
    ctx->pc = 0x7F1B5E24u;
    // 7F1B5E24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E28:
    ctx->pc = 0x7F1B5E28u;
    // 7F1B5E28: bl      0x7F3F689C
    {
            ctx->lr = 0x7F1B5E2Cu;
            ctx->pc = 0x7F3F689Cu;
            return;
    }

label_7F1B5E2C:
    ctx->pc = 0x7F1B5E2Cu;
    ctx->downcount -= 6;
    // 7F1B5E2C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5E30:
    ctx->pc = 0x7F1B5E30u;
    // 7F1B5E30: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5E34:
    ctx->pc = 0x7F1B5E34u;
    // 7F1B5E34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5E38:
    ctx->pc = 0x7F1B5E38u;
    // 7F1B5E38: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5E3C:
    ctx->pc = 0x7F1B5E3Cu;
    // 7F1B5E3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5E40:
    ctx->pc = 0x7F1B5E40u;
    ctx->downcount -= 18;
    // 7F1B5E40: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5E44:
    ctx->pc = 0x7F1B5E44u;
    // 7F1B5E44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5E48:
    ctx->pc = 0x7F1B5E48u;
    // 7F1B5E48: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5E4C:
    ctx->pc = 0x7F1B5E4Cu;
    // 7F1B5E4C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E50:
    ctx->pc = 0x7F1B5E50u;
    // 7F1B5E50: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B5E54:
    ctx->pc = 0x7F1B5E54u;
    // 7F1B5E54: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5E58:
    ctx->pc = 0x7F1B5E58u;
    // 7F1B5E58: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5E5C:
    ctx->pc = 0x7F1B5E5Cu;
    // 7F1B5E5C: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5E60u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5E60:
    ctx->pc = 0x7F1B5E60u;
    ctx->downcount -= 4;
    // 7F1B5E60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E64:
    ctx->pc = 0x7F1B5E64u;
    // 7F1B5E64: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E64u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E68:
    ctx->pc = 0x7F1B5E68u;
    // 7F1B5E68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E6C:
    ctx->pc = 0x7F1B5E6Cu;
    // 7F1B5E6C: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5E70u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5E70:
    ctx->pc = 0x7F1B5E70u;
    ctx->downcount -= 4;
    // 7F1B5E70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E74:
    ctx->pc = 0x7F1B5E74u;
    // 7F1B5E74: lfs     f1, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E78:
    ctx->pc = 0x7F1B5E78u;
    // 7F1B5E78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E7C:
    ctx->pc = 0x7F1B5E7Cu;
    // 7F1B5E7C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5E80u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5E80:
    ctx->pc = 0x7F1B5E80u;
    ctx->downcount -= 4;
    // 7F1B5E80: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E84:
    ctx->pc = 0x7F1B5E84u;
    // 7F1B5E84: lfs     f1, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5E84u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5E88:
    ctx->pc = 0x7F1B5E88u;
    // 7F1B5E88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E8C:
    ctx->pc = 0x7F1B5E8Cu;
    // 7F1B5E8C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5E90u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5E90:
    ctx->pc = 0x7F1B5E90u;
    ctx->downcount -= 4;
    // 7F1B5E90: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5E94:
    ctx->pc = 0x7F1B5E94u;
    // 7F1B5E94: addi    r5, r30, 16
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B5E98:
    ctx->pc = 0x7F1B5E98u;
    // 7F1B5E98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5E9C:
    ctx->pc = 0x7F1B5E9Cu;
    // 7F1B5E9C: bl      0x7F114B40
    {
            ctx->lr = 0x7F1B5EA0u;
            ctx->pc = 0x7F114B40u;
            return;
    }

label_7F1B5EA0:
    ctx->pc = 0x7F1B5EA0u;
    ctx->downcount -= 5;
    // 7F1B5EA0: lwz     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B5EA4:
    ctx->pc = 0x7F1B5EA4u;
    // 7F1B5EA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B5EA8:
    ctx->pc = 0x7F1B5EA8u;
    // 7F1B5EA8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5EAC:
    ctx->pc = 0x7F1B5EACu;
    // 7F1B5EAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B5EB0:
    ctx->pc = 0x7F1B5EB0u;
    // 7F1B5EB0: bl      0x7F21AB3C
    {
            ctx->lr = 0x7F1B5EB4u;
            ctx->pc = 0x7F21AB3Cu;
            return;
    }

label_7F1B5EB4:
    ctx->pc = 0x7F1B5EB4u;
    ctx->downcount -= 16;
    // 7F1B5EB4: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B5EB8:
    ctx->pc = 0x7F1B5EB8u;
    // 7F1B5EB8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5EBC:
    ctx->pc = 0x7F1B5EBCu;
    // 7F1B5EBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5EC0:
    ctx->pc = 0x7F1B5EC0u;
    // 7F1B5EC0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5EC4:
    ctx->pc = 0x7F1B5EC4u;
    // 7F1B5EC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5EC8:
    ctx->pc = 0x7F1B5EC8u;
    ctx->downcount -= 7;
    // 7F1B5EC8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5ECC:
    ctx->pc = 0x7F1B5ECCu;
    // 7F1B5ECC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5ED0:
    ctx->pc = 0x7F1B5ED0u;
    // 7F1B5ED0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5ED4:
    ctx->pc = 0x7F1B5ED4u;
    // 7F1B5ED4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5ED8:
    ctx->pc = 0x7F1B5ED8u;
    // 7F1B5ED8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B5EDC:
    ctx->pc = 0x7F1B5EDCu;
    // 7F1B5EDC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B5EE0:
    ctx->pc = 0x7F1B5EE0u;
    // 7F1B5EE0: bl      0x80025A08
    {
            ctx->lr = 0x7F1B5EE4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B5EE4:
    ctx->pc = 0x7F1B5EE4u;
    ctx->downcount -= 4;
    // 7F1B5EE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5EE8:
    ctx->pc = 0x7F1B5EE8u;
    // 7F1B5EE8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5EE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5EEC:
    ctx->pc = 0x7F1B5EECu;
    // 7F1B5EEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5EF0:
    ctx->pc = 0x7F1B5EF0u;
    // 7F1B5EF0: bl      0x7F114738
    {
            ctx->lr = 0x7F1B5EF4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B5EF4:
    ctx->pc = 0x7F1B5EF4u;
    ctx->downcount -= 4;
    // 7F1B5EF4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5EF8:
    ctx->pc = 0x7F1B5EF8u;
    // 7F1B5EF8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5EF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5EFC:
    ctx->pc = 0x7F1B5EFCu;
    // 7F1B5EFC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5F00:
    ctx->pc = 0x7F1B5F00u;
    // 7F1B5F00: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B5F04u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B5F04:
    ctx->pc = 0x7F1B5F04u;
    ctx->downcount -= 4;
    // 7F1B5F04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5F08:
    ctx->pc = 0x7F1B5F08u;
    // 7F1B5F08: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5F08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5F0C:
    ctx->pc = 0x7F1B5F0Cu;
    // 7F1B5F0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5F10:
    ctx->pc = 0x7F1B5F10u;
    // 7F1B5F10: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B5F14u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B5F14:
    ctx->pc = 0x7F1B5F14u;
    ctx->downcount -= 4;
    // 7F1B5F14: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5F18:
    ctx->pc = 0x7F1B5F18u;
    // 7F1B5F18: addi    r5, r31, 16
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B5F1C:
    ctx->pc = 0x7F1B5F1Cu;
    // 7F1B5F1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B5F20:
    ctx->pc = 0x7F1B5F20u;
    // 7F1B5F20: bl      0x7F114B40
    {
            ctx->lr = 0x7F1B5F24u;
            ctx->pc = 0x7F114B40u;
            return;
    }

label_7F1B5F24:
    ctx->pc = 0x7F1B5F24u;
    ctx->downcount -= 10;
    // 7F1B5F24: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5F24u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B5F28:
    ctx->pc = 0x7F1B5F28u;
    // 7F1B5F28: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B5F2C:
    ctx->pc = 0x7F1B5F2Cu;
    // 7F1B5F2C: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5F2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B5F30:
    ctx->pc = 0x7F1B5F30u;
    // 7F1B5F30: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1B5F34:
    ctx->pc = 0x7F1B5F34u;
    // 7F1B5F34: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5F38:
    ctx->pc = 0x7F1B5F38u;
    // 7F1B5F38: addi    r6, r31, 80
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(80);

label_7F1B5F3C:
    ctx->pc = 0x7F1B5F3Cu;
    // 7F1B5F3C: lfs     f3, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B5F3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B5F40:
    ctx->pc = 0x7F1B5F40u;
    // 7F1B5F40: addi    r7, r31, 96
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(96);

label_7F1B5F44:
    ctx->pc = 0x7F1B5F44u;
    // 7F1B5F44: addi    r8, r31, 112
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(112);

label_7F1B5F48:
    ctx->pc = 0x7F1B5F48u;
    // 7F1B5F48: bl      0x7F1AAC5C
    {
            ctx->lr = 0x7F1B5F4Cu;
            ctx->pc = 0x7F1AAC5Cu;
            return;
    }

label_7F1B5F4C:
    ctx->pc = 0x7F1B5F4Cu;
    ctx->downcount -= 6;
    // 7F1B5F4C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5F50:
    ctx->pc = 0x7F1B5F50u;
    // 7F1B5F50: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B5F54:
    ctx->pc = 0x7F1B5F54u;
    // 7F1B5F54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5F58:
    ctx->pc = 0x7F1B5F58u;
    // 7F1B5F58: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B5F5C:
    ctx->pc = 0x7F1B5F5Cu;
    // 7F1B5F5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5F60:
    ctx->pc = 0x7F1B5F60u;
    ctx->downcount -= 5;
    // 7F1B5F60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5F64:
    ctx->pc = 0x7F1B5F64u;
    // 7F1B5F64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5F68:
    ctx->pc = 0x7F1B5F68u;
    // 7F1B5F68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5F6C:
    ctx->pc = 0x7F1B5F6Cu;
    // 7F1B5F6C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B5F70:
    ctx->pc = 0x7F1B5F70u;
    // 7F1B5F70: bl      0x7F1B6E2C
    {
            ctx->lr = 0x7F1B5F74u;
            goto label_7F1B6E2C;
    }

label_7F1B5F74:
    ctx->pc = 0x7F1B5F74u;
    ctx->downcount -= 5;
    // 7F1B5F74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5F78:
    ctx->pc = 0x7F1B5F78u;
    // 7F1B5F78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5F7C:
    ctx->pc = 0x7F1B5F7Cu;
    // 7F1B5F7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5F80:
    ctx->pc = 0x7F1B5F80u;
    // 7F1B5F80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5F84:
    ctx->pc = 0x7F1B5F84u;
    ctx->downcount -= 6;
    // 7F1B5F84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5F88:
    ctx->pc = 0x7F1B5F88u;
    // 7F1B5F88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5F8C:
    ctx->pc = 0x7F1B5F8Cu;
    // 7F1B5F8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5F90:
    ctx->pc = 0x7F1B5F90u;
    // 7F1B5F90: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B5F94:
    ctx->pc = 0x7F1B5F94u;
    // 7F1B5F94: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5F98:
    ctx->pc = 0x7F1B5F98u;
    // 7F1B5F98: bl      0x7F1B7480
    {
            ctx->lr = 0x7F1B5F9Cu;
            goto label_7F1B7480;
    }

label_7F1B5F9C:
    ctx->pc = 0x7F1B5F9Cu;
    ctx->downcount -= 5;
    // 7F1B5F9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5FA0:
    ctx->pc = 0x7F1B5FA0u;
    // 7F1B5FA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5FA4:
    ctx->pc = 0x7F1B5FA4u;
    // 7F1B5FA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5FA8:
    ctx->pc = 0x7F1B5FA8u;
    // 7F1B5FA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5FAC:
    ctx->pc = 0x7F1B5FACu;
    ctx->downcount -= 6;
    // 7F1B5FAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5FB0:
    ctx->pc = 0x7F1B5FB0u;
    // 7F1B5FB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5FB4:
    ctx->pc = 0x7F1B5FB4u;
    // 7F1B5FB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5FB8:
    ctx->pc = 0x7F1B5FB8u;
    // 7F1B5FB8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B5FBC:
    ctx->pc = 0x7F1B5FBCu;
    // 7F1B5FBC: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B5FC0:
    ctx->pc = 0x7F1B5FC0u;
    // 7F1B5FC0: bl      0x7F1B7CC8
    {
            ctx->lr = 0x7F1B5FC4u;
            goto label_7F1B7CC8;
    }

label_7F1B5FC4:
    ctx->pc = 0x7F1B5FC4u;
    ctx->downcount -= 5;
    // 7F1B5FC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5FC8:
    ctx->pc = 0x7F1B5FC8u;
    // 7F1B5FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5FCC:
    ctx->pc = 0x7F1B5FCCu;
    // 7F1B5FCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5FD0:
    ctx->pc = 0x7F1B5FD0u;
    // 7F1B5FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5FD4:
    ctx->pc = 0x7F1B5FD4u;
    ctx->downcount -= 5;
    // 7F1B5FD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5FD8:
    ctx->pc = 0x7F1B5FD8u;
    // 7F1B5FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B5FDC:
    ctx->pc = 0x7F1B5FDCu;
    // 7F1B5FDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B5FE0:
    ctx->pc = 0x7F1B5FE0u;
    // 7F1B5FE0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B5FE4:
    ctx->pc = 0x7F1B5FE4u;
    // 7F1B5FE4: bl      0x7F1B84C0
    {
            ctx->lr = 0x7F1B5FE8u;
            ctx->pc = 0x7F1B84C0u;
            return;
    }

label_7F1B5FE8:
    ctx->pc = 0x7F1B5FE8u;
    ctx->downcount -= 5;
    // 7F1B5FE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B5FEC:
    ctx->pc = 0x7F1B5FECu;
    // 7F1B5FEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B5FF0:
    ctx->pc = 0x7F1B5FF0u;
    // 7F1B5FF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B5FF4:
    ctx->pc = 0x7F1B5FF4u;
    // 7F1B5FF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B5FF8:
    ctx->pc = 0x7F1B5FF8u;
    ctx->downcount -= 7;
    // 7F1B5FF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B5FFC:
    ctx->pc = 0x7F1B5FFCu;
    // 7F1B5FFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6000:
    ctx->pc = 0x7F1B6000u;
    // 7F1B6000: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6004:
    ctx->pc = 0x7F1B6004u;
    // 7F1B6004: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B6008:
    ctx->pc = 0x7F1B6008u;
    // 7F1B6008: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B600C:
    ctx->pc = 0x7F1B600Cu;
    // 7F1B600C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6010:
    ctx->pc = 0x7F1B6010u;
    // 7F1B6010: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B6014u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B6014:
    ctx->pc = 0x7F1B6014u;
    ctx->downcount -= 1;
    // 7F1B6014: bl      0x7F199494
    {
            ctx->lr = 0x7F1B6018u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B6018:
    ctx->pc = 0x7F1B6018u;
    ctx->downcount -= 2;
    // 7F1B6018: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B601C:
    ctx->pc = 0x7F1B601Cu;
    // 7F1B601C: bl      0x7F2C742C
    {
            ctx->lr = 0x7F1B6020u;
            ctx->pc = 0x7F2C742Cu;
            return;
    }

label_7F1B6020:
    ctx->pc = 0x7F1B6020u;
    ctx->downcount -= 6;
    // 7F1B6020: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6024:
    ctx->pc = 0x7F1B6024u;
    // 7F1B6024: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B6028:
    ctx->pc = 0x7F1B6028u;
    // 7F1B6028: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B602C:
    ctx->pc = 0x7F1B602Cu;
    // 7F1B602C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B6030:
    ctx->pc = 0x7F1B6030u;
    // 7F1B6030: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6034:
    ctx->pc = 0x7F1B6034u;
    ctx->downcount -= 12;
    // 7F1B6034: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6038:
    ctx->pc = 0x7F1B6038u;
    // 7F1B6038: addi    r5, r4, 13964
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13964);

label_7F1B603C:
    ctx->pc = 0x7F1B603Cu;
    // 7F1B603C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B6040:
    ctx->pc = 0x7F1B6040u;
    // 7F1B6040: lha     r0, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6044:
    ctx->pc = 0x7F1B6044u;
    // 7F1B6044: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6048:
    ctx->pc = 0x7F1B6048u;
    // 7F1B6048: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B604C:
    ctx->pc = 0x7F1B604Cu;
    // 7F1B604C: lha     r0, 282(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(282);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6050:
    ctx->pc = 0x7F1B6050u;
    // 7F1B6050: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6054:
    ctx->pc = 0x7F1B6054u;
    // 7F1B6054: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B6058:
    ctx->pc = 0x7F1B6058u;
    // 7F1B6058: lha     r0, 284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(284);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B605C:
    ctx->pc = 0x7F1B605Cu;
    // 7F1B605C: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6060:
    ctx->pc = 0x7F1B6060u;
    // 7F1B6060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6064:
    ctx->pc = 0x7F1B6064u;
    ctx->downcount -= 5;
    // 7F1B6064: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6068:
    ctx->pc = 0x7F1B6068u;
    // 7F1B6068: addi    r3, r3, 13964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13964);

label_7F1B606C:
    ctx->pc = 0x7F1B606Cu;
    // 7F1B606C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6070:
    ctx->pc = 0x7F1B6070u;
    // 7F1B6070: lfs     f1, 276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6070u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6074:
    ctx->pc = 0x7F1B6074u;
    // 7F1B6074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6078:
    ctx->pc = 0x7F1B6078u;
    ctx->downcount -= 5;
    // 7F1B6078: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B607C:
    ctx->pc = 0x7F1B607Cu;
    // 7F1B607C: addi    r3, r3, 13964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13964);

label_7F1B6080:
    ctx->pc = 0x7F1B6080u;
    // 7F1B6080: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6084:
    ctx->pc = 0x7F1B6084u;
    // 7F1B6084: lwz     r3, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6088:
    ctx->pc = 0x7F1B6088u;
    // 7F1B6088: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B608C:
    ctx->pc = 0x7F1B608Cu;
    ctx->downcount -= 12;
    // 7F1B608C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6090:
    ctx->pc = 0x7F1B6090u;
    // 7F1B6090: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6094:
    ctx->pc = 0x7F1B6094u;
    // 7F1B6094: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6098:
    ctx->pc = 0x7F1B6098u;
    // 7F1B6098: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B609C:
    ctx->pc = 0x7F1B609Cu;
    // 7F1B609C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B60A0:
    ctx->pc = 0x7F1B60A0u;
    // 7F1B60A0: addi    r4, r4, 13964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13964);

label_7F1B60A4:
    ctx->pc = 0x7F1B60A4u;
    // 7F1B60A4: addi    r3, r3, 13972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B60A8:
    ctx->pc = 0x7F1B60A8u;
    // 7F1B60A8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B60AC:
    ctx->pc = 0x7F1B60ACu;
    // 7F1B60AC: lwz     r0, 268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B60B0:
    ctx->pc = 0x7F1B60B0u;
    // 7F1B60B0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B60B4:
    ctx->pc = 0x7F1B60B4u;
    // 7F1B60B4: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B60B8:
    ctx->pc = 0x7F1B60B8u;
    // 7F1B60B8: bl      0x7F1AA8D4
    {
            ctx->lr = 0x7F1B60BCu;
            ctx->pc = 0x7F1AA8D4u;
            return;
    }

label_7F1B60BC:
    ctx->pc = 0x7F1B60BCu;
    ctx->downcount -= 5;
    // 7F1B60BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B60C0:
    ctx->pc = 0x7F1B60C0u;
    // 7F1B60C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B60C4:
    ctx->pc = 0x7F1B60C4u;
    // 7F1B60C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B60C8:
    ctx->pc = 0x7F1B60C8u;
    // 7F1B60C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B60CC:
    ctx->pc = 0x7F1B60CCu;
    ctx->downcount -= 10;
    // 7F1B60CC: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1B60D0:
    ctx->pc = 0x7F1B60D0u;
    // 7F1B60D0: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1B60D4:
    ctx->pc = 0x7F1B60D4u;
    // 7F1B60D4: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F1B60D8:
    ctx->pc = 0x7F1B60D8u;
    // 7F1B60D8: lwzu     r4, 13960(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13960);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F1B60DC:
    ctx->pc = 0x7F1B60DCu;
    // 7F1B60DC: addi    r6, r6, 13972
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13972);

label_7F1B60E0:
    ctx->pc = 0x7F1B60E0u;
    // 7F1B60E0: stwx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B60E4:
    ctx->pc = 0x7F1B60E4u;
    // 7F1B60E4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F1B60E8:
    ctx->pc = 0x7F1B60E8u;
    // 7F1B60E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B60EC:
    ctx->pc = 0x7F1B60ECu;
    // 7F1B60EC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B60F0:
    ctx->pc = 0x7F1B60F0u;
    // 7F1B60F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B60F4:
    ctx->pc = 0x7F1B60F4u;
    ctx->downcount -= 6;
    // 7F1B60F4: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B60F8:
    ctx->pc = 0x7F1B60F8u;
    // 7F1B60F8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F1B60FC:
    ctx->pc = 0x7F1B60FCu;
    // 7F1B60FC: addi    r5, r4, 13972
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13972);

label_7F1B6100:
    ctx->pc = 0x7F1B6100u;
    // 7F1B6100: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B6104:
    ctx->pc = 0x7F1B6104u;
    // 7F1B6104: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B6108:
    ctx->pc = 0x7F1B6108u;
    ctx->downcount -= 3;
    // 7F1B6108: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B610C:
    // 7F1B610C: cmplw   r0, r3
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

label_7F1B6110:
    // 7F1B6110: bc    4, 2, 0x7F1B6120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6120;
        }
    }

label_7F1B6114:
    ctx->downcount -= 3;
    // 7F1B6114: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B6118:
    ctx->pc = 0x7F1B6118u;
    // 7F1B6118: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B611C:
    ctx->pc = 0x7F1B611Cu;
    // 7F1B611C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6120:
    ctx->downcount -= 2;
    // 7F1B6120: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1B6124:
    // 7F1B6124: bc    16, 0, 0x7F1B6108
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6108u;
                return;
            }
            goto label_7F1B6108;
        }
    }

label_7F1B6128:
    ctx->pc = 0x7F1B6128u;
    ctx->downcount -= 1;
    // 7F1B6128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B612C:
    ctx->pc = 0x7F1B612Cu;
    ctx->downcount -= 25;
    // 7F1B612C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6130:
    ctx->pc = 0x7F1B6130u;
    // 7F1B6130: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6134:
    ctx->pc = 0x7F1B6134u;
    // 7F1B6134: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6138:
    ctx->pc = 0x7F1B6138u;
    // 7F1B6138: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B613C:
    ctx->pc = 0x7F1B613Cu;
    // 7F1B613C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B6140:
    ctx->pc = 0x7F1B6140u;
    // 7F1B6140: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6144:
    ctx->pc = 0x7F1B6144u;
    // 7F1B6144: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6148:
    ctx->pc = 0x7F1B6148u;
    // 7F1B6148: sth     r31, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1B614C:
    ctx->pc = 0x7F1B614Cu;
    // 7F1B614C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6150:
    ctx->pc = 0x7F1B6150u;
    // 7F1B6150: lfs     f0, 7304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6150u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6154:
    ctx->pc = 0x7F1B6154u;
    // 7F1B6154: sth     r31, 302(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(302);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1B6158:
    ctx->pc = 0x7F1B6158u;
    // 7F1B6158: stfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6158u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B615C:
    ctx->pc = 0x7F1B615Cu;
    // 7F1B615C: lbz     r0, 312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1B6160:
    ctx->pc = 0x7F1B6160u;
    // 7F1B6160: cmplwi  r0, 0x0000
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

label_7F1B6164:
    ctx->pc = 0x7F1B6164u;
    // 7F1B6164: bc    12, 2, 0x7F1B65AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B65AC;
        }
    }

label_7F1B6168:
    ctx->pc = 0x7F1B6168u;
    ctx->downcount -= 6;
    // 7F1B6168: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B616C:
    ctx->pc = 0x7F1B616Cu;
    // 7F1B616C: addi    r3, r3, 14080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F1B6170:
    ctx->pc = 0x7F1B6170u;
    // 7F1B6170: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6174:
    ctx->pc = 0x7F1B6174u;
    // 7F1B6174: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_7F1B6178:
    ctx->pc = 0x7F1B6178u;
    // 7F1B6178: cmpwi   r0, 2
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

label_7F1B617C:
    ctx->pc = 0x7F1B617Cu;
    // 7F1B617C: bc    12, 2, 0x7F1B6190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6190;
        }
    }

label_7F1B6180:
    ctx->pc = 0x7F1B6180u;
    ctx->downcount -= 1;
    // 7F1B6180: bc    4, 0, 0x7F1B6234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6234;
        }
    }

label_7F1B6184:
    ctx->pc = 0x7F1B6184u;
    ctx->downcount -= 2;
    // 7F1B6184: cmpwi   r0, 1
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

label_7F1B6188:
    ctx->pc = 0x7F1B6188u;
    // 7F1B6188: bc    4, 0, 0x7F1B61DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B61DC;
        }
    }

label_7F1B618C:
    ctx->pc = 0x7F1B618Cu;
    ctx->downcount -= 1;
    // 7F1B618C: b       0x7F1B6234
    {
            goto label_7F1B6234;
    }

label_7F1B6190:
    ctx->pc = 0x7F1B6190u;
    ctx->downcount -= 3;
    // 7F1B6190: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6194:
    ctx->pc = 0x7F1B6194u;
    // 7F1B6194: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1B6198:
    ctx->pc = 0x7F1B6198u;
    // 7F1B6198: addi    r28, r3, 13972
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B619C:
    ctx->pc = 0x7F1B619Cu;
    ctx->downcount -= 6;
    // 7F1B619C: lwz     r3, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B61A0:
    // 7F1B61A0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B61A4:
    ctx->pc = 0x7F1B61A4u;
    // 7F1B61A4: stw     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B61A8:
    ctx->pc = 0x7F1B61A8u;
    // 7F1B61A8: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B61AC:
    // 7F1B61AC: cmpwi   r0, 5
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

label_7F1B61B0:
    // 7F1B61B0: bc    12, 0, 0x7F1B61B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B61B8;
        }
    }

label_7F1B61B4:
    ctx->pc = 0x7F1B61B4u;
    ctx->downcount -= 1;
    // 7F1B61B4: stw     r31, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B61B8:
    ctx->downcount -= 3;
    // 7F1B61B8: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F1B61BC:
    // 7F1B61BC: li      r4, 2211
    ctx->gpr[4] = (u32)(s32)(2211);

label_7F1B61C0:
    // 7F1B61C0: bl      0x7F0116DC
    {
            ctx->lr = 0x7F1B61C4u;
            ctx->pc = 0x7F0116DCu;
            return;
    }

label_7F1B61C4:
    ctx->pc = 0x7F1B61C4u;
    ctx->downcount -= 5;
    // 7F1B61C4: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B61C8:
    // 7F1B61C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B61CC:
    ctx->pc = 0x7F1B61CCu;
    // 7F1B61CC: lwzx    r0, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B61D0:
    // 7F1B61D0: cmplwi  r0, 0x0000
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

label_7F1B61D4:
    // 7F1B61D4: bc    12, 2, 0x7F1B619C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B619Cu;
                return;
            }
            goto label_7F1B619C;
        }
    }

label_7F1B61D8:
    ctx->pc = 0x7F1B61D8u;
    ctx->downcount -= 1;
    // 7F1B61D8: b       0x7F1B6234
    {
            goto label_7F1B6234;
    }

label_7F1B61DC:
    ctx->pc = 0x7F1B61DCu;
    ctx->downcount -= 5;
    // 7F1B61DC: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B61E0:
    ctx->pc = 0x7F1B61E0u;
    // 7F1B61E0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B61E4:
    ctx->pc = 0x7F1B61E4u;
    // 7F1B61E4: addi    r28, r4, 13960
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(13960);

label_7F1B61E8:
    ctx->pc = 0x7F1B61E8u;
    // 7F1B61E8: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1B61EC:
    ctx->pc = 0x7F1B61ECu;
    // 7F1B61EC: addi    r31, r3, 13972
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B61F0:
    ctx->pc = 0x7F1B61F0u;
    ctx->downcount -= 6;
    // 7F1B61F0: lwz     r3, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B61F4:
    // 7F1B61F4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1B61F8:
    ctx->pc = 0x7F1B61F8u;
    // 7F1B61F8: stw     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B61FC:
    ctx->pc = 0x7F1B61FCu;
    // 7F1B61FC: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6200:
    // 7F1B6200: cmpwi   r0, 0
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

label_7F1B6204:
    // 7F1B6204: bc    4, 0, 0x7F1B6214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6214;
        }
    }

label_7F1B6208:
    ctx->pc = 0x7F1B6208u;
    ctx->downcount -= 3;
    // 7F1B6208: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B620C:
    // 7F1B620C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1B6210:
    ctx->pc = 0x7F1B6210u;
    // 7F1B6210: stw     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6214:
    ctx->downcount -= 3;
    // 7F1B6214: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F1B6218:
    // 7F1B6218: li      r4, 2211
    ctx->gpr[4] = (u32)(s32)(2211);

label_7F1B621C:
    // 7F1B621C: bl      0x7F0116DC
    {
            ctx->lr = 0x7F1B6220u;
            ctx->pc = 0x7F0116DCu;
            return;
    }

label_7F1B6220:
    ctx->pc = 0x7F1B6220u;
    ctx->downcount -= 5;
    // 7F1B6220: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6224:
    // 7F1B6224: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B6228:
    ctx->pc = 0x7F1B6228u;
    // 7F1B6228: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B622C:
    // 7F1B622C: cmplwi  r0, 0x0000
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

label_7F1B6230:
    // 7F1B6230: bc    12, 2, 0x7F1B61F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B61F0u;
                return;
            }
            goto label_7F1B61F0;
        }
    }

label_7F1B6234:
    ctx->pc = 0x7F1B6234u;
    ctx->downcount -= 2;
    // 7F1B6234: cmpwi   r30, 0
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

label_7F1B6238:
    ctx->pc = 0x7F1B6238u;
    // 7F1B6238: bc    12, 2, 0x7F1B6294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6294;
        }
    }

label_7F1B623C:
    ctx->pc = 0x7F1B623Cu;
    ctx->downcount -= 9;
    // 7F1B623C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6240:
    ctx->pc = 0x7F1B6240u;
    // 7F1B6240: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B6244:
    ctx->pc = 0x7F1B6244u;
    // 7F1B6244: lfs     f0, 7304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6244u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6248:
    ctx->pc = 0x7F1B6248u;
    // 7F1B6248: stfs     f0, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6248u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B624C:
    ctx->pc = 0x7F1B624Cu;
    // 7F1B624C: sth     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6250:
    ctx->pc = 0x7F1B6250u;
    // 7F1B6250: sth     r0, 282(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(282);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6254:
    ctx->pc = 0x7F1B6254u;
    // 7F1B6254: lwz     r0, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6258:
    ctx->pc = 0x7F1B6258u;
    // 7F1B6258: cmpwi   r0, 0
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

label_7F1B625C:
    ctx->pc = 0x7F1B625Cu;
    // 7F1B625C: bc    4, 2, 0x7F1B6280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6280;
        }
    }

label_7F1B6260:
    ctx->pc = 0x7F1B6260u;
    ctx->downcount -= 5;
    // 7F1B6260: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F1B6264:
    ctx->pc = 0x7F1B6264u;
    // 7F1B6264: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F1B6268:
    ctx->pc = 0x7F1B6268u;
    // 7F1B6268: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B626C:
    ctx->pc = 0x7F1B626Cu;
    // 7F1B626C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1B6270:
    ctx->pc = 0x7F1B6270u;
    // 7F1B6270: bl      0x7F1B7910
    {
            ctx->lr = 0x7F1B6274u;
            goto label_7F1B7910;
    }

label_7F1B6274:
    ctx->pc = 0x7F1B6274u;
    ctx->downcount -= 3;
    // 7F1B6274: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B6278:
    ctx->pc = 0x7F1B6278u;
    // 7F1B6278: stw     r0, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B627C:
    ctx->pc = 0x7F1B627Cu;
    // 7F1B627C: b       0x7F1B6294
    {
            goto label_7F1B6294;
    }

label_7F1B6280:
    ctx->pc = 0x7F1B6280u;
    ctx->downcount -= 5;
    // 7F1B6280: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F1B6284:
    ctx->pc = 0x7F1B6284u;
    // 7F1B6284: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F1B6288:
    ctx->pc = 0x7F1B6288u;
    // 7F1B6288: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B628C:
    ctx->pc = 0x7F1B628Cu;
    // 7F1B628C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1B6290:
    ctx->pc = 0x7F1B6290u;
    // 7F1B6290: bl      0x7F1B7910
    {
            ctx->lr = 0x7F1B6294u;
            goto label_7F1B7910;
    }

label_7F1B6294:
    ctx->pc = 0x7F1B6294u;
    ctx->downcount -= 6;
    // 7F1B6294: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B6298:
    ctx->pc = 0x7F1B6298u;
    // 7F1B6298: addi    r31, r3, 14256
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F1B629C:
    ctx->pc = 0x7F1B629Cu;
    // 7F1B629C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B62A0:
    ctx->pc = 0x7F1B62A0u;
    // 7F1B62A0: rlwinm r0, r0, 0, 25, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000060u;
    }

label_7F1B62A4:
    ctx->pc = 0x7F1B62A4u;
    // 7F1B62A4: cmpwi   r0, 64
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B62A8:
    ctx->pc = 0x7F1B62A8u;
    // 7F1B62A8: bc    12, 2, 0x7F1B6370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6370;
        }
    }

label_7F1B62AC:
    ctx->pc = 0x7F1B62ACu;
    ctx->downcount -= 1;
    // 7F1B62AC: bc    4, 0, 0x7F1B63BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B63BC;
        }
    }

label_7F1B62B0:
    ctx->pc = 0x7F1B62B0u;
    ctx->downcount -= 2;
    // 7F1B62B0: cmpwi   r0, 32
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

label_7F1B62B4:
    ctx->pc = 0x7F1B62B4u;
    // 7F1B62B4: bc    12, 2, 0x7F1B62BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B62BC;
        }
    }

label_7F1B62B8:
    ctx->pc = 0x7F1B62B8u;
    ctx->downcount -= 1;
    // 7F1B62B8: b       0x7F1B63BC
    {
            goto label_7F1B63BC;
    }

label_7F1B62BC:
    ctx->pc = 0x7F1B62BCu;
    ctx->downcount -= 14;
    // 7F1B62BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B62C0:
    ctx->pc = 0x7F1B62C0u;
    // 7F1B62C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B62C4:
    ctx->pc = 0x7F1B62C4u;
    // 7F1B62C4: stb     r0, 313(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(313);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B62C8:
    ctx->pc = 0x7F1B62C8u;
    // 7F1B62C8: addi    r4, r3, 7312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7312);

label_7F1B62CC:
    ctx->pc = 0x7F1B62CCu;
    // 7F1B62CC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B62D0:
    ctx->pc = 0x7F1B62D0u;
    // 7F1B62D0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B62D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B62D4:
    ctx->pc = 0x7F1B62D4u;
    // 7F1B62D4: lfs     f1, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B62D4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B62D8:
    ctx->pc = 0x7F1B62D8u;
    // 7F1B62D8: addi    r3, r3, 13972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B62DC:
    ctx->pc = 0x7F1B62DCu;
    // 7F1B62DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B62DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1B62E0:
    ctx->pc = 0x7F1B62E0u;
    // 7F1B62E0: stfs     f0, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B62E0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B62E4:
    ctx->pc = 0x7F1B62E4u;
    // 7F1B62E4: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B62E8:
    ctx->pc = 0x7F1B62E8u;
    // 7F1B62E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B62EC:
    ctx->pc = 0x7F1B62ECu;
    // 7F1B62EC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B62F0:
    ctx->pc = 0x7F1B62F0u;
    // 7F1B62F0: bl      0x7F1AA8DC
    {
            ctx->lr = 0x7F1B62F4u;
            ctx->pc = 0x7F1AA8DCu;
            return;
    }

label_7F1B62F4:
    ctx->pc = 0x7F1B62F4u;
    ctx->downcount -= 11;
    // 7F1B62F4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B62F8:
    ctx->pc = 0x7F1B62F8u;
    // 7F1B62F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B62FC:
    ctx->pc = 0x7F1B62FCu;
    // 7F1B62FC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B6300:
    ctx->pc = 0x7F1B6300u;
    // 7F1B6300: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6304:
    ctx->pc = 0x7F1B6304u;
    // 7F1B6304: lfd     f2, 7328(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6304u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7328);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6308:
    ctx->pc = 0x7F1B6308u;
    // 7F1B6308: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B630C:
    ctx->pc = 0x7F1B630Cu;
    // 7F1B630C: lfs     f0, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B630Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6310:
    ctx->pc = 0x7F1B6310u;
    // 7F1B6310: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6310u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6314:
    ctx->pc = 0x7F1B6314u;
    // 7F1B6314: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B6314u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B6318:
    ctx->pc = 0x7F1B6318u;
    // 7F1B6318: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6318u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1B631C:
    ctx->pc = 0x7F1B631Cu;
    // 7F1B631C: bc    4, 1, 0x7F1B6360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6360;
        }
    }

label_7F1B6320:
    ctx->pc = 0x7F1B6320u;
    ctx->downcount -= 6;
    // 7F1B6320: lwz     r0, 268(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6324:
    ctx->pc = 0x7F1B6324u;
    // 7F1B6324: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6328:
    ctx->pc = 0x7F1B6328u;
    // 7F1B6328: addi    r3, r3, 13972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B632C:
    ctx->pc = 0x7F1B632Cu;
    // 7F1B632C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B6330:
    ctx->pc = 0x7F1B6330u;
    // 7F1B6330: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6334:
    ctx->pc = 0x7F1B6334u;
    // 7F1B6334: bl      0x7F1AA8DC
    {
            ctx->lr = 0x7F1B6338u;
            ctx->pc = 0x7F1AA8DCu;
            return;
    }

label_7F1B6338:
    ctx->pc = 0x7F1B6338u;
    ctx->downcount -= 10;
    // 7F1B6338: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1B633C:
    ctx->pc = 0x7F1B633Cu;
    // 7F1B633C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B6340:
    ctx->pc = 0x7F1B6340u;
    // 7F1B6340: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B6344:
    ctx->pc = 0x7F1B6344u;
    // 7F1B6344: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6348:
    ctx->pc = 0x7F1B6348u;
    // 7F1B6348: lfd     f1, 7328(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6348u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7328);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B634C:
    ctx->pc = 0x7F1B634Cu;
    // 7F1B634C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6350:
    ctx->pc = 0x7F1B6350u;
    // 7F1B6350: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6354:
    ctx->pc = 0x7F1B6354u;
    // 7F1B6354: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6354u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1B6358:
    ctx->pc = 0x7F1B6358u;
    // 7F1B6358: stfs     f0, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6358u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B635C:
    ctx->pc = 0x7F1B635Cu;
    // 7F1B635C: b       0x7F1B63EC
    {
            goto label_7F1B63EC;
    }

label_7F1B6360:
    ctx->pc = 0x7F1B6360u;
    ctx->downcount -= 3;
    // 7F1B6360: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F1B6364:
    ctx->pc = 0x7F1B6364u;
    // 7F1B6364: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_7F1B6368:
    ctx->pc = 0x7F1B6368u;
    // 7F1B6368: bl      0x7F0116DC
    {
            ctx->lr = 0x7F1B636Cu;
            ctx->pc = 0x7F0116DCu;
            return;
    }

label_7F1B636C:
    ctx->pc = 0x7F1B636Cu;
    ctx->downcount -= 1;
    // 7F1B636C: b       0x7F1B63EC
    {
            goto label_7F1B63EC;
    }

label_7F1B6370:
    ctx->pc = 0x7F1B6370u;
    ctx->downcount -= 13;
    // 7F1B6370: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B6374:
    ctx->pc = 0x7F1B6374u;
    // 7F1B6374: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6378:
    ctx->pc = 0x7F1B6378u;
    // 7F1B6378: stb     r0, 313(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(313);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B637C:
    ctx->pc = 0x7F1B637Cu;
    // 7F1B637C: addi    r4, r3, 7312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7312);

label_7F1B6380:
    ctx->pc = 0x7F1B6380u;
    // 7F1B6380: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6384:
    ctx->pc = 0x7F1B6384u;
    // 7F1B6384: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6384u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6388:
    ctx->pc = 0x7F1B6388u;
    // 7F1B6388: lfs     f2, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6388u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B638C:
    ctx->pc = 0x7F1B638Cu;
    // 7F1B638C: lfs     f0, 7304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B638Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6390:
    ctx->pc = 0x7F1B6390u;
    // 7F1B6390: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6390u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1B6394:
    ctx->pc = 0x7F1B6394u;
    // 7F1B6394: stfs     f1, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6394u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B6398:
    ctx->pc = 0x7F1B6398u;
    // 7F1B6398: lfs     f1, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6398u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B639C:
    ctx->pc = 0x7F1B639Cu;
    // 7F1B639C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B639Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B63A0:
    ctx->pc = 0x7F1B63A0u;
    // 7F1B63A0: bc    4, 0, 0x7F1B63AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B63AC;
        }
    }

label_7F1B63A4:
    ctx->pc = 0x7F1B63A4u;
    ctx->downcount -= 2;
    // 7F1B63A4: stfs     f0, 276(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B63A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B63A8:
    ctx->pc = 0x7F1B63A8u;
    // 7F1B63A8: b       0x7F1B63EC
    {
            goto label_7F1B63EC;
    }

label_7F1B63AC:
    ctx->pc = 0x7F1B63ACu;
    ctx->downcount -= 3;
    // 7F1B63AC: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F1B63B0:
    ctx->pc = 0x7F1B63B0u;
    // 7F1B63B0: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_7F1B63B4:
    ctx->pc = 0x7F1B63B4u;
    // 7F1B63B4: bl      0x7F0116DC
    {
            ctx->lr = 0x7F1B63B8u;
            ctx->pc = 0x7F0116DCu;
            return;
    }

label_7F1B63B8:
    ctx->pc = 0x7F1B63B8u;
    ctx->downcount -= 1;
    // 7F1B63B8: b       0x7F1B63EC
    {
            goto label_7F1B63EC;
    }

label_7F1B63BC:
    ctx->pc = 0x7F1B63BCu;
    ctx->downcount -= 3;
    // 7F1B63BC: lbz     r0, 313(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(313);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1B63C0:
    ctx->pc = 0x7F1B63C0u;
    // 7F1B63C0: cmplwi  r0, 0x0000
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

label_7F1B63C4:
    ctx->pc = 0x7F1B63C4u;
    // 7F1B63C4: bc    12, 2, 0x7F1B63E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B63E4;
        }
    }

label_7F1B63C8:
    ctx->pc = 0x7F1B63C8u;
    ctx->downcount -= 7;
    // 7F1B63C8: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_7F1B63CC:
    ctx->pc = 0x7F1B63CCu;
    // 7F1B63CC: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_7F1B63D0:
    ctx->pc = 0x7F1B63D0u;
    // 7F1B63D0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F1B63D4:
    ctx->pc = 0x7F1B63D4u;
    // 7F1B63D4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F1B63D8:
    ctx->pc = 0x7F1B63D8u;
    // 7F1B63D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B63DC:
    ctx->pc = 0x7F1B63DCu;
    // 7F1B63DC: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F1B63E0:
    ctx->pc = 0x7F1B63E0u;
    // 7F1B63E0: bl      0x800516D4
    {
            ctx->lr = 0x7F1B63E4u;
            ctx->pc = 0x800516D4u;
            return;
    }

label_7F1B63E4:
    ctx->pc = 0x7F1B63E4u;
    ctx->downcount -= 2;
    // 7F1B63E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B63E8:
    ctx->pc = 0x7F1B63E8u;
    // 7F1B63E8: stb     r0, 313(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(313);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B63EC:
    ctx->pc = 0x7F1B63ECu;
    ctx->downcount -= 4;
    // 7F1B63EC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B63F0:
    ctx->pc = 0x7F1B63F0u;
    // 7F1B63F0: andi.   r0, r0, 0x5000
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x5000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B63F4:
    ctx->pc = 0x7F1B63F4u;
    // 7F1B63F4: cmpwi   r0, 16384
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B63F8:
    ctx->pc = 0x7F1B63F8u;
    // 7F1B63F8: bc    12, 2, 0x7F1B646C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B646C;
        }
    }

label_7F1B63FC:
    ctx->pc = 0x7F1B63FCu;
    ctx->downcount -= 1;
    // 7F1B63FC: bc    4, 0, 0x7F1B64C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B64C8;
        }
    }

label_7F1B6400:
    ctx->pc = 0x7F1B6400u;
    ctx->downcount -= 2;
    // 7F1B6400: cmpwi   r0, 4096
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

label_7F1B6404:
    ctx->pc = 0x7F1B6404u;
    // 7F1B6404: bc    12, 2, 0x7F1B640C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B640C;
        }
    }

label_7F1B6408:
    ctx->pc = 0x7F1B6408u;
    ctx->downcount -= 1;
    // 7F1B6408: b       0x7F1B64C8
    {
            goto label_7F1B64C8;
    }

label_7F1B640C:
    ctx->pc = 0x7F1B640Cu;
    ctx->downcount -= 40;
    // 7F1B640C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B6410:
    ctx->pc = 0x7F1B6410u;
    // 7F1B6410: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B6414:
    ctx->pc = 0x7F1B6414u;
    // 7F1B6414: addi    r4, r3, 14256
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F1B6418:
    ctx->pc = 0x7F1B6418u;
    // 7F1B6418: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B641C:
    ctx->pc = 0x7F1B641Cu;
    // 7F1B641C: lbz     r6, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F1B6420:
    ctx->pc = 0x7F1B6420u;
    // 7F1B6420: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6424:
    ctx->pc = 0x7F1B6424u;
    // 7F1B6424: addi    r5, r3, 7336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7336);

label_7F1B6428:
    ctx->pc = 0x7F1B6428u;
    // 7F1B6428: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B642C:
    ctx->pc = 0x7F1B642Cu;
    // 7F1B642C: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6430:
    ctx->pc = 0x7F1B6430u;
    // 7F1B6430: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6434:
    ctx->pc = 0x7F1B6434u;
    // 7F1B6434: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6434u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6438:
    ctx->pc = 0x7F1B6438u;
    // 7F1B6438: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6438u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B643C:
    ctx->pc = 0x7F1B643Cu;
    // 7F1B643C: lfs     f0, 7316(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B643Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6440:
    ctx->pc = 0x7F1B6440u;
    // 7F1B6440: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6440u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1B6444:
    ctx->pc = 0x7F1B6444u;
    // 7F1B6444: lfs     f1, 7320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6444u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6448:
    ctx->pc = 0x7F1B6448u;
    // 7F1B6448: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6448u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1B644C:
    ctx->pc = 0x7F1B644Cu;
    // 7F1B644C: stfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B644Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6450:
    ctx->pc = 0x7F1B6450u;
    // 7F1B6450: lfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6450u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6454:
    ctx->pc = 0x7F1B6454u;
    // 7F1B6454: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6454u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B6458:
    ctx->pc = 0x7F1B6458u;
    // 7F1B6458: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6458u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B645C:
    ctx->pc = 0x7F1B645Cu;
    // 7F1B645C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B645Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B6460:
    ctx->pc = 0x7F1B6460u;
    // 7F1B6460: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6464:
    ctx->pc = 0x7F1B6464u;
    // 7F1B6464: sth     r0, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6468:
    ctx->pc = 0x7F1B6468u;
    // 7F1B6468: b       0x7F1B64C8
    {
            goto label_7F1B64C8;
    }

label_7F1B646C:
    ctx->pc = 0x7F1B646Cu;
    ctx->downcount -= 39;
    // 7F1B646C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B6470:
    ctx->pc = 0x7F1B6470u;
    // 7F1B6470: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B6474:
    ctx->pc = 0x7F1B6474u;
    // 7F1B6474: addi    r4, r3, 14256
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F1B6478:
    ctx->pc = 0x7F1B6478u;
    // 7F1B6478: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B647C:
    ctx->pc = 0x7F1B647Cu;
    // 7F1B647C: lbz     r6, 27(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F1B6480:
    ctx->pc = 0x7F1B6480u;
    // 7F1B6480: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6484:
    ctx->pc = 0x7F1B6484u;
    // 7F1B6484: addi    r5, r3, 7336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7336);

label_7F1B6488:
    ctx->pc = 0x7F1B6488u;
    // 7F1B6488: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B648C:
    ctx->pc = 0x7F1B648Cu;
    // 7F1B648C: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6490:
    ctx->pc = 0x7F1B6490u;
    // 7F1B6490: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6494:
    ctx->pc = 0x7F1B6494u;
    // 7F1B6494: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6494u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6498:
    ctx->pc = 0x7F1B6498u;
    // 7F1B6498: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B649C:
    ctx->pc = 0x7F1B649Cu;
    // 7F1B649C: lfs     f0, 7316(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B649Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B64A0:
    ctx->pc = 0x7F1B64A0u;
    // 7F1B64A0: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B64A0u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1B64A4:
    ctx->pc = 0x7F1B64A4u;
    // 7F1B64A4: lfs     f1, 7324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B64A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B64A8:
    ctx->pc = 0x7F1B64A8u;
    // 7F1B64A8: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B64A8u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1B64AC:
    ctx->pc = 0x7F1B64ACu;
    // 7F1B64AC: stfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B64ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B64B0:
    ctx->pc = 0x7F1B64B0u;
    // 7F1B64B0: lfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B64B0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B64B4:
    ctx->pc = 0x7F1B64B4u;
    // 7F1B64B4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B64B4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B64B8:
    ctx->pc = 0x7F1B64B8u;
    // 7F1B64B8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B64B8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B64BC:
    ctx->pc = 0x7F1B64BCu;
    // 7F1B64BC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B64BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B64C0:
    ctx->pc = 0x7F1B64C0u;
    // 7F1B64C0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B64C4:
    ctx->pc = 0x7F1B64C4u;
    // 7F1B64C4: sth     r0, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B64C8:
    ctx->pc = 0x7F1B64C8u;
    ctx->downcount -= 6;
    // 7F1B64C8: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B64CC:
    ctx->pc = 0x7F1B64CCu;
    // 7F1B64CC: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1B64D0:
    ctx->pc = 0x7F1B64D0u;
    // 7F1B64D0: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F1B64D4:
    ctx->pc = 0x7F1B64D4u;
    // 7F1B64D4: andi.   r3, r4, 0xA000
    {
        ctx->gpr[3] = ctx->gpr[4] & 0xA000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B64D8:
    ctx->pc = 0x7F1B64D8u;
    // 7F1B64D8: cmpw    r3, r0
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

label_7F1B64DC:
    ctx->pc = 0x7F1B64DCu;
    // 7F1B64DC: bc    12, 2, 0x7F1B64F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B64F0;
        }
    }

label_7F1B64E0:
    ctx->pc = 0x7F1B64E0u;
    ctx->downcount -= 1;
    // 7F1B64E0: bc    4, 0, 0x7F1B65AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B65AC;
        }
    }

label_7F1B64E4:
    ctx->pc = 0x7F1B64E4u;
    ctx->downcount -= 2;
    // 7F1B64E4: cmpwi   r3, 8192
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B64E8:
    ctx->pc = 0x7F1B64E8u;
    // 7F1B64E8: bc    12, 2, 0x7F1B6550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6550;
        }
    }

label_7F1B64EC:
    ctx->pc = 0x7F1B64ECu;
    ctx->downcount -= 1;
    // 7F1B64EC: b       0x7F1B65AC
    {
            goto label_7F1B65AC;
    }

label_7F1B64F0:
    ctx->pc = 0x7F1B64F0u;
    ctx->downcount -= 40;
    // 7F1B64F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B64F4:
    ctx->pc = 0x7F1B64F4u;
    // 7F1B64F4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B64F8:
    ctx->pc = 0x7F1B64F8u;
    // 7F1B64F8: addi    r4, r3, 14256
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F1B64FC:
    ctx->pc = 0x7F1B64FCu;
    // 7F1B64FC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6500:
    ctx->pc = 0x7F1B6500u;
    // 7F1B6500: lbz     r6, 25(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F1B6504:
    ctx->pc = 0x7F1B6504u;
    // 7F1B6504: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6508:
    ctx->pc = 0x7F1B6508u;
    // 7F1B6508: addi    r5, r3, 7336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7336);

label_7F1B650C:
    ctx->pc = 0x7F1B650Cu;
    // 7F1B650C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6510:
    ctx->pc = 0x7F1B6510u;
    // 7F1B6510: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6514:
    ctx->pc = 0x7F1B6514u;
    // 7F1B6514: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6518:
    ctx->pc = 0x7F1B6518u;
    // 7F1B6518: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6518u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B651C:
    ctx->pc = 0x7F1B651Cu;
    // 7F1B651C: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B651Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6520:
    ctx->pc = 0x7F1B6520u;
    // 7F1B6520: lfs     f0, 7316(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6520u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6524:
    ctx->pc = 0x7F1B6524u;
    // 7F1B6524: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6524u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1B6528:
    ctx->pc = 0x7F1B6528u;
    // 7F1B6528: lfs     f1, 7320(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6528u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B652C:
    ctx->pc = 0x7F1B652Cu;
    // 7F1B652C: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B652Cu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1B6530:
    ctx->pc = 0x7F1B6530u;
    // 7F1B6530: stfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6530u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6534:
    ctx->pc = 0x7F1B6534u;
    // 7F1B6534: lfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6534u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6538:
    ctx->pc = 0x7F1B6538u;
    // 7F1B6538: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6538u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B653C:
    ctx->pc = 0x7F1B653Cu;
    // 7F1B653C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B653Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B6540:
    ctx->pc = 0x7F1B6540u;
    // 7F1B6540: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B6544:
    ctx->pc = 0x7F1B6544u;
    // 7F1B6544: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6548:
    ctx->pc = 0x7F1B6548u;
    // 7F1B6548: sth     r0, 302(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(302);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B654C:
    ctx->pc = 0x7F1B654Cu;
    // 7F1B654C: b       0x7F1B65AC
    {
            goto label_7F1B65AC;
    }

label_7F1B6550:
    ctx->pc = 0x7F1B6550u;
    ctx->downcount -= 39;
    // 7F1B6550: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1B6554:
    ctx->pc = 0x7F1B6554u;
    // 7F1B6554: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B6558:
    ctx->pc = 0x7F1B6558u;
    // 7F1B6558: addi    r4, r3, 14256
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F1B655C:
    ctx->pc = 0x7F1B655Cu;
    // 7F1B655C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6560:
    ctx->pc = 0x7F1B6560u;
    // 7F1B6560: lbz     r6, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F1B6564:
    ctx->pc = 0x7F1B6564u;
    // 7F1B6564: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6568:
    ctx->pc = 0x7F1B6568u;
    // 7F1B6568: addi    r5, r3, 7336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7336);

label_7F1B656C:
    ctx->pc = 0x7F1B656Cu;
    // 7F1B656C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6570:
    ctx->pc = 0x7F1B6570u;
    // 7F1B6570: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6574:
    ctx->pc = 0x7F1B6574u;
    // 7F1B6574: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6578:
    ctx->pc = 0x7F1B6578u;
    // 7F1B6578: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6578u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B657C:
    ctx->pc = 0x7F1B657Cu;
    // 7F1B657C: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B657Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6580:
    ctx->pc = 0x7F1B6580u;
    // 7F1B6580: lfs     f0, 7316(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6580u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6584:
    ctx->pc = 0x7F1B6584u;
    // 7F1B6584: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6584u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F1B6588:
    ctx->pc = 0x7F1B6588u;
    // 7F1B6588: lfs     f1, 7324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6588u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B658C:
    ctx->pc = 0x7F1B658Cu;
    // 7F1B658C: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B658Cu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1B6590:
    ctx->pc = 0x7F1B6590u;
    // 7F1B6590: stfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6590u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6594:
    ctx->pc = 0x7F1B6594u;
    // 7F1B6594: lfs     f0, 308(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6594u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6598:
    ctx->pc = 0x7F1B6598u;
    // 7F1B6598: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6598u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B659C:
    ctx->pc = 0x7F1B659Cu;
    // 7F1B659C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B659Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B65A0:
    ctx->pc = 0x7F1B65A0u;
    // 7F1B65A0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B65A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B65A4:
    ctx->pc = 0x7F1B65A4u;
    // 7F1B65A4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B65A8:
    ctx->pc = 0x7F1B65A8u;
    // 7F1B65A8: sth     r0, 302(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(302);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B65AC:
    ctx->pc = 0x7F1B65ACu;
    ctx->downcount -= 16;
    // 7F1B65AC: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B65B0:
    ctx->pc = 0x7F1B65B0u;
    // 7F1B65B0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B65B4:
    ctx->pc = 0x7F1B65B4u;
    // 7F1B65B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B65B8:
    ctx->pc = 0x7F1B65B8u;
    // 7F1B65B8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B65BC:
    ctx->pc = 0x7F1B65BCu;
    // 7F1B65BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B65C0:
    ctx->pc = 0x7F1B65C0u;
    ctx->downcount -= 19;
    // 7F1B65C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B65C4:
    ctx->pc = 0x7F1B65C4u;
    // 7F1B65C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B65C8:
    ctx->pc = 0x7F1B65C8u;
    // 7F1B65C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B65CC:
    ctx->pc = 0x7F1B65CCu;
    // 7F1B65CC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B65D0:
    ctx->pc = 0x7F1B65D0u;
    // 7F1B65D0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B65D4:
    ctx->pc = 0x7F1B65D4u;
    // 7F1B65D4: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_7F1B65D8:
    ctx->pc = 0x7F1B65D8u;
    // 7F1B65D8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B65DC:
    ctx->pc = 0x7F1B65DCu;
    // 7F1B65DC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1B65E0:
    ctx->pc = 0x7F1B65E0u;
    // 7F1B65E0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B65E4:
    ctx->downcount -= 3;
    // 7F1B65E4: add   r30, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F1B65E8:
    ctx->pc = 0x7F1B65E8u;
    // 7F1B65E8: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B65E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B65EC:
    // 7F1B65EC: bl      0x7F1B6694
    {
            ctx->lr = 0x7F1B65F0u;
            goto label_7F1B6694;
    }

label_7F1B65F0:
    ctx->pc = 0x7F1B65F0u;
    ctx->downcount -= 4;
    // 7F1B65F0: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B65F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B65F4:
    // 7F1B65F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B65F8:
    ctx->pc = 0x7F1B65F8u;
    // 7F1B65F8: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B65F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1B65FC:
    // 7F1B65FC: bc    4, 1, 0x7F1B6604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6604;
        }
    }

label_7F1B6600:
    ctx->downcount -= 1;
    // 7F1B6600: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F1B6604:
    ctx->pc = 0x7F1B6604u;
    ctx->downcount -= 3;
    // 7F1B6604: fneg    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6604u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F1B6608:
    ctx->pc = 0x7F1B6608u;
    // 7F1B6608: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B6608u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1B660C:
    // 7F1B660C: bc    4, 0, 0x7F1B6614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6614;
        }
    }

label_7F1B6610:
    ctx->downcount -= 1;
    // 7F1B6610: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F1B6614:
    ctx->pc = 0x7F1B6614u;
    ctx->downcount -= 3;
    // 7F1B6614: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6614u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6618:
    ctx->pc = 0x7F1B6618u;
    // 7F1B6618: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6618u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1B661C:
    // 7F1B661C: bc    4, 1, 0x7F1B6624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6624;
        }
    }

label_7F1B6620:
    ctx->downcount -= 1;
    // 7F1B6620: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F1B6624:
    ctx->pc = 0x7F1B6624u;
    ctx->downcount -= 2;
    // 7F1B6624: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B6624u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1B6628:
    // 7F1B6628: bc    4, 0, 0x7F1B6630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6630;
        }
    }

label_7F1B662C:
    ctx->downcount -= 1;
    // 7F1B662C: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F1B6630:
    ctx->pc = 0x7F1B6630u;
    ctx->downcount -= 3;
    // 7F1B6630: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6630u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6634:
    ctx->pc = 0x7F1B6634u;
    // 7F1B6634: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6634u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1B6638:
    // 7F1B6638: bc    4, 1, 0x7F1B6640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6640;
        }
    }

label_7F1B663C:
    ctx->downcount -= 1;
    // 7F1B663C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1B6640:
    ctx->pc = 0x7F1B6640u;
    ctx->downcount -= 2;
    // 7F1B6640: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B6640u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1B6644:
    // 7F1B6644: bc    4, 0, 0x7F1B664C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B664C;
        }
    }

label_7F1B6648:
    ctx->downcount -= 1;
    // 7F1B6648: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F1B664C:
    ctx->downcount -= 6;
    // 7F1B664C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1B6650:
    // 7F1B6650: and   r29, r29, r0
    {
        ctx->gpr[29] = ctx->gpr[29] & ctx->gpr[0];
    }

label_7F1B6654:
    // 7F1B6654: cmpwi   r27, 2
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6658:
    // 7F1B6658: or   r28, r28, r0
    {
        ctx->gpr[28] = ctx->gpr[28] | ctx->gpr[0];
    }

label_7F1B665C:
    // 7F1B665C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B6660:
    // 7F1B6660: bc    12, 0, 0x7F1B65E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B65E4u;
                return;
            }
            goto label_7F1B65E4;
        }
    }

label_7F1B6664:
    ctx->pc = 0x7F1B6664u;
    ctx->downcount -= 2;
    // 7F1B6664: rlwinm. r0, r29, 0, 26, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000003Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B6668:
    ctx->pc = 0x7F1B6668u;
    // 7F1B6668: bc    12, 2, 0x7F1B6674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6674;
        }
    }

label_7F1B666C:
    ctx->pc = 0x7F1B666Cu;
    ctx->downcount -= 2;
    // 7F1B666C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1B6670:
    ctx->pc = 0x7F1B6670u;
    // 7F1B6670: b       0x7F1B6680
    {
            goto label_7F1B6680;
    }

label_7F1B6674:
    ctx->pc = 0x7F1B6674u;
    ctx->downcount -= 3;
    // 7F1B6674: rlwinm r3, r28, 0, 26, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000003Fu;
    }

label_7F1B6678:
    ctx->pc = 0x7F1B6678u;
    // 7F1B6678: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B667C:
    ctx->pc = 0x7F1B667Cu;
    // 7F1B667C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1B6680:
    ctx->pc = 0x7F1B6680u;
    ctx->downcount -= 16;
    // 7F1B6680: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B6684:
    ctx->pc = 0x7F1B6684u;
    // 7F1B6684: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6688:
    ctx->pc = 0x7F1B6688u;
    // 7F1B6688: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B668C:
    ctx->pc = 0x7F1B668Cu;
    // 7F1B668C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B6690:
    ctx->pc = 0x7F1B6690u;
    // 7F1B6690: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6694:
    ctx->pc = 0x7F1B6694u;
    ctx->downcount -= 8;
    // 7F1B6694: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6698:
    ctx->pc = 0x7F1B6698u;
    // 7F1B6698: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B669C:
    ctx->pc = 0x7F1B669Cu;
    // 7F1B669C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B66A0:
    ctx->pc = 0x7F1B66A0u;
    // 7F1B66A0: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F1B66A4:
    ctx->pc = 0x7F1B66A4u;
    // 7F1B66A4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B66A8:
    ctx->pc = 0x7F1B66A8u;
    // 7F1B66A8: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B66A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B66AC:
    ctx->pc = 0x7F1B66ACu;
    // 7F1B66AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B66B0:
    ctx->pc = 0x7F1B66B0u;
    // 7F1B66B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B66B4:
    ctx->pc = 0x7F1B66B4u;
    ctx->downcount -= 5;
    // 7F1B66B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B66B8:
    ctx->pc = 0x7F1B66B8u;
    // 7F1B66B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B66BC:
    ctx->pc = 0x7F1B66BCu;
    // 7F1B66BC: lfs     f0, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B66BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B66C0:
    ctx->pc = 0x7F1B66C0u;
    // 7F1B66C0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B66C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1B66C4:
    ctx->pc = 0x7F1B66C4u;
    // 7F1B66C4: bc    4, 1, 0x7F1B66D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B66D4;
        }
    }

label_7F1B66C8:
    ctx->pc = 0x7F1B66C8u;
    ctx->downcount -= 3;
    // 7F1B66C8: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F1B66CC:
    ctx->pc = 0x7F1B66CCu;
    // 7F1B66CC: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1B66D0:
    ctx->pc = 0x7F1B66D0u;
    // 7F1B66D0: b       0x7F1B66EC
    {
            goto label_7F1B66EC;
    }

label_7F1B66D4:
    ctx->pc = 0x7F1B66D4u;
    ctx->downcount -= 4;
    // 7F1B66D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B66D8:
    ctx->pc = 0x7F1B66D8u;
    // 7F1B66D8: lfs     f0, 7348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B66D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B66DC:
    ctx->pc = 0x7F1B66DCu;
    // 7F1B66DC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B66DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1B66E0:
    ctx->pc = 0x7F1B66E0u;
    // 7F1B66E0: bc    4, 0, 0x7F1B66EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B66EC;
        }
    }

label_7F1B66E4:
    ctx->pc = 0x7F1B66E4u;
    ctx->downcount -= 2;
    // 7F1B66E4: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F1B66E8:
    ctx->pc = 0x7F1B66E8u;
    // 7F1B66E8: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1B66EC:
    ctx->pc = 0x7F1B66ECu;
    ctx->downcount -= 4;
    // 7F1B66EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B66F0:
    ctx->pc = 0x7F1B66F0u;
    // 7F1B66F0: lfs     f0, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B66F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B66F4:
    ctx->pc = 0x7F1B66F4u;
    // 7F1B66F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B66F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B66F8:
    ctx->pc = 0x7F1B66F8u;
    // 7F1B66F8: bc    4, 1, 0x7F1B6708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6708;
        }
    }

label_7F1B66FC:
    ctx->pc = 0x7F1B66FCu;
    ctx->downcount -= 3;
    // 7F1B66FC: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F1B6700:
    ctx->pc = 0x7F1B6700u;
    // 7F1B6700: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1B6704:
    ctx->pc = 0x7F1B6704u;
    // 7F1B6704: b       0x7F1B6720
    {
            goto label_7F1B6720;
    }

label_7F1B6708:
    ctx->pc = 0x7F1B6708u;
    ctx->downcount -= 4;
    // 7F1B6708: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B670C:
    ctx->pc = 0x7F1B670Cu;
    // 7F1B670C: lfs     f0, 7348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B670Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6710:
    ctx->pc = 0x7F1B6710u;
    // 7F1B6710: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6710u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B6714:
    ctx->pc = 0x7F1B6714u;
    // 7F1B6714: bc    4, 0, 0x7F1B6720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6720;
        }
    }

label_7F1B6718:
    ctx->pc = 0x7F1B6718u;
    ctx->downcount -= 2;
    // 7F1B6718: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F1B671C:
    ctx->pc = 0x7F1B671Cu;
    // 7F1B671C: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1B6720:
    ctx->pc = 0x7F1B6720u;
    ctx->downcount -= 2;
    // 7F1B6720: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F1B6724:
    ctx->pc = 0x7F1B6724u;
    // 7F1B6724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6728:
    ctx->pc = 0x7F1B6728u;
    ctx->downcount -= 33;
    // 7F1B6728: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B672C:
    ctx->pc = 0x7F1B672Cu;
    // 7F1B672C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6730:
    ctx->pc = 0x7F1B6730u;
    // 7F1B6730: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6734:
    ctx->pc = 0x7F1B6734u;
    // 7F1B6734: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6734u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B6738:
    ctx->pc = 0x7F1B6738u;
    // 7F1B6738: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6738u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B6738u);
        if (ctx->exception) return;
    }

label_7F1B673C:
    ctx->pc = 0x7F1B673Cu;
    // 7F1B673C: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B673Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1B6740:
    ctx->pc = 0x7F1B6740u;
    // 7F1B6740: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6740u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B6740u);
        if (ctx->exception) return;
    }

label_7F1B6744:
    ctx->pc = 0x7F1B6744u;
    // 7F1B6744: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1B6748:
    ctx->pc = 0x7F1B6748u;
    // 7F1B6748: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B6748u);
        if (ctx->exception) return;
    }

label_7F1B674C:
    ctx->pc = 0x7F1B674Cu;
    // 7F1B674C: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B674Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1B6750:
    ctx->pc = 0x7F1B6750u;
    // 7F1B6750: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B6750u);
        if (ctx->exception) return;
    }

label_7F1B6754:
    ctx->pc = 0x7F1B6754u;
    // 7F1B6754: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1B6758:
    ctx->pc = 0x7F1B6758u;
    // 7F1B6758: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B6758u);
        if (ctx->exception) return;
    }

label_7F1B675C:
    ctx->pc = 0x7F1B675Cu;
    // 7F1B675C: stfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B675Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F1B6760:
    ctx->pc = 0x7F1B6760u;
    // 7F1B6760: psq_st   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F1B6760u);
        if (ctx->exception) return;
    }

label_7F1B6764:
    ctx->pc = 0x7F1B6764u;
    // 7F1B6764: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B6768:
    ctx->pc = 0x7F1B6768u;
    // 7F1B6768: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6768u)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F1B676C:
    ctx->pc = 0x7F1B676Cu;
    // 7F1B676C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B6770:
    ctx->pc = 0x7F1B6770u;
    // 7F1B6770: fmr    f29, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B6770u)) return;
    ctx->fpr[29] = ctx->fpr[2];

label_7F1B6774:
    ctx->pc = 0x7F1B6774u;
    // 7F1B6774: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6778:
    ctx->pc = 0x7F1B6778u;
    // 7F1B6778: fmr    f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6778u)) return;
    ctx->fpr[30] = ctx->fpr[3];

label_7F1B677C:
    ctx->pc = 0x7F1B677Cu;
    // 7F1B677C: fmr    f31, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1B677Cu)) return;
    ctx->fpr[31] = ctx->fpr[4];

label_7F1B6780:
    ctx->pc = 0x7F1B6780u;
    // 7F1B6780: bl      0x7F1B66B4
    {
            ctx->lr = 0x7F1B6784u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B66B4u;
                return;
            }
            goto label_7F1B66B4;
    }

label_7F1B6784:
    ctx->pc = 0x7F1B6784u;
    ctx->downcount -= 4;
    // 7F1B6784: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1B6784u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1B6788:
    ctx->pc = 0x7F1B6788u;
    // 7F1B6788: rlwinm r29, r3, 0, 16, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F1B678C:
    ctx->pc = 0x7F1B678Cu;
    // 7F1B678C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B678Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F1B6790:
    ctx->pc = 0x7F1B6790u;
    // 7F1B6790: bl      0x7F1B66B4
    {
            ctx->lr = 0x7F1B6794u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B66B4u;
                return;
            }
            goto label_7F1B66B4;
    }

label_7F1B6794:
    ctx->pc = 0x7F1B6794u;
    ctx->downcount -= 1;
    // 7F1B6794: rlwinm r28, r3, 0, 16, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F1B6798:
    ctx->downcount -= 2;
    // 7F1B6798: rlwinm. r0, r29, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B679C:
    // 7F1B679C: bc    4, 2, 0x7F1B67B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B67B4;
        }
    }

label_7F1B67A0:
    ctx->downcount -= 2;
    // 7F1B67A0: rlwinm. r0, r28, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B67A4:
    // 7F1B67A4: bc    4, 2, 0x7F1B67B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B67B4;
        }
    }

label_7F1B67A8:
    ctx->downcount -= 3;
    // 7F1B67A8: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F1B67AC:
    // 7F1B67AC: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1B67B0:
    // 7F1B67B0: b       0x7F1B68E4
    {
            goto label_7F1B68E4;
    }

label_7F1B67B4:
    ctx->downcount -= 4;
    // 7F1B67B4: rlwinm r3, r29, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F1B67B8:
    // 7F1B67B8: rlwinm r0, r28, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_7F1B67BC:
    // 7F1B67BC: and.   r0, r3, r0
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

label_7F1B67C0:
    // 7F1B67C0: bc    12, 2, 0x7F1B67D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B67D0;
        }
    }

label_7F1B67C4:
    ctx->downcount -= 3;
    // 7F1B67C4: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F1B67C8:
    // 7F1B67C8: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1B67CC:
    // 7F1B67CC: b       0x7F1B68E4
    {
            goto label_7F1B68E4;
    }

label_7F1B67D0:
    ctx->downcount -= 3;
    // 7F1B67D0: cmplwi  r3, 0x0000
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

label_7F1B67D4:
    // 7F1B67D4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B67D8:
    // 7F1B67D8: bc    12, 2, 0x7F1B67E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B67E0;
        }
    }

label_7F1B67DC:
    ctx->downcount -= 1;
    // 7F1B67DC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B67E0:
    ctx->downcount -= 3;
    // 7F1B67E0: rlwinm. r0, r4, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B67E4:
    // 7F1B67E4: rlwinm r3, r4, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_7F1B67E8:
    // 7F1B67E8: bc    12, 2, 0x7F1B6814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6814;
        }
    }

label_7F1B67EC:
    ctx->downcount -= 26;
    // 7F1B67EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B67F0:
    ctx->pc = 0x7F1B67F0u;
    // 7F1B67F0: fsubs   f1, f30, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B67F0u)) return;
    ppc_fsubs(ctx, 1, 30, 28);

label_7F1B67F4:
    ctx->pc = 0x7F1B67F4u;
    // 7F1B67F4: lfs     f3, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B67F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B67F8:
    ctx->pc = 0x7F1B67F8u;
    // 7F1B67F8: fsubs   f0, f31, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B67F8u)) return;
    ppc_fsubs(ctx, 0, 31, 29);

label_7F1B67FC:
    ctx->pc = 0x7F1B67FCu;
    // 7F1B67FC: fsubs   f2, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B67FCu)) return;
    ppc_fsubs(ctx, 2, 3, 29);

label_7F1B6800:
    ctx->pc = 0x7F1B6800u;
    // 7F1B6800: fmr    f26, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6800u)) return;
    ctx->fpr[26] = ctx->fpr[3];

label_7F1B6804:
    ctx->pc = 0x7F1B6804u;
    // 7F1B6804: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6804u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1B6808:
    ctx->pc = 0x7F1B6808u;
    // 7F1B6808: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6808u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1B680C:
    ctx->pc = 0x7F1B680Cu;
    // 7F1B680C: fadds   f27, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B680Cu)) return;
    ppc_fadds(ctx, 27, 28, 0);

label_7F1B6810:
    // 7F1B6810: b       0x7F1B68A0
    {
            goto label_7F1B68A0;
    }

label_7F1B6814:
    ctx->downcount -= 2;
    // 7F1B6814: rlwinm. r0, r3, 0, 29, 29
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

label_7F1B6818:
    // 7F1B6818: bc    12, 2, 0x7F1B6844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6844;
        }
    }

label_7F1B681C:
    ctx->downcount -= 26;
    // 7F1B681C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6820:
    ctx->pc = 0x7F1B6820u;
    // 7F1B6820: fsubs   f1, f30, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B6820u)) return;
    ppc_fsubs(ctx, 1, 30, 28);

label_7F1B6824:
    ctx->pc = 0x7F1B6824u;
    // 7F1B6824: lfs     f3, 7348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6824u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B6828:
    ctx->pc = 0x7F1B6828u;
    // 7F1B6828: fsubs   f0, f31, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B6828u)) return;
    ppc_fsubs(ctx, 0, 31, 29);

label_7F1B682C:
    ctx->pc = 0x7F1B682Cu;
    // 7F1B682C: fsubs   f2, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B682Cu)) return;
    ppc_fsubs(ctx, 2, 3, 29);

label_7F1B6830:
    ctx->pc = 0x7F1B6830u;
    // 7F1B6830: fmr    f26, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6830u)) return;
    ctx->fpr[26] = ctx->fpr[3];

label_7F1B6834:
    ctx->pc = 0x7F1B6834u;
    // 7F1B6834: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6834u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1B6838:
    ctx->pc = 0x7F1B6838u;
    // 7F1B6838: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6838u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1B683C:
    ctx->pc = 0x7F1B683Cu;
    // 7F1B683C: fadds   f27, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B683Cu)) return;
    ppc_fadds(ctx, 27, 28, 0);

label_7F1B6840:
    // 7F1B6840: b       0x7F1B68A0
    {
            goto label_7F1B68A0;
    }

label_7F1B6844:
    ctx->downcount -= 2;
    // 7F1B6844: rlwinm. r0, r3, 0, 30, 30
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

label_7F1B6848:
    // 7F1B6848: bc    12, 2, 0x7F1B6874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6874;
        }
    }

label_7F1B684C:
    ctx->downcount -= 26;
    // 7F1B684C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6850:
    ctx->pc = 0x7F1B6850u;
    // 7F1B6850: fsubs   f1, f31, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B6850u)) return;
    ppc_fsubs(ctx, 1, 31, 29);

label_7F1B6854:
    ctx->pc = 0x7F1B6854u;
    // 7F1B6854: lfs     f3, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6854u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B6858:
    ctx->pc = 0x7F1B6858u;
    // 7F1B6858: fsubs   f0, f30, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B6858u)) return;
    ppc_fsubs(ctx, 0, 30, 28);

label_7F1B685C:
    ctx->pc = 0x7F1B685Cu;
    // 7F1B685C: fsubs   f2, f3, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B685Cu)) return;
    ppc_fsubs(ctx, 2, 3, 28);

label_7F1B6860:
    ctx->pc = 0x7F1B6860u;
    // 7F1B6860: fmr    f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6860u)) return;
    ctx->fpr[27] = ctx->fpr[3];

label_7F1B6864:
    ctx->pc = 0x7F1B6864u;
    // 7F1B6864: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6864u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1B6868:
    ctx->pc = 0x7F1B6868u;
    // 7F1B6868: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6868u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1B686C:
    ctx->pc = 0x7F1B686Cu;
    // 7F1B686C: fadds   f26, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B686Cu)) return;
    ppc_fadds(ctx, 26, 29, 0);

label_7F1B6870:
    // 7F1B6870: b       0x7F1B68A0
    {
            goto label_7F1B68A0;
    }

label_7F1B6874:
    ctx->downcount -= 2;
    // 7F1B6874: rlwinm. r0, r3, 0, 31, 31
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

label_7F1B6878:
    // 7F1B6878: bc    12, 2, 0x7F1B68A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B68A0;
        }
    }

label_7F1B687C:
    ctx->downcount -= 25;
    // 7F1B687C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6880:
    ctx->pc = 0x7F1B6880u;
    // 7F1B6880: fsubs   f1, f31, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B6880u)) return;
    ppc_fsubs(ctx, 1, 31, 29);

label_7F1B6884:
    ctx->pc = 0x7F1B6884u;
    // 7F1B6884: lfs     f3, 7348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6884u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B6888:
    ctx->pc = 0x7F1B6888u;
    // 7F1B6888: fsubs   f0, f30, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B6888u)) return;
    ppc_fsubs(ctx, 0, 30, 28);

label_7F1B688C:
    ctx->pc = 0x7F1B688Cu;
    // 7F1B688C: fsubs   f2, f3, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B688Cu)) return;
    ppc_fsubs(ctx, 2, 3, 28);

label_7F1B6890:
    ctx->pc = 0x7F1B6890u;
    // 7F1B6890: fmr    f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B6890u)) return;
    ctx->fpr[27] = ctx->fpr[3];

label_7F1B6894:
    ctx->pc = 0x7F1B6894u;
    // 7F1B6894: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6894u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1B6898:
    ctx->pc = 0x7F1B6898u;
    // 7F1B6898: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6898u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1B689C:
    ctx->pc = 0x7F1B689Cu;
    // 7F1B689C: fadds   f26, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B689Cu)) return;
    ppc_fadds(ctx, 26, 29, 0);

label_7F1B68A0:
    ctx->downcount -= 4;
    // 7F1B68A0: rlwinm r3, r4, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_7F1B68A4:
    // 7F1B68A4: rlwinm r0, r29, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F1B68A8:
    // 7F1B68A8: cmplw   r3, r0
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

label_7F1B68AC:
    // 7F1B68AC: bc    4, 2, 0x7F1B68CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B68CC;
        }
    }

label_7F1B68B0:
    ctx->pc = 0x7F1B68B0u;
    ctx->downcount -= 5;
    // 7F1B68B0: fmr    f28, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B68B0u)) return;
    ctx->fpr[28] = ctx->fpr[27];

label_7F1B68B4:
    ctx->pc = 0x7F1B68B4u;
    // 7F1B68B4: fmr    f29, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1B68B4u)) return;
    ctx->fpr[29] = ctx->fpr[26];

label_7F1B68B8:
    ctx->pc = 0x7F1B68B8u;
    // 7F1B68B8: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B68B8u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F1B68BC:
    ctx->pc = 0x7F1B68BCu;
    // 7F1B68BC: fmr    f2, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1B68BCu)) return;
    ctx->fpr[2] = ctx->fpr[26];

label_7F1B68C0:
    // 7F1B68C0: bl      0x7F1B66B4
    {
            ctx->lr = 0x7F1B68C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B66B4u;
                return;
            }
            goto label_7F1B66B4;
    }

label_7F1B68C4:
    ctx->downcount -= 2;
    // 7F1B68C4: rlwinm r29, r3, 0, 16, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F1B68C8:
    // 7F1B68C8: b       0x7F1B68E4
    {
            goto label_7F1B68E4;
    }

label_7F1B68CC:
    ctx->pc = 0x7F1B68CCu;
    ctx->downcount -= 5;
    // 7F1B68CC: fmr    f30, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B68CCu)) return;
    ctx->fpr[30] = ctx->fpr[27];

label_7F1B68D0:
    ctx->pc = 0x7F1B68D0u;
    // 7F1B68D0: fmr    f31, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1B68D0u)) return;
    ctx->fpr[31] = ctx->fpr[26];

label_7F1B68D4:
    ctx->pc = 0x7F1B68D4u;
    // 7F1B68D4: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B68D4u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F1B68D8:
    ctx->pc = 0x7F1B68D8u;
    // 7F1B68D8: fmr    f2, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1B68D8u)) return;
    ctx->fpr[2] = ctx->fpr[26];

label_7F1B68DC:
    // 7F1B68DC: bl      0x7F1B66B4
    {
            ctx->lr = 0x7F1B68E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B66B4u;
                return;
            }
            goto label_7F1B66B4;
    }

label_7F1B68E0:
    ctx->downcount -= 1;
    // 7F1B68E0: rlwinm r28, r3, 0, 16, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F1B68E4:
    ctx->downcount -= 2;
    // 7F1B68E4: rlwinm. r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B68E8:
    // 7F1B68E8: bc    12, 2, 0x7F1B6798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6798u;
                return;
            }
            goto label_7F1B6798;
        }
    }

label_7F1B68EC:
    ctx->pc = 0x7F1B68ECu;
    ctx->downcount -= 29;
    // 7F1B68EC: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_7F1B68F0:
    ctx->pc = 0x7F1B68F0u;
    // 7F1B68F0: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B68F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B68F0u);
        if (ctx->exception) return;
    }

label_7F1B68F4:
    ctx->pc = 0x7F1B68F4u;
    // 7F1B68F4: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B68F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B68F8:
    ctx->pc = 0x7F1B68F8u;
    // 7F1B68F8: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B68F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B68F8u);
        if (ctx->exception) return;
    }

label_7F1B68FC:
    ctx->pc = 0x7F1B68FCu;
    // 7F1B68FC: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B68FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6900:
    ctx->pc = 0x7F1B6900u;
    // 7F1B6900: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B6900u);
        if (ctx->exception) return;
    }

label_7F1B6904:
    ctx->pc = 0x7F1B6904u;
    // 7F1B6904: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6908:
    ctx->pc = 0x7F1B6908u;
    // 7F1B6908: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B6908u);
        if (ctx->exception) return;
    }

label_7F1B690C:
    ctx->pc = 0x7F1B690Cu;
    // 7F1B690C: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B690Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6910:
    ctx->pc = 0x7F1B6910u;
    // 7F1B6910: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B6910u);
        if (ctx->exception) return;
    }

label_7F1B6914:
    ctx->pc = 0x7F1B6914u;
    // 7F1B6914: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6918:
    ctx->pc = 0x7F1B6918u;
    // 7F1B6918: psq_l   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F1B6918u);
        if (ctx->exception) return;
    }

label_7F1B691C:
    ctx->pc = 0x7F1B691Cu;
    // 7F1B691C: lfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B691Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6920:
    ctx->pc = 0x7F1B6920u;
    // 7F1B6920: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B6924:
    ctx->pc = 0x7F1B6924u;
    // 7F1B6924: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6928:
    ctx->pc = 0x7F1B6928u;
    // 7F1B6928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B692C:
    ctx->pc = 0x7F1B692Cu;
    // 7F1B692C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1B6930:
    ctx->pc = 0x7F1B6930u;
    // 7F1B6930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6934:
    ctx->pc = 0x7F1B6934u;
    ctx->downcount -= 20;
    // 7F1B6934: stwu     r1, -1504(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-1504);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6938:
    ctx->pc = 0x7F1B6938u;
    // 7F1B6938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B693C:
    ctx->pc = 0x7F1B693Cu;
    // 7F1B693C: stw     r0, 1508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6940:
    ctx->pc = 0x7F1B6940u;
    // 7F1B6940: stfd     f31, 1488(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1488);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B6944:
    ctx->pc = 0x7F1B6944u;
    // 7F1B6944: psq_st   f31, 1496(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1496);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B6944u);
        if (ctx->exception) return;
    }

label_7F1B6948:
    ctx->pc = 0x7F1B6948u;
    // 7F1B6948: stmw     r28, 1472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1472);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B694C:
    ctx->pc = 0x7F1B694Cu;
    // 7F1B694C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B694Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1B6950:
    ctx->pc = 0x7F1B6950u;
    // 7F1B6950: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6954:
    ctx->pc = 0x7F1B6954u;
    // 7F1B6954: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B6958:
    ctx->pc = 0x7F1B6958u;
    // 7F1B6958: bl      0x7F1A049C
    {
            ctx->lr = 0x7F1B695Cu;
            ctx->pc = 0x7F1A049Cu;
            return;
    }

label_7F1B695C:
    ctx->pc = 0x7F1B695Cu;
    ctx->downcount -= 7;
    // 7F1B695C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6960:
    ctx->pc = 0x7F1B6960u;
    // 7F1B6960: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F1B6964:
    ctx->pc = 0x7F1B6964u;
    // 7F1B6964: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F1B6968:
    ctx->pc = 0x7F1B6968u;
    // 7F1B6968: addi    r3, r1, 516
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(516);

label_7F1B696C:
    ctx->pc = 0x7F1B696Cu;
    // 7F1B696C: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1B6970:
    ctx->pc = 0x7F1B6970u;
    // 7F1B6970: li      r5, 948
    ctx->gpr[5] = (u32)(s32)(948);

label_7F1B6974:
    ctx->pc = 0x7F1B6974u;
    // 7F1B6974: bl      0x8000519C
    {
            ctx->lr = 0x7F1B6978u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1B6978:
    ctx->pc = 0x7F1B6978u;
    ctx->downcount -= 4;
    // 7F1B6978: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B697C:
    ctx->pc = 0x7F1B697Cu;
    // 7F1B697C: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1B6980:
    ctx->pc = 0x7F1B6980u;
    // 7F1B6980: li      r5, 204
    ctx->gpr[5] = (u32)(s32)(204);

label_7F1B6984:
    ctx->pc = 0x7F1B6984u;
    // 7F1B6984: bl      0x8000519C
    {
            ctx->lr = 0x7F1B6988u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1B6988:
    ctx->pc = 0x7F1B6988u;
    ctx->downcount -= 8;
    // 7F1B6988: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B698C:
    ctx->pc = 0x7F1B698Cu;
    // 7F1B698C: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1B6990:
    ctx->pc = 0x7F1B6990u;
    // 7F1B6990: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6994:
    ctx->pc = 0x7F1B6994u;
    // 7F1B6994: addi    r4, r1, 164
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(164);

label_7F1B6998:
    ctx->pc = 0x7F1B6998u;
    // 7F1B6998: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B699C:
    ctx->pc = 0x7F1B699Cu;
    // 7F1B699C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B69A0:
    ctx->pc = 0x7F1B69A0u;
    // 7F1B69A0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B69A4:
    ctx->pc = 0x7F1B69A4u;
    // 7F1B69A4: bl      0x7F1A04C0
    {
            ctx->lr = 0x7F1B69A8u;
            ctx->pc = 0x7F1A04C0u;
            return;
    }

label_7F1B69A8:
    ctx->pc = 0x7F1B69A8u;
    ctx->downcount -= 4;
    // 7F1B69A8: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B69A8u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F1B69AC:
    ctx->pc = 0x7F1B69ACu;
    // 7F1B69AC: addi    r3, r1, 516
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(516);

label_7F1B69B0:
    ctx->pc = 0x7F1B69B0u;
    // 7F1B69B0: addi    r4, r1, 164
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(164);

label_7F1B69B4:
    ctx->pc = 0x7F1B69B4u;
    // 7F1B69B4: bl      0x7F3BF15C
    {
            ctx->lr = 0x7F1B69B8u;
            ctx->pc = 0x7F3BF15Cu;
            return;
    }

label_7F1B69B8:
    ctx->pc = 0x7F1B69B8u;
    ctx->downcount -= 3;
    // 7F1B69B8: addi    r3, r1, 708
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(708);

label_7F1B69BC:
    ctx->pc = 0x7F1B69BCu;
    // 7F1B69BC: addi    r4, r1, 100
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(100);

label_7F1B69C0:
    ctx->pc = 0x7F1B69C0u;
    // 7F1B69C0: bl      0x80025B84
    {
            ctx->lr = 0x7F1B69C4u;
            ctx->pc = 0x80025B84u;
            return;
    }

label_7F1B69C4:
    ctx->pc = 0x7F1B69C4u;
    ctx->downcount -= 2;
    // 7F1B69C4: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F1B69C8:
    ctx->pc = 0x7F1B69C8u;
    // 7F1B69C8: bl      0x80025A08
    {
            ctx->lr = 0x7F1B69CCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B69CC:
    ctx->pc = 0x7F1B69CCu;
    ctx->downcount -= 4;
    // 7F1B69CC: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F1B69D0:
    ctx->pc = 0x7F1B69D0u;
    // 7F1B69D0: addi    r4, r1, 1156
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(1156);

label_7F1B69D4:
    ctx->pc = 0x7F1B69D4u;
    // 7F1B69D4: addi    r5, r1, 228
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(228);

label_7F1B69D8:
    ctx->pc = 0x7F1B69D8u;
    // 7F1B69D8: bl      0x80025A80
    {
            ctx->lr = 0x7F1B69DCu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F1B69DC:
    ctx->pc = 0x7F1B69DCu;
    ctx->downcount -= 4;
    // 7F1B69DC: addi    r3, r1, 228
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(228);

label_7F1B69E0:
    ctx->pc = 0x7F1B69E0u;
    // 7F1B69E0: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F1B69E4:
    ctx->pc = 0x7F1B69E4u;
    // 7F1B69E4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B69E8:
    ctx->pc = 0x7F1B69E8u;
    // 7F1B69E8: bl      0x80025A80
    {
            ctx->lr = 0x7F1B69ECu;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F1B69EC:
    ctx->pc = 0x7F1B69ECu;
    ctx->downcount -= 3;
    // 7F1B69EC: addi    r3, r1, 228
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(228);

label_7F1B69F0:
    ctx->pc = 0x7F1B69F0u;
    // 7F1B69F0: addi    r4, r1, 292
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(292);

label_7F1B69F4:
    ctx->pc = 0x7F1B69F4u;
    // 7F1B69F4: bl      0x7F114EE0
    {
            ctx->lr = 0x7F1B69F8u;
            ctx->pc = 0x7F114EE0u;
            return;
    }

label_7F1B69F8:
    ctx->pc = 0x7F1B69F8u;
    ctx->downcount -= 7;
    // 7F1B69F8: lwz     r0, 268(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B69FC:
    ctx->pc = 0x7F1B69FCu;
    // 7F1B69FC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6A00:
    ctx->pc = 0x7F1B6A00u;
    // 7F1B6A00: addi    r3, r3, 13972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13972);

label_7F1B6A04:
    ctx->pc = 0x7F1B6A04u;
    // 7F1B6A04: addi    r4, r1, 436
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(436);

label_7F1B6A08:
    ctx->pc = 0x7F1B6A08u;
    // 7F1B6A08: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B6A0C:
    ctx->pc = 0x7F1B6A0Cu;
    // 7F1B6A0C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6A10:
    ctx->pc = 0x7F1B6A10u;
    // 7F1B6A10: bl      0x7F1AA8F8
    {
            ctx->lr = 0x7F1B6A14u;
            ctx->pc = 0x7F1AA8F8u;
            return;
    }

label_7F1B6A14:
    ctx->pc = 0x7F1B6A14u;
    ctx->downcount -= 4;
    // 7F1B6A14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6A18:
    ctx->pc = 0x7F1B6A18u;
    // 7F1B6A18: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B6A1C:
    ctx->pc = 0x7F1B6A1Cu;
    // 7F1B6A1C: lfs     f31, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6A1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1B6A20:
    ctx->pc = 0x7F1B6A20u;
    // 7F1B6A20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6A24:
    ctx->downcount -= 7;
    // 7F1B6A24: addi    r4, r1, 436
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(436);

label_7F1B6A28:
    // 7F1B6A28: addi    r5, r1, 356
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(356);

label_7F1B6A2C:
    // 7F1B6A2C: add   r4, r4, r30
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1B6A30:
    // 7F1B6A30: addi    r3, r1, 292
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(292);

label_7F1B6A34:
    ctx->pc = 0x7F1B6A34u;
    // 7F1B6A34: stfs     f31, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6A34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1B6A38:
    // 7F1B6A38: add   r5, r5, r30
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1B6A3C:
    // 7F1B6A3C: bl      0x7F114508
    {
            ctx->lr = 0x7F1B6A40u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1B6A40:
    ctx->downcount -= 4;
    // 7F1B6A40: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B6A44:
    // 7F1B6A44: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B6A48:
    // 7F1B6A48: cmpwi   r28, 5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6A4C:
    // 7F1B6A4C: bc    12, 0, 0x7F1B6A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6A24u;
                return;
            }
            goto label_7F1B6A24;
        }
    }

label_7F1B6A50:
    ctx->pc = 0x7F1B6A50u;
    ctx->downcount -= 4;
    // 7F1B6A50: addi    r29, r1, 16
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B6A54:
    ctx->pc = 0x7F1B6A54u;
    // 7F1B6A54: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B6A58:
    ctx->pc = 0x7F1B6A58u;
    // 7F1B6A58: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6A5C:
    ctx->pc = 0x7F1B6A5Cu;
    // 7F1B6A5C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B6A60:
    ctx->downcount -= 3;
    // 7F1B6A60: addi    r3, r1, 356
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(356);

label_7F1B6A64:
    // 7F1B6A64: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B6A68:
    // 7F1B6A68: bl      0x7F1B65C0
    {
            ctx->lr = 0x7F1B6A6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B65C0u;
                return;
            }
            goto label_7F1B65C0;
    }

label_7F1B6A6C:
    ctx->downcount -= 6;
    // 7F1B6A6C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B6A70:
    ctx->pc = 0x7F1B6A70u;
    // 7F1B6A70: stwx    r3, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B6A74:
    // 7F1B6A74: cmpwi   r28, 4
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6A78:
    // 7F1B6A78: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1B6A7C:
    // 7F1B6A7C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B6A80:
    // 7F1B6A80: bc    12, 0, 0x7F1B6A60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6A60u;
                return;
            }
            goto label_7F1B6A60;
        }
    }

label_7F1B6A84:
    ctx->pc = 0x7F1B6A84u;
    ctx->downcount -= 3;
    // 7F1B6A84: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6A88:
    ctx->pc = 0x7F1B6A88u;
    // 7F1B6A88: cmpwi   r0, 2
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

label_7F1B6A8C:
    ctx->pc = 0x7F1B6A8Cu;
    // 7F1B6A8C: bc    4, 2, 0x7F1B6ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6ABC;
        }
    }

label_7F1B6A90:
    ctx->pc = 0x7F1B6A90u;
    ctx->downcount -= 3;
    // 7F1B6A90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6A94:
    ctx->pc = 0x7F1B6A94u;
    // 7F1B6A94: cmpwi   r0, 2
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

label_7F1B6A98:
    ctx->pc = 0x7F1B6A98u;
    // 7F1B6A98: bc    4, 2, 0x7F1B6ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6ABC;
        }
    }

label_7F1B6A9C:
    ctx->pc = 0x7F1B6A9Cu;
    ctx->downcount -= 3;
    // 7F1B6A9C: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6AA0:
    ctx->pc = 0x7F1B6AA0u;
    // 7F1B6AA0: cmpwi   r0, 2
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

label_7F1B6AA4:
    ctx->pc = 0x7F1B6AA4u;
    // 7F1B6AA4: bc    4, 2, 0x7F1B6ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6ABC;
        }
    }

label_7F1B6AA8:
    ctx->pc = 0x7F1B6AA8u;
    ctx->downcount -= 3;
    // 7F1B6AA8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6AAC:
    ctx->pc = 0x7F1B6AACu;
    // 7F1B6AAC: cmpwi   r0, 2
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

label_7F1B6AB0:
    ctx->pc = 0x7F1B6AB0u;
    // 7F1B6AB0: bc    4, 2, 0x7F1B6ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6ABC;
        }
    }

label_7F1B6AB4:
    ctx->pc = 0x7F1B6AB4u;
    ctx->downcount -= 2;
    // 7F1B6AB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B6AB8:
    ctx->pc = 0x7F1B6AB8u;
    // 7F1B6AB8: b       0x7F1B6BA0
    {
            goto label_7F1B6BA0;
    }

label_7F1B6ABC:
    ctx->pc = 0x7F1B6ABCu;
    ctx->downcount -= 4;
    // 7F1B6ABC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6AC0:
    ctx->pc = 0x7F1B6AC0u;
    // 7F1B6AC0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B6AC4:
    ctx->pc = 0x7F1B6AC4u;
    // 7F1B6AC4: lfs     f31, 7344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1B6AC8:
    ctx->pc = 0x7F1B6AC8u;
    // 7F1B6AC8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6ACC:
    ctx->downcount -= 4;
    // 7F1B6ACC: addi    r29, r1, 356
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(356);

label_7F1B6AD0:
    // 7F1B6AD0: add   r29, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F1B6AD4:
    ctx->pc = 0x7F1B6AD4u;
    // 7F1B6AD4: lfs     f1, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AD4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6AD8:
    // 7F1B6AD8: bl      0x7F1B6694
    {
            ctx->lr = 0x7F1B6ADCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6694u;
                return;
            }
            goto label_7F1B6694;
    }

label_7F1B6ADC:
    ctx->pc = 0x7F1B6ADCu;
    ctx->downcount -= 30;
    // 7F1B6ADC: fdivs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6ADCu)) return;
    ppc_fdivs(ctx, 0, 31, 1);

label_7F1B6AE0:
    // 7F1B6AE0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B6AE4:
    // 7F1B6AE4: cmpwi   r28, 5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6AE8:
    // 7F1B6AE8: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B6AEC:
    ctx->pc = 0x7F1B6AECu;
    // 7F1B6AEC: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AECu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6AF0:
    ctx->pc = 0x7F1B6AF0u;
    // 7F1B6AF0: lfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AF0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6AF4:
    ctx->pc = 0x7F1B6AF4u;
    // 7F1B6AF4: lfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AF4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6AF8:
    ctx->pc = 0x7F1B6AF8u;
    // 7F1B6AF8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AF8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B6AFC:
    ctx->pc = 0x7F1B6AFCu;
    // 7F1B6AFC: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6AFCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6B00:
    ctx->pc = 0x7F1B6B00u;
    // 7F1B6B00: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6B04:
    ctx->pc = 0x7F1B6B04u;
    // 7F1B6B04: lfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B04u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6B08:
    ctx->pc = 0x7F1B6B08u;
    // 7F1B6B08: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B08u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B6B0C:
    ctx->pc = 0x7F1B6B0Cu;
    // 7F1B6B0C: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B0Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6B10:
    // 7F1B6B10: bc    12, 0, 0x7F1B6ACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6ACCu;
                return;
            }
            goto label_7F1B6ACC;
        }
    }

label_7F1B6B14:
    ctx->pc = 0x7F1B6B14u;
    ctx->downcount -= 4;
    // 7F1B6B14: addi    r29, r1, 16
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B6B18:
    ctx->pc = 0x7F1B6B18u;
    // 7F1B6B18: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B6B1C:
    ctx->pc = 0x7F1B6B1Cu;
    // 7F1B6B1C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B6B20:
    ctx->pc = 0x7F1B6B20u;
    // 7F1B6B20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1B6B24:
    ctx->pc = 0x7F1B6B24u;
    ctx->downcount -= 3;
    // 7F1B6B24: lwzx    r0, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6B28:
    // 7F1B6B28: cmpwi   r0, 2
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

label_7F1B6B2C:
    // 7F1B6B2C: bc    12, 2, 0x7F1B6B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6B50;
        }
    }

label_7F1B6B30:
    ctx->downcount -= 7;
    // 7F1B6B30: addi    r3, r1, 356
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(356);

label_7F1B6B34:
    // 7F1B6B34: add   r3, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1B6B38:
    ctx->pc = 0x7F1B6B38u;
    // 7F1B6B38: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6B3C:
    ctx->pc = 0x7F1B6B3Cu;
    // 7F1B6B3C: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B6B40:
    ctx->pc = 0x7F1B6B40u;
    // 7F1B6B40: lfs     f3, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B6B44:
    ctx->pc = 0x7F1B6B44u;
    // 7F1B6B44: lfs     f4, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6B44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1B6B48:
    // 7F1B6B48: bl      0x7F1B6728
    {
            ctx->lr = 0x7F1B6B4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6728u;
                return;
            }
            goto label_7F1B6728;
    }

label_7F1B6B4C:
    ctx->pc = 0x7F1B6B4Cu;
    ctx->downcount -= 1;
    // 7F1B6B4C: stwx    r3, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B6B50:
    ctx->downcount -= 5;
    // 7F1B6B50: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B6B54:
    // 7F1B6B54: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1B6B58:
    // 7F1B6B58: cmpwi   r28, 4
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6B5C:
    // 7F1B6B5C: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B6B60:
    // 7F1B6B60: bc    12, 0, 0x7F1B6B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6B24u;
                return;
            }
            goto label_7F1B6B24;
        }
    }

label_7F1B6B64:
    ctx->pc = 0x7F1B6B64u;
    ctx->downcount -= 3;
    // 7F1B6B64: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6B68:
    ctx->pc = 0x7F1B6B68u;
    // 7F1B6B68: cmpwi   r0, 2
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

label_7F1B6B6C:
    ctx->pc = 0x7F1B6B6Cu;
    // 7F1B6B6C: bc    4, 2, 0x7F1B6B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6B9C;
        }
    }

label_7F1B6B70:
    ctx->pc = 0x7F1B6B70u;
    ctx->downcount -= 3;
    // 7F1B6B70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6B74:
    ctx->pc = 0x7F1B6B74u;
    // 7F1B6B74: cmpwi   r0, 2
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

label_7F1B6B78:
    ctx->pc = 0x7F1B6B78u;
    // 7F1B6B78: bc    4, 2, 0x7F1B6B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6B9C;
        }
    }

label_7F1B6B7C:
    ctx->pc = 0x7F1B6B7Cu;
    ctx->downcount -= 3;
    // 7F1B6B7C: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6B80:
    ctx->pc = 0x7F1B6B80u;
    // 7F1B6B80: cmpwi   r0, 2
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

label_7F1B6B84:
    ctx->pc = 0x7F1B6B84u;
    // 7F1B6B84: bc    4, 2, 0x7F1B6B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6B9C;
        }
    }

label_7F1B6B88:
    ctx->pc = 0x7F1B6B88u;
    ctx->downcount -= 3;
    // 7F1B6B88: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6B8C:
    ctx->pc = 0x7F1B6B8Cu;
    // 7F1B6B8C: cmpwi   r0, 2
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

label_7F1B6B90:
    ctx->pc = 0x7F1B6B90u;
    // 7F1B6B90: bc    4, 2, 0x7F1B6B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6B9C;
        }
    }

label_7F1B6B94:
    ctx->pc = 0x7F1B6B94u;
    ctx->downcount -= 2;
    // 7F1B6B94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B6B98:
    ctx->pc = 0x7F1B6B98u;
    // 7F1B6B98: b       0x7F1B6BA0
    {
            goto label_7F1B6BA0;
    }

label_7F1B6B9C:
    ctx->pc = 0x7F1B6B9Cu;
    ctx->downcount -= 1;
    // 7F1B6B9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6BA0:
    ctx->pc = 0x7F1B6BA0u;
    ctx->downcount -= 18;
    // 7F1B6BA0: psq_l   f31, 1496(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6BA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1496);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B6BA0u);
        if (ctx->exception) return;
    }

label_7F1B6BA4:
    ctx->pc = 0x7F1B6BA4u;
    // 7F1B6BA4: lfd     f31, 1488(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6BA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1488);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B6BA8:
    ctx->pc = 0x7F1B6BA8u;
    // 7F1B6BA8: lmw     r28, 1472(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1472);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B6BAC:
    ctx->pc = 0x7F1B6BACu;
    // 7F1B6BAC: lwz     r0, 1508(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6BB0:
    ctx->pc = 0x7F1B6BB0u;
    // 7F1B6BB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B6BB4:
    ctx->pc = 0x7F1B6BB4u;
    // 7F1B6BB4: addi    r1, r1, 1504
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(1504);

label_7F1B6BB8:
    ctx->pc = 0x7F1B6BB8u;
    // 7F1B6BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6BBC:
    ctx->pc = 0x7F1B6BBCu;
    ctx->downcount -= 6;
    // 7F1B6BBC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6BC0:
    ctx->pc = 0x7F1B6BC0u;
    // 7F1B6BC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6BC4:
    ctx->pc = 0x7F1B6BC4u;
    // 7F1B6BC4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6BC8:
    ctx->pc = 0x7F1B6BC8u;
    // 7F1B6BC8: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B6BCC:
    ctx->pc = 0x7F1B6BCCu;
    // 7F1B6BCC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6BD0:
    ctx->pc = 0x7F1B6BD0u;
    // 7F1B6BD0: bl      0x7F1A049C
    {
            ctx->lr = 0x7F1B6BD4u;
            ctx->pc = 0x7F1A049Cu;
            return;
    }

label_7F1B6BD4:
    ctx->pc = 0x7F1B6BD4u;
    ctx->downcount -= 3;
    // 7F1B6BD4: lwz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6BD8:
    ctx->pc = 0x7F1B6BD8u;
    // 7F1B6BD8: cmpwi   r0, -1
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

label_7F1B6BDC:
    ctx->pc = 0x7F1B6BDCu;
    // 7F1B6BDC: bc    12, 2, 0x7F1B6D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6D20;
        }
    }

label_7F1B6BE0:
    ctx->pc = 0x7F1B6BE0u;
    ctx->downcount -= 4;
    // 7F1B6BE0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1B6BE4:
    ctx->pc = 0x7F1B6BE4u;
    // 7F1B6BE4: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6BE8:
    ctx->pc = 0x7F1B6BE8u;
    // 7F1B6BE8: rlwinm. r0, r0, 0, 29, 30
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

label_7F1B6BEC:
    ctx->pc = 0x7F1B6BECu;
    // 7F1B6BEC: bc    4, 2, 0x7F1B6BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6BF8;
        }
    }

label_7F1B6BF0:
    ctx->pc = 0x7F1B6BF0u;
    ctx->downcount -= 2;
    // 7F1B6BF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6BF4:
    ctx->pc = 0x7F1B6BF4u;
    // 7F1B6BF4: bl      0x7F1B612C
    {
            ctx->lr = 0x7F1B6BF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B612Cu;
                return;
            }
            goto label_7F1B612C;
    }

label_7F1B6BF8:
    ctx->pc = 0x7F1B6BF8u;
    ctx->downcount -= 1;
    // 7F1B6BF8: bl      0x7F1B608C
    {
            ctx->lr = 0x7F1B6BFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B608Cu;
                return;
            }
            goto label_7F1B608C;
    }

label_7F1B6BFC:
    ctx->pc = 0x7F1B6BFCu;
    ctx->downcount -= 62;
    // 7F1B6BFC: lwz     r6, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B6C00:
    ctx->pc = 0x7F1B6C00u;
    // 7F1B6C00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6C04:
    ctx->pc = 0x7F1B6C04u;
    // 7F1B6C04: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6C08:
    ctx->pc = 0x7F1B6C08u;
    // 7F1B6C08: addi    r5, r4, 7352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7352);

label_7F1B6C0C:
    ctx->pc = 0x7F1B6C0Cu;
    // 7F1B6C0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6C10:
    ctx->pc = 0x7F1B6C10u;
    // 7F1B6C10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B6C14:
    ctx->pc = 0x7F1B6C14u;
    // 7F1B6C14: stw     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6C18:
    ctx->pc = 0x7F1B6C18u;
    // 7F1B6C18: lfs     f0, 7356(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6C1C:
    ctx->pc = 0x7F1B6C1Cu;
    // 7F1B6C1C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B6C20:
    ctx->pc = 0x7F1B6C20u;
    // 7F1B6C20: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6C24:
    ctx->pc = 0x7F1B6C24u;
    // 7F1B6C24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6C28:
    ctx->pc = 0x7F1B6C28u;
    // 7F1B6C28: lwz     r6, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B6C2C:
    ctx->pc = 0x7F1B6C2Cu;
    // 7F1B6C2C: lwz     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6C30:
    ctx->pc = 0x7F1B6C30u;
    // 7F1B6C30: stw     r6, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6C34:
    ctx->pc = 0x7F1B6C34u;
    // 7F1B6C34: stw     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6C38:
    ctx->pc = 0x7F1B6C38u;
    // 7F1B6C38: lwz     r6, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B6C3C:
    ctx->pc = 0x7F1B6C3Cu;
    // 7F1B6C3C: lwz     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6C40:
    ctx->pc = 0x7F1B6C40u;
    // 7F1B6C40: stw     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6C44:
    ctx->pc = 0x7F1B6C44u;
    // 7F1B6C44: stw     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6C48:
    ctx->pc = 0x7F1B6C48u;
    // 7F1B6C48: lwz     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B6C4C:
    ctx->pc = 0x7F1B6C4Cu;
    // 7F1B6C4C: lwz     r5, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6C50:
    ctx->pc = 0x7F1B6C50u;
    // 7F1B6C50: stw     r6, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6C54:
    ctx->pc = 0x7F1B6C54u;
    // 7F1B6C54: stw     r5, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6C58:
    ctx->pc = 0x7F1B6C58u;
    // 7F1B6C58: lfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6C5C:
    ctx->pc = 0x7F1B6C5Cu;
    // 7F1B6C5C: stfs     f1, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B6C60:
    ctx->pc = 0x7F1B6C60u;
    // 7F1B6C60: lfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6C64:
    ctx->pc = 0x7F1B6C64u;
    // 7F1B6C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6C68:
    ctx->pc = 0x7F1B6C68u;
    // 7F1B6C68: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C68u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1B6C6C:
    ctx->pc = 0x7F1B6C6Cu;
    // 7F1B6C6C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C6Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1B6C70:
    ctx->pc = 0x7F1B6C70u;
    // 7F1B6C70: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B6C74:
    ctx->pc = 0x7F1B6C74u;
    // 7F1B6C74: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B6C78:
    ctx->pc = 0x7F1B6C78u;
    // 7F1B6C78: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6C7C:
    ctx->pc = 0x7F1B6C7Cu;
    // 7F1B6C7C: sth     r5, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1B6C80:
    ctx->pc = 0x7F1B6C80u;
    // 7F1B6C80: lha     r8, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6C84:
    ctx->pc = 0x7F1B6C84u;
    // 7F1B6C84: lha     r7, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6C88:
    ctx->pc = 0x7F1B6C88u;
    // 7F1B6C88: lha     r6, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6C8C:
    ctx->pc = 0x7F1B6C8Cu;
    // 7F1B6C8C: lha     r5, 302(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(302);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6C90:
    ctx->pc = 0x7F1B6C90u;
    // 7F1B6C90: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1B6C94:
    ctx->pc = 0x7F1B6C94u;
    // 7F1B6C94: sth     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1B6C98:
    ctx->pc = 0x7F1B6C98u;
    // 7F1B6C98: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1B6C9C:
    ctx->pc = 0x7F1B6C9Cu;
    // 7F1B6C9C: sth     r5, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1B6CA0:
    ctx->pc = 0x7F1B6CA0u;
    // 7F1B6CA0: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6CA4:
    ctx->pc = 0x7F1B6CA4u;
    // 7F1B6CA4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6CA8:
    ctx->pc = 0x7F1B6CA8u;
    // 7F1B6CA8: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6CAC:
    ctx->pc = 0x7F1B6CACu;
    // 7F1B6CAC: lfs     f1, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6CB0:
    ctx->pc = 0x7F1B6CB0u;
    // 7F1B6CB0: bl      0x7F1B6934
    {
            ctx->lr = 0x7F1B6CB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6934u;
                return;
            }
            goto label_7F1B6934;
    }

label_7F1B6CB4:
    ctx->pc = 0x7F1B6CB4u;
    ctx->downcount -= 2;
    // 7F1B6CB4: cmpwi   r3, 0
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

label_7F1B6CB8:
    ctx->pc = 0x7F1B6CB8u;
    // 7F1B6CB8: bc    12, 2, 0x7F1B6D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6D10;
        }
    }

label_7F1B6CBC:
    ctx->pc = 0x7F1B6CBCu;
    ctx->downcount -= 13;
    // 7F1B6CBC: lha     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6CC0:
    ctx->pc = 0x7F1B6CC0u;
    // 7F1B6CC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6CC4:
    ctx->pc = 0x7F1B6CC4u;
    // 7F1B6CC4: lha     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6CC8:
    ctx->pc = 0x7F1B6CC8u;
    // 7F1B6CC8: lfs     f0, 7304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6CCC:
    ctx->pc = 0x7F1B6CCCu;
    // 7F1B6CCC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B6CD0:
    ctx->pc = 0x7F1B6CD0u;
    // 7F1B6CD0: sth     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6CD4:
    ctx->pc = 0x7F1B6CD4u;
    // 7F1B6CD4: lha     r3, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6CD8:
    ctx->pc = 0x7F1B6CD8u;
    // 7F1B6CD8: lha     r0, 302(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(302);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B6CDC:
    ctx->pc = 0x7F1B6CDCu;
    // 7F1B6CDC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B6CE0:
    ctx->pc = 0x7F1B6CE0u;
    // 7F1B6CE0: sth     r0, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B6CE4:
    ctx->pc = 0x7F1B6CE4u;
    // 7F1B6CE4: lfs     f1, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6CE8:
    ctx->pc = 0x7F1B6CE8u;
    // 7F1B6CE8: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1B6CEC:
    ctx->pc = 0x7F1B6CECu;
    // 7F1B6CEC: bc    12, 2, 0x7F1B6D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6D10;
        }
    }

label_7F1B6CF0:
    ctx->pc = 0x7F1B6CF0u;
    ctx->downcount -= 8;
    // 7F1B6CF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6CF4:
    ctx->pc = 0x7F1B6CF4u;
    // 7F1B6CF4: li      r4, 94
    ctx->gpr[4] = (u32)(s32)(94);

label_7F1B6CF8:
    ctx->pc = 0x7F1B6CF8u;
    // 7F1B6CF8: lfs     f0, 7308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6CFC:
    ctx->pc = 0x7F1B6CFCu;
    // 7F1B6CFC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B6CFCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1B6D00:
    ctx->pc = 0x7F1B6D00u;
    // 7F1B6D00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B6D04:
    ctx->pc = 0x7F1B6D04u;
    // 7F1B6D04: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B6D08:
    ctx->pc = 0x7F1B6D08u;
    // 7F1B6D08: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B6D0C:
    ctx->pc = 0x7F1B6D0Cu;
    // 7F1B6D0C: bl      0x7F0116DC
    {
            ctx->lr = 0x7F1B6D10u;
            ctx->pc = 0x7F0116DCu;
            return;
    }

label_7F1B6D10:
    ctx->pc = 0x7F1B6D10u;
    ctx->downcount -= 4;
    // 7F1B6D10: lfs     f1, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B6D14:
    ctx->pc = 0x7F1B6D14u;
    // 7F1B6D14: lfs     f0, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6D18:
    ctx->pc = 0x7F1B6D18u;
    // 7F1B6D18: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D18u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1B6D1C:
    ctx->pc = 0x7F1B6D1Cu;
    // 7F1B6D1C: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6D1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6D20:
    ctx->pc = 0x7F1B6D20u;
    ctx->downcount -= 6;
    // 7F1B6D20: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6D24:
    ctx->pc = 0x7F1B6D24u;
    // 7F1B6D24: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B6D28:
    ctx->pc = 0x7F1B6D28u;
    // 7F1B6D28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B6D2C:
    ctx->pc = 0x7F1B6D2Cu;
    // 7F1B6D2C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B6D30:
    ctx->pc = 0x7F1B6D30u;
    // 7F1B6D30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6D34:
    ctx->pc = 0x7F1B6D34u;
    ctx->downcount -= 16;
    // 7F1B6D34: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1B6D38:
    ctx->pc = 0x7F1B6D38u;
    // 7F1B6D38: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6D3C:
    ctx->pc = 0x7F1B6D3Cu;
    // 7F1B6D3C: addi    r6, r4, 13968
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13968);

label_7F1B6D40:
    ctx->pc = 0x7F1B6D40u;
    // 7F1B6D40: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B6D44:
    ctx->pc = 0x7F1B6D44u;
    // 7F1B6D44: addi    r7, r5, 13964
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(13964);

label_7F1B6D48:
    ctx->pc = 0x7F1B6D48u;
    // 7F1B6D48: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6D4C:
    ctx->pc = 0x7F1B6D4Cu;
    // 7F1B6D4C: addi    r5, r3, 13960
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13960);

label_7F1B6D50:
    ctx->pc = 0x7F1B6D50u;
    // 7F1B6D50: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6D54:
    ctx->pc = 0x7F1B6D54u;
    // 7F1B6D54: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F1B6D58:
    ctx->pc = 0x7F1B6D58u;
    // 7F1B6D58: or   r3, r8, r8
    {
        ctx->gpr[3] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1B6D5C:
    ctx->pc = 0x7F1B6D5Cu;
    // 7F1B6D5C: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B6D60:
    ctx->pc = 0x7F1B6D60u;
    // 7F1B6D60: addi    r4, r4, 13972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13972);

label_7F1B6D64:
    ctx->pc = 0x7F1B6D64u;
    // 7F1B6D64: stb     r8, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1B6D68:
    ctx->pc = 0x7F1B6D68u;
    // 7F1B6D68: stw     r8, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B6D6C:
    ctx->pc = 0x7F1B6D6Cu;
    // 7F1B6D6C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B6D70:
    loop_7F1B6D70(ctx);
    if (ctx->pc == 0x7F1B6D7Cu) goto label_7F1B6D7C;
    return;
label_7F1B6D74:
    // 7F1B6D74: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1B6D78:
    // 7F1B6D78: bc    16, 0, 0x7F1B6D70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6D70u;
                return;
            }
            goto label_7F1B6D70;
        }
    }

label_7F1B6D7C:
    ctx->pc = 0x7F1B6D7Cu;
    ctx->downcount -= 1;
    // 7F1B6D7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6D80:
    ctx->pc = 0x7F1B6D80u;
    ctx->downcount -= 18;
    // 7F1B6D80: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6D84:
    ctx->pc = 0x7F1B6D84u;
    // 7F1B6D84: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F1B6D88:
    ctx->pc = 0x7F1B6D88u;
    // 7F1B6D88: stb     r7, 13968(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13968);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F1B6D8C:
    ctx->pc = 0x7F1B6D8Cu;
    // 7F1B6D8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B6D90:
    ctx->pc = 0x7F1B6D90u;
    // 7F1B6D90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B6D94:
    ctx->pc = 0x7F1B6D94u;
    // 7F1B6D94: lis     r5, 32591
    ctx->gpr[5] = ((u32)(s32)(32591) << 16);

label_7F1B6D98:
    ctx->pc = 0x7F1B6D98u;
    // 7F1B6D98: stw     r6, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6D9C:
    ctx->pc = 0x7F1B6D9Cu;
    // 7F1B6D9C: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F1B6DA0:
    ctx->pc = 0x7F1B6DA0u;
    // 7F1B6DA0: lfs     f0, 7304(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6DA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B6DA4:
    ctx->pc = 0x7F1B6DA4u;
    // 7F1B6DA4: stw     r6, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6DA8:
    ctx->pc = 0x7F1B6DA8u;
    // 7F1B6DA8: lwz     r4, -26404(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26404);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B6DAC:
    ctx->pc = 0x7F1B6DACu;
    // 7F1B6DAC: stw     r4, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B6DB0:
    ctx->pc = 0x7F1B6DB0u;
    // 7F1B6DB0: stfs     f0, 276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B6DB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B6DB4:
    ctx->pc = 0x7F1B6DB4u;
    // 7F1B6DB4: stw     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6DB8:
    ctx->pc = 0x7F1B6DB8u;
    // 7F1B6DB8: stb     r7, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F1B6DBC:
    ctx->pc = 0x7F1B6DBCu;
    // 7F1B6DBC: stb     r6, 313(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(313);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F1B6DC0:
    ctx->pc = 0x7F1B6DC0u;
    // 7F1B6DC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6DC4:
    ctx->pc = 0x7F1B6DC4u;
    // 7F1B6DC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6DC8:
    ctx->pc = 0x7F1B6DC8u;
    ctx->downcount -= 5;
    // 7F1B6DC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6DCC:
    ctx->pc = 0x7F1B6DCCu;
    // 7F1B6DCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6DD0:
    ctx->pc = 0x7F1B6DD0u;
    // 7F1B6DD0: cmpwi   r4, 1
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

label_7F1B6DD4:
    ctx->pc = 0x7F1B6DD4u;
    // 7F1B6DD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6DD8:
    ctx->pc = 0x7F1B6DD8u;
    // 7F1B6DD8: bc    12, 2, 0x7F1B6DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6DF8;
        }
    }

label_7F1B6DDC:
    ctx->pc = 0x7F1B6DDCu;
    ctx->downcount -= 1;
    // 7F1B6DDC: bc    4, 0, 0x7F1B6DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6DEC;
        }
    }

label_7F1B6DE0:
    ctx->pc = 0x7F1B6DE0u;
    ctx->downcount -= 2;
    // 7F1B6DE0: cmpwi   r4, 0
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

label_7F1B6DE4:
    ctx->pc = 0x7F1B6DE4u;
    // 7F1B6DE4: bc    4, 0, 0x7F1B6E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6E18;
        }
    }

label_7F1B6DE8:
    ctx->pc = 0x7F1B6DE8u;
    ctx->downcount -= 1;
    // 7F1B6DE8: b       0x7F1B6E10
    {
            goto label_7F1B6E10;
    }

label_7F1B6DEC:
    ctx->pc = 0x7F1B6DECu;
    ctx->downcount -= 2;
    // 7F1B6DEC: cmpwi   r4, 3
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

label_7F1B6DF0:
    ctx->pc = 0x7F1B6DF0u;
    // 7F1B6DF0: bc    4, 0, 0x7F1B6E10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6E10;
        }
    }

label_7F1B6DF4:
    ctx->pc = 0x7F1B6DF4u;
    ctx->downcount -= 1;
    // 7F1B6DF4: b       0x7F1B6E04
    {
            goto label_7F1B6E04;
    }

label_7F1B6DF8:
    ctx->pc = 0x7F1B6DF8u;
    ctx->downcount -= 3;
    // 7F1B6DF8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B6DFC:
    ctx->pc = 0x7F1B6DFCu;
    // 7F1B6DFC: stb     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B6E00:
    ctx->pc = 0x7F1B6E00u;
    // 7F1B6E00: b       0x7F1B6E18
    {
            goto label_7F1B6E18;
    }

label_7F1B6E04:
    ctx->pc = 0x7F1B6E04u;
    ctx->downcount -= 3;
    // 7F1B6E04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B6E08:
    ctx->pc = 0x7F1B6E08u;
    // 7F1B6E08: stb     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B6E0C:
    ctx->pc = 0x7F1B6E0Cu;
    // 7F1B6E0C: b       0x7F1B6E18
    {
            goto label_7F1B6E18;
    }

label_7F1B6E10:
    ctx->pc = 0x7F1B6E10u;
    ctx->downcount -= 1;
    // 7F1B6E10: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B6E14u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B6E14:
    ctx->pc = 0x7F1B6E14u;
    ctx->downcount -= 1;
    // 7F1B6E14: b       0x7F1B6E1C
    {
            goto label_7F1B6E1C;
    }

label_7F1B6E18:
    ctx->pc = 0x7F1B6E18u;
    ctx->downcount -= 1;
    // 7F1B6E18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6E1C:
    ctx->pc = 0x7F1B6E1Cu;
    ctx->downcount -= 5;
    // 7F1B6E1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6E20:
    ctx->pc = 0x7F1B6E20u;
    // 7F1B6E20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B6E24:
    ctx->pc = 0x7F1B6E24u;
    // 7F1B6E24: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B6E28:
    ctx->pc = 0x7F1B6E28u;
    // 7F1B6E28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6E2C:
    ctx->pc = 0x7F1B6E2Cu;
    ctx->downcount -= 19;
    // 7F1B6E2C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6E30:
    ctx->pc = 0x7F1B6E30u;
    // 7F1B6E30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6E34:
    ctx->pc = 0x7F1B6E34u;
    // 7F1B6E34: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B6E38:
    ctx->pc = 0x7F1B6E38u;
    // 7F1B6E38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6E3C:
    ctx->pc = 0x7F1B6E3Cu;
    // 7F1B6E3C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B6E40:
    ctx->pc = 0x7F1B6E40u;
    // 7F1B6E40: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6E44:
    ctx->pc = 0x7F1B6E44u;
    // 7F1B6E44: lwz     r0, 13964(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13964);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6E48:
    ctx->pc = 0x7F1B6E48u;
    // 7F1B6E48: cmplwi  r0, 0x0000
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

label_7F1B6E4C:
    ctx->pc = 0x7F1B6E4Cu;
    // 7F1B6E4C: bc    12, 2, 0x7F1B6E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6E58;
        }
    }

label_7F1B6E50:
    ctx->pc = 0x7F1B6E50u;
    ctx->downcount -= 2;
    // 7F1B6E50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6E54:
    ctx->pc = 0x7F1B6E54u;
    // 7F1B6E54: b       0x7F1B6EF0
    {
            goto label_7F1B6EF0;
    }

label_7F1B6E58:
    ctx->pc = 0x7F1B6E58u;
    ctx->downcount -= 5;
    // 7F1B6E58: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1B6E5C:
    ctx->pc = 0x7F1B6E5Cu;
    // 7F1B6E5C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B6E60:
    ctx->pc = 0x7F1B6E60u;
    // 7F1B6E60: li      r5, 320
    ctx->gpr[5] = (u32)(s32)(320);

label_7F1B6E64:
    ctx->pc = 0x7F1B6E64u;
    // 7F1B6E64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B6E68:
    ctx->pc = 0x7F1B6E68u;
    // 7F1B6E68: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B6E6Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B6E6C:
    ctx->pc = 0x7F1B6E6Cu;
    ctx->downcount -= 2;
    // 7F1B6E6C: or.   r31, r3, r3
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

label_7F1B6E70:
    ctx->pc = 0x7F1B6E70u;
    // 7F1B6E70: bc    12, 2, 0x7F1B6EEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6EEC;
        }
    }

label_7F1B6E74:
    ctx->pc = 0x7F1B6E74u;
    ctx->downcount -= 5;
    // 7F1B6E74: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B6E78:
    ctx->pc = 0x7F1B6E78u;
    // 7F1B6E78: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B6E7C:
    ctx->pc = 0x7F1B6E7Cu;
    // 7F1B6E7C: addi    r4, r4, 27580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27580);

label_7F1B6E80:
    ctx->pc = 0x7F1B6E80u;
    // 7F1B6E80: addi    r5, r5, 27956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27956);

label_7F1B6E84:
    ctx->pc = 0x7F1B6E84u;
    // 7F1B6E84: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B6E88u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B6E88:
    ctx->pc = 0x7F1B6E88u;
    ctx->downcount -= 13;
    // 7F1B6E88: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6E8C:
    ctx->pc = 0x7F1B6E8Cu;
    // 7F1B6E8C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B6E90:
    ctx->pc = 0x7F1B6E90u;
    // 7F1B6E90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B6E94:
    ctx->pc = 0x7F1B6E94u;
    // 7F1B6E94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6E98:
    ctx->pc = 0x7F1B6E98u;
    // 7F1B6E98: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1B6E9C:
    ctx->pc = 0x7F1B6E9Cu;
    // 7F1B6E9C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B6EA0:
    ctx->pc = 0x7F1B6EA0u;
    // 7F1B6EA0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B6EA4:
    ctx->pc = 0x7F1B6EA4u;
    // 7F1B6EA4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6EA8:
    ctx->pc = 0x7F1B6EA8u;
    // 7F1B6EA8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6EAC:
    ctx->pc = 0x7F1B6EACu;
    // 7F1B6EAC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6EB0:
    ctx->pc = 0x7F1B6EB0u;
    // 7F1B6EB0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6EB4:
    ctx->pc = 0x7F1B6EB4u;
    // 7F1B6EB4: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1B6EB8:
    ctx->pc = 0x7F1B6EB8u;
    // 7F1B6EB8: bl      0x7F1B6D80
    {
            ctx->lr = 0x7F1B6EBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6D80u;
                return;
            }
            goto label_7F1B6D80;
    }

label_7F1B6EBC:
    ctx->pc = 0x7F1B6EBCu;
    ctx->downcount -= 2;
    // 7F1B6EBC: cmpwi   r3, 0
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

label_7F1B6EC0:
    ctx->pc = 0x7F1B6EC0u;
    // 7F1B6EC0: bc    4, 0, 0x7F1B6ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B6ED4;
        }
    }

label_7F1B6EC4:
    ctx->pc = 0x7F1B6EC4u;
    ctx->downcount -= 2;
    // 7F1B6EC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6EC8:
    ctx->pc = 0x7F1B6EC8u;
    // 7F1B6EC8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B6ECCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B6ECC:
    ctx->pc = 0x7F1B6ECCu;
    ctx->downcount -= 2;
    // 7F1B6ECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6ED0:
    ctx->pc = 0x7F1B6ED0u;
    // 7F1B6ED0: b       0x7F1B6EF0
    {
            goto label_7F1B6EF0;
    }

label_7F1B6ED4:
    ctx->pc = 0x7F1B6ED4u;
    ctx->downcount -= 4;
    // 7F1B6ED4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B6ED8:
    ctx->pc = 0x7F1B6ED8u;
    // 7F1B6ED8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6EDC:
    ctx->pc = 0x7F1B6EDCu;
    // 7F1B6EDC: addi    r4, r4, 28104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28104);

label_7F1B6EE0:
    ctx->pc = 0x7F1B6EE0u;
    // 7F1B6EE0: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B6EE4u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B6EE4:
    ctx->pc = 0x7F1B6EE4u;
    ctx->downcount -= 2;
    // 7F1B6EE4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B6EE8:
    ctx->pc = 0x7F1B6EE8u;
    // 7F1B6EE8: stw     r31, 13964(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13964);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B6EEC:
    ctx->pc = 0x7F1B6EECu;
    ctx->downcount -= 1;
    // 7F1B6EEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B6EF0:
    ctx->pc = 0x7F1B6EF0u;
    ctx->downcount -= 16;
    // 7F1B6EF0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B6EF4:
    ctx->pc = 0x7F1B6EF4u;
    // 7F1B6EF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6EF8:
    ctx->pc = 0x7F1B6EF8u;
    // 7F1B6EF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B6EFC:
    ctx->pc = 0x7F1B6EFCu;
    // 7F1B6EFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B6F00:
    ctx->pc = 0x7F1B6F00u;
    // 7F1B6F00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6F04:
    ctx->pc = 0x7F1B6F04u;
    ctx->downcount -= 19;
    // 7F1B6F04: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B6F08:
    ctx->pc = 0x7F1B6F08u;
    // 7F1B6F08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B6F0C:
    ctx->pc = 0x7F1B6F0Cu;
    // 7F1B6F0C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B6F10:
    ctx->pc = 0x7F1B6F10u;
    // 7F1B6F10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B6F14:
    ctx->pc = 0x7F1B6F14u;
    // 7F1B6F14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6F18:
    ctx->pc = 0x7F1B6F18u;
    // 7F1B6F18: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B6F1C:
    ctx->pc = 0x7F1B6F1Cu;
    // 7F1B6F1C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B6F20:
    ctx->pc = 0x7F1B6F20u;
    // 7F1B6F20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B6F24:
    ctx->pc = 0x7F1B6F24u;
    // 7F1B6F24: bl      0x800462E4
    {
            ctx->lr = 0x7F1B6F28u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B6F28:
    ctx->pc = 0x7F1B6F28u;
    ctx->downcount -= 1;
    // 7F1B6F28: bl      0x7F2EA944
    {
            ctx->lr = 0x7F1B6F2Cu;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F1B6F2C:
    ctx->pc = 0x7F1B6F2Cu;
    ctx->downcount -= 10;
    // 7F1B6F2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B6F30:
    ctx->pc = 0x7F1B6F30u;
    // 7F1B6F30: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6F34:
    ctx->pc = 0x7F1B6F34u;
    // 7F1B6F34: lwz     r5, 7360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7360);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B6F38:
    ctx->pc = 0x7F1B6F38u;
    // 7F1B6F38: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1B6F3C:
    ctx->pc = 0x7F1B6F3Cu;
    // 7F1B6F3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B6F40:
    ctx->pc = 0x7F1B6F40u;
    // 7F1B6F40: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B6F44:
    ctx->pc = 0x7F1B6F44u;
    // 7F1B6F44: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B6F48:
    ctx->pc = 0x7F1B6F48u;
    // 7F1B6F48: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6F4C:
    ctx->pc = 0x7F1B6F4Cu;
    // 7F1B6F4C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B6F50:
    ctx->pc = 0x7F1B6F50u;
    // 7F1B6F50: bl      0x80045970
    {
            ctx->lr = 0x7F1B6F54u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1B6F54:
    ctx->pc = 0x7F1B6F54u;
    ctx->downcount -= 5;
    // 7F1B6F54: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B6F58:
    ctx->pc = 0x7F1B6F58u;
    // 7F1B6F58: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_7F1B6F5C:
    ctx->pc = 0x7F1B6F5Cu;
    // 7F1B6F5C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1B6F60:
    ctx->pc = 0x7F1B6F60u;
    // 7F1B6F60: li      r5, 224
    ctx->gpr[5] = (u32)(s32)(224);

label_7F1B6F64:
    ctx->pc = 0x7F1B6F64u;
    // 7F1B6F64: bl      0x80042E0C
    {
            ctx->lr = 0x7F1B6F68u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F1B6F68:
    ctx->pc = 0x7F1B6F68u;
    ctx->downcount -= 2;
    // 7F1B6F68: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1B6F6C:
    ctx->pc = 0x7F1B6F6Cu;
    // 7F1B6F6C: li      r31, 448
    ctx->gpr[31] = (u32)(s32)(448);

label_7F1B6F70:
    ctx->downcount -= 47;
    // 7F1B6F70: extsh r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_7F1B6F74:
    // 7F1B6F74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6F78:
    // 7F1B6F78: mulli   r0, r0, 7168
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7168);

label_7F1B6F7C:
    // 7F1B6F7C: divw   r30, r0, r31
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[31];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[30] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B6F80:
    // 7F1B6F80: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F1B6F84:
    // 7F1B6F84: bl      0x7F1B6FF8
    {
            ctx->lr = 0x7F1B6F88u;
            goto label_7F1B6FF8;
    }

label_7F1B6F88:
    ctx->downcount -= 3;
    // 7F1B6F88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6F8C:
    // 7F1B6F8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B6F90:
    // 7F1B6F90: bl      0x7F1B6FE8
    {
            ctx->lr = 0x7F1B6F94u;
            goto label_7F1B6FE8;
    }

label_7F1B6F94:
    ctx->downcount -= 3;
    // 7F1B6F94: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F1B6F98:
    // 7F1B6F98: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1B6F9C:
    // 7F1B6F9C: bl      0x7F1B6FF8
    {
            ctx->lr = 0x7F1B6FA0u;
            goto label_7F1B6FF8;
    }

label_7F1B6FA0:
    ctx->downcount -= 3;
    // 7F1B6FA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B6FA4:
    // 7F1B6FA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B6FA8:
    // 7F1B6FA8: bl      0x7F1B6FE8
    {
            ctx->lr = 0x7F1B6FACu;
            goto label_7F1B6FE8;
    }

label_7F1B6FAC:
    ctx->downcount -= 4;
    // 7F1B6FAC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F1B6FB0:
    // 7F1B6FB0: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F1B6FB4:
    // 7F1B6FB4: cmpwi   r29, 112
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(112);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B6FB8:
    // 7F1B6FB8: bc    12, 0, 0x7F1B6F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6F70u;
                return;
            }
            goto label_7F1B6F70;
        }
    }

label_7F1B6FBC:
    ctx->pc = 0x7F1B6FBCu;
    ctx->downcount -= 1;
    // 7F1B6FBC: bl      0x7F1B6FE4
    {
            ctx->lr = 0x7F1B6FC0u;
            goto label_7F1B6FE4;
    }

label_7F1B6FC0:
    ctx->pc = 0x7F1B6FC0u;
    ctx->downcount -= 4;
    // 7F1B6FC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B6FC4:
    ctx->pc = 0x7F1B6FC4u;
    // 7F1B6FC4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B6FC8:
    ctx->pc = 0x7F1B6FC8u;
    // 7F1B6FC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B6FCC:
    ctx->pc = 0x7F1B6FCCu;
    // 7F1B6FCC: bl      0x800462E4
    {
            ctx->lr = 0x7F1B6FD0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B6FD0:
    ctx->pc = 0x7F1B6FD0u;
    ctx->downcount -= 16;
    // 7F1B6FD0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B6FD4:
    ctx->pc = 0x7F1B6FD4u;
    // 7F1B6FD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B6FD8:
    ctx->pc = 0x7F1B6FD8u;
    // 7F1B6FD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B6FDC:
    ctx->pc = 0x7F1B6FDCu;
    // 7F1B6FDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B6FE0:
    ctx->pc = 0x7F1B6FE0u;
    // 7F1B6FE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6FE4:
    ctx->pc = 0x7F1B6FE4u;
    ctx->downcount -= 1;
    // 7F1B6FE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6FE8:
    ctx->pc = 0x7F1B6FE8u;
    ctx->downcount -= 4;
    // 7F1B6FE8: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1B6FEC:
    ctx->pc = 0x7F1B6FECu;
    // 7F1B6FEC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1B6FF0:
    ctx->pc = 0x7F1B6FF0u;
    // 7F1B6FF0: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1B6FF4:
    ctx->pc = 0x7F1B6FF4u;
    // 7F1B6FF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B6FF8:
    ctx->pc = 0x7F1B6FF8u;
    ctx->downcount -= 4;
    // 7F1B6FF8: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F1B6FFC:
    ctx->pc = 0x7F1B6FFCu;
    // 7F1B6FFC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1B7000:
    ctx->pc = 0x7F1B7000u;
    // 7F1B7000: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1B7004:
    ctx->pc = 0x7F1B7004u;
    // 7F1B7004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7008:
    ctx->pc = 0x7F1B7008u;
    ctx->downcount -= 5;
    // 7F1B7008: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B700C:
    ctx->pc = 0x7F1B700Cu;
    // 7F1B700C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7010:
    ctx->pc = 0x7F1B7010u;
    // 7F1B7010: cmpwi   r4, 1
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

label_7F1B7014:
    ctx->pc = 0x7F1B7014u;
    // 7F1B7014: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7018:
    ctx->pc = 0x7F1B7018u;
    // 7F1B7018: bc    12, 2, 0x7F1B704C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B704C;
        }
    }

label_7F1B701C:
    ctx->pc = 0x7F1B701Cu;
    ctx->downcount -= 1;
    // 7F1B701C: bc    4, 0, 0x7F1B702C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B702C;
        }
    }

label_7F1B7020:
    ctx->pc = 0x7F1B7020u;
    ctx->downcount -= 2;
    // 7F1B7020: cmpwi   r4, 0
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

label_7F1B7024:
    ctx->pc = 0x7F1B7024u;
    // 7F1B7024: bc    4, 0, 0x7F1B7038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7038;
        }
    }

label_7F1B7028:
    ctx->pc = 0x7F1B7028u;
    ctx->downcount -= 1;
    // 7F1B7028: b       0x7F1B706C
    {
            goto label_7F1B706C;
    }

label_7F1B702C:
    ctx->pc = 0x7F1B702Cu;
    ctx->downcount -= 2;
    // 7F1B702C: cmpwi   r4, 3
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

label_7F1B7030:
    ctx->pc = 0x7F1B7030u;
    // 7F1B7030: bc    4, 0, 0x7F1B706C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B706C;
        }
    }

label_7F1B7034:
    ctx->pc = 0x7F1B7034u;
    ctx->downcount -= 1;
    // 7F1B7034: b       0x7F1B7060
    {
            goto label_7F1B7060;
    }

label_7F1B7038:
    ctx->pc = 0x7F1B7038u;
    ctx->downcount -= 5;
    // 7F1B7038: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B703C:
    ctx->pc = 0x7F1B703Cu;
    // 7F1B703C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7040:
    ctx->pc = 0x7F1B7040u;
    // 7F1B7040: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F1B7044:
    ctx->pc = 0x7F1B7044u;
    // 7F1B7044: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7048:
    ctx->pc = 0x7F1B7048u;
    // 7F1B7048: b       0x7F1B7074
    {
            goto label_7F1B7074;
    }

label_7F1B704C:
    ctx->pc = 0x7F1B704Cu;
    ctx->downcount -= 5;
    // 7F1B704C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7050:
    ctx->pc = 0x7F1B7050u;
    // 7F1B7050: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7054:
    ctx->pc = 0x7F1B7054u;
    // 7F1B7054: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1B7058:
    ctx->pc = 0x7F1B7058u;
    // 7F1B7058: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B705C:
    ctx->pc = 0x7F1B705Cu;
    // 7F1B705C: b       0x7F1B7074
    {
            goto label_7F1B7074;
    }

label_7F1B7060:
    ctx->pc = 0x7F1B7060u;
    ctx->downcount -= 3;
    // 7F1B7060: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7064:
    ctx->pc = 0x7F1B7064u;
    // 7F1B7064: stw     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7068:
    ctx->pc = 0x7F1B7068u;
    // 7F1B7068: b       0x7F1B7074
    {
            goto label_7F1B7074;
    }

label_7F1B706C:
    ctx->pc = 0x7F1B706Cu;
    ctx->downcount -= 1;
    // 7F1B706C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B7070u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B7070:
    ctx->pc = 0x7F1B7070u;
    ctx->downcount -= 1;
    // 7F1B7070: b       0x7F1B7078
    {
            goto label_7F1B7078;
    }

label_7F1B7074:
    ctx->pc = 0x7F1B7074u;
    ctx->downcount -= 1;
    // 7F1B7074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7078:
    ctx->pc = 0x7F1B7078u;
    ctx->downcount -= 5;
    // 7F1B7078: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B707C:
    ctx->pc = 0x7F1B707Cu;
    // 7F1B707C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7080:
    ctx->pc = 0x7F1B7080u;
    // 7F1B7080: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7084:
    ctx->pc = 0x7F1B7084u;
    // 7F1B7084: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7088:
    ctx->pc = 0x7F1B7088u;
    ctx->downcount -= 9;
    // 7F1B7088: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B708C:
    ctx->pc = 0x7F1B708Cu;
    // 7F1B708C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7090:
    ctx->pc = 0x7F1B7090u;
    // 7F1B7090: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1B7094:
    ctx->pc = 0x7F1B7094u;
    // 7F1B7094: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7098:
    ctx->pc = 0x7F1B7098u;
    // 7F1B7098: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B709C:
    ctx->pc = 0x7F1B709Cu;
    // 7F1B709C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B70A0:
    ctx->pc = 0x7F1B70A0u;
    // 7F1B70A0: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B70A4:
    ctx->pc = 0x7F1B70A4u;
    // 7F1B70A4: cmpwi   r0, 0
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

label_7F1B70A8:
    ctx->pc = 0x7F1B70A8u;
    // 7F1B70A8: bc    4, 2, 0x7F1B71B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B71B4;
        }
    }

label_7F1B70AC:
    ctx->pc = 0x7F1B70ACu;
    ctx->downcount -= 3;
    // 7F1B70AC: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B70B0:
    ctx->pc = 0x7F1B70B0u;
    // 7F1B70B0: cmpwi   r0, 0
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

label_7F1B70B4:
    ctx->pc = 0x7F1B70B4u;
    // 7F1B70B4: bc    12, 2, 0x7F1B71B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B71B4;
        }
    }

label_7F1B70B8:
    ctx->pc = 0x7F1B70B8u;
    ctx->downcount -= 7;
    // 7F1B70B8: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B70BC:
    ctx->pc = 0x7F1B70BCu;
    // 7F1B70BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B70C0:
    ctx->pc = 0x7F1B70C0u;
    // 7F1B70C0: lfs     f2, 13992(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B70C4:
    ctx->pc = 0x7F1B70C4u;
    // 7F1B70C4: lfs     f1, 7364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B70C8:
    ctx->pc = 0x7F1B70C8u;
    // 7F1B70C8: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B70C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F1B70CC:
    ctx->pc = 0x7F1B70CCu;
    // 7F1B70CC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B70D0:
    ctx->pc = 0x7F1B70D0u;
    // 7F1B70D0: bc    4, 2, 0x7F1B712C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B712C;
        }
    }

label_7F1B70D4:
    ctx->pc = 0x7F1B70D4u;
    ctx->downcount -= 4;
    // 7F1B70D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B70D8:
    ctx->pc = 0x7F1B70D8u;
    // 7F1B70D8: lfs     f0, 7368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B70DC:
    ctx->pc = 0x7F1B70DCu;
    // 7F1B70DC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B70DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1B70E0:
    ctx->pc = 0x7F1B70E0u;
    // 7F1B70E0: bc    4, 0, 0x7F1B712C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B712C;
        }
    }

label_7F1B70E4:
    ctx->pc = 0x7F1B70E4u;
    ctx->downcount -= 10;
    // 7F1B70E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B70E8:
    ctx->pc = 0x7F1B70E8u;
    // 7F1B70E8: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B70EC:
    ctx->pc = 0x7F1B70ECu;
    // 7F1B70EC: lfs     f0, 7372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B70F0:
    ctx->pc = 0x7F1B70F0u;
    // 7F1B70F0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B70F4:
    ctx->pc = 0x7F1B70F4u;
    // 7F1B70F4: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1B70F8:
    ctx->pc = 0x7F1B70F8u;
    // 7F1B70F8: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B70FC:
    ctx->pc = 0x7F1B70FCu;
    // 7F1B70FC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B70FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B7100:
    ctx->pc = 0x7F1B7100u;
    // 7F1B7100: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1B7104:
    ctx->pc = 0x7F1B7104u;
    // 7F1B7104: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7108:
    ctx->pc = 0x7F1B7108u;
    // 7F1B7108: bl      0x7F2E1B1C
    {
            ctx->lr = 0x7F1B710Cu;
            ctx->pc = 0x7F2E1B1Cu;
            return;
    }

label_7F1B710C:
    ctx->pc = 0x7F1B710Cu;
    ctx->downcount -= 8;
    // 7F1B710C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7110:
    ctx->pc = 0x7F1B7110u;
    // 7F1B7110: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B7114:
    ctx->pc = 0x7F1B7114u;
    // 7F1B7114: lfsu     f1, 13992(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7114u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[4] = ea;
    }

label_7F1B7118:
    ctx->pc = 0x7F1B7118u;
    // 7F1B7118: lfd     f0, 7376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7118u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7376);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B711C:
    ctx->pc = 0x7F1B711Cu;
    // 7F1B711C: fadd   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B711Cu)) return;
    ppc_fadd(ctx, 0, 1, 0);

label_7F1B7120:
    ctx->pc = 0x7F1B7120u;
    // 7F1B7120: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7120u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F1B7124:
    ctx->pc = 0x7F1B7124u;
    // 7F1B7124: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7124u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B7128:
    ctx->pc = 0x7F1B7128u;
    // 7F1B7128: b       0x7F1B713C
    {
            goto label_7F1B713C;
    }

label_7F1B712C:
    ctx->pc = 0x7F1B712Cu;
    ctx->downcount -= 4;
    // 7F1B712C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B7130:
    ctx->pc = 0x7F1B7130u;
    // 7F1B7130: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B7134:
    ctx->pc = 0x7F1B7134u;
    // 7F1B7134: lfs     f0, 7364(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7134u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B7138:
    ctx->pc = 0x7F1B7138u;
    // 7F1B7138: stfs     f0, 13992(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7138u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13992);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B713C:
    ctx->pc = 0x7F1B713Cu;
    ctx->downcount -= 7;
    // 7F1B713C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B7140:
    ctx->pc = 0x7F1B7140u;
    // 7F1B7140: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7144:
    ctx->pc = 0x7F1B7144u;
    // 7F1B7144: lfs     f1, -6560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7144u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B7148:
    ctx->pc = 0x7F1B7148u;
    // 7F1B7148: lfs     f0, 7384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7148u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B714C:
    ctx->pc = 0x7F1B714Cu;
    // 7F1B714C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B714Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B7150:
    ctx->pc = 0x7F1B7150u;
    // 7F1B7150: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B7154:
    ctx->pc = 0x7F1B7154u;
    // 7F1B7154: bc    4, 2, 0x7F1B71A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B71A4;
        }
    }

label_7F1B7158:
    ctx->pc = 0x7F1B7158u;
    ctx->downcount -= 4;
    // 7F1B7158: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B715C:
    ctx->pc = 0x7F1B715Cu;
    // 7F1B715C: lfs     f0, 7368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B715Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B7160:
    ctx->pc = 0x7F1B7160u;
    // 7F1B7160: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7160u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B7164:
    ctx->pc = 0x7F1B7164u;
    // 7F1B7164: bc    4, 0, 0x7F1B71A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B71A4;
        }
    }

label_7F1B7168:
    ctx->pc = 0x7F1B7168u;
    ctx->downcount -= 7;
    // 7F1B7168: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B716C:
    ctx->pc = 0x7F1B716Cu;
    // 7F1B716C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B716Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B7170:
    ctx->pc = 0x7F1B7170u;
    // 7F1B7170: lfs     f0, 7364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7170u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B7174:
    ctx->pc = 0x7F1B7174u;
    // 7F1B7174: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B7178:
    ctx->pc = 0x7F1B7178u;
    // 7F1B7178: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B717C:
    ctx->pc = 0x7F1B717Cu;
    // 7F1B717C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7180:
    ctx->pc = 0x7F1B7180u;
    // 7F1B7180: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F1B7184u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F1B7184:
    ctx->pc = 0x7F1B7184u;
    ctx->downcount -= 8;
    // 7F1B7184: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7188:
    ctx->pc = 0x7F1B7188u;
    // 7F1B7188: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B718C:
    ctx->pc = 0x7F1B718Cu;
    // 7F1B718C: lfsu     f1, -6560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B718Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[4] = ea;
    }

label_7F1B7190:
    ctx->pc = 0x7F1B7190u;
    // 7F1B7190: lfd     f0, 7392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7190u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7392);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7194:
    ctx->pc = 0x7F1B7194u;
    // 7F1B7194: fadd   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7194u)) return;
    ppc_fadd(ctx, 0, 1, 0);

label_7F1B7198:
    ctx->pc = 0x7F1B7198u;
    // 7F1B7198: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7198u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F1B719C:
    ctx->pc = 0x7F1B719Cu;
    // 7F1B719C: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B719Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B71A0:
    ctx->pc = 0x7F1B71A0u;
    // 7F1B71A0: b       0x7F1B71B4
    {
            goto label_7F1B71B4;
    }

label_7F1B71A4:
    ctx->pc = 0x7F1B71A4u;
    ctx->downcount -= 4;
    // 7F1B71A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B71A8:
    ctx->pc = 0x7F1B71A8u;
    // 7F1B71A8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B71AC:
    ctx->pc = 0x7F1B71ACu;
    // 7F1B71AC: lfs     f0, 7384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B71ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B71B0:
    ctx->pc = 0x7F1B71B0u;
    // 7F1B71B0: stfs     f0, -6560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B71B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6560);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B71B4:
    ctx->pc = 0x7F1B71B4u;
    ctx->downcount -= 4;
    // 7F1B71B4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B71B8:
    ctx->pc = 0x7F1B71B8u;
    // 7F1B71B8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B71BC:
    ctx->pc = 0x7F1B71BCu;
    // 7F1B71BC: rlwinm. r0, r0, 0, 27, 27
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

label_7F1B71C0:
    ctx->pc = 0x7F1B71C0u;
    // 7F1B71C0: bc    12, 2, 0x7F1B71E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B71E8;
        }
    }

label_7F1B71C4:
    ctx->pc = 0x7F1B71C4u;
    ctx->downcount -= 9;
    // 7F1B71C4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B71C8:
    ctx->pc = 0x7F1B71C8u;
    // 7F1B71C8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B71CC:
    ctx->pc = 0x7F1B71CCu;
    // 7F1B71CC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1B71D0:
    ctx->pc = 0x7F1B71D0u;
    // 7F1B71D0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B71D4:
    ctx->pc = 0x7F1B71D4u;
    // 7F1B71D4: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B71D8:
    ctx->pc = 0x7F1B71D8u;
    // 7F1B71D8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B71DC:
    ctx->pc = 0x7F1B71DCu;
    // 7F1B71DC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1B71E0:
    ctx->pc = 0x7F1B71E0u;
    // 7F1B71E0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B71E4:
    ctx->pc = 0x7F1B71E4u;
    // 7F1B71E4: b       0x7F1B7238
    {
            goto label_7F1B7238;
    }

label_7F1B71E8:
    ctx->pc = 0x7F1B71E8u;
    ctx->downcount -= 3;
    // 7F1B71E8: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B71EC:
    ctx->pc = 0x7F1B71ECu;
    // 7F1B71EC: cmpwi   r0, 0
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

label_7F1B71F0:
    ctx->pc = 0x7F1B71F0u;
    // 7F1B71F0: bc    4, 2, 0x7F1B7218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7218;
        }
    }

label_7F1B71F4:
    ctx->pc = 0x7F1B71F4u;
    ctx->downcount -= 9;
    // 7F1B71F4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B71F8:
    ctx->pc = 0x7F1B71F8u;
    // 7F1B71F8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B71FC:
    ctx->pc = 0x7F1B71FCu;
    // 7F1B71FC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1B7200:
    ctx->pc = 0x7F1B7200u;
    // 7F1B7200: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7204:
    ctx->pc = 0x7F1B7204u;
    // 7F1B7204: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7208:
    ctx->pc = 0x7F1B7208u;
    // 7F1B7208: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B720C:
    ctx->pc = 0x7F1B720Cu;
    // 7F1B720C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1B7210:
    ctx->pc = 0x7F1B7210u;
    // 7F1B7210: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7214:
    ctx->pc = 0x7F1B7214u;
    // 7F1B7214: b       0x7F1B7238
    {
            goto label_7F1B7238;
    }

label_7F1B7218:
    ctx->pc = 0x7F1B7218u;
    ctx->downcount -= 8;
    // 7F1B7218: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B721C:
    ctx->pc = 0x7F1B721Cu;
    // 7F1B721C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7220:
    ctx->pc = 0x7F1B7220u;
    // 7F1B7220: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1B7224:
    ctx->pc = 0x7F1B7224u;
    // 7F1B7224: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7228:
    ctx->pc = 0x7F1B7228u;
    // 7F1B7228: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B722C:
    ctx->pc = 0x7F1B722Cu;
    // 7F1B722C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7230:
    ctx->pc = 0x7F1B7230u;
    // 7F1B7230: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1B7234:
    ctx->pc = 0x7F1B7234u;
    // 7F1B7234: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7238:
    ctx->pc = 0x7F1B7238u;
    ctx->downcount -= 6;
    // 7F1B7238: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B723C:
    ctx->pc = 0x7F1B723Cu;
    // 7F1B723C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7240:
    ctx->pc = 0x7F1B7240u;
    // 7F1B7240: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7244:
    ctx->pc = 0x7F1B7244u;
    // 7F1B7244: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B7248:
    ctx->pc = 0x7F1B7248u;
    // 7F1B7248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B724C:
    ctx->pc = 0x7F1B724Cu;
    ctx->downcount -= 8;
    // 7F1B724C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7250:
    ctx->pc = 0x7F1B7250u;
    // 7F1B7250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7254:
    ctx->pc = 0x7F1B7254u;
    // 7F1B7254: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7258:
    ctx->pc = 0x7F1B7258u;
    // 7F1B7258: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B725C:
    ctx->pc = 0x7F1B725Cu;
    // 7F1B725C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7260:
    ctx->pc = 0x7F1B7260u;
    // 7F1B7260: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7264:
    ctx->pc = 0x7F1B7264u;
    // 7F1B7264: cmplwi  r3, 0x0000
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

label_7F1B7268:
    ctx->pc = 0x7F1B7268u;
    // 7F1B7268: bc    12, 2, 0x7F1B7270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7270;
        }
    }

label_7F1B726C:
    ctx->pc = 0x7F1B726Cu;
    ctx->downcount -= 1;
    // 7F1B726C: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F1B7270u;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F1B7270:
    ctx->pc = 0x7F1B7270u;
    ctx->downcount -= 3;
    // 7F1B7270: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7274:
    ctx->pc = 0x7F1B7274u;
    // 7F1B7274: cmplwi  r3, 0x0000
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

label_7F1B7278:
    ctx->pc = 0x7F1B7278u;
    // 7F1B7278: bc    12, 2, 0x7F1B7280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7280;
        }
    }

label_7F1B727C:
    ctx->pc = 0x7F1B727Cu;
    ctx->downcount -= 1;
    // 7F1B727C: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F1B7280u;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F1B7280:
    ctx->pc = 0x7F1B7280u;
    ctx->downcount -= 3;
    // 7F1B7280: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7284:
    ctx->pc = 0x7F1B7284u;
    // 7F1B7284: cmplwi  r3, 0x0000
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

label_7F1B7288:
    ctx->pc = 0x7F1B7288u;
    // 7F1B7288: bc    12, 2, 0x7F1B7298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7298;
        }
    }

label_7F1B728C:
    ctx->pc = 0x7F1B728Cu;
    ctx->downcount -= 1;
    // 7F1B728C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1B7290u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1B7290:
    ctx->pc = 0x7F1B7290u;
    ctx->downcount -= 2;
    // 7F1B7290: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7294:
    ctx->pc = 0x7F1B7294u;
    // 7F1B7294: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1B7298u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1B7298:
    ctx->pc = 0x7F1B7298u;
    ctx->downcount -= 6;
    // 7F1B7298: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B729C:
    ctx->pc = 0x7F1B729Cu;
    // 7F1B729C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B72A0:
    ctx->pc = 0x7F1B72A0u;
    // 7F1B72A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B72A4:
    ctx->pc = 0x7F1B72A4u;
    // 7F1B72A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B72A8:
    ctx->pc = 0x7F1B72A8u;
    // 7F1B72A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B72AC:
    ctx->pc = 0x7F1B72ACu;
    ctx->downcount -= 12;
    // 7F1B72AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B72B0:
    ctx->pc = 0x7F1B72B0u;
    // 7F1B72B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B72B4:
    ctx->pc = 0x7F1B72B4u;
    // 7F1B72B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B72B8:
    ctx->pc = 0x7F1B72B8u;
    // 7F1B72B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B72BC:
    ctx->pc = 0x7F1B72BCu;
    // 7F1B72BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B72C0:
    ctx->pc = 0x7F1B72C0u;
    // 7F1B72C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B72C4:
    ctx->pc = 0x7F1B72C4u;
    // 7F1B72C4: stw     r5, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B72C8:
    ctx->pc = 0x7F1B72C8u;
    // 7F1B72C8: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B72CC:
    ctx->pc = 0x7F1B72CCu;
    // 7F1B72CC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B72D0:
    ctx->pc = 0x7F1B72D0u;
    // 7F1B72D0: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B72D4:
    ctx->pc = 0x7F1B72D4u;
    // 7F1B72D4: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B72D8:
    ctx->pc = 0x7F1B72D8u;
    // 7F1B72D8: bl      0x7F234510
    {
            ctx->lr = 0x7F1B72DCu;
            ctx->pc = 0x7F234510u;
            return;
    }

label_7F1B72DC:
    ctx->pc = 0x7F1B72DCu;
    ctx->downcount -= 4;
    // 7F1B72DC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B72E0:
    ctx->pc = 0x7F1B72E0u;
    // 7F1B72E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B72E4:
    ctx->pc = 0x7F1B72E4u;
    // 7F1B72E4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1B72E8:
    ctx->pc = 0x7F1B72E8u;
    // 7F1B72E8: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1B72ECu;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1B72EC:
    ctx->pc = 0x7F1B72ECu;
    ctx->downcount -= 4;
    // 7F1B72EC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B72F0:
    ctx->pc = 0x7F1B72F0u;
    // 7F1B72F0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B72F4:
    ctx->pc = 0x7F1B72F4u;
    // 7F1B72F4: cmplwi  r3, 0x0000
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

label_7F1B72F8:
    ctx->pc = 0x7F1B72F8u;
    // 7F1B72F8: bc    4, 2, 0x7F1B7304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7304;
        }
    }

label_7F1B72FC:
    ctx->pc = 0x7F1B72FCu;
    ctx->downcount -= 2;
    // 7F1B72FC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B7300:
    ctx->pc = 0x7F1B7300u;
    // 7F1B7300: b       0x7F1B746C
    {
            goto label_7F1B746C;
    }

label_7F1B7304:
    ctx->pc = 0x7F1B7304u;
    ctx->downcount -= 1;
    // 7F1B7304: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1B7308u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1B7308:
    ctx->pc = 0x7F1B7308u;
    ctx->downcount -= 5;
    // 7F1B7308: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B730C:
    ctx->pc = 0x7F1B730Cu;
    // 7F1B730C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7310:
    ctx->pc = 0x7F1B7310u;
    // 7F1B7310: addi    r4, r4, 28420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28420);

label_7F1B7314:
    ctx->pc = 0x7F1B7314u;
    // 7F1B7314: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7318:
    ctx->pc = 0x7F1B7318u;
    // 7F1B7318: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1B731Cu;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1B731C:
    ctx->pc = 0x7F1B731Cu;
    ctx->downcount -= 4;
    // 7F1B731C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1B7320:
    ctx->pc = 0x7F1B7320u;
    // 7F1B7320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7324:
    ctx->pc = 0x7F1B7324u;
    // 7F1B7324: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B7328:
    ctx->pc = 0x7F1B7328u;
    // 7F1B7328: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F1B732Cu;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F1B732C:
    ctx->pc = 0x7F1B732Cu;
    ctx->downcount -= 4;
    // 7F1B732C: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7330:
    ctx->pc = 0x7F1B7330u;
    // 7F1B7330: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7334:
    ctx->pc = 0x7F1B7334u;
    // 7F1B7334: cmplwi  r3, 0x0000
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

label_7F1B7338:
    ctx->pc = 0x7F1B7338u;
    // 7F1B7338: bc    4, 2, 0x7F1B7344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7344;
        }
    }

label_7F1B733C:
    ctx->pc = 0x7F1B733Cu;
    ctx->downcount -= 2;
    // 7F1B733C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B7340:
    ctx->pc = 0x7F1B7340u;
    // 7F1B7340: b       0x7F1B746C
    {
            goto label_7F1B746C;
    }

label_7F1B7344:
    ctx->pc = 0x7F1B7344u;
    ctx->downcount -= 4;
    // 7F1B7344: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B7348:
    ctx->pc = 0x7F1B7348u;
    // 7F1B7348: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1B734C:
    ctx->pc = 0x7F1B734Cu;
    // 7F1B734C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B7350:
    ctx->pc = 0x7F1B7350u;
    // 7F1B7350: bl      0x7F2E1B1C
    {
            ctx->lr = 0x7F1B7354u;
            ctx->pc = 0x7F2E1B1Cu;
            return;
    }

label_7F1B7354:
    ctx->pc = 0x7F1B7354u;
    ctx->downcount -= 10;
    // 7F1B7354: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7358:
    ctx->pc = 0x7F1B7358u;
    // 7F1B7358: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1B735C:
    ctx->pc = 0x7F1B735Cu;
    // 7F1B735C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B7360:
    ctx->pc = 0x7F1B7360u;
    // 7F1B7360: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7364:
    ctx->pc = 0x7F1B7364u;
    // 7F1B7364: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7368:
    ctx->pc = 0x7F1B7368u;
    // 7F1B7368: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B736C:
    ctx->pc = 0x7F1B736Cu;
    // 7F1B736C: ori     r0, r0, 0x2001
    ctx->gpr[0] = ctx->gpr[0] | 0x2001u;

label_7F1B7370:
    ctx->pc = 0x7F1B7370u;
    // 7F1B7370: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7374:
    ctx->pc = 0x7F1B7374u;
    // 7F1B7374: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7378:
    ctx->pc = 0x7F1B7378u;
    // 7F1B7378: bl      0x7F2E1578
    {
            ctx->lr = 0x7F1B737Cu;
            ctx->pc = 0x7F2E1578u;
            return;
    }

label_7F1B737C:
    ctx->pc = 0x7F1B737Cu;
    ctx->downcount -= 7;
    // 7F1B737C: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7380:
    ctx->pc = 0x7F1B7380u;
    // 7F1B7380: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7384:
    ctx->pc = 0x7F1B7384u;
    // 7F1B7384: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B7388:
    ctx->pc = 0x7F1B7388u;
    // 7F1B7388: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B738C:
    ctx->pc = 0x7F1B738Cu;
    // 7F1B738C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B7390:
    ctx->pc = 0x7F1B7390u;
    // 7F1B7390: li      r8, 128
    ctx->gpr[8] = (u32)(s32)(128);

label_7F1B7394:
    ctx->pc = 0x7F1B7394u;
    // 7F1B7394: bl      0x7F2E1B58
    {
            ctx->lr = 0x7F1B7398u;
            ctx->pc = 0x7F2E1B58u;
            return;
    }

label_7F1B7398:
    ctx->pc = 0x7F1B7398u;
    ctx->downcount -= 7;
    // 7F1B7398: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B739C:
    ctx->pc = 0x7F1B739Cu;
    // 7F1B739C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B73A0:
    ctx->pc = 0x7F1B73A0u;
    // 7F1B73A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B73A4:
    ctx->pc = 0x7F1B73A4u;
    // 7F1B73A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B73A8:
    ctx->pc = 0x7F1B73A8u;
    // 7F1B73A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B73AC:
    ctx->pc = 0x7F1B73ACu;
    // 7F1B73AC: li      r8, 128
    ctx->gpr[8] = (u32)(s32)(128);

label_7F1B73B0:
    ctx->pc = 0x7F1B73B0u;
    // 7F1B73B0: bl      0x7F2E1B58
    {
            ctx->lr = 0x7F1B73B4u;
            ctx->pc = 0x7F2E1B58u;
            return;
    }

label_7F1B73B4:
    ctx->pc = 0x7F1B73B4u;
    ctx->downcount -= 8;
    // 7F1B73B4: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B73B8:
    ctx->pc = 0x7F1B73B8u;
    // 7F1B73B8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F1B73BC:
    ctx->pc = 0x7F1B73BCu;
    // 7F1B73BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B73C0:
    ctx->pc = 0x7F1B73C0u;
    // 7F1B73C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B73C4:
    ctx->pc = 0x7F1B73C4u;
    // 7F1B73C4: lwz     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B73C8:
    ctx->pc = 0x7F1B73C8u;
    // 7F1B73C8: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1B73CC:
    ctx->pc = 0x7F1B73CCu;
    // 7F1B73CC: stw     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B73D0:
    ctx->pc = 0x7F1B73D0u;
    // 7F1B73D0: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F1B73D4u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F1B73D4:
    ctx->pc = 0x7F1B73D4u;
    ctx->downcount -= 4;
    // 7F1B73D4: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B73D8:
    ctx->pc = 0x7F1B73D8u;
    // 7F1B73D8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B73DC:
    ctx->pc = 0x7F1B73DCu;
    // 7F1B73DC: cmplwi  r0, 0x0000
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

label_7F1B73E0:
    ctx->pc = 0x7F1B73E0u;
    // 7F1B73E0: bc    4, 2, 0x7F1B73EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B73EC;
        }
    }

label_7F1B73E4:
    ctx->pc = 0x7F1B73E4u;
    ctx->downcount -= 2;
    // 7F1B73E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B73E8:
    ctx->pc = 0x7F1B73E8u;
    // 7F1B73E8: b       0x7F1B746C
    {
            goto label_7F1B746C;
    }

label_7F1B73EC:
    ctx->pc = 0x7F1B73ECu;
    ctx->downcount -= 4;
    // 7F1B73EC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B73F0:
    ctx->pc = 0x7F1B73F0u;
    // 7F1B73F0: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B73F4:
    ctx->pc = 0x7F1B73F4u;
    // 7F1B73F4: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1B73F8:
    ctx->pc = 0x7F1B73F8u;
    // 7F1B73F8: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F1B73FCu;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F1B73FC:
    ctx->pc = 0x7F1B73FCu;
    ctx->downcount -= 10;
    // 7F1B73FC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7400:
    ctx->pc = 0x7F1B7400u;
    // 7F1B7400: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1B7404:
    ctx->pc = 0x7F1B7404u;
    // 7F1B7404: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B7408:
    ctx->pc = 0x7F1B7408u;
    // 7F1B7408: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B740C:
    ctx->pc = 0x7F1B740Cu;
    // 7F1B740C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7410:
    ctx->pc = 0x7F1B7410u;
    // 7F1B7410: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7414:
    ctx->pc = 0x7F1B7414u;
    // 7F1B7414: ori     r0, r0, 0x2001
    ctx->gpr[0] = ctx->gpr[0] | 0x2001u;

label_7F1B7418:
    ctx->pc = 0x7F1B7418u;
    // 7F1B7418: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B741C:
    ctx->pc = 0x7F1B741Cu;
    // 7F1B741C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7420:
    ctx->pc = 0x7F1B7420u;
    // 7F1B7420: bl      0x7F2E1578
    {
            ctx->lr = 0x7F1B7424u;
            ctx->pc = 0x7F2E1578u;
            return;
    }

label_7F1B7424:
    ctx->pc = 0x7F1B7424u;
    ctx->downcount -= 7;
    // 7F1B7424: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7428:
    ctx->pc = 0x7F1B7428u;
    // 7F1B7428: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B742C:
    ctx->pc = 0x7F1B742Cu;
    // 7F1B742C: addi    r5, r3, 7372
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7372);

label_7F1B7430:
    ctx->pc = 0x7F1B7430u;
    // 7F1B7430: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7434:
    ctx->pc = 0x7F1B7434u;
    // 7F1B7434: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7434u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B7438:
    ctx->pc = 0x7F1B7438u;
    // 7F1B7438: lfs     f2, 7400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7438u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B743C:
    ctx->pc = 0x7F1B743Cu;
    // 7F1B743C: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F1B7440u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F1B7440:
    ctx->pc = 0x7F1B7440u;
    ctx->downcount -= 6;
    // 7F1B7440: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7444:
    ctx->pc = 0x7F1B7444u;
    // 7F1B7444: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F1B7448:
    ctx->pc = 0x7F1B7448u;
    // 7F1B7448: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1B744C:
    ctx->pc = 0x7F1B744Cu;
    // 7F1B744C: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F1B7450:
    ctx->pc = 0x7F1B7450u;
    // 7F1B7450: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F1B7454:
    ctx->pc = 0x7F1B7454u;
    // 7F1B7454: bl      0x7F2E1D24
    {
            ctx->lr = 0x7F1B7458u;
            ctx->pc = 0x7F2E1D24u;
            return;
    }

label_7F1B7458:
    ctx->pc = 0x7F1B7458u;
    ctx->downcount -= 5;
    // 7F1B7458: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B745C:
    ctx->pc = 0x7F1B745Cu;
    // 7F1B745C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7460:
    ctx->pc = 0x7F1B7460u;
    // 7F1B7460: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7464:
    ctx->pc = 0x7F1B7464u;
    // 7F1B7464: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1B7468:
    ctx->pc = 0x7F1B7468u;
    // 7F1B7468: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B746C:
    ctx->pc = 0x7F1B746Cu;
    ctx->downcount -= 6;
    // 7F1B746C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7470:
    ctx->pc = 0x7F1B7470u;
    // 7F1B7470: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7474:
    ctx->pc = 0x7F1B7474u;
    // 7F1B7474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7478:
    ctx->pc = 0x7F1B7478u;
    // 7F1B7478: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B747C:
    ctx->pc = 0x7F1B747Cu;
    // 7F1B747C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7480:
    ctx->pc = 0x7F1B7480u;
    ctx->downcount -= 21;
    // 7F1B7480: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7484:
    ctx->pc = 0x7F1B7484u;
    // 7F1B7484: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7488:
    ctx->pc = 0x7F1B7488u;
    // 7F1B7488: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_7F1B748C:
    ctx->pc = 0x7F1B748Cu;
    // 7F1B748C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B7490:
    ctx->pc = 0x7F1B7490u;
    // 7F1B7490: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7494:
    ctx->pc = 0x7F1B7494u;
    // 7F1B7494: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B7498:
    ctx->pc = 0x7F1B7498u;
    // 7F1B7498: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B749C:
    ctx->pc = 0x7F1B749Cu;
    // 7F1B749C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B74A0:
    ctx->pc = 0x7F1B74A0u;
    // 7F1B74A0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1B74A4:
    ctx->pc = 0x7F1B74A4u;
    // 7F1B74A4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B74A8:
    ctx->pc = 0x7F1B74A8u;
    // 7F1B74A8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B74ACu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B74AC:
    ctx->pc = 0x7F1B74ACu;
    ctx->downcount -= 2;
    // 7F1B74AC: or.   r31, r3, r3
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

label_7F1B74B0:
    ctx->pc = 0x7F1B74B0u;
    // 7F1B74B0: bc    12, 2, 0x7F1B7528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7528;
        }
    }

label_7F1B74B4:
    ctx->pc = 0x7F1B74B4u;
    ctx->downcount -= 5;
    // 7F1B74B4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B74B8:
    ctx->pc = 0x7F1B74B8u;
    // 7F1B74B8: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B74BC:
    ctx->pc = 0x7F1B74BCu;
    // 7F1B74BC: addi    r4, r4, 28808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28808);

label_7F1B74C0:
    ctx->pc = 0x7F1B74C0u;
    // 7F1B74C0: addi    r5, r5, 29260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29260);

label_7F1B74C4:
    ctx->pc = 0x7F1B74C4u;
    // 7F1B74C4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B74C8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B74C8:
    ctx->pc = 0x7F1B74C8u;
    ctx->downcount -= 14;
    // 7F1B74C8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B74CC:
    ctx->pc = 0x7F1B74CCu;
    // 7F1B74CC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B74D0:
    ctx->pc = 0x7F1B74D0u;
    // 7F1B74D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B74D4:
    ctx->pc = 0x7F1B74D4u;
    // 7F1B74D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B74D8:
    ctx->pc = 0x7F1B74D8u;
    // 7F1B74D8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B74DC:
    ctx->pc = 0x7F1B74DCu;
    // 7F1B74DC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B74E0:
    ctx->pc = 0x7F1B74E0u;
    // 7F1B74E0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B74E4:
    ctx->pc = 0x7F1B74E4u;
    // 7F1B74E4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B74E8:
    ctx->pc = 0x7F1B74E8u;
    // 7F1B74E8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B74EC:
    ctx->pc = 0x7F1B74ECu;
    // 7F1B74EC: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B74F0:
    ctx->pc = 0x7F1B74F0u;
    // 7F1B74F0: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B74F4:
    ctx->pc = 0x7F1B74F4u;
    // 7F1B74F4: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B74F8:
    ctx->pc = 0x7F1B74F8u;
    // 7F1B74F8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B74FC:
    ctx->pc = 0x7F1B74FCu;
    // 7F1B74FC: bl      0x7F1B72AC
    {
            ctx->lr = 0x7F1B7500u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B72ACu;
                return;
            }
            goto label_7F1B72AC;
    }

label_7F1B7500:
    ctx->pc = 0x7F1B7500u;
    ctx->downcount -= 2;
    // 7F1B7500: cmpwi   r3, 0
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

label_7F1B7504:
    ctx->pc = 0x7F1B7504u;
    // 7F1B7504: bc    4, 0, 0x7F1B7518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7518;
        }
    }

label_7F1B7508:
    ctx->pc = 0x7F1B7508u;
    ctx->downcount -= 2;
    // 7F1B7508: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B750C:
    ctx->pc = 0x7F1B750Cu;
    // 7F1B750C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B7510u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B7510:
    ctx->pc = 0x7F1B7510u;
    ctx->downcount -= 2;
    // 7F1B7510: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7514:
    ctx->pc = 0x7F1B7514u;
    // 7F1B7514: b       0x7F1B752C
    {
            goto label_7F1B752C;
    }

label_7F1B7518:
    ctx->pc = 0x7F1B7518u;
    ctx->downcount -= 4;
    // 7F1B7518: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B751C:
    ctx->pc = 0x7F1B751Cu;
    // 7F1B751C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7520:
    ctx->pc = 0x7F1B7520u;
    // 7F1B7520: addi    r4, r4, 28680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28680);

label_7F1B7524:
    ctx->pc = 0x7F1B7524u;
    // 7F1B7524: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B7528u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B7528:
    ctx->pc = 0x7F1B7528u;
    ctx->downcount -= 1;
    // 7F1B7528: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B752C:
    ctx->pc = 0x7F1B752Cu;
    ctx->downcount -= 16;
    // 7F1B752C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B7530:
    ctx->pc = 0x7F1B7530u;
    // 7F1B7530: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7534:
    ctx->pc = 0x7F1B7534u;
    // 7F1B7534: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7538:
    ctx->pc = 0x7F1B7538u;
    // 7F1B7538: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B753C:
    ctx->pc = 0x7F1B753Cu;
    // 7F1B753C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7540:
    ctx->pc = 0x7F1B7540u;
    ctx->downcount -= 16;
    // 7F1B7540: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7544:
    ctx->pc = 0x7F1B7544u;
    // 7F1B7544: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7548:
    ctx->pc = 0x7F1B7548u;
    // 7F1B7548: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B754C:
    ctx->pc = 0x7F1B754Cu;
    // 7F1B754C: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B7550:
    ctx->pc = 0x7F1B7550u;
    // 7F1B7550: or.   r30, r3, r3
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

label_7F1B7554:
    ctx->pc = 0x7F1B7554u;
    // 7F1B7554: bc    12, 2, 0x7F1B7708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7708;
        }
    }

label_7F1B7558:
    ctx->pc = 0x7F1B7558u;
    ctx->downcount -= 12;
    // 7F1B7558: lbz     r5, 87(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(87);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F1B755C:
    ctx->pc = 0x7F1B755Cu;
    // 7F1B755C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B7560:
    ctx->pc = 0x7F1B7560u;
    // 7F1B7560: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B7564:
    ctx->pc = 0x7F1B7564u;
    // 7F1B7564: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7568:
    ctx->pc = 0x7F1B7568u;
    // 7F1B7568: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B756C:
    ctx->pc = 0x7F1B756Cu;
    // 7F1B756C: lfd     f2, 7424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B756Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7424);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7570:
    ctx->pc = 0x7F1B7570u;
    // 7F1B7570: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7574:
    ctx->pc = 0x7F1B7574u;
    // 7F1B7574: lfd     f0, 7408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7408);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7578:
    ctx->pc = 0x7F1B7578u;
    // 7F1B7578: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B757C:
    ctx->pc = 0x7F1B757Cu;
    // 7F1B757C: fsub   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B757Cu)) return;
    ppc_fsub(ctx, 1, 1, 2);

label_7F1B7580:
    ctx->pc = 0x7F1B7580u;
    // 7F1B7580: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7580u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B7584:
    ctx->pc = 0x7F1B7584u;
    // 7F1B7584: bc    4, 1, 0x7F1B7708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7708;
        }
    }

label_7F1B7588:
    ctx->pc = 0x7F1B7588u;
    ctx->downcount -= 5;
    // 7F1B7588: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B758C:
    ctx->pc = 0x7F1B758Cu;
    // 7F1B758C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7590:
    ctx->pc = 0x7F1B7590u;
    // 7F1B7590: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1B7594:
    ctx->pc = 0x7F1B7594u;
    // 7F1B7594: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1B7598:
    ctx->pc = 0x7F1B7598u;
    // 7F1B7598: bl      0x80043188
    {
            ctx->lr = 0x7F1B759Cu;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F1B759C:
    ctx->pc = 0x7F1B759Cu;
    ctx->downcount -= 1;
    // 7F1B759C: bl      0x8004C3D0
    {
            ctx->lr = 0x7F1B75A0u;
            ctx->pc = 0x8004C3D0u;
            return;
    }

label_7F1B75A0:
    ctx->pc = 0x7F1B75A0u;
    ctx->downcount -= 2;
    // 7F1B75A0: or.   r31, r3, r3
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

label_7F1B75A4:
    ctx->pc = 0x7F1B75A4u;
    // 7F1B75A4: bc    12, 2, 0x7F1B75F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B75F0;
        }
    }

label_7F1B75A8:
    ctx->pc = 0x7F1B75A8u;
    ctx->downcount -= 3;
    // 7F1B75A8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1B75AC:
    ctx->pc = 0x7F1B75ACu;
    // 7F1B75AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B75B0:
    ctx->pc = 0x7F1B75B0u;
    // 7F1B75B0: bl      0x8004B588
    {
            ctx->lr = 0x7F1B75B4u;
            ctx->pc = 0x8004B588u;
            return;
    }

label_7F1B75B4:
    ctx->pc = 0x7F1B75B4u;
    ctx->downcount -= 5;
    // 7F1B75B4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1B75B8:
    ctx->pc = 0x7F1B75B8u;
    // 7F1B75B8: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1B75BC:
    ctx->pc = 0x7F1B75BCu;
    // 7F1B75BC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F1B75C0:
    ctx->pc = 0x7F1B75C0u;
    // 7F1B75C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B75C4:
    ctx->pc = 0x7F1B75C4u;
    // 7F1B75C4: bl      0x80043238
    {
            ctx->lr = 0x7F1B75C8u;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1B75C8:
    ctx->pc = 0x7F1B75C8u;
    ctx->downcount -= 9;
    // 7F1B75C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B75CC:
    ctx->pc = 0x7F1B75CCu;
    // 7F1B75CC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B75D0:
    ctx->pc = 0x7F1B75D0u;
    // 7F1B75D0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1B75D4:
    ctx->pc = 0x7F1B75D4u;
    // 7F1B75D4: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1B75D8:
    ctx->pc = 0x7F1B75D8u;
    // 7F1B75D8: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F1B75DC:
    ctx->pc = 0x7F1B75DCu;
    // 7F1B75DC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B75E0:
    ctx->pc = 0x7F1B75E0u;
    // 7F1B75E0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B75E4:
    ctx->pc = 0x7F1B75E4u;
    // 7F1B75E4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B75E8:
    ctx->pc = 0x7F1B75E8u;
    // 7F1B75E8: bl      0x8004439C
    {
            ctx->lr = 0x7F1B75ECu;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1B75EC:
    ctx->pc = 0x7F1B75ECu;
    ctx->downcount -= 1;
    // 7F1B75EC: b       0x7F1B7640
    {
            goto label_7F1B7640;
    }

label_7F1B75F0:
    ctx->pc = 0x7F1B75F0u;
    ctx->downcount -= 1;
    // 7F1B75F0: bl      0x8004C6F0
    {
            ctx->lr = 0x7F1B75F4u;
            ctx->pc = 0x8004C6F0u;
            return;
    }

label_7F1B75F4:
    ctx->pc = 0x7F1B75F4u;
    ctx->downcount -= 5;
    // 7F1B75F4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B75F8:
    ctx->pc = 0x7F1B75F8u;
    // 7F1B75F8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F1B75FC:
    ctx->pc = 0x7F1B75FCu;
    // 7F1B75FC: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1B7600:
    ctx->pc = 0x7F1B7600u;
    // 7F1B7600: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7604:
    ctx->pc = 0x7F1B7604u;
    // 7F1B7604: bl      0x8004B784
    {
            ctx->lr = 0x7F1B7608u;
            ctx->pc = 0x8004B784u;
            return;
    }

label_7F1B7608:
    ctx->pc = 0x7F1B7608u;
    ctx->downcount -= 5;
    // 7F1B7608: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F1B760C:
    ctx->pc = 0x7F1B760Cu;
    // 7F1B760C: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F1B7610:
    ctx->pc = 0x7F1B7610u;
    // 7F1B7610: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1B7614:
    ctx->pc = 0x7F1B7614u;
    // 7F1B7614: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B7618:
    ctx->pc = 0x7F1B7618u;
    // 7F1B7618: bl      0x80043238
    {
            ctx->lr = 0x7F1B761Cu;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F1B761C:
    ctx->pc = 0x7F1B761Cu;
    ctx->downcount -= 9;
    // 7F1B761C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7620:
    ctx->pc = 0x7F1B7620u;
    // 7F1B7620: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7624:
    ctx->pc = 0x7F1B7624u;
    // 7F1B7624: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F1B7628:
    ctx->pc = 0x7F1B7628u;
    // 7F1B7628: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F1B762C:
    ctx->pc = 0x7F1B762Cu;
    // 7F1B762C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F1B7630:
    ctx->pc = 0x7F1B7630u;
    // 7F1B7630: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B7634:
    ctx->pc = 0x7F1B7634u;
    // 7F1B7634: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B7638:
    ctx->pc = 0x7F1B7638u;
    // 7F1B7638: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B763C:
    ctx->pc = 0x7F1B763Cu;
    // 7F1B763C: bl      0x8004439C
    {
            ctx->lr = 0x7F1B7640u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F1B7640:
    ctx->pc = 0x7F1B7640u;
    ctx->downcount -= 3;
    // 7F1B7640: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7644:
    ctx->pc = 0x7F1B7644u;
    // 7F1B7644: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7648:
    ctx->pc = 0x7F1B7648u;
    // 7F1B7648: bl      0x800438AC
    {
            ctx->lr = 0x7F1B764Cu;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F1B764C:
    ctx->pc = 0x7F1B764Cu;
    ctx->downcount -= 12;
    // 7F1B764C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B7650:
    ctx->pc = 0x7F1B7650u;
    // 7F1B7650: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7654:
    ctx->pc = 0x7F1B7654u;
    // 7F1B7654: addi    r5, r4, 7416
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7416);

label_7F1B7658:
    ctx->pc = 0x7F1B7658u;
    // 7F1B7658: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B765C:
    ctx->pc = 0x7F1B765Cu;
    // 7F1B765C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B765Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B7660:
    ctx->pc = 0x7F1B7660u;
    // 7F1B7660: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B7664:
    ctx->pc = 0x7F1B7664u;
    // 7F1B7664: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B7668:
    ctx->pc = 0x7F1B7668u;
    // 7F1B7668: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B766C:
    ctx->pc = 0x7F1B766Cu;
    // 7F1B766C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B766Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1B7670:
    ctx->pc = 0x7F1B7670u;
    // 7F1B7670: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B7674:
    ctx->pc = 0x7F1B7674u;
    // 7F1B7674: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B7674u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F1B7678:
    ctx->pc = 0x7F1B7678u;
    // 7F1B7678: bl      0x80044630
    {
            ctx->lr = 0x7F1B767Cu;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F1B767C:
    ctx->pc = 0x7F1B767Cu;
    ctx->downcount -= 1;
    // 7F1B767C: bl      0x80042A40
    {
            ctx->lr = 0x7F1B7680u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F1B7680:
    ctx->pc = 0x7F1B7680u;
    ctx->downcount -= 3;
    // 7F1B7680: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7684:
    ctx->pc = 0x7F1B7684u;
    // 7F1B7684: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7688:
    ctx->pc = 0x7F1B7688u;
    // 7F1B7688: bl      0x80044978
    {
            ctx->lr = 0x7F1B768Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F1B768C:
    ctx->pc = 0x7F1B768Cu;
    ctx->downcount -= 5;
    // 7F1B768C: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7690:
    ctx->pc = 0x7F1B7690u;
    // 7F1B7690: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1B7694:
    ctx->pc = 0x7F1B7694u;
    // 7F1B7694: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B7698:
    ctx->pc = 0x7F1B7698u;
    // 7F1B7698: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B769C:
    ctx->pc = 0x7F1B769Cu;
    // 7F1B769C: bl      0x80045970
    {
            ctx->lr = 0x7F1B76A0u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F1B76A0:
    ctx->pc = 0x7F1B76A0u;
    ctx->downcount -= 4;
    // 7F1B76A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B76A4:
    ctx->pc = 0x7F1B76A4u;
    // 7F1B76A4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B76A8:
    ctx->pc = 0x7F1B76A8u;
    // 7F1B76A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B76AC:
    ctx->pc = 0x7F1B76ACu;
    // 7F1B76AC: bl      0x800462E4
    {
            ctx->lr = 0x7F1B76B0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B76B0:
    ctx->pc = 0x7F1B76B0u;
    ctx->downcount -= 1;
    // 7F1B76B0: bl      0x8004D870
    {
            ctx->lr = 0x7F1B76B4u;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F1B76B4:
    ctx->pc = 0x7F1B76B4u;
    ctx->downcount -= 98;
    // 7F1B76B4: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B76B8:
    ctx->pc = 0x7F1B76B8u;
    // 7F1B76B8: li      r7, 448
    ctx->gpr[7] = (u32)(s32)(448);

label_7F1B76BC:
    ctx->pc = 0x7F1B76BCu;
    // 7F1B76BC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B76C0:
    ctx->pc = 0x7F1B76C0u;
    // 7F1B76C0: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B76C4:
    ctx->pc = 0x7F1B76C4u;
    // 7F1B76C4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B76C8:
    ctx->pc = 0x7F1B76C8u;
    // 7F1B76C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B76CC:
    ctx->pc = 0x7F1B76CCu;
    // 7F1B76CC: li      r6, 8192
    ctx->gpr[6] = (u32)(s32)(8192);

label_7F1B76D0:
    ctx->pc = 0x7F1B76D0u;
    // 7F1B76D0: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B76D4:
    ctx->pc = 0x7F1B76D4u;
    // 7F1B76D4: lwz     r5, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B76D8:
    ctx->pc = 0x7F1B76D8u;
    // 7F1B76D8: neg  r9, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[9] = (~a) + 1u;
    }

label_7F1B76DC:
    ctx->pc = 0x7F1B76DCu;
    // 7F1B76DC: addi    r0, r5, 448
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(448);

label_7F1B76E0:
    ctx->pc = 0x7F1B76E0u;
    // 7F1B76E0: mulli   r5, r9, 7168
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[9] * (s64)(s32)7168);

label_7F1B76E4:
    ctx->pc = 0x7F1B76E4u;
    // 7F1B76E4: mulli   r0, r0, 7168
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7168);

label_7F1B76E8:
    ctx->pc = 0x7F1B76E8u;
    // 7F1B76E8: divw   r5, r5, r7
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B76EC:
    ctx->pc = 0x7F1B76ECu;
    // 7F1B76EC: divw   r7, r0, r7
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B76F0:
    ctx->pc = 0x7F1B76F0u;
    // 7F1B76F0: bl      0x7F2EADBC
    {
            ctx->lr = 0x7F1B76F4u;
            ctx->pc = 0x7F2EADBCu;
            return;
    }

label_7F1B76F4:
    ctx->pc = 0x7F1B76F4u;
    ctx->downcount -= 1;
    // 7F1B76F4: bl      0x8004D990
    {
            ctx->lr = 0x7F1B76F8u;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F1B76F8:
    ctx->pc = 0x7F1B76F8u;
    ctx->downcount -= 4;
    // 7F1B76F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B76FC:
    ctx->pc = 0x7F1B76FCu;
    // 7F1B76FC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B7700:
    ctx->pc = 0x7F1B7700u;
    // 7F1B7700: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B7704:
    ctx->pc = 0x7F1B7704u;
    // 7F1B7704: bl      0x800462E4
    {
            ctx->lr = 0x7F1B7708u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B7708:
    ctx->pc = 0x7F1B7708u;
    ctx->downcount -= 16;
    // 7F1B7708: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B770C:
    ctx->pc = 0x7F1B770Cu;
    // 7F1B770C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7710:
    ctx->pc = 0x7F1B7710u;
    // 7F1B7710: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7714:
    ctx->pc = 0x7F1B7714u;
    // 7F1B7714: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1B7718:
    ctx->pc = 0x7F1B7718u;
    // 7F1B7718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B771C:
    ctx->pc = 0x7F1B771Cu;
    ctx->downcount -= 6;
    // 7F1B771C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7720:
    ctx->pc = 0x7F1B7720u;
    // 7F1B7720: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7724:
    ctx->pc = 0x7F1B7724u;
    // 7F1B7724: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7728:
    ctx->pc = 0x7F1B7728u;
    // 7F1B7728: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B772C:
    ctx->pc = 0x7F1B772Cu;
    // 7F1B772C: cmpwi   r0, 0
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

label_7F1B7730:
    ctx->pc = 0x7F1B7730u;
    // 7F1B7730: bc    4, 2, 0x7F1B77B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B77B0;
        }
    }

label_7F1B7734:
    ctx->pc = 0x7F1B7734u;
    ctx->downcount -= 14;
    // 7F1B7734: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7738:
    ctx->pc = 0x7F1B7738u;
    // 7F1B7738: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B773C:
    ctx->pc = 0x7F1B773Cu;
    // 7F1B773C: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1B7740:
    ctx->pc = 0x7F1B7740u;
    // 7F1B7740: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B7744:
    ctx->pc = 0x7F1B7744u;
    // 7F1B7744: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7748:
    ctx->pc = 0x7F1B7748u;
    // 7F1B7748: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B774C:
    ctx->pc = 0x7F1B774Cu;
    // 7F1B774C: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7750:
    ctx->pc = 0x7F1B7750u;
    // 7F1B7750: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F1B7754:
    ctx->pc = 0x7F1B7754u;
    // 7F1B7754: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1B7758:
    ctx->pc = 0x7F1B7758u;
    // 7F1B7758: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B775C:
    ctx->pc = 0x7F1B775Cu;
    // 7F1B775C: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7760:
    ctx->pc = 0x7F1B7760u;
    // 7F1B7760: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7764:
    ctx->pc = 0x7F1B7764u;
    // 7F1B7764: cmpw    r0, r4
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

label_7F1B7768:
    ctx->pc = 0x7F1B7768u;
    // 7F1B7768: bc    12, 0, 0x7F1B7770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7770;
        }
    }

label_7F1B776C:
    ctx->pc = 0x7F1B776Cu;
    ctx->downcount -= 1;
    // 7F1B776C: stw     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7770:
    ctx->pc = 0x7F1B7770u;
    ctx->downcount -= 4;
    // 7F1B7770: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7774:
    ctx->pc = 0x7F1B7774u;
    // 7F1B7774: lwz     r4, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7778:
    ctx->pc = 0x7F1B7778u;
    // 7F1B7778: cmpw    r0, r4
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

label_7F1B777C:
    ctx->pc = 0x7F1B777Cu;
    // 7F1B777C: bc    12, 0, 0x7F1B7784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7784;
        }
    }

label_7F1B7780:
    ctx->pc = 0x7F1B7780u;
    ctx->downcount -= 1;
    // 7F1B7780: stw     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7784:
    ctx->pc = 0x7F1B7784u;
    ctx->downcount -= 4;
    // 7F1B7784: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7788:
    ctx->pc = 0x7F1B7788u;
    // 7F1B7788: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B778C:
    ctx->pc = 0x7F1B778Cu;
    // 7F1B778C: cmpw    r4, r0
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

label_7F1B7790:
    ctx->pc = 0x7F1B7790u;
    // 7F1B7790: bc    4, 2, 0x7F1B7814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7814;
        }
    }

label_7F1B7794:
    ctx->pc = 0x7F1B7794u;
    ctx->downcount -= 4;
    // 7F1B7794: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7798:
    ctx->pc = 0x7F1B7798u;
    // 7F1B7798: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B779C:
    ctx->pc = 0x7F1B779Cu;
    // 7F1B779C: cmpw    r4, r0
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

label_7F1B77A0:
    ctx->pc = 0x7F1B77A0u;
    // 7F1B77A0: bc    4, 2, 0x7F1B7814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7814;
        }
    }

label_7F1B77A4:
    ctx->pc = 0x7F1B77A4u;
    ctx->downcount -= 3;
    // 7F1B77A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B77A8:
    ctx->pc = 0x7F1B77A8u;
    // 7F1B77A8: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B77AC:
    ctx->pc = 0x7F1B77ACu;
    // 7F1B77AC: b       0x7F1B7814
    {
            goto label_7F1B7814;
    }

label_7F1B77B0:
    ctx->pc = 0x7F1B77B0u;
    ctx->downcount -= 11;
    // 7F1B77B0: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B77B4:
    ctx->pc = 0x7F1B77B4u;
    // 7F1B77B4: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B77B8:
    ctx->pc = 0x7F1B77B8u;
    // 7F1B77B8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1B77BC:
    ctx->pc = 0x7F1B77BCu;
    // 7F1B77BC: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B77C0:
    ctx->pc = 0x7F1B77C0u;
    // 7F1B77C0: lwz     r4, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B77C4:
    ctx->pc = 0x7F1B77C4u;
    // 7F1B77C4: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B77C8:
    ctx->pc = 0x7F1B77C8u;
    // 7F1B77C8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1B77CC:
    ctx->pc = 0x7F1B77CCu;
    // 7F1B77CC: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B77D0:
    ctx->pc = 0x7F1B77D0u;
    // 7F1B77D0: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B77D4:
    ctx->pc = 0x7F1B77D4u;
    // 7F1B77D4: cmpwi   r0, 0
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

label_7F1B77D8:
    ctx->pc = 0x7F1B77D8u;
    // 7F1B77D8: bc    12, 1, 0x7F1B77E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B77E4;
        }
    }

label_7F1B77DC:
    ctx->pc = 0x7F1B77DCu;
    ctx->downcount -= 2;
    // 7F1B77DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B77E0:
    ctx->pc = 0x7F1B77E0u;
    // 7F1B77E0: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B77E4:
    ctx->pc = 0x7F1B77E4u;
    ctx->downcount -= 3;
    // 7F1B77E4: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B77E8:
    ctx->pc = 0x7F1B77E8u;
    // 7F1B77E8: cmpwi   r0, 0
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

label_7F1B77EC:
    ctx->pc = 0x7F1B77ECu;
    // 7F1B77EC: bc    12, 1, 0x7F1B77F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B77F8;
        }
    }

label_7F1B77F0:
    ctx->pc = 0x7F1B77F0u;
    ctx->downcount -= 2;
    // 7F1B77F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B77F4:
    ctx->pc = 0x7F1B77F4u;
    // 7F1B77F4: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B77F8:
    ctx->pc = 0x7F1B77F8u;
    ctx->downcount -= 3;
    // 7F1B77F8: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B77FC:
    ctx->pc = 0x7F1B77FCu;
    // 7F1B77FC: cmpwi   r0, 0
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

label_7F1B7800:
    ctx->pc = 0x7F1B7800u;
    // 7F1B7800: bc    4, 2, 0x7F1B7814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7814;
        }
    }

label_7F1B7804:
    ctx->pc = 0x7F1B7804u;
    ctx->downcount -= 3;
    // 7F1B7804: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7808:
    ctx->pc = 0x7F1B7808u;
    // 7F1B7808: cmpwi   r0, 0
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

label_7F1B780C:
    ctx->pc = 0x7F1B780Cu;
    // 7F1B780C: bc    4, 2, 0x7F1B7814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7814;
        }
    }

label_7F1B7810:
    ctx->pc = 0x7F1B7810u;
    ctx->downcount -= 1;
    // 7F1B7810: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B7814u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B7814:
    ctx->pc = 0x7F1B7814u;
    ctx->downcount -= 5;
    // 7F1B7814: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7818:
    ctx->pc = 0x7F1B7818u;
    // 7F1B7818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B781C:
    ctx->pc = 0x7F1B781Cu;
    // 7F1B781C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7820:
    ctx->pc = 0x7F1B7820u;
    // 7F1B7820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7824:
    ctx->pc = 0x7F1B7824u;
    ctx->downcount -= 8;
    // 7F1B7824: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7828:
    ctx->pc = 0x7F1B7828u;
    // 7F1B7828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B782C:
    ctx->pc = 0x7F1B782Cu;
    // 7F1B782C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7830:
    ctx->pc = 0x7F1B7830u;
    // 7F1B7830: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7834:
    ctx->pc = 0x7F1B7834u;
    // 7F1B7834: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7838:
    ctx->pc = 0x7F1B7838u;
    // 7F1B7838: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B783C:
    ctx->pc = 0x7F1B783Cu;
    // 7F1B783C: cmplwi  r3, 0x0000
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

label_7F1B7840:
    ctx->pc = 0x7F1B7840u;
    // 7F1B7840: bc    12, 2, 0x7F1B7850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7850;
        }
    }

label_7F1B7844:
    ctx->pc = 0x7F1B7844u;
    ctx->downcount -= 1;
    // 7F1B7844: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1B7848u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1B7848:
    ctx->pc = 0x7F1B7848u;
    ctx->downcount -= 2;
    // 7F1B7848: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B784C:
    ctx->pc = 0x7F1B784Cu;
    // 7F1B784C: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1B7850u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1B7850:
    ctx->pc = 0x7F1B7850u;
    ctx->downcount -= 6;
    // 7F1B7850: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7854:
    ctx->pc = 0x7F1B7854u;
    // 7F1B7854: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7858:
    ctx->pc = 0x7F1B7858u;
    // 7F1B7858: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B785C:
    ctx->pc = 0x7F1B785Cu;
    // 7F1B785C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7860:
    ctx->pc = 0x7F1B7860u;
    // 7F1B7860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7864:
    ctx->pc = 0x7F1B7864u;
    ctx->downcount -= 21;
    // 7F1B7864: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7868:
    ctx->pc = 0x7F1B7868u;
    // 7F1B7868: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B786C:
    ctx->pc = 0x7F1B786Cu;
    // 7F1B786C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B7870:
    ctx->pc = 0x7F1B7870u;
    // 7F1B7870: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7874:
    ctx->pc = 0x7F1B7874u;
    // 7F1B7874: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7878:
    ctx->pc = 0x7F1B7878u;
    // 7F1B7878: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B787C:
    ctx->pc = 0x7F1B787Cu;
    // 7F1B787C: stw     r8, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B7880:
    ctx->pc = 0x7F1B7880u;
    // 7F1B7880: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7884:
    ctx->pc = 0x7F1B7884u;
    // 7F1B7884: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7888:
    ctx->pc = 0x7F1B7888u;
    // 7F1B7888: addi    r4, r3, 7432
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7432);

label_7F1B788C:
    ctx->pc = 0x7F1B788Cu;
    // 7F1B788C: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1B7890:
    ctx->pc = 0x7F1B7890u;
    // 7F1B7890: stw     r8, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B7894:
    ctx->pc = 0x7F1B7894u;
    // 7F1B7894: stw     r8, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B7898:
    ctx->pc = 0x7F1B7898u;
    // 7F1B7898: stw     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B789C:
    ctx->pc = 0x7F1B789Cu;
    // 7F1B789C: stw     r8, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B78A0:
    ctx->pc = 0x7F1B78A0u;
    // 7F1B78A0: stw     r8, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B78A4:
    ctx->pc = 0x7F1B78A4u;
    // 7F1B78A4: stw     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B78A8:
    ctx->pc = 0x7F1B78A8u;
    // 7F1B78A8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B78AC:
    ctx->pc = 0x7F1B78ACu;
    // 7F1B78AC: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B78B0:
    ctx->pc = 0x7F1B78B0u;
    // 7F1B78B0: stw     r8, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B78B4:
    ctx->pc = 0x7F1B78B4u;
    // 7F1B78B4: bl      0x7F234510
    {
            ctx->lr = 0x7F1B78B8u;
            ctx->pc = 0x7F234510u;
            return;
    }

label_7F1B78B8:
    ctx->pc = 0x7F1B78B8u;
    ctx->downcount -= 4;
    // 7F1B78B8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B78BC:
    ctx->pc = 0x7F1B78BCu;
    // 7F1B78BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B78C0:
    ctx->pc = 0x7F1B78C0u;
    // 7F1B78C0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1B78C4:
    ctx->pc = 0x7F1B78C4u;
    // 7F1B78C4: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1B78C8u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1B78C8:
    ctx->pc = 0x7F1B78C8u;
    ctx->downcount -= 4;
    // 7F1B78C8: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B78CC:
    ctx->pc = 0x7F1B78CCu;
    // 7F1B78CC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B78D0:
    ctx->pc = 0x7F1B78D0u;
    // 7F1B78D0: cmplwi  r3, 0x0000
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

label_7F1B78D4:
    ctx->pc = 0x7F1B78D4u;
    // 7F1B78D4: bc    4, 2, 0x7F1B78E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B78E0;
        }
    }

label_7F1B78D8:
    ctx->pc = 0x7F1B78D8u;
    ctx->downcount -= 2;
    // 7F1B78D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B78DC:
    ctx->pc = 0x7F1B78DCu;
    // 7F1B78DC: b       0x7F1B78FC
    {
            goto label_7F1B78FC;
    }

label_7F1B78E0:
    ctx->pc = 0x7F1B78E0u;
    ctx->downcount -= 1;
    // 7F1B78E0: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1B78E4u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1B78E4:
    ctx->pc = 0x7F1B78E4u;
    ctx->downcount -= 5;
    // 7F1B78E4: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B78E8:
    ctx->pc = 0x7F1B78E8u;
    // 7F1B78E8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B78EC:
    ctx->pc = 0x7F1B78ECu;
    // 7F1B78EC: addi    r4, r4, 30016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30016);

label_7F1B78F0:
    ctx->pc = 0x7F1B78F0u;
    // 7F1B78F0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B78F4:
    ctx->pc = 0x7F1B78F4u;
    // 7F1B78F4: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1B78F8u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1B78F8:
    ctx->pc = 0x7F1B78F8u;
    ctx->downcount -= 1;
    // 7F1B78F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B78FC:
    ctx->pc = 0x7F1B78FCu;
    ctx->downcount -= 6;
    // 7F1B78FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7900:
    ctx->pc = 0x7F1B7900u;
    // 7F1B7900: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7904:
    ctx->pc = 0x7F1B7904u;
    // 7F1B7904: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7908:
    ctx->pc = 0x7F1B7908u;
    // 7F1B7908: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B790C:
    ctx->pc = 0x7F1B790Cu;
    // 7F1B790C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7910:
    ctx->pc = 0x7F1B7910u;
    ctx->downcount -= 23;
    // 7F1B7910: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7914:
    ctx->pc = 0x7F1B7914u;
    // 7F1B7914: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7918:
    ctx->pc = 0x7F1B7918u;
    // 7F1B7918: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B791C:
    ctx->pc = 0x7F1B791Cu;
    // 7F1B791C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B7920:
    ctx->pc = 0x7F1B7920u;
    // 7F1B7920: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7924:
    ctx->pc = 0x7F1B7924u;
    // 7F1B7924: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B7928:
    ctx->pc = 0x7F1B7928u;
    // 7F1B7928: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B792C:
    ctx->pc = 0x7F1B792Cu;
    // 7F1B792C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B7930:
    ctx->pc = 0x7F1B7930u;
    // 7F1B7930: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1B7934:
    ctx->pc = 0x7F1B7934u;
    // 7F1B7934: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B7938:
    ctx->pc = 0x7F1B7938u;
    // 7F1B7938: li      r5, 88
    ctx->gpr[5] = (u32)(s32)(88);

label_7F1B793C:
    ctx->pc = 0x7F1B793Cu;
    // 7F1B793C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B7940:
    ctx->pc = 0x7F1B7940u;
    // 7F1B7940: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B7944u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B7944:
    ctx->pc = 0x7F1B7944u;
    ctx->downcount -= 2;
    // 7F1B7944: or.   r31, r3, r3
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

label_7F1B7948:
    ctx->pc = 0x7F1B7948u;
    // 7F1B7948: bc    12, 2, 0x7F1B79B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B79B8;
        }
    }

label_7F1B794C:
    ctx->pc = 0x7F1B794Cu;
    ctx->downcount -= 5;
    // 7F1B794C: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B7950:
    ctx->pc = 0x7F1B7950u;
    // 7F1B7950: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B7954:
    ctx->pc = 0x7F1B7954u;
    // 7F1B7954: addi    r4, r4, 30492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30492);

label_7F1B7958:
    ctx->pc = 0x7F1B7958u;
    // 7F1B7958: addi    r5, r5, 30756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30756);

label_7F1B795C:
    ctx->pc = 0x7F1B795Cu;
    // 7F1B795C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B7960u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B7960:
    ctx->pc = 0x7F1B7960u;
    ctx->downcount -= 16;
    // 7F1B7960: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7964:
    ctx->pc = 0x7F1B7964u;
    // 7F1B7964: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B7968:
    ctx->pc = 0x7F1B7968u;
    // 7F1B7968: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B796C:
    ctx->pc = 0x7F1B796Cu;
    // 7F1B796C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7970:
    ctx->pc = 0x7F1B7970u;
    // 7F1B7970: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B7974:
    ctx->pc = 0x7F1B7974u;
    // 7F1B7974: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B7978:
    ctx->pc = 0x7F1B7978u;
    // 7F1B7978: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B797C:
    ctx->pc = 0x7F1B797Cu;
    // 7F1B797C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1B7980:
    ctx->pc = 0x7F1B7980u;
    // 7F1B7980: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B7984:
    ctx->pc = 0x7F1B7984u;
    // 7F1B7984: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B7988:
    ctx->pc = 0x7F1B7988u;
    // 7F1B7988: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B798C:
    ctx->pc = 0x7F1B798Cu;
    // 7F1B798C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B7990:
    ctx->pc = 0x7F1B7990u;
    // 7F1B7990: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B7994:
    ctx->pc = 0x7F1B7994u;
    // 7F1B7994: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B7998:
    ctx->pc = 0x7F1B7998u;
    // 7F1B7998: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B799C:
    ctx->pc = 0x7F1B799Cu;
    // 7F1B799C: bl      0x7F1B7864
    {
            ctx->lr = 0x7F1B79A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B7864u;
                return;
            }
            goto label_7F1B7864;
    }

label_7F1B79A0:
    ctx->pc = 0x7F1B79A0u;
    ctx->downcount -= 2;
    // 7F1B79A0: cmpwi   r3, 0
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

label_7F1B79A4:
    ctx->pc = 0x7F1B79A4u;
    // 7F1B79A4: bc    4, 0, 0x7F1B79B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B79B8;
        }
    }

label_7F1B79A8:
    ctx->pc = 0x7F1B79A8u;
    ctx->downcount -= 2;
    // 7F1B79A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B79AC:
    ctx->pc = 0x7F1B79ACu;
    // 7F1B79AC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B79B0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B79B0:
    ctx->pc = 0x7F1B79B0u;
    ctx->downcount -= 2;
    // 7F1B79B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B79B4:
    ctx->pc = 0x7F1B79B4u;
    // 7F1B79B4: b       0x7F1B79BC
    {
            goto label_7F1B79BC;
    }

label_7F1B79B8:
    ctx->pc = 0x7F1B79B8u;
    ctx->downcount -= 1;
    // 7F1B79B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B79BC:
    ctx->pc = 0x7F1B79BCu;
    ctx->downcount -= 16;
    // 7F1B79BC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B79C0:
    ctx->pc = 0x7F1B79C0u;
    // 7F1B79C0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B79C4:
    ctx->pc = 0x7F1B79C4u;
    // 7F1B79C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B79C8:
    ctx->pc = 0x7F1B79C8u;
    // 7F1B79C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B79CC:
    ctx->pc = 0x7F1B79CCu;
    // 7F1B79CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B79D0:
    ctx->pc = 0x7F1B79D0u;
    ctx->downcount -= 22;
    // 7F1B79D0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B79D4:
    ctx->pc = 0x7F1B79D4u;
    // 7F1B79D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B79D8:
    ctx->pc = 0x7F1B79D8u;
    // 7F1B79D8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B79DC:
    ctx->pc = 0x7F1B79DCu;
    // 7F1B79DC: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B79DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B79E0:
    ctx->pc = 0x7F1B79E0u;
    // 7F1B79E0: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B79E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B79E0u);
        if (ctx->exception) return;
    }

label_7F1B79E4:
    ctx->pc = 0x7F1B79E4u;
    // 7F1B79E4: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B79E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1B79E8:
    ctx->pc = 0x7F1B79E8u;
    // 7F1B79E8: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B79E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B79E8u);
        if (ctx->exception) return;
    }

label_7F1B79EC:
    ctx->pc = 0x7F1B79ECu;
    // 7F1B79EC: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B79ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1B79F0:
    ctx->pc = 0x7F1B79F0u;
    // 7F1B79F0: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B79F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B79F0u);
        if (ctx->exception) return;
    }

label_7F1B79F4:
    ctx->pc = 0x7F1B79F4u;
    // 7F1B79F4: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B79F8:
    ctx->pc = 0x7F1B79F8u;
    // 7F1B79F8: cmplwi  r3, 0x0000
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

label_7F1B79FC:
    ctx->pc = 0x7F1B79FCu;
    // 7F1B79FC: bc    12, 2, 0x7F1B7AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7AD0;
        }
    }

label_7F1B7A00:
    ctx->pc = 0x7F1B7A00u;
    ctx->downcount -= 4;
    // 7F1B7A00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B7A04:
    ctx->pc = 0x7F1B7A04u;
    // 7F1B7A04: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B7A08:
    ctx->pc = 0x7F1B7A08u;
    // 7F1B7A08: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B7A0C:
    ctx->pc = 0x7F1B7A0Cu;
    // 7F1B7A0C: bl      0x800462E4
    {
            ctx->lr = 0x7F1B7A10u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B7A10:
    ctx->pc = 0x7F1B7A10u;
    ctx->downcount -= 1;
    // 7F1B7A10: bl      0x7F2EA944
    {
            ctx->lr = 0x7F1B7A14u;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F1B7A14:
    ctx->pc = 0x7F1B7A14u;
    ctx->downcount -= 11;
    // 7F1B7A14: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1B7A18:
    ctx->pc = 0x7F1B7A18u;
    // 7F1B7A18: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B7A1C:
    ctx->pc = 0x7F1B7A1Cu;
    // 7F1B7A1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B7A20:
    ctx->pc = 0x7F1B7A20u;
    // 7F1B7A20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B7A24:
    ctx->pc = 0x7F1B7A24u;
    // 7F1B7A24: lfs     f29, 7452(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A24u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1B7A28:
    ctx->pc = 0x7F1B7A28u;
    // 7F1B7A28: addi    r30, r3, 7448
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(7448);

label_7F1B7A2C:
    ctx->pc = 0x7F1B7A2Cu;
    // 7F1B7A2C: lfd     f30, 7440(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7440);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7A30:
    ctx->pc = 0x7F1B7A30u;
    // 7F1B7A30: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1B7A34:
    ctx->pc = 0x7F1B7A34u;
    // 7F1B7A34: lfs     f31, 7456(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1B7A38:
    ctx->pc = 0x7F1B7A38u;
    // 7F1B7A38: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1B7A3C:
    ctx->pc = 0x7F1B7A3Cu;
    // 7F1B7A3C: lis     r29, 17200
    ctx->gpr[29] = ((u32)(s32)(17200) << 16);

label_7F1B7A40:
    ctx->downcount -= 28;
    // 7F1B7A40: xoris   r0, r28, 0x8000
    ctx->gpr[0] = ctx->gpr[28] ^ (0x8000u << 16);

label_7F1B7A44:
    ctx->pc = 0x7F1B7A44u;
    // 7F1B7A44: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7A48:
    ctx->pc = 0x7F1B7A48u;
    // 7F1B7A48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7A4C:
    // 7F1B7A4C: rlwinm r0, r28, 19, 0, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 19u) & 0xFFF80000u;
    }

label_7F1B7A50:
    // 7F1B7A50: srawi r3, r0, 9
    {
        u32 sh = 9u;
        u32 value = ctx->gpr[0];
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

label_7F1B7A54:
    // 7F1B7A54: addi    r7, r1, 12
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(12);

label_7F1B7A58:
    ctx->pc = 0x7F1B7A58u;
    // 7F1B7A58: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1B7A5C:
    // 7F1B7A5C: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1B7A60:
    // 7F1B7A60: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1B7A64:
    // 7F1B7A64: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F1B7A68:
    ctx->pc = 0x7F1B7A68u;
    // 7F1B7A68: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7A6C:
    // 7F1B7A6C: rlwinm r0, r0, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 13u) & 0xFFFFE000u;
    }

label_7F1B7A70:
    // 7F1B7A70: srawi r0, r0, 9
    {
        u32 sh = 9u;
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

label_7F1B7A74:
    ctx->pc = 0x7F1B7A74u;
    // 7F1B7A74: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7A78:
    ctx->pc = 0x7F1B7A78u;
    // 7F1B7A78: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A78u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F1B7A7C:
    // 7F1B7A7C: addze  r5, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1B7A80:
    // 7F1B7A80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7A84:
    ctx->pc = 0x7F1B7A84u;
    // 7F1B7A84: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A84u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F1B7A88:
    ctx->pc = 0x7F1B7A88u;
    // 7F1B7A88: fmuls   f0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A88u)) return;
    ppc_fmuls(ctx, 0, 29, 0);

label_7F1B7A8C:
    ctx->pc = 0x7F1B7A8Cu;
    // 7F1B7A8C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A8Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B7A90:
    ctx->pc = 0x7F1B7A90u;
    // 7F1B7A90: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B7A94:
    ctx->pc = 0x7F1B7A94u;
    // 7F1B7A94: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7A98:
    ctx->pc = 0x7F1B7A98u;
    // 7F1B7A98: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B7A9C:
    ctx->pc = 0x7F1B7A9Cu;
    // 7F1B7A9C: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B7AA0:
    ctx->pc = 0x7F1B7AA0u;
    // 7F1B7AA0: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1B7AA4:
    ctx->pc = 0x7F1B7AA4u;
    // 7F1B7AA4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7AA8:
    ctx->pc = 0x7F1B7AA8u;
    // 7F1B7AA8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7AAC:
    // 7F1B7AAC: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F1B7AB0u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F1B7AB0:
    ctx->downcount -= 4;
    // 7F1B7AB0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F1B7AB4:
    // 7F1B7AB4: addi    r31, r31, 64
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1B7AB8:
    // 7F1B7AB8: cmpwi   r28, 8
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B7ABC:
    // 7F1B7ABC: bc    12, 0, 0x7F1B7A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B7A40u;
                return;
            }
            goto label_7F1B7A40;
        }
    }

label_7F1B7AC0:
    ctx->pc = 0x7F1B7AC0u;
    ctx->downcount -= 4;
    // 7F1B7AC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B7AC4:
    ctx->pc = 0x7F1B7AC4u;
    // 7F1B7AC4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1B7AC8:
    ctx->pc = 0x7F1B7AC8u;
    // 7F1B7AC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B7ACC:
    ctx->pc = 0x7F1B7ACCu;
    // 7F1B7ACC: bl      0x800462E4
    {
            ctx->lr = 0x7F1B7AD0u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F1B7AD0:
    ctx->pc = 0x7F1B7AD0u;
    ctx->downcount -= 22;
    // 7F1B7AD0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B7AD0u);
        if (ctx->exception) return;
    }

label_7F1B7AD4:
    ctx->pc = 0x7F1B7AD4u;
    // 7F1B7AD4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7AD8:
    ctx->pc = 0x7F1B7AD8u;
    // 7F1B7AD8: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B7AD8u);
        if (ctx->exception) return;
    }

label_7F1B7ADC:
    ctx->pc = 0x7F1B7ADCu;
    // 7F1B7ADC: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7AE0:
    ctx->pc = 0x7F1B7AE0u;
    // 7F1B7AE0: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B7AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B7AE0u);
        if (ctx->exception) return;
    }

label_7F1B7AE4:
    ctx->pc = 0x7F1B7AE4u;
    // 7F1B7AE4: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B7AE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B7AE8:
    ctx->pc = 0x7F1B7AE8u;
    // 7F1B7AE8: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B7AEC:
    ctx->pc = 0x7F1B7AECu;
    // 7F1B7AEC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7AF0:
    ctx->pc = 0x7F1B7AF0u;
    // 7F1B7AF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7AF4:
    ctx->pc = 0x7F1B7AF4u;
    // 7F1B7AF4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1B7AF8:
    ctx->pc = 0x7F1B7AF8u;
    // 7F1B7AF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7AFC:
    ctx->pc = 0x7F1B7AFCu;
    ctx->downcount -= 18;
    // 7F1B7AFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7B00:
    ctx->pc = 0x7F1B7B00u;
    // 7F1B7B00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7B04:
    ctx->pc = 0x7F1B7B04u;
    // 7F1B7B04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7B08:
    ctx->pc = 0x7F1B7B08u;
    // 7F1B7B08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B7B0C:
    ctx->pc = 0x7F1B7B0Cu;
    // 7F1B7B0C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B7B10:
    ctx->pc = 0x7F1B7B10u;
    // 7F1B7B10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7B14:
    ctx->pc = 0x7F1B7B14u;
    // 7F1B7B14: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7B18:
    ctx->pc = 0x7F1B7B18u;
    // 7F1B7B18: bl      0x7F3C9624
    {
            ctx->lr = 0x7F1B7B1Cu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F1B7B1C:
    ctx->pc = 0x7F1B7B1Cu;
    ctx->downcount -= 2;
    // 7F1B7B1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7B20:
    ctx->pc = 0x7F1B7B20u;
    // 7F1B7B20: b       0x7F1B7B50
    {
            goto label_7F1B7B50;
    }

label_7F1B7B24:
    ctx->pc = 0x7F1B7B24u;
    ctx->downcount -= 5;
    // 7F1B7B24: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7B28:
    ctx->pc = 0x7F1B7B28u;
    // 7F1B7B28: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7B2C:
    ctx->pc = 0x7F1B7B2Cu;
    // 7F1B7B2C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7B30:
    // 7F1B7B30: cmpwi   r0, 0
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

label_7F1B7B34:
    // 7F1B7B34: bc    12, 2, 0x7F1B7B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7B3C;
        }
    }

label_7F1B7B38:
    ctx->downcount -= 1;
    // 7F1B7B38: b       0x7F1B7B44
    {
            goto label_7F1B7B44;
    }

label_7F1B7B3C:
    ctx->downcount -= 2;
    // 7F1B7B3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B7B40:
    // 7F1B7B40: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B7B44u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B7B44:
    ctx->pc = 0x7F1B7B44u;
    ctx->downcount -= 3;
    // 7F1B7B44: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7B48:
    // 7F1B7B48: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F1B7B4C:
    ctx->pc = 0x7F1B7B4Cu;
    // 7F1B7B4C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7B50:
    ctx->downcount -= 2;
    // 7F1B7B50: addic.  r31, r31, -1
    {
        u64 a = ctx->gpr[31];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B7B54:
    // 7F1B7B54: bc    4, 0, 0x7F1B7B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B7B24u;
                return;
            }
            goto label_7F1B7B24;
        }
    }

label_7F1B7B58:
    ctx->pc = 0x7F1B7B58u;
    ctx->downcount -= 16;
    // 7F1B7B58: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B7B5C:
    ctx->pc = 0x7F1B7B5Cu;
    // 7F1B7B5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7B60:
    ctx->pc = 0x7F1B7B60u;
    // 7F1B7B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7B64:
    ctx->pc = 0x7F1B7B64u;
    // 7F1B7B64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B7B68:
    ctx->pc = 0x7F1B7B68u;
    // 7F1B7B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7B6C:
    ctx->pc = 0x7F1B7B6Cu;
    ctx->downcount -= 4;
    // 7F1B7B6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7B70:
    ctx->pc = 0x7F1B7B70u;
    // 7F1B7B70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7B74:
    ctx->pc = 0x7F1B7B74u;
    // 7F1B7B74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7B78:
    ctx->pc = 0x7F1B7B78u;
    // 7F1B7B78: bl      0x7F1B7AFC
    {
            ctx->lr = 0x7F1B7B7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B7AFCu;
                return;
            }
            goto label_7F1B7AFC;
    }

label_7F1B7B7C:
    ctx->pc = 0x7F1B7B7Cu;
    ctx->downcount -= 5;
    // 7F1B7B7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7B80:
    ctx->pc = 0x7F1B7B80u;
    // 7F1B7B80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7B84:
    ctx->pc = 0x7F1B7B84u;
    // 7F1B7B84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7B88:
    ctx->pc = 0x7F1B7B88u;
    // 7F1B7B88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7B8C:
    ctx->pc = 0x7F1B7B8Cu;
    ctx->downcount -= 8;
    // 7F1B7B8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7B90:
    ctx->pc = 0x7F1B7B90u;
    // 7F1B7B90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7B94:
    ctx->pc = 0x7F1B7B94u;
    // 7F1B7B94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7B98:
    ctx->pc = 0x7F1B7B98u;
    // 7F1B7B98: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7B9C:
    ctx->pc = 0x7F1B7B9Cu;
    // 7F1B7B9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7BA0:
    ctx->pc = 0x7F1B7BA0u;
    // 7F1B7BA0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7BA4:
    ctx->pc = 0x7F1B7BA4u;
    // 7F1B7BA4: cmplwi  r3, 0x0000
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

label_7F1B7BA8:
    ctx->pc = 0x7F1B7BA8u;
    // 7F1B7BA8: bc    12, 2, 0x7F1B7BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7BB8;
        }
    }

label_7F1B7BAC:
    ctx->pc = 0x7F1B7BACu;
    ctx->downcount -= 1;
    // 7F1B7BAC: bl      0x7F3BA300
    {
            ctx->lr = 0x7F1B7BB0u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F1B7BB0:
    ctx->pc = 0x7F1B7BB0u;
    ctx->downcount -= 2;
    // 7F1B7BB0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7BB4:
    ctx->pc = 0x7F1B7BB4u;
    // 7F1B7BB4: bl      0x7F3BA234
    {
            ctx->lr = 0x7F1B7BB8u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F1B7BB8:
    ctx->pc = 0x7F1B7BB8u;
    ctx->downcount -= 6;
    // 7F1B7BB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7BBC:
    ctx->pc = 0x7F1B7BBCu;
    // 7F1B7BBC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7BC0:
    ctx->pc = 0x7F1B7BC0u;
    // 7F1B7BC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7BC4:
    ctx->pc = 0x7F1B7BC4u;
    // 7F1B7BC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7BC8:
    ctx->pc = 0x7F1B7BC8u;
    // 7F1B7BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7BCC:
    ctx->pc = 0x7F1B7BCCu;
    ctx->downcount -= 5;
    // 7F1B7BCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7BD0:
    ctx->pc = 0x7F1B7BD0u;
    // 7F1B7BD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7BD4:
    ctx->pc = 0x7F1B7BD4u;
    // 7F1B7BD4: cmpwi   r4, 1
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

label_7F1B7BD8:
    ctx->pc = 0x7F1B7BD8u;
    // 7F1B7BD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7BDC:
    ctx->pc = 0x7F1B7BDCu;
    // 7F1B7BDC: bc    12, 2, 0x7F1B7C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7C10;
        }
    }

label_7F1B7BE0:
    ctx->pc = 0x7F1B7BE0u;
    ctx->downcount -= 1;
    // 7F1B7BE0: bc    4, 0, 0x7F1B7C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7C30;
        }
    }

label_7F1B7BE4:
    ctx->pc = 0x7F1B7BE4u;
    ctx->downcount -= 2;
    // 7F1B7BE4: cmpwi   r4, 0
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

label_7F1B7BE8:
    ctx->pc = 0x7F1B7BE8u;
    // 7F1B7BE8: bc    4, 0, 0x7F1B7BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7BF0;
        }
    }

label_7F1B7BEC:
    ctx->pc = 0x7F1B7BECu;
    ctx->downcount -= 1;
    // 7F1B7BEC: b       0x7F1B7C30
    {
            goto label_7F1B7C30;
    }

label_7F1B7BF0:
    ctx->pc = 0x7F1B7BF0u;
    ctx->downcount -= 8;
    // 7F1B7BF0: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7BF4:
    ctx->pc = 0x7F1B7BF4u;
    // 7F1B7BF4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7BF8:
    ctx->pc = 0x7F1B7BF8u;
    // 7F1B7BF8: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F1B7BFC:
    ctx->pc = 0x7F1B7BFCu;
    // 7F1B7BFC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C00:
    ctx->pc = 0x7F1B7C00u;
    // 7F1B7C00: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7C04:
    ctx->pc = 0x7F1B7C04u;
    // 7F1B7C04: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F1B7C08:
    ctx->pc = 0x7F1B7C08u;
    // 7F1B7C08: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C0C:
    ctx->pc = 0x7F1B7C0Cu;
    // 7F1B7C0C: b       0x7F1B7C38
    {
            goto label_7F1B7C38;
    }

label_7F1B7C10:
    ctx->pc = 0x7F1B7C10u;
    ctx->downcount -= 8;
    // 7F1B7C10: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B7C14:
    ctx->pc = 0x7F1B7C14u;
    // 7F1B7C14: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7C18:
    ctx->pc = 0x7F1B7C18u;
    // 7F1B7C18: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1B7C1C:
    ctx->pc = 0x7F1B7C1Cu;
    // 7F1B7C1C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C20:
    ctx->pc = 0x7F1B7C20u;
    // 7F1B7C20: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7C24:
    ctx->pc = 0x7F1B7C24u;
    // 7F1B7C24: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F1B7C28:
    ctx->pc = 0x7F1B7C28u;
    // 7F1B7C28: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C2C:
    ctx->pc = 0x7F1B7C2Cu;
    // 7F1B7C2C: b       0x7F1B7C38
    {
            goto label_7F1B7C38;
    }

label_7F1B7C30:
    ctx->pc = 0x7F1B7C30u;
    ctx->downcount -= 1;
    // 7F1B7C30: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B7C34u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B7C34:
    ctx->pc = 0x7F1B7C34u;
    ctx->downcount -= 1;
    // 7F1B7C34: b       0x7F1B7C3C
    {
            goto label_7F1B7C3C;
    }

label_7F1B7C38:
    ctx->pc = 0x7F1B7C38u;
    ctx->downcount -= 1;
    // 7F1B7C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7C3C:
    ctx->pc = 0x7F1B7C3Cu;
    ctx->downcount -= 5;
    // 7F1B7C3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7C40:
    ctx->pc = 0x7F1B7C40u;
    // 7F1B7C40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7C44:
    ctx->pc = 0x7F1B7C44u;
    // 7F1B7C44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7C48:
    ctx->pc = 0x7F1B7C48u;
    // 7F1B7C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7C4C:
    ctx->pc = 0x7F1B7C4Cu;
    ctx->downcount -= 9;
    // 7F1B7C4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7C50:
    ctx->pc = 0x7F1B7C50u;
    // 7F1B7C50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7C54:
    ctx->pc = 0x7F1B7C54u;
    // 7F1B7C54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C58:
    ctx->pc = 0x7F1B7C58u;
    // 7F1B7C58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B7C5C:
    ctx->pc = 0x7F1B7C5Cu;
    // 7F1B7C5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7C60:
    ctx->pc = 0x7F1B7C60u;
    // 7F1B7C60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7C64:
    ctx->pc = 0x7F1B7C64u;
    // 7F1B7C64: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7C68:
    ctx->pc = 0x7F1B7C68u;
    // 7F1B7C68: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B7C6C:
    ctx->pc = 0x7F1B7C6Cu;
    // 7F1B7C6C: bl      0x7F234510
    {
            ctx->lr = 0x7F1B7C70u;
            ctx->pc = 0x7F234510u;
            return;
    }

label_7F1B7C70:
    ctx->pc = 0x7F1B7C70u;
    ctx->downcount -= 4;
    // 7F1B7C70: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7C74:
    ctx->pc = 0x7F1B7C74u;
    // 7F1B7C74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B7C78:
    ctx->pc = 0x7F1B7C78u;
    // 7F1B7C78: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F1B7C7C:
    ctx->pc = 0x7F1B7C7Cu;
    // 7F1B7C7C: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F1B7C80u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F1B7C80:
    ctx->pc = 0x7F1B7C80u;
    ctx->downcount -= 4;
    // 7F1B7C80: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7C84:
    ctx->pc = 0x7F1B7C84u;
    // 7F1B7C84: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7C88:
    ctx->pc = 0x7F1B7C88u;
    // 7F1B7C88: cmplwi  r3, 0x0000
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

label_7F1B7C8C:
    ctx->pc = 0x7F1B7C8Cu;
    // 7F1B7C8C: bc    4, 2, 0x7F1B7C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7C98;
        }
    }

label_7F1B7C90:
    ctx->pc = 0x7F1B7C90u;
    ctx->downcount -= 2;
    // 7F1B7C90: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B7C94:
    ctx->pc = 0x7F1B7C94u;
    // 7F1B7C94: b       0x7F1B7CB4
    {
            goto label_7F1B7CB4;
    }

label_7F1B7C98:
    ctx->pc = 0x7F1B7C98u;
    ctx->downcount -= 1;
    // 7F1B7C98: bl      0x7F3BA260
    {
            ctx->lr = 0x7F1B7C9Cu;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F1B7C9C:
    ctx->pc = 0x7F1B7C9Cu;
    ctx->downcount -= 5;
    // 7F1B7C9C: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B7CA0:
    ctx->pc = 0x7F1B7CA0u;
    // 7F1B7CA0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7CA4:
    ctx->pc = 0x7F1B7CA4u;
    // 7F1B7CA4: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_7F1B7CA8:
    ctx->pc = 0x7F1B7CA8u;
    // 7F1B7CA8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7CAC:
    ctx->pc = 0x7F1B7CACu;
    // 7F1B7CAC: bl      0x7F3BA254
    {
            ctx->lr = 0x7F1B7CB0u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F1B7CB0:
    ctx->pc = 0x7F1B7CB0u;
    ctx->downcount -= 1;
    // 7F1B7CB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7CB4:
    ctx->pc = 0x7F1B7CB4u;
    ctx->downcount -= 6;
    // 7F1B7CB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7CB8:
    ctx->pc = 0x7F1B7CB8u;
    // 7F1B7CB8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7CBC:
    ctx->pc = 0x7F1B7CBCu;
    // 7F1B7CBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7CC0:
    ctx->pc = 0x7F1B7CC0u;
    // 7F1B7CC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7CC4:
    ctx->pc = 0x7F1B7CC4u;
    // 7F1B7CC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7CC8:
    ctx->pc = 0x7F1B7CC8u;
    ctx->downcount -= 21;
    // 7F1B7CC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7CCC:
    ctx->pc = 0x7F1B7CCCu;
    // 7F1B7CCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7CD0:
    ctx->pc = 0x7F1B7CD0u;
    // 7F1B7CD0: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F1B7CD4:
    ctx->pc = 0x7F1B7CD4u;
    // 7F1B7CD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B7CD8:
    ctx->pc = 0x7F1B7CD8u;
    // 7F1B7CD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7CDC:
    ctx->pc = 0x7F1B7CDCu;
    // 7F1B7CDC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B7CE0:
    ctx->pc = 0x7F1B7CE0u;
    // 7F1B7CE0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7CE4:
    ctx->pc = 0x7F1B7CE4u;
    // 7F1B7CE4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B7CE8:
    ctx->pc = 0x7F1B7CE8u;
    // 7F1B7CE8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1B7CEC:
    ctx->pc = 0x7F1B7CECu;
    // 7F1B7CEC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B7CF0:
    ctx->pc = 0x7F1B7CF0u;
    // 7F1B7CF0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B7CF4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B7CF4:
    ctx->pc = 0x7F1B7CF4u;
    ctx->downcount -= 2;
    // 7F1B7CF4: or.   r31, r3, r3
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

label_7F1B7CF8:
    ctx->pc = 0x7F1B7CF8u;
    // 7F1B7CF8: bc    12, 2, 0x7F1B7D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7D70;
        }
    }

label_7F1B7CFC:
    ctx->pc = 0x7F1B7CFCu;
    ctx->downcount -= 5;
    // 7F1B7CFC: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B7D00:
    ctx->pc = 0x7F1B7D00u;
    // 7F1B7D00: lis     r5, 32539
    ctx->gpr[5] = ((u32)(s32)(32539) << 16);

label_7F1B7D04:
    ctx->pc = 0x7F1B7D04u;
    // 7F1B7D04: addi    r4, r4, 31596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31596);

label_7F1B7D08:
    ctx->pc = 0x7F1B7D08u;
    // 7F1B7D08: addi    r5, r5, 31628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31628);

label_7F1B7D0C:
    ctx->pc = 0x7F1B7D0Cu;
    // 7F1B7D0C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B7D10u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B7D10:
    ctx->pc = 0x7F1B7D10u;
    ctx->downcount -= 14;
    // 7F1B7D10: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7D14:
    ctx->pc = 0x7F1B7D14u;
    // 7F1B7D14: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B7D18:
    ctx->pc = 0x7F1B7D18u;
    // 7F1B7D18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B7D1C:
    ctx->pc = 0x7F1B7D1Cu;
    // 7F1B7D1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7D20:
    ctx->pc = 0x7F1B7D20u;
    // 7F1B7D20: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1B7D24:
    ctx->pc = 0x7F1B7D24u;
    // 7F1B7D24: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B7D28:
    ctx->pc = 0x7F1B7D28u;
    // 7F1B7D28: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B7D2C:
    ctx->pc = 0x7F1B7D2Cu;
    // 7F1B7D2C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B7D30:
    ctx->pc = 0x7F1B7D30u;
    // 7F1B7D30: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B7D34:
    ctx->pc = 0x7F1B7D34u;
    // 7F1B7D34: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B7D38:
    ctx->pc = 0x7F1B7D38u;
    // 7F1B7D38: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B7D3C:
    ctx->pc = 0x7F1B7D3Cu;
    // 7F1B7D3C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7D40:
    ctx->pc = 0x7F1B7D40u;
    // 7F1B7D40: stw     r29, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1B7D44:
    ctx->pc = 0x7F1B7D44u;
    // 7F1B7D44: bl      0x7F1B7C4C
    {
            ctx->lr = 0x7F1B7D48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B7C4Cu;
                return;
            }
            goto label_7F1B7C4C;
    }

label_7F1B7D48:
    ctx->pc = 0x7F1B7D48u;
    ctx->downcount -= 2;
    // 7F1B7D48: cmpwi   r3, 0
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

label_7F1B7D4C:
    ctx->pc = 0x7F1B7D4Cu;
    // 7F1B7D4C: bc    4, 0, 0x7F1B7D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7D60;
        }
    }

label_7F1B7D50:
    ctx->pc = 0x7F1B7D50u;
    ctx->downcount -= 2;
    // 7F1B7D50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7D54:
    ctx->pc = 0x7F1B7D54u;
    // 7F1B7D54: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B7D58u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B7D58:
    ctx->pc = 0x7F1B7D58u;
    ctx->downcount -= 2;
    // 7F1B7D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7D5C:
    ctx->pc = 0x7F1B7D5Cu;
    // 7F1B7D5C: b       0x7F1B7D74
    {
            goto label_7F1B7D74;
    }

label_7F1B7D60:
    ctx->pc = 0x7F1B7D60u;
    ctx->downcount -= 4;
    // 7F1B7D60: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B7D64:
    ctx->pc = 0x7F1B7D64u;
    // 7F1B7D64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7D68:
    ctx->pc = 0x7F1B7D68u;
    // 7F1B7D68: addi    r4, r4, 31692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31692);

label_7F1B7D6C:
    ctx->pc = 0x7F1B7D6Cu;
    // 7F1B7D6C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B7D70u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B7D70:
    ctx->pc = 0x7F1B7D70u;
    ctx->downcount -= 1;
    // 7F1B7D70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7D74:
    ctx->pc = 0x7F1B7D74u;
    ctx->downcount -= 16;
    // 7F1B7D74: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B7D78:
    ctx->pc = 0x7F1B7D78u;
    // 7F1B7D78: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7D7C:
    ctx->pc = 0x7F1B7D7Cu;
    // 7F1B7D7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7D80:
    ctx->pc = 0x7F1B7D80u;
    // 7F1B7D80: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B7D84:
    ctx->pc = 0x7F1B7D84u;
    // 7F1B7D84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7D88:
    ctx->pc = 0x7F1B7D88u;
    ctx->downcount -= 7;
    // 7F1B7D88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7D8C:
    ctx->pc = 0x7F1B7D8Cu;
    // 7F1B7D8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7D90:
    ctx->pc = 0x7F1B7D90u;
    // 7F1B7D90: cmplwi  r4, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B7D94:
    ctx->pc = 0x7F1B7D94u;
    // 7F1B7D94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7D98:
    ctx->pc = 0x7F1B7D98u;
    // 7F1B7D98: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7D9C:
    ctx->pc = 0x7F1B7D9Cu;
    // 7F1B7D9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7DA0:
    ctx->pc = 0x7F1B7DA0u;
    // 7F1B7DA0: bc    12, 1, 0x7F1B7EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7EC0;
        }
    }

label_7F1B7DA4:
    ctx->pc = 0x7F1B7DA4u;
    ctx->downcount -= 7;
    // 7F1B7DA4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B7DA8:
    ctx->pc = 0x7F1B7DA8u;
    // 7F1B7DA8: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F1B7DAC:
    ctx->pc = 0x7F1B7DACu;
    // 7F1B7DAC: addi    r3, r3, -6512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6512);

label_7F1B7DB0:
    ctx->pc = 0x7F1B7DB0u;
    // 7F1B7DB0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7DB4:
    ctx->pc = 0x7F1B7DB4u;
    // 7F1B7DB4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B7DB8:
    ctx->pc = 0x7F1B7DB8u;
    // 7F1B7DB8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F1B7DBC:
    ctx->pc = 0x7F1B7DBCu;
    ctx->downcount -= 7;
    // 7F1B7DBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B7DC0:
    ctx->pc = 0x7F1B7DC0u;
    // 7F1B7DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B7DC4:
    ctx->pc = 0x7F1B7DC4u;
    // 7F1B7DC4: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7DC8:
    ctx->pc = 0x7F1B7DC8u;
    // 7F1B7DC8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7DCC:
    ctx->pc = 0x7F1B7DCCu;
    // 7F1B7DCC: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7DD0:
    ctx->pc = 0x7F1B7DD0u;
    // 7F1B7DD0: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7DD4:
    ctx->pc = 0x7F1B7DD4u;
    // 7F1B7DD4: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7DD8:
    ctx->pc = 0x7F1B7DD8u;
    ctx->downcount -= 7;
    // 7F1B7DD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7DDC:
    ctx->pc = 0x7F1B7DDCu;
    // 7F1B7DDC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B7DE0:
    ctx->pc = 0x7F1B7DE0u;
    // 7F1B7DE0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7DE4:
    ctx->pc = 0x7F1B7DE4u;
    // 7F1B7DE4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7DE8:
    ctx->pc = 0x7F1B7DE8u;
    // 7F1B7DE8: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7DEC:
    ctx->pc = 0x7F1B7DECu;
    // 7F1B7DEC: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7DF0:
    ctx->pc = 0x7F1B7DF0u;
    // 7F1B7DF0: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7DF4:
    ctx->pc = 0x7F1B7DF4u;
    ctx->downcount -= 7;
    // 7F1B7DF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7DF8:
    ctx->pc = 0x7F1B7DF8u;
    // 7F1B7DF8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B7DFC:
    ctx->pc = 0x7F1B7DFCu;
    // 7F1B7DFC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E00:
    ctx->pc = 0x7F1B7E00u;
    // 7F1B7E00: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E04:
    ctx->pc = 0x7F1B7E04u;
    // 7F1B7E04: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E08:
    ctx->pc = 0x7F1B7E08u;
    // 7F1B7E08: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E0C:
    ctx->pc = 0x7F1B7E0Cu;
    // 7F1B7E0C: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7E10:
    ctx->pc = 0x7F1B7E10u;
    ctx->downcount -= 7;
    // 7F1B7E10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7E14:
    ctx->pc = 0x7F1B7E14u;
    // 7F1B7E14: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B7E18:
    ctx->pc = 0x7F1B7E18u;
    // 7F1B7E18: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E1C:
    ctx->pc = 0x7F1B7E1Cu;
    // 7F1B7E1C: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E20:
    ctx->pc = 0x7F1B7E20u;
    // 7F1B7E20: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E24:
    ctx->pc = 0x7F1B7E24u;
    // 7F1B7E24: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E28:
    ctx->pc = 0x7F1B7E28u;
    // 7F1B7E28: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7E2C:
    ctx->pc = 0x7F1B7E2Cu;
    ctx->downcount -= 1;
    // 7F1B7E2C: bl      0x80024A8C
    {
            ctx->lr = 0x7F1B7E30u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F1B7E30:
    ctx->pc = 0x7F1B7E30u;
    ctx->downcount -= 2;
    // 7F1B7E30: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_7F1B7E34:
    ctx->pc = 0x7F1B7E34u;
    // 7F1B7E34: bl      0x80024CAC
    {
            ctx->lr = 0x7F1B7E38u;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F1B7E38:
    ctx->pc = 0x7F1B7E38u;
    ctx->downcount -= 5;
    // 7F1B7E38: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7E3C:
    ctx->pc = 0x7F1B7E3Cu;
    // 7F1B7E3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B7E40:
    ctx->pc = 0x7F1B7E40u;
    // 7F1B7E40: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7E44:
    ctx->pc = 0x7F1B7E44u;
    // 7F1B7E44: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E48:
    ctx->pc = 0x7F1B7E48u;
    // 7F1B7E48: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7E4C:
    ctx->pc = 0x7F1B7E4Cu;
    ctx->downcount -= 3;
    // 7F1B7E4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B7E50:
    ctx->pc = 0x7F1B7E50u;
    // 7F1B7E50: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E54:
    ctx->pc = 0x7F1B7E54u;
    // 7F1B7E54: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7E58:
    ctx->pc = 0x7F1B7E58u;
    ctx->downcount -= 1;
    // 7F1B7E58: bl      0x80024A8C
    {
            ctx->lr = 0x7F1B7E5Cu;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F1B7E5C:
    ctx->pc = 0x7F1B7E5Cu;
    ctx->downcount -= 2;
    // 7F1B7E5C: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_7F1B7E60:
    ctx->pc = 0x7F1B7E60u;
    // 7F1B7E60: bl      0x80024CAC
    {
            ctx->lr = 0x7F1B7E64u;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F1B7E64:
    ctx->pc = 0x7F1B7E64u;
    ctx->downcount -= 23;
    // 7F1B7E64: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B7E68:
    ctx->pc = 0x7F1B7E68u;
    // 7F1B7E68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B7E6C:
    ctx->pc = 0x7F1B7E6Cu;
    // 7F1B7E6C: addi    r3, r3, -6552
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6552);

label_7F1B7E70:
    ctx->pc = 0x7F1B7E70u;
    // 7F1B7E70: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E74:
    ctx->pc = 0x7F1B7E74u;
    // 7F1B7E74: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E78:
    ctx->pc = 0x7F1B7E78u;
    // 7F1B7E78: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E7C:
    ctx->pc = 0x7F1B7E7Cu;
    // 7F1B7E7C: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E80:
    ctx->pc = 0x7F1B7E80u;
    // 7F1B7E80: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E84:
    ctx->pc = 0x7F1B7E84u;
    // 7F1B7E84: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7E88:
    ctx->pc = 0x7F1B7E88u;
    // 7F1B7E88: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E8C:
    ctx->pc = 0x7F1B7E8Cu;
    // 7F1B7E8C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7E90:
    ctx->pc = 0x7F1B7E90u;
    // 7F1B7E90: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E94:
    ctx->pc = 0x7F1B7E94u;
    // 7F1B7E94: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7E98:
    ctx->pc = 0x7F1B7E98u;
    // 7F1B7E98: stw     r0, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7E9C:
    ctx->pc = 0x7F1B7E9Cu;
    // 7F1B7E9C: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7EA0:
    ctx->pc = 0x7F1B7EA0u;
    // 7F1B7EA0: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7EA4:
    ctx->pc = 0x7F1B7EA4u;
    // 7F1B7EA4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7EA8:
    ctx->pc = 0x7F1B7EA8u;
    // 7F1B7EA8: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7EAC:
    ctx->pc = 0x7F1B7EACu;
    // 7F1B7EAC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7EB0:
    ctx->pc = 0x7F1B7EB0u;
    // 7F1B7EB0: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7EB4:
    ctx->pc = 0x7F1B7EB4u;
    // 7F1B7EB4: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7EB8:
    ctx->pc = 0x7F1B7EB8u;
    // 7F1B7EB8: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7EBC:
    ctx->pc = 0x7F1B7EBCu;
    // 7F1B7EBC: b       0x7F1B7ECC
    {
            goto label_7F1B7ECC;
    }

label_7F1B7EC0:
    ctx->pc = 0x7F1B7EC0u;
    ctx->downcount -= 2;
    // 7F1B7EC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B7EC4:
    ctx->pc = 0x7F1B7EC4u;
    // 7F1B7EC4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B7EC8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B7EC8:
    ctx->pc = 0x7F1B7EC8u;
    ctx->downcount -= 1;
    // 7F1B7EC8: b       0x7F1B7ED0
    {
            goto label_7F1B7ED0;
    }

label_7F1B7ECC:
    ctx->pc = 0x7F1B7ECCu;
    ctx->downcount -= 1;
    // 7F1B7ECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B7ED0:
    ctx->pc = 0x7F1B7ED0u;
    ctx->downcount -= 6;
    // 7F1B7ED0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7ED4:
    ctx->pc = 0x7F1B7ED4u;
    // 7F1B7ED4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B7ED8:
    ctx->pc = 0x7F1B7ED8u;
    // 7F1B7ED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B7EDC:
    ctx->pc = 0x7F1B7EDCu;
    // 7F1B7EDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B7EE0:
    ctx->pc = 0x7F1B7EE0u;
    // 7F1B7EE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B7EE4:
    ctx->pc = 0x7F1B7EE4u;
    ctx->downcount -= 8;
    // 7F1B7EE4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B7EE8:
    ctx->pc = 0x7F1B7EE8u;
    // 7F1B7EE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B7EEC:
    ctx->pc = 0x7F1B7EECu;
    // 7F1B7EEC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7EF0:
    ctx->pc = 0x7F1B7EF0u;
    // 7F1B7EF0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B7EF4:
    ctx->pc = 0x7F1B7EF4u;
    // 7F1B7EF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B7EF8:
    ctx->pc = 0x7F1B7EF8u;
    // 7F1B7EF8: lwz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7EFC:
    ctx->pc = 0x7F1B7EFCu;
    // 7F1B7EFC: cmpwi   r0, 0
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

label_7F1B7F00:
    ctx->pc = 0x7F1B7F00u;
    // 7F1B7F00: bc    12, 2, 0x7F1B7FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7FA4;
        }
    }

label_7F1B7F04:
    ctx->pc = 0x7F1B7F04u;
    ctx->downcount -= 1;
    // 7F1B7F04: bl      0x80024A8C
    {
            ctx->lr = 0x7F1B7F08u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F1B7F08:
    ctx->pc = 0x7F1B7F08u;
    ctx->downcount -= 2;
    // 7F1B7F08: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F1B7F0C:
    ctx->pc = 0x7F1B7F0Cu;
    // 7F1B7F0C: bl      0x80024CAC
    {
            ctx->lr = 0x7F1B7F10u;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F1B7F10:
    ctx->pc = 0x7F1B7F10u;
    ctx->downcount -= 6;
    // 7F1B7F10: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F14:
    ctx->pc = 0x7F1B7F14u;
    // 7F1B7F14: stw     r0, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F18:
    ctx->pc = 0x7F1B7F18u;
    // 7F1B7F18: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F1C:
    ctx->pc = 0x7F1B7F1Cu;
    // 7F1B7F1C: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7F20:
    ctx->pc = 0x7F1B7F20u;
    // 7F1B7F20: cmpw    r0, r3
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

label_7F1B7F24:
    ctx->pc = 0x7F1B7F24u;
    // 7F1B7F24: bc    12, 2, 0x7F1B7F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7F84;
        }
    }

label_7F1B7F28:
    ctx->pc = 0x7F1B7F28u;
    ctx->downcount -= 7;
    // 7F1B7F28: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B7F2C:
    ctx->pc = 0x7F1B7F2Cu;
    // 7F1B7F2C: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7F30:
    ctx->pc = 0x7F1B7F30u;
    // 7F1B7F30: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B7F34:
    ctx->pc = 0x7F1B7F34u;
    // 7F1B7F34: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F38:
    ctx->pc = 0x7F1B7F38u;
    // 7F1B7F38: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F3C:
    ctx->pc = 0x7F1B7F3Cu;
    // 7F1B7F3C: cmpwi   r0, 60
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

label_7F1B7F40:
    ctx->pc = 0x7F1B7F40u;
    // 7F1B7F40: bc    12, 0, 0x7F1B7F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7F84;
        }
    }

label_7F1B7F44:
    ctx->pc = 0x7F1B7F44u;
    ctx->downcount -= 8;
    // 7F1B7F44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B7F48:
    ctx->pc = 0x7F1B7F48u;
    // 7F1B7F48: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7F4C:
    ctx->pc = 0x7F1B7F4Cu;
    // 7F1B7F4C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7F50:
    ctx->pc = 0x7F1B7F50u;
    // 7F1B7F50: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B7F54:
    ctx->pc = 0x7F1B7F54u;
    // 7F1B7F54: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F58:
    ctx->pc = 0x7F1B7F58u;
    // 7F1B7F58: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F5C:
    ctx->pc = 0x7F1B7F5Cu;
    // 7F1B7F5C: cmpwi   r0, 60
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

label_7F1B7F60:
    ctx->pc = 0x7F1B7F60u;
    // 7F1B7F60: bc    12, 0, 0x7F1B7F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7F84;
        }
    }

label_7F1B7F64:
    ctx->pc = 0x7F1B7F64u;
    ctx->downcount -= 7;
    // 7F1B7F64: stw     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7F68:
    ctx->pc = 0x7F1B7F68u;
    // 7F1B7F68: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7F6C:
    ctx->pc = 0x7F1B7F6Cu;
    // 7F1B7F6C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B7F70:
    ctx->pc = 0x7F1B7F70u;
    // 7F1B7F70: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F74:
    ctx->pc = 0x7F1B7F74u;
    // 7F1B7F74: lwz     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F78:
    ctx->pc = 0x7F1B7F78u;
    // 7F1B7F78: cmpwi   r0, 60
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

label_7F1B7F7C:
    ctx->pc = 0x7F1B7F7Cu;
    // 7F1B7F7C: bc    12, 0, 0x7F1B7F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B7F84;
        }
    }

label_7F1B7F80:
    ctx->pc = 0x7F1B7F80u;
    ctx->downcount -= 1;
    // 7F1B7F80: stw     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B7F84:
    ctx->pc = 0x7F1B7F84u;
    ctx->downcount -= 8;
    // 7F1B7F84: lwz     r0, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F88:
    ctx->pc = 0x7F1B7F88u;
    // 7F1B7F88: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F8C:
    ctx->pc = 0x7F1B7F8Cu;
    // 7F1B7F8C: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F90:
    ctx->pc = 0x7F1B7F90u;
    // 7F1B7F90: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F94:
    ctx->pc = 0x7F1B7F94u;
    // 7F1B7F94: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7F98:
    ctx->pc = 0x7F1B7F98u;
    // 7F1B7F98: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7F9C:
    ctx->pc = 0x7F1B7F9Cu;
    // 7F1B7F9C: lwz     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B7FA0:
    ctx->pc = 0x7F1B7FA0u;
    // 7F1B7FA0: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B7FA4:
    ctx->pc = 0x7F1B7FA4u;
    ctx->downcount -= 50;
    // 7F1B7FA4: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7FA8:
    ctx->pc = 0x7F1B7FA8u;
    // 7F1B7FA8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F1B7FAC:
    ctx->pc = 0x7F1B7FACu;
    // 7F1B7FAC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B7FB0:
    ctx->pc = 0x7F1B7FB0u;
    // 7F1B7FB0: lwz     r5, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B7FB4:
    ctx->pc = 0x7F1B7FB4u;
    // 7F1B7FB4: divw   r8, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1B7FB8:
    ctx->pc = 0x7F1B7FB8u;
    // 7F1B7FB8: lwz     r6, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B7FBC:
    ctx->pc = 0x7F1B7FBCu;
    // 7F1B7FBC: lwz     r7, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B7FC0:
    ctx->pc = 0x7F1B7FC0u;
    // 7F1B7FC0: addi    r4, r4, -6476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6476);

label_7F1B7FC4:
    ctx->pc = 0x7F1B7FC4u;
    // 7F1B7FC4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B7FC8:
    ctx->pc = 0x7F1B7FC8u;
    // 7F1B7FC8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B7FCC:
    ctx->pc = 0x7F1B7FCCu;
    // 7F1B7FCC: bl      0x8001258C
    {
            ctx->lr = 0x7F1B7FD0u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B7FD0:
    ctx->pc = 0x7F1B7FD0u;
    ctx->downcount -= 6;
    // 7F1B7FD0: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7FD4:
    ctx->pc = 0x7F1B7FD4u;
    // 7F1B7FD4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B7FD8:
    ctx->pc = 0x7F1B7FD8u;
    // 7F1B7FD8: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B7FDC:
    ctx->pc = 0x7F1B7FDCu;
    // 7F1B7FDC: li      r6, 35
    ctx->gpr[6] = (u32)(s32)(35);

label_7F1B7FE0:
    ctx->pc = 0x7F1B7FE0u;
    // 7F1B7FE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B7FE4:
    ctx->pc = 0x7F1B7FE4u;
    // 7F1B7FE4: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B7FE8u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B7FE8:
    ctx->pc = 0x7F1B7FE8u;
    ctx->downcount -= 7;
    // 7F1B7FE8: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B7FEC:
    ctx->pc = 0x7F1B7FECu;
    // 7F1B7FEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B7FF0:
    ctx->pc = 0x7F1B7FF0u;
    // 7F1B7FF0: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B7FF4:
    ctx->pc = 0x7F1B7FF4u;
    // 7F1B7FF4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B7FF8:
    ctx->pc = 0x7F1B7FF8u;
    // 7F1B7FF8: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B7FFC:
    ctx->pc = 0x7F1B7FFCu;
    // 7F1B7FFC: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B8000:
    ctx->pc = 0x7F1B8000u;
    // 7F1B8000: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B8004u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B8004:
    ctx->pc = 0x7F1B8004u;
    ctx->downcount -= 6;
    // 7F1B8004: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8008:
    ctx->pc = 0x7F1B8008u;
    // 7F1B8008: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B800C:
    ctx->pc = 0x7F1B800Cu;
    // 7F1B800C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8010:
    ctx->pc = 0x7F1B8010u;
    // 7F1B8010: li      r6, 660
    ctx->gpr[6] = (u32)(s32)(660);

label_7F1B8014:
    ctx->pc = 0x7F1B8014u;
    // 7F1B8014: li      r7, 230
    ctx->gpr[7] = (u32)(s32)(230);

label_7F1B8018:
    ctx->pc = 0x7F1B8018u;
    // 7F1B8018: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B801Cu;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B801C:
    ctx->pc = 0x7F1B801Cu;
    ctx->downcount -= 6;
    // 7F1B801C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8020:
    ctx->pc = 0x7F1B8020u;
    // 7F1B8020: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8024:
    ctx->pc = 0x7F1B8024u;
    // 7F1B8024: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8028:
    ctx->pc = 0x7F1B8028u;
    // 7F1B8028: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B802C:
    ctx->pc = 0x7F1B802Cu;
    // 7F1B802C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B40EC;
        }
    }

label_7F1B8030:
    ctx->pc = 0x7F1B8030u;
    ctx->downcount -= 8;
    // 7F1B8030: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8034:
    ctx->pc = 0x7F1B8034u;
    // 7F1B8034: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8038:
    ctx->pc = 0x7F1B8038u;
    // 7F1B8038: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B803C:
    ctx->pc = 0x7F1B803Cu;
    // 7F1B803C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8040:
    ctx->pc = 0x7F1B8040u;
    // 7F1B8040: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8044:
    ctx->pc = 0x7F1B8044u;
    // 7F1B8044: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8048:
    ctx->pc = 0x7F1B8048u;
    // 7F1B8048: cmpwi   r0, 0
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

label_7F1B804C:
    ctx->pc = 0x7F1B804Cu;
    // 7F1B804C: bc    12, 2, 0x7F1B817C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F1B817Cu;
            return;
        }
    }

label_7F1B8050:
    ctx->pc = 0x7F1B8050u;
    ctx->downcount -= 1;
    // 7F1B8050: bl      0x7F1B6078
    {
            ctx->lr = 0x7F1B8054u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B6078u;
                return;
            }
            goto label_7F1B6078;
    }

label_7F1B8054:
    ctx->pc = 0x7F1B8054u;
    ctx->downcount -= 7;
    // 7F1B8054: addi    r0, r3, 65
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(65);

label_7F1B8058:
    ctx->pc = 0x7F1B8058u;
    // 7F1B8058: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B805C:
    ctx->pc = 0x7F1B805Cu;
    // 7F1B805C: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F1B8060:
    ctx->pc = 0x7F1B8060u;
    // 7F1B8060: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8064:
    ctx->pc = 0x7F1B8064u;
    // 7F1B8064: addi    r4, r4, -6456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6456);

label_7F1B8068:
    ctx->pc = 0x7F1B8068u;
    // 7F1B8068: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B806C:
    ctx->pc = 0x7F1B806Cu;
    // 7F1B806C: bl      0x8001258C
    {
            ctx->lr = 0x7F1B8070u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B8070:
    ctx->pc = 0x7F1B8070u;
    ctx->downcount -= 6;
    // 7F1B8070: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8074:
    ctx->pc = 0x7F1B8074u;
    // 7F1B8074: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8078:
    ctx->pc = 0x7F1B8078u;
    // 7F1B8078: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B807C:
    ctx->pc = 0x7F1B807Cu;
    // 7F1B807C: li      r6, 77
    ctx->gpr[6] = (u32)(s32)(77);

label_7F1B8080:
    ctx->pc = 0x7F1B8080u;
    // 7F1B8080: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B8084:
    ctx->pc = 0x7F1B8084u;
    // 7F1B8084: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B8088u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B8088:
    ctx->pc = 0x7F1B8088u;
    ctx->downcount -= 7;
    // 7F1B8088: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B808C:
    ctx->pc = 0x7F1B808Cu;
    // 7F1B808C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8090:
    ctx->pc = 0x7F1B8090u;
    // 7F1B8090: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B8094:
    ctx->pc = 0x7F1B8094u;
    // 7F1B8094: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B8098:
    ctx->pc = 0x7F1B8098u;
    // 7F1B8098: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B809C:
    ctx->pc = 0x7F1B809Cu;
    // 7F1B809C: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B80A0:
    ctx->pc = 0x7F1B80A0u;
    // 7F1B80A0: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B80A4u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B80A4:
    ctx->pc = 0x7F1B80A4u;
    ctx->downcount -= 6;
    // 7F1B80A4: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B80A8:
    ctx->pc = 0x7F1B80A8u;
    // 7F1B80A8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B80AC:
    ctx->pc = 0x7F1B80ACu;
    // 7F1B80AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B80B0:
    ctx->pc = 0x7F1B80B0u;
    // 7F1B80B0: li      r6, 495
    ctx->gpr[6] = (u32)(s32)(495);

label_7F1B80B4:
    ctx->pc = 0x7F1B80B4u;
    // 7F1B80B4: li      r7, 172
    ctx->gpr[7] = (u32)(s32)(172);

label_7F1B80B8:
    ctx->pc = 0x7F1B80B8u;
    // 7F1B80B8: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B80BCu;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B80BC:
    ctx->pc = 0x7F1B80BCu;
    ctx->downcount -= 1;
    // 7F1B80BC: bl      0x7F1B608C
    {
            ctx->lr = 0x7F1B80C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B608Cu;
                return;
            }
            goto label_7F1B608C;
    }

label_7F1B80C0:
    ctx->pc = 0x7F1B80C0u;
    ctx->downcount -= 2;
    // 7F1B80C0: cmplwi  r3, 0x0000
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

label_7F1B80C4:
    ctx->pc = 0x7F1B80C4u;
    // 7F1B80C4: bc    12, 2, 0x7F1B80E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B80E4;
        }
    }

label_7F1B80C8:
    ctx->pc = 0x7F1B80C8u;
    ctx->downcount -= 7;
    // 7F1B80C8: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B80CC:
    ctx->pc = 0x7F1B80CCu;
    // 7F1B80CC: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B80D0:
    ctx->pc = 0x7F1B80D0u;
    // 7F1B80D0: stfsu     f0, 14000(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14000);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
        ctx->gpr[4] = ea;
    }

label_7F1B80D4:
    ctx->pc = 0x7F1B80D4u;
    // 7F1B80D4: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B80D8:
    ctx->pc = 0x7F1B80D8u;
    // 7F1B80D8: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B80DC:
    ctx->pc = 0x7F1B80DCu;
    // 7F1B80DC: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B80E0:
    ctx->pc = 0x7F1B80E0u;
    // 7F1B80E0: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B80E4:
    ctx->pc = 0x7F1B80E4u;
    ctx->downcount -= 2;
    // 7F1B80E4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B80E8:
    ctx->pc = 0x7F1B80E8u;
    // 7F1B80E8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

    ctx->pc = 0x7F1B80ECu;
    return;
return_dispatch_7F1B40EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1B40F4u: goto label_7F1B40F4;
    case 0x7F1B4114u: goto label_7F1B4114;
    case 0x7F1B41D0u: goto label_7F1B41D0;
    case 0x7F1B4260u: goto label_7F1B4260;
    case 0x7F1B4268u: goto label_7F1B4268;
    case 0x7F1B42BCu: goto label_7F1B42BC;
    case 0x7F1B42E0u: goto label_7F1B42E0;
    case 0x7F1B42FCu: goto label_7F1B42FC;
    case 0x7F1B4338u: goto label_7F1B4338;
    case 0x7F1B4348u: goto label_7F1B4348;
    case 0x7F1B4360u: goto label_7F1B4360;
    case 0x7F1B4508u: goto label_7F1B4508;
    case 0x7F1B450Cu: goto label_7F1B450C;
    case 0x7F1B451Cu: goto label_7F1B451C;
    case 0x7F1B45A8u: goto label_7F1B45A8;
    case 0x7F1B45E8u: goto label_7F1B45E8;
    case 0x7F1B4604u: goto label_7F1B4604;
    case 0x7F1B466Cu: goto label_7F1B466C;
    case 0x7F1B467Cu: goto label_7F1B467C;
    case 0x7F1B4694u: goto label_7F1B4694;
    case 0x7F1B46C8u: goto label_7F1B46C8;
    case 0x7F1B46D8u: goto label_7F1B46D8;
    case 0x7F1B46E8u: goto label_7F1B46E8;
    case 0x7F1B46F8u: goto label_7F1B46F8;
    case 0x7F1B4708u: goto label_7F1B4708;
    case 0x7F1B4710u: goto label_7F1B4710;
    case 0x7F1B47C4u: goto label_7F1B47C4;
    case 0x7F1B47D4u: goto label_7F1B47D4;
    case 0x7F1B482Cu: goto label_7F1B482C;
    case 0x7F1B48DCu: goto label_7F1B48DC;
    case 0x7F1B48E8u: goto label_7F1B48E8;
    case 0x7F1B49A4u: goto label_7F1B49A4;
    case 0x7F1B49ACu: goto label_7F1B49AC;
    case 0x7F1B49B8u: goto label_7F1B49B8;
    case 0x7F1B4A84u: goto label_7F1B4A84;
    case 0x7F1B4AA8u: goto label_7F1B4AA8;
    case 0x7F1B4ACCu: goto label_7F1B4ACC;
    case 0x7F1B4AECu: goto label_7F1B4AEC;
    case 0x7F1B4BC8u: goto label_7F1B4BC8;
    case 0x7F1B4C0Cu: goto label_7F1B4C0C;
    case 0x7F1B4C28u: goto label_7F1B4C28;
    case 0x7F1B4C5Cu: goto label_7F1B4C5C;
    case 0x7F1B4C6Cu: goto label_7F1B4C6C;
    case 0x7F1B4C84u: goto label_7F1B4C84;
    case 0x7F1B4CF8u: goto label_7F1B4CF8;
    case 0x7F1B4E28u: goto label_7F1B4E28;
    case 0x7F1B4E38u: goto label_7F1B4E38;
    case 0x7F1B4E48u: goto label_7F1B4E48;
    case 0x7F1B4E58u: goto label_7F1B4E58;
    case 0x7F1B4E68u: goto label_7F1B4E68;
    case 0x7F1B4E78u: goto label_7F1B4E78;
    case 0x7F1B4E88u: goto label_7F1B4E88;
    case 0x7F1B4E98u: goto label_7F1B4E98;
    case 0x7F1B4F4Cu: goto label_7F1B4F4C;
    case 0x7F1B4FB4u: goto label_7F1B4FB4;
    case 0x7F1B4FBCu: goto label_7F1B4FBC;
    case 0x7F1B4FC4u: goto label_7F1B4FC4;
    case 0x7F1B4FCCu: goto label_7F1B4FCC;
    case 0x7F1B4FE0u: goto label_7F1B4FE0;
    case 0x7F1B503Cu: goto label_7F1B503C;
    case 0x7F1B505Cu: goto label_7F1B505C;
    case 0x7F1B5078u: goto label_7F1B5078;
    case 0x7F1B5094u: goto label_7F1B5094;
    case 0x7F1B50BCu: goto label_7F1B50BC;
    case 0x7F1B50C4u: goto label_7F1B50C4;
    case 0x7F1B50D4u: goto label_7F1B50D4;
    case 0x7F1B5150u: goto label_7F1B5150;
    case 0x7F1B51E8u: goto label_7F1B51E8;
    case 0x7F1B51FCu: goto label_7F1B51FC;
    case 0x7F1B526Cu: goto label_7F1B526C;
    case 0x7F1B52B4u: goto label_7F1B52B4;
    case 0x7F1B533Cu: goto label_7F1B533C;
    case 0x7F1B5368u: goto label_7F1B5368;
    case 0x7F1B5384u: goto label_7F1B5384;
    case 0x7F1B53B8u: goto label_7F1B53B8;
    case 0x7F1B5418u: goto label_7F1B5418;
    case 0x7F1B5434u: goto label_7F1B5434;
    case 0x7F1B5498u: goto label_7F1B5498;
    case 0x7F1B54A8u: goto label_7F1B54A8;
    case 0x7F1B54E4u: goto label_7F1B54E4;
    case 0x7F1B54E8u: goto label_7F1B54E8;
    case 0x7F1B54ECu: goto label_7F1B54EC;
    case 0x7F1B5518u: goto label_7F1B5518;
    case 0x7F1B554Cu: goto label_7F1B554C;
    case 0x7F1B5720u: goto label_7F1B5720;
    case 0x7F1B5744u: goto label_7F1B5744;
    case 0x7F1B5768u: goto label_7F1B5768;
    case 0x7F1B578Cu: goto label_7F1B578C;
    case 0x7F1B5860u: goto label_7F1B5860;
    case 0x7F1B589Cu: goto label_7F1B589C;
    case 0x7F1B58D8u: goto label_7F1B58D8;
    case 0x7F1B5910u: goto label_7F1B5910;
    case 0x7F1B594Cu: goto label_7F1B594C;
    case 0x7F1B5988u: goto label_7F1B5988;
    case 0x7F1B59C4u: goto label_7F1B59C4;
    case 0x7F1B59FCu: goto label_7F1B59FC;
    case 0x7F1B5A38u: goto label_7F1B5A38;
    case 0x7F1B5A70u: goto label_7F1B5A70;
    case 0x7F1B5AA8u: goto label_7F1B5AA8;
    case 0x7F1B5AE0u: goto label_7F1B5AE0;
    case 0x7F1B5AF0u: goto label_7F1B5AF0;
    case 0x7F1B5B48u: goto label_7F1B5B48;
    case 0x7F1B5B64u: goto label_7F1B5B64;
    case 0x7F1B5C00u: goto label_7F1B5C00;
    case 0x7F1B5C3Cu: goto label_7F1B5C3C;
    case 0x7F1B5C4Cu: goto label_7F1B5C4C;
    case 0x7F1B5C5Cu: goto label_7F1B5C5C;
    case 0x7F1B5C6Cu: goto label_7F1B5C6C;
    case 0x7F1B5C74u: goto label_7F1B5C74;
    case 0x7F1B5CA4u: goto label_7F1B5CA4;
    case 0x7F1B5CB4u: goto label_7F1B5CB4;
    case 0x7F1B5CC4u: goto label_7F1B5CC4;
    case 0x7F1B5CD4u: goto label_7F1B5CD4;
    case 0x7F1B5D08u: goto label_7F1B5D08;
    case 0x7F1B5D2Cu: goto label_7F1B5D2C;
    case 0x7F1B5D58u: goto label_7F1B5D58;
    case 0x7F1B5D68u: goto label_7F1B5D68;
    case 0x7F1B5D78u: goto label_7F1B5D78;
    case 0x7F1B5D88u: goto label_7F1B5D88;
    case 0x7F1B5DC0u: goto label_7F1B5DC0;
    case 0x7F1B5DF0u: goto label_7F1B5DF0;
    case 0x7F1B5E00u: goto label_7F1B5E00;
    case 0x7F1B5E10u: goto label_7F1B5E10;
    case 0x7F1B5E20u: goto label_7F1B5E20;
    case 0x7F1B5E2Cu: goto label_7F1B5E2C;
    case 0x7F1B5E60u: goto label_7F1B5E60;
    case 0x7F1B5E70u: goto label_7F1B5E70;
    case 0x7F1B5E80u: goto label_7F1B5E80;
    case 0x7F1B5E90u: goto label_7F1B5E90;
    case 0x7F1B5EA0u: goto label_7F1B5EA0;
    case 0x7F1B5EB4u: goto label_7F1B5EB4;
    case 0x7F1B5EE4u: goto label_7F1B5EE4;
    case 0x7F1B5EF4u: goto label_7F1B5EF4;
    case 0x7F1B5F04u: goto label_7F1B5F04;
    case 0x7F1B5F14u: goto label_7F1B5F14;
    case 0x7F1B5F24u: goto label_7F1B5F24;
    case 0x7F1B5F4Cu: goto label_7F1B5F4C;
    case 0x7F1B5F74u: goto label_7F1B5F74;
    case 0x7F1B5F9Cu: goto label_7F1B5F9C;
    case 0x7F1B5FC4u: goto label_7F1B5FC4;
    case 0x7F1B5FE8u: goto label_7F1B5FE8;
    case 0x7F1B6014u: goto label_7F1B6014;
    case 0x7F1B6018u: goto label_7F1B6018;
    case 0x7F1B6020u: goto label_7F1B6020;
    case 0x7F1B60BCu: goto label_7F1B60BC;
    case 0x7F1B61C4u: goto label_7F1B61C4;
    case 0x7F1B6220u: goto label_7F1B6220;
    case 0x7F1B6274u: goto label_7F1B6274;
    case 0x7F1B6294u: goto label_7F1B6294;
    case 0x7F1B62F4u: goto label_7F1B62F4;
    case 0x7F1B6338u: goto label_7F1B6338;
    case 0x7F1B636Cu: goto label_7F1B636C;
    case 0x7F1B63B8u: goto label_7F1B63B8;
    case 0x7F1B63E4u: goto label_7F1B63E4;
    case 0x7F1B65F0u: goto label_7F1B65F0;
    case 0x7F1B6784u: goto label_7F1B6784;
    case 0x7F1B6794u: goto label_7F1B6794;
    case 0x7F1B68C4u: goto label_7F1B68C4;
    case 0x7F1B68E0u: goto label_7F1B68E0;
    case 0x7F1B695Cu: goto label_7F1B695C;
    case 0x7F1B6978u: goto label_7F1B6978;
    case 0x7F1B6988u: goto label_7F1B6988;
    case 0x7F1B69A8u: goto label_7F1B69A8;
    case 0x7F1B69B8u: goto label_7F1B69B8;
    case 0x7F1B69C4u: goto label_7F1B69C4;
    case 0x7F1B69CCu: goto label_7F1B69CC;
    case 0x7F1B69DCu: goto label_7F1B69DC;
    case 0x7F1B69ECu: goto label_7F1B69EC;
    case 0x7F1B69F8u: goto label_7F1B69F8;
    case 0x7F1B6A14u: goto label_7F1B6A14;
    case 0x7F1B6A40u: goto label_7F1B6A40;
    case 0x7F1B6A6Cu: goto label_7F1B6A6C;
    case 0x7F1B6ADCu: goto label_7F1B6ADC;
    case 0x7F1B6B4Cu: goto label_7F1B6B4C;
    case 0x7F1B6BD4u: goto label_7F1B6BD4;
    case 0x7F1B6BF8u: goto label_7F1B6BF8;
    case 0x7F1B6BFCu: goto label_7F1B6BFC;
    case 0x7F1B6CB4u: goto label_7F1B6CB4;
    case 0x7F1B6D10u: goto label_7F1B6D10;
    case 0x7F1B6E14u: goto label_7F1B6E14;
    case 0x7F1B6E6Cu: goto label_7F1B6E6C;
    case 0x7F1B6E88u: goto label_7F1B6E88;
    case 0x7F1B6EBCu: goto label_7F1B6EBC;
    case 0x7F1B6ECCu: goto label_7F1B6ECC;
    case 0x7F1B6EE4u: goto label_7F1B6EE4;
    case 0x7F1B6F28u: goto label_7F1B6F28;
    case 0x7F1B6F2Cu: goto label_7F1B6F2C;
    case 0x7F1B6F54u: goto label_7F1B6F54;
    case 0x7F1B6F68u: goto label_7F1B6F68;
    case 0x7F1B6F88u: goto label_7F1B6F88;
    case 0x7F1B6F94u: goto label_7F1B6F94;
    case 0x7F1B6FA0u: goto label_7F1B6FA0;
    case 0x7F1B6FACu: goto label_7F1B6FAC;
    case 0x7F1B6FC0u: goto label_7F1B6FC0;
    case 0x7F1B6FD0u: goto label_7F1B6FD0;
    case 0x7F1B7070u: goto label_7F1B7070;
    case 0x7F1B710Cu: goto label_7F1B710C;
    case 0x7F1B7184u: goto label_7F1B7184;
    case 0x7F1B7270u: goto label_7F1B7270;
    case 0x7F1B7280u: goto label_7F1B7280;
    case 0x7F1B7290u: goto label_7F1B7290;
    case 0x7F1B7298u: goto label_7F1B7298;
    case 0x7F1B72DCu: goto label_7F1B72DC;
    case 0x7F1B72ECu: goto label_7F1B72EC;
    case 0x7F1B7308u: goto label_7F1B7308;
    case 0x7F1B731Cu: goto label_7F1B731C;
    case 0x7F1B732Cu: goto label_7F1B732C;
    case 0x7F1B7354u: goto label_7F1B7354;
    case 0x7F1B737Cu: goto label_7F1B737C;
    case 0x7F1B7398u: goto label_7F1B7398;
    case 0x7F1B73B4u: goto label_7F1B73B4;
    case 0x7F1B73D4u: goto label_7F1B73D4;
    case 0x7F1B73FCu: goto label_7F1B73FC;
    case 0x7F1B7424u: goto label_7F1B7424;
    case 0x7F1B7440u: goto label_7F1B7440;
    case 0x7F1B7458u: goto label_7F1B7458;
    case 0x7F1B74ACu: goto label_7F1B74AC;
    case 0x7F1B74C8u: goto label_7F1B74C8;
    case 0x7F1B7500u: goto label_7F1B7500;
    case 0x7F1B7510u: goto label_7F1B7510;
    case 0x7F1B7528u: goto label_7F1B7528;
    case 0x7F1B759Cu: goto label_7F1B759C;
    case 0x7F1B75A0u: goto label_7F1B75A0;
    case 0x7F1B75B4u: goto label_7F1B75B4;
    case 0x7F1B75C8u: goto label_7F1B75C8;
    case 0x7F1B75ECu: goto label_7F1B75EC;
    case 0x7F1B75F4u: goto label_7F1B75F4;
    case 0x7F1B7608u: goto label_7F1B7608;
    case 0x7F1B761Cu: goto label_7F1B761C;
    case 0x7F1B7640u: goto label_7F1B7640;
    case 0x7F1B764Cu: goto label_7F1B764C;
    case 0x7F1B767Cu: goto label_7F1B767C;
    case 0x7F1B7680u: goto label_7F1B7680;
    case 0x7F1B768Cu: goto label_7F1B768C;
    case 0x7F1B76A0u: goto label_7F1B76A0;
    case 0x7F1B76B0u: goto label_7F1B76B0;
    case 0x7F1B76B4u: goto label_7F1B76B4;
    case 0x7F1B76F4u: goto label_7F1B76F4;
    case 0x7F1B76F8u: goto label_7F1B76F8;
    case 0x7F1B7708u: goto label_7F1B7708;
    case 0x7F1B7814u: goto label_7F1B7814;
    case 0x7F1B7848u: goto label_7F1B7848;
    case 0x7F1B7850u: goto label_7F1B7850;
    case 0x7F1B78B8u: goto label_7F1B78B8;
    case 0x7F1B78C8u: goto label_7F1B78C8;
    case 0x7F1B78E4u: goto label_7F1B78E4;
    case 0x7F1B78F8u: goto label_7F1B78F8;
    case 0x7F1B7944u: goto label_7F1B7944;
    case 0x7F1B7960u: goto label_7F1B7960;
    case 0x7F1B79A0u: goto label_7F1B79A0;
    case 0x7F1B79B0u: goto label_7F1B79B0;
    case 0x7F1B7A10u: goto label_7F1B7A10;
    case 0x7F1B7A14u: goto label_7F1B7A14;
    case 0x7F1B7AB0u: goto label_7F1B7AB0;
    case 0x7F1B7AD0u: goto label_7F1B7AD0;
    case 0x7F1B7B1Cu: goto label_7F1B7B1C;
    case 0x7F1B7B44u: goto label_7F1B7B44;
    case 0x7F1B7B7Cu: goto label_7F1B7B7C;
    case 0x7F1B7BB0u: goto label_7F1B7BB0;
    case 0x7F1B7BB8u: goto label_7F1B7BB8;
    case 0x7F1B7C34u: goto label_7F1B7C34;
    case 0x7F1B7C70u: goto label_7F1B7C70;
    case 0x7F1B7C80u: goto label_7F1B7C80;
    case 0x7F1B7C9Cu: goto label_7F1B7C9C;
    case 0x7F1B7CB0u: goto label_7F1B7CB0;
    case 0x7F1B7CF4u: goto label_7F1B7CF4;
    case 0x7F1B7D10u: goto label_7F1B7D10;
    case 0x7F1B7D48u: goto label_7F1B7D48;
    case 0x7F1B7D58u: goto label_7F1B7D58;
    case 0x7F1B7D70u: goto label_7F1B7D70;
    case 0x7F1B7E30u: goto label_7F1B7E30;
    case 0x7F1B7E38u: goto label_7F1B7E38;
    case 0x7F1B7E5Cu: goto label_7F1B7E5C;
    case 0x7F1B7E64u: goto label_7F1B7E64;
    case 0x7F1B7EC8u: goto label_7F1B7EC8;
    case 0x7F1B7F08u: goto label_7F1B7F08;
    case 0x7F1B7F10u: goto label_7F1B7F10;
    case 0x7F1B7FD0u: goto label_7F1B7FD0;
    case 0x7F1B7FE8u: goto label_7F1B7FE8;
    case 0x7F1B8004u: goto label_7F1B8004;
    case 0x7F1B801Cu: goto label_7F1B801C;
    case 0x7F1B8054u: goto label_7F1B8054;
    case 0x7F1B8070u: goto label_7F1B8070;
    case 0x7F1B8088u: goto label_7F1B8088;
    case 0x7F1B80A4u: goto label_7F1B80A4;
    case 0x7F1B80BCu: goto label_7F1B80BC;
    case 0x7F1B80C0u: goto label_7F1B80C0;
    default: return;
    }
}

