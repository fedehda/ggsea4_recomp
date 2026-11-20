// DolRecomp output
#include "../generated.h"

static void loop_7F0E4D3C(CPUState* ctx) {
label_7F0E4D3C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0E4D3Cu;
    // 7F0E4D3C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0E4D40u;
    // 7F0E4D40: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0E4D44u;
    // 7F0E4D44: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0E4D48u;
    // 7F0E4D48: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0E4D4C: bc    16, 0, 0x7F0E4D3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4D3Cu;
                return;
            }
            goto label_7F0E4D3C;
        }
    }

    ctx->pc = 0x7F0E4D50u;
}

static void loop_7F0E6000(CPUState* ctx) {
label_7F0E6000:
    ctx->downcount -= 17;
    ctx->pc = 0x7F0E6000u;
    // 7F0E6000: stw     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F0E6004u;
    // 7F0E6004: stw     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F0E6008u;
    // 7F0E6008: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0E600Cu;
    // 7F0E600C: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F0E6010: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

    ctx->pc = 0x7F0E6014u;
    // 7F0E6014: sth     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6018u;
    // 7F0E6018: sth     r6, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E601Cu;
    // 7F0E601C: sth     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6020u;
    // 7F0E6020: sth     r6, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6024u;
    // 7F0E6024: sth     r6, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6028u;
    // 7F0E6028: sth     r6, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E602Cu;
    // 7F0E602C: stb     r6, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6030u;
    // 7F0E6030: stb     r6, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6034u;
    // 7F0E6034: stb     r6, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    ctx->pc = 0x7F0E6038u;
    // 7F0E6038: stb     r6, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    // 7F0E603C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

    // 7F0E6040: bc    16, 0, 0x7F0E6000
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6000u;
                return;
            }
            goto label_7F0E6000;
        }
    }

    ctx->pc = 0x7F0E6044u;
}

static void loop_7F0E6704(CPUState* ctx) {
label_7F0E6704:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0E6704u;
    // 7F0E6704: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0E6708u;
    // 7F0E6708: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x7F0E670Cu;
    // 7F0E670C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0E6710u;
    // 7F0E6710: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F0E6714: bc    16, 0, 0x7F0E6704
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6704u;
                return;
            }
            goto label_7F0E6704;
        }
    }

    ctx->pc = 0x7F0E6718u;
}

static void loop_7F0E6964(CPUState* ctx) {
label_7F0E6964:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0E6964u;
    // 7F0E6964: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0E6968u;
    // 7F0E6968: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0E696Cu;
    // 7F0E696C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0E6970u;
    // 7F0E6970: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F0E6974: bc    16, 0, 0x7F0E6964
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6964u;
                return;
            }
            goto label_7F0E6964;
        }
    }

    ctx->pc = 0x7F0E6978u;
}

static void loop_7F0E7D78(CPUState* ctx) {
label_7F0E7D78:
    ctx->downcount -= 4;
    ctx->pc = 0x7F0E7D78u;
    // 7F0E7D78: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F0E7D7C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F0E7D80: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F0E7D84: bc    16, 0, 0x7F0E7D78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E7D78u;
                return;
            }
            goto label_7F0E7D78;
        }
    }

    ctx->pc = 0x7F0E7D88u;
}

void func_7F0E40EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0E40ECu: goto label_7F0E40EC;
    case 0x7F0E40F0u: goto label_7F0E40F0;
    case 0x7F0E40F4u: goto label_7F0E40F4;
    case 0x7F0E40F8u: goto label_7F0E40F8;
    case 0x7F0E40FCu: goto label_7F0E40FC;
    case 0x7F0E4100u: goto label_7F0E4100;
    case 0x7F0E4104u: goto label_7F0E4104;
    case 0x7F0E4108u: goto label_7F0E4108;
    case 0x7F0E410Cu: goto label_7F0E410C;
    case 0x7F0E4110u: goto label_7F0E4110;
    case 0x7F0E4114u: goto label_7F0E4114;
    case 0x7F0E4118u: goto label_7F0E4118;
    case 0x7F0E411Cu: goto label_7F0E411C;
    case 0x7F0E4120u: goto label_7F0E4120;
    case 0x7F0E4124u: goto label_7F0E4124;
    case 0x7F0E4128u: goto label_7F0E4128;
    case 0x7F0E412Cu: goto label_7F0E412C;
    case 0x7F0E4130u: goto label_7F0E4130;
    case 0x7F0E4134u: goto label_7F0E4134;
    case 0x7F0E4138u: goto label_7F0E4138;
    case 0x7F0E413Cu: goto label_7F0E413C;
    case 0x7F0E4140u: goto label_7F0E4140;
    case 0x7F0E4144u: goto label_7F0E4144;
    case 0x7F0E4148u: goto label_7F0E4148;
    case 0x7F0E414Cu: goto label_7F0E414C;
    case 0x7F0E4150u: goto label_7F0E4150;
    case 0x7F0E4154u: goto label_7F0E4154;
    case 0x7F0E4158u: goto label_7F0E4158;
    case 0x7F0E415Cu: goto label_7F0E415C;
    case 0x7F0E4160u: goto label_7F0E4160;
    case 0x7F0E4164u: goto label_7F0E4164;
    case 0x7F0E4168u: goto label_7F0E4168;
    case 0x7F0E416Cu: goto label_7F0E416C;
    case 0x7F0E4170u: goto label_7F0E4170;
    case 0x7F0E4174u: goto label_7F0E4174;
    case 0x7F0E4178u: goto label_7F0E4178;
    case 0x7F0E417Cu: goto label_7F0E417C;
    case 0x7F0E4180u: goto label_7F0E4180;
    case 0x7F0E4184u: goto label_7F0E4184;
    case 0x7F0E4188u: goto label_7F0E4188;
    case 0x7F0E418Cu: goto label_7F0E418C;
    case 0x7F0E4190u: goto label_7F0E4190;
    case 0x7F0E4194u: goto label_7F0E4194;
    case 0x7F0E4198u: goto label_7F0E4198;
    case 0x7F0E419Cu: goto label_7F0E419C;
    case 0x7F0E41A0u: goto label_7F0E41A0;
    case 0x7F0E41A4u: goto label_7F0E41A4;
    case 0x7F0E41A8u: goto label_7F0E41A8;
    case 0x7F0E41ACu: goto label_7F0E41AC;
    case 0x7F0E41B0u: goto label_7F0E41B0;
    case 0x7F0E41B4u: goto label_7F0E41B4;
    case 0x7F0E41B8u: goto label_7F0E41B8;
    case 0x7F0E41BCu: goto label_7F0E41BC;
    case 0x7F0E41C0u: goto label_7F0E41C0;
    case 0x7F0E41C4u: goto label_7F0E41C4;
    case 0x7F0E41C8u: goto label_7F0E41C8;
    case 0x7F0E41CCu: goto label_7F0E41CC;
    case 0x7F0E41D0u: goto label_7F0E41D0;
    case 0x7F0E41D4u: goto label_7F0E41D4;
    case 0x7F0E41D8u: goto label_7F0E41D8;
    case 0x7F0E41DCu: goto label_7F0E41DC;
    case 0x7F0E41E0u: goto label_7F0E41E0;
    case 0x7F0E41E4u: goto label_7F0E41E4;
    case 0x7F0E41E8u: goto label_7F0E41E8;
    case 0x7F0E41ECu: goto label_7F0E41EC;
    case 0x7F0E41F0u: goto label_7F0E41F0;
    case 0x7F0E41F4u: goto label_7F0E41F4;
    case 0x7F0E41F8u: goto label_7F0E41F8;
    case 0x7F0E41FCu: goto label_7F0E41FC;
    case 0x7F0E4200u: goto label_7F0E4200;
    case 0x7F0E4204u: goto label_7F0E4204;
    case 0x7F0E4208u: goto label_7F0E4208;
    case 0x7F0E420Cu: goto label_7F0E420C;
    case 0x7F0E4210u: goto label_7F0E4210;
    case 0x7F0E4214u: goto label_7F0E4214;
    case 0x7F0E4218u: goto label_7F0E4218;
    case 0x7F0E421Cu: goto label_7F0E421C;
    case 0x7F0E4220u: goto label_7F0E4220;
    case 0x7F0E4224u: goto label_7F0E4224;
    case 0x7F0E4228u: goto label_7F0E4228;
    case 0x7F0E422Cu: goto label_7F0E422C;
    case 0x7F0E4230u: goto label_7F0E4230;
    case 0x7F0E4234u: goto label_7F0E4234;
    case 0x7F0E4238u: goto label_7F0E4238;
    case 0x7F0E423Cu: goto label_7F0E423C;
    case 0x7F0E4240u: goto label_7F0E4240;
    case 0x7F0E4244u: goto label_7F0E4244;
    case 0x7F0E4248u: goto label_7F0E4248;
    case 0x7F0E424Cu: goto label_7F0E424C;
    case 0x7F0E4250u: goto label_7F0E4250;
    case 0x7F0E4254u: goto label_7F0E4254;
    case 0x7F0E4258u: goto label_7F0E4258;
    case 0x7F0E425Cu: goto label_7F0E425C;
    case 0x7F0E4260u: goto label_7F0E4260;
    case 0x7F0E4264u: goto label_7F0E4264;
    case 0x7F0E4268u: goto label_7F0E4268;
    case 0x7F0E426Cu: goto label_7F0E426C;
    case 0x7F0E4270u: goto label_7F0E4270;
    case 0x7F0E4274u: goto label_7F0E4274;
    case 0x7F0E4278u: goto label_7F0E4278;
    case 0x7F0E427Cu: goto label_7F0E427C;
    case 0x7F0E4280u: goto label_7F0E4280;
    case 0x7F0E4284u: goto label_7F0E4284;
    case 0x7F0E4288u: goto label_7F0E4288;
    case 0x7F0E428Cu: goto label_7F0E428C;
    case 0x7F0E4290u: goto label_7F0E4290;
    case 0x7F0E4294u: goto label_7F0E4294;
    case 0x7F0E4298u: goto label_7F0E4298;
    case 0x7F0E429Cu: goto label_7F0E429C;
    case 0x7F0E42A0u: goto label_7F0E42A0;
    case 0x7F0E42A4u: goto label_7F0E42A4;
    case 0x7F0E42A8u: goto label_7F0E42A8;
    case 0x7F0E42ACu: goto label_7F0E42AC;
    case 0x7F0E42B0u: goto label_7F0E42B0;
    case 0x7F0E42B4u: goto label_7F0E42B4;
    case 0x7F0E42B8u: goto label_7F0E42B8;
    case 0x7F0E42BCu: goto label_7F0E42BC;
    case 0x7F0E42C0u: goto label_7F0E42C0;
    case 0x7F0E42C4u: goto label_7F0E42C4;
    case 0x7F0E42C8u: goto label_7F0E42C8;
    case 0x7F0E42CCu: goto label_7F0E42CC;
    case 0x7F0E42D0u: goto label_7F0E42D0;
    case 0x7F0E42D4u: goto label_7F0E42D4;
    case 0x7F0E42D8u: goto label_7F0E42D8;
    case 0x7F0E42DCu: goto label_7F0E42DC;
    case 0x7F0E42E0u: goto label_7F0E42E0;
    case 0x7F0E42E4u: goto label_7F0E42E4;
    case 0x7F0E42E8u: goto label_7F0E42E8;
    case 0x7F0E42ECu: goto label_7F0E42EC;
    case 0x7F0E42F0u: goto label_7F0E42F0;
    case 0x7F0E42F4u: goto label_7F0E42F4;
    case 0x7F0E42F8u: goto label_7F0E42F8;
    case 0x7F0E42FCu: goto label_7F0E42FC;
    case 0x7F0E4300u: goto label_7F0E4300;
    case 0x7F0E4304u: goto label_7F0E4304;
    case 0x7F0E4308u: goto label_7F0E4308;
    case 0x7F0E430Cu: goto label_7F0E430C;
    case 0x7F0E4310u: goto label_7F0E4310;
    case 0x7F0E4314u: goto label_7F0E4314;
    case 0x7F0E4318u: goto label_7F0E4318;
    case 0x7F0E431Cu: goto label_7F0E431C;
    case 0x7F0E4320u: goto label_7F0E4320;
    case 0x7F0E4324u: goto label_7F0E4324;
    case 0x7F0E4328u: goto label_7F0E4328;
    case 0x7F0E432Cu: goto label_7F0E432C;
    case 0x7F0E4330u: goto label_7F0E4330;
    case 0x7F0E4334u: goto label_7F0E4334;
    case 0x7F0E4338u: goto label_7F0E4338;
    case 0x7F0E433Cu: goto label_7F0E433C;
    case 0x7F0E4340u: goto label_7F0E4340;
    case 0x7F0E4344u: goto label_7F0E4344;
    case 0x7F0E4348u: goto label_7F0E4348;
    case 0x7F0E434Cu: goto label_7F0E434C;
    case 0x7F0E4350u: goto label_7F0E4350;
    case 0x7F0E4354u: goto label_7F0E4354;
    case 0x7F0E4358u: goto label_7F0E4358;
    case 0x7F0E435Cu: goto label_7F0E435C;
    case 0x7F0E4360u: goto label_7F0E4360;
    case 0x7F0E4364u: goto label_7F0E4364;
    case 0x7F0E4368u: goto label_7F0E4368;
    case 0x7F0E436Cu: goto label_7F0E436C;
    case 0x7F0E4370u: goto label_7F0E4370;
    case 0x7F0E4374u: goto label_7F0E4374;
    case 0x7F0E4378u: goto label_7F0E4378;
    case 0x7F0E437Cu: goto label_7F0E437C;
    case 0x7F0E4380u: goto label_7F0E4380;
    case 0x7F0E4384u: goto label_7F0E4384;
    case 0x7F0E4388u: goto label_7F0E4388;
    case 0x7F0E438Cu: goto label_7F0E438C;
    case 0x7F0E4390u: goto label_7F0E4390;
    case 0x7F0E4394u: goto label_7F0E4394;
    case 0x7F0E4398u: goto label_7F0E4398;
    case 0x7F0E439Cu: goto label_7F0E439C;
    case 0x7F0E43A0u: goto label_7F0E43A0;
    case 0x7F0E43A4u: goto label_7F0E43A4;
    case 0x7F0E43A8u: goto label_7F0E43A8;
    case 0x7F0E43ACu: goto label_7F0E43AC;
    case 0x7F0E43B0u: goto label_7F0E43B0;
    case 0x7F0E43B4u: goto label_7F0E43B4;
    case 0x7F0E43B8u: goto label_7F0E43B8;
    case 0x7F0E43BCu: goto label_7F0E43BC;
    case 0x7F0E43C0u: goto label_7F0E43C0;
    case 0x7F0E43C4u: goto label_7F0E43C4;
    case 0x7F0E43C8u: goto label_7F0E43C8;
    case 0x7F0E43CCu: goto label_7F0E43CC;
    case 0x7F0E43D0u: goto label_7F0E43D0;
    case 0x7F0E43D4u: goto label_7F0E43D4;
    case 0x7F0E43D8u: goto label_7F0E43D8;
    case 0x7F0E43DCu: goto label_7F0E43DC;
    case 0x7F0E43E0u: goto label_7F0E43E0;
    case 0x7F0E43E4u: goto label_7F0E43E4;
    case 0x7F0E43E8u: goto label_7F0E43E8;
    case 0x7F0E43ECu: goto label_7F0E43EC;
    case 0x7F0E43F0u: goto label_7F0E43F0;
    case 0x7F0E43F4u: goto label_7F0E43F4;
    case 0x7F0E43F8u: goto label_7F0E43F8;
    case 0x7F0E43FCu: goto label_7F0E43FC;
    case 0x7F0E4400u: goto label_7F0E4400;
    case 0x7F0E4404u: goto label_7F0E4404;
    case 0x7F0E4408u: goto label_7F0E4408;
    case 0x7F0E440Cu: goto label_7F0E440C;
    case 0x7F0E4410u: goto label_7F0E4410;
    case 0x7F0E4414u: goto label_7F0E4414;
    case 0x7F0E4418u: goto label_7F0E4418;
    case 0x7F0E441Cu: goto label_7F0E441C;
    case 0x7F0E4420u: goto label_7F0E4420;
    case 0x7F0E4424u: goto label_7F0E4424;
    case 0x7F0E4428u: goto label_7F0E4428;
    case 0x7F0E442Cu: goto label_7F0E442C;
    case 0x7F0E4430u: goto label_7F0E4430;
    case 0x7F0E4434u: goto label_7F0E4434;
    case 0x7F0E4438u: goto label_7F0E4438;
    case 0x7F0E443Cu: goto label_7F0E443C;
    case 0x7F0E4440u: goto label_7F0E4440;
    case 0x7F0E4444u: goto label_7F0E4444;
    case 0x7F0E4448u: goto label_7F0E4448;
    case 0x7F0E444Cu: goto label_7F0E444C;
    case 0x7F0E4450u: goto label_7F0E4450;
    case 0x7F0E4454u: goto label_7F0E4454;
    case 0x7F0E4458u: goto label_7F0E4458;
    case 0x7F0E445Cu: goto label_7F0E445C;
    case 0x7F0E4460u: goto label_7F0E4460;
    case 0x7F0E4464u: goto label_7F0E4464;
    case 0x7F0E4468u: goto label_7F0E4468;
    case 0x7F0E446Cu: goto label_7F0E446C;
    case 0x7F0E4470u: goto label_7F0E4470;
    case 0x7F0E4474u: goto label_7F0E4474;
    case 0x7F0E4478u: goto label_7F0E4478;
    case 0x7F0E447Cu: goto label_7F0E447C;
    case 0x7F0E4480u: goto label_7F0E4480;
    case 0x7F0E4484u: goto label_7F0E4484;
    case 0x7F0E4488u: goto label_7F0E4488;
    case 0x7F0E448Cu: goto label_7F0E448C;
    case 0x7F0E4490u: goto label_7F0E4490;
    case 0x7F0E4494u: goto label_7F0E4494;
    case 0x7F0E4498u: goto label_7F0E4498;
    case 0x7F0E449Cu: goto label_7F0E449C;
    case 0x7F0E44A0u: goto label_7F0E44A0;
    case 0x7F0E44A4u: goto label_7F0E44A4;
    case 0x7F0E44A8u: goto label_7F0E44A8;
    case 0x7F0E44ACu: goto label_7F0E44AC;
    case 0x7F0E44B0u: goto label_7F0E44B0;
    case 0x7F0E44B4u: goto label_7F0E44B4;
    case 0x7F0E44B8u: goto label_7F0E44B8;
    case 0x7F0E44BCu: goto label_7F0E44BC;
    case 0x7F0E44C0u: goto label_7F0E44C0;
    case 0x7F0E44C4u: goto label_7F0E44C4;
    case 0x7F0E44C8u: goto label_7F0E44C8;
    case 0x7F0E44CCu: goto label_7F0E44CC;
    case 0x7F0E44D0u: goto label_7F0E44D0;
    case 0x7F0E44D4u: goto label_7F0E44D4;
    case 0x7F0E44D8u: goto label_7F0E44D8;
    case 0x7F0E44DCu: goto label_7F0E44DC;
    case 0x7F0E44E0u: goto label_7F0E44E0;
    case 0x7F0E44E4u: goto label_7F0E44E4;
    case 0x7F0E44E8u: goto label_7F0E44E8;
    case 0x7F0E44ECu: goto label_7F0E44EC;
    case 0x7F0E44F0u: goto label_7F0E44F0;
    case 0x7F0E44F4u: goto label_7F0E44F4;
    case 0x7F0E44F8u: goto label_7F0E44F8;
    case 0x7F0E44FCu: goto label_7F0E44FC;
    case 0x7F0E4500u: goto label_7F0E4500;
    case 0x7F0E4504u: goto label_7F0E4504;
    case 0x7F0E4508u: goto label_7F0E4508;
    case 0x7F0E450Cu: goto label_7F0E450C;
    case 0x7F0E4510u: goto label_7F0E4510;
    case 0x7F0E4514u: goto label_7F0E4514;
    case 0x7F0E4518u: goto label_7F0E4518;
    case 0x7F0E451Cu: goto label_7F0E451C;
    case 0x7F0E4520u: goto label_7F0E4520;
    case 0x7F0E4524u: goto label_7F0E4524;
    case 0x7F0E4528u: goto label_7F0E4528;
    case 0x7F0E452Cu: goto label_7F0E452C;
    case 0x7F0E4530u: goto label_7F0E4530;
    case 0x7F0E4534u: goto label_7F0E4534;
    case 0x7F0E4538u: goto label_7F0E4538;
    case 0x7F0E453Cu: goto label_7F0E453C;
    case 0x7F0E4540u: goto label_7F0E4540;
    case 0x7F0E4544u: goto label_7F0E4544;
    case 0x7F0E4548u: goto label_7F0E4548;
    case 0x7F0E454Cu: goto label_7F0E454C;
    case 0x7F0E4550u: goto label_7F0E4550;
    case 0x7F0E4554u: goto label_7F0E4554;
    case 0x7F0E4558u: goto label_7F0E4558;
    case 0x7F0E455Cu: goto label_7F0E455C;
    case 0x7F0E4560u: goto label_7F0E4560;
    case 0x7F0E4564u: goto label_7F0E4564;
    case 0x7F0E4568u: goto label_7F0E4568;
    case 0x7F0E456Cu: goto label_7F0E456C;
    case 0x7F0E4570u: goto label_7F0E4570;
    case 0x7F0E4574u: goto label_7F0E4574;
    case 0x7F0E4578u: goto label_7F0E4578;
    case 0x7F0E457Cu: goto label_7F0E457C;
    case 0x7F0E4580u: goto label_7F0E4580;
    case 0x7F0E4584u: goto label_7F0E4584;
    case 0x7F0E4588u: goto label_7F0E4588;
    case 0x7F0E458Cu: goto label_7F0E458C;
    case 0x7F0E4590u: goto label_7F0E4590;
    case 0x7F0E4594u: goto label_7F0E4594;
    case 0x7F0E4598u: goto label_7F0E4598;
    case 0x7F0E459Cu: goto label_7F0E459C;
    case 0x7F0E45A0u: goto label_7F0E45A0;
    case 0x7F0E45A4u: goto label_7F0E45A4;
    case 0x7F0E45A8u: goto label_7F0E45A8;
    case 0x7F0E45ACu: goto label_7F0E45AC;
    case 0x7F0E45B0u: goto label_7F0E45B0;
    case 0x7F0E45B4u: goto label_7F0E45B4;
    case 0x7F0E45B8u: goto label_7F0E45B8;
    case 0x7F0E45BCu: goto label_7F0E45BC;
    case 0x7F0E45C0u: goto label_7F0E45C0;
    case 0x7F0E45C4u: goto label_7F0E45C4;
    case 0x7F0E45C8u: goto label_7F0E45C8;
    case 0x7F0E45CCu: goto label_7F0E45CC;
    case 0x7F0E45D0u: goto label_7F0E45D0;
    case 0x7F0E45D4u: goto label_7F0E45D4;
    case 0x7F0E45D8u: goto label_7F0E45D8;
    case 0x7F0E45DCu: goto label_7F0E45DC;
    case 0x7F0E45E0u: goto label_7F0E45E0;
    case 0x7F0E45E4u: goto label_7F0E45E4;
    case 0x7F0E45E8u: goto label_7F0E45E8;
    case 0x7F0E45ECu: goto label_7F0E45EC;
    case 0x7F0E45F0u: goto label_7F0E45F0;
    case 0x7F0E45F4u: goto label_7F0E45F4;
    case 0x7F0E45F8u: goto label_7F0E45F8;
    case 0x7F0E45FCu: goto label_7F0E45FC;
    case 0x7F0E4600u: goto label_7F0E4600;
    case 0x7F0E4604u: goto label_7F0E4604;
    case 0x7F0E4608u: goto label_7F0E4608;
    case 0x7F0E460Cu: goto label_7F0E460C;
    case 0x7F0E4610u: goto label_7F0E4610;
    case 0x7F0E4614u: goto label_7F0E4614;
    case 0x7F0E4618u: goto label_7F0E4618;
    case 0x7F0E461Cu: goto label_7F0E461C;
    case 0x7F0E4620u: goto label_7F0E4620;
    case 0x7F0E4624u: goto label_7F0E4624;
    case 0x7F0E4628u: goto label_7F0E4628;
    case 0x7F0E462Cu: goto label_7F0E462C;
    case 0x7F0E4630u: goto label_7F0E4630;
    case 0x7F0E4634u: goto label_7F0E4634;
    case 0x7F0E4638u: goto label_7F0E4638;
    case 0x7F0E463Cu: goto label_7F0E463C;
    case 0x7F0E4640u: goto label_7F0E4640;
    case 0x7F0E4644u: goto label_7F0E4644;
    case 0x7F0E4648u: goto label_7F0E4648;
    case 0x7F0E464Cu: goto label_7F0E464C;
    case 0x7F0E4650u: goto label_7F0E4650;
    case 0x7F0E4654u: goto label_7F0E4654;
    case 0x7F0E4658u: goto label_7F0E4658;
    case 0x7F0E465Cu: goto label_7F0E465C;
    case 0x7F0E4660u: goto label_7F0E4660;
    case 0x7F0E4664u: goto label_7F0E4664;
    case 0x7F0E4668u: goto label_7F0E4668;
    case 0x7F0E466Cu: goto label_7F0E466C;
    case 0x7F0E4670u: goto label_7F0E4670;
    case 0x7F0E4674u: goto label_7F0E4674;
    case 0x7F0E4678u: goto label_7F0E4678;
    case 0x7F0E467Cu: goto label_7F0E467C;
    case 0x7F0E4680u: goto label_7F0E4680;
    case 0x7F0E4684u: goto label_7F0E4684;
    case 0x7F0E4688u: goto label_7F0E4688;
    case 0x7F0E468Cu: goto label_7F0E468C;
    case 0x7F0E4690u: goto label_7F0E4690;
    case 0x7F0E4694u: goto label_7F0E4694;
    case 0x7F0E4698u: goto label_7F0E4698;
    case 0x7F0E469Cu: goto label_7F0E469C;
    case 0x7F0E46A0u: goto label_7F0E46A0;
    case 0x7F0E46A4u: goto label_7F0E46A4;
    case 0x7F0E46A8u: goto label_7F0E46A8;
    case 0x7F0E46ACu: goto label_7F0E46AC;
    case 0x7F0E46B0u: goto label_7F0E46B0;
    case 0x7F0E46B4u: goto label_7F0E46B4;
    case 0x7F0E46B8u: goto label_7F0E46B8;
    case 0x7F0E46BCu: goto label_7F0E46BC;
    case 0x7F0E46C0u: goto label_7F0E46C0;
    case 0x7F0E46C4u: goto label_7F0E46C4;
    case 0x7F0E46C8u: goto label_7F0E46C8;
    case 0x7F0E46CCu: goto label_7F0E46CC;
    case 0x7F0E46D0u: goto label_7F0E46D0;
    case 0x7F0E46D4u: goto label_7F0E46D4;
    case 0x7F0E46D8u: goto label_7F0E46D8;
    case 0x7F0E46DCu: goto label_7F0E46DC;
    case 0x7F0E46E0u: goto label_7F0E46E0;
    case 0x7F0E46E4u: goto label_7F0E46E4;
    case 0x7F0E46E8u: goto label_7F0E46E8;
    case 0x7F0E46ECu: goto label_7F0E46EC;
    case 0x7F0E46F0u: goto label_7F0E46F0;
    case 0x7F0E46F4u: goto label_7F0E46F4;
    case 0x7F0E46F8u: goto label_7F0E46F8;
    case 0x7F0E46FCu: goto label_7F0E46FC;
    case 0x7F0E4700u: goto label_7F0E4700;
    case 0x7F0E4704u: goto label_7F0E4704;
    case 0x7F0E4708u: goto label_7F0E4708;
    case 0x7F0E470Cu: goto label_7F0E470C;
    case 0x7F0E4710u: goto label_7F0E4710;
    case 0x7F0E4714u: goto label_7F0E4714;
    case 0x7F0E4718u: goto label_7F0E4718;
    case 0x7F0E471Cu: goto label_7F0E471C;
    case 0x7F0E4720u: goto label_7F0E4720;
    case 0x7F0E4724u: goto label_7F0E4724;
    case 0x7F0E4728u: goto label_7F0E4728;
    case 0x7F0E472Cu: goto label_7F0E472C;
    case 0x7F0E4730u: goto label_7F0E4730;
    case 0x7F0E4734u: goto label_7F0E4734;
    case 0x7F0E4738u: goto label_7F0E4738;
    case 0x7F0E473Cu: goto label_7F0E473C;
    case 0x7F0E4740u: goto label_7F0E4740;
    case 0x7F0E4744u: goto label_7F0E4744;
    case 0x7F0E4748u: goto label_7F0E4748;
    case 0x7F0E474Cu: goto label_7F0E474C;
    case 0x7F0E4750u: goto label_7F0E4750;
    case 0x7F0E4754u: goto label_7F0E4754;
    case 0x7F0E4758u: goto label_7F0E4758;
    case 0x7F0E475Cu: goto label_7F0E475C;
    case 0x7F0E4760u: goto label_7F0E4760;
    case 0x7F0E4764u: goto label_7F0E4764;
    case 0x7F0E4768u: goto label_7F0E4768;
    case 0x7F0E476Cu: goto label_7F0E476C;
    case 0x7F0E4770u: goto label_7F0E4770;
    case 0x7F0E4774u: goto label_7F0E4774;
    case 0x7F0E4778u: goto label_7F0E4778;
    case 0x7F0E477Cu: goto label_7F0E477C;
    case 0x7F0E4780u: goto label_7F0E4780;
    case 0x7F0E4784u: goto label_7F0E4784;
    case 0x7F0E4788u: goto label_7F0E4788;
    case 0x7F0E478Cu: goto label_7F0E478C;
    case 0x7F0E4790u: goto label_7F0E4790;
    case 0x7F0E4794u: goto label_7F0E4794;
    case 0x7F0E4798u: goto label_7F0E4798;
    case 0x7F0E479Cu: goto label_7F0E479C;
    case 0x7F0E47A0u: goto label_7F0E47A0;
    case 0x7F0E47A4u: goto label_7F0E47A4;
    case 0x7F0E47A8u: goto label_7F0E47A8;
    case 0x7F0E47ACu: goto label_7F0E47AC;
    case 0x7F0E47B0u: goto label_7F0E47B0;
    case 0x7F0E47B4u: goto label_7F0E47B4;
    case 0x7F0E47B8u: goto label_7F0E47B8;
    case 0x7F0E47BCu: goto label_7F0E47BC;
    case 0x7F0E47C0u: goto label_7F0E47C0;
    case 0x7F0E47C4u: goto label_7F0E47C4;
    case 0x7F0E47C8u: goto label_7F0E47C8;
    case 0x7F0E47CCu: goto label_7F0E47CC;
    case 0x7F0E47D0u: goto label_7F0E47D0;
    case 0x7F0E47D4u: goto label_7F0E47D4;
    case 0x7F0E47D8u: goto label_7F0E47D8;
    case 0x7F0E47DCu: goto label_7F0E47DC;
    case 0x7F0E47E0u: goto label_7F0E47E0;
    case 0x7F0E47E4u: goto label_7F0E47E4;
    case 0x7F0E47E8u: goto label_7F0E47E8;
    case 0x7F0E47ECu: goto label_7F0E47EC;
    case 0x7F0E47F0u: goto label_7F0E47F0;
    case 0x7F0E47F4u: goto label_7F0E47F4;
    case 0x7F0E47F8u: goto label_7F0E47F8;
    case 0x7F0E47FCu: goto label_7F0E47FC;
    case 0x7F0E4800u: goto label_7F0E4800;
    case 0x7F0E4804u: goto label_7F0E4804;
    case 0x7F0E4808u: goto label_7F0E4808;
    case 0x7F0E480Cu: goto label_7F0E480C;
    case 0x7F0E4810u: goto label_7F0E4810;
    case 0x7F0E4814u: goto label_7F0E4814;
    case 0x7F0E4818u: goto label_7F0E4818;
    case 0x7F0E481Cu: goto label_7F0E481C;
    case 0x7F0E4820u: goto label_7F0E4820;
    case 0x7F0E4824u: goto label_7F0E4824;
    case 0x7F0E4828u: goto label_7F0E4828;
    case 0x7F0E482Cu: goto label_7F0E482C;
    case 0x7F0E4830u: goto label_7F0E4830;
    case 0x7F0E4834u: goto label_7F0E4834;
    case 0x7F0E4838u: goto label_7F0E4838;
    case 0x7F0E483Cu: goto label_7F0E483C;
    case 0x7F0E4840u: goto label_7F0E4840;
    case 0x7F0E4844u: goto label_7F0E4844;
    case 0x7F0E4848u: goto label_7F0E4848;
    case 0x7F0E484Cu: goto label_7F0E484C;
    case 0x7F0E4850u: goto label_7F0E4850;
    case 0x7F0E4854u: goto label_7F0E4854;
    case 0x7F0E4858u: goto label_7F0E4858;
    case 0x7F0E485Cu: goto label_7F0E485C;
    case 0x7F0E4860u: goto label_7F0E4860;
    case 0x7F0E4864u: goto label_7F0E4864;
    case 0x7F0E4868u: goto label_7F0E4868;
    case 0x7F0E486Cu: goto label_7F0E486C;
    case 0x7F0E4870u: goto label_7F0E4870;
    case 0x7F0E4874u: goto label_7F0E4874;
    case 0x7F0E4878u: goto label_7F0E4878;
    case 0x7F0E487Cu: goto label_7F0E487C;
    case 0x7F0E4880u: goto label_7F0E4880;
    case 0x7F0E4884u: goto label_7F0E4884;
    case 0x7F0E4888u: goto label_7F0E4888;
    case 0x7F0E488Cu: goto label_7F0E488C;
    case 0x7F0E4890u: goto label_7F0E4890;
    case 0x7F0E4894u: goto label_7F0E4894;
    case 0x7F0E4898u: goto label_7F0E4898;
    case 0x7F0E489Cu: goto label_7F0E489C;
    case 0x7F0E48A0u: goto label_7F0E48A0;
    case 0x7F0E48A4u: goto label_7F0E48A4;
    case 0x7F0E48A8u: goto label_7F0E48A8;
    case 0x7F0E48ACu: goto label_7F0E48AC;
    case 0x7F0E48B0u: goto label_7F0E48B0;
    case 0x7F0E48B4u: goto label_7F0E48B4;
    case 0x7F0E48B8u: goto label_7F0E48B8;
    case 0x7F0E48BCu: goto label_7F0E48BC;
    case 0x7F0E48C0u: goto label_7F0E48C0;
    case 0x7F0E48C4u: goto label_7F0E48C4;
    case 0x7F0E48C8u: goto label_7F0E48C8;
    case 0x7F0E48CCu: goto label_7F0E48CC;
    case 0x7F0E48D0u: goto label_7F0E48D0;
    case 0x7F0E48D4u: goto label_7F0E48D4;
    case 0x7F0E48D8u: goto label_7F0E48D8;
    case 0x7F0E48DCu: goto label_7F0E48DC;
    case 0x7F0E48E0u: goto label_7F0E48E0;
    case 0x7F0E48E4u: goto label_7F0E48E4;
    case 0x7F0E48E8u: goto label_7F0E48E8;
    case 0x7F0E48ECu: goto label_7F0E48EC;
    case 0x7F0E48F0u: goto label_7F0E48F0;
    case 0x7F0E48F4u: goto label_7F0E48F4;
    case 0x7F0E48F8u: goto label_7F0E48F8;
    case 0x7F0E48FCu: goto label_7F0E48FC;
    case 0x7F0E4900u: goto label_7F0E4900;
    case 0x7F0E4904u: goto label_7F0E4904;
    case 0x7F0E4908u: goto label_7F0E4908;
    case 0x7F0E490Cu: goto label_7F0E490C;
    case 0x7F0E4910u: goto label_7F0E4910;
    case 0x7F0E4914u: goto label_7F0E4914;
    case 0x7F0E4918u: goto label_7F0E4918;
    case 0x7F0E491Cu: goto label_7F0E491C;
    case 0x7F0E4920u: goto label_7F0E4920;
    case 0x7F0E4924u: goto label_7F0E4924;
    case 0x7F0E4928u: goto label_7F0E4928;
    case 0x7F0E492Cu: goto label_7F0E492C;
    case 0x7F0E4930u: goto label_7F0E4930;
    case 0x7F0E4934u: goto label_7F0E4934;
    case 0x7F0E4938u: goto label_7F0E4938;
    case 0x7F0E493Cu: goto label_7F0E493C;
    case 0x7F0E4940u: goto label_7F0E4940;
    case 0x7F0E4944u: goto label_7F0E4944;
    case 0x7F0E4948u: goto label_7F0E4948;
    case 0x7F0E494Cu: goto label_7F0E494C;
    case 0x7F0E4950u: goto label_7F0E4950;
    case 0x7F0E4954u: goto label_7F0E4954;
    case 0x7F0E4958u: goto label_7F0E4958;
    case 0x7F0E495Cu: goto label_7F0E495C;
    case 0x7F0E4960u: goto label_7F0E4960;
    case 0x7F0E4964u: goto label_7F0E4964;
    case 0x7F0E4968u: goto label_7F0E4968;
    case 0x7F0E496Cu: goto label_7F0E496C;
    case 0x7F0E4970u: goto label_7F0E4970;
    case 0x7F0E4974u: goto label_7F0E4974;
    case 0x7F0E4978u: goto label_7F0E4978;
    case 0x7F0E497Cu: goto label_7F0E497C;
    case 0x7F0E4980u: goto label_7F0E4980;
    case 0x7F0E4984u: goto label_7F0E4984;
    case 0x7F0E4988u: goto label_7F0E4988;
    case 0x7F0E498Cu: goto label_7F0E498C;
    case 0x7F0E4990u: goto label_7F0E4990;
    case 0x7F0E4994u: goto label_7F0E4994;
    case 0x7F0E4998u: goto label_7F0E4998;
    case 0x7F0E499Cu: goto label_7F0E499C;
    case 0x7F0E49A0u: goto label_7F0E49A0;
    case 0x7F0E49A4u: goto label_7F0E49A4;
    case 0x7F0E49A8u: goto label_7F0E49A8;
    case 0x7F0E49ACu: goto label_7F0E49AC;
    case 0x7F0E49B0u: goto label_7F0E49B0;
    case 0x7F0E49B4u: goto label_7F0E49B4;
    case 0x7F0E49B8u: goto label_7F0E49B8;
    case 0x7F0E49BCu: goto label_7F0E49BC;
    case 0x7F0E49C0u: goto label_7F0E49C0;
    case 0x7F0E49C4u: goto label_7F0E49C4;
    case 0x7F0E49C8u: goto label_7F0E49C8;
    case 0x7F0E49CCu: goto label_7F0E49CC;
    case 0x7F0E49D0u: goto label_7F0E49D0;
    case 0x7F0E49D4u: goto label_7F0E49D4;
    case 0x7F0E49D8u: goto label_7F0E49D8;
    case 0x7F0E49DCu: goto label_7F0E49DC;
    case 0x7F0E49E0u: goto label_7F0E49E0;
    case 0x7F0E49E4u: goto label_7F0E49E4;
    case 0x7F0E49E8u: goto label_7F0E49E8;
    case 0x7F0E49ECu: goto label_7F0E49EC;
    case 0x7F0E49F0u: goto label_7F0E49F0;
    case 0x7F0E49F4u: goto label_7F0E49F4;
    case 0x7F0E49F8u: goto label_7F0E49F8;
    case 0x7F0E49FCu: goto label_7F0E49FC;
    case 0x7F0E4A00u: goto label_7F0E4A00;
    case 0x7F0E4A04u: goto label_7F0E4A04;
    case 0x7F0E4A08u: goto label_7F0E4A08;
    case 0x7F0E4A0Cu: goto label_7F0E4A0C;
    case 0x7F0E4A10u: goto label_7F0E4A10;
    case 0x7F0E4A14u: goto label_7F0E4A14;
    case 0x7F0E4A18u: goto label_7F0E4A18;
    case 0x7F0E4A1Cu: goto label_7F0E4A1C;
    case 0x7F0E4A20u: goto label_7F0E4A20;
    case 0x7F0E4A24u: goto label_7F0E4A24;
    case 0x7F0E4A28u: goto label_7F0E4A28;
    case 0x7F0E4A2Cu: goto label_7F0E4A2C;
    case 0x7F0E4A30u: goto label_7F0E4A30;
    case 0x7F0E4A34u: goto label_7F0E4A34;
    case 0x7F0E4A38u: goto label_7F0E4A38;
    case 0x7F0E4A3Cu: goto label_7F0E4A3C;
    case 0x7F0E4A40u: goto label_7F0E4A40;
    case 0x7F0E4A44u: goto label_7F0E4A44;
    case 0x7F0E4A48u: goto label_7F0E4A48;
    case 0x7F0E4A4Cu: goto label_7F0E4A4C;
    case 0x7F0E4A50u: goto label_7F0E4A50;
    case 0x7F0E4A54u: goto label_7F0E4A54;
    case 0x7F0E4A58u: goto label_7F0E4A58;
    case 0x7F0E4A5Cu: goto label_7F0E4A5C;
    case 0x7F0E4A60u: goto label_7F0E4A60;
    case 0x7F0E4A64u: goto label_7F0E4A64;
    case 0x7F0E4A68u: goto label_7F0E4A68;
    case 0x7F0E4A6Cu: goto label_7F0E4A6C;
    case 0x7F0E4A70u: goto label_7F0E4A70;
    case 0x7F0E4A74u: goto label_7F0E4A74;
    case 0x7F0E4A78u: goto label_7F0E4A78;
    case 0x7F0E4A7Cu: goto label_7F0E4A7C;
    case 0x7F0E4A80u: goto label_7F0E4A80;
    case 0x7F0E4A84u: goto label_7F0E4A84;
    case 0x7F0E4A88u: goto label_7F0E4A88;
    case 0x7F0E4A8Cu: goto label_7F0E4A8C;
    case 0x7F0E4A90u: goto label_7F0E4A90;
    case 0x7F0E4A94u: goto label_7F0E4A94;
    case 0x7F0E4A98u: goto label_7F0E4A98;
    case 0x7F0E4A9Cu: goto label_7F0E4A9C;
    case 0x7F0E4AA0u: goto label_7F0E4AA0;
    case 0x7F0E4AA4u: goto label_7F0E4AA4;
    case 0x7F0E4AA8u: goto label_7F0E4AA8;
    case 0x7F0E4AACu: goto label_7F0E4AAC;
    case 0x7F0E4AB0u: goto label_7F0E4AB0;
    case 0x7F0E4AB4u: goto label_7F0E4AB4;
    case 0x7F0E4AB8u: goto label_7F0E4AB8;
    case 0x7F0E4ABCu: goto label_7F0E4ABC;
    case 0x7F0E4AC0u: goto label_7F0E4AC0;
    case 0x7F0E4AC4u: goto label_7F0E4AC4;
    case 0x7F0E4AC8u: goto label_7F0E4AC8;
    case 0x7F0E4ACCu: goto label_7F0E4ACC;
    case 0x7F0E4AD0u: goto label_7F0E4AD0;
    case 0x7F0E4AD4u: goto label_7F0E4AD4;
    case 0x7F0E4AD8u: goto label_7F0E4AD8;
    case 0x7F0E4ADCu: goto label_7F0E4ADC;
    case 0x7F0E4AE0u: goto label_7F0E4AE0;
    case 0x7F0E4AE4u: goto label_7F0E4AE4;
    case 0x7F0E4AE8u: goto label_7F0E4AE8;
    case 0x7F0E4AECu: goto label_7F0E4AEC;
    case 0x7F0E4AF0u: goto label_7F0E4AF0;
    case 0x7F0E4AF4u: goto label_7F0E4AF4;
    case 0x7F0E4AF8u: goto label_7F0E4AF8;
    case 0x7F0E4AFCu: goto label_7F0E4AFC;
    case 0x7F0E4B00u: goto label_7F0E4B00;
    case 0x7F0E4B04u: goto label_7F0E4B04;
    case 0x7F0E4B08u: goto label_7F0E4B08;
    case 0x7F0E4B0Cu: goto label_7F0E4B0C;
    case 0x7F0E4B10u: goto label_7F0E4B10;
    case 0x7F0E4B14u: goto label_7F0E4B14;
    case 0x7F0E4B18u: goto label_7F0E4B18;
    case 0x7F0E4B1Cu: goto label_7F0E4B1C;
    case 0x7F0E4B20u: goto label_7F0E4B20;
    case 0x7F0E4B24u: goto label_7F0E4B24;
    case 0x7F0E4B28u: goto label_7F0E4B28;
    case 0x7F0E4B2Cu: goto label_7F0E4B2C;
    case 0x7F0E4B30u: goto label_7F0E4B30;
    case 0x7F0E4B34u: goto label_7F0E4B34;
    case 0x7F0E4B38u: goto label_7F0E4B38;
    case 0x7F0E4B3Cu: goto label_7F0E4B3C;
    case 0x7F0E4B40u: goto label_7F0E4B40;
    case 0x7F0E4B44u: goto label_7F0E4B44;
    case 0x7F0E4B48u: goto label_7F0E4B48;
    case 0x7F0E4B4Cu: goto label_7F0E4B4C;
    case 0x7F0E4B50u: goto label_7F0E4B50;
    case 0x7F0E4B54u: goto label_7F0E4B54;
    case 0x7F0E4B58u: goto label_7F0E4B58;
    case 0x7F0E4B5Cu: goto label_7F0E4B5C;
    case 0x7F0E4B60u: goto label_7F0E4B60;
    case 0x7F0E4B64u: goto label_7F0E4B64;
    case 0x7F0E4B68u: goto label_7F0E4B68;
    case 0x7F0E4B6Cu: goto label_7F0E4B6C;
    case 0x7F0E4B70u: goto label_7F0E4B70;
    case 0x7F0E4B74u: goto label_7F0E4B74;
    case 0x7F0E4B78u: goto label_7F0E4B78;
    case 0x7F0E4B7Cu: goto label_7F0E4B7C;
    case 0x7F0E4B80u: goto label_7F0E4B80;
    case 0x7F0E4B84u: goto label_7F0E4B84;
    case 0x7F0E4B88u: goto label_7F0E4B88;
    case 0x7F0E4B8Cu: goto label_7F0E4B8C;
    case 0x7F0E4B90u: goto label_7F0E4B90;
    case 0x7F0E4B94u: goto label_7F0E4B94;
    case 0x7F0E4B98u: goto label_7F0E4B98;
    case 0x7F0E4B9Cu: goto label_7F0E4B9C;
    case 0x7F0E4BA0u: goto label_7F0E4BA0;
    case 0x7F0E4BA4u: goto label_7F0E4BA4;
    case 0x7F0E4BA8u: goto label_7F0E4BA8;
    case 0x7F0E4BACu: goto label_7F0E4BAC;
    case 0x7F0E4BB0u: goto label_7F0E4BB0;
    case 0x7F0E4BB4u: goto label_7F0E4BB4;
    case 0x7F0E4BB8u: goto label_7F0E4BB8;
    case 0x7F0E4BBCu: goto label_7F0E4BBC;
    case 0x7F0E4BC0u: goto label_7F0E4BC0;
    case 0x7F0E4BC4u: goto label_7F0E4BC4;
    case 0x7F0E4BC8u: goto label_7F0E4BC8;
    case 0x7F0E4BCCu: goto label_7F0E4BCC;
    case 0x7F0E4BD0u: goto label_7F0E4BD0;
    case 0x7F0E4BD4u: goto label_7F0E4BD4;
    case 0x7F0E4BD8u: goto label_7F0E4BD8;
    case 0x7F0E4BDCu: goto label_7F0E4BDC;
    case 0x7F0E4BE0u: goto label_7F0E4BE0;
    case 0x7F0E4BE4u: goto label_7F0E4BE4;
    case 0x7F0E4BE8u: goto label_7F0E4BE8;
    case 0x7F0E4BECu: goto label_7F0E4BEC;
    case 0x7F0E4BF0u: goto label_7F0E4BF0;
    case 0x7F0E4BF4u: goto label_7F0E4BF4;
    case 0x7F0E4BF8u: goto label_7F0E4BF8;
    case 0x7F0E4BFCu: goto label_7F0E4BFC;
    case 0x7F0E4C00u: goto label_7F0E4C00;
    case 0x7F0E4C04u: goto label_7F0E4C04;
    case 0x7F0E4C08u: goto label_7F0E4C08;
    case 0x7F0E4C0Cu: goto label_7F0E4C0C;
    case 0x7F0E4C10u: goto label_7F0E4C10;
    case 0x7F0E4C14u: goto label_7F0E4C14;
    case 0x7F0E4C18u: goto label_7F0E4C18;
    case 0x7F0E4C1Cu: goto label_7F0E4C1C;
    case 0x7F0E4C20u: goto label_7F0E4C20;
    case 0x7F0E4C24u: goto label_7F0E4C24;
    case 0x7F0E4C28u: goto label_7F0E4C28;
    case 0x7F0E4C2Cu: goto label_7F0E4C2C;
    case 0x7F0E4C30u: goto label_7F0E4C30;
    case 0x7F0E4C34u: goto label_7F0E4C34;
    case 0x7F0E4C38u: goto label_7F0E4C38;
    case 0x7F0E4C3Cu: goto label_7F0E4C3C;
    case 0x7F0E4C40u: goto label_7F0E4C40;
    case 0x7F0E4C44u: goto label_7F0E4C44;
    case 0x7F0E4C48u: goto label_7F0E4C48;
    case 0x7F0E4C4Cu: goto label_7F0E4C4C;
    case 0x7F0E4C50u: goto label_7F0E4C50;
    case 0x7F0E4C54u: goto label_7F0E4C54;
    case 0x7F0E4C58u: goto label_7F0E4C58;
    case 0x7F0E4C5Cu: goto label_7F0E4C5C;
    case 0x7F0E4C60u: goto label_7F0E4C60;
    case 0x7F0E4C64u: goto label_7F0E4C64;
    case 0x7F0E4C68u: goto label_7F0E4C68;
    case 0x7F0E4C6Cu: goto label_7F0E4C6C;
    case 0x7F0E4C70u: goto label_7F0E4C70;
    case 0x7F0E4C74u: goto label_7F0E4C74;
    case 0x7F0E4C78u: goto label_7F0E4C78;
    case 0x7F0E4C7Cu: goto label_7F0E4C7C;
    case 0x7F0E4C80u: goto label_7F0E4C80;
    case 0x7F0E4C84u: goto label_7F0E4C84;
    case 0x7F0E4C88u: goto label_7F0E4C88;
    case 0x7F0E4C8Cu: goto label_7F0E4C8C;
    case 0x7F0E4C90u: goto label_7F0E4C90;
    case 0x7F0E4C94u: goto label_7F0E4C94;
    case 0x7F0E4C98u: goto label_7F0E4C98;
    case 0x7F0E4C9Cu: goto label_7F0E4C9C;
    case 0x7F0E4CA0u: goto label_7F0E4CA0;
    case 0x7F0E4CA4u: goto label_7F0E4CA4;
    case 0x7F0E4CA8u: goto label_7F0E4CA8;
    case 0x7F0E4CACu: goto label_7F0E4CAC;
    case 0x7F0E4CB0u: goto label_7F0E4CB0;
    case 0x7F0E4CB4u: goto label_7F0E4CB4;
    case 0x7F0E4CB8u: goto label_7F0E4CB8;
    case 0x7F0E4CBCu: goto label_7F0E4CBC;
    case 0x7F0E4CC0u: goto label_7F0E4CC0;
    case 0x7F0E4CC4u: goto label_7F0E4CC4;
    case 0x7F0E4CC8u: goto label_7F0E4CC8;
    case 0x7F0E4CCCu: goto label_7F0E4CCC;
    case 0x7F0E4CD0u: goto label_7F0E4CD0;
    case 0x7F0E4CD4u: goto label_7F0E4CD4;
    case 0x7F0E4CD8u: goto label_7F0E4CD8;
    case 0x7F0E4CDCu: goto label_7F0E4CDC;
    case 0x7F0E4CE0u: goto label_7F0E4CE0;
    case 0x7F0E4CE4u: goto label_7F0E4CE4;
    case 0x7F0E4CE8u: goto label_7F0E4CE8;
    case 0x7F0E4CECu: goto label_7F0E4CEC;
    case 0x7F0E4CF0u: goto label_7F0E4CF0;
    case 0x7F0E4CF4u: goto label_7F0E4CF4;
    case 0x7F0E4CF8u: goto label_7F0E4CF8;
    case 0x7F0E4CFCu: goto label_7F0E4CFC;
    case 0x7F0E4D00u: goto label_7F0E4D00;
    case 0x7F0E4D04u: goto label_7F0E4D04;
    case 0x7F0E4D08u: goto label_7F0E4D08;
    case 0x7F0E4D0Cu: goto label_7F0E4D0C;
    case 0x7F0E4D10u: goto label_7F0E4D10;
    case 0x7F0E4D14u: goto label_7F0E4D14;
    case 0x7F0E4D18u: goto label_7F0E4D18;
    case 0x7F0E4D1Cu: goto label_7F0E4D1C;
    case 0x7F0E4D20u: goto label_7F0E4D20;
    case 0x7F0E4D24u: goto label_7F0E4D24;
    case 0x7F0E4D28u: goto label_7F0E4D28;
    case 0x7F0E4D2Cu: goto label_7F0E4D2C;
    case 0x7F0E4D30u: goto label_7F0E4D30;
    case 0x7F0E4D34u: goto label_7F0E4D34;
    case 0x7F0E4D38u: goto label_7F0E4D38;
    case 0x7F0E4D3Cu: goto label_7F0E4D3C;
    case 0x7F0E4D40u: goto label_7F0E4D40;
    case 0x7F0E4D44u: goto label_7F0E4D44;
    case 0x7F0E4D48u: goto label_7F0E4D48;
    case 0x7F0E4D4Cu: goto label_7F0E4D4C;
    case 0x7F0E4D50u: goto label_7F0E4D50;
    case 0x7F0E4D54u: goto label_7F0E4D54;
    case 0x7F0E4D58u: goto label_7F0E4D58;
    case 0x7F0E4D5Cu: goto label_7F0E4D5C;
    case 0x7F0E4D60u: goto label_7F0E4D60;
    case 0x7F0E4D64u: goto label_7F0E4D64;
    case 0x7F0E4D68u: goto label_7F0E4D68;
    case 0x7F0E4D6Cu: goto label_7F0E4D6C;
    case 0x7F0E4D70u: goto label_7F0E4D70;
    case 0x7F0E4D74u: goto label_7F0E4D74;
    case 0x7F0E4D78u: goto label_7F0E4D78;
    case 0x7F0E4D7Cu: goto label_7F0E4D7C;
    case 0x7F0E4D80u: goto label_7F0E4D80;
    case 0x7F0E4D84u: goto label_7F0E4D84;
    case 0x7F0E4D88u: goto label_7F0E4D88;
    case 0x7F0E4D8Cu: goto label_7F0E4D8C;
    case 0x7F0E4D90u: goto label_7F0E4D90;
    case 0x7F0E4D94u: goto label_7F0E4D94;
    case 0x7F0E4D98u: goto label_7F0E4D98;
    case 0x7F0E4D9Cu: goto label_7F0E4D9C;
    case 0x7F0E4DA0u: goto label_7F0E4DA0;
    case 0x7F0E4DA4u: goto label_7F0E4DA4;
    case 0x7F0E4DA8u: goto label_7F0E4DA8;
    case 0x7F0E4DACu: goto label_7F0E4DAC;
    case 0x7F0E4DB0u: goto label_7F0E4DB0;
    case 0x7F0E4DB4u: goto label_7F0E4DB4;
    case 0x7F0E4DB8u: goto label_7F0E4DB8;
    case 0x7F0E4DBCu: goto label_7F0E4DBC;
    case 0x7F0E4DC0u: goto label_7F0E4DC0;
    case 0x7F0E4DC4u: goto label_7F0E4DC4;
    case 0x7F0E4DC8u: goto label_7F0E4DC8;
    case 0x7F0E4DCCu: goto label_7F0E4DCC;
    case 0x7F0E4DD0u: goto label_7F0E4DD0;
    case 0x7F0E4DD4u: goto label_7F0E4DD4;
    case 0x7F0E4DD8u: goto label_7F0E4DD8;
    case 0x7F0E4DDCu: goto label_7F0E4DDC;
    case 0x7F0E4DE0u: goto label_7F0E4DE0;
    case 0x7F0E4DE4u: goto label_7F0E4DE4;
    case 0x7F0E4DE8u: goto label_7F0E4DE8;
    case 0x7F0E4DECu: goto label_7F0E4DEC;
    case 0x7F0E4DF0u: goto label_7F0E4DF0;
    case 0x7F0E4DF4u: goto label_7F0E4DF4;
    case 0x7F0E4DF8u: goto label_7F0E4DF8;
    case 0x7F0E4DFCu: goto label_7F0E4DFC;
    case 0x7F0E4E00u: goto label_7F0E4E00;
    case 0x7F0E4E04u: goto label_7F0E4E04;
    case 0x7F0E4E08u: goto label_7F0E4E08;
    case 0x7F0E4E0Cu: goto label_7F0E4E0C;
    case 0x7F0E4E10u: goto label_7F0E4E10;
    case 0x7F0E4E14u: goto label_7F0E4E14;
    case 0x7F0E4E18u: goto label_7F0E4E18;
    case 0x7F0E4E1Cu: goto label_7F0E4E1C;
    case 0x7F0E4E20u: goto label_7F0E4E20;
    case 0x7F0E4E24u: goto label_7F0E4E24;
    case 0x7F0E4E28u: goto label_7F0E4E28;
    case 0x7F0E4E2Cu: goto label_7F0E4E2C;
    case 0x7F0E4E30u: goto label_7F0E4E30;
    case 0x7F0E4E34u: goto label_7F0E4E34;
    case 0x7F0E4E38u: goto label_7F0E4E38;
    case 0x7F0E4E3Cu: goto label_7F0E4E3C;
    case 0x7F0E4E40u: goto label_7F0E4E40;
    case 0x7F0E4E44u: goto label_7F0E4E44;
    case 0x7F0E4E48u: goto label_7F0E4E48;
    case 0x7F0E4E4Cu: goto label_7F0E4E4C;
    case 0x7F0E4E50u: goto label_7F0E4E50;
    case 0x7F0E4E54u: goto label_7F0E4E54;
    case 0x7F0E4E58u: goto label_7F0E4E58;
    case 0x7F0E4E5Cu: goto label_7F0E4E5C;
    case 0x7F0E4E60u: goto label_7F0E4E60;
    case 0x7F0E4E64u: goto label_7F0E4E64;
    case 0x7F0E4E68u: goto label_7F0E4E68;
    case 0x7F0E4E6Cu: goto label_7F0E4E6C;
    case 0x7F0E4E70u: goto label_7F0E4E70;
    case 0x7F0E4E74u: goto label_7F0E4E74;
    case 0x7F0E4E78u: goto label_7F0E4E78;
    case 0x7F0E4E7Cu: goto label_7F0E4E7C;
    case 0x7F0E4E80u: goto label_7F0E4E80;
    case 0x7F0E4E84u: goto label_7F0E4E84;
    case 0x7F0E4E88u: goto label_7F0E4E88;
    case 0x7F0E4E8Cu: goto label_7F0E4E8C;
    case 0x7F0E4E90u: goto label_7F0E4E90;
    case 0x7F0E4E94u: goto label_7F0E4E94;
    case 0x7F0E4E98u: goto label_7F0E4E98;
    case 0x7F0E4E9Cu: goto label_7F0E4E9C;
    case 0x7F0E4EA0u: goto label_7F0E4EA0;
    case 0x7F0E4EA4u: goto label_7F0E4EA4;
    case 0x7F0E4EA8u: goto label_7F0E4EA8;
    case 0x7F0E4EACu: goto label_7F0E4EAC;
    case 0x7F0E4EB0u: goto label_7F0E4EB0;
    case 0x7F0E4EB4u: goto label_7F0E4EB4;
    case 0x7F0E4EB8u: goto label_7F0E4EB8;
    case 0x7F0E4EBCu: goto label_7F0E4EBC;
    case 0x7F0E4EC0u: goto label_7F0E4EC0;
    case 0x7F0E4EC4u: goto label_7F0E4EC4;
    case 0x7F0E4EC8u: goto label_7F0E4EC8;
    case 0x7F0E4ECCu: goto label_7F0E4ECC;
    case 0x7F0E4ED0u: goto label_7F0E4ED0;
    case 0x7F0E4ED4u: goto label_7F0E4ED4;
    case 0x7F0E4ED8u: goto label_7F0E4ED8;
    case 0x7F0E4EDCu: goto label_7F0E4EDC;
    case 0x7F0E4EE0u: goto label_7F0E4EE0;
    case 0x7F0E4EE4u: goto label_7F0E4EE4;
    case 0x7F0E4EE8u: goto label_7F0E4EE8;
    case 0x7F0E4EECu: goto label_7F0E4EEC;
    case 0x7F0E4EF0u: goto label_7F0E4EF0;
    case 0x7F0E4EF4u: goto label_7F0E4EF4;
    case 0x7F0E4EF8u: goto label_7F0E4EF8;
    case 0x7F0E4EFCu: goto label_7F0E4EFC;
    case 0x7F0E4F00u: goto label_7F0E4F00;
    case 0x7F0E4F04u: goto label_7F0E4F04;
    case 0x7F0E4F08u: goto label_7F0E4F08;
    case 0x7F0E4F0Cu: goto label_7F0E4F0C;
    case 0x7F0E4F10u: goto label_7F0E4F10;
    case 0x7F0E4F14u: goto label_7F0E4F14;
    case 0x7F0E4F18u: goto label_7F0E4F18;
    case 0x7F0E4F1Cu: goto label_7F0E4F1C;
    case 0x7F0E4F20u: goto label_7F0E4F20;
    case 0x7F0E4F24u: goto label_7F0E4F24;
    case 0x7F0E4F28u: goto label_7F0E4F28;
    case 0x7F0E4F2Cu: goto label_7F0E4F2C;
    case 0x7F0E4F30u: goto label_7F0E4F30;
    case 0x7F0E4F34u: goto label_7F0E4F34;
    case 0x7F0E4F38u: goto label_7F0E4F38;
    case 0x7F0E4F3Cu: goto label_7F0E4F3C;
    case 0x7F0E4F40u: goto label_7F0E4F40;
    case 0x7F0E4F44u: goto label_7F0E4F44;
    case 0x7F0E4F48u: goto label_7F0E4F48;
    case 0x7F0E4F4Cu: goto label_7F0E4F4C;
    case 0x7F0E4F50u: goto label_7F0E4F50;
    case 0x7F0E4F54u: goto label_7F0E4F54;
    case 0x7F0E4F58u: goto label_7F0E4F58;
    case 0x7F0E4F5Cu: goto label_7F0E4F5C;
    case 0x7F0E4F60u: goto label_7F0E4F60;
    case 0x7F0E4F64u: goto label_7F0E4F64;
    case 0x7F0E4F68u: goto label_7F0E4F68;
    case 0x7F0E4F6Cu: goto label_7F0E4F6C;
    case 0x7F0E4F70u: goto label_7F0E4F70;
    case 0x7F0E4F74u: goto label_7F0E4F74;
    case 0x7F0E4F78u: goto label_7F0E4F78;
    case 0x7F0E4F7Cu: goto label_7F0E4F7C;
    case 0x7F0E4F80u: goto label_7F0E4F80;
    case 0x7F0E4F84u: goto label_7F0E4F84;
    case 0x7F0E4F88u: goto label_7F0E4F88;
    case 0x7F0E4F8Cu: goto label_7F0E4F8C;
    case 0x7F0E4F90u: goto label_7F0E4F90;
    case 0x7F0E4F94u: goto label_7F0E4F94;
    case 0x7F0E4F98u: goto label_7F0E4F98;
    case 0x7F0E4F9Cu: goto label_7F0E4F9C;
    case 0x7F0E4FA0u: goto label_7F0E4FA0;
    case 0x7F0E4FA4u: goto label_7F0E4FA4;
    case 0x7F0E4FA8u: goto label_7F0E4FA8;
    case 0x7F0E4FACu: goto label_7F0E4FAC;
    case 0x7F0E4FB0u: goto label_7F0E4FB0;
    case 0x7F0E4FB4u: goto label_7F0E4FB4;
    case 0x7F0E4FB8u: goto label_7F0E4FB8;
    case 0x7F0E4FBCu: goto label_7F0E4FBC;
    case 0x7F0E4FC0u: goto label_7F0E4FC0;
    case 0x7F0E4FC4u: goto label_7F0E4FC4;
    case 0x7F0E4FC8u: goto label_7F0E4FC8;
    case 0x7F0E4FCCu: goto label_7F0E4FCC;
    case 0x7F0E4FD0u: goto label_7F0E4FD0;
    case 0x7F0E4FD4u: goto label_7F0E4FD4;
    case 0x7F0E4FD8u: goto label_7F0E4FD8;
    case 0x7F0E4FDCu: goto label_7F0E4FDC;
    case 0x7F0E4FE0u: goto label_7F0E4FE0;
    case 0x7F0E4FE4u: goto label_7F0E4FE4;
    case 0x7F0E4FE8u: goto label_7F0E4FE8;
    case 0x7F0E4FECu: goto label_7F0E4FEC;
    case 0x7F0E4FF0u: goto label_7F0E4FF0;
    case 0x7F0E4FF4u: goto label_7F0E4FF4;
    case 0x7F0E4FF8u: goto label_7F0E4FF8;
    case 0x7F0E4FFCu: goto label_7F0E4FFC;
    case 0x7F0E5000u: goto label_7F0E5000;
    case 0x7F0E5004u: goto label_7F0E5004;
    case 0x7F0E5008u: goto label_7F0E5008;
    case 0x7F0E500Cu: goto label_7F0E500C;
    case 0x7F0E5010u: goto label_7F0E5010;
    case 0x7F0E5014u: goto label_7F0E5014;
    case 0x7F0E5018u: goto label_7F0E5018;
    case 0x7F0E501Cu: goto label_7F0E501C;
    case 0x7F0E5020u: goto label_7F0E5020;
    case 0x7F0E5024u: goto label_7F0E5024;
    case 0x7F0E5028u: goto label_7F0E5028;
    case 0x7F0E502Cu: goto label_7F0E502C;
    case 0x7F0E5030u: goto label_7F0E5030;
    case 0x7F0E5034u: goto label_7F0E5034;
    case 0x7F0E5038u: goto label_7F0E5038;
    case 0x7F0E503Cu: goto label_7F0E503C;
    case 0x7F0E5040u: goto label_7F0E5040;
    case 0x7F0E5044u: goto label_7F0E5044;
    case 0x7F0E5048u: goto label_7F0E5048;
    case 0x7F0E504Cu: goto label_7F0E504C;
    case 0x7F0E5050u: goto label_7F0E5050;
    case 0x7F0E5054u: goto label_7F0E5054;
    case 0x7F0E5058u: goto label_7F0E5058;
    case 0x7F0E505Cu: goto label_7F0E505C;
    case 0x7F0E5060u: goto label_7F0E5060;
    case 0x7F0E5064u: goto label_7F0E5064;
    case 0x7F0E5068u: goto label_7F0E5068;
    case 0x7F0E506Cu: goto label_7F0E506C;
    case 0x7F0E5070u: goto label_7F0E5070;
    case 0x7F0E5074u: goto label_7F0E5074;
    case 0x7F0E5078u: goto label_7F0E5078;
    case 0x7F0E507Cu: goto label_7F0E507C;
    case 0x7F0E5080u: goto label_7F0E5080;
    case 0x7F0E5084u: goto label_7F0E5084;
    case 0x7F0E5088u: goto label_7F0E5088;
    case 0x7F0E508Cu: goto label_7F0E508C;
    case 0x7F0E5090u: goto label_7F0E5090;
    case 0x7F0E5094u: goto label_7F0E5094;
    case 0x7F0E5098u: goto label_7F0E5098;
    case 0x7F0E509Cu: goto label_7F0E509C;
    case 0x7F0E50A0u: goto label_7F0E50A0;
    case 0x7F0E50A4u: goto label_7F0E50A4;
    case 0x7F0E50A8u: goto label_7F0E50A8;
    case 0x7F0E50ACu: goto label_7F0E50AC;
    case 0x7F0E50B0u: goto label_7F0E50B0;
    case 0x7F0E50B4u: goto label_7F0E50B4;
    case 0x7F0E50B8u: goto label_7F0E50B8;
    case 0x7F0E50BCu: goto label_7F0E50BC;
    case 0x7F0E50C0u: goto label_7F0E50C0;
    case 0x7F0E50C4u: goto label_7F0E50C4;
    case 0x7F0E50C8u: goto label_7F0E50C8;
    case 0x7F0E50CCu: goto label_7F0E50CC;
    case 0x7F0E50D0u: goto label_7F0E50D0;
    case 0x7F0E50D4u: goto label_7F0E50D4;
    case 0x7F0E50D8u: goto label_7F0E50D8;
    case 0x7F0E50DCu: goto label_7F0E50DC;
    case 0x7F0E50E0u: goto label_7F0E50E0;
    case 0x7F0E50E4u: goto label_7F0E50E4;
    case 0x7F0E50E8u: goto label_7F0E50E8;
    case 0x7F0E50ECu: goto label_7F0E50EC;
    case 0x7F0E50F0u: goto label_7F0E50F0;
    case 0x7F0E50F4u: goto label_7F0E50F4;
    case 0x7F0E50F8u: goto label_7F0E50F8;
    case 0x7F0E50FCu: goto label_7F0E50FC;
    case 0x7F0E5100u: goto label_7F0E5100;
    case 0x7F0E5104u: goto label_7F0E5104;
    case 0x7F0E5108u: goto label_7F0E5108;
    case 0x7F0E510Cu: goto label_7F0E510C;
    case 0x7F0E5110u: goto label_7F0E5110;
    case 0x7F0E5114u: goto label_7F0E5114;
    case 0x7F0E5118u: goto label_7F0E5118;
    case 0x7F0E511Cu: goto label_7F0E511C;
    case 0x7F0E5120u: goto label_7F0E5120;
    case 0x7F0E5124u: goto label_7F0E5124;
    case 0x7F0E5128u: goto label_7F0E5128;
    case 0x7F0E512Cu: goto label_7F0E512C;
    case 0x7F0E5130u: goto label_7F0E5130;
    case 0x7F0E5134u: goto label_7F0E5134;
    case 0x7F0E5138u: goto label_7F0E5138;
    case 0x7F0E513Cu: goto label_7F0E513C;
    case 0x7F0E5140u: goto label_7F0E5140;
    case 0x7F0E5144u: goto label_7F0E5144;
    case 0x7F0E5148u: goto label_7F0E5148;
    case 0x7F0E514Cu: goto label_7F0E514C;
    case 0x7F0E5150u: goto label_7F0E5150;
    case 0x7F0E5154u: goto label_7F0E5154;
    case 0x7F0E5158u: goto label_7F0E5158;
    case 0x7F0E515Cu: goto label_7F0E515C;
    case 0x7F0E5160u: goto label_7F0E5160;
    case 0x7F0E5164u: goto label_7F0E5164;
    case 0x7F0E5168u: goto label_7F0E5168;
    case 0x7F0E516Cu: goto label_7F0E516C;
    case 0x7F0E5170u: goto label_7F0E5170;
    case 0x7F0E5174u: goto label_7F0E5174;
    case 0x7F0E5178u: goto label_7F0E5178;
    case 0x7F0E517Cu: goto label_7F0E517C;
    case 0x7F0E5180u: goto label_7F0E5180;
    case 0x7F0E5184u: goto label_7F0E5184;
    case 0x7F0E5188u: goto label_7F0E5188;
    case 0x7F0E518Cu: goto label_7F0E518C;
    case 0x7F0E5190u: goto label_7F0E5190;
    case 0x7F0E5194u: goto label_7F0E5194;
    case 0x7F0E5198u: goto label_7F0E5198;
    case 0x7F0E519Cu: goto label_7F0E519C;
    case 0x7F0E51A0u: goto label_7F0E51A0;
    case 0x7F0E51A4u: goto label_7F0E51A4;
    case 0x7F0E51A8u: goto label_7F0E51A8;
    case 0x7F0E51ACu: goto label_7F0E51AC;
    case 0x7F0E51B0u: goto label_7F0E51B0;
    case 0x7F0E51B4u: goto label_7F0E51B4;
    case 0x7F0E51B8u: goto label_7F0E51B8;
    case 0x7F0E51BCu: goto label_7F0E51BC;
    case 0x7F0E51C0u: goto label_7F0E51C0;
    case 0x7F0E51C4u: goto label_7F0E51C4;
    case 0x7F0E51C8u: goto label_7F0E51C8;
    case 0x7F0E51CCu: goto label_7F0E51CC;
    case 0x7F0E51D0u: goto label_7F0E51D0;
    case 0x7F0E51D4u: goto label_7F0E51D4;
    case 0x7F0E51D8u: goto label_7F0E51D8;
    case 0x7F0E51DCu: goto label_7F0E51DC;
    case 0x7F0E51E0u: goto label_7F0E51E0;
    case 0x7F0E51E4u: goto label_7F0E51E4;
    case 0x7F0E51E8u: goto label_7F0E51E8;
    case 0x7F0E51ECu: goto label_7F0E51EC;
    case 0x7F0E51F0u: goto label_7F0E51F0;
    case 0x7F0E51F4u: goto label_7F0E51F4;
    case 0x7F0E51F8u: goto label_7F0E51F8;
    case 0x7F0E51FCu: goto label_7F0E51FC;
    case 0x7F0E5200u: goto label_7F0E5200;
    case 0x7F0E5204u: goto label_7F0E5204;
    case 0x7F0E5208u: goto label_7F0E5208;
    case 0x7F0E520Cu: goto label_7F0E520C;
    case 0x7F0E5210u: goto label_7F0E5210;
    case 0x7F0E5214u: goto label_7F0E5214;
    case 0x7F0E5218u: goto label_7F0E5218;
    case 0x7F0E521Cu: goto label_7F0E521C;
    case 0x7F0E5220u: goto label_7F0E5220;
    case 0x7F0E5224u: goto label_7F0E5224;
    case 0x7F0E5228u: goto label_7F0E5228;
    case 0x7F0E522Cu: goto label_7F0E522C;
    case 0x7F0E5230u: goto label_7F0E5230;
    case 0x7F0E5234u: goto label_7F0E5234;
    case 0x7F0E5238u: goto label_7F0E5238;
    case 0x7F0E523Cu: goto label_7F0E523C;
    case 0x7F0E5240u: goto label_7F0E5240;
    case 0x7F0E5244u: goto label_7F0E5244;
    case 0x7F0E5248u: goto label_7F0E5248;
    case 0x7F0E524Cu: goto label_7F0E524C;
    case 0x7F0E5250u: goto label_7F0E5250;
    case 0x7F0E5254u: goto label_7F0E5254;
    case 0x7F0E5258u: goto label_7F0E5258;
    case 0x7F0E525Cu: goto label_7F0E525C;
    case 0x7F0E5260u: goto label_7F0E5260;
    case 0x7F0E5264u: goto label_7F0E5264;
    case 0x7F0E5268u: goto label_7F0E5268;
    case 0x7F0E526Cu: goto label_7F0E526C;
    case 0x7F0E5270u: goto label_7F0E5270;
    case 0x7F0E5274u: goto label_7F0E5274;
    case 0x7F0E5278u: goto label_7F0E5278;
    case 0x7F0E527Cu: goto label_7F0E527C;
    case 0x7F0E5280u: goto label_7F0E5280;
    case 0x7F0E5284u: goto label_7F0E5284;
    case 0x7F0E5288u: goto label_7F0E5288;
    case 0x7F0E528Cu: goto label_7F0E528C;
    case 0x7F0E5290u: goto label_7F0E5290;
    case 0x7F0E5294u: goto label_7F0E5294;
    case 0x7F0E5298u: goto label_7F0E5298;
    case 0x7F0E529Cu: goto label_7F0E529C;
    case 0x7F0E52A0u: goto label_7F0E52A0;
    case 0x7F0E52A4u: goto label_7F0E52A4;
    case 0x7F0E52A8u: goto label_7F0E52A8;
    case 0x7F0E52ACu: goto label_7F0E52AC;
    case 0x7F0E52B0u: goto label_7F0E52B0;
    case 0x7F0E52B4u: goto label_7F0E52B4;
    case 0x7F0E52B8u: goto label_7F0E52B8;
    case 0x7F0E52BCu: goto label_7F0E52BC;
    case 0x7F0E52C0u: goto label_7F0E52C0;
    case 0x7F0E52C4u: goto label_7F0E52C4;
    case 0x7F0E52C8u: goto label_7F0E52C8;
    case 0x7F0E52CCu: goto label_7F0E52CC;
    case 0x7F0E52D0u: goto label_7F0E52D0;
    case 0x7F0E52D4u: goto label_7F0E52D4;
    case 0x7F0E52D8u: goto label_7F0E52D8;
    case 0x7F0E52DCu: goto label_7F0E52DC;
    case 0x7F0E52E0u: goto label_7F0E52E0;
    case 0x7F0E52E4u: goto label_7F0E52E4;
    case 0x7F0E52E8u: goto label_7F0E52E8;
    case 0x7F0E52ECu: goto label_7F0E52EC;
    case 0x7F0E52F0u: goto label_7F0E52F0;
    case 0x7F0E52F4u: goto label_7F0E52F4;
    case 0x7F0E52F8u: goto label_7F0E52F8;
    case 0x7F0E52FCu: goto label_7F0E52FC;
    case 0x7F0E5300u: goto label_7F0E5300;
    case 0x7F0E5304u: goto label_7F0E5304;
    case 0x7F0E5308u: goto label_7F0E5308;
    case 0x7F0E530Cu: goto label_7F0E530C;
    case 0x7F0E5310u: goto label_7F0E5310;
    case 0x7F0E5314u: goto label_7F0E5314;
    case 0x7F0E5318u: goto label_7F0E5318;
    case 0x7F0E531Cu: goto label_7F0E531C;
    case 0x7F0E5320u: goto label_7F0E5320;
    case 0x7F0E5324u: goto label_7F0E5324;
    case 0x7F0E5328u: goto label_7F0E5328;
    case 0x7F0E532Cu: goto label_7F0E532C;
    case 0x7F0E5330u: goto label_7F0E5330;
    case 0x7F0E5334u: goto label_7F0E5334;
    case 0x7F0E5338u: goto label_7F0E5338;
    case 0x7F0E533Cu: goto label_7F0E533C;
    case 0x7F0E5340u: goto label_7F0E5340;
    case 0x7F0E5344u: goto label_7F0E5344;
    case 0x7F0E5348u: goto label_7F0E5348;
    case 0x7F0E534Cu: goto label_7F0E534C;
    case 0x7F0E5350u: goto label_7F0E5350;
    case 0x7F0E5354u: goto label_7F0E5354;
    case 0x7F0E5358u: goto label_7F0E5358;
    case 0x7F0E535Cu: goto label_7F0E535C;
    case 0x7F0E5360u: goto label_7F0E5360;
    case 0x7F0E5364u: goto label_7F0E5364;
    case 0x7F0E5368u: goto label_7F0E5368;
    case 0x7F0E536Cu: goto label_7F0E536C;
    case 0x7F0E5370u: goto label_7F0E5370;
    case 0x7F0E5374u: goto label_7F0E5374;
    case 0x7F0E5378u: goto label_7F0E5378;
    case 0x7F0E537Cu: goto label_7F0E537C;
    case 0x7F0E5380u: goto label_7F0E5380;
    case 0x7F0E5384u: goto label_7F0E5384;
    case 0x7F0E5388u: goto label_7F0E5388;
    case 0x7F0E538Cu: goto label_7F0E538C;
    case 0x7F0E5390u: goto label_7F0E5390;
    case 0x7F0E5394u: goto label_7F0E5394;
    case 0x7F0E5398u: goto label_7F0E5398;
    case 0x7F0E539Cu: goto label_7F0E539C;
    case 0x7F0E53A0u: goto label_7F0E53A0;
    case 0x7F0E53A4u: goto label_7F0E53A4;
    case 0x7F0E53A8u: goto label_7F0E53A8;
    case 0x7F0E53ACu: goto label_7F0E53AC;
    case 0x7F0E53B0u: goto label_7F0E53B0;
    case 0x7F0E53B4u: goto label_7F0E53B4;
    case 0x7F0E53B8u: goto label_7F0E53B8;
    case 0x7F0E53BCu: goto label_7F0E53BC;
    case 0x7F0E53C0u: goto label_7F0E53C0;
    case 0x7F0E53C4u: goto label_7F0E53C4;
    case 0x7F0E53C8u: goto label_7F0E53C8;
    case 0x7F0E53CCu: goto label_7F0E53CC;
    case 0x7F0E53D0u: goto label_7F0E53D0;
    case 0x7F0E53D4u: goto label_7F0E53D4;
    case 0x7F0E53D8u: goto label_7F0E53D8;
    case 0x7F0E53DCu: goto label_7F0E53DC;
    case 0x7F0E53E0u: goto label_7F0E53E0;
    case 0x7F0E53E4u: goto label_7F0E53E4;
    case 0x7F0E53E8u: goto label_7F0E53E8;
    case 0x7F0E53ECu: goto label_7F0E53EC;
    case 0x7F0E53F0u: goto label_7F0E53F0;
    case 0x7F0E53F4u: goto label_7F0E53F4;
    case 0x7F0E53F8u: goto label_7F0E53F8;
    case 0x7F0E53FCu: goto label_7F0E53FC;
    case 0x7F0E5400u: goto label_7F0E5400;
    case 0x7F0E5404u: goto label_7F0E5404;
    case 0x7F0E5408u: goto label_7F0E5408;
    case 0x7F0E540Cu: goto label_7F0E540C;
    case 0x7F0E5410u: goto label_7F0E5410;
    case 0x7F0E5414u: goto label_7F0E5414;
    case 0x7F0E5418u: goto label_7F0E5418;
    case 0x7F0E541Cu: goto label_7F0E541C;
    case 0x7F0E5420u: goto label_7F0E5420;
    case 0x7F0E5424u: goto label_7F0E5424;
    case 0x7F0E5428u: goto label_7F0E5428;
    case 0x7F0E542Cu: goto label_7F0E542C;
    case 0x7F0E5430u: goto label_7F0E5430;
    case 0x7F0E5434u: goto label_7F0E5434;
    case 0x7F0E5438u: goto label_7F0E5438;
    case 0x7F0E543Cu: goto label_7F0E543C;
    case 0x7F0E5440u: goto label_7F0E5440;
    case 0x7F0E5444u: goto label_7F0E5444;
    case 0x7F0E5448u: goto label_7F0E5448;
    case 0x7F0E544Cu: goto label_7F0E544C;
    case 0x7F0E5450u: goto label_7F0E5450;
    case 0x7F0E5454u: goto label_7F0E5454;
    case 0x7F0E5458u: goto label_7F0E5458;
    case 0x7F0E545Cu: goto label_7F0E545C;
    case 0x7F0E5460u: goto label_7F0E5460;
    case 0x7F0E5464u: goto label_7F0E5464;
    case 0x7F0E5468u: goto label_7F0E5468;
    case 0x7F0E546Cu: goto label_7F0E546C;
    case 0x7F0E5470u: goto label_7F0E5470;
    case 0x7F0E5474u: goto label_7F0E5474;
    case 0x7F0E5478u: goto label_7F0E5478;
    case 0x7F0E547Cu: goto label_7F0E547C;
    case 0x7F0E5480u: goto label_7F0E5480;
    case 0x7F0E5484u: goto label_7F0E5484;
    case 0x7F0E5488u: goto label_7F0E5488;
    case 0x7F0E548Cu: goto label_7F0E548C;
    case 0x7F0E5490u: goto label_7F0E5490;
    case 0x7F0E5494u: goto label_7F0E5494;
    case 0x7F0E5498u: goto label_7F0E5498;
    case 0x7F0E549Cu: goto label_7F0E549C;
    case 0x7F0E54A0u: goto label_7F0E54A0;
    case 0x7F0E54A4u: goto label_7F0E54A4;
    case 0x7F0E54A8u: goto label_7F0E54A8;
    case 0x7F0E54ACu: goto label_7F0E54AC;
    case 0x7F0E54B0u: goto label_7F0E54B0;
    case 0x7F0E54B4u: goto label_7F0E54B4;
    case 0x7F0E54B8u: goto label_7F0E54B8;
    case 0x7F0E54BCu: goto label_7F0E54BC;
    case 0x7F0E54C0u: goto label_7F0E54C0;
    case 0x7F0E54C4u: goto label_7F0E54C4;
    case 0x7F0E54C8u: goto label_7F0E54C8;
    case 0x7F0E54CCu: goto label_7F0E54CC;
    case 0x7F0E54D0u: goto label_7F0E54D0;
    case 0x7F0E54D4u: goto label_7F0E54D4;
    case 0x7F0E54D8u: goto label_7F0E54D8;
    case 0x7F0E54DCu: goto label_7F0E54DC;
    case 0x7F0E54E0u: goto label_7F0E54E0;
    case 0x7F0E54E4u: goto label_7F0E54E4;
    case 0x7F0E54E8u: goto label_7F0E54E8;
    case 0x7F0E54ECu: goto label_7F0E54EC;
    case 0x7F0E54F0u: goto label_7F0E54F0;
    case 0x7F0E54F4u: goto label_7F0E54F4;
    case 0x7F0E54F8u: goto label_7F0E54F8;
    case 0x7F0E54FCu: goto label_7F0E54FC;
    case 0x7F0E5500u: goto label_7F0E5500;
    case 0x7F0E5504u: goto label_7F0E5504;
    case 0x7F0E5508u: goto label_7F0E5508;
    case 0x7F0E550Cu: goto label_7F0E550C;
    case 0x7F0E5510u: goto label_7F0E5510;
    case 0x7F0E5514u: goto label_7F0E5514;
    case 0x7F0E5518u: goto label_7F0E5518;
    case 0x7F0E551Cu: goto label_7F0E551C;
    case 0x7F0E5520u: goto label_7F0E5520;
    case 0x7F0E5524u: goto label_7F0E5524;
    case 0x7F0E5528u: goto label_7F0E5528;
    case 0x7F0E552Cu: goto label_7F0E552C;
    case 0x7F0E5530u: goto label_7F0E5530;
    case 0x7F0E5534u: goto label_7F0E5534;
    case 0x7F0E5538u: goto label_7F0E5538;
    case 0x7F0E553Cu: goto label_7F0E553C;
    case 0x7F0E5540u: goto label_7F0E5540;
    case 0x7F0E5544u: goto label_7F0E5544;
    case 0x7F0E5548u: goto label_7F0E5548;
    case 0x7F0E554Cu: goto label_7F0E554C;
    case 0x7F0E5550u: goto label_7F0E5550;
    case 0x7F0E5554u: goto label_7F0E5554;
    case 0x7F0E5558u: goto label_7F0E5558;
    case 0x7F0E555Cu: goto label_7F0E555C;
    case 0x7F0E5560u: goto label_7F0E5560;
    case 0x7F0E5564u: goto label_7F0E5564;
    case 0x7F0E5568u: goto label_7F0E5568;
    case 0x7F0E556Cu: goto label_7F0E556C;
    case 0x7F0E5570u: goto label_7F0E5570;
    case 0x7F0E5574u: goto label_7F0E5574;
    case 0x7F0E5578u: goto label_7F0E5578;
    case 0x7F0E557Cu: goto label_7F0E557C;
    case 0x7F0E5580u: goto label_7F0E5580;
    case 0x7F0E5584u: goto label_7F0E5584;
    case 0x7F0E5588u: goto label_7F0E5588;
    case 0x7F0E558Cu: goto label_7F0E558C;
    case 0x7F0E5590u: goto label_7F0E5590;
    case 0x7F0E5594u: goto label_7F0E5594;
    case 0x7F0E5598u: goto label_7F0E5598;
    case 0x7F0E559Cu: goto label_7F0E559C;
    case 0x7F0E55A0u: goto label_7F0E55A0;
    case 0x7F0E55A4u: goto label_7F0E55A4;
    case 0x7F0E55A8u: goto label_7F0E55A8;
    case 0x7F0E55ACu: goto label_7F0E55AC;
    case 0x7F0E55B0u: goto label_7F0E55B0;
    case 0x7F0E55B4u: goto label_7F0E55B4;
    case 0x7F0E55B8u: goto label_7F0E55B8;
    case 0x7F0E55BCu: goto label_7F0E55BC;
    case 0x7F0E55C0u: goto label_7F0E55C0;
    case 0x7F0E55C4u: goto label_7F0E55C4;
    case 0x7F0E55C8u: goto label_7F0E55C8;
    case 0x7F0E55CCu: goto label_7F0E55CC;
    case 0x7F0E55D0u: goto label_7F0E55D0;
    case 0x7F0E55D4u: goto label_7F0E55D4;
    case 0x7F0E55D8u: goto label_7F0E55D8;
    case 0x7F0E55DCu: goto label_7F0E55DC;
    case 0x7F0E55E0u: goto label_7F0E55E0;
    case 0x7F0E55E4u: goto label_7F0E55E4;
    case 0x7F0E55E8u: goto label_7F0E55E8;
    case 0x7F0E55ECu: goto label_7F0E55EC;
    case 0x7F0E55F0u: goto label_7F0E55F0;
    case 0x7F0E55F4u: goto label_7F0E55F4;
    case 0x7F0E55F8u: goto label_7F0E55F8;
    case 0x7F0E55FCu: goto label_7F0E55FC;
    case 0x7F0E5600u: goto label_7F0E5600;
    case 0x7F0E5604u: goto label_7F0E5604;
    case 0x7F0E5608u: goto label_7F0E5608;
    case 0x7F0E560Cu: goto label_7F0E560C;
    case 0x7F0E5610u: goto label_7F0E5610;
    case 0x7F0E5614u: goto label_7F0E5614;
    case 0x7F0E5618u: goto label_7F0E5618;
    case 0x7F0E561Cu: goto label_7F0E561C;
    case 0x7F0E5620u: goto label_7F0E5620;
    case 0x7F0E5624u: goto label_7F0E5624;
    case 0x7F0E5628u: goto label_7F0E5628;
    case 0x7F0E562Cu: goto label_7F0E562C;
    case 0x7F0E5630u: goto label_7F0E5630;
    case 0x7F0E5634u: goto label_7F0E5634;
    case 0x7F0E5638u: goto label_7F0E5638;
    case 0x7F0E563Cu: goto label_7F0E563C;
    case 0x7F0E5640u: goto label_7F0E5640;
    case 0x7F0E5644u: goto label_7F0E5644;
    case 0x7F0E5648u: goto label_7F0E5648;
    case 0x7F0E564Cu: goto label_7F0E564C;
    case 0x7F0E5650u: goto label_7F0E5650;
    case 0x7F0E5654u: goto label_7F0E5654;
    case 0x7F0E5658u: goto label_7F0E5658;
    case 0x7F0E565Cu: goto label_7F0E565C;
    case 0x7F0E5660u: goto label_7F0E5660;
    case 0x7F0E5664u: goto label_7F0E5664;
    case 0x7F0E5668u: goto label_7F0E5668;
    case 0x7F0E566Cu: goto label_7F0E566C;
    case 0x7F0E5670u: goto label_7F0E5670;
    case 0x7F0E5674u: goto label_7F0E5674;
    case 0x7F0E5678u: goto label_7F0E5678;
    case 0x7F0E567Cu: goto label_7F0E567C;
    case 0x7F0E5680u: goto label_7F0E5680;
    case 0x7F0E5684u: goto label_7F0E5684;
    case 0x7F0E5688u: goto label_7F0E5688;
    case 0x7F0E568Cu: goto label_7F0E568C;
    case 0x7F0E5690u: goto label_7F0E5690;
    case 0x7F0E5694u: goto label_7F0E5694;
    case 0x7F0E5698u: goto label_7F0E5698;
    case 0x7F0E569Cu: goto label_7F0E569C;
    case 0x7F0E56A0u: goto label_7F0E56A0;
    case 0x7F0E56A4u: goto label_7F0E56A4;
    case 0x7F0E56A8u: goto label_7F0E56A8;
    case 0x7F0E56ACu: goto label_7F0E56AC;
    case 0x7F0E56B0u: goto label_7F0E56B0;
    case 0x7F0E56B4u: goto label_7F0E56B4;
    case 0x7F0E56B8u: goto label_7F0E56B8;
    case 0x7F0E56BCu: goto label_7F0E56BC;
    case 0x7F0E56C0u: goto label_7F0E56C0;
    case 0x7F0E56C4u: goto label_7F0E56C4;
    case 0x7F0E56C8u: goto label_7F0E56C8;
    case 0x7F0E56CCu: goto label_7F0E56CC;
    case 0x7F0E56D0u: goto label_7F0E56D0;
    case 0x7F0E56D4u: goto label_7F0E56D4;
    case 0x7F0E56D8u: goto label_7F0E56D8;
    case 0x7F0E56DCu: goto label_7F0E56DC;
    case 0x7F0E56E0u: goto label_7F0E56E0;
    case 0x7F0E56E4u: goto label_7F0E56E4;
    case 0x7F0E56E8u: goto label_7F0E56E8;
    case 0x7F0E56ECu: goto label_7F0E56EC;
    case 0x7F0E56F0u: goto label_7F0E56F0;
    case 0x7F0E56F4u: goto label_7F0E56F4;
    case 0x7F0E56F8u: goto label_7F0E56F8;
    case 0x7F0E56FCu: goto label_7F0E56FC;
    case 0x7F0E5700u: goto label_7F0E5700;
    case 0x7F0E5704u: goto label_7F0E5704;
    case 0x7F0E5708u: goto label_7F0E5708;
    case 0x7F0E570Cu: goto label_7F0E570C;
    case 0x7F0E5710u: goto label_7F0E5710;
    case 0x7F0E5714u: goto label_7F0E5714;
    case 0x7F0E5718u: goto label_7F0E5718;
    case 0x7F0E571Cu: goto label_7F0E571C;
    case 0x7F0E5720u: goto label_7F0E5720;
    case 0x7F0E5724u: goto label_7F0E5724;
    case 0x7F0E5728u: goto label_7F0E5728;
    case 0x7F0E572Cu: goto label_7F0E572C;
    case 0x7F0E5730u: goto label_7F0E5730;
    case 0x7F0E5734u: goto label_7F0E5734;
    case 0x7F0E5738u: goto label_7F0E5738;
    case 0x7F0E573Cu: goto label_7F0E573C;
    case 0x7F0E5740u: goto label_7F0E5740;
    case 0x7F0E5744u: goto label_7F0E5744;
    case 0x7F0E5748u: goto label_7F0E5748;
    case 0x7F0E574Cu: goto label_7F0E574C;
    case 0x7F0E5750u: goto label_7F0E5750;
    case 0x7F0E5754u: goto label_7F0E5754;
    case 0x7F0E5758u: goto label_7F0E5758;
    case 0x7F0E575Cu: goto label_7F0E575C;
    case 0x7F0E5760u: goto label_7F0E5760;
    case 0x7F0E5764u: goto label_7F0E5764;
    case 0x7F0E5768u: goto label_7F0E5768;
    case 0x7F0E576Cu: goto label_7F0E576C;
    case 0x7F0E5770u: goto label_7F0E5770;
    case 0x7F0E5774u: goto label_7F0E5774;
    case 0x7F0E5778u: goto label_7F0E5778;
    case 0x7F0E577Cu: goto label_7F0E577C;
    case 0x7F0E5780u: goto label_7F0E5780;
    case 0x7F0E5784u: goto label_7F0E5784;
    case 0x7F0E5788u: goto label_7F0E5788;
    case 0x7F0E578Cu: goto label_7F0E578C;
    case 0x7F0E5790u: goto label_7F0E5790;
    case 0x7F0E5794u: goto label_7F0E5794;
    case 0x7F0E5798u: goto label_7F0E5798;
    case 0x7F0E579Cu: goto label_7F0E579C;
    case 0x7F0E57A0u: goto label_7F0E57A0;
    case 0x7F0E57A4u: goto label_7F0E57A4;
    case 0x7F0E57A8u: goto label_7F0E57A8;
    case 0x7F0E57ACu: goto label_7F0E57AC;
    case 0x7F0E57B0u: goto label_7F0E57B0;
    case 0x7F0E57B4u: goto label_7F0E57B4;
    case 0x7F0E57B8u: goto label_7F0E57B8;
    case 0x7F0E57BCu: goto label_7F0E57BC;
    case 0x7F0E57C0u: goto label_7F0E57C0;
    case 0x7F0E57C4u: goto label_7F0E57C4;
    case 0x7F0E57C8u: goto label_7F0E57C8;
    case 0x7F0E57CCu: goto label_7F0E57CC;
    case 0x7F0E57D0u: goto label_7F0E57D0;
    case 0x7F0E57D4u: goto label_7F0E57D4;
    case 0x7F0E57D8u: goto label_7F0E57D8;
    case 0x7F0E57DCu: goto label_7F0E57DC;
    case 0x7F0E57E0u: goto label_7F0E57E0;
    case 0x7F0E57E4u: goto label_7F0E57E4;
    case 0x7F0E57E8u: goto label_7F0E57E8;
    case 0x7F0E57ECu: goto label_7F0E57EC;
    case 0x7F0E57F0u: goto label_7F0E57F0;
    case 0x7F0E57F4u: goto label_7F0E57F4;
    case 0x7F0E57F8u: goto label_7F0E57F8;
    case 0x7F0E57FCu: goto label_7F0E57FC;
    case 0x7F0E5800u: goto label_7F0E5800;
    case 0x7F0E5804u: goto label_7F0E5804;
    case 0x7F0E5808u: goto label_7F0E5808;
    case 0x7F0E580Cu: goto label_7F0E580C;
    case 0x7F0E5810u: goto label_7F0E5810;
    case 0x7F0E5814u: goto label_7F0E5814;
    case 0x7F0E5818u: goto label_7F0E5818;
    case 0x7F0E581Cu: goto label_7F0E581C;
    case 0x7F0E5820u: goto label_7F0E5820;
    case 0x7F0E5824u: goto label_7F0E5824;
    case 0x7F0E5828u: goto label_7F0E5828;
    case 0x7F0E582Cu: goto label_7F0E582C;
    case 0x7F0E5830u: goto label_7F0E5830;
    case 0x7F0E5834u: goto label_7F0E5834;
    case 0x7F0E5838u: goto label_7F0E5838;
    case 0x7F0E583Cu: goto label_7F0E583C;
    case 0x7F0E5840u: goto label_7F0E5840;
    case 0x7F0E5844u: goto label_7F0E5844;
    case 0x7F0E5848u: goto label_7F0E5848;
    case 0x7F0E584Cu: goto label_7F0E584C;
    case 0x7F0E5850u: goto label_7F0E5850;
    case 0x7F0E5854u: goto label_7F0E5854;
    case 0x7F0E5858u: goto label_7F0E5858;
    case 0x7F0E585Cu: goto label_7F0E585C;
    case 0x7F0E5860u: goto label_7F0E5860;
    case 0x7F0E5864u: goto label_7F0E5864;
    case 0x7F0E5868u: goto label_7F0E5868;
    case 0x7F0E586Cu: goto label_7F0E586C;
    case 0x7F0E5870u: goto label_7F0E5870;
    case 0x7F0E5874u: goto label_7F0E5874;
    case 0x7F0E5878u: goto label_7F0E5878;
    case 0x7F0E587Cu: goto label_7F0E587C;
    case 0x7F0E5880u: goto label_7F0E5880;
    case 0x7F0E5884u: goto label_7F0E5884;
    case 0x7F0E5888u: goto label_7F0E5888;
    case 0x7F0E588Cu: goto label_7F0E588C;
    case 0x7F0E5890u: goto label_7F0E5890;
    case 0x7F0E5894u: goto label_7F0E5894;
    case 0x7F0E5898u: goto label_7F0E5898;
    case 0x7F0E589Cu: goto label_7F0E589C;
    case 0x7F0E58A0u: goto label_7F0E58A0;
    case 0x7F0E58A4u: goto label_7F0E58A4;
    case 0x7F0E58A8u: goto label_7F0E58A8;
    case 0x7F0E58ACu: goto label_7F0E58AC;
    case 0x7F0E58B0u: goto label_7F0E58B0;
    case 0x7F0E58B4u: goto label_7F0E58B4;
    case 0x7F0E58B8u: goto label_7F0E58B8;
    case 0x7F0E58BCu: goto label_7F0E58BC;
    case 0x7F0E58C0u: goto label_7F0E58C0;
    case 0x7F0E58C4u: goto label_7F0E58C4;
    case 0x7F0E58C8u: goto label_7F0E58C8;
    case 0x7F0E58CCu: goto label_7F0E58CC;
    case 0x7F0E58D0u: goto label_7F0E58D0;
    case 0x7F0E58D4u: goto label_7F0E58D4;
    case 0x7F0E58D8u: goto label_7F0E58D8;
    case 0x7F0E58DCu: goto label_7F0E58DC;
    case 0x7F0E58E0u: goto label_7F0E58E0;
    case 0x7F0E58E4u: goto label_7F0E58E4;
    case 0x7F0E58E8u: goto label_7F0E58E8;
    case 0x7F0E58ECu: goto label_7F0E58EC;
    case 0x7F0E58F0u: goto label_7F0E58F0;
    case 0x7F0E58F4u: goto label_7F0E58F4;
    case 0x7F0E58F8u: goto label_7F0E58F8;
    case 0x7F0E58FCu: goto label_7F0E58FC;
    case 0x7F0E5900u: goto label_7F0E5900;
    case 0x7F0E5904u: goto label_7F0E5904;
    case 0x7F0E5908u: goto label_7F0E5908;
    case 0x7F0E590Cu: goto label_7F0E590C;
    case 0x7F0E5910u: goto label_7F0E5910;
    case 0x7F0E5914u: goto label_7F0E5914;
    case 0x7F0E5918u: goto label_7F0E5918;
    case 0x7F0E591Cu: goto label_7F0E591C;
    case 0x7F0E5920u: goto label_7F0E5920;
    case 0x7F0E5924u: goto label_7F0E5924;
    case 0x7F0E5928u: goto label_7F0E5928;
    case 0x7F0E592Cu: goto label_7F0E592C;
    case 0x7F0E5930u: goto label_7F0E5930;
    case 0x7F0E5934u: goto label_7F0E5934;
    case 0x7F0E5938u: goto label_7F0E5938;
    case 0x7F0E593Cu: goto label_7F0E593C;
    case 0x7F0E5940u: goto label_7F0E5940;
    case 0x7F0E5944u: goto label_7F0E5944;
    case 0x7F0E5948u: goto label_7F0E5948;
    case 0x7F0E594Cu: goto label_7F0E594C;
    case 0x7F0E5950u: goto label_7F0E5950;
    case 0x7F0E5954u: goto label_7F0E5954;
    case 0x7F0E5958u: goto label_7F0E5958;
    case 0x7F0E595Cu: goto label_7F0E595C;
    case 0x7F0E5960u: goto label_7F0E5960;
    case 0x7F0E5964u: goto label_7F0E5964;
    case 0x7F0E5968u: goto label_7F0E5968;
    case 0x7F0E596Cu: goto label_7F0E596C;
    case 0x7F0E5970u: goto label_7F0E5970;
    case 0x7F0E5974u: goto label_7F0E5974;
    case 0x7F0E5978u: goto label_7F0E5978;
    case 0x7F0E597Cu: goto label_7F0E597C;
    case 0x7F0E5980u: goto label_7F0E5980;
    case 0x7F0E5984u: goto label_7F0E5984;
    case 0x7F0E5988u: goto label_7F0E5988;
    case 0x7F0E598Cu: goto label_7F0E598C;
    case 0x7F0E5990u: goto label_7F0E5990;
    case 0x7F0E5994u: goto label_7F0E5994;
    case 0x7F0E5998u: goto label_7F0E5998;
    case 0x7F0E599Cu: goto label_7F0E599C;
    case 0x7F0E59A0u: goto label_7F0E59A0;
    case 0x7F0E59A4u: goto label_7F0E59A4;
    case 0x7F0E59A8u: goto label_7F0E59A8;
    case 0x7F0E59ACu: goto label_7F0E59AC;
    case 0x7F0E59B0u: goto label_7F0E59B0;
    case 0x7F0E59B4u: goto label_7F0E59B4;
    case 0x7F0E59B8u: goto label_7F0E59B8;
    case 0x7F0E59BCu: goto label_7F0E59BC;
    case 0x7F0E59C0u: goto label_7F0E59C0;
    case 0x7F0E59C4u: goto label_7F0E59C4;
    case 0x7F0E59C8u: goto label_7F0E59C8;
    case 0x7F0E59CCu: goto label_7F0E59CC;
    case 0x7F0E59D0u: goto label_7F0E59D0;
    case 0x7F0E59D4u: goto label_7F0E59D4;
    case 0x7F0E59D8u: goto label_7F0E59D8;
    case 0x7F0E59DCu: goto label_7F0E59DC;
    case 0x7F0E59E0u: goto label_7F0E59E0;
    case 0x7F0E59E4u: goto label_7F0E59E4;
    case 0x7F0E59E8u: goto label_7F0E59E8;
    case 0x7F0E59ECu: goto label_7F0E59EC;
    case 0x7F0E59F0u: goto label_7F0E59F0;
    case 0x7F0E59F4u: goto label_7F0E59F4;
    case 0x7F0E59F8u: goto label_7F0E59F8;
    case 0x7F0E59FCu: goto label_7F0E59FC;
    case 0x7F0E5A00u: goto label_7F0E5A00;
    case 0x7F0E5A04u: goto label_7F0E5A04;
    case 0x7F0E5A08u: goto label_7F0E5A08;
    case 0x7F0E5A0Cu: goto label_7F0E5A0C;
    case 0x7F0E5A10u: goto label_7F0E5A10;
    case 0x7F0E5A14u: goto label_7F0E5A14;
    case 0x7F0E5A18u: goto label_7F0E5A18;
    case 0x7F0E5A1Cu: goto label_7F0E5A1C;
    case 0x7F0E5A20u: goto label_7F0E5A20;
    case 0x7F0E5A24u: goto label_7F0E5A24;
    case 0x7F0E5A28u: goto label_7F0E5A28;
    case 0x7F0E5A2Cu: goto label_7F0E5A2C;
    case 0x7F0E5A30u: goto label_7F0E5A30;
    case 0x7F0E5A34u: goto label_7F0E5A34;
    case 0x7F0E5A38u: goto label_7F0E5A38;
    case 0x7F0E5A3Cu: goto label_7F0E5A3C;
    case 0x7F0E5A40u: goto label_7F0E5A40;
    case 0x7F0E5A44u: goto label_7F0E5A44;
    case 0x7F0E5A48u: goto label_7F0E5A48;
    case 0x7F0E5A4Cu: goto label_7F0E5A4C;
    case 0x7F0E5A50u: goto label_7F0E5A50;
    case 0x7F0E5A54u: goto label_7F0E5A54;
    case 0x7F0E5A58u: goto label_7F0E5A58;
    case 0x7F0E5A5Cu: goto label_7F0E5A5C;
    case 0x7F0E5A60u: goto label_7F0E5A60;
    case 0x7F0E5A64u: goto label_7F0E5A64;
    case 0x7F0E5A68u: goto label_7F0E5A68;
    case 0x7F0E5A6Cu: goto label_7F0E5A6C;
    case 0x7F0E5A70u: goto label_7F0E5A70;
    case 0x7F0E5A74u: goto label_7F0E5A74;
    case 0x7F0E5A78u: goto label_7F0E5A78;
    case 0x7F0E5A7Cu: goto label_7F0E5A7C;
    case 0x7F0E5A80u: goto label_7F0E5A80;
    case 0x7F0E5A84u: goto label_7F0E5A84;
    case 0x7F0E5A88u: goto label_7F0E5A88;
    case 0x7F0E5A8Cu: goto label_7F0E5A8C;
    case 0x7F0E5A90u: goto label_7F0E5A90;
    case 0x7F0E5A94u: goto label_7F0E5A94;
    case 0x7F0E5A98u: goto label_7F0E5A98;
    case 0x7F0E5A9Cu: goto label_7F0E5A9C;
    case 0x7F0E5AA0u: goto label_7F0E5AA0;
    case 0x7F0E5AA4u: goto label_7F0E5AA4;
    case 0x7F0E5AA8u: goto label_7F0E5AA8;
    case 0x7F0E5AACu: goto label_7F0E5AAC;
    case 0x7F0E5AB0u: goto label_7F0E5AB0;
    case 0x7F0E5AB4u: goto label_7F0E5AB4;
    case 0x7F0E5AB8u: goto label_7F0E5AB8;
    case 0x7F0E5ABCu: goto label_7F0E5ABC;
    case 0x7F0E5AC0u: goto label_7F0E5AC0;
    case 0x7F0E5AC4u: goto label_7F0E5AC4;
    case 0x7F0E5AC8u: goto label_7F0E5AC8;
    case 0x7F0E5ACCu: goto label_7F0E5ACC;
    case 0x7F0E5AD0u: goto label_7F0E5AD0;
    case 0x7F0E5AD4u: goto label_7F0E5AD4;
    case 0x7F0E5AD8u: goto label_7F0E5AD8;
    case 0x7F0E5ADCu: goto label_7F0E5ADC;
    case 0x7F0E5AE0u: goto label_7F0E5AE0;
    case 0x7F0E5AE4u: goto label_7F0E5AE4;
    case 0x7F0E5AE8u: goto label_7F0E5AE8;
    case 0x7F0E5AECu: goto label_7F0E5AEC;
    case 0x7F0E5AF0u: goto label_7F0E5AF0;
    case 0x7F0E5AF4u: goto label_7F0E5AF4;
    case 0x7F0E5AF8u: goto label_7F0E5AF8;
    case 0x7F0E5AFCu: goto label_7F0E5AFC;
    case 0x7F0E5B00u: goto label_7F0E5B00;
    case 0x7F0E5B04u: goto label_7F0E5B04;
    case 0x7F0E5B08u: goto label_7F0E5B08;
    case 0x7F0E5B0Cu: goto label_7F0E5B0C;
    case 0x7F0E5B10u: goto label_7F0E5B10;
    case 0x7F0E5B14u: goto label_7F0E5B14;
    case 0x7F0E5B18u: goto label_7F0E5B18;
    case 0x7F0E5B1Cu: goto label_7F0E5B1C;
    case 0x7F0E5B20u: goto label_7F0E5B20;
    case 0x7F0E5B24u: goto label_7F0E5B24;
    case 0x7F0E5B28u: goto label_7F0E5B28;
    case 0x7F0E5B2Cu: goto label_7F0E5B2C;
    case 0x7F0E5B30u: goto label_7F0E5B30;
    case 0x7F0E5B34u: goto label_7F0E5B34;
    case 0x7F0E5B38u: goto label_7F0E5B38;
    case 0x7F0E5B3Cu: goto label_7F0E5B3C;
    case 0x7F0E5B40u: goto label_7F0E5B40;
    case 0x7F0E5B44u: goto label_7F0E5B44;
    case 0x7F0E5B48u: goto label_7F0E5B48;
    case 0x7F0E5B4Cu: goto label_7F0E5B4C;
    case 0x7F0E5B50u: goto label_7F0E5B50;
    case 0x7F0E5B54u: goto label_7F0E5B54;
    case 0x7F0E5B58u: goto label_7F0E5B58;
    case 0x7F0E5B5Cu: goto label_7F0E5B5C;
    case 0x7F0E5B60u: goto label_7F0E5B60;
    case 0x7F0E5B64u: goto label_7F0E5B64;
    case 0x7F0E5B68u: goto label_7F0E5B68;
    case 0x7F0E5B6Cu: goto label_7F0E5B6C;
    case 0x7F0E5B70u: goto label_7F0E5B70;
    case 0x7F0E5B74u: goto label_7F0E5B74;
    case 0x7F0E5B78u: goto label_7F0E5B78;
    case 0x7F0E5B7Cu: goto label_7F0E5B7C;
    case 0x7F0E5B80u: goto label_7F0E5B80;
    case 0x7F0E5B84u: goto label_7F0E5B84;
    case 0x7F0E5B88u: goto label_7F0E5B88;
    case 0x7F0E5B8Cu: goto label_7F0E5B8C;
    case 0x7F0E5B90u: goto label_7F0E5B90;
    case 0x7F0E5B94u: goto label_7F0E5B94;
    case 0x7F0E5B98u: goto label_7F0E5B98;
    case 0x7F0E5B9Cu: goto label_7F0E5B9C;
    case 0x7F0E5BA0u: goto label_7F0E5BA0;
    case 0x7F0E5BA4u: goto label_7F0E5BA4;
    case 0x7F0E5BA8u: goto label_7F0E5BA8;
    case 0x7F0E5BACu: goto label_7F0E5BAC;
    case 0x7F0E5BB0u: goto label_7F0E5BB0;
    case 0x7F0E5BB4u: goto label_7F0E5BB4;
    case 0x7F0E5BB8u: goto label_7F0E5BB8;
    case 0x7F0E5BBCu: goto label_7F0E5BBC;
    case 0x7F0E5BC0u: goto label_7F0E5BC0;
    case 0x7F0E5BC4u: goto label_7F0E5BC4;
    case 0x7F0E5BC8u: goto label_7F0E5BC8;
    case 0x7F0E5BCCu: goto label_7F0E5BCC;
    case 0x7F0E5BD0u: goto label_7F0E5BD0;
    case 0x7F0E5BD4u: goto label_7F0E5BD4;
    case 0x7F0E5BD8u: goto label_7F0E5BD8;
    case 0x7F0E5BDCu: goto label_7F0E5BDC;
    case 0x7F0E5BE0u: goto label_7F0E5BE0;
    case 0x7F0E5BE4u: goto label_7F0E5BE4;
    case 0x7F0E5BE8u: goto label_7F0E5BE8;
    case 0x7F0E5BECu: goto label_7F0E5BEC;
    case 0x7F0E5BF0u: goto label_7F0E5BF0;
    case 0x7F0E5BF4u: goto label_7F0E5BF4;
    case 0x7F0E5BF8u: goto label_7F0E5BF8;
    case 0x7F0E5BFCu: goto label_7F0E5BFC;
    case 0x7F0E5C00u: goto label_7F0E5C00;
    case 0x7F0E5C04u: goto label_7F0E5C04;
    case 0x7F0E5C08u: goto label_7F0E5C08;
    case 0x7F0E5C0Cu: goto label_7F0E5C0C;
    case 0x7F0E5C10u: goto label_7F0E5C10;
    case 0x7F0E5C14u: goto label_7F0E5C14;
    case 0x7F0E5C18u: goto label_7F0E5C18;
    case 0x7F0E5C1Cu: goto label_7F0E5C1C;
    case 0x7F0E5C20u: goto label_7F0E5C20;
    case 0x7F0E5C24u: goto label_7F0E5C24;
    case 0x7F0E5C28u: goto label_7F0E5C28;
    case 0x7F0E5C2Cu: goto label_7F0E5C2C;
    case 0x7F0E5C30u: goto label_7F0E5C30;
    case 0x7F0E5C34u: goto label_7F0E5C34;
    case 0x7F0E5C38u: goto label_7F0E5C38;
    case 0x7F0E5C3Cu: goto label_7F0E5C3C;
    case 0x7F0E5C40u: goto label_7F0E5C40;
    case 0x7F0E5C44u: goto label_7F0E5C44;
    case 0x7F0E5C48u: goto label_7F0E5C48;
    case 0x7F0E5C4Cu: goto label_7F0E5C4C;
    case 0x7F0E5C50u: goto label_7F0E5C50;
    case 0x7F0E5C54u: goto label_7F0E5C54;
    case 0x7F0E5C58u: goto label_7F0E5C58;
    case 0x7F0E5C5Cu: goto label_7F0E5C5C;
    case 0x7F0E5C60u: goto label_7F0E5C60;
    case 0x7F0E5C64u: goto label_7F0E5C64;
    case 0x7F0E5C68u: goto label_7F0E5C68;
    case 0x7F0E5C6Cu: goto label_7F0E5C6C;
    case 0x7F0E5C70u: goto label_7F0E5C70;
    case 0x7F0E5C74u: goto label_7F0E5C74;
    case 0x7F0E5C78u: goto label_7F0E5C78;
    case 0x7F0E5C7Cu: goto label_7F0E5C7C;
    case 0x7F0E5C80u: goto label_7F0E5C80;
    case 0x7F0E5C84u: goto label_7F0E5C84;
    case 0x7F0E5C88u: goto label_7F0E5C88;
    case 0x7F0E5C8Cu: goto label_7F0E5C8C;
    case 0x7F0E5C90u: goto label_7F0E5C90;
    case 0x7F0E5C94u: goto label_7F0E5C94;
    case 0x7F0E5C98u: goto label_7F0E5C98;
    case 0x7F0E5C9Cu: goto label_7F0E5C9C;
    case 0x7F0E5CA0u: goto label_7F0E5CA0;
    case 0x7F0E5CA4u: goto label_7F0E5CA4;
    case 0x7F0E5CA8u: goto label_7F0E5CA8;
    case 0x7F0E5CACu: goto label_7F0E5CAC;
    case 0x7F0E5CB0u: goto label_7F0E5CB0;
    case 0x7F0E5CB4u: goto label_7F0E5CB4;
    case 0x7F0E5CB8u: goto label_7F0E5CB8;
    case 0x7F0E5CBCu: goto label_7F0E5CBC;
    case 0x7F0E5CC0u: goto label_7F0E5CC0;
    case 0x7F0E5CC4u: goto label_7F0E5CC4;
    case 0x7F0E5CC8u: goto label_7F0E5CC8;
    case 0x7F0E5CCCu: goto label_7F0E5CCC;
    case 0x7F0E5CD0u: goto label_7F0E5CD0;
    case 0x7F0E5CD4u: goto label_7F0E5CD4;
    case 0x7F0E5CD8u: goto label_7F0E5CD8;
    case 0x7F0E5CDCu: goto label_7F0E5CDC;
    case 0x7F0E5CE0u: goto label_7F0E5CE0;
    case 0x7F0E5CE4u: goto label_7F0E5CE4;
    case 0x7F0E5CE8u: goto label_7F0E5CE8;
    case 0x7F0E5CECu: goto label_7F0E5CEC;
    case 0x7F0E5CF0u: goto label_7F0E5CF0;
    case 0x7F0E5CF4u: goto label_7F0E5CF4;
    case 0x7F0E5CF8u: goto label_7F0E5CF8;
    case 0x7F0E5CFCu: goto label_7F0E5CFC;
    case 0x7F0E5D00u: goto label_7F0E5D00;
    case 0x7F0E5D04u: goto label_7F0E5D04;
    case 0x7F0E5D08u: goto label_7F0E5D08;
    case 0x7F0E5D0Cu: goto label_7F0E5D0C;
    case 0x7F0E5D10u: goto label_7F0E5D10;
    case 0x7F0E5D14u: goto label_7F0E5D14;
    case 0x7F0E5D18u: goto label_7F0E5D18;
    case 0x7F0E5D1Cu: goto label_7F0E5D1C;
    case 0x7F0E5D20u: goto label_7F0E5D20;
    case 0x7F0E5D24u: goto label_7F0E5D24;
    case 0x7F0E5D28u: goto label_7F0E5D28;
    case 0x7F0E5D2Cu: goto label_7F0E5D2C;
    case 0x7F0E5D30u: goto label_7F0E5D30;
    case 0x7F0E5D34u: goto label_7F0E5D34;
    case 0x7F0E5D38u: goto label_7F0E5D38;
    case 0x7F0E5D3Cu: goto label_7F0E5D3C;
    case 0x7F0E5D40u: goto label_7F0E5D40;
    case 0x7F0E5D44u: goto label_7F0E5D44;
    case 0x7F0E5D48u: goto label_7F0E5D48;
    case 0x7F0E5D4Cu: goto label_7F0E5D4C;
    case 0x7F0E5D50u: goto label_7F0E5D50;
    case 0x7F0E5D54u: goto label_7F0E5D54;
    case 0x7F0E5D58u: goto label_7F0E5D58;
    case 0x7F0E5D5Cu: goto label_7F0E5D5C;
    case 0x7F0E5D60u: goto label_7F0E5D60;
    case 0x7F0E5D64u: goto label_7F0E5D64;
    case 0x7F0E5D68u: goto label_7F0E5D68;
    case 0x7F0E5D6Cu: goto label_7F0E5D6C;
    case 0x7F0E5D70u: goto label_7F0E5D70;
    case 0x7F0E5D74u: goto label_7F0E5D74;
    case 0x7F0E5D78u: goto label_7F0E5D78;
    case 0x7F0E5D7Cu: goto label_7F0E5D7C;
    case 0x7F0E5D80u: goto label_7F0E5D80;
    case 0x7F0E5D84u: goto label_7F0E5D84;
    case 0x7F0E5D88u: goto label_7F0E5D88;
    case 0x7F0E5D8Cu: goto label_7F0E5D8C;
    case 0x7F0E5D90u: goto label_7F0E5D90;
    case 0x7F0E5D94u: goto label_7F0E5D94;
    case 0x7F0E5D98u: goto label_7F0E5D98;
    case 0x7F0E5D9Cu: goto label_7F0E5D9C;
    case 0x7F0E5DA0u: goto label_7F0E5DA0;
    case 0x7F0E5DA4u: goto label_7F0E5DA4;
    case 0x7F0E5DA8u: goto label_7F0E5DA8;
    case 0x7F0E5DACu: goto label_7F0E5DAC;
    case 0x7F0E5DB0u: goto label_7F0E5DB0;
    case 0x7F0E5DB4u: goto label_7F0E5DB4;
    case 0x7F0E5DB8u: goto label_7F0E5DB8;
    case 0x7F0E5DBCu: goto label_7F0E5DBC;
    case 0x7F0E5DC0u: goto label_7F0E5DC0;
    case 0x7F0E5DC4u: goto label_7F0E5DC4;
    case 0x7F0E5DC8u: goto label_7F0E5DC8;
    case 0x7F0E5DCCu: goto label_7F0E5DCC;
    case 0x7F0E5DD0u: goto label_7F0E5DD0;
    case 0x7F0E5DD4u: goto label_7F0E5DD4;
    case 0x7F0E5DD8u: goto label_7F0E5DD8;
    case 0x7F0E5DDCu: goto label_7F0E5DDC;
    case 0x7F0E5DE0u: goto label_7F0E5DE0;
    case 0x7F0E5DE4u: goto label_7F0E5DE4;
    case 0x7F0E5DE8u: goto label_7F0E5DE8;
    case 0x7F0E5DECu: goto label_7F0E5DEC;
    case 0x7F0E5DF0u: goto label_7F0E5DF0;
    case 0x7F0E5DF4u: goto label_7F0E5DF4;
    case 0x7F0E5DF8u: goto label_7F0E5DF8;
    case 0x7F0E5DFCu: goto label_7F0E5DFC;
    case 0x7F0E5E00u: goto label_7F0E5E00;
    case 0x7F0E5E04u: goto label_7F0E5E04;
    case 0x7F0E5E08u: goto label_7F0E5E08;
    case 0x7F0E5E0Cu: goto label_7F0E5E0C;
    case 0x7F0E5E10u: goto label_7F0E5E10;
    case 0x7F0E5E14u: goto label_7F0E5E14;
    case 0x7F0E5E18u: goto label_7F0E5E18;
    case 0x7F0E5E1Cu: goto label_7F0E5E1C;
    case 0x7F0E5E20u: goto label_7F0E5E20;
    case 0x7F0E5E24u: goto label_7F0E5E24;
    case 0x7F0E5E28u: goto label_7F0E5E28;
    case 0x7F0E5E2Cu: goto label_7F0E5E2C;
    case 0x7F0E5E30u: goto label_7F0E5E30;
    case 0x7F0E5E34u: goto label_7F0E5E34;
    case 0x7F0E5E38u: goto label_7F0E5E38;
    case 0x7F0E5E3Cu: goto label_7F0E5E3C;
    case 0x7F0E5E40u: goto label_7F0E5E40;
    case 0x7F0E5E44u: goto label_7F0E5E44;
    case 0x7F0E5E48u: goto label_7F0E5E48;
    case 0x7F0E5E4Cu: goto label_7F0E5E4C;
    case 0x7F0E5E50u: goto label_7F0E5E50;
    case 0x7F0E5E54u: goto label_7F0E5E54;
    case 0x7F0E5E58u: goto label_7F0E5E58;
    case 0x7F0E5E5Cu: goto label_7F0E5E5C;
    case 0x7F0E5E60u: goto label_7F0E5E60;
    case 0x7F0E5E64u: goto label_7F0E5E64;
    case 0x7F0E5E68u: goto label_7F0E5E68;
    case 0x7F0E5E6Cu: goto label_7F0E5E6C;
    case 0x7F0E5E70u: goto label_7F0E5E70;
    case 0x7F0E5E74u: goto label_7F0E5E74;
    case 0x7F0E5E78u: goto label_7F0E5E78;
    case 0x7F0E5E7Cu: goto label_7F0E5E7C;
    case 0x7F0E5E80u: goto label_7F0E5E80;
    case 0x7F0E5E84u: goto label_7F0E5E84;
    case 0x7F0E5E88u: goto label_7F0E5E88;
    case 0x7F0E5E8Cu: goto label_7F0E5E8C;
    case 0x7F0E5E90u: goto label_7F0E5E90;
    case 0x7F0E5E94u: goto label_7F0E5E94;
    case 0x7F0E5E98u: goto label_7F0E5E98;
    case 0x7F0E5E9Cu: goto label_7F0E5E9C;
    case 0x7F0E5EA0u: goto label_7F0E5EA0;
    case 0x7F0E5EA4u: goto label_7F0E5EA4;
    case 0x7F0E5EA8u: goto label_7F0E5EA8;
    case 0x7F0E5EACu: goto label_7F0E5EAC;
    case 0x7F0E5EB0u: goto label_7F0E5EB0;
    case 0x7F0E5EB4u: goto label_7F0E5EB4;
    case 0x7F0E5EB8u: goto label_7F0E5EB8;
    case 0x7F0E5EBCu: goto label_7F0E5EBC;
    case 0x7F0E5EC0u: goto label_7F0E5EC0;
    case 0x7F0E5EC4u: goto label_7F0E5EC4;
    case 0x7F0E5EC8u: goto label_7F0E5EC8;
    case 0x7F0E5ECCu: goto label_7F0E5ECC;
    case 0x7F0E5ED0u: goto label_7F0E5ED0;
    case 0x7F0E5ED4u: goto label_7F0E5ED4;
    case 0x7F0E5ED8u: goto label_7F0E5ED8;
    case 0x7F0E5EDCu: goto label_7F0E5EDC;
    case 0x7F0E5EE0u: goto label_7F0E5EE0;
    case 0x7F0E5EE4u: goto label_7F0E5EE4;
    case 0x7F0E5EE8u: goto label_7F0E5EE8;
    case 0x7F0E5EECu: goto label_7F0E5EEC;
    case 0x7F0E5EF0u: goto label_7F0E5EF0;
    case 0x7F0E5EF4u: goto label_7F0E5EF4;
    case 0x7F0E5EF8u: goto label_7F0E5EF8;
    case 0x7F0E5EFCu: goto label_7F0E5EFC;
    case 0x7F0E5F00u: goto label_7F0E5F00;
    case 0x7F0E5F04u: goto label_7F0E5F04;
    case 0x7F0E5F08u: goto label_7F0E5F08;
    case 0x7F0E5F0Cu: goto label_7F0E5F0C;
    case 0x7F0E5F10u: goto label_7F0E5F10;
    case 0x7F0E5F14u: goto label_7F0E5F14;
    case 0x7F0E5F18u: goto label_7F0E5F18;
    case 0x7F0E5F1Cu: goto label_7F0E5F1C;
    case 0x7F0E5F20u: goto label_7F0E5F20;
    case 0x7F0E5F24u: goto label_7F0E5F24;
    case 0x7F0E5F28u: goto label_7F0E5F28;
    case 0x7F0E5F2Cu: goto label_7F0E5F2C;
    case 0x7F0E5F30u: goto label_7F0E5F30;
    case 0x7F0E5F34u: goto label_7F0E5F34;
    case 0x7F0E5F38u: goto label_7F0E5F38;
    case 0x7F0E5F3Cu: goto label_7F0E5F3C;
    case 0x7F0E5F40u: goto label_7F0E5F40;
    case 0x7F0E5F44u: goto label_7F0E5F44;
    case 0x7F0E5F48u: goto label_7F0E5F48;
    case 0x7F0E5F4Cu: goto label_7F0E5F4C;
    case 0x7F0E5F50u: goto label_7F0E5F50;
    case 0x7F0E5F54u: goto label_7F0E5F54;
    case 0x7F0E5F58u: goto label_7F0E5F58;
    case 0x7F0E5F5Cu: goto label_7F0E5F5C;
    case 0x7F0E5F60u: goto label_7F0E5F60;
    case 0x7F0E5F64u: goto label_7F0E5F64;
    case 0x7F0E5F68u: goto label_7F0E5F68;
    case 0x7F0E5F6Cu: goto label_7F0E5F6C;
    case 0x7F0E5F70u: goto label_7F0E5F70;
    case 0x7F0E5F74u: goto label_7F0E5F74;
    case 0x7F0E5F78u: goto label_7F0E5F78;
    case 0x7F0E5F7Cu: goto label_7F0E5F7C;
    case 0x7F0E5F80u: goto label_7F0E5F80;
    case 0x7F0E5F84u: goto label_7F0E5F84;
    case 0x7F0E5F88u: goto label_7F0E5F88;
    case 0x7F0E5F8Cu: goto label_7F0E5F8C;
    case 0x7F0E5F90u: goto label_7F0E5F90;
    case 0x7F0E5F94u: goto label_7F0E5F94;
    case 0x7F0E5F98u: goto label_7F0E5F98;
    case 0x7F0E5F9Cu: goto label_7F0E5F9C;
    case 0x7F0E5FA0u: goto label_7F0E5FA0;
    case 0x7F0E5FA4u: goto label_7F0E5FA4;
    case 0x7F0E5FA8u: goto label_7F0E5FA8;
    case 0x7F0E5FACu: goto label_7F0E5FAC;
    case 0x7F0E5FB0u: goto label_7F0E5FB0;
    case 0x7F0E5FB4u: goto label_7F0E5FB4;
    case 0x7F0E5FB8u: goto label_7F0E5FB8;
    case 0x7F0E5FBCu: goto label_7F0E5FBC;
    case 0x7F0E5FC0u: goto label_7F0E5FC0;
    case 0x7F0E5FC4u: goto label_7F0E5FC4;
    case 0x7F0E5FC8u: goto label_7F0E5FC8;
    case 0x7F0E5FCCu: goto label_7F0E5FCC;
    case 0x7F0E5FD0u: goto label_7F0E5FD0;
    case 0x7F0E5FD4u: goto label_7F0E5FD4;
    case 0x7F0E5FD8u: goto label_7F0E5FD8;
    case 0x7F0E5FDCu: goto label_7F0E5FDC;
    case 0x7F0E5FE0u: goto label_7F0E5FE0;
    case 0x7F0E5FE4u: goto label_7F0E5FE4;
    case 0x7F0E5FE8u: goto label_7F0E5FE8;
    case 0x7F0E5FECu: goto label_7F0E5FEC;
    case 0x7F0E5FF0u: goto label_7F0E5FF0;
    case 0x7F0E5FF4u: goto label_7F0E5FF4;
    case 0x7F0E5FF8u: goto label_7F0E5FF8;
    case 0x7F0E5FFCu: goto label_7F0E5FFC;
    case 0x7F0E6000u: goto label_7F0E6000;
    case 0x7F0E6004u: goto label_7F0E6004;
    case 0x7F0E6008u: goto label_7F0E6008;
    case 0x7F0E600Cu: goto label_7F0E600C;
    case 0x7F0E6010u: goto label_7F0E6010;
    case 0x7F0E6014u: goto label_7F0E6014;
    case 0x7F0E6018u: goto label_7F0E6018;
    case 0x7F0E601Cu: goto label_7F0E601C;
    case 0x7F0E6020u: goto label_7F0E6020;
    case 0x7F0E6024u: goto label_7F0E6024;
    case 0x7F0E6028u: goto label_7F0E6028;
    case 0x7F0E602Cu: goto label_7F0E602C;
    case 0x7F0E6030u: goto label_7F0E6030;
    case 0x7F0E6034u: goto label_7F0E6034;
    case 0x7F0E6038u: goto label_7F0E6038;
    case 0x7F0E603Cu: goto label_7F0E603C;
    case 0x7F0E6040u: goto label_7F0E6040;
    case 0x7F0E6044u: goto label_7F0E6044;
    case 0x7F0E6048u: goto label_7F0E6048;
    case 0x7F0E604Cu: goto label_7F0E604C;
    case 0x7F0E6050u: goto label_7F0E6050;
    case 0x7F0E6054u: goto label_7F0E6054;
    case 0x7F0E6058u: goto label_7F0E6058;
    case 0x7F0E605Cu: goto label_7F0E605C;
    case 0x7F0E6060u: goto label_7F0E6060;
    case 0x7F0E6064u: goto label_7F0E6064;
    case 0x7F0E6068u: goto label_7F0E6068;
    case 0x7F0E606Cu: goto label_7F0E606C;
    case 0x7F0E6070u: goto label_7F0E6070;
    case 0x7F0E6074u: goto label_7F0E6074;
    case 0x7F0E6078u: goto label_7F0E6078;
    case 0x7F0E607Cu: goto label_7F0E607C;
    case 0x7F0E6080u: goto label_7F0E6080;
    case 0x7F0E6084u: goto label_7F0E6084;
    case 0x7F0E6088u: goto label_7F0E6088;
    case 0x7F0E608Cu: goto label_7F0E608C;
    case 0x7F0E6090u: goto label_7F0E6090;
    case 0x7F0E6094u: goto label_7F0E6094;
    case 0x7F0E6098u: goto label_7F0E6098;
    case 0x7F0E609Cu: goto label_7F0E609C;
    case 0x7F0E60A0u: goto label_7F0E60A0;
    case 0x7F0E60A4u: goto label_7F0E60A4;
    case 0x7F0E60A8u: goto label_7F0E60A8;
    case 0x7F0E60ACu: goto label_7F0E60AC;
    case 0x7F0E60B0u: goto label_7F0E60B0;
    case 0x7F0E60B4u: goto label_7F0E60B4;
    case 0x7F0E60B8u: goto label_7F0E60B8;
    case 0x7F0E60BCu: goto label_7F0E60BC;
    case 0x7F0E60C0u: goto label_7F0E60C0;
    case 0x7F0E60C4u: goto label_7F0E60C4;
    case 0x7F0E60C8u: goto label_7F0E60C8;
    case 0x7F0E60CCu: goto label_7F0E60CC;
    case 0x7F0E60D0u: goto label_7F0E60D0;
    case 0x7F0E60D4u: goto label_7F0E60D4;
    case 0x7F0E60D8u: goto label_7F0E60D8;
    case 0x7F0E60DCu: goto label_7F0E60DC;
    case 0x7F0E60E0u: goto label_7F0E60E0;
    case 0x7F0E60E4u: goto label_7F0E60E4;
    case 0x7F0E60E8u: goto label_7F0E60E8;
    case 0x7F0E60ECu: goto label_7F0E60EC;
    case 0x7F0E60F0u: goto label_7F0E60F0;
    case 0x7F0E60F4u: goto label_7F0E60F4;
    case 0x7F0E60F8u: goto label_7F0E60F8;
    case 0x7F0E60FCu: goto label_7F0E60FC;
    case 0x7F0E6100u: goto label_7F0E6100;
    case 0x7F0E6104u: goto label_7F0E6104;
    case 0x7F0E6108u: goto label_7F0E6108;
    case 0x7F0E610Cu: goto label_7F0E610C;
    case 0x7F0E6110u: goto label_7F0E6110;
    case 0x7F0E6114u: goto label_7F0E6114;
    case 0x7F0E6118u: goto label_7F0E6118;
    case 0x7F0E611Cu: goto label_7F0E611C;
    case 0x7F0E6120u: goto label_7F0E6120;
    case 0x7F0E6124u: goto label_7F0E6124;
    case 0x7F0E6128u: goto label_7F0E6128;
    case 0x7F0E612Cu: goto label_7F0E612C;
    case 0x7F0E6130u: goto label_7F0E6130;
    case 0x7F0E6134u: goto label_7F0E6134;
    case 0x7F0E6138u: goto label_7F0E6138;
    case 0x7F0E613Cu: goto label_7F0E613C;
    case 0x7F0E6140u: goto label_7F0E6140;
    case 0x7F0E6144u: goto label_7F0E6144;
    case 0x7F0E6148u: goto label_7F0E6148;
    case 0x7F0E614Cu: goto label_7F0E614C;
    case 0x7F0E6150u: goto label_7F0E6150;
    case 0x7F0E6154u: goto label_7F0E6154;
    case 0x7F0E6158u: goto label_7F0E6158;
    case 0x7F0E615Cu: goto label_7F0E615C;
    case 0x7F0E6160u: goto label_7F0E6160;
    case 0x7F0E6164u: goto label_7F0E6164;
    case 0x7F0E6168u: goto label_7F0E6168;
    case 0x7F0E616Cu: goto label_7F0E616C;
    case 0x7F0E6170u: goto label_7F0E6170;
    case 0x7F0E6174u: goto label_7F0E6174;
    case 0x7F0E6178u: goto label_7F0E6178;
    case 0x7F0E617Cu: goto label_7F0E617C;
    case 0x7F0E6180u: goto label_7F0E6180;
    case 0x7F0E6184u: goto label_7F0E6184;
    case 0x7F0E6188u: goto label_7F0E6188;
    case 0x7F0E618Cu: goto label_7F0E618C;
    case 0x7F0E6190u: goto label_7F0E6190;
    case 0x7F0E6194u: goto label_7F0E6194;
    case 0x7F0E6198u: goto label_7F0E6198;
    case 0x7F0E619Cu: goto label_7F0E619C;
    case 0x7F0E61A0u: goto label_7F0E61A0;
    case 0x7F0E61A4u: goto label_7F0E61A4;
    case 0x7F0E61A8u: goto label_7F0E61A8;
    case 0x7F0E61ACu: goto label_7F0E61AC;
    case 0x7F0E61B0u: goto label_7F0E61B0;
    case 0x7F0E61B4u: goto label_7F0E61B4;
    case 0x7F0E61B8u: goto label_7F0E61B8;
    case 0x7F0E61BCu: goto label_7F0E61BC;
    case 0x7F0E61C0u: goto label_7F0E61C0;
    case 0x7F0E61C4u: goto label_7F0E61C4;
    case 0x7F0E61C8u: goto label_7F0E61C8;
    case 0x7F0E61CCu: goto label_7F0E61CC;
    case 0x7F0E61D0u: goto label_7F0E61D0;
    case 0x7F0E61D4u: goto label_7F0E61D4;
    case 0x7F0E61D8u: goto label_7F0E61D8;
    case 0x7F0E61DCu: goto label_7F0E61DC;
    case 0x7F0E61E0u: goto label_7F0E61E0;
    case 0x7F0E61E4u: goto label_7F0E61E4;
    case 0x7F0E61E8u: goto label_7F0E61E8;
    case 0x7F0E61ECu: goto label_7F0E61EC;
    case 0x7F0E61F0u: goto label_7F0E61F0;
    case 0x7F0E61F4u: goto label_7F0E61F4;
    case 0x7F0E61F8u: goto label_7F0E61F8;
    case 0x7F0E61FCu: goto label_7F0E61FC;
    case 0x7F0E6200u: goto label_7F0E6200;
    case 0x7F0E6204u: goto label_7F0E6204;
    case 0x7F0E6208u: goto label_7F0E6208;
    case 0x7F0E620Cu: goto label_7F0E620C;
    case 0x7F0E6210u: goto label_7F0E6210;
    case 0x7F0E6214u: goto label_7F0E6214;
    case 0x7F0E6218u: goto label_7F0E6218;
    case 0x7F0E621Cu: goto label_7F0E621C;
    case 0x7F0E6220u: goto label_7F0E6220;
    case 0x7F0E6224u: goto label_7F0E6224;
    case 0x7F0E6228u: goto label_7F0E6228;
    case 0x7F0E622Cu: goto label_7F0E622C;
    case 0x7F0E6230u: goto label_7F0E6230;
    case 0x7F0E6234u: goto label_7F0E6234;
    case 0x7F0E6238u: goto label_7F0E6238;
    case 0x7F0E623Cu: goto label_7F0E623C;
    case 0x7F0E6240u: goto label_7F0E6240;
    case 0x7F0E6244u: goto label_7F0E6244;
    case 0x7F0E6248u: goto label_7F0E6248;
    case 0x7F0E624Cu: goto label_7F0E624C;
    case 0x7F0E6250u: goto label_7F0E6250;
    case 0x7F0E6254u: goto label_7F0E6254;
    case 0x7F0E6258u: goto label_7F0E6258;
    case 0x7F0E625Cu: goto label_7F0E625C;
    case 0x7F0E6260u: goto label_7F0E6260;
    case 0x7F0E6264u: goto label_7F0E6264;
    case 0x7F0E6268u: goto label_7F0E6268;
    case 0x7F0E626Cu: goto label_7F0E626C;
    case 0x7F0E6270u: goto label_7F0E6270;
    case 0x7F0E6274u: goto label_7F0E6274;
    case 0x7F0E6278u: goto label_7F0E6278;
    case 0x7F0E627Cu: goto label_7F0E627C;
    case 0x7F0E6280u: goto label_7F0E6280;
    case 0x7F0E6284u: goto label_7F0E6284;
    case 0x7F0E6288u: goto label_7F0E6288;
    case 0x7F0E628Cu: goto label_7F0E628C;
    case 0x7F0E6290u: goto label_7F0E6290;
    case 0x7F0E6294u: goto label_7F0E6294;
    case 0x7F0E6298u: goto label_7F0E6298;
    case 0x7F0E629Cu: goto label_7F0E629C;
    case 0x7F0E62A0u: goto label_7F0E62A0;
    case 0x7F0E62A4u: goto label_7F0E62A4;
    case 0x7F0E62A8u: goto label_7F0E62A8;
    case 0x7F0E62ACu: goto label_7F0E62AC;
    case 0x7F0E62B0u: goto label_7F0E62B0;
    case 0x7F0E62B4u: goto label_7F0E62B4;
    case 0x7F0E62B8u: goto label_7F0E62B8;
    case 0x7F0E62BCu: goto label_7F0E62BC;
    case 0x7F0E62C0u: goto label_7F0E62C0;
    case 0x7F0E62C4u: goto label_7F0E62C4;
    case 0x7F0E62C8u: goto label_7F0E62C8;
    case 0x7F0E62CCu: goto label_7F0E62CC;
    case 0x7F0E62D0u: goto label_7F0E62D0;
    case 0x7F0E62D4u: goto label_7F0E62D4;
    case 0x7F0E62D8u: goto label_7F0E62D8;
    case 0x7F0E62DCu: goto label_7F0E62DC;
    case 0x7F0E62E0u: goto label_7F0E62E0;
    case 0x7F0E62E4u: goto label_7F0E62E4;
    case 0x7F0E62E8u: goto label_7F0E62E8;
    case 0x7F0E62ECu: goto label_7F0E62EC;
    case 0x7F0E62F0u: goto label_7F0E62F0;
    case 0x7F0E62F4u: goto label_7F0E62F4;
    case 0x7F0E62F8u: goto label_7F0E62F8;
    case 0x7F0E62FCu: goto label_7F0E62FC;
    case 0x7F0E6300u: goto label_7F0E6300;
    case 0x7F0E6304u: goto label_7F0E6304;
    case 0x7F0E6308u: goto label_7F0E6308;
    case 0x7F0E630Cu: goto label_7F0E630C;
    case 0x7F0E6310u: goto label_7F0E6310;
    case 0x7F0E6314u: goto label_7F0E6314;
    case 0x7F0E6318u: goto label_7F0E6318;
    case 0x7F0E631Cu: goto label_7F0E631C;
    case 0x7F0E6320u: goto label_7F0E6320;
    case 0x7F0E6324u: goto label_7F0E6324;
    case 0x7F0E6328u: goto label_7F0E6328;
    case 0x7F0E632Cu: goto label_7F0E632C;
    case 0x7F0E6330u: goto label_7F0E6330;
    case 0x7F0E6334u: goto label_7F0E6334;
    case 0x7F0E6338u: goto label_7F0E6338;
    case 0x7F0E633Cu: goto label_7F0E633C;
    case 0x7F0E6340u: goto label_7F0E6340;
    case 0x7F0E6344u: goto label_7F0E6344;
    case 0x7F0E6348u: goto label_7F0E6348;
    case 0x7F0E634Cu: goto label_7F0E634C;
    case 0x7F0E6350u: goto label_7F0E6350;
    case 0x7F0E6354u: goto label_7F0E6354;
    case 0x7F0E6358u: goto label_7F0E6358;
    case 0x7F0E635Cu: goto label_7F0E635C;
    case 0x7F0E6360u: goto label_7F0E6360;
    case 0x7F0E6364u: goto label_7F0E6364;
    case 0x7F0E6368u: goto label_7F0E6368;
    case 0x7F0E636Cu: goto label_7F0E636C;
    case 0x7F0E6370u: goto label_7F0E6370;
    case 0x7F0E6374u: goto label_7F0E6374;
    case 0x7F0E6378u: goto label_7F0E6378;
    case 0x7F0E637Cu: goto label_7F0E637C;
    case 0x7F0E6380u: goto label_7F0E6380;
    case 0x7F0E6384u: goto label_7F0E6384;
    case 0x7F0E6388u: goto label_7F0E6388;
    case 0x7F0E638Cu: goto label_7F0E638C;
    case 0x7F0E6390u: goto label_7F0E6390;
    case 0x7F0E6394u: goto label_7F0E6394;
    case 0x7F0E6398u: goto label_7F0E6398;
    case 0x7F0E639Cu: goto label_7F0E639C;
    case 0x7F0E63A0u: goto label_7F0E63A0;
    case 0x7F0E63A4u: goto label_7F0E63A4;
    case 0x7F0E63A8u: goto label_7F0E63A8;
    case 0x7F0E63ACu: goto label_7F0E63AC;
    case 0x7F0E63B0u: goto label_7F0E63B0;
    case 0x7F0E63B4u: goto label_7F0E63B4;
    case 0x7F0E63B8u: goto label_7F0E63B8;
    case 0x7F0E63BCu: goto label_7F0E63BC;
    case 0x7F0E63C0u: goto label_7F0E63C0;
    case 0x7F0E63C4u: goto label_7F0E63C4;
    case 0x7F0E63C8u: goto label_7F0E63C8;
    case 0x7F0E63CCu: goto label_7F0E63CC;
    case 0x7F0E63D0u: goto label_7F0E63D0;
    case 0x7F0E63D4u: goto label_7F0E63D4;
    case 0x7F0E63D8u: goto label_7F0E63D8;
    case 0x7F0E63DCu: goto label_7F0E63DC;
    case 0x7F0E63E0u: goto label_7F0E63E0;
    case 0x7F0E63E4u: goto label_7F0E63E4;
    case 0x7F0E63E8u: goto label_7F0E63E8;
    case 0x7F0E63ECu: goto label_7F0E63EC;
    case 0x7F0E63F0u: goto label_7F0E63F0;
    case 0x7F0E63F4u: goto label_7F0E63F4;
    case 0x7F0E63F8u: goto label_7F0E63F8;
    case 0x7F0E63FCu: goto label_7F0E63FC;
    case 0x7F0E6400u: goto label_7F0E6400;
    case 0x7F0E6404u: goto label_7F0E6404;
    case 0x7F0E6408u: goto label_7F0E6408;
    case 0x7F0E640Cu: goto label_7F0E640C;
    case 0x7F0E6410u: goto label_7F0E6410;
    case 0x7F0E6414u: goto label_7F0E6414;
    case 0x7F0E6418u: goto label_7F0E6418;
    case 0x7F0E641Cu: goto label_7F0E641C;
    case 0x7F0E6420u: goto label_7F0E6420;
    case 0x7F0E6424u: goto label_7F0E6424;
    case 0x7F0E6428u: goto label_7F0E6428;
    case 0x7F0E642Cu: goto label_7F0E642C;
    case 0x7F0E6430u: goto label_7F0E6430;
    case 0x7F0E6434u: goto label_7F0E6434;
    case 0x7F0E6438u: goto label_7F0E6438;
    case 0x7F0E643Cu: goto label_7F0E643C;
    case 0x7F0E6440u: goto label_7F0E6440;
    case 0x7F0E6444u: goto label_7F0E6444;
    case 0x7F0E6448u: goto label_7F0E6448;
    case 0x7F0E644Cu: goto label_7F0E644C;
    case 0x7F0E6450u: goto label_7F0E6450;
    case 0x7F0E6454u: goto label_7F0E6454;
    case 0x7F0E6458u: goto label_7F0E6458;
    case 0x7F0E645Cu: goto label_7F0E645C;
    case 0x7F0E6460u: goto label_7F0E6460;
    case 0x7F0E6464u: goto label_7F0E6464;
    case 0x7F0E6468u: goto label_7F0E6468;
    case 0x7F0E646Cu: goto label_7F0E646C;
    case 0x7F0E6470u: goto label_7F0E6470;
    case 0x7F0E6474u: goto label_7F0E6474;
    case 0x7F0E6478u: goto label_7F0E6478;
    case 0x7F0E647Cu: goto label_7F0E647C;
    case 0x7F0E6480u: goto label_7F0E6480;
    case 0x7F0E6484u: goto label_7F0E6484;
    case 0x7F0E6488u: goto label_7F0E6488;
    case 0x7F0E648Cu: goto label_7F0E648C;
    case 0x7F0E6490u: goto label_7F0E6490;
    case 0x7F0E6494u: goto label_7F0E6494;
    case 0x7F0E6498u: goto label_7F0E6498;
    case 0x7F0E649Cu: goto label_7F0E649C;
    case 0x7F0E64A0u: goto label_7F0E64A0;
    case 0x7F0E64A4u: goto label_7F0E64A4;
    case 0x7F0E64A8u: goto label_7F0E64A8;
    case 0x7F0E64ACu: goto label_7F0E64AC;
    case 0x7F0E64B0u: goto label_7F0E64B0;
    case 0x7F0E64B4u: goto label_7F0E64B4;
    case 0x7F0E64B8u: goto label_7F0E64B8;
    case 0x7F0E64BCu: goto label_7F0E64BC;
    case 0x7F0E64C0u: goto label_7F0E64C0;
    case 0x7F0E64C4u: goto label_7F0E64C4;
    case 0x7F0E64C8u: goto label_7F0E64C8;
    case 0x7F0E64CCu: goto label_7F0E64CC;
    case 0x7F0E64D0u: goto label_7F0E64D0;
    case 0x7F0E64D4u: goto label_7F0E64D4;
    case 0x7F0E64D8u: goto label_7F0E64D8;
    case 0x7F0E64DCu: goto label_7F0E64DC;
    case 0x7F0E64E0u: goto label_7F0E64E0;
    case 0x7F0E64E4u: goto label_7F0E64E4;
    case 0x7F0E64E8u: goto label_7F0E64E8;
    case 0x7F0E64ECu: goto label_7F0E64EC;
    case 0x7F0E64F0u: goto label_7F0E64F0;
    case 0x7F0E64F4u: goto label_7F0E64F4;
    case 0x7F0E64F8u: goto label_7F0E64F8;
    case 0x7F0E64FCu: goto label_7F0E64FC;
    case 0x7F0E6500u: goto label_7F0E6500;
    case 0x7F0E6504u: goto label_7F0E6504;
    case 0x7F0E6508u: goto label_7F0E6508;
    case 0x7F0E650Cu: goto label_7F0E650C;
    case 0x7F0E6510u: goto label_7F0E6510;
    case 0x7F0E6514u: goto label_7F0E6514;
    case 0x7F0E6518u: goto label_7F0E6518;
    case 0x7F0E651Cu: goto label_7F0E651C;
    case 0x7F0E6520u: goto label_7F0E6520;
    case 0x7F0E6524u: goto label_7F0E6524;
    case 0x7F0E6528u: goto label_7F0E6528;
    case 0x7F0E652Cu: goto label_7F0E652C;
    case 0x7F0E6530u: goto label_7F0E6530;
    case 0x7F0E6534u: goto label_7F0E6534;
    case 0x7F0E6538u: goto label_7F0E6538;
    case 0x7F0E653Cu: goto label_7F0E653C;
    case 0x7F0E6540u: goto label_7F0E6540;
    case 0x7F0E6544u: goto label_7F0E6544;
    case 0x7F0E6548u: goto label_7F0E6548;
    case 0x7F0E654Cu: goto label_7F0E654C;
    case 0x7F0E6550u: goto label_7F0E6550;
    case 0x7F0E6554u: goto label_7F0E6554;
    case 0x7F0E6558u: goto label_7F0E6558;
    case 0x7F0E655Cu: goto label_7F0E655C;
    case 0x7F0E6560u: goto label_7F0E6560;
    case 0x7F0E6564u: goto label_7F0E6564;
    case 0x7F0E6568u: goto label_7F0E6568;
    case 0x7F0E656Cu: goto label_7F0E656C;
    case 0x7F0E6570u: goto label_7F0E6570;
    case 0x7F0E6574u: goto label_7F0E6574;
    case 0x7F0E6578u: goto label_7F0E6578;
    case 0x7F0E657Cu: goto label_7F0E657C;
    case 0x7F0E6580u: goto label_7F0E6580;
    case 0x7F0E6584u: goto label_7F0E6584;
    case 0x7F0E6588u: goto label_7F0E6588;
    case 0x7F0E658Cu: goto label_7F0E658C;
    case 0x7F0E6590u: goto label_7F0E6590;
    case 0x7F0E6594u: goto label_7F0E6594;
    case 0x7F0E6598u: goto label_7F0E6598;
    case 0x7F0E659Cu: goto label_7F0E659C;
    case 0x7F0E65A0u: goto label_7F0E65A0;
    case 0x7F0E65A4u: goto label_7F0E65A4;
    case 0x7F0E65A8u: goto label_7F0E65A8;
    case 0x7F0E65ACu: goto label_7F0E65AC;
    case 0x7F0E65B0u: goto label_7F0E65B0;
    case 0x7F0E65B4u: goto label_7F0E65B4;
    case 0x7F0E65B8u: goto label_7F0E65B8;
    case 0x7F0E65BCu: goto label_7F0E65BC;
    case 0x7F0E65C0u: goto label_7F0E65C0;
    case 0x7F0E65C4u: goto label_7F0E65C4;
    case 0x7F0E65C8u: goto label_7F0E65C8;
    case 0x7F0E65CCu: goto label_7F0E65CC;
    case 0x7F0E65D0u: goto label_7F0E65D0;
    case 0x7F0E65D4u: goto label_7F0E65D4;
    case 0x7F0E65D8u: goto label_7F0E65D8;
    case 0x7F0E65DCu: goto label_7F0E65DC;
    case 0x7F0E65E0u: goto label_7F0E65E0;
    case 0x7F0E65E4u: goto label_7F0E65E4;
    case 0x7F0E65E8u: goto label_7F0E65E8;
    case 0x7F0E65ECu: goto label_7F0E65EC;
    case 0x7F0E65F0u: goto label_7F0E65F0;
    case 0x7F0E65F4u: goto label_7F0E65F4;
    case 0x7F0E65F8u: goto label_7F0E65F8;
    case 0x7F0E65FCu: goto label_7F0E65FC;
    case 0x7F0E6600u: goto label_7F0E6600;
    case 0x7F0E6604u: goto label_7F0E6604;
    case 0x7F0E6608u: goto label_7F0E6608;
    case 0x7F0E660Cu: goto label_7F0E660C;
    case 0x7F0E6610u: goto label_7F0E6610;
    case 0x7F0E6614u: goto label_7F0E6614;
    case 0x7F0E6618u: goto label_7F0E6618;
    case 0x7F0E661Cu: goto label_7F0E661C;
    case 0x7F0E6620u: goto label_7F0E6620;
    case 0x7F0E6624u: goto label_7F0E6624;
    case 0x7F0E6628u: goto label_7F0E6628;
    case 0x7F0E662Cu: goto label_7F0E662C;
    case 0x7F0E6630u: goto label_7F0E6630;
    case 0x7F0E6634u: goto label_7F0E6634;
    case 0x7F0E6638u: goto label_7F0E6638;
    case 0x7F0E663Cu: goto label_7F0E663C;
    case 0x7F0E6640u: goto label_7F0E6640;
    case 0x7F0E6644u: goto label_7F0E6644;
    case 0x7F0E6648u: goto label_7F0E6648;
    case 0x7F0E664Cu: goto label_7F0E664C;
    case 0x7F0E6650u: goto label_7F0E6650;
    case 0x7F0E6654u: goto label_7F0E6654;
    case 0x7F0E6658u: goto label_7F0E6658;
    case 0x7F0E665Cu: goto label_7F0E665C;
    case 0x7F0E6660u: goto label_7F0E6660;
    case 0x7F0E6664u: goto label_7F0E6664;
    case 0x7F0E6668u: goto label_7F0E6668;
    case 0x7F0E666Cu: goto label_7F0E666C;
    case 0x7F0E6670u: goto label_7F0E6670;
    case 0x7F0E6674u: goto label_7F0E6674;
    case 0x7F0E6678u: goto label_7F0E6678;
    case 0x7F0E667Cu: goto label_7F0E667C;
    case 0x7F0E6680u: goto label_7F0E6680;
    case 0x7F0E6684u: goto label_7F0E6684;
    case 0x7F0E6688u: goto label_7F0E6688;
    case 0x7F0E668Cu: goto label_7F0E668C;
    case 0x7F0E6690u: goto label_7F0E6690;
    case 0x7F0E6694u: goto label_7F0E6694;
    case 0x7F0E6698u: goto label_7F0E6698;
    case 0x7F0E669Cu: goto label_7F0E669C;
    case 0x7F0E66A0u: goto label_7F0E66A0;
    case 0x7F0E66A4u: goto label_7F0E66A4;
    case 0x7F0E66A8u: goto label_7F0E66A8;
    case 0x7F0E66ACu: goto label_7F0E66AC;
    case 0x7F0E66B0u: goto label_7F0E66B0;
    case 0x7F0E66B4u: goto label_7F0E66B4;
    case 0x7F0E66B8u: goto label_7F0E66B8;
    case 0x7F0E66BCu: goto label_7F0E66BC;
    case 0x7F0E66C0u: goto label_7F0E66C0;
    case 0x7F0E66C4u: goto label_7F0E66C4;
    case 0x7F0E66C8u: goto label_7F0E66C8;
    case 0x7F0E66CCu: goto label_7F0E66CC;
    case 0x7F0E66D0u: goto label_7F0E66D0;
    case 0x7F0E66D4u: goto label_7F0E66D4;
    case 0x7F0E66D8u: goto label_7F0E66D8;
    case 0x7F0E66DCu: goto label_7F0E66DC;
    case 0x7F0E66E0u: goto label_7F0E66E0;
    case 0x7F0E66E4u: goto label_7F0E66E4;
    case 0x7F0E66E8u: goto label_7F0E66E8;
    case 0x7F0E66ECu: goto label_7F0E66EC;
    case 0x7F0E66F0u: goto label_7F0E66F0;
    case 0x7F0E66F4u: goto label_7F0E66F4;
    case 0x7F0E66F8u: goto label_7F0E66F8;
    case 0x7F0E66FCu: goto label_7F0E66FC;
    case 0x7F0E6700u: goto label_7F0E6700;
    case 0x7F0E6704u: goto label_7F0E6704;
    case 0x7F0E6708u: goto label_7F0E6708;
    case 0x7F0E670Cu: goto label_7F0E670C;
    case 0x7F0E6710u: goto label_7F0E6710;
    case 0x7F0E6714u: goto label_7F0E6714;
    case 0x7F0E6718u: goto label_7F0E6718;
    case 0x7F0E671Cu: goto label_7F0E671C;
    case 0x7F0E6720u: goto label_7F0E6720;
    case 0x7F0E6724u: goto label_7F0E6724;
    case 0x7F0E6728u: goto label_7F0E6728;
    case 0x7F0E672Cu: goto label_7F0E672C;
    case 0x7F0E6730u: goto label_7F0E6730;
    case 0x7F0E6734u: goto label_7F0E6734;
    case 0x7F0E6738u: goto label_7F0E6738;
    case 0x7F0E673Cu: goto label_7F0E673C;
    case 0x7F0E6740u: goto label_7F0E6740;
    case 0x7F0E6744u: goto label_7F0E6744;
    case 0x7F0E6748u: goto label_7F0E6748;
    case 0x7F0E674Cu: goto label_7F0E674C;
    case 0x7F0E6750u: goto label_7F0E6750;
    case 0x7F0E6754u: goto label_7F0E6754;
    case 0x7F0E6758u: goto label_7F0E6758;
    case 0x7F0E675Cu: goto label_7F0E675C;
    case 0x7F0E6760u: goto label_7F0E6760;
    case 0x7F0E6764u: goto label_7F0E6764;
    case 0x7F0E6768u: goto label_7F0E6768;
    case 0x7F0E676Cu: goto label_7F0E676C;
    case 0x7F0E6770u: goto label_7F0E6770;
    case 0x7F0E6774u: goto label_7F0E6774;
    case 0x7F0E6778u: goto label_7F0E6778;
    case 0x7F0E677Cu: goto label_7F0E677C;
    case 0x7F0E6780u: goto label_7F0E6780;
    case 0x7F0E6784u: goto label_7F0E6784;
    case 0x7F0E6788u: goto label_7F0E6788;
    case 0x7F0E678Cu: goto label_7F0E678C;
    case 0x7F0E6790u: goto label_7F0E6790;
    case 0x7F0E6794u: goto label_7F0E6794;
    case 0x7F0E6798u: goto label_7F0E6798;
    case 0x7F0E679Cu: goto label_7F0E679C;
    case 0x7F0E67A0u: goto label_7F0E67A0;
    case 0x7F0E67A4u: goto label_7F0E67A4;
    case 0x7F0E67A8u: goto label_7F0E67A8;
    case 0x7F0E67ACu: goto label_7F0E67AC;
    case 0x7F0E67B0u: goto label_7F0E67B0;
    case 0x7F0E67B4u: goto label_7F0E67B4;
    case 0x7F0E67B8u: goto label_7F0E67B8;
    case 0x7F0E67BCu: goto label_7F0E67BC;
    case 0x7F0E67C0u: goto label_7F0E67C0;
    case 0x7F0E67C4u: goto label_7F0E67C4;
    case 0x7F0E67C8u: goto label_7F0E67C8;
    case 0x7F0E67CCu: goto label_7F0E67CC;
    case 0x7F0E67D0u: goto label_7F0E67D0;
    case 0x7F0E67D4u: goto label_7F0E67D4;
    case 0x7F0E67D8u: goto label_7F0E67D8;
    case 0x7F0E67DCu: goto label_7F0E67DC;
    case 0x7F0E67E0u: goto label_7F0E67E0;
    case 0x7F0E67E4u: goto label_7F0E67E4;
    case 0x7F0E67E8u: goto label_7F0E67E8;
    case 0x7F0E67ECu: goto label_7F0E67EC;
    case 0x7F0E67F0u: goto label_7F0E67F0;
    case 0x7F0E67F4u: goto label_7F0E67F4;
    case 0x7F0E67F8u: goto label_7F0E67F8;
    case 0x7F0E67FCu: goto label_7F0E67FC;
    case 0x7F0E6800u: goto label_7F0E6800;
    case 0x7F0E6804u: goto label_7F0E6804;
    case 0x7F0E6808u: goto label_7F0E6808;
    case 0x7F0E680Cu: goto label_7F0E680C;
    case 0x7F0E6810u: goto label_7F0E6810;
    case 0x7F0E6814u: goto label_7F0E6814;
    case 0x7F0E6818u: goto label_7F0E6818;
    case 0x7F0E681Cu: goto label_7F0E681C;
    case 0x7F0E6820u: goto label_7F0E6820;
    case 0x7F0E6824u: goto label_7F0E6824;
    case 0x7F0E6828u: goto label_7F0E6828;
    case 0x7F0E682Cu: goto label_7F0E682C;
    case 0x7F0E6830u: goto label_7F0E6830;
    case 0x7F0E6834u: goto label_7F0E6834;
    case 0x7F0E6838u: goto label_7F0E6838;
    case 0x7F0E683Cu: goto label_7F0E683C;
    case 0x7F0E6840u: goto label_7F0E6840;
    case 0x7F0E6844u: goto label_7F0E6844;
    case 0x7F0E6848u: goto label_7F0E6848;
    case 0x7F0E684Cu: goto label_7F0E684C;
    case 0x7F0E6850u: goto label_7F0E6850;
    case 0x7F0E6854u: goto label_7F0E6854;
    case 0x7F0E6858u: goto label_7F0E6858;
    case 0x7F0E685Cu: goto label_7F0E685C;
    case 0x7F0E6860u: goto label_7F0E6860;
    case 0x7F0E6864u: goto label_7F0E6864;
    case 0x7F0E6868u: goto label_7F0E6868;
    case 0x7F0E686Cu: goto label_7F0E686C;
    case 0x7F0E6870u: goto label_7F0E6870;
    case 0x7F0E6874u: goto label_7F0E6874;
    case 0x7F0E6878u: goto label_7F0E6878;
    case 0x7F0E687Cu: goto label_7F0E687C;
    case 0x7F0E6880u: goto label_7F0E6880;
    case 0x7F0E6884u: goto label_7F0E6884;
    case 0x7F0E6888u: goto label_7F0E6888;
    case 0x7F0E688Cu: goto label_7F0E688C;
    case 0x7F0E6890u: goto label_7F0E6890;
    case 0x7F0E6894u: goto label_7F0E6894;
    case 0x7F0E6898u: goto label_7F0E6898;
    case 0x7F0E689Cu: goto label_7F0E689C;
    case 0x7F0E68A0u: goto label_7F0E68A0;
    case 0x7F0E68A4u: goto label_7F0E68A4;
    case 0x7F0E68A8u: goto label_7F0E68A8;
    case 0x7F0E68ACu: goto label_7F0E68AC;
    case 0x7F0E68B0u: goto label_7F0E68B0;
    case 0x7F0E68B4u: goto label_7F0E68B4;
    case 0x7F0E68B8u: goto label_7F0E68B8;
    case 0x7F0E68BCu: goto label_7F0E68BC;
    case 0x7F0E68C0u: goto label_7F0E68C0;
    case 0x7F0E68C4u: goto label_7F0E68C4;
    case 0x7F0E68C8u: goto label_7F0E68C8;
    case 0x7F0E68CCu: goto label_7F0E68CC;
    case 0x7F0E68D0u: goto label_7F0E68D0;
    case 0x7F0E68D4u: goto label_7F0E68D4;
    case 0x7F0E68D8u: goto label_7F0E68D8;
    case 0x7F0E68DCu: goto label_7F0E68DC;
    case 0x7F0E68E0u: goto label_7F0E68E0;
    case 0x7F0E68E4u: goto label_7F0E68E4;
    case 0x7F0E68E8u: goto label_7F0E68E8;
    case 0x7F0E68ECu: goto label_7F0E68EC;
    case 0x7F0E68F0u: goto label_7F0E68F0;
    case 0x7F0E68F4u: goto label_7F0E68F4;
    case 0x7F0E68F8u: goto label_7F0E68F8;
    case 0x7F0E68FCu: goto label_7F0E68FC;
    case 0x7F0E6900u: goto label_7F0E6900;
    case 0x7F0E6904u: goto label_7F0E6904;
    case 0x7F0E6908u: goto label_7F0E6908;
    case 0x7F0E690Cu: goto label_7F0E690C;
    case 0x7F0E6910u: goto label_7F0E6910;
    case 0x7F0E6914u: goto label_7F0E6914;
    case 0x7F0E6918u: goto label_7F0E6918;
    case 0x7F0E691Cu: goto label_7F0E691C;
    case 0x7F0E6920u: goto label_7F0E6920;
    case 0x7F0E6924u: goto label_7F0E6924;
    case 0x7F0E6928u: goto label_7F0E6928;
    case 0x7F0E692Cu: goto label_7F0E692C;
    case 0x7F0E6930u: goto label_7F0E6930;
    case 0x7F0E6934u: goto label_7F0E6934;
    case 0x7F0E6938u: goto label_7F0E6938;
    case 0x7F0E693Cu: goto label_7F0E693C;
    case 0x7F0E6940u: goto label_7F0E6940;
    case 0x7F0E6944u: goto label_7F0E6944;
    case 0x7F0E6948u: goto label_7F0E6948;
    case 0x7F0E694Cu: goto label_7F0E694C;
    case 0x7F0E6950u: goto label_7F0E6950;
    case 0x7F0E6954u: goto label_7F0E6954;
    case 0x7F0E6958u: goto label_7F0E6958;
    case 0x7F0E695Cu: goto label_7F0E695C;
    case 0x7F0E6960u: goto label_7F0E6960;
    case 0x7F0E6964u: goto label_7F0E6964;
    case 0x7F0E6968u: goto label_7F0E6968;
    case 0x7F0E696Cu: goto label_7F0E696C;
    case 0x7F0E6970u: goto label_7F0E6970;
    case 0x7F0E6974u: goto label_7F0E6974;
    case 0x7F0E6978u: goto label_7F0E6978;
    case 0x7F0E697Cu: goto label_7F0E697C;
    case 0x7F0E6980u: goto label_7F0E6980;
    case 0x7F0E6984u: goto label_7F0E6984;
    case 0x7F0E6988u: goto label_7F0E6988;
    case 0x7F0E698Cu: goto label_7F0E698C;
    case 0x7F0E6990u: goto label_7F0E6990;
    case 0x7F0E6994u: goto label_7F0E6994;
    case 0x7F0E6998u: goto label_7F0E6998;
    case 0x7F0E699Cu: goto label_7F0E699C;
    case 0x7F0E69A0u: goto label_7F0E69A0;
    case 0x7F0E69A4u: goto label_7F0E69A4;
    case 0x7F0E69A8u: goto label_7F0E69A8;
    case 0x7F0E69ACu: goto label_7F0E69AC;
    case 0x7F0E69B0u: goto label_7F0E69B0;
    case 0x7F0E69B4u: goto label_7F0E69B4;
    case 0x7F0E69B8u: goto label_7F0E69B8;
    case 0x7F0E69BCu: goto label_7F0E69BC;
    case 0x7F0E69C0u: goto label_7F0E69C0;
    case 0x7F0E69C4u: goto label_7F0E69C4;
    case 0x7F0E69C8u: goto label_7F0E69C8;
    case 0x7F0E69CCu: goto label_7F0E69CC;
    case 0x7F0E69D0u: goto label_7F0E69D0;
    case 0x7F0E69D4u: goto label_7F0E69D4;
    case 0x7F0E69D8u: goto label_7F0E69D8;
    case 0x7F0E69DCu: goto label_7F0E69DC;
    case 0x7F0E69E0u: goto label_7F0E69E0;
    case 0x7F0E69E4u: goto label_7F0E69E4;
    case 0x7F0E69E8u: goto label_7F0E69E8;
    case 0x7F0E69ECu: goto label_7F0E69EC;
    case 0x7F0E69F0u: goto label_7F0E69F0;
    case 0x7F0E69F4u: goto label_7F0E69F4;
    case 0x7F0E69F8u: goto label_7F0E69F8;
    case 0x7F0E69FCu: goto label_7F0E69FC;
    case 0x7F0E6A00u: goto label_7F0E6A00;
    case 0x7F0E6A04u: goto label_7F0E6A04;
    case 0x7F0E6A08u: goto label_7F0E6A08;
    case 0x7F0E6A0Cu: goto label_7F0E6A0C;
    case 0x7F0E6A10u: goto label_7F0E6A10;
    case 0x7F0E6A14u: goto label_7F0E6A14;
    case 0x7F0E6A18u: goto label_7F0E6A18;
    case 0x7F0E6A1Cu: goto label_7F0E6A1C;
    case 0x7F0E6A20u: goto label_7F0E6A20;
    case 0x7F0E6A24u: goto label_7F0E6A24;
    case 0x7F0E6A28u: goto label_7F0E6A28;
    case 0x7F0E6A2Cu: goto label_7F0E6A2C;
    case 0x7F0E6A30u: goto label_7F0E6A30;
    case 0x7F0E6A34u: goto label_7F0E6A34;
    case 0x7F0E6A38u: goto label_7F0E6A38;
    case 0x7F0E6A3Cu: goto label_7F0E6A3C;
    case 0x7F0E6A40u: goto label_7F0E6A40;
    case 0x7F0E6A44u: goto label_7F0E6A44;
    case 0x7F0E6A48u: goto label_7F0E6A48;
    case 0x7F0E6A4Cu: goto label_7F0E6A4C;
    case 0x7F0E6A50u: goto label_7F0E6A50;
    case 0x7F0E6A54u: goto label_7F0E6A54;
    case 0x7F0E6A58u: goto label_7F0E6A58;
    case 0x7F0E6A5Cu: goto label_7F0E6A5C;
    case 0x7F0E6A60u: goto label_7F0E6A60;
    case 0x7F0E6A64u: goto label_7F0E6A64;
    case 0x7F0E6A68u: goto label_7F0E6A68;
    case 0x7F0E6A6Cu: goto label_7F0E6A6C;
    case 0x7F0E6A70u: goto label_7F0E6A70;
    case 0x7F0E6A74u: goto label_7F0E6A74;
    case 0x7F0E6A78u: goto label_7F0E6A78;
    case 0x7F0E6A7Cu: goto label_7F0E6A7C;
    case 0x7F0E6A80u: goto label_7F0E6A80;
    case 0x7F0E6A84u: goto label_7F0E6A84;
    case 0x7F0E6A88u: goto label_7F0E6A88;
    case 0x7F0E6A8Cu: goto label_7F0E6A8C;
    case 0x7F0E6A90u: goto label_7F0E6A90;
    case 0x7F0E6A94u: goto label_7F0E6A94;
    case 0x7F0E6A98u: goto label_7F0E6A98;
    case 0x7F0E6A9Cu: goto label_7F0E6A9C;
    case 0x7F0E6AA0u: goto label_7F0E6AA0;
    case 0x7F0E6AA4u: goto label_7F0E6AA4;
    case 0x7F0E6AA8u: goto label_7F0E6AA8;
    case 0x7F0E6AACu: goto label_7F0E6AAC;
    case 0x7F0E6AB0u: goto label_7F0E6AB0;
    case 0x7F0E6AB4u: goto label_7F0E6AB4;
    case 0x7F0E6AB8u: goto label_7F0E6AB8;
    case 0x7F0E6ABCu: goto label_7F0E6ABC;
    case 0x7F0E6AC0u: goto label_7F0E6AC0;
    case 0x7F0E6AC4u: goto label_7F0E6AC4;
    case 0x7F0E6AC8u: goto label_7F0E6AC8;
    case 0x7F0E6ACCu: goto label_7F0E6ACC;
    case 0x7F0E6AD0u: goto label_7F0E6AD0;
    case 0x7F0E6AD4u: goto label_7F0E6AD4;
    case 0x7F0E6AD8u: goto label_7F0E6AD8;
    case 0x7F0E6ADCu: goto label_7F0E6ADC;
    case 0x7F0E6AE0u: goto label_7F0E6AE0;
    case 0x7F0E6AE4u: goto label_7F0E6AE4;
    case 0x7F0E6AE8u: goto label_7F0E6AE8;
    case 0x7F0E6AECu: goto label_7F0E6AEC;
    case 0x7F0E6AF0u: goto label_7F0E6AF0;
    case 0x7F0E6AF4u: goto label_7F0E6AF4;
    case 0x7F0E6AF8u: goto label_7F0E6AF8;
    case 0x7F0E6AFCu: goto label_7F0E6AFC;
    case 0x7F0E6B00u: goto label_7F0E6B00;
    case 0x7F0E6B04u: goto label_7F0E6B04;
    case 0x7F0E6B08u: goto label_7F0E6B08;
    case 0x7F0E6B0Cu: goto label_7F0E6B0C;
    case 0x7F0E6B10u: goto label_7F0E6B10;
    case 0x7F0E6B14u: goto label_7F0E6B14;
    case 0x7F0E6B18u: goto label_7F0E6B18;
    case 0x7F0E6B1Cu: goto label_7F0E6B1C;
    case 0x7F0E6B20u: goto label_7F0E6B20;
    case 0x7F0E6B24u: goto label_7F0E6B24;
    case 0x7F0E6B28u: goto label_7F0E6B28;
    case 0x7F0E6B2Cu: goto label_7F0E6B2C;
    case 0x7F0E6B30u: goto label_7F0E6B30;
    case 0x7F0E6B34u: goto label_7F0E6B34;
    case 0x7F0E6B38u: goto label_7F0E6B38;
    case 0x7F0E6B3Cu: goto label_7F0E6B3C;
    case 0x7F0E6B40u: goto label_7F0E6B40;
    case 0x7F0E6B44u: goto label_7F0E6B44;
    case 0x7F0E6B48u: goto label_7F0E6B48;
    case 0x7F0E6B4Cu: goto label_7F0E6B4C;
    case 0x7F0E6B50u: goto label_7F0E6B50;
    case 0x7F0E6B54u: goto label_7F0E6B54;
    case 0x7F0E6B58u: goto label_7F0E6B58;
    case 0x7F0E6B5Cu: goto label_7F0E6B5C;
    case 0x7F0E6B60u: goto label_7F0E6B60;
    case 0x7F0E6B64u: goto label_7F0E6B64;
    case 0x7F0E6B68u: goto label_7F0E6B68;
    case 0x7F0E6B6Cu: goto label_7F0E6B6C;
    case 0x7F0E6B70u: goto label_7F0E6B70;
    case 0x7F0E6B74u: goto label_7F0E6B74;
    case 0x7F0E6B78u: goto label_7F0E6B78;
    case 0x7F0E6B7Cu: goto label_7F0E6B7C;
    case 0x7F0E6B80u: goto label_7F0E6B80;
    case 0x7F0E6B84u: goto label_7F0E6B84;
    case 0x7F0E6B88u: goto label_7F0E6B88;
    case 0x7F0E6B8Cu: goto label_7F0E6B8C;
    case 0x7F0E6B90u: goto label_7F0E6B90;
    case 0x7F0E6B94u: goto label_7F0E6B94;
    case 0x7F0E6B98u: goto label_7F0E6B98;
    case 0x7F0E6B9Cu: goto label_7F0E6B9C;
    case 0x7F0E6BA0u: goto label_7F0E6BA0;
    case 0x7F0E6BA4u: goto label_7F0E6BA4;
    case 0x7F0E6BA8u: goto label_7F0E6BA8;
    case 0x7F0E6BACu: goto label_7F0E6BAC;
    case 0x7F0E6BB0u: goto label_7F0E6BB0;
    case 0x7F0E6BB4u: goto label_7F0E6BB4;
    case 0x7F0E6BB8u: goto label_7F0E6BB8;
    case 0x7F0E6BBCu: goto label_7F0E6BBC;
    case 0x7F0E6BC0u: goto label_7F0E6BC0;
    case 0x7F0E6BC4u: goto label_7F0E6BC4;
    case 0x7F0E6BC8u: goto label_7F0E6BC8;
    case 0x7F0E6BCCu: goto label_7F0E6BCC;
    case 0x7F0E6BD0u: goto label_7F0E6BD0;
    case 0x7F0E6BD4u: goto label_7F0E6BD4;
    case 0x7F0E6BD8u: goto label_7F0E6BD8;
    case 0x7F0E6BDCu: goto label_7F0E6BDC;
    case 0x7F0E6BE0u: goto label_7F0E6BE0;
    case 0x7F0E6BE4u: goto label_7F0E6BE4;
    case 0x7F0E6BE8u: goto label_7F0E6BE8;
    case 0x7F0E6BECu: goto label_7F0E6BEC;
    case 0x7F0E6BF0u: goto label_7F0E6BF0;
    case 0x7F0E6BF4u: goto label_7F0E6BF4;
    case 0x7F0E6BF8u: goto label_7F0E6BF8;
    case 0x7F0E6BFCu: goto label_7F0E6BFC;
    case 0x7F0E6C00u: goto label_7F0E6C00;
    case 0x7F0E6C04u: goto label_7F0E6C04;
    case 0x7F0E6C08u: goto label_7F0E6C08;
    case 0x7F0E6C0Cu: goto label_7F0E6C0C;
    case 0x7F0E6C10u: goto label_7F0E6C10;
    case 0x7F0E6C14u: goto label_7F0E6C14;
    case 0x7F0E6C18u: goto label_7F0E6C18;
    case 0x7F0E6C1Cu: goto label_7F0E6C1C;
    case 0x7F0E6C20u: goto label_7F0E6C20;
    case 0x7F0E6C24u: goto label_7F0E6C24;
    case 0x7F0E6C28u: goto label_7F0E6C28;
    case 0x7F0E6C2Cu: goto label_7F0E6C2C;
    case 0x7F0E6C30u: goto label_7F0E6C30;
    case 0x7F0E6C34u: goto label_7F0E6C34;
    case 0x7F0E6C38u: goto label_7F0E6C38;
    case 0x7F0E6C3Cu: goto label_7F0E6C3C;
    case 0x7F0E6C40u: goto label_7F0E6C40;
    case 0x7F0E6C44u: goto label_7F0E6C44;
    case 0x7F0E6C48u: goto label_7F0E6C48;
    case 0x7F0E6C4Cu: goto label_7F0E6C4C;
    case 0x7F0E6C50u: goto label_7F0E6C50;
    case 0x7F0E6C54u: goto label_7F0E6C54;
    case 0x7F0E6C58u: goto label_7F0E6C58;
    case 0x7F0E6C5Cu: goto label_7F0E6C5C;
    case 0x7F0E6C60u: goto label_7F0E6C60;
    case 0x7F0E6C64u: goto label_7F0E6C64;
    case 0x7F0E6C68u: goto label_7F0E6C68;
    case 0x7F0E6C6Cu: goto label_7F0E6C6C;
    case 0x7F0E6C70u: goto label_7F0E6C70;
    case 0x7F0E6C74u: goto label_7F0E6C74;
    case 0x7F0E6C78u: goto label_7F0E6C78;
    case 0x7F0E6C7Cu: goto label_7F0E6C7C;
    case 0x7F0E6C80u: goto label_7F0E6C80;
    case 0x7F0E6C84u: goto label_7F0E6C84;
    case 0x7F0E6C88u: goto label_7F0E6C88;
    case 0x7F0E6C8Cu: goto label_7F0E6C8C;
    case 0x7F0E6C90u: goto label_7F0E6C90;
    case 0x7F0E6C94u: goto label_7F0E6C94;
    case 0x7F0E6C98u: goto label_7F0E6C98;
    case 0x7F0E6C9Cu: goto label_7F0E6C9C;
    case 0x7F0E6CA0u: goto label_7F0E6CA0;
    case 0x7F0E6CA4u: goto label_7F0E6CA4;
    case 0x7F0E6CA8u: goto label_7F0E6CA8;
    case 0x7F0E6CACu: goto label_7F0E6CAC;
    case 0x7F0E6CB0u: goto label_7F0E6CB0;
    case 0x7F0E6CB4u: goto label_7F0E6CB4;
    case 0x7F0E6CB8u: goto label_7F0E6CB8;
    case 0x7F0E6CBCu: goto label_7F0E6CBC;
    case 0x7F0E6CC0u: goto label_7F0E6CC0;
    case 0x7F0E6CC4u: goto label_7F0E6CC4;
    case 0x7F0E6CC8u: goto label_7F0E6CC8;
    case 0x7F0E6CCCu: goto label_7F0E6CCC;
    case 0x7F0E6CD0u: goto label_7F0E6CD0;
    case 0x7F0E6CD4u: goto label_7F0E6CD4;
    case 0x7F0E6CD8u: goto label_7F0E6CD8;
    case 0x7F0E6CDCu: goto label_7F0E6CDC;
    case 0x7F0E6CE0u: goto label_7F0E6CE0;
    case 0x7F0E6CE4u: goto label_7F0E6CE4;
    case 0x7F0E6CE8u: goto label_7F0E6CE8;
    case 0x7F0E6CECu: goto label_7F0E6CEC;
    case 0x7F0E6CF0u: goto label_7F0E6CF0;
    case 0x7F0E6CF4u: goto label_7F0E6CF4;
    case 0x7F0E6CF8u: goto label_7F0E6CF8;
    case 0x7F0E6CFCu: goto label_7F0E6CFC;
    case 0x7F0E6D00u: goto label_7F0E6D00;
    case 0x7F0E6D04u: goto label_7F0E6D04;
    case 0x7F0E6D08u: goto label_7F0E6D08;
    case 0x7F0E6D0Cu: goto label_7F0E6D0C;
    case 0x7F0E6D10u: goto label_7F0E6D10;
    case 0x7F0E6D14u: goto label_7F0E6D14;
    case 0x7F0E6D18u: goto label_7F0E6D18;
    case 0x7F0E6D1Cu: goto label_7F0E6D1C;
    case 0x7F0E6D20u: goto label_7F0E6D20;
    case 0x7F0E6D24u: goto label_7F0E6D24;
    case 0x7F0E6D28u: goto label_7F0E6D28;
    case 0x7F0E6D2Cu: goto label_7F0E6D2C;
    case 0x7F0E6D30u: goto label_7F0E6D30;
    case 0x7F0E6D34u: goto label_7F0E6D34;
    case 0x7F0E6D38u: goto label_7F0E6D38;
    case 0x7F0E6D3Cu: goto label_7F0E6D3C;
    case 0x7F0E6D40u: goto label_7F0E6D40;
    case 0x7F0E6D44u: goto label_7F0E6D44;
    case 0x7F0E6D48u: goto label_7F0E6D48;
    case 0x7F0E6D4Cu: goto label_7F0E6D4C;
    case 0x7F0E6D50u: goto label_7F0E6D50;
    case 0x7F0E6D54u: goto label_7F0E6D54;
    case 0x7F0E6D58u: goto label_7F0E6D58;
    case 0x7F0E6D5Cu: goto label_7F0E6D5C;
    case 0x7F0E6D60u: goto label_7F0E6D60;
    case 0x7F0E6D64u: goto label_7F0E6D64;
    case 0x7F0E6D68u: goto label_7F0E6D68;
    case 0x7F0E6D6Cu: goto label_7F0E6D6C;
    case 0x7F0E6D70u: goto label_7F0E6D70;
    case 0x7F0E6D74u: goto label_7F0E6D74;
    case 0x7F0E6D78u: goto label_7F0E6D78;
    case 0x7F0E6D7Cu: goto label_7F0E6D7C;
    case 0x7F0E6D80u: goto label_7F0E6D80;
    case 0x7F0E6D84u: goto label_7F0E6D84;
    case 0x7F0E6D88u: goto label_7F0E6D88;
    case 0x7F0E6D8Cu: goto label_7F0E6D8C;
    case 0x7F0E6D90u: goto label_7F0E6D90;
    case 0x7F0E6D94u: goto label_7F0E6D94;
    case 0x7F0E6D98u: goto label_7F0E6D98;
    case 0x7F0E6D9Cu: goto label_7F0E6D9C;
    case 0x7F0E6DA0u: goto label_7F0E6DA0;
    case 0x7F0E6DA4u: goto label_7F0E6DA4;
    case 0x7F0E6DA8u: goto label_7F0E6DA8;
    case 0x7F0E6DACu: goto label_7F0E6DAC;
    case 0x7F0E6DB0u: goto label_7F0E6DB0;
    case 0x7F0E6DB4u: goto label_7F0E6DB4;
    case 0x7F0E6DB8u: goto label_7F0E6DB8;
    case 0x7F0E6DBCu: goto label_7F0E6DBC;
    case 0x7F0E6DC0u: goto label_7F0E6DC0;
    case 0x7F0E6DC4u: goto label_7F0E6DC4;
    case 0x7F0E6DC8u: goto label_7F0E6DC8;
    case 0x7F0E6DCCu: goto label_7F0E6DCC;
    case 0x7F0E6DD0u: goto label_7F0E6DD0;
    case 0x7F0E6DD4u: goto label_7F0E6DD4;
    case 0x7F0E6DD8u: goto label_7F0E6DD8;
    case 0x7F0E6DDCu: goto label_7F0E6DDC;
    case 0x7F0E6DE0u: goto label_7F0E6DE0;
    case 0x7F0E6DE4u: goto label_7F0E6DE4;
    case 0x7F0E6DE8u: goto label_7F0E6DE8;
    case 0x7F0E6DECu: goto label_7F0E6DEC;
    case 0x7F0E6DF0u: goto label_7F0E6DF0;
    case 0x7F0E6DF4u: goto label_7F0E6DF4;
    case 0x7F0E6DF8u: goto label_7F0E6DF8;
    case 0x7F0E6DFCu: goto label_7F0E6DFC;
    case 0x7F0E6E00u: goto label_7F0E6E00;
    case 0x7F0E6E04u: goto label_7F0E6E04;
    case 0x7F0E6E08u: goto label_7F0E6E08;
    case 0x7F0E6E0Cu: goto label_7F0E6E0C;
    case 0x7F0E6E10u: goto label_7F0E6E10;
    case 0x7F0E6E14u: goto label_7F0E6E14;
    case 0x7F0E6E18u: goto label_7F0E6E18;
    case 0x7F0E6E1Cu: goto label_7F0E6E1C;
    case 0x7F0E6E20u: goto label_7F0E6E20;
    case 0x7F0E6E24u: goto label_7F0E6E24;
    case 0x7F0E6E28u: goto label_7F0E6E28;
    case 0x7F0E6E2Cu: goto label_7F0E6E2C;
    case 0x7F0E6E30u: goto label_7F0E6E30;
    case 0x7F0E6E34u: goto label_7F0E6E34;
    case 0x7F0E6E38u: goto label_7F0E6E38;
    case 0x7F0E6E3Cu: goto label_7F0E6E3C;
    case 0x7F0E6E40u: goto label_7F0E6E40;
    case 0x7F0E6E44u: goto label_7F0E6E44;
    case 0x7F0E6E48u: goto label_7F0E6E48;
    case 0x7F0E6E4Cu: goto label_7F0E6E4C;
    case 0x7F0E6E50u: goto label_7F0E6E50;
    case 0x7F0E6E54u: goto label_7F0E6E54;
    case 0x7F0E6E58u: goto label_7F0E6E58;
    case 0x7F0E6E5Cu: goto label_7F0E6E5C;
    case 0x7F0E6E60u: goto label_7F0E6E60;
    case 0x7F0E6E64u: goto label_7F0E6E64;
    case 0x7F0E6E68u: goto label_7F0E6E68;
    case 0x7F0E6E6Cu: goto label_7F0E6E6C;
    case 0x7F0E6E70u: goto label_7F0E6E70;
    case 0x7F0E6E74u: goto label_7F0E6E74;
    case 0x7F0E6E78u: goto label_7F0E6E78;
    case 0x7F0E6E7Cu: goto label_7F0E6E7C;
    case 0x7F0E6E80u: goto label_7F0E6E80;
    case 0x7F0E6E84u: goto label_7F0E6E84;
    case 0x7F0E6E88u: goto label_7F0E6E88;
    case 0x7F0E6E8Cu: goto label_7F0E6E8C;
    case 0x7F0E6E90u: goto label_7F0E6E90;
    case 0x7F0E6E94u: goto label_7F0E6E94;
    case 0x7F0E6E98u: goto label_7F0E6E98;
    case 0x7F0E6E9Cu: goto label_7F0E6E9C;
    case 0x7F0E6EA0u: goto label_7F0E6EA0;
    case 0x7F0E6EA4u: goto label_7F0E6EA4;
    case 0x7F0E6EA8u: goto label_7F0E6EA8;
    case 0x7F0E6EACu: goto label_7F0E6EAC;
    case 0x7F0E6EB0u: goto label_7F0E6EB0;
    case 0x7F0E6EB4u: goto label_7F0E6EB4;
    case 0x7F0E6EB8u: goto label_7F0E6EB8;
    case 0x7F0E6EBCu: goto label_7F0E6EBC;
    case 0x7F0E6EC0u: goto label_7F0E6EC0;
    case 0x7F0E6EC4u: goto label_7F0E6EC4;
    case 0x7F0E6EC8u: goto label_7F0E6EC8;
    case 0x7F0E6ECCu: goto label_7F0E6ECC;
    case 0x7F0E6ED0u: goto label_7F0E6ED0;
    case 0x7F0E6ED4u: goto label_7F0E6ED4;
    case 0x7F0E6ED8u: goto label_7F0E6ED8;
    case 0x7F0E6EDCu: goto label_7F0E6EDC;
    case 0x7F0E6EE0u: goto label_7F0E6EE0;
    case 0x7F0E6EE4u: goto label_7F0E6EE4;
    case 0x7F0E6EE8u: goto label_7F0E6EE8;
    case 0x7F0E6EECu: goto label_7F0E6EEC;
    case 0x7F0E6EF0u: goto label_7F0E6EF0;
    case 0x7F0E6EF4u: goto label_7F0E6EF4;
    case 0x7F0E6EF8u: goto label_7F0E6EF8;
    case 0x7F0E6EFCu: goto label_7F0E6EFC;
    case 0x7F0E6F00u: goto label_7F0E6F00;
    case 0x7F0E6F04u: goto label_7F0E6F04;
    case 0x7F0E6F08u: goto label_7F0E6F08;
    case 0x7F0E6F0Cu: goto label_7F0E6F0C;
    case 0x7F0E6F10u: goto label_7F0E6F10;
    case 0x7F0E6F14u: goto label_7F0E6F14;
    case 0x7F0E6F18u: goto label_7F0E6F18;
    case 0x7F0E6F1Cu: goto label_7F0E6F1C;
    case 0x7F0E6F20u: goto label_7F0E6F20;
    case 0x7F0E6F24u: goto label_7F0E6F24;
    case 0x7F0E6F28u: goto label_7F0E6F28;
    case 0x7F0E6F2Cu: goto label_7F0E6F2C;
    case 0x7F0E6F30u: goto label_7F0E6F30;
    case 0x7F0E6F34u: goto label_7F0E6F34;
    case 0x7F0E6F38u: goto label_7F0E6F38;
    case 0x7F0E6F3Cu: goto label_7F0E6F3C;
    case 0x7F0E6F40u: goto label_7F0E6F40;
    case 0x7F0E6F44u: goto label_7F0E6F44;
    case 0x7F0E6F48u: goto label_7F0E6F48;
    case 0x7F0E6F4Cu: goto label_7F0E6F4C;
    case 0x7F0E6F50u: goto label_7F0E6F50;
    case 0x7F0E6F54u: goto label_7F0E6F54;
    case 0x7F0E6F58u: goto label_7F0E6F58;
    case 0x7F0E6F5Cu: goto label_7F0E6F5C;
    case 0x7F0E6F60u: goto label_7F0E6F60;
    case 0x7F0E6F64u: goto label_7F0E6F64;
    case 0x7F0E6F68u: goto label_7F0E6F68;
    case 0x7F0E6F6Cu: goto label_7F0E6F6C;
    case 0x7F0E6F70u: goto label_7F0E6F70;
    case 0x7F0E6F74u: goto label_7F0E6F74;
    case 0x7F0E6F78u: goto label_7F0E6F78;
    case 0x7F0E6F7Cu: goto label_7F0E6F7C;
    case 0x7F0E6F80u: goto label_7F0E6F80;
    case 0x7F0E6F84u: goto label_7F0E6F84;
    case 0x7F0E6F88u: goto label_7F0E6F88;
    case 0x7F0E6F8Cu: goto label_7F0E6F8C;
    case 0x7F0E6F90u: goto label_7F0E6F90;
    case 0x7F0E6F94u: goto label_7F0E6F94;
    case 0x7F0E6F98u: goto label_7F0E6F98;
    case 0x7F0E6F9Cu: goto label_7F0E6F9C;
    case 0x7F0E6FA0u: goto label_7F0E6FA0;
    case 0x7F0E6FA4u: goto label_7F0E6FA4;
    case 0x7F0E6FA8u: goto label_7F0E6FA8;
    case 0x7F0E6FACu: goto label_7F0E6FAC;
    case 0x7F0E6FB0u: goto label_7F0E6FB0;
    case 0x7F0E6FB4u: goto label_7F0E6FB4;
    case 0x7F0E6FB8u: goto label_7F0E6FB8;
    case 0x7F0E6FBCu: goto label_7F0E6FBC;
    case 0x7F0E6FC0u: goto label_7F0E6FC0;
    case 0x7F0E6FC4u: goto label_7F0E6FC4;
    case 0x7F0E6FC8u: goto label_7F0E6FC8;
    case 0x7F0E6FCCu: goto label_7F0E6FCC;
    case 0x7F0E6FD0u: goto label_7F0E6FD0;
    case 0x7F0E6FD4u: goto label_7F0E6FD4;
    case 0x7F0E6FD8u: goto label_7F0E6FD8;
    case 0x7F0E6FDCu: goto label_7F0E6FDC;
    case 0x7F0E6FE0u: goto label_7F0E6FE0;
    case 0x7F0E6FE4u: goto label_7F0E6FE4;
    case 0x7F0E6FE8u: goto label_7F0E6FE8;
    case 0x7F0E6FECu: goto label_7F0E6FEC;
    case 0x7F0E6FF0u: goto label_7F0E6FF0;
    case 0x7F0E6FF4u: goto label_7F0E6FF4;
    case 0x7F0E6FF8u: goto label_7F0E6FF8;
    case 0x7F0E6FFCu: goto label_7F0E6FFC;
    case 0x7F0E7000u: goto label_7F0E7000;
    case 0x7F0E7004u: goto label_7F0E7004;
    case 0x7F0E7008u: goto label_7F0E7008;
    case 0x7F0E700Cu: goto label_7F0E700C;
    case 0x7F0E7010u: goto label_7F0E7010;
    case 0x7F0E7014u: goto label_7F0E7014;
    case 0x7F0E7018u: goto label_7F0E7018;
    case 0x7F0E701Cu: goto label_7F0E701C;
    case 0x7F0E7020u: goto label_7F0E7020;
    case 0x7F0E7024u: goto label_7F0E7024;
    case 0x7F0E7028u: goto label_7F0E7028;
    case 0x7F0E702Cu: goto label_7F0E702C;
    case 0x7F0E7030u: goto label_7F0E7030;
    case 0x7F0E7034u: goto label_7F0E7034;
    case 0x7F0E7038u: goto label_7F0E7038;
    case 0x7F0E703Cu: goto label_7F0E703C;
    case 0x7F0E7040u: goto label_7F0E7040;
    case 0x7F0E7044u: goto label_7F0E7044;
    case 0x7F0E7048u: goto label_7F0E7048;
    case 0x7F0E704Cu: goto label_7F0E704C;
    case 0x7F0E7050u: goto label_7F0E7050;
    case 0x7F0E7054u: goto label_7F0E7054;
    case 0x7F0E7058u: goto label_7F0E7058;
    case 0x7F0E705Cu: goto label_7F0E705C;
    case 0x7F0E7060u: goto label_7F0E7060;
    case 0x7F0E7064u: goto label_7F0E7064;
    case 0x7F0E7068u: goto label_7F0E7068;
    case 0x7F0E706Cu: goto label_7F0E706C;
    case 0x7F0E7070u: goto label_7F0E7070;
    case 0x7F0E7074u: goto label_7F0E7074;
    case 0x7F0E7078u: goto label_7F0E7078;
    case 0x7F0E707Cu: goto label_7F0E707C;
    case 0x7F0E7080u: goto label_7F0E7080;
    case 0x7F0E7084u: goto label_7F0E7084;
    case 0x7F0E7088u: goto label_7F0E7088;
    case 0x7F0E708Cu: goto label_7F0E708C;
    case 0x7F0E7090u: goto label_7F0E7090;
    case 0x7F0E7094u: goto label_7F0E7094;
    case 0x7F0E7098u: goto label_7F0E7098;
    case 0x7F0E709Cu: goto label_7F0E709C;
    case 0x7F0E70A0u: goto label_7F0E70A0;
    case 0x7F0E70A4u: goto label_7F0E70A4;
    case 0x7F0E70A8u: goto label_7F0E70A8;
    case 0x7F0E70ACu: goto label_7F0E70AC;
    case 0x7F0E70B0u: goto label_7F0E70B0;
    case 0x7F0E70B4u: goto label_7F0E70B4;
    case 0x7F0E70B8u: goto label_7F0E70B8;
    case 0x7F0E70BCu: goto label_7F0E70BC;
    case 0x7F0E70C0u: goto label_7F0E70C0;
    case 0x7F0E70C4u: goto label_7F0E70C4;
    case 0x7F0E70C8u: goto label_7F0E70C8;
    case 0x7F0E70CCu: goto label_7F0E70CC;
    case 0x7F0E70D0u: goto label_7F0E70D0;
    case 0x7F0E70D4u: goto label_7F0E70D4;
    case 0x7F0E70D8u: goto label_7F0E70D8;
    case 0x7F0E70DCu: goto label_7F0E70DC;
    case 0x7F0E70E0u: goto label_7F0E70E0;
    case 0x7F0E70E4u: goto label_7F0E70E4;
    case 0x7F0E70E8u: goto label_7F0E70E8;
    case 0x7F0E70ECu: goto label_7F0E70EC;
    case 0x7F0E70F0u: goto label_7F0E70F0;
    case 0x7F0E70F4u: goto label_7F0E70F4;
    case 0x7F0E70F8u: goto label_7F0E70F8;
    case 0x7F0E70FCu: goto label_7F0E70FC;
    case 0x7F0E7100u: goto label_7F0E7100;
    case 0x7F0E7104u: goto label_7F0E7104;
    case 0x7F0E7108u: goto label_7F0E7108;
    case 0x7F0E710Cu: goto label_7F0E710C;
    case 0x7F0E7110u: goto label_7F0E7110;
    case 0x7F0E7114u: goto label_7F0E7114;
    case 0x7F0E7118u: goto label_7F0E7118;
    case 0x7F0E711Cu: goto label_7F0E711C;
    case 0x7F0E7120u: goto label_7F0E7120;
    case 0x7F0E7124u: goto label_7F0E7124;
    case 0x7F0E7128u: goto label_7F0E7128;
    case 0x7F0E712Cu: goto label_7F0E712C;
    case 0x7F0E7130u: goto label_7F0E7130;
    case 0x7F0E7134u: goto label_7F0E7134;
    case 0x7F0E7138u: goto label_7F0E7138;
    case 0x7F0E713Cu: goto label_7F0E713C;
    case 0x7F0E7140u: goto label_7F0E7140;
    case 0x7F0E7144u: goto label_7F0E7144;
    case 0x7F0E7148u: goto label_7F0E7148;
    case 0x7F0E714Cu: goto label_7F0E714C;
    case 0x7F0E7150u: goto label_7F0E7150;
    case 0x7F0E7154u: goto label_7F0E7154;
    case 0x7F0E7158u: goto label_7F0E7158;
    case 0x7F0E715Cu: goto label_7F0E715C;
    case 0x7F0E7160u: goto label_7F0E7160;
    case 0x7F0E7164u: goto label_7F0E7164;
    case 0x7F0E7168u: goto label_7F0E7168;
    case 0x7F0E716Cu: goto label_7F0E716C;
    case 0x7F0E7170u: goto label_7F0E7170;
    case 0x7F0E7174u: goto label_7F0E7174;
    case 0x7F0E7178u: goto label_7F0E7178;
    case 0x7F0E717Cu: goto label_7F0E717C;
    case 0x7F0E7180u: goto label_7F0E7180;
    case 0x7F0E7184u: goto label_7F0E7184;
    case 0x7F0E7188u: goto label_7F0E7188;
    case 0x7F0E718Cu: goto label_7F0E718C;
    case 0x7F0E7190u: goto label_7F0E7190;
    case 0x7F0E7194u: goto label_7F0E7194;
    case 0x7F0E7198u: goto label_7F0E7198;
    case 0x7F0E719Cu: goto label_7F0E719C;
    case 0x7F0E71A0u: goto label_7F0E71A0;
    case 0x7F0E71A4u: goto label_7F0E71A4;
    case 0x7F0E71A8u: goto label_7F0E71A8;
    case 0x7F0E71ACu: goto label_7F0E71AC;
    case 0x7F0E71B0u: goto label_7F0E71B0;
    case 0x7F0E71B4u: goto label_7F0E71B4;
    case 0x7F0E71B8u: goto label_7F0E71B8;
    case 0x7F0E71BCu: goto label_7F0E71BC;
    case 0x7F0E71C0u: goto label_7F0E71C0;
    case 0x7F0E71C4u: goto label_7F0E71C4;
    case 0x7F0E71C8u: goto label_7F0E71C8;
    case 0x7F0E71CCu: goto label_7F0E71CC;
    case 0x7F0E71D0u: goto label_7F0E71D0;
    case 0x7F0E71D4u: goto label_7F0E71D4;
    case 0x7F0E71D8u: goto label_7F0E71D8;
    case 0x7F0E71DCu: goto label_7F0E71DC;
    case 0x7F0E71E0u: goto label_7F0E71E0;
    case 0x7F0E71E4u: goto label_7F0E71E4;
    case 0x7F0E71E8u: goto label_7F0E71E8;
    case 0x7F0E71ECu: goto label_7F0E71EC;
    case 0x7F0E71F0u: goto label_7F0E71F0;
    case 0x7F0E71F4u: goto label_7F0E71F4;
    case 0x7F0E71F8u: goto label_7F0E71F8;
    case 0x7F0E71FCu: goto label_7F0E71FC;
    case 0x7F0E7200u: goto label_7F0E7200;
    case 0x7F0E7204u: goto label_7F0E7204;
    case 0x7F0E7208u: goto label_7F0E7208;
    case 0x7F0E720Cu: goto label_7F0E720C;
    case 0x7F0E7210u: goto label_7F0E7210;
    case 0x7F0E7214u: goto label_7F0E7214;
    case 0x7F0E7218u: goto label_7F0E7218;
    case 0x7F0E721Cu: goto label_7F0E721C;
    case 0x7F0E7220u: goto label_7F0E7220;
    case 0x7F0E7224u: goto label_7F0E7224;
    case 0x7F0E7228u: goto label_7F0E7228;
    case 0x7F0E722Cu: goto label_7F0E722C;
    case 0x7F0E7230u: goto label_7F0E7230;
    case 0x7F0E7234u: goto label_7F0E7234;
    case 0x7F0E7238u: goto label_7F0E7238;
    case 0x7F0E723Cu: goto label_7F0E723C;
    case 0x7F0E7240u: goto label_7F0E7240;
    case 0x7F0E7244u: goto label_7F0E7244;
    case 0x7F0E7248u: goto label_7F0E7248;
    case 0x7F0E724Cu: goto label_7F0E724C;
    case 0x7F0E7250u: goto label_7F0E7250;
    case 0x7F0E7254u: goto label_7F0E7254;
    case 0x7F0E7258u: goto label_7F0E7258;
    case 0x7F0E725Cu: goto label_7F0E725C;
    case 0x7F0E7260u: goto label_7F0E7260;
    case 0x7F0E7264u: goto label_7F0E7264;
    case 0x7F0E7268u: goto label_7F0E7268;
    case 0x7F0E726Cu: goto label_7F0E726C;
    case 0x7F0E7270u: goto label_7F0E7270;
    case 0x7F0E7274u: goto label_7F0E7274;
    case 0x7F0E7278u: goto label_7F0E7278;
    case 0x7F0E727Cu: goto label_7F0E727C;
    case 0x7F0E7280u: goto label_7F0E7280;
    case 0x7F0E7284u: goto label_7F0E7284;
    case 0x7F0E7288u: goto label_7F0E7288;
    case 0x7F0E728Cu: goto label_7F0E728C;
    case 0x7F0E7290u: goto label_7F0E7290;
    case 0x7F0E7294u: goto label_7F0E7294;
    case 0x7F0E7298u: goto label_7F0E7298;
    case 0x7F0E729Cu: goto label_7F0E729C;
    case 0x7F0E72A0u: goto label_7F0E72A0;
    case 0x7F0E72A4u: goto label_7F0E72A4;
    case 0x7F0E72A8u: goto label_7F0E72A8;
    case 0x7F0E72ACu: goto label_7F0E72AC;
    case 0x7F0E72B0u: goto label_7F0E72B0;
    case 0x7F0E72B4u: goto label_7F0E72B4;
    case 0x7F0E72B8u: goto label_7F0E72B8;
    case 0x7F0E72BCu: goto label_7F0E72BC;
    case 0x7F0E72C0u: goto label_7F0E72C0;
    case 0x7F0E72C4u: goto label_7F0E72C4;
    case 0x7F0E72C8u: goto label_7F0E72C8;
    case 0x7F0E72CCu: goto label_7F0E72CC;
    case 0x7F0E72D0u: goto label_7F0E72D0;
    case 0x7F0E72D4u: goto label_7F0E72D4;
    case 0x7F0E72D8u: goto label_7F0E72D8;
    case 0x7F0E72DCu: goto label_7F0E72DC;
    case 0x7F0E72E0u: goto label_7F0E72E0;
    case 0x7F0E72E4u: goto label_7F0E72E4;
    case 0x7F0E72E8u: goto label_7F0E72E8;
    case 0x7F0E72ECu: goto label_7F0E72EC;
    case 0x7F0E72F0u: goto label_7F0E72F0;
    case 0x7F0E72F4u: goto label_7F0E72F4;
    case 0x7F0E72F8u: goto label_7F0E72F8;
    case 0x7F0E72FCu: goto label_7F0E72FC;
    case 0x7F0E7300u: goto label_7F0E7300;
    case 0x7F0E7304u: goto label_7F0E7304;
    case 0x7F0E7308u: goto label_7F0E7308;
    case 0x7F0E730Cu: goto label_7F0E730C;
    case 0x7F0E7310u: goto label_7F0E7310;
    case 0x7F0E7314u: goto label_7F0E7314;
    case 0x7F0E7318u: goto label_7F0E7318;
    case 0x7F0E731Cu: goto label_7F0E731C;
    case 0x7F0E7320u: goto label_7F0E7320;
    case 0x7F0E7324u: goto label_7F0E7324;
    case 0x7F0E7328u: goto label_7F0E7328;
    case 0x7F0E732Cu: goto label_7F0E732C;
    case 0x7F0E7330u: goto label_7F0E7330;
    case 0x7F0E7334u: goto label_7F0E7334;
    case 0x7F0E7338u: goto label_7F0E7338;
    case 0x7F0E733Cu: goto label_7F0E733C;
    case 0x7F0E7340u: goto label_7F0E7340;
    case 0x7F0E7344u: goto label_7F0E7344;
    case 0x7F0E7348u: goto label_7F0E7348;
    case 0x7F0E734Cu: goto label_7F0E734C;
    case 0x7F0E7350u: goto label_7F0E7350;
    case 0x7F0E7354u: goto label_7F0E7354;
    case 0x7F0E7358u: goto label_7F0E7358;
    case 0x7F0E735Cu: goto label_7F0E735C;
    case 0x7F0E7360u: goto label_7F0E7360;
    case 0x7F0E7364u: goto label_7F0E7364;
    case 0x7F0E7368u: goto label_7F0E7368;
    case 0x7F0E736Cu: goto label_7F0E736C;
    case 0x7F0E7370u: goto label_7F0E7370;
    case 0x7F0E7374u: goto label_7F0E7374;
    case 0x7F0E7378u: goto label_7F0E7378;
    case 0x7F0E737Cu: goto label_7F0E737C;
    case 0x7F0E7380u: goto label_7F0E7380;
    case 0x7F0E7384u: goto label_7F0E7384;
    case 0x7F0E7388u: goto label_7F0E7388;
    case 0x7F0E738Cu: goto label_7F0E738C;
    case 0x7F0E7390u: goto label_7F0E7390;
    case 0x7F0E7394u: goto label_7F0E7394;
    case 0x7F0E7398u: goto label_7F0E7398;
    case 0x7F0E739Cu: goto label_7F0E739C;
    case 0x7F0E73A0u: goto label_7F0E73A0;
    case 0x7F0E73A4u: goto label_7F0E73A4;
    case 0x7F0E73A8u: goto label_7F0E73A8;
    case 0x7F0E73ACu: goto label_7F0E73AC;
    case 0x7F0E73B0u: goto label_7F0E73B0;
    case 0x7F0E73B4u: goto label_7F0E73B4;
    case 0x7F0E73B8u: goto label_7F0E73B8;
    case 0x7F0E73BCu: goto label_7F0E73BC;
    case 0x7F0E73C0u: goto label_7F0E73C0;
    case 0x7F0E73C4u: goto label_7F0E73C4;
    case 0x7F0E73C8u: goto label_7F0E73C8;
    case 0x7F0E73CCu: goto label_7F0E73CC;
    case 0x7F0E73D0u: goto label_7F0E73D0;
    case 0x7F0E73D4u: goto label_7F0E73D4;
    case 0x7F0E73D8u: goto label_7F0E73D8;
    case 0x7F0E73DCu: goto label_7F0E73DC;
    case 0x7F0E73E0u: goto label_7F0E73E0;
    case 0x7F0E73E4u: goto label_7F0E73E4;
    case 0x7F0E73E8u: goto label_7F0E73E8;
    case 0x7F0E73ECu: goto label_7F0E73EC;
    case 0x7F0E73F0u: goto label_7F0E73F0;
    case 0x7F0E73F4u: goto label_7F0E73F4;
    case 0x7F0E73F8u: goto label_7F0E73F8;
    case 0x7F0E73FCu: goto label_7F0E73FC;
    case 0x7F0E7400u: goto label_7F0E7400;
    case 0x7F0E7404u: goto label_7F0E7404;
    case 0x7F0E7408u: goto label_7F0E7408;
    case 0x7F0E740Cu: goto label_7F0E740C;
    case 0x7F0E7410u: goto label_7F0E7410;
    case 0x7F0E7414u: goto label_7F0E7414;
    case 0x7F0E7418u: goto label_7F0E7418;
    case 0x7F0E741Cu: goto label_7F0E741C;
    case 0x7F0E7420u: goto label_7F0E7420;
    case 0x7F0E7424u: goto label_7F0E7424;
    case 0x7F0E7428u: goto label_7F0E7428;
    case 0x7F0E742Cu: goto label_7F0E742C;
    case 0x7F0E7430u: goto label_7F0E7430;
    case 0x7F0E7434u: goto label_7F0E7434;
    case 0x7F0E7438u: goto label_7F0E7438;
    case 0x7F0E743Cu: goto label_7F0E743C;
    case 0x7F0E7440u: goto label_7F0E7440;
    case 0x7F0E7444u: goto label_7F0E7444;
    case 0x7F0E7448u: goto label_7F0E7448;
    case 0x7F0E744Cu: goto label_7F0E744C;
    case 0x7F0E7450u: goto label_7F0E7450;
    case 0x7F0E7454u: goto label_7F0E7454;
    case 0x7F0E7458u: goto label_7F0E7458;
    case 0x7F0E745Cu: goto label_7F0E745C;
    case 0x7F0E7460u: goto label_7F0E7460;
    case 0x7F0E7464u: goto label_7F0E7464;
    case 0x7F0E7468u: goto label_7F0E7468;
    case 0x7F0E746Cu: goto label_7F0E746C;
    case 0x7F0E7470u: goto label_7F0E7470;
    case 0x7F0E7474u: goto label_7F0E7474;
    case 0x7F0E7478u: goto label_7F0E7478;
    case 0x7F0E747Cu: goto label_7F0E747C;
    case 0x7F0E7480u: goto label_7F0E7480;
    case 0x7F0E7484u: goto label_7F0E7484;
    case 0x7F0E7488u: goto label_7F0E7488;
    case 0x7F0E748Cu: goto label_7F0E748C;
    case 0x7F0E7490u: goto label_7F0E7490;
    case 0x7F0E7494u: goto label_7F0E7494;
    case 0x7F0E7498u: goto label_7F0E7498;
    case 0x7F0E749Cu: goto label_7F0E749C;
    case 0x7F0E74A0u: goto label_7F0E74A0;
    case 0x7F0E74A4u: goto label_7F0E74A4;
    case 0x7F0E74A8u: goto label_7F0E74A8;
    case 0x7F0E74ACu: goto label_7F0E74AC;
    case 0x7F0E74B0u: goto label_7F0E74B0;
    case 0x7F0E74B4u: goto label_7F0E74B4;
    case 0x7F0E74B8u: goto label_7F0E74B8;
    case 0x7F0E74BCu: goto label_7F0E74BC;
    case 0x7F0E74C0u: goto label_7F0E74C0;
    case 0x7F0E74C4u: goto label_7F0E74C4;
    case 0x7F0E74C8u: goto label_7F0E74C8;
    case 0x7F0E74CCu: goto label_7F0E74CC;
    case 0x7F0E74D0u: goto label_7F0E74D0;
    case 0x7F0E74D4u: goto label_7F0E74D4;
    case 0x7F0E74D8u: goto label_7F0E74D8;
    case 0x7F0E74DCu: goto label_7F0E74DC;
    case 0x7F0E74E0u: goto label_7F0E74E0;
    case 0x7F0E74E4u: goto label_7F0E74E4;
    case 0x7F0E74E8u: goto label_7F0E74E8;
    case 0x7F0E74ECu: goto label_7F0E74EC;
    case 0x7F0E74F0u: goto label_7F0E74F0;
    case 0x7F0E74F4u: goto label_7F0E74F4;
    case 0x7F0E74F8u: goto label_7F0E74F8;
    case 0x7F0E74FCu: goto label_7F0E74FC;
    case 0x7F0E7500u: goto label_7F0E7500;
    case 0x7F0E7504u: goto label_7F0E7504;
    case 0x7F0E7508u: goto label_7F0E7508;
    case 0x7F0E750Cu: goto label_7F0E750C;
    case 0x7F0E7510u: goto label_7F0E7510;
    case 0x7F0E7514u: goto label_7F0E7514;
    case 0x7F0E7518u: goto label_7F0E7518;
    case 0x7F0E751Cu: goto label_7F0E751C;
    case 0x7F0E7520u: goto label_7F0E7520;
    case 0x7F0E7524u: goto label_7F0E7524;
    case 0x7F0E7528u: goto label_7F0E7528;
    case 0x7F0E752Cu: goto label_7F0E752C;
    case 0x7F0E7530u: goto label_7F0E7530;
    case 0x7F0E7534u: goto label_7F0E7534;
    case 0x7F0E7538u: goto label_7F0E7538;
    case 0x7F0E753Cu: goto label_7F0E753C;
    case 0x7F0E7540u: goto label_7F0E7540;
    case 0x7F0E7544u: goto label_7F0E7544;
    case 0x7F0E7548u: goto label_7F0E7548;
    case 0x7F0E754Cu: goto label_7F0E754C;
    case 0x7F0E7550u: goto label_7F0E7550;
    case 0x7F0E7554u: goto label_7F0E7554;
    case 0x7F0E7558u: goto label_7F0E7558;
    case 0x7F0E755Cu: goto label_7F0E755C;
    case 0x7F0E7560u: goto label_7F0E7560;
    case 0x7F0E7564u: goto label_7F0E7564;
    case 0x7F0E7568u: goto label_7F0E7568;
    case 0x7F0E756Cu: goto label_7F0E756C;
    case 0x7F0E7570u: goto label_7F0E7570;
    case 0x7F0E7574u: goto label_7F0E7574;
    case 0x7F0E7578u: goto label_7F0E7578;
    case 0x7F0E757Cu: goto label_7F0E757C;
    case 0x7F0E7580u: goto label_7F0E7580;
    case 0x7F0E7584u: goto label_7F0E7584;
    case 0x7F0E7588u: goto label_7F0E7588;
    case 0x7F0E758Cu: goto label_7F0E758C;
    case 0x7F0E7590u: goto label_7F0E7590;
    case 0x7F0E7594u: goto label_7F0E7594;
    case 0x7F0E7598u: goto label_7F0E7598;
    case 0x7F0E759Cu: goto label_7F0E759C;
    case 0x7F0E75A0u: goto label_7F0E75A0;
    case 0x7F0E75A4u: goto label_7F0E75A4;
    case 0x7F0E75A8u: goto label_7F0E75A8;
    case 0x7F0E75ACu: goto label_7F0E75AC;
    case 0x7F0E75B0u: goto label_7F0E75B0;
    case 0x7F0E75B4u: goto label_7F0E75B4;
    case 0x7F0E75B8u: goto label_7F0E75B8;
    case 0x7F0E75BCu: goto label_7F0E75BC;
    case 0x7F0E75C0u: goto label_7F0E75C0;
    case 0x7F0E75C4u: goto label_7F0E75C4;
    case 0x7F0E75C8u: goto label_7F0E75C8;
    case 0x7F0E75CCu: goto label_7F0E75CC;
    case 0x7F0E75D0u: goto label_7F0E75D0;
    case 0x7F0E75D4u: goto label_7F0E75D4;
    case 0x7F0E75D8u: goto label_7F0E75D8;
    case 0x7F0E75DCu: goto label_7F0E75DC;
    case 0x7F0E75E0u: goto label_7F0E75E0;
    case 0x7F0E75E4u: goto label_7F0E75E4;
    case 0x7F0E75E8u: goto label_7F0E75E8;
    case 0x7F0E75ECu: goto label_7F0E75EC;
    case 0x7F0E75F0u: goto label_7F0E75F0;
    case 0x7F0E75F4u: goto label_7F0E75F4;
    case 0x7F0E75F8u: goto label_7F0E75F8;
    case 0x7F0E75FCu: goto label_7F0E75FC;
    case 0x7F0E7600u: goto label_7F0E7600;
    case 0x7F0E7604u: goto label_7F0E7604;
    case 0x7F0E7608u: goto label_7F0E7608;
    case 0x7F0E760Cu: goto label_7F0E760C;
    case 0x7F0E7610u: goto label_7F0E7610;
    case 0x7F0E7614u: goto label_7F0E7614;
    case 0x7F0E7618u: goto label_7F0E7618;
    case 0x7F0E761Cu: goto label_7F0E761C;
    case 0x7F0E7620u: goto label_7F0E7620;
    case 0x7F0E7624u: goto label_7F0E7624;
    case 0x7F0E7628u: goto label_7F0E7628;
    case 0x7F0E762Cu: goto label_7F0E762C;
    case 0x7F0E7630u: goto label_7F0E7630;
    case 0x7F0E7634u: goto label_7F0E7634;
    case 0x7F0E7638u: goto label_7F0E7638;
    case 0x7F0E763Cu: goto label_7F0E763C;
    case 0x7F0E7640u: goto label_7F0E7640;
    case 0x7F0E7644u: goto label_7F0E7644;
    case 0x7F0E7648u: goto label_7F0E7648;
    case 0x7F0E764Cu: goto label_7F0E764C;
    case 0x7F0E7650u: goto label_7F0E7650;
    case 0x7F0E7654u: goto label_7F0E7654;
    case 0x7F0E7658u: goto label_7F0E7658;
    case 0x7F0E765Cu: goto label_7F0E765C;
    case 0x7F0E7660u: goto label_7F0E7660;
    case 0x7F0E7664u: goto label_7F0E7664;
    case 0x7F0E7668u: goto label_7F0E7668;
    case 0x7F0E766Cu: goto label_7F0E766C;
    case 0x7F0E7670u: goto label_7F0E7670;
    case 0x7F0E7674u: goto label_7F0E7674;
    case 0x7F0E7678u: goto label_7F0E7678;
    case 0x7F0E767Cu: goto label_7F0E767C;
    case 0x7F0E7680u: goto label_7F0E7680;
    case 0x7F0E7684u: goto label_7F0E7684;
    case 0x7F0E7688u: goto label_7F0E7688;
    case 0x7F0E768Cu: goto label_7F0E768C;
    case 0x7F0E7690u: goto label_7F0E7690;
    case 0x7F0E7694u: goto label_7F0E7694;
    case 0x7F0E7698u: goto label_7F0E7698;
    case 0x7F0E769Cu: goto label_7F0E769C;
    case 0x7F0E76A0u: goto label_7F0E76A0;
    case 0x7F0E76A4u: goto label_7F0E76A4;
    case 0x7F0E76A8u: goto label_7F0E76A8;
    case 0x7F0E76ACu: goto label_7F0E76AC;
    case 0x7F0E76B0u: goto label_7F0E76B0;
    case 0x7F0E76B4u: goto label_7F0E76B4;
    case 0x7F0E76B8u: goto label_7F0E76B8;
    case 0x7F0E76BCu: goto label_7F0E76BC;
    case 0x7F0E76C0u: goto label_7F0E76C0;
    case 0x7F0E76C4u: goto label_7F0E76C4;
    case 0x7F0E76C8u: goto label_7F0E76C8;
    case 0x7F0E76CCu: goto label_7F0E76CC;
    case 0x7F0E76D0u: goto label_7F0E76D0;
    case 0x7F0E76D4u: goto label_7F0E76D4;
    case 0x7F0E76D8u: goto label_7F0E76D8;
    case 0x7F0E76DCu: goto label_7F0E76DC;
    case 0x7F0E76E0u: goto label_7F0E76E0;
    case 0x7F0E76E4u: goto label_7F0E76E4;
    case 0x7F0E76E8u: goto label_7F0E76E8;
    case 0x7F0E76ECu: goto label_7F0E76EC;
    case 0x7F0E76F0u: goto label_7F0E76F0;
    case 0x7F0E76F4u: goto label_7F0E76F4;
    case 0x7F0E76F8u: goto label_7F0E76F8;
    case 0x7F0E76FCu: goto label_7F0E76FC;
    case 0x7F0E7700u: goto label_7F0E7700;
    case 0x7F0E7704u: goto label_7F0E7704;
    case 0x7F0E7708u: goto label_7F0E7708;
    case 0x7F0E770Cu: goto label_7F0E770C;
    case 0x7F0E7710u: goto label_7F0E7710;
    case 0x7F0E7714u: goto label_7F0E7714;
    case 0x7F0E7718u: goto label_7F0E7718;
    case 0x7F0E771Cu: goto label_7F0E771C;
    case 0x7F0E7720u: goto label_7F0E7720;
    case 0x7F0E7724u: goto label_7F0E7724;
    case 0x7F0E7728u: goto label_7F0E7728;
    case 0x7F0E772Cu: goto label_7F0E772C;
    case 0x7F0E7730u: goto label_7F0E7730;
    case 0x7F0E7734u: goto label_7F0E7734;
    case 0x7F0E7738u: goto label_7F0E7738;
    case 0x7F0E773Cu: goto label_7F0E773C;
    case 0x7F0E7740u: goto label_7F0E7740;
    case 0x7F0E7744u: goto label_7F0E7744;
    case 0x7F0E7748u: goto label_7F0E7748;
    case 0x7F0E774Cu: goto label_7F0E774C;
    case 0x7F0E7750u: goto label_7F0E7750;
    case 0x7F0E7754u: goto label_7F0E7754;
    case 0x7F0E7758u: goto label_7F0E7758;
    case 0x7F0E775Cu: goto label_7F0E775C;
    case 0x7F0E7760u: goto label_7F0E7760;
    case 0x7F0E7764u: goto label_7F0E7764;
    case 0x7F0E7768u: goto label_7F0E7768;
    case 0x7F0E776Cu: goto label_7F0E776C;
    case 0x7F0E7770u: goto label_7F0E7770;
    case 0x7F0E7774u: goto label_7F0E7774;
    case 0x7F0E7778u: goto label_7F0E7778;
    case 0x7F0E777Cu: goto label_7F0E777C;
    case 0x7F0E7780u: goto label_7F0E7780;
    case 0x7F0E7784u: goto label_7F0E7784;
    case 0x7F0E7788u: goto label_7F0E7788;
    case 0x7F0E778Cu: goto label_7F0E778C;
    case 0x7F0E7790u: goto label_7F0E7790;
    case 0x7F0E7794u: goto label_7F0E7794;
    case 0x7F0E7798u: goto label_7F0E7798;
    case 0x7F0E779Cu: goto label_7F0E779C;
    case 0x7F0E77A0u: goto label_7F0E77A0;
    case 0x7F0E77A4u: goto label_7F0E77A4;
    case 0x7F0E77A8u: goto label_7F0E77A8;
    case 0x7F0E77ACu: goto label_7F0E77AC;
    case 0x7F0E77B0u: goto label_7F0E77B0;
    case 0x7F0E77B4u: goto label_7F0E77B4;
    case 0x7F0E77B8u: goto label_7F0E77B8;
    case 0x7F0E77BCu: goto label_7F0E77BC;
    case 0x7F0E77C0u: goto label_7F0E77C0;
    case 0x7F0E77C4u: goto label_7F0E77C4;
    case 0x7F0E77C8u: goto label_7F0E77C8;
    case 0x7F0E77CCu: goto label_7F0E77CC;
    case 0x7F0E77D0u: goto label_7F0E77D0;
    case 0x7F0E77D4u: goto label_7F0E77D4;
    case 0x7F0E77D8u: goto label_7F0E77D8;
    case 0x7F0E77DCu: goto label_7F0E77DC;
    case 0x7F0E77E0u: goto label_7F0E77E0;
    case 0x7F0E77E4u: goto label_7F0E77E4;
    case 0x7F0E77E8u: goto label_7F0E77E8;
    case 0x7F0E77ECu: goto label_7F0E77EC;
    case 0x7F0E77F0u: goto label_7F0E77F0;
    case 0x7F0E77F4u: goto label_7F0E77F4;
    case 0x7F0E77F8u: goto label_7F0E77F8;
    case 0x7F0E77FCu: goto label_7F0E77FC;
    case 0x7F0E7800u: goto label_7F0E7800;
    case 0x7F0E7804u: goto label_7F0E7804;
    case 0x7F0E7808u: goto label_7F0E7808;
    case 0x7F0E780Cu: goto label_7F0E780C;
    case 0x7F0E7810u: goto label_7F0E7810;
    case 0x7F0E7814u: goto label_7F0E7814;
    case 0x7F0E7818u: goto label_7F0E7818;
    case 0x7F0E781Cu: goto label_7F0E781C;
    case 0x7F0E7820u: goto label_7F0E7820;
    case 0x7F0E7824u: goto label_7F0E7824;
    case 0x7F0E7828u: goto label_7F0E7828;
    case 0x7F0E782Cu: goto label_7F0E782C;
    case 0x7F0E7830u: goto label_7F0E7830;
    case 0x7F0E7834u: goto label_7F0E7834;
    case 0x7F0E7838u: goto label_7F0E7838;
    case 0x7F0E783Cu: goto label_7F0E783C;
    case 0x7F0E7840u: goto label_7F0E7840;
    case 0x7F0E7844u: goto label_7F0E7844;
    case 0x7F0E7848u: goto label_7F0E7848;
    case 0x7F0E784Cu: goto label_7F0E784C;
    case 0x7F0E7850u: goto label_7F0E7850;
    case 0x7F0E7854u: goto label_7F0E7854;
    case 0x7F0E7858u: goto label_7F0E7858;
    case 0x7F0E785Cu: goto label_7F0E785C;
    case 0x7F0E7860u: goto label_7F0E7860;
    case 0x7F0E7864u: goto label_7F0E7864;
    case 0x7F0E7868u: goto label_7F0E7868;
    case 0x7F0E786Cu: goto label_7F0E786C;
    case 0x7F0E7870u: goto label_7F0E7870;
    case 0x7F0E7874u: goto label_7F0E7874;
    case 0x7F0E7878u: goto label_7F0E7878;
    case 0x7F0E787Cu: goto label_7F0E787C;
    case 0x7F0E7880u: goto label_7F0E7880;
    case 0x7F0E7884u: goto label_7F0E7884;
    case 0x7F0E7888u: goto label_7F0E7888;
    case 0x7F0E788Cu: goto label_7F0E788C;
    case 0x7F0E7890u: goto label_7F0E7890;
    case 0x7F0E7894u: goto label_7F0E7894;
    case 0x7F0E7898u: goto label_7F0E7898;
    case 0x7F0E789Cu: goto label_7F0E789C;
    case 0x7F0E78A0u: goto label_7F0E78A0;
    case 0x7F0E78A4u: goto label_7F0E78A4;
    case 0x7F0E78A8u: goto label_7F0E78A8;
    case 0x7F0E78ACu: goto label_7F0E78AC;
    case 0x7F0E78B0u: goto label_7F0E78B0;
    case 0x7F0E78B4u: goto label_7F0E78B4;
    case 0x7F0E78B8u: goto label_7F0E78B8;
    case 0x7F0E78BCu: goto label_7F0E78BC;
    case 0x7F0E78C0u: goto label_7F0E78C0;
    case 0x7F0E78C4u: goto label_7F0E78C4;
    case 0x7F0E78C8u: goto label_7F0E78C8;
    case 0x7F0E78CCu: goto label_7F0E78CC;
    case 0x7F0E78D0u: goto label_7F0E78D0;
    case 0x7F0E78D4u: goto label_7F0E78D4;
    case 0x7F0E78D8u: goto label_7F0E78D8;
    case 0x7F0E78DCu: goto label_7F0E78DC;
    case 0x7F0E78E0u: goto label_7F0E78E0;
    case 0x7F0E78E4u: goto label_7F0E78E4;
    case 0x7F0E78E8u: goto label_7F0E78E8;
    case 0x7F0E78ECu: goto label_7F0E78EC;
    case 0x7F0E78F0u: goto label_7F0E78F0;
    case 0x7F0E78F4u: goto label_7F0E78F4;
    case 0x7F0E78F8u: goto label_7F0E78F8;
    case 0x7F0E78FCu: goto label_7F0E78FC;
    case 0x7F0E7900u: goto label_7F0E7900;
    case 0x7F0E7904u: goto label_7F0E7904;
    case 0x7F0E7908u: goto label_7F0E7908;
    case 0x7F0E790Cu: goto label_7F0E790C;
    case 0x7F0E7910u: goto label_7F0E7910;
    case 0x7F0E7914u: goto label_7F0E7914;
    case 0x7F0E7918u: goto label_7F0E7918;
    case 0x7F0E791Cu: goto label_7F0E791C;
    case 0x7F0E7920u: goto label_7F0E7920;
    case 0x7F0E7924u: goto label_7F0E7924;
    case 0x7F0E7928u: goto label_7F0E7928;
    case 0x7F0E792Cu: goto label_7F0E792C;
    case 0x7F0E7930u: goto label_7F0E7930;
    case 0x7F0E7934u: goto label_7F0E7934;
    case 0x7F0E7938u: goto label_7F0E7938;
    case 0x7F0E793Cu: goto label_7F0E793C;
    case 0x7F0E7940u: goto label_7F0E7940;
    case 0x7F0E7944u: goto label_7F0E7944;
    case 0x7F0E7948u: goto label_7F0E7948;
    case 0x7F0E794Cu: goto label_7F0E794C;
    case 0x7F0E7950u: goto label_7F0E7950;
    case 0x7F0E7954u: goto label_7F0E7954;
    case 0x7F0E7958u: goto label_7F0E7958;
    case 0x7F0E795Cu: goto label_7F0E795C;
    case 0x7F0E7960u: goto label_7F0E7960;
    case 0x7F0E7964u: goto label_7F0E7964;
    case 0x7F0E7968u: goto label_7F0E7968;
    case 0x7F0E796Cu: goto label_7F0E796C;
    case 0x7F0E7970u: goto label_7F0E7970;
    case 0x7F0E7974u: goto label_7F0E7974;
    case 0x7F0E7978u: goto label_7F0E7978;
    case 0x7F0E797Cu: goto label_7F0E797C;
    case 0x7F0E7980u: goto label_7F0E7980;
    case 0x7F0E7984u: goto label_7F0E7984;
    case 0x7F0E7988u: goto label_7F0E7988;
    case 0x7F0E798Cu: goto label_7F0E798C;
    case 0x7F0E7990u: goto label_7F0E7990;
    case 0x7F0E7994u: goto label_7F0E7994;
    case 0x7F0E7998u: goto label_7F0E7998;
    case 0x7F0E799Cu: goto label_7F0E799C;
    case 0x7F0E79A0u: goto label_7F0E79A0;
    case 0x7F0E79A4u: goto label_7F0E79A4;
    case 0x7F0E79A8u: goto label_7F0E79A8;
    case 0x7F0E79ACu: goto label_7F0E79AC;
    case 0x7F0E79B0u: goto label_7F0E79B0;
    case 0x7F0E79B4u: goto label_7F0E79B4;
    case 0x7F0E79B8u: goto label_7F0E79B8;
    case 0x7F0E79BCu: goto label_7F0E79BC;
    case 0x7F0E79C0u: goto label_7F0E79C0;
    case 0x7F0E79C4u: goto label_7F0E79C4;
    case 0x7F0E79C8u: goto label_7F0E79C8;
    case 0x7F0E79CCu: goto label_7F0E79CC;
    case 0x7F0E79D0u: goto label_7F0E79D0;
    case 0x7F0E79D4u: goto label_7F0E79D4;
    case 0x7F0E79D8u: goto label_7F0E79D8;
    case 0x7F0E79DCu: goto label_7F0E79DC;
    case 0x7F0E79E0u: goto label_7F0E79E0;
    case 0x7F0E79E4u: goto label_7F0E79E4;
    case 0x7F0E79E8u: goto label_7F0E79E8;
    case 0x7F0E79ECu: goto label_7F0E79EC;
    case 0x7F0E79F0u: goto label_7F0E79F0;
    case 0x7F0E79F4u: goto label_7F0E79F4;
    case 0x7F0E79F8u: goto label_7F0E79F8;
    case 0x7F0E79FCu: goto label_7F0E79FC;
    case 0x7F0E7A00u: goto label_7F0E7A00;
    case 0x7F0E7A04u: goto label_7F0E7A04;
    case 0x7F0E7A08u: goto label_7F0E7A08;
    case 0x7F0E7A0Cu: goto label_7F0E7A0C;
    case 0x7F0E7A10u: goto label_7F0E7A10;
    case 0x7F0E7A14u: goto label_7F0E7A14;
    case 0x7F0E7A18u: goto label_7F0E7A18;
    case 0x7F0E7A1Cu: goto label_7F0E7A1C;
    case 0x7F0E7A20u: goto label_7F0E7A20;
    case 0x7F0E7A24u: goto label_7F0E7A24;
    case 0x7F0E7A28u: goto label_7F0E7A28;
    case 0x7F0E7A2Cu: goto label_7F0E7A2C;
    case 0x7F0E7A30u: goto label_7F0E7A30;
    case 0x7F0E7A34u: goto label_7F0E7A34;
    case 0x7F0E7A38u: goto label_7F0E7A38;
    case 0x7F0E7A3Cu: goto label_7F0E7A3C;
    case 0x7F0E7A40u: goto label_7F0E7A40;
    case 0x7F0E7A44u: goto label_7F0E7A44;
    case 0x7F0E7A48u: goto label_7F0E7A48;
    case 0x7F0E7A4Cu: goto label_7F0E7A4C;
    case 0x7F0E7A50u: goto label_7F0E7A50;
    case 0x7F0E7A54u: goto label_7F0E7A54;
    case 0x7F0E7A58u: goto label_7F0E7A58;
    case 0x7F0E7A5Cu: goto label_7F0E7A5C;
    case 0x7F0E7A60u: goto label_7F0E7A60;
    case 0x7F0E7A64u: goto label_7F0E7A64;
    case 0x7F0E7A68u: goto label_7F0E7A68;
    case 0x7F0E7A6Cu: goto label_7F0E7A6C;
    case 0x7F0E7A70u: goto label_7F0E7A70;
    case 0x7F0E7A74u: goto label_7F0E7A74;
    case 0x7F0E7A78u: goto label_7F0E7A78;
    case 0x7F0E7A7Cu: goto label_7F0E7A7C;
    case 0x7F0E7A80u: goto label_7F0E7A80;
    case 0x7F0E7A84u: goto label_7F0E7A84;
    case 0x7F0E7A88u: goto label_7F0E7A88;
    case 0x7F0E7A8Cu: goto label_7F0E7A8C;
    case 0x7F0E7A90u: goto label_7F0E7A90;
    case 0x7F0E7A94u: goto label_7F0E7A94;
    case 0x7F0E7A98u: goto label_7F0E7A98;
    case 0x7F0E7A9Cu: goto label_7F0E7A9C;
    case 0x7F0E7AA0u: goto label_7F0E7AA0;
    case 0x7F0E7AA4u: goto label_7F0E7AA4;
    case 0x7F0E7AA8u: goto label_7F0E7AA8;
    case 0x7F0E7AACu: goto label_7F0E7AAC;
    case 0x7F0E7AB0u: goto label_7F0E7AB0;
    case 0x7F0E7AB4u: goto label_7F0E7AB4;
    case 0x7F0E7AB8u: goto label_7F0E7AB8;
    case 0x7F0E7ABCu: goto label_7F0E7ABC;
    case 0x7F0E7AC0u: goto label_7F0E7AC0;
    case 0x7F0E7AC4u: goto label_7F0E7AC4;
    case 0x7F0E7AC8u: goto label_7F0E7AC8;
    case 0x7F0E7ACCu: goto label_7F0E7ACC;
    case 0x7F0E7AD0u: goto label_7F0E7AD0;
    case 0x7F0E7AD4u: goto label_7F0E7AD4;
    case 0x7F0E7AD8u: goto label_7F0E7AD8;
    case 0x7F0E7ADCu: goto label_7F0E7ADC;
    case 0x7F0E7AE0u: goto label_7F0E7AE0;
    case 0x7F0E7AE4u: goto label_7F0E7AE4;
    case 0x7F0E7AE8u: goto label_7F0E7AE8;
    case 0x7F0E7AECu: goto label_7F0E7AEC;
    case 0x7F0E7AF0u: goto label_7F0E7AF0;
    case 0x7F0E7AF4u: goto label_7F0E7AF4;
    case 0x7F0E7AF8u: goto label_7F0E7AF8;
    case 0x7F0E7AFCu: goto label_7F0E7AFC;
    case 0x7F0E7B00u: goto label_7F0E7B00;
    case 0x7F0E7B04u: goto label_7F0E7B04;
    case 0x7F0E7B08u: goto label_7F0E7B08;
    case 0x7F0E7B0Cu: goto label_7F0E7B0C;
    case 0x7F0E7B10u: goto label_7F0E7B10;
    case 0x7F0E7B14u: goto label_7F0E7B14;
    case 0x7F0E7B18u: goto label_7F0E7B18;
    case 0x7F0E7B1Cu: goto label_7F0E7B1C;
    case 0x7F0E7B20u: goto label_7F0E7B20;
    case 0x7F0E7B24u: goto label_7F0E7B24;
    case 0x7F0E7B28u: goto label_7F0E7B28;
    case 0x7F0E7B2Cu: goto label_7F0E7B2C;
    case 0x7F0E7B30u: goto label_7F0E7B30;
    case 0x7F0E7B34u: goto label_7F0E7B34;
    case 0x7F0E7B38u: goto label_7F0E7B38;
    case 0x7F0E7B3Cu: goto label_7F0E7B3C;
    case 0x7F0E7B40u: goto label_7F0E7B40;
    case 0x7F0E7B44u: goto label_7F0E7B44;
    case 0x7F0E7B48u: goto label_7F0E7B48;
    case 0x7F0E7B4Cu: goto label_7F0E7B4C;
    case 0x7F0E7B50u: goto label_7F0E7B50;
    case 0x7F0E7B54u: goto label_7F0E7B54;
    case 0x7F0E7B58u: goto label_7F0E7B58;
    case 0x7F0E7B5Cu: goto label_7F0E7B5C;
    case 0x7F0E7B60u: goto label_7F0E7B60;
    case 0x7F0E7B64u: goto label_7F0E7B64;
    case 0x7F0E7B68u: goto label_7F0E7B68;
    case 0x7F0E7B6Cu: goto label_7F0E7B6C;
    case 0x7F0E7B70u: goto label_7F0E7B70;
    case 0x7F0E7B74u: goto label_7F0E7B74;
    case 0x7F0E7B78u: goto label_7F0E7B78;
    case 0x7F0E7B7Cu: goto label_7F0E7B7C;
    case 0x7F0E7B80u: goto label_7F0E7B80;
    case 0x7F0E7B84u: goto label_7F0E7B84;
    case 0x7F0E7B88u: goto label_7F0E7B88;
    case 0x7F0E7B8Cu: goto label_7F0E7B8C;
    case 0x7F0E7B90u: goto label_7F0E7B90;
    case 0x7F0E7B94u: goto label_7F0E7B94;
    case 0x7F0E7B98u: goto label_7F0E7B98;
    case 0x7F0E7B9Cu: goto label_7F0E7B9C;
    case 0x7F0E7BA0u: goto label_7F0E7BA0;
    case 0x7F0E7BA4u: goto label_7F0E7BA4;
    case 0x7F0E7BA8u: goto label_7F0E7BA8;
    case 0x7F0E7BACu: goto label_7F0E7BAC;
    case 0x7F0E7BB0u: goto label_7F0E7BB0;
    case 0x7F0E7BB4u: goto label_7F0E7BB4;
    case 0x7F0E7BB8u: goto label_7F0E7BB8;
    case 0x7F0E7BBCu: goto label_7F0E7BBC;
    case 0x7F0E7BC0u: goto label_7F0E7BC0;
    case 0x7F0E7BC4u: goto label_7F0E7BC4;
    case 0x7F0E7BC8u: goto label_7F0E7BC8;
    case 0x7F0E7BCCu: goto label_7F0E7BCC;
    case 0x7F0E7BD0u: goto label_7F0E7BD0;
    case 0x7F0E7BD4u: goto label_7F0E7BD4;
    case 0x7F0E7BD8u: goto label_7F0E7BD8;
    case 0x7F0E7BDCu: goto label_7F0E7BDC;
    case 0x7F0E7BE0u: goto label_7F0E7BE0;
    case 0x7F0E7BE4u: goto label_7F0E7BE4;
    case 0x7F0E7BE8u: goto label_7F0E7BE8;
    case 0x7F0E7BECu: goto label_7F0E7BEC;
    case 0x7F0E7BF0u: goto label_7F0E7BF0;
    case 0x7F0E7BF4u: goto label_7F0E7BF4;
    case 0x7F0E7BF8u: goto label_7F0E7BF8;
    case 0x7F0E7BFCu: goto label_7F0E7BFC;
    case 0x7F0E7C00u: goto label_7F0E7C00;
    case 0x7F0E7C04u: goto label_7F0E7C04;
    case 0x7F0E7C08u: goto label_7F0E7C08;
    case 0x7F0E7C0Cu: goto label_7F0E7C0C;
    case 0x7F0E7C10u: goto label_7F0E7C10;
    case 0x7F0E7C14u: goto label_7F0E7C14;
    case 0x7F0E7C18u: goto label_7F0E7C18;
    case 0x7F0E7C1Cu: goto label_7F0E7C1C;
    case 0x7F0E7C20u: goto label_7F0E7C20;
    case 0x7F0E7C24u: goto label_7F0E7C24;
    case 0x7F0E7C28u: goto label_7F0E7C28;
    case 0x7F0E7C2Cu: goto label_7F0E7C2C;
    case 0x7F0E7C30u: goto label_7F0E7C30;
    case 0x7F0E7C34u: goto label_7F0E7C34;
    case 0x7F0E7C38u: goto label_7F0E7C38;
    case 0x7F0E7C3Cu: goto label_7F0E7C3C;
    case 0x7F0E7C40u: goto label_7F0E7C40;
    case 0x7F0E7C44u: goto label_7F0E7C44;
    case 0x7F0E7C48u: goto label_7F0E7C48;
    case 0x7F0E7C4Cu: goto label_7F0E7C4C;
    case 0x7F0E7C50u: goto label_7F0E7C50;
    case 0x7F0E7C54u: goto label_7F0E7C54;
    case 0x7F0E7C58u: goto label_7F0E7C58;
    case 0x7F0E7C5Cu: goto label_7F0E7C5C;
    case 0x7F0E7C60u: goto label_7F0E7C60;
    case 0x7F0E7C64u: goto label_7F0E7C64;
    case 0x7F0E7C68u: goto label_7F0E7C68;
    case 0x7F0E7C6Cu: goto label_7F0E7C6C;
    case 0x7F0E7C70u: goto label_7F0E7C70;
    case 0x7F0E7C74u: goto label_7F0E7C74;
    case 0x7F0E7C78u: goto label_7F0E7C78;
    case 0x7F0E7C7Cu: goto label_7F0E7C7C;
    case 0x7F0E7C80u: goto label_7F0E7C80;
    case 0x7F0E7C84u: goto label_7F0E7C84;
    case 0x7F0E7C88u: goto label_7F0E7C88;
    case 0x7F0E7C8Cu: goto label_7F0E7C8C;
    case 0x7F0E7C90u: goto label_7F0E7C90;
    case 0x7F0E7C94u: goto label_7F0E7C94;
    case 0x7F0E7C98u: goto label_7F0E7C98;
    case 0x7F0E7C9Cu: goto label_7F0E7C9C;
    case 0x7F0E7CA0u: goto label_7F0E7CA0;
    case 0x7F0E7CA4u: goto label_7F0E7CA4;
    case 0x7F0E7CA8u: goto label_7F0E7CA8;
    case 0x7F0E7CACu: goto label_7F0E7CAC;
    case 0x7F0E7CB0u: goto label_7F0E7CB0;
    case 0x7F0E7CB4u: goto label_7F0E7CB4;
    case 0x7F0E7CB8u: goto label_7F0E7CB8;
    case 0x7F0E7CBCu: goto label_7F0E7CBC;
    case 0x7F0E7CC0u: goto label_7F0E7CC0;
    case 0x7F0E7CC4u: goto label_7F0E7CC4;
    case 0x7F0E7CC8u: goto label_7F0E7CC8;
    case 0x7F0E7CCCu: goto label_7F0E7CCC;
    case 0x7F0E7CD0u: goto label_7F0E7CD0;
    case 0x7F0E7CD4u: goto label_7F0E7CD4;
    case 0x7F0E7CD8u: goto label_7F0E7CD8;
    case 0x7F0E7CDCu: goto label_7F0E7CDC;
    case 0x7F0E7CE0u: goto label_7F0E7CE0;
    case 0x7F0E7CE4u: goto label_7F0E7CE4;
    case 0x7F0E7CE8u: goto label_7F0E7CE8;
    case 0x7F0E7CECu: goto label_7F0E7CEC;
    case 0x7F0E7CF0u: goto label_7F0E7CF0;
    case 0x7F0E7CF4u: goto label_7F0E7CF4;
    case 0x7F0E7CF8u: goto label_7F0E7CF8;
    case 0x7F0E7CFCu: goto label_7F0E7CFC;
    case 0x7F0E7D00u: goto label_7F0E7D00;
    case 0x7F0E7D04u: goto label_7F0E7D04;
    case 0x7F0E7D08u: goto label_7F0E7D08;
    case 0x7F0E7D0Cu: goto label_7F0E7D0C;
    case 0x7F0E7D10u: goto label_7F0E7D10;
    case 0x7F0E7D14u: goto label_7F0E7D14;
    case 0x7F0E7D18u: goto label_7F0E7D18;
    case 0x7F0E7D1Cu: goto label_7F0E7D1C;
    case 0x7F0E7D20u: goto label_7F0E7D20;
    case 0x7F0E7D24u: goto label_7F0E7D24;
    case 0x7F0E7D28u: goto label_7F0E7D28;
    case 0x7F0E7D2Cu: goto label_7F0E7D2C;
    case 0x7F0E7D30u: goto label_7F0E7D30;
    case 0x7F0E7D34u: goto label_7F0E7D34;
    case 0x7F0E7D38u: goto label_7F0E7D38;
    case 0x7F0E7D3Cu: goto label_7F0E7D3C;
    case 0x7F0E7D40u: goto label_7F0E7D40;
    case 0x7F0E7D44u: goto label_7F0E7D44;
    case 0x7F0E7D48u: goto label_7F0E7D48;
    case 0x7F0E7D4Cu: goto label_7F0E7D4C;
    case 0x7F0E7D50u: goto label_7F0E7D50;
    case 0x7F0E7D54u: goto label_7F0E7D54;
    case 0x7F0E7D58u: goto label_7F0E7D58;
    case 0x7F0E7D5Cu: goto label_7F0E7D5C;
    case 0x7F0E7D60u: goto label_7F0E7D60;
    case 0x7F0E7D64u: goto label_7F0E7D64;
    case 0x7F0E7D68u: goto label_7F0E7D68;
    case 0x7F0E7D6Cu: goto label_7F0E7D6C;
    case 0x7F0E7D70u: goto label_7F0E7D70;
    case 0x7F0E7D74u: goto label_7F0E7D74;
    case 0x7F0E7D78u: goto label_7F0E7D78;
    case 0x7F0E7D7Cu: goto label_7F0E7D7C;
    case 0x7F0E7D80u: goto label_7F0E7D80;
    case 0x7F0E7D84u: goto label_7F0E7D84;
    case 0x7F0E7D88u: goto label_7F0E7D88;
    case 0x7F0E7D8Cu: goto label_7F0E7D8C;
    case 0x7F0E7D90u: goto label_7F0E7D90;
    case 0x7F0E7D94u: goto label_7F0E7D94;
    case 0x7F0E7D98u: goto label_7F0E7D98;
    case 0x7F0E7D9Cu: goto label_7F0E7D9C;
    case 0x7F0E7DA0u: goto label_7F0E7DA0;
    case 0x7F0E7DA4u: goto label_7F0E7DA4;
    case 0x7F0E7DA8u: goto label_7F0E7DA8;
    case 0x7F0E7DACu: goto label_7F0E7DAC;
    case 0x7F0E7DB0u: goto label_7F0E7DB0;
    case 0x7F0E7DB4u: goto label_7F0E7DB4;
    case 0x7F0E7DB8u: goto label_7F0E7DB8;
    case 0x7F0E7DBCu: goto label_7F0E7DBC;
    case 0x7F0E7DC0u: goto label_7F0E7DC0;
    case 0x7F0E7DC4u: goto label_7F0E7DC4;
    case 0x7F0E7DC8u: goto label_7F0E7DC8;
    case 0x7F0E7DCCu: goto label_7F0E7DCC;
    case 0x7F0E7DD0u: goto label_7F0E7DD0;
    case 0x7F0E7DD4u: goto label_7F0E7DD4;
    case 0x7F0E7DD8u: goto label_7F0E7DD8;
    case 0x7F0E7DDCu: goto label_7F0E7DDC;
    case 0x7F0E7DE0u: goto label_7F0E7DE0;
    case 0x7F0E7DE4u: goto label_7F0E7DE4;
    case 0x7F0E7DE8u: goto label_7F0E7DE8;
    case 0x7F0E7DECu: goto label_7F0E7DEC;
    case 0x7F0E7DF0u: goto label_7F0E7DF0;
    case 0x7F0E7DF4u: goto label_7F0E7DF4;
    case 0x7F0E7DF8u: goto label_7F0E7DF8;
    case 0x7F0E7DFCu: goto label_7F0E7DFC;
    case 0x7F0E7E00u: goto label_7F0E7E00;
    case 0x7F0E7E04u: goto label_7F0E7E04;
    case 0x7F0E7E08u: goto label_7F0E7E08;
    case 0x7F0E7E0Cu: goto label_7F0E7E0C;
    case 0x7F0E7E10u: goto label_7F0E7E10;
    case 0x7F0E7E14u: goto label_7F0E7E14;
    case 0x7F0E7E18u: goto label_7F0E7E18;
    case 0x7F0E7E1Cu: goto label_7F0E7E1C;
    case 0x7F0E7E20u: goto label_7F0E7E20;
    case 0x7F0E7E24u: goto label_7F0E7E24;
    case 0x7F0E7E28u: goto label_7F0E7E28;
    case 0x7F0E7E2Cu: goto label_7F0E7E2C;
    case 0x7F0E7E30u: goto label_7F0E7E30;
    case 0x7F0E7E34u: goto label_7F0E7E34;
    case 0x7F0E7E38u: goto label_7F0E7E38;
    case 0x7F0E7E3Cu: goto label_7F0E7E3C;
    case 0x7F0E7E40u: goto label_7F0E7E40;
    case 0x7F0E7E44u: goto label_7F0E7E44;
    case 0x7F0E7E48u: goto label_7F0E7E48;
    case 0x7F0E7E4Cu: goto label_7F0E7E4C;
    case 0x7F0E7E50u: goto label_7F0E7E50;
    case 0x7F0E7E54u: goto label_7F0E7E54;
    case 0x7F0E7E58u: goto label_7F0E7E58;
    case 0x7F0E7E5Cu: goto label_7F0E7E5C;
    case 0x7F0E7E60u: goto label_7F0E7E60;
    case 0x7F0E7E64u: goto label_7F0E7E64;
    case 0x7F0E7E68u: goto label_7F0E7E68;
    case 0x7F0E7E6Cu: goto label_7F0E7E6C;
    case 0x7F0E7E70u: goto label_7F0E7E70;
    case 0x7F0E7E74u: goto label_7F0E7E74;
    case 0x7F0E7E78u: goto label_7F0E7E78;
    case 0x7F0E7E7Cu: goto label_7F0E7E7C;
    case 0x7F0E7E80u: goto label_7F0E7E80;
    case 0x7F0E7E84u: goto label_7F0E7E84;
    case 0x7F0E7E88u: goto label_7F0E7E88;
    case 0x7F0E7E8Cu: goto label_7F0E7E8C;
    case 0x7F0E7E90u: goto label_7F0E7E90;
    case 0x7F0E7E94u: goto label_7F0E7E94;
    case 0x7F0E7E98u: goto label_7F0E7E98;
    case 0x7F0E7E9Cu: goto label_7F0E7E9C;
    case 0x7F0E7EA0u: goto label_7F0E7EA0;
    case 0x7F0E7EA4u: goto label_7F0E7EA4;
    case 0x7F0E7EA8u: goto label_7F0E7EA8;
    case 0x7F0E7EACu: goto label_7F0E7EAC;
    case 0x7F0E7EB0u: goto label_7F0E7EB0;
    case 0x7F0E7EB4u: goto label_7F0E7EB4;
    case 0x7F0E7EB8u: goto label_7F0E7EB8;
    case 0x7F0E7EBCu: goto label_7F0E7EBC;
    case 0x7F0E7EC0u: goto label_7F0E7EC0;
    case 0x7F0E7EC4u: goto label_7F0E7EC4;
    case 0x7F0E7EC8u: goto label_7F0E7EC8;
    case 0x7F0E7ECCu: goto label_7F0E7ECC;
    case 0x7F0E7ED0u: goto label_7F0E7ED0;
    case 0x7F0E7ED4u: goto label_7F0E7ED4;
    case 0x7F0E7ED8u: goto label_7F0E7ED8;
    case 0x7F0E7EDCu: goto label_7F0E7EDC;
    case 0x7F0E7EE0u: goto label_7F0E7EE0;
    case 0x7F0E7EE4u: goto label_7F0E7EE4;
    case 0x7F0E7EE8u: goto label_7F0E7EE8;
    case 0x7F0E7EECu: goto label_7F0E7EEC;
    case 0x7F0E7EF0u: goto label_7F0E7EF0;
    case 0x7F0E7EF4u: goto label_7F0E7EF4;
    case 0x7F0E7EF8u: goto label_7F0E7EF8;
    case 0x7F0E7EFCu: goto label_7F0E7EFC;
    case 0x7F0E7F00u: goto label_7F0E7F00;
    case 0x7F0E7F04u: goto label_7F0E7F04;
    case 0x7F0E7F08u: goto label_7F0E7F08;
    case 0x7F0E7F0Cu: goto label_7F0E7F0C;
    case 0x7F0E7F10u: goto label_7F0E7F10;
    case 0x7F0E7F14u: goto label_7F0E7F14;
    case 0x7F0E7F18u: goto label_7F0E7F18;
    case 0x7F0E7F1Cu: goto label_7F0E7F1C;
    case 0x7F0E7F20u: goto label_7F0E7F20;
    case 0x7F0E7F24u: goto label_7F0E7F24;
    case 0x7F0E7F28u: goto label_7F0E7F28;
    case 0x7F0E7F2Cu: goto label_7F0E7F2C;
    case 0x7F0E7F30u: goto label_7F0E7F30;
    case 0x7F0E7F34u: goto label_7F0E7F34;
    case 0x7F0E7F38u: goto label_7F0E7F38;
    case 0x7F0E7F3Cu: goto label_7F0E7F3C;
    case 0x7F0E7F40u: goto label_7F0E7F40;
    case 0x7F0E7F44u: goto label_7F0E7F44;
    case 0x7F0E7F48u: goto label_7F0E7F48;
    case 0x7F0E7F4Cu: goto label_7F0E7F4C;
    case 0x7F0E7F50u: goto label_7F0E7F50;
    case 0x7F0E7F54u: goto label_7F0E7F54;
    case 0x7F0E7F58u: goto label_7F0E7F58;
    case 0x7F0E7F5Cu: goto label_7F0E7F5C;
    case 0x7F0E7F60u: goto label_7F0E7F60;
    case 0x7F0E7F64u: goto label_7F0E7F64;
    case 0x7F0E7F68u: goto label_7F0E7F68;
    case 0x7F0E7F6Cu: goto label_7F0E7F6C;
    case 0x7F0E7F70u: goto label_7F0E7F70;
    case 0x7F0E7F74u: goto label_7F0E7F74;
    case 0x7F0E7F78u: goto label_7F0E7F78;
    case 0x7F0E7F7Cu: goto label_7F0E7F7C;
    case 0x7F0E7F80u: goto label_7F0E7F80;
    case 0x7F0E7F84u: goto label_7F0E7F84;
    case 0x7F0E7F88u: goto label_7F0E7F88;
    case 0x7F0E7F8Cu: goto label_7F0E7F8C;
    case 0x7F0E7F90u: goto label_7F0E7F90;
    case 0x7F0E7F94u: goto label_7F0E7F94;
    case 0x7F0E7F98u: goto label_7F0E7F98;
    case 0x7F0E7F9Cu: goto label_7F0E7F9C;
    case 0x7F0E7FA0u: goto label_7F0E7FA0;
    case 0x7F0E7FA4u: goto label_7F0E7FA4;
    case 0x7F0E7FA8u: goto label_7F0E7FA8;
    case 0x7F0E7FACu: goto label_7F0E7FAC;
    case 0x7F0E7FB0u: goto label_7F0E7FB0;
    case 0x7F0E7FB4u: goto label_7F0E7FB4;
    case 0x7F0E7FB8u: goto label_7F0E7FB8;
    case 0x7F0E7FBCu: goto label_7F0E7FBC;
    case 0x7F0E7FC0u: goto label_7F0E7FC0;
    case 0x7F0E7FC4u: goto label_7F0E7FC4;
    case 0x7F0E7FC8u: goto label_7F0E7FC8;
    case 0x7F0E7FCCu: goto label_7F0E7FCC;
    case 0x7F0E7FD0u: goto label_7F0E7FD0;
    case 0x7F0E7FD4u: goto label_7F0E7FD4;
    case 0x7F0E7FD8u: goto label_7F0E7FD8;
    case 0x7F0E7FDCu: goto label_7F0E7FDC;
    case 0x7F0E7FE0u: goto label_7F0E7FE0;
    case 0x7F0E7FE4u: goto label_7F0E7FE4;
    case 0x7F0E7FE8u: goto label_7F0E7FE8;
    case 0x7F0E7FECu: goto label_7F0E7FEC;
    case 0x7F0E7FF0u: goto label_7F0E7FF0;
    case 0x7F0E7FF4u: goto label_7F0E7FF4;
    case 0x7F0E7FF8u: goto label_7F0E7FF8;
    case 0x7F0E7FFCu: goto label_7F0E7FFC;
    case 0x7F0E8000u: goto label_7F0E8000;
    case 0x7F0E8004u: goto label_7F0E8004;
    case 0x7F0E8008u: goto label_7F0E8008;
    case 0x7F0E800Cu: goto label_7F0E800C;
    case 0x7F0E8010u: goto label_7F0E8010;
    case 0x7F0E8014u: goto label_7F0E8014;
    case 0x7F0E8018u: goto label_7F0E8018;
    case 0x7F0E801Cu: goto label_7F0E801C;
    case 0x7F0E8020u: goto label_7F0E8020;
    case 0x7F0E8024u: goto label_7F0E8024;
    case 0x7F0E8028u: goto label_7F0E8028;
    case 0x7F0E802Cu: goto label_7F0E802C;
    case 0x7F0E8030u: goto label_7F0E8030;
    case 0x7F0E8034u: goto label_7F0E8034;
    case 0x7F0E8038u: goto label_7F0E8038;
    case 0x7F0E803Cu: goto label_7F0E803C;
    case 0x7F0E8040u: goto label_7F0E8040;
    case 0x7F0E8044u: goto label_7F0E8044;
    case 0x7F0E8048u: goto label_7F0E8048;
    case 0x7F0E804Cu: goto label_7F0E804C;
    case 0x7F0E8050u: goto label_7F0E8050;
    case 0x7F0E8054u: goto label_7F0E8054;
    case 0x7F0E8058u: goto label_7F0E8058;
    case 0x7F0E805Cu: goto label_7F0E805C;
    case 0x7F0E8060u: goto label_7F0E8060;
    case 0x7F0E8064u: goto label_7F0E8064;
    case 0x7F0E8068u: goto label_7F0E8068;
    case 0x7F0E806Cu: goto label_7F0E806C;
    case 0x7F0E8070u: goto label_7F0E8070;
    case 0x7F0E8074u: goto label_7F0E8074;
    case 0x7F0E8078u: goto label_7F0E8078;
    case 0x7F0E807Cu: goto label_7F0E807C;
    case 0x7F0E8080u: goto label_7F0E8080;
    case 0x7F0E8084u: goto label_7F0E8084;
    case 0x7F0E8088u: goto label_7F0E8088;
    case 0x7F0E808Cu: goto label_7F0E808C;
    case 0x7F0E8090u: goto label_7F0E8090;
    case 0x7F0E8094u: goto label_7F0E8094;
    case 0x7F0E8098u: goto label_7F0E8098;
    case 0x7F0E809Cu: goto label_7F0E809C;
    case 0x7F0E80A0u: goto label_7F0E80A0;
    case 0x7F0E80A4u: goto label_7F0E80A4;
    case 0x7F0E80A8u: goto label_7F0E80A8;
    case 0x7F0E80ACu: goto label_7F0E80AC;
    case 0x7F0E80B0u: goto label_7F0E80B0;
    case 0x7F0E80B4u: goto label_7F0E80B4;
    case 0x7F0E80B8u: goto label_7F0E80B8;
    case 0x7F0E80BCu: goto label_7F0E80BC;
    case 0x7F0E80C0u: goto label_7F0E80C0;
    case 0x7F0E80C4u: goto label_7F0E80C4;
    case 0x7F0E80C8u: goto label_7F0E80C8;
    case 0x7F0E80CCu: goto label_7F0E80CC;
    case 0x7F0E80D0u: goto label_7F0E80D0;
    case 0x7F0E80D4u: goto label_7F0E80D4;
    case 0x7F0E80D8u: goto label_7F0E80D8;
    case 0x7F0E80DCu: goto label_7F0E80DC;
    case 0x7F0E80E0u: goto label_7F0E80E0;
    case 0x7F0E80E4u: goto label_7F0E80E4;
    case 0x7F0E80E8u: goto label_7F0E80E8;
    default: return;
    }
label_7F0E40EC:
    ctx->pc = 0x7F0E40ECu;
    ctx->downcount -= 4;
    // 7F0E40EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E40F0:
    ctx->pc = 0x7F0E40F0u;
    // 7F0E40F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E40F4:
    ctx->pc = 0x7F0E40F4u;
    // 7F0E40F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E40F8:
    ctx->pc = 0x7F0E40F8u;
    ctx->downcount -= 10;
    // 7F0E40F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E40FC:
    ctx->pc = 0x7F0E40FCu;
    // 7F0E40FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4100:
    ctx->pc = 0x7F0E4100u;
    // 7F0E4100: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E4104:
    ctx->pc = 0x7F0E4104u;
    // 7F0E4104: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4108:
    ctx->pc = 0x7F0E4108u;
    // 7F0E4108: lfs     f0, -2388(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4108u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E410C:
    ctx->pc = 0x7F0E410Cu;
    // 7F0E410C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E4110:
    ctx->pc = 0x7F0E4110u;
    // 7F0E4110: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E4114:
    ctx->pc = 0x7F0E4114u;
    // 7F0E4114: lfs     f1, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4114u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E4118:
    ctx->pc = 0x7F0E4118u;
    // 7F0E4118: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E4118u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0E411C:
    ctx->pc = 0x7F0E411Cu;
    // 7F0E411C: bc    4, 0, 0x7F0E412C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E412C;
        }
    }

label_7F0E4120:
    ctx->pc = 0x7F0E4120u;
    ctx->downcount -= 2;
    // 7F0E4120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4124:
    ctx->pc = 0x7F0E4124u;
    // 7F0E4124: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0E4128u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0E4128:
    ctx->pc = 0x7F0E4128u;
    ctx->downcount -= 1;
    // 7F0E4128: b       0x7F0E41D8
    {
            goto label_7F0E41D8;
    }

label_7F0E412C:
    ctx->pc = 0x7F0E412Cu;
    ctx->downcount -= 10;
    // 7F0E412C: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4130:
    ctx->pc = 0x7F0E4130u;
    // 7F0E4130: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E4134:
    ctx->pc = 0x7F0E4134u;
    // 7F0E4134: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4138:
    ctx->pc = 0x7F0E4138u;
    // 7F0E4138: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F0E413C:
    ctx->pc = 0x7F0E413Cu;
    // 7F0E413C: and   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[7];
    }

label_7F0E4140:
    ctx->pc = 0x7F0E4140u;
    // 7F0E4140: and   r4, r4, r8
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[8];
    }

label_7F0E4144:
    ctx->pc = 0x7F0E4144u;
    // 7F0E4144: xor   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[7];
    }

label_7F0E4148:
    ctx->pc = 0x7F0E4148u;
    // 7F0E4148: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F0E414C:
    ctx->pc = 0x7F0E414Cu;
    // 7F0E414C: or.   r0, r4, r0
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

label_7F0E4150:
    ctx->pc = 0x7F0E4150u;
    // 7F0E4150: bc    12, 2, 0x7F0E41D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41D8;
        }
    }

label_7F0E4154:
    ctx->pc = 0x7F0E4154u;
    ctx->downcount -= 3;
    // 7F0E4154: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4158:
    ctx->pc = 0x7F0E4158u;
    // 7F0E4158: rlwinm. r0, r0, 0, 31, 31
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

label_7F0E415C:
    ctx->pc = 0x7F0E415Cu;
    // 7F0E415C: bc    12, 2, 0x7F0E41D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41D8;
        }
    }

label_7F0E4160:
    ctx->pc = 0x7F0E4160u;
    ctx->downcount -= 10;
    // 7F0E4160: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4164:
    ctx->pc = 0x7F0E4164u;
    // 7F0E4164: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0E4168:
    ctx->pc = 0x7F0E4168u;
    // 7F0E4168: lwz     r6, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E416C:
    ctx->pc = 0x7F0E416Cu;
    // 7F0E416C: addi    r4, r4, 992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(992);

label_7F0E4170:
    ctx->pc = 0x7F0E4170u;
    // 7F0E4170: and   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[7];
    }

label_7F0E4174:
    ctx->pc = 0x7F0E4174u;
    // 7F0E4174: and   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F0E4178:
    ctx->pc = 0x7F0E4178u;
    // 7F0E4178: xor   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[7];
    }

label_7F0E417C:
    ctx->pc = 0x7F0E417Cu;
    // 7F0E417C: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F0E4180:
    ctx->pc = 0x7F0E4180u;
    // 7F0E4180: or.   r0, r4, r0
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

label_7F0E4184:
    ctx->pc = 0x7F0E4184u;
    // 7F0E4184: bc    12, 2, 0x7F0E41A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41A8;
        }
    }

label_7F0E4188:
    ctx->pc = 0x7F0E4188u;
    ctx->downcount -= 4;
    // 7F0E4188: lfs     f1, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4188u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E418C:
    ctx->pc = 0x7F0E418Cu;
    // 7F0E418C: lfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E418Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4190:
    ctx->pc = 0x7F0E4190u;
    // 7F0E4190: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E4190u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0E4194:
    ctx->pc = 0x7F0E4194u;
    // 7F0E4194: bc    4, 0, 0x7F0E41A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41A0;
        }
    }

label_7F0E4198:
    ctx->pc = 0x7F0E4198u;
    ctx->downcount -= 2;
    // 7F0E4198: stw     r8, 4008(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4008);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0E419C:
    ctx->pc = 0x7F0E419Cu;
    // 7F0E419C: b       0x7F0E41A8
    {
            goto label_7F0E41A8;
    }

label_7F0E41A0:
    ctx->pc = 0x7F0E41A0u;
    ctx->downcount -= 2;
    // 7F0E41A0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0E41A4:
    ctx->pc = 0x7F0E41A4u;
    // 7F0E41A4: stw     r0, 4008(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4008);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E41A8:
    ctx->pc = 0x7F0E41A8u;
    ctx->downcount -= 2;
    // 7F0E41A8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E41AC:
    ctx->pc = 0x7F0E41ACu;
    // 7F0E41AC: bl      0x7F014DF8
    {
            ctx->lr = 0x7F0E41B0u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F0E41B0:
    ctx->pc = 0x7F0E41B0u;
    ctx->downcount -= 4;
    // 7F0E41B0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0E41B4:
    ctx->pc = 0x7F0E41B4u;
    // 7F0E41B4: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E41B8:
    ctx->pc = 0x7F0E41B8u;
    // 7F0E41B8: cmpwi   r0, 0
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

label_7F0E41BC:
    ctx->pc = 0x7F0E41BCu;
    // 7F0E41BC: bc    12, 2, 0x7F0E41D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41D8;
        }
    }

label_7F0E41C0:
    ctx->pc = 0x7F0E41C0u;
    ctx->downcount -= 4;
    // 7F0E41C0: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E41C4:
    ctx->pc = 0x7F0E41C4u;
    // 7F0E41C4: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E41C8:
    ctx->pc = 0x7F0E41C8u;
    // 7F0E41C8: cmpwi   r0, 0
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

label_7F0E41CC:
    ctx->pc = 0x7F0E41CCu;
    // 7F0E41CC: bc    12, 1, 0x7F0E41D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E41D8;
        }
    }

label_7F0E41D0:
    ctx->pc = 0x7F0E41D0u;
    ctx->downcount -= 2;
    // 7F0E41D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E41D4:
    ctx->pc = 0x7F0E41D4u;
    // 7F0E41D4: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E41D8:
    ctx->pc = 0x7F0E41D8u;
    ctx->downcount -= 6;
    // 7F0E41D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E41DC:
    ctx->pc = 0x7F0E41DCu;
    // 7F0E41DC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E41E0:
    ctx->pc = 0x7F0E41E0u;
    // 7F0E41E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E41E4:
    ctx->pc = 0x7F0E41E4u;
    // 7F0E41E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E41E8:
    ctx->pc = 0x7F0E41E8u;
    // 7F0E41E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E41EC:
    ctx->pc = 0x7F0E41ECu;
    ctx->downcount -= 24;
    // 7F0E41EC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E41F0:
    ctx->pc = 0x7F0E41F0u;
    // 7F0E41F0: addi    r0, r3, 3616
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3616);

label_7F0E41F4:
    ctx->pc = 0x7F0E41F4u;
    // 7F0E41F4: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F0E41F8:
    ctx->pc = 0x7F0E41F8u;
    // 7F0E41F8: addi    r10, r3, 1120
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(1120);

label_7F0E41FC:
    ctx->pc = 0x7F0E41FCu;
    // 7F0E41FC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4200:
    ctx->pc = 0x7F0E4200u;
    // 7F0E4200: addi    r9, r6, -26144
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(-26144);

label_7F0E4204:
    ctx->pc = 0x7F0E4204u;
    // 7F0E4204: addi    r8, r3, 3680
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(3680);

label_7F0E4208:
    ctx->pc = 0x7F0E4208u;
    // 7F0E4208: addi    r7, r3, 48
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(48);

label_7F0E420C:
    ctx->pc = 0x7F0E420Cu;
    // 7F0E420C: stw     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E4210:
    ctx->pc = 0x7F0E4210u;
    // 7F0E4210: addi    r6, r3, 448
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(448);

label_7F0E4214:
    ctx->pc = 0x7F0E4214u;
    // 7F0E4214: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0E4218:
    ctx->pc = 0x7F0E4218u;
    // 7F0E4218: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E421C:
    ctx->pc = 0x7F0E421Cu;
    // 7F0E421C: stw     r10, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0E4220:
    ctx->pc = 0x7F0E4220u;
    // 7F0E4220: stw     r9, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E4224:
    ctx->pc = 0x7F0E4224u;
    // 7F0E4224: lwz     r9, 3984(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3984);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0E4228:
    ctx->pc = 0x7F0E4228u;
    // 7F0E4228: stw     r9, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E422C:
    ctx->pc = 0x7F0E422Cu;
    // 7F0E422C: lwz     r3, 3988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3988);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4230:
    ctx->pc = 0x7F0E4230u;
    // 7F0E4230: stw     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4234:
    ctx->pc = 0x7F0E4234u;
    // 7F0E4234: stw     r8, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0E4238:
    ctx->pc = 0x7F0E4238u;
    // 7F0E4238: stw     r7, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0E423C:
    ctx->pc = 0x7F0E423Cu;
    // 7F0E423C: stw     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E4240:
    ctx->pc = 0x7F0E4240u;
    // 7F0E4240: stw     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E4244:
    ctx->pc = 0x7F0E4244u;
    // 7F0E4244: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4248:
    ctx->pc = 0x7F0E4248u;
    // 7F0E4248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E424C:
    ctx->pc = 0x7F0E424Cu;
    ctx->downcount -= 12;
    // 7F0E424C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4250:
    ctx->pc = 0x7F0E4250u;
    // 7F0E4250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4254:
    ctx->pc = 0x7F0E4254u;
    // 7F0E4254: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4258:
    ctx->pc = 0x7F0E4258u;
    // 7F0E4258: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E425C:
    ctx->pc = 0x7F0E425Cu;
    // 7F0E425C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4260:
    ctx->pc = 0x7F0E4260u;
    // 7F0E4260: addi    r3, r8, 3732
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(3732);

label_7F0E4264:
    ctx->pc = 0x7F0E4264u;
    // 7F0E4264: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F0E4268:
    ctx->pc = 0x7F0E4268u;
    // 7F0E4268: addi    r4, r8, 1120
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(1120);

label_7F0E426C:
    ctx->pc = 0x7F0E426Cu;
    // 7F0E426C: addi    r6, r8, 448
    ctx->gpr[6] = ctx->gpr[8] + (u32)(s32)(448);

label_7F0E4270:
    ctx->pc = 0x7F0E4270u;
    // 7F0E4270: addi    r7, r8, 48
    ctx->gpr[7] = ctx->gpr[8] + (u32)(s32)(48);

label_7F0E4274:
    ctx->pc = 0x7F0E4274u;
    // 7F0E4274: addi    r8, r8, 212
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(212);

label_7F0E4278:
    ctx->pc = 0x7F0E4278u;
    // 7F0E4278: bl      0x7F0B2258
    {
            ctx->lr = 0x7F0E427Cu;
            ctx->pc = 0x7F0B2258u;
            return;
    }

label_7F0E427C:
    ctx->pc = 0x7F0E427Cu;
    ctx->downcount -= 5;
    // 7F0E427C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4280:
    ctx->pc = 0x7F0E4280u;
    // 7F0E4280: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4284:
    ctx->pc = 0x7F0E4284u;
    // 7F0E4284: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4288:
    ctx->pc = 0x7F0E4288u;
    // 7F0E4288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E428C:
    ctx->pc = 0x7F0E428Cu;
    ctx->downcount -= 10;
    // 7F0E428C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4290:
    ctx->pc = 0x7F0E4290u;
    // 7F0E4290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4294:
    ctx->pc = 0x7F0E4294u;
    // 7F0E4294: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F0E4298:
    ctx->pc = 0x7F0E4298u;
    // 7F0E4298: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E429C:
    ctx->pc = 0x7F0E429Cu;
    // 7F0E429C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E42A0:
    ctx->pc = 0x7F0E42A0u;
    // 7F0E42A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E42A4:
    ctx->pc = 0x7F0E42A4u;
    // 7F0E42A4: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E42A8:
    ctx->pc = 0x7F0E42A8u;
    // 7F0E42A8: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E42AC:
    ctx->pc = 0x7F0E42ACu;
    // 7F0E42AC: addi    r3, r31, 3696
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3696);

label_7F0E42B0:
    ctx->pc = 0x7F0E42B0u;
    // 7F0E42B0: bl      0x7F0120F4
    {
            ctx->lr = 0x7F0E42B4u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F0E42B4:
    ctx->pc = 0x7F0E42B4u;
    ctx->downcount -= 7;
    // 7F0E42B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E42B8:
    ctx->pc = 0x7F0E42B8u;
    // 7F0E42B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E42BC:
    ctx->pc = 0x7F0E42BCu;
    // 7F0E42BC: addi    r5, r3, -2384
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2384);

label_7F0E42C0:
    ctx->pc = 0x7F0E42C0u;
    // 7F0E42C0: lfs     f2, -2380(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E42C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E42C4:
    ctx->pc = 0x7F0E42C4u;
    // 7F0E42C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E42C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E42C8:
    ctx->pc = 0x7F0E42C8u;
    // 7F0E42C8: addi    r3, r31, 3696
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3696);

label_7F0E42CC:
    ctx->pc = 0x7F0E42CCu;
    // 7F0E42CC: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F0E42D0u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F0E42D0:
    ctx->pc = 0x7F0E42D0u;
    ctx->downcount -= 8;
    // 7F0E42D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E42D4:
    ctx->pc = 0x7F0E42D4u;
    // 7F0E42D4: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E42D8:
    ctx->pc = 0x7F0E42D8u;
    // 7F0E42D8: addi    r5, r3, -2384
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2384);

label_7F0E42DC:
    ctx->pc = 0x7F0E42DCu;
    // 7F0E42DC: addi    r3, r31, 3696
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3696);

label_7F0E42E0:
    ctx->pc = 0x7F0E42E0u;
    // 7F0E42E0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E42E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E42E4:
    ctx->pc = 0x7F0E42E4u;
    // 7F0E42E4: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F0E42E8:
    ctx->pc = 0x7F0E42E8u;
    // 7F0E42E8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E42EC:
    ctx->pc = 0x7F0E42ECu;
    // 7F0E42EC: bl      0x7F041A9C
    {
            ctx->lr = 0x7F0E42F0u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F0E42F0:
    ctx->pc = 0x7F0E42F0u;
    ctx->downcount -= 6;
    // 7F0E42F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E42F4:
    ctx->pc = 0x7F0E42F4u;
    // 7F0E42F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E42F8:
    ctx->pc = 0x7F0E42F8u;
    // 7F0E42F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E42FC:
    ctx->pc = 0x7F0E42FCu;
    // 7F0E42FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4300:
    ctx->pc = 0x7F0E4300u;
    // 7F0E4300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4304:
    ctx->pc = 0x7F0E4304u;
    ctx->downcount -= 22;
    // 7F0E4304: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4308:
    ctx->pc = 0x7F0E4308u;
    // 7F0E4308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E430C:
    ctx->pc = 0x7F0E430Cu;
    // 7F0E430C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0E4310:
    ctx->pc = 0x7F0E4310u;
    // 7F0E4310: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4314:
    ctx->pc = 0x7F0E4314u;
    // 7F0E4314: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4318:
    ctx->pc = 0x7F0E4318u;
    // 7F0E4318: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E431C:
    ctx->pc = 0x7F0E431Cu;
    // 7F0E431C: addi    r3, r4, 28408
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0E4320:
    ctx->pc = 0x7F0E4320u;
    // 7F0E4320: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E4324:
    ctx->pc = 0x7F0E4324u;
    // 7F0E4324: addi    r30, r3, 24
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24);

label_7F0E4328:
    ctx->pc = 0x7F0E4328u;
    // 7F0E4328: addi    r29, r31, 48
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E432C:
    ctx->pc = 0x7F0E432Cu;
    // 7F0E432C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4330:
    ctx->pc = 0x7F0E4330u;
    // 7F0E4330: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0E4334u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0E4334:
    ctx->pc = 0x7F0E4334u;
    ctx->downcount -= 4;
    // 7F0E4334: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4338:
    ctx->pc = 0x7F0E4338u;
    // 7F0E4338: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E433C:
    ctx->pc = 0x7F0E433Cu;
    // 7F0E433C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E4340:
    ctx->pc = 0x7F0E4340u;
    // 7F0E4340: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0E4344u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0E4344:
    ctx->pc = 0x7F0E4344u;
    ctx->downcount -= 4;
    // 7F0E4344: addi    r3, r31, 3788
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3788);

label_7F0E4348:
    ctx->pc = 0x7F0E4348u;
    // 7F0E4348: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E434C:
    ctx->pc = 0x7F0E434Cu;
    // 7F0E434C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4350:
    ctx->pc = 0x7F0E4350u;
    // 7F0E4350: bl      0x7F3CCADC
    {
            ctx->lr = 0x7F0E4354u;
            ctx->pc = 0x7F3CCADCu;
            return;
    }

label_7F0E4354:
    ctx->pc = 0x7F0E4354u;
    ctx->downcount -= 4;
    // 7F0E4354: addi    r3, r31, 3796
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3796);

label_7F0E4358:
    ctx->pc = 0x7F0E4358u;
    // 7F0E4358: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E435C:
    ctx->pc = 0x7F0E435Cu;
    // 7F0E435C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4360:
    ctx->pc = 0x7F0E4360u;
    // 7F0E4360: bl      0x7F3CCADC
    {
            ctx->lr = 0x7F0E4364u;
            ctx->pc = 0x7F3CCADCu;
            return;
    }

label_7F0E4364:
    ctx->pc = 0x7F0E4364u;
    ctx->downcount -= 3;
    // 7F0E4364: lwz     r28, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F0E4368:
    ctx->pc = 0x7F0E4368u;
    // 7F0E4368: addi    r27, r31, 3808
    ctx->gpr[27] = ctx->gpr[31] + (u32)(s32)(3808);

label_7F0E436C:
    ctx->pc = 0x7F0E436Cu;
    // 7F0E436C: b       0x7F0E4394
    {
            goto label_7F0E4394;
    }

label_7F0E4370:
    ctx->downcount -= 3;
    // 7F0E4370: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4374:
    // 7F0E4374: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4378:
    // 7F0E4378: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0E437Cu;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0E437C:
    ctx->downcount -= 4;
    // 7F0E437C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E4380:
    // 7F0E4380: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E4384:
    // 7F0E4384: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4388:
    // 7F0E4388: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0E438Cu;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0E438C:
    ctx->downcount -= 2;
    // 7F0E438C: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F0E4390:
    // 7F0E4390: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_7F0E4394:
    ctx->downcount -= 2;
    // 7F0E4394: cmpwi   r28, 0
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

label_7F0E4398:
    // 7F0E4398: bc    12, 1, 0x7F0E4370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4370u;
                return;
            }
            goto label_7F0E4370;
        }
    }

label_7F0E439C:
    ctx->pc = 0x7F0E439Cu;
    ctx->downcount -= 5;
    // 7F0E439C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E43A0:
    ctx->pc = 0x7F0E43A0u;
    // 7F0E43A0: lfs     f1, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E43A0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E43A4:
    ctx->pc = 0x7F0E43A4u;
    // 7F0E43A4: lfs     f0, -2376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E43A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E43A8:
    ctx->pc = 0x7F0E43A8u;
    // 7F0E43A8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E43A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0E43AC:
    ctx->pc = 0x7F0E43ACu;
    // 7F0E43AC: bc    4, 1, 0x7F0E43B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E43B8;
        }
    }

label_7F0E43B0:
    ctx->pc = 0x7F0E43B0u;
    ctx->downcount -= 2;
    // 7F0E43B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E43B4:
    ctx->pc = 0x7F0E43B4u;
    // 7F0E43B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0E43B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0E43B8:
    ctx->pc = 0x7F0E43B8u;
    ctx->downcount -= 2;
    // 7F0E43B8: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0E43BC:
    ctx->pc = 0x7F0E43BCu;
    // 7F0E43BC: bl      0x7F04291C
    {
            ctx->lr = 0x7F0E43C0u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F0E43C0:
    ctx->pc = 0x7F0E43C0u;
    ctx->downcount -= 3;
    // 7F0E43C0: lwz     r0, 3776(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3776);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E43C4:
    ctx->pc = 0x7F0E43C4u;
    // 7F0E43C4: cmpwi   r0, 0
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

label_7F0E43C8:
    ctx->pc = 0x7F0E43C8u;
    // 7F0E43C8: bc    12, 2, 0x7F0E4410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4410;
        }
    }

label_7F0E43CC:
    ctx->pc = 0x7F0E43CCu;
    ctx->downcount -= 17;
    // 7F0E43CC: lha     r3, 3780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3780);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E43D0:
    ctx->pc = 0x7F0E43D0u;
    // 7F0E43D0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E43D4:
    ctx->pc = 0x7F0E43D4u;
    // 7F0E43D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E43D8:
    ctx->pc = 0x7F0E43D8u;
    // 7F0E43D8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E43DC:
    ctx->pc = 0x7F0E43DCu;
    // 7F0E43DC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0E43E0:
    ctx->pc = 0x7F0E43E0u;
    // 7F0E43E0: lfd     f1, -2400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E43E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2400);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E43E4:
    ctx->pc = 0x7F0E43E4u;
    // 7F0E43E4: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E43E8:
    ctx->pc = 0x7F0E43E8u;
    // 7F0E43E8: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E43E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E43EC:
    ctx->pc = 0x7F0E43ECu;
    // 7F0E43EC: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E43F0:
    ctx->pc = 0x7F0E43F0u;
    // 7F0E43F0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E43F0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0E43F4:
    ctx->pc = 0x7F0E43F4u;
    // 7F0E43F4: stfs     f0, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E43F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E43F8:
    ctx->pc = 0x7F0E43F8u;
    // 7F0E43F8: lha     r0, 3784(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3784);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E43FC:
    ctx->pc = 0x7F0E43FCu;
    // 7F0E43FC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0E4400:
    ctx->pc = 0x7F0E4400u;
    // 7F0E4400: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4404:
    ctx->pc = 0x7F0E4404u;
    // 7F0E4404: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E4408:
    ctx->pc = 0x7F0E4408u;
    // 7F0E4408: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E4408u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0E440C:
    ctx->pc = 0x7F0E440Cu;
    // 7F0E440C: stfs     f0, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E440Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4410:
    ctx->pc = 0x7F0E4410u;
    ctx->downcount -= 17;
    // 7F0E4410: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E4414:
    ctx->pc = 0x7F0E4414u;
    // 7F0E4414: lfs     f0, 460(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4414u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4418:
    ctx->pc = 0x7F0E4418u;
    // 7F0E4418: addi    r4, r3, -2392
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2392);

label_7F0E441C:
    ctx->pc = 0x7F0E441Cu;
    // 7F0E441C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4420:
    ctx->pc = 0x7F0E4420u;
    // 7F0E4420: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4420u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E4424:
    ctx->pc = 0x7F0E4424u;
    // 7F0E4424: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E4424u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E4428:
    ctx->pc = 0x7F0E4428u;
    // 7F0E4428: stfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4428u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E442C:
    ctx->pc = 0x7F0E442Cu;
    // 7F0E442C: lfs     f0, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E442Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4430:
    ctx->pc = 0x7F0E4430u;
    // 7F0E4430: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E4430u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E4434:
    ctx->pc = 0x7F0E4434u;
    // 7F0E4434: stfs     f0, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4434u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4438:
    ctx->pc = 0x7F0E4438u;
    // 7F0E4438: lfs     f0, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4438u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E443C:
    ctx->pc = 0x7F0E443Cu;
    // 7F0E443C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E443Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E4440:
    ctx->pc = 0x7F0E4440u;
    // 7F0E4440: stfs     f0, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4440u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4444:
    ctx->pc = 0x7F0E4444u;
    // 7F0E4444: lfs     f0, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4444u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4448:
    ctx->pc = 0x7F0E4448u;
    // 7F0E4448: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E4448u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E444C:
    ctx->pc = 0x7F0E444Cu;
    // 7F0E444C: stfs     f0, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E444Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4450:
    ctx->pc = 0x7F0E4450u;
    // 7F0E4450: bl      0x7F023170
    {
            ctx->lr = 0x7F0E4454u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F0E4454:
    ctx->pc = 0x7F0E4454u;
    ctx->downcount -= 2;
    // 7F0E4454: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4458:
    ctx->pc = 0x7F0E4458u;
    // 7F0E4458: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F0E445Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F0E445C:
    ctx->pc = 0x7F0E445Cu;
    ctx->downcount -= 5;
    // 7F0E445C: lwz     r5, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4460:
    ctx->pc = 0x7F0E4460u;
    // 7F0E4460: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E4464:
    ctx->pc = 0x7F0E4464u;
    // 7F0E4464: addi    r4, r3, -26128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26128);

label_7F0E4468:
    ctx->pc = 0x7F0E4468u;
    // 7F0E4468: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F0E446C:
    ctx->pc = 0x7F0E446Cu;
    // 7F0E446C: bl      0x7F09199C
    {
            ctx->lr = 0x7F0E4470u;
            ctx->pc = 0x7F09199Cu;
            return;
    }

label_7F0E4470:
    ctx->pc = 0x7F0E4470u;
    ctx->downcount -= 3;
    // 7F0E4470: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4474:
    ctx->pc = 0x7F0E4474u;
    // 7F0E4474: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E4478:
    ctx->pc = 0x7F0E4478u;
    // 7F0E4478: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0E447Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0E447C:
    ctx->pc = 0x7F0E447Cu;
    ctx->downcount -= 2;
    // 7F0E447C: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0E4480:
    ctx->pc = 0x7F0E4480u;
    // 7F0E4480: bl      0x7F0429C4
    {
            ctx->lr = 0x7F0E4484u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F0E4484:
    ctx->pc = 0x7F0E4484u;
    ctx->downcount -= 5;
    // 7F0E4484: lwz     r5, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4488:
    ctx->pc = 0x7F0E4488u;
    // 7F0E4488: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E448C:
    ctx->pc = 0x7F0E448Cu;
    // 7F0E448C: addi    r4, r31, 936
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(936);

label_7F0E4490:
    ctx->pc = 0x7F0E4490u;
    // 7F0E4490: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0E4494:
    ctx->pc = 0x7F0E4494u;
    // 7F0E4494: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0E4498u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0E4498:
    ctx->pc = 0x7F0E4498u;
    ctx->downcount -= 2;
    // 7F0E4498: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E449C:
    ctx->pc = 0x7F0E449Cu;
    // 7F0E449C: bl      0x7F0E4940
    {
            ctx->lr = 0x7F0E44A0u;
            goto label_7F0E4940;
    }

label_7F0E44A0:
    ctx->pc = 0x7F0E44A0u;
    ctx->downcount -= 16;
    // 7F0E44A0: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E44A4:
    ctx->pc = 0x7F0E44A4u;
    // 7F0E44A4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E44A8:
    ctx->pc = 0x7F0E44A8u;
    // 7F0E44A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E44AC:
    ctx->pc = 0x7F0E44ACu;
    // 7F0E44AC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0E44B0:
    ctx->pc = 0x7F0E44B0u;
    // 7F0E44B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E44B4:
    ctx->pc = 0x7F0E44B4u;
    ctx->downcount -= 20;
    // 7F0E44B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E44B8:
    ctx->pc = 0x7F0E44B8u;
    // 7F0E44B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E44BC:
    ctx->pc = 0x7F0E44BCu;
    // 7F0E44BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E44C0:
    ctx->pc = 0x7F0E44C0u;
    // 7F0E44C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E44C4:
    ctx->pc = 0x7F0E44C4u;
    // 7F0E44C4: addi    r5, r4, -2392
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2392);

label_7F0E44C8:
    ctx->pc = 0x7F0E44C8u;
    // 7F0E44C8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E44CC:
    ctx->pc = 0x7F0E44CCu;
    // 7F0E44CC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0E44D0:
    ctx->pc = 0x7F0E44D0u;
    // 7F0E44D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E44D4:
    ctx->pc = 0x7F0E44D4u;
    // 7F0E44D4: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0E44D8:
    ctx->pc = 0x7F0E44D8u;
    // 7F0E44D8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E44DC:
    ctx->pc = 0x7F0E44DCu;
    // 7F0E44DC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E44DCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E44E0:
    ctx->pc = 0x7F0E44E0u;
    // 7F0E44E0: addi    r4, r4, 56
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(56);

label_7F0E44E4:
    ctx->pc = 0x7F0E44E4u;
    // 7F0E44E4: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E44E8:
    ctx->pc = 0x7F0E44E8u;
    // 7F0E44E8: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E44EC:
    ctx->pc = 0x7F0E44ECu;
    // 7F0E44EC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E44ECu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E44F0:
    ctx->pc = 0x7F0E44F0u;
    // 7F0E44F0: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E44F4:
    ctx->pc = 0x7F0E44F4u;
    // 7F0E44F4: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E44F8:
    ctx->pc = 0x7F0E44F8u;
    // 7F0E44F8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E44F8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E44FC:
    ctx->pc = 0x7F0E44FCu;
    // 7F0E44FC: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E44FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4500:
    ctx->pc = 0x7F0E4500u;
    // 7F0E4500: bl      0x7F3CCABC
    {
            ctx->lr = 0x7F0E4504u;
            ctx->pc = 0x7F3CCABCu;
            return;
    }

label_7F0E4504:
    ctx->pc = 0x7F0E4504u;
    ctx->downcount -= 5;
    // 7F0E4504: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4508:
    ctx->pc = 0x7F0E4508u;
    // 7F0E4508: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E450C:
    ctx->pc = 0x7F0E450Cu;
    // 7F0E450C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4510:
    ctx->pc = 0x7F0E4510u;
    // 7F0E4510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4514:
    ctx->pc = 0x7F0E4514u;
    ctx->downcount -= 19;
    // 7F0E4514: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4518:
    ctx->pc = 0x7F0E4518u;
    // 7F0E4518: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E451C:
    ctx->pc = 0x7F0E451Cu;
    // 7F0E451C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E4520:
    ctx->pc = 0x7F0E4520u;
    // 7F0E4520: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4524:
    ctx->pc = 0x7F0E4524u;
    // 7F0E4524: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4528:
    ctx->pc = 0x7F0E4528u;
    // 7F0E4528: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E452C:
    ctx->pc = 0x7F0E452Cu;
    // 7F0E452C: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0E4530:
    ctx->pc = 0x7F0E4530u;
    // 7F0E4530: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4534:
    ctx->pc = 0x7F0E4534u;
    // 7F0E4534: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0E4538u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0E4538:
    ctx->pc = 0x7F0E4538u;
    ctx->downcount -= 2;
    // 7F0E4538: cmpwi   r3, 0
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

label_7F0E453C:
    ctx->pc = 0x7F0E453Cu;
    // 7F0E453C: bc    4, 0, 0x7F0E4548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4548;
        }
    }

label_7F0E4540:
    ctx->pc = 0x7F0E4540u;
    ctx->downcount -= 2;
    // 7F0E4540: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0E4544:
    ctx->pc = 0x7F0E4544u;
    // 7F0E4544: b       0x7F0E47B0
    {
            goto label_7F0E47B0;
    }

label_7F0E4548:
    ctx->pc = 0x7F0E4548u;
    ctx->downcount -= 2;
    // 7F0E4548: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F0E454C:
    ctx->pc = 0x7F0E454Cu;
    // 7F0E454C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0E4550u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0E4550:
    ctx->pc = 0x7F0E4550u;
    ctx->downcount -= 3;
    // 7F0E4550: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4554:
    ctx->pc = 0x7F0E4554u;
    // 7F0E4554: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F0E4558:
    ctx->pc = 0x7F0E4558u;
    // 7F0E4558: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0E455Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0E455C:
    ctx->pc = 0x7F0E455Cu;
    ctx->downcount -= 4;
    // 7F0E455C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4560:
    ctx->pc = 0x7F0E4560u;
    // 7F0E4560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4564:
    ctx->pc = 0x7F0E4564u;
    // 7F0E4564: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4568:
    ctx->pc = 0x7F0E4568u;
    // 7F0E4568: bl      0x7F0242F4
    {
            ctx->lr = 0x7F0E456Cu;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F0E456C:
    ctx->pc = 0x7F0E456Cu;
    ctx->downcount -= 3;
    // 7F0E456C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4570:
    ctx->pc = 0x7F0E4570u;
    // 7F0E4570: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0E4574:
    ctx->pc = 0x7F0E4574u;
    // 7F0E4574: bl      0x7F024060
    {
            ctx->lr = 0x7F0E4578u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F0E4578:
    ctx->pc = 0x7F0E4578u;
    ctx->downcount -= 3;
    // 7F0E4578: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E457C:
    ctx->pc = 0x7F0E457Cu;
    // 7F0E457C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0E4580:
    ctx->pc = 0x7F0E4580u;
    // 7F0E4580: bl      0x7F0688B0
    {
            ctx->lr = 0x7F0E4584u;
            ctx->pc = 0x7F0688B0u;
            return;
    }

label_7F0E4584:
    ctx->pc = 0x7F0E4584u;
    ctx->downcount -= 3;
    // 7F0E4584: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F0E4588:
    ctx->pc = 0x7F0E4588u;
    // 7F0E4588: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E458C:
    ctx->pc = 0x7F0E458Cu;
    // 7F0E458C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F0E4590u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F0E4590:
    ctx->pc = 0x7F0E4590u;
    ctx->downcount -= 3;
    // 7F0E4590: cmpwi   r3, 0
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

label_7F0E4594:
    ctx->pc = 0x7F0E4594u;
    // 7F0E4594: stw     r3, 3804(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4598:
    ctx->pc = 0x7F0E4598u;
    // 7F0E4598: bc    4, 1, 0x7F0E45DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E45DC;
        }
    }

label_7F0E459C:
    ctx->pc = 0x7F0E459Cu;
    ctx->downcount -= 2;
    // 7F0E459C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F0E45A0:
    ctx->pc = 0x7F0E45A0u;
    // 7F0E45A0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0E45A4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0E45A4:
    ctx->pc = 0x7F0E45A4u;
    ctx->downcount -= 2;
    // 7F0E45A4: cmplwi  r3, 0x0000
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

label_7F0E45A8:
    ctx->pc = 0x7F0E45A8u;
    // 7F0E45A8: bc    12, 2, 0x7F0E45DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E45DC;
        }
    }

label_7F0E45AC:
    ctx->pc = 0x7F0E45ACu;
    ctx->downcount -= 3;
    // 7F0E45AC: lwz     r29, 3804(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3804);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F0E45B0:
    ctx->pc = 0x7F0E45B0u;
    // 7F0E45B0: addi    r28, r30, 3808
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(3808);

label_7F0E45B4:
    ctx->pc = 0x7F0E45B4u;
    // 7F0E45B4: b       0x7F0E45D4
    {
            goto label_7F0E45D4;
    }

label_7F0E45B8:
    ctx->downcount -= 1;
    // 7F0E45B8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0E45BCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0E45BC:
    ctx->downcount -= 2;
    // 7F0E45BC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E45C0:
    // 7F0E45C0: bl      0x7F3C6904
    {
            ctx->lr = 0x7F0E45C4u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F0E45C4:
    ctx->downcount -= 2;
    // 7F0E45C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E45C8:
    // 7F0E45C8: bl      0x7F0E44B4
    {
            ctx->lr = 0x7F0E45CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E44B4u;
                return;
            }
            goto label_7F0E44B4;
    }

label_7F0E45CC:
    ctx->downcount -= 2;
    // 7F0E45CC: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F0E45D0:
    // 7F0E45D0: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F0E45D4:
    ctx->downcount -= 2;
    // 7F0E45D4: cmpwi   r29, 0
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

label_7F0E45D8:
    // 7F0E45D8: bc    12, 1, 0x7F0E45B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E45B8u;
                return;
            }
            goto label_7F0E45B8;
        }
    }

label_7F0E45DC:
    ctx->pc = 0x7F0E45DCu;
    ctx->downcount -= 2;
    // 7F0E45DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E45E0:
    ctx->pc = 0x7F0E45E0u;
    // 7F0E45E0: bl      0x7F0E44B4
    {
            ctx->lr = 0x7F0E45E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E44B4u;
                return;
            }
            goto label_7F0E44B4;
    }

label_7F0E45E4:
    ctx->pc = 0x7F0E45E4u;
    ctx->downcount -= 8;
    // 7F0E45E4: addi    r29, r30, 448
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E45E8:
    ctx->pc = 0x7F0E45E8u;
    // 7F0E45E8: lis     r4, 145
    ctx->gpr[4] = ((u32)(s32)(145) << 16);

label_7F0E45EC:
    ctx->pc = 0x7F0E45ECu;
    // 7F0E45EC: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0E45F0:
    ctx->pc = 0x7F0E45F0u;
    // 7F0E45F0: addi    r28, r30, 1064
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(1064);

label_7F0E45F4:
    ctx->pc = 0x7F0E45F4u;
    // 7F0E45F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E45F8:
    ctx->pc = 0x7F0E45F8u;
    // 7F0E45F8: addi    r4, r4, 17781
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17781);

label_7F0E45FC:
    ctx->pc = 0x7F0E45FCu;
    // 7F0E45FC: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0E4600:
    ctx->pc = 0x7F0E4600u;
    // 7F0E4600: bl      0x7F04272C
    {
            ctx->lr = 0x7F0E4604u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0E4604:
    ctx->pc = 0x7F0E4604u;
    ctx->downcount -= 6;
    // 7F0E4604: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0E4608:
    ctx->pc = 0x7F0E4608u;
    // 7F0E4608: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E460C:
    ctx->pc = 0x7F0E460Cu;
    // 7F0E460C: addi    r5, r4, -22349
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22349);

label_7F0E4610:
    ctx->pc = 0x7F0E4610u;
    // 7F0E4610: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0E4614:
    ctx->pc = 0x7F0E4614u;
    // 7F0E4614: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0E4618:
    ctx->pc = 0x7F0E4618u;
    // 7F0E4618: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0E461Cu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0E461C:
    ctx->pc = 0x7F0E461Cu;
    ctx->downcount -= 3;
    // 7F0E461C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4620:
    ctx->pc = 0x7F0E4620u;
    // 7F0E4620: addi    r4, r30, 936
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(936);

label_7F0E4624:
    ctx->pc = 0x7F0E4624u;
    // 7F0E4624: bl      0x7F042B20
    {
            ctx->lr = 0x7F0E4628u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0E4628:
    ctx->pc = 0x7F0E4628u;
    ctx->downcount -= 3;
    // 7F0E4628: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E462C:
    ctx->pc = 0x7F0E462Cu;
    // 7F0E462C: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0E4630:
    ctx->pc = 0x7F0E4630u;
    // 7F0E4630: bl      0x7F042B6C
    {
            ctx->lr = 0x7F0E4634u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F0E4634:
    ctx->pc = 0x7F0E4634u;
    ctx->downcount -= 9;
    // 7F0E4634: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E4638:
    ctx->pc = 0x7F0E4638u;
    // 7F0E4638: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E463C:
    ctx->pc = 0x7F0E463Cu;
    // 7F0E463C: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E4640:
    ctx->pc = 0x7F0E4640u;
    // 7F0E4640: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E4644:
    ctx->pc = 0x7F0E4644u;
    // 7F0E4644: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E4648:
    ctx->pc = 0x7F0E4648u;
    // 7F0E4648: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E464C:
    ctx->pc = 0x7F0E464Cu;
    // 7F0E464C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E4650:
    ctx->pc = 0x7F0E4650u;
    // 7F0E4650: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E4654:
    ctx->pc = 0x7F0E4654u;
    // 7F0E4654: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E4658u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E4658:
    ctx->pc = 0x7F0E4658u;
    ctx->downcount -= 3;
    // 7F0E4658: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E465C:
    ctx->pc = 0x7F0E465Cu;
    // 7F0E465C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4660:
    ctx->pc = 0x7F0E4660u;
    // 7F0E4660: bl      0x7F023E5C
    {
            ctx->lr = 0x7F0E4664u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F0E4664:
    ctx->pc = 0x7F0E4664u;
    ctx->downcount -= 14;
    // 7F0E4664: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4668:
    ctx->pc = 0x7F0E4668u;
    // 7F0E4668: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F0E466C:
    ctx->pc = 0x7F0E466Cu;
    // 7F0E466C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E4670:
    ctx->pc = 0x7F0E4670u;
    // 7F0E4670: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0E4674:
    ctx->pc = 0x7F0E4674u;
    // 7F0E4674: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F0E4678:
    ctx->pc = 0x7F0E4678u;
    // 7F0E4678: addi    r4, r4, 29869
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29869);

label_7F0E467C:
    ctx->pc = 0x7F0E467Cu;
    // 7F0E467C: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4680:
    ctx->pc = 0x7F0E4680u;
    // 7F0E4680: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0E4684:
    ctx->pc = 0x7F0E4684u;
    // 7F0E4684: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0E4688:
    ctx->pc = 0x7F0E4688u;
    // 7F0E4688: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E468C:
    ctx->pc = 0x7F0E468Cu;
    // 7F0E468C: lwz     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E4690:
    ctx->pc = 0x7F0E4690u;
    // 7F0E4690: lwz     r0, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4694:
    ctx->pc = 0x7F0E4694u;
    // 7F0E4694: stw     r0, 1112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4698:
    ctx->pc = 0x7F0E4698u;
    // 7F0E4698: bl      0x7F04272C
    {
            ctx->lr = 0x7F0E469Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0E469C:
    ctx->pc = 0x7F0E469Cu;
    ctx->downcount -= 3;
    // 7F0E469C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E46A0:
    ctx->pc = 0x7F0E46A0u;
    // 7F0E46A0: addi    r4, r30, 936
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(936);

label_7F0E46A4:
    ctx->pc = 0x7F0E46A4u;
    // 7F0E46A4: bl      0x7F042B20
    {
            ctx->lr = 0x7F0E46A8u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0E46A8:
    ctx->pc = 0x7F0E46A8u;
    ctx->downcount -= 4;
    // 7F0E46A8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E46AC:
    ctx->pc = 0x7F0E46ACu;
    // 7F0E46AC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E46B0:
    ctx->pc = 0x7F0E46B0u;
    // 7F0E46B0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F0E46B4:
    ctx->pc = 0x7F0E46B4u;
    // 7F0E46B4: bl      0x7F042B74
    {
            ctx->lr = 0x7F0E46B8u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F0E46B8:
    ctx->pc = 0x7F0E46B8u;
    ctx->downcount -= 10;
    // 7F0E46B8: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F0E46BC:
    ctx->pc = 0x7F0E46BCu;
    // 7F0E46BC: lis     r3, 32526
    ctx->gpr[3] = ((u32)(s32)(32526) << 16);

label_7F0E46C0:
    ctx->pc = 0x7F0E46C0u;
    // 7F0E46C0: stw     r4, 3984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3984);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E46C4:
    ctx->pc = 0x7F0E46C4u;
    // 7F0E46C4: addi    r5, r3, 16632
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(16632);

label_7F0E46C8:
    ctx->pc = 0x7F0E46C8u;
    // 7F0E46C8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F0E46CC:
    ctx->pc = 0x7F0E46CCu;
    // 7F0E46CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E46D0:
    ctx->pc = 0x7F0E46D0u;
    // 7F0E46D0: stw     r4, 3988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3988);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E46D4:
    ctx->pc = 0x7F0E46D4u;
    // 7F0E46D4: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E46D8:
    ctx->pc = 0x7F0E46D8u;
    // 7F0E46D8: stw     r0, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E46DC:
    ctx->pc = 0x7F0E46DCu;
    // 7F0E46DC: bl      0x7F0E41EC
    {
            ctx->lr = 0x7F0E46E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E41ECu;
                return;
            }
            goto label_7F0E41EC;
    }

label_7F0E46E0:
    ctx->pc = 0x7F0E46E0u;
    ctx->downcount -= 3;
    // 7F0E46E0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E46E4:
    ctx->pc = 0x7F0E46E4u;
    // 7F0E46E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E46E8:
    ctx->pc = 0x7F0E46E8u;
    // 7F0E46E8: bl      0x7F0B1A5C
    {
            ctx->lr = 0x7F0E46ECu;
            ctx->pc = 0x7F0B1A5Cu;
            return;
    }

label_7F0E46EC:
    ctx->pc = 0x7F0E46ECu;
    ctx->downcount -= 2;
    // 7F0E46EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E46F0:
    ctx->pc = 0x7F0E46F0u;
    // 7F0E46F0: bl      0x7F0E424C
    {
            ctx->lr = 0x7F0E46F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E424Cu;
                return;
            }
            goto label_7F0E424C;
    }

label_7F0E46F4:
    ctx->pc = 0x7F0E46F4u;
    ctx->downcount -= 2;
    // 7F0E46F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E46F8:
    ctx->pc = 0x7F0E46F8u;
    // 7F0E46F8: bl      0x7F0E428C
    {
            ctx->lr = 0x7F0E46FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E428Cu;
                return;
            }
            goto label_7F0E428C;
    }

label_7F0E46FC:
    ctx->pc = 0x7F0E46FCu;
    ctx->downcount -= 11;
    // 7F0E46FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E4700:
    ctx->pc = 0x7F0E4700u;
    // 7F0E4700: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4704:
    ctx->pc = 0x7F0E4704u;
    // 7F0E4704: sth     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0E4708:
    ctx->pc = 0x7F0E4708u;
    // 7F0E4708: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E470C:
    ctx->pc = 0x7F0E470Cu;
    // 7F0E470C: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0E4710:
    ctx->pc = 0x7F0E4710u;
    // 7F0E4710: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0E4714:
    ctx->pc = 0x7F0E4714u;
    // 7F0E4714: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4718:
    ctx->pc = 0x7F0E4718u;
    // 7F0E4718: stw     r5, 3908(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3908);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E471C:
    ctx->pc = 0x7F0E471Cu;
    // 7F0E471C: stw     r5, 3912(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3912);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E4720:
    ctx->pc = 0x7F0E4720u;
    // 7F0E4720: stw     r5, 3916(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3916);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E4724:
    ctx->pc = 0x7F0E4724u;
    // 7F0E4724: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0E4728u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0E4728:
    ctx->pc = 0x7F0E4728u;
    ctx->downcount -= 7;
    // 7F0E4728: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E472C:
    ctx->pc = 0x7F0E472Cu;
    // 7F0E472C: addi    r3, r30, 3808
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3808);

label_7F0E4730:
    ctx->pc = 0x7F0E4730u;
    // 7F0E4730: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4734:
    ctx->pc = 0x7F0E4734u;
    // 7F0E4734: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4738:
    ctx->pc = 0x7F0E4738u;
    // 7F0E4738: stw     r5, 3788(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3788);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E473C:
    ctx->pc = 0x7F0E473Cu;
    // 7F0E473C: stw     r0, 3792(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4740:
    ctx->pc = 0x7F0E4740u;
    // 7F0E4740: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0E4744u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0E4744:
    ctx->pc = 0x7F0E4744u;
    ctx->downcount -= 9;
    // 7F0E4744: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4748:
    ctx->pc = 0x7F0E4748u;
    // 7F0E4748: addi    r4, r30, 1120
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E474C:
    ctx->pc = 0x7F0E474Cu;
    // 7F0E474C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4750:
    ctx->pc = 0x7F0E4750u;
    // 7F0E4750: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0E4754:
    ctx->pc = 0x7F0E4754u;
    // 7F0E4754: stw     r3, 3796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4758:
    ctx->pc = 0x7F0E4758u;
    // 7F0E4758: stw     r0, 3800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E475C:
    ctx->pc = 0x7F0E475Cu;
    // 7F0E475C: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4760:
    ctx->pc = 0x7F0E4760u;
    // 7F0E4760: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F0E4764:
    ctx->pc = 0x7F0E4764u;
    // 7F0E4764: bl      0x7F22DD68
    {
            ctx->lr = 0x7F0E4768u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F0E4768:
    ctx->pc = 0x7F0E4768u;
    ctx->downcount -= 4;
    // 7F0E4768: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E476C:
    ctx->pc = 0x7F0E476Cu;
    // 7F0E476C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4770:
    ctx->pc = 0x7F0E4770u;
    // 7F0E4770: stw     r4, 3996(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E4774:
    ctx->pc = 0x7F0E4774u;
    // 7F0E4774: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E4778u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E4778:
    ctx->pc = 0x7F0E4778u;
    ctx->downcount -= 6;
    // 7F0E4778: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E477C:
    ctx->pc = 0x7F0E477Cu;
    // 7F0E477C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4780:
    ctx->pc = 0x7F0E4780u;
    // 7F0E4780: stw     r0, 4000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4784:
    ctx->pc = 0x7F0E4784u;
    // 7F0E4784: addi    r4, r30, 4000
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4000);

label_7F0E4788:
    ctx->pc = 0x7F0E4788u;
    // 7F0E4788: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0E478C:
    ctx->pc = 0x7F0E478Cu;
    // 7F0E478C: bl      0x7F3828F4
    {
            ctx->lr = 0x7F0E4790u;
            ctx->pc = 0x7F3828F4u;
            return;
    }

label_7F0E4790:
    ctx->pc = 0x7F0E4790u;
    ctx->downcount -= 3;
    // 7F0E4790: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4794:
    ctx->pc = 0x7F0E4794u;
    // 7F0E4794: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4798:
    ctx->pc = 0x7F0E4798u;
    // 7F0E4798: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E479Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E479C:
    ctx->pc = 0x7F0E479Cu;
    ctx->downcount -= 5;
    // 7F0E479C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E47A0:
    ctx->pc = 0x7F0E47A0u;
    // 7F0E47A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E47A4:
    ctx->pc = 0x7F0E47A4u;
    // 7F0E47A4: stw     r0, 4004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E47A8:
    ctx->pc = 0x7F0E47A8u;
    // 7F0E47A8: stw     r0, 4008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4008);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E47AC:
    ctx->pc = 0x7F0E47ACu;
    // 7F0E47AC: stw     r0, 4016(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E47B0:
    ctx->pc = 0x7F0E47B0u;
    ctx->downcount -= 16;
    // 7F0E47B0: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E47B4:
    ctx->pc = 0x7F0E47B4u;
    // 7F0E47B4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E47B8:
    ctx->pc = 0x7F0E47B8u;
    // 7F0E47B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E47BC:
    ctx->pc = 0x7F0E47BCu;
    // 7F0E47BC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F0E47C0:
    ctx->pc = 0x7F0E47C0u;
    // 7F0E47C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E47C4:
    ctx->pc = 0x7F0E47C4u;
    ctx->downcount -= 7;
    // 7F0E47C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E47C8:
    ctx->pc = 0x7F0E47C8u;
    // 7F0E47C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E47CC:
    ctx->pc = 0x7F0E47CCu;
    // 7F0E47CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E47D0:
    ctx->pc = 0x7F0E47D0u;
    // 7F0E47D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E47D4:
    ctx->pc = 0x7F0E47D4u;
    // 7F0E47D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E47D8:
    ctx->pc = 0x7F0E47D8u;
    // 7F0E47D8: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E47DC:
    ctx->pc = 0x7F0E47DCu;
    // 7F0E47DC: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0E47E0u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0E47E0:
    ctx->pc = 0x7F0E47E0u;
    ctx->downcount -= 2;
    // 7F0E47E0: addi    r3, r31, 3732
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3732);

label_7F0E47E4:
    ctx->pc = 0x7F0E47E4u;
    // 7F0E47E4: bl      0x7F01D540
    {
            ctx->lr = 0x7F0E47E8u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F0E47E8:
    ctx->pc = 0x7F0E47E8u;
    ctx->downcount -= 2;
    // 7F0E47E8: addi    r3, r31, 3696
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3696);

label_7F0E47EC:
    ctx->pc = 0x7F0E47ECu;
    // 7F0E47EC: bl      0x7F012144
    {
            ctx->lr = 0x7F0E47F0u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F0E47F0:
    ctx->pc = 0x7F0E47F0u;
    ctx->downcount -= 2;
    // 7F0E47F0: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_7F0E47F4:
    ctx->pc = 0x7F0E47F4u;
    // 7F0E47F4: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0E47F8u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0E47F8:
    ctx->pc = 0x7F0E47F8u;
    ctx->downcount -= 2;
    // 7F0E47F8: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E47FC:
    ctx->pc = 0x7F0E47FCu;
    // 7F0E47FC: bl      0x7F023E10
    {
            ctx->lr = 0x7F0E4800u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0E4800:
    ctx->pc = 0x7F0E4800u;
    ctx->downcount -= 2;
    // 7F0E4800: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0E4804:
    ctx->pc = 0x7F0E4804u;
    // 7F0E4804: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0E4808u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0E4808:
    ctx->pc = 0x7F0E4808u;
    ctx->downcount -= 6;
    // 7F0E4808: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E480C:
    ctx->pc = 0x7F0E480Cu;
    // 7F0E480C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4810:
    ctx->pc = 0x7F0E4810u;
    // 7F0E4810: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4814:
    ctx->pc = 0x7F0E4814u;
    // 7F0E4814: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4818:
    ctx->pc = 0x7F0E4818u;
    // 7F0E4818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E481C:
    ctx->pc = 0x7F0E481Cu;
    ctx->downcount -= 21;
    // 7F0E481C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4820:
    ctx->pc = 0x7F0E4820u;
    // 7F0E4820: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4824:
    ctx->pc = 0x7F0E4824u;
    // 7F0E4824: li      r5, 4032
    ctx->gpr[5] = (u32)(s32)(4032);

label_7F0E4828:
    ctx->pc = 0x7F0E4828u;
    // 7F0E4828: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E482C:
    ctx->pc = 0x7F0E482Cu;
    // 7F0E482C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4830:
    ctx->pc = 0x7F0E4830u;
    // 7F0E4830: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4834:
    ctx->pc = 0x7F0E4834u;
    // 7F0E4834: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4838:
    ctx->pc = 0x7F0E4838u;
    // 7F0E4838: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E483C:
    ctx->pc = 0x7F0E483Cu;
    // 7F0E483C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0E4840:
    ctx->pc = 0x7F0E4840u;
    // 7F0E4840: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0E4844:
    ctx->pc = 0x7F0E4844u;
    // 7F0E4844: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0E4848u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0E4848:
    ctx->pc = 0x7F0E4848u;
    ctx->downcount -= 2;
    // 7F0E4848: or.   r31, r3, r3
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

label_7F0E484C:
    ctx->pc = 0x7F0E484Cu;
    // 7F0E484C: bc    12, 2, 0x7F0E48B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E48B8;
        }
    }

label_7F0E4850:
    ctx->pc = 0x7F0E4850u;
    ctx->downcount -= 5;
    // 7F0E4850: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4854:
    ctx->pc = 0x7F0E4854u;
    // 7F0E4854: lis     r5, 32526
    ctx->gpr[5] = ((u32)(s32)(32526) << 16);

label_7F0E4858:
    ctx->pc = 0x7F0E4858u;
    // 7F0E4858: addi    r4, r4, 17156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17156);

label_7F0E485C:
    ctx->pc = 0x7F0E485Cu;
    // 7F0E485C: addi    r5, r5, 18372
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18372);

label_7F0E4860:
    ctx->pc = 0x7F0E4860u;
    // 7F0E4860: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0E4864u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0E4864:
    ctx->pc = 0x7F0E4864u;
    ctx->downcount -= 15;
    // 7F0E4864: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4868:
    ctx->pc = 0x7F0E4868u;
    // 7F0E4868: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F0E486C:
    ctx->pc = 0x7F0E486Cu;
    // 7F0E486C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E4870:
    ctx->pc = 0x7F0E4870u;
    // 7F0E4870: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4874:
    ctx->pc = 0x7F0E4874u;
    // 7F0E4874: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F0E4878:
    ctx->pc = 0x7F0E4878u;
    // 7F0E4878: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F0E487C:
    ctx->pc = 0x7F0E487Cu;
    // 7F0E487C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E4880:
    ctx->pc = 0x7F0E4880u;
    // 7F0E4880: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E4884:
    ctx->pc = 0x7F0E4884u;
    // 7F0E4884: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4888:
    ctx->pc = 0x7F0E4888u;
    // 7F0E4888: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E488C:
    ctx->pc = 0x7F0E488Cu;
    // 7F0E488C: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E4890:
    ctx->pc = 0x7F0E4890u;
    // 7F0E4890: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E4894:
    ctx->pc = 0x7F0E4894u;
    // 7F0E4894: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4898:
    ctx->pc = 0x7F0E4898u;
    // 7F0E4898: stw     r29, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0E489C:
    ctx->pc = 0x7F0E489Cu;
    // 7F0E489C: bl      0x7F0E4514
    {
            ctx->lr = 0x7F0E48A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4514u;
                return;
            }
            goto label_7F0E4514;
    }

label_7F0E48A0:
    ctx->pc = 0x7F0E48A0u;
    ctx->downcount -= 2;
    // 7F0E48A0: cmpwi   r3, 0
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

label_7F0E48A4:
    ctx->pc = 0x7F0E48A4u;
    // 7F0E48A4: bc    4, 0, 0x7F0E48B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E48B8;
        }
    }

label_7F0E48A8:
    ctx->pc = 0x7F0E48A8u;
    ctx->downcount -= 2;
    // 7F0E48A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E48AC:
    ctx->pc = 0x7F0E48ACu;
    // 7F0E48AC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0E48B0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0E48B0:
    ctx->pc = 0x7F0E48B0u;
    ctx->downcount -= 2;
    // 7F0E48B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E48B4:
    ctx->pc = 0x7F0E48B4u;
    // 7F0E48B4: b       0x7F0E48BC
    {
            goto label_7F0E48BC;
    }

label_7F0E48B8:
    ctx->pc = 0x7F0E48B8u;
    ctx->downcount -= 1;
    // 7F0E48B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E48BC:
    ctx->pc = 0x7F0E48BCu;
    ctx->downcount -= 16;
    // 7F0E48BC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E48C0:
    ctx->pc = 0x7F0E48C0u;
    // 7F0E48C0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E48C4:
    ctx->pc = 0x7F0E48C4u;
    // 7F0E48C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E48C8:
    ctx->pc = 0x7F0E48C8u;
    // 7F0E48C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E48CC:
    ctx->pc = 0x7F0E48CCu;
    // 7F0E48CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E48D0:
    ctx->pc = 0x7F0E48D0u;
    ctx->downcount -= 10;
    // 7F0E48D0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E48D4:
    ctx->pc = 0x7F0E48D4u;
    // 7F0E48D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E48D8:
    ctx->pc = 0x7F0E48D8u;
    // 7F0E48D8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0E48DC:
    ctx->pc = 0x7F0E48DCu;
    // 7F0E48DC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E48E0:
    ctx->pc = 0x7F0E48E0u;
    // 7F0E48E0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E48E4:
    ctx->pc = 0x7F0E48E4u;
    // 7F0E48E4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E48E8:
    ctx->pc = 0x7F0E48E8u;
    // 7F0E48E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E48EC:
    ctx->pc = 0x7F0E48ECu;
    // 7F0E48EC: addi    r3, r4, -5708
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F0E48F0:
    ctx->pc = 0x7F0E48F0u;
    // 7F0E48F0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E48F4:
    ctx->pc = 0x7F0E48F4u;
    // 7F0E48F4: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0E48F8u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0E48F8:
    ctx->pc = 0x7F0E48F8u;
    ctx->downcount -= 5;
    // 7F0E48F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E48FC:
    ctx->pc = 0x7F0E48FCu;
    // 7F0E48FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4900:
    ctx->pc = 0x7F0E4900u;
    // 7F0E4900: lfs     f0, -2360(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4900u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4904:
    ctx->pc = 0x7F0E4904u;
    // 7F0E4904: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E4908:
    ctx->pc = 0x7F0E4908u;
    // 7F0E4908: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0E490Cu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0E490C:
    ctx->pc = 0x7F0E490Cu;
    ctx->downcount -= 4;
    // 7F0E490C: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0E4910:
    ctx->pc = 0x7F0E4910u;
    // 7F0E4910: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4914:
    ctx->pc = 0x7F0E4914u;
    // 7F0E4914: stw     r0, 3936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3936);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4918:
    ctx->pc = 0x7F0E4918u;
    // 7F0E4918: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0E491Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0E491C:
    ctx->pc = 0x7F0E491Cu;
    ctx->downcount -= 10;
    // 7F0E491C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E491Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E4920:
    ctx->pc = 0x7F0E4920u;
    // 7F0E4920: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4920u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E4924:
    ctx->pc = 0x7F0E4924u;
    // 7F0E4924: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4928:
    ctx->pc = 0x7F0E4928u;
    // 7F0E4928: stw     r0, 3940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3940);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E492C:
    ctx->pc = 0x7F0E492Cu;
    // 7F0E492C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4930:
    ctx->pc = 0x7F0E4930u;
    // 7F0E4930: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4934:
    ctx->pc = 0x7F0E4934u;
    // 7F0E4934: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4938:
    ctx->pc = 0x7F0E4938u;
    // 7F0E4938: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E493C:
    ctx->pc = 0x7F0E493Cu;
    // 7F0E493C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4940:
    ctx->pc = 0x7F0E4940u;
    ctx->downcount -= 6;
    // 7F0E4940: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4944:
    ctx->pc = 0x7F0E4944u;
    // 7F0E4944: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4948:
    ctx->pc = 0x7F0E4948u;
    // 7F0E4948: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E494C:
    ctx->pc = 0x7F0E494Cu;
    // 7F0E494C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E4950:
    ctx->pc = 0x7F0E4950u;
    // 7F0E4950: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4954:
    ctx->pc = 0x7F0E4954u;
    // 7F0E4954: bl      0x7F0E48D0
    {
            ctx->lr = 0x7F0E4958u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E48D0u;
                return;
            }
            goto label_7F0E48D0;
    }

label_7F0E4958:
    ctx->pc = 0x7F0E4958u;
    ctx->downcount -= 2;
    // 7F0E4958: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E495C:
    ctx->pc = 0x7F0E495Cu;
    // 7F0E495C: bl      0x7F0E401C
    {
            ctx->lr = 0x7F0E4960u;
            ctx->pc = 0x7F0E401Cu;
            return;
    }

label_7F0E4960:
    ctx->pc = 0x7F0E4960u;
    ctx->downcount -= 2;
    // 7F0E4960: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4964:
    ctx->pc = 0x7F0E4964u;
    // 7F0E4964: bl      0x7F0E5994
    {
            ctx->lr = 0x7F0E4968u;
            goto label_7F0E5994;
    }

label_7F0E4968:
    ctx->pc = 0x7F0E4968u;
    ctx->downcount -= 5;
    // 7F0E4968: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E496C:
    ctx->pc = 0x7F0E496Cu;
    // 7F0E496C: addi    r5, r31, 448
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0E4970:
    ctx->pc = 0x7F0E4970u;
    // 7F0E4970: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E4974:
    ctx->pc = 0x7F0E4974u;
    // 7F0E4974: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E4978:
    ctx->pc = 0x7F0E4978u;
    // 7F0E4978: bl      0x7F0B1F28
    {
            ctx->lr = 0x7F0E497Cu;
            ctx->pc = 0x7F0B1F28u;
            return;
    }

label_7F0E497C:
    ctx->pc = 0x7F0E497Cu;
    ctx->downcount -= 6;
    // 7F0E497C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4980:
    ctx->pc = 0x7F0E4980u;
    // 7F0E4980: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4984:
    ctx->pc = 0x7F0E4984u;
    // 7F0E4984: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4988:
    ctx->pc = 0x7F0E4988u;
    // 7F0E4988: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E498C:
    ctx->pc = 0x7F0E498Cu;
    // 7F0E498C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4990:
    ctx->pc = 0x7F0E4990u;
    ctx->downcount -= 5;
    // 7F0E4990: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4994:
    ctx->pc = 0x7F0E4994u;
    // 7F0E4994: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4998:
    ctx->pc = 0x7F0E4998u;
    // 7F0E4998: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E499C:
    ctx->pc = 0x7F0E499Cu;
    // 7F0E499C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E49A0:
    ctx->pc = 0x7F0E49A0u;
    // 7F0E49A0: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0E49A4u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0E49A4:
    ctx->pc = 0x7F0E49A4u;
    ctx->downcount -= 3;
    // 7F0E49A4: lha     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E49A8:
    ctx->pc = 0x7F0E49A8u;
    // 7F0E49A8: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E49AC:
    ctx->pc = 0x7F0E49ACu;
    // 7F0E49AC: bc    4, 0, 0x7F0E49B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E49B4;
        }
    }

label_7F0E49B0:
    ctx->pc = 0x7F0E49B0u;
    ctx->downcount -= 1;
    // 7F0E49B0: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F0E49B4:
    ctx->pc = 0x7F0E49B4u;
    ctx->downcount -= 3;
    // 7F0E49B4: lha     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E49B8:
    ctx->pc = 0x7F0E49B8u;
    // 7F0E49B8: extsh. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E49BC:
    ctx->pc = 0x7F0E49BCu;
    // 7F0E49BC: bc    4, 0, 0x7F0E49C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E49C4;
        }
    }

label_7F0E49C0:
    ctx->pc = 0x7F0E49C0u;
    ctx->downcount -= 1;
    // 7F0E49C0: neg  r4, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F0E49C4:
    ctx->pc = 0x7F0E49C4u;
    ctx->downcount -= 3;
    // 7F0E49C4: lha     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E49C8:
    ctx->pc = 0x7F0E49C8u;
    // 7F0E49C8: extsh. r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E49CC:
    ctx->pc = 0x7F0E49CCu;
    // 7F0E49CC: bc    4, 0, 0x7F0E49D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E49D4;
        }
    }

label_7F0E49D0:
    ctx->pc = 0x7F0E49D0u;
    ctx->downcount -= 1;
    // 7F0E49D0: neg  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
    }

label_7F0E49D4:
    ctx->pc = 0x7F0E49D4u;
    ctx->downcount -= 7;
    // 7F0E49D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E49D8:
    ctx->pc = 0x7F0E49D8u;
    // 7F0E49D8: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E49DC:
    ctx->pc = 0x7F0E49DCu;
    // 7F0E49DC: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E49E0:
    ctx->pc = 0x7F0E49E0u;
    // 7F0E49E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E49E4:
    ctx->pc = 0x7F0E49E4u;
    // 7F0E49E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E49E8:
    ctx->pc = 0x7F0E49E8u;
    // 7F0E49E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E49EC:
    ctx->pc = 0x7F0E49ECu;
    ctx->downcount -= 20;
    // 7F0E49EC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E49F0:
    ctx->pc = 0x7F0E49F0u;
    // 7F0E49F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E49F4:
    ctx->pc = 0x7F0E49F4u;
    // 7F0E49F4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0E49F8:
    ctx->pc = 0x7F0E49F8u;
    // 7F0E49F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E49FC:
    ctx->pc = 0x7F0E49FCu;
    // 7F0E49FC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4A00:
    ctx->pc = 0x7F0E4A00u;
    // 7F0E4A00: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4A04:
    ctx->pc = 0x7F0E4A04u;
    // 7F0E4A04: addi    r31, r4, 28408
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(28408);

label_7F0E4A08:
    ctx->pc = 0x7F0E4A08u;
    // 7F0E4A08: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0E4A0C:
    ctx->pc = 0x7F0E4A0Cu;
    // 7F0E4A0C: li      r29, 12
    ctx->gpr[29] = (u32)(s32)(12);

label_7F0E4A10:
    ctx->pc = 0x7F0E4A10u;
    // 7F0E4A10: li      r26, 2304
    ctx->gpr[26] = (u32)(s32)(2304);

label_7F0E4A14:
    ctx->downcount -= 5;
    // 7F0E4A14: addi    r30, r26, 1120
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(1120);

label_7F0E4A18:
    // 7F0E4A18: add   r30, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F0E4A1C:
    ctx->pc = 0x7F0E4A1Cu;
    // 7F0E4A1C: lwz     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4A20:
    // 7F0E4A20: rlwinm. r0, r0, 0, 31, 31
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

label_7F0E4A24:
    // 7F0E4A24: bc    12, 2, 0x7F0E4B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4B54;
        }
    }

label_7F0E4A28:
    ctx->downcount -= 14;
    // 7F0E4A28: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E4A2C:
    ctx->pc = 0x7F0E4A2Cu;
    // 7F0E4A2C: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4A30:
    // 7F0E4A30: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0E4A34:
    ctx->pc = 0x7F0E4A34u;
    // 7F0E4A34: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4A38:
    ctx->pc = 0x7F0E4A38u;
    // 7F0E4A38: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4A3C:
    ctx->pc = 0x7F0E4A3Cu;
    // 7F0E4A3C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4A40:
    ctx->pc = 0x7F0E4A40u;
    // 7F0E4A40: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4A44:
    ctx->pc = 0x7F0E4A44u;
    // 7F0E4A44: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4A48:
    ctx->pc = 0x7F0E4A48u;
    // 7F0E4A48: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4A4C:
    ctx->pc = 0x7F0E4A4Cu;
    // 7F0E4A4C: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4A50:
    ctx->pc = 0x7F0E4A50u;
    // 7F0E4A50: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4A54:
    ctx->pc = 0x7F0E4A54u;
    // 7F0E4A54: lha     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E4A58:
    // 7F0E4A58: cmpwi   r0, 400
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(400);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E4A5C:
    // 7F0E4A5C: bc    4, 0, 0x7F0E4A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4A68;
        }
    }

label_7F0E4A60:
    ctx->downcount -= 2;
    // 7F0E4A60: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E4A64:
    ctx->pc = 0x7F0E4A64u;
    // 7F0E4A64: stw     r0, 4004(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4A68:
    ctx->downcount -= 12;
    // 7F0E4A68: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F0E4A6C:
    ctx->pc = 0x7F0E4A6Cu;
    // 7F0E4A6C: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4A70:
    // 7F0E4A70: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0E4A74:
    ctx->pc = 0x7F0E4A74u;
    // 7F0E4A74: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E4A78:
    // 7F0E4A78: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F0E4A7C:
    // 7F0E4A7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E4A80:
    // 7F0E4A80: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F0E4A84:
    // 7F0E4A84: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0E4A88:
    // 7F0E4A88: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0E4A8C:
    // 7F0E4A8C: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0E4A90:
    // 7F0E4A90: or.   r0, r3, r0
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

label_7F0E4A94:
    // 7F0E4A94: bc    12, 2, 0x7F0E4AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4AE8;
        }
    }

label_7F0E4A98:
    ctx->pc = 0x7F0E4A98u;
    ctx->downcount -= 4;
    // 7F0E4A98: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4A9C:
    ctx->pc = 0x7F0E4A9Cu;
    // 7F0E4A9C: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E4AA0:
    // 7F0E4AA0: cmpwi   r0, 0
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

label_7F0E4AA4:
    // 7F0E4AA4: bc    4, 1, 0x7F0E4AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4AB8;
        }
    }

label_7F0E4AA8:
    ctx->downcount -= 2;
    // 7F0E4AA8: cmpwi   r29, 3
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

label_7F0E4AAC:
    // 7F0E4AAC: bc    12, 2, 0x7F0E4AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4AB8;
        }
    }

label_7F0E4AB0:
    ctx->downcount -= 2;
    // 7F0E4AB0: cmpwi   r29, 2
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

label_7F0E4AB4:
    // 7F0E4AB4: bc    4, 2, 0x7F0E4AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4AD8;
        }
    }

label_7F0E4AB8:
    ctx->downcount -= 7;
    // 7F0E4AB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E4ABC:
    // 7F0E4ABC: lis     r3, 32526
    ctx->gpr[3] = ((u32)(s32)(32526) << 16);

label_7F0E4AC0:
    ctx->pc = 0x7F0E4AC0u;
    // 7F0E4AC0: sth     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4AC4:
    // 7F0E4AC4: addi    r4, r3, 21092
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(21092);

label_7F0E4AC8:
    // 7F0E4AC8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E4ACC:
    ctx->pc = 0x7F0E4ACCu;
    // 7F0E4ACC: stw     r0, 3892(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4AD0:
    // 7F0E4AD0: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4AD4u;
            goto label_7F0E5A68;
    }

label_7F0E4AD4:
    ctx->downcount -= 1;
    // 7F0E4AD4: b       0x7F0E4AE8
    {
            goto label_7F0E4AE8;
    }

label_7F0E4AD8:
    ctx->downcount -= 4;
    // 7F0E4AD8: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4ADC:
    // 7F0E4ADC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E4AE0:
    // 7F0E4AE0: addi    r4, r4, 20836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20836);

label_7F0E4AE4:
    // 7F0E4AE4: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4AE8u;
            goto label_7F0E5A68;
    }

label_7F0E4AE8:
    ctx->downcount -= 11;
    // 7F0E4AE8: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F0E4AEC:
    ctx->pc = 0x7F0E4AECu;
    // 7F0E4AEC: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4AF0:
    ctx->pc = 0x7F0E4AF0u;
    // 7F0E4AF0: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E4AF4:
    // 7F0E4AF4: addi    r0, r3, 992
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(992);

label_7F0E4AF8:
    // 7F0E4AF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E4AFC:
    // 7F0E4AFC: and   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F0E4B00:
    // 7F0E4B00: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0E4B04:
    // 7F0E4B04: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0E4B08:
    // 7F0E4B08: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0E4B0C:
    // 7F0E4B0C: or.   r0, r3, r0
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

label_7F0E4B10:
    // 7F0E4B10: bc    12, 2, 0x7F0E4B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4B44;
        }
    }

label_7F0E4B14:
    ctx->pc = 0x7F0E4B14u;
    ctx->downcount -= 2;
    // 7F0E4B14: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4B18:
    // 7F0E4B18: bl      0x7F0E4990
    {
            ctx->lr = 0x7F0E4B1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4990u;
                return;
            }
            goto label_7F0E4990;
    }

label_7F0E4B1C:
    ctx->downcount -= 7;
    // 7F0E4B1C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E4B20:
    // 7F0E4B20: lis     r3, 32526
    ctx->gpr[3] = ((u32)(s32)(32526) << 16);

label_7F0E4B24:
    ctx->pc = 0x7F0E4B24u;
    // 7F0E4B24: stw     r0, 3776(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4B28:
    // 7F0E4B28: addi    r4, r3, 21092
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(21092);

label_7F0E4B2C:
    // 7F0E4B2C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E4B30:
    ctx->pc = 0x7F0E4B30u;
    // 7F0E4B30: stw     r0, 3892(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4B34:
    // 7F0E4B34: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4B38u;
            goto label_7F0E5A68;
    }

label_7F0E4B38:
    ctx->pc = 0x7F0E4B38u;
    ctx->downcount -= 3;
    // 7F0E4B38: lwz     r3, 1284(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4B3C:
    // 7F0E4B3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E4B40:
    ctx->pc = 0x7F0E4B40u;
    // 7F0E4B40: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4B44:
    ctx->downcount -= 4;
    // 7F0E4B44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E4B48:
    // 7F0E4B48: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F0E4B4C:
    ctx->pc = 0x7F0E4B4Cu;
    // 7F0E4B4C: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4B50:
    ctx->pc = 0x7F0E4B50u;
    // 7F0E4B50: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4B54:
    ctx->downcount -= 3;
    // 7F0E4B54: addic.  r29, r29, -1
    {
        u64 a = ctx->gpr[29];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E4B58:
    // 7F0E4B58: addi    r26, r26, -192
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-192);

label_7F0E4B5C:
    // 7F0E4B5C: bc    4, 0, 0x7F0E4A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4A14u;
                return;
            }
            goto label_7F0E4A14;
        }
    }

label_7F0E4B60:
    ctx->pc = 0x7F0E4B60u;
    ctx->downcount -= 2;
    // 7F0E4B60: cmpwi   r28, 1
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

label_7F0E4B64:
    ctx->pc = 0x7F0E4B64u;
    // 7F0E4B64: bc    4, 2, 0x7F0E4BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4BCC;
        }
    }

label_7F0E4B68:
    ctx->pc = 0x7F0E4B68u;
    ctx->downcount -= 4;
    // 7F0E4B68: lwz     r3, 4012(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4012);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4B6C:
    ctx->pc = 0x7F0E4B6Cu;
    // 7F0E4B6C: addis   r0, r3, -239
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-239) << 16);

label_7F0E4B70:
    ctx->pc = 0x7F0E4B70u;
    // 7F0E4B70: cmplwi  r0, 0xB9DD
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xB9DDu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E4B74:
    ctx->pc = 0x7F0E4B74u;
    // 7F0E4B74: bc    4, 2, 0x7F0E4B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4B98;
        }
    }

label_7F0E4B78:
    ctx->pc = 0x7F0E4B78u;
    ctx->downcount -= 4;
    // 7F0E4B78: lwz     r3, 1284(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4B7C:
    ctx->pc = 0x7F0E4B7Cu;
    // 7F0E4B7C: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E4B80:
    ctx->pc = 0x7F0E4B80u;
    // 7F0E4B80: cmpwi   r0, 10
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

label_7F0E4B84:
    ctx->pc = 0x7F0E4B84u;
    // 7F0E4B84: bc    12, 0, 0x7F0E4B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4B98;
        }
    }

label_7F0E4B88:
    ctx->pc = 0x7F0E4B88u;
    ctx->downcount -= 3;
    // 7F0E4B88: addi    r3, r27, 3824
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(3824);

label_7F0E4B8C:
    ctx->pc = 0x7F0E4B8Cu;
    // 7F0E4B8C: addi    r4, r27, 3796
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(3796);

label_7F0E4B90:
    ctx->pc = 0x7F0E4B90u;
    // 7F0E4B90: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0E4B94u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0E4B94:
    ctx->pc = 0x7F0E4B94u;
    ctx->downcount -= 1;
    // 7F0E4B94: b       0x7F0E4BBC
    {
            goto label_7F0E4BBC;
    }

label_7F0E4B98:
    ctx->pc = 0x7F0E4B98u;
    ctx->downcount -= 1;
    // 7F0E4B98: bl      0x800147F8
    {
            ctx->lr = 0x7F0E4B9Cu;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0E4B9C:
    ctx->pc = 0x7F0E4B9Cu;
    ctx->downcount -= 12;
    // 7F0E4B9C: lwz     r0, 3804(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3804);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4BA0:
    ctx->pc = 0x7F0E4BA0u;
    // 7F0E4BA0: addi    r4, r27, 3796
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(3796);

label_7F0E4BA4:
    ctx->pc = 0x7F0E4BA4u;
    // 7F0E4BA4: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E4BA8:
    ctx->pc = 0x7F0E4BA8u;
    // 7F0E4BA8: srawi r0, r0, 15
    {
        u32 sh = 15u;
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

label_7F0E4BAC:
    ctx->pc = 0x7F0E4BACu;
    // 7F0E4BAC: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F0E4BB0:
    ctx->pc = 0x7F0E4BB0u;
    // 7F0E4BB0: addi    r0, r3, 3808
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3808);

label_7F0E4BB4:
    ctx->pc = 0x7F0E4BB4u;
    // 7F0E4BB4: add   r3, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E4BB8:
    ctx->pc = 0x7F0E4BB8u;
    // 7F0E4BB8: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0E4BBCu;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0E4BBC:
    ctx->pc = 0x7F0E4BBCu;
    ctx->downcount -= 4;
    // 7F0E4BBC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0E4BC0:
    ctx->pc = 0x7F0E4BC0u;
    // 7F0E4BC0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E4BC4:
    ctx->pc = 0x7F0E4BC4u;
    // 7F0E4BC4: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0E4BC8:
    ctx->pc = 0x7F0E4BC8u;
    // 7F0E4BC8: stw     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4BCC:
    ctx->pc = 0x7F0E4BCCu;
    ctx->downcount -= 17;
    // 7F0E4BCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E4BD0:
    ctx->pc = 0x7F0E4BD0u;
    // 7F0E4BD0: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E4BD4:
    ctx->pc = 0x7F0E4BD4u;
    // 7F0E4BD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4BD8:
    ctx->pc = 0x7F0E4BD8u;
    // 7F0E4BD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4BDC:
    ctx->pc = 0x7F0E4BDCu;
    // 7F0E4BDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E4BE0:
    ctx->pc = 0x7F0E4BE0u;
    // 7F0E4BE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4BE4:
    ctx->pc = 0x7F0E4BE4u;
    ctx->downcount -= 4;
    // 7F0E4BE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4BE8:
    ctx->pc = 0x7F0E4BE8u;
    // 7F0E4BE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4BEC:
    ctx->pc = 0x7F0E4BECu;
    // 7F0E4BEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4BF0:
    ctx->pc = 0x7F0E4BF0u;
    // 7F0E4BF0: bl      0x7F0E49EC
    {
            ctx->lr = 0x7F0E4BF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E49ECu;
                return;
            }
            goto label_7F0E49EC;
    }

label_7F0E4BF4:
    ctx->pc = 0x7F0E4BF4u;
    ctx->downcount -= 7;
    // 7F0E4BF4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0E4BF8:
    ctx->pc = 0x7F0E4BF8u;
    // 7F0E4BF8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0E4BFC:
    ctx->pc = 0x7F0E4BFCu;
    // 7F0E4BFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4C00:
    ctx->pc = 0x7F0E4C00u;
    // 7F0E4C00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4C04:
    ctx->pc = 0x7F0E4C04u;
    // 7F0E4C04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4C08:
    ctx->pc = 0x7F0E4C08u;
    // 7F0E4C08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4C0C:
    ctx->pc = 0x7F0E4C0Cu;
    ctx->downcount -= 6;
    // 7F0E4C0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4C10:
    ctx->pc = 0x7F0E4C10u;
    // 7F0E4C10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4C14:
    ctx->pc = 0x7F0E4C14u;
    // 7F0E4C14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4C18:
    ctx->pc = 0x7F0E4C18u;
    // 7F0E4C18: lwz     r4, 3900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3900);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4C1C:
    ctx->pc = 0x7F0E4C1Cu;
    // 7F0E4C1C: rlwinm. r0, r4, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E4C20:
    ctx->pc = 0x7F0E4C20u;
    // 7F0E4C20: bc    12, 2, 0x7F0E4C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4C38;
        }
    }

label_7F0E4C24:
    ctx->pc = 0x7F0E4C24u;
    ctx->downcount -= 3;
    // 7F0E4C24: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4C28:
    ctx->pc = 0x7F0E4C28u;
    // 7F0E4C28: addi    r4, r4, 20356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20356);

label_7F0E4C2C:
    ctx->pc = 0x7F0E4C2Cu;
    // 7F0E4C2C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4C30u;
            goto label_7F0E5A68;
    }

label_7F0E4C30:
    ctx->pc = 0x7F0E4C30u;
    ctx->downcount -= 2;
    // 7F0E4C30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E4C34:
    ctx->pc = 0x7F0E4C34u;
    // 7F0E4C34: b       0x7F0E4C74
    {
            goto label_7F0E4C74;
    }

label_7F0E4C38:
    ctx->pc = 0x7F0E4C38u;
    ctx->downcount -= 2;
    // 7F0E4C38: rlwinm. r0, r4, 0, 31, 31
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

label_7F0E4C3C:
    ctx->pc = 0x7F0E4C3Cu;
    // 7F0E4C3C: bc    12, 2, 0x7F0E4C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4C54;
        }
    }

label_7F0E4C40:
    ctx->pc = 0x7F0E4C40u;
    ctx->downcount -= 3;
    // 7F0E4C40: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4C44:
    ctx->pc = 0x7F0E4C44u;
    // 7F0E4C44: addi    r4, r4, 20504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20504);

label_7F0E4C48:
    ctx->pc = 0x7F0E4C48u;
    // 7F0E4C48: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4C4Cu;
            goto label_7F0E5A68;
    }

label_7F0E4C4C:
    ctx->pc = 0x7F0E4C4Cu;
    ctx->downcount -= 2;
    // 7F0E4C4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E4C50:
    ctx->pc = 0x7F0E4C50u;
    // 7F0E4C50: b       0x7F0E4C74
    {
            goto label_7F0E4C74;
    }

label_7F0E4C54:
    ctx->pc = 0x7F0E4C54u;
    ctx->downcount -= 2;
    // 7F0E4C54: rlwinm. r0, r4, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E4C58:
    ctx->pc = 0x7F0E4C58u;
    // 7F0E4C58: bc    12, 2, 0x7F0E4C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4C70;
        }
    }

label_7F0E4C5C:
    ctx->pc = 0x7F0E4C5Cu;
    ctx->downcount -= 3;
    // 7F0E4C5C: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4C60:
    ctx->pc = 0x7F0E4C60u;
    // 7F0E4C60: addi    r4, r4, 20188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20188);

label_7F0E4C64:
    ctx->pc = 0x7F0E4C64u;
    // 7F0E4C64: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4C68u;
            goto label_7F0E5A68;
    }

label_7F0E4C68:
    ctx->pc = 0x7F0E4C68u;
    ctx->downcount -= 2;
    // 7F0E4C68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E4C6C:
    ctx->pc = 0x7F0E4C6Cu;
    // 7F0E4C6C: b       0x7F0E4C74
    {
            goto label_7F0E4C74;
    }

label_7F0E4C70:
    ctx->pc = 0x7F0E4C70u;
    ctx->downcount -= 1;
    // 7F0E4C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E4C74:
    ctx->pc = 0x7F0E4C74u;
    ctx->downcount -= 5;
    // 7F0E4C74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4C78:
    ctx->pc = 0x7F0E4C78u;
    // 7F0E4C78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4C7C:
    ctx->pc = 0x7F0E4C7Cu;
    // 7F0E4C7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4C80:
    ctx->pc = 0x7F0E4C80u;
    // 7F0E4C80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4C84:
    ctx->pc = 0x7F0E4C84u;
    ctx->downcount -= 18;
    // 7F0E4C84: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4C88:
    ctx->pc = 0x7F0E4C88u;
    // 7F0E4C88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4C8C:
    ctx->pc = 0x7F0E4C8Cu;
    // 7F0E4C8C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0E4C90:
    ctx->pc = 0x7F0E4C90u;
    // 7F0E4C90: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4C94:
    ctx->pc = 0x7F0E4C94u;
    // 7F0E4C94: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F0E4C98:
    ctx->pc = 0x7F0E4C98u;
    // 7F0E4C98: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E4C9C:
    ctx->pc = 0x7F0E4C9Cu;
    // 7F0E4C9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4CA0:
    ctx->pc = 0x7F0E4CA0u;
    // 7F0E4CA0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4CA4:
    ctx->pc = 0x7F0E4CA4u;
    // 7F0E4CA4: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4CA8:
    ctx->pc = 0x7F0E4CA8u;
    // 7F0E4CA8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4CAC:
    ctx->pc = 0x7F0E4CACu;
    // 7F0E4CAC: lfs     f0, 2440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4CACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E4CB0:
    ctx->pc = 0x7F0E4CB0u;
    // 7F0E4CB0: lfs     f1, 2440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4CB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E4CB4:
    ctx->pc = 0x7F0E4CB4u;
    // 7F0E4CB4: lwz     r3, 3940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3940);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4CB8:
    ctx->pc = 0x7F0E4CB8u;
    // 7F0E4CB8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E4CB8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E4CBC:
    ctx->pc = 0x7F0E4CBCu;
    // 7F0E4CBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E4CBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E4CC0:
    ctx->pc = 0x7F0E4CC0u;
    // 7F0E4CC0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E4CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E4CC4:
    ctx->pc = 0x7F0E4CC4u;
    // 7F0E4CC4: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E4CC8:
    ctx->pc = 0x7F0E4CC8u;
    // 7F0E4CC8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0E4CCCu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0E4CCC:
    ctx->pc = 0x7F0E4CCCu;
    ctx->downcount -= 5;
    // 7F0E4CCC: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0E4CD0:
    ctx->pc = 0x7F0E4CD0u;
    // 7F0E4CD0: addic.  r0, r3, -1024
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1024);
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

label_7F0E4CD4:
    ctx->pc = 0x7F0E4CD4u;
    // 7F0E4CD4: sth     r0, 822(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(822);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4CD8:
    ctx->pc = 0x7F0E4CD8u;
    // 7F0E4CD8: sth     r0, 854(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(854);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4CDC:
    ctx->pc = 0x7F0E4CDCu;
    // 7F0E4CDC: bc    4, 0, 0x7F0E4CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4CEC;
        }
    }

label_7F0E4CE0:
    ctx->pc = 0x7F0E4CE0u;
    ctx->downcount -= 5;
    // 7F0E4CE0: mulli   r0, r0, 3
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)3);

label_7F0E4CE4:
    ctx->pc = 0x7F0E4CE4u;
    // 7F0E4CE4: sth     r0, 862(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(862);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4CE8:
    ctx->pc = 0x7F0E4CE8u;
    // 7F0E4CE8: b       0x7F0E4CFC
    {
            goto label_7F0E4CFC;
    }

label_7F0E4CEC:
    ctx->pc = 0x7F0E4CECu;
    ctx->downcount -= 6;
    // 7F0E4CEC: mulli   r0, r0, 3
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)3);

label_7F0E4CF0:
    ctx->pc = 0x7F0E4CF0u;
    // 7F0E4CF0: srawi r0, r0, 1
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

label_7F0E4CF4:
    ctx->pc = 0x7F0E4CF4u;
    // 7F0E4CF4: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0E4CF8:
    ctx->pc = 0x7F0E4CF8u;
    // 7F0E4CF8: sth     r0, 862(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(862);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4CFC:
    ctx->pc = 0x7F0E4CFCu;
    ctx->downcount -= 6;
    // 7F0E4CFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4D00:
    ctx->pc = 0x7F0E4D00u;
    // 7F0E4D00: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4D04:
    ctx->pc = 0x7F0E4D04u;
    // 7F0E4D04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4D08:
    ctx->pc = 0x7F0E4D08u;
    // 7F0E4D08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E4D0C:
    ctx->pc = 0x7F0E4D0Cu;
    // 7F0E4D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4D10:
    ctx->pc = 0x7F0E4D10u;
    ctx->downcount -= 22;
    // 7F0E4D10: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4D14:
    ctx->pc = 0x7F0E4D14u;
    // 7F0E4D14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4D18:
    ctx->pc = 0x7F0E4D18u;
    // 7F0E4D18: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4D1C:
    ctx->pc = 0x7F0E4D1Cu;
    // 7F0E4D1C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0E4D20:
    ctx->pc = 0x7F0E4D20u;
    // 7F0E4D20: addi    r5, r1, 108
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(108);

label_7F0E4D24:
    ctx->pc = 0x7F0E4D24u;
    // 7F0E4D24: stmw     r30, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4D28:
    ctx->pc = 0x7F0E4D28u;
    // 7F0E4D28: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4D2C:
    ctx->pc = 0x7F0E4D2Cu;
    // 7F0E4D2C: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4D30:
    ctx->pc = 0x7F0E4D30u;
    // 7F0E4D30: addi    r31, r3, 2388
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F0E4D34:
    ctx->pc = 0x7F0E4D34u;
    // 7F0E4D34: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F0E4D38:
    ctx->pc = 0x7F0E4D38u;
    // 7F0E4D38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E4D3C:
    loop_7F0E4D3C(ctx);
    if (ctx->pc == 0x7F0E4D50u) goto label_7F0E4D50;
    return;
label_7F0E4D40:
    ctx->pc = 0x7F0E4D40u;
    // 7F0E4D40: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0E4D44:
    ctx->pc = 0x7F0E4D44u;
    // 7F0E4D44: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E4D48:
    ctx->pc = 0x7F0E4D48u;
    // 7F0E4D48: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0E4D4C:
    // 7F0E4D4C: bc    16, 0, 0x7F0E4D3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4D3Cu;
                return;
            }
            goto label_7F0E4D3C;
        }
    }

label_7F0E4D50:
    ctx->pc = 0x7F0E4D50u;
    ctx->downcount -= 2;
    // 7F0E4D50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4D54:
    ctx->pc = 0x7F0E4D54u;
    // 7F0E4D54: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0E4D58u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0E4D58:
    ctx->pc = 0x7F0E4D58u;
    ctx->downcount -= 5;
    // 7F0E4D58: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E4D5C:
    ctx->pc = 0x7F0E4D5Cu;
    // 7F0E4D5C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E4D60:
    ctx->pc = 0x7F0E4D60u;
    // 7F0E4D60: addi    r3, r3, -25932
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25932);

label_7F0E4D64:
    ctx->pc = 0x7F0E4D64u;
    // 7F0E4D64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E4D68:
    ctx->pc = 0x7F0E4D68u;
    // 7F0E4D68: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E4D6Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E4D6C:
    ctx->pc = 0x7F0E4D6Cu;
    ctx->downcount -= 5;
    // 7F0E4D6C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E4D70:
    ctx->pc = 0x7F0E4D70u;
    // 7F0E4D70: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4D74:
    ctx->pc = 0x7F0E4D74u;
    // 7F0E4D74: addi    r3, r3, -25916
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25916);

label_7F0E4D78:
    ctx->pc = 0x7F0E4D78u;
    // 7F0E4D78: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E4D7C:
    ctx->pc = 0x7F0E4D7Cu;
    // 7F0E4D7C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E4D80u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E4D80:
    ctx->pc = 0x7F0E4D80u;
    ctx->downcount -= 3;
    // 7F0E4D80: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E4D84:
    ctx->pc = 0x7F0E4D84u;
    // 7F0E4D84: addi    r4, r1, 112
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0E4D88:
    ctx->pc = 0x7F0E4D88u;
    // 7F0E4D88: bl      0x7F173EC4
    {
            ctx->lr = 0x7F0E4D8Cu;
            ctx->pc = 0x7F173EC4u;
            return;
    }

label_7F0E4D8C:
    ctx->pc = 0x7F0E4D8Cu;
    ctx->downcount -= 2;
    // 7F0E4D8C: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0E4D90:
    ctx->pc = 0x7F0E4D90u;
    // 7F0E4D90: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0E4D94u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0E4D94:
    ctx->pc = 0x7F0E4D94u;
    ctx->downcount -= 2;
    // 7F0E4D94: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0E4D98:
    ctx->pc = 0x7F0E4D98u;
    // 7F0E4D98: bl      0x7F173B8C
    {
            ctx->lr = 0x7F0E4D9Cu;
            ctx->pc = 0x7F173B8Cu;
            return;
    }

label_7F0E4D9C:
    ctx->pc = 0x7F0E4D9Cu;
    ctx->downcount -= 3;
    // 7F0E4D9C: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0E4DA0:
    ctx->pc = 0x7F0E4DA0u;
    // 7F0E4DA0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F0E4DA4:
    ctx->pc = 0x7F0E4DA4u;
    // 7F0E4DA4: bl      0x7F173B8C
    {
            ctx->lr = 0x7F0E4DA8u;
            ctx->pc = 0x7F173B8Cu;
            return;
    }

label_7F0E4DA8:
    ctx->pc = 0x7F0E4DA8u;
    ctx->downcount -= 3;
    // 7F0E4DA8: sth     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0E4DAC:
    ctx->pc = 0x7F0E4DACu;
    // 7F0E4DAC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F0E4DB0:
    ctx->pc = 0x7F0E4DB0u;
    // 7F0E4DB0: bl      0x7F173B8C
    {
            ctx->lr = 0x7F0E4DB4u;
            ctx->pc = 0x7F173B8Cu;
            return;
    }

label_7F0E4DB4:
    ctx->pc = 0x7F0E4DB4u;
    ctx->downcount -= 3;
    // 7F0E4DB4: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0E4DB8:
    ctx->pc = 0x7F0E4DB8u;
    // 7F0E4DB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E4DBC:
    ctx->pc = 0x7F0E4DBCu;
    // 7F0E4DBC: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F0E4DC0u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F0E4DC0:
    ctx->pc = 0x7F0E4DC0u;
    ctx->downcount -= 2;
    // 7F0E4DC0: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0E4DC4:
    ctx->pc = 0x7F0E4DC4u;
    // 7F0E4DC4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F0E4DC8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F0E4DC8:
    ctx->pc = 0x7F0E4DC8u;
    ctx->downcount -= 9;
    // 7F0E4DC8: lwz     r7, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0E4DCC:
    ctx->pc = 0x7F0E4DCCu;
    // 7F0E4DCC: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0E4DD0:
    ctx->pc = 0x7F0E4DD0u;
    // 7F0E4DD0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0E4DD4:
    ctx->pc = 0x7F0E4DD4u;
    // 7F0E4DD4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E4DD8:
    ctx->pc = 0x7F0E4DD8u;
    // 7F0E4DD8: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F0E4DDC:
    ctx->pc = 0x7F0E4DDCu;
    // 7F0E4DDC: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F0E4DE0:
    ctx->pc = 0x7F0E4DE0u;
    // 7F0E4DE0: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F0E4DE4:
    ctx->pc = 0x7F0E4DE4u;
    // 7F0E4DE4: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_7F0E4DE8:
    ctx->pc = 0x7F0E4DE8u;
    // 7F0E4DE8: bl      0x7F27727C
    {
            ctx->lr = 0x7F0E4DECu;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F0E4DEC:
    ctx->pc = 0x7F0E4DECu;
    ctx->downcount -= 4;
    // 7F0E4DEC: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0E4DF0:
    ctx->pc = 0x7F0E4DF0u;
    // 7F0E4DF0: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_7F0E4DF4:
    ctx->pc = 0x7F0E4DF4u;
    // 7F0E4DF4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E4DF8:
    ctx->pc = 0x7F0E4DF8u;
    // 7F0E4DF8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0E4DFCu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0E4DFC:
    ctx->pc = 0x7F0E4DFCu;
    ctx->downcount -= 4;
    // 7F0E4DFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4E00:
    ctx->pc = 0x7F0E4E00u;
    // 7F0E4E00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E4E04:
    ctx->pc = 0x7F0E4E04u;
    // 7F0E4E04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E4E08:
    ctx->pc = 0x7F0E4E08u;
    // 7F0E4E08: bl      0x7F2615E8
    {
            ctx->lr = 0x7F0E4E0Cu;
            ctx->pc = 0x7F2615E8u;
            return;
    }

label_7F0E4E0C:
    ctx->pc = 0x7F0E4E0Cu;
    ctx->downcount -= 2;
    // 7F0E4E0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4E10:
    ctx->pc = 0x7F0E4E10u;
    // 7F0E4E10: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0E4E14u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0E4E14:
    ctx->pc = 0x7F0E4E14u;
    ctx->downcount -= 2;
    // 7F0E4E14: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E4E18:
    ctx->pc = 0x7F0E4E18u;
    // 7F0E4E18: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F0E4E1Cu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F0E4E1C:
    ctx->pc = 0x7F0E4E1Cu;
    ctx->downcount -= 5;
    // 7F0E4E1C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E4E20:
    ctx->pc = 0x7F0E4E20u;
    // 7F0E4E20: addi    r4, r1, 96
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(96);

label_7F0E4E24:
    ctx->pc = 0x7F0E4E24u;
    // 7F0E4E24: addi    r3, r3, -25900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25900);

label_7F0E4E28:
    ctx->pc = 0x7F0E4E28u;
    // 7F0E4E28: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E4E2C:
    ctx->pc = 0x7F0E4E2Cu;
    // 7F0E4E2C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E4E30u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E4E30:
    ctx->pc = 0x7F0E4E30u;
    ctx->downcount -= 52;
    // 7F0E4E30: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F0E4E34:
    ctx->pc = 0x7F0E4E34u;
    // 7F0E4E34: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F0E4E38:
    ctx->pc = 0x7F0E4E38u;
    // 7F0E4E38: addi    r5, r3, 32304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F0E4E3C:
    ctx->pc = 0x7F0E4E3Cu;
    // 7F0E4E3C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E4E40:
    ctx->pc = 0x7F0E4E40u;
    // 7F0E4E40: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E4E44:
    ctx->pc = 0x7F0E4E44u;
    // 7F0E4E44: divw   r0, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0E4E48:
    ctx->pc = 0x7F0E4E48u;
    // 7F0E4E48: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E4E4C:
    ctx->pc = 0x7F0E4E4Cu;
    // 7F0E4E4C: subf   r4, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F0E4E50:
    ctx->pc = 0x7F0E4E50u;
    // 7F0E4E50: bl      0x7F26E954
    {
            ctx->lr = 0x7F0E4E54u;
            ctx->pc = 0x7F26E954u;
            return;
    }

label_7F0E4E54:
    ctx->pc = 0x7F0E4E54u;
    ctx->downcount -= 16;
    // 7F0E4E54: lmw     r30, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E4E58:
    ctx->pc = 0x7F0E4E58u;
    // 7F0E4E58: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4E5C:
    ctx->pc = 0x7F0E4E5Cu;
    // 7F0E4E5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4E60:
    ctx->pc = 0x7F0E4E60u;
    // 7F0E4E60: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F0E4E64:
    ctx->pc = 0x7F0E4E64u;
    // 7F0E4E64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4E68:
    ctx->pc = 0x7F0E4E68u;
    ctx->downcount -= 7;
    // 7F0E4E68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4E6C:
    ctx->pc = 0x7F0E4E6Cu;
    // 7F0E4E6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4E70:
    ctx->pc = 0x7F0E4E70u;
    // 7F0E4E70: cmpwi   r4, 0
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

label_7F0E4E74:
    ctx->pc = 0x7F0E4E74u;
    // 7F0E4E74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4E78:
    ctx->pc = 0x7F0E4E78u;
    // 7F0E4E78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E4E7C:
    ctx->pc = 0x7F0E4E7Cu;
    // 7F0E4E7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4E80:
    ctx->pc = 0x7F0E4E80u;
    // 7F0E4E80: bc    4, 2, 0x7F0E4E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4E90;
        }
    }

label_7F0E4E84:
    ctx->pc = 0x7F0E4E84u;
    ctx->downcount -= 3;
    // 7F0E4E84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E4E88:
    ctx->pc = 0x7F0E4E88u;
    // 7F0E4E88: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E4E8C:
    ctx->pc = 0x7F0E4E8Cu;
    // 7F0E4E8C: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E4E90u;
            goto label_7F0E5A80;
    }

label_7F0E4E90:
    ctx->pc = 0x7F0E4E90u;
    ctx->downcount -= 2;
    // 7F0E4E90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4E94:
    ctx->pc = 0x7F0E4E94u;
    // 7F0E4E94: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E4E98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E4E98:
    ctx->pc = 0x7F0E4E98u;
    ctx->downcount -= 2;
    // 7F0E4E98: cmpwi   r3, 0
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

label_7F0E4E9C:
    ctx->pc = 0x7F0E4E9Cu;
    // 7F0E4E9C: bc    4, 2, 0x7F0E4EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4EC8;
        }
    }

label_7F0E4EA0:
    ctx->pc = 0x7F0E4EA0u;
    ctx->downcount -= 2;
    // 7F0E4EA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4EA4:
    ctx->pc = 0x7F0E4EA4u;
    // 7F0E4EA4: bl      0x7F0E4C0C
    {
            ctx->lr = 0x7F0E4EA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4C0Cu;
                return;
            }
            goto label_7F0E4C0C;
    }

label_7F0E4EA8:
    ctx->pc = 0x7F0E4EA8u;
    ctx->downcount -= 2;
    // 7F0E4EA8: cmpwi   r3, 0
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

label_7F0E4EAC:
    ctx->pc = 0x7F0E4EACu;
    // 7F0E4EAC: bc    4, 2, 0x7F0E4EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4EC8;
        }
    }

label_7F0E4EB0:
    ctx->pc = 0x7F0E4EB0u;
    ctx->downcount -= 6;
    // 7F0E4EB0: lwz     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4EB4:
    ctx->pc = 0x7F0E4EB4u;
    // 7F0E4EB4: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E4EB8:
    ctx->pc = 0x7F0E4EB8u;
    // 7F0E4EB8: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E4EBC:
    ctx->pc = 0x7F0E4EBCu;
    // 7F0E4EBC: sth     r0, 90(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4EC0:
    ctx->pc = 0x7F0E4EC0u;
    // 7F0E4EC0: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E4EC4:
    ctx->pc = 0x7F0E4EC4u;
    // 7F0E4EC4: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E4EC8u;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E4EC8:
    ctx->pc = 0x7F0E4EC8u;
    ctx->downcount -= 6;
    // 7F0E4EC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4ECC:
    ctx->pc = 0x7F0E4ECCu;
    // 7F0E4ECC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4ED0:
    ctx->pc = 0x7F0E4ED0u;
    // 7F0E4ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4ED4:
    ctx->pc = 0x7F0E4ED4u;
    // 7F0E4ED4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4ED8:
    ctx->pc = 0x7F0E4ED8u;
    // 7F0E4ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4EDC:
    ctx->pc = 0x7F0E4EDCu;
    ctx->downcount -= 7;
    // 7F0E4EDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4EE0:
    ctx->pc = 0x7F0E4EE0u;
    // 7F0E4EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4EE4:
    ctx->pc = 0x7F0E4EE4u;
    // 7F0E4EE4: cmpwi   r4, 0
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

label_7F0E4EE8:
    ctx->pc = 0x7F0E4EE8u;
    // 7F0E4EE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4EEC:
    ctx->pc = 0x7F0E4EECu;
    // 7F0E4EEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E4EF0:
    ctx->pc = 0x7F0E4EF0u;
    // 7F0E4EF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4EF4:
    ctx->pc = 0x7F0E4EF4u;
    // 7F0E4EF4: bc    4, 2, 0x7F0E4F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4F24;
        }
    }

label_7F0E4EF8:
    ctx->pc = 0x7F0E4EF8u;
    ctx->downcount -= 3;
    // 7F0E4EF8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0E4EFC:
    ctx->pc = 0x7F0E4EFCu;
    // 7F0E4EFC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E4F00:
    ctx->pc = 0x7F0E4F00u;
    // 7F0E4F00: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E4F04u;
            goto label_7F0E5A80;
    }

label_7F0E4F04:
    ctx->pc = 0x7F0E4F04u;
    ctx->downcount -= 4;
    // 7F0E4F04: lis     r4, 8193
    ctx->gpr[4] = ((u32)(s32)(8193) << 16);

label_7F0E4F08:
    ctx->pc = 0x7F0E4F08u;
    // 7F0E4F08: lwz     r3, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4F0C:
    ctx->pc = 0x7F0E4F0Cu;
    // 7F0E4F0C: addi    r4, r4, -32752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32752);

label_7F0E4F10:
    ctx->pc = 0x7F0E4F10u;
    // 7F0E4F10: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0E4F14u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0E4F14:
    ctx->pc = 0x7F0E4F14u;
    ctx->downcount -= 4;
    // 7F0E4F14: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0E4F18:
    ctx->pc = 0x7F0E4F18u;
    // 7F0E4F18: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E4F1C:
    ctx->pc = 0x7F0E4F1Cu;
    // 7F0E4F1C: addi    r3, r3, 28408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0E4F20:
    ctx->pc = 0x7F0E4F20u;
    // 7F0E4F20: stw     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4F24:
    ctx->pc = 0x7F0E4F24u;
    ctx->downcount -= 4;
    // 7F0E4F24: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E4F28:
    ctx->pc = 0x7F0E4F28u;
    // 7F0E4F28: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E4F2C:
    ctx->pc = 0x7F0E4F2Cu;
    // 7F0E4F2C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E4F30:
    ctx->pc = 0x7F0E4F30u;
    // 7F0E4F30: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E4F34u;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E4F34:
    ctx->pc = 0x7F0E4F34u;
    ctx->downcount -= 2;
    // 7F0E4F34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4F38:
    ctx->pc = 0x7F0E4F38u;
    // 7F0E4F38: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E4F3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E4F3C:
    ctx->pc = 0x7F0E4F3Cu;
    ctx->downcount -= 2;
    // 7F0E4F3C: cmpwi   r3, 0
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

label_7F0E4F40:
    ctx->pc = 0x7F0E4F40u;
    // 7F0E4F40: bc    4, 2, 0x7F0E4F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4F70;
        }
    }

label_7F0E4F44:
    ctx->pc = 0x7F0E4F44u;
    ctx->downcount -= 7;
    // 7F0E4F44: lwz     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4F48:
    ctx->pc = 0x7F0E4F48u;
    // 7F0E4F48: sth     r0, 90(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E4F4C:
    ctx->pc = 0x7F0E4F4Cu;
    // 7F0E4F4C: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4F50:
    ctx->pc = 0x7F0E4F50u;
    // 7F0E4F50: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E4F54:
    ctx->pc = 0x7F0E4F54u;
    // 7F0E4F54: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4F58:
    ctx->pc = 0x7F0E4F58u;
    // 7F0E4F58: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E4F5C:
    ctx->pc = 0x7F0E4F5Cu;
    // 7F0E4F5C: bc    12, 2, 0x7F0E4F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4F70;
        }
    }

label_7F0E4F60:
    ctx->pc = 0x7F0E4F60u;
    ctx->downcount -= 4;
    // 7F0E4F60: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4F64:
    ctx->pc = 0x7F0E4F64u;
    // 7F0E4F64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E4F68:
    ctx->pc = 0x7F0E4F68u;
    // 7F0E4F68: addi    r4, r4, 20072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20072);

label_7F0E4F6C:
    ctx->pc = 0x7F0E4F6Cu;
    // 7F0E4F6C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4F70u;
            goto label_7F0E5A68;
    }

label_7F0E4F70:
    ctx->pc = 0x7F0E4F70u;
    ctx->downcount -= 6;
    // 7F0E4F70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4F74:
    ctx->pc = 0x7F0E4F74u;
    // 7F0E4F74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4F78:
    ctx->pc = 0x7F0E4F78u;
    // 7F0E4F78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E4F7C:
    ctx->pc = 0x7F0E4F7Cu;
    // 7F0E4F7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E4F80:
    ctx->pc = 0x7F0E4F80u;
    // 7F0E4F80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E4F84:
    ctx->pc = 0x7F0E4F84u;
    ctx->downcount -= 18;
    // 7F0E4F84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E4F88:
    ctx->pc = 0x7F0E4F88u;
    // 7F0E4F88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E4F8C:
    ctx->pc = 0x7F0E4F8Cu;
    // 7F0E4F8C: cmpwi   r4, 0
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

label_7F0E4F90:
    ctx->pc = 0x7F0E4F90u;
    // 7F0E4F90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E4F94:
    ctx->pc = 0x7F0E4F94u;
    // 7F0E4F94: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E4F98:
    ctx->pc = 0x7F0E4F98u;
    // 7F0E4F98: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E4F9C:
    ctx->pc = 0x7F0E4F9Cu;
    // 7F0E4F9C: lwz     r31, 3904(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3904);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E4FA0:
    ctx->pc = 0x7F0E4FA0u;
    // 7F0E4FA0: bc    4, 2, 0x7F0E4FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E4FB0;
        }
    }

label_7F0E4FA4:
    ctx->pc = 0x7F0E4FA4u;
    ctx->downcount -= 3;
    // 7F0E4FA4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0E4FA8:
    ctx->pc = 0x7F0E4FA8u;
    // 7F0E4FA8: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E4FAC:
    ctx->pc = 0x7F0E4FACu;
    // 7F0E4FAC: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E4FB0u;
            goto label_7F0E5A80;
    }

label_7F0E4FB0:
    ctx->pc = 0x7F0E4FB0u;
    ctx->downcount -= 4;
    // 7F0E4FB0: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E4FB4:
    ctx->pc = 0x7F0E4FB4u;
    // 7F0E4FB4: addi    r3, r30, 1120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E4FB8:
    ctx->pc = 0x7F0E4FB8u;
    // 7F0E4FB8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E4FBC:
    ctx->pc = 0x7F0E4FBCu;
    // 7F0E4FBC: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E4FC0u;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E4FC0:
    ctx->pc = 0x7F0E4FC0u;
    ctx->downcount -= 2;
    // 7F0E4FC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4FC4:
    ctx->pc = 0x7F0E4FC4u;
    // 7F0E4FC4: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E4FC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E4FC8:
    ctx->pc = 0x7F0E4FC8u;
    ctx->downcount -= 2;
    // 7F0E4FC8: cmpwi   r3, 0
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

label_7F0E4FCC:
    ctx->pc = 0x7F0E4FCCu;
    // 7F0E4FCC: bc    4, 2, 0x7F0E5004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5004;
        }
    }

label_7F0E4FD0:
    ctx->pc = 0x7F0E4FD0u;
    ctx->downcount -= 3;
    // 7F0E4FD0: lwz     r0, 3900(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3900);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E4FD4:
    ctx->pc = 0x7F0E4FD4u;
    // 7F0E4FD4: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E4FD8:
    ctx->pc = 0x7F0E4FD8u;
    // 7F0E4FD8: bc    4, 2, 0x7F0E5000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5000;
        }
    }

label_7F0E4FDC:
    ctx->pc = 0x7F0E4FDCu;
    ctx->downcount -= 2;
    // 7F0E4FDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4FE0:
    ctx->pc = 0x7F0E4FE0u;
    // 7F0E4FE0: bl      0x7F0E4C0C
    {
            ctx->lr = 0x7F0E4FE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4C0Cu;
                return;
            }
            goto label_7F0E4C0C;
    }

label_7F0E4FE4:
    ctx->pc = 0x7F0E4FE4u;
    ctx->downcount -= 2;
    // 7F0E4FE4: cmpwi   r3, 0
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

label_7F0E4FE8:
    ctx->pc = 0x7F0E4FE8u;
    // 7F0E4FE8: bc    4, 2, 0x7F0E5004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5004;
        }
    }

label_7F0E4FEC:
    ctx->pc = 0x7F0E4FECu;
    ctx->downcount -= 4;
    // 7F0E4FEC: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E4FF0:
    ctx->pc = 0x7F0E4FF0u;
    // 7F0E4FF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E4FF4:
    ctx->pc = 0x7F0E4FF4u;
    // 7F0E4FF4: addi    r4, r4, 20072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20072);

label_7F0E4FF8:
    ctx->pc = 0x7F0E4FF8u;
    // 7F0E4FF8: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E4FFCu;
            goto label_7F0E5A68;
    }

label_7F0E4FFC:
    ctx->pc = 0x7F0E4FFCu;
    ctx->downcount -= 1;
    // 7F0E4FFC: b       0x7F0E5004
    {
            goto label_7F0E5004;
    }

label_7F0E5000:
    ctx->pc = 0x7F0E5000u;
    ctx->downcount -= 1;
    // 7F0E5000: sth     r31, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F0E5004:
    ctx->pc = 0x7F0E5004u;
    ctx->downcount -= 16;
    // 7F0E5004: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5008:
    ctx->pc = 0x7F0E5008u;
    // 7F0E5008: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E500C:
    ctx->pc = 0x7F0E500Cu;
    // 7F0E500C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5010:
    ctx->pc = 0x7F0E5010u;
    // 7F0E5010: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5014:
    ctx->pc = 0x7F0E5014u;
    // 7F0E5014: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5018:
    ctx->pc = 0x7F0E5018u;
    ctx->downcount -= 18;
    // 7F0E5018: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E501C:
    ctx->pc = 0x7F0E501Cu;
    // 7F0E501C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5020:
    ctx->pc = 0x7F0E5020u;
    // 7F0E5020: cmpwi   r4, 0
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

label_7F0E5024:
    ctx->pc = 0x7F0E5024u;
    // 7F0E5024: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5028:
    ctx->pc = 0x7F0E5028u;
    // 7F0E5028: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E502C:
    ctx->pc = 0x7F0E502Cu;
    // 7F0E502C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5030:
    ctx->pc = 0x7F0E5030u;
    // 7F0E5030: lwz     r31, 3900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3900);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E5034:
    ctx->pc = 0x7F0E5034u;
    // 7F0E5034: bc    4, 2, 0x7F0E5044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5044;
        }
    }

label_7F0E5038:
    ctx->pc = 0x7F0E5038u;
    ctx->downcount -= 3;
    // 7F0E5038: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0E503C:
    ctx->pc = 0x7F0E503Cu;
    // 7F0E503C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E5040:
    ctx->pc = 0x7F0E5040u;
    // 7F0E5040: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E5044u;
            goto label_7F0E5A80;
    }

label_7F0E5044:
    ctx->pc = 0x7F0E5044u;
    ctx->downcount -= 2;
    // 7F0E5044: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5048:
    ctx->pc = 0x7F0E5048u;
    // 7F0E5048: bl      0x7F0E4C84
    {
            ctx->lr = 0x7F0E504Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4C84u;
                return;
            }
            goto label_7F0E4C84;
    }

label_7F0E504C:
    ctx->pc = 0x7F0E504Cu;
    ctx->downcount -= 4;
    // 7F0E504C: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E5050:
    ctx->pc = 0x7F0E5050u;
    // 7F0E5050: addi    r3, r30, 1120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E5054:
    ctx->pc = 0x7F0E5054u;
    // 7F0E5054: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E5058:
    ctx->pc = 0x7F0E5058u;
    // 7F0E5058: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E505Cu;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E505C:
    ctx->pc = 0x7F0E505Cu;
    ctx->downcount -= 2;
    // 7F0E505C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5060:
    ctx->pc = 0x7F0E5060u;
    // 7F0E5060: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E5064u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E5064:
    ctx->pc = 0x7F0E5064u;
    ctx->downcount -= 2;
    // 7F0E5064: cmpwi   r3, 0
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

label_7F0E5068:
    ctx->pc = 0x7F0E5068u;
    // 7F0E5068: bc    4, 2, 0x7F0E50AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E50AC;
        }
    }

label_7F0E506C:
    ctx->pc = 0x7F0E506Cu;
    ctx->downcount -= 2;
    // 7F0E506C: rlwinm. r0, r31, 0, 31, 31
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

label_7F0E5070:
    ctx->pc = 0x7F0E5070u;
    // 7F0E5070: bc    4, 2, 0x7F0E5088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5088;
        }
    }

label_7F0E5074:
    ctx->pc = 0x7F0E5074u;
    ctx->downcount -= 4;
    // 7F0E5074: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5078:
    ctx->pc = 0x7F0E5078u;
    // 7F0E5078: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E507C:
    ctx->pc = 0x7F0E507Cu;
    // 7F0E507C: addi    r4, r4, 20072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20072);

label_7F0E5080:
    ctx->pc = 0x7F0E5080u;
    // 7F0E5080: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5084u;
            goto label_7F0E5A68;
    }

label_7F0E5084:
    ctx->pc = 0x7F0E5084u;
    ctx->downcount -= 1;
    // 7F0E5084: b       0x7F0E50AC
    {
            goto label_7F0E50AC;
    }

label_7F0E5088:
    ctx->pc = 0x7F0E5088u;
    ctx->downcount -= 2;
    // 7F0E5088: rlwinm. r0, r31, 0, 30, 30
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

label_7F0E508C:
    ctx->pc = 0x7F0E508Cu;
    // 7F0E508C: bc    12, 2, 0x7F0E50A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E50A4;
        }
    }

label_7F0E5090:
    ctx->pc = 0x7F0E5090u;
    ctx->downcount -= 4;
    // 7F0E5090: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5094:
    ctx->pc = 0x7F0E5094u;
    // 7F0E5094: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5098:
    ctx->pc = 0x7F0E5098u;
    // 7F0E5098: addi    r4, r4, 20672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20672);

label_7F0E509C:
    ctx->pc = 0x7F0E509Cu;
    // 7F0E509C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E50A0u;
            goto label_7F0E5A68;
    }

label_7F0E50A0:
    ctx->pc = 0x7F0E50A0u;
    ctx->downcount -= 1;
    // 7F0E50A0: b       0x7F0E50AC
    {
            goto label_7F0E50AC;
    }

label_7F0E50A4:
    ctx->pc = 0x7F0E50A4u;
    ctx->downcount -= 2;
    // 7F0E50A4: lwz     r0, 3936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E50A8:
    ctx->pc = 0x7F0E50A8u;
    // 7F0E50A8: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E50AC:
    ctx->pc = 0x7F0E50ACu;
    ctx->downcount -= 16;
    // 7F0E50AC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E50B0:
    ctx->pc = 0x7F0E50B0u;
    // 7F0E50B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E50B4:
    ctx->pc = 0x7F0E50B4u;
    // 7F0E50B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E50B8:
    ctx->pc = 0x7F0E50B8u;
    // 7F0E50B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E50BC:
    ctx->pc = 0x7F0E50BCu;
    // 7F0E50BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E50C0:
    ctx->pc = 0x7F0E50C0u;
    ctx->downcount -= 17;
    // 7F0E50C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E50C4:
    ctx->pc = 0x7F0E50C4u;
    // 7F0E50C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E50C8:
    ctx->pc = 0x7F0E50C8u;
    // 7F0E50C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E50CC:
    ctx->pc = 0x7F0E50CCu;
    // 7F0E50CC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E50D0:
    ctx->pc = 0x7F0E50D0u;
    // 7F0E50D0: or.   r31, r4, r4
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

label_7F0E50D4:
    ctx->pc = 0x7F0E50D4u;
    // 7F0E50D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E50D8:
    ctx->pc = 0x7F0E50D8u;
    // 7F0E50D8: bc    4, 2, 0x7F0E50E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E50E8;
        }
    }

label_7F0E50DC:
    ctx->pc = 0x7F0E50DCu;
    ctx->downcount -= 3;
    // 7F0E50DC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0E50E0:
    ctx->pc = 0x7F0E50E0u;
    // 7F0E50E0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E50E4:
    ctx->pc = 0x7F0E50E4u;
    // 7F0E50E4: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E50E8u;
            goto label_7F0E5A80;
    }

label_7F0E50E8:
    ctx->pc = 0x7F0E50E8u;
    ctx->downcount -= 2;
    // 7F0E50E8: cmpwi   r31, 10
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E50EC:
    ctx->pc = 0x7F0E50ECu;
    // 7F0E50EC: bc    12, 2, 0x7F0E5100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5100;
        }
    }

label_7F0E50F0:
    ctx->pc = 0x7F0E50F0u;
    ctx->downcount -= 2;
    // 7F0E50F0: cmpwi   r31, 16
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

label_7F0E50F4:
    ctx->pc = 0x7F0E50F4u;
    // 7F0E50F4: bc    12, 2, 0x7F0E5100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5100;
        }
    }

label_7F0E50F8:
    ctx->pc = 0x7F0E50F8u;
    ctx->downcount -= 2;
    // 7F0E50F8: cmpwi   r31, 22
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E50FC:
    ctx->pc = 0x7F0E50FCu;
    // 7F0E50FC: bc    4, 2, 0x7F0E5108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5108;
        }
    }

label_7F0E5100:
    ctx->pc = 0x7F0E5100u;
    ctx->downcount -= 2;
    // 7F0E5100: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5104:
    ctx->pc = 0x7F0E5104u;
    // 7F0E5104: bl      0x7F0E4D10
    {
            ctx->lr = 0x7F0E5108u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4D10u;
                return;
            }
            goto label_7F0E4D10;
    }

label_7F0E5108:
    ctx->pc = 0x7F0E5108u;
    ctx->downcount -= 4;
    // 7F0E5108: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E510C:
    ctx->pc = 0x7F0E510Cu;
    // 7F0E510C: addi    r3, r30, 1120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E5110:
    ctx->pc = 0x7F0E5110u;
    // 7F0E5110: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E5114:
    ctx->pc = 0x7F0E5114u;
    // 7F0E5114: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E5118u;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E5118:
    ctx->pc = 0x7F0E5118u;
    ctx->downcount -= 2;
    // 7F0E5118: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E511C:
    ctx->pc = 0x7F0E511Cu;
    // 7F0E511C: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E5120u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E5120:
    ctx->pc = 0x7F0E5120u;
    ctx->downcount -= 2;
    // 7F0E5120: cmpwi   r3, 0
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

label_7F0E5124:
    ctx->pc = 0x7F0E5124u;
    // 7F0E5124: bc    4, 2, 0x7F0E5150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5150;
        }
    }

label_7F0E5128:
    ctx->pc = 0x7F0E5128u;
    ctx->downcount -= 2;
    // 7F0E5128: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E512C:
    ctx->pc = 0x7F0E512Cu;
    // 7F0E512C: bl      0x7F0E4C84
    {
            ctx->lr = 0x7F0E5130u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4C84u;
                return;
            }
            goto label_7F0E4C84;
    }

label_7F0E5130:
    ctx->pc = 0x7F0E5130u;
    ctx->downcount -= 4;
    // 7F0E5130: lwz     r0, 3936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5134:
    ctx->pc = 0x7F0E5134u;
    // 7F0E5134: cmpwi   r31, 36
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5138:
    ctx->pc = 0x7F0E5138u;
    // 7F0E5138: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E513C:
    ctx->pc = 0x7F0E513Cu;
    // 7F0E513C: bc    4, 1, 0x7F0E5150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5150;
        }
    }

label_7F0E5140:
    ctx->pc = 0x7F0E5140u;
    ctx->downcount -= 4;
    // 7F0E5140: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5144:
    ctx->pc = 0x7F0E5144u;
    // 7F0E5144: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5148:
    ctx->pc = 0x7F0E5148u;
    // 7F0E5148: addi    r4, r4, 20504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20504);

label_7F0E514C:
    ctx->pc = 0x7F0E514Cu;
    // 7F0E514C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5150u;
            goto label_7F0E5A68;
    }

label_7F0E5150:
    ctx->pc = 0x7F0E5150u;
    ctx->downcount -= 16;
    // 7F0E5150: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5154:
    ctx->pc = 0x7F0E5154u;
    // 7F0E5154: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5158:
    ctx->pc = 0x7F0E5158u;
    // 7F0E5158: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E515C:
    ctx->pc = 0x7F0E515Cu;
    // 7F0E515C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5160:
    ctx->pc = 0x7F0E5160u;
    // 7F0E5160: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5164:
    ctx->pc = 0x7F0E5164u;
    ctx->downcount -= 17;
    // 7F0E5164: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5168:
    ctx->pc = 0x7F0E5168u;
    // 7F0E5168: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E516C:
    ctx->pc = 0x7F0E516Cu;
    // 7F0E516C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5170:
    ctx->pc = 0x7F0E5170u;
    // 7F0E5170: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5174:
    ctx->pc = 0x7F0E5174u;
    // 7F0E5174: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5178:
    ctx->pc = 0x7F0E5178u;
    // 7F0E5178: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E517C:
    ctx->pc = 0x7F0E517Cu;
    // 7F0E517C: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E5180u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E5180:
    ctx->pc = 0x7F0E5180u;
    ctx->downcount -= 2;
    // 7F0E5180: cmpwi   r3, 0
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

label_7F0E5184:
    ctx->pc = 0x7F0E5184u;
    // 7F0E5184: bc    4, 2, 0x7F0E5250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5250;
        }
    }

label_7F0E5188:
    ctx->pc = 0x7F0E5188u;
    ctx->downcount -= 2;
    // 7F0E5188: cmpwi   r30, 0
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

label_7F0E518C:
    ctx->pc = 0x7F0E518Cu;
    // 7F0E518C: bc    4, 2, 0x7F0E5214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5214;
        }
    }

label_7F0E5190:
    ctx->pc = 0x7F0E5190u;
    ctx->downcount -= 1;
    // 7F0E5190: bl      0x800147F8
    {
            ctx->lr = 0x7F0E5194u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0E5194:
    ctx->pc = 0x7F0E5194u;
    ctx->downcount -= 59;
    // 7F0E5194: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E5198:
    ctx->pc = 0x7F0E5198u;
    // 7F0E5198: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F0E519C:
    ctx->pc = 0x7F0E519Cu;
    // 7F0E519C: divwu   r0, r3, r7
    {
        u32 divisor = ctx->gpr[7];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E51A0:
    ctx->pc = 0x7F0E51A0u;
    // 7F0E51A0: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E51A4:
    ctx->pc = 0x7F0E51A4u;
    // 7F0E51A4: addi    r5, r5, -26016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26016);

label_7F0E51A8:
    ctx->pc = 0x7F0E51A8u;
    // 7F0E51A8: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E51AC:
    ctx->pc = 0x7F0E51ACu;
    // 7F0E51AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E51B0:
    ctx->pc = 0x7F0E51B0u;
    // 7F0E51B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E51B4:
    ctx->pc = 0x7F0E51B4u;
    // 7F0E51B4: mullw   r0, r0, r7
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E51B8:
    ctx->pc = 0x7F0E51B8u;
    // 7F0E51B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E51BC:
    ctx->pc = 0x7F0E51BCu;
    // 7F0E51BC: li      r9, 40
    ctx->gpr[9] = (u32)(s32)(40);

label_7F0E51C0:
    ctx->pc = 0x7F0E51C0u;
    // 7F0E51C0: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0E51C4:
    ctx->pc = 0x7F0E51C4u;
    // 7F0E51C4: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0E51C8:
    ctx->pc = 0x7F0E51C8u;
    // 7F0E51C8: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F0E51CC:
    ctx->pc = 0x7F0E51CCu;
    // 7F0E51CC: lhax    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E51D0:
    ctx->pc = 0x7F0E51D0u;
    // 7F0E51D0: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E51D4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E51D4:
    ctx->pc = 0x7F0E51D4u;
    ctx->downcount -= 6;
    // 7F0E51D4: lwz     r5, 1284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E51D8:
    ctx->pc = 0x7F0E51D8u;
    // 7F0E51D8: addi    r3, r31, 1136
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1136);

label_7F0E51DC:
    ctx->pc = 0x7F0E51DCu;
    // 7F0E51DC: addi    r4, r31, 1200
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1200);

label_7F0E51E0:
    ctx->pc = 0x7F0E51E0u;
    // 7F0E51E0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E51E4:
    ctx->pc = 0x7F0E51E4u;
    // 7F0E51E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E51E8:
    ctx->pc = 0x7F0E51E8u;
    // 7F0E51E8: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0E51ECu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0E51EC:
    ctx->pc = 0x7F0E51ECu;
    ctx->downcount -= 3;
    // 7F0E51EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E51F0:
    ctx->pc = 0x7F0E51F0u;
    // 7F0E51F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E51F4:
    ctx->pc = 0x7F0E51F4u;
    // 7F0E51F4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E51F8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E51F8:
    ctx->pc = 0x7F0E51F8u;
    ctx->downcount -= 7;
    // 7F0E51F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E51FC:
    ctx->pc = 0x7F0E51FCu;
    // 7F0E51FC: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E5200:
    ctx->pc = 0x7F0E5200u;
    // 7F0E5200: stw     r0, 1268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5204:
    ctx->pc = 0x7F0E5204u;
    // 7F0E5204: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E5208:
    ctx->pc = 0x7F0E5208u;
    // 7F0E5208: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E520C:
    ctx->pc = 0x7F0E520Cu;
    // 7F0E520C: stw     r0, 1264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5210:
    ctx->pc = 0x7F0E5210u;
    // 7F0E5210: bl      0x7F0E5ACC
    {
            ctx->lr = 0x7F0E5214u;
            goto label_7F0E5ACC;
    }

label_7F0E5214:
    ctx->pc = 0x7F0E5214u;
    ctx->downcount -= 2;
    // 7F0E5214: cmpwi   r30, 16
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

label_7F0E5218:
    ctx->pc = 0x7F0E5218u;
    // 7F0E5218: bc    4, 1, 0x7F0E522C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E522C;
        }
    }

label_7F0E521C:
    ctx->pc = 0x7F0E521Cu;
    ctx->downcount -= 4;
    // 7F0E521C: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F0E5220:
    ctx->pc = 0x7F0E5220u;
    // 7F0E5220: addi    r3, r31, 1120
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1120);

label_7F0E5224:
    ctx->pc = 0x7F0E5224u;
    // 7F0E5224: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E5228:
    ctx->pc = 0x7F0E5228u;
    // 7F0E5228: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E522Cu;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E522C:
    ctx->pc = 0x7F0E522Cu;
    ctx->downcount -= 5;
    // 7F0E522C: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5230:
    ctx->pc = 0x7F0E5230u;
    // 7F0E5230: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5234:
    ctx->pc = 0x7F0E5234u;
    // 7F0E5234: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5238:
    ctx->pc = 0x7F0E5238u;
    // 7F0E5238: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E523C:
    ctx->pc = 0x7F0E523Cu;
    // 7F0E523C: bc    12, 2, 0x7F0E5250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5250;
        }
    }

label_7F0E5240:
    ctx->pc = 0x7F0E5240u;
    ctx->downcount -= 4;
    // 7F0E5240: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5244:
    ctx->pc = 0x7F0E5244u;
    // 7F0E5244: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E5248:
    ctx->pc = 0x7F0E5248u;
    // 7F0E5248: addi    r4, r4, 20072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20072);

label_7F0E524C:
    ctx->pc = 0x7F0E524Cu;
    // 7F0E524C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5250u;
            goto label_7F0E5A68;
    }

label_7F0E5250:
    ctx->pc = 0x7F0E5250u;
    ctx->downcount -= 16;
    // 7F0E5250: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5254:
    ctx->pc = 0x7F0E5254u;
    // 7F0E5254: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5258:
    ctx->pc = 0x7F0E5258u;
    // 7F0E5258: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E525C:
    ctx->pc = 0x7F0E525Cu;
    // 7F0E525C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5260:
    ctx->pc = 0x7F0E5260u;
    // 7F0E5260: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5264:
    ctx->pc = 0x7F0E5264u;
    ctx->downcount -= 35;
    // 7F0E5264: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5268:
    ctx->pc = 0x7F0E5268u;
    // 7F0E5268: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E526C:
    ctx->pc = 0x7F0E526Cu;
    // 7F0E526C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E5270:
    ctx->pc = 0x7F0E5270u;
    // 7F0E5270: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5274:
    ctx->pc = 0x7F0E5274u;
    // 7F0E5274: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E5278:
    ctx->pc = 0x7F0E5278u;
    // 7F0E5278: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E527C:
    ctx->pc = 0x7F0E527Cu;
    // 7F0E527C: or.   r31, r4, r4
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

label_7F0E5280:
    ctx->pc = 0x7F0E5280u;
    // 7F0E5280: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5284:
    ctx->pc = 0x7F0E5284u;
    // 7F0E5284: lwzu     r4, 12832(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12832);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F0E5288:
    ctx->pc = 0x7F0E5288u;
    // 7F0E5288: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E528C:
    ctx->pc = 0x7F0E528Cu;
    // 7F0E528C: stw     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5290:
    ctx->pc = 0x7F0E5290u;
    // 7F0E5290: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5294:
    ctx->pc = 0x7F0E5294u;
    // 7F0E5294: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5298:
    ctx->pc = 0x7F0E5298u;
    // 7F0E5298: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E529C:
    ctx->pc = 0x7F0E529Cu;
    // 7F0E529C: stw     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E52A0:
    ctx->pc = 0x7F0E52A0u;
    // 7F0E52A0: stw     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E52A4:
    ctx->pc = 0x7F0E52A4u;
    // 7F0E52A4: sth     r0, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E52A8:
    ctx->pc = 0x7F0E52A8u;
    // 7F0E52A8: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E52AC:
    ctx->pc = 0x7F0E52ACu;
    // 7F0E52AC: lfs     f0, 4056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E52B0:
    ctx->pc = 0x7F0E52B0u;
    // 7F0E52B0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E52B4:
    ctx->pc = 0x7F0E52B4u;
    // 7F0E52B4: lfs     f0, 4060(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E52B8:
    ctx->pc = 0x7F0E52B8u;
    // 7F0E52B8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E52BC:
    ctx->pc = 0x7F0E52BCu;
    // 7F0E52BC: lfs     f0, 4064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E52C0:
    ctx->pc = 0x7F0E52C0u;
    // 7F0E52C0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E52C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E52C4:
    ctx->pc = 0x7F0E52C4u;
    // 7F0E52C4: bc    4, 2, 0x7F0E54D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E54D0;
        }
    }

label_7F0E52C8:
    ctx->pc = 0x7F0E52C8u;
    ctx->downcount -= 3;
    // 7F0E52C8: lwz     r0, 3892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3892);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E52CC:
    ctx->pc = 0x7F0E52CCu;
    // 7F0E52CC: cmpwi   r0, 1
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

label_7F0E52D0:
    ctx->pc = 0x7F0E52D0u;
    // 7F0E52D0: bc    12, 2, 0x7F0E5458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5458;
        }
    }

label_7F0E52D4:
    ctx->pc = 0x7F0E52D4u;
    ctx->downcount -= 1;
    // 7F0E52D4: bc    4, 0, 0x7F0E52E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E52E4;
        }
    }

label_7F0E52D8:
    ctx->pc = 0x7F0E52D8u;
    ctx->downcount -= 2;
    // 7F0E52D8: cmpwi   r0, 0
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

label_7F0E52DC:
    ctx->pc = 0x7F0E52DCu;
    // 7F0E52DC: bc    4, 0, 0x7F0E52F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E52F0;
        }
    }

label_7F0E52E0:
    ctx->pc = 0x7F0E52E0u;
    ctx->downcount -= 1;
    // 7F0E52E0: b       0x7F0E54D0
    {
            goto label_7F0E54D0;
    }

label_7F0E52E4:
    ctx->pc = 0x7F0E52E4u;
    ctx->downcount -= 2;
    // 7F0E52E4: cmpwi   r0, 3
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

label_7F0E52E8:
    ctx->pc = 0x7F0E52E8u;
    // 7F0E52E8: bc    4, 0, 0x7F0E54D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E54D0;
        }
    }

label_7F0E52EC:
    ctx->pc = 0x7F0E52ECu;
    ctx->downcount -= 1;
    // 7F0E52EC: b       0x7F0E53DC
    {
            goto label_7F0E53DC;
    }

label_7F0E52F0:
    ctx->pc = 0x7F0E52F0u;
    ctx->downcount -= 1;
    // 7F0E52F0: bl      0x800147F8
    {
            ctx->lr = 0x7F0E52F4u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0E52F4:
    ctx->pc = 0x7F0E52F4u;
    ctx->downcount -= 61;
    // 7F0E52F4: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F0E52F8:
    ctx->pc = 0x7F0E52F8u;
    // 7F0E52F8: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F0E52FC:
    ctx->pc = 0x7F0E52FCu;
    // 7F0E52FC: divwu   r0, r3, r7
    {
        u32 divisor = ctx->gpr[7];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E5300:
    ctx->pc = 0x7F0E5300u;
    // 7F0E5300: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E5304:
    ctx->pc = 0x7F0E5304u;
    // 7F0E5304: addi    r5, r5, -25992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25992);

label_7F0E5308:
    ctx->pc = 0x7F0E5308u;
    // 7F0E5308: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E530C:
    ctx->pc = 0x7F0E530Cu;
    // 7F0E530C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5310:
    ctx->pc = 0x7F0E5310u;
    // 7F0E5310: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5314:
    ctx->pc = 0x7F0E5314u;
    // 7F0E5314: mullw   r0, r0, r7
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E5318:
    ctx->pc = 0x7F0E5318u;
    // 7F0E5318: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E531C:
    ctx->pc = 0x7F0E531Cu;
    // 7F0E531C: li      r9, 40
    ctx->gpr[9] = (u32)(s32)(40);

label_7F0E5320:
    ctx->pc = 0x7F0E5320u;
    // 7F0E5320: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0E5324:
    ctx->pc = 0x7F0E5324u;
    // 7F0E5324: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E5328:
    ctx->pc = 0x7F0E5328u;
    // 7F0E5328: rlwinm r29, r0, 3, 0, 28
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F0E532C:
    ctx->pc = 0x7F0E532Cu;
    // 7F0E532C: lhax    r0, r5, r29
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[29];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5330:
    ctx->pc = 0x7F0E5330u;
    // 7F0E5330: stw     r0, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5334:
    ctx->pc = 0x7F0E5334u;
    // 7F0E5334: lwz     r5, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5338:
    ctx->pc = 0x7F0E5338u;
    // 7F0E5338: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E533Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E533C:
    ctx->pc = 0x7F0E533Cu;
    ctx->downcount -= 11;
    // 7F0E533C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E5340:
    ctx->pc = 0x7F0E5340u;
    // 7F0E5340: lha     r4, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5344:
    ctx->pc = 0x7F0E5344u;
    // 7F0E5344: addi    r0, r3, -25992
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25992);

label_7F0E5348:
    ctx->pc = 0x7F0E5348u;
    // 7F0E5348: add   r3, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E534C:
    ctx->pc = 0x7F0E534Cu;
    // 7F0E534C: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5350:
    ctx->pc = 0x7F0E5350u;
    // 7F0E5350: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0E5354:
    ctx->pc = 0x7F0E5354u;
    // 7F0E5354: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E5358:
    ctx->pc = 0x7F0E5358u;
    // 7F0E5358: lwz     r5, 1284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E535C:
    ctx->pc = 0x7F0E535Cu;
    // 7F0E535C: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5360:
    ctx->pc = 0x7F0E5360u;
    // 7F0E5360: cmpwi   r0, 0
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

label_7F0E5364:
    ctx->pc = 0x7F0E5364u;
    // 7F0E5364: bc    12, 1, 0x7F0E539C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E539C;
        }
    }

label_7F0E5368:
    ctx->pc = 0x7F0E5368u;
    ctx->downcount -= 5;
    // 7F0E5368: addi    r3, r30, 1136
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1136);

label_7F0E536C:
    ctx->pc = 0x7F0E536Cu;
    // 7F0E536C: addi    r4, r30, 1200
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1200);

label_7F0E5370:
    ctx->pc = 0x7F0E5370u;
    // 7F0E5370: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E5374:
    ctx->pc = 0x7F0E5374u;
    // 7F0E5374: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E5378:
    ctx->pc = 0x7F0E5378u;
    // 7F0E5378: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0E537Cu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0E537C:
    ctx->pc = 0x7F0E537Cu;
    ctx->downcount -= 3;
    // 7F0E537C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5380:
    ctx->pc = 0x7F0E5380u;
    // 7F0E5380: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5384:
    ctx->pc = 0x7F0E5384u;
    // 7F0E5384: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E5388u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E5388:
    ctx->pc = 0x7F0E5388u;
    ctx->downcount -= 2;
    // 7F0E5388: addi    r3, r30, 1120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E538C:
    ctx->pc = 0x7F0E538Cu;
    // 7F0E538C: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0E5390u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0E5390:
    ctx->pc = 0x7F0E5390u;
    ctx->downcount -= 2;
    // 7F0E5390: addi    r3, r30, 3732
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3732);

label_7F0E5394:
    ctx->pc = 0x7F0E5394u;
    // 7F0E5394: bl      0x7F01D540
    {
            ctx->lr = 0x7F0E5398u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F0E5398:
    ctx->pc = 0x7F0E5398u;
    ctx->downcount -= 1;
    // 7F0E5398: b       0x7F0E53BC
    {
            goto label_7F0E53BC;
    }

label_7F0E539C:
    ctx->pc = 0x7F0E539Cu;
    ctx->downcount -= 5;
    // 7F0E539C: addi    r3, r30, 1136
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1136);

label_7F0E53A0:
    ctx->pc = 0x7F0E53A0u;
    // 7F0E53A0: addi    r4, r30, 1200
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1200);

label_7F0E53A4:
    ctx->pc = 0x7F0E53A4u;
    // 7F0E53A4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E53A8:
    ctx->pc = 0x7F0E53A8u;
    // 7F0E53A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E53AC:
    ctx->pc = 0x7F0E53ACu;
    // 7F0E53AC: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0E53B0u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0E53B0:
    ctx->pc = 0x7F0E53B0u;
    ctx->downcount -= 3;
    // 7F0E53B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E53B4:
    ctx->pc = 0x7F0E53B4u;
    // 7F0E53B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E53B8:
    ctx->pc = 0x7F0E53B8u;
    // 7F0E53B8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E53BCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E53BC:
    ctx->pc = 0x7F0E53BCu;
    ctx->downcount -= 8;
    // 7F0E53BC: li      r0, 92
    ctx->gpr[0] = (u32)(s32)(92);

label_7F0E53C0:
    ctx->pc = 0x7F0E53C0u;
    // 7F0E53C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E53C4:
    ctx->pc = 0x7F0E53C4u;
    // 7F0E53C4: stw     r0, 3896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E53C8:
    ctx->pc = 0x7F0E53C8u;
    // 7F0E53C8: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E53CC:
    ctx->pc = 0x7F0E53CCu;
    // 7F0E53CC: lha     r3, 364(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(364);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E53D0:
    ctx->pc = 0x7F0E53D0u;
    // 7F0E53D0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0E53D4:
    ctx->pc = 0x7F0E53D4u;
    // 7F0E53D4: sth     r0, 364(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(364);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E53D8:
    ctx->pc = 0x7F0E53D8u;
    // 7F0E53D8: b       0x7F0E54D0
    {
            goto label_7F0E54D0;
    }

label_7F0E53DC:
    ctx->pc = 0x7F0E53DCu;
    ctx->downcount -= 7;
    // 7F0E53DC: lha     r0, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E53E0:
    ctx->pc = 0x7F0E53E0u;
    // 7F0E53E0: li      r4, 144
    ctx->gpr[4] = (u32)(s32)(144);

label_7F0E53E4:
    ctx->pc = 0x7F0E53E4u;
    // 7F0E53E4: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F0E53E8:
    ctx->pc = 0x7F0E53E8u;
    // 7F0E53E8: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F0E53EC:
    ctx->pc = 0x7F0E53ECu;
    // 7F0E53EC: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F0E53F0:
    ctx->pc = 0x7F0E53F0u;
    // 7F0E53F0: subf.   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
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

label_7F0E53F4:
    ctx->pc = 0x7F0E53F4u;
    // 7F0E53F4: bc    12, 2, 0x7F0E53FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E53FC;
        }
    }

label_7F0E53F8:
    ctx->pc = 0x7F0E53F8u;
    ctx->downcount -= 1;
    // 7F0E53F8: li      r4, 143
    ctx->gpr[4] = (u32)(s32)(143);

label_7F0E53FC:
    ctx->pc = 0x7F0E53FCu;
    ctx->downcount -= 10;
    // 7F0E53FC: stw     r4, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5400:
    ctx->pc = 0x7F0E5400u;
    // 7F0E5400: lis     r6, 16
    ctx->gpr[6] = ((u32)(s32)(16) << 16);

label_7F0E5404:
    ctx->pc = 0x7F0E5404u;
    // 7F0E5404: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E5408:
    ctx->pc = 0x7F0E5408u;
    // 7F0E5408: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E540C:
    ctx->pc = 0x7F0E540Cu;
    // 7F0E540C: lwz     r5, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5410:
    ctx->pc = 0x7F0E5410u;
    // 7F0E5410: addi    r8, r6, -1
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F0E5414:
    ctx->pc = 0x7F0E5414u;
    // 7F0E5414: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5418:
    ctx->pc = 0x7F0E5418u;
    // 7F0E5418: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E541C:
    ctx->pc = 0x7F0E541Cu;
    // 7F0E541C: li      r9, 40
    ctx->gpr[9] = (u32)(s32)(40);

label_7F0E5420:
    ctx->pc = 0x7F0E5420u;
    // 7F0E5420: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E5424u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E5424:
    ctx->pc = 0x7F0E5424u;
    ctx->downcount -= 7;
    // 7F0E5424: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5428:
    ctx->pc = 0x7F0E5428u;
    // 7F0E5428: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E542C:
    ctx->pc = 0x7F0E542Cu;
    // 7F0E542C: lwz     r5, 1284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5430:
    ctx->pc = 0x7F0E5430u;
    // 7F0E5430: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E5434:
    ctx->pc = 0x7F0E5434u;
    // 7F0E5434: addi    r3, r3, 4008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4008);

label_7F0E5438:
    ctx->pc = 0x7F0E5438u;
    // 7F0E5438: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E543C:
    ctx->pc = 0x7F0E543Cu;
    // 7F0E543C: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0E5440u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0E5440:
    ctx->pc = 0x7F0E5440u;
    ctx->downcount -= 3;
    // 7F0E5440: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5444:
    ctx->pc = 0x7F0E5444u;
    // 7F0E5444: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5448:
    ctx->pc = 0x7F0E5448u;
    // 7F0E5448: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E544Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E544C:
    ctx->pc = 0x7F0E544Cu;
    ctx->downcount -= 3;
    // 7F0E544C: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_7F0E5450:
    ctx->pc = 0x7F0E5450u;
    // 7F0E5450: stw     r0, 3896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5454:
    ctx->pc = 0x7F0E5454u;
    // 7F0E5454: b       0x7F0E54D0
    {
            goto label_7F0E54D0;
    }

label_7F0E5458:
    ctx->pc = 0x7F0E5458u;
    ctx->downcount -= 7;
    // 7F0E5458: lha     r0, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E545C:
    ctx->pc = 0x7F0E545Cu;
    // 7F0E545C: li      r4, 144
    ctx->gpr[4] = (u32)(s32)(144);

label_7F0E5460:
    ctx->pc = 0x7F0E5460u;
    // 7F0E5460: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F0E5464:
    ctx->pc = 0x7F0E5464u;
    // 7F0E5464: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F0E5468:
    ctx->pc = 0x7F0E5468u;
    // 7F0E5468: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F0E546C:
    ctx->pc = 0x7F0E546Cu;
    // 7F0E546C: subf.   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
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

label_7F0E5470:
    ctx->pc = 0x7F0E5470u;
    // 7F0E5470: bc    12, 2, 0x7F0E5478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5478;
        }
    }

label_7F0E5474:
    ctx->pc = 0x7F0E5474u;
    ctx->downcount -= 1;
    // 7F0E5474: li      r4, 143
    ctx->gpr[4] = (u32)(s32)(143);

label_7F0E5478:
    ctx->pc = 0x7F0E5478u;
    ctx->downcount -= 10;
    // 7F0E5478: stw     r4, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E547C:
    ctx->pc = 0x7F0E547Cu;
    // 7F0E547C: lis     r6, 16
    ctx->gpr[6] = ((u32)(s32)(16) << 16);

label_7F0E5480:
    ctx->pc = 0x7F0E5480u;
    // 7F0E5480: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E5484:
    ctx->pc = 0x7F0E5484u;
    // 7F0E5484: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5488:
    ctx->pc = 0x7F0E5488u;
    // 7F0E5488: lwz     r5, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E548C:
    ctx->pc = 0x7F0E548Cu;
    // 7F0E548C: addi    r8, r6, -1
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F0E5490:
    ctx->pc = 0x7F0E5490u;
    // 7F0E5490: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5494:
    ctx->pc = 0x7F0E5494u;
    // 7F0E5494: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E5498:
    ctx->pc = 0x7F0E5498u;
    // 7F0E5498: li      r9, 40
    ctx->gpr[9] = (u32)(s32)(40);

label_7F0E549C:
    ctx->pc = 0x7F0E549Cu;
    // 7F0E549C: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E54A0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E54A0:
    ctx->pc = 0x7F0E54A0u;
    ctx->downcount -= 7;
    // 7F0E54A0: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E54A4:
    ctx->pc = 0x7F0E54A4u;
    // 7F0E54A4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E54A8:
    ctx->pc = 0x7F0E54A8u;
    // 7F0E54A8: lwz     r5, 1284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E54AC:
    ctx->pc = 0x7F0E54ACu;
    // 7F0E54AC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E54B0:
    ctx->pc = 0x7F0E54B0u;
    // 7F0E54B0: addi    r3, r3, 4008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4008);

label_7F0E54B4:
    ctx->pc = 0x7F0E54B4u;
    // 7F0E54B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E54B8:
    ctx->pc = 0x7F0E54B8u;
    // 7F0E54B8: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0E54BCu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0E54BC:
    ctx->pc = 0x7F0E54BCu;
    ctx->downcount -= 3;
    // 7F0E54BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E54C0:
    ctx->pc = 0x7F0E54C0u;
    // 7F0E54C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E54C4:
    ctx->pc = 0x7F0E54C4u;
    // 7F0E54C4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E54C8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E54C8:
    ctx->pc = 0x7F0E54C8u;
    ctx->downcount -= 2;
    // 7F0E54C8: li      r0, 44
    ctx->gpr[0] = (u32)(s32)(44);

label_7F0E54CC:
    ctx->pc = 0x7F0E54CCu;
    // 7F0E54CC: stw     r0, 3896(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E54D0:
    ctx->pc = 0x7F0E54D0u;
    ctx->downcount -= 3;
    // 7F0E54D0: lwz     r0, 3892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3892);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E54D4:
    ctx->pc = 0x7F0E54D4u;
    // 7F0E54D4: cmpwi   r0, 1
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

label_7F0E54D8:
    ctx->pc = 0x7F0E54D8u;
    // 7F0E54D8: bc    12, 2, 0x7F0E55A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55A8;
        }
    }

label_7F0E54DC:
    ctx->pc = 0x7F0E54DCu;
    ctx->downcount -= 1;
    // 7F0E54DC: bc    4, 0, 0x7F0E54EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E54EC;
        }
    }

label_7F0E54E0:
    ctx->pc = 0x7F0E54E0u;
    ctx->downcount -= 2;
    // 7F0E54E0: cmpwi   r0, 0
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

label_7F0E54E4:
    ctx->pc = 0x7F0E54E4u;
    // 7F0E54E4: bc    4, 0, 0x7F0E54F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E54F8;
        }
    }

label_7F0E54E8:
    ctx->pc = 0x7F0E54E8u;
    ctx->downcount -= 1;
    // 7F0E54E8: b       0x7F0E55F4
    {
            goto label_7F0E55F4;
    }

label_7F0E54EC:
    ctx->pc = 0x7F0E54ECu;
    ctx->downcount -= 2;
    // 7F0E54EC: cmpwi   r0, 3
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

label_7F0E54F0:
    ctx->pc = 0x7F0E54F0u;
    // 7F0E54F0: bc    4, 0, 0x7F0E55F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55F4;
        }
    }

label_7F0E54F4:
    ctx->pc = 0x7F0E54F4u;
    ctx->downcount -= 1;
    // 7F0E54F4: b       0x7F0E5594
    {
            goto label_7F0E5594;
    }

label_7F0E54F8:
    ctx->pc = 0x7F0E54F8u;
    ctx->downcount -= 2;
    // 7F0E54F8: cmpwi   r31, 48
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E54FC:
    ctx->pc = 0x7F0E54FCu;
    // 7F0E54FC: bc    4, 2, 0x7F0E55F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55F4;
        }
    }

label_7F0E5500:
    ctx->pc = 0x7F0E5500u;
    ctx->downcount -= 4;
    // 7F0E5500: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5504:
    ctx->pc = 0x7F0E5504u;
    // 7F0E5504: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5508:
    ctx->pc = 0x7F0E5508u;
    // 7F0E5508: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F0E550C:
    ctx->pc = 0x7F0E550Cu;
    // 7F0E550C: bl      0x7F173EA8
    {
            ctx->lr = 0x7F0E5510u;
            ctx->pc = 0x7F173EA8u;
            return;
    }

label_7F0E5510:
    ctx->pc = 0x7F0E5510u;
    ctx->downcount -= 8;
    // 7F0E5510: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5514:
    ctx->pc = 0x7F0E5514u;
    // 7F0E5514: lwz     r6, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E5518:
    ctx->pc = 0x7F0E5518u;
    // 7F0E5518: addi    r4, r3, -2356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2356);

label_7F0E551C:
    ctx->pc = 0x7F0E551Cu;
    // 7F0E551C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5520:
    ctx->pc = 0x7F0E5520u;
    // 7F0E5520: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5520u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5524:
    ctx->pc = 0x7F0E5524u;
    // 7F0E5524: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F0E5528:
    ctx->pc = 0x7F0E5528u;
    // 7F0E5528: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E552C:
    ctx->pc = 0x7F0E552Cu;
    // 7F0E552C: bl      0x7F1E1F58
    {
            ctx->lr = 0x7F0E5530u;
            ctx->pc = 0x7F1E1F58u;
            return;
    }

label_7F0E5530:
    ctx->pc = 0x7F0E5530u;
    ctx->downcount -= 4;
    // 7F0E5530: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5534:
    ctx->pc = 0x7F0E5534u;
    // 7F0E5534: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5538:
    ctx->pc = 0x7F0E5538u;
    // 7F0E5538: addi    r3, r3, 1092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1092);

label_7F0E553C:
    ctx->pc = 0x7F0E553Cu;
    // 7F0E553C: bl      0x7F173EA8
    {
            ctx->lr = 0x7F0E5540u;
            ctx->pc = 0x7F173EA8u;
            return;
    }

label_7F0E5540:
    ctx->pc = 0x7F0E5540u;
    ctx->downcount -= 8;
    // 7F0E5540: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5544:
    ctx->pc = 0x7F0E5544u;
    // 7F0E5544: lwz     r6, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E5548:
    ctx->pc = 0x7F0E5548u;
    // 7F0E5548: addi    r4, r3, -2356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2356);

label_7F0E554C:
    ctx->pc = 0x7F0E554Cu;
    // 7F0E554C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5550:
    ctx->pc = 0x7F0E5550u;
    // 7F0E5550: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5550u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5554:
    ctx->pc = 0x7F0E5554u;
    // 7F0E5554: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F0E5558:
    ctx->pc = 0x7F0E5558u;
    // 7F0E5558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E555C:
    ctx->pc = 0x7F0E555Cu;
    // 7F0E555C: bl      0x7F1E1F58
    {
            ctx->lr = 0x7F0E5560u;
            ctx->pc = 0x7F1E1F58u;
            return;
    }

label_7F0E5560:
    ctx->pc = 0x7F0E5560u;
    ctx->downcount -= 4;
    // 7F0E5560: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5564:
    ctx->pc = 0x7F0E5564u;
    // 7F0E5564: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5568:
    ctx->pc = 0x7F0E5568u;
    // 7F0E5568: addi    r3, r3, 4008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4008);

label_7F0E556C:
    ctx->pc = 0x7F0E556Cu;
    // 7F0E556C: bl      0x7F173EA8
    {
            ctx->lr = 0x7F0E5570u;
            ctx->pc = 0x7F173EA8u;
            return;
    }

label_7F0E5570:
    ctx->pc = 0x7F0E5570u;
    ctx->downcount -= 8;
    // 7F0E5570: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5574:
    ctx->pc = 0x7F0E5574u;
    // 7F0E5574: lwz     r6, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E5578:
    ctx->pc = 0x7F0E5578u;
    // 7F0E5578: addi    r4, r3, -2356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2356);

label_7F0E557C:
    ctx->pc = 0x7F0E557Cu;
    // 7F0E557C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E5580:
    ctx->pc = 0x7F0E5580u;
    // 7F0E5580: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5580u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5584:
    ctx->pc = 0x7F0E5584u;
    // 7F0E5584: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F0E5588:
    ctx->pc = 0x7F0E5588u;
    // 7F0E5588: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E558C:
    ctx->pc = 0x7F0E558Cu;
    // 7F0E558C: bl      0x7F1E1F58
    {
            ctx->lr = 0x7F0E5590u;
            ctx->pc = 0x7F1E1F58u;
            return;
    }

label_7F0E5590:
    ctx->pc = 0x7F0E5590u;
    ctx->downcount -= 1;
    // 7F0E5590: b       0x7F0E55F4
    {
            goto label_7F0E55F4;
    }

label_7F0E5594:
    ctx->pc = 0x7F0E5594u;
    ctx->downcount -= 2;
    // 7F0E5594: cmpwi   r31, 34
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(34);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5598:
    ctx->pc = 0x7F0E5598u;
    // 7F0E5598: bc    4, 2, 0x7F0E55F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55F4;
        }
    }

label_7F0E559C:
    ctx->pc = 0x7F0E559Cu;
    ctx->downcount -= 3;
    // 7F0E559C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E55A0:
    ctx->pc = 0x7F0E55A0u;
    // 7F0E55A0: stw     r0, 3776(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E55A4:
    ctx->pc = 0x7F0E55A4u;
    // 7F0E55A4: b       0x7F0E55F4
    {
            goto label_7F0E55F4;
    }

label_7F0E55A8:
    ctx->pc = 0x7F0E55A8u;
    ctx->downcount -= 2;
    // 7F0E55A8: cmpwi   r31, 25
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E55AC:
    ctx->pc = 0x7F0E55ACu;
    // 7F0E55AC: bc    12, 1, 0x7F0E55E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55E4;
        }
    }

label_7F0E55B0:
    ctx->pc = 0x7F0E55B0u;
    ctx->downcount -= 15;
    // 7F0E55B0: lwz     r4, 4008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4008);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E55B4:
    ctx->pc = 0x7F0E55B4u;
    // 7F0E55B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E55B8:
    ctx->pc = 0x7F0E55B8u;
    // 7F0E55B8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E55BC:
    ctx->pc = 0x7F0E55BCu;
    // 7F0E55BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E55C0:
    ctx->pc = 0x7F0E55C0u;
    // 7F0E55C0: mulli   r0, r4, 20
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F0E55C4:
    ctx->pc = 0x7F0E55C4u;
    // 7F0E55C4: lfd     f1, -2368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E55C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2368);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E55C8:
    ctx->pc = 0x7F0E55C8u;
    // 7F0E55C8: lfs     f2, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E55C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E55CC:
    ctx->pc = 0x7F0E55CCu;
    // 7F0E55CC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0E55D0:
    ctx->pc = 0x7F0E55D0u;
    // 7F0E55D0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E55D4:
    ctx->pc = 0x7F0E55D4u;
    // 7F0E55D4: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E55D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E55D8:
    ctx->pc = 0x7F0E55D8u;
    // 7F0E55D8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E55D8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0E55DC:
    ctx->pc = 0x7F0E55DCu;
    // 7F0E55DC: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E55DCu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0E55E0:
    ctx->pc = 0x7F0E55E0u;
    // 7F0E55E0: stfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E55E0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E55E4:
    ctx->pc = 0x7F0E55E4u;
    ctx->downcount -= 2;
    // 7F0E55E4: cmpwi   r31, 74
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(74);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E55E8:
    ctx->pc = 0x7F0E55E8u;
    // 7F0E55E8: bc    4, 2, 0x7F0E55F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E55F4;
        }
    }

label_7F0E55EC:
    ctx->pc = 0x7F0E55ECu;
    ctx->downcount -= 2;
    // 7F0E55EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E55F0:
    ctx->pc = 0x7F0E55F0u;
    // 7F0E55F0: stw     r0, 3776(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E55F4:
    ctx->pc = 0x7F0E55F4u;
    ctx->downcount -= 2;
    // 7F0E55F4: cmpwi   r31, 32
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E55F8:
    ctx->pc = 0x7F0E55F8u;
    // 7F0E55F8: bc    4, 1, 0x7F0E5630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5630;
        }
    }

label_7F0E55FC:
    ctx->pc = 0x7F0E55FCu;
    ctx->downcount -= 3;
    // 7F0E55FC: lbz     r0, 202(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0E5600:
    ctx->pc = 0x7F0E5600u;
    // 7F0E5600: extsb. r0, r0
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

label_7F0E5604:
    ctx->pc = 0x7F0E5604u;
    // 7F0E5604: bc    12, 2, 0x7F0E5630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5630;
        }
    }

label_7F0E5608:
    ctx->pc = 0x7F0E5608u;
    ctx->downcount -= 10;
    // 7F0E5608: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E560C:
    ctx->pc = 0x7F0E560Cu;
    // 7F0E560C: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0E5610:
    ctx->pc = 0x7F0E5610u;
    // 7F0E5610: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5614:
    ctx->pc = 0x7F0E5614u;
    // 7F0E5614: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5618:
    ctx->pc = 0x7F0E5618u;
    // 7F0E5618: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E561C:
    ctx->pc = 0x7F0E561Cu;
    // 7F0E561C: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5620:
    ctx->pc = 0x7F0E5620u;
    // 7F0E5620: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5624:
    ctx->pc = 0x7F0E5624u;
    // 7F0E5624: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5628:
    ctx->pc = 0x7F0E5628u;
    // 7F0E5628: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E562C:
    ctx->pc = 0x7F0E562Cu;
    // 7F0E562C: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5630:
    ctx->pc = 0x7F0E5630u;
    ctx->downcount -= 5;
    // 7F0E5630: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5634:
    ctx->pc = 0x7F0E5634u;
    // 7F0E5634: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5638:
    ctx->pc = 0x7F0E5638u;
    // 7F0E5638: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E563C:
    ctx->pc = 0x7F0E563Cu;
    // 7F0E563C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E5640:
    ctx->pc = 0x7F0E5640u;
    // 7F0E5640: bc    12, 2, 0x7F0E56AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E56AC;
        }
    }

label_7F0E5644:
    ctx->pc = 0x7F0E5644u;
    ctx->downcount -= 17;
    // 7F0E5644: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0E5648:
    ctx->pc = 0x7F0E5648u;
    // 7F0E5648: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E564C:
    ctx->pc = 0x7F0E564Cu;
    // 7F0E564C: sth     r0, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E5650:
    ctx->pc = 0x7F0E5650u;
    // 7F0E5650: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0E5654:
    ctx->pc = 0x7F0E5654u;
    // 7F0E5654: lwz     r5, 1284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5658:
    ctx->pc = 0x7F0E5658u;
    // 7F0E5658: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E565C:
    ctx->pc = 0x7F0E565Cu;
    // 7F0E565C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5660:
    ctx->pc = 0x7F0E5660u;
    // 7F0E5660: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5664:
    ctx->pc = 0x7F0E5664u;
    // 7F0E5664: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5668:
    ctx->pc = 0x7F0E5668u;
    // 7F0E5668: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E566C:
    ctx->pc = 0x7F0E566Cu;
    // 7F0E566C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5670:
    ctx->pc = 0x7F0E5670u;
    // 7F0E5670: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5674:
    ctx->pc = 0x7F0E5674u;
    // 7F0E5674: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5678:
    ctx->pc = 0x7F0E5678u;
    // 7F0E5678: lwz     r3, 1284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E567C:
    ctx->pc = 0x7F0E567Cu;
    // 7F0E567C: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5680:
    ctx->pc = 0x7F0E5680u;
    // 7F0E5680: cmpwi   r0, 0
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

label_7F0E5684:
    ctx->pc = 0x7F0E5684u;
    // 7F0E5684: bc    12, 1, 0x7F0E569C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E569C;
        }
    }

label_7F0E5688:
    ctx->pc = 0x7F0E5688u;
    ctx->downcount -= 4;
    // 7F0E5688: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E568C:
    ctx->pc = 0x7F0E568Cu;
    // 7F0E568C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5690:
    ctx->pc = 0x7F0E5690u;
    // 7F0E5690: addi    r4, r4, 22392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22392);

label_7F0E5694:
    ctx->pc = 0x7F0E5694u;
    // 7F0E5694: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5698u;
            goto label_7F0E5A68;
    }

label_7F0E5698:
    ctx->pc = 0x7F0E5698u;
    ctx->downcount -= 1;
    // 7F0E5698: b       0x7F0E56AC
    {
            goto label_7F0E56AC;
    }

label_7F0E569C:
    ctx->pc = 0x7F0E569Cu;
    ctx->downcount -= 4;
    // 7F0E569C: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E56A0:
    ctx->pc = 0x7F0E56A0u;
    // 7F0E56A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E56A4:
    ctx->pc = 0x7F0E56A4u;
    // 7F0E56A4: addi    r4, r4, 22208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22208);

label_7F0E56A8:
    ctx->pc = 0x7F0E56A8u;
    // 7F0E56A8: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E56ACu;
            goto label_7F0E5A68;
    }

label_7F0E56AC:
    ctx->pc = 0x7F0E56ACu;
    ctx->downcount -= 16;
    // 7F0E56AC: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E56B0:
    ctx->pc = 0x7F0E56B0u;
    // 7F0E56B0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E56B4:
    ctx->pc = 0x7F0E56B4u;
    // 7F0E56B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E56B8:
    ctx->pc = 0x7F0E56B8u;
    // 7F0E56B8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0E56BC:
    ctx->pc = 0x7F0E56BCu;
    // 7F0E56BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E56C0:
    ctx->pc = 0x7F0E56C0u;
    ctx->downcount -= 20;
    // 7F0E56C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E56C4:
    ctx->pc = 0x7F0E56C4u;
    // 7F0E56C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E56C8:
    ctx->pc = 0x7F0E56C8u;
    // 7F0E56C8: lis     r5, 517
    ctx->gpr[5] = ((u32)(s32)(517) << 16);

label_7F0E56CC:
    ctx->pc = 0x7F0E56CCu;
    // 7F0E56CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E56D0:
    ctx->pc = 0x7F0E56D0u;
    // 7F0E56D0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E56D4:
    ctx->pc = 0x7F0E56D4u;
    // 7F0E56D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E56D8:
    ctx->pc = 0x7F0E56D8u;
    // 7F0E56D8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E56DC:
    ctx->pc = 0x7F0E56DCu;
    // 7F0E56DC: addi    r4, r5, 1
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(1);

label_7F0E56E0:
    ctx->pc = 0x7F0E56E0u;
    // 7F0E56E0: addi    r3, r30, 1120
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1120);

label_7F0E56E4:
    ctx->pc = 0x7F0E56E4u;
    // 7F0E56E4: bl      0x7F02A738
    {
            ctx->lr = 0x7F0E56E8u;
            ctx->pc = 0x7F02A738u;
            return;
    }

label_7F0E56E8:
    ctx->pc = 0x7F0E56E8u;
    ctx->downcount -= 2;
    // 7F0E56E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E56EC:
    ctx->pc = 0x7F0E56ECu;
    // 7F0E56EC: bl      0x7F0E4BE4
    {
            ctx->lr = 0x7F0E56F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E4BE4u;
                return;
            }
            goto label_7F0E4BE4;
    }

label_7F0E56F0:
    ctx->pc = 0x7F0E56F0u;
    ctx->downcount -= 2;
    // 7F0E56F0: cmpwi   r3, 0
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

label_7F0E56F4:
    ctx->pc = 0x7F0E56F4u;
    // 7F0E56F4: bc    4, 2, 0x7F0E5764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5764;
        }
    }

label_7F0E56F8:
    ctx->pc = 0x7F0E56F8u;
    ctx->downcount -= 2;
    // 7F0E56F8: cmpwi   r31, 0
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

label_7F0E56FC:
    ctx->pc = 0x7F0E56FCu;
    // 7F0E56FC: bc    4, 2, 0x7F0E5740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5740;
        }
    }

label_7F0E5700:
    ctx->pc = 0x7F0E5700u;
    ctx->downcount -= 3;
    // 7F0E5700: lwz     r0, 3892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3892);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5704:
    ctx->pc = 0x7F0E5704u;
    // 7F0E5704: cmpwi   r0, 2
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

label_7F0E5708:
    ctx->pc = 0x7F0E5708u;
    // 7F0E5708: bc    12, 2, 0x7F0E571C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E571C;
        }
    }

label_7F0E570C:
    ctx->pc = 0x7F0E570Cu;
    ctx->downcount -= 1;
    // 7F0E570C: bc    4, 0, 0x7F0E5740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5740;
        }
    }

label_7F0E5710:
    ctx->pc = 0x7F0E5710u;
    ctx->downcount -= 2;
    // 7F0E5710: cmpwi   r0, 1
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

label_7F0E5714:
    ctx->pc = 0x7F0E5714u;
    // 7F0E5714: bc    4, 0, 0x7F0E5730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5730;
        }
    }

label_7F0E5718:
    ctx->pc = 0x7F0E5718u;
    ctx->downcount -= 1;
    // 7F0E5718: b       0x7F0E5740
    {
            goto label_7F0E5740;
    }

label_7F0E571C:
    ctx->pc = 0x7F0E571Cu;
    ctx->downcount -= 4;
    // 7F0E571C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5720:
    ctx->pc = 0x7F0E5720u;
    // 7F0E5720: li      r4, 42
    ctx->gpr[4] = (u32)(s32)(42);

label_7F0E5724:
    ctx->pc = 0x7F0E5724u;
    // 7F0E5724: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E5728:
    ctx->pc = 0x7F0E5728u;
    // 7F0E5728: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E572Cu;
            goto label_7F0E5A80;
    }

label_7F0E572C:
    ctx->pc = 0x7F0E572Cu;
    ctx->downcount -= 1;
    // 7F0E572C: b       0x7F0E5740
    {
            goto label_7F0E5740;
    }

label_7F0E5730:
    ctx->pc = 0x7F0E5730u;
    ctx->downcount -= 4;
    // 7F0E5730: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5734:
    ctx->pc = 0x7F0E5734u;
    // 7F0E5734: li      r4, 43
    ctx->gpr[4] = (u32)(s32)(43);

label_7F0E5738:
    ctx->pc = 0x7F0E5738u;
    // 7F0E5738: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0E573C:
    ctx->pc = 0x7F0E573Cu;
    // 7F0E573C: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E5740u;
            goto label_7F0E5A80;
    }

label_7F0E5740:
    ctx->pc = 0x7F0E5740u;
    ctx->downcount -= 5;
    // 7F0E5740: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5744:
    ctx->pc = 0x7F0E5744u;
    // 7F0E5744: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5748:
    ctx->pc = 0x7F0E5748u;
    // 7F0E5748: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E574C:
    ctx->pc = 0x7F0E574Cu;
    // 7F0E574C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E5750:
    ctx->pc = 0x7F0E5750u;
    // 7F0E5750: bc    12, 2, 0x7F0E5764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5764;
        }
    }

label_7F0E5754:
    ctx->pc = 0x7F0E5754u;
    ctx->downcount -= 4;
    // 7F0E5754: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5758:
    ctx->pc = 0x7F0E5758u;
    // 7F0E5758: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E575C:
    ctx->pc = 0x7F0E575Cu;
    // 7F0E575C: addi    r4, r4, 20072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20072);

label_7F0E5760:
    ctx->pc = 0x7F0E5760u;
    // 7F0E5760: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5764u;
            goto label_7F0E5A68;
    }

label_7F0E5764:
    ctx->pc = 0x7F0E5764u;
    ctx->downcount -= 16;
    // 7F0E5764: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5768:
    ctx->pc = 0x7F0E5768u;
    // 7F0E5768: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E576C:
    ctx->pc = 0x7F0E576Cu;
    // 7F0E576C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5770:
    ctx->pc = 0x7F0E5770u;
    // 7F0E5770: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5774:
    ctx->pc = 0x7F0E5774u;
    // 7F0E5774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5778:
    ctx->pc = 0x7F0E5778u;
    ctx->downcount -= 17;
    // 7F0E5778: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E577C:
    ctx->pc = 0x7F0E577Cu;
    // 7F0E577C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5780:
    ctx->pc = 0x7F0E5780u;
    // 7F0E5780: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5784:
    ctx->pc = 0x7F0E5784u;
    // 7F0E5784: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5788:
    ctx->pc = 0x7F0E5788u;
    // 7F0E5788: or.   r31, r4, r4
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

label_7F0E578C:
    ctx->pc = 0x7F0E578Cu;
    // 7F0E578C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5790:
    ctx->pc = 0x7F0E5790u;
    // 7F0E5790: bc    4, 2, 0x7F0E5914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5914;
        }
    }

label_7F0E5794:
    ctx->pc = 0x7F0E5794u;
    ctx->downcount -= 3;
    // 7F0E5794: lwz     r0, 3892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3892);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5798:
    ctx->pc = 0x7F0E5798u;
    // 7F0E5798: cmpwi   r0, 1
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

label_7F0E579C:
    ctx->pc = 0x7F0E579Cu;
    // 7F0E579C: bc    12, 1, 0x7F0E58C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E58C8;
        }
    }

label_7F0E57A0:
    ctx->pc = 0x7F0E57A0u;
    ctx->downcount -= 2;
    // 7F0E57A0: cmpwi   r0, 0
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

label_7F0E57A4:
    ctx->pc = 0x7F0E57A4u;
    // 7F0E57A4: bc    4, 2, 0x7F0E5888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5888;
        }
    }

label_7F0E57A8:
    ctx->pc = 0x7F0E57A8u;
    ctx->downcount -= 3;
    // 7F0E57A8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E57AC:
    ctx->pc = 0x7F0E57ACu;
    // 7F0E57AC: addi    r5, r3, -26008
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-26008);

label_7F0E57B0:
    ctx->pc = 0x7F0E57B0u;
    // 7F0E57B0: bc    4, 2, 0x7F0E57BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E57BC;
        }
    }

label_7F0E57B4:
    ctx->pc = 0x7F0E57B4u;
    ctx->downcount -= 2;
    // 7F0E57B4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E57B8:
    ctx->pc = 0x7F0E57B8u;
    // 7F0E57B8: addi    r5, r3, -25992
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25992);

label_7F0E57BC:
    ctx->pc = 0x7F0E57BCu;
    ctx->downcount -= 3;
    // 7F0E57BC: cmpwi   r0, 0
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

label_7F0E57C0:
    ctx->pc = 0x7F0E57C0u;
    // 7F0E57C0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0E57C4:
    ctx->pc = 0x7F0E57C4u;
    // 7F0E57C4: bc    4, 2, 0x7F0E57CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E57CC;
        }
    }

label_7F0E57C8:
    ctx->pc = 0x7F0E57C8u;
    ctx->downcount -= 1;
    // 7F0E57C8: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F0E57CC:
    ctx->pc = 0x7F0E57CCu;
    ctx->downcount -= 6;
    // 7F0E57CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E57D0:
    ctx->pc = 0x7F0E57D0u;
    // 7F0E57D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E57D4:
    ctx->pc = 0x7F0E57D4u;
    // 7F0E57D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E57D8:
    ctx->pc = 0x7F0E57D8u;
    // 7F0E57D8: cmpwi   r0, 0
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

label_7F0E57DC:
    ctx->pc = 0x7F0E57DCu;
    // 7F0E57DC: bc    4, 1, 0x7F0E57FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E57FC;
        }
    }

label_7F0E57E0:
    ctx->pc = 0x7F0E57E0u;
    ctx->downcount -= 4;
    // 7F0E57E0: lwz     r4, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E57E4:
    ctx->pc = 0x7F0E57E4u;
    // 7F0E57E4: lhax    r0, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E57E8:
    // 7F0E57E8: cmpw    r4, r0
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

label_7F0E57EC:
    // 7F0E57EC: bc    12, 2, 0x7F0E57FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E57FC;
        }
    }

label_7F0E57F0:
    ctx->downcount -= 3;
    // 7F0E57F0: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F0E57F4:
    // 7F0E57F4: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F0E57F8:
    // 7F0E57F8: bc    16, 0, 0x7F0E57E0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E57E0u;
                return;
            }
            goto label_7F0E57E0;
        }
    }

label_7F0E57FC:
    ctx->pc = 0x7F0E57FCu;
    ctx->downcount -= 11;
    // 7F0E57FC: rlwinm r6, r6, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 3u) & 0xFFFFFFF8u;
    }

label_7F0E5800:
    ctx->pc = 0x7F0E5800u;
    // 7F0E5800: lha     r4, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5804:
    ctx->pc = 0x7F0E5804u;
    // 7F0E5804: add   r3, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E5808:
    ctx->pc = 0x7F0E5808u;
    // 7F0E5808: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E580C:
    ctx->pc = 0x7F0E580Cu;
    // 7F0E580C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0E5810:
    ctx->pc = 0x7F0E5810u;
    // 7F0E5810: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E5814:
    ctx->pc = 0x7F0E5814u;
    // 7F0E5814: lha     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5818:
    ctx->pc = 0x7F0E5818u;
    // 7F0E5818: sth     r0, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E581C:
    ctx->pc = 0x7F0E581Cu;
    // 7F0E581C: lwz     r0, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5820:
    ctx->pc = 0x7F0E5820u;
    // 7F0E5820: cmpwi   r0, 168
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(168);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5824:
    ctx->pc = 0x7F0E5824u;
    // 7F0E5824: bc    4, 0, 0x7F0E5834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5834;
        }
    }

label_7F0E5828:
    ctx->pc = 0x7F0E5828u;
    ctx->downcount -= 2;
    // 7F0E5828: cmpwi   r0, 141
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(141);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E582C:
    ctx->pc = 0x7F0E582Cu;
    // 7F0E582C: bc    12, 2, 0x7F0E583C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E583C;
        }
    }

label_7F0E5830:
    ctx->pc = 0x7F0E5830u;
    ctx->downcount -= 1;
    // 7F0E5830: b       0x7F0E5844
    {
            goto label_7F0E5844;
    }

label_7F0E5834:
    ctx->pc = 0x7F0E5834u;
    ctx->downcount -= 2;
    // 7F0E5834: cmpwi   r0, 170
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(170);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5838:
    ctx->pc = 0x7F0E5838u;
    // 7F0E5838: bc    4, 0, 0x7F0E5844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5844;
        }
    }

label_7F0E583C:
    ctx->pc = 0x7F0E583Cu;
    ctx->downcount -= 2;
    // 7F0E583C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E5840:
    ctx->pc = 0x7F0E5840u;
    // 7F0E5840: b       0x7F0E5848
    {
            goto label_7F0E5848;
    }

label_7F0E5844:
    ctx->pc = 0x7F0E5844u;
    ctx->downcount -= 1;
    // 7F0E5844: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E5848:
    ctx->pc = 0x7F0E5848u;
    ctx->downcount -= 15;
    // 7F0E5848: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E584C:
    ctx->pc = 0x7F0E584Cu;
    // 7F0E584C: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E5850:
    ctx->pc = 0x7F0E5850u;
    // 7F0E5850: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F0E5854:
    ctx->pc = 0x7F0E5854u;
    // 7F0E5854: add   r9, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F0E5858:
    ctx->pc = 0x7F0E5858u;
    // 7F0E5858: addi    r5, r3, -25936
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25936);

label_7F0E585C:
    ctx->pc = 0x7F0E585Cu;
    // 7F0E585C: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E5860:
    ctx->pc = 0x7F0E5860u;
    // 7F0E5860: lhax    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5864:
    ctx->pc = 0x7F0E5864u;
    // 7F0E5864: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E5868:
    ctx->pc = 0x7F0E5868u;
    // 7F0E5868: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E586C:
    ctx->pc = 0x7F0E586Cu;
    // 7F0E586C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5870:
    ctx->pc = 0x7F0E5870u;
    // 7F0E5870: stw     r0, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5874:
    ctx->pc = 0x7F0E5874u;
    // 7F0E5874: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E5878:
    ctx->pc = 0x7F0E5878u;
    // 7F0E5878: lwz     r5, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E587C:
    ctx->pc = 0x7F0E587Cu;
    // 7F0E587C: lha     r9, 2(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5880:
    ctx->pc = 0x7F0E5880u;
    // 7F0E5880: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E5884u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E5884:
    ctx->pc = 0x7F0E5884u;
    ctx->downcount -= 1;
    // 7F0E5884: b       0x7F0E58D4
    {
            goto label_7F0E58D4;
    }

label_7F0E5888:
    ctx->pc = 0x7F0E5888u;
    ctx->downcount -= 11;
    // 7F0E5888: li      r0, 212
    ctx->gpr[0] = (u32)(s32)(212);

label_7F0E588C:
    ctx->pc = 0x7F0E588Cu;
    // 7F0E588C: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E5890:
    ctx->pc = 0x7F0E5890u;
    // 7F0E5890: stw     r0, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5894:
    ctx->pc = 0x7F0E5894u;
    // 7F0E5894: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0E5898:
    ctx->pc = 0x7F0E5898u;
    // 7F0E5898: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E589C:
    ctx->pc = 0x7F0E589Cu;
    // 7F0E589C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E58A0:
    ctx->pc = 0x7F0E58A0u;
    // 7F0E58A0: lwz     r5, 3888(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E58A4:
    ctx->pc = 0x7F0E58A4u;
    // 7F0E58A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E58A8:
    ctx->pc = 0x7F0E58A8u;
    // 7F0E58A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E58AC:
    ctx->pc = 0x7F0E58ACu;
    // 7F0E58AC: li      r9, 40
    ctx->gpr[9] = (u32)(s32)(40);

label_7F0E58B0:
    ctx->pc = 0x7F0E58B0u;
    // 7F0E58B0: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E58B4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E58B4:
    ctx->pc = 0x7F0E58B4u;
    ctx->downcount -= 4;
    // 7F0E58B4: lis     r4, 8192
    ctx->gpr[4] = ((u32)(s32)(8192) << 16);

label_7F0E58B8:
    ctx->pc = 0x7F0E58B8u;
    // 7F0E58B8: lwz     r3, 3996(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E58BC:
    ctx->pc = 0x7F0E58BCu;
    // 7F0E58BC: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0E58C0:
    ctx->pc = 0x7F0E58C0u;
    // 7F0E58C0: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0E58C4u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0E58C4:
    ctx->pc = 0x7F0E58C4u;
    ctx->downcount -= 1;
    // 7F0E58C4: b       0x7F0E58D4
    {
            goto label_7F0E58D4;
    }

label_7F0E58C8:
    ctx->pc = 0x7F0E58C8u;
    ctx->downcount -= 3;
    // 7F0E58C8: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_7F0E58CC:
    ctx->pc = 0x7F0E58CCu;
    // 7F0E58CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E58D0:
    ctx->pc = 0x7F0E58D0u;
    // 7F0E58D0: bl      0x7F0E5A80
    {
            ctx->lr = 0x7F0E58D4u;
            goto label_7F0E5A80;
    }

label_7F0E58D4:
    ctx->pc = 0x7F0E58D4u;
    ctx->downcount -= 7;
    // 7F0E58D4: lwz     r5, 1064(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1064);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E58D8:
    ctx->pc = 0x7F0E58D8u;
    // 7F0E58D8: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0E58DC:
    ctx->pc = 0x7F0E58DCu;
    // 7F0E58DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E58E0:
    ctx->pc = 0x7F0E58E0u;
    // 7F0E58E0: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E58E4:
    ctx->pc = 0x7F0E58E4u;
    // 7F0E58E4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0E58E8:
    ctx->pc = 0x7F0E58E8u;
    // 7F0E58E8: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E58EC:
    ctx->pc = 0x7F0E58ECu;
    // 7F0E58EC: bl      0x7F024060
    {
            ctx->lr = 0x7F0E58F0u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F0E58F0:
    ctx->pc = 0x7F0E58F0u;
    ctx->downcount -= 7;
    // 7F0E58F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E58F4:
    ctx->pc = 0x7F0E58F4u;
    // 7F0E58F4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0E58F8:
    ctx->pc = 0x7F0E58F8u;
    // 7F0E58F8: stw     r0, 1124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E58FC:
    ctx->pc = 0x7F0E58FCu;
    // 7F0E58FC: addi    r4, r3, 28408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28408);

label_7F0E5900:
    ctx->pc = 0x7F0E5900u;
    // 7F0E5900: lwz     r3, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5904:
    ctx->pc = 0x7F0E5904u;
    // 7F0E5904: cmpwi   r3, 0
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

label_7F0E5908:
    ctx->pc = 0x7F0E5908u;
    // 7F0E5908: bc    12, 2, 0x7F0E5914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5914;
        }
    }

label_7F0E590C:
    ctx->pc = 0x7F0E590Cu;
    ctx->downcount -= 2;
    // 7F0E590C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0E5910:
    ctx->pc = 0x7F0E5910u;
    // 7F0E5910: stw     r0, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5914:
    ctx->pc = 0x7F0E5914u;
    ctx->downcount -= 2;
    // 7F0E5914: cmpwi   r31, 96
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5918:
    ctx->pc = 0x7F0E5918u;
    // 7F0E5918: bc    4, 1, 0x7F0E5948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5948;
        }
    }

label_7F0E591C:
    ctx->pc = 0x7F0E591Cu;
    ctx->downcount -= 2;
    // 7F0E591C: rlwinm. r0, r31, 0, 29, 29
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

label_7F0E5920:
    ctx->pc = 0x7F0E5920u;
    // 7F0E5920: bc    12, 2, 0x7F0E5938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5938;
        }
    }

label_7F0E5924:
    ctx->pc = 0x7F0E5924u;
    ctx->downcount -= 5;
    // 7F0E5924: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5928:
    ctx->pc = 0x7F0E5928u;
    // 7F0E5928: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E592C:
    ctx->pc = 0x7F0E592Cu;
    // 7F0E592C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0E5930:
    ctx->pc = 0x7F0E5930u;
    // 7F0E5930: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5934:
    ctx->pc = 0x7F0E5934u;
    // 7F0E5934: b       0x7F0E5948
    {
            goto label_7F0E5948;
    }

label_7F0E5938:
    ctx->pc = 0x7F0E5938u;
    ctx->downcount -= 4;
    // 7F0E5938: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E593C:
    ctx->pc = 0x7F0E593Cu;
    // 7F0E593C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5940:
    ctx->pc = 0x7F0E5940u;
    // 7F0E5940: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0E5944:
    ctx->pc = 0x7F0E5944u;
    // 7F0E5944: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5948:
    ctx->pc = 0x7F0E5948u;
    ctx->downcount -= 2;
    // 7F0E5948: cmpwi   r31, 144
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(144);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E594C:
    ctx->pc = 0x7F0E594Cu;
    // 7F0E594C: bc    4, 1, 0x7F0E5960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5960;
        }
    }

label_7F0E5950:
    ctx->pc = 0x7F0E5950u;
    ctx->downcount -= 4;
    // 7F0E5950: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E5954:
    ctx->pc = 0x7F0E5954u;
    // 7F0E5954: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E5958:
    ctx->pc = 0x7F0E5958u;
    // 7F0E5958: addi    r4, r4, 22900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22900);

label_7F0E595C:
    ctx->pc = 0x7F0E595Cu;
    // 7F0E595C: bl      0x7F0E5A68
    {
            ctx->lr = 0x7F0E5960u;
            goto label_7F0E5A68;
    }

label_7F0E5960:
    ctx->pc = 0x7F0E5960u;
    ctx->downcount -= 16;
    // 7F0E5960: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5964:
    ctx->pc = 0x7F0E5964u;
    // 7F0E5964: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5968:
    ctx->pc = 0x7F0E5968u;
    // 7F0E5968: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E596C:
    ctx->pc = 0x7F0E596Cu;
    // 7F0E596C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5970:
    ctx->pc = 0x7F0E5970u;
    // 7F0E5970: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5974:
    ctx->pc = 0x7F0E5974u;
    ctx->downcount -= 4;
    // 7F0E5974: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5978:
    ctx->pc = 0x7F0E5978u;
    // 7F0E5978: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E597C:
    ctx->pc = 0x7F0E597Cu;
    // 7F0E597C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5980:
    ctx->pc = 0x7F0E5980u;
    // 7F0E5980: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0E5984u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0E5984:
    ctx->pc = 0x7F0E5984u;
    ctx->downcount -= 5;
    // 7F0E5984: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5988:
    ctx->pc = 0x7F0E5988u;
    // 7F0E5988: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E598C:
    ctx->pc = 0x7F0E598Cu;
    // 7F0E598C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5990:
    ctx->pc = 0x7F0E5990u;
    // 7F0E5990: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5994:
    ctx->pc = 0x7F0E5994u;
    ctx->downcount -= 12;
    // 7F0E5994: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5998:
    ctx->pc = 0x7F0E5998u;
    // 7F0E5998: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E599C:
    ctx->pc = 0x7F0E599Cu;
    // 7F0E599C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E59A0:
    ctx->pc = 0x7F0E59A0u;
    // 7F0E59A0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E59A4:
    ctx->pc = 0x7F0E59A4u;
    // 7F0E59A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E59A8:
    ctx->pc = 0x7F0E59A8u;
    // 7F0E59A8: lwz     r3, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E59AC:
    ctx->pc = 0x7F0E59ACu;
    // 7F0E59AC: lwz     r12, 3872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3872);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F0E59B0:
    ctx->pc = 0x7F0E59B0u;
    // 7F0E59B0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0E59B4:
    ctx->pc = 0x7F0E59B4u;
    // 7F0E59B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E59B8:
    ctx->pc = 0x7F0E59B8u;
    // 7F0E59B8: cmplwi  r12, 0x0000
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

label_7F0E59BC:
    ctx->pc = 0x7F0E59BCu;
    // 7F0E59BC: stw     r0, 3880(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E59C0:
    ctx->pc = 0x7F0E59C0u;
    // 7F0E59C0: bc    4, 2, 0x7F0E59D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E59D4;
        }
    }

label_7F0E59C4:
    ctx->pc = 0x7F0E59C4u;
    ctx->downcount -= 4;
    // 7F0E59C4: lis     r3, 32526
    ctx->gpr[3] = ((u32)(s32)(32526) << 16);

label_7F0E59C8:
    ctx->pc = 0x7F0E59C8u;
    // 7F0E59C8: addi    r0, r3, 20072
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20072);

label_7F0E59CC:
    ctx->pc = 0x7F0E59CCu;
    // 7F0E59CC: stw     r0, 3872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3872);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E59D0:
    ctx->pc = 0x7F0E59D0u;
    // 7F0E59D0: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0E59D4:
    ctx->pc = 0x7F0E59D4u;
    ctx->downcount -= 4;
    // 7F0E59D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E59D8:
    ctx->pc = 0x7F0E59D8u;
    // 7F0E59D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F0E59DC:
    ctx->pc = 0x7F0E59DCu;
    // 7F0E59DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F0E59E0u;
            ctx->pc = target;
            return;
        }
    }

label_7F0E59E0:
    ctx->pc = 0x7F0E59E0u;
    ctx->downcount -= 5;
    // 7F0E59E0: lfs     f0, 460(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E59E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E59E4:
    ctx->pc = 0x7F0E59E4u;
    // 7F0E59E4: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E59E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E59E8:
    ctx->pc = 0x7F0E59E8u;
    // 7F0E59E8: lwz     r0, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E59EC:
    ctx->pc = 0x7F0E59ECu;
    // 7F0E59EC: cmpwi   r0, 0
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

label_7F0E59F0:
    ctx->pc = 0x7F0E59F0u;
    // 7F0E59F0: bc    4, 0, 0x7F0E5A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5A08;
        }
    }

label_7F0E59F4:
    ctx->pc = 0x7F0E59F4u;
    ctx->downcount -= 3;
    // 7F0E59F4: lbz     r0, 202(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0E59F8:
    ctx->pc = 0x7F0E59F8u;
    // 7F0E59F8: extsb. r0, r0
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

label_7F0E59FC:
    ctx->pc = 0x7F0E59FCu;
    // 7F0E59FC: bc    12, 2, 0x7F0E5A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5A08;
        }
    }

label_7F0E5A00:
    ctx->pc = 0x7F0E5A00u;
    ctx->downcount -= 2;
    // 7F0E5A00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E5A04:
    ctx->pc = 0x7F0E5A04u;
    // 7F0E5A04: stw     r0, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A08:
    ctx->pc = 0x7F0E5A08u;
    ctx->downcount -= 16;
    // 7F0E5A08: lwz     r4, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5A0C:
    ctx->pc = 0x7F0E5A0Cu;
    // 7F0E5A0C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E5A10:
    ctx->pc = 0x7F0E5A10u;
    // 7F0E5A10: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A14:
    ctx->pc = 0x7F0E5A14u;
    // 7F0E5A14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5A18:
    ctx->pc = 0x7F0E5A18u;
    // 7F0E5A18: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_7F0E5A1C:
    ctx->pc = 0x7F0E5A1Cu;
    // 7F0E5A1C: lfd     f1, -2368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2368);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5A20:
    ctx->pc = 0x7F0E5A20u;
    // 7F0E5A20: stw     r0, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A24:
    ctx->pc = 0x7F0E5A24u;
    // 7F0E5A24: lwz     r0, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5A28:
    ctx->pc = 0x7F0E5A28u;
    // 7F0E5A28: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0E5A2C:
    ctx->pc = 0x7F0E5A2Cu;
    // 7F0E5A2C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A30:
    ctx->pc = 0x7F0E5A30u;
    // 7F0E5A30: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5A34:
    ctx->pc = 0x7F0E5A34u;
    // 7F0E5A34: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A34u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0E5A38:
    ctx->pc = 0x7F0E5A38u;
    // 7F0E5A38: stfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E5A3C:
    ctx->pc = 0x7F0E5A3Cu;
    // 7F0E5A3C: lwz     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5A40:
    ctx->pc = 0x7F0E5A40u;
    // 7F0E5A40: cmpwi   r0, 0
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

label_7F0E5A44:
    ctx->pc = 0x7F0E5A44u;
    // 7F0E5A44: bc    4, 2, 0x7F0E5A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5A54;
        }
    }

label_7F0E5A48:
    ctx->pc = 0x7F0E5A48u;
    ctx->downcount -= 3;
    // 7F0E5A48: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5A4C:
    ctx->pc = 0x7F0E5A4Cu;
    // 7F0E5A4C: lfs     f0, -2360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E5A50:
    ctx->pc = 0x7F0E5A50u;
    // 7F0E5A50: stfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5A50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E5A54:
    ctx->pc = 0x7F0E5A54u;
    ctx->downcount -= 6;
    // 7F0E5A54: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5A58:
    ctx->pc = 0x7F0E5A58u;
    // 7F0E5A58: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E5A5C:
    ctx->pc = 0x7F0E5A5Cu;
    // 7F0E5A5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5A60:
    ctx->pc = 0x7F0E5A60u;
    // 7F0E5A60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E5A64:
    ctx->pc = 0x7F0E5A64u;
    // 7F0E5A64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5A68:
    ctx->pc = 0x7F0E5A68u;
    ctx->downcount -= 6;
    // 7F0E5A68: stw     r4, 3872(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3872);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5A6C:
    ctx->pc = 0x7F0E5A6Cu;
    // 7F0E5A6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E5A70:
    ctx->pc = 0x7F0E5A70u;
    // 7F0E5A70: stw     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A74:
    ctx->pc = 0x7F0E5A74u;
    // 7F0E5A74: sth     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E5A78:
    ctx->pc = 0x7F0E5A78u;
    // 7F0E5A78: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E5A7C:
    ctx->pc = 0x7F0E5A7Cu;
    // 7F0E5A7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5A80:
    ctx->pc = 0x7F0E5A80u;
    ctx->downcount -= 15;
    // 7F0E5A80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5A84:
    ctx->pc = 0x7F0E5A84u;
    // 7F0E5A84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5A88:
    ctx->pc = 0x7F0E5A88u;
    // 7F0E5A88: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F0E5A8C:
    ctx->pc = 0x7F0E5A8Cu;
    // 7F0E5A8C: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E5A90:
    ctx->pc = 0x7F0E5A90u;
    // 7F0E5A90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5A94:
    ctx->pc = 0x7F0E5A94u;
    // 7F0E5A94: rlwinm r0, r4, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F0E5A98:
    ctx->pc = 0x7F0E5A98u;
    // 7F0E5A98: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0E5A9C:
    ctx->pc = 0x7F0E5A9Cu;
    // 7F0E5A9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E5AA0:
    ctx->pc = 0x7F0E5AA0u;
    // 7F0E5AA0: stw     r4, 3888(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5AA4:
    ctx->pc = 0x7F0E5AA4u;
    // 7F0E5AA4: addi    r4, r6, -26112
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-26112);

label_7F0E5AA8:
    ctx->pc = 0x7F0E5AA8u;
    // 7F0E5AA8: addi    r3, r3, 448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(448);

label_7F0E5AAC:
    ctx->pc = 0x7F0E5AACu;
    // 7F0E5AAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5AB0:
    ctx->pc = 0x7F0E5AB0u;
    // 7F0E5AB0: lhax    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E5AB4:
    ctx->pc = 0x7F0E5AB4u;
    // 7F0E5AB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5AB8:
    ctx->pc = 0x7F0E5AB8u;
    // 7F0E5AB8: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E5ABCu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E5ABC:
    ctx->pc = 0x7F0E5ABCu;
    ctx->downcount -= 5;
    // 7F0E5ABC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5AC0:
    ctx->pc = 0x7F0E5AC0u;
    // 7F0E5AC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5AC4:
    ctx->pc = 0x7F0E5AC4u;
    // 7F0E5AC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5AC8:
    ctx->pc = 0x7F0E5AC8u;
    // 7F0E5AC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5ACC:
    ctx->pc = 0x7F0E5ACCu;
    ctx->downcount -= 4;
    // 7F0E5ACC: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5AD0:
    ctx->pc = 0x7F0E5AD0u;
    // 7F0E5AD0: andc   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[4];
    }

label_7F0E5AD4:
    ctx->pc = 0x7F0E5AD4u;
    // 7F0E5AD4: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5AD8:
    ctx->pc = 0x7F0E5AD8u;
    // 7F0E5AD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5ADC:
    ctx->pc = 0x7F0E5ADCu;
    ctx->downcount -= 6;
    // 7F0E5ADC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5AE0:
    ctx->pc = 0x7F0E5AE0u;
    // 7F0E5AE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5AE4:
    ctx->pc = 0x7F0E5AE4u;
    // 7F0E5AE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5AE8:
    ctx->pc = 0x7F0E5AE8u;
    // 7F0E5AE8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E5AEC:
    ctx->pc = 0x7F0E5AECu;
    // 7F0E5AEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5AF0:
    ctx->pc = 0x7F0E5AF0u;
    // 7F0E5AF0: bl      0x7F0E5B78
    {
            ctx->lr = 0x7F0E5AF4u;
            goto label_7F0E5B78;
    }

label_7F0E5AF4:
    ctx->pc = 0x7F0E5AF4u;
    ctx->downcount -= 2;
    // 7F0E5AF4: rlwinm. r0, r3, 0, 24, 31
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

label_7F0E5AF8:
    ctx->pc = 0x7F0E5AF8u;
    // 7F0E5AF8: bc    4, 2, 0x7F0E5B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5B04;
        }
    }

label_7F0E5AFC:
    ctx->pc = 0x7F0E5AFCu;
    ctx->downcount -= 2;
    // 7F0E5AFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E5B00:
    ctx->pc = 0x7F0E5B00u;
    // 7F0E5B00: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0E5B04u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0E5B04:
    ctx->pc = 0x7F0E5B04u;
    ctx->downcount -= 6;
    // 7F0E5B04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5B08:
    ctx->pc = 0x7F0E5B08u;
    // 7F0E5B08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E5B0C:
    ctx->pc = 0x7F0E5B0Cu;
    // 7F0E5B0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5B10:
    ctx->pc = 0x7F0E5B10u;
    // 7F0E5B10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5B14:
    ctx->pc = 0x7F0E5B14u;
    // 7F0E5B14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5B18:
    ctx->pc = 0x7F0E5B18u;
    ctx->downcount -= 17;
    // 7F0E5B18: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5B1C:
    ctx->pc = 0x7F0E5B1Cu;
    // 7F0E5B1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5B20:
    ctx->pc = 0x7F0E5B20u;
    // 7F0E5B20: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5B24:
    ctx->pc = 0x7F0E5B24u;
    // 7F0E5B24: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5B28:
    ctx->pc = 0x7F0E5B28u;
    // 7F0E5B28: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5B2C:
    ctx->pc = 0x7F0E5B2Cu;
    // 7F0E5B2C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5B30:
    ctx->pc = 0x7F0E5B30u;
    // 7F0E5B30: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F0E5B34u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F0E5B34:
    ctx->pc = 0x7F0E5B34u;
    ctx->downcount -= 3;
    // 7F0E5B34: stw     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5B38:
    ctx->pc = 0x7F0E5B38u;
    // 7F0E5B38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E5B3C:
    ctx->pc = 0x7F0E5B3Cu;
    // 7F0E5B3C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0E5B40:
    ctx->downcount -= 3;
    // 7F0E5B40: addi    r0, r31, 168
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(168);

label_7F0E5B44:
    ctx->pc = 0x7F0E5B44u;
    // 7F0E5B44: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5B48:
    // 7F0E5B48: bl      0x7F3EF270
    {
            ctx->lr = 0x7F0E5B4Cu;
            ctx->pc = 0x7F3EF270u;
            return;
    }

label_7F0E5B4C:
    ctx->downcount -= 4;
    // 7F0E5B4C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E5B50:
    // 7F0E5B50: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0E5B54:
    // 7F0E5B54: cmpwi   r30, 2
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

label_7F0E5B58:
    // 7F0E5B58: bc    12, 0, 0x7F0E5B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5B40u;
                return;
            }
            goto label_7F0E5B40;
        }
    }

label_7F0E5B5C:
    ctx->pc = 0x7F0E5B5Cu;
    ctx->downcount -= 2;
    // 7F0E5B5C: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5B60:
    ctx->pc = 0x7F0E5B60u;
    // 7F0E5B60: bl      0x7F3F6A18
    {
            ctx->lr = 0x7F0E5B64u;
            ctx->pc = 0x7F3F6A18u;
            return;
    }

label_7F0E5B64:
    ctx->pc = 0x7F0E5B64u;
    ctx->downcount -= 16;
    // 7F0E5B64: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5B68:
    ctx->pc = 0x7F0E5B68u;
    // 7F0E5B68: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5B6C:
    ctx->pc = 0x7F0E5B6Cu;
    // 7F0E5B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5B70:
    ctx->pc = 0x7F0E5B70u;
    // 7F0E5B70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E5B74:
    ctx->pc = 0x7F0E5B74u;
    // 7F0E5B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5B78:
    ctx->pc = 0x7F0E5B78u;
    ctx->downcount -= 5;
    // 7F0E5B78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5B7C:
    ctx->pc = 0x7F0E5B7Cu;
    // 7F0E5B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5B80:
    ctx->pc = 0x7F0E5B80u;
    // 7F0E5B80: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F0E5B84:
    ctx->pc = 0x7F0E5B84u;
    // 7F0E5B84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5B88:
    ctx->pc = 0x7F0E5B88u;
    // 7F0E5B88: bl      0x7F3F1608
    {
            ctx->lr = 0x7F0E5B8Cu;
            ctx->pc = 0x7F3F1608u;
            return;
    }

label_7F0E5B8C:
    ctx->pc = 0x7F0E5B8Cu;
    ctx->downcount -= 6;
    // 7F0E5B8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5B90:
    ctx->pc = 0x7F0E5B90u;
    // 7F0E5B90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E5B94:
    ctx->pc = 0x7F0E5B94u;
    // 7F0E5B94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5B98:
    ctx->pc = 0x7F0E5B98u;
    // 7F0E5B98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5B9C:
    ctx->pc = 0x7F0E5B9Cu;
    // 7F0E5B9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5BA0:
    ctx->pc = 0x7F0E5BA0u;
    ctx->downcount -= 20;
    // 7F0E5BA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5BA4:
    ctx->pc = 0x7F0E5BA4u;
    // 7F0E5BA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5BA8:
    ctx->pc = 0x7F0E5BA8u;
    // 7F0E5BA8: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5BAC:
    ctx->pc = 0x7F0E5BACu;
    // 7F0E5BAC: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F0E5BB0:
    ctx->pc = 0x7F0E5BB0u;
    // 7F0E5BB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5BB4:
    ctx->pc = 0x7F0E5BB4u;
    // 7F0E5BB4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E5BB8:
    ctx->pc = 0x7F0E5BB8u;
    // 7F0E5BB8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E5BBC:
    ctx->pc = 0x7F0E5BBCu;
    // 7F0E5BBC: lwz     r6, 160(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(160);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E5BC0:
    ctx->pc = 0x7F0E5BC0u;
    // 7F0E5BC0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5BC4:
    ctx->pc = 0x7F0E5BC4u;
    // 7F0E5BC4: addi    r3, r7, 48
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(48);

label_7F0E5BC8:
    ctx->pc = 0x7F0E5BC8u;
    // 7F0E5BC8: lfd     f1, -2344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5BC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2344);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5BCC:
    ctx->pc = 0x7F0E5BCCu;
    // 7F0E5BCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E5BD0:
    ctx->pc = 0x7F0E5BD0u;
    // 7F0E5BD0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5BD4:
    ctx->pc = 0x7F0E5BD4u;
    // 7F0E5BD4: lwz     r5, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5BD8:
    ctx->pc = 0x7F0E5BD8u;
    // 7F0E5BD8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5BD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5BDC:
    ctx->pc = 0x7F0E5BDCu;
    // 7F0E5BDC: rlwinm r0, r5, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFEFFFu;
    }

label_7F0E5BE0:
    ctx->pc = 0x7F0E5BE0u;
    // 7F0E5BE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E5BE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0E5BE4:
    ctx->pc = 0x7F0E5BE4u;
    // 7F0E5BE4: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5BE8:
    ctx->pc = 0x7F0E5BE8u;
    // 7F0E5BE8: stfs     f0, 152(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5BE8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E5BEC:
    ctx->pc = 0x7F0E5BECu;
    // 7F0E5BEC: bl      0x7F3F15B0
    {
            ctx->lr = 0x7F0E5BF0u;
            ctx->pc = 0x7F3F15B0u;
            return;
    }

label_7F0E5BF0:
    ctx->pc = 0x7F0E5BF0u;
    ctx->downcount -= 5;
    // 7F0E5BF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5BF4:
    ctx->pc = 0x7F0E5BF4u;
    // 7F0E5BF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5BF8:
    ctx->pc = 0x7F0E5BF8u;
    // 7F0E5BF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E5BFC:
    ctx->pc = 0x7F0E5BFCu;
    // 7F0E5BFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5C00:
    ctx->pc = 0x7F0E5C00u;
    ctx->downcount -= 22;
    // 7F0E5C00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5C04:
    ctx->pc = 0x7F0E5C04u;
    // 7F0E5C04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5C08:
    ctx->pc = 0x7F0E5C08u;
    // 7F0E5C08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5C0C:
    ctx->pc = 0x7F0E5C0Cu;
    // 7F0E5C0C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5C10:
    ctx->pc = 0x7F0E5C10u;
    // 7F0E5C10: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5C14:
    ctx->pc = 0x7F0E5C14u;
    // 7F0E5C14: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5C18:
    ctx->pc = 0x7F0E5C18u;
    // 7F0E5C18: lwz     r5, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5C1C:
    ctx->pc = 0x7F0E5C1Cu;
    // 7F0E5C1C: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_7F0E5C20:
    ctx->pc = 0x7F0E5C20u;
    // 7F0E5C20: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5C24:
    ctx->pc = 0x7F0E5C24u;
    // 7F0E5C24: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F0E5C28:
    ctx->pc = 0x7F0E5C28u;
    // 7F0E5C28: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5C2C:
    ctx->pc = 0x7F0E5C2Cu;
    // 7F0E5C2C: bl      0x7F3F15B0
    {
            ctx->lr = 0x7F0E5C30u;
            ctx->pc = 0x7F3F15B0u;
            return;
    }

label_7F0E5C30:
    ctx->pc = 0x7F0E5C30u;
    ctx->downcount -= 6;
    // 7F0E5C30: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5C34:
    ctx->pc = 0x7F0E5C34u;
    // 7F0E5C34: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E5C38:
    ctx->pc = 0x7F0E5C38u;
    // 7F0E5C38: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0E5C3C:
    ctx->pc = 0x7F0E5C3Cu;
    // 7F0E5C3C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5C40:
    ctx->pc = 0x7F0E5C40u;
    // 7F0E5C40: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0E5C44:
    ctx->pc = 0x7F0E5C44u;
    // 7F0E5C44: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5C48:
    ctx->downcount -= 4;
    // 7F0E5C48: addi    r0, r31, 168
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(168);

label_7F0E5C4C:
    // 7F0E5C4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5C50:
    ctx->pc = 0x7F0E5C50u;
    // 7F0E5C50: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5C54:
    // 7F0E5C54: bl      0x7F3EF318
    {
            ctx->lr = 0x7F0E5C58u;
            ctx->pc = 0x7F3EF318u;
            return;
    }

label_7F0E5C58:
    ctx->downcount -= 4;
    // 7F0E5C58: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E5C5C:
    // 7F0E5C5C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0E5C60:
    // 7F0E5C60: cmpwi   r30, 2
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

label_7F0E5C64:
    // 7F0E5C64: bc    12, 0, 0x7F0E5C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5C48u;
                return;
            }
            goto label_7F0E5C48;
        }
    }

label_7F0E5C68:
    ctx->pc = 0x7F0E5C68u;
    ctx->downcount -= 2;
    // 7F0E5C68: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5C6C:
    ctx->pc = 0x7F0E5C6Cu;
    // 7F0E5C6C: bl      0x7F3F6A64
    {
            ctx->lr = 0x7F0E5C70u;
            ctx->pc = 0x7F3F6A64u;
            return;
    }

label_7F0E5C70:
    ctx->pc = 0x7F0E5C70u;
    ctx->downcount -= 3;
    // 7F0E5C70: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5C74:
    ctx->pc = 0x7F0E5C74u;
    // 7F0E5C74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E5C78:
    ctx->pc = 0x7F0E5C78u;
    // 7F0E5C78: bl      0x7F3F6A98
    {
            ctx->lr = 0x7F0E5C7Cu;
            ctx->pc = 0x7F3F6A98u;
            return;
    }

label_7F0E5C7C:
    ctx->pc = 0x7F0E5C7Cu;
    ctx->downcount -= 16;
    // 7F0E5C7C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5C80:
    ctx->pc = 0x7F0E5C80u;
    // 7F0E5C80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5C84:
    ctx->pc = 0x7F0E5C84u;
    // 7F0E5C84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5C88:
    ctx->pc = 0x7F0E5C88u;
    // 7F0E5C88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E5C8C:
    ctx->pc = 0x7F0E5C8Cu;
    // 7F0E5C8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5C90:
    ctx->pc = 0x7F0E5C90u;
    ctx->downcount -= 9;
    // 7F0E5C90: lwz     r4, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5C94:
    ctx->pc = 0x7F0E5C94u;
    // 7F0E5C94: lwz     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5C98:
    ctx->pc = 0x7F0E5C98u;
    // 7F0E5C98: stw     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5C9C:
    ctx->pc = 0x7F0E5C9Cu;
    // 7F0E5C9C: stw     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5CA0:
    ctx->pc = 0x7F0E5CA0u;
    // 7F0E5CA0: lwz     r4, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5CA4:
    ctx->pc = 0x7F0E5CA4u;
    // 7F0E5CA4: lwz     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5CA8:
    ctx->pc = 0x7F0E5CA8u;
    // 7F0E5CA8: stw     r4, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5CAC:
    ctx->pc = 0x7F0E5CACu;
    // 7F0E5CAC: stw     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5CB0:
    ctx->pc = 0x7F0E5CB0u;
    // 7F0E5CB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5CB4:
    ctx->pc = 0x7F0E5CB4u;
    ctx->downcount -= 21;
    // 7F0E5CB4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5CB8:
    ctx->pc = 0x7F0E5CB8u;
    // 7F0E5CB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5CBC:
    ctx->pc = 0x7F0E5CBCu;
    // 7F0E5CBC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5CC0:
    ctx->pc = 0x7F0E5CC0u;
    // 7F0E5CC0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5CC4:
    ctx->pc = 0x7F0E5CC4u;
    // 7F0E5CC4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5CC8:
    ctx->pc = 0x7F0E5CC8u;
    // 7F0E5CC8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E5CCC:
    ctx->pc = 0x7F0E5CCCu;
    // 7F0E5CCC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0E5CD0:
    ctx->pc = 0x7F0E5CD0u;
    // 7F0E5CD0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5CD4:
    ctx->pc = 0x7F0E5CD4u;
    // 7F0E5CD4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5CD8:
    ctx->pc = 0x7F0E5CD8u;
    // 7F0E5CD8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0E5CDC:
    ctx->pc = 0x7F0E5CDCu;
    // 7F0E5CDC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5CE0:
    ctx->downcount -= 4;
    // 7F0E5CE0: addi    r0, r31, 168
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(168);

label_7F0E5CE4:
    // 7F0E5CE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E5CE8:
    ctx->pc = 0x7F0E5CE8u;
    // 7F0E5CE8: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5CEC:
    // 7F0E5CEC: bl      0x7F3EF318
    {
            ctx->lr = 0x7F0E5CF0u;
            ctx->pc = 0x7F3EF318u;
            return;
    }

label_7F0E5CF0:
    ctx->downcount -= 4;
    // 7F0E5CF0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E5CF4:
    // 7F0E5CF4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0E5CF8:
    // 7F0E5CF8: cmpwi   r30, 2
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

label_7F0E5CFC:
    // 7F0E5CFC: bc    12, 0, 0x7F0E5CE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5CE0u;
                return;
            }
            goto label_7F0E5CE0;
        }
    }

label_7F0E5D00:
    ctx->pc = 0x7F0E5D00u;
    ctx->downcount -= 3;
    // 7F0E5D00: lwz     r3, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5D04:
    ctx->pc = 0x7F0E5D04u;
    // 7F0E5D04: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E5D08:
    ctx->pc = 0x7F0E5D08u;
    // 7F0E5D08: bl      0x7F3F6A98
    {
            ctx->lr = 0x7F0E5D0Cu;
            ctx->pc = 0x7F3F6A98u;
            return;
    }

label_7F0E5D0C:
    ctx->pc = 0x7F0E5D0Cu;
    ctx->downcount -= 16;
    // 7F0E5D0C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E5D10:
    ctx->pc = 0x7F0E5D10u;
    // 7F0E5D10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5D14:
    ctx->pc = 0x7F0E5D14u;
    // 7F0E5D14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E5D18:
    ctx->pc = 0x7F0E5D18u;
    // 7F0E5D18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E5D1C:
    ctx->pc = 0x7F0E5D1Cu;
    // 7F0E5D1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E5D20:
    ctx->pc = 0x7F0E5D20u;
    ctx->downcount -= 24;
    // 7F0E5D20: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E5D24:
    ctx->pc = 0x7F0E5D24u;
    // 7F0E5D24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E5D28:
    ctx->pc = 0x7F0E5D28u;
    // 7F0E5D28: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5D2C:
    ctx->pc = 0x7F0E5D2Cu;
    // 7F0E5D2C: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F0E5D30:
    ctx->pc = 0x7F0E5D30u;
    // 7F0E5D30: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F0E5D30u);
        if (ctx->exception) return;
    }

label_7F0E5D34:
    ctx->pc = 0x7F0E5D34u;
    // 7F0E5D34: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F0E5D38:
    ctx->pc = 0x7F0E5D38u;
    // 7F0E5D38: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F0E5D38u);
        if (ctx->exception) return;
    }

label_7F0E5D3C:
    ctx->pc = 0x7F0E5D3Cu;
    // 7F0E5D3C: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F0E5D40:
    ctx->pc = 0x7F0E5D40u;
    // 7F0E5D40: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F0E5D40u);
        if (ctx->exception) return;
    }

label_7F0E5D44:
    ctx->pc = 0x7F0E5D44u;
    // 7F0E5D44: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F0E5D48:
    ctx->pc = 0x7F0E5D48u;
    // 7F0E5D48: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F0E5D48u);
        if (ctx->exception) return;
    }

label_7F0E5D4C:
    ctx->pc = 0x7F0E5D4Cu;
    // 7F0E5D4C: stmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E5D50:
    ctx->pc = 0x7F0E5D50u;
    // 7F0E5D50: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E5D54:
    ctx->pc = 0x7F0E5D54u;
    // 7F0E5D54: bl      0x7F0E6ABC
    {
            ctx->lr = 0x7F0E5D58u;
            goto label_7F0E6ABC;
    }

label_7F0E5D58:
    ctx->pc = 0x7F0E5D58u;
    ctx->downcount -= 28;
    // 7F0E5D58: lwz     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5D5C:
    ctx->pc = 0x7F0E5D5Cu;
    // 7F0E5D5C: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E5D5Cu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F0E5D60:
    ctx->pc = 0x7F0E5D60u;
    // 7F0E5D60: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5D64:
    ctx->pc = 0x7F0E5D64u;
    // 7F0E5D64: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F0E5D68:
    ctx->pc = 0x7F0E5D68u;
    // 7F0E5D68: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5D6C:
    ctx->pc = 0x7F0E5D6Cu;
    // 7F0E5D6C: lwz     r4, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5D70:
    ctx->pc = 0x7F0E5D70u;
    // 7F0E5D70: lwz     r3, 132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5D74:
    ctx->pc = 0x7F0E5D74u;
    // 7F0E5D74: lwz     r5, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5D78:
    ctx->pc = 0x7F0E5D78u;
    // 7F0E5D78: lwz     r0, 136(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5D7C:
    ctx->pc = 0x7F0E5D7Cu;
    // 7F0E5D7C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F0E5D80:
    ctx->pc = 0x7F0E5D80u;
    // 7F0E5D80: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0E5D84:
    ctx->pc = 0x7F0E5D84u;
    // 7F0E5D84: lwz     r29, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F0E5D88:
    ctx->pc = 0x7F0E5D88u;
    // 7F0E5D88: lwz     r30, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0E5D8C:
    ctx->pc = 0x7F0E5D8Cu;
    // 7F0E5D8C: stw     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5D90:
    ctx->pc = 0x7F0E5D90u;
    // 7F0E5D90: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5D94:
    ctx->pc = 0x7F0E5D94u;
    // 7F0E5D94: lwz     r3, 140(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5D98:
    ctx->pc = 0x7F0E5D98u;
    // 7F0E5D98: lwz     r0, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5D9C:
    ctx->pc = 0x7F0E5D9Cu;
    // 7F0E5D9C: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5DA0:
    ctx->pc = 0x7F0E5DA0u;
    // 7F0E5DA0: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5DA4:
    ctx->pc = 0x7F0E5DA4u;
    // 7F0E5DA4: lwz     r3, 116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5DA8:
    ctx->pc = 0x7F0E5DA8u;
    // 7F0E5DA8: lwz     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5DAC:
    ctx->pc = 0x7F0E5DACu;
    // 7F0E5DAC: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5DB0:
    ctx->pc = 0x7F0E5DB0u;
    // 7F0E5DB0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5DB4:
    ctx->pc = 0x7F0E5DB4u;
    // 7F0E5DB4: lwz     r3, 124(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5DB8:
    ctx->pc = 0x7F0E5DB8u;
    // 7F0E5DB8: lwz     r0, 128(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5DBC:
    ctx->pc = 0x7F0E5DBCu;
    // 7F0E5DBC: stw     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5DC0:
    ctx->pc = 0x7F0E5DC0u;
    // 7F0E5DC0: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5DC4:
    ctx->pc = 0x7F0E5DC4u;
    // 7F0E5DC4: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E5DC8u;
            goto label_7F0E6A74;
    }

label_7F0E5DC8:
    ctx->pc = 0x7F0E5DC8u;
    ctx->downcount -= 10;
    // 7F0E5DC8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E5DCC:
    ctx->pc = 0x7F0E5DCCu;
    // 7F0E5DCC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5DD0:
    ctx->pc = 0x7F0E5DD0u;
    // 7F0E5DD0: lfs     f3, -2332(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E5DD4:
    ctx->pc = 0x7F0E5DD4u;
    // 7F0E5DD4: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0E5DD8:
    ctx->pc = 0x7F0E5DD8u;
    // 7F0E5DD8: lfs     f2, -2336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E5DDC:
    ctx->pc = 0x7F0E5DDCu;
    // 7F0E5DDC: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F0E5DE0:
    ctx->pc = 0x7F0E5DE0u;
    // 7F0E5DE0: lfs     f0, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DE0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E5DE4:
    ctx->pc = 0x7F0E5DE4u;
    // 7F0E5DE4: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DE4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E5DE8:
    ctx->pc = 0x7F0E5DE8u;
    // 7F0E5DE8: fmuls   f29, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DE8u)) return;
    ppc_fmuls(ctx, 29, 0, 1);

label_7F0E5DEC:
    ctx->pc = 0x7F0E5DECu;
    // 7F0E5DEC: bl      0x7F3F04FC
    {
            ctx->lr = 0x7F0E5DF0u;
            ctx->pc = 0x7F3F04FCu;
            return;
    }

label_7F0E5DF0:
    ctx->pc = 0x7F0E5DF0u;
    ctx->downcount -= 25;
    // 7F0E5DF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5DF4:
    ctx->pc = 0x7F0E5DF4u;
    // 7F0E5DF4: lfs     f0, -2332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E5DF8:
    ctx->pc = 0x7F0E5DF8u;
    // 7F0E5DF8: fmuls   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DF8u)) return;
    ppc_fmuls(ctx, 0, 0, 29);

label_7F0E5DFC:
    ctx->pc = 0x7F0E5DFCu;
    // 7F0E5DFC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5DFCu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F0E5E00:
    ctx->pc = 0x7F0E5E00u;
    // 7F0E5E00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E5E04:
    ctx->pc = 0x7F0E5E04u;
    // 7F0E5E04: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E5E08:
    ctx->pc = 0x7F0E5E08u;
    // 7F0E5E08: lwz     r8, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0E5E0C:
    ctx->pc = 0x7F0E5E0Cu;
    // 7F0E5E0C: cmpwi   r8, 1
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5E10:
    ctx->pc = 0x7F0E5E10u;
    // 7F0E5E10: bc    4, 0, 0x7F0E5E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5E1C;
        }
    }

label_7F0E5E14:
    ctx->pc = 0x7F0E5E14u;
    ctx->downcount -= 2;
    // 7F0E5E14: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F0E5E18:
    ctx->pc = 0x7F0E5E18u;
    // 7F0E5E18: b       0x7F0E5E28
    {
            goto label_7F0E5E28;
    }

label_7F0E5E1C:
    ctx->pc = 0x7F0E5E1Cu;
    ctx->downcount -= 2;
    // 7F0E5E1C: cmpwi   r8, 192
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E5E20:
    ctx->pc = 0x7F0E5E20u;
    // 7F0E5E20: bc    4, 1, 0x7F0E5E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5E28;
        }
    }

label_7F0E5E24:
    ctx->pc = 0x7F0E5E24u;
    ctx->downcount -= 1;
    // 7F0E5E24: li      r8, 192
    ctx->gpr[8] = (u32)(s32)(192);

label_7F0E5E28:
    ctx->pc = 0x7F0E5E28u;
    ctx->downcount -= 22;
    // 7F0E5E28: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0E5E2C:
    ctx->pc = 0x7F0E5E2Cu;
    // 7F0E5E2C: addi    r0, r8, -1
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(-1);

label_7F0E5E30:
    ctx->pc = 0x7F0E5E30u;
    // 7F0E5E30: addi    r7, r4, 12832
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0E5E34:
    ctx->pc = 0x7F0E5E34u;
    // 7F0E5E34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E5E38:
    ctx->pc = 0x7F0E5E38u;
    // 7F0E5E38: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E5E3C:
    ctx->pc = 0x7F0E5E3Cu;
    // 7F0E5E3C: xoris   r9, r0, 0x8000
    ctx->gpr[9] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0E5E40:
    ctx->pc = 0x7F0E5E40u;
    // 7F0E5E40: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5E44:
    ctx->pc = 0x7F0E5E44u;
    // 7F0E5E44: fctiwz    f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[29], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E5E48:
    ctx->pc = 0x7F0E5E48u;
    // 7F0E5E48: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5E4C:
    ctx->pc = 0x7F0E5E4Cu;
    // 7F0E5E4C: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F0E5E50:
    ctx->pc = 0x7F0E5E50u;
    // 7F0E5E50: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5E54:
    ctx->pc = 0x7F0E5E54u;
    // 7F0E5E54: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F0E5E58:
    ctx->pc = 0x7F0E5E58u;
    // 7F0E5E58: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E5E5C:
    ctx->pc = 0x7F0E5E5Cu;
    // 7F0E5E5C: lfd     f7, -2344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2344);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5E60:
    ctx->pc = 0x7F0E5E60u;
    // 7F0E5E60: lis     r10, 17200
    ctx->gpr[10] = ((u32)(s32)(17200) << 16);

label_7F0E5E64:
    ctx->pc = 0x7F0E5E64u;
    // 7F0E5E64: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E5E68:
    ctx->pc = 0x7F0E5E68u;
    // 7F0E5E68: stw     r4, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E5E6C:
    ctx->pc = 0x7F0E5E6Cu;
    // 7F0E5E6C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5E70:
    ctx->pc = 0x7F0E5E70u;
    // 7F0E5E70: mtctr    r8
    ctx->ctr = ctx->gpr[8];

label_7F0E5E74:
    ctx->pc = 0x7F0E5E74u;
    // 7F0E5E74: cmpwi   r8, 0
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

label_7F0E5E78:
    ctx->pc = 0x7F0E5E78u;
    // 7F0E5E78: bc    4, 1, 0x7F0E5F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5F70;
        }
    }

label_7F0E5E7C:
    ctx->downcount -= 77;
    // 7F0E5E7C: xoris   r0, r12, 0x8000
    ctx->gpr[0] = ctx->gpr[12] ^ (0x8000u << 16);

label_7F0E5E80:
    ctx->pc = 0x7F0E5E80u;
    // 7F0E5E80: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E5E84:
    ctx->pc = 0x7F0E5E84u;
    // 7F0E5E84: lfs     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F0E5E88:
    // 7F0E5E88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5E8C:
    ctx->pc = 0x7F0E5E8Cu;
    // 7F0E5E8C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5E90:
    // 7F0E5E90: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F0E5E94:
    ctx->pc = 0x7F0E5E94u;
    // 7F0E5E94: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5E94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5E98:
    // 7F0E5E98: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F0E5E9C:
    ctx->pc = 0x7F0E5E9Cu;
    // 7F0E5E9C: stw     r10, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0E5EA0:
    // 7F0E5EA0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F0E5EA4:
    ctx->pc = 0x7F0E5EA4u;
    // 7F0E5EA4: fsubs   f1, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EA4u)) return;
    ppc_fsubs(ctx, 1, 1, 8);

label_7F0E5EA8:
    ctx->pc = 0x7F0E5EA8u;
    // 7F0E5EA8: lwz     r8, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0E5EAC:
    ctx->pc = 0x7F0E5EACu;
    // 7F0E5EAC: lfd     f2, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5EB0:
    // 7F0E5EB0: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F0E5EB4:
    ctx->pc = 0x7F0E5EB4u;
    // 7F0E5EB4: stw     r9, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E5EB8:
    // 7F0E5EB8: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_7F0E5EBC:
    ctx->pc = 0x7F0E5EBCu;
    // 7F0E5EBC: stw     r10, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0E5EC0:
    ctx->pc = 0x7F0E5EC0u;
    // 7F0E5EC0: fsubs   f5, f2, f7
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EC0u)) return;
    ppc_fsubs(ctx, 5, 2, 7);

label_7F0E5EC4:
    ctx->pc = 0x7F0E5EC4u;
    // 7F0E5EC4: lfs     f6, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F0E5EC8:
    // 7F0E5EC8: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_7F0E5ECC:
    ctx->pc = 0x7F0E5ECCu;
    // 7F0E5ECC: lfd     f2, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5ECCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5ED0:
    ctx->pc = 0x7F0E5ED0u;
    // 7F0E5ED0: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5ED0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E5ED4:
    ctx->pc = 0x7F0E5ED4u;
    // 7F0E5ED4: fsubs   f3, f2, f7
    if (!ppc_fp_available_inline(ctx, 0x7F0E5ED4u)) return;
    ppc_fsubs(ctx, 3, 2, 7);

label_7F0E5ED8:
    ctx->pc = 0x7F0E5ED8u;
    // 7F0E5ED8: lfs     f4, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5ED8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E5EDC:
    ctx->pc = 0x7F0E5EDCu;
    // 7F0E5EDC: lwz     r7, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0E5EE0:
    ctx->pc = 0x7F0E5EE0u;
    // 7F0E5EE0: lfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E5EE4:
    ctx->pc = 0x7F0E5EE4u;
    // 7F0E5EE4: fdivs   f5, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EE4u)) return;
    ppc_fdivs(ctx, 5, 5, 3);

label_7F0E5EE8:
    ctx->pc = 0x7F0E5EE8u;
    // 7F0E5EE8: fmadds f1, f5, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EE8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[1], ctx->fpr[8], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E5EEC:
    ctx->pc = 0x7F0E5EECu;
    // 7F0E5EEC: stfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EECu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E5EF0:
    ctx->pc = 0x7F0E5EF0u;
    // 7F0E5EF0: lfs     f3, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E5EF4:
    ctx->pc = 0x7F0E5EF4u;
    // 7F0E5EF4: lfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5EF8:
    ctx->pc = 0x7F0E5EF8u;
    // 7F0E5EF8: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EF8u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F0E5EFC:
    ctx->pc = 0x7F0E5EFCu;
    // 7F0E5EFC: fmadds f1, f5, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5EFCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[1], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E5F00:
    ctx->pc = 0x7F0E5F00u;
    // 7F0E5F00: stfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E5F04:
    ctx->pc = 0x7F0E5F04u;
    // 7F0E5F04: lfs     f3, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E5F08:
    ctx->pc = 0x7F0E5F08u;
    // 7F0E5F08: lfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5F0C:
    ctx->pc = 0x7F0E5F0Cu;
    // 7F0E5F0C: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F0Cu)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F0E5F10:
    ctx->pc = 0x7F0E5F10u;
    // 7F0E5F10: fmadds f1, f5, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F10u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[1], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E5F14:
    ctx->pc = 0x7F0E5F14u;
    // 7F0E5F14: stfs     f1, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E5F18:
    ctx->pc = 0x7F0E5F18u;
    // 7F0E5F18: lfs     f5, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F18u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F0E5F1C:
    ctx->pc = 0x7F0E5F1Cu;
    // 7F0E5F1C: lfs     f3, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F1Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E5F20:
    ctx->pc = 0x7F0E5F20u;
    // 7F0E5F20: lfs     f1, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5F24:
    ctx->pc = 0x7F0E5F24u;
    // 7F0E5F24: fadds   f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F24u)) return;
    ppc_fadds(ctx, 5, 6, 5);

label_7F0E5F28:
    ctx->pc = 0x7F0E5F28u;
    // 7F0E5F28: fadds   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F28u)) return;
    ppc_fadds(ctx, 3, 4, 3);

label_7F0E5F2C:
    // 7F0E5F2C: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0E5F30:
    ctx->pc = 0x7F0E5F30u;
    // 7F0E5F30: sth     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0E5F34:
    ctx->pc = 0x7F0E5F34u;
    // 7F0E5F34: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F34u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F0E5F38:
    ctx->pc = 0x7F0E5F38u;
    // 7F0E5F38: sth     r7, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0E5F3C:
    ctx->pc = 0x7F0E5F3Cu;
    // 7F0E5F3C: sth     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E5F40:
    ctx->pc = 0x7F0E5F40u;
    // 7F0E5F40: sth     r6, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E5F44:
    ctx->pc = 0x7F0E5F44u;
    // 7F0E5F44: sth     r5, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0E5F48:
    ctx->pc = 0x7F0E5F48u;
    // 7F0E5F48: sth     r5, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0E5F4C:
    ctx->pc = 0x7F0E5F4Cu;
    // 7F0E5F4C: stb     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F0E5F50:
    ctx->pc = 0x7F0E5F50u;
    // 7F0E5F50: stb     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F0E5F54:
    ctx->pc = 0x7F0E5F54u;
    // 7F0E5F54: stb     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0E5F58:
    ctx->pc = 0x7F0E5F58u;
    // 7F0E5F58: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0E5F5C:
    // 7F0E5F5C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F0E5F60:
    ctx->pc = 0x7F0E5F60u;
    // 7F0E5F60: stfs     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F0E5F64:
    ctx->pc = 0x7F0E5F64u;
    // 7F0E5F64: stfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E5F68:
    ctx->pc = 0x7F0E5F68u;
    // 7F0E5F68: stfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E5F6C:
    // 7F0E5F6C: bc    16, 0, 0x7F0E5E7C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5E7Cu;
                return;
            }
            goto label_7F0E5E7C;
        }
    }

label_7F0E5F70:
    ctx->pc = 0x7F0E5F70u;
    ctx->downcount -= 3;
    // 7F0E5F70: cmpwi   r11, 0
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

label_7F0E5F74:
    ctx->pc = 0x7F0E5F74u;
    // 7F0E5F74: subfic  r7, r11, 192
    {
        u64 res = (u64)(u32)(s32)(192) + (u64)(~ctx->gpr[11]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0E5F78:
    ctx->pc = 0x7F0E5F78u;
    // 7F0E5F78: bc    4, 1, 0x7F0E5FE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E5FE0;
        }
    }

label_7F0E5F7C:
    ctx->pc = 0x7F0E5F7Cu;
    ctx->downcount -= 73;
    // 7F0E5F7C: xoris   r3, r11, 0x8000
    ctx->gpr[3] = ctx->gpr[11] ^ (0x8000u << 16);

label_7F0E5F80:
    ctx->pc = 0x7F0E5F80u;
    // 7F0E5F80: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E5F84:
    ctx->pc = 0x7F0E5F84u;
    // 7F0E5F84: stw     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5F88:
    ctx->pc = 0x7F0E5F88u;
    // 7F0E5F88: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E5F8C:
    ctx->pc = 0x7F0E5F8Cu;
    // 7F0E5F8C: lfd     f5, -2344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2344);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5F90:
    ctx->pc = 0x7F0E5F90u;
    // 7F0E5F90: stw     r0, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5F94:
    ctx->pc = 0x7F0E5F94u;
    // 7F0E5F94: lfs     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E5F98:
    ctx->pc = 0x7F0E5F98u;
    // 7F0E5F98: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5F98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5F9C:
    ctx->pc = 0x7F0E5F9Cu;
    // 7F0E5F9C: stw     r3, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5FA0:
    ctx->pc = 0x7F0E5FA0u;
    // 7F0E5FA0: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FA0u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0E5FA4:
    ctx->pc = 0x7F0E5FA4u;
    // 7F0E5FA4: lfs     f3, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E5FA8:
    ctx->pc = 0x7F0E5FA8u;
    // 7F0E5FA8: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5FAC:
    ctx->pc = 0x7F0E5FACu;
    // 7F0E5FAC: lfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E5FB0:
    ctx->pc = 0x7F0E5FB0u;
    // 7F0E5FB0: lfd     f2, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5FB4:
    ctx->pc = 0x7F0E5FB4u;
    // 7F0E5FB4: fdivs   f4, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FB4u)) return;
    ppc_fdivs(ctx, 4, 4, 0);

label_7F0E5FB8:
    ctx->pc = 0x7F0E5FB8u;
    // 7F0E5FB8: stw     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E5FBC:
    ctx->pc = 0x7F0E5FBCu;
    // 7F0E5FBC: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E5FC0:
    ctx->pc = 0x7F0E5FC0u;
    // 7F0E5FC0: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E5FC4:
    ctx->pc = 0x7F0E5FC4u;
    // 7F0E5FC4: fsubs   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FC4u)) return;
    ppc_fsubs(ctx, 2, 2, 5);

label_7F0E5FC8:
    ctx->pc = 0x7F0E5FC8u;
    // 7F0E5FC8: stfs     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E5FCC:
    ctx->pc = 0x7F0E5FCCu;
    // 7F0E5FCC: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FCCu)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0E5FD0:
    ctx->pc = 0x7F0E5FD0u;
    // 7F0E5FD0: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FD0u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F0E5FD4:
    ctx->pc = 0x7F0E5FD4u;
    // 7F0E5FD4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FD4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F0E5FD8:
    ctx->pc = 0x7F0E5FD8u;
    // 7F0E5FD8: stfs     f2, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E5FDC:
    ctx->pc = 0x7F0E5FDCu;
    // 7F0E5FDC: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E5FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E5FE0:
    ctx->pc = 0x7F0E5FE0u;
    ctx->downcount -= 9;
    // 7F0E5FE0: lwz     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E5FE4:
    ctx->pc = 0x7F0E5FE4u;
    // 7F0E5FE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E5FE8:
    ctx->pc = 0x7F0E5FE8u;
    // 7F0E5FE8: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E5FEC:
    ctx->pc = 0x7F0E5FECu;
    // 7F0E5FEC: lwz     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E5FF0:
    ctx->pc = 0x7F0E5FF0u;
    // 7F0E5FF0: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E5FF4:
    ctx->pc = 0x7F0E5FF4u;
    // 7F0E5FF4: mtctr    r7
    ctx->ctr = ctx->gpr[7];

label_7F0E5FF8:
    ctx->pc = 0x7F0E5FF8u;
    // 7F0E5FF8: cmpwi   r7, 0
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

label_7F0E5FFC:
    ctx->pc = 0x7F0E5FFCu;
    // 7F0E5FFC: bc    4, 1, 0x7F0E6044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6044;
        }
    }

label_7F0E6000:
    loop_7F0E6000(ctx);
    if (ctx->pc == 0x7F0E6044u) goto label_7F0E6044;
    return;
label_7F0E6004:
    ctx->pc = 0x7F0E6004u;
    // 7F0E6004: stw     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E6008:
    ctx->pc = 0x7F0E6008u;
    // 7F0E6008: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E600C:
    ctx->pc = 0x7F0E600Cu;
    // 7F0E600C: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6010:
    // 7F0E6010: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0E6014:
    ctx->pc = 0x7F0E6014u;
    // 7F0E6014: sth     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E6018:
    ctx->pc = 0x7F0E6018u;
    // 7F0E6018: sth     r6, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E601C:
    ctx->pc = 0x7F0E601Cu;
    // 7F0E601C: sth     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E6020:
    ctx->pc = 0x7F0E6020u;
    // 7F0E6020: sth     r6, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E6024:
    ctx->pc = 0x7F0E6024u;
    // 7F0E6024: sth     r6, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E6028:
    ctx->pc = 0x7F0E6028u;
    // 7F0E6028: sth     r6, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0E602C:
    ctx->pc = 0x7F0E602Cu;
    // 7F0E602C: stb     r6, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F0E6030:
    ctx->pc = 0x7F0E6030u;
    // 7F0E6030: stb     r6, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F0E6034:
    ctx->pc = 0x7F0E6034u;
    // 7F0E6034: stb     r6, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F0E6038:
    ctx->pc = 0x7F0E6038u;
    // 7F0E6038: stb     r6, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F0E603C:
    // 7F0E603C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F0E6040:
    // 7F0E6040: bc    16, 0, 0x7F0E6000
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6000u;
                return;
            }
            goto label_7F0E6000;
        }
    }

label_7F0E6044:
    ctx->pc = 0x7F0E6044u;
    ctx->downcount -= 13;
    // 7F0E6044: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6048:
    ctx->pc = 0x7F0E6048u;
    // 7F0E6048: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E604C:
    ctx->pc = 0x7F0E604Cu;
    // 7F0E604C: addi    r5, r3, -2328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2328);

label_7F0E6050:
    ctx->pc = 0x7F0E6050u;
    // 7F0E6050: lfs     f30, -2320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6050u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F0E6054:
    ctx->pc = 0x7F0E6054u;
    // 7F0E6054: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6054u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6058:
    ctx->pc = 0x7F0E6058u;
    // 7F0E6058: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E605C:
    ctx->pc = 0x7F0E605Cu;
    // 7F0E605C: lfs     f29, -2324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E605Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F0E6060:
    ctx->pc = 0x7F0E6060u;
    // 7F0E6060: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E6064:
    ctx->pc = 0x7F0E6064u;
    // 7F0E6064: fmuls   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F0E6064u)) return;
    ppc_fmuls(ctx, 0, 0, 28);

label_7F0E6068:
    ctx->pc = 0x7F0E6068u;
    // 7F0E6068: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6068u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E606C:
    ctx->pc = 0x7F0E606Cu;
    // 7F0E606C: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E606Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E6070:
    ctx->pc = 0x7F0E6070u;
    // 7F0E6070: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E6074:
    ctx->pc = 0x7F0E6074u;
    // 7F0E6074: b       0x7F0E6230
    {
            goto label_7F0E6230;
    }

label_7F0E6078:
    ctx->downcount -= 1;
    // 7F0E6078: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E607Cu;
            goto label_7F0E6A74;
    }

label_7F0E607C:
    ctx->pc = 0x7F0E607Cu;
    ctx->downcount -= 10;
    // 7F0E607C: fmadds f1, f30, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F0E607Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E6080:
    ctx->pc = 0x7F0E6080u;
    // 7F0E6080: lfs     f0, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6080u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6084:
    // 7F0E6084: addi    r4, r28, 132
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(132);

label_7F0E6088:
    // 7F0E6088: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E608C:
    // 7F0E608C: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F0E6090:
    ctx->pc = 0x7F0E6090u;
    // 7F0E6090: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6090u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E6094:
    ctx->pc = 0x7F0E6094u;
    // 7F0E6094: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6098:
    ctx->pc = 0x7F0E6098u;
    // 7F0E6098: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E609C:
    ctx->pc = 0x7F0E609Cu;
    // 7F0E609C: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E60A0:
    // 7F0E60A0: bl      0x7F3EF348
    {
            ctx->lr = 0x7F0E60A4u;
            ctx->pc = 0x7F3EF348u;
            return;
    }

label_7F0E60A4:
    ctx->downcount -= 2;
    // 7F0E60A4: or.   r29, r3, r3
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

label_7F0E60A8:
    // 7F0E60A8: bc    12, 0, 0x7F0E622C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E622C;
        }
    }

label_7F0E60AC:
    ctx->pc = 0x7F0E60ACu;
    ctx->downcount -= 15;
    // 7F0E60AC: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E60B0:
    // 7F0E60B0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E60B4:
    ctx->pc = 0x7F0E60B4u;
    // 7F0E60B4: lfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E60B8:
    // 7F0E60B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E60BC:
    ctx->pc = 0x7F0E60BCu;
    // 7F0E60BC: lfs     f3, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E60C0:
    ctx->pc = 0x7F0E60C0u;
    // 7F0E60C0: lfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E60C4:
    ctx->pc = 0x7F0E60C4u;
    // 7F0E60C4: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E60C4u)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0E60C8:
    ctx->pc = 0x7F0E60C8u;
    // 7F0E60C8: lfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E60CC:
    ctx->pc = 0x7F0E60CCu;
    // 7F0E60CC: lfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E60D0:
    ctx->pc = 0x7F0E60D0u;
    // 7F0E60D0: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E60D0u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F0E60D4:
    ctx->pc = 0x7F0E60D4u;
    // 7F0E60D4: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E60D8:
    ctx->pc = 0x7F0E60D8u;
    // 7F0E60D8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E60D8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E60DC:
    ctx->pc = 0x7F0E60DCu;
    // 7F0E60DC: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E60E0:
    ctx->pc = 0x7F0E60E0u;
    // 7F0E60E0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E60E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E60E4:
    // 7F0E60E4: bl      0x7F114F50
    {
            ctx->lr = 0x7F0E60E8u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F0E60E8:
    ctx->downcount -= 1;
    // 7F0E60E8: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E60ECu;
            goto label_7F0E6A50;
    }

label_7F0E60EC:
    ctx->downcount -= 56;
    // 7F0E60EC: li      r4, 910
    ctx->gpr[4] = (u32)(s32)(910);

label_7F0E60F0:
    // 7F0E60F0: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E60F4:
    // 7F0E60F4: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E60F8:
    // 7F0E60F8: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0E60FC:
    // 7F0E60FC: addi    r0, r3, 3640
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3640);

label_7F0E6100:
    // 7F0E6100: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0E6104:
    // 7F0E6104: rlwinm r0, r0, 20, 0, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0xFFF00000u;
    }

label_7F0E6108:
    // 7F0E6108: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F0E610C:
    // 7F0E610C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0E6110:
    // 7F0E6110: rlwinm r0, r0, 12, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFFFFFu;
    }

label_7F0E6114:
    // 7F0E6114: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0E6118:
    ctx->pc = 0x7F0E6118u;
    // 7F0E6118: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E611C:
    // 7F0E611C: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E6120u;
            goto label_7F0E6A50;
    }

label_7F0E6120:
    ctx->downcount -= 62;
    // 7F0E6120: li      r7, 910
    ctx->gpr[7] = (u32)(s32)(910);

label_7F0E6124:
    // 7F0E6124: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E6128:
    // 7F0E6128: divwu   r6, r3, r7
    {
        u32 divisor = ctx->gpr[7];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E612C:
    // 7F0E612C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E6130:
    ctx->pc = 0x7F0E6130u;
    // 7F0E6130: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E6134:
    // 7F0E6134: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E6138:
    // 7F0E6138: addi    r0, r5, 12832
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0E613C:
    // 7F0E613C: mullw   r5, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[5] = (u32)product;
    }

label_7F0E6140:
    // 7F0E6140: subf   r5, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F0E6144:
    // 7F0E6144: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0E6148:
    // 7F0E6148: addi    r0, r5, 3640
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(3640);

label_7F0E614C:
    // 7F0E614C: rlwinm r5, r0, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0E6150:
    // 7F0E6150: rlwinm r0, r0, 20, 0, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0xFFF00000u;
    }

label_7F0E6154:
    // 7F0E6154: rlwinm r5, r5, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
    }

label_7F0E6158:
    // 7F0E6158: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0E615C:
    // 7F0E615C: rlwinm r0, r0, 12, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFFFFFu;
    }

label_7F0E6160:
    // 7F0E6160: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0E6164:
    ctx->pc = 0x7F0E6164u;
    // 7F0E6164: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E6168:
    // 7F0E6168: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0E616Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0E616C:
    ctx->downcount -= 4;
    // 7F0E616C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E6170:
    // 7F0E6170: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E6174:
    // 7F0E6174: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E6178:
    // 7F0E6178: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E617Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E617C:
    ctx->downcount -= 1;
    // 7F0E617C: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6180u;
            goto label_7F0E6A74;
    }

label_7F0E6180:
    ctx->downcount -= 19;
    // 7F0E6180: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6184:
    // 7F0E6184: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6188:
    ctx->pc = 0x7F0E6188u;
    // 7F0E6188: lfs     f4, -2312(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6188u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E618C:
    // 7F0E618C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E6190:
    ctx->pc = 0x7F0E6190u;
    // 7F0E6190: lfs     f0, -2316(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6190u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6194:
    // 7F0E6194: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E6198:
    ctx->pc = 0x7F0E6198u;
    // 7F0E6198: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E619C:
    ctx->pc = 0x7F0E619Cu;
    // 7F0E619C: fmadds f1, f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E619Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E61A0:
    ctx->pc = 0x7F0E61A0u;
    // 7F0E61A0: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E61A4:
    ctx->pc = 0x7F0E61A4u;
    // 7F0E61A4: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E61A8:
    ctx->pc = 0x7F0E61A8u;
    // 7F0E61A8: fmuls   f4, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E61A8u)) return;
    ppc_fmuls(ctx, 4, 28, 1);

label_7F0E61AC:
    ctx->pc = 0x7F0E61ACu;
    // 7F0E61AC: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E61ACu)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F0E61B0:
    ctx->pc = 0x7F0E61B0u;
    // 7F0E61B0: fmuls   f1, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E61B0u)) return;
    ppc_fmuls(ctx, 1, 2, 4);

label_7F0E61B4:
    ctx->pc = 0x7F0E61B4u;
    // 7F0E61B4: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E61B4u)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F0E61B8:
    ctx->pc = 0x7F0E61B8u;
    // 7F0E61B8: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E61BC:
    ctx->pc = 0x7F0E61BCu;
    // 7F0E61BC: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E61C0:
    ctx->pc = 0x7F0E61C0u;
    // 7F0E61C0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E61C4:
    ctx->pc = 0x7F0E61C4u;
    // 7F0E61C4: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E61C8:
    // 7F0E61C8: bl      0x7F3EF4E0
    {
            ctx->lr = 0x7F0E61CCu;
            ctx->pc = 0x7F3EF4E0u;
            return;
    }

label_7F0E61CC:
    ctx->pc = 0x7F0E61CCu;
    ctx->downcount -= 6;
    // 7F0E61CC: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E61D0:
    // 7F0E61D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E61D4:
    ctx->pc = 0x7F0E61D4u;
    // 7F0E61D4: lbz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F0E61D8:
    ctx->pc = 0x7F0E61D8u;
    // 7F0E61D8: lbz     r6, 149(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(149);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F0E61DC:
    ctx->pc = 0x7F0E61DCu;
    // 7F0E61DC: lbz     r7, 150(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(150);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0E61E0:
    // 7F0E61E0: bl      0x7F3EF5B8
    {
            ctx->lr = 0x7F0E61E4u;
            ctx->pc = 0x7F3EF5B8u;
            return;
    }

label_7F0E61E4:
    ctx->downcount -= 42;
    // 7F0E61E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E61E8:
    // 7F0E61E8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E61EC:
    // 7F0E61EC: addi    r4, r3, -2316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2316);

label_7F0E61F0:
    ctx->pc = 0x7F0E61F0u;
    // 7F0E61F0: lfs     f1, -2308(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E61F4:
    ctx->pc = 0x7F0E61F4u;
    // 7F0E61F4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E61F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E61F8:
    // 7F0E61F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E61FC:
    ctx->pc = 0x7F0E61FCu;
    // 7F0E61FC: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6200:
    ctx->pc = 0x7F0E6200u;
    // 7F0E6200: fdivs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F0E6200u)) return;
    ppc_fdivs(ctx, 0, 0, 28);

label_7F0E6204:
    ctx->pc = 0x7F0E6204u;
    // 7F0E6204: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6204u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F0E6208:
    // 7F0E6208: bl      0x7F3EF69C
    {
            ctx->lr = 0x7F0E620Cu;
            ctx->pc = 0x7F3EF69Cu;
            return;
    }

label_7F0E620C:
    ctx->downcount -= 1;
    // 7F0E620C: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6210u;
            goto label_7F0E6A74;
    }

label_7F0E6210:
    ctx->downcount -= 7;
    // 7F0E6210: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6214:
    ctx->pc = 0x7F0E6214u;
    // 7F0E6214: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6218:
    // 7F0E6218: addi    r5, r4, -2352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2352);

label_7F0E621C:
    ctx->pc = 0x7F0E621Cu;
    // 7F0E621C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E621Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6220:
    // 7F0E6220: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E6224:
    ctx->pc = 0x7F0E6224u;
    // 7F0E6224: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6224u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F0E6228:
    // 7F0E6228: bl      0x7F3EF6C8
    {
            ctx->lr = 0x7F0E622Cu;
            ctx->pc = 0x7F3EF6C8u;
            return;
    }

label_7F0E622C:
    ctx->downcount -= 1;
    // 7F0E622C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E6230:
    ctx->downcount -= 2;
    // 7F0E6230: cmpw    r30, r31
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6234:
    // 7F0E6234: bc    12, 0, 0x7F0E6078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6078u;
                return;
            }
            goto label_7F0E6078;
        }
    }

label_7F0E6238:
    ctx->pc = 0x7F0E6238u;
    ctx->downcount -= 10;
    // 7F0E6238: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E623C:
    ctx->pc = 0x7F0E623Cu;
    // 7F0E623C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6240:
    ctx->pc = 0x7F0E6240u;
    // 7F0E6240: lfs     f30, -2320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6240u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F0E6244:
    ctx->pc = 0x7F0E6244u;
    // 7F0E6244: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0E6248:
    ctx->pc = 0x7F0E6248u;
    // 7F0E6248: lfs     f29, -2312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6248u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F0E624C:
    ctx->pc = 0x7F0E624Cu;
    // 7F0E624C: fmuls   f0, f30, f28
    if (!ppc_fp_available_inline(ctx, 0x7F0E624Cu)) return;
    ppc_fmuls(ctx, 0, 30, 28);

label_7F0E6250:
    ctx->pc = 0x7F0E6250u;
    // 7F0E6250: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6250u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E6254:
    ctx->pc = 0x7F0E6254u;
    // 7F0E6254: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E6258:
    ctx->pc = 0x7F0E6258u;
    // 7F0E6258: lwz     r27, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F0E625C:
    ctx->pc = 0x7F0E625Cu;
    // 7F0E625C: b       0x7F0E6384
    {
            goto label_7F0E6384;
    }

label_7F0E6260:
    ctx->downcount -= 1;
    // 7F0E6260: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6264u;
            goto label_7F0E6A74;
    }

label_7F0E6264:
    ctx->pc = 0x7F0E6264u;
    ctx->downcount -= 10;
    // 7F0E6264: fmadds f1, f29, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F0E6264u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E6268:
    ctx->pc = 0x7F0E6268u;
    // 7F0E6268: lfs     f0, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6268u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E626C:
    // 7F0E626C: addi    r4, r28, 132
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(132);

label_7F0E6270:
    // 7F0E6270: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E6274:
    // 7F0E6274: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F0E6278:
    ctx->pc = 0x7F0E6278u;
    // 7F0E6278: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6278u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E627C:
    ctx->pc = 0x7F0E627Cu;
    // 7F0E627C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E627Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6280:
    ctx->pc = 0x7F0E6280u;
    // 7F0E6280: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6284:
    ctx->pc = 0x7F0E6284u;
    // 7F0E6284: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6288:
    // 7F0E6288: bl      0x7F3EF348
    {
            ctx->lr = 0x7F0E628Cu;
            ctx->pc = 0x7F3EF348u;
            return;
    }

label_7F0E628C:
    ctx->downcount -= 2;
    // 7F0E628C: or.   r30, r3, r3
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

label_7F0E6290:
    // 7F0E6290: bc    12, 0, 0x7F0E6380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6380;
        }
    }

label_7F0E6294:
    ctx->pc = 0x7F0E6294u;
    ctx->downcount -= 15;
    // 7F0E6294: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6298:
    // 7F0E6298: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E629C:
    ctx->pc = 0x7F0E629Cu;
    // 7F0E629C: lfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E629Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E62A0:
    // 7F0E62A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E62A4:
    ctx->pc = 0x7F0E62A4u;
    // 7F0E62A4: lfs     f3, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E62A8:
    ctx->pc = 0x7F0E62A8u;
    // 7F0E62A8: lfs     f2, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E62AC:
    ctx->pc = 0x7F0E62ACu;
    // 7F0E62AC: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E62ACu)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0E62B0:
    ctx->pc = 0x7F0E62B0u;
    // 7F0E62B0: lfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E62B4:
    ctx->pc = 0x7F0E62B4u;
    // 7F0E62B4: lfs     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E62B8:
    ctx->pc = 0x7F0E62B8u;
    // 7F0E62B8: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E62B8u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F0E62BC:
    ctx->pc = 0x7F0E62BCu;
    // 7F0E62BC: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E62C0:
    ctx->pc = 0x7F0E62C0u;
    // 7F0E62C0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E62C0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E62C4:
    ctx->pc = 0x7F0E62C4u;
    // 7F0E62C4: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E62C8:
    ctx->pc = 0x7F0E62C8u;
    // 7F0E62C8: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E62CC:
    // 7F0E62CC: bl      0x7F114F50
    {
            ctx->lr = 0x7F0E62D0u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F0E62D0:
    ctx->downcount -= 1;
    // 7F0E62D0: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E62D4u;
            goto label_7F0E6A74;
    }

label_7F0E62D4:
    ctx->downcount -= 19;
    // 7F0E62D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E62D8:
    // 7F0E62D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E62DC:
    ctx->pc = 0x7F0E62DCu;
    // 7F0E62DC: lfs     f4, -2316(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E62E0:
    // 7F0E62E0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E62E4:
    ctx->pc = 0x7F0E62E4u;
    // 7F0E62E4: lfs     f0, -2304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E62E8:
    // 7F0E62E8: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E62EC:
    ctx->pc = 0x7F0E62ECu;
    // 7F0E62EC: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E62F0:
    ctx->pc = 0x7F0E62F0u;
    // 7F0E62F0: fmadds f1, f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E62F0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E62F4:
    ctx->pc = 0x7F0E62F4u;
    // 7F0E62F4: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E62F8:
    ctx->pc = 0x7F0E62F8u;
    // 7F0E62F8: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E62F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E62FC:
    ctx->pc = 0x7F0E62FCu;
    // 7F0E62FC: fmuls   f4, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E62FCu)) return;
    ppc_fmuls(ctx, 4, 28, 1);

label_7F0E6300:
    ctx->pc = 0x7F0E6300u;
    // 7F0E6300: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E6300u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F0E6304:
    ctx->pc = 0x7F0E6304u;
    // 7F0E6304: fmuls   f1, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E6304u)) return;
    ppc_fmuls(ctx, 1, 2, 4);

label_7F0E6308:
    ctx->pc = 0x7F0E6308u;
    // 7F0E6308: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E6308u)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F0E630C:
    ctx->pc = 0x7F0E630Cu;
    // 7F0E630C: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E630Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6310:
    ctx->pc = 0x7F0E6310u;
    // 7F0E6310: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6310u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6314:
    ctx->pc = 0x7F0E6314u;
    // 7F0E6314: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6314u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6318:
    ctx->pc = 0x7F0E6318u;
    // 7F0E6318: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E631C:
    // 7F0E631C: bl      0x7F3EF4E0
    {
            ctx->lr = 0x7F0E6320u;
            ctx->pc = 0x7F3EF4E0u;
            return;
    }

label_7F0E6320:
    ctx->pc = 0x7F0E6320u;
    ctx->downcount -= 6;
    // 7F0E6320: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6324:
    // 7F0E6324: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E6328:
    ctx->pc = 0x7F0E6328u;
    // 7F0E6328: lbz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F0E632C:
    ctx->pc = 0x7F0E632Cu;
    // 7F0E632C: lbz     r6, 149(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(149);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F0E6330:
    ctx->pc = 0x7F0E6330u;
    // 7F0E6330: lbz     r7, 150(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(150);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0E6334:
    // 7F0E6334: bl      0x7F3EF5B8
    {
            ctx->lr = 0x7F0E6338u;
            ctx->pc = 0x7F3EF5B8u;
            return;
    }

label_7F0E6338:
    ctx->downcount -= 42;
    // 7F0E6338: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E633C:
    // 7F0E633C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6340:
    // 7F0E6340: addi    r4, r3, -2296
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2296);

label_7F0E6344:
    ctx->pc = 0x7F0E6344u;
    // 7F0E6344: lfs     f1, -2300(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6344u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6348:
    ctx->pc = 0x7F0E6348u;
    // 7F0E6348: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6348u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E634C:
    // 7F0E634C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E6350:
    ctx->pc = 0x7F0E6350u;
    // 7F0E6350: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6354:
    ctx->pc = 0x7F0E6354u;
    // 7F0E6354: fdivs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F0E6354u)) return;
    ppc_fdivs(ctx, 0, 0, 28);

label_7F0E6358:
    ctx->pc = 0x7F0E6358u;
    // 7F0E6358: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6358u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F0E635C:
    // 7F0E635C: bl      0x7F3EF69C
    {
            ctx->lr = 0x7F0E6360u;
            ctx->pc = 0x7F3EF69Cu;
            return;
    }

label_7F0E6360:
    ctx->downcount -= 1;
    // 7F0E6360: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6364u;
            goto label_7F0E6A74;
    }

label_7F0E6364:
    ctx->downcount -= 7;
    // 7F0E6364: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6368:
    ctx->pc = 0x7F0E6368u;
    // 7F0E6368: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E636C:
    // 7F0E636C: addi    r5, r4, -2352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2352);

label_7F0E6370:
    ctx->pc = 0x7F0E6370u;
    // 7F0E6370: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6370u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6374:
    // 7F0E6374: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E6378:
    ctx->pc = 0x7F0E6378u;
    // 7F0E6378: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6378u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F0E637C:
    // 7F0E637C: bl      0x7F3EF6C8
    {
            ctx->lr = 0x7F0E6380u;
            ctx->pc = 0x7F3EF6C8u;
            return;
    }

label_7F0E6380:
    ctx->downcount -= 1;
    // 7F0E6380: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0E6384:
    ctx->downcount -= 2;
    // 7F0E6384: cmpw    r29, r27
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6388:
    // 7F0E6388: bc    12, 0, 0x7F0E6260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6260u;
                return;
            }
            goto label_7F0E6260;
        }
    }

label_7F0E638C:
    ctx->pc = 0x7F0E638Cu;
    ctx->downcount -= 8;
    // 7F0E638C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6390:
    ctx->pc = 0x7F0E6390u;
    // 7F0E6390: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6394:
    ctx->pc = 0x7F0E6394u;
    // 7F0E6394: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6398:
    ctx->pc = 0x7F0E6398u;
    // 7F0E6398: lfs     f29, -2284(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6398u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F0E639C:
    ctx->pc = 0x7F0E639Cu;
    // 7F0E639C: lfs     f31, -2288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E639Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F0E63A0:
    ctx->pc = 0x7F0E63A0u;
    // 7F0E63A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E63A4:
    ctx->pc = 0x7F0E63A4u;
    // 7F0E63A4: lfs     f30, -2292(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F0E63A8:
    ctx->pc = 0x7F0E63A8u;
    // 7F0E63A8: b       0x7F0E64F0
    {
            goto label_7F0E64F0;
    }

label_7F0E63AC:
    ctx->downcount -= 1;
    // 7F0E63AC: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E63B0u;
            goto label_7F0E6A74;
    }

label_7F0E63B0:
    ctx->pc = 0x7F0E63B0u;
    ctx->downcount -= 11;
    // 7F0E63B0: lfs     f0, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63B0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E63B4:
    ctx->pc = 0x7F0E63B4u;
    // 7F0E63B4: fmadds f1, f29, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0E63B4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E63B8:
    // 7F0E63B8: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0E63BC:
    // 7F0E63BC: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E63C0:
    ctx->pc = 0x7F0E63C0u;
    // 7F0E63C0: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E63C0u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F0E63C4:
    // 7F0E63C4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F0E63C8:
    ctx->pc = 0x7F0E63C8u;
    // 7F0E63C8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E63C8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E63CC:
    ctx->pc = 0x7F0E63CCu;
    // 7F0E63CC: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E63D0:
    ctx->pc = 0x7F0E63D0u;
    // 7F0E63D0: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E63D4:
    ctx->pc = 0x7F0E63D4u;
    // 7F0E63D4: lwz     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E63D8:
    // 7F0E63D8: bl      0x7F3EF348
    {
            ctx->lr = 0x7F0E63DCu;
            ctx->pc = 0x7F3EF348u;
            return;
    }

label_7F0E63DC:
    ctx->downcount -= 2;
    // 7F0E63DC: or.   r29, r3, r3
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

label_7F0E63E0:
    // 7F0E63E0: bc    12, 0, 0x7F0E64EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E64EC;
        }
    }

label_7F0E63E4:
    ctx->pc = 0x7F0E63E4u;
    ctx->downcount -= 15;
    // 7F0E63E4: lfs     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E63E8:
    // 7F0E63E8: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E63EC:
    ctx->pc = 0x7F0E63ECu;
    // 7F0E63EC: lfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E63F0:
    // 7F0E63F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E63F4:
    ctx->pc = 0x7F0E63F4u;
    // 7F0E63F4: lfs     f3, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E63F8:
    ctx->pc = 0x7F0E63F8u;
    // 7F0E63F8: lfs     f2, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E63F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E63FC:
    ctx->pc = 0x7F0E63FCu;
    // 7F0E63FC: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E63FCu)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0E6400:
    ctx->pc = 0x7F0E6400u;
    // 7F0E6400: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6404:
    ctx->pc = 0x7F0E6404u;
    // 7F0E6404: lfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6408:
    ctx->pc = 0x7F0E6408u;
    // 7F0E6408: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6408u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F0E640C:
    ctx->pc = 0x7F0E640Cu;
    // 7F0E640C: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E640Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6410:
    ctx->pc = 0x7F0E6410u;
    // 7F0E6410: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6410u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E6414:
    ctx->pc = 0x7F0E6414u;
    // 7F0E6414: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E6418:
    ctx->pc = 0x7F0E6418u;
    // 7F0E6418: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E641C:
    // 7F0E641C: bl      0x7F114F50
    {
            ctx->lr = 0x7F0E6420u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F0E6420:
    ctx->downcount -= 1;
    // 7F0E6420: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E6424u;
            goto label_7F0E6A50;
    }

label_7F0E6424:
    ctx->downcount -= 50;
    // 7F0E6424: li      r4, 910
    ctx->gpr[4] = (u32)(s32)(910);

label_7F0E6428:
    // 7F0E6428: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E642C:
    // 7F0E642C: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E6430:
    // 7F0E6430: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0E6434:
    // 7F0E6434: addi    r0, r3, -455
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-455);

label_7F0E6438:
    ctx->pc = 0x7F0E6438u;
    // 7F0E6438: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E643C:
    // 7F0E643C: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E6440u;
            goto label_7F0E6A50;
    }

label_7F0E6440:
    ctx->downcount -= 56;
    // 7F0E6440: li      r7, 910
    ctx->gpr[7] = (u32)(s32)(910);

label_7F0E6444:
    // 7F0E6444: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E6448:
    // 7F0E6448: divwu   r6, r3, r7
    {
        u32 divisor = ctx->gpr[7];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E644C:
    // 7F0E644C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E6450:
    ctx->pc = 0x7F0E6450u;
    // 7F0E6450: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E6454:
    // 7F0E6454: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E6458:
    // 7F0E6458: addi    r0, r5, 12832
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0E645C:
    // 7F0E645C: mullw   r5, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[5] = (u32)product;
    }

label_7F0E6460:
    // 7F0E6460: subf   r5, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F0E6464:
    // 7F0E6464: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0E6468:
    // 7F0E6468: addi    r0, r5, -455
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-455);

label_7F0E646C:
    ctx->pc = 0x7F0E646Cu;
    // 7F0E646C: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E6470:
    // 7F0E6470: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0E6474u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0E6474:
    ctx->downcount -= 4;
    // 7F0E6474: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E6478:
    // 7F0E6478: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E647C:
    // 7F0E647C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E6480:
    // 7F0E6480: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E6484u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E6484:
    ctx->downcount -= 1;
    // 7F0E6484: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6488u;
            goto label_7F0E6A74;
    }

label_7F0E6488:
    ctx->downcount -= 19;
    // 7F0E6488: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E648C:
    // 7F0E648C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6490:
    ctx->pc = 0x7F0E6490u;
    // 7F0E6490: lfs     f4, -2312(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6490u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E6494:
    // 7F0E6494: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E6498:
    ctx->pc = 0x7F0E6498u;
    // 7F0E6498: lfs     f0, -2280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6498u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E649C:
    // 7F0E649C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E64A0:
    ctx->pc = 0x7F0E64A0u;
    // 7F0E64A0: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E64A4:
    ctx->pc = 0x7F0E64A4u;
    // 7F0E64A4: fmadds f1, f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E64A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E64A8:
    ctx->pc = 0x7F0E64A8u;
    // 7F0E64A8: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E64AC:
    ctx->pc = 0x7F0E64ACu;
    // 7F0E64AC: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E64B0:
    ctx->pc = 0x7F0E64B0u;
    // 7F0E64B0: fmuls   f4, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E64B0u)) return;
    ppc_fmuls(ctx, 4, 28, 1);

label_7F0E64B4:
    ctx->pc = 0x7F0E64B4u;
    // 7F0E64B4: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E64B4u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F0E64B8:
    ctx->pc = 0x7F0E64B8u;
    // 7F0E64B8: fmuls   f1, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E64B8u)) return;
    ppc_fmuls(ctx, 1, 2, 4);

label_7F0E64BC:
    ctx->pc = 0x7F0E64BCu;
    // 7F0E64BC: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E64BCu)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F0E64C0:
    ctx->pc = 0x7F0E64C0u;
    // 7F0E64C0: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E64C4:
    ctx->pc = 0x7F0E64C4u;
    // 7F0E64C4: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E64C8:
    ctx->pc = 0x7F0E64C8u;
    // 7F0E64C8: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E64C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E64CC:
    ctx->pc = 0x7F0E64CCu;
    // 7F0E64CC: lwz     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E64D0:
    // 7F0E64D0: bl      0x7F3EF4E0
    {
            ctx->lr = 0x7F0E64D4u;
            ctx->pc = 0x7F3EF4E0u;
            return;
    }

label_7F0E64D4:
    ctx->pc = 0x7F0E64D4u;
    ctx->downcount -= 6;
    // 7F0E64D4: lwz     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E64D8:
    // 7F0E64D8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E64DC:
    ctx->pc = 0x7F0E64DCu;
    // 7F0E64DC: lbz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F0E64E0:
    ctx->pc = 0x7F0E64E0u;
    // 7F0E64E0: lbz     r6, 149(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(149);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F0E64E4:
    ctx->pc = 0x7F0E64E4u;
    // 7F0E64E4: lbz     r7, 150(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(150);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0E64E8:
    // 7F0E64E8: bl      0x7F3EF5B8
    {
            ctx->lr = 0x7F0E64ECu;
            ctx->pc = 0x7F3EF5B8u;
            return;
    }

label_7F0E64EC:
    ctx->downcount -= 1;
    // 7F0E64EC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E64F0:
    ctx->downcount -= 2;
    // 7F0E64F0: cmpw    r30, r31
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E64F4:
    // 7F0E64F4: bc    12, 0, 0x7F0E63AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E63ACu;
                return;
            }
            goto label_7F0E63AC;
        }
    }

label_7F0E64F8:
    ctx->pc = 0x7F0E64F8u;
    ctx->downcount -= 6;
    // 7F0E64F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E64FC:
    ctx->pc = 0x7F0E64FCu;
    // 7F0E64FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6500:
    ctx->pc = 0x7F0E6500u;
    // 7F0E6500: lfs     f30, -2320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6500u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F0E6504:
    ctx->pc = 0x7F0E6504u;
    // 7F0E6504: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E6508:
    ctx->pc = 0x7F0E6508u;
    // 7F0E6508: lfs     f31, -2276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6508u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F0E650C:
    ctx->pc = 0x7F0E650Cu;
    // 7F0E650C: b       0x7F0E6698
    {
            goto label_7F0E6698;
    }

label_7F0E6510:
    ctx->downcount -= 1;
    // 7F0E6510: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6514u;
            goto label_7F0E6A74;
    }

label_7F0E6514:
    ctx->pc = 0x7F0E6514u;
    ctx->downcount -= 10;
    // 7F0E6514: fmadds f1, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0E6514u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E6518:
    ctx->pc = 0x7F0E6518u;
    // 7F0E6518: lfs     f0, 152(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6518u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E651C:
    // 7F0E651C: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0E6520:
    // 7F0E6520: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E6524:
    // 7F0E6524: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F0E6528:
    ctx->pc = 0x7F0E6528u;
    // 7F0E6528: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6528u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F0E652C:
    ctx->pc = 0x7F0E652Cu;
    // 7F0E652C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E652Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6530:
    ctx->pc = 0x7F0E6530u;
    // 7F0E6530: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6534:
    ctx->pc = 0x7F0E6534u;
    // 7F0E6534: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6538:
    // 7F0E6538: bl      0x7F3EF348
    {
            ctx->lr = 0x7F0E653Cu;
            ctx->pc = 0x7F3EF348u;
            return;
    }

label_7F0E653C:
    ctx->downcount -= 2;
    // 7F0E653C: or.   r29, r3, r3
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

label_7F0E6540:
    // 7F0E6540: bc    12, 0, 0x7F0E6694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6694;
        }
    }

label_7F0E6544:
    ctx->pc = 0x7F0E6544u;
    ctx->downcount -= 15;
    // 7F0E6544: lfs     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6548:
    // 7F0E6548: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E654C:
    ctx->pc = 0x7F0E654Cu;
    // 7F0E654C: lfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E654Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6550:
    // 7F0E6550: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E6554:
    ctx->pc = 0x7F0E6554u;
    // 7F0E6554: lfs     f3, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6554u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6558:
    ctx->pc = 0x7F0E6558u;
    // 7F0E6558: lfs     f2, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E655C:
    ctx->pc = 0x7F0E655Cu;
    // 7F0E655C: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E655Cu)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0E6560:
    ctx->pc = 0x7F0E6560u;
    // 7F0E6560: lfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6560u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6564:
    ctx->pc = 0x7F0E6564u;
    // 7F0E6564: lfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6568:
    ctx->pc = 0x7F0E6568u;
    // 7F0E6568: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6568u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F0E656C:
    ctx->pc = 0x7F0E656Cu;
    // 7F0E656C: stfs     f4, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E656Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6570:
    ctx->pc = 0x7F0E6570u;
    // 7F0E6570: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6570u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E6574:
    ctx->pc = 0x7F0E6574u;
    // 7F0E6574: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E6578:
    ctx->pc = 0x7F0E6578u;
    // 7F0E6578: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6578u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E657C:
    // 7F0E657C: bl      0x7F114F50
    {
            ctx->lr = 0x7F0E6580u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F0E6580:
    ctx->downcount -= 1;
    // 7F0E6580: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E6584u;
            goto label_7F0E6A50;
    }

label_7F0E6584:
    ctx->downcount -= 50;
    // 7F0E6584: li      r4, 910
    ctx->gpr[4] = (u32)(s32)(910);

label_7F0E6588:
    // 7F0E6588: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E658C:
    // 7F0E658C: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F0E6590:
    // 7F0E6590: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0E6594:
    // 7F0E6594: addi    r0, r3, -455
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-455);

label_7F0E6598:
    ctx->pc = 0x7F0E6598u;
    // 7F0E6598: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E659C:
    // 7F0E659C: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E65A0u;
            goto label_7F0E6A50;
    }

label_7F0E65A0:
    ctx->downcount -= 56;
    // 7F0E65A0: li      r7, 910
    ctx->gpr[7] = (u32)(s32)(910);

label_7F0E65A4:
    // 7F0E65A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E65A8:
    // 7F0E65A8: divwu   r6, r3, r7
    {
        u32 divisor = ctx->gpr[7];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F0E65AC:
    // 7F0E65AC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E65B0:
    ctx->pc = 0x7F0E65B0u;
    // 7F0E65B0: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E65B4:
    // 7F0E65B4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E65B8:
    // 7F0E65B8: addi    r0, r5, 12832
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0E65BC:
    // 7F0E65BC: mullw   r5, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[5] = (u32)product;
    }

label_7F0E65C0:
    // 7F0E65C0: subf   r5, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F0E65C4:
    // 7F0E65C4: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0E65C8:
    // 7F0E65C8: addi    r0, r5, -455
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-455);

label_7F0E65CC:
    ctx->pc = 0x7F0E65CCu;
    // 7F0E65CC: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E65D0:
    // 7F0E65D0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0E65D4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0E65D4:
    ctx->downcount -= 4;
    // 7F0E65D4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E65D8:
    // 7F0E65D8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E65DC:
    // 7F0E65DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E65E0:
    // 7F0E65E0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0E65E4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0E65E4:
    ctx->downcount -= 1;
    // 7F0E65E4: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E65E8u;
            goto label_7F0E6A74;
    }

label_7F0E65E8:
    ctx->downcount -= 19;
    // 7F0E65E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E65EC:
    // 7F0E65EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E65F0:
    ctx->pc = 0x7F0E65F0u;
    // 7F0E65F0: lfs     f4, -2312(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E65F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E65F4:
    // 7F0E65F4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E65F8:
    ctx->pc = 0x7F0E65F8u;
    // 7F0E65F8: lfs     f0, -2272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E65F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E65FC:
    // 7F0E65FC: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E6600:
    ctx->pc = 0x7F0E6600u;
    // 7F0E6600: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6604:
    ctx->pc = 0x7F0E6604u;
    // 7F0E6604: fmadds f1, f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6604u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F0E6608:
    ctx->pc = 0x7F0E6608u;
    // 7F0E6608: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6608u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E660C:
    ctx->pc = 0x7F0E660Cu;
    // 7F0E660C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E660Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6610:
    ctx->pc = 0x7F0E6610u;
    // 7F0E6610: fmuls   f4, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6610u)) return;
    ppc_fmuls(ctx, 4, 28, 1);

label_7F0E6614:
    ctx->pc = 0x7F0E6614u;
    // 7F0E6614: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E6614u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F0E6618:
    ctx->pc = 0x7F0E6618u;
    // 7F0E6618: fmuls   f1, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E6618u)) return;
    ppc_fmuls(ctx, 1, 2, 4);

label_7F0E661C:
    ctx->pc = 0x7F0E661Cu;
    // 7F0E661C: fmuls   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0E661Cu)) return;
    ppc_fmuls(ctx, 0, 0, 4);

label_7F0E6620:
    ctx->pc = 0x7F0E6620u;
    // 7F0E6620: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6624:
    ctx->pc = 0x7F0E6624u;
    // 7F0E6624: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6624u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6628:
    ctx->pc = 0x7F0E6628u;
    // 7F0E6628: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6628u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E662C:
    ctx->pc = 0x7F0E662Cu;
    // 7F0E662C: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6630:
    // 7F0E6630: bl      0x7F3EF4E0
    {
            ctx->lr = 0x7F0E6634u;
            ctx->pc = 0x7F3EF4E0u;
            return;
    }

label_7F0E6634:
    ctx->pc = 0x7F0E6634u;
    ctx->downcount -= 6;
    // 7F0E6634: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6638:
    // 7F0E6638: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E663C:
    ctx->pc = 0x7F0E663Cu;
    // 7F0E663C: lbz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F0E6640:
    ctx->pc = 0x7F0E6640u;
    // 7F0E6640: lbz     r6, 149(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(149);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F0E6644:
    ctx->pc = 0x7F0E6644u;
    // 7F0E6644: lbz     r7, 150(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(150);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0E6648:
    // 7F0E6648: bl      0x7F3EF5B8
    {
            ctx->lr = 0x7F0E664Cu;
            ctx->pc = 0x7F3EF5B8u;
            return;
    }

label_7F0E664C:
    ctx->downcount -= 42;
    // 7F0E664C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6650:
    // 7F0E6650: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6654:
    // 7F0E6654: addi    r4, r3, -2264
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2264);

label_7F0E6658:
    ctx->pc = 0x7F0E6658u;
    // 7F0E6658: lfs     f1, -2268(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6658u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E665C:
    ctx->pc = 0x7F0E665Cu;
    // 7F0E665C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E665Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6660:
    // 7F0E6660: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E6664:
    ctx->pc = 0x7F0E6664u;
    // 7F0E6664: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6668:
    ctx->pc = 0x7F0E6668u;
    // 7F0E6668: fdivs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F0E6668u)) return;
    ppc_fdivs(ctx, 0, 0, 28);

label_7F0E666C:
    ctx->pc = 0x7F0E666Cu;
    // 7F0E666C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E666Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F0E6670:
    // 7F0E6670: bl      0x7F3EF69C
    {
            ctx->lr = 0x7F0E6674u;
            ctx->pc = 0x7F3EF69Cu;
            return;
    }

label_7F0E6674:
    ctx->downcount -= 1;
    // 7F0E6674: bl      0x7F0E6A74
    {
            ctx->lr = 0x7F0E6678u;
            goto label_7F0E6A74;
    }

label_7F0E6678:
    ctx->downcount -= 7;
    // 7F0E6678: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E667C:
    ctx->pc = 0x7F0E667Cu;
    // 7F0E667C: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6680:
    // 7F0E6680: addi    r5, r4, -2352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2352);

label_7F0E6684:
    ctx->pc = 0x7F0E6684u;
    // 7F0E6684: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6684u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6688:
    // 7F0E6688: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E668C:
    ctx->pc = 0x7F0E668Cu;
    // 7F0E668C: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E668Cu)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F0E6690:
    // 7F0E6690: bl      0x7F3EF6C8
    {
            ctx->lr = 0x7F0E6694u;
            ctx->pc = 0x7F3EF6C8u;
            return;
    }

label_7F0E6694:
    ctx->downcount -= 1;
    // 7F0E6694: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0E6698:
    ctx->downcount -= 2;
    // 7F0E6698: cmpw    r30, r31
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E669C:
    // 7F0E669C: bc    12, 0, 0x7F0E6510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6510u;
                return;
            }
            goto label_7F0E6510;
        }
    }

label_7F0E66A0:
    ctx->pc = 0x7F0E66A0u;
    ctx->downcount -= 25;
    // 7F0E66A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E66A4:
    ctx->pc = 0x7F0E66A4u;
    // 7F0E66A4: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E66A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F0E66A4u);
        if (ctx->exception) return;
    }

label_7F0E66A8:
    ctx->pc = 0x7F0E66A8u;
    // 7F0E66A8: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E66A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E66AC:
    ctx->pc = 0x7F0E66ACu;
    // 7F0E66AC: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E66ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F0E66ACu);
        if (ctx->exception) return;
    }

label_7F0E66B0:
    ctx->pc = 0x7F0E66B0u;
    // 7F0E66B0: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E66B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E66B4:
    ctx->pc = 0x7F0E66B4u;
    // 7F0E66B4: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E66B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F0E66B4u);
        if (ctx->exception) return;
    }

label_7F0E66B8:
    ctx->pc = 0x7F0E66B8u;
    // 7F0E66B8: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E66B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E66BC:
    ctx->pc = 0x7F0E66BCu;
    // 7F0E66BC: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0E66BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F0E66BCu);
        if (ctx->exception) return;
    }

label_7F0E66C0:
    ctx->pc = 0x7F0E66C0u;
    // 7F0E66C0: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E66C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E66C4:
    ctx->pc = 0x7F0E66C4u;
    // 7F0E66C4: lmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E66C8:
    ctx->pc = 0x7F0E66C8u;
    // 7F0E66C8: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E66CC:
    ctx->pc = 0x7F0E66CCu;
    // 7F0E66CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E66D0:
    ctx->pc = 0x7F0E66D0u;
    // 7F0E66D0: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F0E66D4:
    ctx->pc = 0x7F0E66D4u;
    // 7F0E66D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E66D8:
    ctx->pc = 0x7F0E66D8u;
    ctx->downcount -= 22;
    // 7F0E66D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E66DC:
    ctx->pc = 0x7F0E66DCu;
    // 7F0E66DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E66E0:
    ctx->pc = 0x7F0E66E0u;
    // 7F0E66E0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E66E4:
    ctx->pc = 0x7F0E66E4u;
    // 7F0E66E4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E66E8:
    ctx->pc = 0x7F0E66E8u;
    // 7F0E66E8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0E66EC:
    ctx->pc = 0x7F0E66ECu;
    // 7F0E66EC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E66F0:
    ctx->pc = 0x7F0E66F0u;
    // 7F0E66F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E66F4:
    ctx->pc = 0x7F0E66F4u;
    // 7F0E66F4: addi    r3, r5, 12860
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(12860);

label_7F0E66F8:
    ctx->pc = 0x7F0E66F8u;
    // 7F0E66F8: addi    r6, r31, 64
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(64);

label_7F0E66FC:
    ctx->pc = 0x7F0E66FCu;
    // 7F0E66FC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F0E6700:
    ctx->pc = 0x7F0E6700u;
    // 7F0E6700: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E6704:
    loop_7F0E6704(ctx);
    if (ctx->pc == 0x7F0E6718u) goto label_7F0E6718;
    return;
label_7F0E6708:
    ctx->pc = 0x7F0E6708u;
    // 7F0E6708: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F0E670C:
    ctx->pc = 0x7F0E670Cu;
    // 7F0E670C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6710:
    ctx->pc = 0x7F0E6710u;
    // 7F0E6710: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F0E6714:
    // 7F0E6714: bc    16, 0, 0x7F0E6704
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6704u;
                return;
            }
            goto label_7F0E6704;
        }
    }

label_7F0E6718:
    ctx->pc = 0x7F0E6718u;
    ctx->downcount -= 28;
    // 7F0E6718: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E671C:
    ctx->pc = 0x7F0E671Cu;
    // 7F0E671C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6720:
    ctx->pc = 0x7F0E6720u;
    // 7F0E6720: addi    r11, r3, 12832
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0E6724:
    ctx->pc = 0x7F0E6724u;
    // 7F0E6724: rlwinm r8, r4, 24, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x000000FFu;
    }

label_7F0E6728:
    ctx->pc = 0x7F0E6728u;
    // 7F0E6728: lwz     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E672C:
    ctx->pc = 0x7F0E672Cu;
    // 7F0E672C: addi    r6, r5, -2244
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-2244);

label_7F0E6730:
    ctx->pc = 0x7F0E6730u;
    // 7F0E6730: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0E6734:
    ctx->pc = 0x7F0E6734u;
    // 7F0E6734: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E6738:
    ctx->pc = 0x7F0E6738u;
    // 7F0E6738: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6738u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E673C:
    ctx->pc = 0x7F0E673Cu;
    // 7F0E673C: addi    r5, r3, -25880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-25880);

label_7F0E6740:
    ctx->pc = 0x7F0E6740u;
    // 7F0E6740: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6744:
    ctx->pc = 0x7F0E6744u;
    // 7F0E6744: rlwinm r7, r4, 16, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x000000FFu;
    }

label_7F0E6748:
    ctx->pc = 0x7F0E6748u;
    // 7F0E6748: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E674C:
    ctx->pc = 0x7F0E674Cu;
    // 7F0E674C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0E6750:
    ctx->pc = 0x7F0E6750u;
    // 7F0E6750: stw     r9, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E6754:
    ctx->pc = 0x7F0E6754u;
    // 7F0E6754: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E6758:
    ctx->pc = 0x7F0E6758u;
    // 7F0E6758: lwz     r10, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0E675C:
    ctx->pc = 0x7F0E675Cu;
    // 7F0E675C: lwz     r9, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0E6760:
    ctx->pc = 0x7F0E6760u;
    // 7F0E6760: stw     r10, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0E6764:
    ctx->pc = 0x7F0E6764u;
    // 7F0E6764: stw     r9, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E6768:
    ctx->pc = 0x7F0E6768u;
    // 7F0E6768: stb     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F0E676C:
    ctx->pc = 0x7F0E676Cu;
    // 7F0E676C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E6770:
    ctx->pc = 0x7F0E6770u;
    // 7F0E6770: stb     r8, 149(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(149);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F0E6774:
    ctx->pc = 0x7F0E6774u;
    // 7F0E6774: stb     r7, 150(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(150);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F0E6778:
    ctx->pc = 0x7F0E6778u;
    // 7F0E6778: stfs     f0, 152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6778u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E677C:
    ctx->pc = 0x7F0E677Cu;
    // 7F0E677C: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6780:
    ctx->pc = 0x7F0E6780u;
    // 7F0E6780: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6784:
    ctx->pc = 0x7F0E6784u;
    // 7F0E6784: bl      0x7F3F1588
    {
            ctx->lr = 0x7F0E6788u;
            ctx->pc = 0x7F3F1588u;
            return;
    }

label_7F0E6788:
    ctx->pc = 0x7F0E6788u;
    ctx->downcount -= 6;
    // 7F0E6788: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F0E678C:
    ctx->pc = 0x7F0E678Cu;
    // 7F0E678C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F0E6790:
    ctx->pc = 0x7F0E6790u;
    // 7F0E6790: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E6794:
    ctx->pc = 0x7F0E6794u;
    // 7F0E6794: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F0E6798:
    ctx->pc = 0x7F0E6798u;
    // 7F0E6798: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E679C:
    ctx->pc = 0x7F0E679Cu;
    // 7F0E679C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F0E67A0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F0E67A0:
    ctx->pc = 0x7F0E67A0u;
    ctx->downcount -= 4;
    // 7F0E67A0: stw     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E67A4:
    ctx->pc = 0x7F0E67A4u;
    // 7F0E67A4: lwz     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E67A8:
    ctx->pc = 0x7F0E67A8u;
    // 7F0E67A8: cmplwi  r0, 0x0000
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

label_7F0E67AC:
    ctx->pc = 0x7F0E67ACu;
    // 7F0E67AC: bc    4, 2, 0x7F0E67B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E67B8;
        }
    }

label_7F0E67B0:
    ctx->pc = 0x7F0E67B0u;
    ctx->downcount -= 2;
    // 7F0E67B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E67B4:
    ctx->pc = 0x7F0E67B4u;
    // 7F0E67B4: b       0x7F0E68E8
    {
            goto label_7F0E68E8;
    }

label_7F0E67B8:
    ctx->pc = 0x7F0E67B8u;
    ctx->downcount -= 3;
    // 7F0E67B8: lis     r3, 19
    ctx->gpr[3] = ((u32)(s32)(19) << 16);

label_7F0E67BC:
    ctx->pc = 0x7F0E67BCu;
    // 7F0E67BC: addi    r3, r3, 13602
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13602);

label_7F0E67C0:
    ctx->pc = 0x7F0E67C0u;
    // 7F0E67C0: bl      0x7F3B6420
    {
            ctx->lr = 0x7F0E67C4u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F0E67C4:
    ctx->pc = 0x7F0E67C4u;
    ctx->downcount -= 7;
    // 7F0E67C4: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E67C8:
    ctx->pc = 0x7F0E67C8u;
    // 7F0E67C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E67CC:
    ctx->pc = 0x7F0E67CCu;
    // 7F0E67CC: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E67D0:
    ctx->pc = 0x7F0E67D0u;
    // 7F0E67D0: stw     r0, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E67D4:
    ctx->pc = 0x7F0E67D4u;
    // 7F0E67D4: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E67D8:
    ctx->pc = 0x7F0E67D8u;
    // 7F0E67D8: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E67DC:
    ctx->pc = 0x7F0E67DCu;
    // 7F0E67DC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F0E67E0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F0E67E0:
    ctx->pc = 0x7F0E67E0u;
    ctx->downcount -= 2;
    // 7F0E67E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E67E4:
    ctx->pc = 0x7F0E67E4u;
    // 7F0E67E4: bl      0x7F3F054C
    {
            ctx->lr = 0x7F0E67E8u;
            ctx->pc = 0x7F3F054Cu;
            return;
    }

label_7F0E67E8:
    ctx->pc = 0x7F0E67E8u;
    ctx->downcount -= 8;
    // 7F0E67E8: lwz     r6, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E67EC:
    ctx->pc = 0x7F0E67ECu;
    // 7F0E67EC: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F0E67F0:
    ctx->pc = 0x7F0E67F0u;
    // 7F0E67F0: stw     r4, 204(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E67F4:
    ctx->pc = 0x7F0E67F4u;
    // 7F0E67F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E67F8:
    ctx->pc = 0x7F0E67F8u;
    // 7F0E67F8: stw     r3, 200(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E67FC:
    ctx->pc = 0x7F0E67FCu;
    // 7F0E67FC: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6800:
    ctx->pc = 0x7F0E6800u;
    // 7F0E6800: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6804:
    ctx->pc = 0x7F0E6804u;
    // 7F0E6804: bl      0x800050B4
    {
            ctx->lr = 0x7F0E6808u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F0E6808:
    ctx->pc = 0x7F0E6808u;
    ctx->downcount -= 5;
    // 7F0E6808: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E680C:
    ctx->pc = 0x7F0E680Cu;
    // 7F0E680C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E6810:
    ctx->pc = 0x7F0E6810u;
    // 7F0E6810: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F0E6814:
    ctx->pc = 0x7F0E6814u;
    // 7F0E6814: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6818:
    ctx->pc = 0x7F0E6818u;
    // 7F0E6818: bl      0x800050B4
    {
            ctx->lr = 0x7F0E681Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F0E681C:
    ctx->pc = 0x7F0E681Cu;
    ctx->downcount -= 5;
    // 7F0E681C: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6820:
    ctx->pc = 0x7F0E6820u;
    // 7F0E6820: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E6824:
    ctx->pc = 0x7F0E6824u;
    // 7F0E6824: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F0E6828:
    ctx->pc = 0x7F0E6828u;
    // 7F0E6828: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E682C:
    ctx->pc = 0x7F0E682Cu;
    // 7F0E682C: bl      0x800050B4
    {
            ctx->lr = 0x7F0E6830u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F0E6830:
    ctx->pc = 0x7F0E6830u;
    ctx->downcount -= 5;
    // 7F0E6830: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6834:
    ctx->pc = 0x7F0E6834u;
    // 7F0E6834: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E6838:
    ctx->pc = 0x7F0E6838u;
    // 7F0E6838: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F0E683C:
    ctx->pc = 0x7F0E683Cu;
    // 7F0E683C: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6840:
    ctx->pc = 0x7F0E6840u;
    // 7F0E6840: bl      0x800050B4
    {
            ctx->lr = 0x7F0E6844u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F0E6844:
    ctx->pc = 0x7F0E6844u;
    ctx->downcount -= 6;
    // 7F0E6844: lwz     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E6848:
    ctx->pc = 0x7F0E6848u;
    // 7F0E6848: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_7F0E684C:
    ctx->pc = 0x7F0E684Cu;
    // 7F0E684C: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6850:
    ctx->pc = 0x7F0E6850u;
    // 7F0E6850: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0E6854:
    ctx->pc = 0x7F0E6854u;
    // 7F0E6854: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6858:
    ctx->pc = 0x7F0E6858u;
    // 7F0E6858: bl      0x7F3F6964
    {
            ctx->lr = 0x7F0E685Cu;
            ctx->pc = 0x7F3F6964u;
            return;
    }

label_7F0E685C:
    ctx->pc = 0x7F0E685Cu;
    ctx->downcount -= 4;
    // 7F0E685C: stw     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6860:
    ctx->pc = 0x7F0E6860u;
    // 7F0E6860: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6864:
    ctx->pc = 0x7F0E6864u;
    // 7F0E6864: cmplwi  r0, 0x0000
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

label_7F0E6868:
    ctx->pc = 0x7F0E6868u;
    // 7F0E6868: bc    4, 2, 0x7F0E6874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6874;
        }
    }

label_7F0E686C:
    ctx->pc = 0x7F0E686Cu;
    ctx->downcount -= 2;
    // 7F0E686C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0E6870:
    ctx->pc = 0x7F0E6870u;
    // 7F0E6870: b       0x7F0E68E8
    {
            goto label_7F0E68E8;
    }

label_7F0E6874:
    ctx->pc = 0x7F0E6874u;
    ctx->downcount -= 5;
    // 7F0E6874: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0E6878:
    ctx->pc = 0x7F0E6878u;
    // 7F0E6878: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0E687C:
    ctx->pc = 0x7F0E687Cu;
    // 7F0E687C: addi    r28, r3, -25864
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-25864);

label_7F0E6880:
    ctx->pc = 0x7F0E6880u;
    // 7F0E6880: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0E6884:
    ctx->pc = 0x7F0E6884u;
    // 7F0E6884: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0E6888:
    ctx->downcount -= 6;
    // 7F0E6888: add   r4, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0E688C:
    ctx->pc = 0x7F0E688Cu;
    // 7F0E688C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6890:
    ctx->pc = 0x7F0E6890u;
    // 7F0E6890: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6894:
    ctx->pc = 0x7F0E6894u;
    // 7F0E6894: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E6898:
    // 7F0E6898: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0E689C:
    // 7F0E689C: bl      0x7F3EF1A4
    {
            ctx->lr = 0x7F0E68A0u;
            ctx->pc = 0x7F3EF1A4u;
            return;
    }

label_7F0E68A0:
    ctx->downcount -= 5;
    // 7F0E68A0: addi    r27, r30, 168
    ctx->gpr[27] = ctx->gpr[30] + (u32)(s32)(168);

label_7F0E68A4:
    ctx->pc = 0x7F0E68A4u;
    // 7F0E68A4: stwx    r3, r31, r27
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[27];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E68A8:
    ctx->pc = 0x7F0E68A8u;
    // 7F0E68A8: lwzx    r3, r31, r27
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[27];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E68AC:
    // 7F0E68AC: cmplwi  r3, 0x0000
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

label_7F0E68B0:
    // 7F0E68B0: bc    4, 2, 0x7F0E68BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E68BC;
        }
    }

label_7F0E68B4:
    ctx->downcount -= 2;
    // 7F0E68B4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0E68B8:
    // 7F0E68B8: b       0x7F0E68E8
    {
            goto label_7F0E68E8;
    }

label_7F0E68BC:
    ctx->downcount -= 2;
    // 7F0E68BC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E68C0:
    // 7F0E68C0: bl      0x7F3EF310
    {
            ctx->lr = 0x7F0E68C4u;
            ctx->pc = 0x7F3EF310u;
            return;
    }

label_7F0E68C4:
    ctx->pc = 0x7F0E68C4u;
    ctx->downcount -= 3;
    // 7F0E68C4: lwzx    r3, r31, r27
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[27];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E68C8:
    // 7F0E68C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E68CC:
    // 7F0E68CC: bl      0x7F3EF318
    {
            ctx->lr = 0x7F0E68D0u;
            ctx->pc = 0x7F3EF318u;
            return;
    }

label_7F0E68D0:
    ctx->downcount -= 5;
    // 7F0E68D0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0E68D4:
    // 7F0E68D4: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F0E68D8:
    // 7F0E68D8: cmpwi   r26, 2
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

label_7F0E68DC:
    // 7F0E68DC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0E68E0:
    // 7F0E68E0: bc    12, 0, 0x7F0E6888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6888u;
                return;
            }
            goto label_7F0E6888;
        }
    }

label_7F0E68E4:
    ctx->pc = 0x7F0E68E4u;
    ctx->downcount -= 1;
    // 7F0E68E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E68E8:
    ctx->pc = 0x7F0E68E8u;
    ctx->downcount -= 16;
    // 7F0E68E8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E68EC:
    ctx->pc = 0x7F0E68ECu;
    // 7F0E68EC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E68F0:
    ctx->pc = 0x7F0E68F0u;
    // 7F0E68F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E68F4:
    ctx->pc = 0x7F0E68F4u;
    // 7F0E68F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E68F8:
    ctx->pc = 0x7F0E68F8u;
    // 7F0E68F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E68FC:
    ctx->pc = 0x7F0E68FCu;
    ctx->downcount -= 5;
    // 7F0E68FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E6900:
    ctx->pc = 0x7F0E6900u;
    // 7F0E6900: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E6904:
    ctx->pc = 0x7F0E6904u;
    // 7F0E6904: cmpwi   r4, 2
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

label_7F0E6908:
    ctx->pc = 0x7F0E6908u;
    // 7F0E6908: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E690C:
    ctx->pc = 0x7F0E690Cu;
    // 7F0E690C: bc    12, 2, 0x7F0E694C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E694C;
        }
    }

label_7F0E6910:
    ctx->pc = 0x7F0E6910u;
    ctx->downcount -= 1;
    // 7F0E6910: bc    4, 0, 0x7F0E6924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6924;
        }
    }

label_7F0E6914:
    ctx->pc = 0x7F0E6914u;
    ctx->downcount -= 2;
    // 7F0E6914: cmpwi   r4, 0
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

label_7F0E6918:
    ctx->pc = 0x7F0E6918u;
    // 7F0E6918: bc    12, 2, 0x7F0E6938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6938;
        }
    }

label_7F0E691C:
    ctx->pc = 0x7F0E691Cu;
    ctx->downcount -= 1;
    // 7F0E691C: bc    4, 0, 0x7F0E6944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6944;
        }
    }

label_7F0E6920:
    ctx->pc = 0x7F0E6920u;
    ctx->downcount -= 1;
    // 7F0E6920: b       0x7F0E697C
    {
            goto label_7F0E697C;
    }

label_7F0E6924:
    ctx->pc = 0x7F0E6924u;
    ctx->downcount -= 4;
    // 7F0E6924: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F0E6928:
    ctx->pc = 0x7F0E6928u;
    // 7F0E6928: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F0E692C:
    ctx->pc = 0x7F0E692Cu;
    // 7F0E692C: cmpw    r4, r0
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

label_7F0E6930:
    ctx->pc = 0x7F0E6930u;
    // 7F0E6930: bc    12, 2, 0x7F0E6954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6954;
        }
    }

label_7F0E6934:
    ctx->pc = 0x7F0E6934u;
    ctx->downcount -= 1;
    // 7F0E6934: b       0x7F0E697C
    {
            goto label_7F0E697C;
    }

label_7F0E6938:
    ctx->pc = 0x7F0E6938u;
    ctx->downcount -= 2;
    // 7F0E6938: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E693C:
    ctx->pc = 0x7F0E693Cu;
    // 7F0E693C: bl      0x7F0E5BA0
    {
            ctx->lr = 0x7F0E6940u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5BA0u;
                return;
            }
            goto label_7F0E5BA0;
    }

label_7F0E6940:
    ctx->pc = 0x7F0E6940u;
    ctx->downcount -= 1;
    // 7F0E6940: b       0x7F0E6984
    {
            goto label_7F0E6984;
    }

label_7F0E6944:
    ctx->pc = 0x7F0E6944u;
    ctx->downcount -= 1;
    // 7F0E6944: bl      0x7F0E5C00
    {
            ctx->lr = 0x7F0E6948u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5C00u;
                return;
            }
            goto label_7F0E5C00;
    }

label_7F0E6948:
    ctx->pc = 0x7F0E6948u;
    ctx->downcount -= 1;
    // 7F0E6948: b       0x7F0E6984
    {
            goto label_7F0E6984;
    }

label_7F0E694C:
    ctx->pc = 0x7F0E694Cu;
    ctx->downcount -= 1;
    // 7F0E694C: bl      0x7F0E5C90
    {
            ctx->lr = 0x7F0E6950u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E5C90u;
                return;
            }
            goto label_7F0E5C90;
    }

label_7F0E6950:
    ctx->pc = 0x7F0E6950u;
    ctx->downcount -= 1;
    // 7F0E6950: b       0x7F0E6984
    {
            goto label_7F0E6984;
    }

label_7F0E6954:
    ctx->pc = 0x7F0E6954u;
    ctx->downcount -= 5;
    // 7F0E6954: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0E6958:
    ctx->pc = 0x7F0E6958u;
    // 7F0E6958: addi    r6, r3, 64
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(64);

label_7F0E695C:
    ctx->pc = 0x7F0E695Cu;
    // 7F0E695C: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F0E6960:
    ctx->pc = 0x7F0E6960u;
    // 7F0E6960: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E6964:
    loop_7F0E6964(ctx);
    if (ctx->pc == 0x7F0E6978u) goto label_7F0E6978;
    return;
label_7F0E6968:
    ctx->pc = 0x7F0E6968u;
    // 7F0E6968: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0E696C:
    ctx->pc = 0x7F0E696Cu;
    // 7F0E696C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6970:
    ctx->pc = 0x7F0E6970u;
    // 7F0E6970: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F0E6974:
    // 7F0E6974: bc    16, 0, 0x7F0E6964
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6964u;
                return;
            }
            goto label_7F0E6964;
        }
    }

label_7F0E6978:
    ctx->pc = 0x7F0E6978u;
    ctx->downcount -= 1;
    // 7F0E6978: b       0x7F0E6984
    {
            goto label_7F0E6984;
    }

label_7F0E697C:
    ctx->pc = 0x7F0E697Cu;
    ctx->downcount -= 1;
    // 7F0E697C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F0E6980u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F0E6980:
    ctx->pc = 0x7F0E6980u;
    ctx->downcount -= 1;
    // 7F0E6980: b       0x7F0E6988
    {
            goto label_7F0E6988;
    }

label_7F0E6984:
    ctx->pc = 0x7F0E6984u;
    ctx->downcount -= 1;
    // 7F0E6984: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6988:
    ctx->pc = 0x7F0E6988u;
    ctx->downcount -= 5;
    // 7F0E6988: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E698C:
    ctx->pc = 0x7F0E698Cu;
    // 7F0E698C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E6990:
    ctx->pc = 0x7F0E6990u;
    // 7F0E6990: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E6994:
    ctx->pc = 0x7F0E6994u;
    // 7F0E6994: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6998:
    ctx->pc = 0x7F0E6998u;
    ctx->downcount -= 20;
    // 7F0E6998: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E699C:
    ctx->pc = 0x7F0E699Cu;
    // 7F0E699C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E69A0:
    ctx->pc = 0x7F0E69A0u;
    // 7F0E69A0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F0E69A4:
    ctx->pc = 0x7F0E69A4u;
    // 7F0E69A4: li      r5, 176
    ctx->gpr[5] = (u32)(s32)(176);

label_7F0E69A8:
    ctx->pc = 0x7F0E69A8u;
    // 7F0E69A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E69AC:
    ctx->pc = 0x7F0E69ACu;
    // 7F0E69AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E69B0:
    ctx->pc = 0x7F0E69B0u;
    // 7F0E69B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E69B4:
    ctx->pc = 0x7F0E69B4u;
    // 7F0E69B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E69B8:
    ctx->pc = 0x7F0E69B8u;
    // 7F0E69B8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0E69BC:
    ctx->pc = 0x7F0E69BCu;
    // 7F0E69BC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0E69C0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0E69C0:
    ctx->pc = 0x7F0E69C0u;
    ctx->downcount -= 2;
    // 7F0E69C0: or.   r31, r3, r3
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

label_7F0E69C4:
    ctx->pc = 0x7F0E69C4u;
    // 7F0E69C4: bc    12, 2, 0x7F0E6A38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6A38;
        }
    }

label_7F0E69C8:
    ctx->pc = 0x7F0E69C8u;
    ctx->downcount -= 5;
    // 7F0E69C8: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E69CC:
    ctx->pc = 0x7F0E69CCu;
    // 7F0E69CC: lis     r5, 32526
    ctx->gpr[5] = ((u32)(s32)(32526) << 16);

label_7F0E69D0:
    ctx->pc = 0x7F0E69D0u;
    // 7F0E69D0: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_7F0E69D4:
    ctx->pc = 0x7F0E69D4u;
    // 7F0E69D4: addi    r5, r5, 23320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23320);

label_7F0E69D8:
    ctx->pc = 0x7F0E69D8u;
    // 7F0E69D8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0E69DCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0E69DC:
    ctx->pc = 0x7F0E69DCu;
    ctx->downcount -= 13;
    // 7F0E69DC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E69E0:
    ctx->pc = 0x7F0E69E0u;
    // 7F0E69E0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F0E69E4:
    ctx->pc = 0x7F0E69E4u;
    // 7F0E69E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E69E8:
    ctx->pc = 0x7F0E69E8u;
    // 7F0E69E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E69EC:
    ctx->pc = 0x7F0E69ECu;
    // 7F0E69EC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F0E69F0:
    ctx->pc = 0x7F0E69F0u;
    // 7F0E69F0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F0E69F4:
    ctx->pc = 0x7F0E69F4u;
    // 7F0E69F4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E69F8:
    ctx->pc = 0x7F0E69F8u;
    // 7F0E69F8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E69FC:
    ctx->pc = 0x7F0E69FCu;
    // 7F0E69FC: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E6A00:
    ctx->pc = 0x7F0E6A00u;
    // 7F0E6A00: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E6A04:
    ctx->pc = 0x7F0E6A04u;
    // 7F0E6A04: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E6A08:
    ctx->pc = 0x7F0E6A08u;
    // 7F0E6A08: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6A0C:
    ctx->pc = 0x7F0E6A0Cu;
    // 7F0E6A0C: bl      0x7F0E66D8
    {
            ctx->lr = 0x7F0E6A10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E66D8u;
                return;
            }
            goto label_7F0E66D8;
    }

label_7F0E6A10:
    ctx->pc = 0x7F0E6A10u;
    ctx->downcount -= 2;
    // 7F0E6A10: cmpwi   r3, 0
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

label_7F0E6A14:
    ctx->pc = 0x7F0E6A14u;
    // 7F0E6A14: bc    4, 0, 0x7F0E6A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6A28;
        }
    }

label_7F0E6A18:
    ctx->pc = 0x7F0E6A18u;
    ctx->downcount -= 2;
    // 7F0E6A18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E6A1C:
    ctx->pc = 0x7F0E6A1Cu;
    // 7F0E6A1C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0E6A20u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0E6A20:
    ctx->pc = 0x7F0E6A20u;
    ctx->downcount -= 2;
    // 7F0E6A20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6A24:
    ctx->pc = 0x7F0E6A24u;
    // 7F0E6A24: b       0x7F0E6A3C
    {
            goto label_7F0E6A3C;
    }

label_7F0E6A28:
    ctx->pc = 0x7F0E6A28u;
    ctx->downcount -= 4;
    // 7F0E6A28: lis     r4, 32526
    ctx->gpr[4] = ((u32)(s32)(32526) << 16);

label_7F0E6A2C:
    ctx->pc = 0x7F0E6A2Cu;
    // 7F0E6A2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E6A30:
    ctx->pc = 0x7F0E6A30u;
    // 7F0E6A30: addi    r4, r4, 26876
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26876);

label_7F0E6A34:
    ctx->pc = 0x7F0E6A34u;
    // 7F0E6A34: bl      0x7F3C8990
    {
            ctx->lr = 0x7F0E6A38u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F0E6A38:
    ctx->pc = 0x7F0E6A38u;
    ctx->downcount -= 1;
    // 7F0E6A38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E6A3C:
    ctx->pc = 0x7F0E6A3Cu;
    ctx->downcount -= 16;
    // 7F0E6A3C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E6A40:
    ctx->pc = 0x7F0E6A40u;
    // 7F0E6A40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6A44:
    ctx->pc = 0x7F0E6A44u;
    // 7F0E6A44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E6A48:
    ctx->pc = 0x7F0E6A48u;
    // 7F0E6A48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E6A4C:
    ctx->pc = 0x7F0E6A4Cu;
    // 7F0E6A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6A50:
    ctx->pc = 0x7F0E6A50u;
    ctx->downcount -= 13;
    // 7F0E6A50: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E6A54:
    ctx->pc = 0x7F0E6A54u;
    // 7F0E6A54: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F0E6A58:
    ctx->pc = 0x7F0E6A58u;
    // 7F0E6A58: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F0E6A5C:
    ctx->pc = 0x7F0E6A5Cu;
    // 7F0E6A5C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E6A60:
    ctx->pc = 0x7F0E6A60u;
    // 7F0E6A60: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F0E6A64:
    ctx->pc = 0x7F0E6A64u;
    // 7F0E6A64: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F0E6A68:
    ctx->pc = 0x7F0E6A68u;
    // 7F0E6A68: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0E6A6C:
    ctx->pc = 0x7F0E6A6Cu;
    // 7F0E6A6C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6A70:
    ctx->pc = 0x7F0E6A70u;
    // 7F0E6A70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6A74:
    ctx->pc = 0x7F0E6A74u;
    ctx->downcount -= 4;
    // 7F0E6A74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E6A78:
    ctx->pc = 0x7F0E6A78u;
    // 7F0E6A78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E6A7C:
    ctx->pc = 0x7F0E6A7Cu;
    // 7F0E6A7C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6A80:
    ctx->pc = 0x7F0E6A80u;
    // 7F0E6A80: bl      0x7F0E6A50
    {
            ctx->lr = 0x7F0E6A84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6A50u;
                return;
            }
            goto label_7F0E6A50;
    }

label_7F0E6A84:
    ctx->pc = 0x7F0E6A84u;
    ctx->downcount -= 31;
    // 7F0E6A84: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E6A88:
    ctx->pc = 0x7F0E6A88u;
    // 7F0E6A88: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6A8C:
    ctx->pc = 0x7F0E6A8Cu;
    // 7F0E6A8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6A90:
    ctx->pc = 0x7F0E6A90u;
    // 7F0E6A90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6A94:
    ctx->pc = 0x7F0E6A94u;
    // 7F0E6A94: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6A98:
    ctx->pc = 0x7F0E6A98u;
    // 7F0E6A98: lfd     f2, -2256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6A98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2256);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6A9C:
    ctx->pc = 0x7F0E6A9Cu;
    // 7F0E6A9C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6A9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6AA0:
    ctx->pc = 0x7F0E6AA0u;
    // 7F0E6AA0: lfs     f0, -2260(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6AA4:
    ctx->pc = 0x7F0E6AA4u;
    // 7F0E6AA4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AA4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F0E6AA8:
    ctx->pc = 0x7F0E6AA8u;
    // 7F0E6AA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6AAC:
    ctx->pc = 0x7F0E6AACu;
    // 7F0E6AAC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AACu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F0E6AB0:
    ctx->pc = 0x7F0E6AB0u;
    // 7F0E6AB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E6AB4:
    ctx->pc = 0x7F0E6AB4u;
    // 7F0E6AB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E6AB8:
    ctx->pc = 0x7F0E6AB8u;
    // 7F0E6AB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6ABC:
    ctx->pc = 0x7F0E6ABCu;
    ctx->downcount -= 6;
    // 7F0E6ABC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E6AC0:
    ctx->pc = 0x7F0E6AC0u;
    // 7F0E6AC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6AC4:
    ctx->pc = 0x7F0E6AC4u;
    // 7F0E6AC4: lfs     f0, -6704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6AC8:
    ctx->pc = 0x7F0E6AC8u;
    // 7F0E6AC8: lfs     f1, -2312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6ACC:
    ctx->pc = 0x7F0E6ACCu;
    // 7F0E6ACC: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6ACCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F0E6AD0:
    ctx->pc = 0x7F0E6AD0u;
    // 7F0E6AD0: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6AD4:
    ctx->pc = 0x7F0E6AD4u;
    ctx->downcount -= 4;
    // 7F0E6AD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6AD8:
    ctx->pc = 0x7F0E6AD8u;
    // 7F0E6AD8: lfs     f1, -2248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6ADC:
    ctx->pc = 0x7F0E6ADCu;
    // 7F0E6ADC: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6ADCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F0E6AE0:
    ctx->pc = 0x7F0E6AE0u;
    // 7F0E6AE0: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6AE4:
    ctx->pc = 0x7F0E6AE4u;
    ctx->downcount -= 2;
    // 7F0E6AE4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6AE4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F0E6AE8:
    ctx->pc = 0x7F0E6AE8u;
    // 7F0E6AE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6AEC:
    ctx->pc = 0x7F0E6AECu;
    ctx->downcount -= 3;
    // 7F0E6AEC: subf.   r0, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
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

label_7F0E6AF0:
    ctx->pc = 0x7F0E6AF0u;
    // 7F0E6AF0: add   r3, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E6AF4:
    ctx->pc = 0x7F0E6AF4u;
    // 7F0E6AF4: bc    12, 0, 0x7F0E6B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6B08;
        }
    }

label_7F0E6AF8:
    ctx->pc = 0x7F0E6AF8u;
    ctx->downcount -= 2;
    // 7F0E6AF8: subf.   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E6AFC:
    ctx->pc = 0x7F0E6AFCu;
    // 7F0E6AFC: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6B00:
    ctx->pc = 0x7F0E6B00u;
    ctx->downcount -= 2;
    // 7F0E6B00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6B04:
    ctx->pc = 0x7F0E6B04u;
    // 7F0E6B04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6B08:
    ctx->pc = 0x7F0E6B08u;
    ctx->downcount -= 2;
    // 7F0E6B08: add.   r0, r0, r3
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

label_7F0E6B0C:
    ctx->pc = 0x7F0E6B0Cu;
    // 7F0E6B0C: bc    4, 0, 0x7F0E6B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6B14;
        }
    }

label_7F0E6B10:
    ctx->pc = 0x7F0E6B10u;
    ctx->downcount -= 1;
    // 7F0E6B10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E6B14:
    ctx->pc = 0x7F0E6B14u;
    ctx->downcount -= 2;
    // 7F0E6B14: neg  r3, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F0E6B18:
    ctx->pc = 0x7F0E6B18u;
    // 7F0E6B18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6B1C:
    ctx->pc = 0x7F0E6B1Cu;
    ctx->downcount -= 19;
    // 7F0E6B1C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E6B20:
    ctx->pc = 0x7F0E6B20u;
    // 7F0E6B20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E6B24:
    ctx->pc = 0x7F0E6B24u;
    // 7F0E6B24: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6B28:
    ctx->pc = 0x7F0E6B28u;
    // 7F0E6B28: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E6B2C:
    ctx->pc = 0x7F0E6B2Cu;
    // 7F0E6B2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E6B30:
    ctx->pc = 0x7F0E6B30u;
    // 7F0E6B30: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E6B34:
    ctx->pc = 0x7F0E6B34u;
    // 7F0E6B34: lwz     r0, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6B38:
    ctx->pc = 0x7F0E6B38u;
    // 7F0E6B38: cmplwi  r0, 0x0000
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

label_7F0E6B3C:
    ctx->pc = 0x7F0E6B3Cu;
    // 7F0E6B3C: bc    12, 2, 0x7F0E6B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6B4C;
        }
    }

label_7F0E6B40:
    ctx->pc = 0x7F0E6B40u;
    ctx->downcount -= 3;
    // 7F0E6B40: lwz     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6B44:
    ctx->pc = 0x7F0E6B44u;
    // 7F0E6B44: cmplwi  r0, 0x0000
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

label_7F0E6B48:
    ctx->pc = 0x7F0E6B48u;
    // 7F0E6B48: bc    4, 2, 0x7F0E6B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6B54;
        }
    }

label_7F0E6B4C:
    ctx->pc = 0x7F0E6B4Cu;
    ctx->downcount -= 2;
    // 7F0E6B4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6B50:
    ctx->pc = 0x7F0E6B50u;
    // 7F0E6B50: b       0x7F0E6CF4
    {
            goto label_7F0E6CF4;
    }

label_7F0E6B54:
    ctx->pc = 0x7F0E6B54u;
    ctx->downcount -= 21;
    // 7F0E6B54: lfs     f3, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B54u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6B58:
    ctx->pc = 0x7F0E6B58u;
    // 7F0E6B58: lfs     f2, 96(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B58u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6B5C:
    ctx->pc = 0x7F0E6B5Cu;
    // 7F0E6B5C: lfs     f1, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6B60:
    ctx->pc = 0x7F0E6B60u;
    // 7F0E6B60: lfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6B64:
    ctx->pc = 0x7F0E6B64u;
    // 7F0E6B64: fadds   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B64u)) return;
    ppc_fadds(ctx, 3, 3, 2);

label_7F0E6B68:
    ctx->pc = 0x7F0E6B68u;
    // 7F0E6B68: lfs     f2, 112(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B68u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6B6C:
    ctx->pc = 0x7F0E6B6Cu;
    // 7F0E6B6C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B6Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F0E6B70:
    ctx->pc = 0x7F0E6B70u;
    // 7F0E6B70: lfs     f0, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6B74:
    ctx->pc = 0x7F0E6B74u;
    // 7F0E6B74: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F0E6B78:
    ctx->pc = 0x7F0E6B78u;
    // 7F0E6B78: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B78u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F0E6B7C:
    ctx->pc = 0x7F0E6B7Cu;
    // 7F0E6B7C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B7Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0E6B80:
    ctx->pc = 0x7F0E6B80u;
    // 7F0E6B80: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B80u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E6B84:
    ctx->pc = 0x7F0E6B84u;
    // 7F0E6B84: stfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F0E6B88:
    ctx->pc = 0x7F0E6B88u;
    // 7F0E6B88: stfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F0E6B8C:
    ctx->pc = 0x7F0E6B8Cu;
    // 7F0E6B8C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6B90:
    ctx->pc = 0x7F0E6B90u;
    // 7F0E6B90: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0E6B94:
    ctx->pc = 0x7F0E6B94u;
    // 7F0E6B94: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E6B98:
    ctx->pc = 0x7F0E6B98u;
    // 7F0E6B98: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E6B9C:
    ctx->pc = 0x7F0E6B9Cu;
    // 7F0E6B9C: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E6BA0:
    ctx->pc = 0x7F0E6BA0u;
    // 7F0E6BA0: lwz     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E6BA4:
    ctx->pc = 0x7F0E6BA4u;
    // 7F0E6BA4: bl      0x7F0E6AEC
    {
            ctx->lr = 0x7F0E6BA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6AECu;
                return;
            }
            goto label_7F0E6AEC;
    }

label_7F0E6BA8:
    ctx->pc = 0x7F0E6BA8u;
    ctx->downcount -= 2;
    // 7F0E6BA8: or.   r29, r3, r3
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

label_7F0E6BAC:
    ctx->pc = 0x7F0E6BACu;
    // 7F0E6BAC: bc    4, 2, 0x7F0E6BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6BB8;
        }
    }

label_7F0E6BB0:
    ctx->pc = 0x7F0E6BB0u;
    ctx->downcount -= 2;
    // 7F0E6BB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6BB4:
    ctx->pc = 0x7F0E6BB4u;
    // 7F0E6BB4: b       0x7F0E6CF4
    {
            goto label_7F0E6CF4;
    }

label_7F0E6BB8:
    ctx->pc = 0x7F0E6BB8u;
    ctx->downcount -= 21;
    // 7F0E6BB8: lfs     f3, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BB8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6BBC:
    ctx->pc = 0x7F0E6BBCu;
    // 7F0E6BBC: lfs     f2, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BBCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6BC0:
    ctx->pc = 0x7F0E6BC0u;
    // 7F0E6BC0: lfs     f1, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6BC4:
    ctx->pc = 0x7F0E6BC4u;
    // 7F0E6BC4: lfs     f0, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6BC8:
    ctx->pc = 0x7F0E6BC8u;
    // 7F0E6BC8: fadds   f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BC8u)) return;
    ppc_fadds(ctx, 3, 3, 2);

label_7F0E6BCC:
    ctx->pc = 0x7F0E6BCCu;
    // 7F0E6BCC: lfs     f2, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BCCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6BD0:
    ctx->pc = 0x7F0E6BD0u;
    // 7F0E6BD0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BD0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F0E6BD4:
    ctx->pc = 0x7F0E6BD4u;
    // 7F0E6BD4: lfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6BD8:
    ctx->pc = 0x7F0E6BD8u;
    // 7F0E6BD8: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BD8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F0E6BDC:
    ctx->pc = 0x7F0E6BDCu;
    // 7F0E6BDC: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F0E6BE0:
    ctx->pc = 0x7F0E6BE0u;
    // 7F0E6BE0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BE0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0E6BE4:
    ctx->pc = 0x7F0E6BE4u;
    // 7F0E6BE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0E6BE8:
    ctx->pc = 0x7F0E6BE8u;
    // 7F0E6BE8: stfd     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F0E6BEC:
    ctx->pc = 0x7F0E6BECu;
    // 7F0E6BEC: stfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F0E6BF0:
    ctx->pc = 0x7F0E6BF0u;
    // 7F0E6BF0: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6BF4:
    ctx->pc = 0x7F0E6BF4u;
    // 7F0E6BF4: stfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0E6BF8:
    ctx->pc = 0x7F0E6BF8u;
    // 7F0E6BF8: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E6BFC:
    ctx->pc = 0x7F0E6BFCu;
    // 7F0E6BFC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6BFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0E6C00:
    ctx->pc = 0x7F0E6C00u;
    // 7F0E6C00: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E6C04:
    ctx->pc = 0x7F0E6C04u;
    // 7F0E6C04: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E6C08:
    ctx->pc = 0x7F0E6C08u;
    // 7F0E6C08: bl      0x7F0E6AEC
    {
            ctx->lr = 0x7F0E6C0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6AECu;
                return;
            }
            goto label_7F0E6AEC;
    }

label_7F0E6C0C:
    ctx->pc = 0x7F0E6C0Cu;
    ctx->downcount -= 2;
    // 7F0E6C0C: cmpwi   r3, 0
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

label_7F0E6C10:
    ctx->pc = 0x7F0E6C10u;
    // 7F0E6C10: bc    4, 2, 0x7F0E6C1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6C1C;
        }
    }

label_7F0E6C14:
    ctx->pc = 0x7F0E6C14u;
    ctx->downcount -= 2;
    // 7F0E6C14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E6C18:
    ctx->pc = 0x7F0E6C18u;
    // 7F0E6C18: b       0x7F0E6CF4
    {
            goto label_7F0E6CF4;
    }

label_7F0E6C1C:
    ctx->pc = 0x7F0E6C1Cu;
    ctx->downcount -= 8;
    // 7F0E6C1C: srawi r6, r29, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[29];
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

label_7F0E6C20:
    ctx->pc = 0x7F0E6C20u;
    // 7F0E6C20: srawi r4, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
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

label_7F0E6C24:
    ctx->pc = 0x7F0E6C24u;
    // 7F0E6C24: xor   r5, r6, r29
    {
        ctx->gpr[5] = ctx->gpr[6] ^ ctx->gpr[29];
    }

label_7F0E6C28:
    ctx->pc = 0x7F0E6C28u;
    // 7F0E6C28: xor   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[3];
    }

label_7F0E6C2C:
    ctx->pc = 0x7F0E6C2Cu;
    // 7F0E6C2C: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F0E6C30:
    ctx->pc = 0x7F0E6C30u;
    // 7F0E6C30: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0E6C34:
    ctx->pc = 0x7F0E6C34u;
    // 7F0E6C34: cmpw    r5, r0
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

label_7F0E6C38:
    ctx->pc = 0x7F0E6C38u;
    // 7F0E6C38: bc    12, 1, 0x7F0E6C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6C98;
        }
    }

label_7F0E6C3C:
    ctx->pc = 0x7F0E6C3Cu;
    ctx->downcount -= 23;
    // 7F0E6C3C: srawi r3, r29, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[29];
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

label_7F0E6C40:
    ctx->pc = 0x7F0E6C40u;
    // 7F0E6C40: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E6C44:
    ctx->pc = 0x7F0E6C44u;
    // 7F0E6C44: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0E6C48:
    ctx->pc = 0x7F0E6C48u;
    // 7F0E6C48: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6C4C:
    ctx->pc = 0x7F0E6C4Cu;
    // 7F0E6C4C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0E6C50:
    ctx->pc = 0x7F0E6C50u;
    // 7F0E6C50: lwz     r5, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E6C54:
    ctx->pc = 0x7F0E6C54u;
    // 7F0E6C54: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6C58:
    ctx->pc = 0x7F0E6C58u;
    // 7F0E6C58: lfd     f2, -2240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6C5C:
    ctx->pc = 0x7F0E6C5Cu;
    // 7F0E6C5C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6C60:
    ctx->pc = 0x7F0E6C60u;
    // 7F0E6C60: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6C64:
    ctx->pc = 0x7F0E6C64u;
    // 7F0E6C64: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6C68:
    ctx->pc = 0x7F0E6C68u;
    // 7F0E6C68: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6C6C:
    ctx->pc = 0x7F0E6C6Cu;
    // 7F0E6C6C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C6Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0E6C70:
    ctx->pc = 0x7F0E6C70u;
    // 7F0E6C70: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6C74:
    ctx->pc = 0x7F0E6C74u;
    // 7F0E6C74: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C74u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F0E6C78:
    ctx->pc = 0x7F0E6C78u;
    // 7F0E6C78: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6C7C:
    ctx->pc = 0x7F0E6C7Cu;
    // 7F0E6C7C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0E6C80:
    ctx->pc = 0x7F0E6C80u;
    // 7F0E6C80: stfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6C84:
    ctx->pc = 0x7F0E6C84u;
    // 7F0E6C84: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6C88:
    ctx->pc = 0x7F0E6C88u;
    // 7F0E6C88: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6C8C:
    ctx->pc = 0x7F0E6C8Cu;
    // 7F0E6C8C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C8Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E6C90:
    ctx->pc = 0x7F0E6C90u;
    // 7F0E6C90: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6C90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6C94:
    ctx->pc = 0x7F0E6C94u;
    // 7F0E6C94: b       0x7F0E6CF0
    {
            goto label_7F0E6CF0;
    }

label_7F0E6C98:
    ctx->pc = 0x7F0E6C98u;
    ctx->downcount -= 22;
    // 7F0E6C98: srawi r3, r3, 1
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

label_7F0E6C9C:
    ctx->pc = 0x7F0E6C9Cu;
    // 7F0E6C9C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0E6CA0:
    ctx->pc = 0x7F0E6CA0u;
    // 7F0E6CA0: addze  r3, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0E6CA4:
    ctx->pc = 0x7F0E6CA4u;
    // 7F0E6CA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6CA8:
    ctx->pc = 0x7F0E6CA8u;
    // 7F0E6CA8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0E6CAC:
    ctx->pc = 0x7F0E6CACu;
    // 7F0E6CAC: lwz     r5, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E6CB0:
    ctx->pc = 0x7F0E6CB0u;
    // 7F0E6CB0: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6CB4:
    ctx->pc = 0x7F0E6CB4u;
    // 7F0E6CB4: lfd     f2, -2240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2240);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6CB8:
    ctx->pc = 0x7F0E6CB8u;
    // 7F0E6CB8: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6CBC:
    ctx->pc = 0x7F0E6CBCu;
    // 7F0E6CBC: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6CC0:
    ctx->pc = 0x7F0E6CC0u;
    // 7F0E6CC0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6CC4:
    ctx->pc = 0x7F0E6CC4u;
    // 7F0E6CC4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E6CC8:
    ctx->pc = 0x7F0E6CC8u;
    // 7F0E6CC8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CC8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0E6CCC:
    ctx->pc = 0x7F0E6CCCu;
    // 7F0E6CCC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6CD0:
    ctx->pc = 0x7F0E6CD0u;
    // 7F0E6CD0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CD0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F0E6CD4:
    ctx->pc = 0x7F0E6CD4u;
    // 7F0E6CD4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0E6CD8:
    ctx->pc = 0x7F0E6CD8u;
    // 7F0E6CD8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CD8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0E6CDC:
    ctx->pc = 0x7F0E6CDCu;
    // 7F0E6CDC: stfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CDCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6CE0:
    ctx->pc = 0x7F0E6CE0u;
    // 7F0E6CE0: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E6CE4:
    ctx->pc = 0x7F0E6CE4u;
    // 7F0E6CE4: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6CE8:
    ctx->pc = 0x7F0E6CE8u;
    // 7F0E6CE8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CE8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0E6CEC:
    ctx->pc = 0x7F0E6CECu;
    // 7F0E6CEC: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6CECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6CF0:
    ctx->pc = 0x7F0E6CF0u;
    ctx->downcount -= 1;
    // 7F0E6CF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0E6CF4:
    ctx->pc = 0x7F0E6CF4u;
    ctx->downcount -= 16;
    // 7F0E6CF4: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E6CF8:
    ctx->pc = 0x7F0E6CF8u;
    // 7F0E6CF8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6CFC:
    ctx->pc = 0x7F0E6CFCu;
    // 7F0E6CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E6D00:
    ctx->pc = 0x7F0E6D00u;
    // 7F0E6D00: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0E6D04:
    ctx->pc = 0x7F0E6D04u;
    // 7F0E6D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E6D08:
    ctx->pc = 0x7F0E6D08u;
    ctx->downcount -= 45;
    // 7F0E6D08: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E6D0C:
    ctx->pc = 0x7F0E6D0Cu;
    // 7F0E6D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E6D10:
    ctx->pc = 0x7F0E6D10u;
    // 7F0E6D10: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F0E6D14:
    ctx->pc = 0x7F0E6D14u;
    // 7F0E6D14: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6D18:
    ctx->pc = 0x7F0E6D18u;
    // 7F0E6D18: addi    r11, r7, -25816
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(-25816);

label_7F0E6D1C:
    ctx->pc = 0x7F0E6D1Cu;
    // 7F0E6D1C: stmw     r16, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E6D20:
    ctx->pc = 0x7F0E6D20u;
    // 7F0E6D20: addi    r23, r6, 16
    ctx->gpr[23] = ctx->gpr[6] + (u32)(s32)(16);

label_7F0E6D24:
    ctx->pc = 0x7F0E6D24u;
    // 7F0E6D24: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0E6D28:
    ctx->pc = 0x7F0E6D28u;
    // 7F0E6D28: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E6D2C:
    ctx->pc = 0x7F0E6D2Cu;
    // 7F0E6D2C: addi    r8, r6, 12832
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F0E6D30:
    ctx->pc = 0x7F0E6D30u;
    // 7F0E6D30: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E6D34:
    ctx->pc = 0x7F0E6D34u;
    // 7F0E6D34: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F0E6D38:
    ctx->pc = 0x7F0E6D38u;
    // 7F0E6D38: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E6D3C:
    ctx->pc = 0x7F0E6D3Cu;
    // 7F0E6D3C: addi    r4, r6, 16
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16);

label_7F0E6D40:
    ctx->pc = 0x7F0E6D40u;
    // 7F0E6D40: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6D44:
    ctx->pc = 0x7F0E6D44u;
    // 7F0E6D44: addi    r22, r23, 240
    ctx->gpr[22] = ctx->gpr[23] + (u32)(s32)(240);

label_7F0E6D48:
    ctx->pc = 0x7F0E6D48u;
    // 7F0E6D48: addi    r18, r23, 816
    ctx->gpr[18] = ctx->gpr[23] + (u32)(s32)(816);

label_7F0E6D4C:
    ctx->pc = 0x7F0E6D4Cu;
    // 7F0E6D4C: addi    r21, r23, 912
    ctx->gpr[21] = ctx->gpr[23] + (u32)(s32)(912);

label_7F0E6D50:
    ctx->pc = 0x7F0E6D50u;
    // 7F0E6D50: addi    r17, r23, 1488
    ctx->gpr[17] = ctx->gpr[23] + (u32)(s32)(1488);

label_7F0E6D54:
    ctx->pc = 0x7F0E6D54u;
    // 7F0E6D54: addi    r20, r23, 1584
    ctx->gpr[20] = ctx->gpr[23] + (u32)(s32)(1584);

label_7F0E6D58:
    ctx->pc = 0x7F0E6D58u;
    // 7F0E6D58: addi    r31, r23, 3120
    ctx->gpr[31] = ctx->gpr[23] + (u32)(s32)(3120);

label_7F0E6D5C:
    ctx->pc = 0x7F0E6D5Cu;
    // 7F0E6D5C: addi    r19, r23, 3376
    ctx->gpr[19] = ctx->gpr[23] + (u32)(s32)(3376);

label_7F0E6D60:
    ctx->pc = 0x7F0E6D60u;
    // 7F0E6D60: addi    r30, r23, 3568
    ctx->gpr[30] = ctx->gpr[23] + (u32)(s32)(3568);

label_7F0E6D64:
    ctx->pc = 0x7F0E6D64u;
    // 7F0E6D64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E6D68:
    ctx->pc = 0x7F0E6D68u;
    // 7F0E6D68: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E6D6C:
    ctx->pc = 0x7F0E6D6Cu;
    // 7F0E6D6C: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F0E6D70:
    ctx->pc = 0x7F0E6D70u;
    // 7F0E6D70: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0E6D74:
    ctx->pc = 0x7F0E6D74u;
    // 7F0E6D74: lwz     r7, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0E6D78:
    ctx->pc = 0x7F0E6D78u;
    // 7F0E6D78: lwz     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6D7C:
    ctx->pc = 0x7F0E6D7Cu;
    // 7F0E6D7C: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0E6D80:
    ctx->pc = 0x7F0E6D80u;
    // 7F0E6D80: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E6D84:
    ctx->pc = 0x7F0E6D84u;
    // 7F0E6D84: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0E6D88:
    ctx->pc = 0x7F0E6D88u;
    // 7F0E6D88: stw     r9, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E6D8C:
    ctx->pc = 0x7F0E6D8Cu;
    // 7F0E6D8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6D90:
    ctx->pc = 0x7F0E6D90u;
    // 7F0E6D90: bl      0x7F014788
    {
            ctx->lr = 0x7F0E6D94u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E6D94:
    ctx->pc = 0x7F0E6D94u;
    ctx->downcount -= 4;
    // 7F0E6D94: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6D98:
    ctx->pc = 0x7F0E6D98u;
    // 7F0E6D98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E6D9C:
    ctx->pc = 0x7F0E6D9Cu;
    // 7F0E6D9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E6DA0:
    ctx->pc = 0x7F0E6DA0u;
    // 7F0E6DA0: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E6DA4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E6DA4:
    ctx->pc = 0x7F0E6DA4u;
    ctx->downcount -= 9;
    // 7F0E6DA4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0E6DA8:
    ctx->pc = 0x7F0E6DA8u;
    // 7F0E6DA8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6DAC:
    ctx->pc = 0x7F0E6DACu;
    // 7F0E6DAC: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0E6DB0:
    ctx->pc = 0x7F0E6DB0u;
    // 7F0E6DB0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E6DB4:
    ctx->pc = 0x7F0E6DB4u;
    // 7F0E6DB4: addi    r4, r23, 208
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(208);

label_7F0E6DB8:
    ctx->pc = 0x7F0E6DB8u;
    // 7F0E6DB8: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0E6DBC:
    ctx->pc = 0x7F0E6DBCu;
    // 7F0E6DBC: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E6DC0:
    ctx->pc = 0x7F0E6DC0u;
    // 7F0E6DC0: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0E6DC4:
    ctx->pc = 0x7F0E6DC4u;
    // 7F0E6DC4: bl      0x7F014B78
    {
            ctx->lr = 0x7F0E6DC8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0E6DC8:
    ctx->pc = 0x7F0E6DC8u;
    ctx->downcount -= 3;
    // 7F0E6DC8: lwz     r0, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6DCC:
    ctx->pc = 0x7F0E6DCCu;
    // 7F0E6DCC: rlwinm. r0, r0, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E6DD0:
    ctx->pc = 0x7F0E6DD0u;
    // 7F0E6DD0: bc    12, 2, 0x7F0E6DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6DE4;
        }
    }

label_7F0E6DD4:
    ctx->pc = 0x7F0E6DD4u;
    ctx->downcount -= 4;
    // 7F0E6DD4: lwz     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6DD8:
    ctx->pc = 0x7F0E6DD8u;
    // 7F0E6DD8: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F0E6DDC:
    ctx->pc = 0x7F0E6DDCu;
    // 7F0E6DDC: stw     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6DE0:
    ctx->pc = 0x7F0E6DE0u;
    // 7F0E6DE0: b       0x7F0E6DF8
    {
            goto label_7F0E6DF8;
    }

label_7F0E6DE4:
    ctx->pc = 0x7F0E6DE4u;
    ctx->downcount -= 5;
    // 7F0E6DE4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6DE8:
    ctx->pc = 0x7F0E6DE8u;
    // 7F0E6DE8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E6DEC:
    ctx->pc = 0x7F0E6DECu;
    // 7F0E6DEC: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E6DF0:
    ctx->pc = 0x7F0E6DF0u;
    // 7F0E6DF0: addi    r4, r23, 192
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(192);

label_7F0E6DF4:
    ctx->pc = 0x7F0E6DF4u;
    // 7F0E6DF4: bl      0x7F014BBC
    {
            ctx->lr = 0x7F0E6DF8u;
            ctx->pc = 0x7F014BBCu;
            return;
    }

label_7F0E6DF8:
    ctx->pc = 0x7F0E6DF8u;
    ctx->downcount -= 2;
    // 7F0E6DF8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6DFC:
    ctx->pc = 0x7F0E6DFCu;
    // 7F0E6DFC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0E6E00u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0E6E00:
    ctx->pc = 0x7F0E6E00u;
    ctx->downcount -= 6;
    // 7F0E6E00: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0E6E04:
    ctx->pc = 0x7F0E6E04u;
    // 7F0E6E04: lis     r3, 32527
    ctx->gpr[3] = ((u32)(s32)(32527) << 16);

label_7F0E6E08:
    ctx->pc = 0x7F0E6E08u;
    // 7F0E6E08: addi    r25, r4, 12832
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0E6E0C:
    ctx->pc = 0x7F0E6E0Cu;
    // 7F0E6E0C: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F0E6E10:
    ctx->pc = 0x7F0E6E10u;
    // 7F0E6E10: addi    r26, r3, -1780
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(-1780);

label_7F0E6E14:
    ctx->pc = 0x7F0E6E14u;
    // 7F0E6E14: lis     r24, 512
    ctx->gpr[24] = ((u32)(s32)(512) << 16);

label_7F0E6E18:
    ctx->downcount -= 2;
    // 7F0E6E18: cmpwi   r16, 1
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6E1C:
    // 7F0E6E1C: bc    12, 2, 0x7F0E6E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6E80;
        }
    }

label_7F0E6E20:
    ctx->downcount -= 1;
    // 7F0E6E20: bc    4, 0, 0x7F0E6E30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6E30;
        }
    }

label_7F0E6E24:
    ctx->downcount -= 2;
    // 7F0E6E24: cmpwi   r16, 0
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6E28:
    // 7F0E6E28: bc    4, 0, 0x7F0E6E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6E3C;
        }
    }

label_7F0E6E2C:
    ctx->downcount -= 1;
    // 7F0E6E2C: b       0x7F0E6F0C
    {
            goto label_7F0E6F0C;
    }

label_7F0E6E30:
    ctx->downcount -= 2;
    // 7F0E6E30: cmpwi   r16, 3
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6E34:
    // 7F0E6E34: bc    4, 0, 0x7F0E6F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6F0C;
        }
    }

label_7F0E6E38:
    ctx->downcount -= 1;
    // 7F0E6E38: b       0x7F0E6ECC
    {
            goto label_7F0E6ECC;
    }

label_7F0E6E3C:
    ctx->downcount -= 17;
    // 7F0E6E3C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E6E40:
    // 7F0E6E40: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E6E44:
    ctx->pc = 0x7F0E6E44u;
    // 7F0E6E44: lfs     f4, -2228(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E44u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E6E48:
    // 7F0E6E48: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6E4C:
    // 7F0E6E4C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6E50:
    // 7F0E6E50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6E54:
    ctx->pc = 0x7F0E6E54u;
    // 7F0E6E54: lfs     f3, -2224(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E54u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6E58:
    ctx->pc = 0x7F0E6E58u;
    // 7F0E6E58: lfs     f2, -2220(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6E5C:
    ctx->pc = 0x7F0E6E5Cu;
    // 7F0E6E5C: lfs     f1, -2216(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6E60:
    ctx->pc = 0x7F0E6E60u;
    // 7F0E6E60: lfs     f0, -2212(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6E64:
    ctx->pc = 0x7F0E6E64u;
    // 7F0E6E64: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6E68:
    ctx->pc = 0x7F0E6E68u;
    // 7F0E6E68: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6E6C:
    ctx->pc = 0x7F0E6E6Cu;
    // 7F0E6E6C: stfs     f4, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6E70:
    ctx->pc = 0x7F0E6E70u;
    // 7F0E6E70: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E6E74:
    ctx->pc = 0x7F0E6E74u;
    // 7F0E6E74: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6E78:
    ctx->pc = 0x7F0E6E78u;
    // 7F0E6E78: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6E7C:
    // 7F0E6E7C: b       0x7F0E6F0C
    {
            goto label_7F0E6F0C;
    }

label_7F0E6E80:
    ctx->downcount -= 19;
    // 7F0E6E80: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F0E6E84:
    // 7F0E6E84: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E6E88:
    // 7F0E6E88: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E6E8C:
    // 7F0E6E8C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6E90:
    // 7F0E6E90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6E94:
    // 7F0E6E94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6E98:
    ctx->pc = 0x7F0E6E98u;
    // 7F0E6E98: lfs     f5, -2224(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E98u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-2224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F0E6E9C:
    ctx->pc = 0x7F0E6E9Cu;
    // 7F0E6E9C: lfs     f4, -2208(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6E9Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E6EA0:
    ctx->pc = 0x7F0E6EA0u;
    // 7F0E6EA0: lfs     f3, -2204(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EA0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6EA4:
    ctx->pc = 0x7F0E6EA4u;
    // 7F0E6EA4: lfs     f2, -2232(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6EA8:
    ctx->pc = 0x7F0E6EA8u;
    // 7F0E6EA8: lfs     f1, -2200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6EAC:
    ctx->pc = 0x7F0E6EACu;
    // 7F0E6EAC: lfs     f0, -2196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6EB0:
    ctx->pc = 0x7F0E6EB0u;
    // 7F0E6EB0: stfs     f5, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F0E6EB4:
    ctx->pc = 0x7F0E6EB4u;
    // 7F0E6EB4: stfs     f4, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6EB8:
    ctx->pc = 0x7F0E6EB8u;
    // 7F0E6EB8: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6EBC:
    ctx->pc = 0x7F0E6EBCu;
    // 7F0E6EBC: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E6EC0:
    ctx->pc = 0x7F0E6EC0u;
    // 7F0E6EC0: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6EC4:
    ctx->pc = 0x7F0E6EC4u;
    // 7F0E6EC4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6EC8:
    // 7F0E6EC8: b       0x7F0E6F0C
    {
            goto label_7F0E6F0C;
    }

label_7F0E6ECC:
    ctx->downcount -= 16;
    // 7F0E6ECC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E6ED0:
    // 7F0E6ED0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E6ED4:
    ctx->pc = 0x7F0E6ED4u;
    // 7F0E6ED4: lfs     f4, -2224(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6ED4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E6ED8:
    // 7F0E6ED8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6EDC:
    // 7F0E6EDC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6EE0:
    // 7F0E6EE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6EE4:
    ctx->pc = 0x7F0E6EE4u;
    // 7F0E6EE4: lfs     f3, -2208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EE4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6EE8:
    ctx->pc = 0x7F0E6EE8u;
    // 7F0E6EE8: lfs     f2, -2232(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6EEC:
    ctx->pc = 0x7F0E6EECu;
    // 7F0E6EEC: lfs     f1, -2196(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6EF0:
    ctx->pc = 0x7F0E6EF0u;
    // 7F0E6EF0: lfs     f0, -2192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6EF4:
    ctx->pc = 0x7F0E6EF4u;
    // 7F0E6EF4: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6EF8:
    ctx->pc = 0x7F0E6EF8u;
    // 7F0E6EF8: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6EFC:
    ctx->pc = 0x7F0E6EFCu;
    // 7F0E6EFC: stfs     f4, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E6F00:
    ctx->pc = 0x7F0E6F00u;
    // 7F0E6F00: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E6F04:
    ctx->pc = 0x7F0E6F04u;
    // 7F0E6F04: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E6F08:
    ctx->pc = 0x7F0E6F08u;
    // 7F0E6F08: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E6F0C:
    ctx->downcount -= 7;
    // 7F0E6F0C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0E6F10:
    // 7F0E6F10: addi    r4, r24, 16401
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(16401);

label_7F0E6F14:
    // 7F0E6F14: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E6F18:
    // 7F0E6F18: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E6F1C:
    // 7F0E6F1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E6F20:
    // 7F0E6F20: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E6F24:
    // 7F0E6F24: bl      0x7F014788
    {
            ctx->lr = 0x7F0E6F28u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E6F28:
    ctx->downcount -= 4;
    // 7F0E6F28: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0E6F2C:
    // 7F0E6F2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E6F30:
    // 7F0E6F30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E6F34:
    // 7F0E6F34: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E6F38u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E6F38:
    ctx->downcount -= 8;
    // 7F0E6F38: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0E6F3C:
    // 7F0E6F3C: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F0E6F40:
    // 7F0E6F40: or   r9, r25, r25
    {
        ctx->gpr[9] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F0E6F44:
    // 7F0E6F44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E6F48:
    // 7F0E6F48: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0E6F4C:
    // 7F0E6F4C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E6F50:
    // 7F0E6F50: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0E6F54:
    // 7F0E6F54: bl      0x7F014B78
    {
            ctx->lr = 0x7F0E6F58u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0E6F58:
    ctx->downcount -= 4;
    // 7F0E6F58: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0E6F5C:
    // 7F0E6F5C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0E6F60:
    // 7F0E6F60: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6F64:
    // 7F0E6F64: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0E6F68u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0E6F68:
    ctx->pc = 0x7F0E6F68u;
    ctx->downcount -= 8;
    // 7F0E6F68: lwz     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E6F6C:
    // 7F0E6F6C: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F0E6F70:
    // 7F0E6F70: cmpwi   r16, 3
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6F74:
    // 7F0E6F74: addi    r18, r18, 32
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(32);

label_7F0E6F78:
    // 7F0E6F78: oris    r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | (0x0008u << 16);

label_7F0E6F7C:
    ctx->pc = 0x7F0E6F7Cu;
    // 7F0E6F7C: stw     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E6F80:
    // 7F0E6F80: addi    r22, r22, 192
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(192);

label_7F0E6F84:
    // 7F0E6F84: bc    12, 0, 0x7F0E6E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6E18u;
                return;
            }
            goto label_7F0E6E18;
        }
    }

label_7F0E6F88:
    ctx->pc = 0x7F0E6F88u;
    ctx->downcount -= 5;
    // 7F0E6F88: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E6F8C:
    ctx->pc = 0x7F0E6F8Cu;
    // 7F0E6F8C: addi    r4, r23, 240
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(240);

label_7F0E6F90:
    ctx->pc = 0x7F0E6F90u;
    // 7F0E6F90: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0E6F94:
    ctx->pc = 0x7F0E6F94u;
    // 7F0E6F94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E6F98:
    ctx->pc = 0x7F0E6F98u;
    // 7F0E6F98: bl      0x7F014A50
    {
            ctx->lr = 0x7F0E6F9Cu;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0E6F9C:
    ctx->pc = 0x7F0E6F9Cu;
    ctx->downcount -= 6;
    // 7F0E6F9C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0E6FA0:
    ctx->pc = 0x7F0E6FA0u;
    // 7F0E6FA0: lis     r3, 32527
    ctx->gpr[3] = ((u32)(s32)(32527) << 16);

label_7F0E6FA4:
    ctx->pc = 0x7F0E6FA4u;
    // 7F0E6FA4: addi    r18, r4, 12832
    ctx->gpr[18] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0E6FA8:
    ctx->pc = 0x7F0E6FA8u;
    // 7F0E6FA8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F0E6FAC:
    ctx->pc = 0x7F0E6FACu;
    // 7F0E6FAC: addi    r16, r3, -1780
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-1780);

label_7F0E6FB0:
    ctx->pc = 0x7F0E6FB0u;
    // 7F0E6FB0: lis     r22, 512
    ctx->gpr[22] = ((u32)(s32)(512) << 16);

label_7F0E6FB4:
    ctx->downcount -= 2;
    // 7F0E6FB4: cmpwi   r24, 1
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6FB8:
    // 7F0E6FB8: bc    12, 2, 0x7F0E7014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7014;
        }
    }

label_7F0E6FBC:
    ctx->downcount -= 1;
    // 7F0E6FBC: bc    4, 0, 0x7F0E6FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6FCC;
        }
    }

label_7F0E6FC0:
    ctx->downcount -= 2;
    // 7F0E6FC0: cmpwi   r24, 0
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

label_7F0E6FC4:
    // 7F0E6FC4: bc    4, 0, 0x7F0E6FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E6FD8;
        }
    }

label_7F0E6FC8:
    ctx->downcount -= 1;
    // 7F0E6FC8: b       0x7F0E7098
    {
            goto label_7F0E7098;
    }

label_7F0E6FCC:
    ctx->downcount -= 2;
    // 7F0E6FCC: cmpwi   r24, 3
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E6FD0:
    // 7F0E6FD0: bc    4, 0, 0x7F0E7098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7098;
        }
    }

label_7F0E6FD4:
    ctx->downcount -= 1;
    // 7F0E6FD4: b       0x7F0E7058
    {
            goto label_7F0E7058;
    }

label_7F0E6FD8:
    ctx->downcount -= 15;
    // 7F0E6FD8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E6FDC:
    // 7F0E6FDC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E6FE0:
    ctx->pc = 0x7F0E6FE0u;
    // 7F0E6FE0: lfs     f3, -2188(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FE0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E6FE4:
    // 7F0E6FE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E6FE8:
    ctx->pc = 0x7F0E6FE8u;
    // 7F0E6FE8: lfs     f1, -2232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E6FEC:
    // 7F0E6FEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E6FF0:
    ctx->pc = 0x7F0E6FF0u;
    // 7F0E6FF0: lfs     f2, -2184(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E6FF4:
    ctx->pc = 0x7F0E6FF4u;
    // 7F0E6FF4: lfs     f0, -2180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E6FF8:
    ctx->pc = 0x7F0E6FF8u;
    // 7F0E6FF8: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E6FFC:
    ctx->pc = 0x7F0E6FFCu;
    // 7F0E6FFC: stfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E6FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E7000:
    ctx->pc = 0x7F0E7000u;
    // 7F0E7000: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E7004:
    ctx->pc = 0x7F0E7004u;
    // 7F0E7004: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7008:
    ctx->pc = 0x7F0E7008u;
    // 7F0E7008: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E700C:
    ctx->pc = 0x7F0E700Cu;
    // 7F0E700C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E700Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7010:
    // 7F0E7010: b       0x7F0E7098
    {
            goto label_7F0E7098;
    }

label_7F0E7014:
    ctx->downcount -= 17;
    // 7F0E7014: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E7018:
    // 7F0E7018: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E701C:
    // 7F0E701C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E7020:
    // 7F0E7020: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E7024:
    ctx->pc = 0x7F0E7024u;
    // 7F0E7024: lfs     f1, -2168(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7024u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E7028:
    // 7F0E7028: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E702C:
    ctx->pc = 0x7F0E702Cu;
    // 7F0E702C: lfs     f4, -2224(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E702Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E7030:
    ctx->pc = 0x7F0E7030u;
    // 7F0E7030: lfs     f3, -2176(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7030u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E7034:
    ctx->pc = 0x7F0E7034u;
    // 7F0E7034: lfs     f2, -2172(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7034u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E7038:
    ctx->pc = 0x7F0E7038u;
    // 7F0E7038: lfs     f0, -2232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7038u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E703C:
    ctx->pc = 0x7F0E703Cu;
    // 7F0E703C: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E703Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E7040:
    ctx->pc = 0x7F0E7040u;
    // 7F0E7040: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7040u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E7044:
    ctx->pc = 0x7F0E7044u;
    // 7F0E7044: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E7048:
    ctx->pc = 0x7F0E7048u;
    // 7F0E7048: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E704C:
    ctx->pc = 0x7F0E704Cu;
    // 7F0E704C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E704Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7050:
    ctx->pc = 0x7F0E7050u;
    // 7F0E7050: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7054:
    // 7F0E7054: b       0x7F0E7098
    {
            goto label_7F0E7098;
    }

label_7F0E7058:
    ctx->downcount -= 16;
    // 7F0E7058: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E705C:
    // 7F0E705C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E7060:
    // 7F0E7060: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E7064:
    // 7F0E7064: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E7068:
    ctx->pc = 0x7F0E7068u;
    // 7F0E7068: lfs     f1, -2232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7068u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E706C:
    // 7F0E706C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E7070:
    ctx->pc = 0x7F0E7070u;
    // 7F0E7070: lfs     f4, -2168(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7070u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E7074:
    ctx->pc = 0x7F0E7074u;
    // 7F0E7074: lfs     f3, -2164(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7074u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E7078:
    ctx->pc = 0x7F0E7078u;
    // 7F0E7078: lfs     f2, -2172(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7078u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E707C:
    ctx->pc = 0x7F0E707Cu;
    // 7F0E707C: lfs     f0, -2160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E707Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E7080:
    ctx->pc = 0x7F0E7080u;
    // 7F0E7080: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7080u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E7084:
    ctx->pc = 0x7F0E7084u;
    // 7F0E7084: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E7088:
    ctx->pc = 0x7F0E7088u;
    // 7F0E7088: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E708C:
    ctx->pc = 0x7F0E708Cu;
    // 7F0E708C: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E708Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7090:
    ctx->pc = 0x7F0E7090u;
    // 7F0E7090: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7094:
    ctx->pc = 0x7F0E7094u;
    // 7F0E7094: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7098:
    ctx->downcount -= 7;
    // 7F0E7098: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F0E709C:
    // 7F0E709C: addi    r4, r22, 16401
    ctx->gpr[4] = ctx->gpr[22] + (u32)(s32)(16401);

label_7F0E70A0:
    // 7F0E70A0: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E70A4:
    // 7F0E70A4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E70A8:
    // 7F0E70A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E70AC:
    // 7F0E70AC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E70B0:
    // 7F0E70B0: bl      0x7F014788
    {
            ctx->lr = 0x7F0E70B4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E70B4:
    ctx->downcount -= 4;
    // 7F0E70B4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F0E70B8:
    // 7F0E70B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E70BC:
    // 7F0E70BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E70C0:
    // 7F0E70C0: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E70C4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E70C4:
    ctx->downcount -= 8;
    // 7F0E70C4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F0E70C8:
    // 7F0E70C8: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F0E70CC:
    // 7F0E70CC: or   r9, r18, r18
    {
        ctx->gpr[9] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F0E70D0:
    // 7F0E70D0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E70D4:
    // 7F0E70D4: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0E70D8:
    // 7F0E70D8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E70DC:
    // 7F0E70DC: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0E70E0:
    // 7F0E70E0: bl      0x7F014B78
    {
            ctx->lr = 0x7F0E70E4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0E70E4:
    ctx->downcount -= 4;
    // 7F0E70E4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F0E70E8:
    // 7F0E70E8: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E70EC:
    // 7F0E70EC: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E70F0:
    // 7F0E70F0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0E70F4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0E70F4:
    ctx->downcount -= 5;
    // 7F0E70F4: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F0E70F8:
    // 7F0E70F8: addi    r17, r17, 32
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(32);

label_7F0E70FC:
    // 7F0E70FC: cmpwi   r24, 3
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7100:
    // 7F0E7100: addi    r21, r21, 192
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(192);

label_7F0E7104:
    // 7F0E7104: bc    12, 0, 0x7F0E6FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E6FB4u;
                return;
            }
            goto label_7F0E6FB4;
        }
    }

label_7F0E7108:
    ctx->pc = 0x7F0E7108u;
    ctx->downcount -= 5;
    // 7F0E7108: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E710C:
    ctx->pc = 0x7F0E710Cu;
    // 7F0E710C: addi    r4, r23, 912
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(912);

label_7F0E7110:
    ctx->pc = 0x7F0E7110u;
    // 7F0E7110: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0E7114:
    ctx->pc = 0x7F0E7114u;
    // 7F0E7114: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E7118:
    ctx->pc = 0x7F0E7118u;
    // 7F0E7118: bl      0x7F014A50
    {
            ctx->lr = 0x7F0E711Cu;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0E711C:
    ctx->pc = 0x7F0E711Cu;
    ctx->downcount -= 6;
    // 7F0E711C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0E7120:
    ctx->pc = 0x7F0E7120u;
    // 7F0E7120: lis     r3, 32527
    ctx->gpr[3] = ((u32)(s32)(32527) << 16);

label_7F0E7124:
    ctx->pc = 0x7F0E7124u;
    // 7F0E7124: addi    r17, r4, 12832
    ctx->gpr[17] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0E7128:
    ctx->pc = 0x7F0E7128u;
    // 7F0E7128: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F0E712C:
    ctx->pc = 0x7F0E712Cu;
    // 7F0E712C: addi    r16, r3, -1780
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-1780);

label_7F0E7130:
    ctx->pc = 0x7F0E7130u;
    // 7F0E7130: lis     r18, 512
    ctx->gpr[18] = ((u32)(s32)(512) << 16);

label_7F0E7134:
    ctx->downcount -= 2;
    // 7F0E7134: cmpwi   r24, 5
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7138:
    // 7F0E7138: bc    12, 2, 0x7F0E71E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E71E4;
        }
    }

label_7F0E713C:
    ctx->downcount -= 1;
    // 7F0E713C: bc    4, 0, 0x7F0E7154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7154;
        }
    }

label_7F0E7140:
    ctx->downcount -= 2;
    // 7F0E7140: cmpwi   r24, 4
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7144:
    // 7F0E7144: bc    4, 0, 0x7F0E71A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E71A0;
        }
    }

label_7F0E7148:
    ctx->downcount -= 2;
    // 7F0E7148: cmpwi   r24, 0
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

label_7F0E714C:
    // 7F0E714C: bc    4, 0, 0x7F0E7164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7164;
        }
    }

label_7F0E7150:
    ctx->downcount -= 1;
    // 7F0E7150: b       0x7F0E7224
    {
            goto label_7F0E7224;
    }

label_7F0E7154:
    ctx->downcount -= 2;
    // 7F0E7154: cmpwi   r24, 7
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7158:
    // 7F0E7158: bc    12, 2, 0x7F0E71E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E71E4;
        }
    }

label_7F0E715C:
    ctx->downcount -= 1;
    // 7F0E715C: bc    4, 0, 0x7F0E7224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7224;
        }
    }

label_7F0E7160:
    ctx->downcount -= 1;
    // 7F0E7160: b       0x7F0E71A0
    {
            goto label_7F0E71A0;
    }

label_7F0E7164:
    ctx->downcount -= 15;
    // 7F0E7164: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E7168:
    // 7F0E7168: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E716C:
    ctx->pc = 0x7F0E716Cu;
    // 7F0E716C: lfs     f3, -2156(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E716Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E7170:
    // 7F0E7170: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E7174:
    ctx->pc = 0x7F0E7174u;
    // 7F0E7174: lfs     f1, -2232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7174u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E7178:
    // 7F0E7178: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E717C:
    ctx->pc = 0x7F0E717Cu;
    // 7F0E717C: lfs     f2, -2164(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E717Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E7180:
    ctx->pc = 0x7F0E7180u;
    // 7F0E7180: lfs     f0, -2152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7180u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E7184:
    ctx->pc = 0x7F0E7184u;
    // 7F0E7184: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E7188:
    ctx->pc = 0x7F0E7188u;
    // 7F0E7188: stfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E718C:
    ctx->pc = 0x7F0E718Cu;
    // 7F0E718C: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E718Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E7190:
    ctx->pc = 0x7F0E7190u;
    // 7F0E7190: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7194:
    ctx->pc = 0x7F0E7194u;
    // 7F0E7194: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7198:
    ctx->pc = 0x7F0E7198u;
    // 7F0E7198: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E719C:
    // 7F0E719C: b       0x7F0E7224
    {
            goto label_7F0E7224;
    }

label_7F0E71A0:
    ctx->downcount -= 17;
    // 7F0E71A0: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E71A4:
    // 7F0E71A4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E71A8:
    // 7F0E71A8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E71AC:
    // 7F0E71AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E71B0:
    ctx->pc = 0x7F0E71B0u;
    // 7F0E71B0: lfs     f1, -2136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E71B4:
    // 7F0E71B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E71B8:
    ctx->pc = 0x7F0E71B8u;
    // 7F0E71B8: lfs     f4, -2148(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71B8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E71BC:
    ctx->pc = 0x7F0E71BCu;
    // 7F0E71BC: lfs     f3, -2144(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E71C0:
    ctx->pc = 0x7F0E71C0u;
    // 7F0E71C0: lfs     f2, -2140(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71C0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E71C4:
    ctx->pc = 0x7F0E71C4u;
    // 7F0E71C4: lfs     f0, -2132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E71C8:
    ctx->pc = 0x7F0E71C8u;
    // 7F0E71C8: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E71CC:
    ctx->pc = 0x7F0E71CCu;
    // 7F0E71CC: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E71D0:
    ctx->pc = 0x7F0E71D0u;
    // 7F0E71D0: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E71D4:
    ctx->pc = 0x7F0E71D4u;
    // 7F0E71D4: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E71D8:
    ctx->pc = 0x7F0E71D8u;
    // 7F0E71D8: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E71DC:
    ctx->pc = 0x7F0E71DCu;
    // 7F0E71DC: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E71E0:
    // 7F0E71E0: b       0x7F0E7224
    {
            goto label_7F0E7224;
    }

label_7F0E71E4:
    ctx->downcount -= 16;
    // 7F0E71E4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0E71E8:
    // 7F0E71E8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0E71EC:
    // 7F0E71EC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E71F0:
    // 7F0E71F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E71F4:
    ctx->pc = 0x7F0E71F4u;
    // 7F0E71F4: lfs     f1, -2124(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E71F8:
    // 7F0E71F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E71FC:
    ctx->pc = 0x7F0E71FCu;
    // 7F0E71FC: lfs     f4, -2148(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0E71FCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F0E7200:
    ctx->pc = 0x7F0E7200u;
    // 7F0E7200: lfs     f3, -2144(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7200u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0E7204:
    ctx->pc = 0x7F0E7204u;
    // 7F0E7204: lfs     f2, -2128(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7204u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E7208:
    ctx->pc = 0x7F0E7208u;
    // 7F0E7208: lfs     f0, -2120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7208u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E720C:
    ctx->pc = 0x7F0E720Cu;
    // 7F0E720C: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E720Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0E7210:
    ctx->pc = 0x7F0E7210u;
    // 7F0E7210: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0E7214:
    ctx->pc = 0x7F0E7214u;
    // 7F0E7214: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E7218:
    ctx->pc = 0x7F0E7218u;
    // 7F0E7218: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E721C:
    ctx->pc = 0x7F0E721Cu;
    // 7F0E721C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E721Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E7220:
    ctx->pc = 0x7F0E7220u;
    // 7F0E7220: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7224:
    ctx->downcount -= 7;
    // 7F0E7224: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F0E7228:
    // 7F0E7228: addi    r4, r18, 16401
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(16401);

label_7F0E722C:
    // 7F0E722C: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E7230:
    // 7F0E7230: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E7234:
    // 7F0E7234: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E7238:
    // 7F0E7238: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E723C:
    // 7F0E723C: bl      0x7F014788
    {
            ctx->lr = 0x7F0E7240u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E7240:
    ctx->downcount -= 4;
    // 7F0E7240: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F0E7244:
    // 7F0E7244: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7248:
    // 7F0E7248: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E724C:
    // 7F0E724C: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E7250u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E7250:
    ctx->downcount -= 8;
    // 7F0E7250: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F0E7254:
    // 7F0E7254: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7258:
    // 7F0E7258: or   r9, r17, r17
    {
        ctx->gpr[9] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F0E725C:
    // 7F0E725C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E7260:
    // 7F0E7260: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0E7264:
    // 7F0E7264: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E7268:
    // 7F0E7268: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0E726C:
    // 7F0E726C: bl      0x7F014B78
    {
            ctx->lr = 0x7F0E7270u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0E7270:
    ctx->downcount -= 4;
    // 7F0E7270: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F0E7274:
    // 7F0E7274: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E7278:
    // 7F0E7278: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E727C:
    // 7F0E727C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0E7280u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0E7280:
    ctx->downcount -= 5;
    // 7F0E7280: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F0E7284:
    // 7F0E7284: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_7F0E7288:
    // 7F0E7288: cmpwi   r24, 8
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E728C:
    // 7F0E728C: addi    r20, r20, 192
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(192);

label_7F0E7290:
    // 7F0E7290: bc    12, 0, 0x7F0E7134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E7134u;
                return;
            }
            goto label_7F0E7134;
        }
    }

label_7F0E7294:
    ctx->pc = 0x7F0E7294u;
    ctx->downcount -= 5;
    // 7F0E7294: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E7298:
    ctx->pc = 0x7F0E7298u;
    // 7F0E7298: addi    r4, r23, 1584
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(1584);

label_7F0E729C:
    ctx->pc = 0x7F0E729Cu;
    // 7F0E729C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F0E72A0:
    ctx->pc = 0x7F0E72A0u;
    // 7F0E72A0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E72A4:
    ctx->pc = 0x7F0E72A4u;
    // 7F0E72A4: bl      0x7F014A50
    {
            ctx->lr = 0x7F0E72A8u;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0E72A8:
    ctx->pc = 0x7F0E72A8u;
    ctx->downcount -= 24;
    // 7F0E72A8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0E72AC:
    ctx->pc = 0x7F0E72ACu;
    // 7F0E72AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E72B0:
    ctx->pc = 0x7F0E72B0u;
    // 7F0E72B0: lfs     f2, -2140(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E72B4:
    ctx->pc = 0x7F0E72B4u;
    // 7F0E72B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E72B8:
    ctx->pc = 0x7F0E72B8u;
    // 7F0E72B8: lfs     f0, -2232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E72BC:
    ctx->pc = 0x7F0E72BCu;
    // 7F0E72BC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0E72C0:
    ctx->pc = 0x7F0E72C0u;
    // 7F0E72C0: lfs     f1, -2116(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E72C4:
    ctx->pc = 0x7F0E72C4u;
    // 7F0E72C4: lis     r4, 32527
    ctx->gpr[4] = ((u32)(s32)(32527) << 16);

label_7F0E72C8:
    ctx->pc = 0x7F0E72C8u;
    // 7F0E72C8: addi    r17, r5, 12832
    ctx->gpr[17] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0E72CC:
    ctx->pc = 0x7F0E72CCu;
    // 7F0E72CC: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F0E72D0:
    ctx->pc = 0x7F0E72D0u;
    // 7F0E72D0: addi    r16, r4, -1780
    ctx->gpr[16] = ctx->gpr[4] + (u32)(s32)(-1780);

label_7F0E72D4:
    ctx->pc = 0x7F0E72D4u;
    // 7F0E72D4: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E72D8:
    ctx->pc = 0x7F0E72D8u;
    // 7F0E72D8: addi    r4, r6, 16401
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16401);

label_7F0E72DC:
    ctx->pc = 0x7F0E72DCu;
    // 7F0E72DC: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F0E72E0:
    ctx->pc = 0x7F0E72E0u;
    // 7F0E72E0: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0E72E4:
    ctx->pc = 0x7F0E72E4u;
    // 7F0E72E4: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E72E8:
    ctx->pc = 0x7F0E72E8u;
    // 7F0E72E8: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E72EC:
    ctx->pc = 0x7F0E72ECu;
    // 7F0E72EC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E72F0:
    ctx->pc = 0x7F0E72F0u;
    // 7F0E72F0: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E72F4:
    ctx->pc = 0x7F0E72F4u;
    // 7F0E72F4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E72F8:
    ctx->pc = 0x7F0E72F8u;
    // 7F0E72F8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E72FC:
    ctx->pc = 0x7F0E72FCu;
    // 7F0E72FC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E72FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7300:
    ctx->pc = 0x7F0E7300u;
    // 7F0E7300: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7300u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7304:
    ctx->pc = 0x7F0E7304u;
    // 7F0E7304: bl      0x7F014788
    {
            ctx->lr = 0x7F0E7308u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E7308:
    ctx->pc = 0x7F0E7308u;
    ctx->downcount -= 4;
    // 7F0E7308: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F0E730C:
    ctx->pc = 0x7F0E730Cu;
    // 7F0E730C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7310:
    ctx->pc = 0x7F0E7310u;
    // 7F0E7310: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7314:
    ctx->pc = 0x7F0E7314u;
    // 7F0E7314: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E7318u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E7318:
    ctx->pc = 0x7F0E7318u;
    ctx->downcount -= 8;
    // 7F0E7318: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F0E731C:
    ctx->pc = 0x7F0E731Cu;
    // 7F0E731C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7320:
    ctx->pc = 0x7F0E7320u;
    // 7F0E7320: or   r9, r17, r17
    {
        ctx->gpr[9] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F0E7324:
    ctx->pc = 0x7F0E7324u;
    // 7F0E7324: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E7328:
    ctx->pc = 0x7F0E7328u;
    // 7F0E7328: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F0E732C:
    ctx->pc = 0x7F0E732Cu;
    // 7F0E732C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0E7330:
    ctx->pc = 0x7F0E7330u;
    // 7F0E7330: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0E7334:
    ctx->pc = 0x7F0E7334u;
    // 7F0E7334: bl      0x7F014B78
    {
            ctx->lr = 0x7F0E7338u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0E7338:
    ctx->pc = 0x7F0E7338u;
    ctx->downcount -= 4;
    // 7F0E7338: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F0E733C:
    ctx->pc = 0x7F0E733Cu;
    // 7F0E733C: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E7340:
    ctx->pc = 0x7F0E7340u;
    // 7F0E7340: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E7344:
    ctx->pc = 0x7F0E7344u;
    // 7F0E7344: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0E7348u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0E7348:
    ctx->pc = 0x7F0E7348u;
    ctx->downcount -= 5;
    // 7F0E7348: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E734C:
    ctx->pc = 0x7F0E734Cu;
    // 7F0E734C: addi    r4, r23, 3376
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(3376);

label_7F0E7350:
    ctx->pc = 0x7F0E7350u;
    // 7F0E7350: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E7354:
    ctx->pc = 0x7F0E7354u;
    // 7F0E7354: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F0E7358:
    ctx->pc = 0x7F0E7358u;
    // 7F0E7358: bl      0x7F014A50
    {
            ctx->lr = 0x7F0E735Cu;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0E735C:
    ctx->pc = 0x7F0E735Cu;
    ctx->downcount -= 20;
    // 7F0E735C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E7360:
    ctx->pc = 0x7F0E7360u;
    // 7F0E7360: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0E7364:
    ctx->pc = 0x7F0E7364u;
    // 7F0E7364: addi    r7, r4, -25816
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-25816);

label_7F0E7368:
    ctx->pc = 0x7F0E7368u;
    // 7F0E7368: addi    r16, r23, 3600
    ctx->gpr[16] = ctx->gpr[23] + (u32)(s32)(3600);

label_7F0E736C:
    ctx->pc = 0x7F0E736Cu;
    // 7F0E736C: lwz     r5, 96(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7370:
    ctx->pc = 0x7F0E7370u;
    // 7F0E7370: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F0E7374:
    ctx->pc = 0x7F0E7374u;
    // 7F0E7374: lwz     r6, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E7378:
    ctx->pc = 0x7F0E7378u;
    // 7F0E7378: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0E737C:
    ctx->pc = 0x7F0E737Cu;
    // 7F0E737C: lwz     r9, 104(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(104);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F0E7380:
    ctx->pc = 0x7F0E7380u;
    // 7F0E7380: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E7384:
    ctx->pc = 0x7F0E7384u;
    // 7F0E7384: lwz     r0, 108(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7388:
    ctx->pc = 0x7F0E7388u;
    // 7F0E7388: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F0E738C:
    ctx->pc = 0x7F0E738Cu;
    // 7F0E738C: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E7390:
    ctx->pc = 0x7F0E7390u;
    // 7F0E7390: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E7394:
    ctx->pc = 0x7F0E7394u;
    // 7F0E7394: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E7398:
    ctx->pc = 0x7F0E7398u;
    // 7F0E7398: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E739C:
    ctx->pc = 0x7F0E739Cu;
    // 7F0E739C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0E73A0:
    ctx->pc = 0x7F0E73A0u;
    // 7F0E73A0: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0E73A4:
    ctx->pc = 0x7F0E73A4u;
    // 7F0E73A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E73A8:
    ctx->pc = 0x7F0E73A8u;
    // 7F0E73A8: bl      0x7F014788
    {
            ctx->lr = 0x7F0E73ACu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0E73AC:
    ctx->pc = 0x7F0E73ACu;
    ctx->downcount -= 4;
    // 7F0E73AC: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E73B0:
    ctx->pc = 0x7F0E73B0u;
    // 7F0E73B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E73B4:
    ctx->pc = 0x7F0E73B4u;
    // 7F0E73B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E73B8:
    ctx->pc = 0x7F0E73B8u;
    // 7F0E73B8: bl      0x7F014B60
    {
            ctx->lr = 0x7F0E73BCu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0E73BC:
    ctx->pc = 0x7F0E73BCu;
    ctx->downcount -= 5;
    // 7F0E73BC: lis     r4, 32527
    ctx->gpr[4] = ((u32)(s32)(32527) << 16);

label_7F0E73C0:
    ctx->pc = 0x7F0E73C0u;
    // 7F0E73C0: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E73C4:
    ctx->pc = 0x7F0E73C4u;
    // 7F0E73C4: addi    r4, r4, -1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1560);

label_7F0E73C8:
    ctx->pc = 0x7F0E73C8u;
    // 7F0E73C8: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E73CC:
    ctx->pc = 0x7F0E73CCu;
    // 7F0E73CC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0E73D0u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0E73D0:
    ctx->pc = 0x7F0E73D0u;
    ctx->downcount -= 2;
    // 7F0E73D0: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F0E73D4:
    ctx->pc = 0x7F0E73D4u;
    // 7F0E73D4: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0E73D8u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0E73D8:
    ctx->pc = 0x7F0E73D8u;
    ctx->downcount -= 8;
    // 7F0E73D8: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E73DC:
    ctx->pc = 0x7F0E73DCu;
    // 7F0E73DC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E73E0:
    ctx->pc = 0x7F0E73E0u;
    // 7F0E73E0: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E73E4:
    ctx->pc = 0x7F0E73E4u;
    // 7F0E73E4: addi    r3, r27, 16
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(16);

label_7F0E73E8:
    ctx->pc = 0x7F0E73E8u;
    // 7F0E73E8: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F0E73EC:
    ctx->pc = 0x7F0E73ECu;
    // 7F0E73EC: addi    r6, r28, 164
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(164);

label_7F0E73F0:
    ctx->pc = 0x7F0E73F0u;
    // 7F0E73F0: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F0E73F4:
    ctx->pc = 0x7F0E73F4u;
    // 7F0E73F4: bl      0x7F01D42C
    {
            ctx->lr = 0x7F0E73F8u;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F0E73F8:
    ctx->pc = 0x7F0E73F8u;
    ctx->downcount -= 3;
    // 7F0E73F8: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F0E73FC:
    ctx->pc = 0x7F0E73FCu;
    // 7F0E73FC: addi    r3, r27, 16
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(16);

label_7F0E7400:
    ctx->pc = 0x7F0E7400u;
    // 7F0E7400: bl      0x7F01D46C
    {
            ctx->lr = 0x7F0E7404u;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F0E7404:
    ctx->pc = 0x7F0E7404u;
    ctx->downcount -= 2;
    // 7F0E7404: addi    r3, r27, 16
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(16);

label_7F0E7408:
    ctx->pc = 0x7F0E7408u;
    // 7F0E7408: bl      0x7F01D474
    {
            ctx->lr = 0x7F0E740Cu;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F0E740C:
    ctx->pc = 0x7F0E740Cu;
    ctx->downcount -= 17;
    // 7F0E740C: lmw     r16, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E7410:
    ctx->pc = 0x7F0E7410u;
    // 7F0E7410: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E7414:
    ctx->pc = 0x7F0E7414u;
    // 7F0E7414: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7418:
    ctx->pc = 0x7F0E7418u;
    // 7F0E7418: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E741C:
    ctx->pc = 0x7F0E741Cu;
    // 7F0E741C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0E7420:
    ctx->pc = 0x7F0E7420u;
    // 7F0E7420: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7424:
    ctx->pc = 0x7F0E7424u;
    ctx->downcount -= 23;
    // 7F0E7424: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7428:
    ctx->pc = 0x7F0E7428u;
    // 7F0E7428: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E742C:
    ctx->pc = 0x7F0E742Cu;
    // 7F0E742C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F0E7430:
    ctx->pc = 0x7F0E7430u;
    // 7F0E7430: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7434:
    ctx->pc = 0x7F0E7434u;
    // 7F0E7434: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E7438:
    ctx->pc = 0x7F0E7438u;
    // 7F0E7438: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E743C:
    ctx->pc = 0x7F0E743Cu;
    // 7F0E743C: addi    r3, r6, 13880
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(13880);

label_7F0E7440:
    ctx->pc = 0x7F0E7440u;
    // 7F0E7440: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E7444:
    ctx->pc = 0x7F0E7444u;
    // 7F0E7444: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E7448:
    ctx->pc = 0x7F0E7448u;
    // 7F0E7448: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E744C:
    ctx->pc = 0x7F0E744Cu;
    // 7F0E744C: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E7450:
    ctx->pc = 0x7F0E7450u;
    // 7F0E7450: cmpwi   r0, 20
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

label_7F0E7454:
    ctx->pc = 0x7F0E7454u;
    // 7F0E7454: bc    4, 0, 0x7F0E7474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7474;
        }
    }

label_7F0E7458:
    ctx->pc = 0x7F0E7458u;
    ctx->downcount -= 6;
    // 7F0E7458: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0E745C:
    ctx->pc = 0x7F0E745Cu;
    // 7F0E745C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7460:
    ctx->pc = 0x7F0E7460u;
    // 7F0E7460: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7464:
    ctx->pc = 0x7F0E7464u;
    // 7F0E7464: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7468:
    ctx->pc = 0x7F0E7468u;
    // 7F0E7468: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E746C:
    ctx->pc = 0x7F0E746Cu;
    // 7F0E746C: bl      0x7F0E98B0
    {
            ctx->lr = 0x7F0E7470u;
            ctx->pc = 0x7F0E98B0u;
            return;
    }

label_7F0E7470:
    ctx->pc = 0x7F0E7470u;
    ctx->downcount -= 1;
    // 7F0E7470: b       0x7F0E748C
    {
            goto label_7F0E748C;
    }

label_7F0E7474:
    ctx->pc = 0x7F0E7474u;
    ctx->downcount -= 6;
    // 7F0E7474: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0E7478:
    ctx->pc = 0x7F0E7478u;
    // 7F0E7478: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E747C:
    ctx->pc = 0x7F0E747Cu;
    // 7F0E747C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F0E7480:
    ctx->pc = 0x7F0E7480u;
    // 7F0E7480: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7484:
    ctx->pc = 0x7F0E7484u;
    // 7F0E7484: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E7488:
    ctx->pc = 0x7F0E7488u;
    // 7F0E7488: bl      0x7F0E98B0
    {
            ctx->lr = 0x7F0E748Cu;
            ctx->pc = 0x7F0E98B0u;
            return;
    }

label_7F0E748C:
    ctx->pc = 0x7F0E748Cu;
    ctx->downcount -= 4;
    // 7F0E748C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7490:
    ctx->pc = 0x7F0E7490u;
    // 7F0E7490: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7494:
    ctx->pc = 0x7F0E7494u;
    // 7F0E7494: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7498:
    ctx->pc = 0x7F0E7498u;
    // 7F0E7498: bl      0x7F0E7500
    {
            ctx->lr = 0x7F0E749Cu;
            goto label_7F0E7500;
    }

label_7F0E749C:
    ctx->pc = 0x7F0E749Cu;
    ctx->downcount -= 8;
    // 7F0E749C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E74A0:
    ctx->pc = 0x7F0E74A0u;
    // 7F0E74A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0E74A4:
    ctx->pc = 0x7F0E74A4u;
    // 7F0E74A4: lfs     f2, -2168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E74A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0E74A8:
    ctx->pc = 0x7F0E74A8u;
    // 7F0E74A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E74AC:
    ctx->pc = 0x7F0E74ACu;
    // 7F0E74AC: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0E74ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E74B0:
    ctx->pc = 0x7F0E74B0u;
    // 7F0E74B0: lfs     f1, -2112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0E74B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E74B4:
    ctx->pc = 0x7F0E74B4u;
    // 7F0E74B4: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E74B4u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_7F0E74B8:
    ctx->pc = 0x7F0E74B8u;
    // 7F0E74B8: bl      0x7F023FB4
    {
            ctx->lr = 0x7F0E74BCu;
            ctx->pc = 0x7F023FB4u;
            return;
    }

label_7F0E74BC:
    ctx->pc = 0x7F0E74BCu;
    ctx->downcount -= 2;
    // 7F0E74BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E74C0:
    ctx->pc = 0x7F0E74C0u;
    // 7F0E74C0: bl      0x7F023EA8
    {
            ctx->lr = 0x7F0E74C4u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F0E74C4:
    ctx->pc = 0x7F0E74C4u;
    ctx->downcount -= 4;
    // 7F0E74C4: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E74C8:
    ctx->pc = 0x7F0E74C8u;
    // 7F0E74C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E74CC:
    ctx->pc = 0x7F0E74CCu;
    // 7F0E74CC: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F0E74D0:
    ctx->pc = 0x7F0E74D0u;
    // 7F0E74D0: bl      0x7F1025F8
    {
            ctx->lr = 0x7F0E74D4u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F0E74D4:
    ctx->pc = 0x7F0E74D4u;
    ctx->downcount -= 3;
    // 7F0E74D4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0E74D8:
    ctx->pc = 0x7F0E74D8u;
    // 7F0E74D8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E74DC:
    ctx->downcount -= 1;
    // 7F0E74DC: bc    16, 0, 0x7F0E74DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E74DCu;
                return;
            }
            goto label_7F0E74DC;
        }
    }

label_7F0E74E0:
    ctx->pc = 0x7F0E74E0u;
    ctx->downcount -= 19;
    // 7F0E74E0: lha     r0, 240(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(240);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E74E4:
    ctx->pc = 0x7F0E74E4u;
    // 7F0E74E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E74E8:
    ctx->pc = 0x7F0E74E8u;
    // 7F0E74E8: sth     r0, 78(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(78);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0E74EC:
    ctx->pc = 0x7F0E74ECu;
    // 7F0E74EC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E74F0:
    ctx->pc = 0x7F0E74F0u;
    // 7F0E74F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E74F4:
    ctx->pc = 0x7F0E74F4u;
    // 7F0E74F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E74F8:
    ctx->pc = 0x7F0E74F8u;
    // 7F0E74F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E74FC:
    ctx->pc = 0x7F0E74FCu;
    // 7F0E74FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7500:
    ctx->pc = 0x7F0E7500u;
    ctx->downcount -= 5;
    // 7F0E7500: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E7504:
    ctx->pc = 0x7F0E7504u;
    // 7F0E7504: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7508:
    ctx->pc = 0x7F0E7508u;
    // 7F0E7508: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E750C:
    ctx->pc = 0x7F0E750Cu;
    // 7F0E750C: stw     r0, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7510:
    ctx->pc = 0x7F0E7510u;
    // 7F0E7510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7514:
    ctx->pc = 0x7F0E7514u;
    ctx->downcount -= 26;
    // 7F0E7514: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7518:
    ctx->pc = 0x7F0E7518u;
    // 7F0E7518: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E751C:
    ctx->pc = 0x7F0E751Cu;
    // 7F0E751C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7520:
    ctx->pc = 0x7F0E7520u;
    // 7F0E7520: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E7524:
    ctx->pc = 0x7F0E7524u;
    // 7F0E7524: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F0E7528:
    ctx->pc = 0x7F0E7528u;
    // 7F0E7528: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E752C:
    ctx->pc = 0x7F0E752Cu;
    // 7F0E752C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E7530:
    ctx->pc = 0x7F0E7530u;
    // 7F0E7530: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0E7534:
    ctx->pc = 0x7F0E7534u;
    // 7F0E7534: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7538:
    ctx->pc = 0x7F0E7538u;
    // 7F0E7538: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0E753C:
    ctx->pc = 0x7F0E753Cu;
    // 7F0E753C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E7540:
    ctx->pc = 0x7F0E7540u;
    // 7F0E7540: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0E7544:
    ctx->pc = 0x7F0E7544u;
    // 7F0E7544: stw     r30, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0E7548:
    ctx->pc = 0x7F0E7548u;
    // 7F0E7548: stw     r28, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0E754C:
    ctx->pc = 0x7F0E754Cu;
    // 7F0E754C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E7550:
    ctx->pc = 0x7F0E7550u;
    // 7F0E7550: bl      0x7F04272C
    {
            ctx->lr = 0x7F0E7554u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0E7554:
    ctx->pc = 0x7F0E7554u;
    ctx->downcount -= 4;
    // 7F0E7554: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F0E7558:
    ctx->pc = 0x7F0E7558u;
    // 7F0E7558: addi    r0, r3, -8174
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8174);

label_7F0E755C:
    ctx->pc = 0x7F0E755Cu;
    // 7F0E755C: cmpw    r28, r0
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

label_7F0E7560:
    ctx->pc = 0x7F0E7560u;
    // 7F0E7560: bc    12, 2, 0x7F0E7590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7590;
        }
    }

label_7F0E7564:
    ctx->pc = 0x7F0E7564u;
    ctx->downcount -= 1;
    // 7F0E7564: bc    4, 0, 0x7F0E757C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E757C;
        }
    }

label_7F0E7568:
    ctx->pc = 0x7F0E7568u;
    ctx->downcount -= 4;
    // 7F0E7568: lis     r3, 36
    ctx->gpr[3] = ((u32)(s32)(36) << 16);

label_7F0E756C:
    ctx->pc = 0x7F0E756Cu;
    // 7F0E756C: addi    r0, r3, -6796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6796);

label_7F0E7570:
    ctx->pc = 0x7F0E7570u;
    // 7F0E7570: cmpw    r28, r0
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

label_7F0E7574:
    ctx->pc = 0x7F0E7574u;
    // 7F0E7574: bc    12, 2, 0x7F0E7590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7590;
        }
    }

label_7F0E7578:
    ctx->pc = 0x7F0E7578u;
    ctx->downcount -= 1;
    // 7F0E7578: b       0x7F0E75A0
    {
            goto label_7F0E75A0;
    }

label_7F0E757C:
    ctx->pc = 0x7F0E757Cu;
    ctx->downcount -= 4;
    // 7F0E757C: lis     r3, 101
    ctx->gpr[3] = ((u32)(s32)(101) << 16);

label_7F0E7580:
    ctx->pc = 0x7F0E7580u;
    // 7F0E7580: addi    r0, r3, 28276
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28276);

label_7F0E7584:
    ctx->pc = 0x7F0E7584u;
    // 7F0E7584: cmpw    r28, r0
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

label_7F0E7588:
    ctx->pc = 0x7F0E7588u;
    // 7F0E7588: bc    12, 2, 0x7F0E7590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7590;
        }
    }

label_7F0E758C:
    ctx->pc = 0x7F0E758Cu;
    ctx->downcount -= 1;
    // 7F0E758C: b       0x7F0E75A0
    {
            goto label_7F0E75A0;
    }

label_7F0E7590:
    ctx->pc = 0x7F0E7590u;
    ctx->downcount -= 4;
    // 7F0E7590: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E7594:
    ctx->pc = 0x7F0E7594u;
    // 7F0E7594: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0E7598:
    ctx->pc = 0x7F0E7598u;
    // 7F0E7598: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0E759C:
    ctx->pc = 0x7F0E759Cu;
    // 7F0E759C: bl      0x7F042C28
    {
            ctx->lr = 0x7F0E75A0u;
            ctx->pc = 0x7F042C28u;
            return;
    }

label_7F0E75A0:
    ctx->pc = 0x7F0E75A0u;
    ctx->downcount -= 3;
    // 7F0E75A0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E75A4:
    ctx->pc = 0x7F0E75A4u;
    // 7F0E75A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E75A8:
    ctx->pc = 0x7F0E75A8u;
    // 7F0E75A8: bl      0x7F042B20
    {
            ctx->lr = 0x7F0E75ACu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0E75AC:
    ctx->pc = 0x7F0E75ACu;
    ctx->downcount -= 7;
    // 7F0E75AC: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0E75B0:
    ctx->pc = 0x7F0E75B0u;
    // 7F0E75B0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E75B4:
    ctx->pc = 0x7F0E75B4u;
    // 7F0E75B4: addi    r5, r4, -22349
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22349);

label_7F0E75B8:
    ctx->pc = 0x7F0E75B8u;
    // 7F0E75B8: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0E75BC:
    ctx->pc = 0x7F0E75BCu;
    // 7F0E75BC: stw     r5, 64(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E75C0:
    ctx->pc = 0x7F0E75C0u;
    // 7F0E75C0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0E75C4:
    ctx->pc = 0x7F0E75C4u;
    // 7F0E75C4: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0E75C8u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0E75C8:
    ctx->pc = 0x7F0E75C8u;
    ctx->downcount -= 3;
    // 7F0E75C8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E75CC:
    ctx->pc = 0x7F0E75CCu;
    // 7F0E75CC: addi    r4, r29, 16
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0E75D0:
    ctx->pc = 0x7F0E75D0u;
    // 7F0E75D0: bl      0x7F042B6C
    {
            ctx->lr = 0x7F0E75D4u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F0E75D4:
    ctx->pc = 0x7F0E75D4u;
    ctx->downcount -= 9;
    // 7F0E75D4: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0E75D8:
    ctx->pc = 0x7F0E75D8u;
    // 7F0E75D8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E75DC:
    ctx->pc = 0x7F0E75DCu;
    // 7F0E75DC: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0E75E0:
    ctx->pc = 0x7F0E75E0u;
    // 7F0E75E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E75E4:
    ctx->pc = 0x7F0E75E4u;
    // 7F0E75E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E75E8:
    ctx->pc = 0x7F0E75E8u;
    // 7F0E75E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E75EC:
    ctx->pc = 0x7F0E75ECu;
    // 7F0E75EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E75F0:
    ctx->pc = 0x7F0E75F0u;
    // 7F0E75F0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E75F4:
    ctx->pc = 0x7F0E75F4u;
    // 7F0E75F4: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E75F8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E75F8:
    ctx->pc = 0x7F0E75F8u;
    ctx->downcount -= 8;
    // 7F0E75F8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E75FC:
    ctx->pc = 0x7F0E75FCu;
    // 7F0E75FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E7600:
    ctx->pc = 0x7F0E7600u;
    // 7F0E7600: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7604:
    ctx->pc = 0x7F0E7604u;
    // 7F0E7604: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7608:
    ctx->pc = 0x7F0E7608u;
    // 7F0E7608: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0E760C:
    ctx->pc = 0x7F0E760Cu;
    // 7F0E760C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E7610:
    ctx->pc = 0x7F0E7610u;
    // 7F0E7610: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E7614:
    ctx->pc = 0x7F0E7614u;
    // 7F0E7614: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E7618u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E7618:
    ctx->pc = 0x7F0E7618u;
    ctx->downcount -= 8;
    // 7F0E7618: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E761C:
    ctx->pc = 0x7F0E761Cu;
    // 7F0E761C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0E7620:
    ctx->pc = 0x7F0E7620u;
    // 7F0E7620: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7624:
    ctx->pc = 0x7F0E7624u;
    // 7F0E7624: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7628:
    ctx->pc = 0x7F0E7628u;
    // 7F0E7628: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0E762C:
    ctx->pc = 0x7F0E762Cu;
    // 7F0E762C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E7630:
    ctx->pc = 0x7F0E7630u;
    // 7F0E7630: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E7634:
    ctx->pc = 0x7F0E7634u;
    // 7F0E7634: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E7638u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E7638:
    ctx->pc = 0x7F0E7638u;
    ctx->downcount -= 3;
    // 7F0E7638: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E763C:
    ctx->pc = 0x7F0E763Cu;
    // 7F0E763C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E7640:
    ctx->pc = 0x7F0E7640u;
    // 7F0E7640: bl      0x7F023E5C
    {
            ctx->lr = 0x7F0E7644u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F0E7644:
    ctx->pc = 0x7F0E7644u;
    ctx->downcount -= 3;
    // 7F0E7644: lwz     r0, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7648:
    ctx->pc = 0x7F0E7648u;
    // 7F0E7648: rlwinm. r0, r0, 0, 31, 31
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

label_7F0E764C:
    ctx->pc = 0x7F0E764Cu;
    // 7F0E764C: bc    12, 2, 0x7F0E7680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7680;
        }
    }

label_7F0E7650:
    ctx->pc = 0x7F0E7650u;
    ctx->downcount -= 3;
    // 7F0E7650: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7654:
    ctx->pc = 0x7F0E7654u;
    // 7F0E7654: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7658:
    ctx->pc = 0x7F0E7658u;
    // 7F0E7658: bl      0x7F2D02B8
    {
            ctx->lr = 0x7F0E765Cu;
            ctx->pc = 0x7F2D02B8u;
            return;
    }

label_7F0E765C:
    ctx->pc = 0x7F0E765Cu;
    ctx->downcount -= 3;
    // 7F0E765C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7660:
    ctx->pc = 0x7F0E7660u;
    // 7F0E7660: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7664:
    ctx->pc = 0x7F0E7664u;
    // 7F0E7664: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7668u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7668:
    ctx->pc = 0x7F0E7668u;
    ctx->downcount -= 6;
    // 7F0E7668: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E766C:
    ctx->pc = 0x7F0E766Cu;
    // 7F0E766C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F0E7670:
    ctx->pc = 0x7F0E7670u;
    // 7F0E7670: stw     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7674:
    ctx->pc = 0x7F0E7674u;
    // 7F0E7674: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7678:
    ctx->pc = 0x7F0E7678u;
    // 7F0E7678: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F0E767C:
    ctx->pc = 0x7F0E767Cu;
    // 7F0E767C: stw     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7680:
    ctx->pc = 0x7F0E7680u;
    ctx->downcount -= 3;
    // 7F0E7680: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7684:
    ctx->pc = 0x7F0E7684u;
    // 7F0E7684: rlwinm. r0, r0, 0, 27, 27
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

label_7F0E7688:
    ctx->pc = 0x7F0E7688u;
    // 7F0E7688: bc    4, 2, 0x7F0E76B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E76B8;
        }
    }

label_7F0E768C:
    ctx->pc = 0x7F0E768Cu;
    ctx->downcount -= 7;
    // 7F0E768C: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7690:
    ctx->pc = 0x7F0E7690u;
    // 7F0E7690: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7694:
    ctx->pc = 0x7F0E7694u;
    // 7F0E7694: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7698:
    ctx->pc = 0x7F0E7698u;
    // 7F0E7698: addi    r7, r26, 288
    ctx->gpr[7] = ctx->gpr[26] + (u32)(s32)(288);

label_7F0E769C:
    ctx->pc = 0x7F0E769Cu;
    // 7F0E769C: addi    r3, r4, 5628
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(5628);

label_7F0E76A0:
    ctx->pc = 0x7F0E76A0u;
    // 7F0E76A0: addi    r4, r4, 6924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6924);

label_7F0E76A4:
    ctx->pc = 0x7F0E76A4u;
    // 7F0E76A4: bl      0x7F3484E4
    {
            ctx->lr = 0x7F0E76A8u;
            ctx->pc = 0x7F3484E4u;
            return;
    }

label_7F0E76A8:
    ctx->pc = 0x7F0E76A8u;
    ctx->downcount -= 4;
    // 7F0E76A8: stw     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E76AC:
    ctx->pc = 0x7F0E76ACu;
    // 7F0E76AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E76B0:
    ctx->pc = 0x7F0E76B0u;
    // 7F0E76B0: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E76B4:
    ctx->pc = 0x7F0E76B4u;
    // 7F0E76B4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E76B8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E76B8:
    ctx->pc = 0x7F0E76B8u;
    ctx->downcount -= 3;
    // 7F0E76B8: lwz     r0, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E76BC:
    ctx->pc = 0x7F0E76BCu;
    // 7F0E76BC: rlwinm. r0, r0, 0, 30, 30
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

label_7F0E76C0:
    ctx->pc = 0x7F0E76C0u;
    // 7F0E76C0: bc    12, 2, 0x7F0E76DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E76DC;
        }
    }

label_7F0E76C4:
    ctx->pc = 0x7F0E76C4u;
    ctx->downcount -= 6;
    // 7F0E76C4: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E76C8:
    ctx->pc = 0x7F0E76C8u;
    // 7F0E76C8: ori     r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | 0x0400u;

label_7F0E76CC:
    ctx->pc = 0x7F0E76CCu;
    // 7F0E76CC: stw     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E76D0:
    ctx->pc = 0x7F0E76D0u;
    // 7F0E76D0: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E76D4:
    ctx->pc = 0x7F0E76D4u;
    // 7F0E76D4: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F0E76D8:
    ctx->pc = 0x7F0E76D8u;
    // 7F0E76D8: stw     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E76DC:
    ctx->pc = 0x7F0E76DCu;
    ctx->downcount -= 5;
    // 7F0E76DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E76E0:
    ctx->pc = 0x7F0E76E0u;
    // 7F0E76E0: stw     r0, 96(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E76E4:
    ctx->pc = 0x7F0E76E4u;
    // 7F0E76E4: lwz     r0, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E76E8:
    ctx->pc = 0x7F0E76E8u;
    // 7F0E76E8: rlwinm. r0, r0, 0, 21, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000400u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E76EC:
    ctx->pc = 0x7F0E76ECu;
    // 7F0E76EC: bc    4, 2, 0x7F0E77A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E77A0;
        }
    }

label_7F0E76F0:
    ctx->pc = 0x7F0E76F0u;
    ctx->downcount -= 6;
    // 7F0E76F0: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F0E76F4:
    ctx->pc = 0x7F0E76F4u;
    // 7F0E76F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0E76F8:
    ctx->pc = 0x7F0E76F8u;
    // 7F0E76F8: addi    r0, r3, -8174
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8174);

label_7F0E76FC:
    ctx->pc = 0x7F0E76FCu;
    // 7F0E76FC: stw     r4, 96(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E7700:
    ctx->pc = 0x7F0E7700u;
    // 7F0E7700: cmpw    r28, r0
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

label_7F0E7704:
    ctx->pc = 0x7F0E7704u;
    // 7F0E7704: bc    12, 2, 0x7F0E7778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7778;
        }
    }

label_7F0E7708:
    ctx->pc = 0x7F0E7708u;
    ctx->downcount -= 1;
    // 7F0E7708: bc    4, 0, 0x7F0E7734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7734;
        }
    }

label_7F0E770C:
    ctx->pc = 0x7F0E770Cu;
    ctx->downcount -= 4;
    // 7F0E770C: lis     r3, 36
    ctx->gpr[3] = ((u32)(s32)(36) << 16);

label_7F0E7710:
    ctx->pc = 0x7F0E7710u;
    // 7F0E7710: addi    r0, r3, -6796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6796);

label_7F0E7714:
    ctx->pc = 0x7F0E7714u;
    // 7F0E7714: cmpw    r28, r0
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

label_7F0E7718:
    ctx->pc = 0x7F0E7718u;
    // 7F0E7718: bc    12, 2, 0x7F0E775C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E775C;
        }
    }

label_7F0E771C:
    ctx->pc = 0x7F0E771Cu;
    ctx->downcount -= 1;
    // 7F0E771C: bc    4, 0, 0x7F0E7784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7784;
        }
    }

label_7F0E7720:
    ctx->pc = 0x7F0E7720u;
    ctx->downcount -= 4;
    // 7F0E7720: lis     r3, 17
    ctx->gpr[3] = ((u32)(s32)(17) << 16);

label_7F0E7724:
    ctx->pc = 0x7F0E7724u;
    // 7F0E7724: addi    r0, r3, 11244
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11244);

label_7F0E7728:
    ctx->pc = 0x7F0E7728u;
    // 7F0E7728: cmpw    r28, r0
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

label_7F0E772C:
    ctx->pc = 0x7F0E772Cu;
    // 7F0E772C: bc    12, 2, 0x7F0E7780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7780;
        }
    }

label_7F0E7730:
    ctx->pc = 0x7F0E7730u;
    ctx->downcount -= 1;
    // 7F0E7730: b       0x7F0E7784
    {
            goto label_7F0E7784;
    }

label_7F0E7734:
    ctx->pc = 0x7F0E7734u;
    ctx->downcount -= 4;
    // 7F0E7734: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F0E7738:
    ctx->pc = 0x7F0E7738u;
    // 7F0E7738: addi    r0, r3, 630
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(630);

label_7F0E773C:
    ctx->pc = 0x7F0E773Cu;
    // 7F0E773C: cmpw    r28, r0
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

label_7F0E7740:
    ctx->pc = 0x7F0E7740u;
    // 7F0E7740: bc    12, 2, 0x7F0E7778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7778;
        }
    }

label_7F0E7744:
    ctx->pc = 0x7F0E7744u;
    ctx->downcount -= 1;
    // 7F0E7744: bc    4, 0, 0x7F0E7784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7784;
        }
    }

label_7F0E7748:
    ctx->pc = 0x7F0E7748u;
    ctx->downcount -= 4;
    // 7F0E7748: lis     r3, 101
    ctx->gpr[3] = ((u32)(s32)(101) << 16);

label_7F0E774C:
    ctx->pc = 0x7F0E774Cu;
    // 7F0E774C: addi    r0, r3, 28276
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28276);

label_7F0E7750:
    ctx->pc = 0x7F0E7750u;
    // 7F0E7750: cmpw    r28, r0
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

label_7F0E7754:
    ctx->pc = 0x7F0E7754u;
    // 7F0E7754: bc    12, 2, 0x7F0E7780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7780;
        }
    }

label_7F0E7758:
    ctx->pc = 0x7F0E7758u;
    ctx->downcount -= 1;
    // 7F0E7758: b       0x7F0E7784
    {
            goto label_7F0E7784;
    }

label_7F0E775C:
    ctx->pc = 0x7F0E775Cu;
    ctx->downcount -= 3;
    // 7F0E775C: lwz     r0, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7760:
    ctx->pc = 0x7F0E7760u;
    // 7F0E7760: rlwinm. r0, r0, 0, 31, 31
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

label_7F0E7764:
    ctx->pc = 0x7F0E7764u;
    // 7F0E7764: bc    12, 2, 0x7F0E7770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7770;
        }
    }

label_7F0E7768:
    ctx->pc = 0x7F0E7768u;
    ctx->downcount -= 2;
    // 7F0E7768: li      r31, 11
    ctx->gpr[31] = (u32)(s32)(11);

label_7F0E776C:
    ctx->pc = 0x7F0E776Cu;
    // 7F0E776C: b       0x7F0E7784
    {
            goto label_7F0E7784;
    }

label_7F0E7770:
    ctx->pc = 0x7F0E7770u;
    ctx->downcount -= 2;
    // 7F0E7770: li      r31, 4
    ctx->gpr[31] = (u32)(s32)(4);

label_7F0E7774:
    ctx->pc = 0x7F0E7774u;
    // 7F0E7774: b       0x7F0E7784
    {
            goto label_7F0E7784;
    }

label_7F0E7778:
    ctx->pc = 0x7F0E7778u;
    ctx->downcount -= 2;
    // 7F0E7778: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F0E777C:
    ctx->pc = 0x7F0E777Cu;
    // 7F0E777C: b       0x7F0E7784
    {
            goto label_7F0E7784;
    }

label_7F0E7780:
    ctx->pc = 0x7F0E7780u;
    ctx->downcount -= 1;
    // 7F0E7780: li      r31, 6
    ctx->gpr[31] = (u32)(s32)(6);

label_7F0E7784:
    ctx->pc = 0x7F0E7784u;
    ctx->downcount -= 4;
    // 7F0E7784: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E7788:
    ctx->pc = 0x7F0E7788u;
    // 7F0E7788: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E778C:
    ctx->pc = 0x7F0E778Cu;
    // 7F0E778C: addi    r4, r26, 96
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(96);

label_7F0E7790:
    ctx->pc = 0x7F0E7790u;
    // 7F0E7790: bl      0x7F3828F4
    {
            ctx->lr = 0x7F0E7794u;
            ctx->pc = 0x7F3828F4u;
            return;
    }

label_7F0E7794:
    ctx->pc = 0x7F0E7794u;
    ctx->downcount -= 3;
    // 7F0E7794: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7798:
    ctx->pc = 0x7F0E7798u;
    // 7F0E7798: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E779C:
    ctx->pc = 0x7F0E779Cu;
    // 7F0E779C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E77A0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E77A0:
    ctx->pc = 0x7F0E77A0u;
    ctx->downcount -= 13;
    // 7F0E77A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E77A4:
    ctx->pc = 0x7F0E77A4u;
    // 7F0E77A4: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F0E77A8:
    ctx->pc = 0x7F0E77A8u;
    // 7F0E77A8: stw     r4, 104(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E77AC:
    ctx->pc = 0x7F0E77ACu;
    // 7F0E77AC: addi    r0, r3, 630
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(630);

label_7F0E77B0:
    ctx->pc = 0x7F0E77B0u;
    // 7F0E77B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E77B4:
    ctx->pc = 0x7F0E77B4u;
    // 7F0E77B4: stw     r4, 100(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E77B8:
    ctx->pc = 0x7F0E77B8u;
    // 7F0E77B8: stw     r4, 300(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E77BC:
    ctx->pc = 0x7F0E77BCu;
    // 7F0E77BC: stw     r4, 304(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E77C0:
    ctx->pc = 0x7F0E77C0u;
    // 7F0E77C0: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E77C4:
    ctx->pc = 0x7F0E77C4u;
    // 7F0E77C4: lwz     r4, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E77C8:
    ctx->pc = 0x7F0E77C8u;
    // 7F0E77C8: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E77CC:
    ctx->pc = 0x7F0E77CCu;
    // 7F0E77CC: cmpw    r5, r0
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

label_7F0E77D0:
    ctx->pc = 0x7F0E77D0u;
    // 7F0E77D0: bc    12, 2, 0x7F0E7804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7804;
        }
    }

label_7F0E77D4:
    ctx->pc = 0x7F0E77D4u;
    ctx->downcount -= 1;
    // 7F0E77D4: bc    4, 0, 0x7F0E7818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7818;
        }
    }

label_7F0E77D8:
    ctx->pc = 0x7F0E77D8u;
    ctx->downcount -= 4;
    // 7F0E77D8: lis     r4, 39
    ctx->gpr[4] = ((u32)(s32)(39) << 16);

label_7F0E77DC:
    ctx->pc = 0x7F0E77DCu;
    // 7F0E77DC: addi    r0, r4, -8174
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8174);

label_7F0E77E0:
    ctx->pc = 0x7F0E77E0u;
    // 7F0E77E0: cmpw    r5, r0
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

label_7F0E77E4:
    ctx->pc = 0x7F0E77E4u;
    // 7F0E77E4: bc    12, 2, 0x7F0E77EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E77EC;
        }
    }

label_7F0E77E8:
    ctx->pc = 0x7F0E77E8u;
    ctx->downcount -= 1;
    // 7F0E77E8: b       0x7F0E7818
    {
            goto label_7F0E7818;
    }

label_7F0E77EC:
    ctx->pc = 0x7F0E77ECu;
    ctx->downcount -= 4;
    // 7F0E77EC: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F0E77F0:
    ctx->pc = 0x7F0E77F0u;
    // 7F0E77F0: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F0E77F4:
    ctx->pc = 0x7F0E77F4u;
    // 7F0E77F4: addi    r3, r3, -25032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25032);

label_7F0E77F8:
    ctx->pc = 0x7F0E77F8u;
    // 7F0E77F8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F0E77FCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F0E77FC:
    ctx->pc = 0x7F0E77FCu;
    ctx->downcount -= 1;
    // 7F0E77FC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F0E7800u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F0E7800:
    ctx->pc = 0x7F0E7800u;
    ctx->downcount -= 1;
    // 7F0E7800: b       0x7F0E7818
    {
            goto label_7F0E7818;
    }

label_7F0E7804:
    ctx->pc = 0x7F0E7804u;
    ctx->downcount -= 4;
    // 7F0E7804: lis     r3, 61
    ctx->gpr[3] = ((u32)(s32)(61) << 16);

label_7F0E7808:
    ctx->pc = 0x7F0E7808u;
    // 7F0E7808: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F0E780C:
    ctx->pc = 0x7F0E780Cu;
    // 7F0E780C: addi    r3, r3, -1847
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1847);

label_7F0E7810:
    ctx->pc = 0x7F0E7810u;
    // 7F0E7810: bl      0x7F3C8470
    {
            ctx->lr = 0x7F0E7814u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F0E7814:
    ctx->pc = 0x7F0E7814u;
    ctx->downcount -= 1;
    // 7F0E7814: bl      0x7F3C8480
    {
            ctx->lr = 0x7F0E7818u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F0E7818:
    ctx->pc = 0x7F0E7818u;
    ctx->downcount -= 2;
    // 7F0E7818: cmplwi  r3, 0x0000
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

label_7F0E781C:
    ctx->pc = 0x7F0E781Cu;
    // 7F0E781C: bc    12, 2, 0x7F0E7840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7840;
        }
    }

label_7F0E7820:
    ctx->pc = 0x7F0E7820u;
    ctx->downcount -= 3;
    // 7F0E7820: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F0E7824:
    ctx->pc = 0x7F0E7824u;
    // 7F0E7824: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7828:
    ctx->pc = 0x7F0E7828u;
    // 7F0E7828: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F0E782Cu;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F0E782C:
    ctx->pc = 0x7F0E782Cu;
    ctx->downcount -= 4;
    // 7F0E782C: stw     r3, 224(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7830:
    ctx->pc = 0x7F0E7830u;
    // 7F0E7830: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7834:
    ctx->pc = 0x7F0E7834u;
    // 7F0E7834: lwz     r4, 224(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7838:
    ctx->pc = 0x7F0E7838u;
    // 7F0E7838: bl      0x7F3B09C0
    {
            ctx->lr = 0x7F0E783Cu;
            ctx->pc = 0x7F3B09C0u;
            return;
    }

label_7F0E783C:
    ctx->pc = 0x7F0E783Cu;
    ctx->downcount -= 1;
    // 7F0E783C: b       0x7F0E7848
    {
            goto label_7F0E7848;
    }

label_7F0E7840:
    ctx->pc = 0x7F0E7840u;
    ctx->downcount -= 2;
    // 7F0E7840: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7844:
    ctx->pc = 0x7F0E7844u;
    // 7F0E7844: stw     r0, 224(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7848:
    ctx->pc = 0x7F0E7848u;
    ctx->downcount -= 16;
    // 7F0E7848: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E784C:
    ctx->pc = 0x7F0E784Cu;
    // 7F0E784C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7850:
    ctx->pc = 0x7F0E7850u;
    // 7F0E7850: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E7854:
    ctx->pc = 0x7F0E7854u;
    // 7F0E7854: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E7858:
    ctx->pc = 0x7F0E7858u;
    // 7F0E7858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E785C:
    ctx->pc = 0x7F0E785Cu;
    ctx->downcount -= 35;
    // 7F0E785C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7860:
    ctx->pc = 0x7F0E7860u;
    // 7F0E7860: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E7864:
    ctx->pc = 0x7F0E7864u;
    // 7F0E7864: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7868:
    ctx->pc = 0x7F0E7868u;
    // 7F0E7868: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E786C:
    ctx->pc = 0x7F0E786Cu;
    // 7F0E786C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0E7870:
    ctx->pc = 0x7F0E7870u;
    // 7F0E7870: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7874:
    ctx->pc = 0x7F0E7874u;
    // 7F0E7874: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E7878:
    ctx->pc = 0x7F0E7878u;
    // 7F0E7878: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E787C:
    ctx->pc = 0x7F0E787Cu;
    // 7F0E787C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E7880:
    ctx->pc = 0x7F0E7880u;
    // 7F0E7880: addi    r0, r28, 244
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(244);

label_7F0E7884:
    ctx->pc = 0x7F0E7884u;
    // 7F0E7884: stw     r31, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E7888:
    ctx->pc = 0x7F0E7888u;
    // 7F0E7888: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E788C:
    ctx->pc = 0x7F0E788Cu;
    // 7F0E788C: stw     r30, 208(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0E7890:
    ctx->pc = 0x7F0E7890u;
    // 7F0E7890: stw     r5, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E7894:
    ctx->pc = 0x7F0E7894u;
    // 7F0E7894: stw     r3, 108(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7898:
    ctx->pc = 0x7F0E7898u;
    // 7F0E7898: stw     r0, 120(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E789C:
    ctx->pc = 0x7F0E789Cu;
    // 7F0E789C: lwz     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E78A0:
    ctx->pc = 0x7F0E78A0u;
    // 7F0E78A0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0E78A4:
    ctx->pc = 0x7F0E78A4u;
    // 7F0E78A4: stw     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E78A8:
    ctx->pc = 0x7F0E78A8u;
    // 7F0E78A8: lwz     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E78AC:
    ctx->pc = 0x7F0E78ACu;
    // 7F0E78AC: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0E78B0:
    ctx->pc = 0x7F0E78B0u;
    // 7F0E78B0: stw     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E78B4:
    ctx->pc = 0x7F0E78B4u;
    // 7F0E78B4: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E78B8:
    ctx->pc = 0x7F0E78B8u;
    // 7F0E78B8: rlwinm. r0, r0, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E78BC:
    ctx->pc = 0x7F0E78BCu;
    // 7F0E78BC: bc    12, 2, 0x7F0E78CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E78CC;
        }
    }

label_7F0E78C0:
    ctx->pc = 0x7F0E78C0u;
    ctx->downcount -= 3;
    // 7F0E78C0: lwz     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E78C4:
    ctx->pc = 0x7F0E78C4u;
    // 7F0E78C4: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_7F0E78C8:
    ctx->pc = 0x7F0E78C8u;
    // 7F0E78C8: stw     r0, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E78CC:
    ctx->pc = 0x7F0E78CCu;
    ctx->downcount -= 7;
    // 7F0E78CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E78D0:
    ctx->pc = 0x7F0E78D0u;
    // 7F0E78D0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E78D4:
    ctx->pc = 0x7F0E78D4u;
    // 7F0E78D4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E78D8:
    ctx->pc = 0x7F0E78D8u;
    // 7F0E78D8: addi    r6, r28, 296
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(296);

label_7F0E78DC:
    ctx->pc = 0x7F0E78DCu;
    // 7F0E78DC: addi    r7, r28, 164
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(164);

label_7F0E78E0:
    ctx->pc = 0x7F0E78E0u;
    // 7F0E78E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0E78E4:
    ctx->pc = 0x7F0E78E4u;
    // 7F0E78E4: bl      0x7F11E790
    {
            ctx->lr = 0x7F0E78E8u;
            ctx->pc = 0x7F11E790u;
            return;
    }

label_7F0E78E8:
    ctx->pc = 0x7F0E78E8u;
    ctx->downcount -= 3;
    // 7F0E78E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E78EC:
    ctx->pc = 0x7F0E78ECu;
    // 7F0E78EC: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E78F0:
    ctx->pc = 0x7F0E78F0u;
    // 7F0E78F0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E78F4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E78F4:
    ctx->pc = 0x7F0E78F4u;
    ctx->downcount -= 11;
    // 7F0E78F4: lwz     r4, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E78F8:
    ctx->pc = 0x7F0E78F8u;
    // 7F0E78F8: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F0E78FC:
    ctx->pc = 0x7F0E78FCu;
    // 7F0E78FC: addi    r0, r3, 630
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(630);

label_7F0E7900:
    ctx->pc = 0x7F0E7900u;
    // 7F0E7900: rlwinm r3, r4, 0, 30, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFBu;
    }

label_7F0E7904:
    ctx->pc = 0x7F0E7904u;
    // 7F0E7904: stw     r3, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7908:
    ctx->pc = 0x7F0E7908u;
    // 7F0E7908: lwz     r3, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E790C:
    ctx->pc = 0x7F0E790Cu;
    // 7F0E790C: rlwinm r3, r3, 0, 26, 24
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFBFu;
    }

label_7F0E7910:
    ctx->pc = 0x7F0E7910u;
    // 7F0E7910: stw     r3, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7914:
    ctx->pc = 0x7F0E7914u;
    // 7F0E7914: lwz     r7, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0E7918:
    ctx->pc = 0x7F0E7918u;
    // 7F0E7918: cmpw    r7, r0
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

label_7F0E791C:
    ctx->pc = 0x7F0E791Cu;
    // 7F0E791C: bc    12, 2, 0x7F0E7938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7938;
        }
    }

label_7F0E7920:
    ctx->pc = 0x7F0E7920u;
    ctx->downcount -= 1;
    // 7F0E7920: bc    4, 0, 0x7F0E7950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7950;
        }
    }

label_7F0E7924:
    ctx->pc = 0x7F0E7924u;
    ctx->downcount -= 4;
    // 7F0E7924: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F0E7928:
    ctx->pc = 0x7F0E7928u;
    // 7F0E7928: addi    r0, r3, -8174
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8174);

label_7F0E792C:
    ctx->pc = 0x7F0E792Cu;
    // 7F0E792C: cmpw    r7, r0
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

label_7F0E7930:
    ctx->pc = 0x7F0E7930u;
    // 7F0E7930: bc    12, 2, 0x7F0E7938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7938;
        }
    }

label_7F0E7934:
    ctx->pc = 0x7F0E7934u;
    ctx->downcount -= 1;
    // 7F0E7934: b       0x7F0E7950
    {
            goto label_7F0E7950;
    }

label_7F0E7938:
    ctx->pc = 0x7F0E7938u;
    ctx->downcount -= 5;
    // 7F0E7938: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E793C:
    ctx->pc = 0x7F0E793Cu;
    // 7F0E793C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7940:
    ctx->pc = 0x7F0E7940u;
    // 7F0E7940: lwz     r6, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E7944:
    ctx->pc = 0x7F0E7944u;
    // 7F0E7944: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7948:
    ctx->pc = 0x7F0E7948u;
    // 7F0E7948: bl      0x7F13089C
    {
            ctx->lr = 0x7F0E794Cu;
            ctx->pc = 0x7F13089Cu;
            return;
    }

label_7F0E794C:
    ctx->pc = 0x7F0E794Cu;
    ctx->downcount -= 1;
    // 7F0E794C: b       0x7F0E7964
    {
            goto label_7F0E7964;
    }

label_7F0E7950:
    ctx->pc = 0x7F0E7950u;
    ctx->downcount -= 5;
    // 7F0E7950: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7954:
    ctx->pc = 0x7F0E7954u;
    // 7F0E7954: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7958:
    ctx->pc = 0x7F0E7958u;
    // 7F0E7958: lwz     r6, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E795C:
    ctx->pc = 0x7F0E795Cu;
    // 7F0E795C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7960:
    ctx->pc = 0x7F0E7960u;
    // 7F0E7960: bl      0x7F13062C
    {
            ctx->lr = 0x7F0E7964u;
            ctx->pc = 0x7F13062Cu;
            return;
    }

label_7F0E7964:
    ctx->pc = 0x7F0E7964u;
    ctx->downcount -= 4;
    // 7F0E7964: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F0E7968:
    ctx->pc = 0x7F0E7968u;
    // 7F0E7968: addi    r0, r3, -9613
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9613);

label_7F0E796C:
    ctx->pc = 0x7F0E796Cu;
    // 7F0E796C: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7970:
    ctx->pc = 0x7F0E7970u;
    // 7F0E7970: bc    12, 2, 0x7F0E7A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7A28;
        }
    }

label_7F0E7974:
    ctx->pc = 0x7F0E7974u;
    ctx->downcount -= 1;
    // 7F0E7974: bc    4, 0, 0x7F0E79A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E79A8;
        }
    }

label_7F0E7978:
    ctx->pc = 0x7F0E7978u;
    ctx->downcount -= 3;
    // 7F0E7978: addi    r0, r3, -28205
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28205);

label_7F0E797C:
    ctx->pc = 0x7F0E797Cu;
    // 7F0E797C: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7980:
    ctx->pc = 0x7F0E7980u;
    // 7F0E7980: bc    12, 2, 0x7F0E79D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E79D0;
        }
    }

label_7F0E7984:
    ctx->pc = 0x7F0E7984u;
    ctx->downcount -= 1;
    // 7F0E7984: bc    4, 0, 0x7F0E7998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7998;
        }
    }

label_7F0E7988:
    ctx->pc = 0x7F0E7988u;
    ctx->downcount -= 3;
    // 7F0E7988: addi    r0, r3, -28501
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28501);

label_7F0E798C:
    ctx->pc = 0x7F0E798Cu;
    // 7F0E798C: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E7990:
    ctx->pc = 0x7F0E7990u;
    // 7F0E7990: bc    12, 2, 0x7F0E7AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7AE0;
        }
    }

label_7F0E7994:
    ctx->pc = 0x7F0E7994u;
    ctx->downcount -= 1;
    // 7F0E7994: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E7998:
    ctx->pc = 0x7F0E7998u;
    ctx->downcount -= 3;
    // 7F0E7998: addi    r0, r3, -14512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14512);

label_7F0E799C:
    ctx->pc = 0x7F0E799Cu;
    // 7F0E799C: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E79A0:
    ctx->pc = 0x7F0E79A0u;
    // 7F0E79A0: bc    12, 2, 0x7F0E7A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7A74;
        }
    }

label_7F0E79A4:
    ctx->pc = 0x7F0E79A4u;
    ctx->downcount -= 1;
    // 7F0E79A4: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E79A8:
    ctx->pc = 0x7F0E79A8u;
    ctx->downcount -= 4;
    // 7F0E79A8: lis     r3, 235
    ctx->gpr[3] = ((u32)(s32)(235) << 16);

label_7F0E79AC:
    ctx->pc = 0x7F0E79ACu;
    // 7F0E79AC: addi    r0, r3, 2968
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2968);

label_7F0E79B0:
    ctx->pc = 0x7F0E79B0u;
    // 7F0E79B0: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E79B4:
    ctx->pc = 0x7F0E79B4u;
    // 7F0E79B4: bc    12, 2, 0x7F0E7AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7AE0;
        }
    }

label_7F0E79B8:
    ctx->pc = 0x7F0E79B8u;
    ctx->downcount -= 1;
    // 7F0E79B8: bc    4, 0, 0x7F0E7AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7AE0;
        }
    }

label_7F0E79BC:
    ctx->pc = 0x7F0E79BCu;
    ctx->downcount -= 4;
    // 7F0E79BC: lis     r3, 97
    ctx->gpr[3] = ((u32)(s32)(97) << 16);

label_7F0E79C0:
    ctx->pc = 0x7F0E79C0u;
    // 7F0E79C0: addi    r0, r3, 29869
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29869);

label_7F0E79C4:
    ctx->pc = 0x7F0E79C4u;
    // 7F0E79C4: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0E79C8:
    ctx->pc = 0x7F0E79C8u;
    // 7F0E79C8: bc    12, 2, 0x7F0E7A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7A98;
        }
    }

label_7F0E79CC:
    ctx->pc = 0x7F0E79CCu;
    ctx->downcount -= 1;
    // 7F0E79CC: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E79D0:
    ctx->pc = 0x7F0E79D0u;
    ctx->downcount -= 7;
    // 7F0E79D0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E79D4:
    ctx->pc = 0x7F0E79D4u;
    // 7F0E79D4: addi    r4, r28, 292
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(292);

label_7F0E79D8:
    ctx->pc = 0x7F0E79D8u;
    // 7F0E79D8: lwz     r6, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E79DC:
    ctx->pc = 0x7F0E79DCu;
    // 7F0E79DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0E79E0:
    ctx->pc = 0x7F0E79E0u;
    // 7F0E79E0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E79E4:
    ctx->pc = 0x7F0E79E4u;
    // 7F0E79E4: addi    r6, r6, 164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(164);

label_7F0E79E8:
    ctx->pc = 0x7F0E79E8u;
    // 7F0E79E8: bl      0x7F207F3C
    {
            ctx->lr = 0x7F0E79ECu;
            ctx->pc = 0x7F207F3Cu;
            return;
    }

label_7F0E79EC:
    ctx->pc = 0x7F0E79ECu;
    ctx->downcount -= 3;
    // 7F0E79EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E79F0:
    ctx->pc = 0x7F0E79F0u;
    // 7F0E79F0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E79F4:
    ctx->pc = 0x7F0E79F4u;
    // 7F0E79F4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E79F8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E79F8:
    ctx->pc = 0x7F0E79F8u;
    ctx->downcount -= 3;
    // 7F0E79F8: lwz     r0, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E79FC:
    ctx->pc = 0x7F0E79FCu;
    // 7F0E79FC: rlwinm. r0, r0, 0, 31, 31
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

label_7F0E7A00:
    ctx->pc = 0x7F0E7A00u;
    // 7F0E7A00: bc    4, 2, 0x7F0E7AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7AE0;
        }
    }

label_7F0E7A04:
    ctx->pc = 0x7F0E7A04u;
    ctx->downcount -= 5;
    // 7F0E7A04: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7A08:
    ctx->pc = 0x7F0E7A08u;
    // 7F0E7A08: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7A0C:
    ctx->pc = 0x7F0E7A0Cu;
    // 7F0E7A0C: addi    r3, r28, 88
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(88);

label_7F0E7A10:
    ctx->pc = 0x7F0E7A10u;
    // 7F0E7A10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7A14:
    ctx->pc = 0x7F0E7A14u;
    // 7F0E7A14: bl      0x7F275D10
    {
            ctx->lr = 0x7F0E7A18u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F0E7A18:
    ctx->pc = 0x7F0E7A18u;
    ctx->downcount -= 3;
    // 7F0E7A18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7A1C:
    ctx->pc = 0x7F0E7A1Cu;
    // 7F0E7A1C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A20:
    ctx->pc = 0x7F0E7A20u;
    // 7F0E7A20: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7A24u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7A24:
    ctx->pc = 0x7F0E7A24u;
    ctx->downcount -= 1;
    // 7F0E7A24: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E7A28:
    ctx->pc = 0x7F0E7A28u;
    ctx->downcount -= 7;
    // 7F0E7A28: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A2C:
    ctx->pc = 0x7F0E7A2Cu;
    // 7F0E7A2C: addi    r4, r28, 292
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(292);

label_7F0E7A30:
    ctx->pc = 0x7F0E7A30u;
    // 7F0E7A30: lwz     r6, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E7A34:
    ctx->pc = 0x7F0E7A34u;
    // 7F0E7A34: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F0E7A38:
    ctx->pc = 0x7F0E7A38u;
    // 7F0E7A38: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E7A3C:
    ctx->pc = 0x7F0E7A3Cu;
    // 7F0E7A3C: addi    r6, r6, 164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(164);

label_7F0E7A40:
    ctx->pc = 0x7F0E7A40u;
    // 7F0E7A40: bl      0x7F207F3C
    {
            ctx->lr = 0x7F0E7A44u;
            ctx->pc = 0x7F207F3Cu;
            return;
    }

label_7F0E7A44:
    ctx->pc = 0x7F0E7A44u;
    ctx->downcount -= 3;
    // 7F0E7A44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7A48:
    ctx->pc = 0x7F0E7A48u;
    // 7F0E7A48: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A4C:
    ctx->pc = 0x7F0E7A4Cu;
    // 7F0E7A4C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7A50u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7A50:
    ctx->pc = 0x7F0E7A50u;
    ctx->downcount -= 5;
    // 7F0E7A50: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7A54:
    ctx->pc = 0x7F0E7A54u;
    // 7F0E7A54: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7A58:
    ctx->pc = 0x7F0E7A58u;
    // 7F0E7A58: addi    r3, r28, 88
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(88);

label_7F0E7A5C:
    ctx->pc = 0x7F0E7A5Cu;
    // 7F0E7A5C: li      r6, 11
    ctx->gpr[6] = (u32)(s32)(11);

label_7F0E7A60:
    ctx->pc = 0x7F0E7A60u;
    // 7F0E7A60: bl      0x7F275D10
    {
            ctx->lr = 0x7F0E7A64u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F0E7A64:
    ctx->pc = 0x7F0E7A64u;
    ctx->downcount -= 3;
    // 7F0E7A64: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7A68:
    ctx->pc = 0x7F0E7A68u;
    // 7F0E7A68: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A6C:
    ctx->pc = 0x7F0E7A6Cu;
    // 7F0E7A6C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7A70u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7A70:
    ctx->pc = 0x7F0E7A70u;
    ctx->downcount -= 1;
    // 7F0E7A70: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E7A74:
    ctx->pc = 0x7F0E7A74u;
    ctx->downcount -= 5;
    // 7F0E7A74: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7A78:
    ctx->pc = 0x7F0E7A78u;
    // 7F0E7A78: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7A7C:
    ctx->pc = 0x7F0E7A7Cu;
    // 7F0E7A7C: addi    r3, r28, 88
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(88);

label_7F0E7A80:
    ctx->pc = 0x7F0E7A80u;
    // 7F0E7A80: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F0E7A84:
    ctx->pc = 0x7F0E7A84u;
    // 7F0E7A84: bl      0x7F275D10
    {
            ctx->lr = 0x7F0E7A88u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F0E7A88:
    ctx->pc = 0x7F0E7A88u;
    ctx->downcount -= 3;
    // 7F0E7A88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7A8C:
    ctx->pc = 0x7F0E7A8Cu;
    // 7F0E7A8C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A90:
    ctx->pc = 0x7F0E7A90u;
    // 7F0E7A90: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7A94u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7A94:
    ctx->pc = 0x7F0E7A94u;
    ctx->downcount -= 1;
    // 7F0E7A94: b       0x7F0E7AE0
    {
            goto label_7F0E7AE0;
    }

label_7F0E7A98:
    ctx->pc = 0x7F0E7A98u;
    ctx->downcount -= 7;
    // 7F0E7A98: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7A9C:
    ctx->pc = 0x7F0E7A9Cu;
    // 7F0E7A9C: addi    r4, r28, 292
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(292);

label_7F0E7AA0:
    ctx->pc = 0x7F0E7AA0u;
    // 7F0E7AA0: lwz     r6, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0E7AA4:
    ctx->pc = 0x7F0E7AA4u;
    // 7F0E7AA4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F0E7AA8:
    ctx->pc = 0x7F0E7AA8u;
    // 7F0E7AA8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E7AAC:
    ctx->pc = 0x7F0E7AACu;
    // 7F0E7AAC: addi    r6, r6, 164
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(164);

label_7F0E7AB0:
    ctx->pc = 0x7F0E7AB0u;
    // 7F0E7AB0: bl      0x7F207F3C
    {
            ctx->lr = 0x7F0E7AB4u;
            ctx->pc = 0x7F207F3Cu;
            return;
    }

label_7F0E7AB4:
    ctx->pc = 0x7F0E7AB4u;
    ctx->downcount -= 3;
    // 7F0E7AB4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7AB8:
    ctx->pc = 0x7F0E7AB8u;
    // 7F0E7AB8: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7ABC:
    ctx->pc = 0x7F0E7ABCu;
    // 7F0E7ABC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7AC0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7AC0:
    ctx->pc = 0x7F0E7AC0u;
    ctx->downcount -= 5;
    // 7F0E7AC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7AC4:
    ctx->pc = 0x7F0E7AC4u;
    // 7F0E7AC4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7AC8:
    ctx->pc = 0x7F0E7AC8u;
    // 7F0E7AC8: addi    r3, r28, 88
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(88);

label_7F0E7ACC:
    ctx->pc = 0x7F0E7ACCu;
    // 7F0E7ACC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0E7AD0:
    ctx->pc = 0x7F0E7AD0u;
    // 7F0E7AD0: bl      0x7F275D10
    {
            ctx->lr = 0x7F0E7AD4u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F0E7AD4:
    ctx->pc = 0x7F0E7AD4u;
    ctx->downcount -= 3;
    // 7F0E7AD4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7AD8:
    ctx->pc = 0x7F0E7AD8u;
    // 7F0E7AD8: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7ADC:
    ctx->pc = 0x7F0E7ADCu;
    // 7F0E7ADC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7AE0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7AE0:
    ctx->pc = 0x7F0E7AE0u;
    ctx->downcount -= 3;
    // 7F0E7AE0: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7AE4:
    ctx->pc = 0x7F0E7AE4u;
    // 7F0E7AE4: rlwinm. r0, r0, 0, 30, 30
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

label_7F0E7AE8:
    ctx->pc = 0x7F0E7AE8u;
    // 7F0E7AE8: bc    12, 2, 0x7F0E7AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7AF8;
        }
    }

label_7F0E7AEC:
    ctx->pc = 0x7F0E7AECu;
    ctx->downcount -= 3;
    // 7F0E7AEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E7AF0:
    ctx->pc = 0x7F0E7AF0u;
    // 7F0E7AF0: stw     r0, 292(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7AF4:
    ctx->pc = 0x7F0E7AF4u;
    // 7F0E7AF4: b       0x7F0E7B00
    {
            goto label_7F0E7B00;
    }

label_7F0E7AF8:
    ctx->pc = 0x7F0E7AF8u;
    ctx->downcount -= 2;
    // 7F0E7AF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7AFC:
    ctx->pc = 0x7F0E7AFCu;
    // 7F0E7AFC: stw     r0, 292(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7B00:
    ctx->pc = 0x7F0E7B00u;
    ctx->downcount -= 5;
    // 7F0E7B00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7B04:
    ctx->pc = 0x7F0E7B04u;
    // 7F0E7B04: stw     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7B08:
    ctx->pc = 0x7F0E7B08u;
    // 7F0E7B08: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7B0C:
    ctx->pc = 0x7F0E7B0Cu;
    // 7F0E7B0C: andi.   r0, r0, 0x00A0
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x00A0u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E7B10:
    ctx->pc = 0x7F0E7B10u;
    // 7F0E7B10: bc    12, 2, 0x7F0E7B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7B4C;
        }
    }

label_7F0E7B14:
    ctx->pc = 0x7F0E7B14u;
    ctx->downcount -= 6;
    // 7F0E7B14: lis     r5, 44
    ctx->gpr[5] = ((u32)(s32)(44) << 16);

label_7F0E7B18:
    ctx->pc = 0x7F0E7B18u;
    // 7F0E7B18: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7B1C:
    ctx->pc = 0x7F0E7B1Cu;
    // 7F0E7B1C: addi    r4, r5, 13950
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(13950);

label_7F0E7B20:
    ctx->pc = 0x7F0E7B20u;
    // 7F0E7B20: addi    r6, r28, 92
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(92);

label_7F0E7B24:
    ctx->pc = 0x7F0E7B24u;
    // 7F0E7B24: addi    r5, r5, 13949
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13949);

label_7F0E7B28:
    ctx->pc = 0x7F0E7B28u;
    // 7F0E7B28: bl      0x7F11BCA8
    {
            ctx->lr = 0x7F0E7B2Cu;
            ctx->pc = 0x7F11BCA8u;
            return;
    }

label_7F0E7B2C:
    ctx->pc = 0x7F0E7B2Cu;
    ctx->downcount -= 3;
    // 7F0E7B2C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7B30:
    ctx->pc = 0x7F0E7B30u;
    // 7F0E7B30: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7B34:
    ctx->pc = 0x7F0E7B34u;
    // 7F0E7B34: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7B38u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7B38:
    ctx->pc = 0x7F0E7B38u;
    ctx->downcount -= 5;
    // 7F0E7B38: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7B3C:
    ctx->pc = 0x7F0E7B3Cu;
    // 7F0E7B3C: rlwinm r0, r0, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x00000001u;
    }

label_7F0E7B40:
    ctx->pc = 0x7F0E7B40u;
    // 7F0E7B40: neg  r3, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F0E7B44:
    ctx->pc = 0x7F0E7B44u;
    // 7F0E7B44: addi    r0, r3, 2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2);

label_7F0E7B48:
    ctx->pc = 0x7F0E7B48u;
    // 7F0E7B48: stw     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7B4C:
    ctx->pc = 0x7F0E7B4Cu;
    ctx->downcount -= 3;
    // 7F0E7B4C: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7B50:
    ctx->pc = 0x7F0E7B50u;
    // 7F0E7B50: rlwinm. r0, r0, 0, 29, 29
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

label_7F0E7B54:
    ctx->pc = 0x7F0E7B54u;
    // 7F0E7B54: bc    12, 2, 0x7F0E7B6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7B6C;
        }
    }

label_7F0E7B58:
    ctx->pc = 0x7F0E7B58u;
    ctx->downcount -= 2;
    // 7F0E7B58: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7B5C:
    ctx->pc = 0x7F0E7B5Cu;
    // 7F0E7B5C: bl      0x7F206130
    {
            ctx->lr = 0x7F0E7B60u;
            ctx->pc = 0x7F206130u;
            return;
    }

label_7F0E7B60:
    ctx->pc = 0x7F0E7B60u;
    ctx->downcount -= 3;
    // 7F0E7B60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7B64:
    ctx->pc = 0x7F0E7B64u;
    // 7F0E7B64: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7B68:
    ctx->pc = 0x7F0E7B68u;
    // 7F0E7B68: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7B6Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7B6C:
    ctx->pc = 0x7F0E7B6Cu;
    ctx->downcount -= 3;
    // 7F0E7B6C: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7B70:
    ctx->pc = 0x7F0E7B70u;
    // 7F0E7B70: rlwinm. r0, r0, 0, 28, 28
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

label_7F0E7B74:
    ctx->pc = 0x7F0E7B74u;
    // 7F0E7B74: bc    12, 2, 0x7F0E7BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7BB8;
        }
    }

label_7F0E7B78:
    ctx->pc = 0x7F0E7B78u;
    ctx->downcount -= 4;
    // 7F0E7B78: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7B7C:
    ctx->pc = 0x7F0E7B7Cu;
    // 7F0E7B7C: lwz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7B80:
    ctx->pc = 0x7F0E7B80u;
    // 7F0E7B80: lwz     r5, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7B84:
    ctx->pc = 0x7F0E7B84u;
    // 7F0E7B84: bl      0x7F206A3C
    {
            ctx->lr = 0x7F0E7B88u;
            ctx->pc = 0x7F206A3Cu;
            return;
    }

label_7F0E7B88:
    ctx->pc = 0x7F0E7B88u;
    ctx->downcount -= 3;
    // 7F0E7B88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7B8C:
    ctx->pc = 0x7F0E7B8Cu;
    // 7F0E7B8C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7B90:
    ctx->pc = 0x7F0E7B90u;
    // 7F0E7B90: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7B94u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7B94:
    ctx->pc = 0x7F0E7B94u;
    ctx->downcount -= 6;
    // 7F0E7B94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E7B98:
    ctx->pc = 0x7F0E7B98u;
    // 7F0E7B98: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7B9C:
    ctx->pc = 0x7F0E7B9Cu;
    // 7F0E7B9C: stw     r0, 116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7BA0:
    ctx->pc = 0x7F0E7BA0u;
    // 7F0E7BA0: addi    r5, r28, 116
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(116);

label_7F0E7BA4:
    ctx->pc = 0x7F0E7BA4u;
    // 7F0E7BA4: lwz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7BA8:
    ctx->pc = 0x7F0E7BA8u;
    // 7F0E7BA8: bl      0x7F1F642C
    {
            ctx->lr = 0x7F0E7BACu;
            ctx->pc = 0x7F1F642Cu;
            return;
    }

label_7F0E7BAC:
    ctx->pc = 0x7F0E7BACu;
    ctx->downcount -= 3;
    // 7F0E7BAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7BB0:
    ctx->pc = 0x7F0E7BB0u;
    // 7F0E7BB0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7BB4:
    ctx->pc = 0x7F0E7BB4u;
    // 7F0E7BB4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7BB8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7BB8:
    ctx->pc = 0x7F0E7BB8u;
    ctx->downcount -= 5;
    // 7F0E7BB8: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F0E7BBC:
    ctx->pc = 0x7F0E7BBCu;
    // 7F0E7BBC: lwz     r4, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7BC0:
    ctx->pc = 0x7F0E7BC0u;
    // 7F0E7BC0: addi    r0, r3, -8174
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8174);

label_7F0E7BC4:
    ctx->pc = 0x7F0E7BC4u;
    // 7F0E7BC4: cmpw    r4, r0
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

label_7F0E7BC8:
    ctx->pc = 0x7F0E7BC8u;
    // 7F0E7BC8: bc    12, 2, 0x7F0E7C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C0C;
        }
    }

label_7F0E7BCC:
    ctx->pc = 0x7F0E7BCCu;
    ctx->downcount -= 1;
    // 7F0E7BCC: bc    4, 0, 0x7F0E7BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7BF8;
        }
    }

label_7F0E7BD0:
    ctx->pc = 0x7F0E7BD0u;
    ctx->downcount -= 4;
    // 7F0E7BD0: lis     r3, 36
    ctx->gpr[3] = ((u32)(s32)(36) << 16);

label_7F0E7BD4:
    ctx->pc = 0x7F0E7BD4u;
    // 7F0E7BD4: addi    r0, r3, -6796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6796);

label_7F0E7BD8:
    ctx->pc = 0x7F0E7BD8u;
    // 7F0E7BD8: cmpw    r4, r0
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

label_7F0E7BDC:
    ctx->pc = 0x7F0E7BDCu;
    // 7F0E7BDC: bc    12, 2, 0x7F0E7C34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C34;
        }
    }

label_7F0E7BE0:
    ctx->pc = 0x7F0E7BE0u;
    ctx->downcount -= 1;
    // 7F0E7BE0: bc    4, 0, 0x7F0E7C44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C44;
        }
    }

label_7F0E7BE4:
    ctx->pc = 0x7F0E7BE4u;
    ctx->downcount -= 4;
    // 7F0E7BE4: lis     r3, 17
    ctx->gpr[3] = ((u32)(s32)(17) << 16);

label_7F0E7BE8:
    ctx->pc = 0x7F0E7BE8u;
    // 7F0E7BE8: addi    r0, r3, 11244
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11244);

label_7F0E7BEC:
    ctx->pc = 0x7F0E7BECu;
    // 7F0E7BEC: cmpw    r4, r0
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

label_7F0E7BF0:
    ctx->pc = 0x7F0E7BF0u;
    // 7F0E7BF0: bc    12, 2, 0x7F0E7C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C20;
        }
    }

label_7F0E7BF4:
    ctx->pc = 0x7F0E7BF4u;
    ctx->downcount -= 1;
    // 7F0E7BF4: b       0x7F0E7C44
    {
            goto label_7F0E7C44;
    }

label_7F0E7BF8:
    ctx->pc = 0x7F0E7BF8u;
    ctx->downcount -= 4;
    // 7F0E7BF8: lis     r3, 101
    ctx->gpr[3] = ((u32)(s32)(101) << 16);

label_7F0E7BFC:
    ctx->pc = 0x7F0E7BFCu;
    // 7F0E7BFC: addi    r0, r3, 28276
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28276);

label_7F0E7C00:
    ctx->pc = 0x7F0E7C00u;
    // 7F0E7C00: cmpw    r4, r0
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

label_7F0E7C04:
    ctx->pc = 0x7F0E7C04u;
    // 7F0E7C04: bc    12, 2, 0x7F0E7C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C20;
        }
    }

label_7F0E7C08:
    ctx->pc = 0x7F0E7C08u;
    ctx->downcount -= 1;
    // 7F0E7C08: b       0x7F0E7C44
    {
            goto label_7F0E7C44;
    }

label_7F0E7C0C:
    ctx->pc = 0x7F0E7C0Cu;
    ctx->downcount -= 3;
    // 7F0E7C0C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7C10:
    ctx->pc = 0x7F0E7C10u;
    // 7F0E7C10: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7C14:
    ctx->pc = 0x7F0E7C14u;
    // 7F0E7C14: bl      0x7F1310CC
    {
            ctx->lr = 0x7F0E7C18u;
            ctx->pc = 0x7F1310CCu;
            return;
    }

label_7F0E7C18:
    ctx->pc = 0x7F0E7C18u;
    ctx->downcount -= 2;
    // 7F0E7C18: stw     r3, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7C1C:
    ctx->pc = 0x7F0E7C1Cu;
    // 7F0E7C1C: b       0x7F0E7C44
    {
            goto label_7F0E7C44;
    }

label_7F0E7C20:
    ctx->pc = 0x7F0E7C20u;
    ctx->downcount -= 3;
    // 7F0E7C20: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7C24:
    ctx->pc = 0x7F0E7C24u;
    // 7F0E7C24: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7C28:
    ctx->pc = 0x7F0E7C28u;
    // 7F0E7C28: bl      0x7F130F3C
    {
            ctx->lr = 0x7F0E7C2Cu;
            ctx->pc = 0x7F130F3Cu;
            return;
    }

label_7F0E7C2C:
    ctx->pc = 0x7F0E7C2Cu;
    ctx->downcount -= 2;
    // 7F0E7C2C: stw     r3, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7C30:
    ctx->pc = 0x7F0E7C30u;
    // 7F0E7C30: b       0x7F0E7C44
    {
            goto label_7F0E7C44;
    }

label_7F0E7C34:
    ctx->pc = 0x7F0E7C34u;
    ctx->downcount -= 3;
    // 7F0E7C34: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7C38:
    ctx->pc = 0x7F0E7C38u;
    // 7F0E7C38: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7C3C:
    ctx->pc = 0x7F0E7C3Cu;
    // 7F0E7C3C: bl      0x7F130FA0
    {
            ctx->lr = 0x7F0E7C40u;
            ctx->pc = 0x7F130FA0u;
            return;
    }

label_7F0E7C40:
    ctx->pc = 0x7F0E7C40u;
    ctx->downcount -= 1;
    // 7F0E7C40: stw     r3, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7C44:
    ctx->pc = 0x7F0E7C44u;
    ctx->downcount -= 2;
    // 7F0E7C44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7C48:
    ctx->pc = 0x7F0E7C48u;
    // 7F0E7C48: bl      0x7F132E24
    {
            ctx->lr = 0x7F0E7C4Cu;
            ctx->pc = 0x7F132E24u;
            return;
    }

label_7F0E7C4C:
    ctx->pc = 0x7F0E7C4Cu;
    ctx->downcount -= 18;
    // 7F0E7C4C: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0E7C50:
    ctx->pc = 0x7F0E7C50u;
    // 7F0E7C50: stw     r0, 248(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7C54:
    ctx->pc = 0x7F0E7C54u;
    // 7F0E7C54: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E7C58:
    ctx->pc = 0x7F0E7C58u;
    // 7F0E7C58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7C5C:
    ctx->pc = 0x7F0E7C5Cu;
    // 7F0E7C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E7C60:
    ctx->pc = 0x7F0E7C60u;
    // 7F0E7C60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0E7C64:
    ctx->pc = 0x7F0E7C64u;
    // 7F0E7C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7C68:
    ctx->pc = 0x7F0E7C68u;
    ctx->downcount -= 19;
    // 7F0E7C68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7C6C:
    ctx->pc = 0x7F0E7C6Cu;
    // 7F0E7C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E7C70:
    ctx->pc = 0x7F0E7C70u;
    // 7F0E7C70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7C74:
    ctx->pc = 0x7F0E7C74u;
    // 7F0E7C74: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E7C78:
    ctx->pc = 0x7F0E7C78u;
    // 7F0E7C78: or.   r31, r5, r5
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

label_7F0E7C7C:
    ctx->pc = 0x7F0E7C7Cu;
    // 7F0E7C7C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E7C80:
    ctx->pc = 0x7F0E7C80u;
    // 7F0E7C80: stw     r6, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0E7C84:
    ctx->pc = 0x7F0E7C84u;
    // 7F0E7C84: stw     r31, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0E7C88:
    ctx->pc = 0x7F0E7C88u;
    // 7F0E7C88: bc    4, 2, 0x7F0E7C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7C98;
        }
    }

label_7F0E7C8C:
    ctx->pc = 0x7F0E7C8Cu;
    ctx->downcount -= 3;
    // 7F0E7C8C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7C90:
    ctx->pc = 0x7F0E7C90u;
    // 7F0E7C90: stw     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7C94:
    ctx->pc = 0x7F0E7C94u;
    // 7F0E7C94: b       0x7F0E7CC8
    {
            goto label_7F0E7CC8;
    }

label_7F0E7C98:
    ctx->pc = 0x7F0E7C98u;
    ctx->downcount -= 9;
    // 7F0E7C98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E7C9C:
    ctx->pc = 0x7F0E7C9Cu;
    // 7F0E7C9C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7CA0:
    ctx->pc = 0x7F0E7CA0u;
    // 7F0E7CA0: stw     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7CA4:
    ctx->pc = 0x7F0E7CA4u;
    // 7F0E7CA4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7CA8:
    ctx->pc = 0x7F0E7CA8u;
    // 7F0E7CA8: or   r8, r6, r6
    {
        ctx->gpr[8] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0E7CAC:
    ctx->pc = 0x7F0E7CACu;
    // 7F0E7CAC: addi    r3, r3, 124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(124);

label_7F0E7CB0:
    ctx->pc = 0x7F0E7CB0u;
    // 7F0E7CB0: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F0E7CB4:
    ctx->pc = 0x7F0E7CB4u;
    // 7F0E7CB4: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_7F0E7CB8:
    ctx->pc = 0x7F0E7CB8u;
    // 7F0E7CB8: bl      0x7F25CB2C
    {
            ctx->lr = 0x7F0E7CBCu;
            ctx->pc = 0x7F25CB2Cu;
            return;
    }

label_7F0E7CBC:
    ctx->pc = 0x7F0E7CBCu;
    ctx->downcount -= 3;
    // 7F0E7CBC: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7CC0:
    ctx->pc = 0x7F0E7CC0u;
    // 7F0E7CC0: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7CC4:
    ctx->pc = 0x7F0E7CC4u;
    // 7F0E7CC4: bl      0x7F3B0938
    {
            ctx->lr = 0x7F0E7CC8u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F0E7CC8:
    ctx->pc = 0x7F0E7CC8u;
    ctx->downcount -= 16;
    // 7F0E7CC8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E7CCC:
    ctx->pc = 0x7F0E7CCCu;
    // 7F0E7CCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7CD0:
    ctx->pc = 0x7F0E7CD0u;
    // 7F0E7CD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E7CD4:
    ctx->pc = 0x7F0E7CD4u;
    // 7F0E7CD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E7CD8:
    ctx->pc = 0x7F0E7CD8u;
    // 7F0E7CD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7CDC:
    ctx->pc = 0x7F0E7CDCu;
    ctx->downcount -= 26;
    // 7F0E7CDC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7CE0:
    ctx->pc = 0x7F0E7CE0u;
    // 7F0E7CE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E7CE4:
    ctx->pc = 0x7F0E7CE4u;
    // 7F0E7CE4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7CE8:
    ctx->pc = 0x7F0E7CE8u;
    // 7F0E7CE8: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E7CEC:
    ctx->pc = 0x7F0E7CECu;
    // 7F0E7CEC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0E7CF0:
    ctx->pc = 0x7F0E7CF0u;
    // 7F0E7CF0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0E7CF4:
    ctx->pc = 0x7F0E7CF4u;
    // 7F0E7CF4: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0E7CF8:
    ctx->pc = 0x7F0E7CF8u;
    // 7F0E7CF8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7CFC:
    ctx->pc = 0x7F0E7CFCu;
    // 7F0E7CFC: or   r24, r7, r7
    {
        ctx->gpr[24] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F0E7D00:
    ctx->pc = 0x7F0E7D00u;
    // 7F0E7D00: or   r25, r8, r8
    {
        ctx->gpr[25] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0E7D04:
    ctx->pc = 0x7F0E7D04u;
    // 7F0E7D04: or   r26, r9, r9
    {
        ctx->gpr[26] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F0E7D08:
    ctx->pc = 0x7F0E7D08u;
    // 7F0E7D08: or   r27, r10, r10
    {
        ctx->gpr[27] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F0E7D0C:
    ctx->pc = 0x7F0E7D0Cu;
    // 7F0E7D0C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7D10:
    ctx->pc = 0x7F0E7D10u;
    // 7F0E7D10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7D14:
    ctx->pc = 0x7F0E7D14u;
    // 7F0E7D14: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7D18:
    ctx->pc = 0x7F0E7D18u;
    // 7F0E7D18: bl      0x7F0E9A50
    {
            ctx->lr = 0x7F0E7D1Cu;
            ctx->pc = 0x7F0E9A50u;
            return;
    }

label_7F0E7D1C:
    ctx->pc = 0x7F0E7D1Cu;
    ctx->downcount -= 15;
    // 7F0E7D1C: addi    r0, r28, 272
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(272);

label_7F0E7D20:
    ctx->pc = 0x7F0E7D20u;
    // 7F0E7D20: addi    r4, r28, 260
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(260);

label_7F0E7D24:
    ctx->pc = 0x7F0E7D24u;
    // 7F0E7D24: stw     r0, 3976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7D28:
    ctx->pc = 0x7F0E7D28u;
    // 7F0E7D28: addi    r7, r28, 52
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(52);

label_7F0E7D2C:
    ctx->pc = 0x7F0E7D2Cu;
    // 7F0E7D2C: addi    r0, r28, 84
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(84);

label_7F0E7D30:
    ctx->pc = 0x7F0E7D30u;
    // 7F0E7D30: addi    r3, r29, 16
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0E7D34:
    ctx->pc = 0x7F0E7D34u;
    // 7F0E7D34: stw     r4, 3980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0E7D38:
    ctx->pc = 0x7F0E7D38u;
    // 7F0E7D38: extsh r4, r24
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F0E7D3C:
    ctx->pc = 0x7F0E7D3Cu;
    // 7F0E7D3C: extsh r5, r25
    {
        ctx->gpr[5] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F0E7D40:
    ctx->pc = 0x7F0E7D40u;
    // 7F0E7D40: extsh r6, r26
    {
        ctx->gpr[6] = (u32)(s32)(s16)ctx->gpr[26];
    }

label_7F0E7D44:
    ctx->pc = 0x7F0E7D44u;
    // 7F0E7D44: stw     r7, 3888(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0E7D48:
    ctx->pc = 0x7F0E7D48u;
    // 7F0E7D48: stw     r0, 3892(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7D4C:
    ctx->pc = 0x7F0E7D4Cu;
    // 7F0E7D4C: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7D50:
    ctx->pc = 0x7F0E7D50u;
    // 7F0E7D50: stw     r0, 3896(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7D54:
    ctx->pc = 0x7F0E7D54u;
    // 7F0E7D54: bl      0x7F0E98DC
    {
            ctx->lr = 0x7F0E7D58u;
            ctx->pc = 0x7F0E98DCu;
            return;
    }

label_7F0E7D58:
    ctx->pc = 0x7F0E7D58u;
    ctx->downcount -= 2;
    // 7F0E7D58: cmplwi  r27, 0x0000
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

label_7F0E7D5C:
    ctx->pc = 0x7F0E7D5Cu;
    // 7F0E7D5C: bc    4, 2, 0x7F0E7DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7DA0;
        }
    }

label_7F0E7D60:
    ctx->pc = 0x7F0E7D60u;
    ctx->downcount -= 7;
    // 7F0E7D60: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F0E7D64:
    ctx->pc = 0x7F0E7D64u;
    // 7F0E7D64: li      r0, 382
    ctx->gpr[0] = (u32)(s32)(382);

label_7F0E7D68:
    ctx->pc = 0x7F0E7D68u;
    // 7F0E7D68: addi    r4, r3, -5840
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5840);

label_7F0E7D6C:
    ctx->pc = 0x7F0E7D6Cu;
    // 7F0E7D6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0E7D70:
    ctx->pc = 0x7F0E7D70u;
    // 7F0E7D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0E7D74:
    ctx->pc = 0x7F0E7D74u;
    // 7F0E7D74: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0E7D78:
    loop_7F0E7D78(ctx);
    if (ctx->pc == 0x7F0E7D88u) goto label_7F0E7D88;
    return;
label_7F0E7D7C:
    // 7F0E7D7C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F0E7D80:
    // 7F0E7D80: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0E7D84:
    // 7F0E7D84: bc    16, 0, 0x7F0E7D78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0E7D78u;
                return;
            }
            goto label_7F0E7D78;
        }
    }

label_7F0E7D88:
    ctx->pc = 0x7F0E7D88u;
    ctx->downcount -= 5;
    // 7F0E7D88: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F0E7D8C:
    ctx->pc = 0x7F0E7D8Cu;
    // 7F0E7D8C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7D90:
    ctx->pc = 0x7F0E7D90u;
    // 7F0E7D90: addi    r5, r4, -5840
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5840);

label_7F0E7D94:
    ctx->pc = 0x7F0E7D94u;
    // 7F0E7D94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7D98:
    ctx->pc = 0x7F0E7D98u;
    // 7F0E7D98: bl      0x7F0E9B6C
    {
            ctx->lr = 0x7F0E7D9Cu;
            ctx->pc = 0x7F0E9B6Cu;
            return;
    }

label_7F0E7D9C:
    ctx->pc = 0x7F0E7D9Cu;
    ctx->downcount -= 1;
    // 7F0E7D9C: b       0x7F0E7DB0
    {
            goto label_7F0E7DB0;
    }

label_7F0E7DA0:
    ctx->pc = 0x7F0E7DA0u;
    ctx->downcount -= 4;
    // 7F0E7DA0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7DA4:
    ctx->pc = 0x7F0E7DA4u;
    // 7F0E7DA4: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0E7DA8:
    ctx->pc = 0x7F0E7DA8u;
    // 7F0E7DA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7DAC:
    ctx->pc = 0x7F0E7DACu;
    // 7F0E7DAC: bl      0x7F0E9B6C
    {
            ctx->lr = 0x7F0E7DB0u;
            ctx->pc = 0x7F0E9B6Cu;
            return;
    }

label_7F0E7DB0:
    ctx->pc = 0x7F0E7DB0u;
    ctx->downcount -= 4;
    // 7F0E7DB0: lis     r4, 32527
    ctx->gpr[4] = ((u32)(s32)(32527) << 16);

label_7F0E7DB4:
    ctx->pc = 0x7F0E7DB4u;
    // 7F0E7DB4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0E7DB8:
    ctx->pc = 0x7F0E7DB8u;
    // 7F0E7DB8: addi    r4, r4, -8036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8036);

label_7F0E7DBC:
    ctx->pc = 0x7F0E7DBCu;
    // 7F0E7DBC: bl      0x7F0E9B3C
    {
            ctx->lr = 0x7F0E7DC0u;
            ctx->pc = 0x7F0E9B3Cu;
            return;
    }

label_7F0E7DC0:
    ctx->pc = 0x7F0E7DC0u;
    ctx->downcount -= 12;
    // 7F0E7DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7DC4:
    ctx->pc = 0x7F0E7DC4u;
    // 7F0E7DC4: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_7F0E7DC8:
    ctx->pc = 0x7F0E7DC8u;
    // 7F0E7DC8: stw     r0, 3996(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7DCC:
    ctx->pc = 0x7F0E7DCCu;
    // 7F0E7DCC: addi    r8, r3, -1
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0E7DD0:
    ctx->pc = 0x7F0E7DD0u;
    // 7F0E7DD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7DD4:
    ctx->pc = 0x7F0E7DD4u;
    // 7F0E7DD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7DD8:
    ctx->pc = 0x7F0E7DD8u;
    // 7F0E7DD8: lwz     r5, 4340(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4340);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7DDC:
    ctx->pc = 0x7F0E7DDCu;
    // 7F0E7DDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0E7DE0:
    ctx->pc = 0x7F0E7DE0u;
    // 7F0E7DE0: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7DE4:
    ctx->pc = 0x7F0E7DE4u;
    // 7F0E7DE4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E7DE8:
    ctx->pc = 0x7F0E7DE8u;
    // 7F0E7DE8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7DEC:
    ctx->pc = 0x7F0E7DECu;
    // 7F0E7DEC: bl      0x7F042C94
    {
            ctx->lr = 0x7F0E7DF0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0E7DF0:
    ctx->pc = 0x7F0E7DF0u;
    ctx->downcount -= 3;
    // 7F0E7DF0: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7DF4:
    ctx->pc = 0x7F0E7DF4u;
    // 7F0E7DF4: rlwinm. r0, r0, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E7DF8:
    ctx->pc = 0x7F0E7DF8u;
    // 7F0E7DF8: bc    4, 2, 0x7F0E7E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7E18;
        }
    }

label_7F0E7DFC:
    ctx->pc = 0x7F0E7DFCu;
    ctx->downcount -= 3;
    // 7F0E7DFC: lwz     r0, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7E00:
    ctx->pc = 0x7F0E7E00u;
    // 7F0E7E00: rlwinm. r0, r0, 0, 26, 26
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

label_7F0E7E04:
    ctx->pc = 0x7F0E7E04u;
    // 7F0E7E04: bc    4, 2, 0x7F0E7E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7E18;
        }
    }

label_7F0E7E08:
    ctx->pc = 0x7F0E7E08u;
    ctx->downcount -= 3;
    // 7F0E7E08: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7E0C:
    ctx->pc = 0x7F0E7E0Cu;
    // 7F0E7E0C: lwz     r4, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7E10:
    ctx->pc = 0x7F0E7E10u;
    // 7F0E7E10: bl      0x7F2D8CF0
    {
            ctx->lr = 0x7F0E7E14u;
            ctx->pc = 0x7F2D8CF0u;
            return;
    }

label_7F0E7E14:
    ctx->pc = 0x7F0E7E14u;
    ctx->downcount -= 1;
    // 7F0E7E14: stw     r3, 4068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7E18:
    ctx->pc = 0x7F0E7E18u;
    ctx->downcount -= 3;
    // 7F0E7E18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7E1C:
    ctx->pc = 0x7F0E7E1Cu;
    // 7F0E7E1C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0E7E20:
    ctx->pc = 0x7F0E7E20u;
    // 7F0E7E20: bl      0x7F2D2410
    {
            ctx->lr = 0x7F0E7E24u;
            ctx->pc = 0x7F2D2410u;
            return;
    }

label_7F0E7E24:
    ctx->pc = 0x7F0E7E24u;
    ctx->downcount -= 6;
    // 7F0E7E24: stw     r3, 4364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7E28:
    ctx->pc = 0x7F0E7E28u;
    // 7F0E7E28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0E7E2C:
    ctx->pc = 0x7F0E7E2Cu;
    // 7F0E7E2C: stw     r0, 4360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7E30:
    ctx->pc = 0x7F0E7E30u;
    // 7F0E7E30: lwz     r0, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7E34:
    ctx->pc = 0x7F0E7E34u;
    // 7F0E7E34: rlwinm. r0, r0, 0, 18, 18
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

label_7F0E7E38:
    ctx->pc = 0x7F0E7E38u;
    // 7F0E7E38: bc    4, 2, 0x7F0E7E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7E60;
        }
    }

label_7F0E7E3C:
    ctx->pc = 0x7F0E7E3Cu;
    ctx->downcount -= 5;
    // 7F0E7E3C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7E40:
    ctx->pc = 0x7F0E7E40u;
    // 7F0E7E40: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0E7E44:
    ctx->pc = 0x7F0E7E44u;
    // 7F0E7E44: addi    r4, r29, 16
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0E7E48:
    ctx->pc = 0x7F0E7E48u;
    // 7F0E7E48: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F0E7E4C:
    ctx->pc = 0x7F0E7E4Cu;
    // 7F0E7E4C: bl      0x7F22DD68
    {
            ctx->lr = 0x7F0E7E50u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F0E7E50:
    ctx->pc = 0x7F0E7E50u;
    ctx->downcount -= 4;
    // 7F0E7E50: stw     r3, 4064(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7E54:
    ctx->pc = 0x7F0E7E54u;
    // 7F0E7E54: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7E58:
    ctx->pc = 0x7F0E7E58u;
    // 7F0E7E58: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7E5C:
    ctx->pc = 0x7F0E7E5Cu;
    // 7F0E7E5C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0E7E60u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0E7E60:
    ctx->pc = 0x7F0E7E60u;
    ctx->downcount -= 16;
    // 7F0E7E60: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E7E64:
    ctx->pc = 0x7F0E7E64u;
    // 7F0E7E64: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7E68:
    ctx->pc = 0x7F0E7E68u;
    // 7F0E7E68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E7E6C:
    ctx->pc = 0x7F0E7E6Cu;
    // 7F0E7E6C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E7E70:
    ctx->pc = 0x7F0E7E70u;
    // 7F0E7E70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7E74:
    ctx->pc = 0x7F0E7E74u;
    ctx->downcount -= 34;
    // 7F0E7E74: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7E78:
    ctx->pc = 0x7F0E7E78u;
    // 7F0E7E78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E7E7C:
    ctx->pc = 0x7F0E7E7Cu;
    // 7F0E7E7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0E7E80:
    ctx->pc = 0x7F0E7E80u;
    // 7F0E7E80: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7E84:
    ctx->pc = 0x7F0E7E84u;
    // 7F0E7E84: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E7E88:
    ctx->pc = 0x7F0E7E88u;
    // 7F0E7E88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E7E8C:
    ctx->pc = 0x7F0E7E8Cu;
    // 7F0E7E8C: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F0E7E90:
    ctx->pc = 0x7F0E7E90u;
    // 7F0E7E90: lwz     r31, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E7E94:
    ctx->pc = 0x7F0E7E94u;
    // 7F0E7E94: lwz     r5, 3924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3924);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7E98:
    ctx->pc = 0x7F0E7E98u;
    // 7F0E7E98: lwz     r0, 3928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3928);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7E9C:
    ctx->pc = 0x7F0E7E9Cu;
    // 7F0E7E9C: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E7EA0:
    ctx->pc = 0x7F0E7EA0u;
    // 7F0E7EA0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7EA4:
    ctx->pc = 0x7F0E7EA4u;
    // 7F0E7EA4: lwz     r5, 3932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3932);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7EA8:
    ctx->pc = 0x7F0E7EA8u;
    // 7F0E7EA8: lwz     r0, 3936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7EAC:
    ctx->pc = 0x7F0E7EACu;
    // 7F0E7EAC: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0E7EB0:
    ctx->pc = 0x7F0E7EB0u;
    // 7F0E7EB0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7EB4:
    ctx->pc = 0x7F0E7EB4u;
    // 7F0E7EB4: lwz     r0, 3960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3960);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7EB8:
    ctx->pc = 0x7F0E7EB8u;
    // 7F0E7EB8: lwz     r5, 3964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3964);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7EBC:
    ctx->pc = 0x7F0E7EBCu;
    // 7F0E7EBC: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F0E7EC0:
    ctx->pc = 0x7F0E7EC0u;
    // 7F0E7EC0: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F0E7EC4:
    ctx->pc = 0x7F0E7EC4u;
    // 7F0E7EC4: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0E7EC8:
    ctx->pc = 0x7F0E7EC8u;
    // 7F0E7EC8: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0E7ECC:
    ctx->pc = 0x7F0E7ECCu;
    // 7F0E7ECC: or.   r0, r3, r0
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

label_7F0E7ED0:
    ctx->pc = 0x7F0E7ED0u;
    // 7F0E7ED0: bc    12, 2, 0x7F0E7EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7EE8;
        }
    }

label_7F0E7ED4:
    ctx->pc = 0x7F0E7ED4u;
    ctx->downcount -= 5;
    // 7F0E7ED4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0E7ED8:
    ctx->pc = 0x7F0E7ED8u;
    // 7F0E7ED8: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7ED8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E7EDC:
    ctx->pc = 0x7F0E7EDCu;
    // 7F0E7EDC: lfs     f0, -2140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7EDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E7EE0:
    ctx->pc = 0x7F0E7EE0u;
    // 7F0E7EE0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0E7EE0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0E7EE4:
    ctx->pc = 0x7F0E7EE4u;
    // 7F0E7EE4: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E7EE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E7EE8:
    ctx->pc = 0x7F0E7EE8u;
    ctx->downcount -= 5;
    // 7F0E7EE8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7EEC:
    ctx->pc = 0x7F0E7EECu;
    // 7F0E7EEC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E7EF0:
    ctx->pc = 0x7F0E7EF0u;
    // 7F0E7EF0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7EF4:
    ctx->pc = 0x7F0E7EF4u;
    // 7F0E7EF4: addi    r3, r3, 4008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4008);

label_7F0E7EF8:
    ctx->pc = 0x7F0E7EF8u;
    // 7F0E7EF8: bl      0x7F173EA8
    {
            ctx->lr = 0x7F0E7EFCu;
            ctx->pc = 0x7F173EA8u;
            return;
    }

label_7F0E7EFC:
    ctx->pc = 0x7F0E7EFCu;
    ctx->downcount -= 3;
    // 7F0E7EFC: lwz     r0, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7F00:
    ctx->pc = 0x7F0E7F00u;
    // 7F0E7F00: rlwinm. r0, r0, 0, 14, 14
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

label_7F0E7F04:
    ctx->pc = 0x7F0E7F04u;
    // 7F0E7F04: bc    12, 2, 0x7F0E7F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7F24;
        }
    }

label_7F0E7F08:
    ctx->pc = 0x7F0E7F08u;
    ctx->downcount -= 6;
    // 7F0E7F08: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7F0C:
    ctx->pc = 0x7F0E7F0Cu;
    // 7F0E7F0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E7F10:
    ctx->pc = 0x7F0E7F10u;
    // 7F0E7F10: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E7F14:
    ctx->pc = 0x7F0E7F14u;
    // 7F0E7F14: addi    r6, r31, 4344
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4344);

label_7F0E7F18:
    ctx->pc = 0x7F0E7F18u;
    // 7F0E7F18: lha     r4, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E7F1C:
    ctx->pc = 0x7F0E7F1Cu;
    // 7F0E7F1C: bl      0x7F01DC10
    {
            ctx->lr = 0x7F0E7F20u;
            ctx->pc = 0x7F01DC10u;
            return;
    }

label_7F0E7F20:
    ctx->pc = 0x7F0E7F20u;
    ctx->downcount -= 1;
    // 7F0E7F20: b       0x7F0E7F3C
    {
            goto label_7F0E7F3C;
    }

label_7F0E7F24:
    ctx->pc = 0x7F0E7F24u;
    ctx->downcount -= 6;
    // 7F0E7F24: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7F28:
    ctx->pc = 0x7F0E7F28u;
    // 7F0E7F28: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0E7F2C:
    ctx->pc = 0x7F0E7F2Cu;
    // 7F0E7F2C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0E7F30:
    ctx->pc = 0x7F0E7F30u;
    // 7F0E7F30: addi    r6, r31, 4344
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4344);

label_7F0E7F34:
    ctx->pc = 0x7F0E7F34u;
    // 7F0E7F34: lha     r4, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E7F38:
    ctx->pc = 0x7F0E7F38u;
    // 7F0E7F38: bl      0x7F01DC58
    {
            ctx->lr = 0x7F0E7F3Cu;
            ctx->pc = 0x7F01DC58u;
            return;
    }

label_7F0E7F3C:
    ctx->pc = 0x7F0E7F3Cu;
    ctx->downcount -= 6;
    // 7F0E7F3C: lwz     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0E7F40:
    ctx->pc = 0x7F0E7F40u;
    // 7F0E7F40: addi    r4, r31, 4344
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4344);

label_7F0E7F44:
    ctx->pc = 0x7F0E7F44u;
    // 7F0E7F44: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7F48:
    ctx->pc = 0x7F0E7F48u;
    // 7F0E7F48: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0E7F4C:
    ctx->pc = 0x7F0E7F4Cu;
    // 7F0E7F4C: lha     r5, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0E7F50:
    ctx->pc = 0x7F0E7F50u;
    // 7F0E7F50: bl      0x7F01DFA8
    {
            ctx->lr = 0x7F0E7F54u;
            ctx->pc = 0x7F01DFA8u;
            return;
    }

label_7F0E7F54:
    ctx->pc = 0x7F0E7F54u;
    ctx->downcount -= 16;
    // 7F0E7F54: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0E7F58:
    ctx->pc = 0x7F0E7F58u;
    // 7F0E7F58: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7F5C:
    ctx->pc = 0x7F0E7F5Cu;
    // 7F0E7F5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E7F60:
    ctx->pc = 0x7F0E7F60u;
    // 7F0E7F60: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0E7F64:
    ctx->pc = 0x7F0E7F64u;
    // 7F0E7F64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E7F68:
    ctx->pc = 0x7F0E7F68u;
    ctx->downcount -= 15;
    // 7F0E7F68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E7F6C:
    ctx->pc = 0x7F0E7F6Cu;
    // 7F0E7F6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E7F70:
    ctx->pc = 0x7F0E7F70u;
    // 7F0E7F70: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0E7F74:
    ctx->pc = 0x7F0E7F74u;
    // 7F0E7F74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0E7F78:
    ctx->pc = 0x7F0E7F78u;
    // 7F0E7F78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7F7C:
    ctx->pc = 0x7F0E7F7Cu;
    // 7F0E7F7C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0E7F80:
    ctx->pc = 0x7F0E7F80u;
    // 7F0E7F80: lwzu     r5, -5736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5736);
        ctx->gpr[5] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0E7F84:
    ctx->pc = 0x7F0E7F84u;
    // 7F0E7F84: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0E7F88:
    ctx->pc = 0x7F0E7F88u;
    // 7F0E7F88: lwz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0E7F8C:
    ctx->pc = 0x7F0E7F8Cu;
    // 7F0E7F8C: and   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[6];
    }

label_7F0E7F90:
    ctx->pc = 0x7F0E7F90u;
    // 7F0E7F90: and   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F0E7F94:
    ctx->pc = 0x7F0E7F94u;
    // 7F0E7F94: xor   r3, r0, r6
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F0E7F98:
    ctx->pc = 0x7F0E7F98u;
    // 7F0E7F98: xor   r0, r5, r6
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F0E7F9C:
    ctx->pc = 0x7F0E7F9Cu;
    // 7F0E7F9C: or.   r0, r3, r0
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

label_7F0E7FA0:
    ctx->pc = 0x7F0E7FA0u;
    // 7F0E7FA0: bc    12, 2, 0x7F0E7FD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7FD0;
        }
    }

label_7F0E7FA4:
    ctx->pc = 0x7F0E7FA4u;
    ctx->downcount -= 11;
    // 7F0E7FA4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0E7FA8:
    ctx->pc = 0x7F0E7FA8u;
    // 7F0E7FA8: addi    r4, r3, -5872
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F0E7FAC:
    ctx->pc = 0x7F0E7FACu;
    // 7F0E7FAC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7FB0:
    ctx->pc = 0x7F0E7FB0u;
    // 7F0E7FB0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7FB4:
    ctx->pc = 0x7F0E7FB4u;
    // 7F0E7FB4: stw     r3, 3924(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3924);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7FB8:
    ctx->pc = 0x7F0E7FB8u;
    // 7F0E7FB8: stw     r0, 3928(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3928);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7FBC:
    ctx->pc = 0x7F0E7FBCu;
    // 7F0E7FBC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E7FC0:
    ctx->pc = 0x7F0E7FC0u;
    // 7F0E7FC0: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7FC4:
    ctx->pc = 0x7F0E7FC4u;
    // 7F0E7FC4: stw     r3, 3932(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3932);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0E7FC8:
    ctx->pc = 0x7F0E7FC8u;
    // 7F0E7FC8: stw     r0, 3936(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3936);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E7FCC:
    ctx->pc = 0x7F0E7FCCu;
    // 7F0E7FCC: b       0x7F0E8014
    {
            goto label_7F0E8014;
    }

label_7F0E7FD0:
    ctx->pc = 0x7F0E7FD0u;
    ctx->downcount -= 10;
    // 7F0E7FD0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0E7FD4:
    ctx->pc = 0x7F0E7FD4u;
    // 7F0E7FD4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0E7FD8:
    ctx->pc = 0x7F0E7FD8u;
    // 7F0E7FD8: and   r3, r7, r0
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F0E7FDC:
    ctx->pc = 0x7F0E7FDCu;
    // 7F0E7FDC: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F0E7FE0:
    ctx->pc = 0x7F0E7FE0u;
    // 7F0E7FE0: xor   r0, r5, r6
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F0E7FE4:
    ctx->pc = 0x7F0E7FE4u;
    // 7F0E7FE4: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F0E7FE8:
    ctx->pc = 0x7F0E7FE8u;
    // 7F0E7FE8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E7FEC:
    ctx->pc = 0x7F0E7FECu;
    // 7F0E7FEC: or.   r0, r3, r0
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

label_7F0E7FF0:
    ctx->pc = 0x7F0E7FF0u;
    // 7F0E7FF0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E7FF4:
    ctx->pc = 0x7F0E7FF4u;
    // 7F0E7FF4: bc    12, 2, 0x7F0E7FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E7FFC;
        }
    }

label_7F0E7FF8:
    ctx->pc = 0x7F0E7FF8u;
    ctx->downcount -= 1;
    // 7F0E7FF8: b       0x7F0E8000
    {
            goto label_7F0E8000;
    }

label_7F0E7FFC:
    ctx->pc = 0x7F0E7FFCu;
    ctx->downcount -= 1;
    // 7F0E7FFC: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F0E8000:
    ctx->pc = 0x7F0E8000u;
    ctx->downcount -= 7;
    // 7F0E8000: mulli   r3, r6, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)324);

label_7F0E8004:
    ctx->pc = 0x7F0E8004u;
    // 7F0E8004: addi    r4, r8, 3924
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(3924);

label_7F0E8008:
    ctx->pc = 0x7F0E8008u;
    // 7F0E8008: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F0E800C:
    ctx->pc = 0x7F0E800Cu;
    // 7F0E800C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0E8010:
    ctx->pc = 0x7F0E8010u;
    // 7F0E8010: bl      0x7F173EA8
    {
            ctx->lr = 0x7F0E8014u;
            ctx->pc = 0x7F173EA8u;
            return;
    }

label_7F0E8014:
    ctx->pc = 0x7F0E8014u;
    ctx->downcount -= 5;
    // 7F0E8014: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0E8018:
    ctx->pc = 0x7F0E8018u;
    // 7F0E8018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0E801C:
    ctx->pc = 0x7F0E801Cu;
    // 7F0E801C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0E8020:
    ctx->pc = 0x7F0E8020u;
    // 7F0E8020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0E40EC;
        }
    }

label_7F0E8024:
    ctx->pc = 0x7F0E8024u;
    ctx->downcount -= 22;
    // 7F0E8024: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0E8028:
    ctx->pc = 0x7F0E8028u;
    // 7F0E8028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0E802C:
    ctx->pc = 0x7F0E802Cu;
    // 7F0E802C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0E8030:
    ctx->pc = 0x7F0E8030u;
    // 7F0E8030: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E8034:
    ctx->pc = 0x7F0E8034u;
    // 7F0E8034: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0E8038:
    ctx->pc = 0x7F0E8038u;
    // 7F0E8038: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0E803C:
    ctx->pc = 0x7F0E803Cu;
    // 7F0E803C: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F0E8040:
    ctx->pc = 0x7F0E8040u;
    // 7F0E8040: addi    r0, r3, -20736
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20736);

label_7F0E8044:
    ctx->pc = 0x7F0E8044u;
    // 7F0E8044: lwz     r4, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0E8048:
    ctx->pc = 0x7F0E8048u;
    // 7F0E8048: lwz     r31, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0E804C:
    ctx->pc = 0x7F0E804Cu;
    // 7F0E804C: and.   r0, r4, r0
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

label_7F0E8050:
    ctx->pc = 0x7F0E8050u;
    // 7F0E8050: bc    12, 2, 0x7F0E81C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0E81C8u;
            return;
        }
    }

label_7F0E8054:
    ctx->pc = 0x7F0E8054u;
    ctx->downcount -= 17;
    // 7F0E8054: lfs     f0, 3924(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8054u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E8058:
    ctx->pc = 0x7F0E8058u;
    // 7F0E8058: andi.   r0, r4, 0x8600
    {
        ctx->gpr[0] = ctx->gpr[4] & 0x8600u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E805C:
    ctx->pc = 0x7F0E805Cu;
    // 7F0E805C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E805Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E8060:
    ctx->pc = 0x7F0E8060u;
    // 7F0E8060: lfs     f0, 3928(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8060u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E8064:
    ctx->pc = 0x7F0E8064u;
    // 7F0E8064: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E8068:
    ctx->pc = 0x7F0E8068u;
    // 7F0E8068: lfs     f0, 3932(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8068u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3932);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E806C:
    ctx->pc = 0x7F0E806Cu;
    // 7F0E806C: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E806Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E8070:
    ctx->pc = 0x7F0E8070u;
    // 7F0E8070: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E8074:
    ctx->pc = 0x7F0E8074u;
    // 7F0E8074: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E8078:
    ctx->pc = 0x7F0E8078u;
    // 7F0E8078: lfs     f1, 4060(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8078u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0E807C:
    ctx->pc = 0x7F0E807Cu;
    // 7F0E807C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E807Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E8080:
    ctx->pc = 0x7F0E8080u;
    // 7F0E8080: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E8084:
    ctx->pc = 0x7F0E8084u;
    // 7F0E8084: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8084u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E8088:
    ctx->pc = 0x7F0E8088u;
    // 7F0E8088: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E808C:
    ctx->pc = 0x7F0E808Cu;
    // 7F0E808C: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0E808Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0E8090:
    ctx->pc = 0x7F0E8090u;
    // 7F0E8090: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0E8094:
    ctx->pc = 0x7F0E8094u;
    // 7F0E8094: bc    4, 2, 0x7F0E809C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0E809C;
        }
    }

label_7F0E8098:
    ctx->pc = 0x7F0E8098u;
    ctx->downcount -= 1;
    // 7F0E8098: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0E8098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0E809C:
    ctx->pc = 0x7F0E809Cu;
    ctx->downcount -= 3;
    // 7F0E809C: lwz     r3, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0E80A0:
    ctx->pc = 0x7F0E80A0u;
    // 7F0E80A0: rlwinm. r0, r3, 0, 18, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00002000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E80A4:
    ctx->pc = 0x7F0E80A4u;
    // 7F0E80A4: bc    12, 2, 0x7F0E80AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E80AC;
        }
    }

label_7F0E80A8:
    ctx->pc = 0x7F0E80A8u;
    ctx->downcount -= 1;
    // 7F0E80A8: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F0E80AC:
    ctx->pc = 0x7F0E80ACu;
    ctx->downcount -= 2;
    // 7F0E80AC: rlwinm. r0, r3, 0, 14, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00020000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E80B0:
    ctx->pc = 0x7F0E80B0u;
    // 7F0E80B0: bc    12, 2, 0x7F0E80C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E80C8;
        }
    }

label_7F0E80B4:
    ctx->pc = 0x7F0E80B4u;
    ctx->downcount -= 5;
    // 7F0E80B4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E80B8:
    ctx->pc = 0x7F0E80B8u;
    // 7F0E80B8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F0E80BC:
    ctx->pc = 0x7F0E80BCu;
    // 7F0E80BC: addi    r0, r4, -25840
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25840);

label_7F0E80C0:
    ctx->pc = 0x7F0E80C0u;
    // 7F0E80C0: stw     r0, -1744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E80C4:
    ctx->pc = 0x7F0E80C4u;
    // 7F0E80C4: b       0x7F0E80F4
    {
            ctx->pc = 0x7F0E80F4u;
            return;
    }

label_7F0E80C8:
    ctx->pc = 0x7F0E80C8u;
    ctx->downcount -= 2;
    // 7F0E80C8: rlwinm. r0, r3, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0E80CC:
    ctx->pc = 0x7F0E80CCu;
    // 7F0E80CC: bc    12, 2, 0x7F0E80E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0E80E4;
        }
    }

label_7F0E80D0:
    ctx->pc = 0x7F0E80D0u;
    ctx->downcount -= 5;
    // 7F0E80D0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E80D4:
    ctx->pc = 0x7F0E80D4u;
    // 7F0E80D4: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

label_7F0E80D8:
    ctx->pc = 0x7F0E80D8u;
    // 7F0E80D8: addi    r0, r4, -25824
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25824);

label_7F0E80DC:
    ctx->pc = 0x7F0E80DCu;
    // 7F0E80DC: stw     r0, -1744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0E80E0:
    ctx->pc = 0x7F0E80E0u;
    // 7F0E80E0: b       0x7F0E80F4
    {
            ctx->pc = 0x7F0E80F4u;
            return;
    }

label_7F0E80E4:
    ctx->pc = 0x7F0E80E4u;
    ctx->downcount -= 2;
    // 7F0E80E4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F0E80E8:
    ctx->pc = 0x7F0E80E8u;
    // 7F0E80E8: lis     r3, 32587
    ctx->gpr[3] = ((u32)(s32)(32587) << 16);

    ctx->pc = 0x7F0E80ECu;
    return;
return_dispatch_7F0E40EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0E4128u: goto label_7F0E4128;
    case 0x7F0E41B0u: goto label_7F0E41B0;
    case 0x7F0E427Cu: goto label_7F0E427C;
    case 0x7F0E42B4u: goto label_7F0E42B4;
    case 0x7F0E42D0u: goto label_7F0E42D0;
    case 0x7F0E42F0u: goto label_7F0E42F0;
    case 0x7F0E4334u: goto label_7F0E4334;
    case 0x7F0E4344u: goto label_7F0E4344;
    case 0x7F0E4354u: goto label_7F0E4354;
    case 0x7F0E4364u: goto label_7F0E4364;
    case 0x7F0E437Cu: goto label_7F0E437C;
    case 0x7F0E438Cu: goto label_7F0E438C;
    case 0x7F0E43B8u: goto label_7F0E43B8;
    case 0x7F0E43C0u: goto label_7F0E43C0;
    case 0x7F0E4454u: goto label_7F0E4454;
    case 0x7F0E445Cu: goto label_7F0E445C;
    case 0x7F0E4470u: goto label_7F0E4470;
    case 0x7F0E447Cu: goto label_7F0E447C;
    case 0x7F0E4484u: goto label_7F0E4484;
    case 0x7F0E4498u: goto label_7F0E4498;
    case 0x7F0E44A0u: goto label_7F0E44A0;
    case 0x7F0E4504u: goto label_7F0E4504;
    case 0x7F0E4538u: goto label_7F0E4538;
    case 0x7F0E4550u: goto label_7F0E4550;
    case 0x7F0E455Cu: goto label_7F0E455C;
    case 0x7F0E456Cu: goto label_7F0E456C;
    case 0x7F0E4578u: goto label_7F0E4578;
    case 0x7F0E4584u: goto label_7F0E4584;
    case 0x7F0E4590u: goto label_7F0E4590;
    case 0x7F0E45A4u: goto label_7F0E45A4;
    case 0x7F0E45BCu: goto label_7F0E45BC;
    case 0x7F0E45C4u: goto label_7F0E45C4;
    case 0x7F0E45CCu: goto label_7F0E45CC;
    case 0x7F0E45E4u: goto label_7F0E45E4;
    case 0x7F0E4604u: goto label_7F0E4604;
    case 0x7F0E461Cu: goto label_7F0E461C;
    case 0x7F0E4628u: goto label_7F0E4628;
    case 0x7F0E4634u: goto label_7F0E4634;
    case 0x7F0E4658u: goto label_7F0E4658;
    case 0x7F0E4664u: goto label_7F0E4664;
    case 0x7F0E469Cu: goto label_7F0E469C;
    case 0x7F0E46A8u: goto label_7F0E46A8;
    case 0x7F0E46B8u: goto label_7F0E46B8;
    case 0x7F0E46E0u: goto label_7F0E46E0;
    case 0x7F0E46ECu: goto label_7F0E46EC;
    case 0x7F0E46F4u: goto label_7F0E46F4;
    case 0x7F0E46FCu: goto label_7F0E46FC;
    case 0x7F0E4728u: goto label_7F0E4728;
    case 0x7F0E4744u: goto label_7F0E4744;
    case 0x7F0E4768u: goto label_7F0E4768;
    case 0x7F0E4778u: goto label_7F0E4778;
    case 0x7F0E4790u: goto label_7F0E4790;
    case 0x7F0E479Cu: goto label_7F0E479C;
    case 0x7F0E47E0u: goto label_7F0E47E0;
    case 0x7F0E47E8u: goto label_7F0E47E8;
    case 0x7F0E47F0u: goto label_7F0E47F0;
    case 0x7F0E47F8u: goto label_7F0E47F8;
    case 0x7F0E4800u: goto label_7F0E4800;
    case 0x7F0E4808u: goto label_7F0E4808;
    case 0x7F0E4848u: goto label_7F0E4848;
    case 0x7F0E4864u: goto label_7F0E4864;
    case 0x7F0E48A0u: goto label_7F0E48A0;
    case 0x7F0E48B0u: goto label_7F0E48B0;
    case 0x7F0E48F8u: goto label_7F0E48F8;
    case 0x7F0E490Cu: goto label_7F0E490C;
    case 0x7F0E491Cu: goto label_7F0E491C;
    case 0x7F0E4958u: goto label_7F0E4958;
    case 0x7F0E4960u: goto label_7F0E4960;
    case 0x7F0E4968u: goto label_7F0E4968;
    case 0x7F0E497Cu: goto label_7F0E497C;
    case 0x7F0E49A4u: goto label_7F0E49A4;
    case 0x7F0E4AD4u: goto label_7F0E4AD4;
    case 0x7F0E4AE8u: goto label_7F0E4AE8;
    case 0x7F0E4B1Cu: goto label_7F0E4B1C;
    case 0x7F0E4B38u: goto label_7F0E4B38;
    case 0x7F0E4B94u: goto label_7F0E4B94;
    case 0x7F0E4B9Cu: goto label_7F0E4B9C;
    case 0x7F0E4BBCu: goto label_7F0E4BBC;
    case 0x7F0E4BF4u: goto label_7F0E4BF4;
    case 0x7F0E4C30u: goto label_7F0E4C30;
    case 0x7F0E4C4Cu: goto label_7F0E4C4C;
    case 0x7F0E4C68u: goto label_7F0E4C68;
    case 0x7F0E4CCCu: goto label_7F0E4CCC;
    case 0x7F0E4D58u: goto label_7F0E4D58;
    case 0x7F0E4D6Cu: goto label_7F0E4D6C;
    case 0x7F0E4D80u: goto label_7F0E4D80;
    case 0x7F0E4D8Cu: goto label_7F0E4D8C;
    case 0x7F0E4D94u: goto label_7F0E4D94;
    case 0x7F0E4D9Cu: goto label_7F0E4D9C;
    case 0x7F0E4DA8u: goto label_7F0E4DA8;
    case 0x7F0E4DB4u: goto label_7F0E4DB4;
    case 0x7F0E4DC0u: goto label_7F0E4DC0;
    case 0x7F0E4DC8u: goto label_7F0E4DC8;
    case 0x7F0E4DECu: goto label_7F0E4DEC;
    case 0x7F0E4DFCu: goto label_7F0E4DFC;
    case 0x7F0E4E0Cu: goto label_7F0E4E0C;
    case 0x7F0E4E14u: goto label_7F0E4E14;
    case 0x7F0E4E1Cu: goto label_7F0E4E1C;
    case 0x7F0E4E30u: goto label_7F0E4E30;
    case 0x7F0E4E54u: goto label_7F0E4E54;
    case 0x7F0E4E90u: goto label_7F0E4E90;
    case 0x7F0E4E98u: goto label_7F0E4E98;
    case 0x7F0E4EA8u: goto label_7F0E4EA8;
    case 0x7F0E4EC8u: goto label_7F0E4EC8;
    case 0x7F0E4F04u: goto label_7F0E4F04;
    case 0x7F0E4F14u: goto label_7F0E4F14;
    case 0x7F0E4F34u: goto label_7F0E4F34;
    case 0x7F0E4F3Cu: goto label_7F0E4F3C;
    case 0x7F0E4F70u: goto label_7F0E4F70;
    case 0x7F0E4FB0u: goto label_7F0E4FB0;
    case 0x7F0E4FC0u: goto label_7F0E4FC0;
    case 0x7F0E4FC8u: goto label_7F0E4FC8;
    case 0x7F0E4FE4u: goto label_7F0E4FE4;
    case 0x7F0E4FFCu: goto label_7F0E4FFC;
    case 0x7F0E5044u: goto label_7F0E5044;
    case 0x7F0E504Cu: goto label_7F0E504C;
    case 0x7F0E505Cu: goto label_7F0E505C;
    case 0x7F0E5064u: goto label_7F0E5064;
    case 0x7F0E5084u: goto label_7F0E5084;
    case 0x7F0E50A0u: goto label_7F0E50A0;
    case 0x7F0E50E8u: goto label_7F0E50E8;
    case 0x7F0E5108u: goto label_7F0E5108;
    case 0x7F0E5118u: goto label_7F0E5118;
    case 0x7F0E5120u: goto label_7F0E5120;
    case 0x7F0E5130u: goto label_7F0E5130;
    case 0x7F0E5150u: goto label_7F0E5150;
    case 0x7F0E5180u: goto label_7F0E5180;
    case 0x7F0E5194u: goto label_7F0E5194;
    case 0x7F0E51D4u: goto label_7F0E51D4;
    case 0x7F0E51ECu: goto label_7F0E51EC;
    case 0x7F0E51F8u: goto label_7F0E51F8;
    case 0x7F0E5214u: goto label_7F0E5214;
    case 0x7F0E522Cu: goto label_7F0E522C;
    case 0x7F0E5250u: goto label_7F0E5250;
    case 0x7F0E52F4u: goto label_7F0E52F4;
    case 0x7F0E533Cu: goto label_7F0E533C;
    case 0x7F0E537Cu: goto label_7F0E537C;
    case 0x7F0E5388u: goto label_7F0E5388;
    case 0x7F0E5390u: goto label_7F0E5390;
    case 0x7F0E5398u: goto label_7F0E5398;
    case 0x7F0E53B0u: goto label_7F0E53B0;
    case 0x7F0E53BCu: goto label_7F0E53BC;
    case 0x7F0E5424u: goto label_7F0E5424;
    case 0x7F0E5440u: goto label_7F0E5440;
    case 0x7F0E544Cu: goto label_7F0E544C;
    case 0x7F0E54A0u: goto label_7F0E54A0;
    case 0x7F0E54BCu: goto label_7F0E54BC;
    case 0x7F0E54C8u: goto label_7F0E54C8;
    case 0x7F0E5510u: goto label_7F0E5510;
    case 0x7F0E5530u: goto label_7F0E5530;
    case 0x7F0E5540u: goto label_7F0E5540;
    case 0x7F0E5560u: goto label_7F0E5560;
    case 0x7F0E5570u: goto label_7F0E5570;
    case 0x7F0E5590u: goto label_7F0E5590;
    case 0x7F0E5698u: goto label_7F0E5698;
    case 0x7F0E56ACu: goto label_7F0E56AC;
    case 0x7F0E56E8u: goto label_7F0E56E8;
    case 0x7F0E56F0u: goto label_7F0E56F0;
    case 0x7F0E572Cu: goto label_7F0E572C;
    case 0x7F0E5740u: goto label_7F0E5740;
    case 0x7F0E5764u: goto label_7F0E5764;
    case 0x7F0E5884u: goto label_7F0E5884;
    case 0x7F0E58B4u: goto label_7F0E58B4;
    case 0x7F0E58C4u: goto label_7F0E58C4;
    case 0x7F0E58D4u: goto label_7F0E58D4;
    case 0x7F0E58F0u: goto label_7F0E58F0;
    case 0x7F0E5960u: goto label_7F0E5960;
    case 0x7F0E5984u: goto label_7F0E5984;
    case 0x7F0E59E0u: goto label_7F0E59E0;
    case 0x7F0E5ABCu: goto label_7F0E5ABC;
    case 0x7F0E5AF4u: goto label_7F0E5AF4;
    case 0x7F0E5B04u: goto label_7F0E5B04;
    case 0x7F0E5B34u: goto label_7F0E5B34;
    case 0x7F0E5B4Cu: goto label_7F0E5B4C;
    case 0x7F0E5B64u: goto label_7F0E5B64;
    case 0x7F0E5B8Cu: goto label_7F0E5B8C;
    case 0x7F0E5BF0u: goto label_7F0E5BF0;
    case 0x7F0E5C30u: goto label_7F0E5C30;
    case 0x7F0E5C58u: goto label_7F0E5C58;
    case 0x7F0E5C70u: goto label_7F0E5C70;
    case 0x7F0E5C7Cu: goto label_7F0E5C7C;
    case 0x7F0E5CF0u: goto label_7F0E5CF0;
    case 0x7F0E5D0Cu: goto label_7F0E5D0C;
    case 0x7F0E5D58u: goto label_7F0E5D58;
    case 0x7F0E5DC8u: goto label_7F0E5DC8;
    case 0x7F0E5DF0u: goto label_7F0E5DF0;
    case 0x7F0E607Cu: goto label_7F0E607C;
    case 0x7F0E60A4u: goto label_7F0E60A4;
    case 0x7F0E60E8u: goto label_7F0E60E8;
    case 0x7F0E60ECu: goto label_7F0E60EC;
    case 0x7F0E6120u: goto label_7F0E6120;
    case 0x7F0E616Cu: goto label_7F0E616C;
    case 0x7F0E617Cu: goto label_7F0E617C;
    case 0x7F0E6180u: goto label_7F0E6180;
    case 0x7F0E61CCu: goto label_7F0E61CC;
    case 0x7F0E61E4u: goto label_7F0E61E4;
    case 0x7F0E620Cu: goto label_7F0E620C;
    case 0x7F0E6210u: goto label_7F0E6210;
    case 0x7F0E622Cu: goto label_7F0E622C;
    case 0x7F0E6264u: goto label_7F0E6264;
    case 0x7F0E628Cu: goto label_7F0E628C;
    case 0x7F0E62D0u: goto label_7F0E62D0;
    case 0x7F0E62D4u: goto label_7F0E62D4;
    case 0x7F0E6320u: goto label_7F0E6320;
    case 0x7F0E6338u: goto label_7F0E6338;
    case 0x7F0E6360u: goto label_7F0E6360;
    case 0x7F0E6364u: goto label_7F0E6364;
    case 0x7F0E6380u: goto label_7F0E6380;
    case 0x7F0E63B0u: goto label_7F0E63B0;
    case 0x7F0E63DCu: goto label_7F0E63DC;
    case 0x7F0E6420u: goto label_7F0E6420;
    case 0x7F0E6424u: goto label_7F0E6424;
    case 0x7F0E6440u: goto label_7F0E6440;
    case 0x7F0E6474u: goto label_7F0E6474;
    case 0x7F0E6484u: goto label_7F0E6484;
    case 0x7F0E6488u: goto label_7F0E6488;
    case 0x7F0E64D4u: goto label_7F0E64D4;
    case 0x7F0E64ECu: goto label_7F0E64EC;
    case 0x7F0E6514u: goto label_7F0E6514;
    case 0x7F0E653Cu: goto label_7F0E653C;
    case 0x7F0E6580u: goto label_7F0E6580;
    case 0x7F0E6584u: goto label_7F0E6584;
    case 0x7F0E65A0u: goto label_7F0E65A0;
    case 0x7F0E65D4u: goto label_7F0E65D4;
    case 0x7F0E65E4u: goto label_7F0E65E4;
    case 0x7F0E65E8u: goto label_7F0E65E8;
    case 0x7F0E6634u: goto label_7F0E6634;
    case 0x7F0E664Cu: goto label_7F0E664C;
    case 0x7F0E6674u: goto label_7F0E6674;
    case 0x7F0E6678u: goto label_7F0E6678;
    case 0x7F0E6694u: goto label_7F0E6694;
    case 0x7F0E6788u: goto label_7F0E6788;
    case 0x7F0E67A0u: goto label_7F0E67A0;
    case 0x7F0E67C4u: goto label_7F0E67C4;
    case 0x7F0E67E0u: goto label_7F0E67E0;
    case 0x7F0E67E8u: goto label_7F0E67E8;
    case 0x7F0E6808u: goto label_7F0E6808;
    case 0x7F0E681Cu: goto label_7F0E681C;
    case 0x7F0E6830u: goto label_7F0E6830;
    case 0x7F0E6844u: goto label_7F0E6844;
    case 0x7F0E685Cu: goto label_7F0E685C;
    case 0x7F0E68A0u: goto label_7F0E68A0;
    case 0x7F0E68C4u: goto label_7F0E68C4;
    case 0x7F0E68D0u: goto label_7F0E68D0;
    case 0x7F0E6940u: goto label_7F0E6940;
    case 0x7F0E6948u: goto label_7F0E6948;
    case 0x7F0E6950u: goto label_7F0E6950;
    case 0x7F0E6980u: goto label_7F0E6980;
    case 0x7F0E69C0u: goto label_7F0E69C0;
    case 0x7F0E69DCu: goto label_7F0E69DC;
    case 0x7F0E6A10u: goto label_7F0E6A10;
    case 0x7F0E6A20u: goto label_7F0E6A20;
    case 0x7F0E6A38u: goto label_7F0E6A38;
    case 0x7F0E6A84u: goto label_7F0E6A84;
    case 0x7F0E6BA8u: goto label_7F0E6BA8;
    case 0x7F0E6C0Cu: goto label_7F0E6C0C;
    case 0x7F0E6D94u: goto label_7F0E6D94;
    case 0x7F0E6DA4u: goto label_7F0E6DA4;
    case 0x7F0E6DC8u: goto label_7F0E6DC8;
    case 0x7F0E6DF8u: goto label_7F0E6DF8;
    case 0x7F0E6E00u: goto label_7F0E6E00;
    case 0x7F0E6F28u: goto label_7F0E6F28;
    case 0x7F0E6F38u: goto label_7F0E6F38;
    case 0x7F0E6F58u: goto label_7F0E6F58;
    case 0x7F0E6F68u: goto label_7F0E6F68;
    case 0x7F0E6F9Cu: goto label_7F0E6F9C;
    case 0x7F0E70B4u: goto label_7F0E70B4;
    case 0x7F0E70C4u: goto label_7F0E70C4;
    case 0x7F0E70E4u: goto label_7F0E70E4;
    case 0x7F0E70F4u: goto label_7F0E70F4;
    case 0x7F0E711Cu: goto label_7F0E711C;
    case 0x7F0E7240u: goto label_7F0E7240;
    case 0x7F0E7250u: goto label_7F0E7250;
    case 0x7F0E7270u: goto label_7F0E7270;
    case 0x7F0E7280u: goto label_7F0E7280;
    case 0x7F0E72A8u: goto label_7F0E72A8;
    case 0x7F0E7308u: goto label_7F0E7308;
    case 0x7F0E7318u: goto label_7F0E7318;
    case 0x7F0E7338u: goto label_7F0E7338;
    case 0x7F0E7348u: goto label_7F0E7348;
    case 0x7F0E735Cu: goto label_7F0E735C;
    case 0x7F0E73ACu: goto label_7F0E73AC;
    case 0x7F0E73BCu: goto label_7F0E73BC;
    case 0x7F0E73D0u: goto label_7F0E73D0;
    case 0x7F0E73D8u: goto label_7F0E73D8;
    case 0x7F0E73F8u: goto label_7F0E73F8;
    case 0x7F0E7404u: goto label_7F0E7404;
    case 0x7F0E740Cu: goto label_7F0E740C;
    case 0x7F0E7470u: goto label_7F0E7470;
    case 0x7F0E748Cu: goto label_7F0E748C;
    case 0x7F0E749Cu: goto label_7F0E749C;
    case 0x7F0E74BCu: goto label_7F0E74BC;
    case 0x7F0E74C4u: goto label_7F0E74C4;
    case 0x7F0E74D4u: goto label_7F0E74D4;
    case 0x7F0E7554u: goto label_7F0E7554;
    case 0x7F0E75A0u: goto label_7F0E75A0;
    case 0x7F0E75ACu: goto label_7F0E75AC;
    case 0x7F0E75C8u: goto label_7F0E75C8;
    case 0x7F0E75D4u: goto label_7F0E75D4;
    case 0x7F0E75F8u: goto label_7F0E75F8;
    case 0x7F0E7618u: goto label_7F0E7618;
    case 0x7F0E7638u: goto label_7F0E7638;
    case 0x7F0E7644u: goto label_7F0E7644;
    case 0x7F0E765Cu: goto label_7F0E765C;
    case 0x7F0E7668u: goto label_7F0E7668;
    case 0x7F0E76A8u: goto label_7F0E76A8;
    case 0x7F0E76B8u: goto label_7F0E76B8;
    case 0x7F0E7794u: goto label_7F0E7794;
    case 0x7F0E77A0u: goto label_7F0E77A0;
    case 0x7F0E77FCu: goto label_7F0E77FC;
    case 0x7F0E7800u: goto label_7F0E7800;
    case 0x7F0E7814u: goto label_7F0E7814;
    case 0x7F0E7818u: goto label_7F0E7818;
    case 0x7F0E782Cu: goto label_7F0E782C;
    case 0x7F0E783Cu: goto label_7F0E783C;
    case 0x7F0E78E8u: goto label_7F0E78E8;
    case 0x7F0E78F4u: goto label_7F0E78F4;
    case 0x7F0E794Cu: goto label_7F0E794C;
    case 0x7F0E7964u: goto label_7F0E7964;
    case 0x7F0E79ECu: goto label_7F0E79EC;
    case 0x7F0E79F8u: goto label_7F0E79F8;
    case 0x7F0E7A18u: goto label_7F0E7A18;
    case 0x7F0E7A24u: goto label_7F0E7A24;
    case 0x7F0E7A44u: goto label_7F0E7A44;
    case 0x7F0E7A50u: goto label_7F0E7A50;
    case 0x7F0E7A64u: goto label_7F0E7A64;
    case 0x7F0E7A70u: goto label_7F0E7A70;
    case 0x7F0E7A88u: goto label_7F0E7A88;
    case 0x7F0E7A94u: goto label_7F0E7A94;
    case 0x7F0E7AB4u: goto label_7F0E7AB4;
    case 0x7F0E7AC0u: goto label_7F0E7AC0;
    case 0x7F0E7AD4u: goto label_7F0E7AD4;
    case 0x7F0E7AE0u: goto label_7F0E7AE0;
    case 0x7F0E7B2Cu: goto label_7F0E7B2C;
    case 0x7F0E7B38u: goto label_7F0E7B38;
    case 0x7F0E7B60u: goto label_7F0E7B60;
    case 0x7F0E7B6Cu: goto label_7F0E7B6C;
    case 0x7F0E7B88u: goto label_7F0E7B88;
    case 0x7F0E7B94u: goto label_7F0E7B94;
    case 0x7F0E7BACu: goto label_7F0E7BAC;
    case 0x7F0E7BB8u: goto label_7F0E7BB8;
    case 0x7F0E7C18u: goto label_7F0E7C18;
    case 0x7F0E7C2Cu: goto label_7F0E7C2C;
    case 0x7F0E7C40u: goto label_7F0E7C40;
    case 0x7F0E7C4Cu: goto label_7F0E7C4C;
    case 0x7F0E7CBCu: goto label_7F0E7CBC;
    case 0x7F0E7CC8u: goto label_7F0E7CC8;
    case 0x7F0E7D1Cu: goto label_7F0E7D1C;
    case 0x7F0E7D58u: goto label_7F0E7D58;
    case 0x7F0E7D9Cu: goto label_7F0E7D9C;
    case 0x7F0E7DB0u: goto label_7F0E7DB0;
    case 0x7F0E7DC0u: goto label_7F0E7DC0;
    case 0x7F0E7DF0u: goto label_7F0E7DF0;
    case 0x7F0E7E14u: goto label_7F0E7E14;
    case 0x7F0E7E24u: goto label_7F0E7E24;
    case 0x7F0E7E50u: goto label_7F0E7E50;
    case 0x7F0E7E60u: goto label_7F0E7E60;
    case 0x7F0E7EFCu: goto label_7F0E7EFC;
    case 0x7F0E7F20u: goto label_7F0E7F20;
    case 0x7F0E7F3Cu: goto label_7F0E7F3C;
    case 0x7F0E7F54u: goto label_7F0E7F54;
    case 0x7F0E8014u: goto label_7F0E8014;
    default: return;
    }
}

