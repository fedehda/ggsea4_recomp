// DolRecomp output
#include "../generated.h"

static void loop_7F234264(CPUState* ctx) {
label_7F234264:
    ctx->downcount -= 5;
    ctx->pc = 0x7F234264u;
    // 7F234264: stb     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    // 7F234268: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    ctx->pc = 0x7F23426Cu;
    // 7F23426C: stb     r4, 77(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(77);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F234270u;
    // 7F234270: stb     r4, 78(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(78);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F234274u;
    // 7F234274: stb     r3, 79(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(79);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F234278u;
    // 7F234278: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F23427C: cmpw    r5, r0
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

    // 7F234280: bc    12, 0, 0x7F234264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234264u;
                return;
            }
            goto label_7F234264;
        }
    }

    ctx->pc = 0x7F234284u;
}

static void loop_7F236760(CPUState* ctx) {
label_7F236760:
    ctx->downcount -= 12;
    ctx->pc = 0x7F236760u;
    // 7F236760: sth     r8, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    ctx->pc = 0x7F236764u;
    // 7F236764: sth     r8, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    ctx->pc = 0x7F236768u;
    // 7F236768: sth     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    ctx->pc = 0x7F23676Cu;
    // 7F23676C: sth     r7, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    ctx->pc = 0x7F236770u;
    // 7F236770: sth     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F236774u;
    // 7F236774: sth     r6, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F236778u;
    // 7F236778: stb     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    ctx->pc = 0x7F23677Cu;
    // 7F23677C: stb     r5, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    ctx->pc = 0x7F236780u;
    // 7F236780: stb     r4, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F236784u;
    // 7F236784: stb     r3, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F236788: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

    // 7F23678C: bc    16, 0, 0x7F236760
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236760u;
                return;
            }
            goto label_7F236760;
        }
    }

    ctx->pc = 0x7F236790u;
}

static void loop_7F2376A0(CPUState* ctx) {
label_7F2376A0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2376A0u;
    // 7F2376A0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2376A4u;
    // 7F2376A4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2376A8u;
    // 7F2376A8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2376ACu;
    // 7F2376AC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 7F2376B0: bc    16, 0, 0x7F2376A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2376A0u;
                return;
            }
            goto label_7F2376A0;
        }
    }

    ctx->pc = 0x7F2376B4u;
}

static void loop_7F2377D0(CPUState* ctx) {
label_7F2377D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2377D0u;
    // 7F2377D0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2377D4u;
    // 7F2377D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2377D8u;
    // 7F2377D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2377DCu;
    // 7F2377DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2377E0: bc    16, 0, 0x7F2377D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2377D0u;
                return;
            }
            goto label_7F2377D0;
        }
    }

    ctx->pc = 0x7F2377E4u;
}

static void loop_7F237C58(CPUState* ctx) {
label_7F237C58:
    ctx->downcount -= 5;
    ctx->pc = 0x7F237C58u;
    // 7F237C58: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F237C5Cu;
    // 7F237C5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F237C60u;
    // 7F237C60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F237C64u;
    // 7F237C64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F237C68: bc    16, 0, 0x7F237C58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237C58u;
                return;
            }
            goto label_7F237C58;
        }
    }

    ctx->pc = 0x7F237C6Cu;
}

static void loop_7F237DF4(CPUState* ctx) {
label_7F237DF4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F237DF4u;
    // 7F237DF4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F237DF8u;
    // 7F237DF8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F237DFCu;
    // 7F237DFC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F237E00u;
    // 7F237E00: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F237E04: bc    16, 0, 0x7F237DF4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237DF4u;
                return;
            }
            goto label_7F237DF4;
        }
    }

    ctx->pc = 0x7F237E08u;
}

void func_7F2340EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2340ECu: goto label_7F2340EC;
    case 0x7F2340F0u: goto label_7F2340F0;
    case 0x7F2340F4u: goto label_7F2340F4;
    case 0x7F2340F8u: goto label_7F2340F8;
    case 0x7F2340FCu: goto label_7F2340FC;
    case 0x7F234100u: goto label_7F234100;
    case 0x7F234104u: goto label_7F234104;
    case 0x7F234108u: goto label_7F234108;
    case 0x7F23410Cu: goto label_7F23410C;
    case 0x7F234110u: goto label_7F234110;
    case 0x7F234114u: goto label_7F234114;
    case 0x7F234118u: goto label_7F234118;
    case 0x7F23411Cu: goto label_7F23411C;
    case 0x7F234120u: goto label_7F234120;
    case 0x7F234124u: goto label_7F234124;
    case 0x7F234128u: goto label_7F234128;
    case 0x7F23412Cu: goto label_7F23412C;
    case 0x7F234130u: goto label_7F234130;
    case 0x7F234134u: goto label_7F234134;
    case 0x7F234138u: goto label_7F234138;
    case 0x7F23413Cu: goto label_7F23413C;
    case 0x7F234140u: goto label_7F234140;
    case 0x7F234144u: goto label_7F234144;
    case 0x7F234148u: goto label_7F234148;
    case 0x7F23414Cu: goto label_7F23414C;
    case 0x7F234150u: goto label_7F234150;
    case 0x7F234154u: goto label_7F234154;
    case 0x7F234158u: goto label_7F234158;
    case 0x7F23415Cu: goto label_7F23415C;
    case 0x7F234160u: goto label_7F234160;
    case 0x7F234164u: goto label_7F234164;
    case 0x7F234168u: goto label_7F234168;
    case 0x7F23416Cu: goto label_7F23416C;
    case 0x7F234170u: goto label_7F234170;
    case 0x7F234174u: goto label_7F234174;
    case 0x7F234178u: goto label_7F234178;
    case 0x7F23417Cu: goto label_7F23417C;
    case 0x7F234180u: goto label_7F234180;
    case 0x7F234184u: goto label_7F234184;
    case 0x7F234188u: goto label_7F234188;
    case 0x7F23418Cu: goto label_7F23418C;
    case 0x7F234190u: goto label_7F234190;
    case 0x7F234194u: goto label_7F234194;
    case 0x7F234198u: goto label_7F234198;
    case 0x7F23419Cu: goto label_7F23419C;
    case 0x7F2341A0u: goto label_7F2341A0;
    case 0x7F2341A4u: goto label_7F2341A4;
    case 0x7F2341A8u: goto label_7F2341A8;
    case 0x7F2341ACu: goto label_7F2341AC;
    case 0x7F2341B0u: goto label_7F2341B0;
    case 0x7F2341B4u: goto label_7F2341B4;
    case 0x7F2341B8u: goto label_7F2341B8;
    case 0x7F2341BCu: goto label_7F2341BC;
    case 0x7F2341C0u: goto label_7F2341C0;
    case 0x7F2341C4u: goto label_7F2341C4;
    case 0x7F2341C8u: goto label_7F2341C8;
    case 0x7F2341CCu: goto label_7F2341CC;
    case 0x7F2341D0u: goto label_7F2341D0;
    case 0x7F2341D4u: goto label_7F2341D4;
    case 0x7F2341D8u: goto label_7F2341D8;
    case 0x7F2341DCu: goto label_7F2341DC;
    case 0x7F2341E0u: goto label_7F2341E0;
    case 0x7F2341E4u: goto label_7F2341E4;
    case 0x7F2341E8u: goto label_7F2341E8;
    case 0x7F2341ECu: goto label_7F2341EC;
    case 0x7F2341F0u: goto label_7F2341F0;
    case 0x7F2341F4u: goto label_7F2341F4;
    case 0x7F2341F8u: goto label_7F2341F8;
    case 0x7F2341FCu: goto label_7F2341FC;
    case 0x7F234200u: goto label_7F234200;
    case 0x7F234204u: goto label_7F234204;
    case 0x7F234208u: goto label_7F234208;
    case 0x7F23420Cu: goto label_7F23420C;
    case 0x7F234210u: goto label_7F234210;
    case 0x7F234214u: goto label_7F234214;
    case 0x7F234218u: goto label_7F234218;
    case 0x7F23421Cu: goto label_7F23421C;
    case 0x7F234220u: goto label_7F234220;
    case 0x7F234224u: goto label_7F234224;
    case 0x7F234228u: goto label_7F234228;
    case 0x7F23422Cu: goto label_7F23422C;
    case 0x7F234230u: goto label_7F234230;
    case 0x7F234234u: goto label_7F234234;
    case 0x7F234238u: goto label_7F234238;
    case 0x7F23423Cu: goto label_7F23423C;
    case 0x7F234240u: goto label_7F234240;
    case 0x7F234244u: goto label_7F234244;
    case 0x7F234248u: goto label_7F234248;
    case 0x7F23424Cu: goto label_7F23424C;
    case 0x7F234250u: goto label_7F234250;
    case 0x7F234254u: goto label_7F234254;
    case 0x7F234258u: goto label_7F234258;
    case 0x7F23425Cu: goto label_7F23425C;
    case 0x7F234260u: goto label_7F234260;
    case 0x7F234264u: goto label_7F234264;
    case 0x7F234268u: goto label_7F234268;
    case 0x7F23426Cu: goto label_7F23426C;
    case 0x7F234270u: goto label_7F234270;
    case 0x7F234274u: goto label_7F234274;
    case 0x7F234278u: goto label_7F234278;
    case 0x7F23427Cu: goto label_7F23427C;
    case 0x7F234280u: goto label_7F234280;
    case 0x7F234284u: goto label_7F234284;
    case 0x7F234288u: goto label_7F234288;
    case 0x7F23428Cu: goto label_7F23428C;
    case 0x7F234290u: goto label_7F234290;
    case 0x7F234294u: goto label_7F234294;
    case 0x7F234298u: goto label_7F234298;
    case 0x7F23429Cu: goto label_7F23429C;
    case 0x7F2342A0u: goto label_7F2342A0;
    case 0x7F2342A4u: goto label_7F2342A4;
    case 0x7F2342A8u: goto label_7F2342A8;
    case 0x7F2342ACu: goto label_7F2342AC;
    case 0x7F2342B0u: goto label_7F2342B0;
    case 0x7F2342B4u: goto label_7F2342B4;
    case 0x7F2342B8u: goto label_7F2342B8;
    case 0x7F2342BCu: goto label_7F2342BC;
    case 0x7F2342C0u: goto label_7F2342C0;
    case 0x7F2342C4u: goto label_7F2342C4;
    case 0x7F2342C8u: goto label_7F2342C8;
    case 0x7F2342CCu: goto label_7F2342CC;
    case 0x7F2342D0u: goto label_7F2342D0;
    case 0x7F2342D4u: goto label_7F2342D4;
    case 0x7F2342D8u: goto label_7F2342D8;
    case 0x7F2342DCu: goto label_7F2342DC;
    case 0x7F2342E0u: goto label_7F2342E0;
    case 0x7F2342E4u: goto label_7F2342E4;
    case 0x7F2342E8u: goto label_7F2342E8;
    case 0x7F2342ECu: goto label_7F2342EC;
    case 0x7F2342F0u: goto label_7F2342F0;
    case 0x7F2342F4u: goto label_7F2342F4;
    case 0x7F2342F8u: goto label_7F2342F8;
    case 0x7F2342FCu: goto label_7F2342FC;
    case 0x7F234300u: goto label_7F234300;
    case 0x7F234304u: goto label_7F234304;
    case 0x7F234308u: goto label_7F234308;
    case 0x7F23430Cu: goto label_7F23430C;
    case 0x7F234310u: goto label_7F234310;
    case 0x7F234314u: goto label_7F234314;
    case 0x7F234318u: goto label_7F234318;
    case 0x7F23431Cu: goto label_7F23431C;
    case 0x7F234320u: goto label_7F234320;
    case 0x7F234324u: goto label_7F234324;
    case 0x7F234328u: goto label_7F234328;
    case 0x7F23432Cu: goto label_7F23432C;
    case 0x7F234330u: goto label_7F234330;
    case 0x7F234334u: goto label_7F234334;
    case 0x7F234338u: goto label_7F234338;
    case 0x7F23433Cu: goto label_7F23433C;
    case 0x7F234340u: goto label_7F234340;
    case 0x7F234344u: goto label_7F234344;
    case 0x7F234348u: goto label_7F234348;
    case 0x7F23434Cu: goto label_7F23434C;
    case 0x7F234350u: goto label_7F234350;
    case 0x7F234354u: goto label_7F234354;
    case 0x7F234358u: goto label_7F234358;
    case 0x7F23435Cu: goto label_7F23435C;
    case 0x7F234360u: goto label_7F234360;
    case 0x7F234364u: goto label_7F234364;
    case 0x7F234368u: goto label_7F234368;
    case 0x7F23436Cu: goto label_7F23436C;
    case 0x7F234370u: goto label_7F234370;
    case 0x7F234374u: goto label_7F234374;
    case 0x7F234378u: goto label_7F234378;
    case 0x7F23437Cu: goto label_7F23437C;
    case 0x7F234380u: goto label_7F234380;
    case 0x7F234384u: goto label_7F234384;
    case 0x7F234388u: goto label_7F234388;
    case 0x7F23438Cu: goto label_7F23438C;
    case 0x7F234390u: goto label_7F234390;
    case 0x7F234394u: goto label_7F234394;
    case 0x7F234398u: goto label_7F234398;
    case 0x7F23439Cu: goto label_7F23439C;
    case 0x7F2343A0u: goto label_7F2343A0;
    case 0x7F2343A4u: goto label_7F2343A4;
    case 0x7F2343A8u: goto label_7F2343A8;
    case 0x7F2343ACu: goto label_7F2343AC;
    case 0x7F2343B0u: goto label_7F2343B0;
    case 0x7F2343B4u: goto label_7F2343B4;
    case 0x7F2343B8u: goto label_7F2343B8;
    case 0x7F2343BCu: goto label_7F2343BC;
    case 0x7F2343C0u: goto label_7F2343C0;
    case 0x7F2343C4u: goto label_7F2343C4;
    case 0x7F2343C8u: goto label_7F2343C8;
    case 0x7F2343CCu: goto label_7F2343CC;
    case 0x7F2343D0u: goto label_7F2343D0;
    case 0x7F2343D4u: goto label_7F2343D4;
    case 0x7F2343D8u: goto label_7F2343D8;
    case 0x7F2343DCu: goto label_7F2343DC;
    case 0x7F2343E0u: goto label_7F2343E0;
    case 0x7F2343E4u: goto label_7F2343E4;
    case 0x7F2343E8u: goto label_7F2343E8;
    case 0x7F2343ECu: goto label_7F2343EC;
    case 0x7F2343F0u: goto label_7F2343F0;
    case 0x7F2343F4u: goto label_7F2343F4;
    case 0x7F2343F8u: goto label_7F2343F8;
    case 0x7F2343FCu: goto label_7F2343FC;
    case 0x7F234400u: goto label_7F234400;
    case 0x7F234404u: goto label_7F234404;
    case 0x7F234408u: goto label_7F234408;
    case 0x7F23440Cu: goto label_7F23440C;
    case 0x7F234410u: goto label_7F234410;
    case 0x7F234414u: goto label_7F234414;
    case 0x7F234418u: goto label_7F234418;
    case 0x7F23441Cu: goto label_7F23441C;
    case 0x7F234420u: goto label_7F234420;
    case 0x7F234424u: goto label_7F234424;
    case 0x7F234428u: goto label_7F234428;
    case 0x7F23442Cu: goto label_7F23442C;
    case 0x7F234430u: goto label_7F234430;
    case 0x7F234434u: goto label_7F234434;
    case 0x7F234438u: goto label_7F234438;
    case 0x7F23443Cu: goto label_7F23443C;
    case 0x7F234440u: goto label_7F234440;
    case 0x7F234444u: goto label_7F234444;
    case 0x7F234448u: goto label_7F234448;
    case 0x7F23444Cu: goto label_7F23444C;
    case 0x7F234450u: goto label_7F234450;
    case 0x7F234454u: goto label_7F234454;
    case 0x7F234458u: goto label_7F234458;
    case 0x7F23445Cu: goto label_7F23445C;
    case 0x7F234460u: goto label_7F234460;
    case 0x7F234464u: goto label_7F234464;
    case 0x7F234468u: goto label_7F234468;
    case 0x7F23446Cu: goto label_7F23446C;
    case 0x7F234470u: goto label_7F234470;
    case 0x7F234474u: goto label_7F234474;
    case 0x7F234478u: goto label_7F234478;
    case 0x7F23447Cu: goto label_7F23447C;
    case 0x7F234480u: goto label_7F234480;
    case 0x7F234484u: goto label_7F234484;
    case 0x7F234488u: goto label_7F234488;
    case 0x7F23448Cu: goto label_7F23448C;
    case 0x7F234490u: goto label_7F234490;
    case 0x7F234494u: goto label_7F234494;
    case 0x7F234498u: goto label_7F234498;
    case 0x7F23449Cu: goto label_7F23449C;
    case 0x7F2344A0u: goto label_7F2344A0;
    case 0x7F2344A4u: goto label_7F2344A4;
    case 0x7F2344A8u: goto label_7F2344A8;
    case 0x7F2344ACu: goto label_7F2344AC;
    case 0x7F2344B0u: goto label_7F2344B0;
    case 0x7F2344B4u: goto label_7F2344B4;
    case 0x7F2344B8u: goto label_7F2344B8;
    case 0x7F2344BCu: goto label_7F2344BC;
    case 0x7F2344C0u: goto label_7F2344C0;
    case 0x7F2344C4u: goto label_7F2344C4;
    case 0x7F2344C8u: goto label_7F2344C8;
    case 0x7F2344CCu: goto label_7F2344CC;
    case 0x7F2344D0u: goto label_7F2344D0;
    case 0x7F2344D4u: goto label_7F2344D4;
    case 0x7F2344D8u: goto label_7F2344D8;
    case 0x7F2344DCu: goto label_7F2344DC;
    case 0x7F2344E0u: goto label_7F2344E0;
    case 0x7F2344E4u: goto label_7F2344E4;
    case 0x7F2344E8u: goto label_7F2344E8;
    case 0x7F2344ECu: goto label_7F2344EC;
    case 0x7F2344F0u: goto label_7F2344F0;
    case 0x7F2344F4u: goto label_7F2344F4;
    case 0x7F2344F8u: goto label_7F2344F8;
    case 0x7F2344FCu: goto label_7F2344FC;
    case 0x7F234500u: goto label_7F234500;
    case 0x7F234504u: goto label_7F234504;
    case 0x7F234508u: goto label_7F234508;
    case 0x7F23450Cu: goto label_7F23450C;
    case 0x7F234510u: goto label_7F234510;
    case 0x7F234514u: goto label_7F234514;
    case 0x7F234518u: goto label_7F234518;
    case 0x7F23451Cu: goto label_7F23451C;
    case 0x7F234520u: goto label_7F234520;
    case 0x7F234524u: goto label_7F234524;
    case 0x7F234528u: goto label_7F234528;
    case 0x7F23452Cu: goto label_7F23452C;
    case 0x7F234530u: goto label_7F234530;
    case 0x7F234534u: goto label_7F234534;
    case 0x7F234538u: goto label_7F234538;
    case 0x7F23453Cu: goto label_7F23453C;
    case 0x7F234540u: goto label_7F234540;
    case 0x7F234544u: goto label_7F234544;
    case 0x7F234548u: goto label_7F234548;
    case 0x7F23454Cu: goto label_7F23454C;
    case 0x7F234550u: goto label_7F234550;
    case 0x7F234554u: goto label_7F234554;
    case 0x7F234558u: goto label_7F234558;
    case 0x7F23455Cu: goto label_7F23455C;
    case 0x7F234560u: goto label_7F234560;
    case 0x7F234564u: goto label_7F234564;
    case 0x7F234568u: goto label_7F234568;
    case 0x7F23456Cu: goto label_7F23456C;
    case 0x7F234570u: goto label_7F234570;
    case 0x7F234574u: goto label_7F234574;
    case 0x7F234578u: goto label_7F234578;
    case 0x7F23457Cu: goto label_7F23457C;
    case 0x7F234580u: goto label_7F234580;
    case 0x7F234584u: goto label_7F234584;
    case 0x7F234588u: goto label_7F234588;
    case 0x7F23458Cu: goto label_7F23458C;
    case 0x7F234590u: goto label_7F234590;
    case 0x7F234594u: goto label_7F234594;
    case 0x7F234598u: goto label_7F234598;
    case 0x7F23459Cu: goto label_7F23459C;
    case 0x7F2345A0u: goto label_7F2345A0;
    case 0x7F2345A4u: goto label_7F2345A4;
    case 0x7F2345A8u: goto label_7F2345A8;
    case 0x7F2345ACu: goto label_7F2345AC;
    case 0x7F2345B0u: goto label_7F2345B0;
    case 0x7F2345B4u: goto label_7F2345B4;
    case 0x7F2345B8u: goto label_7F2345B8;
    case 0x7F2345BCu: goto label_7F2345BC;
    case 0x7F2345C0u: goto label_7F2345C0;
    case 0x7F2345C4u: goto label_7F2345C4;
    case 0x7F2345C8u: goto label_7F2345C8;
    case 0x7F2345CCu: goto label_7F2345CC;
    case 0x7F2345D0u: goto label_7F2345D0;
    case 0x7F2345D4u: goto label_7F2345D4;
    case 0x7F2345D8u: goto label_7F2345D8;
    case 0x7F2345DCu: goto label_7F2345DC;
    case 0x7F2345E0u: goto label_7F2345E0;
    case 0x7F2345E4u: goto label_7F2345E4;
    case 0x7F2345E8u: goto label_7F2345E8;
    case 0x7F2345ECu: goto label_7F2345EC;
    case 0x7F2345F0u: goto label_7F2345F0;
    case 0x7F2345F4u: goto label_7F2345F4;
    case 0x7F2345F8u: goto label_7F2345F8;
    case 0x7F2345FCu: goto label_7F2345FC;
    case 0x7F234600u: goto label_7F234600;
    case 0x7F234604u: goto label_7F234604;
    case 0x7F234608u: goto label_7F234608;
    case 0x7F23460Cu: goto label_7F23460C;
    case 0x7F234610u: goto label_7F234610;
    case 0x7F234614u: goto label_7F234614;
    case 0x7F234618u: goto label_7F234618;
    case 0x7F23461Cu: goto label_7F23461C;
    case 0x7F234620u: goto label_7F234620;
    case 0x7F234624u: goto label_7F234624;
    case 0x7F234628u: goto label_7F234628;
    case 0x7F23462Cu: goto label_7F23462C;
    case 0x7F234630u: goto label_7F234630;
    case 0x7F234634u: goto label_7F234634;
    case 0x7F234638u: goto label_7F234638;
    case 0x7F23463Cu: goto label_7F23463C;
    case 0x7F234640u: goto label_7F234640;
    case 0x7F234644u: goto label_7F234644;
    case 0x7F234648u: goto label_7F234648;
    case 0x7F23464Cu: goto label_7F23464C;
    case 0x7F234650u: goto label_7F234650;
    case 0x7F234654u: goto label_7F234654;
    case 0x7F234658u: goto label_7F234658;
    case 0x7F23465Cu: goto label_7F23465C;
    case 0x7F234660u: goto label_7F234660;
    case 0x7F234664u: goto label_7F234664;
    case 0x7F234668u: goto label_7F234668;
    case 0x7F23466Cu: goto label_7F23466C;
    case 0x7F234670u: goto label_7F234670;
    case 0x7F234674u: goto label_7F234674;
    case 0x7F234678u: goto label_7F234678;
    case 0x7F23467Cu: goto label_7F23467C;
    case 0x7F234680u: goto label_7F234680;
    case 0x7F234684u: goto label_7F234684;
    case 0x7F234688u: goto label_7F234688;
    case 0x7F23468Cu: goto label_7F23468C;
    case 0x7F234690u: goto label_7F234690;
    case 0x7F234694u: goto label_7F234694;
    case 0x7F234698u: goto label_7F234698;
    case 0x7F23469Cu: goto label_7F23469C;
    case 0x7F2346A0u: goto label_7F2346A0;
    case 0x7F2346A4u: goto label_7F2346A4;
    case 0x7F2346A8u: goto label_7F2346A8;
    case 0x7F2346ACu: goto label_7F2346AC;
    case 0x7F2346B0u: goto label_7F2346B0;
    case 0x7F2346B4u: goto label_7F2346B4;
    case 0x7F2346B8u: goto label_7F2346B8;
    case 0x7F2346BCu: goto label_7F2346BC;
    case 0x7F2346C0u: goto label_7F2346C0;
    case 0x7F2346C4u: goto label_7F2346C4;
    case 0x7F2346C8u: goto label_7F2346C8;
    case 0x7F2346CCu: goto label_7F2346CC;
    case 0x7F2346D0u: goto label_7F2346D0;
    case 0x7F2346D4u: goto label_7F2346D4;
    case 0x7F2346D8u: goto label_7F2346D8;
    case 0x7F2346DCu: goto label_7F2346DC;
    case 0x7F2346E0u: goto label_7F2346E0;
    case 0x7F2346E4u: goto label_7F2346E4;
    case 0x7F2346E8u: goto label_7F2346E8;
    case 0x7F2346ECu: goto label_7F2346EC;
    case 0x7F2346F0u: goto label_7F2346F0;
    case 0x7F2346F4u: goto label_7F2346F4;
    case 0x7F2346F8u: goto label_7F2346F8;
    case 0x7F2346FCu: goto label_7F2346FC;
    case 0x7F234700u: goto label_7F234700;
    case 0x7F234704u: goto label_7F234704;
    case 0x7F234708u: goto label_7F234708;
    case 0x7F23470Cu: goto label_7F23470C;
    case 0x7F234710u: goto label_7F234710;
    case 0x7F234714u: goto label_7F234714;
    case 0x7F234718u: goto label_7F234718;
    case 0x7F23471Cu: goto label_7F23471C;
    case 0x7F234720u: goto label_7F234720;
    case 0x7F234724u: goto label_7F234724;
    case 0x7F234728u: goto label_7F234728;
    case 0x7F23472Cu: goto label_7F23472C;
    case 0x7F234730u: goto label_7F234730;
    case 0x7F234734u: goto label_7F234734;
    case 0x7F234738u: goto label_7F234738;
    case 0x7F23473Cu: goto label_7F23473C;
    case 0x7F234740u: goto label_7F234740;
    case 0x7F234744u: goto label_7F234744;
    case 0x7F234748u: goto label_7F234748;
    case 0x7F23474Cu: goto label_7F23474C;
    case 0x7F234750u: goto label_7F234750;
    case 0x7F234754u: goto label_7F234754;
    case 0x7F234758u: goto label_7F234758;
    case 0x7F23475Cu: goto label_7F23475C;
    case 0x7F234760u: goto label_7F234760;
    case 0x7F234764u: goto label_7F234764;
    case 0x7F234768u: goto label_7F234768;
    case 0x7F23476Cu: goto label_7F23476C;
    case 0x7F234770u: goto label_7F234770;
    case 0x7F234774u: goto label_7F234774;
    case 0x7F234778u: goto label_7F234778;
    case 0x7F23477Cu: goto label_7F23477C;
    case 0x7F234780u: goto label_7F234780;
    case 0x7F234784u: goto label_7F234784;
    case 0x7F234788u: goto label_7F234788;
    case 0x7F23478Cu: goto label_7F23478C;
    case 0x7F234790u: goto label_7F234790;
    case 0x7F234794u: goto label_7F234794;
    case 0x7F234798u: goto label_7F234798;
    case 0x7F23479Cu: goto label_7F23479C;
    case 0x7F2347A0u: goto label_7F2347A0;
    case 0x7F2347A4u: goto label_7F2347A4;
    case 0x7F2347A8u: goto label_7F2347A8;
    case 0x7F2347ACu: goto label_7F2347AC;
    case 0x7F2347B0u: goto label_7F2347B0;
    case 0x7F2347B4u: goto label_7F2347B4;
    case 0x7F2347B8u: goto label_7F2347B8;
    case 0x7F2347BCu: goto label_7F2347BC;
    case 0x7F2347C0u: goto label_7F2347C0;
    case 0x7F2347C4u: goto label_7F2347C4;
    case 0x7F2347C8u: goto label_7F2347C8;
    case 0x7F2347CCu: goto label_7F2347CC;
    case 0x7F2347D0u: goto label_7F2347D0;
    case 0x7F2347D4u: goto label_7F2347D4;
    case 0x7F2347D8u: goto label_7F2347D8;
    case 0x7F2347DCu: goto label_7F2347DC;
    case 0x7F2347E0u: goto label_7F2347E0;
    case 0x7F2347E4u: goto label_7F2347E4;
    case 0x7F2347E8u: goto label_7F2347E8;
    case 0x7F2347ECu: goto label_7F2347EC;
    case 0x7F2347F0u: goto label_7F2347F0;
    case 0x7F2347F4u: goto label_7F2347F4;
    case 0x7F2347F8u: goto label_7F2347F8;
    case 0x7F2347FCu: goto label_7F2347FC;
    case 0x7F234800u: goto label_7F234800;
    case 0x7F234804u: goto label_7F234804;
    case 0x7F234808u: goto label_7F234808;
    case 0x7F23480Cu: goto label_7F23480C;
    case 0x7F234810u: goto label_7F234810;
    case 0x7F234814u: goto label_7F234814;
    case 0x7F234818u: goto label_7F234818;
    case 0x7F23481Cu: goto label_7F23481C;
    case 0x7F234820u: goto label_7F234820;
    case 0x7F234824u: goto label_7F234824;
    case 0x7F234828u: goto label_7F234828;
    case 0x7F23482Cu: goto label_7F23482C;
    case 0x7F234830u: goto label_7F234830;
    case 0x7F234834u: goto label_7F234834;
    case 0x7F234838u: goto label_7F234838;
    case 0x7F23483Cu: goto label_7F23483C;
    case 0x7F234840u: goto label_7F234840;
    case 0x7F234844u: goto label_7F234844;
    case 0x7F234848u: goto label_7F234848;
    case 0x7F23484Cu: goto label_7F23484C;
    case 0x7F234850u: goto label_7F234850;
    case 0x7F234854u: goto label_7F234854;
    case 0x7F234858u: goto label_7F234858;
    case 0x7F23485Cu: goto label_7F23485C;
    case 0x7F234860u: goto label_7F234860;
    case 0x7F234864u: goto label_7F234864;
    case 0x7F234868u: goto label_7F234868;
    case 0x7F23486Cu: goto label_7F23486C;
    case 0x7F234870u: goto label_7F234870;
    case 0x7F234874u: goto label_7F234874;
    case 0x7F234878u: goto label_7F234878;
    case 0x7F23487Cu: goto label_7F23487C;
    case 0x7F234880u: goto label_7F234880;
    case 0x7F234884u: goto label_7F234884;
    case 0x7F234888u: goto label_7F234888;
    case 0x7F23488Cu: goto label_7F23488C;
    case 0x7F234890u: goto label_7F234890;
    case 0x7F234894u: goto label_7F234894;
    case 0x7F234898u: goto label_7F234898;
    case 0x7F23489Cu: goto label_7F23489C;
    case 0x7F2348A0u: goto label_7F2348A0;
    case 0x7F2348A4u: goto label_7F2348A4;
    case 0x7F2348A8u: goto label_7F2348A8;
    case 0x7F2348ACu: goto label_7F2348AC;
    case 0x7F2348B0u: goto label_7F2348B0;
    case 0x7F2348B4u: goto label_7F2348B4;
    case 0x7F2348B8u: goto label_7F2348B8;
    case 0x7F2348BCu: goto label_7F2348BC;
    case 0x7F2348C0u: goto label_7F2348C0;
    case 0x7F2348C4u: goto label_7F2348C4;
    case 0x7F2348C8u: goto label_7F2348C8;
    case 0x7F2348CCu: goto label_7F2348CC;
    case 0x7F2348D0u: goto label_7F2348D0;
    case 0x7F2348D4u: goto label_7F2348D4;
    case 0x7F2348D8u: goto label_7F2348D8;
    case 0x7F2348DCu: goto label_7F2348DC;
    case 0x7F2348E0u: goto label_7F2348E0;
    case 0x7F2348E4u: goto label_7F2348E4;
    case 0x7F2348E8u: goto label_7F2348E8;
    case 0x7F2348ECu: goto label_7F2348EC;
    case 0x7F2348F0u: goto label_7F2348F0;
    case 0x7F2348F4u: goto label_7F2348F4;
    case 0x7F2348F8u: goto label_7F2348F8;
    case 0x7F2348FCu: goto label_7F2348FC;
    case 0x7F234900u: goto label_7F234900;
    case 0x7F234904u: goto label_7F234904;
    case 0x7F234908u: goto label_7F234908;
    case 0x7F23490Cu: goto label_7F23490C;
    case 0x7F234910u: goto label_7F234910;
    case 0x7F234914u: goto label_7F234914;
    case 0x7F234918u: goto label_7F234918;
    case 0x7F23491Cu: goto label_7F23491C;
    case 0x7F234920u: goto label_7F234920;
    case 0x7F234924u: goto label_7F234924;
    case 0x7F234928u: goto label_7F234928;
    case 0x7F23492Cu: goto label_7F23492C;
    case 0x7F234930u: goto label_7F234930;
    case 0x7F234934u: goto label_7F234934;
    case 0x7F234938u: goto label_7F234938;
    case 0x7F23493Cu: goto label_7F23493C;
    case 0x7F234940u: goto label_7F234940;
    case 0x7F234944u: goto label_7F234944;
    case 0x7F234948u: goto label_7F234948;
    case 0x7F23494Cu: goto label_7F23494C;
    case 0x7F234950u: goto label_7F234950;
    case 0x7F234954u: goto label_7F234954;
    case 0x7F234958u: goto label_7F234958;
    case 0x7F23495Cu: goto label_7F23495C;
    case 0x7F234960u: goto label_7F234960;
    case 0x7F234964u: goto label_7F234964;
    case 0x7F234968u: goto label_7F234968;
    case 0x7F23496Cu: goto label_7F23496C;
    case 0x7F234970u: goto label_7F234970;
    case 0x7F234974u: goto label_7F234974;
    case 0x7F234978u: goto label_7F234978;
    case 0x7F23497Cu: goto label_7F23497C;
    case 0x7F234980u: goto label_7F234980;
    case 0x7F234984u: goto label_7F234984;
    case 0x7F234988u: goto label_7F234988;
    case 0x7F23498Cu: goto label_7F23498C;
    case 0x7F234990u: goto label_7F234990;
    case 0x7F234994u: goto label_7F234994;
    case 0x7F234998u: goto label_7F234998;
    case 0x7F23499Cu: goto label_7F23499C;
    case 0x7F2349A0u: goto label_7F2349A0;
    case 0x7F2349A4u: goto label_7F2349A4;
    case 0x7F2349A8u: goto label_7F2349A8;
    case 0x7F2349ACu: goto label_7F2349AC;
    case 0x7F2349B0u: goto label_7F2349B0;
    case 0x7F2349B4u: goto label_7F2349B4;
    case 0x7F2349B8u: goto label_7F2349B8;
    case 0x7F2349BCu: goto label_7F2349BC;
    case 0x7F2349C0u: goto label_7F2349C0;
    case 0x7F2349C4u: goto label_7F2349C4;
    case 0x7F2349C8u: goto label_7F2349C8;
    case 0x7F2349CCu: goto label_7F2349CC;
    case 0x7F2349D0u: goto label_7F2349D0;
    case 0x7F2349D4u: goto label_7F2349D4;
    case 0x7F2349D8u: goto label_7F2349D8;
    case 0x7F2349DCu: goto label_7F2349DC;
    case 0x7F2349E0u: goto label_7F2349E0;
    case 0x7F2349E4u: goto label_7F2349E4;
    case 0x7F2349E8u: goto label_7F2349E8;
    case 0x7F2349ECu: goto label_7F2349EC;
    case 0x7F2349F0u: goto label_7F2349F0;
    case 0x7F2349F4u: goto label_7F2349F4;
    case 0x7F2349F8u: goto label_7F2349F8;
    case 0x7F2349FCu: goto label_7F2349FC;
    case 0x7F234A00u: goto label_7F234A00;
    case 0x7F234A04u: goto label_7F234A04;
    case 0x7F234A08u: goto label_7F234A08;
    case 0x7F234A0Cu: goto label_7F234A0C;
    case 0x7F234A10u: goto label_7F234A10;
    case 0x7F234A14u: goto label_7F234A14;
    case 0x7F234A18u: goto label_7F234A18;
    case 0x7F234A1Cu: goto label_7F234A1C;
    case 0x7F234A20u: goto label_7F234A20;
    case 0x7F234A24u: goto label_7F234A24;
    case 0x7F234A28u: goto label_7F234A28;
    case 0x7F234A2Cu: goto label_7F234A2C;
    case 0x7F234A30u: goto label_7F234A30;
    case 0x7F234A34u: goto label_7F234A34;
    case 0x7F234A38u: goto label_7F234A38;
    case 0x7F234A3Cu: goto label_7F234A3C;
    case 0x7F234A40u: goto label_7F234A40;
    case 0x7F234A44u: goto label_7F234A44;
    case 0x7F234A48u: goto label_7F234A48;
    case 0x7F234A4Cu: goto label_7F234A4C;
    case 0x7F234A50u: goto label_7F234A50;
    case 0x7F234A54u: goto label_7F234A54;
    case 0x7F234A58u: goto label_7F234A58;
    case 0x7F234A5Cu: goto label_7F234A5C;
    case 0x7F234A60u: goto label_7F234A60;
    case 0x7F234A64u: goto label_7F234A64;
    case 0x7F234A68u: goto label_7F234A68;
    case 0x7F234A6Cu: goto label_7F234A6C;
    case 0x7F234A70u: goto label_7F234A70;
    case 0x7F234A74u: goto label_7F234A74;
    case 0x7F234A78u: goto label_7F234A78;
    case 0x7F234A7Cu: goto label_7F234A7C;
    case 0x7F234A80u: goto label_7F234A80;
    case 0x7F234A84u: goto label_7F234A84;
    case 0x7F234A88u: goto label_7F234A88;
    case 0x7F234A8Cu: goto label_7F234A8C;
    case 0x7F234A90u: goto label_7F234A90;
    case 0x7F234A94u: goto label_7F234A94;
    case 0x7F234A98u: goto label_7F234A98;
    case 0x7F234A9Cu: goto label_7F234A9C;
    case 0x7F234AA0u: goto label_7F234AA0;
    case 0x7F234AA4u: goto label_7F234AA4;
    case 0x7F234AA8u: goto label_7F234AA8;
    case 0x7F234AACu: goto label_7F234AAC;
    case 0x7F234AB0u: goto label_7F234AB0;
    case 0x7F234AB4u: goto label_7F234AB4;
    case 0x7F234AB8u: goto label_7F234AB8;
    case 0x7F234ABCu: goto label_7F234ABC;
    case 0x7F234AC0u: goto label_7F234AC0;
    case 0x7F234AC4u: goto label_7F234AC4;
    case 0x7F234AC8u: goto label_7F234AC8;
    case 0x7F234ACCu: goto label_7F234ACC;
    case 0x7F234AD0u: goto label_7F234AD0;
    case 0x7F234AD4u: goto label_7F234AD4;
    case 0x7F234AD8u: goto label_7F234AD8;
    case 0x7F234ADCu: goto label_7F234ADC;
    case 0x7F234AE0u: goto label_7F234AE0;
    case 0x7F234AE4u: goto label_7F234AE4;
    case 0x7F234AE8u: goto label_7F234AE8;
    case 0x7F234AECu: goto label_7F234AEC;
    case 0x7F234AF0u: goto label_7F234AF0;
    case 0x7F234AF4u: goto label_7F234AF4;
    case 0x7F234AF8u: goto label_7F234AF8;
    case 0x7F234AFCu: goto label_7F234AFC;
    case 0x7F234B00u: goto label_7F234B00;
    case 0x7F234B04u: goto label_7F234B04;
    case 0x7F234B08u: goto label_7F234B08;
    case 0x7F234B0Cu: goto label_7F234B0C;
    case 0x7F234B10u: goto label_7F234B10;
    case 0x7F234B14u: goto label_7F234B14;
    case 0x7F234B18u: goto label_7F234B18;
    case 0x7F234B1Cu: goto label_7F234B1C;
    case 0x7F234B20u: goto label_7F234B20;
    case 0x7F234B24u: goto label_7F234B24;
    case 0x7F234B28u: goto label_7F234B28;
    case 0x7F234B2Cu: goto label_7F234B2C;
    case 0x7F234B30u: goto label_7F234B30;
    case 0x7F234B34u: goto label_7F234B34;
    case 0x7F234B38u: goto label_7F234B38;
    case 0x7F234B3Cu: goto label_7F234B3C;
    case 0x7F234B40u: goto label_7F234B40;
    case 0x7F234B44u: goto label_7F234B44;
    case 0x7F234B48u: goto label_7F234B48;
    case 0x7F234B4Cu: goto label_7F234B4C;
    case 0x7F234B50u: goto label_7F234B50;
    case 0x7F234B54u: goto label_7F234B54;
    case 0x7F234B58u: goto label_7F234B58;
    case 0x7F234B5Cu: goto label_7F234B5C;
    case 0x7F234B60u: goto label_7F234B60;
    case 0x7F234B64u: goto label_7F234B64;
    case 0x7F234B68u: goto label_7F234B68;
    case 0x7F234B6Cu: goto label_7F234B6C;
    case 0x7F234B70u: goto label_7F234B70;
    case 0x7F234B74u: goto label_7F234B74;
    case 0x7F234B78u: goto label_7F234B78;
    case 0x7F234B7Cu: goto label_7F234B7C;
    case 0x7F234B80u: goto label_7F234B80;
    case 0x7F234B84u: goto label_7F234B84;
    case 0x7F234B88u: goto label_7F234B88;
    case 0x7F234B8Cu: goto label_7F234B8C;
    case 0x7F234B90u: goto label_7F234B90;
    case 0x7F234B94u: goto label_7F234B94;
    case 0x7F234B98u: goto label_7F234B98;
    case 0x7F234B9Cu: goto label_7F234B9C;
    case 0x7F234BA0u: goto label_7F234BA0;
    case 0x7F234BA4u: goto label_7F234BA4;
    case 0x7F234BA8u: goto label_7F234BA8;
    case 0x7F234BACu: goto label_7F234BAC;
    case 0x7F234BB0u: goto label_7F234BB0;
    case 0x7F234BB4u: goto label_7F234BB4;
    case 0x7F234BB8u: goto label_7F234BB8;
    case 0x7F234BBCu: goto label_7F234BBC;
    case 0x7F234BC0u: goto label_7F234BC0;
    case 0x7F234BC4u: goto label_7F234BC4;
    case 0x7F234BC8u: goto label_7F234BC8;
    case 0x7F234BCCu: goto label_7F234BCC;
    case 0x7F234BD0u: goto label_7F234BD0;
    case 0x7F234BD4u: goto label_7F234BD4;
    case 0x7F234BD8u: goto label_7F234BD8;
    case 0x7F234BDCu: goto label_7F234BDC;
    case 0x7F234BE0u: goto label_7F234BE0;
    case 0x7F234BE4u: goto label_7F234BE4;
    case 0x7F234BE8u: goto label_7F234BE8;
    case 0x7F234BECu: goto label_7F234BEC;
    case 0x7F234BF0u: goto label_7F234BF0;
    case 0x7F234BF4u: goto label_7F234BF4;
    case 0x7F234BF8u: goto label_7F234BF8;
    case 0x7F234BFCu: goto label_7F234BFC;
    case 0x7F234C00u: goto label_7F234C00;
    case 0x7F234C04u: goto label_7F234C04;
    case 0x7F234C08u: goto label_7F234C08;
    case 0x7F234C0Cu: goto label_7F234C0C;
    case 0x7F234C10u: goto label_7F234C10;
    case 0x7F234C14u: goto label_7F234C14;
    case 0x7F234C18u: goto label_7F234C18;
    case 0x7F234C1Cu: goto label_7F234C1C;
    case 0x7F234C20u: goto label_7F234C20;
    case 0x7F234C24u: goto label_7F234C24;
    case 0x7F234C28u: goto label_7F234C28;
    case 0x7F234C2Cu: goto label_7F234C2C;
    case 0x7F234C30u: goto label_7F234C30;
    case 0x7F234C34u: goto label_7F234C34;
    case 0x7F234C38u: goto label_7F234C38;
    case 0x7F234C3Cu: goto label_7F234C3C;
    case 0x7F234C40u: goto label_7F234C40;
    case 0x7F234C44u: goto label_7F234C44;
    case 0x7F234C48u: goto label_7F234C48;
    case 0x7F234C4Cu: goto label_7F234C4C;
    case 0x7F234C50u: goto label_7F234C50;
    case 0x7F234C54u: goto label_7F234C54;
    case 0x7F234C58u: goto label_7F234C58;
    case 0x7F234C5Cu: goto label_7F234C5C;
    case 0x7F234C60u: goto label_7F234C60;
    case 0x7F234C64u: goto label_7F234C64;
    case 0x7F234C68u: goto label_7F234C68;
    case 0x7F234C6Cu: goto label_7F234C6C;
    case 0x7F234C70u: goto label_7F234C70;
    case 0x7F234C74u: goto label_7F234C74;
    case 0x7F234C78u: goto label_7F234C78;
    case 0x7F234C7Cu: goto label_7F234C7C;
    case 0x7F234C80u: goto label_7F234C80;
    case 0x7F234C84u: goto label_7F234C84;
    case 0x7F234C88u: goto label_7F234C88;
    case 0x7F234C8Cu: goto label_7F234C8C;
    case 0x7F234C90u: goto label_7F234C90;
    case 0x7F234C94u: goto label_7F234C94;
    case 0x7F234C98u: goto label_7F234C98;
    case 0x7F234C9Cu: goto label_7F234C9C;
    case 0x7F234CA0u: goto label_7F234CA0;
    case 0x7F234CA4u: goto label_7F234CA4;
    case 0x7F234CA8u: goto label_7F234CA8;
    case 0x7F234CACu: goto label_7F234CAC;
    case 0x7F234CB0u: goto label_7F234CB0;
    case 0x7F234CB4u: goto label_7F234CB4;
    case 0x7F234CB8u: goto label_7F234CB8;
    case 0x7F234CBCu: goto label_7F234CBC;
    case 0x7F234CC0u: goto label_7F234CC0;
    case 0x7F234CC4u: goto label_7F234CC4;
    case 0x7F234CC8u: goto label_7F234CC8;
    case 0x7F234CCCu: goto label_7F234CCC;
    case 0x7F234CD0u: goto label_7F234CD0;
    case 0x7F234CD4u: goto label_7F234CD4;
    case 0x7F234CD8u: goto label_7F234CD8;
    case 0x7F234CDCu: goto label_7F234CDC;
    case 0x7F234CE0u: goto label_7F234CE0;
    case 0x7F234CE4u: goto label_7F234CE4;
    case 0x7F234CE8u: goto label_7F234CE8;
    case 0x7F234CECu: goto label_7F234CEC;
    case 0x7F234CF0u: goto label_7F234CF0;
    case 0x7F234CF4u: goto label_7F234CF4;
    case 0x7F234CF8u: goto label_7F234CF8;
    case 0x7F234CFCu: goto label_7F234CFC;
    case 0x7F234D00u: goto label_7F234D00;
    case 0x7F234D04u: goto label_7F234D04;
    case 0x7F234D08u: goto label_7F234D08;
    case 0x7F234D0Cu: goto label_7F234D0C;
    case 0x7F234D10u: goto label_7F234D10;
    case 0x7F234D14u: goto label_7F234D14;
    case 0x7F234D18u: goto label_7F234D18;
    case 0x7F234D1Cu: goto label_7F234D1C;
    case 0x7F234D20u: goto label_7F234D20;
    case 0x7F234D24u: goto label_7F234D24;
    case 0x7F234D28u: goto label_7F234D28;
    case 0x7F234D2Cu: goto label_7F234D2C;
    case 0x7F234D30u: goto label_7F234D30;
    case 0x7F234D34u: goto label_7F234D34;
    case 0x7F234D38u: goto label_7F234D38;
    case 0x7F234D3Cu: goto label_7F234D3C;
    case 0x7F234D40u: goto label_7F234D40;
    case 0x7F234D44u: goto label_7F234D44;
    case 0x7F234D48u: goto label_7F234D48;
    case 0x7F234D4Cu: goto label_7F234D4C;
    case 0x7F234D50u: goto label_7F234D50;
    case 0x7F234D54u: goto label_7F234D54;
    case 0x7F234D58u: goto label_7F234D58;
    case 0x7F234D5Cu: goto label_7F234D5C;
    case 0x7F234D60u: goto label_7F234D60;
    case 0x7F234D64u: goto label_7F234D64;
    case 0x7F234D68u: goto label_7F234D68;
    case 0x7F234D6Cu: goto label_7F234D6C;
    case 0x7F234D70u: goto label_7F234D70;
    case 0x7F234D74u: goto label_7F234D74;
    case 0x7F234D78u: goto label_7F234D78;
    case 0x7F234D7Cu: goto label_7F234D7C;
    case 0x7F234D80u: goto label_7F234D80;
    case 0x7F234D84u: goto label_7F234D84;
    case 0x7F234D88u: goto label_7F234D88;
    case 0x7F234D8Cu: goto label_7F234D8C;
    case 0x7F234D90u: goto label_7F234D90;
    case 0x7F234D94u: goto label_7F234D94;
    case 0x7F234D98u: goto label_7F234D98;
    case 0x7F234D9Cu: goto label_7F234D9C;
    case 0x7F234DA0u: goto label_7F234DA0;
    case 0x7F234DA4u: goto label_7F234DA4;
    case 0x7F234DA8u: goto label_7F234DA8;
    case 0x7F234DACu: goto label_7F234DAC;
    case 0x7F234DB0u: goto label_7F234DB0;
    case 0x7F234DB4u: goto label_7F234DB4;
    case 0x7F234DB8u: goto label_7F234DB8;
    case 0x7F234DBCu: goto label_7F234DBC;
    case 0x7F234DC0u: goto label_7F234DC0;
    case 0x7F234DC4u: goto label_7F234DC4;
    case 0x7F234DC8u: goto label_7F234DC8;
    case 0x7F234DCCu: goto label_7F234DCC;
    case 0x7F234DD0u: goto label_7F234DD0;
    case 0x7F234DD4u: goto label_7F234DD4;
    case 0x7F234DD8u: goto label_7F234DD8;
    case 0x7F234DDCu: goto label_7F234DDC;
    case 0x7F234DE0u: goto label_7F234DE0;
    case 0x7F234DE4u: goto label_7F234DE4;
    case 0x7F234DE8u: goto label_7F234DE8;
    case 0x7F234DECu: goto label_7F234DEC;
    case 0x7F234DF0u: goto label_7F234DF0;
    case 0x7F234DF4u: goto label_7F234DF4;
    case 0x7F234DF8u: goto label_7F234DF8;
    case 0x7F234DFCu: goto label_7F234DFC;
    case 0x7F234E00u: goto label_7F234E00;
    case 0x7F234E04u: goto label_7F234E04;
    case 0x7F234E08u: goto label_7F234E08;
    case 0x7F234E0Cu: goto label_7F234E0C;
    case 0x7F234E10u: goto label_7F234E10;
    case 0x7F234E14u: goto label_7F234E14;
    case 0x7F234E18u: goto label_7F234E18;
    case 0x7F234E1Cu: goto label_7F234E1C;
    case 0x7F234E20u: goto label_7F234E20;
    case 0x7F234E24u: goto label_7F234E24;
    case 0x7F234E28u: goto label_7F234E28;
    case 0x7F234E2Cu: goto label_7F234E2C;
    case 0x7F234E30u: goto label_7F234E30;
    case 0x7F234E34u: goto label_7F234E34;
    case 0x7F234E38u: goto label_7F234E38;
    case 0x7F234E3Cu: goto label_7F234E3C;
    case 0x7F234E40u: goto label_7F234E40;
    case 0x7F234E44u: goto label_7F234E44;
    case 0x7F234E48u: goto label_7F234E48;
    case 0x7F234E4Cu: goto label_7F234E4C;
    case 0x7F234E50u: goto label_7F234E50;
    case 0x7F234E54u: goto label_7F234E54;
    case 0x7F234E58u: goto label_7F234E58;
    case 0x7F234E5Cu: goto label_7F234E5C;
    case 0x7F234E60u: goto label_7F234E60;
    case 0x7F234E64u: goto label_7F234E64;
    case 0x7F234E68u: goto label_7F234E68;
    case 0x7F234E6Cu: goto label_7F234E6C;
    case 0x7F234E70u: goto label_7F234E70;
    case 0x7F234E74u: goto label_7F234E74;
    case 0x7F234E78u: goto label_7F234E78;
    case 0x7F234E7Cu: goto label_7F234E7C;
    case 0x7F234E80u: goto label_7F234E80;
    case 0x7F234E84u: goto label_7F234E84;
    case 0x7F234E88u: goto label_7F234E88;
    case 0x7F234E8Cu: goto label_7F234E8C;
    case 0x7F234E90u: goto label_7F234E90;
    case 0x7F234E94u: goto label_7F234E94;
    case 0x7F234E98u: goto label_7F234E98;
    case 0x7F234E9Cu: goto label_7F234E9C;
    case 0x7F234EA0u: goto label_7F234EA0;
    case 0x7F234EA4u: goto label_7F234EA4;
    case 0x7F234EA8u: goto label_7F234EA8;
    case 0x7F234EACu: goto label_7F234EAC;
    case 0x7F234EB0u: goto label_7F234EB0;
    case 0x7F234EB4u: goto label_7F234EB4;
    case 0x7F234EB8u: goto label_7F234EB8;
    case 0x7F234EBCu: goto label_7F234EBC;
    case 0x7F234EC0u: goto label_7F234EC0;
    case 0x7F234EC4u: goto label_7F234EC4;
    case 0x7F234EC8u: goto label_7F234EC8;
    case 0x7F234ECCu: goto label_7F234ECC;
    case 0x7F234ED0u: goto label_7F234ED0;
    case 0x7F234ED4u: goto label_7F234ED4;
    case 0x7F234ED8u: goto label_7F234ED8;
    case 0x7F234EDCu: goto label_7F234EDC;
    case 0x7F234EE0u: goto label_7F234EE0;
    case 0x7F234EE4u: goto label_7F234EE4;
    case 0x7F234EE8u: goto label_7F234EE8;
    case 0x7F234EECu: goto label_7F234EEC;
    case 0x7F234EF0u: goto label_7F234EF0;
    case 0x7F234EF4u: goto label_7F234EF4;
    case 0x7F234EF8u: goto label_7F234EF8;
    case 0x7F234EFCu: goto label_7F234EFC;
    case 0x7F234F00u: goto label_7F234F00;
    case 0x7F234F04u: goto label_7F234F04;
    case 0x7F234F08u: goto label_7F234F08;
    case 0x7F234F0Cu: goto label_7F234F0C;
    case 0x7F234F10u: goto label_7F234F10;
    case 0x7F234F14u: goto label_7F234F14;
    case 0x7F234F18u: goto label_7F234F18;
    case 0x7F234F1Cu: goto label_7F234F1C;
    case 0x7F234F20u: goto label_7F234F20;
    case 0x7F234F24u: goto label_7F234F24;
    case 0x7F234F28u: goto label_7F234F28;
    case 0x7F234F2Cu: goto label_7F234F2C;
    case 0x7F234F30u: goto label_7F234F30;
    case 0x7F234F34u: goto label_7F234F34;
    case 0x7F234F38u: goto label_7F234F38;
    case 0x7F234F3Cu: goto label_7F234F3C;
    case 0x7F234F40u: goto label_7F234F40;
    case 0x7F234F44u: goto label_7F234F44;
    case 0x7F234F48u: goto label_7F234F48;
    case 0x7F234F4Cu: goto label_7F234F4C;
    case 0x7F234F50u: goto label_7F234F50;
    case 0x7F234F54u: goto label_7F234F54;
    case 0x7F234F58u: goto label_7F234F58;
    case 0x7F234F5Cu: goto label_7F234F5C;
    case 0x7F234F60u: goto label_7F234F60;
    case 0x7F234F64u: goto label_7F234F64;
    case 0x7F234F68u: goto label_7F234F68;
    case 0x7F234F6Cu: goto label_7F234F6C;
    case 0x7F234F70u: goto label_7F234F70;
    case 0x7F234F74u: goto label_7F234F74;
    case 0x7F234F78u: goto label_7F234F78;
    case 0x7F234F7Cu: goto label_7F234F7C;
    case 0x7F234F80u: goto label_7F234F80;
    case 0x7F234F84u: goto label_7F234F84;
    case 0x7F234F88u: goto label_7F234F88;
    case 0x7F234F8Cu: goto label_7F234F8C;
    case 0x7F234F90u: goto label_7F234F90;
    case 0x7F234F94u: goto label_7F234F94;
    case 0x7F234F98u: goto label_7F234F98;
    case 0x7F234F9Cu: goto label_7F234F9C;
    case 0x7F234FA0u: goto label_7F234FA0;
    case 0x7F234FA4u: goto label_7F234FA4;
    case 0x7F234FA8u: goto label_7F234FA8;
    case 0x7F234FACu: goto label_7F234FAC;
    case 0x7F234FB0u: goto label_7F234FB0;
    case 0x7F234FB4u: goto label_7F234FB4;
    case 0x7F234FB8u: goto label_7F234FB8;
    case 0x7F234FBCu: goto label_7F234FBC;
    case 0x7F234FC0u: goto label_7F234FC0;
    case 0x7F234FC4u: goto label_7F234FC4;
    case 0x7F234FC8u: goto label_7F234FC8;
    case 0x7F234FCCu: goto label_7F234FCC;
    case 0x7F234FD0u: goto label_7F234FD0;
    case 0x7F234FD4u: goto label_7F234FD4;
    case 0x7F234FD8u: goto label_7F234FD8;
    case 0x7F234FDCu: goto label_7F234FDC;
    case 0x7F234FE0u: goto label_7F234FE0;
    case 0x7F234FE4u: goto label_7F234FE4;
    case 0x7F234FE8u: goto label_7F234FE8;
    case 0x7F234FECu: goto label_7F234FEC;
    case 0x7F234FF0u: goto label_7F234FF0;
    case 0x7F234FF4u: goto label_7F234FF4;
    case 0x7F234FF8u: goto label_7F234FF8;
    case 0x7F234FFCu: goto label_7F234FFC;
    case 0x7F235000u: goto label_7F235000;
    case 0x7F235004u: goto label_7F235004;
    case 0x7F235008u: goto label_7F235008;
    case 0x7F23500Cu: goto label_7F23500C;
    case 0x7F235010u: goto label_7F235010;
    case 0x7F235014u: goto label_7F235014;
    case 0x7F235018u: goto label_7F235018;
    case 0x7F23501Cu: goto label_7F23501C;
    case 0x7F235020u: goto label_7F235020;
    case 0x7F235024u: goto label_7F235024;
    case 0x7F235028u: goto label_7F235028;
    case 0x7F23502Cu: goto label_7F23502C;
    case 0x7F235030u: goto label_7F235030;
    case 0x7F235034u: goto label_7F235034;
    case 0x7F235038u: goto label_7F235038;
    case 0x7F23503Cu: goto label_7F23503C;
    case 0x7F235040u: goto label_7F235040;
    case 0x7F235044u: goto label_7F235044;
    case 0x7F235048u: goto label_7F235048;
    case 0x7F23504Cu: goto label_7F23504C;
    case 0x7F235050u: goto label_7F235050;
    case 0x7F235054u: goto label_7F235054;
    case 0x7F235058u: goto label_7F235058;
    case 0x7F23505Cu: goto label_7F23505C;
    case 0x7F235060u: goto label_7F235060;
    case 0x7F235064u: goto label_7F235064;
    case 0x7F235068u: goto label_7F235068;
    case 0x7F23506Cu: goto label_7F23506C;
    case 0x7F235070u: goto label_7F235070;
    case 0x7F235074u: goto label_7F235074;
    case 0x7F235078u: goto label_7F235078;
    case 0x7F23507Cu: goto label_7F23507C;
    case 0x7F235080u: goto label_7F235080;
    case 0x7F235084u: goto label_7F235084;
    case 0x7F235088u: goto label_7F235088;
    case 0x7F23508Cu: goto label_7F23508C;
    case 0x7F235090u: goto label_7F235090;
    case 0x7F235094u: goto label_7F235094;
    case 0x7F235098u: goto label_7F235098;
    case 0x7F23509Cu: goto label_7F23509C;
    case 0x7F2350A0u: goto label_7F2350A0;
    case 0x7F2350A4u: goto label_7F2350A4;
    case 0x7F2350A8u: goto label_7F2350A8;
    case 0x7F2350ACu: goto label_7F2350AC;
    case 0x7F2350B0u: goto label_7F2350B0;
    case 0x7F2350B4u: goto label_7F2350B4;
    case 0x7F2350B8u: goto label_7F2350B8;
    case 0x7F2350BCu: goto label_7F2350BC;
    case 0x7F2350C0u: goto label_7F2350C0;
    case 0x7F2350C4u: goto label_7F2350C4;
    case 0x7F2350C8u: goto label_7F2350C8;
    case 0x7F2350CCu: goto label_7F2350CC;
    case 0x7F2350D0u: goto label_7F2350D0;
    case 0x7F2350D4u: goto label_7F2350D4;
    case 0x7F2350D8u: goto label_7F2350D8;
    case 0x7F2350DCu: goto label_7F2350DC;
    case 0x7F2350E0u: goto label_7F2350E0;
    case 0x7F2350E4u: goto label_7F2350E4;
    case 0x7F2350E8u: goto label_7F2350E8;
    case 0x7F2350ECu: goto label_7F2350EC;
    case 0x7F2350F0u: goto label_7F2350F0;
    case 0x7F2350F4u: goto label_7F2350F4;
    case 0x7F2350F8u: goto label_7F2350F8;
    case 0x7F2350FCu: goto label_7F2350FC;
    case 0x7F235100u: goto label_7F235100;
    case 0x7F235104u: goto label_7F235104;
    case 0x7F235108u: goto label_7F235108;
    case 0x7F23510Cu: goto label_7F23510C;
    case 0x7F235110u: goto label_7F235110;
    case 0x7F235114u: goto label_7F235114;
    case 0x7F235118u: goto label_7F235118;
    case 0x7F23511Cu: goto label_7F23511C;
    case 0x7F235120u: goto label_7F235120;
    case 0x7F235124u: goto label_7F235124;
    case 0x7F235128u: goto label_7F235128;
    case 0x7F23512Cu: goto label_7F23512C;
    case 0x7F235130u: goto label_7F235130;
    case 0x7F235134u: goto label_7F235134;
    case 0x7F235138u: goto label_7F235138;
    case 0x7F23513Cu: goto label_7F23513C;
    case 0x7F235140u: goto label_7F235140;
    case 0x7F235144u: goto label_7F235144;
    case 0x7F235148u: goto label_7F235148;
    case 0x7F23514Cu: goto label_7F23514C;
    case 0x7F235150u: goto label_7F235150;
    case 0x7F235154u: goto label_7F235154;
    case 0x7F235158u: goto label_7F235158;
    case 0x7F23515Cu: goto label_7F23515C;
    case 0x7F235160u: goto label_7F235160;
    case 0x7F235164u: goto label_7F235164;
    case 0x7F235168u: goto label_7F235168;
    case 0x7F23516Cu: goto label_7F23516C;
    case 0x7F235170u: goto label_7F235170;
    case 0x7F235174u: goto label_7F235174;
    case 0x7F235178u: goto label_7F235178;
    case 0x7F23517Cu: goto label_7F23517C;
    case 0x7F235180u: goto label_7F235180;
    case 0x7F235184u: goto label_7F235184;
    case 0x7F235188u: goto label_7F235188;
    case 0x7F23518Cu: goto label_7F23518C;
    case 0x7F235190u: goto label_7F235190;
    case 0x7F235194u: goto label_7F235194;
    case 0x7F235198u: goto label_7F235198;
    case 0x7F23519Cu: goto label_7F23519C;
    case 0x7F2351A0u: goto label_7F2351A0;
    case 0x7F2351A4u: goto label_7F2351A4;
    case 0x7F2351A8u: goto label_7F2351A8;
    case 0x7F2351ACu: goto label_7F2351AC;
    case 0x7F2351B0u: goto label_7F2351B0;
    case 0x7F2351B4u: goto label_7F2351B4;
    case 0x7F2351B8u: goto label_7F2351B8;
    case 0x7F2351BCu: goto label_7F2351BC;
    case 0x7F2351C0u: goto label_7F2351C0;
    case 0x7F2351C4u: goto label_7F2351C4;
    case 0x7F2351C8u: goto label_7F2351C8;
    case 0x7F2351CCu: goto label_7F2351CC;
    case 0x7F2351D0u: goto label_7F2351D0;
    case 0x7F2351D4u: goto label_7F2351D4;
    case 0x7F2351D8u: goto label_7F2351D8;
    case 0x7F2351DCu: goto label_7F2351DC;
    case 0x7F2351E0u: goto label_7F2351E0;
    case 0x7F2351E4u: goto label_7F2351E4;
    case 0x7F2351E8u: goto label_7F2351E8;
    case 0x7F2351ECu: goto label_7F2351EC;
    case 0x7F2351F0u: goto label_7F2351F0;
    case 0x7F2351F4u: goto label_7F2351F4;
    case 0x7F2351F8u: goto label_7F2351F8;
    case 0x7F2351FCu: goto label_7F2351FC;
    case 0x7F235200u: goto label_7F235200;
    case 0x7F235204u: goto label_7F235204;
    case 0x7F235208u: goto label_7F235208;
    case 0x7F23520Cu: goto label_7F23520C;
    case 0x7F235210u: goto label_7F235210;
    case 0x7F235214u: goto label_7F235214;
    case 0x7F235218u: goto label_7F235218;
    case 0x7F23521Cu: goto label_7F23521C;
    case 0x7F235220u: goto label_7F235220;
    case 0x7F235224u: goto label_7F235224;
    case 0x7F235228u: goto label_7F235228;
    case 0x7F23522Cu: goto label_7F23522C;
    case 0x7F235230u: goto label_7F235230;
    case 0x7F235234u: goto label_7F235234;
    case 0x7F235238u: goto label_7F235238;
    case 0x7F23523Cu: goto label_7F23523C;
    case 0x7F235240u: goto label_7F235240;
    case 0x7F235244u: goto label_7F235244;
    case 0x7F235248u: goto label_7F235248;
    case 0x7F23524Cu: goto label_7F23524C;
    case 0x7F235250u: goto label_7F235250;
    case 0x7F235254u: goto label_7F235254;
    case 0x7F235258u: goto label_7F235258;
    case 0x7F23525Cu: goto label_7F23525C;
    case 0x7F235260u: goto label_7F235260;
    case 0x7F235264u: goto label_7F235264;
    case 0x7F235268u: goto label_7F235268;
    case 0x7F23526Cu: goto label_7F23526C;
    case 0x7F235270u: goto label_7F235270;
    case 0x7F235274u: goto label_7F235274;
    case 0x7F235278u: goto label_7F235278;
    case 0x7F23527Cu: goto label_7F23527C;
    case 0x7F235280u: goto label_7F235280;
    case 0x7F235284u: goto label_7F235284;
    case 0x7F235288u: goto label_7F235288;
    case 0x7F23528Cu: goto label_7F23528C;
    case 0x7F235290u: goto label_7F235290;
    case 0x7F235294u: goto label_7F235294;
    case 0x7F235298u: goto label_7F235298;
    case 0x7F23529Cu: goto label_7F23529C;
    case 0x7F2352A0u: goto label_7F2352A0;
    case 0x7F2352A4u: goto label_7F2352A4;
    case 0x7F2352A8u: goto label_7F2352A8;
    case 0x7F2352ACu: goto label_7F2352AC;
    case 0x7F2352B0u: goto label_7F2352B0;
    case 0x7F2352B4u: goto label_7F2352B4;
    case 0x7F2352B8u: goto label_7F2352B8;
    case 0x7F2352BCu: goto label_7F2352BC;
    case 0x7F2352C0u: goto label_7F2352C0;
    case 0x7F2352C4u: goto label_7F2352C4;
    case 0x7F2352C8u: goto label_7F2352C8;
    case 0x7F2352CCu: goto label_7F2352CC;
    case 0x7F2352D0u: goto label_7F2352D0;
    case 0x7F2352D4u: goto label_7F2352D4;
    case 0x7F2352D8u: goto label_7F2352D8;
    case 0x7F2352DCu: goto label_7F2352DC;
    case 0x7F2352E0u: goto label_7F2352E0;
    case 0x7F2352E4u: goto label_7F2352E4;
    case 0x7F2352E8u: goto label_7F2352E8;
    case 0x7F2352ECu: goto label_7F2352EC;
    case 0x7F2352F0u: goto label_7F2352F0;
    case 0x7F2352F4u: goto label_7F2352F4;
    case 0x7F2352F8u: goto label_7F2352F8;
    case 0x7F2352FCu: goto label_7F2352FC;
    case 0x7F235300u: goto label_7F235300;
    case 0x7F235304u: goto label_7F235304;
    case 0x7F235308u: goto label_7F235308;
    case 0x7F23530Cu: goto label_7F23530C;
    case 0x7F235310u: goto label_7F235310;
    case 0x7F235314u: goto label_7F235314;
    case 0x7F235318u: goto label_7F235318;
    case 0x7F23531Cu: goto label_7F23531C;
    case 0x7F235320u: goto label_7F235320;
    case 0x7F235324u: goto label_7F235324;
    case 0x7F235328u: goto label_7F235328;
    case 0x7F23532Cu: goto label_7F23532C;
    case 0x7F235330u: goto label_7F235330;
    case 0x7F235334u: goto label_7F235334;
    case 0x7F235338u: goto label_7F235338;
    case 0x7F23533Cu: goto label_7F23533C;
    case 0x7F235340u: goto label_7F235340;
    case 0x7F235344u: goto label_7F235344;
    case 0x7F235348u: goto label_7F235348;
    case 0x7F23534Cu: goto label_7F23534C;
    case 0x7F235350u: goto label_7F235350;
    case 0x7F235354u: goto label_7F235354;
    case 0x7F235358u: goto label_7F235358;
    case 0x7F23535Cu: goto label_7F23535C;
    case 0x7F235360u: goto label_7F235360;
    case 0x7F235364u: goto label_7F235364;
    case 0x7F235368u: goto label_7F235368;
    case 0x7F23536Cu: goto label_7F23536C;
    case 0x7F235370u: goto label_7F235370;
    case 0x7F235374u: goto label_7F235374;
    case 0x7F235378u: goto label_7F235378;
    case 0x7F23537Cu: goto label_7F23537C;
    case 0x7F235380u: goto label_7F235380;
    case 0x7F235384u: goto label_7F235384;
    case 0x7F235388u: goto label_7F235388;
    case 0x7F23538Cu: goto label_7F23538C;
    case 0x7F235390u: goto label_7F235390;
    case 0x7F235394u: goto label_7F235394;
    case 0x7F235398u: goto label_7F235398;
    case 0x7F23539Cu: goto label_7F23539C;
    case 0x7F2353A0u: goto label_7F2353A0;
    case 0x7F2353A4u: goto label_7F2353A4;
    case 0x7F2353A8u: goto label_7F2353A8;
    case 0x7F2353ACu: goto label_7F2353AC;
    case 0x7F2353B0u: goto label_7F2353B0;
    case 0x7F2353B4u: goto label_7F2353B4;
    case 0x7F2353B8u: goto label_7F2353B8;
    case 0x7F2353BCu: goto label_7F2353BC;
    case 0x7F2353C0u: goto label_7F2353C0;
    case 0x7F2353C4u: goto label_7F2353C4;
    case 0x7F2353C8u: goto label_7F2353C8;
    case 0x7F2353CCu: goto label_7F2353CC;
    case 0x7F2353D0u: goto label_7F2353D0;
    case 0x7F2353D4u: goto label_7F2353D4;
    case 0x7F2353D8u: goto label_7F2353D8;
    case 0x7F2353DCu: goto label_7F2353DC;
    case 0x7F2353E0u: goto label_7F2353E0;
    case 0x7F2353E4u: goto label_7F2353E4;
    case 0x7F2353E8u: goto label_7F2353E8;
    case 0x7F2353ECu: goto label_7F2353EC;
    case 0x7F2353F0u: goto label_7F2353F0;
    case 0x7F2353F4u: goto label_7F2353F4;
    case 0x7F2353F8u: goto label_7F2353F8;
    case 0x7F2353FCu: goto label_7F2353FC;
    case 0x7F235400u: goto label_7F235400;
    case 0x7F235404u: goto label_7F235404;
    case 0x7F235408u: goto label_7F235408;
    case 0x7F23540Cu: goto label_7F23540C;
    case 0x7F235410u: goto label_7F235410;
    case 0x7F235414u: goto label_7F235414;
    case 0x7F235418u: goto label_7F235418;
    case 0x7F23541Cu: goto label_7F23541C;
    case 0x7F235420u: goto label_7F235420;
    case 0x7F235424u: goto label_7F235424;
    case 0x7F235428u: goto label_7F235428;
    case 0x7F23542Cu: goto label_7F23542C;
    case 0x7F235430u: goto label_7F235430;
    case 0x7F235434u: goto label_7F235434;
    case 0x7F235438u: goto label_7F235438;
    case 0x7F23543Cu: goto label_7F23543C;
    case 0x7F235440u: goto label_7F235440;
    case 0x7F235444u: goto label_7F235444;
    case 0x7F235448u: goto label_7F235448;
    case 0x7F23544Cu: goto label_7F23544C;
    case 0x7F235450u: goto label_7F235450;
    case 0x7F235454u: goto label_7F235454;
    case 0x7F235458u: goto label_7F235458;
    case 0x7F23545Cu: goto label_7F23545C;
    case 0x7F235460u: goto label_7F235460;
    case 0x7F235464u: goto label_7F235464;
    case 0x7F235468u: goto label_7F235468;
    case 0x7F23546Cu: goto label_7F23546C;
    case 0x7F235470u: goto label_7F235470;
    case 0x7F235474u: goto label_7F235474;
    case 0x7F235478u: goto label_7F235478;
    case 0x7F23547Cu: goto label_7F23547C;
    case 0x7F235480u: goto label_7F235480;
    case 0x7F235484u: goto label_7F235484;
    case 0x7F235488u: goto label_7F235488;
    case 0x7F23548Cu: goto label_7F23548C;
    case 0x7F235490u: goto label_7F235490;
    case 0x7F235494u: goto label_7F235494;
    case 0x7F235498u: goto label_7F235498;
    case 0x7F23549Cu: goto label_7F23549C;
    case 0x7F2354A0u: goto label_7F2354A0;
    case 0x7F2354A4u: goto label_7F2354A4;
    case 0x7F2354A8u: goto label_7F2354A8;
    case 0x7F2354ACu: goto label_7F2354AC;
    case 0x7F2354B0u: goto label_7F2354B0;
    case 0x7F2354B4u: goto label_7F2354B4;
    case 0x7F2354B8u: goto label_7F2354B8;
    case 0x7F2354BCu: goto label_7F2354BC;
    case 0x7F2354C0u: goto label_7F2354C0;
    case 0x7F2354C4u: goto label_7F2354C4;
    case 0x7F2354C8u: goto label_7F2354C8;
    case 0x7F2354CCu: goto label_7F2354CC;
    case 0x7F2354D0u: goto label_7F2354D0;
    case 0x7F2354D4u: goto label_7F2354D4;
    case 0x7F2354D8u: goto label_7F2354D8;
    case 0x7F2354DCu: goto label_7F2354DC;
    case 0x7F2354E0u: goto label_7F2354E0;
    case 0x7F2354E4u: goto label_7F2354E4;
    case 0x7F2354E8u: goto label_7F2354E8;
    case 0x7F2354ECu: goto label_7F2354EC;
    case 0x7F2354F0u: goto label_7F2354F0;
    case 0x7F2354F4u: goto label_7F2354F4;
    case 0x7F2354F8u: goto label_7F2354F8;
    case 0x7F2354FCu: goto label_7F2354FC;
    case 0x7F235500u: goto label_7F235500;
    case 0x7F235504u: goto label_7F235504;
    case 0x7F235508u: goto label_7F235508;
    case 0x7F23550Cu: goto label_7F23550C;
    case 0x7F235510u: goto label_7F235510;
    case 0x7F235514u: goto label_7F235514;
    case 0x7F235518u: goto label_7F235518;
    case 0x7F23551Cu: goto label_7F23551C;
    case 0x7F235520u: goto label_7F235520;
    case 0x7F235524u: goto label_7F235524;
    case 0x7F235528u: goto label_7F235528;
    case 0x7F23552Cu: goto label_7F23552C;
    case 0x7F235530u: goto label_7F235530;
    case 0x7F235534u: goto label_7F235534;
    case 0x7F235538u: goto label_7F235538;
    case 0x7F23553Cu: goto label_7F23553C;
    case 0x7F235540u: goto label_7F235540;
    case 0x7F235544u: goto label_7F235544;
    case 0x7F235548u: goto label_7F235548;
    case 0x7F23554Cu: goto label_7F23554C;
    case 0x7F235550u: goto label_7F235550;
    case 0x7F235554u: goto label_7F235554;
    case 0x7F235558u: goto label_7F235558;
    case 0x7F23555Cu: goto label_7F23555C;
    case 0x7F235560u: goto label_7F235560;
    case 0x7F235564u: goto label_7F235564;
    case 0x7F235568u: goto label_7F235568;
    case 0x7F23556Cu: goto label_7F23556C;
    case 0x7F235570u: goto label_7F235570;
    case 0x7F235574u: goto label_7F235574;
    case 0x7F235578u: goto label_7F235578;
    case 0x7F23557Cu: goto label_7F23557C;
    case 0x7F235580u: goto label_7F235580;
    case 0x7F235584u: goto label_7F235584;
    case 0x7F235588u: goto label_7F235588;
    case 0x7F23558Cu: goto label_7F23558C;
    case 0x7F235590u: goto label_7F235590;
    case 0x7F235594u: goto label_7F235594;
    case 0x7F235598u: goto label_7F235598;
    case 0x7F23559Cu: goto label_7F23559C;
    case 0x7F2355A0u: goto label_7F2355A0;
    case 0x7F2355A4u: goto label_7F2355A4;
    case 0x7F2355A8u: goto label_7F2355A8;
    case 0x7F2355ACu: goto label_7F2355AC;
    case 0x7F2355B0u: goto label_7F2355B0;
    case 0x7F2355B4u: goto label_7F2355B4;
    case 0x7F2355B8u: goto label_7F2355B8;
    case 0x7F2355BCu: goto label_7F2355BC;
    case 0x7F2355C0u: goto label_7F2355C0;
    case 0x7F2355C4u: goto label_7F2355C4;
    case 0x7F2355C8u: goto label_7F2355C8;
    case 0x7F2355CCu: goto label_7F2355CC;
    case 0x7F2355D0u: goto label_7F2355D0;
    case 0x7F2355D4u: goto label_7F2355D4;
    case 0x7F2355D8u: goto label_7F2355D8;
    case 0x7F2355DCu: goto label_7F2355DC;
    case 0x7F2355E0u: goto label_7F2355E0;
    case 0x7F2355E4u: goto label_7F2355E4;
    case 0x7F2355E8u: goto label_7F2355E8;
    case 0x7F2355ECu: goto label_7F2355EC;
    case 0x7F2355F0u: goto label_7F2355F0;
    case 0x7F2355F4u: goto label_7F2355F4;
    case 0x7F2355F8u: goto label_7F2355F8;
    case 0x7F2355FCu: goto label_7F2355FC;
    case 0x7F235600u: goto label_7F235600;
    case 0x7F235604u: goto label_7F235604;
    case 0x7F235608u: goto label_7F235608;
    case 0x7F23560Cu: goto label_7F23560C;
    case 0x7F235610u: goto label_7F235610;
    case 0x7F235614u: goto label_7F235614;
    case 0x7F235618u: goto label_7F235618;
    case 0x7F23561Cu: goto label_7F23561C;
    case 0x7F235620u: goto label_7F235620;
    case 0x7F235624u: goto label_7F235624;
    case 0x7F235628u: goto label_7F235628;
    case 0x7F23562Cu: goto label_7F23562C;
    case 0x7F235630u: goto label_7F235630;
    case 0x7F235634u: goto label_7F235634;
    case 0x7F235638u: goto label_7F235638;
    case 0x7F23563Cu: goto label_7F23563C;
    case 0x7F235640u: goto label_7F235640;
    case 0x7F235644u: goto label_7F235644;
    case 0x7F235648u: goto label_7F235648;
    case 0x7F23564Cu: goto label_7F23564C;
    case 0x7F235650u: goto label_7F235650;
    case 0x7F235654u: goto label_7F235654;
    case 0x7F235658u: goto label_7F235658;
    case 0x7F23565Cu: goto label_7F23565C;
    case 0x7F235660u: goto label_7F235660;
    case 0x7F235664u: goto label_7F235664;
    case 0x7F235668u: goto label_7F235668;
    case 0x7F23566Cu: goto label_7F23566C;
    case 0x7F235670u: goto label_7F235670;
    case 0x7F235674u: goto label_7F235674;
    case 0x7F235678u: goto label_7F235678;
    case 0x7F23567Cu: goto label_7F23567C;
    case 0x7F235680u: goto label_7F235680;
    case 0x7F235684u: goto label_7F235684;
    case 0x7F235688u: goto label_7F235688;
    case 0x7F23568Cu: goto label_7F23568C;
    case 0x7F235690u: goto label_7F235690;
    case 0x7F235694u: goto label_7F235694;
    case 0x7F235698u: goto label_7F235698;
    case 0x7F23569Cu: goto label_7F23569C;
    case 0x7F2356A0u: goto label_7F2356A0;
    case 0x7F2356A4u: goto label_7F2356A4;
    case 0x7F2356A8u: goto label_7F2356A8;
    case 0x7F2356ACu: goto label_7F2356AC;
    case 0x7F2356B0u: goto label_7F2356B0;
    case 0x7F2356B4u: goto label_7F2356B4;
    case 0x7F2356B8u: goto label_7F2356B8;
    case 0x7F2356BCu: goto label_7F2356BC;
    case 0x7F2356C0u: goto label_7F2356C0;
    case 0x7F2356C4u: goto label_7F2356C4;
    case 0x7F2356C8u: goto label_7F2356C8;
    case 0x7F2356CCu: goto label_7F2356CC;
    case 0x7F2356D0u: goto label_7F2356D0;
    case 0x7F2356D4u: goto label_7F2356D4;
    case 0x7F2356D8u: goto label_7F2356D8;
    case 0x7F2356DCu: goto label_7F2356DC;
    case 0x7F2356E0u: goto label_7F2356E0;
    case 0x7F2356E4u: goto label_7F2356E4;
    case 0x7F2356E8u: goto label_7F2356E8;
    case 0x7F2356ECu: goto label_7F2356EC;
    case 0x7F2356F0u: goto label_7F2356F0;
    case 0x7F2356F4u: goto label_7F2356F4;
    case 0x7F2356F8u: goto label_7F2356F8;
    case 0x7F2356FCu: goto label_7F2356FC;
    case 0x7F235700u: goto label_7F235700;
    case 0x7F235704u: goto label_7F235704;
    case 0x7F235708u: goto label_7F235708;
    case 0x7F23570Cu: goto label_7F23570C;
    case 0x7F235710u: goto label_7F235710;
    case 0x7F235714u: goto label_7F235714;
    case 0x7F235718u: goto label_7F235718;
    case 0x7F23571Cu: goto label_7F23571C;
    case 0x7F235720u: goto label_7F235720;
    case 0x7F235724u: goto label_7F235724;
    case 0x7F235728u: goto label_7F235728;
    case 0x7F23572Cu: goto label_7F23572C;
    case 0x7F235730u: goto label_7F235730;
    case 0x7F235734u: goto label_7F235734;
    case 0x7F235738u: goto label_7F235738;
    case 0x7F23573Cu: goto label_7F23573C;
    case 0x7F235740u: goto label_7F235740;
    case 0x7F235744u: goto label_7F235744;
    case 0x7F235748u: goto label_7F235748;
    case 0x7F23574Cu: goto label_7F23574C;
    case 0x7F235750u: goto label_7F235750;
    case 0x7F235754u: goto label_7F235754;
    case 0x7F235758u: goto label_7F235758;
    case 0x7F23575Cu: goto label_7F23575C;
    case 0x7F235760u: goto label_7F235760;
    case 0x7F235764u: goto label_7F235764;
    case 0x7F235768u: goto label_7F235768;
    case 0x7F23576Cu: goto label_7F23576C;
    case 0x7F235770u: goto label_7F235770;
    case 0x7F235774u: goto label_7F235774;
    case 0x7F235778u: goto label_7F235778;
    case 0x7F23577Cu: goto label_7F23577C;
    case 0x7F235780u: goto label_7F235780;
    case 0x7F235784u: goto label_7F235784;
    case 0x7F235788u: goto label_7F235788;
    case 0x7F23578Cu: goto label_7F23578C;
    case 0x7F235790u: goto label_7F235790;
    case 0x7F235794u: goto label_7F235794;
    case 0x7F235798u: goto label_7F235798;
    case 0x7F23579Cu: goto label_7F23579C;
    case 0x7F2357A0u: goto label_7F2357A0;
    case 0x7F2357A4u: goto label_7F2357A4;
    case 0x7F2357A8u: goto label_7F2357A8;
    case 0x7F2357ACu: goto label_7F2357AC;
    case 0x7F2357B0u: goto label_7F2357B0;
    case 0x7F2357B4u: goto label_7F2357B4;
    case 0x7F2357B8u: goto label_7F2357B8;
    case 0x7F2357BCu: goto label_7F2357BC;
    case 0x7F2357C0u: goto label_7F2357C0;
    case 0x7F2357C4u: goto label_7F2357C4;
    case 0x7F2357C8u: goto label_7F2357C8;
    case 0x7F2357CCu: goto label_7F2357CC;
    case 0x7F2357D0u: goto label_7F2357D0;
    case 0x7F2357D4u: goto label_7F2357D4;
    case 0x7F2357D8u: goto label_7F2357D8;
    case 0x7F2357DCu: goto label_7F2357DC;
    case 0x7F2357E0u: goto label_7F2357E0;
    case 0x7F2357E4u: goto label_7F2357E4;
    case 0x7F2357E8u: goto label_7F2357E8;
    case 0x7F2357ECu: goto label_7F2357EC;
    case 0x7F2357F0u: goto label_7F2357F0;
    case 0x7F2357F4u: goto label_7F2357F4;
    case 0x7F2357F8u: goto label_7F2357F8;
    case 0x7F2357FCu: goto label_7F2357FC;
    case 0x7F235800u: goto label_7F235800;
    case 0x7F235804u: goto label_7F235804;
    case 0x7F235808u: goto label_7F235808;
    case 0x7F23580Cu: goto label_7F23580C;
    case 0x7F235810u: goto label_7F235810;
    case 0x7F235814u: goto label_7F235814;
    case 0x7F235818u: goto label_7F235818;
    case 0x7F23581Cu: goto label_7F23581C;
    case 0x7F235820u: goto label_7F235820;
    case 0x7F235824u: goto label_7F235824;
    case 0x7F235828u: goto label_7F235828;
    case 0x7F23582Cu: goto label_7F23582C;
    case 0x7F235830u: goto label_7F235830;
    case 0x7F235834u: goto label_7F235834;
    case 0x7F235838u: goto label_7F235838;
    case 0x7F23583Cu: goto label_7F23583C;
    case 0x7F235840u: goto label_7F235840;
    case 0x7F235844u: goto label_7F235844;
    case 0x7F235848u: goto label_7F235848;
    case 0x7F23584Cu: goto label_7F23584C;
    case 0x7F235850u: goto label_7F235850;
    case 0x7F235854u: goto label_7F235854;
    case 0x7F235858u: goto label_7F235858;
    case 0x7F23585Cu: goto label_7F23585C;
    case 0x7F235860u: goto label_7F235860;
    case 0x7F235864u: goto label_7F235864;
    case 0x7F235868u: goto label_7F235868;
    case 0x7F23586Cu: goto label_7F23586C;
    case 0x7F235870u: goto label_7F235870;
    case 0x7F235874u: goto label_7F235874;
    case 0x7F235878u: goto label_7F235878;
    case 0x7F23587Cu: goto label_7F23587C;
    case 0x7F235880u: goto label_7F235880;
    case 0x7F235884u: goto label_7F235884;
    case 0x7F235888u: goto label_7F235888;
    case 0x7F23588Cu: goto label_7F23588C;
    case 0x7F235890u: goto label_7F235890;
    case 0x7F235894u: goto label_7F235894;
    case 0x7F235898u: goto label_7F235898;
    case 0x7F23589Cu: goto label_7F23589C;
    case 0x7F2358A0u: goto label_7F2358A0;
    case 0x7F2358A4u: goto label_7F2358A4;
    case 0x7F2358A8u: goto label_7F2358A8;
    case 0x7F2358ACu: goto label_7F2358AC;
    case 0x7F2358B0u: goto label_7F2358B0;
    case 0x7F2358B4u: goto label_7F2358B4;
    case 0x7F2358B8u: goto label_7F2358B8;
    case 0x7F2358BCu: goto label_7F2358BC;
    case 0x7F2358C0u: goto label_7F2358C0;
    case 0x7F2358C4u: goto label_7F2358C4;
    case 0x7F2358C8u: goto label_7F2358C8;
    case 0x7F2358CCu: goto label_7F2358CC;
    case 0x7F2358D0u: goto label_7F2358D0;
    case 0x7F2358D4u: goto label_7F2358D4;
    case 0x7F2358D8u: goto label_7F2358D8;
    case 0x7F2358DCu: goto label_7F2358DC;
    case 0x7F2358E0u: goto label_7F2358E0;
    case 0x7F2358E4u: goto label_7F2358E4;
    case 0x7F2358E8u: goto label_7F2358E8;
    case 0x7F2358ECu: goto label_7F2358EC;
    case 0x7F2358F0u: goto label_7F2358F0;
    case 0x7F2358F4u: goto label_7F2358F4;
    case 0x7F2358F8u: goto label_7F2358F8;
    case 0x7F2358FCu: goto label_7F2358FC;
    case 0x7F235900u: goto label_7F235900;
    case 0x7F235904u: goto label_7F235904;
    case 0x7F235908u: goto label_7F235908;
    case 0x7F23590Cu: goto label_7F23590C;
    case 0x7F235910u: goto label_7F235910;
    case 0x7F235914u: goto label_7F235914;
    case 0x7F235918u: goto label_7F235918;
    case 0x7F23591Cu: goto label_7F23591C;
    case 0x7F235920u: goto label_7F235920;
    case 0x7F235924u: goto label_7F235924;
    case 0x7F235928u: goto label_7F235928;
    case 0x7F23592Cu: goto label_7F23592C;
    case 0x7F235930u: goto label_7F235930;
    case 0x7F235934u: goto label_7F235934;
    case 0x7F235938u: goto label_7F235938;
    case 0x7F23593Cu: goto label_7F23593C;
    case 0x7F235940u: goto label_7F235940;
    case 0x7F235944u: goto label_7F235944;
    case 0x7F235948u: goto label_7F235948;
    case 0x7F23594Cu: goto label_7F23594C;
    case 0x7F235950u: goto label_7F235950;
    case 0x7F235954u: goto label_7F235954;
    case 0x7F235958u: goto label_7F235958;
    case 0x7F23595Cu: goto label_7F23595C;
    case 0x7F235960u: goto label_7F235960;
    case 0x7F235964u: goto label_7F235964;
    case 0x7F235968u: goto label_7F235968;
    case 0x7F23596Cu: goto label_7F23596C;
    case 0x7F235970u: goto label_7F235970;
    case 0x7F235974u: goto label_7F235974;
    case 0x7F235978u: goto label_7F235978;
    case 0x7F23597Cu: goto label_7F23597C;
    case 0x7F235980u: goto label_7F235980;
    case 0x7F235984u: goto label_7F235984;
    case 0x7F235988u: goto label_7F235988;
    case 0x7F23598Cu: goto label_7F23598C;
    case 0x7F235990u: goto label_7F235990;
    case 0x7F235994u: goto label_7F235994;
    case 0x7F235998u: goto label_7F235998;
    case 0x7F23599Cu: goto label_7F23599C;
    case 0x7F2359A0u: goto label_7F2359A0;
    case 0x7F2359A4u: goto label_7F2359A4;
    case 0x7F2359A8u: goto label_7F2359A8;
    case 0x7F2359ACu: goto label_7F2359AC;
    case 0x7F2359B0u: goto label_7F2359B0;
    case 0x7F2359B4u: goto label_7F2359B4;
    case 0x7F2359B8u: goto label_7F2359B8;
    case 0x7F2359BCu: goto label_7F2359BC;
    case 0x7F2359C0u: goto label_7F2359C0;
    case 0x7F2359C4u: goto label_7F2359C4;
    case 0x7F2359C8u: goto label_7F2359C8;
    case 0x7F2359CCu: goto label_7F2359CC;
    case 0x7F2359D0u: goto label_7F2359D0;
    case 0x7F2359D4u: goto label_7F2359D4;
    case 0x7F2359D8u: goto label_7F2359D8;
    case 0x7F2359DCu: goto label_7F2359DC;
    case 0x7F2359E0u: goto label_7F2359E0;
    case 0x7F2359E4u: goto label_7F2359E4;
    case 0x7F2359E8u: goto label_7F2359E8;
    case 0x7F2359ECu: goto label_7F2359EC;
    case 0x7F2359F0u: goto label_7F2359F0;
    case 0x7F2359F4u: goto label_7F2359F4;
    case 0x7F2359F8u: goto label_7F2359F8;
    case 0x7F2359FCu: goto label_7F2359FC;
    case 0x7F235A00u: goto label_7F235A00;
    case 0x7F235A04u: goto label_7F235A04;
    case 0x7F235A08u: goto label_7F235A08;
    case 0x7F235A0Cu: goto label_7F235A0C;
    case 0x7F235A10u: goto label_7F235A10;
    case 0x7F235A14u: goto label_7F235A14;
    case 0x7F235A18u: goto label_7F235A18;
    case 0x7F235A1Cu: goto label_7F235A1C;
    case 0x7F235A20u: goto label_7F235A20;
    case 0x7F235A24u: goto label_7F235A24;
    case 0x7F235A28u: goto label_7F235A28;
    case 0x7F235A2Cu: goto label_7F235A2C;
    case 0x7F235A30u: goto label_7F235A30;
    case 0x7F235A34u: goto label_7F235A34;
    case 0x7F235A38u: goto label_7F235A38;
    case 0x7F235A3Cu: goto label_7F235A3C;
    case 0x7F235A40u: goto label_7F235A40;
    case 0x7F235A44u: goto label_7F235A44;
    case 0x7F235A48u: goto label_7F235A48;
    case 0x7F235A4Cu: goto label_7F235A4C;
    case 0x7F235A50u: goto label_7F235A50;
    case 0x7F235A54u: goto label_7F235A54;
    case 0x7F235A58u: goto label_7F235A58;
    case 0x7F235A5Cu: goto label_7F235A5C;
    case 0x7F235A60u: goto label_7F235A60;
    case 0x7F235A64u: goto label_7F235A64;
    case 0x7F235A68u: goto label_7F235A68;
    case 0x7F235A6Cu: goto label_7F235A6C;
    case 0x7F235A70u: goto label_7F235A70;
    case 0x7F235A74u: goto label_7F235A74;
    case 0x7F235A78u: goto label_7F235A78;
    case 0x7F235A7Cu: goto label_7F235A7C;
    case 0x7F235A80u: goto label_7F235A80;
    case 0x7F235A84u: goto label_7F235A84;
    case 0x7F235A88u: goto label_7F235A88;
    case 0x7F235A8Cu: goto label_7F235A8C;
    case 0x7F235A90u: goto label_7F235A90;
    case 0x7F235A94u: goto label_7F235A94;
    case 0x7F235A98u: goto label_7F235A98;
    case 0x7F235A9Cu: goto label_7F235A9C;
    case 0x7F235AA0u: goto label_7F235AA0;
    case 0x7F235AA4u: goto label_7F235AA4;
    case 0x7F235AA8u: goto label_7F235AA8;
    case 0x7F235AACu: goto label_7F235AAC;
    case 0x7F235AB0u: goto label_7F235AB0;
    case 0x7F235AB4u: goto label_7F235AB4;
    case 0x7F235AB8u: goto label_7F235AB8;
    case 0x7F235ABCu: goto label_7F235ABC;
    case 0x7F235AC0u: goto label_7F235AC0;
    case 0x7F235AC4u: goto label_7F235AC4;
    case 0x7F235AC8u: goto label_7F235AC8;
    case 0x7F235ACCu: goto label_7F235ACC;
    case 0x7F235AD0u: goto label_7F235AD0;
    case 0x7F235AD4u: goto label_7F235AD4;
    case 0x7F235AD8u: goto label_7F235AD8;
    case 0x7F235ADCu: goto label_7F235ADC;
    case 0x7F235AE0u: goto label_7F235AE0;
    case 0x7F235AE4u: goto label_7F235AE4;
    case 0x7F235AE8u: goto label_7F235AE8;
    case 0x7F235AECu: goto label_7F235AEC;
    case 0x7F235AF0u: goto label_7F235AF0;
    case 0x7F235AF4u: goto label_7F235AF4;
    case 0x7F235AF8u: goto label_7F235AF8;
    case 0x7F235AFCu: goto label_7F235AFC;
    case 0x7F235B00u: goto label_7F235B00;
    case 0x7F235B04u: goto label_7F235B04;
    case 0x7F235B08u: goto label_7F235B08;
    case 0x7F235B0Cu: goto label_7F235B0C;
    case 0x7F235B10u: goto label_7F235B10;
    case 0x7F235B14u: goto label_7F235B14;
    case 0x7F235B18u: goto label_7F235B18;
    case 0x7F235B1Cu: goto label_7F235B1C;
    case 0x7F235B20u: goto label_7F235B20;
    case 0x7F235B24u: goto label_7F235B24;
    case 0x7F235B28u: goto label_7F235B28;
    case 0x7F235B2Cu: goto label_7F235B2C;
    case 0x7F235B30u: goto label_7F235B30;
    case 0x7F235B34u: goto label_7F235B34;
    case 0x7F235B38u: goto label_7F235B38;
    case 0x7F235B3Cu: goto label_7F235B3C;
    case 0x7F235B40u: goto label_7F235B40;
    case 0x7F235B44u: goto label_7F235B44;
    case 0x7F235B48u: goto label_7F235B48;
    case 0x7F235B4Cu: goto label_7F235B4C;
    case 0x7F235B50u: goto label_7F235B50;
    case 0x7F235B54u: goto label_7F235B54;
    case 0x7F235B58u: goto label_7F235B58;
    case 0x7F235B5Cu: goto label_7F235B5C;
    case 0x7F235B60u: goto label_7F235B60;
    case 0x7F235B64u: goto label_7F235B64;
    case 0x7F235B68u: goto label_7F235B68;
    case 0x7F235B6Cu: goto label_7F235B6C;
    case 0x7F235B70u: goto label_7F235B70;
    case 0x7F235B74u: goto label_7F235B74;
    case 0x7F235B78u: goto label_7F235B78;
    case 0x7F235B7Cu: goto label_7F235B7C;
    case 0x7F235B80u: goto label_7F235B80;
    case 0x7F235B84u: goto label_7F235B84;
    case 0x7F235B88u: goto label_7F235B88;
    case 0x7F235B8Cu: goto label_7F235B8C;
    case 0x7F235B90u: goto label_7F235B90;
    case 0x7F235B94u: goto label_7F235B94;
    case 0x7F235B98u: goto label_7F235B98;
    case 0x7F235B9Cu: goto label_7F235B9C;
    case 0x7F235BA0u: goto label_7F235BA0;
    case 0x7F235BA4u: goto label_7F235BA4;
    case 0x7F235BA8u: goto label_7F235BA8;
    case 0x7F235BACu: goto label_7F235BAC;
    case 0x7F235BB0u: goto label_7F235BB0;
    case 0x7F235BB4u: goto label_7F235BB4;
    case 0x7F235BB8u: goto label_7F235BB8;
    case 0x7F235BBCu: goto label_7F235BBC;
    case 0x7F235BC0u: goto label_7F235BC0;
    case 0x7F235BC4u: goto label_7F235BC4;
    case 0x7F235BC8u: goto label_7F235BC8;
    case 0x7F235BCCu: goto label_7F235BCC;
    case 0x7F235BD0u: goto label_7F235BD0;
    case 0x7F235BD4u: goto label_7F235BD4;
    case 0x7F235BD8u: goto label_7F235BD8;
    case 0x7F235BDCu: goto label_7F235BDC;
    case 0x7F235BE0u: goto label_7F235BE0;
    case 0x7F235BE4u: goto label_7F235BE4;
    case 0x7F235BE8u: goto label_7F235BE8;
    case 0x7F235BECu: goto label_7F235BEC;
    case 0x7F235BF0u: goto label_7F235BF0;
    case 0x7F235BF4u: goto label_7F235BF4;
    case 0x7F235BF8u: goto label_7F235BF8;
    case 0x7F235BFCu: goto label_7F235BFC;
    case 0x7F235C00u: goto label_7F235C00;
    case 0x7F235C04u: goto label_7F235C04;
    case 0x7F235C08u: goto label_7F235C08;
    case 0x7F235C0Cu: goto label_7F235C0C;
    case 0x7F235C10u: goto label_7F235C10;
    case 0x7F235C14u: goto label_7F235C14;
    case 0x7F235C18u: goto label_7F235C18;
    case 0x7F235C1Cu: goto label_7F235C1C;
    case 0x7F235C20u: goto label_7F235C20;
    case 0x7F235C24u: goto label_7F235C24;
    case 0x7F235C28u: goto label_7F235C28;
    case 0x7F235C2Cu: goto label_7F235C2C;
    case 0x7F235C30u: goto label_7F235C30;
    case 0x7F235C34u: goto label_7F235C34;
    case 0x7F235C38u: goto label_7F235C38;
    case 0x7F235C3Cu: goto label_7F235C3C;
    case 0x7F235C40u: goto label_7F235C40;
    case 0x7F235C44u: goto label_7F235C44;
    case 0x7F235C48u: goto label_7F235C48;
    case 0x7F235C4Cu: goto label_7F235C4C;
    case 0x7F235C50u: goto label_7F235C50;
    case 0x7F235C54u: goto label_7F235C54;
    case 0x7F235C58u: goto label_7F235C58;
    case 0x7F235C5Cu: goto label_7F235C5C;
    case 0x7F235C60u: goto label_7F235C60;
    case 0x7F235C64u: goto label_7F235C64;
    case 0x7F235C68u: goto label_7F235C68;
    case 0x7F235C6Cu: goto label_7F235C6C;
    case 0x7F235C70u: goto label_7F235C70;
    case 0x7F235C74u: goto label_7F235C74;
    case 0x7F235C78u: goto label_7F235C78;
    case 0x7F235C7Cu: goto label_7F235C7C;
    case 0x7F235C80u: goto label_7F235C80;
    case 0x7F235C84u: goto label_7F235C84;
    case 0x7F235C88u: goto label_7F235C88;
    case 0x7F235C8Cu: goto label_7F235C8C;
    case 0x7F235C90u: goto label_7F235C90;
    case 0x7F235C94u: goto label_7F235C94;
    case 0x7F235C98u: goto label_7F235C98;
    case 0x7F235C9Cu: goto label_7F235C9C;
    case 0x7F235CA0u: goto label_7F235CA0;
    case 0x7F235CA4u: goto label_7F235CA4;
    case 0x7F235CA8u: goto label_7F235CA8;
    case 0x7F235CACu: goto label_7F235CAC;
    case 0x7F235CB0u: goto label_7F235CB0;
    case 0x7F235CB4u: goto label_7F235CB4;
    case 0x7F235CB8u: goto label_7F235CB8;
    case 0x7F235CBCu: goto label_7F235CBC;
    case 0x7F235CC0u: goto label_7F235CC0;
    case 0x7F235CC4u: goto label_7F235CC4;
    case 0x7F235CC8u: goto label_7F235CC8;
    case 0x7F235CCCu: goto label_7F235CCC;
    case 0x7F235CD0u: goto label_7F235CD0;
    case 0x7F235CD4u: goto label_7F235CD4;
    case 0x7F235CD8u: goto label_7F235CD8;
    case 0x7F235CDCu: goto label_7F235CDC;
    case 0x7F235CE0u: goto label_7F235CE0;
    case 0x7F235CE4u: goto label_7F235CE4;
    case 0x7F235CE8u: goto label_7F235CE8;
    case 0x7F235CECu: goto label_7F235CEC;
    case 0x7F235CF0u: goto label_7F235CF0;
    case 0x7F235CF4u: goto label_7F235CF4;
    case 0x7F235CF8u: goto label_7F235CF8;
    case 0x7F235CFCu: goto label_7F235CFC;
    case 0x7F235D00u: goto label_7F235D00;
    case 0x7F235D04u: goto label_7F235D04;
    case 0x7F235D08u: goto label_7F235D08;
    case 0x7F235D0Cu: goto label_7F235D0C;
    case 0x7F235D10u: goto label_7F235D10;
    case 0x7F235D14u: goto label_7F235D14;
    case 0x7F235D18u: goto label_7F235D18;
    case 0x7F235D1Cu: goto label_7F235D1C;
    case 0x7F235D20u: goto label_7F235D20;
    case 0x7F235D24u: goto label_7F235D24;
    case 0x7F235D28u: goto label_7F235D28;
    case 0x7F235D2Cu: goto label_7F235D2C;
    case 0x7F235D30u: goto label_7F235D30;
    case 0x7F235D34u: goto label_7F235D34;
    case 0x7F235D38u: goto label_7F235D38;
    case 0x7F235D3Cu: goto label_7F235D3C;
    case 0x7F235D40u: goto label_7F235D40;
    case 0x7F235D44u: goto label_7F235D44;
    case 0x7F235D48u: goto label_7F235D48;
    case 0x7F235D4Cu: goto label_7F235D4C;
    case 0x7F235D50u: goto label_7F235D50;
    case 0x7F235D54u: goto label_7F235D54;
    case 0x7F235D58u: goto label_7F235D58;
    case 0x7F235D5Cu: goto label_7F235D5C;
    case 0x7F235D60u: goto label_7F235D60;
    case 0x7F235D64u: goto label_7F235D64;
    case 0x7F235D68u: goto label_7F235D68;
    case 0x7F235D6Cu: goto label_7F235D6C;
    case 0x7F235D70u: goto label_7F235D70;
    case 0x7F235D74u: goto label_7F235D74;
    case 0x7F235D78u: goto label_7F235D78;
    case 0x7F235D7Cu: goto label_7F235D7C;
    case 0x7F235D80u: goto label_7F235D80;
    case 0x7F235D84u: goto label_7F235D84;
    case 0x7F235D88u: goto label_7F235D88;
    case 0x7F235D8Cu: goto label_7F235D8C;
    case 0x7F235D90u: goto label_7F235D90;
    case 0x7F235D94u: goto label_7F235D94;
    case 0x7F235D98u: goto label_7F235D98;
    case 0x7F235D9Cu: goto label_7F235D9C;
    case 0x7F235DA0u: goto label_7F235DA0;
    case 0x7F235DA4u: goto label_7F235DA4;
    case 0x7F235DA8u: goto label_7F235DA8;
    case 0x7F235DACu: goto label_7F235DAC;
    case 0x7F235DB0u: goto label_7F235DB0;
    case 0x7F235DB4u: goto label_7F235DB4;
    case 0x7F235DB8u: goto label_7F235DB8;
    case 0x7F235DBCu: goto label_7F235DBC;
    case 0x7F235DC0u: goto label_7F235DC0;
    case 0x7F235DC4u: goto label_7F235DC4;
    case 0x7F235DC8u: goto label_7F235DC8;
    case 0x7F235DCCu: goto label_7F235DCC;
    case 0x7F235DD0u: goto label_7F235DD0;
    case 0x7F235DD4u: goto label_7F235DD4;
    case 0x7F235DD8u: goto label_7F235DD8;
    case 0x7F235DDCu: goto label_7F235DDC;
    case 0x7F235DE0u: goto label_7F235DE0;
    case 0x7F235DE4u: goto label_7F235DE4;
    case 0x7F235DE8u: goto label_7F235DE8;
    case 0x7F235DECu: goto label_7F235DEC;
    case 0x7F235DF0u: goto label_7F235DF0;
    case 0x7F235DF4u: goto label_7F235DF4;
    case 0x7F235DF8u: goto label_7F235DF8;
    case 0x7F235DFCu: goto label_7F235DFC;
    case 0x7F235E00u: goto label_7F235E00;
    case 0x7F235E04u: goto label_7F235E04;
    case 0x7F235E08u: goto label_7F235E08;
    case 0x7F235E0Cu: goto label_7F235E0C;
    case 0x7F235E10u: goto label_7F235E10;
    case 0x7F235E14u: goto label_7F235E14;
    case 0x7F235E18u: goto label_7F235E18;
    case 0x7F235E1Cu: goto label_7F235E1C;
    case 0x7F235E20u: goto label_7F235E20;
    case 0x7F235E24u: goto label_7F235E24;
    case 0x7F235E28u: goto label_7F235E28;
    case 0x7F235E2Cu: goto label_7F235E2C;
    case 0x7F235E30u: goto label_7F235E30;
    case 0x7F235E34u: goto label_7F235E34;
    case 0x7F235E38u: goto label_7F235E38;
    case 0x7F235E3Cu: goto label_7F235E3C;
    case 0x7F235E40u: goto label_7F235E40;
    case 0x7F235E44u: goto label_7F235E44;
    case 0x7F235E48u: goto label_7F235E48;
    case 0x7F235E4Cu: goto label_7F235E4C;
    case 0x7F235E50u: goto label_7F235E50;
    case 0x7F235E54u: goto label_7F235E54;
    case 0x7F235E58u: goto label_7F235E58;
    case 0x7F235E5Cu: goto label_7F235E5C;
    case 0x7F235E60u: goto label_7F235E60;
    case 0x7F235E64u: goto label_7F235E64;
    case 0x7F235E68u: goto label_7F235E68;
    case 0x7F235E6Cu: goto label_7F235E6C;
    case 0x7F235E70u: goto label_7F235E70;
    case 0x7F235E74u: goto label_7F235E74;
    case 0x7F235E78u: goto label_7F235E78;
    case 0x7F235E7Cu: goto label_7F235E7C;
    case 0x7F235E80u: goto label_7F235E80;
    case 0x7F235E84u: goto label_7F235E84;
    case 0x7F235E88u: goto label_7F235E88;
    case 0x7F235E8Cu: goto label_7F235E8C;
    case 0x7F235E90u: goto label_7F235E90;
    case 0x7F235E94u: goto label_7F235E94;
    case 0x7F235E98u: goto label_7F235E98;
    case 0x7F235E9Cu: goto label_7F235E9C;
    case 0x7F235EA0u: goto label_7F235EA0;
    case 0x7F235EA4u: goto label_7F235EA4;
    case 0x7F235EA8u: goto label_7F235EA8;
    case 0x7F235EACu: goto label_7F235EAC;
    case 0x7F235EB0u: goto label_7F235EB0;
    case 0x7F235EB4u: goto label_7F235EB4;
    case 0x7F235EB8u: goto label_7F235EB8;
    case 0x7F235EBCu: goto label_7F235EBC;
    case 0x7F235EC0u: goto label_7F235EC0;
    case 0x7F235EC4u: goto label_7F235EC4;
    case 0x7F235EC8u: goto label_7F235EC8;
    case 0x7F235ECCu: goto label_7F235ECC;
    case 0x7F235ED0u: goto label_7F235ED0;
    case 0x7F235ED4u: goto label_7F235ED4;
    case 0x7F235ED8u: goto label_7F235ED8;
    case 0x7F235EDCu: goto label_7F235EDC;
    case 0x7F235EE0u: goto label_7F235EE0;
    case 0x7F235EE4u: goto label_7F235EE4;
    case 0x7F235EE8u: goto label_7F235EE8;
    case 0x7F235EECu: goto label_7F235EEC;
    case 0x7F235EF0u: goto label_7F235EF0;
    case 0x7F235EF4u: goto label_7F235EF4;
    case 0x7F235EF8u: goto label_7F235EF8;
    case 0x7F235EFCu: goto label_7F235EFC;
    case 0x7F235F00u: goto label_7F235F00;
    case 0x7F235F04u: goto label_7F235F04;
    case 0x7F235F08u: goto label_7F235F08;
    case 0x7F235F0Cu: goto label_7F235F0C;
    case 0x7F235F10u: goto label_7F235F10;
    case 0x7F235F14u: goto label_7F235F14;
    case 0x7F235F18u: goto label_7F235F18;
    case 0x7F235F1Cu: goto label_7F235F1C;
    case 0x7F235F20u: goto label_7F235F20;
    case 0x7F235F24u: goto label_7F235F24;
    case 0x7F235F28u: goto label_7F235F28;
    case 0x7F235F2Cu: goto label_7F235F2C;
    case 0x7F235F30u: goto label_7F235F30;
    case 0x7F235F34u: goto label_7F235F34;
    case 0x7F235F38u: goto label_7F235F38;
    case 0x7F235F3Cu: goto label_7F235F3C;
    case 0x7F235F40u: goto label_7F235F40;
    case 0x7F235F44u: goto label_7F235F44;
    case 0x7F235F48u: goto label_7F235F48;
    case 0x7F235F4Cu: goto label_7F235F4C;
    case 0x7F235F50u: goto label_7F235F50;
    case 0x7F235F54u: goto label_7F235F54;
    case 0x7F235F58u: goto label_7F235F58;
    case 0x7F235F5Cu: goto label_7F235F5C;
    case 0x7F235F60u: goto label_7F235F60;
    case 0x7F235F64u: goto label_7F235F64;
    case 0x7F235F68u: goto label_7F235F68;
    case 0x7F235F6Cu: goto label_7F235F6C;
    case 0x7F235F70u: goto label_7F235F70;
    case 0x7F235F74u: goto label_7F235F74;
    case 0x7F235F78u: goto label_7F235F78;
    case 0x7F235F7Cu: goto label_7F235F7C;
    case 0x7F235F80u: goto label_7F235F80;
    case 0x7F235F84u: goto label_7F235F84;
    case 0x7F235F88u: goto label_7F235F88;
    case 0x7F235F8Cu: goto label_7F235F8C;
    case 0x7F235F90u: goto label_7F235F90;
    case 0x7F235F94u: goto label_7F235F94;
    case 0x7F235F98u: goto label_7F235F98;
    case 0x7F235F9Cu: goto label_7F235F9C;
    case 0x7F235FA0u: goto label_7F235FA0;
    case 0x7F235FA4u: goto label_7F235FA4;
    case 0x7F235FA8u: goto label_7F235FA8;
    case 0x7F235FACu: goto label_7F235FAC;
    case 0x7F235FB0u: goto label_7F235FB0;
    case 0x7F235FB4u: goto label_7F235FB4;
    case 0x7F235FB8u: goto label_7F235FB8;
    case 0x7F235FBCu: goto label_7F235FBC;
    case 0x7F235FC0u: goto label_7F235FC0;
    case 0x7F235FC4u: goto label_7F235FC4;
    case 0x7F235FC8u: goto label_7F235FC8;
    case 0x7F235FCCu: goto label_7F235FCC;
    case 0x7F235FD0u: goto label_7F235FD0;
    case 0x7F235FD4u: goto label_7F235FD4;
    case 0x7F235FD8u: goto label_7F235FD8;
    case 0x7F235FDCu: goto label_7F235FDC;
    case 0x7F235FE0u: goto label_7F235FE0;
    case 0x7F235FE4u: goto label_7F235FE4;
    case 0x7F235FE8u: goto label_7F235FE8;
    case 0x7F235FECu: goto label_7F235FEC;
    case 0x7F235FF0u: goto label_7F235FF0;
    case 0x7F235FF4u: goto label_7F235FF4;
    case 0x7F235FF8u: goto label_7F235FF8;
    case 0x7F235FFCu: goto label_7F235FFC;
    case 0x7F236000u: goto label_7F236000;
    case 0x7F236004u: goto label_7F236004;
    case 0x7F236008u: goto label_7F236008;
    case 0x7F23600Cu: goto label_7F23600C;
    case 0x7F236010u: goto label_7F236010;
    case 0x7F236014u: goto label_7F236014;
    case 0x7F236018u: goto label_7F236018;
    case 0x7F23601Cu: goto label_7F23601C;
    case 0x7F236020u: goto label_7F236020;
    case 0x7F236024u: goto label_7F236024;
    case 0x7F236028u: goto label_7F236028;
    case 0x7F23602Cu: goto label_7F23602C;
    case 0x7F236030u: goto label_7F236030;
    case 0x7F236034u: goto label_7F236034;
    case 0x7F236038u: goto label_7F236038;
    case 0x7F23603Cu: goto label_7F23603C;
    case 0x7F236040u: goto label_7F236040;
    case 0x7F236044u: goto label_7F236044;
    case 0x7F236048u: goto label_7F236048;
    case 0x7F23604Cu: goto label_7F23604C;
    case 0x7F236050u: goto label_7F236050;
    case 0x7F236054u: goto label_7F236054;
    case 0x7F236058u: goto label_7F236058;
    case 0x7F23605Cu: goto label_7F23605C;
    case 0x7F236060u: goto label_7F236060;
    case 0x7F236064u: goto label_7F236064;
    case 0x7F236068u: goto label_7F236068;
    case 0x7F23606Cu: goto label_7F23606C;
    case 0x7F236070u: goto label_7F236070;
    case 0x7F236074u: goto label_7F236074;
    case 0x7F236078u: goto label_7F236078;
    case 0x7F23607Cu: goto label_7F23607C;
    case 0x7F236080u: goto label_7F236080;
    case 0x7F236084u: goto label_7F236084;
    case 0x7F236088u: goto label_7F236088;
    case 0x7F23608Cu: goto label_7F23608C;
    case 0x7F236090u: goto label_7F236090;
    case 0x7F236094u: goto label_7F236094;
    case 0x7F236098u: goto label_7F236098;
    case 0x7F23609Cu: goto label_7F23609C;
    case 0x7F2360A0u: goto label_7F2360A0;
    case 0x7F2360A4u: goto label_7F2360A4;
    case 0x7F2360A8u: goto label_7F2360A8;
    case 0x7F2360ACu: goto label_7F2360AC;
    case 0x7F2360B0u: goto label_7F2360B0;
    case 0x7F2360B4u: goto label_7F2360B4;
    case 0x7F2360B8u: goto label_7F2360B8;
    case 0x7F2360BCu: goto label_7F2360BC;
    case 0x7F2360C0u: goto label_7F2360C0;
    case 0x7F2360C4u: goto label_7F2360C4;
    case 0x7F2360C8u: goto label_7F2360C8;
    case 0x7F2360CCu: goto label_7F2360CC;
    case 0x7F2360D0u: goto label_7F2360D0;
    case 0x7F2360D4u: goto label_7F2360D4;
    case 0x7F2360D8u: goto label_7F2360D8;
    case 0x7F2360DCu: goto label_7F2360DC;
    case 0x7F2360E0u: goto label_7F2360E0;
    case 0x7F2360E4u: goto label_7F2360E4;
    case 0x7F2360E8u: goto label_7F2360E8;
    case 0x7F2360ECu: goto label_7F2360EC;
    case 0x7F2360F0u: goto label_7F2360F0;
    case 0x7F2360F4u: goto label_7F2360F4;
    case 0x7F2360F8u: goto label_7F2360F8;
    case 0x7F2360FCu: goto label_7F2360FC;
    case 0x7F236100u: goto label_7F236100;
    case 0x7F236104u: goto label_7F236104;
    case 0x7F236108u: goto label_7F236108;
    case 0x7F23610Cu: goto label_7F23610C;
    case 0x7F236110u: goto label_7F236110;
    case 0x7F236114u: goto label_7F236114;
    case 0x7F236118u: goto label_7F236118;
    case 0x7F23611Cu: goto label_7F23611C;
    case 0x7F236120u: goto label_7F236120;
    case 0x7F236124u: goto label_7F236124;
    case 0x7F236128u: goto label_7F236128;
    case 0x7F23612Cu: goto label_7F23612C;
    case 0x7F236130u: goto label_7F236130;
    case 0x7F236134u: goto label_7F236134;
    case 0x7F236138u: goto label_7F236138;
    case 0x7F23613Cu: goto label_7F23613C;
    case 0x7F236140u: goto label_7F236140;
    case 0x7F236144u: goto label_7F236144;
    case 0x7F236148u: goto label_7F236148;
    case 0x7F23614Cu: goto label_7F23614C;
    case 0x7F236150u: goto label_7F236150;
    case 0x7F236154u: goto label_7F236154;
    case 0x7F236158u: goto label_7F236158;
    case 0x7F23615Cu: goto label_7F23615C;
    case 0x7F236160u: goto label_7F236160;
    case 0x7F236164u: goto label_7F236164;
    case 0x7F236168u: goto label_7F236168;
    case 0x7F23616Cu: goto label_7F23616C;
    case 0x7F236170u: goto label_7F236170;
    case 0x7F236174u: goto label_7F236174;
    case 0x7F236178u: goto label_7F236178;
    case 0x7F23617Cu: goto label_7F23617C;
    case 0x7F236180u: goto label_7F236180;
    case 0x7F236184u: goto label_7F236184;
    case 0x7F236188u: goto label_7F236188;
    case 0x7F23618Cu: goto label_7F23618C;
    case 0x7F236190u: goto label_7F236190;
    case 0x7F236194u: goto label_7F236194;
    case 0x7F236198u: goto label_7F236198;
    case 0x7F23619Cu: goto label_7F23619C;
    case 0x7F2361A0u: goto label_7F2361A0;
    case 0x7F2361A4u: goto label_7F2361A4;
    case 0x7F2361A8u: goto label_7F2361A8;
    case 0x7F2361ACu: goto label_7F2361AC;
    case 0x7F2361B0u: goto label_7F2361B0;
    case 0x7F2361B4u: goto label_7F2361B4;
    case 0x7F2361B8u: goto label_7F2361B8;
    case 0x7F2361BCu: goto label_7F2361BC;
    case 0x7F2361C0u: goto label_7F2361C0;
    case 0x7F2361C4u: goto label_7F2361C4;
    case 0x7F2361C8u: goto label_7F2361C8;
    case 0x7F2361CCu: goto label_7F2361CC;
    case 0x7F2361D0u: goto label_7F2361D0;
    case 0x7F2361D4u: goto label_7F2361D4;
    case 0x7F2361D8u: goto label_7F2361D8;
    case 0x7F2361DCu: goto label_7F2361DC;
    case 0x7F2361E0u: goto label_7F2361E0;
    case 0x7F2361E4u: goto label_7F2361E4;
    case 0x7F2361E8u: goto label_7F2361E8;
    case 0x7F2361ECu: goto label_7F2361EC;
    case 0x7F2361F0u: goto label_7F2361F0;
    case 0x7F2361F4u: goto label_7F2361F4;
    case 0x7F2361F8u: goto label_7F2361F8;
    case 0x7F2361FCu: goto label_7F2361FC;
    case 0x7F236200u: goto label_7F236200;
    case 0x7F236204u: goto label_7F236204;
    case 0x7F236208u: goto label_7F236208;
    case 0x7F23620Cu: goto label_7F23620C;
    case 0x7F236210u: goto label_7F236210;
    case 0x7F236214u: goto label_7F236214;
    case 0x7F236218u: goto label_7F236218;
    case 0x7F23621Cu: goto label_7F23621C;
    case 0x7F236220u: goto label_7F236220;
    case 0x7F236224u: goto label_7F236224;
    case 0x7F236228u: goto label_7F236228;
    case 0x7F23622Cu: goto label_7F23622C;
    case 0x7F236230u: goto label_7F236230;
    case 0x7F236234u: goto label_7F236234;
    case 0x7F236238u: goto label_7F236238;
    case 0x7F23623Cu: goto label_7F23623C;
    case 0x7F236240u: goto label_7F236240;
    case 0x7F236244u: goto label_7F236244;
    case 0x7F236248u: goto label_7F236248;
    case 0x7F23624Cu: goto label_7F23624C;
    case 0x7F236250u: goto label_7F236250;
    case 0x7F236254u: goto label_7F236254;
    case 0x7F236258u: goto label_7F236258;
    case 0x7F23625Cu: goto label_7F23625C;
    case 0x7F236260u: goto label_7F236260;
    case 0x7F236264u: goto label_7F236264;
    case 0x7F236268u: goto label_7F236268;
    case 0x7F23626Cu: goto label_7F23626C;
    case 0x7F236270u: goto label_7F236270;
    case 0x7F236274u: goto label_7F236274;
    case 0x7F236278u: goto label_7F236278;
    case 0x7F23627Cu: goto label_7F23627C;
    case 0x7F236280u: goto label_7F236280;
    case 0x7F236284u: goto label_7F236284;
    case 0x7F236288u: goto label_7F236288;
    case 0x7F23628Cu: goto label_7F23628C;
    case 0x7F236290u: goto label_7F236290;
    case 0x7F236294u: goto label_7F236294;
    case 0x7F236298u: goto label_7F236298;
    case 0x7F23629Cu: goto label_7F23629C;
    case 0x7F2362A0u: goto label_7F2362A0;
    case 0x7F2362A4u: goto label_7F2362A4;
    case 0x7F2362A8u: goto label_7F2362A8;
    case 0x7F2362ACu: goto label_7F2362AC;
    case 0x7F2362B0u: goto label_7F2362B0;
    case 0x7F2362B4u: goto label_7F2362B4;
    case 0x7F2362B8u: goto label_7F2362B8;
    case 0x7F2362BCu: goto label_7F2362BC;
    case 0x7F2362C0u: goto label_7F2362C0;
    case 0x7F2362C4u: goto label_7F2362C4;
    case 0x7F2362C8u: goto label_7F2362C8;
    case 0x7F2362CCu: goto label_7F2362CC;
    case 0x7F2362D0u: goto label_7F2362D0;
    case 0x7F2362D4u: goto label_7F2362D4;
    case 0x7F2362D8u: goto label_7F2362D8;
    case 0x7F2362DCu: goto label_7F2362DC;
    case 0x7F2362E0u: goto label_7F2362E0;
    case 0x7F2362E4u: goto label_7F2362E4;
    case 0x7F2362E8u: goto label_7F2362E8;
    case 0x7F2362ECu: goto label_7F2362EC;
    case 0x7F2362F0u: goto label_7F2362F0;
    case 0x7F2362F4u: goto label_7F2362F4;
    case 0x7F2362F8u: goto label_7F2362F8;
    case 0x7F2362FCu: goto label_7F2362FC;
    case 0x7F236300u: goto label_7F236300;
    case 0x7F236304u: goto label_7F236304;
    case 0x7F236308u: goto label_7F236308;
    case 0x7F23630Cu: goto label_7F23630C;
    case 0x7F236310u: goto label_7F236310;
    case 0x7F236314u: goto label_7F236314;
    case 0x7F236318u: goto label_7F236318;
    case 0x7F23631Cu: goto label_7F23631C;
    case 0x7F236320u: goto label_7F236320;
    case 0x7F236324u: goto label_7F236324;
    case 0x7F236328u: goto label_7F236328;
    case 0x7F23632Cu: goto label_7F23632C;
    case 0x7F236330u: goto label_7F236330;
    case 0x7F236334u: goto label_7F236334;
    case 0x7F236338u: goto label_7F236338;
    case 0x7F23633Cu: goto label_7F23633C;
    case 0x7F236340u: goto label_7F236340;
    case 0x7F236344u: goto label_7F236344;
    case 0x7F236348u: goto label_7F236348;
    case 0x7F23634Cu: goto label_7F23634C;
    case 0x7F236350u: goto label_7F236350;
    case 0x7F236354u: goto label_7F236354;
    case 0x7F236358u: goto label_7F236358;
    case 0x7F23635Cu: goto label_7F23635C;
    case 0x7F236360u: goto label_7F236360;
    case 0x7F236364u: goto label_7F236364;
    case 0x7F236368u: goto label_7F236368;
    case 0x7F23636Cu: goto label_7F23636C;
    case 0x7F236370u: goto label_7F236370;
    case 0x7F236374u: goto label_7F236374;
    case 0x7F236378u: goto label_7F236378;
    case 0x7F23637Cu: goto label_7F23637C;
    case 0x7F236380u: goto label_7F236380;
    case 0x7F236384u: goto label_7F236384;
    case 0x7F236388u: goto label_7F236388;
    case 0x7F23638Cu: goto label_7F23638C;
    case 0x7F236390u: goto label_7F236390;
    case 0x7F236394u: goto label_7F236394;
    case 0x7F236398u: goto label_7F236398;
    case 0x7F23639Cu: goto label_7F23639C;
    case 0x7F2363A0u: goto label_7F2363A0;
    case 0x7F2363A4u: goto label_7F2363A4;
    case 0x7F2363A8u: goto label_7F2363A8;
    case 0x7F2363ACu: goto label_7F2363AC;
    case 0x7F2363B0u: goto label_7F2363B0;
    case 0x7F2363B4u: goto label_7F2363B4;
    case 0x7F2363B8u: goto label_7F2363B8;
    case 0x7F2363BCu: goto label_7F2363BC;
    case 0x7F2363C0u: goto label_7F2363C0;
    case 0x7F2363C4u: goto label_7F2363C4;
    case 0x7F2363C8u: goto label_7F2363C8;
    case 0x7F2363CCu: goto label_7F2363CC;
    case 0x7F2363D0u: goto label_7F2363D0;
    case 0x7F2363D4u: goto label_7F2363D4;
    case 0x7F2363D8u: goto label_7F2363D8;
    case 0x7F2363DCu: goto label_7F2363DC;
    case 0x7F2363E0u: goto label_7F2363E0;
    case 0x7F2363E4u: goto label_7F2363E4;
    case 0x7F2363E8u: goto label_7F2363E8;
    case 0x7F2363ECu: goto label_7F2363EC;
    case 0x7F2363F0u: goto label_7F2363F0;
    case 0x7F2363F4u: goto label_7F2363F4;
    case 0x7F2363F8u: goto label_7F2363F8;
    case 0x7F2363FCu: goto label_7F2363FC;
    case 0x7F236400u: goto label_7F236400;
    case 0x7F236404u: goto label_7F236404;
    case 0x7F236408u: goto label_7F236408;
    case 0x7F23640Cu: goto label_7F23640C;
    case 0x7F236410u: goto label_7F236410;
    case 0x7F236414u: goto label_7F236414;
    case 0x7F236418u: goto label_7F236418;
    case 0x7F23641Cu: goto label_7F23641C;
    case 0x7F236420u: goto label_7F236420;
    case 0x7F236424u: goto label_7F236424;
    case 0x7F236428u: goto label_7F236428;
    case 0x7F23642Cu: goto label_7F23642C;
    case 0x7F236430u: goto label_7F236430;
    case 0x7F236434u: goto label_7F236434;
    case 0x7F236438u: goto label_7F236438;
    case 0x7F23643Cu: goto label_7F23643C;
    case 0x7F236440u: goto label_7F236440;
    case 0x7F236444u: goto label_7F236444;
    case 0x7F236448u: goto label_7F236448;
    case 0x7F23644Cu: goto label_7F23644C;
    case 0x7F236450u: goto label_7F236450;
    case 0x7F236454u: goto label_7F236454;
    case 0x7F236458u: goto label_7F236458;
    case 0x7F23645Cu: goto label_7F23645C;
    case 0x7F236460u: goto label_7F236460;
    case 0x7F236464u: goto label_7F236464;
    case 0x7F236468u: goto label_7F236468;
    case 0x7F23646Cu: goto label_7F23646C;
    case 0x7F236470u: goto label_7F236470;
    case 0x7F236474u: goto label_7F236474;
    case 0x7F236478u: goto label_7F236478;
    case 0x7F23647Cu: goto label_7F23647C;
    case 0x7F236480u: goto label_7F236480;
    case 0x7F236484u: goto label_7F236484;
    case 0x7F236488u: goto label_7F236488;
    case 0x7F23648Cu: goto label_7F23648C;
    case 0x7F236490u: goto label_7F236490;
    case 0x7F236494u: goto label_7F236494;
    case 0x7F236498u: goto label_7F236498;
    case 0x7F23649Cu: goto label_7F23649C;
    case 0x7F2364A0u: goto label_7F2364A0;
    case 0x7F2364A4u: goto label_7F2364A4;
    case 0x7F2364A8u: goto label_7F2364A8;
    case 0x7F2364ACu: goto label_7F2364AC;
    case 0x7F2364B0u: goto label_7F2364B0;
    case 0x7F2364B4u: goto label_7F2364B4;
    case 0x7F2364B8u: goto label_7F2364B8;
    case 0x7F2364BCu: goto label_7F2364BC;
    case 0x7F2364C0u: goto label_7F2364C0;
    case 0x7F2364C4u: goto label_7F2364C4;
    case 0x7F2364C8u: goto label_7F2364C8;
    case 0x7F2364CCu: goto label_7F2364CC;
    case 0x7F2364D0u: goto label_7F2364D0;
    case 0x7F2364D4u: goto label_7F2364D4;
    case 0x7F2364D8u: goto label_7F2364D8;
    case 0x7F2364DCu: goto label_7F2364DC;
    case 0x7F2364E0u: goto label_7F2364E0;
    case 0x7F2364E4u: goto label_7F2364E4;
    case 0x7F2364E8u: goto label_7F2364E8;
    case 0x7F2364ECu: goto label_7F2364EC;
    case 0x7F2364F0u: goto label_7F2364F0;
    case 0x7F2364F4u: goto label_7F2364F4;
    case 0x7F2364F8u: goto label_7F2364F8;
    case 0x7F2364FCu: goto label_7F2364FC;
    case 0x7F236500u: goto label_7F236500;
    case 0x7F236504u: goto label_7F236504;
    case 0x7F236508u: goto label_7F236508;
    case 0x7F23650Cu: goto label_7F23650C;
    case 0x7F236510u: goto label_7F236510;
    case 0x7F236514u: goto label_7F236514;
    case 0x7F236518u: goto label_7F236518;
    case 0x7F23651Cu: goto label_7F23651C;
    case 0x7F236520u: goto label_7F236520;
    case 0x7F236524u: goto label_7F236524;
    case 0x7F236528u: goto label_7F236528;
    case 0x7F23652Cu: goto label_7F23652C;
    case 0x7F236530u: goto label_7F236530;
    case 0x7F236534u: goto label_7F236534;
    case 0x7F236538u: goto label_7F236538;
    case 0x7F23653Cu: goto label_7F23653C;
    case 0x7F236540u: goto label_7F236540;
    case 0x7F236544u: goto label_7F236544;
    case 0x7F236548u: goto label_7F236548;
    case 0x7F23654Cu: goto label_7F23654C;
    case 0x7F236550u: goto label_7F236550;
    case 0x7F236554u: goto label_7F236554;
    case 0x7F236558u: goto label_7F236558;
    case 0x7F23655Cu: goto label_7F23655C;
    case 0x7F236560u: goto label_7F236560;
    case 0x7F236564u: goto label_7F236564;
    case 0x7F236568u: goto label_7F236568;
    case 0x7F23656Cu: goto label_7F23656C;
    case 0x7F236570u: goto label_7F236570;
    case 0x7F236574u: goto label_7F236574;
    case 0x7F236578u: goto label_7F236578;
    case 0x7F23657Cu: goto label_7F23657C;
    case 0x7F236580u: goto label_7F236580;
    case 0x7F236584u: goto label_7F236584;
    case 0x7F236588u: goto label_7F236588;
    case 0x7F23658Cu: goto label_7F23658C;
    case 0x7F236590u: goto label_7F236590;
    case 0x7F236594u: goto label_7F236594;
    case 0x7F236598u: goto label_7F236598;
    case 0x7F23659Cu: goto label_7F23659C;
    case 0x7F2365A0u: goto label_7F2365A0;
    case 0x7F2365A4u: goto label_7F2365A4;
    case 0x7F2365A8u: goto label_7F2365A8;
    case 0x7F2365ACu: goto label_7F2365AC;
    case 0x7F2365B0u: goto label_7F2365B0;
    case 0x7F2365B4u: goto label_7F2365B4;
    case 0x7F2365B8u: goto label_7F2365B8;
    case 0x7F2365BCu: goto label_7F2365BC;
    case 0x7F2365C0u: goto label_7F2365C0;
    case 0x7F2365C4u: goto label_7F2365C4;
    case 0x7F2365C8u: goto label_7F2365C8;
    case 0x7F2365CCu: goto label_7F2365CC;
    case 0x7F2365D0u: goto label_7F2365D0;
    case 0x7F2365D4u: goto label_7F2365D4;
    case 0x7F2365D8u: goto label_7F2365D8;
    case 0x7F2365DCu: goto label_7F2365DC;
    case 0x7F2365E0u: goto label_7F2365E0;
    case 0x7F2365E4u: goto label_7F2365E4;
    case 0x7F2365E8u: goto label_7F2365E8;
    case 0x7F2365ECu: goto label_7F2365EC;
    case 0x7F2365F0u: goto label_7F2365F0;
    case 0x7F2365F4u: goto label_7F2365F4;
    case 0x7F2365F8u: goto label_7F2365F8;
    case 0x7F2365FCu: goto label_7F2365FC;
    case 0x7F236600u: goto label_7F236600;
    case 0x7F236604u: goto label_7F236604;
    case 0x7F236608u: goto label_7F236608;
    case 0x7F23660Cu: goto label_7F23660C;
    case 0x7F236610u: goto label_7F236610;
    case 0x7F236614u: goto label_7F236614;
    case 0x7F236618u: goto label_7F236618;
    case 0x7F23661Cu: goto label_7F23661C;
    case 0x7F236620u: goto label_7F236620;
    case 0x7F236624u: goto label_7F236624;
    case 0x7F236628u: goto label_7F236628;
    case 0x7F23662Cu: goto label_7F23662C;
    case 0x7F236630u: goto label_7F236630;
    case 0x7F236634u: goto label_7F236634;
    case 0x7F236638u: goto label_7F236638;
    case 0x7F23663Cu: goto label_7F23663C;
    case 0x7F236640u: goto label_7F236640;
    case 0x7F236644u: goto label_7F236644;
    case 0x7F236648u: goto label_7F236648;
    case 0x7F23664Cu: goto label_7F23664C;
    case 0x7F236650u: goto label_7F236650;
    case 0x7F236654u: goto label_7F236654;
    case 0x7F236658u: goto label_7F236658;
    case 0x7F23665Cu: goto label_7F23665C;
    case 0x7F236660u: goto label_7F236660;
    case 0x7F236664u: goto label_7F236664;
    case 0x7F236668u: goto label_7F236668;
    case 0x7F23666Cu: goto label_7F23666C;
    case 0x7F236670u: goto label_7F236670;
    case 0x7F236674u: goto label_7F236674;
    case 0x7F236678u: goto label_7F236678;
    case 0x7F23667Cu: goto label_7F23667C;
    case 0x7F236680u: goto label_7F236680;
    case 0x7F236684u: goto label_7F236684;
    case 0x7F236688u: goto label_7F236688;
    case 0x7F23668Cu: goto label_7F23668C;
    case 0x7F236690u: goto label_7F236690;
    case 0x7F236694u: goto label_7F236694;
    case 0x7F236698u: goto label_7F236698;
    case 0x7F23669Cu: goto label_7F23669C;
    case 0x7F2366A0u: goto label_7F2366A0;
    case 0x7F2366A4u: goto label_7F2366A4;
    case 0x7F2366A8u: goto label_7F2366A8;
    case 0x7F2366ACu: goto label_7F2366AC;
    case 0x7F2366B0u: goto label_7F2366B0;
    case 0x7F2366B4u: goto label_7F2366B4;
    case 0x7F2366B8u: goto label_7F2366B8;
    case 0x7F2366BCu: goto label_7F2366BC;
    case 0x7F2366C0u: goto label_7F2366C0;
    case 0x7F2366C4u: goto label_7F2366C4;
    case 0x7F2366C8u: goto label_7F2366C8;
    case 0x7F2366CCu: goto label_7F2366CC;
    case 0x7F2366D0u: goto label_7F2366D0;
    case 0x7F2366D4u: goto label_7F2366D4;
    case 0x7F2366D8u: goto label_7F2366D8;
    case 0x7F2366DCu: goto label_7F2366DC;
    case 0x7F2366E0u: goto label_7F2366E0;
    case 0x7F2366E4u: goto label_7F2366E4;
    case 0x7F2366E8u: goto label_7F2366E8;
    case 0x7F2366ECu: goto label_7F2366EC;
    case 0x7F2366F0u: goto label_7F2366F0;
    case 0x7F2366F4u: goto label_7F2366F4;
    case 0x7F2366F8u: goto label_7F2366F8;
    case 0x7F2366FCu: goto label_7F2366FC;
    case 0x7F236700u: goto label_7F236700;
    case 0x7F236704u: goto label_7F236704;
    case 0x7F236708u: goto label_7F236708;
    case 0x7F23670Cu: goto label_7F23670C;
    case 0x7F236710u: goto label_7F236710;
    case 0x7F236714u: goto label_7F236714;
    case 0x7F236718u: goto label_7F236718;
    case 0x7F23671Cu: goto label_7F23671C;
    case 0x7F236720u: goto label_7F236720;
    case 0x7F236724u: goto label_7F236724;
    case 0x7F236728u: goto label_7F236728;
    case 0x7F23672Cu: goto label_7F23672C;
    case 0x7F236730u: goto label_7F236730;
    case 0x7F236734u: goto label_7F236734;
    case 0x7F236738u: goto label_7F236738;
    case 0x7F23673Cu: goto label_7F23673C;
    case 0x7F236740u: goto label_7F236740;
    case 0x7F236744u: goto label_7F236744;
    case 0x7F236748u: goto label_7F236748;
    case 0x7F23674Cu: goto label_7F23674C;
    case 0x7F236750u: goto label_7F236750;
    case 0x7F236754u: goto label_7F236754;
    case 0x7F236758u: goto label_7F236758;
    case 0x7F23675Cu: goto label_7F23675C;
    case 0x7F236760u: goto label_7F236760;
    case 0x7F236764u: goto label_7F236764;
    case 0x7F236768u: goto label_7F236768;
    case 0x7F23676Cu: goto label_7F23676C;
    case 0x7F236770u: goto label_7F236770;
    case 0x7F236774u: goto label_7F236774;
    case 0x7F236778u: goto label_7F236778;
    case 0x7F23677Cu: goto label_7F23677C;
    case 0x7F236780u: goto label_7F236780;
    case 0x7F236784u: goto label_7F236784;
    case 0x7F236788u: goto label_7F236788;
    case 0x7F23678Cu: goto label_7F23678C;
    case 0x7F236790u: goto label_7F236790;
    case 0x7F236794u: goto label_7F236794;
    case 0x7F236798u: goto label_7F236798;
    case 0x7F23679Cu: goto label_7F23679C;
    case 0x7F2367A0u: goto label_7F2367A0;
    case 0x7F2367A4u: goto label_7F2367A4;
    case 0x7F2367A8u: goto label_7F2367A8;
    case 0x7F2367ACu: goto label_7F2367AC;
    case 0x7F2367B0u: goto label_7F2367B0;
    case 0x7F2367B4u: goto label_7F2367B4;
    case 0x7F2367B8u: goto label_7F2367B8;
    case 0x7F2367BCu: goto label_7F2367BC;
    case 0x7F2367C0u: goto label_7F2367C0;
    case 0x7F2367C4u: goto label_7F2367C4;
    case 0x7F2367C8u: goto label_7F2367C8;
    case 0x7F2367CCu: goto label_7F2367CC;
    case 0x7F2367D0u: goto label_7F2367D0;
    case 0x7F2367D4u: goto label_7F2367D4;
    case 0x7F2367D8u: goto label_7F2367D8;
    case 0x7F2367DCu: goto label_7F2367DC;
    case 0x7F2367E0u: goto label_7F2367E0;
    case 0x7F2367E4u: goto label_7F2367E4;
    case 0x7F2367E8u: goto label_7F2367E8;
    case 0x7F2367ECu: goto label_7F2367EC;
    case 0x7F2367F0u: goto label_7F2367F0;
    case 0x7F2367F4u: goto label_7F2367F4;
    case 0x7F2367F8u: goto label_7F2367F8;
    case 0x7F2367FCu: goto label_7F2367FC;
    case 0x7F236800u: goto label_7F236800;
    case 0x7F236804u: goto label_7F236804;
    case 0x7F236808u: goto label_7F236808;
    case 0x7F23680Cu: goto label_7F23680C;
    case 0x7F236810u: goto label_7F236810;
    case 0x7F236814u: goto label_7F236814;
    case 0x7F236818u: goto label_7F236818;
    case 0x7F23681Cu: goto label_7F23681C;
    case 0x7F236820u: goto label_7F236820;
    case 0x7F236824u: goto label_7F236824;
    case 0x7F236828u: goto label_7F236828;
    case 0x7F23682Cu: goto label_7F23682C;
    case 0x7F236830u: goto label_7F236830;
    case 0x7F236834u: goto label_7F236834;
    case 0x7F236838u: goto label_7F236838;
    case 0x7F23683Cu: goto label_7F23683C;
    case 0x7F236840u: goto label_7F236840;
    case 0x7F236844u: goto label_7F236844;
    case 0x7F236848u: goto label_7F236848;
    case 0x7F23684Cu: goto label_7F23684C;
    case 0x7F236850u: goto label_7F236850;
    case 0x7F236854u: goto label_7F236854;
    case 0x7F236858u: goto label_7F236858;
    case 0x7F23685Cu: goto label_7F23685C;
    case 0x7F236860u: goto label_7F236860;
    case 0x7F236864u: goto label_7F236864;
    case 0x7F236868u: goto label_7F236868;
    case 0x7F23686Cu: goto label_7F23686C;
    case 0x7F236870u: goto label_7F236870;
    case 0x7F236874u: goto label_7F236874;
    case 0x7F236878u: goto label_7F236878;
    case 0x7F23687Cu: goto label_7F23687C;
    case 0x7F236880u: goto label_7F236880;
    case 0x7F236884u: goto label_7F236884;
    case 0x7F236888u: goto label_7F236888;
    case 0x7F23688Cu: goto label_7F23688C;
    case 0x7F236890u: goto label_7F236890;
    case 0x7F236894u: goto label_7F236894;
    case 0x7F236898u: goto label_7F236898;
    case 0x7F23689Cu: goto label_7F23689C;
    case 0x7F2368A0u: goto label_7F2368A0;
    case 0x7F2368A4u: goto label_7F2368A4;
    case 0x7F2368A8u: goto label_7F2368A8;
    case 0x7F2368ACu: goto label_7F2368AC;
    case 0x7F2368B0u: goto label_7F2368B0;
    case 0x7F2368B4u: goto label_7F2368B4;
    case 0x7F2368B8u: goto label_7F2368B8;
    case 0x7F2368BCu: goto label_7F2368BC;
    case 0x7F2368C0u: goto label_7F2368C0;
    case 0x7F2368C4u: goto label_7F2368C4;
    case 0x7F2368C8u: goto label_7F2368C8;
    case 0x7F2368CCu: goto label_7F2368CC;
    case 0x7F2368D0u: goto label_7F2368D0;
    case 0x7F2368D4u: goto label_7F2368D4;
    case 0x7F2368D8u: goto label_7F2368D8;
    case 0x7F2368DCu: goto label_7F2368DC;
    case 0x7F2368E0u: goto label_7F2368E0;
    case 0x7F2368E4u: goto label_7F2368E4;
    case 0x7F2368E8u: goto label_7F2368E8;
    case 0x7F2368ECu: goto label_7F2368EC;
    case 0x7F2368F0u: goto label_7F2368F0;
    case 0x7F2368F4u: goto label_7F2368F4;
    case 0x7F2368F8u: goto label_7F2368F8;
    case 0x7F2368FCu: goto label_7F2368FC;
    case 0x7F236900u: goto label_7F236900;
    case 0x7F236904u: goto label_7F236904;
    case 0x7F236908u: goto label_7F236908;
    case 0x7F23690Cu: goto label_7F23690C;
    case 0x7F236910u: goto label_7F236910;
    case 0x7F236914u: goto label_7F236914;
    case 0x7F236918u: goto label_7F236918;
    case 0x7F23691Cu: goto label_7F23691C;
    case 0x7F236920u: goto label_7F236920;
    case 0x7F236924u: goto label_7F236924;
    case 0x7F236928u: goto label_7F236928;
    case 0x7F23692Cu: goto label_7F23692C;
    case 0x7F236930u: goto label_7F236930;
    case 0x7F236934u: goto label_7F236934;
    case 0x7F236938u: goto label_7F236938;
    case 0x7F23693Cu: goto label_7F23693C;
    case 0x7F236940u: goto label_7F236940;
    case 0x7F236944u: goto label_7F236944;
    case 0x7F236948u: goto label_7F236948;
    case 0x7F23694Cu: goto label_7F23694C;
    case 0x7F236950u: goto label_7F236950;
    case 0x7F236954u: goto label_7F236954;
    case 0x7F236958u: goto label_7F236958;
    case 0x7F23695Cu: goto label_7F23695C;
    case 0x7F236960u: goto label_7F236960;
    case 0x7F236964u: goto label_7F236964;
    case 0x7F236968u: goto label_7F236968;
    case 0x7F23696Cu: goto label_7F23696C;
    case 0x7F236970u: goto label_7F236970;
    case 0x7F236974u: goto label_7F236974;
    case 0x7F236978u: goto label_7F236978;
    case 0x7F23697Cu: goto label_7F23697C;
    case 0x7F236980u: goto label_7F236980;
    case 0x7F236984u: goto label_7F236984;
    case 0x7F236988u: goto label_7F236988;
    case 0x7F23698Cu: goto label_7F23698C;
    case 0x7F236990u: goto label_7F236990;
    case 0x7F236994u: goto label_7F236994;
    case 0x7F236998u: goto label_7F236998;
    case 0x7F23699Cu: goto label_7F23699C;
    case 0x7F2369A0u: goto label_7F2369A0;
    case 0x7F2369A4u: goto label_7F2369A4;
    case 0x7F2369A8u: goto label_7F2369A8;
    case 0x7F2369ACu: goto label_7F2369AC;
    case 0x7F2369B0u: goto label_7F2369B0;
    case 0x7F2369B4u: goto label_7F2369B4;
    case 0x7F2369B8u: goto label_7F2369B8;
    case 0x7F2369BCu: goto label_7F2369BC;
    case 0x7F2369C0u: goto label_7F2369C0;
    case 0x7F2369C4u: goto label_7F2369C4;
    case 0x7F2369C8u: goto label_7F2369C8;
    case 0x7F2369CCu: goto label_7F2369CC;
    case 0x7F2369D0u: goto label_7F2369D0;
    case 0x7F2369D4u: goto label_7F2369D4;
    case 0x7F2369D8u: goto label_7F2369D8;
    case 0x7F2369DCu: goto label_7F2369DC;
    case 0x7F2369E0u: goto label_7F2369E0;
    case 0x7F2369E4u: goto label_7F2369E4;
    case 0x7F2369E8u: goto label_7F2369E8;
    case 0x7F2369ECu: goto label_7F2369EC;
    case 0x7F2369F0u: goto label_7F2369F0;
    case 0x7F2369F4u: goto label_7F2369F4;
    case 0x7F2369F8u: goto label_7F2369F8;
    case 0x7F2369FCu: goto label_7F2369FC;
    case 0x7F236A00u: goto label_7F236A00;
    case 0x7F236A04u: goto label_7F236A04;
    case 0x7F236A08u: goto label_7F236A08;
    case 0x7F236A0Cu: goto label_7F236A0C;
    case 0x7F236A10u: goto label_7F236A10;
    case 0x7F236A14u: goto label_7F236A14;
    case 0x7F236A18u: goto label_7F236A18;
    case 0x7F236A1Cu: goto label_7F236A1C;
    case 0x7F236A20u: goto label_7F236A20;
    case 0x7F236A24u: goto label_7F236A24;
    case 0x7F236A28u: goto label_7F236A28;
    case 0x7F236A2Cu: goto label_7F236A2C;
    case 0x7F236A30u: goto label_7F236A30;
    case 0x7F236A34u: goto label_7F236A34;
    case 0x7F236A38u: goto label_7F236A38;
    case 0x7F236A3Cu: goto label_7F236A3C;
    case 0x7F236A40u: goto label_7F236A40;
    case 0x7F236A44u: goto label_7F236A44;
    case 0x7F236A48u: goto label_7F236A48;
    case 0x7F236A4Cu: goto label_7F236A4C;
    case 0x7F236A50u: goto label_7F236A50;
    case 0x7F236A54u: goto label_7F236A54;
    case 0x7F236A58u: goto label_7F236A58;
    case 0x7F236A5Cu: goto label_7F236A5C;
    case 0x7F236A60u: goto label_7F236A60;
    case 0x7F236A64u: goto label_7F236A64;
    case 0x7F236A68u: goto label_7F236A68;
    case 0x7F236A6Cu: goto label_7F236A6C;
    case 0x7F236A70u: goto label_7F236A70;
    case 0x7F236A74u: goto label_7F236A74;
    case 0x7F236A78u: goto label_7F236A78;
    case 0x7F236A7Cu: goto label_7F236A7C;
    case 0x7F236A80u: goto label_7F236A80;
    case 0x7F236A84u: goto label_7F236A84;
    case 0x7F236A88u: goto label_7F236A88;
    case 0x7F236A8Cu: goto label_7F236A8C;
    case 0x7F236A90u: goto label_7F236A90;
    case 0x7F236A94u: goto label_7F236A94;
    case 0x7F236A98u: goto label_7F236A98;
    case 0x7F236A9Cu: goto label_7F236A9C;
    case 0x7F236AA0u: goto label_7F236AA0;
    case 0x7F236AA4u: goto label_7F236AA4;
    case 0x7F236AA8u: goto label_7F236AA8;
    case 0x7F236AACu: goto label_7F236AAC;
    case 0x7F236AB0u: goto label_7F236AB0;
    case 0x7F236AB4u: goto label_7F236AB4;
    case 0x7F236AB8u: goto label_7F236AB8;
    case 0x7F236ABCu: goto label_7F236ABC;
    case 0x7F236AC0u: goto label_7F236AC0;
    case 0x7F236AC4u: goto label_7F236AC4;
    case 0x7F236AC8u: goto label_7F236AC8;
    case 0x7F236ACCu: goto label_7F236ACC;
    case 0x7F236AD0u: goto label_7F236AD0;
    case 0x7F236AD4u: goto label_7F236AD4;
    case 0x7F236AD8u: goto label_7F236AD8;
    case 0x7F236ADCu: goto label_7F236ADC;
    case 0x7F236AE0u: goto label_7F236AE0;
    case 0x7F236AE4u: goto label_7F236AE4;
    case 0x7F236AE8u: goto label_7F236AE8;
    case 0x7F236AECu: goto label_7F236AEC;
    case 0x7F236AF0u: goto label_7F236AF0;
    case 0x7F236AF4u: goto label_7F236AF4;
    case 0x7F236AF8u: goto label_7F236AF8;
    case 0x7F236AFCu: goto label_7F236AFC;
    case 0x7F236B00u: goto label_7F236B00;
    case 0x7F236B04u: goto label_7F236B04;
    case 0x7F236B08u: goto label_7F236B08;
    case 0x7F236B0Cu: goto label_7F236B0C;
    case 0x7F236B10u: goto label_7F236B10;
    case 0x7F236B14u: goto label_7F236B14;
    case 0x7F236B18u: goto label_7F236B18;
    case 0x7F236B1Cu: goto label_7F236B1C;
    case 0x7F236B20u: goto label_7F236B20;
    case 0x7F236B24u: goto label_7F236B24;
    case 0x7F236B28u: goto label_7F236B28;
    case 0x7F236B2Cu: goto label_7F236B2C;
    case 0x7F236B30u: goto label_7F236B30;
    case 0x7F236B34u: goto label_7F236B34;
    case 0x7F236B38u: goto label_7F236B38;
    case 0x7F236B3Cu: goto label_7F236B3C;
    case 0x7F236B40u: goto label_7F236B40;
    case 0x7F236B44u: goto label_7F236B44;
    case 0x7F236B48u: goto label_7F236B48;
    case 0x7F236B4Cu: goto label_7F236B4C;
    case 0x7F236B50u: goto label_7F236B50;
    case 0x7F236B54u: goto label_7F236B54;
    case 0x7F236B58u: goto label_7F236B58;
    case 0x7F236B5Cu: goto label_7F236B5C;
    case 0x7F236B60u: goto label_7F236B60;
    case 0x7F236B64u: goto label_7F236B64;
    case 0x7F236B68u: goto label_7F236B68;
    case 0x7F236B6Cu: goto label_7F236B6C;
    case 0x7F236B70u: goto label_7F236B70;
    case 0x7F236B74u: goto label_7F236B74;
    case 0x7F236B78u: goto label_7F236B78;
    case 0x7F236B7Cu: goto label_7F236B7C;
    case 0x7F236B80u: goto label_7F236B80;
    case 0x7F236B84u: goto label_7F236B84;
    case 0x7F236B88u: goto label_7F236B88;
    case 0x7F236B8Cu: goto label_7F236B8C;
    case 0x7F236B90u: goto label_7F236B90;
    case 0x7F236B94u: goto label_7F236B94;
    case 0x7F236B98u: goto label_7F236B98;
    case 0x7F236B9Cu: goto label_7F236B9C;
    case 0x7F236BA0u: goto label_7F236BA0;
    case 0x7F236BA4u: goto label_7F236BA4;
    case 0x7F236BA8u: goto label_7F236BA8;
    case 0x7F236BACu: goto label_7F236BAC;
    case 0x7F236BB0u: goto label_7F236BB0;
    case 0x7F236BB4u: goto label_7F236BB4;
    case 0x7F236BB8u: goto label_7F236BB8;
    case 0x7F236BBCu: goto label_7F236BBC;
    case 0x7F236BC0u: goto label_7F236BC0;
    case 0x7F236BC4u: goto label_7F236BC4;
    case 0x7F236BC8u: goto label_7F236BC8;
    case 0x7F236BCCu: goto label_7F236BCC;
    case 0x7F236BD0u: goto label_7F236BD0;
    case 0x7F236BD4u: goto label_7F236BD4;
    case 0x7F236BD8u: goto label_7F236BD8;
    case 0x7F236BDCu: goto label_7F236BDC;
    case 0x7F236BE0u: goto label_7F236BE0;
    case 0x7F236BE4u: goto label_7F236BE4;
    case 0x7F236BE8u: goto label_7F236BE8;
    case 0x7F236BECu: goto label_7F236BEC;
    case 0x7F236BF0u: goto label_7F236BF0;
    case 0x7F236BF4u: goto label_7F236BF4;
    case 0x7F236BF8u: goto label_7F236BF8;
    case 0x7F236BFCu: goto label_7F236BFC;
    case 0x7F236C00u: goto label_7F236C00;
    case 0x7F236C04u: goto label_7F236C04;
    case 0x7F236C08u: goto label_7F236C08;
    case 0x7F236C0Cu: goto label_7F236C0C;
    case 0x7F236C10u: goto label_7F236C10;
    case 0x7F236C14u: goto label_7F236C14;
    case 0x7F236C18u: goto label_7F236C18;
    case 0x7F236C1Cu: goto label_7F236C1C;
    case 0x7F236C20u: goto label_7F236C20;
    case 0x7F236C24u: goto label_7F236C24;
    case 0x7F236C28u: goto label_7F236C28;
    case 0x7F236C2Cu: goto label_7F236C2C;
    case 0x7F236C30u: goto label_7F236C30;
    case 0x7F236C34u: goto label_7F236C34;
    case 0x7F236C38u: goto label_7F236C38;
    case 0x7F236C3Cu: goto label_7F236C3C;
    case 0x7F236C40u: goto label_7F236C40;
    case 0x7F236C44u: goto label_7F236C44;
    case 0x7F236C48u: goto label_7F236C48;
    case 0x7F236C4Cu: goto label_7F236C4C;
    case 0x7F236C50u: goto label_7F236C50;
    case 0x7F236C54u: goto label_7F236C54;
    case 0x7F236C58u: goto label_7F236C58;
    case 0x7F236C5Cu: goto label_7F236C5C;
    case 0x7F236C60u: goto label_7F236C60;
    case 0x7F236C64u: goto label_7F236C64;
    case 0x7F236C68u: goto label_7F236C68;
    case 0x7F236C6Cu: goto label_7F236C6C;
    case 0x7F236C70u: goto label_7F236C70;
    case 0x7F236C74u: goto label_7F236C74;
    case 0x7F236C78u: goto label_7F236C78;
    case 0x7F236C7Cu: goto label_7F236C7C;
    case 0x7F236C80u: goto label_7F236C80;
    case 0x7F236C84u: goto label_7F236C84;
    case 0x7F236C88u: goto label_7F236C88;
    case 0x7F236C8Cu: goto label_7F236C8C;
    case 0x7F236C90u: goto label_7F236C90;
    case 0x7F236C94u: goto label_7F236C94;
    case 0x7F236C98u: goto label_7F236C98;
    case 0x7F236C9Cu: goto label_7F236C9C;
    case 0x7F236CA0u: goto label_7F236CA0;
    case 0x7F236CA4u: goto label_7F236CA4;
    case 0x7F236CA8u: goto label_7F236CA8;
    case 0x7F236CACu: goto label_7F236CAC;
    case 0x7F236CB0u: goto label_7F236CB0;
    case 0x7F236CB4u: goto label_7F236CB4;
    case 0x7F236CB8u: goto label_7F236CB8;
    case 0x7F236CBCu: goto label_7F236CBC;
    case 0x7F236CC0u: goto label_7F236CC0;
    case 0x7F236CC4u: goto label_7F236CC4;
    case 0x7F236CC8u: goto label_7F236CC8;
    case 0x7F236CCCu: goto label_7F236CCC;
    case 0x7F236CD0u: goto label_7F236CD0;
    case 0x7F236CD4u: goto label_7F236CD4;
    case 0x7F236CD8u: goto label_7F236CD8;
    case 0x7F236CDCu: goto label_7F236CDC;
    case 0x7F236CE0u: goto label_7F236CE0;
    case 0x7F236CE4u: goto label_7F236CE4;
    case 0x7F236CE8u: goto label_7F236CE8;
    case 0x7F236CECu: goto label_7F236CEC;
    case 0x7F236CF0u: goto label_7F236CF0;
    case 0x7F236CF4u: goto label_7F236CF4;
    case 0x7F236CF8u: goto label_7F236CF8;
    case 0x7F236CFCu: goto label_7F236CFC;
    case 0x7F236D00u: goto label_7F236D00;
    case 0x7F236D04u: goto label_7F236D04;
    case 0x7F236D08u: goto label_7F236D08;
    case 0x7F236D0Cu: goto label_7F236D0C;
    case 0x7F236D10u: goto label_7F236D10;
    case 0x7F236D14u: goto label_7F236D14;
    case 0x7F236D18u: goto label_7F236D18;
    case 0x7F236D1Cu: goto label_7F236D1C;
    case 0x7F236D20u: goto label_7F236D20;
    case 0x7F236D24u: goto label_7F236D24;
    case 0x7F236D28u: goto label_7F236D28;
    case 0x7F236D2Cu: goto label_7F236D2C;
    case 0x7F236D30u: goto label_7F236D30;
    case 0x7F236D34u: goto label_7F236D34;
    case 0x7F236D38u: goto label_7F236D38;
    case 0x7F236D3Cu: goto label_7F236D3C;
    case 0x7F236D40u: goto label_7F236D40;
    case 0x7F236D44u: goto label_7F236D44;
    case 0x7F236D48u: goto label_7F236D48;
    case 0x7F236D4Cu: goto label_7F236D4C;
    case 0x7F236D50u: goto label_7F236D50;
    case 0x7F236D54u: goto label_7F236D54;
    case 0x7F236D58u: goto label_7F236D58;
    case 0x7F236D5Cu: goto label_7F236D5C;
    case 0x7F236D60u: goto label_7F236D60;
    case 0x7F236D64u: goto label_7F236D64;
    case 0x7F236D68u: goto label_7F236D68;
    case 0x7F236D6Cu: goto label_7F236D6C;
    case 0x7F236D70u: goto label_7F236D70;
    case 0x7F236D74u: goto label_7F236D74;
    case 0x7F236D78u: goto label_7F236D78;
    case 0x7F236D7Cu: goto label_7F236D7C;
    case 0x7F236D80u: goto label_7F236D80;
    case 0x7F236D84u: goto label_7F236D84;
    case 0x7F236D88u: goto label_7F236D88;
    case 0x7F236D8Cu: goto label_7F236D8C;
    case 0x7F236D90u: goto label_7F236D90;
    case 0x7F236D94u: goto label_7F236D94;
    case 0x7F236D98u: goto label_7F236D98;
    case 0x7F236D9Cu: goto label_7F236D9C;
    case 0x7F236DA0u: goto label_7F236DA0;
    case 0x7F236DA4u: goto label_7F236DA4;
    case 0x7F236DA8u: goto label_7F236DA8;
    case 0x7F236DACu: goto label_7F236DAC;
    case 0x7F236DB0u: goto label_7F236DB0;
    case 0x7F236DB4u: goto label_7F236DB4;
    case 0x7F236DB8u: goto label_7F236DB8;
    case 0x7F236DBCu: goto label_7F236DBC;
    case 0x7F236DC0u: goto label_7F236DC0;
    case 0x7F236DC4u: goto label_7F236DC4;
    case 0x7F236DC8u: goto label_7F236DC8;
    case 0x7F236DCCu: goto label_7F236DCC;
    case 0x7F236DD0u: goto label_7F236DD0;
    case 0x7F236DD4u: goto label_7F236DD4;
    case 0x7F236DD8u: goto label_7F236DD8;
    case 0x7F236DDCu: goto label_7F236DDC;
    case 0x7F236DE0u: goto label_7F236DE0;
    case 0x7F236DE4u: goto label_7F236DE4;
    case 0x7F236DE8u: goto label_7F236DE8;
    case 0x7F236DECu: goto label_7F236DEC;
    case 0x7F236DF0u: goto label_7F236DF0;
    case 0x7F236DF4u: goto label_7F236DF4;
    case 0x7F236DF8u: goto label_7F236DF8;
    case 0x7F236DFCu: goto label_7F236DFC;
    case 0x7F236E00u: goto label_7F236E00;
    case 0x7F236E04u: goto label_7F236E04;
    case 0x7F236E08u: goto label_7F236E08;
    case 0x7F236E0Cu: goto label_7F236E0C;
    case 0x7F236E10u: goto label_7F236E10;
    case 0x7F236E14u: goto label_7F236E14;
    case 0x7F236E18u: goto label_7F236E18;
    case 0x7F236E1Cu: goto label_7F236E1C;
    case 0x7F236E20u: goto label_7F236E20;
    case 0x7F236E24u: goto label_7F236E24;
    case 0x7F236E28u: goto label_7F236E28;
    case 0x7F236E2Cu: goto label_7F236E2C;
    case 0x7F236E30u: goto label_7F236E30;
    case 0x7F236E34u: goto label_7F236E34;
    case 0x7F236E38u: goto label_7F236E38;
    case 0x7F236E3Cu: goto label_7F236E3C;
    case 0x7F236E40u: goto label_7F236E40;
    case 0x7F236E44u: goto label_7F236E44;
    case 0x7F236E48u: goto label_7F236E48;
    case 0x7F236E4Cu: goto label_7F236E4C;
    case 0x7F236E50u: goto label_7F236E50;
    case 0x7F236E54u: goto label_7F236E54;
    case 0x7F236E58u: goto label_7F236E58;
    case 0x7F236E5Cu: goto label_7F236E5C;
    case 0x7F236E60u: goto label_7F236E60;
    case 0x7F236E64u: goto label_7F236E64;
    case 0x7F236E68u: goto label_7F236E68;
    case 0x7F236E6Cu: goto label_7F236E6C;
    case 0x7F236E70u: goto label_7F236E70;
    case 0x7F236E74u: goto label_7F236E74;
    case 0x7F236E78u: goto label_7F236E78;
    case 0x7F236E7Cu: goto label_7F236E7C;
    case 0x7F236E80u: goto label_7F236E80;
    case 0x7F236E84u: goto label_7F236E84;
    case 0x7F236E88u: goto label_7F236E88;
    case 0x7F236E8Cu: goto label_7F236E8C;
    case 0x7F236E90u: goto label_7F236E90;
    case 0x7F236E94u: goto label_7F236E94;
    case 0x7F236E98u: goto label_7F236E98;
    case 0x7F236E9Cu: goto label_7F236E9C;
    case 0x7F236EA0u: goto label_7F236EA0;
    case 0x7F236EA4u: goto label_7F236EA4;
    case 0x7F236EA8u: goto label_7F236EA8;
    case 0x7F236EACu: goto label_7F236EAC;
    case 0x7F236EB0u: goto label_7F236EB0;
    case 0x7F236EB4u: goto label_7F236EB4;
    case 0x7F236EB8u: goto label_7F236EB8;
    case 0x7F236EBCu: goto label_7F236EBC;
    case 0x7F236EC0u: goto label_7F236EC0;
    case 0x7F236EC4u: goto label_7F236EC4;
    case 0x7F236EC8u: goto label_7F236EC8;
    case 0x7F236ECCu: goto label_7F236ECC;
    case 0x7F236ED0u: goto label_7F236ED0;
    case 0x7F236ED4u: goto label_7F236ED4;
    case 0x7F236ED8u: goto label_7F236ED8;
    case 0x7F236EDCu: goto label_7F236EDC;
    case 0x7F236EE0u: goto label_7F236EE0;
    case 0x7F236EE4u: goto label_7F236EE4;
    case 0x7F236EE8u: goto label_7F236EE8;
    case 0x7F236EECu: goto label_7F236EEC;
    case 0x7F236EF0u: goto label_7F236EF0;
    case 0x7F236EF4u: goto label_7F236EF4;
    case 0x7F236EF8u: goto label_7F236EF8;
    case 0x7F236EFCu: goto label_7F236EFC;
    case 0x7F236F00u: goto label_7F236F00;
    case 0x7F236F04u: goto label_7F236F04;
    case 0x7F236F08u: goto label_7F236F08;
    case 0x7F236F0Cu: goto label_7F236F0C;
    case 0x7F236F10u: goto label_7F236F10;
    case 0x7F236F14u: goto label_7F236F14;
    case 0x7F236F18u: goto label_7F236F18;
    case 0x7F236F1Cu: goto label_7F236F1C;
    case 0x7F236F20u: goto label_7F236F20;
    case 0x7F236F24u: goto label_7F236F24;
    case 0x7F236F28u: goto label_7F236F28;
    case 0x7F236F2Cu: goto label_7F236F2C;
    case 0x7F236F30u: goto label_7F236F30;
    case 0x7F236F34u: goto label_7F236F34;
    case 0x7F236F38u: goto label_7F236F38;
    case 0x7F236F3Cu: goto label_7F236F3C;
    case 0x7F236F40u: goto label_7F236F40;
    case 0x7F236F44u: goto label_7F236F44;
    case 0x7F236F48u: goto label_7F236F48;
    case 0x7F236F4Cu: goto label_7F236F4C;
    case 0x7F236F50u: goto label_7F236F50;
    case 0x7F236F54u: goto label_7F236F54;
    case 0x7F236F58u: goto label_7F236F58;
    case 0x7F236F5Cu: goto label_7F236F5C;
    case 0x7F236F60u: goto label_7F236F60;
    case 0x7F236F64u: goto label_7F236F64;
    case 0x7F236F68u: goto label_7F236F68;
    case 0x7F236F6Cu: goto label_7F236F6C;
    case 0x7F236F70u: goto label_7F236F70;
    case 0x7F236F74u: goto label_7F236F74;
    case 0x7F236F78u: goto label_7F236F78;
    case 0x7F236F7Cu: goto label_7F236F7C;
    case 0x7F236F80u: goto label_7F236F80;
    case 0x7F236F84u: goto label_7F236F84;
    case 0x7F236F88u: goto label_7F236F88;
    case 0x7F236F8Cu: goto label_7F236F8C;
    case 0x7F236F90u: goto label_7F236F90;
    case 0x7F236F94u: goto label_7F236F94;
    case 0x7F236F98u: goto label_7F236F98;
    case 0x7F236F9Cu: goto label_7F236F9C;
    case 0x7F236FA0u: goto label_7F236FA0;
    case 0x7F236FA4u: goto label_7F236FA4;
    case 0x7F236FA8u: goto label_7F236FA8;
    case 0x7F236FACu: goto label_7F236FAC;
    case 0x7F236FB0u: goto label_7F236FB0;
    case 0x7F236FB4u: goto label_7F236FB4;
    case 0x7F236FB8u: goto label_7F236FB8;
    case 0x7F236FBCu: goto label_7F236FBC;
    case 0x7F236FC0u: goto label_7F236FC0;
    case 0x7F236FC4u: goto label_7F236FC4;
    case 0x7F236FC8u: goto label_7F236FC8;
    case 0x7F236FCCu: goto label_7F236FCC;
    case 0x7F236FD0u: goto label_7F236FD0;
    case 0x7F236FD4u: goto label_7F236FD4;
    case 0x7F236FD8u: goto label_7F236FD8;
    case 0x7F236FDCu: goto label_7F236FDC;
    case 0x7F236FE0u: goto label_7F236FE0;
    case 0x7F236FE4u: goto label_7F236FE4;
    case 0x7F236FE8u: goto label_7F236FE8;
    case 0x7F236FECu: goto label_7F236FEC;
    case 0x7F236FF0u: goto label_7F236FF0;
    case 0x7F236FF4u: goto label_7F236FF4;
    case 0x7F236FF8u: goto label_7F236FF8;
    case 0x7F236FFCu: goto label_7F236FFC;
    case 0x7F237000u: goto label_7F237000;
    case 0x7F237004u: goto label_7F237004;
    case 0x7F237008u: goto label_7F237008;
    case 0x7F23700Cu: goto label_7F23700C;
    case 0x7F237010u: goto label_7F237010;
    case 0x7F237014u: goto label_7F237014;
    case 0x7F237018u: goto label_7F237018;
    case 0x7F23701Cu: goto label_7F23701C;
    case 0x7F237020u: goto label_7F237020;
    case 0x7F237024u: goto label_7F237024;
    case 0x7F237028u: goto label_7F237028;
    case 0x7F23702Cu: goto label_7F23702C;
    case 0x7F237030u: goto label_7F237030;
    case 0x7F237034u: goto label_7F237034;
    case 0x7F237038u: goto label_7F237038;
    case 0x7F23703Cu: goto label_7F23703C;
    case 0x7F237040u: goto label_7F237040;
    case 0x7F237044u: goto label_7F237044;
    case 0x7F237048u: goto label_7F237048;
    case 0x7F23704Cu: goto label_7F23704C;
    case 0x7F237050u: goto label_7F237050;
    case 0x7F237054u: goto label_7F237054;
    case 0x7F237058u: goto label_7F237058;
    case 0x7F23705Cu: goto label_7F23705C;
    case 0x7F237060u: goto label_7F237060;
    case 0x7F237064u: goto label_7F237064;
    case 0x7F237068u: goto label_7F237068;
    case 0x7F23706Cu: goto label_7F23706C;
    case 0x7F237070u: goto label_7F237070;
    case 0x7F237074u: goto label_7F237074;
    case 0x7F237078u: goto label_7F237078;
    case 0x7F23707Cu: goto label_7F23707C;
    case 0x7F237080u: goto label_7F237080;
    case 0x7F237084u: goto label_7F237084;
    case 0x7F237088u: goto label_7F237088;
    case 0x7F23708Cu: goto label_7F23708C;
    case 0x7F237090u: goto label_7F237090;
    case 0x7F237094u: goto label_7F237094;
    case 0x7F237098u: goto label_7F237098;
    case 0x7F23709Cu: goto label_7F23709C;
    case 0x7F2370A0u: goto label_7F2370A0;
    case 0x7F2370A4u: goto label_7F2370A4;
    case 0x7F2370A8u: goto label_7F2370A8;
    case 0x7F2370ACu: goto label_7F2370AC;
    case 0x7F2370B0u: goto label_7F2370B0;
    case 0x7F2370B4u: goto label_7F2370B4;
    case 0x7F2370B8u: goto label_7F2370B8;
    case 0x7F2370BCu: goto label_7F2370BC;
    case 0x7F2370C0u: goto label_7F2370C0;
    case 0x7F2370C4u: goto label_7F2370C4;
    case 0x7F2370C8u: goto label_7F2370C8;
    case 0x7F2370CCu: goto label_7F2370CC;
    case 0x7F2370D0u: goto label_7F2370D0;
    case 0x7F2370D4u: goto label_7F2370D4;
    case 0x7F2370D8u: goto label_7F2370D8;
    case 0x7F2370DCu: goto label_7F2370DC;
    case 0x7F2370E0u: goto label_7F2370E0;
    case 0x7F2370E4u: goto label_7F2370E4;
    case 0x7F2370E8u: goto label_7F2370E8;
    case 0x7F2370ECu: goto label_7F2370EC;
    case 0x7F2370F0u: goto label_7F2370F0;
    case 0x7F2370F4u: goto label_7F2370F4;
    case 0x7F2370F8u: goto label_7F2370F8;
    case 0x7F2370FCu: goto label_7F2370FC;
    case 0x7F237100u: goto label_7F237100;
    case 0x7F237104u: goto label_7F237104;
    case 0x7F237108u: goto label_7F237108;
    case 0x7F23710Cu: goto label_7F23710C;
    case 0x7F237110u: goto label_7F237110;
    case 0x7F237114u: goto label_7F237114;
    case 0x7F237118u: goto label_7F237118;
    case 0x7F23711Cu: goto label_7F23711C;
    case 0x7F237120u: goto label_7F237120;
    case 0x7F237124u: goto label_7F237124;
    case 0x7F237128u: goto label_7F237128;
    case 0x7F23712Cu: goto label_7F23712C;
    case 0x7F237130u: goto label_7F237130;
    case 0x7F237134u: goto label_7F237134;
    case 0x7F237138u: goto label_7F237138;
    case 0x7F23713Cu: goto label_7F23713C;
    case 0x7F237140u: goto label_7F237140;
    case 0x7F237144u: goto label_7F237144;
    case 0x7F237148u: goto label_7F237148;
    case 0x7F23714Cu: goto label_7F23714C;
    case 0x7F237150u: goto label_7F237150;
    case 0x7F237154u: goto label_7F237154;
    case 0x7F237158u: goto label_7F237158;
    case 0x7F23715Cu: goto label_7F23715C;
    case 0x7F237160u: goto label_7F237160;
    case 0x7F237164u: goto label_7F237164;
    case 0x7F237168u: goto label_7F237168;
    case 0x7F23716Cu: goto label_7F23716C;
    case 0x7F237170u: goto label_7F237170;
    case 0x7F237174u: goto label_7F237174;
    case 0x7F237178u: goto label_7F237178;
    case 0x7F23717Cu: goto label_7F23717C;
    case 0x7F237180u: goto label_7F237180;
    case 0x7F237184u: goto label_7F237184;
    case 0x7F237188u: goto label_7F237188;
    case 0x7F23718Cu: goto label_7F23718C;
    case 0x7F237190u: goto label_7F237190;
    case 0x7F237194u: goto label_7F237194;
    case 0x7F237198u: goto label_7F237198;
    case 0x7F23719Cu: goto label_7F23719C;
    case 0x7F2371A0u: goto label_7F2371A0;
    case 0x7F2371A4u: goto label_7F2371A4;
    case 0x7F2371A8u: goto label_7F2371A8;
    case 0x7F2371ACu: goto label_7F2371AC;
    case 0x7F2371B0u: goto label_7F2371B0;
    case 0x7F2371B4u: goto label_7F2371B4;
    case 0x7F2371B8u: goto label_7F2371B8;
    case 0x7F2371BCu: goto label_7F2371BC;
    case 0x7F2371C0u: goto label_7F2371C0;
    case 0x7F2371C4u: goto label_7F2371C4;
    case 0x7F2371C8u: goto label_7F2371C8;
    case 0x7F2371CCu: goto label_7F2371CC;
    case 0x7F2371D0u: goto label_7F2371D0;
    case 0x7F2371D4u: goto label_7F2371D4;
    case 0x7F2371D8u: goto label_7F2371D8;
    case 0x7F2371DCu: goto label_7F2371DC;
    case 0x7F2371E0u: goto label_7F2371E0;
    case 0x7F2371E4u: goto label_7F2371E4;
    case 0x7F2371E8u: goto label_7F2371E8;
    case 0x7F2371ECu: goto label_7F2371EC;
    case 0x7F2371F0u: goto label_7F2371F0;
    case 0x7F2371F4u: goto label_7F2371F4;
    case 0x7F2371F8u: goto label_7F2371F8;
    case 0x7F2371FCu: goto label_7F2371FC;
    case 0x7F237200u: goto label_7F237200;
    case 0x7F237204u: goto label_7F237204;
    case 0x7F237208u: goto label_7F237208;
    case 0x7F23720Cu: goto label_7F23720C;
    case 0x7F237210u: goto label_7F237210;
    case 0x7F237214u: goto label_7F237214;
    case 0x7F237218u: goto label_7F237218;
    case 0x7F23721Cu: goto label_7F23721C;
    case 0x7F237220u: goto label_7F237220;
    case 0x7F237224u: goto label_7F237224;
    case 0x7F237228u: goto label_7F237228;
    case 0x7F23722Cu: goto label_7F23722C;
    case 0x7F237230u: goto label_7F237230;
    case 0x7F237234u: goto label_7F237234;
    case 0x7F237238u: goto label_7F237238;
    case 0x7F23723Cu: goto label_7F23723C;
    case 0x7F237240u: goto label_7F237240;
    case 0x7F237244u: goto label_7F237244;
    case 0x7F237248u: goto label_7F237248;
    case 0x7F23724Cu: goto label_7F23724C;
    case 0x7F237250u: goto label_7F237250;
    case 0x7F237254u: goto label_7F237254;
    case 0x7F237258u: goto label_7F237258;
    case 0x7F23725Cu: goto label_7F23725C;
    case 0x7F237260u: goto label_7F237260;
    case 0x7F237264u: goto label_7F237264;
    case 0x7F237268u: goto label_7F237268;
    case 0x7F23726Cu: goto label_7F23726C;
    case 0x7F237270u: goto label_7F237270;
    case 0x7F237274u: goto label_7F237274;
    case 0x7F237278u: goto label_7F237278;
    case 0x7F23727Cu: goto label_7F23727C;
    case 0x7F237280u: goto label_7F237280;
    case 0x7F237284u: goto label_7F237284;
    case 0x7F237288u: goto label_7F237288;
    case 0x7F23728Cu: goto label_7F23728C;
    case 0x7F237290u: goto label_7F237290;
    case 0x7F237294u: goto label_7F237294;
    case 0x7F237298u: goto label_7F237298;
    case 0x7F23729Cu: goto label_7F23729C;
    case 0x7F2372A0u: goto label_7F2372A0;
    case 0x7F2372A4u: goto label_7F2372A4;
    case 0x7F2372A8u: goto label_7F2372A8;
    case 0x7F2372ACu: goto label_7F2372AC;
    case 0x7F2372B0u: goto label_7F2372B0;
    case 0x7F2372B4u: goto label_7F2372B4;
    case 0x7F2372B8u: goto label_7F2372B8;
    case 0x7F2372BCu: goto label_7F2372BC;
    case 0x7F2372C0u: goto label_7F2372C0;
    case 0x7F2372C4u: goto label_7F2372C4;
    case 0x7F2372C8u: goto label_7F2372C8;
    case 0x7F2372CCu: goto label_7F2372CC;
    case 0x7F2372D0u: goto label_7F2372D0;
    case 0x7F2372D4u: goto label_7F2372D4;
    case 0x7F2372D8u: goto label_7F2372D8;
    case 0x7F2372DCu: goto label_7F2372DC;
    case 0x7F2372E0u: goto label_7F2372E0;
    case 0x7F2372E4u: goto label_7F2372E4;
    case 0x7F2372E8u: goto label_7F2372E8;
    case 0x7F2372ECu: goto label_7F2372EC;
    case 0x7F2372F0u: goto label_7F2372F0;
    case 0x7F2372F4u: goto label_7F2372F4;
    case 0x7F2372F8u: goto label_7F2372F8;
    case 0x7F2372FCu: goto label_7F2372FC;
    case 0x7F237300u: goto label_7F237300;
    case 0x7F237304u: goto label_7F237304;
    case 0x7F237308u: goto label_7F237308;
    case 0x7F23730Cu: goto label_7F23730C;
    case 0x7F237310u: goto label_7F237310;
    case 0x7F237314u: goto label_7F237314;
    case 0x7F237318u: goto label_7F237318;
    case 0x7F23731Cu: goto label_7F23731C;
    case 0x7F237320u: goto label_7F237320;
    case 0x7F237324u: goto label_7F237324;
    case 0x7F237328u: goto label_7F237328;
    case 0x7F23732Cu: goto label_7F23732C;
    case 0x7F237330u: goto label_7F237330;
    case 0x7F237334u: goto label_7F237334;
    case 0x7F237338u: goto label_7F237338;
    case 0x7F23733Cu: goto label_7F23733C;
    case 0x7F237340u: goto label_7F237340;
    case 0x7F237344u: goto label_7F237344;
    case 0x7F237348u: goto label_7F237348;
    case 0x7F23734Cu: goto label_7F23734C;
    case 0x7F237350u: goto label_7F237350;
    case 0x7F237354u: goto label_7F237354;
    case 0x7F237358u: goto label_7F237358;
    case 0x7F23735Cu: goto label_7F23735C;
    case 0x7F237360u: goto label_7F237360;
    case 0x7F237364u: goto label_7F237364;
    case 0x7F237368u: goto label_7F237368;
    case 0x7F23736Cu: goto label_7F23736C;
    case 0x7F237370u: goto label_7F237370;
    case 0x7F237374u: goto label_7F237374;
    case 0x7F237378u: goto label_7F237378;
    case 0x7F23737Cu: goto label_7F23737C;
    case 0x7F237380u: goto label_7F237380;
    case 0x7F237384u: goto label_7F237384;
    case 0x7F237388u: goto label_7F237388;
    case 0x7F23738Cu: goto label_7F23738C;
    case 0x7F237390u: goto label_7F237390;
    case 0x7F237394u: goto label_7F237394;
    case 0x7F237398u: goto label_7F237398;
    case 0x7F23739Cu: goto label_7F23739C;
    case 0x7F2373A0u: goto label_7F2373A0;
    case 0x7F2373A4u: goto label_7F2373A4;
    case 0x7F2373A8u: goto label_7F2373A8;
    case 0x7F2373ACu: goto label_7F2373AC;
    case 0x7F2373B0u: goto label_7F2373B0;
    case 0x7F2373B4u: goto label_7F2373B4;
    case 0x7F2373B8u: goto label_7F2373B8;
    case 0x7F2373BCu: goto label_7F2373BC;
    case 0x7F2373C0u: goto label_7F2373C0;
    case 0x7F2373C4u: goto label_7F2373C4;
    case 0x7F2373C8u: goto label_7F2373C8;
    case 0x7F2373CCu: goto label_7F2373CC;
    case 0x7F2373D0u: goto label_7F2373D0;
    case 0x7F2373D4u: goto label_7F2373D4;
    case 0x7F2373D8u: goto label_7F2373D8;
    case 0x7F2373DCu: goto label_7F2373DC;
    case 0x7F2373E0u: goto label_7F2373E0;
    case 0x7F2373E4u: goto label_7F2373E4;
    case 0x7F2373E8u: goto label_7F2373E8;
    case 0x7F2373ECu: goto label_7F2373EC;
    case 0x7F2373F0u: goto label_7F2373F0;
    case 0x7F2373F4u: goto label_7F2373F4;
    case 0x7F2373F8u: goto label_7F2373F8;
    case 0x7F2373FCu: goto label_7F2373FC;
    case 0x7F237400u: goto label_7F237400;
    case 0x7F237404u: goto label_7F237404;
    case 0x7F237408u: goto label_7F237408;
    case 0x7F23740Cu: goto label_7F23740C;
    case 0x7F237410u: goto label_7F237410;
    case 0x7F237414u: goto label_7F237414;
    case 0x7F237418u: goto label_7F237418;
    case 0x7F23741Cu: goto label_7F23741C;
    case 0x7F237420u: goto label_7F237420;
    case 0x7F237424u: goto label_7F237424;
    case 0x7F237428u: goto label_7F237428;
    case 0x7F23742Cu: goto label_7F23742C;
    case 0x7F237430u: goto label_7F237430;
    case 0x7F237434u: goto label_7F237434;
    case 0x7F237438u: goto label_7F237438;
    case 0x7F23743Cu: goto label_7F23743C;
    case 0x7F237440u: goto label_7F237440;
    case 0x7F237444u: goto label_7F237444;
    case 0x7F237448u: goto label_7F237448;
    case 0x7F23744Cu: goto label_7F23744C;
    case 0x7F237450u: goto label_7F237450;
    case 0x7F237454u: goto label_7F237454;
    case 0x7F237458u: goto label_7F237458;
    case 0x7F23745Cu: goto label_7F23745C;
    case 0x7F237460u: goto label_7F237460;
    case 0x7F237464u: goto label_7F237464;
    case 0x7F237468u: goto label_7F237468;
    case 0x7F23746Cu: goto label_7F23746C;
    case 0x7F237470u: goto label_7F237470;
    case 0x7F237474u: goto label_7F237474;
    case 0x7F237478u: goto label_7F237478;
    case 0x7F23747Cu: goto label_7F23747C;
    case 0x7F237480u: goto label_7F237480;
    case 0x7F237484u: goto label_7F237484;
    case 0x7F237488u: goto label_7F237488;
    case 0x7F23748Cu: goto label_7F23748C;
    case 0x7F237490u: goto label_7F237490;
    case 0x7F237494u: goto label_7F237494;
    case 0x7F237498u: goto label_7F237498;
    case 0x7F23749Cu: goto label_7F23749C;
    case 0x7F2374A0u: goto label_7F2374A0;
    case 0x7F2374A4u: goto label_7F2374A4;
    case 0x7F2374A8u: goto label_7F2374A8;
    case 0x7F2374ACu: goto label_7F2374AC;
    case 0x7F2374B0u: goto label_7F2374B0;
    case 0x7F2374B4u: goto label_7F2374B4;
    case 0x7F2374B8u: goto label_7F2374B8;
    case 0x7F2374BCu: goto label_7F2374BC;
    case 0x7F2374C0u: goto label_7F2374C0;
    case 0x7F2374C4u: goto label_7F2374C4;
    case 0x7F2374C8u: goto label_7F2374C8;
    case 0x7F2374CCu: goto label_7F2374CC;
    case 0x7F2374D0u: goto label_7F2374D0;
    case 0x7F2374D4u: goto label_7F2374D4;
    case 0x7F2374D8u: goto label_7F2374D8;
    case 0x7F2374DCu: goto label_7F2374DC;
    case 0x7F2374E0u: goto label_7F2374E0;
    case 0x7F2374E4u: goto label_7F2374E4;
    case 0x7F2374E8u: goto label_7F2374E8;
    case 0x7F2374ECu: goto label_7F2374EC;
    case 0x7F2374F0u: goto label_7F2374F0;
    case 0x7F2374F4u: goto label_7F2374F4;
    case 0x7F2374F8u: goto label_7F2374F8;
    case 0x7F2374FCu: goto label_7F2374FC;
    case 0x7F237500u: goto label_7F237500;
    case 0x7F237504u: goto label_7F237504;
    case 0x7F237508u: goto label_7F237508;
    case 0x7F23750Cu: goto label_7F23750C;
    case 0x7F237510u: goto label_7F237510;
    case 0x7F237514u: goto label_7F237514;
    case 0x7F237518u: goto label_7F237518;
    case 0x7F23751Cu: goto label_7F23751C;
    case 0x7F237520u: goto label_7F237520;
    case 0x7F237524u: goto label_7F237524;
    case 0x7F237528u: goto label_7F237528;
    case 0x7F23752Cu: goto label_7F23752C;
    case 0x7F237530u: goto label_7F237530;
    case 0x7F237534u: goto label_7F237534;
    case 0x7F237538u: goto label_7F237538;
    case 0x7F23753Cu: goto label_7F23753C;
    case 0x7F237540u: goto label_7F237540;
    case 0x7F237544u: goto label_7F237544;
    case 0x7F237548u: goto label_7F237548;
    case 0x7F23754Cu: goto label_7F23754C;
    case 0x7F237550u: goto label_7F237550;
    case 0x7F237554u: goto label_7F237554;
    case 0x7F237558u: goto label_7F237558;
    case 0x7F23755Cu: goto label_7F23755C;
    case 0x7F237560u: goto label_7F237560;
    case 0x7F237564u: goto label_7F237564;
    case 0x7F237568u: goto label_7F237568;
    case 0x7F23756Cu: goto label_7F23756C;
    case 0x7F237570u: goto label_7F237570;
    case 0x7F237574u: goto label_7F237574;
    case 0x7F237578u: goto label_7F237578;
    case 0x7F23757Cu: goto label_7F23757C;
    case 0x7F237580u: goto label_7F237580;
    case 0x7F237584u: goto label_7F237584;
    case 0x7F237588u: goto label_7F237588;
    case 0x7F23758Cu: goto label_7F23758C;
    case 0x7F237590u: goto label_7F237590;
    case 0x7F237594u: goto label_7F237594;
    case 0x7F237598u: goto label_7F237598;
    case 0x7F23759Cu: goto label_7F23759C;
    case 0x7F2375A0u: goto label_7F2375A0;
    case 0x7F2375A4u: goto label_7F2375A4;
    case 0x7F2375A8u: goto label_7F2375A8;
    case 0x7F2375ACu: goto label_7F2375AC;
    case 0x7F2375B0u: goto label_7F2375B0;
    case 0x7F2375B4u: goto label_7F2375B4;
    case 0x7F2375B8u: goto label_7F2375B8;
    case 0x7F2375BCu: goto label_7F2375BC;
    case 0x7F2375C0u: goto label_7F2375C0;
    case 0x7F2375C4u: goto label_7F2375C4;
    case 0x7F2375C8u: goto label_7F2375C8;
    case 0x7F2375CCu: goto label_7F2375CC;
    case 0x7F2375D0u: goto label_7F2375D0;
    case 0x7F2375D4u: goto label_7F2375D4;
    case 0x7F2375D8u: goto label_7F2375D8;
    case 0x7F2375DCu: goto label_7F2375DC;
    case 0x7F2375E0u: goto label_7F2375E0;
    case 0x7F2375E4u: goto label_7F2375E4;
    case 0x7F2375E8u: goto label_7F2375E8;
    case 0x7F2375ECu: goto label_7F2375EC;
    case 0x7F2375F0u: goto label_7F2375F0;
    case 0x7F2375F4u: goto label_7F2375F4;
    case 0x7F2375F8u: goto label_7F2375F8;
    case 0x7F2375FCu: goto label_7F2375FC;
    case 0x7F237600u: goto label_7F237600;
    case 0x7F237604u: goto label_7F237604;
    case 0x7F237608u: goto label_7F237608;
    case 0x7F23760Cu: goto label_7F23760C;
    case 0x7F237610u: goto label_7F237610;
    case 0x7F237614u: goto label_7F237614;
    case 0x7F237618u: goto label_7F237618;
    case 0x7F23761Cu: goto label_7F23761C;
    case 0x7F237620u: goto label_7F237620;
    case 0x7F237624u: goto label_7F237624;
    case 0x7F237628u: goto label_7F237628;
    case 0x7F23762Cu: goto label_7F23762C;
    case 0x7F237630u: goto label_7F237630;
    case 0x7F237634u: goto label_7F237634;
    case 0x7F237638u: goto label_7F237638;
    case 0x7F23763Cu: goto label_7F23763C;
    case 0x7F237640u: goto label_7F237640;
    case 0x7F237644u: goto label_7F237644;
    case 0x7F237648u: goto label_7F237648;
    case 0x7F23764Cu: goto label_7F23764C;
    case 0x7F237650u: goto label_7F237650;
    case 0x7F237654u: goto label_7F237654;
    case 0x7F237658u: goto label_7F237658;
    case 0x7F23765Cu: goto label_7F23765C;
    case 0x7F237660u: goto label_7F237660;
    case 0x7F237664u: goto label_7F237664;
    case 0x7F237668u: goto label_7F237668;
    case 0x7F23766Cu: goto label_7F23766C;
    case 0x7F237670u: goto label_7F237670;
    case 0x7F237674u: goto label_7F237674;
    case 0x7F237678u: goto label_7F237678;
    case 0x7F23767Cu: goto label_7F23767C;
    case 0x7F237680u: goto label_7F237680;
    case 0x7F237684u: goto label_7F237684;
    case 0x7F237688u: goto label_7F237688;
    case 0x7F23768Cu: goto label_7F23768C;
    case 0x7F237690u: goto label_7F237690;
    case 0x7F237694u: goto label_7F237694;
    case 0x7F237698u: goto label_7F237698;
    case 0x7F23769Cu: goto label_7F23769C;
    case 0x7F2376A0u: goto label_7F2376A0;
    case 0x7F2376A4u: goto label_7F2376A4;
    case 0x7F2376A8u: goto label_7F2376A8;
    case 0x7F2376ACu: goto label_7F2376AC;
    case 0x7F2376B0u: goto label_7F2376B0;
    case 0x7F2376B4u: goto label_7F2376B4;
    case 0x7F2376B8u: goto label_7F2376B8;
    case 0x7F2376BCu: goto label_7F2376BC;
    case 0x7F2376C0u: goto label_7F2376C0;
    case 0x7F2376C4u: goto label_7F2376C4;
    case 0x7F2376C8u: goto label_7F2376C8;
    case 0x7F2376CCu: goto label_7F2376CC;
    case 0x7F2376D0u: goto label_7F2376D0;
    case 0x7F2376D4u: goto label_7F2376D4;
    case 0x7F2376D8u: goto label_7F2376D8;
    case 0x7F2376DCu: goto label_7F2376DC;
    case 0x7F2376E0u: goto label_7F2376E0;
    case 0x7F2376E4u: goto label_7F2376E4;
    case 0x7F2376E8u: goto label_7F2376E8;
    case 0x7F2376ECu: goto label_7F2376EC;
    case 0x7F2376F0u: goto label_7F2376F0;
    case 0x7F2376F4u: goto label_7F2376F4;
    case 0x7F2376F8u: goto label_7F2376F8;
    case 0x7F2376FCu: goto label_7F2376FC;
    case 0x7F237700u: goto label_7F237700;
    case 0x7F237704u: goto label_7F237704;
    case 0x7F237708u: goto label_7F237708;
    case 0x7F23770Cu: goto label_7F23770C;
    case 0x7F237710u: goto label_7F237710;
    case 0x7F237714u: goto label_7F237714;
    case 0x7F237718u: goto label_7F237718;
    case 0x7F23771Cu: goto label_7F23771C;
    case 0x7F237720u: goto label_7F237720;
    case 0x7F237724u: goto label_7F237724;
    case 0x7F237728u: goto label_7F237728;
    case 0x7F23772Cu: goto label_7F23772C;
    case 0x7F237730u: goto label_7F237730;
    case 0x7F237734u: goto label_7F237734;
    case 0x7F237738u: goto label_7F237738;
    case 0x7F23773Cu: goto label_7F23773C;
    case 0x7F237740u: goto label_7F237740;
    case 0x7F237744u: goto label_7F237744;
    case 0x7F237748u: goto label_7F237748;
    case 0x7F23774Cu: goto label_7F23774C;
    case 0x7F237750u: goto label_7F237750;
    case 0x7F237754u: goto label_7F237754;
    case 0x7F237758u: goto label_7F237758;
    case 0x7F23775Cu: goto label_7F23775C;
    case 0x7F237760u: goto label_7F237760;
    case 0x7F237764u: goto label_7F237764;
    case 0x7F237768u: goto label_7F237768;
    case 0x7F23776Cu: goto label_7F23776C;
    case 0x7F237770u: goto label_7F237770;
    case 0x7F237774u: goto label_7F237774;
    case 0x7F237778u: goto label_7F237778;
    case 0x7F23777Cu: goto label_7F23777C;
    case 0x7F237780u: goto label_7F237780;
    case 0x7F237784u: goto label_7F237784;
    case 0x7F237788u: goto label_7F237788;
    case 0x7F23778Cu: goto label_7F23778C;
    case 0x7F237790u: goto label_7F237790;
    case 0x7F237794u: goto label_7F237794;
    case 0x7F237798u: goto label_7F237798;
    case 0x7F23779Cu: goto label_7F23779C;
    case 0x7F2377A0u: goto label_7F2377A0;
    case 0x7F2377A4u: goto label_7F2377A4;
    case 0x7F2377A8u: goto label_7F2377A8;
    case 0x7F2377ACu: goto label_7F2377AC;
    case 0x7F2377B0u: goto label_7F2377B0;
    case 0x7F2377B4u: goto label_7F2377B4;
    case 0x7F2377B8u: goto label_7F2377B8;
    case 0x7F2377BCu: goto label_7F2377BC;
    case 0x7F2377C0u: goto label_7F2377C0;
    case 0x7F2377C4u: goto label_7F2377C4;
    case 0x7F2377C8u: goto label_7F2377C8;
    case 0x7F2377CCu: goto label_7F2377CC;
    case 0x7F2377D0u: goto label_7F2377D0;
    case 0x7F2377D4u: goto label_7F2377D4;
    case 0x7F2377D8u: goto label_7F2377D8;
    case 0x7F2377DCu: goto label_7F2377DC;
    case 0x7F2377E0u: goto label_7F2377E0;
    case 0x7F2377E4u: goto label_7F2377E4;
    case 0x7F2377E8u: goto label_7F2377E8;
    case 0x7F2377ECu: goto label_7F2377EC;
    case 0x7F2377F0u: goto label_7F2377F0;
    case 0x7F2377F4u: goto label_7F2377F4;
    case 0x7F2377F8u: goto label_7F2377F8;
    case 0x7F2377FCu: goto label_7F2377FC;
    case 0x7F237800u: goto label_7F237800;
    case 0x7F237804u: goto label_7F237804;
    case 0x7F237808u: goto label_7F237808;
    case 0x7F23780Cu: goto label_7F23780C;
    case 0x7F237810u: goto label_7F237810;
    case 0x7F237814u: goto label_7F237814;
    case 0x7F237818u: goto label_7F237818;
    case 0x7F23781Cu: goto label_7F23781C;
    case 0x7F237820u: goto label_7F237820;
    case 0x7F237824u: goto label_7F237824;
    case 0x7F237828u: goto label_7F237828;
    case 0x7F23782Cu: goto label_7F23782C;
    case 0x7F237830u: goto label_7F237830;
    case 0x7F237834u: goto label_7F237834;
    case 0x7F237838u: goto label_7F237838;
    case 0x7F23783Cu: goto label_7F23783C;
    case 0x7F237840u: goto label_7F237840;
    case 0x7F237844u: goto label_7F237844;
    case 0x7F237848u: goto label_7F237848;
    case 0x7F23784Cu: goto label_7F23784C;
    case 0x7F237850u: goto label_7F237850;
    case 0x7F237854u: goto label_7F237854;
    case 0x7F237858u: goto label_7F237858;
    case 0x7F23785Cu: goto label_7F23785C;
    case 0x7F237860u: goto label_7F237860;
    case 0x7F237864u: goto label_7F237864;
    case 0x7F237868u: goto label_7F237868;
    case 0x7F23786Cu: goto label_7F23786C;
    case 0x7F237870u: goto label_7F237870;
    case 0x7F237874u: goto label_7F237874;
    case 0x7F237878u: goto label_7F237878;
    case 0x7F23787Cu: goto label_7F23787C;
    case 0x7F237880u: goto label_7F237880;
    case 0x7F237884u: goto label_7F237884;
    case 0x7F237888u: goto label_7F237888;
    case 0x7F23788Cu: goto label_7F23788C;
    case 0x7F237890u: goto label_7F237890;
    case 0x7F237894u: goto label_7F237894;
    case 0x7F237898u: goto label_7F237898;
    case 0x7F23789Cu: goto label_7F23789C;
    case 0x7F2378A0u: goto label_7F2378A0;
    case 0x7F2378A4u: goto label_7F2378A4;
    case 0x7F2378A8u: goto label_7F2378A8;
    case 0x7F2378ACu: goto label_7F2378AC;
    case 0x7F2378B0u: goto label_7F2378B0;
    case 0x7F2378B4u: goto label_7F2378B4;
    case 0x7F2378B8u: goto label_7F2378B8;
    case 0x7F2378BCu: goto label_7F2378BC;
    case 0x7F2378C0u: goto label_7F2378C0;
    case 0x7F2378C4u: goto label_7F2378C4;
    case 0x7F2378C8u: goto label_7F2378C8;
    case 0x7F2378CCu: goto label_7F2378CC;
    case 0x7F2378D0u: goto label_7F2378D0;
    case 0x7F2378D4u: goto label_7F2378D4;
    case 0x7F2378D8u: goto label_7F2378D8;
    case 0x7F2378DCu: goto label_7F2378DC;
    case 0x7F2378E0u: goto label_7F2378E0;
    case 0x7F2378E4u: goto label_7F2378E4;
    case 0x7F2378E8u: goto label_7F2378E8;
    case 0x7F2378ECu: goto label_7F2378EC;
    case 0x7F2378F0u: goto label_7F2378F0;
    case 0x7F2378F4u: goto label_7F2378F4;
    case 0x7F2378F8u: goto label_7F2378F8;
    case 0x7F2378FCu: goto label_7F2378FC;
    case 0x7F237900u: goto label_7F237900;
    case 0x7F237904u: goto label_7F237904;
    case 0x7F237908u: goto label_7F237908;
    case 0x7F23790Cu: goto label_7F23790C;
    case 0x7F237910u: goto label_7F237910;
    case 0x7F237914u: goto label_7F237914;
    case 0x7F237918u: goto label_7F237918;
    case 0x7F23791Cu: goto label_7F23791C;
    case 0x7F237920u: goto label_7F237920;
    case 0x7F237924u: goto label_7F237924;
    case 0x7F237928u: goto label_7F237928;
    case 0x7F23792Cu: goto label_7F23792C;
    case 0x7F237930u: goto label_7F237930;
    case 0x7F237934u: goto label_7F237934;
    case 0x7F237938u: goto label_7F237938;
    case 0x7F23793Cu: goto label_7F23793C;
    case 0x7F237940u: goto label_7F237940;
    case 0x7F237944u: goto label_7F237944;
    case 0x7F237948u: goto label_7F237948;
    case 0x7F23794Cu: goto label_7F23794C;
    case 0x7F237950u: goto label_7F237950;
    case 0x7F237954u: goto label_7F237954;
    case 0x7F237958u: goto label_7F237958;
    case 0x7F23795Cu: goto label_7F23795C;
    case 0x7F237960u: goto label_7F237960;
    case 0x7F237964u: goto label_7F237964;
    case 0x7F237968u: goto label_7F237968;
    case 0x7F23796Cu: goto label_7F23796C;
    case 0x7F237970u: goto label_7F237970;
    case 0x7F237974u: goto label_7F237974;
    case 0x7F237978u: goto label_7F237978;
    case 0x7F23797Cu: goto label_7F23797C;
    case 0x7F237980u: goto label_7F237980;
    case 0x7F237984u: goto label_7F237984;
    case 0x7F237988u: goto label_7F237988;
    case 0x7F23798Cu: goto label_7F23798C;
    case 0x7F237990u: goto label_7F237990;
    case 0x7F237994u: goto label_7F237994;
    case 0x7F237998u: goto label_7F237998;
    case 0x7F23799Cu: goto label_7F23799C;
    case 0x7F2379A0u: goto label_7F2379A0;
    case 0x7F2379A4u: goto label_7F2379A4;
    case 0x7F2379A8u: goto label_7F2379A8;
    case 0x7F2379ACu: goto label_7F2379AC;
    case 0x7F2379B0u: goto label_7F2379B0;
    case 0x7F2379B4u: goto label_7F2379B4;
    case 0x7F2379B8u: goto label_7F2379B8;
    case 0x7F2379BCu: goto label_7F2379BC;
    case 0x7F2379C0u: goto label_7F2379C0;
    case 0x7F2379C4u: goto label_7F2379C4;
    case 0x7F2379C8u: goto label_7F2379C8;
    case 0x7F2379CCu: goto label_7F2379CC;
    case 0x7F2379D0u: goto label_7F2379D0;
    case 0x7F2379D4u: goto label_7F2379D4;
    case 0x7F2379D8u: goto label_7F2379D8;
    case 0x7F2379DCu: goto label_7F2379DC;
    case 0x7F2379E0u: goto label_7F2379E0;
    case 0x7F2379E4u: goto label_7F2379E4;
    case 0x7F2379E8u: goto label_7F2379E8;
    case 0x7F2379ECu: goto label_7F2379EC;
    case 0x7F2379F0u: goto label_7F2379F0;
    case 0x7F2379F4u: goto label_7F2379F4;
    case 0x7F2379F8u: goto label_7F2379F8;
    case 0x7F2379FCu: goto label_7F2379FC;
    case 0x7F237A00u: goto label_7F237A00;
    case 0x7F237A04u: goto label_7F237A04;
    case 0x7F237A08u: goto label_7F237A08;
    case 0x7F237A0Cu: goto label_7F237A0C;
    case 0x7F237A10u: goto label_7F237A10;
    case 0x7F237A14u: goto label_7F237A14;
    case 0x7F237A18u: goto label_7F237A18;
    case 0x7F237A1Cu: goto label_7F237A1C;
    case 0x7F237A20u: goto label_7F237A20;
    case 0x7F237A24u: goto label_7F237A24;
    case 0x7F237A28u: goto label_7F237A28;
    case 0x7F237A2Cu: goto label_7F237A2C;
    case 0x7F237A30u: goto label_7F237A30;
    case 0x7F237A34u: goto label_7F237A34;
    case 0x7F237A38u: goto label_7F237A38;
    case 0x7F237A3Cu: goto label_7F237A3C;
    case 0x7F237A40u: goto label_7F237A40;
    case 0x7F237A44u: goto label_7F237A44;
    case 0x7F237A48u: goto label_7F237A48;
    case 0x7F237A4Cu: goto label_7F237A4C;
    case 0x7F237A50u: goto label_7F237A50;
    case 0x7F237A54u: goto label_7F237A54;
    case 0x7F237A58u: goto label_7F237A58;
    case 0x7F237A5Cu: goto label_7F237A5C;
    case 0x7F237A60u: goto label_7F237A60;
    case 0x7F237A64u: goto label_7F237A64;
    case 0x7F237A68u: goto label_7F237A68;
    case 0x7F237A6Cu: goto label_7F237A6C;
    case 0x7F237A70u: goto label_7F237A70;
    case 0x7F237A74u: goto label_7F237A74;
    case 0x7F237A78u: goto label_7F237A78;
    case 0x7F237A7Cu: goto label_7F237A7C;
    case 0x7F237A80u: goto label_7F237A80;
    case 0x7F237A84u: goto label_7F237A84;
    case 0x7F237A88u: goto label_7F237A88;
    case 0x7F237A8Cu: goto label_7F237A8C;
    case 0x7F237A90u: goto label_7F237A90;
    case 0x7F237A94u: goto label_7F237A94;
    case 0x7F237A98u: goto label_7F237A98;
    case 0x7F237A9Cu: goto label_7F237A9C;
    case 0x7F237AA0u: goto label_7F237AA0;
    case 0x7F237AA4u: goto label_7F237AA4;
    case 0x7F237AA8u: goto label_7F237AA8;
    case 0x7F237AACu: goto label_7F237AAC;
    case 0x7F237AB0u: goto label_7F237AB0;
    case 0x7F237AB4u: goto label_7F237AB4;
    case 0x7F237AB8u: goto label_7F237AB8;
    case 0x7F237ABCu: goto label_7F237ABC;
    case 0x7F237AC0u: goto label_7F237AC0;
    case 0x7F237AC4u: goto label_7F237AC4;
    case 0x7F237AC8u: goto label_7F237AC8;
    case 0x7F237ACCu: goto label_7F237ACC;
    case 0x7F237AD0u: goto label_7F237AD0;
    case 0x7F237AD4u: goto label_7F237AD4;
    case 0x7F237AD8u: goto label_7F237AD8;
    case 0x7F237ADCu: goto label_7F237ADC;
    case 0x7F237AE0u: goto label_7F237AE0;
    case 0x7F237AE4u: goto label_7F237AE4;
    case 0x7F237AE8u: goto label_7F237AE8;
    case 0x7F237AECu: goto label_7F237AEC;
    case 0x7F237AF0u: goto label_7F237AF0;
    case 0x7F237AF4u: goto label_7F237AF4;
    case 0x7F237AF8u: goto label_7F237AF8;
    case 0x7F237AFCu: goto label_7F237AFC;
    case 0x7F237B00u: goto label_7F237B00;
    case 0x7F237B04u: goto label_7F237B04;
    case 0x7F237B08u: goto label_7F237B08;
    case 0x7F237B0Cu: goto label_7F237B0C;
    case 0x7F237B10u: goto label_7F237B10;
    case 0x7F237B14u: goto label_7F237B14;
    case 0x7F237B18u: goto label_7F237B18;
    case 0x7F237B1Cu: goto label_7F237B1C;
    case 0x7F237B20u: goto label_7F237B20;
    case 0x7F237B24u: goto label_7F237B24;
    case 0x7F237B28u: goto label_7F237B28;
    case 0x7F237B2Cu: goto label_7F237B2C;
    case 0x7F237B30u: goto label_7F237B30;
    case 0x7F237B34u: goto label_7F237B34;
    case 0x7F237B38u: goto label_7F237B38;
    case 0x7F237B3Cu: goto label_7F237B3C;
    case 0x7F237B40u: goto label_7F237B40;
    case 0x7F237B44u: goto label_7F237B44;
    case 0x7F237B48u: goto label_7F237B48;
    case 0x7F237B4Cu: goto label_7F237B4C;
    case 0x7F237B50u: goto label_7F237B50;
    case 0x7F237B54u: goto label_7F237B54;
    case 0x7F237B58u: goto label_7F237B58;
    case 0x7F237B5Cu: goto label_7F237B5C;
    case 0x7F237B60u: goto label_7F237B60;
    case 0x7F237B64u: goto label_7F237B64;
    case 0x7F237B68u: goto label_7F237B68;
    case 0x7F237B6Cu: goto label_7F237B6C;
    case 0x7F237B70u: goto label_7F237B70;
    case 0x7F237B74u: goto label_7F237B74;
    case 0x7F237B78u: goto label_7F237B78;
    case 0x7F237B7Cu: goto label_7F237B7C;
    case 0x7F237B80u: goto label_7F237B80;
    case 0x7F237B84u: goto label_7F237B84;
    case 0x7F237B88u: goto label_7F237B88;
    case 0x7F237B8Cu: goto label_7F237B8C;
    case 0x7F237B90u: goto label_7F237B90;
    case 0x7F237B94u: goto label_7F237B94;
    case 0x7F237B98u: goto label_7F237B98;
    case 0x7F237B9Cu: goto label_7F237B9C;
    case 0x7F237BA0u: goto label_7F237BA0;
    case 0x7F237BA4u: goto label_7F237BA4;
    case 0x7F237BA8u: goto label_7F237BA8;
    case 0x7F237BACu: goto label_7F237BAC;
    case 0x7F237BB0u: goto label_7F237BB0;
    case 0x7F237BB4u: goto label_7F237BB4;
    case 0x7F237BB8u: goto label_7F237BB8;
    case 0x7F237BBCu: goto label_7F237BBC;
    case 0x7F237BC0u: goto label_7F237BC0;
    case 0x7F237BC4u: goto label_7F237BC4;
    case 0x7F237BC8u: goto label_7F237BC8;
    case 0x7F237BCCu: goto label_7F237BCC;
    case 0x7F237BD0u: goto label_7F237BD0;
    case 0x7F237BD4u: goto label_7F237BD4;
    case 0x7F237BD8u: goto label_7F237BD8;
    case 0x7F237BDCu: goto label_7F237BDC;
    case 0x7F237BE0u: goto label_7F237BE0;
    case 0x7F237BE4u: goto label_7F237BE4;
    case 0x7F237BE8u: goto label_7F237BE8;
    case 0x7F237BECu: goto label_7F237BEC;
    case 0x7F237BF0u: goto label_7F237BF0;
    case 0x7F237BF4u: goto label_7F237BF4;
    case 0x7F237BF8u: goto label_7F237BF8;
    case 0x7F237BFCu: goto label_7F237BFC;
    case 0x7F237C00u: goto label_7F237C00;
    case 0x7F237C04u: goto label_7F237C04;
    case 0x7F237C08u: goto label_7F237C08;
    case 0x7F237C0Cu: goto label_7F237C0C;
    case 0x7F237C10u: goto label_7F237C10;
    case 0x7F237C14u: goto label_7F237C14;
    case 0x7F237C18u: goto label_7F237C18;
    case 0x7F237C1Cu: goto label_7F237C1C;
    case 0x7F237C20u: goto label_7F237C20;
    case 0x7F237C24u: goto label_7F237C24;
    case 0x7F237C28u: goto label_7F237C28;
    case 0x7F237C2Cu: goto label_7F237C2C;
    case 0x7F237C30u: goto label_7F237C30;
    case 0x7F237C34u: goto label_7F237C34;
    case 0x7F237C38u: goto label_7F237C38;
    case 0x7F237C3Cu: goto label_7F237C3C;
    case 0x7F237C40u: goto label_7F237C40;
    case 0x7F237C44u: goto label_7F237C44;
    case 0x7F237C48u: goto label_7F237C48;
    case 0x7F237C4Cu: goto label_7F237C4C;
    case 0x7F237C50u: goto label_7F237C50;
    case 0x7F237C54u: goto label_7F237C54;
    case 0x7F237C58u: goto label_7F237C58;
    case 0x7F237C5Cu: goto label_7F237C5C;
    case 0x7F237C60u: goto label_7F237C60;
    case 0x7F237C64u: goto label_7F237C64;
    case 0x7F237C68u: goto label_7F237C68;
    case 0x7F237C6Cu: goto label_7F237C6C;
    case 0x7F237C70u: goto label_7F237C70;
    case 0x7F237C74u: goto label_7F237C74;
    case 0x7F237C78u: goto label_7F237C78;
    case 0x7F237C7Cu: goto label_7F237C7C;
    case 0x7F237C80u: goto label_7F237C80;
    case 0x7F237C84u: goto label_7F237C84;
    case 0x7F237C88u: goto label_7F237C88;
    case 0x7F237C8Cu: goto label_7F237C8C;
    case 0x7F237C90u: goto label_7F237C90;
    case 0x7F237C94u: goto label_7F237C94;
    case 0x7F237C98u: goto label_7F237C98;
    case 0x7F237C9Cu: goto label_7F237C9C;
    case 0x7F237CA0u: goto label_7F237CA0;
    case 0x7F237CA4u: goto label_7F237CA4;
    case 0x7F237CA8u: goto label_7F237CA8;
    case 0x7F237CACu: goto label_7F237CAC;
    case 0x7F237CB0u: goto label_7F237CB0;
    case 0x7F237CB4u: goto label_7F237CB4;
    case 0x7F237CB8u: goto label_7F237CB8;
    case 0x7F237CBCu: goto label_7F237CBC;
    case 0x7F237CC0u: goto label_7F237CC0;
    case 0x7F237CC4u: goto label_7F237CC4;
    case 0x7F237CC8u: goto label_7F237CC8;
    case 0x7F237CCCu: goto label_7F237CCC;
    case 0x7F237CD0u: goto label_7F237CD0;
    case 0x7F237CD4u: goto label_7F237CD4;
    case 0x7F237CD8u: goto label_7F237CD8;
    case 0x7F237CDCu: goto label_7F237CDC;
    case 0x7F237CE0u: goto label_7F237CE0;
    case 0x7F237CE4u: goto label_7F237CE4;
    case 0x7F237CE8u: goto label_7F237CE8;
    case 0x7F237CECu: goto label_7F237CEC;
    case 0x7F237CF0u: goto label_7F237CF0;
    case 0x7F237CF4u: goto label_7F237CF4;
    case 0x7F237CF8u: goto label_7F237CF8;
    case 0x7F237CFCu: goto label_7F237CFC;
    case 0x7F237D00u: goto label_7F237D00;
    case 0x7F237D04u: goto label_7F237D04;
    case 0x7F237D08u: goto label_7F237D08;
    case 0x7F237D0Cu: goto label_7F237D0C;
    case 0x7F237D10u: goto label_7F237D10;
    case 0x7F237D14u: goto label_7F237D14;
    case 0x7F237D18u: goto label_7F237D18;
    case 0x7F237D1Cu: goto label_7F237D1C;
    case 0x7F237D20u: goto label_7F237D20;
    case 0x7F237D24u: goto label_7F237D24;
    case 0x7F237D28u: goto label_7F237D28;
    case 0x7F237D2Cu: goto label_7F237D2C;
    case 0x7F237D30u: goto label_7F237D30;
    case 0x7F237D34u: goto label_7F237D34;
    case 0x7F237D38u: goto label_7F237D38;
    case 0x7F237D3Cu: goto label_7F237D3C;
    case 0x7F237D40u: goto label_7F237D40;
    case 0x7F237D44u: goto label_7F237D44;
    case 0x7F237D48u: goto label_7F237D48;
    case 0x7F237D4Cu: goto label_7F237D4C;
    case 0x7F237D50u: goto label_7F237D50;
    case 0x7F237D54u: goto label_7F237D54;
    case 0x7F237D58u: goto label_7F237D58;
    case 0x7F237D5Cu: goto label_7F237D5C;
    case 0x7F237D60u: goto label_7F237D60;
    case 0x7F237D64u: goto label_7F237D64;
    case 0x7F237D68u: goto label_7F237D68;
    case 0x7F237D6Cu: goto label_7F237D6C;
    case 0x7F237D70u: goto label_7F237D70;
    case 0x7F237D74u: goto label_7F237D74;
    case 0x7F237D78u: goto label_7F237D78;
    case 0x7F237D7Cu: goto label_7F237D7C;
    case 0x7F237D80u: goto label_7F237D80;
    case 0x7F237D84u: goto label_7F237D84;
    case 0x7F237D88u: goto label_7F237D88;
    case 0x7F237D8Cu: goto label_7F237D8C;
    case 0x7F237D90u: goto label_7F237D90;
    case 0x7F237D94u: goto label_7F237D94;
    case 0x7F237D98u: goto label_7F237D98;
    case 0x7F237D9Cu: goto label_7F237D9C;
    case 0x7F237DA0u: goto label_7F237DA0;
    case 0x7F237DA4u: goto label_7F237DA4;
    case 0x7F237DA8u: goto label_7F237DA8;
    case 0x7F237DACu: goto label_7F237DAC;
    case 0x7F237DB0u: goto label_7F237DB0;
    case 0x7F237DB4u: goto label_7F237DB4;
    case 0x7F237DB8u: goto label_7F237DB8;
    case 0x7F237DBCu: goto label_7F237DBC;
    case 0x7F237DC0u: goto label_7F237DC0;
    case 0x7F237DC4u: goto label_7F237DC4;
    case 0x7F237DC8u: goto label_7F237DC8;
    case 0x7F237DCCu: goto label_7F237DCC;
    case 0x7F237DD0u: goto label_7F237DD0;
    case 0x7F237DD4u: goto label_7F237DD4;
    case 0x7F237DD8u: goto label_7F237DD8;
    case 0x7F237DDCu: goto label_7F237DDC;
    case 0x7F237DE0u: goto label_7F237DE0;
    case 0x7F237DE4u: goto label_7F237DE4;
    case 0x7F237DE8u: goto label_7F237DE8;
    case 0x7F237DECu: goto label_7F237DEC;
    case 0x7F237DF0u: goto label_7F237DF0;
    case 0x7F237DF4u: goto label_7F237DF4;
    case 0x7F237DF8u: goto label_7F237DF8;
    case 0x7F237DFCu: goto label_7F237DFC;
    case 0x7F237E00u: goto label_7F237E00;
    case 0x7F237E04u: goto label_7F237E04;
    case 0x7F237E08u: goto label_7F237E08;
    case 0x7F237E0Cu: goto label_7F237E0C;
    case 0x7F237E10u: goto label_7F237E10;
    case 0x7F237E14u: goto label_7F237E14;
    case 0x7F237E18u: goto label_7F237E18;
    case 0x7F237E1Cu: goto label_7F237E1C;
    case 0x7F237E20u: goto label_7F237E20;
    case 0x7F237E24u: goto label_7F237E24;
    case 0x7F237E28u: goto label_7F237E28;
    case 0x7F237E2Cu: goto label_7F237E2C;
    case 0x7F237E30u: goto label_7F237E30;
    case 0x7F237E34u: goto label_7F237E34;
    case 0x7F237E38u: goto label_7F237E38;
    case 0x7F237E3Cu: goto label_7F237E3C;
    case 0x7F237E40u: goto label_7F237E40;
    case 0x7F237E44u: goto label_7F237E44;
    case 0x7F237E48u: goto label_7F237E48;
    case 0x7F237E4Cu: goto label_7F237E4C;
    case 0x7F237E50u: goto label_7F237E50;
    case 0x7F237E54u: goto label_7F237E54;
    case 0x7F237E58u: goto label_7F237E58;
    case 0x7F237E5Cu: goto label_7F237E5C;
    case 0x7F237E60u: goto label_7F237E60;
    case 0x7F237E64u: goto label_7F237E64;
    case 0x7F237E68u: goto label_7F237E68;
    case 0x7F237E6Cu: goto label_7F237E6C;
    case 0x7F237E70u: goto label_7F237E70;
    case 0x7F237E74u: goto label_7F237E74;
    case 0x7F237E78u: goto label_7F237E78;
    case 0x7F237E7Cu: goto label_7F237E7C;
    case 0x7F237E80u: goto label_7F237E80;
    case 0x7F237E84u: goto label_7F237E84;
    case 0x7F237E88u: goto label_7F237E88;
    case 0x7F237E8Cu: goto label_7F237E8C;
    case 0x7F237E90u: goto label_7F237E90;
    case 0x7F237E94u: goto label_7F237E94;
    case 0x7F237E98u: goto label_7F237E98;
    case 0x7F237E9Cu: goto label_7F237E9C;
    case 0x7F237EA0u: goto label_7F237EA0;
    case 0x7F237EA4u: goto label_7F237EA4;
    case 0x7F237EA8u: goto label_7F237EA8;
    case 0x7F237EACu: goto label_7F237EAC;
    case 0x7F237EB0u: goto label_7F237EB0;
    case 0x7F237EB4u: goto label_7F237EB4;
    case 0x7F237EB8u: goto label_7F237EB8;
    case 0x7F237EBCu: goto label_7F237EBC;
    case 0x7F237EC0u: goto label_7F237EC0;
    case 0x7F237EC4u: goto label_7F237EC4;
    case 0x7F237EC8u: goto label_7F237EC8;
    case 0x7F237ECCu: goto label_7F237ECC;
    case 0x7F237ED0u: goto label_7F237ED0;
    case 0x7F237ED4u: goto label_7F237ED4;
    case 0x7F237ED8u: goto label_7F237ED8;
    case 0x7F237EDCu: goto label_7F237EDC;
    case 0x7F237EE0u: goto label_7F237EE0;
    case 0x7F237EE4u: goto label_7F237EE4;
    case 0x7F237EE8u: goto label_7F237EE8;
    case 0x7F237EECu: goto label_7F237EEC;
    case 0x7F237EF0u: goto label_7F237EF0;
    case 0x7F237EF4u: goto label_7F237EF4;
    case 0x7F237EF8u: goto label_7F237EF8;
    case 0x7F237EFCu: goto label_7F237EFC;
    case 0x7F237F00u: goto label_7F237F00;
    case 0x7F237F04u: goto label_7F237F04;
    case 0x7F237F08u: goto label_7F237F08;
    case 0x7F237F0Cu: goto label_7F237F0C;
    case 0x7F237F10u: goto label_7F237F10;
    case 0x7F237F14u: goto label_7F237F14;
    case 0x7F237F18u: goto label_7F237F18;
    case 0x7F237F1Cu: goto label_7F237F1C;
    case 0x7F237F20u: goto label_7F237F20;
    case 0x7F237F24u: goto label_7F237F24;
    case 0x7F237F28u: goto label_7F237F28;
    case 0x7F237F2Cu: goto label_7F237F2C;
    case 0x7F237F30u: goto label_7F237F30;
    case 0x7F237F34u: goto label_7F237F34;
    case 0x7F237F38u: goto label_7F237F38;
    case 0x7F237F3Cu: goto label_7F237F3C;
    case 0x7F237F40u: goto label_7F237F40;
    case 0x7F237F44u: goto label_7F237F44;
    case 0x7F237F48u: goto label_7F237F48;
    case 0x7F237F4Cu: goto label_7F237F4C;
    case 0x7F237F50u: goto label_7F237F50;
    case 0x7F237F54u: goto label_7F237F54;
    case 0x7F237F58u: goto label_7F237F58;
    case 0x7F237F5Cu: goto label_7F237F5C;
    case 0x7F237F60u: goto label_7F237F60;
    case 0x7F237F64u: goto label_7F237F64;
    case 0x7F237F68u: goto label_7F237F68;
    case 0x7F237F6Cu: goto label_7F237F6C;
    case 0x7F237F70u: goto label_7F237F70;
    case 0x7F237F74u: goto label_7F237F74;
    case 0x7F237F78u: goto label_7F237F78;
    case 0x7F237F7Cu: goto label_7F237F7C;
    case 0x7F237F80u: goto label_7F237F80;
    case 0x7F237F84u: goto label_7F237F84;
    case 0x7F237F88u: goto label_7F237F88;
    case 0x7F237F8Cu: goto label_7F237F8C;
    case 0x7F237F90u: goto label_7F237F90;
    case 0x7F237F94u: goto label_7F237F94;
    case 0x7F237F98u: goto label_7F237F98;
    case 0x7F237F9Cu: goto label_7F237F9C;
    case 0x7F237FA0u: goto label_7F237FA0;
    case 0x7F237FA4u: goto label_7F237FA4;
    case 0x7F237FA8u: goto label_7F237FA8;
    case 0x7F237FACu: goto label_7F237FAC;
    case 0x7F237FB0u: goto label_7F237FB0;
    case 0x7F237FB4u: goto label_7F237FB4;
    case 0x7F237FB8u: goto label_7F237FB8;
    case 0x7F237FBCu: goto label_7F237FBC;
    case 0x7F237FC0u: goto label_7F237FC0;
    case 0x7F237FC4u: goto label_7F237FC4;
    case 0x7F237FC8u: goto label_7F237FC8;
    case 0x7F237FCCu: goto label_7F237FCC;
    case 0x7F237FD0u: goto label_7F237FD0;
    case 0x7F237FD4u: goto label_7F237FD4;
    case 0x7F237FD8u: goto label_7F237FD8;
    case 0x7F237FDCu: goto label_7F237FDC;
    case 0x7F237FE0u: goto label_7F237FE0;
    case 0x7F237FE4u: goto label_7F237FE4;
    case 0x7F237FE8u: goto label_7F237FE8;
    case 0x7F237FECu: goto label_7F237FEC;
    case 0x7F237FF0u: goto label_7F237FF0;
    case 0x7F237FF4u: goto label_7F237FF4;
    case 0x7F237FF8u: goto label_7F237FF8;
    case 0x7F237FFCu: goto label_7F237FFC;
    case 0x7F238000u: goto label_7F238000;
    case 0x7F238004u: goto label_7F238004;
    case 0x7F238008u: goto label_7F238008;
    case 0x7F23800Cu: goto label_7F23800C;
    case 0x7F238010u: goto label_7F238010;
    case 0x7F238014u: goto label_7F238014;
    case 0x7F238018u: goto label_7F238018;
    case 0x7F23801Cu: goto label_7F23801C;
    case 0x7F238020u: goto label_7F238020;
    case 0x7F238024u: goto label_7F238024;
    case 0x7F238028u: goto label_7F238028;
    case 0x7F23802Cu: goto label_7F23802C;
    case 0x7F238030u: goto label_7F238030;
    case 0x7F238034u: goto label_7F238034;
    case 0x7F238038u: goto label_7F238038;
    case 0x7F23803Cu: goto label_7F23803C;
    case 0x7F238040u: goto label_7F238040;
    case 0x7F238044u: goto label_7F238044;
    case 0x7F238048u: goto label_7F238048;
    case 0x7F23804Cu: goto label_7F23804C;
    case 0x7F238050u: goto label_7F238050;
    case 0x7F238054u: goto label_7F238054;
    case 0x7F238058u: goto label_7F238058;
    case 0x7F23805Cu: goto label_7F23805C;
    case 0x7F238060u: goto label_7F238060;
    case 0x7F238064u: goto label_7F238064;
    case 0x7F238068u: goto label_7F238068;
    case 0x7F23806Cu: goto label_7F23806C;
    case 0x7F238070u: goto label_7F238070;
    case 0x7F238074u: goto label_7F238074;
    case 0x7F238078u: goto label_7F238078;
    case 0x7F23807Cu: goto label_7F23807C;
    case 0x7F238080u: goto label_7F238080;
    case 0x7F238084u: goto label_7F238084;
    case 0x7F238088u: goto label_7F238088;
    case 0x7F23808Cu: goto label_7F23808C;
    case 0x7F238090u: goto label_7F238090;
    case 0x7F238094u: goto label_7F238094;
    case 0x7F238098u: goto label_7F238098;
    case 0x7F23809Cu: goto label_7F23809C;
    case 0x7F2380A0u: goto label_7F2380A0;
    case 0x7F2380A4u: goto label_7F2380A4;
    case 0x7F2380A8u: goto label_7F2380A8;
    case 0x7F2380ACu: goto label_7F2380AC;
    case 0x7F2380B0u: goto label_7F2380B0;
    case 0x7F2380B4u: goto label_7F2380B4;
    case 0x7F2380B8u: goto label_7F2380B8;
    case 0x7F2380BCu: goto label_7F2380BC;
    case 0x7F2380C0u: goto label_7F2380C0;
    case 0x7F2380C4u: goto label_7F2380C4;
    case 0x7F2380C8u: goto label_7F2380C8;
    case 0x7F2380CCu: goto label_7F2380CC;
    case 0x7F2380D0u: goto label_7F2380D0;
    case 0x7F2380D4u: goto label_7F2380D4;
    case 0x7F2380D8u: goto label_7F2380D8;
    case 0x7F2380DCu: goto label_7F2380DC;
    case 0x7F2380E0u: goto label_7F2380E0;
    case 0x7F2380E4u: goto label_7F2380E4;
    case 0x7F2380E8u: goto label_7F2380E8;
    default: return;
    }
label_7F2340EC:
    ctx->pc = 0x7F2340ECu;
    ctx->downcount -= 3;
    // 7F2340EC: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2340F0:
    ctx->pc = 0x7F2340F0u;
    // 7F2340F0: cmpw    r0, r4
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

label_7F2340F4:
    ctx->pc = 0x7F2340F4u;
    // 7F2340F4: bc    4, 1, 0x7F2340FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2340FC;
        }
    }

label_7F2340F8:
    ctx->pc = 0x7F2340F8u;
    ctx->downcount -= 1;
    // 7F2340F8: stw     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2340FC:
    ctx->pc = 0x7F2340FCu;
    ctx->downcount -= 6;
    // 7F2340FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234100:
    ctx->pc = 0x7F234100u;
    // 7F234100: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F234104:
    ctx->pc = 0x7F234104u;
    // 7F234104: addi    r5, r4, 18824
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18824);

label_7F234108:
    ctx->pc = 0x7F234108u;
    // 7F234108: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F23410C:
    ctx->pc = 0x7F23410Cu;
    // 7F23410C: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F23410Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234110:
    ctx->pc = 0x7F234110u;
    // 7F234110: b       0x7F23416C
    {
            goto label_7F23416C;
    }

label_7F234114:
    ctx->pc = 0x7F234114u;
    ctx->downcount -= 38;
    // 7F234114: lwz     r5, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F234118:
    // 7F234118: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F23411C:
    ctx->pc = 0x7F23411Cu;
    // 7F23411C: lwz     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234120:
    // 7F234120: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F234124:
    ctx->pc = 0x7F234124u;
    // 7F234124: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F234128:
    // 7F234128: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F23412C:
    ctx->pc = 0x7F23412Cu;
    // 7F23412C: lfs     f4, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F23412Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F234130:
    ctx->pc = 0x7F234130u;
    // 7F234130: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F234134:
    ctx->pc = 0x7F234134u;
    // 7F234134: lfs     f1, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234134u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234138:
    ctx->pc = 0x7F234138u;
    // 7F234138: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23413C:
    ctx->pc = 0x7F23413Cu;
    // 7F23413C: fsubs   f3, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F23413Cu)) return;
    ppc_fsubs(ctx, 3, 1, 4);

label_7F234140:
    ctx->pc = 0x7F234140u;
    // 7F234140: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234144:
    ctx->pc = 0x7F234144u;
    // 7F234144: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234144u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F234148:
    ctx->pc = 0x7F234148u;
    // 7F234148: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F23414C:
    ctx->pc = 0x7F23414Cu;
    // 7F23414C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23414Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234150:
    ctx->pc = 0x7F234150u;
    // 7F234150: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234150u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F234154:
    ctx->pc = 0x7F234154u;
    // 7F234154: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234154u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F234158:
    ctx->pc = 0x7F234158u;
    // 7F234158: fmadds f0, f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F234158u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[0], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F23415C:
    ctx->pc = 0x7F23415Cu;
    // 7F23415C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F23415Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F234160:
    ctx->pc = 0x7F234160u;
    // 7F234160: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F234164:
    ctx->pc = 0x7F234164u;
    // 7F234164: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234168:
    ctx->pc = 0x7F234168u;
    // 7F234168: stb     r0, 79(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(79);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F23416C:
    ctx->pc = 0x7F23416Cu;
    ctx->downcount -= 3;
    // 7F23416C: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234170:
    // 7F234170: cmpw    r6, r0
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

label_7F234174:
    // 7F234174: bc    12, 0, 0x7F234114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234114u;
                return;
            }
            goto label_7F234114;
        }
    }

label_7F234178:
    ctx->pc = 0x7F234178u;
    ctx->downcount -= 2;
    // 7F234178: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F23417C:
    ctx->pc = 0x7F23417Cu;
    // 7F23417C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234180:
    ctx->pc = 0x7F234180u;
    ctx->downcount -= 8;
    // 7F234180: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234184:
    ctx->pc = 0x7F234184u;
    // 7F234184: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234188:
    ctx->pc = 0x7F234188u;
    // 7F234188: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23418C:
    ctx->pc = 0x7F23418Cu;
    // 7F23418C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F234190:
    ctx->pc = 0x7F234190u;
    // 7F234190: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234194:
    ctx->pc = 0x7F234194u;
    // 7F234194: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234198:
    ctx->pc = 0x7F234198u;
    // 7F234198: cmplwi  r3, 0x0000
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

label_7F23419C:
    ctx->pc = 0x7F23419Cu;
    // 7F23419C: bc    12, 2, 0x7F2341AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2341AC;
        }
    }

label_7F2341A0:
    ctx->pc = 0x7F2341A0u;
    ctx->downcount -= 1;
    // 7F2341A0: bl      0x7F3BA300
    {
            ctx->lr = 0x7F2341A4u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F2341A4:
    ctx->pc = 0x7F2341A4u;
    ctx->downcount -= 2;
    // 7F2341A4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2341A8:
    ctx->pc = 0x7F2341A8u;
    // 7F2341A8: bl      0x7F3BA234
    {
            ctx->lr = 0x7F2341ACu;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F2341AC:
    ctx->pc = 0x7F2341ACu;
    ctx->downcount -= 9;
    // 7F2341AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2341B0:
    ctx->pc = 0x7F2341B0u;
    // 7F2341B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2341B4:
    ctx->pc = 0x7F2341B4u;
    // 7F2341B4: stw     r0, -10352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10352);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2341B8:
    ctx->pc = 0x7F2341B8u;
    // 7F2341B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2341BC:
    ctx->pc = 0x7F2341BCu;
    // 7F2341BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2341C0:
    ctx->pc = 0x7F2341C0u;
    // 7F2341C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2341C4:
    ctx->pc = 0x7F2341C4u;
    // 7F2341C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2341C8:
    ctx->pc = 0x7F2341C8u;
    // 7F2341C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2341CC:
    ctx->pc = 0x7F2341CCu;
    ctx->downcount -= 8;
    // 7F2341CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2341D0:
    ctx->pc = 0x7F2341D0u;
    // 7F2341D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2341D4:
    ctx->pc = 0x7F2341D4u;
    // 7F2341D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2341D8:
    ctx->pc = 0x7F2341D8u;
    // 7F2341D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2341DC:
    ctx->pc = 0x7F2341DCu;
    // 7F2341DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2341E0:
    ctx->pc = 0x7F2341E0u;
    // 7F2341E0: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2341E4:
    ctx->pc = 0x7F2341E4u;
    // 7F2341E4: cmpwi   r0, 8
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

label_7F2341E8:
    ctx->pc = 0x7F2341E8u;
    // 7F2341E8: bc    4, 1, 0x7F2341F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2341F4;
        }
    }

label_7F2341EC:
    ctx->pc = 0x7F2341ECu;
    ctx->downcount -= 2;
    // 7F2341EC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2341F0:
    ctx->pc = 0x7F2341F0u;
    // 7F2341F0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2341F4:
    ctx->pc = 0x7F2341F4u;
    ctx->downcount -= 4;
    // 7F2341F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2341F8:
    ctx->pc = 0x7F2341F8u;
    // 7F2341F8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2341FC:
    ctx->pc = 0x7F2341FCu;
    // 7F2341FC: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234200:
    ctx->pc = 0x7F234200u;
    // 7F234200: bl      0x7F234510
    {
            ctx->lr = 0x7F234204u;
            goto label_7F234510;
    }

label_7F234204:
    ctx->pc = 0x7F234204u;
    ctx->downcount -= 4;
    // 7F234204: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234208:
    ctx->pc = 0x7F234208u;
    // 7F234208: li      r3, 225
    ctx->gpr[3] = (u32)(s32)(225);

label_7F23420C:
    ctx->pc = 0x7F23420Cu;
    // 7F23420C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F234210:
    ctx->pc = 0x7F234210u;
    // 7F234210: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F234214u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F234214:
    ctx->pc = 0x7F234214u;
    ctx->downcount -= 4;
    // 7F234214: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F234218:
    ctx->pc = 0x7F234218u;
    // 7F234218: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23421C:
    ctx->pc = 0x7F23421Cu;
    // 7F23421C: cmplwi  r3, 0x0000
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

label_7F234220:
    ctx->pc = 0x7F234220u;
    // 7F234220: bc    4, 2, 0x7F23422C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F23422C;
        }
    }

label_7F234224:
    ctx->pc = 0x7F234224u;
    ctx->downcount -= 2;
    // 7F234224: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F234228:
    ctx->pc = 0x7F234228u;
    // 7F234228: b       0x7F234288
    {
            goto label_7F234288;
    }

label_7F23422C:
    ctx->pc = 0x7F23422Cu;
    ctx->downcount -= 5;
    // 7F23422C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234230:
    ctx->pc = 0x7F234230u;
    // 7F234230: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F234234:
    ctx->pc = 0x7F234234u;
    // 7F234234: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234238:
    ctx->pc = 0x7F234238u;
    // 7F234238: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23423C:
    ctx->pc = 0x7F23423Cu;
    // 7F23423C: bl      0x7F3BA260
    {
            ctx->lr = 0x7F234240u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F234240:
    ctx->pc = 0x7F234240u;
    ctx->downcount -= 5;
    // 7F234240: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F234244:
    ctx->pc = 0x7F234244u;
    // 7F234244: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234248:
    ctx->pc = 0x7F234248u;
    // 7F234248: addi    r4, r4, 15532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15532);

label_7F23424C:
    ctx->pc = 0x7F23424Cu;
    // 7F23424C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F234250:
    ctx->pc = 0x7F234250u;
    // 7F234250: bl      0x7F3BA254
    {
            ctx->lr = 0x7F234254u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F234254:
    ctx->pc = 0x7F234254u;
    ctx->downcount -= 4;
    // 7F234254: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F234258:
    ctx->pc = 0x7F234258u;
    // 7F234258: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F23425C:
    ctx->pc = 0x7F23425Cu;
    // 7F23425C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F234260:
    ctx->pc = 0x7F234260u;
    // 7F234260: b       0x7F234278
    {
            goto label_7F234278;
    }

label_7F234264:
    loop_7F234264(ctx);
    if (ctx->pc == 0x7F234284u) goto label_7F234284;
    return;
label_7F234268:
    // 7F234268: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F23426C:
    ctx->pc = 0x7F23426Cu;
    // 7F23426C: stb     r4, 77(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(77);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F234270:
    ctx->pc = 0x7F234270u;
    // 7F234270: stb     r4, 78(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(78);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F234274:
    ctx->pc = 0x7F234274u;
    // 7F234274: stb     r3, 79(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(79);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F234278:
    ctx->pc = 0x7F234278u;
    ctx->downcount -= 3;
    // 7F234278: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23427C:
    // 7F23427C: cmpw    r5, r0
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

label_7F234280:
    // 7F234280: bc    12, 0, 0x7F234264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234264u;
                return;
            }
            goto label_7F234264;
        }
    }

label_7F234284:
    ctx->pc = 0x7F234284u;
    ctx->downcount -= 1;
    // 7F234284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F234288:
    ctx->pc = 0x7F234288u;
    ctx->downcount -= 6;
    // 7F234288: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23428C:
    ctx->pc = 0x7F23428Cu;
    // 7F23428C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F234290:
    ctx->pc = 0x7F234290u;
    // 7F234290: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F234294:
    ctx->pc = 0x7F234294u;
    // 7F234294: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F234298:
    ctx->pc = 0x7F234298u;
    // 7F234298: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23429C:
    ctx->pc = 0x7F23429Cu;
    ctx->downcount -= 2;
    // 7F23429C: cmpwi   r4, 0
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

label_7F2342A0:
    ctx->pc = 0x7F2342A0u;
    // 7F2342A0: bc    4, 2, 0x7F2342A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2342A8;
        }
    }

label_7F2342A4:
    ctx->pc = 0x7F2342A4u;
    ctx->downcount -= 1;
    // 7F2342A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2342A8:
    ctx->pc = 0x7F2342A8u;
    ctx->downcount -= 10;
    // 7F2342A8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2342AC:
    ctx->pc = 0x7F2342ACu;
    // 7F2342AC: stfs     f1, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2342ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2342B0:
    ctx->pc = 0x7F2342B0u;
    // 7F2342B0: lfs     f1, 18868(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2342B0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2342B4:
    ctx->pc = 0x7F2342B4u;
    // 7F2342B4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2342B8:
    ctx->pc = 0x7F2342B8u;
    // 7F2342B8: lfs     f0, 18872(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2342B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2342BC:
    ctx->pc = 0x7F2342BCu;
    // 7F2342BC: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2342BCu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_7F2342C0:
    ctx->pc = 0x7F2342C0u;
    // 7F2342C0: stfs     f1, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2342C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2342C4:
    ctx->pc = 0x7F2342C4u;
    // 7F2342C4: lfs     f1, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2342C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2342C8:
    ctx->pc = 0x7F2342C8u;
    // 7F2342C8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2342C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2342CC:
    ctx->pc = 0x7F2342CCu;
    // 7F2342CC: bc    4, 1, 0x7F2342D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2342D4;
        }
    }

label_7F2342D0:
    ctx->pc = 0x7F2342D0u;
    ctx->downcount -= 1;
    // 7F2342D0: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2342D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2342D4:
    ctx->pc = 0x7F2342D4u;
    ctx->downcount -= 4;
    // 7F2342D4: stw     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2342D8:
    ctx->pc = 0x7F2342D8u;
    // 7F2342D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2342DC:
    ctx->pc = 0x7F2342DCu;
    // 7F2342DC: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2342E0:
    ctx->pc = 0x7F2342E0u;
    // 7F2342E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2342E4:
    ctx->pc = 0x7F2342E4u;
    ctx->downcount -= 5;
    // 7F2342E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2342E8:
    ctx->pc = 0x7F2342E8u;
    // 7F2342E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2342EC:
    ctx->pc = 0x7F2342ECu;
    // 7F2342EC: cmpwi   r4, 1
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

label_7F2342F0:
    ctx->pc = 0x7F2342F0u;
    // 7F2342F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2342F4:
    ctx->pc = 0x7F2342F4u;
    // 7F2342F4: bc    12, 2, 0x7F234328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F234328;
        }
    }

label_7F2342F8:
    ctx->pc = 0x7F2342F8u;
    ctx->downcount -= 1;
    // 7F2342F8: bc    4, 0, 0x7F234308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234308;
        }
    }

label_7F2342FC:
    ctx->pc = 0x7F2342FCu;
    ctx->downcount -= 2;
    // 7F2342FC: cmpwi   r4, 0
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

label_7F234300:
    ctx->pc = 0x7F234300u;
    // 7F234300: bc    4, 0, 0x7F234314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234314;
        }
    }

label_7F234304:
    ctx->pc = 0x7F234304u;
    ctx->downcount -= 1;
    // 7F234304: b       0x7F2343B0
    {
            goto label_7F2343B0;
    }

label_7F234308:
    ctx->pc = 0x7F234308u;
    ctx->downcount -= 2;
    // 7F234308: cmpwi   r4, 3
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

label_7F23430C:
    ctx->pc = 0x7F23430Cu;
    // 7F23430C: bc    4, 0, 0x7F2343B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2343B0;
        }
    }

label_7F234310:
    ctx->pc = 0x7F234310u;
    ctx->downcount -= 1;
    // 7F234310: b       0x7F23433C
    {
            goto label_7F23433C;
    }

label_7F234314:
    ctx->pc = 0x7F234314u;
    ctx->downcount -= 5;
    // 7F234314: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234318:
    ctx->pc = 0x7F234318u;
    // 7F234318: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23431C:
    ctx->pc = 0x7F23431Cu;
    // 7F23431C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F234320:
    ctx->pc = 0x7F234320u;
    // 7F234320: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234324:
    ctx->pc = 0x7F234324u;
    // 7F234324: b       0x7F2343B8
    {
            goto label_7F2343B8;
    }

label_7F234328:
    ctx->pc = 0x7F234328u;
    ctx->downcount -= 5;
    // 7F234328: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23432C:
    ctx->pc = 0x7F23432Cu;
    // 7F23432C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234330:
    ctx->pc = 0x7F234330u;
    // 7F234330: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F234334:
    ctx->pc = 0x7F234334u;
    // 7F234334: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234338:
    ctx->pc = 0x7F234338u;
    // 7F234338: b       0x7F2343B8
    {
            goto label_7F2343B8;
    }

label_7F23433C:
    ctx->pc = 0x7F23433Cu;
    ctx->downcount -= 44;
    // 7F23433C: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234340:
    ctx->pc = 0x7F234340u;
    // 7F234340: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F234344:
    ctx->pc = 0x7F234344u;
    // 7F234344: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234348:
    ctx->pc = 0x7F234348u;
    // 7F234348: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F23434C:
    ctx->pc = 0x7F23434Cu;
    // 7F23434C: xoris   r7, r0, 0x8000
    ctx->gpr[7] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F234350:
    ctx->pc = 0x7F234350u;
    // 7F234350: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234354:
    ctx->pc = 0x7F234354u;
    // 7F234354: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F234358:
    ctx->pc = 0x7F234358u;
    // 7F234358: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F23435C:
    ctx->pc = 0x7F23435Cu;
    // 7F23435C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F234360:
    ctx->pc = 0x7F234360u;
    // 7F234360: lfd     f2, 18824(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F234360u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(18824);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234364:
    ctx->pc = 0x7F234364u;
    // 7F234364: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234368:
    ctx->pc = 0x7F234368u;
    // 7F234368: lfs     f4, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234368u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F23436C:
    ctx->pc = 0x7F23436Cu;
    // 7F23436C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23436Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234370:
    ctx->pc = 0x7F234370u;
    // 7F234370: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F234374:
    ctx->pc = 0x7F234374u;
    // 7F234374: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234374u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F234378:
    ctx->pc = 0x7F234378u;
    // 7F234378: lfs     f3, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234378u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F23437C:
    ctx->pc = 0x7F23437Cu;
    // 7F23437C: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234380:
    ctx->pc = 0x7F234380u;
    // 7F234380: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F234380u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_7F234384:
    ctx->pc = 0x7F234384u;
    // 7F234384: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234388:
    ctx->pc = 0x7F234388u;
    // 7F234388: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23438C:
    ctx->pc = 0x7F23438Cu;
    // 7F23438C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234390:
    ctx->pc = 0x7F234390u;
    // 7F234390: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234390u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F234394:
    ctx->pc = 0x7F234394u;
    // 7F234394: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234398:
    ctx->pc = 0x7F234398u;
    // 7F234398: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234398u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F23439C:
    ctx->pc = 0x7F23439Cu;
    // 7F23439C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23439Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2343A0:
    ctx->pc = 0x7F2343A0u;
    // 7F2343A0: fmadds f1, f3, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2343A0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F2343A4:
    ctx->pc = 0x7F2343A4u;
    // 7F2343A4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2343A4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F2343A8:
    ctx->pc = 0x7F2343A8u;
    // 7F2343A8: bl      0x7F23429C
    {
            ctx->lr = 0x7F2343ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23429Cu;
                return;
            }
            goto label_7F23429C;
    }

label_7F2343AC:
    ctx->pc = 0x7F2343ACu;
    ctx->downcount -= 1;
    // 7F2343AC: b       0x7F2343B8
    {
            goto label_7F2343B8;
    }

label_7F2343B0:
    ctx->pc = 0x7F2343B0u;
    ctx->downcount -= 1;
    // 7F2343B0: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F2343B4u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F2343B4:
    ctx->pc = 0x7F2343B4u;
    ctx->downcount -= 1;
    // 7F2343B4: b       0x7F2343BC
    {
            goto label_7F2343BC;
    }

label_7F2343B8:
    ctx->pc = 0x7F2343B8u;
    ctx->downcount -= 1;
    // 7F2343B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2343BC:
    ctx->pc = 0x7F2343BCu;
    ctx->downcount -= 5;
    // 7F2343BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2343C0:
    ctx->pc = 0x7F2343C0u;
    // 7F2343C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2343C4:
    ctx->pc = 0x7F2343C4u;
    // 7F2343C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2343C8:
    ctx->pc = 0x7F2343C8u;
    // 7F2343C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2343CC:
    ctx->pc = 0x7F2343CCu;
    ctx->downcount -= 26;
    // 7F2343CC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2343D0:
    ctx->pc = 0x7F2343D0u;
    // 7F2343D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2343D4:
    ctx->pc = 0x7F2343D4u;
    // 7F2343D4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2343D8:
    ctx->pc = 0x7F2343D8u;
    // 7F2343D8: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2343D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2343DC:
    ctx->pc = 0x7F2343DCu;
    // 7F2343DC: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2343DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2343DCu);
        if (ctx->exception) return;
    }

label_7F2343E0:
    ctx->pc = 0x7F2343E0u;
    // 7F2343E0: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2343E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2343E4:
    ctx->pc = 0x7F2343E4u;
    // 7F2343E4: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2343E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2343E4u);
        if (ctx->exception) return;
    }

label_7F2343E8:
    ctx->pc = 0x7F2343E8u;
    // 7F2343E8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2343EC:
    ctx->pc = 0x7F2343ECu;
    // 7F2343EC: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2343F0:
    ctx->pc = 0x7F2343F0u;
    // 7F2343F0: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2343F0u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F2343F4:
    ctx->pc = 0x7F2343F4u;
    // 7F2343F4: lwz     r0, -10352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2343F8:
    ctx->pc = 0x7F2343F8u;
    // 7F2343F8: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2343F8u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F2343FC:
    ctx->pc = 0x7F2343FCu;
    // 7F2343FC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234400:
    ctx->pc = 0x7F234400u;
    // 7F234400: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F234404:
    ctx->pc = 0x7F234404u;
    // 7F234404: cmplwi  r0, 0x0000
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

label_7F234408:
    ctx->pc = 0x7F234408u;
    // 7F234408: bc    12, 2, 0x7F234430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F234430;
        }
    }

label_7F23440C:
    ctx->pc = 0x7F23440Cu;
    ctx->downcount -= 7;
    // 7F23440C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234410:
    ctx->pc = 0x7F234410u;
    // 7F234410: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F234414:
    ctx->pc = 0x7F234414u;
    // 7F234414: addi    r5, r4, 18816
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18816);

label_7F234418:
    ctx->pc = 0x7F234418u;
    // 7F234418: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F23441C:
    ctx->pc = 0x7F23441Cu;
    // 7F23441C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F23441Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234420:
    ctx->pc = 0x7F234420u;
    // 7F234420: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234420u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F234424:
    ctx->pc = 0x7F234424u;
    // 7F234424: bl      0x7F23429C
    {
            ctx->lr = 0x7F234428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23429Cu;
                return;
            }
            goto label_7F23429C;
    }

label_7F234428:
    ctx->pc = 0x7F234428u;
    ctx->downcount -= 2;
    // 7F234428: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F23442C:
    ctx->pc = 0x7F23442Cu;
    // 7F23442C: b       0x7F2344EC
    {
            goto label_7F2344EC;
    }

label_7F234430:
    ctx->pc = 0x7F234430u;
    ctx->downcount -= 5;
    // 7F234430: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F234434:
    ctx->pc = 0x7F234434u;
    // 7F234434: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F234438:
    ctx->pc = 0x7F234438u;
    // 7F234438: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F23443C:
    ctx->pc = 0x7F23443Cu;
    // 7F23443C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F234440:
    ctx->pc = 0x7F234440u;
    // 7F234440: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F234444u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F234444:
    ctx->pc = 0x7F234444u;
    ctx->downcount -= 2;
    // 7F234444: or.   r31, r3, r3
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

label_7F234448:
    ctx->pc = 0x7F234448u;
    // 7F234448: bc    12, 2, 0x7F2344E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2344E8;
        }
    }

label_7F23444C:
    ctx->pc = 0x7F23444Cu;
    ctx->downcount -= 5;
    // 7F23444C: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F234450:
    ctx->pc = 0x7F234450u;
    // 7F234450: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F234454:
    ctx->pc = 0x7F234454u;
    // 7F234454: addi    r4, r4, 16580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16580);

label_7F234458:
    ctx->pc = 0x7F234458u;
    // 7F234458: addi    r5, r5, 16768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16768);

label_7F23445C:
    ctx->pc = 0x7F23445Cu;
    // 7F23445C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F234460u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F234460:
    ctx->pc = 0x7F234460u;
    ctx->downcount -= 17;
    // 7F234460: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234464:
    ctx->pc = 0x7F234464u;
    // 7F234464: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234468:
    ctx->pc = 0x7F234468u;
    // 7F234468: lfs     f1, 18816(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234468u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18816);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F23446C:
    ctx->pc = 0x7F23446Cu;
    // 7F23446C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F234470:
    ctx->pc = 0x7F234470u;
    // 7F234470: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F234474:
    ctx->pc = 0x7F234474u;
    // 7F234474: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F234478:
    ctx->pc = 0x7F234478u;
    // 7F234478: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23447C:
    ctx->pc = 0x7F23447Cu;
    // 7F23447C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F234480:
    ctx->pc = 0x7F234480u;
    // 7F234480: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234480u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F234484:
    ctx->pc = 0x7F234484u;
    // 7F234484: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F234488:
    ctx->pc = 0x7F234488u;
    // 7F234488: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F23448C:
    ctx->pc = 0x7F23448Cu;
    // 7F23448C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F234490:
    ctx->pc = 0x7F234490u;
    // 7F234490: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F234494:
    ctx->pc = 0x7F234494u;
    // 7F234494: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F234498:
    ctx->pc = 0x7F234498u;
    // 7F234498: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23449C:
    ctx->pc = 0x7F23449Cu;
    // 7F23449C: stw     r29, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2344A0:
    ctx->pc = 0x7F2344A0u;
    // 7F2344A0: bl      0x7F23429C
    {
            ctx->lr = 0x7F2344A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23429Cu;
                return;
            }
            goto label_7F23429C;
    }

label_7F2344A4:
    ctx->pc = 0x7F2344A4u;
    ctx->downcount -= 5;
    // 7F2344A4: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2344A4u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F2344A8:
    ctx->pc = 0x7F2344A8u;
    // 7F2344A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2344AC:
    ctx->pc = 0x7F2344ACu;
    // 7F2344AC: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2344ACu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F2344B0:
    ctx->pc = 0x7F2344B0u;
    // 7F2344B0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2344B4:
    ctx->pc = 0x7F2344B4u;
    // 7F2344B4: bl      0x7F2341CC
    {
            ctx->lr = 0x7F2344B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2341CCu;
                return;
            }
            goto label_7F2341CC;
    }

label_7F2344B8:
    ctx->pc = 0x7F2344B8u;
    ctx->downcount -= 2;
    // 7F2344B8: cmpwi   r3, 0
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

label_7F2344BC:
    ctx->pc = 0x7F2344BCu;
    // 7F2344BC: bc    4, 0, 0x7F2344D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2344D0;
        }
    }

label_7F2344C0:
    ctx->pc = 0x7F2344C0u;
    ctx->downcount -= 2;
    // 7F2344C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2344C4:
    ctx->pc = 0x7F2344C4u;
    // 7F2344C4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2344C8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2344C8:
    ctx->pc = 0x7F2344C8u;
    ctx->downcount -= 2;
    // 7F2344C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2344CC:
    ctx->pc = 0x7F2344CCu;
    // 7F2344CC: b       0x7F2344EC
    {
            goto label_7F2344EC;
    }

label_7F2344D0:
    ctx->pc = 0x7F2344D0u;
    ctx->downcount -= 4;
    // 7F2344D0: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F2344D4:
    ctx->pc = 0x7F2344D4u;
    // 7F2344D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2344D8:
    ctx->pc = 0x7F2344D8u;
    // 7F2344D8: addi    r4, r4, 17124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17124);

label_7F2344DC:
    ctx->pc = 0x7F2344DCu;
    // 7F2344DC: bl      0x7F3C8990
    {
            ctx->lr = 0x7F2344E0u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F2344E0:
    ctx->pc = 0x7F2344E0u;
    ctx->downcount -= 2;
    // 7F2344E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2344E4:
    ctx->pc = 0x7F2344E4u;
    // 7F2344E4: stw     r31, -10352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10352);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2344E8:
    ctx->pc = 0x7F2344E8u;
    ctx->downcount -= 1;
    // 7F2344E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2344EC:
    ctx->pc = 0x7F2344ECu;
    ctx->downcount -= 20;
    // 7F2344EC: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2344ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2344ECu);
        if (ctx->exception) return;
    }

label_7F2344F0:
    ctx->pc = 0x7F2344F0u;
    // 7F2344F0: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2344F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2344F4:
    ctx->pc = 0x7F2344F4u;
    // 7F2344F4: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2344F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2344F4u);
        if (ctx->exception) return;
    }

label_7F2344F8:
    ctx->pc = 0x7F2344F8u;
    // 7F2344F8: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2344F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2344FC:
    ctx->pc = 0x7F2344FCu;
    // 7F2344FC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F234500:
    ctx->pc = 0x7F234500u;
    // 7F234500: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234504:
    ctx->pc = 0x7F234504u;
    // 7F234504: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F234508:
    ctx->pc = 0x7F234508u;
    // 7F234508: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F23450C:
    ctx->pc = 0x7F23450Cu;
    // 7F23450C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234510:
    ctx->pc = 0x7F234510u;
    ctx->downcount -= 15;
    // 7F234510: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234514:
    ctx->pc = 0x7F234514u;
    // 7F234514: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234518:
    ctx->pc = 0x7F234518u;
    // 7F234518: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F23451C:
    ctx->pc = 0x7F23451Cu;
    // 7F23451C: lwzu     r7, 18880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18880);
        ctx->gpr[7] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F234520:
    ctx->pc = 0x7F234520u;
    // 7F234520: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F234524:
    ctx->pc = 0x7F234524u;
    // 7F234524: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F234528:
    ctx->pc = 0x7F234528u;
    // 7F234528: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F23452C:
    ctx->pc = 0x7F23452Cu;
    // 7F23452C: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234530:
    ctx->pc = 0x7F234530u;
    // 7F234530: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F234534:
    ctx->pc = 0x7F234534u;
    // 7F234534: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234538:
    ctx->pc = 0x7F234538u;
    // 7F234538: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F23453C:
    ctx->pc = 0x7F23453Cu;
    // 7F23453C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F234540:
    ctx->pc = 0x7F234540u;
    // 7F234540: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234544:
    ctx->pc = 0x7F234544u;
    // 7F234544: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F234548:
    ctx->pc = 0x7F234548u;
    // 7F234548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23454C:
    ctx->pc = 0x7F23454Cu;
    ctx->downcount -= 6;
    // 7F23454C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234550:
    ctx->pc = 0x7F234550u;
    // 7F234550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234554:
    ctx->pc = 0x7F234554u;
    // 7F234554: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234558:
    ctx->pc = 0x7F234558u;
    // 7F234558: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F23455C:
    ctx->pc = 0x7F23455Cu;
    // 7F23455C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234560:
    ctx->pc = 0x7F234560u;
    // 7F234560: bl      0x7F234614
    {
            ctx->lr = 0x7F234564u;
            goto label_7F234614;
    }

label_7F234564:
    ctx->pc = 0x7F234564u;
    ctx->downcount -= 48;
    // 7F234564: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F234568:
    ctx->pc = 0x7F234568u;
    // 7F234568: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F23456C:
    ctx->pc = 0x7F23456Cu;
    // 7F23456C: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F234570:
    ctx->pc = 0x7F234570u;
    // 7F234570: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
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

label_7F234574:
    ctx->pc = 0x7F234574u;
    // 7F234574: bc    4, 2, 0x7F2345E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2345E4;
        }
    }

label_7F234578:
    ctx->pc = 0x7F234578u;
    ctx->downcount -= 14;
    // 7F234578: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23457C:
    ctx->pc = 0x7F23457Cu;
    // 7F23457C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234580:
    ctx->pc = 0x7F234580u;
    // 7F234580: addi    r5, r4, 18896
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18896);

label_7F234584:
    ctx->pc = 0x7F234584u;
    // 7F234584: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F234588:
    ctx->pc = 0x7F234588u;
    // 7F234588: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F23458C:
    ctx->pc = 0x7F23458Cu;
    // 7F23458C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234590:
    ctx->pc = 0x7F234590u;
    // 7F234590: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234590u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234594:
    ctx->pc = 0x7F234594u;
    // 7F234594: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234598:
    ctx->pc = 0x7F234598u;
    // 7F234598: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23459C:
    ctx->pc = 0x7F23459Cu;
    // 7F23459C: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2345A0:
    ctx->pc = 0x7F2345A0u;
    // 7F2345A0: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2345A4:
    ctx->pc = 0x7F2345A4u;
    // 7F2345A4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2345A8:
    ctx->pc = 0x7F2345A8u;
    // 7F2345A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2345AC:
    ctx->pc = 0x7F2345ACu;
    // 7F2345AC: bl      0x7F229328
    {
            ctx->lr = 0x7F2345B0u;
            ctx->pc = 0x7F229328u;
            return;
    }

label_7F2345B0:
    ctx->pc = 0x7F2345B0u;
    ctx->downcount -= 4;
    // 7F2345B0: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2345B4:
    ctx->pc = 0x7F2345B4u;
    // 7F2345B4: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F2345B8:
    ctx->pc = 0x7F2345B8u;
    // 7F2345B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2345BC:
    ctx->pc = 0x7F2345BCu;
    // 7F2345BC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2345C0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2345C0:
    ctx->pc = 0x7F2345C0u;
    ctx->downcount -= 9;
    // 7F2345C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2345C4:
    ctx->pc = 0x7F2345C4u;
    // 7F2345C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2345C8:
    ctx->pc = 0x7F2345C8u;
    // 7F2345C8: addi    r5, r3, 18900
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18900);

label_7F2345CC:
    ctx->pc = 0x7F2345CCu;
    // 7F2345CC: lfs     f2, 18904(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2345CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2345D0:
    ctx->pc = 0x7F2345D0u;
    // 7F2345D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2345D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2345D4:
    ctx->pc = 0x7F2345D4u;
    // 7F2345D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2345D8:
    ctx->pc = 0x7F2345D8u;
    // 7F2345D8: li      r4, -256
    ctx->gpr[4] = (u32)(s32)(-256);

label_7F2345DC:
    ctx->pc = 0x7F2345DCu;
    // 7F2345DC: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F2345E0:
    ctx->pc = 0x7F2345E0u;
    // 7F2345E0: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F2345E4u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F2345E4:
    ctx->pc = 0x7F2345E4u;
    ctx->downcount -= 5;
    // 7F2345E4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2345E8:
    ctx->pc = 0x7F2345E8u;
    // 7F2345E8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2345EC:
    ctx->pc = 0x7F2345ECu;
    // 7F2345EC: cmpwi   r0, 180
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(180);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2345F0:
    ctx->pc = 0x7F2345F0u;
    // 7F2345F0: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2345F4:
    ctx->pc = 0x7F2345F4u;
    // 7F2345F4: bc    4, 1, 0x7F234600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234600;
        }
    }

label_7F2345F8:
    ctx->pc = 0x7F2345F8u;
    ctx->downcount -= 2;
    // 7F2345F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2345FC:
    ctx->pc = 0x7F2345FCu;
    // 7F2345FC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F234600u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F234600:
    ctx->pc = 0x7F234600u;
    ctx->downcount -= 6;
    // 7F234600: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234604:
    ctx->pc = 0x7F234604u;
    // 7F234604: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F234608:
    ctx->pc = 0x7F234608u;
    // 7F234608: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23460C:
    ctx->pc = 0x7F23460Cu;
    // 7F23460C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F234610:
    ctx->pc = 0x7F234610u;
    // 7F234610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234614:
    ctx->pc = 0x7F234614u;
    ctx->downcount -= 13;
    // 7F234614: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F234618:
    ctx->pc = 0x7F234618u;
    // 7F234618: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F23461C:
    ctx->pc = 0x7F23461Cu;
    // 7F23461C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F234620:
    ctx->pc = 0x7F234620u;
    // 7F234620: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234624:
    ctx->pc = 0x7F234624u;
    // 7F234624: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F234628:
    ctx->pc = 0x7F234628u;
    // 7F234628: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F23462C:
    ctx->pc = 0x7F23462Cu;
    // 7F23462C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F234630:
    ctx->pc = 0x7F234630u;
    // 7F234630: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F234634:
    ctx->pc = 0x7F234634u;
    // 7F234634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234638:
    ctx->pc = 0x7F234638u;
    ctx->downcount -= 1;
    // 7F234638: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23463C:
    ctx->pc = 0x7F23463Cu;
    ctx->downcount -= 14;
    // 7F23463C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234640:
    ctx->pc = 0x7F234640u;
    // 7F234640: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234644:
    ctx->pc = 0x7F234644u;
    // 7F234644: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234648:
    ctx->pc = 0x7F234648u;
    // 7F234648: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F23464C:
    ctx->pc = 0x7F23464Cu;
    // 7F23464C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F234650:
    ctx->pc = 0x7F234650u;
    // 7F234650: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234654:
    ctx->pc = 0x7F234654u;
    // 7F234654: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234658:
    ctx->pc = 0x7F234658u;
    // 7F234658: addi    r0, r4, 48
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(48);

label_7F23465C:
    ctx->pc = 0x7F23465Cu;
    // 7F23465C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234660:
    ctx->pc = 0x7F234660u;
    // 7F234660: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F234664:
    ctx->pc = 0x7F234664u;
    // 7F234664: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234668:
    ctx->pc = 0x7F234668u;
    // 7F234668: lfs     f1, 18896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234668u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F23466C:
    ctx->pc = 0x7F23466Cu;
    // 7F23466C: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234670:
    ctx->pc = 0x7F234670u;
    // 7F234670: bl      0x7F229328
    {
            ctx->lr = 0x7F234674u;
            ctx->pc = 0x7F229328u;
            return;
    }

label_7F234674:
    ctx->pc = 0x7F234674u;
    ctx->downcount -= 2;
    // 7F234674: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234678:
    ctx->pc = 0x7F234678u;
    // 7F234678: bl      0x7F228CE4
    {
            ctx->lr = 0x7F23467Cu;
            ctx->pc = 0x7F228CE4u;
            return;
    }

label_7F23467C:
    ctx->pc = 0x7F23467Cu;
    ctx->downcount -= 4;
    // 7F23467C: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234680:
    ctx->pc = 0x7F234680u;
    // 7F234680: li      r3, 73
    ctx->gpr[3] = (u32)(s32)(73);

label_7F234684:
    ctx->pc = 0x7F234684u;
    // 7F234684: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F234688:
    ctx->pc = 0x7F234688u;
    // 7F234688: bl      0x7F0117B8
    {
            ctx->lr = 0x7F23468Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F23468C:
    ctx->pc = 0x7F23468Cu;
    ctx->downcount -= 4;
    // 7F23468C: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234690:
    ctx->pc = 0x7F234690u;
    // 7F234690: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F234694:
    ctx->pc = 0x7F234694u;
    // 7F234694: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F234698:
    ctx->pc = 0x7F234698u;
    // 7F234698: bl      0x7F0117B8
    {
            ctx->lr = 0x7F23469Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F23469C:
    ctx->pc = 0x7F23469Cu;
    ctx->downcount -= 7;
    // 7F23469C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2346A0:
    ctx->pc = 0x7F2346A0u;
    // 7F2346A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2346A4:
    ctx->pc = 0x7F2346A4u;
    // 7F2346A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2346A8:
    ctx->pc = 0x7F2346A8u;
    // 7F2346A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2346AC:
    ctx->pc = 0x7F2346ACu;
    // 7F2346AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2346B0:
    ctx->pc = 0x7F2346B0u;
    // 7F2346B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2346B4:
    ctx->pc = 0x7F2346B4u;
    ctx->downcount -= 21;
    // 7F2346B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2346B8:
    ctx->pc = 0x7F2346B8u;
    // 7F2346B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2346BC:
    ctx->pc = 0x7F2346BCu;
    // 7F2346BC: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F2346C0:
    ctx->pc = 0x7F2346C0u;
    // 7F2346C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2346C4:
    ctx->pc = 0x7F2346C4u;
    // 7F2346C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2346C8:
    ctx->pc = 0x7F2346C8u;
    // 7F2346C8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2346CC:
    ctx->pc = 0x7F2346CCu;
    // 7F2346CC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2346D0:
    ctx->pc = 0x7F2346D0u;
    // 7F2346D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2346D4:
    ctx->pc = 0x7F2346D4u;
    // 7F2346D4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2346D8:
    ctx->pc = 0x7F2346D8u;
    // 7F2346D8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F2346DC:
    ctx->pc = 0x7F2346DCu;
    // 7F2346DC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2346E0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2346E0:
    ctx->pc = 0x7F2346E0u;
    ctx->downcount -= 2;
    // 7F2346E0: or.   r31, r3, r3
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

label_7F2346E4:
    ctx->pc = 0x7F2346E4u;
    // 7F2346E4: bc    12, 2, 0x7F23474C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23474C;
        }
    }

label_7F2346E8:
    ctx->pc = 0x7F2346E8u;
    ctx->downcount -= 5;
    // 7F2346E8: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F2346EC:
    ctx->pc = 0x7F2346ECu;
    // 7F2346EC: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F2346F0:
    ctx->pc = 0x7F2346F0u;
    // 7F2346F0: addi    r4, r4, 17740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17740);

label_7F2346F4:
    ctx->pc = 0x7F2346F4u;
    // 7F2346F4: addi    r5, r5, 17976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17976);

label_7F2346F8:
    ctx->pc = 0x7F2346F8u;
    // 7F2346F8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2346FCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2346FC:
    ctx->pc = 0x7F2346FCu;
    ctx->downcount -= 14;
    // 7F2346FC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234700:
    ctx->pc = 0x7F234700u;
    // 7F234700: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F234704:
    ctx->pc = 0x7F234704u;
    // 7F234704: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F234708:
    ctx->pc = 0x7F234708u;
    // 7F234708: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F23470C:
    ctx->pc = 0x7F23470Cu;
    // 7F23470C: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F234710:
    ctx->pc = 0x7F234710u;
    // 7F234710: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F234714:
    ctx->pc = 0x7F234714u;
    // 7F234714: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F234718:
    ctx->pc = 0x7F234718u;
    // 7F234718: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F23471C:
    ctx->pc = 0x7F23471Cu;
    // 7F23471C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F234720:
    ctx->pc = 0x7F234720u;
    // 7F234720: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234724:
    ctx->pc = 0x7F234724u;
    // 7F234724: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F234728:
    ctx->pc = 0x7F234728u;
    // 7F234728: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F23472C:
    ctx->pc = 0x7F23472Cu;
    // 7F23472C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234730:
    ctx->pc = 0x7F234730u;
    // 7F234730: bl      0x7F23463C
    {
            ctx->lr = 0x7F234734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23463Cu;
                return;
            }
            goto label_7F23463C;
    }

label_7F234734:
    ctx->pc = 0x7F234734u;
    ctx->downcount -= 2;
    // 7F234734: cmpwi   r3, 0
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

label_7F234738:
    ctx->pc = 0x7F234738u;
    // 7F234738: bc    4, 0, 0x7F23474C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F23474C;
        }
    }

label_7F23473C:
    ctx->pc = 0x7F23473Cu;
    ctx->downcount -= 2;
    // 7F23473C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F234740:
    ctx->pc = 0x7F234740u;
    // 7F234740: bl      0x7F3C8210
    {
            ctx->lr = 0x7F234744u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F234744:
    ctx->pc = 0x7F234744u;
    ctx->downcount -= 2;
    // 7F234744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F234748:
    ctx->pc = 0x7F234748u;
    // 7F234748: b       0x7F234750
    {
            goto label_7F234750;
    }

label_7F23474C:
    ctx->pc = 0x7F23474Cu;
    ctx->downcount -= 1;
    // 7F23474C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F234750:
    ctx->pc = 0x7F234750u;
    ctx->downcount -= 16;
    // 7F234750: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F234754:
    ctx->pc = 0x7F234754u;
    // 7F234754: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234758:
    ctx->pc = 0x7F234758u;
    // 7F234758: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23475C:
    ctx->pc = 0x7F23475Cu;
    // 7F23475C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F234760:
    ctx->pc = 0x7F234760u;
    // 7F234760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234764:
    ctx->pc = 0x7F234764u;
    ctx->downcount -= 11;
    // 7F234764: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234768:
    ctx->pc = 0x7F234768u;
    // 7F234768: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23476C:
    ctx->pc = 0x7F23476Cu;
    // 7F23476C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234770:
    ctx->pc = 0x7F234770u;
    // 7F234770: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F234774:
    ctx->pc = 0x7F234774u;
    // 7F234774: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F234778:
    ctx->pc = 0x7F234778u;
    // 7F234778: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F23477C:
    ctx->pc = 0x7F23477Cu;
    // 7F23477C: stb     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F234780:
    ctx->pc = 0x7F234780u;
    // 7F234780: stb     r31, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F234784:
    ctx->pc = 0x7F234784u;
    // 7F234784: stb     r31, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F234788:
    ctx->pc = 0x7F234788u;
    // 7F234788: stb     r0, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F23478C:
    ctx->pc = 0x7F23478Cu;
    // 7F23478C: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F234790u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F234790:
    ctx->pc = 0x7F234790u;
    ctx->downcount -= 1;
    // 7F234790: bl      0x7F2EA944
    {
            ctx->lr = 0x7F234794u;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F234794:
    ctx->pc = 0x7F234794u;
    ctx->downcount -= 5;
    // 7F234794: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F234798:
    ctx->pc = 0x7F234798u;
    // 7F234798: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F23479C:
    ctx->pc = 0x7F23479Cu;
    // 7F23479C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2347A0:
    ctx->pc = 0x7F2347A0u;
    // 7F2347A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2347A4:
    ctx->pc = 0x7F2347A4u;
    // 7F2347A4: bl      0x80046238
    {
            ctx->lr = 0x7F2347A8u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2347A8:
    ctx->pc = 0x7F2347A8u;
    ctx->downcount -= 8;
    // 7F2347A8: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2347AC:
    ctx->pc = 0x7F2347ACu;
    // 7F2347AC: addi    r7, r1, 12
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2347B0:
    ctx->pc = 0x7F2347B0u;
    // 7F2347B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2347B4:
    ctx->pc = 0x7F2347B4u;
    // 7F2347B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2347B8:
    ctx->pc = 0x7F2347B8u;
    // 7F2347B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2347BC:
    ctx->pc = 0x7F2347BCu;
    // 7F2347BC: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F2347C0:
    ctx->pc = 0x7F2347C0u;
    // 7F2347C0: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F2347C4:
    ctx->pc = 0x7F2347C4u;
    // 7F2347C4: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F2347C8u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F2347C8:
    ctx->pc = 0x7F2347C8u;
    ctx->downcount -= 6;
    // 7F2347C8: stb     r31, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F2347CC:
    ctx->pc = 0x7F2347CCu;
    // 7F2347CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2347D0:
    ctx->pc = 0x7F2347D0u;
    // 7F2347D0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2347D4:
    ctx->pc = 0x7F2347D4u;
    // 7F2347D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2347D8:
    ctx->pc = 0x7F2347D8u;
    // 7F2347D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2347DC:
    ctx->pc = 0x7F2347DCu;
    // 7F2347DC: bl      0x80046238
    {
            ctx->lr = 0x7F2347E0u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F2347E0:
    ctx->pc = 0x7F2347E0u;
    ctx->downcount -= 8;
    // 7F2347E0: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2347E4:
    ctx->pc = 0x7F2347E4u;
    // 7F2347E4: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2347E8:
    ctx->pc = 0x7F2347E8u;
    // 7F2347E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2347EC:
    ctx->pc = 0x7F2347ECu;
    // 7F2347EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2347F0:
    ctx->pc = 0x7F2347F0u;
    // 7F2347F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2347F4:
    ctx->pc = 0x7F2347F4u;
    // 7F2347F4: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F2347F8:
    ctx->pc = 0x7F2347F8u;
    // 7F2347F8: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F2347FC:
    ctx->pc = 0x7F2347FCu;
    // 7F2347FC: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F234800u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F234800:
    ctx->pc = 0x7F234800u;
    ctx->downcount -= 6;
    // 7F234800: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234804:
    ctx->pc = 0x7F234804u;
    // 7F234804: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F234808:
    ctx->pc = 0x7F234808u;
    // 7F234808: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23480C:
    ctx->pc = 0x7F23480Cu;
    // 7F23480C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F234810:
    ctx->pc = 0x7F234810u;
    // 7F234810: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234814:
    ctx->pc = 0x7F234814u;
    ctx->downcount -= 9;
    // 7F234814: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234818:
    ctx->pc = 0x7F234818u;
    // 7F234818: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23481C:
    ctx->pc = 0x7F23481Cu;
    // 7F23481C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234820:
    ctx->pc = 0x7F234820u;
    // 7F234820: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F234824:
    ctx->pc = 0x7F234824u;
    // 7F234824: stb     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F234828:
    ctx->pc = 0x7F234828u;
    // 7F234828: stb     r4, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F23482C:
    ctx->pc = 0x7F23482Cu;
    // 7F23482C: stb     r4, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F234830:
    ctx->pc = 0x7F234830u;
    // 7F234830: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234834:
    ctx->pc = 0x7F234834u;
    // 7F234834: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F234838u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F234838:
    ctx->pc = 0x7F234838u;
    ctx->downcount -= 1;
    // 7F234838: bl      0x7F2EA944
    {
            ctx->lr = 0x7F23483Cu;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F23483C:
    ctx->pc = 0x7F23483Cu;
    ctx->downcount -= 5;
    // 7F23483C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F234840:
    ctx->pc = 0x7F234840u;
    // 7F234840: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F234844:
    ctx->pc = 0x7F234844u;
    // 7F234844: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F234848:
    ctx->pc = 0x7F234848u;
    // 7F234848: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F23484C:
    ctx->pc = 0x7F23484Cu;
    // 7F23484C: bl      0x80046238
    {
            ctx->lr = 0x7F234850u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F234850:
    ctx->pc = 0x7F234850u;
    ctx->downcount -= 8;
    // 7F234850: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234854:
    ctx->pc = 0x7F234854u;
    // 7F234854: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F234858:
    ctx->pc = 0x7F234858u;
    // 7F234858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F23485C:
    ctx->pc = 0x7F23485Cu;
    // 7F23485C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F234860:
    ctx->pc = 0x7F234860u;
    // 7F234860: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234864:
    ctx->pc = 0x7F234864u;
    // 7F234864: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F234868:
    ctx->pc = 0x7F234868u;
    // 7F234868: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F23486C:
    ctx->pc = 0x7F23486Cu;
    // 7F23486C: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F234870u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F234870:
    ctx->pc = 0x7F234870u;
    ctx->downcount -= 5;
    // 7F234870: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234874:
    ctx->pc = 0x7F234874u;
    // 7F234874: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F234878:
    ctx->pc = 0x7F234878u;
    // 7F234878: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F23487C:
    ctx->pc = 0x7F23487Cu;
    // 7F23487C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234880:
    ctx->pc = 0x7F234880u;
    ctx->downcount -= 18;
    // 7F234880: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234884:
    ctx->pc = 0x7F234884u;
    // 7F234884: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234888:
    ctx->pc = 0x7F234888u;
    // 7F234888: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23488C:
    ctx->pc = 0x7F23488Cu;
    // 7F23488C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F234890:
    ctx->pc = 0x7F234890u;
    // 7F234890: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234894:
    ctx->pc = 0x7F234894u;
    // 7F234894: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F234898:
    ctx->pc = 0x7F234898u;
    // 7F234898: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F23489C:
    ctx->pc = 0x7F23489Cu;
    // 7F23489C: bl      0x7F2EA428
    {
            ctx->lr = 0x7F2348A0u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F2348A0:
    ctx->pc = 0x7F2348A0u;
    ctx->downcount -= 5;
    // 7F2348A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2348A4:
    ctx->pc = 0x7F2348A4u;
    // 7F2348A4: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2348A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2348A8:
    ctx->pc = 0x7F2348A8u;
    // 7F2348A8: lfs     f1, 18928(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2348A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2348AC:
    ctx->pc = 0x7F2348ACu;
    // 7F2348AC: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2348ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F2348B0:
    ctx->pc = 0x7F2348B0u;
    // 7F2348B0: bc    4, 0, 0x7F2348E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2348E8;
        }
    }

label_7F2348B4:
    ctx->pc = 0x7F2348B4u;
    ctx->downcount -= 8;
    // 7F2348B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2348B8:
    ctx->pc = 0x7F2348B8u;
    // 7F2348B8: lfs     f0, 18932(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2348B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18932);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2348BC:
    ctx->pc = 0x7F2348BCu;
    // 7F2348BC: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2348BCu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2348C0:
    ctx->pc = 0x7F2348C0u;
    // 7F2348C0: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2348C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2348C4:
    ctx->pc = 0x7F2348C4u;
    // 7F2348C4: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2348C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2348C8:
    ctx->pc = 0x7F2348C8u;
    // 7F2348C8: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2348C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F2348CC:
    ctx->pc = 0x7F2348CCu;
    // 7F2348CC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2348D0:
    ctx->pc = 0x7F2348D0u;
    // 7F2348D0: bc    4, 2, 0x7F2348E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2348E8;
        }
    }

label_7F2348D4:
    ctx->pc = 0x7F2348D4u;
    ctx->downcount -= 3;
    // 7F2348D4: stfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2348D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2348D8:
    ctx->pc = 0x7F2348D8u;
    // 7F2348D8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2348DC:
    ctx->pc = 0x7F2348DCu;
    // 7F2348DC: bl      0x7F3C831C
    {
            ctx->lr = 0x7F2348E0u;
            ctx->pc = 0x7F3C831Cu;
            return;
    }

label_7F2348E0:
    ctx->pc = 0x7F2348E0u;
    ctx->downcount -= 2;
    // 7F2348E0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2348E4:
    ctx->pc = 0x7F2348E4u;
    // 7F2348E4: bl      0x7F3C897C
    {
            ctx->lr = 0x7F2348E8u;
            ctx->pc = 0x7F3C897Cu;
            return;
    }

label_7F2348E8:
    ctx->pc = 0x7F2348E8u;
    ctx->downcount -= 3;
    // 7F2348E8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F2348EC:
    ctx->pc = 0x7F2348ECu;
    // 7F2348EC: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2348F0:
    ctx->pc = 0x7F2348F0u;
    // 7F2348F0: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F2348F4u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F2348F4:
    ctx->pc = 0x7F2348F4u;
    ctx->downcount -= 7;
    // 7F2348F4: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2348F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2348F8:
    ctx->pc = 0x7F2348F8u;
    // 7F2348F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2348FC:
    ctx->pc = 0x7F2348FCu;
    // 7F2348FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F234900:
    ctx->pc = 0x7F234900u;
    // 7F234900: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234900u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F234904:
    ctx->pc = 0x7F234904u;
    // 7F234904: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F234908:
    ctx->pc = 0x7F234908u;
    // 7F234908: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F23490C:
    ctx->pc = 0x7F23490Cu;
    // 7F23490C: bl      0x7F234764
    {
            ctx->lr = 0x7F234910u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234764u;
                return;
            }
            goto label_7F234764;
    }

label_7F234910:
    ctx->pc = 0x7F234910u;
    ctx->downcount -= 4;
    // 7F234910: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F234914:
    ctx->pc = 0x7F234914u;
    // 7F234914: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F234918:
    ctx->pc = 0x7F234918u;
    // 7F234918: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F23491C:
    ctx->pc = 0x7F23491Cu;
    // 7F23491C: bl      0x7F2EA688
    {
            ctx->lr = 0x7F234920u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F234920:
    ctx->pc = 0x7F234920u;
    ctx->downcount -= 3;
    // 7F234920: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F234924:
    ctx->pc = 0x7F234924u;
    // 7F234924: cmpwi   r4, 1
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

label_7F234928:
    ctx->pc = 0x7F234928u;
    // 7F234928: bc    4, 2, 0x7F234984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234984;
        }
    }

label_7F23492C:
    ctx->pc = 0x7F23492Cu;
    ctx->downcount -= 4;
    // 7F23492C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F234930:
    ctx->pc = 0x7F234930u;
    // 7F234930: lwz     r0, -10340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234934:
    ctx->pc = 0x7F234934u;
    // 7F234934: cmplwi  r0, 0x0000
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

label_7F234938:
    ctx->pc = 0x7F234938u;
    // 7F234938: bc    4, 2, 0x7F234984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234984;
        }
    }

label_7F23493C:
    ctx->pc = 0x7F23493Cu;
    ctx->downcount -= 15;
    // 7F23493C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F234940:
    ctx->pc = 0x7F234940u;
    // 7F234940: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F234944:
    ctx->pc = 0x7F234944u;
    // 7F234944: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234948:
    ctx->pc = 0x7F234948u;
    // 7F234948: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F23494C:
    ctx->pc = 0x7F23494Cu;
    // 7F23494C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F234950:
    ctx->pc = 0x7F234950u;
    // 7F234950: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F234954:
    ctx->pc = 0x7F234954u;
    // 7F234954: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234958:
    ctx->pc = 0x7F234958u;
    // 7F234958: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F23495C:
    ctx->pc = 0x7F23495Cu;
    // 7F23495C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F234960:
    ctx->pc = 0x7F234960u;
    // 7F234960: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F234964:
    ctx->pc = 0x7F234964u;
    // 7F234964: lwz     r0, 19612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234968:
    ctx->pc = 0x7F234968u;
    // 7F234968: li      r9, 22
    ctx->gpr[9] = (u32)(s32)(22);

label_7F23496C:
    ctx->pc = 0x7F23496Cu;
    // 7F23496C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F234970:
    ctx->pc = 0x7F234970u;
    // 7F234970: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F234974:
    ctx->pc = 0x7F234974u;
    // 7F234974: bl      0x800501FC
    {
            ctx->lr = 0x7F234978u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F234978:
    ctx->pc = 0x7F234978u;
    ctx->downcount -= 3;
    // 7F234978: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F23497C:
    ctx->pc = 0x7F23497Cu;
    // 7F23497C: stw     r3, -10340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10340);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F234980:
    ctx->pc = 0x7F234980u;
    // 7F234980: b       0x7F2349D8
    {
            goto label_7F2349D8;
    }

label_7F234984:
    ctx->pc = 0x7F234984u;
    ctx->downcount -= 3;
    // 7F234984: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234988:
    ctx->pc = 0x7F234988u;
    // 7F234988: cmpwi   r0, 16
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

label_7F23498C:
    ctx->pc = 0x7F23498Cu;
    // 7F23498C: bc    4, 1, 0x7F2349D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2349D8;
        }
    }

label_7F234990:
    ctx->pc = 0x7F234990u;
    ctx->downcount -= 2;
    // 7F234990: cmpwi   r4, 3
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

label_7F234994:
    ctx->pc = 0x7F234994u;
    // 7F234994: bc    12, 2, 0x7F2349D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2349D8;
        }
    }

label_7F234998:
    ctx->pc = 0x7F234998u;
    ctx->downcount -= 4;
    // 7F234998: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F23499C:
    ctx->pc = 0x7F23499Cu;
    // 7F23499C: lwz     r0, 19612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2349A0:
    ctx->pc = 0x7F2349A0u;
    // 7F2349A0: cmpwi   r0, 0
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

label_7F2349A4:
    ctx->pc = 0x7F2349A4u;
    // 7F2349A4: bc    12, 0, 0x7F2349D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2349D8;
        }
    }

label_7F2349A8:
    ctx->pc = 0x7F2349A8u;
    ctx->downcount -= 4;
    // 7F2349A8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2349AC:
    ctx->pc = 0x7F2349ACu;
    // 7F2349AC: addi    r3, r3, -10340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10340);

label_7F2349B0:
    ctx->pc = 0x7F2349B0u;
    // 7F2349B0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2349B4:
    ctx->pc = 0x7F2349B4u;
    // 7F2349B4: bl      0x80051AA0
    {
            ctx->lr = 0x7F2349B8u;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F2349B8:
    ctx->pc = 0x7F2349B8u;
    ctx->downcount -= 2;
    // 7F2349B8: cmpwi   r3, 0
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

label_7F2349BC:
    ctx->pc = 0x7F2349BCu;
    // 7F2349BC: bc    12, 2, 0x7F2349D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2349D8;
        }
    }

label_7F2349C0:
    ctx->pc = 0x7F2349C0u;
    ctx->downcount -= 4;
    // 7F2349C0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2349C4:
    ctx->pc = 0x7F2349C4u;
    // 7F2349C4: addi    r3, r3, -10340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10340);

label_7F2349C8:
    ctx->pc = 0x7F2349C8u;
    // 7F2349C8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2349CC:
    ctx->pc = 0x7F2349CCu;
    // 7F2349CC: bl      0x80051A5C
    {
            ctx->lr = 0x7F2349D0u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F2349D0:
    ctx->pc = 0x7F2349D0u;
    ctx->downcount -= 2;
    // 7F2349D0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2349D4:
    ctx->pc = 0x7F2349D4u;
    // 7F2349D4: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2349D8:
    ctx->pc = 0x7F2349D8u;
    ctx->downcount -= 19;
    // 7F2349D8: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2349DC:
    ctx->pc = 0x7F2349DCu;
    // 7F2349DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2349E0:
    ctx->pc = 0x7F2349E0u;
    // 7F2349E0: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2349E4:
    ctx->pc = 0x7F2349E4u;
    // 7F2349E4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2349E8:
    ctx->pc = 0x7F2349E8u;
    // 7F2349E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2349EC:
    ctx->pc = 0x7F2349ECu;
    // 7F2349EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2349F0:
    ctx->pc = 0x7F2349F0u;
    // 7F2349F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2349F4:
    ctx->pc = 0x7F2349F4u;
    // 7F2349F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2349F8:
    ctx->pc = 0x7F2349F8u;
    ctx->downcount -= 53;
    // 7F2349F8: rlwinm r4, r3, 13, 0, 18
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 13u) & 0xFFFFE000u;
    }

label_7F2349FC:
    ctx->pc = 0x7F2349FCu;
    // 7F2349FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234A00:
    ctx->pc = 0x7F234A00u;
    // 7F234A00: xor   r6, r4, r3
    {
        ctx->gpr[6] = ctx->gpr[4] ^ ctx->gpr[3];
    }

label_7F234A04:
    ctx->pc = 0x7F234A04u;
    // 7F234A04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234A08:
    ctx->pc = 0x7F234A08u;
    // 7F234A08: mullw   r5, r6, r6
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[5] = (u32)product;
    }

label_7F234A0C:
    ctx->pc = 0x7F234A0Cu;
    // 7F234A0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234A10:
    ctx->pc = 0x7F234A10u;
    // 7F234A10: lfd     f2, 18920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234A10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18920);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234A14:
    ctx->pc = 0x7F234A14u;
    // 7F234A14: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F234A18:
    ctx->pc = 0x7F234A18u;
    // 7F234A18: lfs     f0, 18940(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234A18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234A1C:
    ctx->pc = 0x7F234A1Cu;
    // 7F234A1C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234A20:
    ctx->pc = 0x7F234A20u;
    // 7F234A20: mulli   r4, r5, 15731
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)15731);

label_7F234A24:
    ctx->pc = 0x7F234A24u;
    // 7F234A24: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F234A28:
    ctx->pc = 0x7F234A28u;
    // 7F234A28: lfs     f3, 18936(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234A28u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F234A2C:
    ctx->pc = 0x7F234A2Cu;
    // 7F234A2C: addis   r3, r4, 12
    ctx->gpr[3] = ctx->gpr[4] + ((u32)(s32)(12) << 16);

label_7F234A30:
    ctx->pc = 0x7F234A30u;
    // 7F234A30: addi    r0, r3, 2789
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2789);

label_7F234A34:
    ctx->pc = 0x7F234A34u;
    // 7F234A34: mullw   r3, r6, r0
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F234A38:
    ctx->pc = 0x7F234A38u;
    // 7F234A38: addis   r3, r3, 21001
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(21001) << 16);

label_7F234A3C:
    ctx->pc = 0x7F234A3Cu;
    // 7F234A3C: addi    r0, r3, -8947
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8947);

label_7F234A40:
    ctx->pc = 0x7F234A40u;
    // 7F234A40: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F234A44:
    ctx->pc = 0x7F234A44u;
    // 7F234A44: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F234A48:
    ctx->pc = 0x7F234A48u;
    // 7F234A48: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234A4C:
    ctx->pc = 0x7F234A4Cu;
    // 7F234A4C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234A50:
    ctx->pc = 0x7F234A50u;
    // 7F234A50: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234A50u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F234A54:
    ctx->pc = 0x7F234A54u;
    // 7F234A54: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234A54u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F234A58:
    ctx->pc = 0x7F234A58u;
    // 7F234A58: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234A58u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_7F234A5C:
    ctx->pc = 0x7F234A5Cu;
    // 7F234A5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F234A60:
    ctx->pc = 0x7F234A60u;
    // 7F234A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234A64:
    ctx->pc = 0x7F234A64u;
    ctx->downcount -= 71;
    // 7F234A64: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234A68:
    ctx->pc = 0x7F234A68u;
    // 7F234A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234A6C:
    ctx->pc = 0x7F234A6Cu;
    // 7F234A6C: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234A70:
    ctx->pc = 0x7F234A70u;
    // 7F234A70: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F234A74:
    ctx->pc = 0x7F234A74u;
    // 7F234A74: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F234A74u);
        if (ctx->exception) return;
    }

label_7F234A78:
    ctx->pc = 0x7F234A78u;
    // 7F234A78: stfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F234A7C:
    ctx->pc = 0x7F234A7Cu;
    // 7F234A7C: psq_st   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F234A7Cu);
        if (ctx->exception) return;
    }

label_7F234A80:
    ctx->pc = 0x7F234A80u;
    // 7F234A80: stfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F234A84:
    ctx->pc = 0x7F234A84u;
    // 7F234A84: psq_st   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F234A84u);
        if (ctx->exception) return;
    }

label_7F234A88:
    ctx->pc = 0x7F234A88u;
    // 7F234A88: stfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F234A8C:
    ctx->pc = 0x7F234A8Cu;
    // 7F234A8C: psq_st   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F234A8Cu);
        if (ctx->exception) return;
    }

label_7F234A90:
    ctx->pc = 0x7F234A90u;
    // 7F234A90: stfd     f27, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F234A94:
    ctx->pc = 0x7F234A94u;
    // 7F234A94: psq_st   f27, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F234A94u);
        if (ctx->exception) return;
    }

label_7F234A98:
    ctx->pc = 0x7F234A98u;
    // 7F234A98: stfd     f26, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234A98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F234A9C:
    ctx->pc = 0x7F234A9Cu;
    // 7F234A9C: psq_st   f26, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234A9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F234A9Cu);
        if (ctx->exception) return;
    }

label_7F234AA0:
    ctx->pc = 0x7F234AA0u;
    // 7F234AA0: stfd     f25, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F234AA4:
    ctx->pc = 0x7F234AA4u;
    // 7F234AA4: psq_st   f25, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F234AA4u);
        if (ctx->exception) return;
    }

label_7F234AA8:
    ctx->pc = 0x7F234AA8u;
    // 7F234AA8: stfd     f24, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F234AAC:
    ctx->pc = 0x7F234AACu;
    // 7F234AAC: psq_st   f24, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F234AACu);
        if (ctx->exception) return;
    }

label_7F234AB0:
    ctx->pc = 0x7F234AB0u;
    // 7F234AB0: stfd     f23, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

label_7F234AB4:
    ctx->pc = 0x7F234AB4u;
    // 7F234AB4: psq_st   f23, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x7F234AB4u);
        if (ctx->exception) return;
    }

label_7F234AB8:
    ctx->pc = 0x7F234AB8u;
    // 7F234AB8: stfd     f22, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[22]));
    }

label_7F234ABC:
    ctx->pc = 0x7F234ABCu;
    // 7F234ABC: psq_st   f22, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 22u, ea, false, 0u, false, 0x7F234ABCu);
        if (ctx->exception) return;
    }

label_7F234AC0:
    ctx->pc = 0x7F234AC0u;
    // 7F234AC0: stfd     f21, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[21]));
    }

label_7F234AC4:
    ctx->pc = 0x7F234AC4u;
    // 7F234AC4: psq_st   f21, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234AC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 21u, ea, false, 0u, false, 0x7F234AC4u);
        if (ctx->exception) return;
    }

label_7F234AC8:
    ctx->pc = 0x7F234AC8u;
    // 7F234AC8: stfd     f20, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[20]));
    }

label_7F234ACC:
    ctx->pc = 0x7F234ACCu;
    // 7F234ACC: psq_st   f20, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234ACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 20u, ea, false, 0u, false, 0x7F234ACCu);
        if (ctx->exception) return;
    }

label_7F234AD0:
    ctx->pc = 0x7F234AD0u;
    // 7F234AD0: stfd     f19, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[19]));
    }

label_7F234AD4:
    ctx->pc = 0x7F234AD4u;
    // 7F234AD4: psq_st   f19, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 19u, ea, false, 0u, false, 0x7F234AD4u);
        if (ctx->exception) return;
    }

label_7F234AD8:
    ctx->pc = 0x7F234AD8u;
    // 7F234AD8: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F234ADC:
    ctx->pc = 0x7F234ADCu;
    // 7F234ADC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F234AE0:
    ctx->pc = 0x7F234AE0u;
    // 7F234AE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234AE4:
    ctx->pc = 0x7F234AE4u;
    // 7F234AE4: lfs     f2, 18944(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234AE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18944);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F234AE8:
    ctx->pc = 0x7F234AE8u;
    // 7F234AE8: lis     r28, 32582
    ctx->gpr[28] = ((u32)(s32)(32582) << 16);

label_7F234AEC:
    ctx->pc = 0x7F234AECu;
    // 7F234AEC: lfs     f0, 18948(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234AECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234AF0:
    ctx->pc = 0x7F234AF0u;
    // 7F234AF0: lis     r12, 32582
    ctx->gpr[12] = ((u32)(s32)(32582) << 16);

label_7F234AF4:
    ctx->pc = 0x7F234AF4u;
    // 7F234AF4: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F234AF8:
    ctx->pc = 0x7F234AF8u;
    // 7F234AF8: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F234AFC:
    ctx->pc = 0x7F234AFCu;
    // 7F234AFC: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F234B00:
    ctx->pc = 0x7F234B00u;
    // 7F234B00: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F234B04:
    ctx->pc = 0x7F234B04u;
    // 7F234B04: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F234B08:
    ctx->pc = 0x7F234B08u;
    // 7F234B08: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F234B0C:
    ctx->pc = 0x7F234B0Cu;
    // 7F234B0C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F234B10:
    ctx->pc = 0x7F234B10u;
    // 7F234B10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234B14:
    ctx->pc = 0x7F234B14u;
    // 7F234B14: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234B18:
    ctx->pc = 0x7F234B18u;
    // 7F234B18: lfs     f23, 18952(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F234B18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18952);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[23] = value;
        ctx->ps1[23] = value;
    }

label_7F234B1C:
    ctx->pc = 0x7F234B1Cu;
    // 7F234B1C: fmuls   f22, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234B1Cu)) return;
    ppc_fmuls(ctx, 22, 2, 1);

label_7F234B20:
    ctx->pc = 0x7F234B20u;
    // 7F234B20: lfs     f24, 18956(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F234B20u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18956);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

label_7F234B24:
    ctx->pc = 0x7F234B24u;
    // 7F234B24: fmuls   f21, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234B24u)) return;
    ppc_fmuls(ctx, 21, 0, 1);

label_7F234B28:
    ctx->pc = 0x7F234B28u;
    // 7F234B28: lfd     f25, 18920(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F234B28u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(18920);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234B2C:
    ctx->pc = 0x7F234B2Cu;
    // 7F234B2C: lfs     f26, 18960(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F234B2Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(18960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F234B30:
    ctx->pc = 0x7F234B30u;
    // 7F234B30: addis   r29, r31, 4
    ctx->gpr[29] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F234B34:
    ctx->pc = 0x7F234B34u;
    // 7F234B34: lfs     f27, 18980(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F234B34u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(18980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F234B38:
    ctx->pc = 0x7F234B38u;
    // 7F234B38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F234B3C:
    ctx->pc = 0x7F234B3Cu;
    // 7F234B3C: lfs     f28, 18976(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F234B3Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(18976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F234B40:
    ctx->pc = 0x7F234B40u;
    // 7F234B40: li      r26, -50
    ctx->gpr[26] = (u32)(s32)(-50);

label_7F234B44:
    ctx->pc = 0x7F234B44u;
    // 7F234B44: lfs     f29, 18972(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234B44u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(18972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F234B48:
    ctx->pc = 0x7F234B48u;
    // 7F234B48: lis     r28, 17200
    ctx->gpr[28] = ((u32)(s32)(17200) << 16);

label_7F234B4C:
    ctx->pc = 0x7F234B4Cu;
    // 7F234B4C: lfs     f30, 18968(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234B4Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F234B50:
    ctx->pc = 0x7F234B50u;
    // 7F234B50: lfs     f31, 18964(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234B50u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F234B54:
    ctx->pc = 0x7F234B54u;
    // 7F234B54: lfs     f20, 18984(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234B54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[20] = value;
        ctx->ps1[20] = value;
    }

label_7F234B58:
    ctx->downcount -= 35;
    // 7F234B58: addi    r3, r26, 50
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(50);

label_7F234B5C:
    // 7F234B5C: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F234B60:
    // 7F234B60: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F234B64:
    // 7F234B64: add   r27, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F234B68:
    ctx->pc = 0x7F234B68u;
    // 7F234B68: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F234B6C:
    // 7F234B6C: addis   r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(4) << 16);

label_7F234B70:
    ctx->pc = 0x7F234B70u;
    // 7F234B70: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F234B74:
    ctx->pc = 0x7F234B74u;
    // 7F234B74: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234B78:
    ctx->pc = 0x7F234B78u;
    // 7F234B78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234B7C:
    ctx->pc = 0x7F234B7Cu;
    // 7F234B7C: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F234B7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F234B80:
    ctx->pc = 0x7F234B80u;
    // 7F234B80: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F234B84:
    ctx->pc = 0x7F234B84u;
    // 7F234B84: fdivs   f1, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F234B84u)) return;
    ppc_fdivs(ctx, 1, 0, 26);

label_7F234B88:
    ctx->pc = 0x7F234B88u;
    // 7F234B88: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234B88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234B8C:
    ctx->pc = 0x7F234B8Cu;
    // 7F234B8C: fmuls   f1, f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234B8Cu)) return;
    ppc_fmuls(ctx, 1, 24, 1);

label_7F234B90:
    ctx->pc = 0x7F234B90u;
    // 7F234B90: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F234B90u)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F234B94:
    ctx->pc = 0x7F234B94u;
    // 7F234B94: fmuls   f2, f23, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234B94u)) return;
    ppc_fmuls(ctx, 2, 23, 1);

label_7F234B98:
    ctx->pc = 0x7F234B98u;
    // 7F234B98: fmuls   f1, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234B98u)) return;
    ppc_fmuls(ctx, 1, 27, 0);

label_7F234B9C:
    ctx->pc = 0x7F234B9Cu;
    // 7F234B9C: stfs     f2, -24496(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234B9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24496);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F234BA0:
    // 7F234BA0: bl      0x7F008330
    {
            ctx->lr = 0x7F234BA4u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F234BA4:
    ctx->pc = 0x7F234BA4u;
    ctx->downcount -= 3;
    // 7F234BA4: fmuls   f19, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234BA4u)) return;
    ppc_fmuls(ctx, 19, 28, 1);

label_7F234BA8:
    // 7F234BA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F234BAC:
    // 7F234BAC: bl      0x7F2349F8
    {
            ctx->lr = 0x7F234BB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2349F8u;
                return;
            }
            goto label_7F2349F8;
    }

label_7F234BB0:
    ctx->downcount -= 8;
    // 7F234BB0: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F234BB4:
    ctx->pc = 0x7F234BB4u;
    // 7F234BB4: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F234BB8:
    ctx->pc = 0x7F234BB8u;
    // 7F234BB8: fmuls   f1, f22, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234BB8u)) return;
    ppc_fmuls(ctx, 1, 22, 1);

label_7F234BBC:
    ctx->pc = 0x7F234BBCu;
    // 7F234BBC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234BC0:
    ctx->pc = 0x7F234BC0u;
    // 7F234BC0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234BC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234BC4:
    ctx->pc = 0x7F234BC4u;
    // 7F234BC4: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F234BC4u)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F234BC8:
    ctx->pc = 0x7F234BC8u;
    // 7F234BC8: fmadds f1, f29, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234BC8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[0], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F234BCC:
    // 7F234BCC: bl      0x7F008330
    {
            ctx->lr = 0x7F234BD0u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F234BD0:
    ctx->pc = 0x7F234BD0u;
    ctx->downcount -= 8;
    // 7F234BD0: fmadds f1, f29, f1, f19
    if (!ppc_fp_available_inline(ctx, 0x7F234BD0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[19], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F234BD4:
    ctx->pc = 0x7F234BD4u;
    // 7F234BD4: lfs     f0, -23872(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F234BD4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-23872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234BD8:
    // 7F234BD8: addis   r4, r27, 4
    ctx->gpr[4] = ctx->gpr[27] + ((u32)(s32)(4) << 16);

label_7F234BDC:
    // 7F234BDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F234BE0:
    ctx->pc = 0x7F234BE0u;
    // 7F234BE0: fmadds f0, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F234BE0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F234BE4:
    ctx->pc = 0x7F234BE4u;
    // 7F234BE4: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234BE4u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F234BE8:
    ctx->pc = 0x7F234BE8u;
    // 7F234BE8: stfs     f0, -24492(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234BE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24492);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F234BEC:
    // 7F234BEC: bl      0x7F2349F8
    {
            ctx->lr = 0x7F234BF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2349F8u;
                return;
            }
            goto label_7F2349F8;
    }

label_7F234BF0:
    ctx->downcount -= 8;
    // 7F234BF0: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F234BF4:
    ctx->pc = 0x7F234BF4u;
    // 7F234BF4: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F234BF8:
    ctx->pc = 0x7F234BF8u;
    // 7F234BF8: fmuls   f1, f21, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234BF8u)) return;
    ppc_fmuls(ctx, 1, 21, 1);

label_7F234BFC:
    ctx->pc = 0x7F234BFCu;
    // 7F234BFC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234C00:
    ctx->pc = 0x7F234C00u;
    // 7F234C00: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C04:
    ctx->pc = 0x7F234C04u;
    // 7F234C04: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F234C04u)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F234C08:
    ctx->pc = 0x7F234C08u;
    // 7F234C08: fmadds f1, f20, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234C08u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[20], ctx->fpr[0], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F234C0C:
    // 7F234C0C: bl      0x7F008330
    {
            ctx->lr = 0x7F234C10u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F234C10:
    ctx->pc = 0x7F234C10u;
    ctx->downcount -= 7;
    // 7F234C10: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234C10u)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F234C14:
    // 7F234C14: addic.  r26, r26, 1
    {
        u64 a = ctx->gpr[26];
        u64 b = (u32)(s32)(1);
        u64 res = a + b;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F234C18:
    // 7F234C18: addis   r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(4) << 16);

label_7F234C1C:
    // 7F234C1C: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F234C20:
    ctx->pc = 0x7F234C20u;
    // 7F234C20: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234C20u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F234C24:
    ctx->pc = 0x7F234C24u;
    // 7F234C24: stfs     f0, -24488(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234C24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24488);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F234C28:
    // 7F234C28: bc    12, 0, 0x7F234B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234B58u;
                return;
            }
            goto label_7F234B58;
        }
    }

label_7F234C2C:
    ctx->pc = 0x7F234C2Cu;
    ctx->downcount -= 42;
    // 7F234C2C: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F234C2Cu);
        if (ctx->exception) return;
    }

label_7F234C30:
    ctx->pc = 0x7F234C30u;
    // 7F234C30: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C34:
    ctx->pc = 0x7F234C34u;
    // 7F234C34: psq_l   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F234C34u);
        if (ctx->exception) return;
    }

label_7F234C38:
    ctx->pc = 0x7F234C38u;
    // 7F234C38: lfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C3C:
    ctx->pc = 0x7F234C3Cu;
    // 7F234C3C: psq_l   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F234C3Cu);
        if (ctx->exception) return;
    }

label_7F234C40:
    ctx->pc = 0x7F234C40u;
    // 7F234C40: lfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C44:
    ctx->pc = 0x7F234C44u;
    // 7F234C44: psq_l   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F234C44u);
        if (ctx->exception) return;
    }

label_7F234C48:
    ctx->pc = 0x7F234C48u;
    // 7F234C48: lfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C4C:
    ctx->pc = 0x7F234C4Cu;
    // 7F234C4C: psq_l   f27, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F234C4Cu);
        if (ctx->exception) return;
    }

label_7F234C50:
    ctx->pc = 0x7F234C50u;
    // 7F234C50: lfd     f27, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C54:
    ctx->pc = 0x7F234C54u;
    // 7F234C54: psq_l   f26, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F234C54u);
        if (ctx->exception) return;
    }

label_7F234C58:
    ctx->pc = 0x7F234C58u;
    // 7F234C58: lfd     f26, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C5C:
    ctx->pc = 0x7F234C5Cu;
    // 7F234C5C: psq_l   f25, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F234C5Cu);
        if (ctx->exception) return;
    }

label_7F234C60:
    ctx->pc = 0x7F234C60u;
    // 7F234C60: lfd     f25, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C64:
    ctx->pc = 0x7F234C64u;
    // 7F234C64: psq_l   f24, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F234C64u);
        if (ctx->exception) return;
    }

label_7F234C68:
    ctx->pc = 0x7F234C68u;
    // 7F234C68: lfd     f24, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C6C:
    ctx->pc = 0x7F234C6Cu;
    // 7F234C6C: psq_l   f23, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F234C6Cu);
        if (ctx->exception) return;
    }

label_7F234C70:
    ctx->pc = 0x7F234C70u;
    // 7F234C70: lfd     f23, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C74:
    ctx->pc = 0x7F234C74u;
    // 7F234C74: psq_l   f22, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x7F234C74u);
        if (ctx->exception) return;
    }

label_7F234C78:
    ctx->pc = 0x7F234C78u;
    // 7F234C78: lfd     f22, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C7C:
    ctx->pc = 0x7F234C7Cu;
    // 7F234C7C: psq_l   f21, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 21u, ea, false, 0u, false, 0x7F234C7Cu);
        if (ctx->exception) return;
    }

label_7F234C80:
    ctx->pc = 0x7F234C80u;
    // 7F234C80: lfd     f21, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[21] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C84:
    ctx->pc = 0x7F234C84u;
    // 7F234C84: psq_l   f20, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 20u, ea, false, 0u, false, 0x7F234C84u);
        if (ctx->exception) return;
    }

label_7F234C88:
    ctx->pc = 0x7F234C88u;
    // 7F234C88: lfd     f20, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[20] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C8C:
    ctx->pc = 0x7F234C8Cu;
    // 7F234C8C: psq_l   f19, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234C8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 19u, ea, false, 0u, false, 0x7F234C8Cu);
        if (ctx->exception) return;
    }

label_7F234C90:
    ctx->pc = 0x7F234C90u;
    // 7F234C90: lfd     f19, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[19] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234C94:
    ctx->pc = 0x7F234C94u;
    // 7F234C94: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F234C98:
    ctx->pc = 0x7F234C98u;
    // 7F234C98: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234C9C:
    ctx->pc = 0x7F234C9Cu;
    // 7F234C9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F234CA0:
    ctx->pc = 0x7F234CA0u;
    // 7F234CA0: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F234CA4:
    ctx->pc = 0x7F234CA4u;
    // 7F234CA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F234CA8:
    ctx->pc = 0x7F234CA8u;
    ctx->downcount -= 43;
    // 7F234CA8: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F234CAC:
    ctx->pc = 0x7F234CACu;
    // 7F234CAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F234CB0:
    ctx->pc = 0x7F234CB0u;
    // 7F234CB0: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234CB4:
    ctx->pc = 0x7F234CB4u;
    // 7F234CB4: stfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F234CB8:
    ctx->pc = 0x7F234CB8u;
    // 7F234CB8: psq_st   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234CB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F234CB8u);
        if (ctx->exception) return;
    }

label_7F234CBC:
    ctx->pc = 0x7F234CBCu;
    // 7F234CBC: stfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234CBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F234CC0:
    ctx->pc = 0x7F234CC0u;
    // 7F234CC0: psq_st   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F234CC0u);
        if (ctx->exception) return;
    }

label_7F234CC4:
    ctx->pc = 0x7F234CC4u;
    // 7F234CC4: stfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234CC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F234CC8:
    ctx->pc = 0x7F234CC8u;
    // 7F234CC8: psq_st   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234CC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F234CC8u);
        if (ctx->exception) return;
    }

label_7F234CCC:
    ctx->pc = 0x7F234CCCu;
    // 7F234CCC: stfd     f28, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F234CD0:
    ctx->pc = 0x7F234CD0u;
    // 7F234CD0: psq_st   f28, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234CD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F234CD0u);
        if (ctx->exception) return;
    }

label_7F234CD4:
    ctx->pc = 0x7F234CD4u;
    // 7F234CD4: stfd     f27, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234CD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F234CD8:
    ctx->pc = 0x7F234CD8u;
    // 7F234CD8: psq_st   f27, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F234CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F234CD8u);
        if (ctx->exception) return;
    }

label_7F234CDC:
    ctx->pc = 0x7F234CDCu;
    // 7F234CDC: stmw     r19, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F234CE0:
    ctx->pc = 0x7F234CE0u;
    // 7F234CE0: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234CE4:
    ctx->pc = 0x7F234CE4u;
    // 7F234CE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234CE8:
    ctx->pc = 0x7F234CE8u;
    // 7F234CE8: addis   r25, r21, 4
    ctx->gpr[25] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F234CEC:
    ctx->pc = 0x7F234CECu;
    // 7F234CEC: li      r0, 8192
    ctx->gpr[0] = (u32)(s32)(8192);

label_7F234CF0:
    ctx->pc = 0x7F234CF0u;
    // 7F234CF0: or   r23, r25, r25
    {
        ctx->gpr[23] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F234CF4:
    ctx->pc = 0x7F234CF4u;
    // 7F234CF4: addi    r4, r3, 18912
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18912);

label_7F234CF8:
    ctx->pc = 0x7F234CF8u;
    // 7F234CF8: addi    r25, r25, -32688
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(-32688);

label_7F234CFC:
    ctx->pc = 0x7F234CFCu;
    // 7F234CFC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234CFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234D00:
    ctx->pc = 0x7F234D00u;
    // 7F234D00: addis   r27, r21, 2
    ctx->gpr[27] = ctx->gpr[21] + ((u32)(s32)(2) << 16);

label_7F234D04:
    ctx->pc = 0x7F234D04u;
    // 7F234D04: addis   r24, r21, 3
    ctx->gpr[24] = ctx->gpr[21] + ((u32)(s32)(3) << 16);

label_7F234D08:
    ctx->pc = 0x7F234D08u;
    // 7F234D08: addi    r26, r21, 80
    ctx->gpr[26] = ctx->gpr[21] + (u32)(s32)(80);

label_7F234D0C:
    ctx->pc = 0x7F234D0Cu;
    // 7F234D0C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F234D10:
    ctx->pc = 0x7F234D10u;
    // 7F234D10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F234D14:
    ctx->pc = 0x7F234D14u;
    // 7F234D14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F234D18:
    ctx->pc = 0x7F234D18u;
    // 7F234D18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F234D1C:
    ctx->pc = 0x7F234D1Cu;
    // 7F234D1C: addi    r27, r27, -32688
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-32688);

label_7F234D20:
    ctx->pc = 0x7F234D20u;
    // 7F234D20: addi    r24, r24, 80
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(80);

label_7F234D24:
    ctx->pc = 0x7F234D24u;
    // 7F234D24: addi    r23, r23, -24496
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(-24496);

label_7F234D28:
    ctx->downcount -= 15;
    // 7F234D28: add   r7, r27, r5
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F234D2C:
    // 7F234D2C: add   r6, r26, r5
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F234D30:
    ctx->pc = 0x7F234D30u;
    // 7F234D30: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234D30u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F234D34:
    ctx->pc = 0x7F234D34u;
    // 7F234D34: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234D34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234D38:
    ctx->pc = 0x7F234D38u;
    // 7F234D38: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234D38u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F234D3C:
    ctx->pc = 0x7F234D3Cu;
    // 7F234D3C: stfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234D3Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F234D40:
    ctx->pc = 0x7F234D40u;
    // 7F234D40: lfs     f2, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234D40u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F234D44:
    ctx->pc = 0x7F234D44u;
    // 7F234D44: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234D44u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234D48:
    ctx->pc = 0x7F234D48u;
    // 7F234D48: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234D48u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F234D4C:
    ctx->pc = 0x7F234D4Cu;
    // 7F234D4C: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234D4Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F234D50:
    ctx->pc = 0x7F234D50u;
    // 7F234D50: lbz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F234D54:
    ctx->pc = 0x7F234D54u;
    // 7F234D54: lwzx    r0, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234D58:
    // 7F234D58: cmplwi  r6, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234D5C:
    // 7F234D5C: rlwinm r8, r0, 0, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F234D60:
    // 7F234D60: bc    4, 2, 0x7F234D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234D6C;
        }
    }

label_7F234D64:
    ctx->downcount -= 2;
    // 7F234D64: addi    r8, r8, -6
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-6);

label_7F234D68:
    // 7F234D68: b       0x7F234D78
    {
            goto label_7F234D78;
    }

label_7F234D6C:
    ctx->downcount -= 2;
    // 7F234D6C: cmplwi  r6, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234D70:
    // 7F234D70: bc    4, 2, 0x7F234D78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234D78;
        }
    }

label_7F234D74:
    ctx->downcount -= 1;
    // 7F234D74: addi    r8, r8, -4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-4);

label_7F234D78:
    ctx->pc = 0x7F234D78u;
    ctx->downcount -= 4;
    // 7F234D78: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234D78u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234D7C:
    ctx->pc = 0x7F234D7Cu;
    // 7F234D7C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234D7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F234D80:
    // 7F234D80: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F234D84:
    // 7F234D84: bc    12, 2, 0x7F234D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F234D90;
        }
    }

label_7F234D88:
    ctx->downcount -= 2;
    // 7F234D88: cmpwi   r8, 0
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

label_7F234D8C:
    // 7F234D8C: bc    4, 0, 0x7F234D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234D9C;
        }
    }

label_7F234D90:
    ctx->downcount -= 3;
    // 7F234D90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F234D94:
    // 7F234D94: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F234D98:
    ctx->pc = 0x7F234D98u;
    // 7F234D98: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234D9C:
    ctx->downcount -= 7;
    // 7F234D9C: oris    r0, r8, 0x8888
    ctx->gpr[0] = ctx->gpr[8] | (0x8888u << 16);

label_7F234DA0:
    // 7F234DA0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F234DA4:
    // 7F234DA4: ori     r0, r0, 0x8800
    ctx->gpr[0] = ctx->gpr[0] | 0x8800u;

label_7F234DA8:
    // 7F234DA8: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F234DAC:
    ctx->pc = 0x7F234DACu;
    // 7F234DAC: stwx    r0, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234DB0:
    // 7F234DB0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F234DB4:
    // 7F234DB4: bc    16, 0, 0x7F234D28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234D28u;
                return;
            }
            goto label_7F234D28;
        }
    }

label_7F234DB8:
    ctx->pc = 0x7F234DB8u;
    ctx->downcount -= 14;
    // 7F234DB8: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F234DBC:
    ctx->pc = 0x7F234DBCu;
    // 7F234DBC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F234DC0:
    ctx->pc = 0x7F234DC0u;
    // 7F234DC0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F234DC4:
    ctx->pc = 0x7F234DC4u;
    // 7F234DC4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F234DC8:
    ctx->pc = 0x7F234DC8u;
    // 7F234DC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234DCC:
    ctx->pc = 0x7F234DCCu;
    // 7F234DCC: lfd     f27, 18992(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F234DCCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(18992);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234DD0:
    ctx->pc = 0x7F234DD0u;
    // 7F234DD0: lfd     f28, 19000(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234DD0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(19000);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234DD4:
    ctx->pc = 0x7F234DD4u;
    // 7F234DD4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F234DD8:
    ctx->pc = 0x7F234DD8u;
    // 7F234DD8: lfs     f29, 19008(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234DD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F234DDC:
    ctx->pc = 0x7F234DDCu;
    // 7F234DDC: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F234DE0:
    ctx->pc = 0x7F234DE0u;
    // 7F234DE0: lfd     f30, 18920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234DE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18920);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234DE4:
    ctx->pc = 0x7F234DE4u;
    // 7F234DE4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F234DE8:
    ctx->pc = 0x7F234DE8u;
    // 7F234DE8: lfs     f31, 18912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234DE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F234DEC:
    ctx->pc = 0x7F234DECu;
    // 7F234DEC: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F234DF0:
    ctx->downcount -= 33;
    // 7F234DF0: add   r30, r27, r19
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F234DF4:
    ctx->pc = 0x7F234DF4u;
    // 7F234DF4: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F234DF8:
    ctx->pc = 0x7F234DF8u;
    // 7F234DF8: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F234DF8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234DFC:
    ctx->pc = 0x7F234DFCu;
    // 7F234DFC: fdivs   f0, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F234DFCu)) return;
    ppc_fdivs(ctx, 0, 1, 29);

label_7F234E00:
    ctx->pc = 0x7F234E00u;
    // 7F234E00: fsub   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234E00u)) return;
    ppc_fsub(ctx, 0, 28, 0);

label_7F234E04:
    ctx->pc = 0x7F234E04u;
    // 7F234E04: fadd   f6, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234E04u)) return;
    ppc_fadd(ctx, 6, 27, 0);

label_7F234E08:
    ctx->pc = 0x7F234E08u;
    // 7F234E08: frsp    f6, f6
    if (!ppc_fp_available_inline(ctx, 0x7F234E08u)) return;
    ppc_frsp(ctx, 6, 6);

label_7F234E0C:
    ctx->pc = 0x7F234E0Cu;
    // 7F234E0C: fctiwz    f0, f6
    if (!ppc_fp_available_inline(ctx, 0x7F234E0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[6], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F234E10:
    ctx->pc = 0x7F234E10u;
    // 7F234E10: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F234E14:
    ctx->pc = 0x7F234E14u;
    // 7F234E14: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F234E18:
    // 7F234E18: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F234E1C:
    // 7F234E1C: cmpwi   r3, 0
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

label_7F234E20:
    ctx->pc = 0x7F234E20u;
    // 7F234E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234E24:
    ctx->pc = 0x7F234E24u;
    // 7F234E24: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F234E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234E28:
    ctx->pc = 0x7F234E28u;
    // 7F234E28: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F234E28u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F234E2C:
    ctx->pc = 0x7F234E2Cu;
    // 7F234E2C: fsubs   f6, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234E2Cu)) return;
    ppc_fsubs(ctx, 6, 6, 0);

label_7F234E30:
    // 7F234E30: bc    4, 0, 0x7F234E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234E3C;
        }
    }

label_7F234E34:
    ctx->downcount -= 2;
    // 7F234E34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F234E38:
    // 7F234E38: b       0x7F234E4C
    {
            goto label_7F234E4C;
    }

label_7F234E3C:
    ctx->downcount -= 3;
    // 7F234E3C: cmpwi   r3, 49
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(49);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234E40:
    // 7F234E40: li      r5, 49
    ctx->gpr[5] = (u32)(s32)(49);

label_7F234E44:
    // 7F234E44: bc    12, 1, 0x7F234E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F234E4C;
        }
    }

label_7F234E48:
    ctx->downcount -= 1;
    // 7F234E48: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F234E4C:
    ctx->pc = 0x7F234E4Cu;
    ctx->downcount -= 3;
    // 7F234E4C: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F234E4Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_7F234E50:
    // 7F234E50: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F234E54:
    // 7F234E54: bc    4, 2, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234E58:
    ctx->pc = 0x7F234E58u;
    ctx->downcount -= 3;
    // 7F234E58: lbzx    r0, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F234E5C:
    // 7F234E5C: cmplwi  r0, 0x0000
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

label_7F234E60:
    // 7F234E60: bc    4, 2, 0x7F234F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234F34;
        }
    }

label_7F234E64:
    ctx->downcount -= 25;
    // 7F234E64: mulli   r0, r5, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)12);

label_7F234E68:
    // 7F234E68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234E6C:
    // 7F234E6C: addis   r4, r21, 4
    ctx->gpr[4] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F234E70:
    ctx->pc = 0x7F234E70u;
    // 7F234E70: lfs     f4, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F234E70u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F234E74:
    ctx->pc = 0x7F234E74u;
    // 7F234E74: lfs     f3, 19012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234E74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F234E78:
    // 7F234E78: addi    r29, r19, 4
    ctx->gpr[29] = ctx->gpr[19] + (u32)(s32)(4);

label_7F234E7C:
    // 7F234E7C: add   r6, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F234E80:
    ctx->pc = 0x7F234E80u;
    // 7F234E80: lfs     f5, -23868(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F234E80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F234E84:
    ctx->pc = 0x7F234E84u;
    // 7F234E84: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234E84u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234E88:
    // 7F234E88: cmpwi   r5, 25
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234E8C:
    ctx->pc = 0x7F234E8Cu;
    // 7F234E8C: lfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F234E8Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234E90:
    ctx->pc = 0x7F234E90u;
    // 7F234E90: fmsubs f2, f1, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F234E90u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[3], ctx->fpr[4], true, true, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F234E94:
    ctx->pc = 0x7F234E94u;
    // 7F234E94: lfsx    f1, r26, r29
    if (!ppc_fp_available_inline(ctx, 0x7F234E94u)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234E98:
    ctx->pc = 0x7F234E98u;
    // 7F234E98: fmsubs f0, f0, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F234E98u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[3], ctx->fpr[4], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F234E9C:
    ctx->pc = 0x7F234E9Cu;
    // 7F234E9C: fmuls   f2, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234E9Cu)) return;
    ppc_fmuls(ctx, 2, 5, 2);

label_7F234EA0:
    ctx->pc = 0x7F234EA0u;
    // 7F234EA0: fmuls   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234EA0u)) return;
    ppc_fmuls(ctx, 0, 5, 0);

label_7F234EA4:
    ctx->pc = 0x7F234EA4u;
    // 7F234EA4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234EA4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F234EA8:
    ctx->pc = 0x7F234EA8u;
    // 7F234EA8: fmadds f0, f6, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F234EA8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[6], ctx->fpr[0], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F234EAC:
    ctx->pc = 0x7F234EACu;
    // 7F234EAC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F234EACu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F234EB0:
    ctx->pc = 0x7F234EB0u;
    // 7F234EB0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234EB0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F234EB4:
    ctx->pc = 0x7F234EB4u;
    // 7F234EB4: stfsx    f0, r26, r29
    if (!ppc_fp_available_inline(ctx, 0x7F234EB4u)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F234EB8:
    ctx->pc = 0x7F234EB8u;
    // 7F234EB8: lwz     r22, -23892(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23892);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F234EBC:
    // 7F234EBC: bc    4, 1, 0x7F234EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234EC4;
        }
    }

label_7F234EC0:
    ctx->downcount -= 1;
    // 7F234EC0: srawi r22, r22, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[22];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[22] = value;
        } else if (sh > 31) {
            ctx->gpr[22] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[22] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F234EC4:
    ctx->downcount -= 6;
    // 7F234EC4: addis   r3, r21, 4
    ctx->gpr[3] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F234EC8:
    ctx->pc = 0x7F234EC8u;
    // 7F234EC8: lfsx    f1, r26, r29
    if (!ppc_fp_available_inline(ctx, 0x7F234EC8u)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234ECC:
    ctx->pc = 0x7F234ECCu;
    // 7F234ECC: lfs     f0, -23864(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234ECCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234ED0:
    ctx->pc = 0x7F234ED0u;
    // 7F234ED0: fneg    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234ED0u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_7F234ED4:
    ctx->pc = 0x7F234ED4u;
    // 7F234ED4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234ED4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F234ED8:
    // 7F234ED8: bc    4, 0, 0x7F234EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234EFC;
        }
    }

label_7F234EDC:
    ctx->downcount -= 1;
    // 7F234EDC: bl      0x800147F8
    {
            ctx->lr = 0x7F234EE0u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F234EE0:
    ctx->downcount -= 2;
    // 7F234EE0: and.   r0, r22, r3
    {
        ctx->gpr[0] = ctx->gpr[22] & ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F234EE4:
    // 7F234EE4: bc    4, 2, 0x7F234EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234EFC;
        }
    }

label_7F234EE8:
    ctx->downcount -= 5;
    // 7F234EE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F234EEC:
    // 7F234EEC: lis     r3, -30583
    ctx->gpr[3] = ((u32)(s32)(-30583) << 16);

label_7F234EF0:
    ctx->pc = 0x7F234EF0u;
    // 7F234EF0: stbx    r0, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234EF4:
    // 7F234EF4: addi    r0, r3, -30465
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30465);

label_7F234EF8:
    ctx->pc = 0x7F234EF8u;
    // 7F234EF8: stwx    r0, r24, r20
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[20];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234EFC:
    ctx->downcount -= 5;
    // 7F234EFC: addis   r3, r21, 4
    ctx->gpr[3] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F234F00:
    ctx->pc = 0x7F234F00u;
    // 7F234F00: lfsx    f1, r26, r29
    if (!ppc_fp_available_inline(ctx, 0x7F234F00u)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234F04:
    ctx->pc = 0x7F234F04u;
    // 7F234F04: lfs     f0, -23864(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234F08:
    ctx->pc = 0x7F234F08u;
    // 7F234F08: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234F08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F234F0C:
    // 7F234F0C: bc    4, 1, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234F10:
    ctx->downcount -= 1;
    // 7F234F10: bl      0x800147F8
    {
            ctx->lr = 0x7F234F14u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F234F14:
    ctx->downcount -= 2;
    // 7F234F14: and.   r0, r22, r3
    {
        ctx->gpr[0] = ctx->gpr[22] & ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F234F18:
    // 7F234F18: bc    4, 2, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234F1C:
    ctx->downcount -= 6;
    // 7F234F1C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F234F20:
    // 7F234F20: lis     r3, -30583
    ctx->gpr[3] = ((u32)(s32)(-30583) << 16);

label_7F234F24:
    ctx->pc = 0x7F234F24u;
    // 7F234F24: stbx    r0, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234F28:
    // 7F234F28: addi    r0, r3, -30465
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30465);

label_7F234F2C:
    ctx->pc = 0x7F234F2Cu;
    // 7F234F2C: stwx    r0, r24, r20
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[20];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F234F30:
    // 7F234F30: b       0x7F234FBC
    {
            goto label_7F234FBC;
    }

label_7F234F34:
    ctx->downcount -= 2;
    // 7F234F34: cmplwi  r0, 0x0001
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

label_7F234F38:
    // 7F234F38: bc    4, 2, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234F3C:
    ctx->downcount -= 20;
    // 7F234F3C: mulli   r4, r5, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)12);

label_7F234F40:
    // 7F234F40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234F44:
    ctx->pc = 0x7F234F44u;
    // 7F234F44: lfs     f1, 19012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234F48:
    // 7F234F48: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F234F4C:
    ctx->pc = 0x7F234F4Cu;
    // 7F234F4C: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F234F4Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234F50:
    // 7F234F50: add   r3, r26, r19
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F234F54:
    // 7F234F54: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_7F234F58:
    ctx->pc = 0x7F234F58u;
    // 7F234F58: lfs     f3, 19016(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F234F58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F234F5C:
    ctx->pc = 0x7F234F5Cu;
    // 7F234F5C: lfsx    f2, r23, r0
    if (!ppc_fp_available_inline(ctx, 0x7F234F5Cu)) return;
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F234F60:
    ctx->pc = 0x7F234F60u;
    // 7F234F60: fmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234F60u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F234F64:
    ctx->pc = 0x7F234F64u;
    // 7F234F64: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234F68:
    ctx->pc = 0x7F234F68u;
    // 7F234F68: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234F68u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F234F6C:
    ctx->pc = 0x7F234F6Cu;
    // 7F234F6C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234F6Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F234F70:
    ctx->pc = 0x7F234F70u;
    // 7F234F70: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F234F74:
    ctx->pc = 0x7F234F74u;
    // 7F234F74: lwzx    r0, r24, r20
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234F78:
    // 7F234F78: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F234F7C:
    // 7F234F7C: cmplwi  r0, 0x0060
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0060u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234F80:
    // 7F234F80: bc    4, 0, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234F84:
    ctx->pc = 0x7F234F84u;
    ctx->downcount -= 2;
    // 7F234F84: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F234F88:
    // 7F234F88: bl      0x7F030A40
    {
            ctx->lr = 0x7F234F8Cu;
            ctx->pc = 0x7F030A40u;
            return;
    }

label_7F234F8C:
    ctx->downcount -= 4;
    // 7F234F8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F234F90:
    ctx->pc = 0x7F234F90u;
    // 7F234F90: lfd     f0, 19024(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F234F90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19024);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F234F94:
    ctx->pc = 0x7F234F94u;
    // 7F234F94: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F234F94u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F234F98:
    // 7F234F98: bc    4, 0, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234F9C:
    ctx->downcount -= 1;
    // 7F234F9C: bl      0x800147F8
    {
            ctx->lr = 0x7F234FA0u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F234FA0:
    ctx->downcount -= 48;
    // 7F234FA0: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F234FA4:
    // 7F234FA4: divw   r0, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F234FA8:
    // 7F234FA8: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F234FAC:
    // 7F234FAC: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
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

label_7F234FB0:
    // 7F234FB0: bc    4, 2, 0x7F234FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FBC;
        }
    }

label_7F234FB4:
    ctx->downcount -= 2;
    // 7F234FB4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F234FB8:
    ctx->pc = 0x7F234FB8u;
    // 7F234FB8: stbx    r0, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234FBC:
    ctx->pc = 0x7F234FBCu;
    ctx->downcount -= 3;
    // 7F234FBC: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F234FBCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F234FC0:
    ctx->pc = 0x7F234FC0u;
    // 7F234FC0: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F234FC0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F234FC4:
    // 7F234FC4: bc    4, 0, 0x7F234FD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F234FD0;
        }
    }

label_7F234FC8:
    ctx->downcount -= 2;
    // 7F234FC8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F234FCC:
    ctx->pc = 0x7F234FCCu;
    // 7F234FCC: stbx    r0, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F234FD0:
    ctx->downcount -= 5;
    // 7F234FD0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F234FD4:
    // 7F234FD4: addi    r19, r19, 12
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(12);

label_7F234FD8:
    // 7F234FD8: cmpwi   r28, 8192
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F234FDC:
    // 7F234FDC: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_7F234FE0:
    // 7F234FE0: bc    12, 0, 0x7F234DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234DF0u;
                return;
            }
            goto label_7F234DF0;
        }
    }

label_7F234FE4:
    ctx->pc = 0x7F234FE4u;
    ctx->downcount -= 3;
    // 7F234FE4: addis   r31, r21, 4
    ctx->gpr[31] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F234FE8:
    ctx->pc = 0x7F234FE8u;
    // 7F234FE8: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F234FEC:
    ctx->pc = 0x7F234FECu;
    // 7F234FEC: lwz     r28, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F234FF0:
    ctx->pc = 0x7F234FF0u;
    ctx->downcount -= 5;
    // 7F234FF0: lwz     r5, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F234FF4:
    // 7F234FF4: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F234FF8:
    ctx->pc = 0x7F234FF8u;
    // 7F234FF8: lwzx    r0, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F234FFC:
    // 7F234FFC: rlwinm. r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F235000:
    // 7F235000: bc    4, 2, 0x7F235138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235138;
        }
    }

label_7F235004:
    ctx->pc = 0x7F235004u;
    ctx->downcount -= 3;
    // 7F235004: lbzx    r0, r25, r5
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[5];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F235008:
    // 7F235008: cmplwi  r0, 0x0000
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

label_7F23500C:
    // 7F23500C: bc    12, 2, 0x7F235138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235138;
        }
    }

label_7F235010:
    ctx->downcount -= 20;
    // 7F235010: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235014:
    // 7F235014: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235018:
    ctx->pc = 0x7F235018u;
    // 7F235018: lfs     f0, 0(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F235018u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23501C:
    // 7F23501C: mulli   r0, r5, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)12);

label_7F235020:
    ctx->pc = 0x7F235020u;
    // 7F235020: lfs     f2, 19032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235020u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235024:
    ctx->pc = 0x7F235024u;
    // 7F235024: lfs     f1, 19012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235024u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235028:
    ctx->pc = 0x7F235028u;
    // 7F235028: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235028u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F23502C:
    ctx->pc = 0x7F23502Cu;
    // 7F23502C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F23502Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F235030:
    ctx->pc = 0x7F235030u;
    // 7F235030: stfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F235030u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235034:
    ctx->pc = 0x7F235034u;
    // 7F235034: lwz     r0, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235038:
    ctx->pc = 0x7F235038u;
    // 7F235038: lfs     f0, 4(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F235038u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23503C:
    // 7F23503C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F235040:
    ctx->pc = 0x7F235040u;
    // 7F235040: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F235040u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F235044:
    // 7F235044: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F235048:
    ctx->pc = 0x7F235048u;
    // 7F235048: stfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F235048u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23504C:
    // 7F23504C: bl      0x800147F8
    {
            ctx->lr = 0x7F235050u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F235050:
    ctx->downcount -= 68;
    // 7F235050: li      r8, 400
    ctx->gpr[8] = (u32)(s32)(400);

label_7F235054:
    // 7F235054: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F235058:
    // 7F235058: divw   r7, r3, r8
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F23505C:
    // 7F23505C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F235060:
    // 7F235060: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235064:
    ctx->pc = 0x7F235064u;
    // 7F235064: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235068:
    // 7F235068: addi    r6, r5, 18920
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(18920);

label_7F23506C:
    // 7F23506C: addi    r5, r4, 19036
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19036);

label_7F235070:
    // 7F235070: mullw   r7, r7, r8
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[7] = (u32)product;
    }

label_7F235074:
    // 7F235074: addis   r4, r21, 4
    ctx->gpr[4] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F235078:
    ctx->pc = 0x7F235078u;
    // 7F235078: lwz     r0, -23896(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23507C:
    ctx->pc = 0x7F23507Cu;
    // 7F23507C: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F23507Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F235080:
    ctx->pc = 0x7F235080u;
    // 7F235080: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235080u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235084:
    // 7F235084: subf   r3, r7, r3
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F235088:
    // 7F235088: subfic  r3, r3, -200
    {
        u64 res = (u64)(u32)(s32)(-200) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F23508C:
    // 7F23508C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F235090:
    ctx->pc = 0x7F235090u;
    // 7F235090: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235094:
    // 7F235094: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F235098:
    ctx->pc = 0x7F235098u;
    // 7F235098: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23509C:
    ctx->pc = 0x7F23509Cu;
    // 7F23509C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F23509Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2350A0:
    ctx->pc = 0x7F2350A0u;
    // 7F2350A0: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2350A0u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F2350A4:
    ctx->pc = 0x7F2350A4u;
    // 7F2350A4: stfsx    f0, r26, r0
    if (!ppc_fp_available_inline(ctx, 0x7F2350A4u)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2350A8:
    // 7F2350A8: bl      0x800147F8
    {
            ctx->lr = 0x7F2350ACu;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F2350AC:
    ctx->downcount -= 37;
    // 7F2350AC: rlwinm r0, r3, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 30u) & 0xC0000000u;
    }

label_7F2350B0:
    // 7F2350B0: rlwinm r5, r3, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F2350B4:
    // 7F2350B4: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2350B8:
    // 7F2350B8: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F2350BC:
    // 7F2350BC: rlwinm r0, r0, 2, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFFu;
    }

label_7F2350C0:
    // 7F2350C0: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F2350C4:
    // 7F2350C4: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2350C8:
    // 7F2350C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2350CC:
    // 7F2350CC: subfic  r0, r0, 2
    {
        u64 res = (u64)(u32)(s32)(2) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2350D0:
    ctx->pc = 0x7F2350D0u;
    // 7F2350D0: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2350D4:
    // 7F2350D4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2350D8:
    // 7F2350D8: addi    r5, r3, 18920
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18920);

label_7F2350DC:
    ctx->pc = 0x7F2350DCu;
    // 7F2350DC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2350E0:
    // 7F2350E0: addis   r6, r21, 4
    ctx->gpr[6] = ctx->gpr[21] + ((u32)(s32)(4) << 16);

label_7F2350E4:
    // 7F2350E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2350E8:
    ctx->pc = 0x7F2350E8u;
    // 7F2350E8: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2350E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2350EC:
    ctx->pc = 0x7F2350ECu;
    // 7F2350EC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2350ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2350F0:
    // 7F2350F0: addi    r7, r3, 18980
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(18980);

label_7F2350F4:
    ctx->pc = 0x7F2350F4u;
    // 7F2350F4: lwz     r0, -23896(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2350F8:
    // 7F2350F8: lis     r3, -30583
    ctx->gpr[3] = ((u32)(s32)(-30583) << 16);

label_7F2350FC:
    ctx->pc = 0x7F2350FCu;
    // 7F2350FC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2350FCu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F235100:
    ctx->pc = 0x7F235100u;
    // 7F235100: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F235100u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235104:
    // 7F235104: mulli   r5, r0, 12
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F235108:
    // 7F235108: addi    r4, r3, -30465
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30465);

label_7F23510C:
    // 7F23510C: cmpwi   r22, 60
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235110:
    ctx->pc = 0x7F235110u;
    // 7F235110: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235110u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F235114:
    // 7F235114: addi    r0, r5, 4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4);

label_7F235118:
    // 7F235118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F23511C:
    ctx->pc = 0x7F23511Cu;
    // 7F23511C: stfsx    f0, r26, r0
    if (!ppc_fp_available_inline(ctx, 0x7F23511Cu)) return;
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235120:
    ctx->pc = 0x7F235120u;
    // 7F235120: lwz     r0, -23896(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235124:
    // 7F235124: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F235128:
    ctx->pc = 0x7F235128u;
    // 7F235128: stwx    r4, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F23512C:
    ctx->pc = 0x7F23512Cu;
    // 7F23512C: lwz     r0, -23896(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235130:
    ctx->pc = 0x7F235130u;
    // 7F235130: stbx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F235134:
    // 7F235134: bc    12, 2, 0x7F235164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235164;
        }
    }

label_7F235138:
    ctx->pc = 0x7F235138u;
    ctx->downcount -= 6;
    // 7F235138: lwz     r3, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23513C:
    // 7F23513C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F235140:
    ctx->pc = 0x7F235140u;
    // 7F235140: stw     r0, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235144:
    ctx->pc = 0x7F235144u;
    // 7F235144: lwz     r0, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235148:
    // 7F235148: cmpwi   r0, 8192
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

label_7F23514C:
    // 7F23514C: bc    4, 1, 0x7F235158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235158;
        }
    }

label_7F235150:
    ctx->downcount -= 2;
    // 7F235150: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F235154:
    ctx->pc = 0x7F235154u;
    // 7F235154: stw     r0, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235158:
    ctx->pc = 0x7F235158u;
    ctx->downcount -= 3;
    // 7F235158: lwz     r0, -23896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-23896);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23515C:
    // 7F23515C: cmpw    r0, r28
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235160:
    // 7F235160: bc    4, 2, 0x7F234FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234FF0u;
                return;
            }
            goto label_7F234FF0;
        }
    }

label_7F235164:
    ctx->pc = 0x7F235164u;
    ctx->downcount -= 26;
    // 7F235164: psq_l   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F235164u);
        if (ctx->exception) return;
    }

label_7F235168:
    ctx->pc = 0x7F235168u;
    // 7F235168: lfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23516C:
    ctx->pc = 0x7F23516Cu;
    // 7F23516C: psq_l   f30, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F23516Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F23516Cu);
        if (ctx->exception) return;
    }

label_7F235170:
    ctx->pc = 0x7F235170u;
    // 7F235170: lfd     f30, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F235174:
    ctx->pc = 0x7F235174u;
    // 7F235174: psq_l   f29, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F235174u);
        if (ctx->exception) return;
    }

label_7F235178:
    ctx->pc = 0x7F235178u;
    // 7F235178: lfd     f29, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23517C:
    ctx->pc = 0x7F23517Cu;
    // 7F23517C: psq_l   f28, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F23517Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F23517Cu);
        if (ctx->exception) return;
    }

label_7F235180:
    ctx->pc = 0x7F235180u;
    // 7F235180: lfd     f28, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235180u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F235184:
    ctx->pc = 0x7F235184u;
    // 7F235184: psq_l   f27, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F235184u);
        if (ctx->exception) return;
    }

label_7F235188:
    ctx->pc = 0x7F235188u;
    // 7F235188: lfd     f27, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23518C:
    ctx->pc = 0x7F23518Cu;
    // 7F23518C: lmw     r19, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235190:
    ctx->pc = 0x7F235190u;
    // 7F235190: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235194:
    ctx->pc = 0x7F235194u;
    // 7F235194: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235198:
    ctx->pc = 0x7F235198u;
    // 7F235198: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F23519C:
    ctx->pc = 0x7F23519Cu;
    // 7F23519C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2351A0:
    ctx->pc = 0x7F2351A0u;
    ctx->downcount -= 20;
    // 7F2351A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2351A4:
    ctx->pc = 0x7F2351A4u;
    // 7F2351A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2351A8:
    ctx->pc = 0x7F2351A8u;
    // 7F2351A8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2351AC:
    ctx->pc = 0x7F2351ACu;
    // 7F2351AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2351B0:
    ctx->pc = 0x7F2351B0u;
    // 7F2351B0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2351B4:
    ctx->pc = 0x7F2351B4u;
    // 7F2351B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2351B8:
    ctx->pc = 0x7F2351B8u;
    // 7F2351B8: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2351BC:
    ctx->pc = 0x7F2351BCu;
    // 7F2351BC: addi    r31, r4, 14256
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F2351C0:
    ctx->pc = 0x7F2351C0u;
    // 7F2351C0: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2351C4:
    ctx->pc = 0x7F2351C4u;
    // 7F2351C4: bl      0x7F2EA428
    {
            ctx->lr = 0x7F2351C8u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F2351C8:
    ctx->pc = 0x7F2351C8u;
    ctx->downcount -= 4;
    // 7F2351C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2351CC:
    ctx->pc = 0x7F2351CCu;
    // 7F2351CC: lwz     r0, -10344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2351D0:
    ctx->pc = 0x7F2351D0u;
    // 7F2351D0: cmpwi   r0, 2
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

label_7F2351D4:
    ctx->pc = 0x7F2351D4u;
    // 7F2351D4: bc    12, 2, 0x7F2351E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2351E8;
        }
    }

label_7F2351D8:
    ctx->pc = 0x7F2351D8u;
    ctx->downcount -= 1;
    // 7F2351D8: bc    4, 0, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F2351DC:
    ctx->pc = 0x7F2351DCu;
    ctx->downcount -= 2;
    // 7F2351DC: cmpwi   r0, 0
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

label_7F2351E0:
    ctx->pc = 0x7F2351E0u;
    // 7F2351E0: bc    4, 0, 0x7F235238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235238;
        }
    }

label_7F2351E4:
    ctx->pc = 0x7F2351E4u;
    ctx->downcount -= 1;
    // 7F2351E4: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F2351E8:
    ctx->pc = 0x7F2351E8u;
    ctx->downcount -= 3;
    // 7F2351E8: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2351EC:
    ctx->pc = 0x7F2351ECu;
    // 7F2351EC: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2351F0:
    ctx->pc = 0x7F2351F0u;
    // 7F2351F0: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F2351F4u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F2351F4:
    ctx->pc = 0x7F2351F4u;
    ctx->downcount -= 7;
    // 7F2351F4: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2351F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2351F8:
    ctx->pc = 0x7F2351F8u;
    // 7F2351F8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2351FC:
    ctx->pc = 0x7F2351FCu;
    // 7F2351FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F235200:
    ctx->pc = 0x7F235200u;
    // 7F235200: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235200u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F235204:
    ctx->pc = 0x7F235204u;
    // 7F235204: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F235208:
    ctx->pc = 0x7F235208u;
    // 7F235208: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F23520C:
    ctx->pc = 0x7F23520Cu;
    // 7F23520C: bl      0x7F234814
    {
            ctx->lr = 0x7F235210u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234814u;
                return;
            }
            goto label_7F234814;
    }

label_7F235210:
    ctx->pc = 0x7F235210u;
    ctx->downcount -= 4;
    // 7F235210: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235214:
    ctx->pc = 0x7F235214u;
    // 7F235214: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F235218:
    ctx->pc = 0x7F235218u;
    // 7F235218: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F23521C:
    ctx->pc = 0x7F23521Cu;
    // 7F23521C: bl      0x7F2EA688
    {
            ctx->lr = 0x7F235220u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F235220:
    ctx->pc = 0x7F235220u;
    ctx->downcount -= 1;
    // 7F235220: bl      0x7F01F67C
    {
            ctx->lr = 0x7F235224u;
            ctx->pc = 0x7F01F67Cu;
            return;
    }

label_7F235224:
    ctx->pc = 0x7F235224u;
    ctx->downcount -= 2;
    // 7F235224: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F235228:
    ctx->pc = 0x7F235228u;
    // 7F235228: bl      0x7F01F794
    {
            ctx->lr = 0x7F23522Cu;
            ctx->pc = 0x7F01F794u;
            return;
    }

label_7F23522C:
    ctx->pc = 0x7F23522Cu;
    ctx->downcount -= 2;
    // 7F23522C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F235230:
    ctx->pc = 0x7F235230u;
    // 7F235230: bl      0x7F3C8210
    {
            ctx->lr = 0x7F235234u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F235234:
    ctx->pc = 0x7F235234u;
    ctx->downcount -= 1;
    // 7F235234: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235238:
    ctx->pc = 0x7F235238u;
    ctx->downcount -= 5;
    // 7F235238: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23523C:
    ctx->pc = 0x7F23523Cu;
    // 7F23523C: lfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F23523Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235240:
    ctx->pc = 0x7F235240u;
    // 7F235240: lfs     f0, 18912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235240u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235244:
    ctx->pc = 0x7F235244u;
    // 7F235244: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235244u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F235248:
    ctx->pc = 0x7F235248u;
    // 7F235248: bc    4, 1, 0x7F2352B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2352B0;
        }
    }

label_7F23524C:
    ctx->pc = 0x7F23524Cu;
    ctx->downcount -= 3;
    // 7F23524C: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235250:
    ctx->pc = 0x7F235250u;
    // 7F235250: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F235254:
    ctx->pc = 0x7F235254u;
    // 7F235254: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F235258u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F235258:
    ctx->pc = 0x7F235258u;
    ctx->downcount -= 7;
    // 7F235258: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F235258u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23525C:
    ctx->pc = 0x7F23525Cu;
    // 7F23525C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235260:
    ctx->pc = 0x7F235260u;
    // 7F235260: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F235264:
    ctx->pc = 0x7F235264u;
    // 7F235264: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235264u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F235268:
    ctx->pc = 0x7F235268u;
    // 7F235268: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F23526C:
    ctx->pc = 0x7F23526Cu;
    // 7F23526C: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F235270:
    ctx->pc = 0x7F235270u;
    // 7F235270: bl      0x7F234764
    {
            ctx->lr = 0x7F235274u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234764u;
                return;
            }
            goto label_7F234764;
    }

label_7F235274:
    ctx->pc = 0x7F235274u;
    ctx->downcount -= 10;
    // 7F235274: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235278:
    ctx->pc = 0x7F235278u;
    // 7F235278: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23527C:
    ctx->pc = 0x7F23527Cu;
    // 7F23527C: lfs     f2, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F23527Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235280:
    ctx->pc = 0x7F235280u;
    // 7F235280: lfs     f1, 19040(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235280u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235284:
    ctx->pc = 0x7F235284u;
    // 7F235284: lfs     f0, 18912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235284u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235288:
    ctx->pc = 0x7F235288u;
    // 7F235288: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F235288u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F23528C:
    ctx->pc = 0x7F23528Cu;
    // 7F23528C: stfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F23528Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235290:
    ctx->pc = 0x7F235290u;
    // 7F235290: lfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F235290u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235294:
    ctx->pc = 0x7F235294u;
    // 7F235294: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235294u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F235298:
    ctx->pc = 0x7F235298u;
    // 7F235298: bc    4, 0, 0x7F2352A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2352A0;
        }
    }

label_7F23529C:
    ctx->pc = 0x7F23529Cu;
    ctx->downcount -= 1;
    // 7F23529C: stfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F23529Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2352A0:
    ctx->pc = 0x7F2352A0u;
    ctx->downcount -= 4;
    // 7F2352A0: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2352A4:
    ctx->pc = 0x7F2352A4u;
    // 7F2352A4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2352A8:
    ctx->pc = 0x7F2352A8u;
    // 7F2352A8: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2352AC:
    ctx->pc = 0x7F2352ACu;
    // 7F2352AC: bl      0x7F2EA688
    {
            ctx->lr = 0x7F2352B0u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F2352B0:
    ctx->pc = 0x7F2352B0u;
    ctx->downcount -= 25;
    // 7F2352B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2352B4:
    ctx->pc = 0x7F2352B4u;
    // 7F2352B4: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2352B8:
    ctx->pc = 0x7F2352B8u;
    // 7F2352B8: addi    r4, r3, 19044
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19044);

label_7F2352BC:
    ctx->pc = 0x7F2352BCu;
    // 7F2352BC: lfs     f1, -23872(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2352BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2352C0:
    ctx->pc = 0x7F2352C0u;
    // 7F2352C0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2352C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2352C4:
    ctx->pc = 0x7F2352C4u;
    // 7F2352C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2352C8:
    ctx->pc = 0x7F2352C8u;
    // 7F2352C8: addi    r5, r3, 19048
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19048);

label_7F2352CC:
    ctx->pc = 0x7F2352CCu;
    // 7F2352CC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2352CCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2352D0:
    ctx->pc = 0x7F2352D0u;
    // 7F2352D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2352D4:
    ctx->pc = 0x7F2352D4u;
    // 7F2352D4: addi    r4, r3, 19052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19052);

label_7F2352D8:
    ctx->pc = 0x7F2352D8u;
    // 7F2352D8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2352D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2352DC:
    ctx->pc = 0x7F2352DCu;
    // 7F2352DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2352DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2352E0:
    ctx->pc = 0x7F2352E0u;
    // 7F2352E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2352E4:
    ctx->pc = 0x7F2352E4u;
    // 7F2352E4: stfs     f0, -23872(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2352E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2352E8:
    ctx->pc = 0x7F2352E8u;
    // 7F2352E8: lfs     f0, 19056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2352E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2352EC:
    ctx->pc = 0x7F2352ECu;
    // 7F2352EC: lfs     f3, -23868(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2352ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2352F0:
    ctx->pc = 0x7F2352F0u;
    // 7F2352F0: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2352F0u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F2352F4:
    ctx->pc = 0x7F2352F4u;
    // 7F2352F4: stfs     f2, -23868(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2352F4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23868);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2352F8:
    ctx->pc = 0x7F2352F8u;
    // 7F2352F8: lfs     f2, -23864(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2352F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2352FC:
    ctx->pc = 0x7F2352FCu;
    // 7F2352FC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2352FCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F235300:
    ctx->pc = 0x7F235300u;
    // 7F235300: stfs     f1, -23864(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F235300u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235304:
    ctx->pc = 0x7F235304u;
    // 7F235304: lfs     f1, -23872(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F235304u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235308:
    ctx->pc = 0x7F235308u;
    // 7F235308: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235308u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F23530C:
    ctx->pc = 0x7F23530Cu;
    // 7F23530C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F235310:
    ctx->pc = 0x7F235310u;
    // 7F235310: bc    4, 2, 0x7F235318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235318;
        }
    }

label_7F235314:
    ctx->pc = 0x7F235314u;
    ctx->downcount -= 1;
    // 7F235314: stfs     f0, -23872(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F235314u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235318:
    ctx->pc = 0x7F235318u;
    ctx->downcount -= 7;
    // 7F235318: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23531C:
    ctx->pc = 0x7F23531Cu;
    // 7F23531C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235320:
    ctx->pc = 0x7F235320u;
    // 7F235320: lfs     f1, -23868(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235320u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235324:
    ctx->pc = 0x7F235324u;
    // 7F235324: lfs     f0, 19060(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235324u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235328:
    ctx->pc = 0x7F235328u;
    // 7F235328: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235328u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F23532C:
    ctx->pc = 0x7F23532Cu;
    // 7F23532C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F235330:
    ctx->pc = 0x7F235330u;
    // 7F235330: bc    4, 2, 0x7F235338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235338;
        }
    }

label_7F235334:
    ctx->pc = 0x7F235334u;
    ctx->downcount -= 1;
    // 7F235334: stfs     f0, -23868(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235334u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23868);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235338:
    ctx->pc = 0x7F235338u;
    ctx->downcount -= 7;
    // 7F235338: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23533C:
    ctx->pc = 0x7F23533Cu;
    // 7F23533C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235340:
    ctx->pc = 0x7F235340u;
    // 7F235340: lfs     f1, -23864(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235340u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235344:
    ctx->pc = 0x7F235344u;
    // 7F235344: lfs     f0, 19064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235344u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235348:
    ctx->pc = 0x7F235348u;
    // 7F235348: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235348u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F23534C:
    ctx->pc = 0x7F23534Cu;
    // 7F23534C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F235350:
    ctx->pc = 0x7F235350u;
    // 7F235350: bc    4, 2, 0x7F235358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235358;
        }
    }

label_7F235354:
    ctx->pc = 0x7F235354u;
    ctx->downcount -= 1;
    // 7F235354: stfs     f0, -23864(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235354u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235358:
    ctx->pc = 0x7F235358u;
    ctx->downcount -= 4;
    // 7F235358: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F23535C:
    ctx->pc = 0x7F23535Cu;
    // 7F23535C: lwz     r0, -23876(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23876);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235360:
    ctx->pc = 0x7F235360u;
    // 7F235360: cmpwi   r0, 1
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

label_7F235364:
    ctx->pc = 0x7F235364u;
    // 7F235364: bc    12, 2, 0x7F2353B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2353B8;
        }
    }

label_7F235368:
    ctx->pc = 0x7F235368u;
    ctx->downcount -= 1;
    // 7F235368: bc    4, 0, 0x7F235378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235378;
        }
    }

label_7F23536C:
    ctx->pc = 0x7F23536Cu;
    ctx->downcount -= 2;
    // 7F23536C: cmpwi   r0, 0
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

label_7F235370:
    ctx->pc = 0x7F235370u;
    // 7F235370: bc    4, 0, 0x7F235384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235384;
        }
    }

label_7F235374:
    ctx->pc = 0x7F235374u;
    ctx->downcount -= 1;
    // 7F235374: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235378:
    ctx->pc = 0x7F235378u;
    ctx->downcount -= 2;
    // 7F235378: cmpwi   r0, 3
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

label_7F23537C:
    ctx->pc = 0x7F23537Cu;
    // 7F23537C: bc    4, 0, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F235380:
    ctx->pc = 0x7F235380u;
    ctx->downcount -= 1;
    // 7F235380: b       0x7F235558
    {
            goto label_7F235558;
    }

label_7F235384:
    ctx->pc = 0x7F235384u;
    ctx->downcount -= 2;
    // 7F235384: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235388:
    ctx->pc = 0x7F235388u;
    // 7F235388: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F23538Cu;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F23538C:
    ctx->pc = 0x7F23538Cu;
    ctx->downcount -= 2;
    // 7F23538C: cmpwi   r3, 0
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

label_7F235390:
    ctx->pc = 0x7F235390u;
    // 7F235390: bc    4, 2, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F235394:
    ctx->pc = 0x7F235394u;
    ctx->downcount -= 5;
    // 7F235394: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235398:
    ctx->pc = 0x7F235398u;
    // 7F235398: lis     r4, 154
    ctx->gpr[4] = ((u32)(s32)(154) << 16);

label_7F23539C:
    ctx->pc = 0x7F23539Cu;
    // 7F23539C: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2353A0:
    ctx->pc = 0x7F2353A0u;
    // 7F2353A0: addi    r4, r4, -28290
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28290);

label_7F2353A4:
    ctx->pc = 0x7F2353A4u;
    // 7F2353A4: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F2353A8u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F2353A8:
    ctx->pc = 0x7F2353A8u;
    ctx->downcount -= 4;
    // 7F2353A8: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2353AC:
    ctx->pc = 0x7F2353ACu;
    // 7F2353AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2353B0:
    ctx->pc = 0x7F2353B0u;
    // 7F2353B0: stw     r0, -23876(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2353B4:
    ctx->pc = 0x7F2353B4u;
    // 7F2353B4: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F2353B8:
    ctx->pc = 0x7F2353B8u;
    ctx->downcount -= 2;
    // 7F2353B8: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2353BC:
    ctx->pc = 0x7F2353BCu;
    // 7F2353BC: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F2353C0u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F2353C0:
    ctx->pc = 0x7F2353C0u;
    ctx->downcount -= 2;
    // 7F2353C0: cmpwi   r3, 0
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

label_7F2353C4:
    ctx->pc = 0x7F2353C4u;
    // 7F2353C4: bc    4, 2, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F2353C8:
    ctx->pc = 0x7F2353C8u;
    ctx->downcount -= 3;
    // 7F2353C8: lwz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2353CC:
    ctx->pc = 0x7F2353CCu;
    // 7F2353CC: cmpwi   r0, 0
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

label_7F2353D0:
    ctx->pc = 0x7F2353D0u;
    // 7F2353D0: bc    12, 2, 0x7F235424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235424;
        }
    }

label_7F2353D4:
    ctx->pc = 0x7F2353D4u;
    ctx->downcount -= 3;
    // 7F2353D4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2353D8:
    ctx->pc = 0x7F2353D8u;
    // 7F2353D8: cmpwi   r3, 0
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

label_7F2353DC:
    ctx->pc = 0x7F2353DCu;
    // 7F2353DC: bc    12, 2, 0x7F2353EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2353EC;
        }
    }

label_7F2353E0:
    ctx->pc = 0x7F2353E0u;
    ctx->downcount -= 3;
    // 7F2353E0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2353E4:
    ctx->pc = 0x7F2353E4u;
    // 7F2353E4: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2353E8:
    ctx->pc = 0x7F2353E8u;
    // 7F2353E8: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F2353EC:
    ctx->pc = 0x7F2353ECu;
    ctx->downcount -= 6;
    // 7F2353EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2353F0:
    ctx->pc = 0x7F2353F0u;
    // 7F2353F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2353F4:
    ctx->pc = 0x7F2353F4u;
    // 7F2353F4: addi    r3, r3, -10340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10340);

label_7F2353F8:
    ctx->pc = 0x7F2353F8u;
    // 7F2353F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2353FC:
    ctx->pc = 0x7F2353FCu;
    // 7F2353FC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235400:
    ctx->pc = 0x7F235400u;
    // 7F235400: bl      0x80051BB0
    {
            ctx->lr = 0x7F235404u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F235404:
    ctx->pc = 0x7F235404u;
    ctx->downcount -= 2;
    // 7F235404: cmpwi   r3, 0
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

label_7F235408:
    ctx->pc = 0x7F235408u;
    // 7F235408: bc    4, 2, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F23540C:
    ctx->pc = 0x7F23540Cu;
    ctx->downcount -= 1;
    // 7F23540C: bl      0x7F01F67C
    {
            ctx->lr = 0x7F235410u;
            ctx->pc = 0x7F01F67Cu;
            return;
    }

label_7F235410:
    ctx->pc = 0x7F235410u;
    ctx->downcount -= 2;
    // 7F235410: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235414:
    ctx->pc = 0x7F235414u;
    // 7F235414: bl      0x7F01F794
    {
            ctx->lr = 0x7F235418u;
            ctx->pc = 0x7F01F794u;
            return;
    }

label_7F235418:
    ctx->pc = 0x7F235418u;
    ctx->downcount -= 2;
    // 7F235418: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F23541C:
    ctx->pc = 0x7F23541Cu;
    // 7F23541C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F235420u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F235420:
    ctx->pc = 0x7F235420u;
    ctx->downcount -= 1;
    // 7F235420: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235424:
    ctx->pc = 0x7F235424u;
    ctx->downcount -= 7;
    // 7F235424: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F235428:
    ctx->pc = 0x7F235428u;
    // 7F235428: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F23542C:
    ctx->pc = 0x7F23542Cu;
    // 7F23542C: lwz     r0, -10344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235430:
    ctx->pc = 0x7F235430u;
    // 7F235430: addi    r4, r3, 128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(128);

label_7F235434:
    ctx->pc = 0x7F235434u;
    // 7F235434: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F235438:
    ctx->pc = 0x7F235438u;
    // 7F235438: cmpwi   r0, 0
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

label_7F23543C:
    ctx->pc = 0x7F23543Cu;
    // 7F23543C: bc    4, 2, 0x7F235448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235448;
        }
    }

label_7F235440:
    ctx->pc = 0x7F235440u;
    ctx->downcount -= 2;
    // 7F235440: lis     r3, 17
    ctx->gpr[3] = ((u32)(s32)(17) << 16);

label_7F235444:
    ctx->pc = 0x7F235444u;
    // 7F235444: addi    r4, r3, -24448
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-24448);

label_7F235448:
    ctx->pc = 0x7F235448u;
    ctx->downcount -= 5;
    // 7F235448: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F23544C:
    ctx->pc = 0x7F23544Cu;
    // 7F23544C: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F235450:
    ctx->pc = 0x7F235450u;
    // 7F235450: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F235454:
    ctx->pc = 0x7F235454u;
    // 7F235454: cmpw    r4, r0
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

label_7F235458:
    ctx->pc = 0x7F235458u;
    // 7F235458: bc    12, 2, 0x7F235488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235488;
        }
    }

label_7F23545C:
    ctx->pc = 0x7F23545Cu;
    ctx->downcount -= 1;
    // 7F23545C: bc    4, 0, 0x7F235478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235478;
        }
    }

label_7F235460:
    ctx->pc = 0x7F235460u;
    ctx->downcount -= 2;
    // 7F235460: cmpwi   r4, 8192
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235464:
    ctx->pc = 0x7F235464u;
    // 7F235464: bc    12, 2, 0x7F2354C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2354C4;
        }
    }

label_7F235468:
    ctx->pc = 0x7F235468u;
    ctx->downcount -= 1;
    // 7F235468: bc    4, 0, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F23546C:
    ctx->pc = 0x7F23546Cu;
    ctx->downcount -= 2;
    // 7F23546C: cmpwi   r4, 128
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235470:
    ctx->pc = 0x7F235470u;
    // 7F235470: bc    12, 2, 0x7F235500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235500;
        }
    }

label_7F235474:
    ctx->pc = 0x7F235474u;
    ctx->downcount -= 1;
    // 7F235474: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235478:
    ctx->pc = 0x7F235478u;
    ctx->downcount -= 3;
    // 7F235478: lis     r0, 16
    ctx->gpr[0] = ((u32)(s32)(16) << 16);

label_7F23547C:
    ctx->pc = 0x7F23547Cu;
    // 7F23547C: cmpw    r4, r0
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

label_7F235480:
    ctx->pc = 0x7F235480u;
    // 7F235480: bc    12, 2, 0x7F235500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235500;
        }
    }

label_7F235484:
    ctx->pc = 0x7F235484u;
    ctx->downcount -= 1;
    // 7F235484: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235488:
    ctx->pc = 0x7F235488u;
    ctx->downcount -= 3;
    // 7F235488: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23548C:
    ctx->pc = 0x7F23548Cu;
    // 7F23548C: cmpwi   r0, 0
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

label_7F235490:
    ctx->pc = 0x7F235490u;
    // 7F235490: bc    12, 2, 0x7F2354B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2354B0;
        }
    }

label_7F235494:
    ctx->pc = 0x7F235494u;
    ctx->downcount -= 5;
    // 7F235494: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235498:
    ctx->pc = 0x7F235498u;
    // 7F235498: lis     r4, 80
    ctx->gpr[4] = ((u32)(s32)(80) << 16);

label_7F23549C:
    ctx->pc = 0x7F23549Cu;
    // 7F23549C: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2354A0:
    ctx->pc = 0x7F2354A0u;
    // 7F2354A0: addi    r4, r4, -4253
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4253);

label_7F2354A4:
    ctx->pc = 0x7F2354A4u;
    // 7F2354A4: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F2354A8u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F2354A8:
    ctx->pc = 0x7F2354A8u;
    ctx->downcount -= 2;
    // 7F2354A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2354AC:
    ctx->pc = 0x7F2354ACu;
    // 7F2354AC: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2354B0:
    ctx->pc = 0x7F2354B0u;
    ctx->downcount -= 4;
    // 7F2354B0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2354B4:
    ctx->pc = 0x7F2354B4u;
    // 7F2354B4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2354B8:
    ctx->pc = 0x7F2354B8u;
    // 7F2354B8: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F2354BC:
    ctx->pc = 0x7F2354BCu;
    // 7F2354BC: bl      0x7F011698
    {
            ctx->lr = 0x7F2354C0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2354C0:
    ctx->pc = 0x7F2354C0u;
    ctx->downcount -= 1;
    // 7F2354C0: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F2354C4:
    ctx->pc = 0x7F2354C4u;
    ctx->downcount -= 3;
    // 7F2354C4: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2354C8:
    ctx->pc = 0x7F2354C8u;
    // 7F2354C8: cmpwi   r0, 1
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

label_7F2354CC:
    ctx->pc = 0x7F2354CCu;
    // 7F2354CC: bc    12, 2, 0x7F2354EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2354EC;
        }
    }

label_7F2354D0:
    ctx->pc = 0x7F2354D0u;
    ctx->downcount -= 5;
    // 7F2354D0: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2354D4:
    ctx->pc = 0x7F2354D4u;
    // 7F2354D4: lis     r4, 96
    ctx->gpr[4] = ((u32)(s32)(96) << 16);

label_7F2354D8:
    ctx->pc = 0x7F2354D8u;
    // 7F2354D8: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2354DC:
    ctx->pc = 0x7F2354DCu;
    // 7F2354DC: addi    r4, r4, -4273
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4273);

label_7F2354E0:
    ctx->pc = 0x7F2354E0u;
    // 7F2354E0: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F2354E4u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F2354E4:
    ctx->pc = 0x7F2354E4u;
    ctx->downcount -= 2;
    // 7F2354E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2354E8:
    ctx->pc = 0x7F2354E8u;
    // 7F2354E8: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2354EC:
    ctx->pc = 0x7F2354ECu;
    ctx->downcount -= 4;
    // 7F2354EC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2354F0:
    ctx->pc = 0x7F2354F0u;
    // 7F2354F0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F2354F4:
    ctx->pc = 0x7F2354F4u;
    // 7F2354F4: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F2354F8:
    ctx->pc = 0x7F2354F8u;
    // 7F2354F8: bl      0x7F011698
    {
            ctx->lr = 0x7F2354FCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F2354FC:
    ctx->pc = 0x7F2354FCu;
    ctx->downcount -= 1;
    // 7F2354FC: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235500:
    ctx->pc = 0x7F235500u;
    ctx->downcount -= 7;
    // 7F235500: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F235504:
    ctx->pc = 0x7F235504u;
    // 7F235504: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F235508:
    ctx->pc = 0x7F235508u;
    // 7F235508: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F23550C:
    ctx->pc = 0x7F23550Cu;
    // 7F23550C: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235510:
    ctx->pc = 0x7F235510u;
    // 7F235510: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235514:
    ctx->pc = 0x7F235514u;
    // 7F235514: cmpwi   r0, 0
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

label_7F235518:
    ctx->pc = 0x7F235518u;
    // 7F235518: bc    12, 2, 0x7F235538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235538;
        }
    }

label_7F23551C:
    ctx->pc = 0x7F23551Cu;
    ctx->downcount -= 2;
    // 7F23551C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235520:
    ctx->pc = 0x7F235520u;
    // 7F235520: bl      0x7F3CA7CC
    {
            ctx->lr = 0x7F235524u;
            ctx->pc = 0x7F3CA7CCu;
            return;
    }

label_7F235524:
    ctx->pc = 0x7F235524u;
    ctx->downcount -= 4;
    // 7F235524: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F235528:
    ctx->pc = 0x7F235528u;
    // 7F235528: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F23552C:
    ctx->pc = 0x7F23552Cu;
    // 7F23552C: li      r5, 250
    ctx->gpr[5] = (u32)(s32)(250);

label_7F235530:
    ctx->pc = 0x7F235530u;
    // 7F235530: bl      0x7F011698
    {
            ctx->lr = 0x7F235534u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F235534:
    ctx->pc = 0x7F235534u;
    ctx->downcount -= 1;
    // 7F235534: b       0x7F235548
    {
            goto label_7F235548;
    }

label_7F235538:
    ctx->pc = 0x7F235538u;
    ctx->downcount -= 4;
    // 7F235538: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F23553C:
    ctx->pc = 0x7F23553Cu;
    // 7F23553C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F235540:
    ctx->pc = 0x7F235540u;
    // 7F235540: li      r5, 251
    ctx->gpr[5] = (u32)(s32)(251);

label_7F235544:
    ctx->pc = 0x7F235544u;
    // 7F235544: bl      0x7F011698
    {
            ctx->lr = 0x7F235548u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F235548:
    ctx->pc = 0x7F235548u;
    ctx->downcount -= 4;
    // 7F235548: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F23554C:
    ctx->pc = 0x7F23554Cu;
    // 7F23554C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F235550:
    ctx->pc = 0x7F235550u;
    // 7F235550: stw     r0, -23876(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235554:
    ctx->pc = 0x7F235554u;
    // 7F235554: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F235558:
    ctx->pc = 0x7F235558u;
    ctx->downcount -= 2;
    // 7F235558: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F23555C:
    ctx->pc = 0x7F23555Cu;
    // 7F23555C: bl      0x7F2EA428
    {
            ctx->lr = 0x7F235560u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F235560:
    ctx->pc = 0x7F235560u;
    ctx->downcount -= 3;
    // 7F235560: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F235564:
    ctx->pc = 0x7F235564u;
    // 7F235564: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F235568:
    ctx->pc = 0x7F235568u;
    // 7F235568: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F23556Cu;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F23556C:
    ctx->pc = 0x7F23556Cu;
    ctx->downcount -= 9;
    // 7F23556C: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235570:
    ctx->pc = 0x7F235570u;
    // 7F235570: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F235574:
    ctx->pc = 0x7F235574u;
    // 7F235574: stb     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F235578:
    ctx->pc = 0x7F235578u;
    // 7F235578: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F23557C:
    ctx->pc = 0x7F23557Cu;
    // 7F23557C: subfic  r0, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F235580:
    ctx->pc = 0x7F235580u;
    // 7F235580: stb     r4, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F235584:
    ctx->pc = 0x7F235584u;
    // 7F235584: stb     r4, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F235588:
    ctx->pc = 0x7F235588u;
    // 7F235588: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F23558C:
    ctx->pc = 0x7F23558Cu;
    // 7F23558C: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F235590u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F235590:
    ctx->pc = 0x7F235590u;
    ctx->downcount -= 1;
    // 7F235590: bl      0x7F2EA944
    {
            ctx->lr = 0x7F235594u;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F235594:
    ctx->pc = 0x7F235594u;
    ctx->downcount -= 8;
    // 7F235594: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235598:
    ctx->pc = 0x7F235598u;
    // 7F235598: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F23559C:
    ctx->pc = 0x7F23559Cu;
    // 7F23559C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2355A0:
    ctx->pc = 0x7F2355A0u;
    // 7F2355A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2355A4:
    ctx->pc = 0x7F2355A4u;
    // 7F2355A4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2355A8:
    ctx->pc = 0x7F2355A8u;
    // 7F2355A8: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F2355AC:
    ctx->pc = 0x7F2355ACu;
    // 7F2355AC: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F2355B0:
    ctx->pc = 0x7F2355B0u;
    // 7F2355B0: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F2355B4u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F2355B4:
    ctx->pc = 0x7F2355B4u;
    ctx->downcount -= 4;
    // 7F2355B4: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F2355B8:
    ctx->pc = 0x7F2355B8u;
    // 7F2355B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2355BC:
    ctx->pc = 0x7F2355BCu;
    // 7F2355BC: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F2355C0:
    ctx->pc = 0x7F2355C0u;
    // 7F2355C0: bl      0x7F2EA688
    {
            ctx->lr = 0x7F2355C4u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F2355C4:
    ctx->pc = 0x7F2355C4u;
    ctx->downcount -= 3;
    // 7F2355C4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2355C8:
    ctx->pc = 0x7F2355C8u;
    // 7F2355C8: cmpwi   r3, 0
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

label_7F2355CC:
    ctx->pc = 0x7F2355CCu;
    // 7F2355CC: bc    12, 2, 0x7F2355DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2355DC;
        }
    }

label_7F2355D0:
    ctx->pc = 0x7F2355D0u;
    ctx->downcount -= 3;
    // 7F2355D0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2355D4:
    ctx->pc = 0x7F2355D4u;
    // 7F2355D4: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2355D8:
    ctx->pc = 0x7F2355D8u;
    // 7F2355D8: b       0x7F235610
    {
            goto label_7F235610;
    }

label_7F2355DC:
    ctx->pc = 0x7F2355DCu;
    ctx->downcount -= 6;
    // 7F2355DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2355E0:
    ctx->pc = 0x7F2355E0u;
    // 7F2355E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2355E4:
    ctx->pc = 0x7F2355E4u;
    // 7F2355E4: addi    r3, r3, -10340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10340);

label_7F2355E8:
    ctx->pc = 0x7F2355E8u;
    // 7F2355E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2355EC:
    ctx->pc = 0x7F2355ECu;
    // 7F2355EC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2355F0:
    ctx->pc = 0x7F2355F0u;
    // 7F2355F0: bl      0x80051BB0
    {
            ctx->lr = 0x7F2355F4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F2355F4:
    ctx->pc = 0x7F2355F4u;
    ctx->downcount -= 2;
    // 7F2355F4: cmpwi   r3, 0
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

label_7F2355F8:
    ctx->pc = 0x7F2355F8u;
    // 7F2355F8: bc    4, 2, 0x7F235610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235610;
        }
    }

label_7F2355FC:
    ctx->pc = 0x7F2355FCu;
    ctx->downcount -= 1;
    // 7F2355FC: bl      0x7F01F67C
    {
            ctx->lr = 0x7F235600u;
            ctx->pc = 0x7F01F67Cu;
            return;
    }

label_7F235600:
    ctx->pc = 0x7F235600u;
    ctx->downcount -= 2;
    // 7F235600: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235604:
    ctx->pc = 0x7F235604u;
    // 7F235604: bl      0x7F01F794
    {
            ctx->lr = 0x7F235608u;
            ctx->pc = 0x7F01F794u;
            return;
    }

label_7F235608:
    ctx->pc = 0x7F235608u;
    ctx->downcount -= 2;
    // 7F235608: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F23560C:
    ctx->pc = 0x7F23560Cu;
    // 7F23560C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F235610u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F235610:
    ctx->pc = 0x7F235610u;
    ctx->downcount -= 16;
    // 7F235610: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235614:
    ctx->pc = 0x7F235614u;
    // 7F235614: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235618:
    ctx->pc = 0x7F235618u;
    // 7F235618: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23561C:
    ctx->pc = 0x7F23561Cu;
    // 7F23561C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F235620:
    ctx->pc = 0x7F235620u;
    // 7F235620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235624:
    ctx->pc = 0x7F235624u;
    ctx->downcount -= 10;
    // 7F235624: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235628:
    ctx->pc = 0x7F235628u;
    // 7F235628: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23562C:
    ctx->pc = 0x7F23562Cu;
    // 7F23562C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F235630:
    ctx->pc = 0x7F235630u;
    // 7F235630: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235634:
    ctx->pc = 0x7F235634u;
    // 7F235634: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F235638:
    ctx->pc = 0x7F235638u;
    // 7F235638: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F23563C:
    ctx->pc = 0x7F23563Cu;
    // 7F23563C: addi    r3, r4, -10340
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-10340);

label_7F235640:
    ctx->pc = 0x7F235640u;
    // 7F235640: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235644:
    ctx->pc = 0x7F235644u;
    // 7F235644: cmplwi  r3, 0x0000
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

label_7F235648:
    ctx->pc = 0x7F235648u;
    // 7F235648: bc    12, 2, 0x7F23565C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23565C;
        }
    }

label_7F23564C:
    ctx->pc = 0x7F23564Cu;
    ctx->downcount -= 3;
    // 7F23564C: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235650:
    ctx->pc = 0x7F235650u;
    // 7F235650: cmpwi   r0, 3
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

label_7F235654:
    ctx->pc = 0x7F235654u;
    // 7F235654: bc    12, 2, 0x7F23565C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23565C;
        }
    }

label_7F235658:
    ctx->pc = 0x7F235658u;
    ctx->downcount -= 1;
    // 7F235658: bl      0x80051A5C
    {
            ctx->lr = 0x7F23565Cu;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F23565C:
    ctx->pc = 0x7F23565Cu;
    ctx->downcount -= 1;
    // 7F23565C: bl      0x8004C788
    {
            ctx->lr = 0x7F235660u;
            ctx->pc = 0x8004C788u;
            return;
    }

label_7F235660:
    ctx->pc = 0x7F235660u;
    ctx->downcount -= 4;
    // 7F235660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235664:
    ctx->pc = 0x7F235664u;
    // 7F235664: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F235668:
    ctx->pc = 0x7F235668u;
    // 7F235668: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F23566C:
    ctx->pc = 0x7F23566Cu;
    // 7F23566C: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F235670u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F235670:
    ctx->pc = 0x7F235670u;
    ctx->downcount -= 8;
    // 7F235670: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F235674:
    ctx->pc = 0x7F235674u;
    // 7F235674: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F235678:
    ctx->pc = 0x7F235678u;
    // 7F235678: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F23567C:
    ctx->pc = 0x7F23567Cu;
    // 7F23567C: stw     r0, 13516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235680:
    ctx->pc = 0x7F235680u;
    // 7F235680: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235684:
    ctx->pc = 0x7F235684u;
    // 7F235684: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235688:
    ctx->pc = 0x7F235688u;
    // 7F235688: cmplwi  r3, 0x0000
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

label_7F23568C:
    ctx->pc = 0x7F23568Cu;
    // 7F23568C: bc    12, 2, 0x7F2356A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2356A8;
        }
    }

label_7F235690:
    ctx->pc = 0x7F235690u;
    ctx->downcount -= 1;
    // 7F235690: bl      0x7F3BA300
    {
            ctx->lr = 0x7F235694u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F235694:
    ctx->pc = 0x7F235694u;
    ctx->downcount -= 2;
    // 7F235694: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235698:
    ctx->pc = 0x7F235698u;
    // 7F235698: bl      0x7F3BA234
    {
            ctx->lr = 0x7F23569Cu;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F23569C:
    ctx->pc = 0x7F23569Cu;
    ctx->downcount -= 3;
    // 7F23569C: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F2356A0:
    ctx->pc = 0x7F2356A0u;
    // 7F2356A0: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2356A4:
    ctx->pc = 0x7F2356A4u;
    // 7F2356A4: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F2356A8u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F2356A8:
    ctx->pc = 0x7F2356A8u;
    ctx->downcount -= 6;
    // 7F2356A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2356AC:
    ctx->pc = 0x7F2356ACu;
    // 7F2356AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2356B0:
    ctx->pc = 0x7F2356B0u;
    // 7F2356B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2356B4:
    ctx->pc = 0x7F2356B4u;
    // 7F2356B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2356B8:
    ctx->pc = 0x7F2356B8u;
    // 7F2356B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2356BC:
    ctx->pc = 0x7F2356BCu;
    ctx->downcount -= 6;
    // 7F2356BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2356C0:
    ctx->pc = 0x7F2356C0u;
    // 7F2356C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2356C4:
    ctx->pc = 0x7F2356C4u;
    // 7F2356C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2356C8:
    ctx->pc = 0x7F2356C8u;
    // 7F2356C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2356CC:
    ctx->pc = 0x7F2356CCu;
    // 7F2356CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2356D0:
    ctx->pc = 0x7F2356D0u;
    // 7F2356D0: bl      0x8004C788
    {
            ctx->lr = 0x7F2356D4u;
            ctx->pc = 0x8004C788u;
            return;
    }

label_7F2356D4:
    ctx->pc = 0x7F2356D4u;
    ctx->downcount -= 4;
    // 7F2356D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2356D8:
    ctx->pc = 0x7F2356D8u;
    // 7F2356D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2356DC:
    ctx->pc = 0x7F2356DCu;
    // 7F2356DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2356E0:
    ctx->pc = 0x7F2356E0u;
    // 7F2356E0: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F2356E4u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F2356E4:
    ctx->pc = 0x7F2356E4u;
    ctx->downcount -= 9;
    // 7F2356E4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2356E8:
    ctx->pc = 0x7F2356E8u;
    // 7F2356E8: lis     r5, 32767
    ctx->gpr[5] = ((u32)(s32)(32767) << 16);

label_7F2356EC:
    ctx->pc = 0x7F2356ECu;
    // 7F2356EC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2356F0:
    ctx->pc = 0x7F2356F0u;
    // 7F2356F0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2356F4:
    ctx->pc = 0x7F2356F4u;
    // 7F2356F4: stw     r5, 13516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13516);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2356F8:
    ctx->pc = 0x7F2356F8u;
    // 7F2356F8: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2356FC:
    ctx->pc = 0x7F2356FCu;
    // 7F2356FC: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235700:
    ctx->pc = 0x7F235700u;
    // 7F235700: cmplwi  r3, 0x0000
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

label_7F235704:
    ctx->pc = 0x7F235704u;
    // 7F235704: bc    12, 2, 0x7F235720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235720;
        }
    }

label_7F235708:
    ctx->pc = 0x7F235708u;
    ctx->downcount -= 1;
    // 7F235708: bl      0x7F3BA300
    {
            ctx->lr = 0x7F23570Cu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F23570C:
    ctx->pc = 0x7F23570Cu;
    ctx->downcount -= 2;
    // 7F23570C: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235710:
    ctx->pc = 0x7F235710u;
    // 7F235710: bl      0x7F3BA234
    {
            ctx->lr = 0x7F235714u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F235714:
    ctx->pc = 0x7F235714u;
    ctx->downcount -= 3;
    // 7F235714: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235718:
    ctx->pc = 0x7F235718u;
    // 7F235718: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F23571C:
    ctx->pc = 0x7F23571Cu;
    // 7F23571C: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F235720u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F235720:
    ctx->pc = 0x7F235720u;
    ctx->downcount -= 3;
    // 7F235720: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235724:
    ctx->pc = 0x7F235724u;
    // 7F235724: cmplwi  r3, 0x0000
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

label_7F235728:
    ctx->pc = 0x7F235728u;
    // 7F235728: bc    12, 2, 0x7F235744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235744;
        }
    }

label_7F23572C:
    ctx->pc = 0x7F23572Cu;
    ctx->downcount -= 1;
    // 7F23572C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F235730u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F235730:
    ctx->pc = 0x7F235730u;
    ctx->downcount -= 2;
    // 7F235730: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235734:
    ctx->pc = 0x7F235734u;
    // 7F235734: bl      0x7F3BA234
    {
            ctx->lr = 0x7F235738u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F235738:
    ctx->pc = 0x7F235738u;
    ctx->downcount -= 3;
    // 7F235738: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F23573C:
    ctx->pc = 0x7F23573Cu;
    // 7F23573C: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F235740:
    ctx->pc = 0x7F235740u;
    // 7F235740: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F235744u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F235744:
    ctx->pc = 0x7F235744u;
    ctx->downcount -= 4;
    // 7F235744: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235748:
    ctx->pc = 0x7F235748u;
    // 7F235748: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23574C:
    ctx->pc = 0x7F23574Cu;
    // 7F23574C: cmpwi   r3, 0
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

label_7F235750:
    ctx->pc = 0x7F235750u;
    // 7F235750: bc    12, 0, 0x7F235764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235764;
        }
    }

label_7F235754:
    ctx->pc = 0x7F235754u;
    ctx->downcount -= 1;
    // 7F235754: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F235758u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F235758:
    ctx->pc = 0x7F235758u;
    ctx->downcount -= 3;
    // 7F235758: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F23575C:
    ctx->pc = 0x7F23575Cu;
    // 7F23575C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F235760:
    ctx->pc = 0x7F235760u;
    // 7F235760: stw     r0, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235764:
    ctx->pc = 0x7F235764u;
    ctx->downcount -= 6;
    // 7F235764: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235768:
    ctx->pc = 0x7F235768u;
    // 7F235768: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F23576C:
    ctx->pc = 0x7F23576Cu;
    // 7F23576C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235770:
    ctx->pc = 0x7F235770u;
    // 7F235770: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235774:
    ctx->pc = 0x7F235774u;
    // 7F235774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235778:
    ctx->pc = 0x7F235778u;
    ctx->downcount -= 21;
    // 7F235778: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F23577C:
    ctx->pc = 0x7F23577Cu;
    // 7F23577C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235780:
    ctx->pc = 0x7F235780u;
    // 7F235780: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235784:
    ctx->pc = 0x7F235784u;
    // 7F235784: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F235788:
    ctx->pc = 0x7F235788u;
    // 7F235788: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F235788u);
        if (ctx->exception) return;
    }

label_7F23578C:
    ctx->pc = 0x7F23578Cu;
    // 7F23578C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F235790:
    ctx->pc = 0x7F235790u;
    // 7F235790: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235794:
    ctx->pc = 0x7F235794u;
    // 7F235794: li      r3, 184
    ctx->gpr[3] = (u32)(s32)(184);

label_7F235798:
    ctx->pc = 0x7F235798u;
    // 7F235798: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F23579C:
    ctx->pc = 0x7F23579Cu;
    // 7F23579C: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F2357A0:
    ctx->pc = 0x7F2357A0u;
    // 7F2357A0: bl      0x80042E0C
    {
            ctx->lr = 0x7F2357A4u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F2357A4:
    ctx->pc = 0x7F2357A4u;
    ctx->downcount -= 7;
    // 7F2357A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2357A8:
    ctx->pc = 0x7F2357A8u;
    // 7F2357A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2357AC:
    ctx->pc = 0x7F2357ACu;
    // 7F2357AC: lfs     f31, 18964(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2357ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2357B0:
    ctx->pc = 0x7F2357B0u;
    // 7F2357B0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2357B4:
    ctx->pc = 0x7F2357B4u;
    // 7F2357B4: addi    r29, r3, 19068
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(19068);

label_7F2357B8:
    ctx->pc = 0x7F2357B8u;
    // 7F2357B8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2357BC:
    ctx->pc = 0x7F2357BCu;
    // 7F2357BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2357C0:
    ctx->downcount -= 8;
    // 7F2357C0: add   r3, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2357C4:
    ctx->pc = 0x7F2357C4u;
    // 7F2357C4: lfs     f3, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2357C4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2357C8:
    // 7F2357C8: addis   r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(2) << 16);

label_7F2357CC:
    ctx->pc = 0x7F2357CCu;
    // 7F2357CC: lfs     f1, -32688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2357CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32688);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2357D0:
    ctx->pc = 0x7F2357D0u;
    // 7F2357D0: lfs     f0, -32684(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2357D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32684);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2357D4:
    ctx->pc = 0x7F2357D4u;
    // 7F2357D4: fmuls   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2357D4u)) return;
    ppc_fmuls(ctx, 1, 31, 1);

label_7F2357D8:
    ctx->pc = 0x7F2357D8u;
    // 7F2357D8: fmuls   f2, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2357D8u)) return;
    ppc_fmuls(ctx, 2, 31, 0);

label_7F2357DC:
    // 7F2357DC: bl      0x7F235850
    {
            ctx->lr = 0x7F2357E0u;
            goto label_7F235850;
    }

label_7F2357E0:
    ctx->downcount -= 4;
    // 7F2357E0: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F2357E4:
    // 7F2357E4: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F2357E8:
    ctx->pc = 0x7F2357E8u;
    // 7F2357E8: lwzx    r3, r27, r3
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2357EC:
    // 7F2357EC: bl      0x7F235844
    {
            ctx->lr = 0x7F2357F0u;
            goto label_7F235844;
    }

label_7F2357F0:
    ctx->downcount -= 3;
    // 7F2357F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2357F4:
    // 7F2357F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2357F8:
    // 7F2357F8: bl      0x7F235834
    {
            ctx->lr = 0x7F2357FCu;
            goto label_7F235834;
    }

label_7F2357FC:
    ctx->downcount -= 5;
    // 7F2357FC: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F235800:
    // 7F235800: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F235804:
    // 7F235804: cmpwi   r28, 8192
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235808:
    // 7F235808: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F23580C:
    // 7F23580C: bc    12, 0, 0x7F2357C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2357C0u;
                return;
            }
            goto label_7F2357C0;
        }
    }

label_7F235810:
    ctx->pc = 0x7F235810u;
    ctx->downcount -= 1;
    // 7F235810: bl      0x7F235830
    {
            ctx->lr = 0x7F235814u;
            goto label_7F235830;
    }

label_7F235814:
    ctx->pc = 0x7F235814u;
    ctx->downcount -= 18;
    // 7F235814: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F235814u);
        if (ctx->exception) return;
    }

label_7F235818:
    ctx->pc = 0x7F235818u;
    // 7F235818: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23581C:
    ctx->pc = 0x7F23581Cu;
    // 7F23581C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235820:
    ctx->pc = 0x7F235820u;
    // 7F235820: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235824:
    ctx->pc = 0x7F235824u;
    // 7F235824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235828:
    ctx->pc = 0x7F235828u;
    // 7F235828: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F23582C:
    ctx->pc = 0x7F23582Cu;
    // 7F23582C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235830:
    ctx->pc = 0x7F235830u;
    ctx->downcount -= 1;
    // 7F235830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235834:
    ctx->pc = 0x7F235834u;
    ctx->downcount -= 4;
    // 7F235834: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F235838:
    ctx->pc = 0x7F235838u;
    // 7F235838: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F23583C:
    ctx->pc = 0x7F23583Cu;
    // 7F23583C: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F235840:
    ctx->pc = 0x7F235840u;
    // 7F235840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235844:
    ctx->pc = 0x7F235844u;
    ctx->downcount -= 3;
    // 7F235844: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F235848:
    ctx->pc = 0x7F235848u;
    // 7F235848: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F23584C:
    ctx->pc = 0x7F23584Cu;
    // 7F23584C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235850:
    ctx->pc = 0x7F235850u;
    ctx->downcount -= 5;
    // 7F235850: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_7F235854:
    ctx->pc = 0x7F235854u;
    // 7F235854: stfs     f1, -32768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235854u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235858:
    ctx->pc = 0x7F235858u;
    // 7F235858: stfs     f2, -32768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235858u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F23585C:
    ctx->pc = 0x7F23585Cu;
    // 7F23585C: stfs     f3, -32768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F23585Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F235860:
    ctx->pc = 0x7F235860u;
    // 7F235860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235864:
    ctx->pc = 0x7F235864u;
    ctx->downcount -= 5;
    // 7F235864: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235868:
    ctx->pc = 0x7F235868u;
    // 7F235868: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23586C:
    ctx->pc = 0x7F23586Cu;
    // 7F23586C: cmplwi  r3, 0x0000
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

label_7F235870:
    ctx->pc = 0x7F235870u;
    // 7F235870: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235874:
    ctx->pc = 0x7F235874u;
    // 7F235874: bc    12, 2, 0x7F235884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235884;
        }
    }

label_7F235878:
    ctx->pc = 0x7F235878u;
    ctx->downcount -= 3;
    // 7F235878: addis   r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(4) << 16);

label_7F23587C:
    ctx->pc = 0x7F23587Cu;
    // 7F23587C: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F235880:
    ctx->pc = 0x7F235880u;
    // 7F235880: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F235884u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F235884:
    ctx->pc = 0x7F235884u;
    ctx->downcount -= 5;
    // 7F235884: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235888:
    ctx->pc = 0x7F235888u;
    // 7F235888: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23588C:
    ctx->pc = 0x7F23588Cu;
    // 7F23588C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235890:
    ctx->pc = 0x7F235890u;
    // 7F235890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235894:
    ctx->pc = 0x7F235894u;
    ctx->downcount -= 5;
    // 7F235894: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235898:
    ctx->pc = 0x7F235898u;
    // 7F235898: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23589C:
    ctx->pc = 0x7F23589Cu;
    // 7F23589C: cmplwi  r3, 0x0000
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

label_7F2358A0:
    ctx->pc = 0x7F2358A0u;
    // 7F2358A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2358A4:
    ctx->pc = 0x7F2358A4u;
    // 7F2358A4: bc    12, 2, 0x7F2358B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2358B4;
        }
    }

label_7F2358A8:
    ctx->pc = 0x7F2358A8u;
    ctx->downcount -= 3;
    // 7F2358A8: addis   r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(4) << 16);

label_7F2358AC:
    ctx->pc = 0x7F2358ACu;
    // 7F2358AC: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2358B0:
    ctx->pc = 0x7F2358B0u;
    // 7F2358B0: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F2358B4u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F2358B4:
    ctx->pc = 0x7F2358B4u;
    ctx->downcount -= 5;
    // 7F2358B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2358B8:
    ctx->pc = 0x7F2358B8u;
    // 7F2358B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2358BC:
    ctx->pc = 0x7F2358BCu;
    // 7F2358BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2358C0:
    ctx->pc = 0x7F2358C0u;
    // 7F2358C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2358C4:
    ctx->pc = 0x7F2358C4u;
    ctx->downcount -= 6;
    // 7F2358C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2358C8:
    ctx->pc = 0x7F2358C8u;
    // 7F2358C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2358CC:
    ctx->pc = 0x7F2358CCu;
    // 7F2358CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2358D0:
    ctx->pc = 0x7F2358D0u;
    // 7F2358D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2358D4:
    ctx->pc = 0x7F2358D4u;
    // 7F2358D4: or.   r31, r3, r3
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

label_7F2358D8:
    ctx->pc = 0x7F2358D8u;
    // 7F2358D8: bc    12, 2, 0x7F2359E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2359E4;
        }
    }

label_7F2358DC:
    ctx->pc = 0x7F2358DCu;
    ctx->downcount -= 3;
    // 7F2358DC: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F2358E0:
    ctx->pc = 0x7F2358E0u;
    // 7F2358E0: lfs     f1, -23888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2358E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2358E4:
    ctx->pc = 0x7F2358E4u;
    // 7F2358E4: bl      0x7F234A64
    {
            ctx->lr = 0x7F2358E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234A64u;
                return;
            }
            goto label_7F234A64;
    }

label_7F2358E8:
    ctx->pc = 0x7F2358E8u;
    ctx->downcount -= 2;
    // 7F2358E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2358EC:
    ctx->pc = 0x7F2358ECu;
    // 7F2358EC: bl      0x7F234CA8
    {
            ctx->lr = 0x7F2358F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234CA8u;
                return;
            }
            goto label_7F234CA8;
    }

label_7F2358F0:
    ctx->pc = 0x7F2358F0u;
    ctx->downcount -= 2;
    // 7F2358F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2358F4:
    ctx->pc = 0x7F2358F4u;
    // 7F2358F4: bl      0x7F2349F8
    {
            ctx->lr = 0x7F2358F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2349F8u;
                return;
            }
            goto label_7F2349F8;
    }

label_7F2358F8:
    ctx->pc = 0x7F2358F8u;
    ctx->downcount -= 10;
    // 7F2358F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2358FC:
    ctx->pc = 0x7F2358FCu;
    // 7F2358FC: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235900:
    ctx->pc = 0x7F235900u;
    // 7F235900: addi    r5, r3, 18948
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18948);

label_7F235904:
    ctx->pc = 0x7F235904u;
    // 7F235904: lfs     f2, -23884(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235904u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23884);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235908:
    ctx->pc = 0x7F235908u;
    // 7F235908: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235908u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F23590C:
    ctx->pc = 0x7F23590Cu;
    // 7F23590C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235910:
    ctx->pc = 0x7F235910u;
    // 7F235910: lfs     f0, 18984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235910u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235914:
    ctx->pc = 0x7F235914u;
    // 7F235914: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F235914u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F235918:
    ctx->pc = 0x7F235918u;
    // 7F235918: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235918u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F23591C:
    ctx->pc = 0x7F23591Cu;
    // 7F23591C: bl      0x7F008330
    {
            ctx->lr = 0x7F235920u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F235920:
    ctx->pc = 0x7F235920u;
    ctx->downcount -= 20;
    // 7F235920: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235924:
    ctx->pc = 0x7F235924u;
    // 7F235924: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235928:
    ctx->pc = 0x7F235928u;
    // 7F235928: addi    r5, r3, 18980
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18980);

label_7F23592C:
    ctx->pc = 0x7F23592Cu;
    // 7F23592C: lfs     f0, 18936(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23592Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235930:
    ctx->pc = 0x7F235930u;
    // 7F235930: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235930u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235934:
    ctx->pc = 0x7F235934u;
    // 7F235934: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235938:
    ctx->pc = 0x7F235938u;
    // 7F235938: addi    r5, r3, 19072
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19072);

label_7F23593C:
    ctx->pc = 0x7F23593Cu;
    // 7F23593C: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235940:
    ctx->pc = 0x7F235940u;
    // 7F235940: fmadds f3, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235940u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_7F235944:
    ctx->pc = 0x7F235944u;
    // 7F235944: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235944u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235948:
    ctx->pc = 0x7F235948u;
    // 7F235948: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23594C:
    ctx->pc = 0x7F23594Cu;
    // 7F23594C: lfs     f1, -23888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23594Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235950:
    ctx->pc = 0x7F235950u;
    // 7F235950: lfs     f0, 18976(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235950u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235954:
    ctx->pc = 0x7F235954u;
    // 7F235954: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F235954u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_7F235958:
    ctx->pc = 0x7F235958u;
    // 7F235958: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F235958u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F23595C:
    ctx->pc = 0x7F23595Cu;
    // 7F23595C: stfs     f1, -23888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23595Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235960:
    ctx->pc = 0x7F235960u;
    // 7F235960: lfs     f1, -23884(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235960u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23884);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235964:
    ctx->pc = 0x7F235964u;
    // 7F235964: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F235964u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F235968:
    ctx->pc = 0x7F235968u;
    // 7F235968: stfs     f0, -23884(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235968u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23884);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23596C:
    ctx->pc = 0x7F23596Cu;
    // 7F23596C: bl      0x7F2EA87C
    {
            ctx->lr = 0x7F235970u;
            ctx->pc = 0x7F2EA87Cu;
            return;
    }

label_7F235970:
    ctx->pc = 0x7F235970u;
    ctx->downcount -= 1;
    // 7F235970: bl      0x7F2EA990
    {
            ctx->lr = 0x7F235974u;
            ctx->pc = 0x7F2EA990u;
            return;
    }

label_7F235974:
    ctx->pc = 0x7F235974u;
    ctx->downcount -= 4;
    // 7F235974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235978:
    ctx->pc = 0x7F235978u;
    // 7F235978: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F23597C:
    ctx->pc = 0x7F23597Cu;
    // 7F23597C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F235980:
    ctx->pc = 0x7F235980u;
    // 7F235980: bl      0x80045B94
    {
            ctx->lr = 0x7F235984u;
            ctx->pc = 0x80045B94u;
            return;
    }

label_7F235984:
    ctx->pc = 0x7F235984u;
    ctx->downcount -= 6;
    // 7F235984: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F235988:
    ctx->pc = 0x7F235988u;
    // 7F235988: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F23598C:
    ctx->pc = 0x7F23598Cu;
    // 7F23598C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F235990:
    ctx->pc = 0x7F235990u;
    // 7F235990: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F235994:
    ctx->pc = 0x7F235994u;
    // 7F235994: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F235998:
    ctx->pc = 0x7F235998u;
    // 7F235998: bl      0x80045BDC
    {
            ctx->lr = 0x7F23599Cu;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_7F23599C:
    ctx->pc = 0x7F23599Cu;
    ctx->downcount -= 3;
    // 7F23599C: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_7F2359A0:
    ctx->pc = 0x7F2359A0u;
    // 7F2359A0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F2359A4:
    ctx->pc = 0x7F2359A4u;
    // 7F2359A4: bl      0x80042FA4
    {
            ctx->lr = 0x7F2359A8u;
            ctx->pc = 0x80042FA4u;
            return;
    }

label_7F2359A8:
    ctx->pc = 0x7F2359A8u;
    ctx->downcount -= 2;
    // 7F2359A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2359AC:
    ctx->pc = 0x7F2359ACu;
    // 7F2359AC: bl      0x7F235778
    {
            ctx->lr = 0x7F2359B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235778u;
                return;
            }
            goto label_7F235778;
    }

label_7F2359B0:
    ctx->pc = 0x7F2359B0u;
    ctx->downcount -= 4;
    // 7F2359B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2359B4:
    ctx->pc = 0x7F2359B4u;
    // 7F2359B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2359B8:
    ctx->pc = 0x7F2359B8u;
    // 7F2359B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2359BC:
    ctx->pc = 0x7F2359BCu;
    // 7F2359BC: bl      0x80045B94
    {
            ctx->lr = 0x7F2359C0u;
            ctx->pc = 0x80045B94u;
            return;
    }

label_7F2359C0:
    ctx->pc = 0x7F2359C0u;
    ctx->downcount -= 6;
    // 7F2359C0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F2359C4:
    ctx->pc = 0x7F2359C4u;
    // 7F2359C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2359C8:
    ctx->pc = 0x7F2359C8u;
    // 7F2359C8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2359CC:
    ctx->pc = 0x7F2359CCu;
    // 7F2359CC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2359D0:
    ctx->pc = 0x7F2359D0u;
    // 7F2359D0: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F2359D4:
    ctx->pc = 0x7F2359D4u;
    // 7F2359D4: bl      0x80045BDC
    {
            ctx->lr = 0x7F2359D8u;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_7F2359D8:
    ctx->pc = 0x7F2359D8u;
    ctx->downcount -= 3;
    // 7F2359D8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F2359DC:
    ctx->pc = 0x7F2359DCu;
    // 7F2359DC: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F2359E0:
    ctx->pc = 0x7F2359E0u;
    // 7F2359E0: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F2359E4u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F2359E4:
    ctx->pc = 0x7F2359E4u;
    ctx->downcount -= 6;
    // 7F2359E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2359E8:
    ctx->pc = 0x7F2359E8u;
    // 7F2359E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2359EC:
    ctx->pc = 0x7F2359ECu;
    // 7F2359EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2359F0:
    ctx->pc = 0x7F2359F0u;
    // 7F2359F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2359F4:
    ctx->pc = 0x7F2359F4u;
    // 7F2359F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2359F8:
    ctx->pc = 0x7F2359F8u;
    ctx->downcount -= 22;
    // 7F2359F8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2359FC:
    ctx->pc = 0x7F2359FCu;
    // 7F2359FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235A00:
    ctx->pc = 0x7F235A00u;
    // 7F235A00: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235A04:
    ctx->pc = 0x7F235A04u;
    // 7F235A04: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235A04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F235A08:
    ctx->pc = 0x7F235A08u;
    // 7F235A08: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235A08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F235A08u);
        if (ctx->exception) return;
    }

label_7F235A0C:
    ctx->pc = 0x7F235A0Cu;
    // 7F235A0C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F235A10:
    ctx->pc = 0x7F235A10u;
    // 7F235A10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235A14:
    ctx->pc = 0x7F235A14u;
    // 7F235A14: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F235A18:
    ctx->pc = 0x7F235A18u;
    // 7F235A18: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235A1C:
    ctx->pc = 0x7F235A1Cu;
    // 7F235A1C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F235A20:
    ctx->pc = 0x7F235A20u;
    // 7F235A20: addi    r3, r3, -23860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23860);

label_7F235A24:
    ctx->pc = 0x7F235A24u;
    // 7F235A24: bl      0x7F2EA328
    {
            ctx->lr = 0x7F235A28u;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F235A28:
    ctx->pc = 0x7F235A28u;
    ctx->downcount -= 2;
    // 7F235A28: cmpwi   r28, 0
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

label_7F235A2C:
    ctx->pc = 0x7F235A2Cu;
    // 7F235A2C: bc    12, 2, 0x7F235A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235A34;
        }
    }

label_7F235A30:
    ctx->pc = 0x7F235A30u;
    ctx->downcount -= 1;
    // 7F235A30: b       0x7F235AC8
    {
            goto label_7F235AC8;
    }

label_7F235A34:
    ctx->pc = 0x7F235A34u;
    ctx->downcount -= 4;
    // 7F235A34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F235A38:
    ctx->pc = 0x7F235A38u;
    // 7F235A38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F235A3C:
    ctx->pc = 0x7F235A3Cu;
    // 7F235A3C: li      r5, 254
    ctx->gpr[5] = (u32)(s32)(254);

label_7F235A40:
    ctx->pc = 0x7F235A40u;
    // 7F235A40: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F235A44u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F235A44:
    ctx->pc = 0x7F235A44u;
    ctx->downcount -= 3;
    // 7F235A44: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235A48:
    ctx->pc = 0x7F235A48u;
    // 7F235A48: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235A4C:
    ctx->pc = 0x7F235A4Cu;
    // 7F235A4C: bl      0x7F3BA260
    {
            ctx->lr = 0x7F235A50u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F235A50:
    ctx->pc = 0x7F235A50u;
    ctx->downcount -= 5;
    // 7F235A50: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235A54:
    ctx->pc = 0x7F235A54u;
    // 7F235A54: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235A58:
    ctx->pc = 0x7F235A58u;
    // 7F235A58: addi    r4, r4, 22676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22676);

label_7F235A5C:
    ctx->pc = 0x7F235A5Cu;
    // 7F235A5C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235A60:
    ctx->pc = 0x7F235A60u;
    // 7F235A60: bl      0x7F3BA254
    {
            ctx->lr = 0x7F235A64u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F235A64:
    ctx->pc = 0x7F235A64u;
    ctx->downcount -= 3;
    // 7F235A64: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235A68:
    ctx->pc = 0x7F235A68u;
    // 7F235A68: cmplwi  r0, 0x0000
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

label_7F235A6C:
    ctx->pc = 0x7F235A6Cu;
    // 7F235A6C: bc    4, 2, 0x7F235A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235A78;
        }
    }

label_7F235A70:
    ctx->pc = 0x7F235A70u;
    ctx->downcount -= 2;
    // 7F235A70: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F235A74:
    ctx->pc = 0x7F235A74u;
    // 7F235A74: b       0x7F235D38
    {
            goto label_7F235D38;
    }

label_7F235A78:
    ctx->pc = 0x7F235A78u;
    ctx->downcount -= 3;
    // 7F235A78: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_7F235A7C:
    ctx->pc = 0x7F235A7Cu;
    // 7F235A7C: addi    r3, r3, -244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-244);

label_7F235A80:
    ctx->pc = 0x7F235A80u;
    // 7F235A80: bl      0x7F011604
    {
            ctx->lr = 0x7F235A84u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F235A84:
    ctx->pc = 0x7F235A84u;
    ctx->downcount -= 1;
    // 7F235A84: bl      0x7F017EF0
    {
            ctx->lr = 0x7F235A88u;
            ctx->pc = 0x7F017EF0u;
            return;
    }

label_7F235A88:
    ctx->pc = 0x7F235A88u;
    ctx->downcount -= 3;
    // 7F235A88: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_7F235A8C:
    ctx->pc = 0x7F235A8Cu;
    // 7F235A8C: addi    r3, r3, 254
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(254);

label_7F235A90:
    ctx->pc = 0x7F235A90u;
    // 7F235A90: bl      0x7F011604
    {
            ctx->lr = 0x7F235A94u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F235A94:
    ctx->pc = 0x7F235A94u;
    ctx->downcount -= 8;
    // 7F235A94: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F235A98:
    ctx->pc = 0x7F235A98u;
    // 7F235A98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F235A9C:
    ctx->pc = 0x7F235A9Cu;
    // 7F235A9C: stw     r5, -10340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10340);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235AA0:
    ctx->pc = 0x7F235AA0u;
    // 7F235AA0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F235AA4:
    ctx->pc = 0x7F235AA4u;
    // 7F235AA4: stw     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235AA8:
    ctx->pc = 0x7F235AA8u;
    // 7F235AA8: lwz     r0, 19612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235AAC:
    ctx->pc = 0x7F235AACu;
    // 7F235AAC: cmpwi   r0, 0
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

label_7F235AB0:
    ctx->pc = 0x7F235AB0u;
    // 7F235AB0: bc    12, 0, 0x7F235AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235AC0;
        }
    }

label_7F235AB4:
    ctx->pc = 0x7F235AB4u;
    ctx->downcount -= 3;
    // 7F235AB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F235AB8:
    ctx->pc = 0x7F235AB8u;
    // 7F235AB8: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235ABC:
    ctx->pc = 0x7F235ABCu;
    // 7F235ABC: b       0x7F235D34
    {
            goto label_7F235D34;
    }

label_7F235AC0:
    ctx->pc = 0x7F235AC0u;
    ctx->downcount -= 2;
    // 7F235AC0: stw     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235AC4:
    ctx->pc = 0x7F235AC4u;
    // 7F235AC4: b       0x7F235D34
    {
            goto label_7F235D34;
    }

label_7F235AC8:
    ctx->pc = 0x7F235AC8u;
    ctx->downcount -= 4;
    // 7F235AC8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F235ACC:
    ctx->pc = 0x7F235ACCu;
    // 7F235ACC: lwz     r0, -10344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235AD0:
    ctx->pc = 0x7F235AD0u;
    // 7F235AD0: cmpwi   r0, 2
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

label_7F235AD4:
    ctx->pc = 0x7F235AD4u;
    // 7F235AD4: bc    12, 2, 0x7F235AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235AE8;
        }
    }

label_7F235AD8:
    ctx->pc = 0x7F235AD8u;
    ctx->downcount -= 1;
    // 7F235AD8: bc    4, 0, 0x7F235CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235CDC;
        }
    }

label_7F235ADC:
    ctx->pc = 0x7F235ADCu;
    ctx->downcount -= 2;
    // 7F235ADC: cmpwi   r0, 0
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

label_7F235AE0:
    ctx->pc = 0x7F235AE0u;
    // 7F235AE0: bc    4, 0, 0x7F235B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235B3C;
        }
    }

label_7F235AE4:
    ctx->pc = 0x7F235AE4u;
    ctx->downcount -= 1;
    // 7F235AE4: b       0x7F235CDC
    {
            goto label_7F235CDC;
    }

label_7F235AE8:
    ctx->pc = 0x7F235AE8u;
    ctx->downcount -= 8;
    // 7F235AE8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235AEC:
    ctx->pc = 0x7F235AECu;
    // 7F235AEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F235AF0:
    ctx->pc = 0x7F235AF0u;
    // 7F235AF0: addi    r5, r4, 18928
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18928);

label_7F235AF4:
    ctx->pc = 0x7F235AF4u;
    // 7F235AF4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F235AF8:
    ctx->pc = 0x7F235AF8u;
    // 7F235AF8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235AF8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235AFC:
    ctx->pc = 0x7F235AFCu;
    // 7F235AFC: li      r5, 254
    ctx->gpr[5] = (u32)(s32)(254);

label_7F235B00:
    ctx->pc = 0x7F235B00u;
    // 7F235B00: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F235B00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235B04:
    ctx->pc = 0x7F235B04u;
    // 7F235B04: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F235B08u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F235B08:
    ctx->pc = 0x7F235B08u;
    ctx->downcount -= 3;
    // 7F235B08: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235B0C:
    ctx->pc = 0x7F235B0Cu;
    // 7F235B0C: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235B10:
    ctx->pc = 0x7F235B10u;
    // 7F235B10: bl      0x7F3BA260
    {
            ctx->lr = 0x7F235B14u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F235B14:
    ctx->pc = 0x7F235B14u;
    ctx->downcount -= 5;
    // 7F235B14: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235B18:
    ctx->pc = 0x7F235B18u;
    // 7F235B18: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235B1C:
    ctx->pc = 0x7F235B1Cu;
    // 7F235B1C: addi    r4, r4, 22676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22676);

label_7F235B20:
    ctx->pc = 0x7F235B20u;
    // 7F235B20: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235B24:
    ctx->pc = 0x7F235B24u;
    // 7F235B24: bl      0x7F3BA254
    {
            ctx->lr = 0x7F235B28u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F235B28:
    ctx->pc = 0x7F235B28u;
    ctx->downcount -= 3;
    // 7F235B28: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235B2C:
    ctx->pc = 0x7F235B2Cu;
    // 7F235B2C: cmplwi  r0, 0x0000
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

label_7F235B30:
    ctx->pc = 0x7F235B30u;
    // 7F235B30: bc    4, 2, 0x7F235CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235CDC;
        }
    }

label_7F235B34:
    ctx->pc = 0x7F235B34u;
    ctx->downcount -= 2;
    // 7F235B34: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F235B38:
    ctx->pc = 0x7F235B38u;
    // 7F235B38: b       0x7F235D38
    {
            goto label_7F235D38;
    }

label_7F235B3C:
    ctx->pc = 0x7F235B3Cu;
    ctx->downcount -= 4;
    // 7F235B3C: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235B40:
    ctx->pc = 0x7F235B40u;
    // 7F235B40: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F235B44:
    ctx->pc = 0x7F235B44u;
    // 7F235B44: addi    r3, r3, -23832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23832);

label_7F235B48:
    ctx->pc = 0x7F235B48u;
    // 7F235B48: bl      0x7F2EA328
    {
            ctx->lr = 0x7F235B4Cu;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F235B4C:
    ctx->pc = 0x7F235B4Cu;
    ctx->downcount -= 6;
    // 7F235B4C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F235B50:
    ctx->pc = 0x7F235B50u;
    // 7F235B50: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F235B54:
    ctx->pc = 0x7F235B54u;
    // 7F235B54: addi    r5, r4, -32768
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F235B58:
    ctx->pc = 0x7F235B58u;
    // 7F235B58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F235B5C:
    ctx->pc = 0x7F235B5Cu;
    // 7F235B5C: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F235B60:
    ctx->pc = 0x7F235B60u;
    // 7F235B60: bl      0x800050B4
    {
            ctx->lr = 0x7F235B64u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F235B64:
    ctx->pc = 0x7F235B64u;
    ctx->downcount -= 5;
    // 7F235B64: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235B68:
    ctx->pc = 0x7F235B68u;
    // 7F235B68: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F235B6C:
    ctx->pc = 0x7F235B6Cu;
    // 7F235B6C: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F235B70:
    ctx->pc = 0x7F235B70u;
    // 7F235B70: addi    r3, r3, -32688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32688);

label_7F235B74:
    ctx->pc = 0x7F235B74u;
    // 7F235B74: bl      0x800050B4
    {
            ctx->lr = 0x7F235B78u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F235B78:
    ctx->pc = 0x7F235B78u;
    ctx->downcount -= 28;
    // 7F235B78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235B7C:
    ctx->pc = 0x7F235B7Cu;
    // 7F235B7C: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F235B80:
    ctx->pc = 0x7F235B80u;
    // 7F235B80: addi    r4, r3, 18912
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18912);

label_7F235B84:
    ctx->pc = 0x7F235B84u;
    // 7F235B84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235B88:
    ctx->pc = 0x7F235B88u;
    // 7F235B88: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235B88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235B8C:
    ctx->pc = 0x7F235B8Cu;
    // 7F235B8C: addis   r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235B90:
    ctx->pc = 0x7F235B90u;
    // 7F235B90: addi    r4, r3, 19076
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19076);

label_7F235B94:
    ctx->pc = 0x7F235B94u;
    // 7F235B94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235B98:
    ctx->pc = 0x7F235B98u;
    // 7F235B98: stfs     f0, -23888(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F235B98u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235B9C:
    ctx->pc = 0x7F235B9Cu;
    // 7F235B9C: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F235BA0:
    ctx->pc = 0x7F235BA0u;
    // 7F235BA0: addi    r7, r3, 19080
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(19080);

label_7F235BA4:
    ctx->pc = 0x7F235BA4u;
    // 7F235BA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235BA8:
    ctx->pc = 0x7F235BA8u;
    // 7F235BA8: stw     r0, -23892(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235BAC:
    ctx->pc = 0x7F235BACu;
    // 7F235BAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F235BB0:
    ctx->pc = 0x7F235BB0u;
    // 7F235BB0: addi    r6, r3, 19084
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(19084);

label_7F235BB4:
    ctx->pc = 0x7F235BB4u;
    // 7F235BB4: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F235BB8:
    ctx->pc = 0x7F235BB8u;
    // 7F235BB8: stw     r5, -23896(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23896);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235BBC:
    ctx->pc = 0x7F235BBCu;
    // 7F235BBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F235BC0:
    ctx->pc = 0x7F235BC0u;
    // 7F235BC0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F235BC0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235BC4:
    ctx->pc = 0x7F235BC4u;
    // 7F235BC4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F235BC8:
    ctx->pc = 0x7F235BC8u;
    // 7F235BC8: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235BCC:
    ctx->pc = 0x7F235BCCu;
    // 7F235BCC: li      r5, 145
    ctx->gpr[5] = (u32)(s32)(145);

label_7F235BD0:
    ctx->pc = 0x7F235BD0u;
    // 7F235BD0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F235BD0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235BD4:
    ctx->pc = 0x7F235BD4u;
    // 7F235BD4: stfs     f0, -23872(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F235BD4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235BD8:
    ctx->pc = 0x7F235BD8u;
    // 7F235BD8: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F235BD8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235BDC:
    ctx->pc = 0x7F235BDCu;
    // 7F235BDC: stfs     f1, -23868(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F235BDCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23868);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235BE0:
    ctx->pc = 0x7F235BE0u;
    // 7F235BE0: stfs     f0, -23864(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F235BE0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-23864);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235BE4:
    ctx->pc = 0x7F235BE4u;
    // 7F235BE4: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F235BE8u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F235BE8:
    ctx->pc = 0x7F235BE8u;
    ctx->downcount -= 4;
    // 7F235BE8: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235BEC:
    ctx->pc = 0x7F235BECu;
    // 7F235BEC: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235BF0:
    ctx->pc = 0x7F235BF0u;
    // 7F235BF0: cmplwi  r3, 0x0000
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

label_7F235BF4:
    ctx->pc = 0x7F235BF4u;
    // 7F235BF4: bc    4, 2, 0x7F235C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235C00;
        }
    }

label_7F235BF8:
    ctx->pc = 0x7F235BF8u;
    ctx->downcount -= 2;
    // 7F235BF8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F235BFC:
    ctx->pc = 0x7F235BFCu;
    // 7F235BFC: b       0x7F235D38
    {
            goto label_7F235D38;
    }

label_7F235C00:
    ctx->pc = 0x7F235C00u;
    ctx->downcount -= 1;
    // 7F235C00: bl      0x7F3BA260
    {
            ctx->lr = 0x7F235C04u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F235C04:
    ctx->pc = 0x7F235C04u;
    ctx->downcount -= 5;
    // 7F235C04: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235C08:
    ctx->pc = 0x7F235C08u;
    // 7F235C08: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235C0C:
    ctx->pc = 0x7F235C0Cu;
    // 7F235C0C: addi    r4, r4, 22724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22724);

label_7F235C10:
    ctx->pc = 0x7F235C10u;
    // 7F235C10: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235C14:
    ctx->pc = 0x7F235C14u;
    // 7F235C14: bl      0x7F3BA254
    {
            ctx->lr = 0x7F235C18u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F235C18:
    ctx->pc = 0x7F235C18u;
    ctx->downcount -= 4;
    // 7F235C18: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F235C1C:
    ctx->pc = 0x7F235C1Cu;
    // 7F235C1C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F235C20:
    ctx->pc = 0x7F235C20u;
    // 7F235C20: li      r5, 254
    ctx->gpr[5] = (u32)(s32)(254);

label_7F235C24:
    ctx->pc = 0x7F235C24u;
    // 7F235C24: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F235C28u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F235C28:
    ctx->pc = 0x7F235C28u;
    ctx->downcount -= 4;
    // 7F235C28: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235C2C:
    ctx->pc = 0x7F235C2Cu;
    // 7F235C2C: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235C30:
    ctx->pc = 0x7F235C30u;
    // 7F235C30: cmplwi  r3, 0x0000
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

label_7F235C34:
    ctx->pc = 0x7F235C34u;
    // 7F235C34: bc    4, 2, 0x7F235C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235C40;
        }
    }

label_7F235C38:
    ctx->pc = 0x7F235C38u;
    ctx->downcount -= 2;
    // 7F235C38: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F235C3C:
    ctx->pc = 0x7F235C3Cu;
    // 7F235C3C: b       0x7F235D38
    {
            goto label_7F235D38;
    }

label_7F235C40:
    ctx->pc = 0x7F235C40u;
    ctx->downcount -= 1;
    // 7F235C40: bl      0x7F3BA260
    {
            ctx->lr = 0x7F235C44u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F235C44:
    ctx->pc = 0x7F235C44u;
    ctx->downcount -= 5;
    // 7F235C44: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235C48:
    ctx->pc = 0x7F235C48u;
    // 7F235C48: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235C4C:
    ctx->pc = 0x7F235C4Cu;
    // 7F235C4C: addi    r4, r4, 22628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22628);

label_7F235C50:
    ctx->pc = 0x7F235C50u;
    // 7F235C50: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235C54:
    ctx->pc = 0x7F235C54u;
    // 7F235C54: bl      0x7F3BA254
    {
            ctx->lr = 0x7F235C58u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F235C58:
    ctx->pc = 0x7F235C58u;
    ctx->downcount -= 4;
    // 7F235C58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F235C5C:
    ctx->pc = 0x7F235C5Cu;
    // 7F235C5C: lwz     r0, -10344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235C60:
    ctx->pc = 0x7F235C60u;
    // 7F235C60: cmpwi   r0, 0
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

label_7F235C64:
    ctx->pc = 0x7F235C64u;
    // 7F235C64: bc    4, 2, 0x7F235C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235C74;
        }
    }

label_7F235C68:
    ctx->pc = 0x7F235C68u;
    ctx->downcount -= 3;
    // 7F235C68: lis     r3, 169
    ctx->gpr[3] = ((u32)(s32)(169) << 16);

label_7F235C6C:
    ctx->pc = 0x7F235C6Cu;
    // 7F235C6C: addi    r3, r3, 25880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25880);

label_7F235C70:
    ctx->pc = 0x7F235C70u;
    // 7F235C70: b       0x7F235C84
    {
            goto label_7F235C84;
    }

label_7F235C74:
    ctx->pc = 0x7F235C74u;
    ctx->downcount -= 4;
    // 7F235C74: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F235C78:
    ctx->pc = 0x7F235C78u;
    // 7F235C78: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F235C7C:
    ctx->pc = 0x7F235C7Cu;
    // 7F235C7C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235C80:
    ctx->pc = 0x7F235C80u;
    // 7F235C80: addi    r3, r3, 14213
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14213);

label_7F235C84:
    ctx->pc = 0x7F235C84u;
    ctx->downcount -= 4;
    // 7F235C84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F235C88:
    ctx->pc = 0x7F235C88u;
    // 7F235C88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F235C8C:
    ctx->pc = 0x7F235C8Cu;
    // 7F235C8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F235C90:
    ctx->pc = 0x7F235C90u;
    // 7F235C90: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F235C94u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F235C94:
    ctx->pc = 0x7F235C94u;
    ctx->downcount -= 10;
    // 7F235C94: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F235C98:
    ctx->pc = 0x7F235C98u;
    // 7F235C98: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235C9C:
    ctx->pc = 0x7F235C9Cu;
    // 7F235C9C: addi    r5, r4, 18928
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18928);

label_7F235CA0:
    ctx->pc = 0x7F235CA0u;
    // 7F235CA0: lis     r4, 197
    ctx->gpr[4] = ((u32)(s32)(197) << 16);

label_7F235CA4:
    ctx->pc = 0x7F235CA4u;
    // 7F235CA4: stw     r3, -23880(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23880);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235CA8:
    ctx->pc = 0x7F235CA8u;
    // 7F235CA8: addi    r4, r4, -9821
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9821);

label_7F235CAC:
    ctx->pc = 0x7F235CACu;
    // 7F235CAC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F235CACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235CB0:
    ctx->pc = 0x7F235CB0u;
    // 7F235CB0: stfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F235CB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235CB4:
    ctx->pc = 0x7F235CB4u;
    // 7F235CB4: lwz     r3, -23880(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235CB8:
    ctx->pc = 0x7F235CB8u;
    // 7F235CB8: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F235CBCu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F235CBC:
    ctx->pc = 0x7F235CBCu;
    ctx->downcount -= 5;
    // 7F235CBC: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235CC0:
    ctx->pc = 0x7F235CC0u;
    // 7F235CC0: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F235CC4:
    ctx->pc = 0x7F235CC4u;
    // 7F235CC4: lwz     r3, -23880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235CC8:
    ctx->pc = 0x7F235CC8u;
    // 7F235CC8: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F235CCC:
    ctx->pc = 0x7F235CCCu;
    // 7F235CCC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F235CD0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F235CD0:
    ctx->pc = 0x7F235CD0u;
    ctx->downcount -= 3;
    // 7F235CD0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235CD4:
    ctx->pc = 0x7F235CD4u;
    // 7F235CD4: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F235CD8:
    ctx->pc = 0x7F235CD8u;
    // 7F235CD8: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235CDC:
    ctx->pc = 0x7F235CDCu;
    ctx->downcount -= 5;
    // 7F235CDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235CE0:
    ctx->pc = 0x7F235CE0u;
    // 7F235CE0: addis   r30, r31, 4
    ctx->gpr[30] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235CE4:
    ctx->pc = 0x7F235CE4u;
    // 7F235CE4: lfs     f31, 19072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235CE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F235CE8:
    ctx->pc = 0x7F235CE8u;
    // 7F235CE8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F235CEC:
    ctx->pc = 0x7F235CECu;
    // 7F235CEC: li      r29, 31
    ctx->gpr[29] = (u32)(s32)(31);

label_7F235CF0:
    ctx->downcount -= 2;
    // 7F235CF0: cmpwi   r28, 120
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235CF4:
    // 7F235CF4: bc    4, 2, 0x7F235CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235CFC;
        }
    }

label_7F235CF8:
    ctx->pc = 0x7F235CF8u;
    ctx->downcount -= 1;
    // 7F235CF8: stw     r29, -23892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-23892);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F235CFC:
    ctx->pc = 0x7F235CFCu;
    ctx->downcount -= 3;
    // 7F235CFC: lfs     f1, -23888(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F235CFCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-23888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235D00:
    // 7F235D00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235D04:
    // 7F235D04: bl      0x7F234A64
    {
            ctx->lr = 0x7F235D08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234A64u;
                return;
            }
            goto label_7F234A64;
    }

label_7F235D08:
    ctx->downcount -= 2;
    // 7F235D08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235D0C:
    // 7F235D0C: bl      0x7F234CA8
    {
            ctx->lr = 0x7F235D10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F234CA8u;
                return;
            }
            goto label_7F234CA8;
    }

label_7F235D10:
    ctx->pc = 0x7F235D10u;
    ctx->downcount -= 6;
    // 7F235D10: lfs     f0, -23888(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F235D10u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-23888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235D14:
    // 7F235D14: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F235D18:
    // 7F235D18: cmpwi   r28, 180
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(180);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235D1C:
    ctx->pc = 0x7F235D1Cu;
    // 7F235D1C: fadds   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F235D1Cu)) return;
    ppc_fadds(ctx, 0, 0, 31);

label_7F235D20:
    ctx->pc = 0x7F235D20u;
    // 7F235D20: stfs     f0, -23888(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F235D20u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-23888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235D24:
    // 7F235D24: bc    12, 0, 0x7F235CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235CF0u;
                return;
            }
            goto label_7F235CF0;
        }
    }

label_7F235D28:
    ctx->pc = 0x7F235D28u;
    ctx->downcount -= 3;
    // 7F235D28: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F235D2C:
    ctx->pc = 0x7F235D2Cu;
    // 7F235D2C: li      r0, 31
    ctx->gpr[0] = (u32)(s32)(31);

label_7F235D30:
    ctx->pc = 0x7F235D30u;
    // 7F235D30: stw     r0, -23892(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-23892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235D34:
    ctx->pc = 0x7F235D34u;
    ctx->downcount -= 1;
    // 7F235D34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235D38:
    ctx->pc = 0x7F235D38u;
    ctx->downcount -= 18;
    // 7F235D38: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F235D38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F235D38u);
        if (ctx->exception) return;
    }

label_7F235D3C:
    ctx->pc = 0x7F235D3Cu;
    // 7F235D3C: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F235D40:
    ctx->pc = 0x7F235D40u;
    // 7F235D40: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235D44:
    ctx->pc = 0x7F235D44u;
    // 7F235D44: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235D48:
    ctx->pc = 0x7F235D48u;
    // 7F235D48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235D4C:
    ctx->pc = 0x7F235D4Cu;
    // 7F235D4C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F235D50:
    ctx->pc = 0x7F235D50u;
    // 7F235D50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235D54:
    ctx->pc = 0x7F235D54u;
    ctx->downcount -= 21;
    // 7F235D54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235D58:
    ctx->pc = 0x7F235D58u;
    // 7F235D58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235D5C:
    ctx->pc = 0x7F235D5Cu;
    // 7F235D5C: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F235D60:
    ctx->pc = 0x7F235D60u;
    // 7F235D60: li      r6, 254
    ctx->gpr[6] = (u32)(s32)(254);

label_7F235D64:
    ctx->pc = 0x7F235D64u;
    // 7F235D64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235D68:
    ctx->pc = 0x7F235D68u;
    // 7F235D68: addi    r5, r4, -23804
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23804);

label_7F235D6C:
    ctx->pc = 0x7F235D6Cu;
    // 7F235D6C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F235D70:
    ctx->pc = 0x7F235D70u;
    // 7F235D70: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F235D74:
    ctx->pc = 0x7F235D74u;
    // 7F235D74: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235D78:
    ctx->pc = 0x7F235D78u;
    // 7F235D78: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F235D7C:
    ctx->pc = 0x7F235D7Cu;
    // 7F235D7C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F235D80u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F235D80:
    ctx->pc = 0x7F235D80u;
    ctx->downcount -= 2;
    // 7F235D80: or.   r31, r3, r3
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

label_7F235D84:
    ctx->pc = 0x7F235D84u;
    // 7F235D84: bc    12, 2, 0x7F235E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235E08;
        }
    }

label_7F235D88:
    ctx->pc = 0x7F235D88u;
    ctx->downcount -= 2;
    // 7F235D88: cmpwi   r30, 0
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

label_7F235D8C:
    ctx->pc = 0x7F235D8Cu;
    // 7F235D8C: bc    4, 2, 0x7F235DA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235DA8;
        }
    }

label_7F235D90:
    ctx->pc = 0x7F235D90u;
    ctx->downcount -= 5;
    // 7F235D90: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235D94:
    ctx->pc = 0x7F235D94u;
    // 7F235D94: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F235D98:
    ctx->pc = 0x7F235D98u;
    // 7F235D98: addi    r4, r4, 18560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18560);

label_7F235D9C:
    ctx->pc = 0x7F235D9Cu;
    // 7F235D9C: addi    r5, r5, 22052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22052);

label_7F235DA0:
    ctx->pc = 0x7F235DA0u;
    // 7F235DA0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F235DA4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F235DA4:
    ctx->pc = 0x7F235DA4u;
    ctx->downcount -= 1;
    // 7F235DA4: b       0x7F235DBC
    {
            goto label_7F235DBC;
    }

label_7F235DA8:
    ctx->pc = 0x7F235DA8u;
    ctx->downcount -= 5;
    // 7F235DA8: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F235DAC:
    ctx->pc = 0x7F235DACu;
    // 7F235DAC: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F235DB0:
    ctx->pc = 0x7F235DB0u;
    // 7F235DB0: addi    r4, r4, 20896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20896);

label_7F235DB4:
    ctx->pc = 0x7F235DB4u;
    // 7F235DB4: addi    r5, r5, 22204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22204);

label_7F235DB8:
    ctx->pc = 0x7F235DB8u;
    // 7F235DB8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F235DBCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F235DBC:
    ctx->pc = 0x7F235DBCu;
    ctx->downcount -= 13;
    // 7F235DBC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235DC0:
    ctx->pc = 0x7F235DC0u;
    // 7F235DC0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F235DC4:
    ctx->pc = 0x7F235DC4u;
    // 7F235DC4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F235DC8:
    ctx->pc = 0x7F235DC8u;
    // 7F235DC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235DCC:
    ctx->pc = 0x7F235DCCu;
    // 7F235DCC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F235DD0:
    ctx->pc = 0x7F235DD0u;
    // 7F235DD0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F235DD4:
    ctx->pc = 0x7F235DD4u;
    // 7F235DD4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F235DD8:
    ctx->pc = 0x7F235DD8u;
    // 7F235DD8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F235DDC:
    ctx->pc = 0x7F235DDCu;
    // 7F235DDC: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235DE0:
    ctx->pc = 0x7F235DE0u;
    // 7F235DE0: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235DE4:
    ctx->pc = 0x7F235DE4u;
    // 7F235DE4: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F235DE8:
    ctx->pc = 0x7F235DE8u;
    // 7F235DE8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235DEC:
    ctx->pc = 0x7F235DECu;
    // 7F235DEC: bl      0x7F2359F8
    {
            ctx->lr = 0x7F235DF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2359F8u;
                return;
            }
            goto label_7F2359F8;
    }

label_7F235DF0:
    ctx->pc = 0x7F235DF0u;
    ctx->downcount -= 2;
    // 7F235DF0: cmpwi   r3, 0
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

label_7F235DF4:
    ctx->pc = 0x7F235DF4u;
    // 7F235DF4: bc    4, 0, 0x7F235E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235E08;
        }
    }

label_7F235DF8:
    ctx->pc = 0x7F235DF8u;
    ctx->downcount -= 2;
    // 7F235DF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235DFC:
    ctx->pc = 0x7F235DFCu;
    // 7F235DFC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F235E00u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F235E00:
    ctx->pc = 0x7F235E00u;
    ctx->downcount -= 2;
    // 7F235E00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235E04:
    ctx->pc = 0x7F235E04u;
    // 7F235E04: b       0x7F235E0C
    {
            goto label_7F235E0C;
    }

label_7F235E08:
    ctx->pc = 0x7F235E08u;
    ctx->downcount -= 1;
    // 7F235E08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F235E0C:
    ctx->pc = 0x7F235E0Cu;
    ctx->downcount -= 16;
    // 7F235E0C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235E10:
    ctx->pc = 0x7F235E10u;
    // 7F235E10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235E14:
    ctx->pc = 0x7F235E14u;
    // 7F235E14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235E18:
    ctx->pc = 0x7F235E18u;
    // 7F235E18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235E1C:
    ctx->pc = 0x7F235E1Cu;
    // 7F235E1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235E20:
    ctx->pc = 0x7F235E20u;
    ctx->downcount -= 6;
    // 7F235E20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235E24:
    ctx->pc = 0x7F235E24u;
    // 7F235E24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235E28:
    ctx->pc = 0x7F235E28u;
    // 7F235E28: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F235E2C:
    ctx->pc = 0x7F235E2Cu;
    // 7F235E2C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F235E30:
    ctx->pc = 0x7F235E30u;
    // 7F235E30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235E34:
    ctx->pc = 0x7F235E34u;
    // 7F235E34: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F235E38u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F235E38:
    ctx->pc = 0x7F235E38u;
    ctx->downcount -= 8;
    // 7F235E38: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F235E3C:
    ctx->pc = 0x7F235E3Cu;
    // 7F235E3C: stw     r3, 19612(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19612);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235E40:
    ctx->pc = 0x7F235E40u;
    // 7F235E40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235E44:
    ctx->pc = 0x7F235E44u;
    // 7F235E44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235E48:
    ctx->pc = 0x7F235E48u;
    // 7F235E48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235E4C:
    ctx->pc = 0x7F235E4Cu;
    // 7F235E4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235E50:
    ctx->pc = 0x7F235E50u;
    // 7F235E50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235E54:
    ctx->pc = 0x7F235E54u;
    ctx->downcount -= 5;
    // 7F235E54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235E58:
    ctx->pc = 0x7F235E58u;
    // 7F235E58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235E5C:
    ctx->pc = 0x7F235E5Cu;
    // 7F235E5C: cmpwi   r4, 0
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

label_7F235E60:
    ctx->pc = 0x7F235E60u;
    // 7F235E60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235E64:
    ctx->pc = 0x7F235E64u;
    // 7F235E64: bc    12, 2, 0x7F235E6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235E6C;
        }
    }

label_7F235E68:
    ctx->pc = 0x7F235E68u;
    ctx->downcount -= 1;
    // 7F235E68: b       0x7F235ECC
    {
            goto label_7F235ECC;
    }

label_7F235E6C:
    ctx->pc = 0x7F235E6Cu;
    ctx->downcount -= 2;
    // 7F235E6C: cmpwi   r5, 0
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

label_7F235E70:
    ctx->pc = 0x7F235E70u;
    // 7F235E70: bc    4, 2, 0x7F235E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235E8C;
        }
    }

label_7F235E74:
    ctx->pc = 0x7F235E74u;
    ctx->downcount -= 3;
    // 7F235E74: lwz     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235E78:
    ctx->pc = 0x7F235E78u;
    // 7F235E78: cmpwi   r0, 40
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

label_7F235E7C:
    ctx->pc = 0x7F235E7Cu;
    // 7F235E7C: bc    4, 1, 0x7F235ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235ED4;
        }
    }

label_7F235E80:
    ctx->pc = 0x7F235E80u;
    ctx->downcount -= 3;
    // 7F235E80: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F235E84:
    ctx->pc = 0x7F235E84u;
    // 7F235E84: stw     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235E88:
    ctx->pc = 0x7F235E88u;
    // 7F235E88: b       0x7F235ED4
    {
            goto label_7F235ED4;
    }

label_7F235E8C:
    ctx->pc = 0x7F235E8Cu;
    ctx->downcount -= 2;
    // 7F235E8C: cmpwi   r5, 1
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

label_7F235E90:
    ctx->pc = 0x7F235E90u;
    // 7F235E90: bc    4, 2, 0x7F235EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235EAC;
        }
    }

label_7F235E94:
    ctx->pc = 0x7F235E94u;
    ctx->downcount -= 3;
    // 7F235E94: lwz     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235E98:
    ctx->pc = 0x7F235E98u;
    // 7F235E98: cmpwi   r0, 140
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

label_7F235E9C:
    ctx->pc = 0x7F235E9Cu;
    // 7F235E9C: bc    4, 1, 0x7F235ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235ED4;
        }
    }

label_7F235EA0:
    ctx->pc = 0x7F235EA0u;
    ctx->downcount -= 3;
    // 7F235EA0: li      r0, 140
    ctx->gpr[0] = (u32)(s32)(140);

label_7F235EA4:
    ctx->pc = 0x7F235EA4u;
    // 7F235EA4: stw     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235EA8:
    ctx->pc = 0x7F235EA8u;
    // 7F235EA8: b       0x7F235ED4
    {
            goto label_7F235ED4;
    }

label_7F235EAC:
    ctx->pc = 0x7F235EACu;
    ctx->downcount -= 2;
    // 7F235EAC: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235EB0:
    ctx->pc = 0x7F235EB0u;
    // 7F235EB0: bc    4, 2, 0x7F235ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235ED4;
        }
    }

label_7F235EB4:
    ctx->pc = 0x7F235EB4u;
    ctx->downcount -= 3;
    // 7F235EB4: lwz     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235EB8:
    ctx->pc = 0x7F235EB8u;
    // 7F235EB8: cmpwi   r0, 440
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(440);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F235EBC:
    ctx->pc = 0x7F235EBCu;
    // 7F235EBC: bc    4, 1, 0x7F235ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F235ED4;
        }
    }

label_7F235EC0:
    ctx->pc = 0x7F235EC0u;
    ctx->downcount -= 3;
    // 7F235EC0: li      r0, 440
    ctx->gpr[0] = (u32)(s32)(440);

label_7F235EC4:
    ctx->pc = 0x7F235EC4u;
    // 7F235EC4: stw     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235EC8:
    ctx->pc = 0x7F235EC8u;
    // 7F235EC8: b       0x7F235ED4
    {
            goto label_7F235ED4;
    }

label_7F235ECC:
    ctx->pc = 0x7F235ECCu;
    ctx->downcount -= 1;
    // 7F235ECC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F235ED0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F235ED0:
    ctx->pc = 0x7F235ED0u;
    ctx->downcount -= 1;
    // 7F235ED0: b       0x7F235ED8
    {
            goto label_7F235ED8;
    }

label_7F235ED4:
    ctx->pc = 0x7F235ED4u;
    ctx->downcount -= 1;
    // 7F235ED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F235ED8:
    ctx->pc = 0x7F235ED8u;
    ctx->downcount -= 5;
    // 7F235ED8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235EDC:
    ctx->pc = 0x7F235EDCu;
    // 7F235EDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235EE0:
    ctx->pc = 0x7F235EE0u;
    // 7F235EE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235EE4:
    ctx->pc = 0x7F235EE4u;
    // 7F235EE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235EE8:
    ctx->pc = 0x7F235EE8u;
    ctx->downcount -= 18;
    // 7F235EE8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F235EEC:
    ctx->pc = 0x7F235EECu;
    // 7F235EEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F235EF0:
    ctx->pc = 0x7F235EF0u;
    // 7F235EF0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235EF4:
    ctx->pc = 0x7F235EF4u;
    // 7F235EF4: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F235EF8:
    ctx->pc = 0x7F235EF8u;
    // 7F235EF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235EFC:
    ctx->pc = 0x7F235EFCu;
    // 7F235EFC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F235F00:
    ctx->pc = 0x7F235F00u;
    // 7F235F00: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F235F04:
    ctx->pc = 0x7F235F04u;
    // 7F235F04: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F235F08u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F235F08:
    ctx->pc = 0x7F235F08u;
    ctx->downcount -= 2;
    // 7F235F08: cmpwi   r3, 0
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

label_7F235F0C:
    ctx->pc = 0x7F235F0Cu;
    // 7F235F0C: bc    12, 2, 0x7F235F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F235F3C;
        }
    }

label_7F235F10:
    ctx->pc = 0x7F235F10u;
    ctx->downcount -= 11;
    // 7F235F10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235F14:
    ctx->pc = 0x7F235F14u;
    // 7F235F14: lfs     f0, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235F18:
    ctx->pc = 0x7F235F18u;
    // 7F235F18: lfs     f1, 19092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235F18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235F1C:
    ctx->pc = 0x7F235F1Cu;
    // 7F235F1C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F235F1Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F235F20:
    ctx->pc = 0x7F235F20u;
    // 7F235F20: stfs     f0, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235F24:
    ctx->pc = 0x7F235F24u;
    // 7F235F24: lfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F24u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235F28:
    ctx->pc = 0x7F235F28u;
    // 7F235F28: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F235F28u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F235F2C:
    ctx->pc = 0x7F235F2Cu;
    // 7F235F2C: stfs     f0, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F2Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235F30:
    ctx->pc = 0x7F235F30u;
    // 7F235F30: lfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F30u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235F34:
    ctx->pc = 0x7F235F34u;
    // 7F235F34: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F235F34u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F235F38:
    ctx->pc = 0x7F235F38u;
    // 7F235F38: stfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F235F38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235F3C:
    ctx->pc = 0x7F235F3Cu;
    ctx->downcount -= 10;
    // 7F235F3C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F235F40:
    ctx->pc = 0x7F235F40u;
    // 7F235F40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F235F44:
    ctx->pc = 0x7F235F44u;
    // 7F235F44: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235F48:
    ctx->pc = 0x7F235F48u;
    // 7F235F48: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F235F4C:
    ctx->pc = 0x7F235F4Cu;
    // 7F235F4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235F50:
    ctx->pc = 0x7F235F50u;
    // 7F235F50: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F235F54:
    ctx->pc = 0x7F235F54u;
    // 7F235F54: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235F58:
    ctx->pc = 0x7F235F58u;
    // 7F235F58: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F235F5C:
    ctx->pc = 0x7F235F5Cu;
    // 7F235F5C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235F60:
    ctx->pc = 0x7F235F60u;
    // 7F235F60: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F235F64u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F235F64:
    ctx->pc = 0x7F235F64u;
    ctx->downcount -= 4;
    // 7F235F64: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F235F68:
    ctx->pc = 0x7F235F68u;
    // 7F235F68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F235F6C:
    ctx->pc = 0x7F235F6Cu;
    // 7F235F6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235F70:
    ctx->pc = 0x7F235F70u;
    // 7F235F70: bl      0x7F3B3648
    {
            ctx->lr = 0x7F235F74u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F235F74:
    ctx->pc = 0x7F235F74u;
    ctx->downcount -= 11;
    // 7F235F74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F235F78:
    ctx->pc = 0x7F235F78u;
    // 7F235F78: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F235F7C:
    ctx->pc = 0x7F235F7Cu;
    // 7F235F7C: lfs     f1, 19096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F235F7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F235F80:
    ctx->pc = 0x7F235F80u;
    // 7F235F80: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F235F84:
    ctx->pc = 0x7F235F84u;
    // 7F235F84: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235F84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F235F88:
    ctx->pc = 0x7F235F88u;
    // 7F235F88: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F235F8C:
    ctx->pc = 0x7F235F8Cu;
    // 7F235F8C: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F235F90:
    ctx->pc = 0x7F235F90u;
    // 7F235F90: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F235F94:
    ctx->pc = 0x7F235F94u;
    // 7F235F94: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235F94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F235F98:
    ctx->pc = 0x7F235F98u;
    // 7F235F98: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F235F98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F235F9C:
    ctx->pc = 0x7F235F9Cu;
    // 7F235F9C: bl      0x800261B4
    {
            ctx->lr = 0x7F235FA0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F235FA0:
    ctx->pc = 0x7F235FA0u;
    ctx->downcount -= 10;
    // 7F235FA0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F235FA4:
    ctx->pc = 0x7F235FA4u;
    // 7F235FA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F235FA8:
    ctx->pc = 0x7F235FA8u;
    // 7F235FA8: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235FAC:
    ctx->pc = 0x7F235FACu;
    // 7F235FAC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F235FB0:
    ctx->pc = 0x7F235FB0u;
    // 7F235FB0: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F235FB4:
    ctx->pc = 0x7F235FB4u;
    // 7F235FB4: rlwinm r0, r0, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFF80u;
    }

label_7F235FB8:
    ctx->pc = 0x7F235FB8u;
    // 7F235FB8: sth     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F235FBC:
    ctx->pc = 0x7F235FBCu;
    // 7F235FBC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F235FC0:
    ctx->pc = 0x7F235FC0u;
    // 7F235FC0: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F235FC4:
    ctx->pc = 0x7F235FC4u;
    // 7F235FC4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F235FC8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F235FC8:
    ctx->pc = 0x7F235FC8u;
    ctx->downcount -= 24;
    // 7F235FC8: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235FCC:
    ctx->pc = 0x7F235FCCu;
    // 7F235FCC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235FD0:
    ctx->pc = 0x7F235FD0u;
    // 7F235FD0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235FD4:
    ctx->pc = 0x7F235FD4u;
    // 7F235FD4: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235FD8:
    ctx->pc = 0x7F235FD8u;
    // 7F235FD8: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F235FDC:
    ctx->pc = 0x7F235FDCu;
    // 7F235FDC: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235FE0:
    ctx->pc = 0x7F235FE0u;
    // 7F235FE0: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F235FE4:
    ctx->pc = 0x7F235FE4u;
    // 7F235FE4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F235FE8:
    ctx->pc = 0x7F235FE8u;
    // 7F235FE8: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F235FEC:
    ctx->pc = 0x7F235FECu;
    // 7F235FEC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F235FF0:
    ctx->pc = 0x7F235FF0u;
    // 7F235FF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F235FF4:
    ctx->pc = 0x7F235FF4u;
    // 7F235FF4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F235FF8:
    ctx->pc = 0x7F235FF8u;
    // 7F235FF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F235FFC:
    ctx->pc = 0x7F235FFCu;
    ctx->downcount -= 10;
    // 7F235FFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236000:
    ctx->pc = 0x7F236000u;
    // 7F236000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236004:
    ctx->pc = 0x7F236004u;
    // 7F236004: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236008:
    ctx->pc = 0x7F236008u;
    // 7F236008: or   r0, r5, r5
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F23600C:
    ctx->pc = 0x7F23600Cu;
    // 7F23600C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F236010:
    ctx->pc = 0x7F236010u;
    // 7F236010: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236014:
    ctx->pc = 0x7F236014u;
    // 7F236014: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F236018:
    ctx->pc = 0x7F236018u;
    // 7F236018: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F23601C:
    ctx->pc = 0x7F23601Cu;
    // 7F23601C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236020:
    ctx->pc = 0x7F236020u;
    // 7F236020: bl      0x800261D8
    {
            ctx->lr = 0x7F236024u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F236024:
    ctx->pc = 0x7F236024u;
    ctx->downcount -= 7;
    // 7F236024: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236028:
    ctx->pc = 0x7F236028u;
    // 7F236028: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F23602C:
    ctx->pc = 0x7F23602Cu;
    // 7F23602C: addi    r5, r4, 19088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19088);

label_7F236030:
    ctx->pc = 0x7F236030u;
    // 7F236030: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236034:
    ctx->pc = 0x7F236034u;
    // 7F236034: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236034u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236038:
    ctx->pc = 0x7F236038u;
    // 7F236038: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236038u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23603C:
    ctx->pc = 0x7F23603Cu;
    // 7F23603C: bl      0x7F114F50
    {
            ctx->lr = 0x7F236040u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F236040:
    ctx->pc = 0x7F236040u;
    ctx->downcount -= 17;
    // 7F236040: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236044:
    ctx->pc = 0x7F236044u;
    // 7F236044: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236048:
    ctx->pc = 0x7F236048u;
    // 7F236048: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236048u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F23604C:
    ctx->pc = 0x7F23604Cu;
    // 7F23604C: lfs     f2, 19100(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23604Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236050:
    ctx->pc = 0x7F236050u;
    // 7F236050: lfs     f0, 19104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236050u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236054:
    ctx->pc = 0x7F236054u;
    // 7F236054: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F236054u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F236058:
    ctx->pc = 0x7F236058u;
    // 7F236058: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236058u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F23605C:
    ctx->pc = 0x7F23605Cu;
    // 7F23605C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F23605Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236060:
    ctx->pc = 0x7F236060u;
    // 7F236060: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236060u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236064:
    ctx->pc = 0x7F236064u;
    // 7F236064: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236064u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F236068:
    ctx->pc = 0x7F236068u;
    // 7F236068: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236068u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23606C:
    ctx->pc = 0x7F23606Cu;
    // 7F23606C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236070:
    ctx->pc = 0x7F236070u;
    // 7F236070: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236074:
    ctx->pc = 0x7F236074u;
    // 7F236074: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236078:
    ctx->pc = 0x7F236078u;
    // 7F236078: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F23607C:
    ctx->pc = 0x7F23607Cu;
    // 7F23607C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236080:
    ctx->pc = 0x7F236080u;
    ctx->downcount -= 26;
    // 7F236080: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236084:
    ctx->pc = 0x7F236084u;
    // 7F236084: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236088:
    ctx->pc = 0x7F236088u;
    // 7F236088: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23608C:
    ctx->pc = 0x7F23608Cu;
    // 7F23608C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23608Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F236090:
    ctx->pc = 0x7F236090u;
    // 7F236090: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F236090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F236090u);
        if (ctx->exception) return;
    }

label_7F236094:
    ctx->pc = 0x7F236094u;
    // 7F236094: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236098:
    ctx->pc = 0x7F236098u;
    // 7F236098: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F23609C:
    ctx->pc = 0x7F23609Cu;
    // 7F23609C: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2360A0:
    ctx->pc = 0x7F2360A0u;
    // 7F2360A0: addi    r0, r3, -21852
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F2360A4:
    ctx->pc = 0x7F2360A4u;
    // 7F2360A4: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2360A8:
    ctx->pc = 0x7F2360A8u;
    // 7F2360A8: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2360AC:
    ctx->pc = 0x7F2360ACu;
    // 7F2360AC: or   r26, r0, r0
    {
        ctx->gpr[26] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2360B0:
    ctx->pc = 0x7F2360B0u;
    // 7F2360B0: addi    r23, r30, 172
    ctx->gpr[23] = ctx->gpr[30] + (u32)(s32)(172);

label_7F2360B4:
    ctx->pc = 0x7F2360B4u;
    // 7F2360B4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2360B8:
    ctx->pc = 0x7F2360B8u;
    // 7F2360B8: addi    r5, r30, 220
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(220);

label_7F2360BC:
    ctx->pc = 0x7F2360BCu;
    // 7F2360BC: bl      0x7F235EE8
    {
            ctx->lr = 0x7F2360C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235EE8u;
                return;
            }
            goto label_7F235EE8;
    }

label_7F2360C0:
    ctx->pc = 0x7F2360C0u;
    ctx->downcount -= 11;
    // 7F2360C0: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2360C4:
    ctx->pc = 0x7F2360C4u;
    // 7F2360C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2360C8:
    ctx->pc = 0x7F2360C8u;
    // 7F2360C8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2360CC:
    ctx->pc = 0x7F2360CCu;
    // 7F2360CC: lfs     f31, 19108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2360CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2360D0:
    ctx->pc = 0x7F2360D0u;
    // 7F2360D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2360D4:
    ctx->pc = 0x7F2360D4u;
    // 7F2360D4: addi    r27, r1, 8
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2360D8:
    ctx->pc = 0x7F2360D8u;
    // 7F2360D8: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2360DC:
    ctx->pc = 0x7F2360DCu;
    // 7F2360DC: or   r28, r29, r29
    {
        ctx->gpr[28] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2360E0:
    ctx->pc = 0x7F2360E0u;
    // 7F2360E0: lwz     r24, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2360E4:
    ctx->pc = 0x7F2360E4u;
    // 7F2360E4: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F2360E8:
    ctx->pc = 0x7F2360E8u;
    // 7F2360E8: lwz     r25, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F2360EC:
    ctx->downcount -= 4;
    // 7F2360EC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2360F0:
    // 7F2360F0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F2360F4:
    // 7F2360F4: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2360F8:
    // 7F2360F8: bl      0x800261B4
    {
            ctx->lr = 0x7F2360FCu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2360FC:
    ctx->pc = 0x7F2360FCu;
    ctx->downcount -= 8;
    // 7F2360FC: lfs     f0, 4(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F2360FCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236100:
    ctx->pc = 0x7F236100u;
    // 7F236100: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F236100u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F236104:
    ctx->pc = 0x7F236104u;
    // 7F236104: stfs     f0, 4(r23)
    if (!ppc_fp_available_inline(ctx, 0x7F236104u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236108:
    ctx->pc = 0x7F236108u;
    // 7F236108: lbz     r0, 3(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F23610C:
    ctx->pc = 0x7F23610Cu;
    // 7F23610C: sthx    r0, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236110:
    ctx->pc = 0x7F236110u;
    // 7F236110: lhzx    r3, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F236114:
    // 7F236114: cmplwi  r3, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236118:
    // 7F236118: bc    12, 0, 0x7F236128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236128;
        }
    }

label_7F23611C:
    ctx->downcount -= 3;
    // 7F23611C: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F236120:
    ctx->pc = 0x7F236120u;
    // 7F236120: sthx    r0, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236124:
    // 7F236124: b       0x7F23612C
    {
            goto label_7F23612C;
    }

label_7F236128:
    ctx->pc = 0x7F236128u;
    ctx->downcount -= 1;
    // 7F236128: sthx    r28, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F23612C:
    ctx->downcount -= 8;
    // 7F23612C: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F236130:
    // 7F236130: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F236134:
    // 7F236134: cmpwi   r22, 3
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236138:
    // 7F236138: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F23613C:
    // 7F23613C: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F236140:
    // 7F236140: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_7F236144:
    // 7F236144: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F236148:
    // 7F236148: bc    12, 0, 0x7F2360EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2360ECu;
                return;
            }
            goto label_7F2360EC;
        }
    }

label_7F23614C:
    ctx->pc = 0x7F23614Cu;
    ctx->downcount -= 11;
    // 7F23614C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236150:
    ctx->pc = 0x7F236150u;
    // 7F236150: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F236154:
    ctx->pc = 0x7F236154u;
    // 7F236154: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F236158:
    ctx->pc = 0x7F236158u;
    // 7F236158: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F23615C:
    ctx->pc = 0x7F23615Cu;
    // 7F23615C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F236160:
    ctx->pc = 0x7F236160u;
    // 7F236160: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236164:
    ctx->pc = 0x7F236164u;
    // 7F236164: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236168:
    ctx->pc = 0x7F236168u;
    // 7F236168: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F23616C:
    ctx->pc = 0x7F23616Cu;
    // 7F23616C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236170:
    ctx->pc = 0x7F236170u;
    // 7F236170: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236174:
    ctx->pc = 0x7F236174u;
    // 7F236174: bl      0x8000519C
    {
            ctx->lr = 0x7F236178u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F236178:
    ctx->pc = 0x7F236178u;
    ctx->downcount -= 30;
    // 7F236178: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23617C:
    ctx->pc = 0x7F23617Cu;
    // 7F23617C: lhz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F236180:
    ctx->pc = 0x7F236180u;
    // 7F236180: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F236184:
    ctx->pc = 0x7F236184u;
    // 7F236184: lhz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F236188:
    ctx->pc = 0x7F236188u;
    // 7F236188: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F23618C:
    ctx->pc = 0x7F23618Cu;
    // 7F23618C: lhz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F236190:
    ctx->pc = 0x7F236190u;
    // 7F236190: lwz     r5, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F236194:
    ctx->pc = 0x7F236194u;
    // 7F236194: stb     r4, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F236198:
    ctx->pc = 0x7F236198u;
    // 7F236198: stb     r3, 19(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F23619C:
    ctx->pc = 0x7F23619Cu;
    // 7F23619C: stb     r0, 35(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(35);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2361A0:
    ctx->pc = 0x7F2361A0u;
    // 7F2361A0: lwz     r0, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2361A4:
    ctx->pc = 0x7F2361A4u;
    // 7F2361A4: srawi r3, r0, 31
    {
        u32 sh = 31u;
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

label_7F2361A8:
    ctx->pc = 0x7F2361A8u;
    // 7F2361A8: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2361A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2361A8u);
        if (ctx->exception) return;
    }

label_7F2361AC:
    ctx->pc = 0x7F2361ACu;
    // 7F2361AC: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2361ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2361B0:
    ctx->pc = 0x7F2361B0u;
    // 7F2361B0: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2361B4:
    ctx->pc = 0x7F2361B4u;
    // 7F2361B4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2361B8:
    ctx->pc = 0x7F2361B8u;
    // 7F2361B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2361BC:
    ctx->pc = 0x7F2361BCu;
    // 7F2361BC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2361C0:
    ctx->pc = 0x7F2361C0u;
    // 7F2361C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2361C4:
    ctx->pc = 0x7F2361C4u;
    ctx->downcount -= 24;
    // 7F2361C4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2361C8:
    ctx->pc = 0x7F2361C8u;
    // 7F2361C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2361CC:
    ctx->pc = 0x7F2361CCu;
    // 7F2361CC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2361D0:
    ctx->pc = 0x7F2361D0u;
    // 7F2361D0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2361D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2361D4:
    ctx->pc = 0x7F2361D4u;
    // 7F2361D4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2361D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2361D4u);
        if (ctx->exception) return;
    }

label_7F2361D8:
    ctx->pc = 0x7F2361D8u;
    // 7F2361D8: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2361DC:
    ctx->pc = 0x7F2361DCu;
    // 7F2361DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2361E0:
    ctx->pc = 0x7F2361E0u;
    // 7F2361E0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2361E4:
    ctx->pc = 0x7F2361E4u;
    // 7F2361E4: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2361E8:
    ctx->pc = 0x7F2361E8u;
    // 7F2361E8: addi    r28, r3, -21852
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F2361EC:
    ctx->pc = 0x7F2361ECu;
    // 7F2361EC: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2361F0:
    ctx->pc = 0x7F2361F0u;
    // 7F2361F0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2361F4:
    ctx->pc = 0x7F2361F4u;
    // 7F2361F4: addi    r5, r30, 220
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(220);

label_7F2361F8:
    ctx->pc = 0x7F2361F8u;
    // 7F2361F8: bl      0x7F235EE8
    {
            ctx->lr = 0x7F2361FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235EE8u;
                return;
            }
            goto label_7F235EE8;
    }

label_7F2361FC:
    ctx->pc = 0x7F2361FCu;
    ctx->downcount -= 5;
    // 7F2361FC: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F236200:
    ctx->pc = 0x7F236200u;
    // 7F236200: addi    r3, r30, 124
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(124);

label_7F236204:
    ctx->pc = 0x7F236204u;
    // 7F236204: addi    r4, r4, -21852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F236208:
    ctx->pc = 0x7F236208u;
    // 7F236208: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F23620C:
    ctx->pc = 0x7F23620Cu;
    // 7F23620C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F236210u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F236210:
    ctx->pc = 0x7F236210u;
    ctx->downcount -= 15;
    // 7F236210: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236214:
    ctx->pc = 0x7F236214u;
    // 7F236214: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236218:
    ctx->pc = 0x7F236218u;
    // 7F236218: addi    r26, r28, 16
    ctx->gpr[26] = ctx->gpr[28] + (u32)(s32)(16);

label_7F23621C:
    ctx->pc = 0x7F23621Cu;
    // 7F23621C: lfs     f31, 19108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F23621Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F236220:
    ctx->pc = 0x7F236220u;
    // 7F236220: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F236224:
    ctx->pc = 0x7F236224u;
    // 7F236224: addi    r24, r30, 188
    ctx->gpr[24] = ctx->gpr[30] + (u32)(s32)(188);

label_7F236228:
    ctx->pc = 0x7F236228u;
    // 7F236228: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F23622C:
    ctx->pc = 0x7F23622Cu;
    // 7F23622C: addi    r27, r1, 8
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(8);

label_7F236230:
    ctx->pc = 0x7F236230u;
    // 7F236230: lwz     r23, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F236234:
    ctx->pc = 0x7F236234u;
    // 7F236234: li      r22, 1
    ctx->gpr[22] = (u32)(s32)(1);

label_7F236238:
    ctx->pc = 0x7F236238u;
    // 7F236238: lwz     r25, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F23623C:
    ctx->pc = 0x7F23623Cu;
    // 7F23623C: li      r29, 2
    ctx->gpr[29] = (u32)(s32)(2);

label_7F236240:
    ctx->pc = 0x7F236240u;
    // 7F236240: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F236244:
    ctx->pc = 0x7F236244u;
    // 7F236244: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F236248:
    ctx->pc = 0x7F236248u;
    // 7F236248: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F23624C:
    ctx->downcount -= 4;
    // 7F23624C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F236250:
    // 7F236250: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F236254:
    // 7F236254: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F236258:
    // 7F236258: bl      0x800261B4
    {
            ctx->lr = 0x7F23625Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F23625C:
    ctx->pc = 0x7F23625Cu;
    ctx->downcount -= 8;
    // 7F23625C: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F23625Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236260:
    ctx->pc = 0x7F236260u;
    // 7F236260: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F236260u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F236264:
    ctx->pc = 0x7F236264u;
    // 7F236264: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F236264u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236268:
    ctx->pc = 0x7F236268u;
    // 7F236268: lbz     r0, 3(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F23626C:
    ctx->pc = 0x7F23626Cu;
    // 7F23626C: sthx    r0, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236270:
    ctx->pc = 0x7F236270u;
    // 7F236270: lhzx    r3, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F236274:
    // 7F236274: cmplwi  r3, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236278:
    // 7F236278: bc    12, 0, 0x7F236288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236288;
        }
    }

label_7F23627C:
    ctx->downcount -= 3;
    // 7F23627C: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F236280:
    ctx->pc = 0x7F236280u;
    // 7F236280: sthx    r0, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236284:
    // 7F236284: b       0x7F23628C
    {
            goto label_7F23628C;
    }

label_7F236288:
    ctx->pc = 0x7F236288u;
    ctx->downcount -= 1;
    // 7F236288: sthx    r28, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F23628C:
    ctx->downcount -= 8;
    // 7F23628C: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F236290:
    // 7F236290: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F236294:
    // 7F236294: cmpwi   r22, 3
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236298:
    // 7F236298: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F23629C:
    // 7F23629C: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F2362A0:
    // 7F2362A0: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_7F2362A4:
    // 7F2362A4: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F2362A8:
    // 7F2362A8: bc    12, 0, 0x7F23624C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23624Cu;
                return;
            }
            goto label_7F23624C;
        }
    }

label_7F2362AC:
    ctx->pc = 0x7F2362ACu;
    ctx->downcount -= 11;
    // 7F2362AC: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2362B0:
    ctx->pc = 0x7F2362B0u;
    // 7F2362B0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2362B4:
    ctx->pc = 0x7F2362B4u;
    // 7F2362B4: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F2362B8:
    ctx->pc = 0x7F2362B8u;
    // 7F2362B8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F2362BC:
    ctx->pc = 0x7F2362BCu;
    // 7F2362BC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2362C0:
    ctx->pc = 0x7F2362C0u;
    // 7F2362C0: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2362C4:
    ctx->pc = 0x7F2362C4u;
    // 7F2362C4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2362C8:
    ctx->pc = 0x7F2362C8u;
    // 7F2362C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2362CC:
    ctx->pc = 0x7F2362CCu;
    // 7F2362CC: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2362D0:
    ctx->pc = 0x7F2362D0u;
    // 7F2362D0: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2362D4:
    ctx->pc = 0x7F2362D4u;
    // 7F2362D4: bl      0x8000519C
    {
            ctx->lr = 0x7F2362D8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2362D8:
    ctx->pc = 0x7F2362D8u;
    ctx->downcount -= 11;
    // 7F2362D8: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2362DC:
    ctx->pc = 0x7F2362DCu;
    // 7F2362DC: lhz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F2362E0:
    ctx->pc = 0x7F2362E0u;
    // 7F2362E0: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2362E4:
    ctx->pc = 0x7F2362E4u;
    // 7F2362E4: lhz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2362E8:
    ctx->pc = 0x7F2362E8u;
    // 7F2362E8: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2362EC:
    ctx->pc = 0x7F2362ECu;
    // 7F2362EC: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2362F0:
    ctx->pc = 0x7F2362F0u;
    // 7F2362F0: stb     r3, 19(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2362F4:
    ctx->pc = 0x7F2362F4u;
    // 7F2362F4: stb     r0, 35(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(35);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2362F8:
    ctx->pc = 0x7F2362F8u;
    // 7F2362F8: lwz     r0, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2362FC:
    ctx->pc = 0x7F2362FCu;
    // 7F2362FC: cmpwi   r0, 40
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

label_7F236300:
    ctx->pc = 0x7F236300u;
    // 7F236300: bc    12, 1, 0x7F236324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236324;
        }
    }

label_7F236304:
    ctx->pc = 0x7F236304u;
    ctx->downcount -= 5;
    // 7F236304: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F236308:
    ctx->pc = 0x7F236308u;
    // 7F236308: addi    r3, r30, 172
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(172);

label_7F23630C:
    ctx->pc = 0x7F23630Cu;
    // 7F23630C: addi    r4, r4, -21852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F236310:
    ctx->pc = 0x7F236310u;
    // 7F236310: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236314:
    ctx->pc = 0x7F236314u;
    // 7F236314: bl      0x7F235FFC
    {
            ctx->lr = 0x7F236318u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235FFCu;
                return;
            }
            goto label_7F235FFC;
    }

label_7F236318:
    ctx->pc = 0x7F236318u;
    ctx->downcount -= 3;
    // 7F236318: lis     r3, 32547
    ctx->gpr[3] = ((u32)(s32)(32547) << 16);

label_7F23631C:
    ctx->pc = 0x7F23631Cu;
    // 7F23631C: addi    r0, r3, 24704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(24704);

label_7F236320:
    ctx->pc = 0x7F236320u;
    // 7F236320: stw     r0, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236324:
    ctx->pc = 0x7F236324u;
    ctx->downcount -= 19;
    // 7F236324: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F236328:
    ctx->pc = 0x7F236328u;
    // 7F236328: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F236328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F236328u);
        if (ctx->exception) return;
    }

label_7F23632C:
    ctx->pc = 0x7F23632Cu;
    // 7F23632C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23632Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236330:
    ctx->pc = 0x7F236330u;
    // 7F236330: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236334:
    ctx->pc = 0x7F236334u;
    // 7F236334: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236338:
    ctx->pc = 0x7F236338u;
    // 7F236338: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23633C:
    ctx->pc = 0x7F23633Cu;
    // 7F23633C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F236340:
    ctx->pc = 0x7F236340u;
    // 7F236340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236344:
    ctx->pc = 0x7F236344u;
    ctx->downcount -= 39;
    // 7F236344: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236348:
    ctx->pc = 0x7F236348u;
    // 7F236348: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23634C:
    ctx->pc = 0x7F23634Cu;
    // 7F23634C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236350:
    ctx->pc = 0x7F236350u;
    // 7F236350: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236354:
    ctx->pc = 0x7F236354u;
    // 7F236354: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236358:
    ctx->pc = 0x7F236358u;
    // 7F236358: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F23635C:
    ctx->pc = 0x7F23635Cu;
    // 7F23635C: lfs     f0, 19088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23635Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236360:
    ctx->pc = 0x7F236360u;
    // 7F236360: lis     r6, 32592
    ctx->gpr[6] = ((u32)(s32)(32592) << 16);

label_7F236364:
    ctx->pc = 0x7F236364u;
    // 7F236364: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236368:
    ctx->pc = 0x7F236368u;
    // 7F236368: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F23636C:
    ctx->pc = 0x7F23636Cu;
    // 7F23636C: lfs     f1, 19112(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F23636Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236370:
    ctx->pc = 0x7F236370u;
    // 7F236370: addi    r29, r30, 124
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(124);

label_7F236374:
    ctx->pc = 0x7F236374u;
    // 7F236374: lwz     r31, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236378:
    ctx->pc = 0x7F236378u;
    // 7F236378: addi    r3, r6, -21852
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-21852);

label_7F23637C:
    ctx->pc = 0x7F23637Cu;
    // 7F23637C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236380:
    ctx->pc = 0x7F236380u;
    // 7F236380: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236380u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236384:
    ctx->pc = 0x7F236384u;
    // 7F236384: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236388:
    ctx->pc = 0x7F236388u;
    // 7F236388: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23638C:
    ctx->pc = 0x7F23638Cu;
    // 7F23638C: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236390:
    ctx->pc = 0x7F236390u;
    // 7F236390: lwz     r0, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236394:
    ctx->pc = 0x7F236394u;
    // 7F236394: subfic  r0, r0, 440
    {
        u64 res = (u64)(u32)(s32)(440) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F236398:
    ctx->pc = 0x7F236398u;
    // 7F236398: mulli   r3, r0, 50
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)50);

label_7F23639C:
    ctx->pc = 0x7F23639Cu;
    // 7F23639C: addi    r3, r3, 1366
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1366);

label_7F2363A0:
    ctx->pc = 0x7F2363A0u;
    // 7F2363A0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F2363A4:
    ctx->pc = 0x7F2363A4u;
    // 7F2363A4: sth     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2363A8:
    ctx->pc = 0x7F2363A8u;
    // 7F2363A8: cmpwi   r0, 2048
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

label_7F2363AC:
    ctx->pc = 0x7F2363ACu;
    // 7F2363AC: bc    4, 1, 0x7F2363B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2363B8;
        }
    }

label_7F2363B0:
    ctx->pc = 0x7F2363B0u;
    ctx->downcount -= 2;
    // 7F2363B0: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F2363B4:
    ctx->pc = 0x7F2363B4u;
    // 7F2363B4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2363B8:
    ctx->pc = 0x7F2363B8u;
    ctx->downcount -= 6;
    // 7F2363B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2363BC:
    ctx->pc = 0x7F2363BCu;
    // 7F2363BC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2363C0:
    ctx->pc = 0x7F2363C0u;
    // 7F2363C0: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2363C4:
    ctx->pc = 0x7F2363C4u;
    // 7F2363C4: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2363C8:
    ctx->pc = 0x7F2363C8u;
    // 7F2363C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2363CC:
    ctx->pc = 0x7F2363CCu;
    // 7F2363CC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2363D0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2363D0:
    ctx->pc = 0x7F2363D0u;
    ctx->downcount -= 4;
    // 7F2363D0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2363D4:
    ctx->pc = 0x7F2363D4u;
    // 7F2363D4: addi    r4, r29, 16
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(16);

label_7F2363D8:
    ctx->pc = 0x7F2363D8u;
    // 7F2363D8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2363DC:
    ctx->pc = 0x7F2363DCu;
    // 7F2363DC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2363E0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2363E0:
    ctx->pc = 0x7F2363E0u;
    ctx->downcount -= 4;
    // 7F2363E0: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2363E4:
    ctx->pc = 0x7F2363E4u;
    // 7F2363E4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2363E8:
    ctx->pc = 0x7F2363E8u;
    // 7F2363E8: addi    r5, r30, 220
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(220);

label_7F2363EC:
    ctx->pc = 0x7F2363ECu;
    // 7F2363EC: bl      0x7F235EE8
    {
            ctx->lr = 0x7F2363F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235EE8u;
                return;
            }
            goto label_7F235EE8;
    }

label_7F2363F0:
    ctx->pc = 0x7F2363F0u;
    ctx->downcount -= 4;
    // 7F2363F0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2363F4:
    ctx->pc = 0x7F2363F4u;
    // 7F2363F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2363F8:
    ctx->pc = 0x7F2363F8u;
    // 7F2363F8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2363FC:
    ctx->pc = 0x7F2363FCu;
    // 7F2363FC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F236400u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F236400:
    ctx->pc = 0x7F236400u;
    ctx->downcount -= 8;
    // 7F236400: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236404:
    ctx->pc = 0x7F236404u;
    // 7F236404: addi    r4, r30, 204
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(204);

label_7F236408:
    ctx->pc = 0x7F236408u;
    // 7F236408: addi    r5, r28, 32
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(32);

label_7F23640C:
    ctx->pc = 0x7F23640Cu;
    // 7F23640C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F236410:
    ctx->pc = 0x7F236410u;
    // 7F236410: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236414:
    ctx->pc = 0x7F236414u;
    // 7F236414: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236418:
    ctx->pc = 0x7F236418u;
    // 7F236418: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F23641C:
    ctx->pc = 0x7F23641Cu;
    // 7F23641C: bl      0x800261B4
    {
            ctx->lr = 0x7F236420u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F236420:
    ctx->pc = 0x7F236420u;
    ctx->downcount -= 12;
    // 7F236420: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236424:
    ctx->pc = 0x7F236424u;
    // 7F236424: lfs     f1, 208(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F236424u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236428:
    ctx->pc = 0x7F236428u;
    // 7F236428: lfs     f0, 19108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236428u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23642C:
    ctx->pc = 0x7F23642Cu;
    // 7F23642C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F23642Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F236430:
    ctx->pc = 0x7F236430u;
    // 7F236430: stfs     f0, 208(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F236430u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236434:
    ctx->pc = 0x7F236434u;
    // 7F236434: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236438:
    ctx->pc = 0x7F236438u;
    // 7F236438: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F23643C:
    ctx->pc = 0x7F23643Cu;
    // 7F23643C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236440:
    ctx->pc = 0x7F236440u;
    // 7F236440: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236444:
    ctx->pc = 0x7F236444u;
    // 7F236444: lbz     r3, 35(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(35);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F236448:
    ctx->pc = 0x7F236448u;
    // 7F236448: cmplwi  r3, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F23644C:
    ctx->pc = 0x7F23644Cu;
    // 7F23644C: bc    12, 0, 0x7F236458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236458;
        }
    }

label_7F236450:
    ctx->pc = 0x7F236450u;
    ctx->downcount -= 2;
    // 7F236450: addi    r28, r3, -4
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F236454:
    ctx->pc = 0x7F236454u;
    // 7F236454: b       0x7F23645C
    {
            goto label_7F23645C;
    }

label_7F236458:
    ctx->pc = 0x7F236458u;
    ctx->downcount -= 1;
    // 7F236458: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F23645C:
    ctx->pc = 0x7F23645Cu;
    ctx->downcount -= 11;
    // 7F23645C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236460:
    ctx->pc = 0x7F236460u;
    // 7F236460: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F236464:
    ctx->pc = 0x7F236464u;
    // 7F236464: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F236468:
    ctx->pc = 0x7F236468u;
    // 7F236468: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F23646C:
    ctx->pc = 0x7F23646Cu;
    // 7F23646C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F236470:
    ctx->pc = 0x7F236470u;
    // 7F236470: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236474:
    ctx->pc = 0x7F236474u;
    // 7F236474: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236478:
    ctx->pc = 0x7F236478u;
    // 7F236478: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F23647C:
    ctx->pc = 0x7F23647Cu;
    // 7F23647C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236480:
    ctx->pc = 0x7F236480u;
    // 7F236480: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236484:
    ctx->pc = 0x7F236484u;
    // 7F236484: bl      0x8000519C
    {
            ctx->lr = 0x7F236488u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F236488:
    ctx->pc = 0x7F236488u;
    ctx->downcount -= 8;
    // 7F236488: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23648C:
    ctx->pc = 0x7F23648Cu;
    // 7F23648C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F236490:
    ctx->pc = 0x7F236490u;
    // 7F236490: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236494:
    ctx->pc = 0x7F236494u;
    // 7F236494: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236498:
    ctx->pc = 0x7F236498u;
    // 7F236498: stb     r28, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F23649C:
    ctx->pc = 0x7F23649Cu;
    // 7F23649C: lwz     r0, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2364A0:
    ctx->pc = 0x7F2364A0u;
    // 7F2364A0: cmpwi   r0, 140
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

label_7F2364A4:
    ctx->pc = 0x7F2364A4u;
    // 7F2364A4: bc    12, 1, 0x7F2364CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2364CC;
        }
    }

label_7F2364A8:
    ctx->pc = 0x7F2364A8u;
    ctx->downcount -= 6;
    // 7F2364A8: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F2364AC:
    ctx->pc = 0x7F2364ACu;
    // 7F2364AC: addi    r3, r30, 188
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(188);

label_7F2364B0:
    ctx->pc = 0x7F2364B0u;
    // 7F2364B0: addi    r4, r4, -21852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F2364B4:
    ctx->pc = 0x7F2364B4u;
    // 7F2364B4: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2364B8:
    ctx->pc = 0x7F2364B8u;
    // 7F2364B8: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F2364BC:
    ctx->pc = 0x7F2364BCu;
    // 7F2364BC: bl      0x7F235FFC
    {
            ctx->lr = 0x7F2364C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235FFCu;
                return;
            }
            goto label_7F235FFC;
    }

label_7F2364C0:
    ctx->pc = 0x7F2364C0u;
    ctx->downcount -= 3;
    // 7F2364C0: lis     r3, 32547
    ctx->gpr[3] = ((u32)(s32)(32547) << 16);

label_7F2364C4:
    ctx->pc = 0x7F2364C4u;
    // 7F2364C4: addi    r0, r3, 25028
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25028);

label_7F2364C8:
    ctx->pc = 0x7F2364C8u;
    // 7F2364C8: stw     r0, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2364CC:
    ctx->pc = 0x7F2364CCu;
    ctx->downcount -= 17;
    // 7F2364CC: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2364D0:
    ctx->pc = 0x7F2364D0u;
    // 7F2364D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2364D4:
    ctx->pc = 0x7F2364D4u;
    // 7F2364D4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2364D8:
    ctx->pc = 0x7F2364D8u;
    // 7F2364D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2364DC:
    ctx->pc = 0x7F2364DCu;
    // 7F2364DC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2364E0:
    ctx->pc = 0x7F2364E0u;
    // 7F2364E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2364E4:
    ctx->pc = 0x7F2364E4u;
    ctx->downcount -= 26;
    // 7F2364E4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2364E8:
    ctx->pc = 0x7F2364E8u;
    // 7F2364E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2364EC:
    ctx->pc = 0x7F2364ECu;
    // 7F2364EC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2364F0:
    ctx->pc = 0x7F2364F0u;
    // 7F2364F0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2364F4:
    ctx->pc = 0x7F2364F4u;
    // 7F2364F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2364F8:
    ctx->pc = 0x7F2364F8u;
    // 7F2364F8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2364FC:
    ctx->pc = 0x7F2364FCu;
    // 7F2364FC: addi    r0, r3, -21852
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F236500:
    ctx->pc = 0x7F236500u;
    // 7F236500: addi    r5, r29, 220
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(220);

label_7F236504:
    ctx->pc = 0x7F236504u;
    // 7F236504: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F236508:
    ctx->pc = 0x7F236508u;
    // 7F236508: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F23650C:
    ctx->pc = 0x7F23650Cu;
    // 7F23650C: lwz     r31, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236510:
    ctx->pc = 0x7F236510u;
    // 7F236510: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236514:
    ctx->pc = 0x7F236514u;
    // 7F236514: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F236518:
    ctx->pc = 0x7F236518u;
    // 7F236518: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23651C:
    ctx->pc = 0x7F23651Cu;
    // 7F23651C: lwz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236520:
    ctx->pc = 0x7F236520u;
    // 7F236520: bl      0x7F235EE8
    {
            ctx->lr = 0x7F236524u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235EE8u;
                return;
            }
            goto label_7F235EE8;
    }

label_7F236524:
    ctx->pc = 0x7F236524u;
    ctx->downcount -= 4;
    // 7F236524: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F236528:
    ctx->pc = 0x7F236528u;
    // 7F236528: addi    r3, r29, 124
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(124);

label_7F23652C:
    ctx->pc = 0x7F23652Cu;
    // 7F23652C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F236530:
    ctx->pc = 0x7F236530u;
    // 7F236530: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F236534u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F236534:
    ctx->pc = 0x7F236534u;
    ctx->downcount -= 8;
    // 7F236534: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236538:
    ctx->pc = 0x7F236538u;
    // 7F236538: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F23653C:
    ctx->pc = 0x7F23653Cu;
    // 7F23653C: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F236540:
    ctx->pc = 0x7F236540u;
    // 7F236540: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F236544:
    ctx->pc = 0x7F236544u;
    // 7F236544: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F236548:
    ctx->pc = 0x7F236548u;
    // 7F236548: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F23654C:
    ctx->pc = 0x7F23654Cu;
    // 7F23654C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236550:
    ctx->pc = 0x7F236550u;
    // 7F236550: bl      0x8000519C
    {
            ctx->lr = 0x7F236554u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F236554:
    ctx->pc = 0x7F236554u;
    ctx->downcount -= 3;
    // 7F236554: lwz     r0, 236(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236558:
    ctx->pc = 0x7F236558u;
    // 7F236558: cmpwi   r0, 440
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(440);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F23655C:
    ctx->pc = 0x7F23655Cu;
    // 7F23655C: bc    12, 1, 0x7F23657C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23657C;
        }
    }

label_7F236560:
    ctx->pc = 0x7F236560u;
    ctx->downcount -= 4;
    // 7F236560: addi    r3, r29, 204
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(204);

label_7F236564:
    ctx->pc = 0x7F236564u;
    // 7F236564: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_7F236568:
    ctx->pc = 0x7F236568u;
    // 7F236568: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F23656C:
    ctx->pc = 0x7F23656Cu;
    // 7F23656C: bl      0x7F235FFC
    {
            ctx->lr = 0x7F236570u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235FFCu;
                return;
            }
            goto label_7F235FFC;
    }

label_7F236570:
    ctx->pc = 0x7F236570u;
    ctx->downcount -= 3;
    // 7F236570: lis     r3, 32547
    ctx->gpr[3] = ((u32)(s32)(32547) << 16);

label_7F236574:
    ctx->pc = 0x7F236574u;
    // 7F236574: addi    r0, r3, 25412
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25412);

label_7F236578:
    ctx->pc = 0x7F236578u;
    // 7F236578: stw     r0, 244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23657C:
    ctx->pc = 0x7F23657Cu;
    ctx->downcount -= 17;
    // 7F23657C: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236580:
    ctx->pc = 0x7F236580u;
    // 7F236580: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F236584:
    ctx->pc = 0x7F236584u;
    // 7F236584: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236588:
    ctx->pc = 0x7F236588u;
    // 7F236588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23658C:
    ctx->pc = 0x7F23658Cu;
    // 7F23658C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F236590:
    ctx->pc = 0x7F236590u;
    // 7F236590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236594:
    ctx->pc = 0x7F236594u;
    ctx->downcount -= 9;
    // 7F236594: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236598:
    ctx->pc = 0x7F236598u;
    // 7F236598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23659C:
    ctx->pc = 0x7F23659Cu;
    // 7F23659C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2365A0:
    ctx->pc = 0x7F2365A0u;
    // 7F2365A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2365A4:
    ctx->pc = 0x7F2365A4u;
    // 7F2365A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2365A8:
    ctx->pc = 0x7F2365A8u;
    // 7F2365A8: lwz     r4, 240(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2365AC:
    ctx->pc = 0x7F2365ACu;
    // 7F2365AC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2365B0:
    ctx->pc = 0x7F2365B0u;
    // 7F2365B0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2365B4:
    ctx->pc = 0x7F2365B4u;
    // 7F2365B4: bl      0x7F23662C
    {
            ctx->lr = 0x7F2365B8u;
            goto label_7F23662C;
    }

label_7F2365B8:
    ctx->pc = 0x7F2365B8u;
    ctx->downcount -= 3;
    // 7F2365B8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2365BC:
    ctx->pc = 0x7F2365BCu;
    // 7F2365BC: cmplwi  r0, 0x0000
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

label_7F2365C0:
    ctx->pc = 0x7F2365C0u;
    // 7F2365C0: bc    4, 2, 0x7F2365E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2365E4;
        }
    }

label_7F2365C4:
    ctx->pc = 0x7F2365C4u;
    ctx->downcount -= 5;
    // 7F2365C4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2365C8:
    ctx->pc = 0x7F2365C8u;
    // 7F2365C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2365CC:
    ctx->pc = 0x7F2365CCu;
    // 7F2365CC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2365D0:
    ctx->pc = 0x7F2365D0u;
    // 7F2365D0: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F2365D4:
    ctx->pc = 0x7F2365D4u;
    // 7F2365D4: bl      0x7F3C8058
    {
            ctx->lr = 0x7F2365D8u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F2365D8:
    ctx->pc = 0x7F2365D8u;
    ctx->downcount -= 2;
    // 7F2365D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2365DC:
    ctx->pc = 0x7F2365DCu;
    // 7F2365DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2365E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2365E0:
    ctx->pc = 0x7F2365E0u;
    ctx->downcount -= 1;
    // 7F2365E0: b       0x7F236618
    {
            goto label_7F236618;
    }

label_7F2365E4:
    ctx->pc = 0x7F2365E4u;
    ctx->downcount -= 5;
    // 7F2365E4: lwz     r12, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2365E8:
    ctx->pc = 0x7F2365E8u;
    // 7F2365E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2365EC:
    ctx->pc = 0x7F2365ECu;
    // 7F2365EC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2365F0:
    ctx->pc = 0x7F2365F0u;
    // 7F2365F0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2365F4u;
            ctx->pc = target;
            return;
        }
    }

label_7F2365F4:
    ctx->pc = 0x7F2365F4u;
    ctx->downcount -= 2;
    // 7F2365F4: cmpwi   r3, -1
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

label_7F2365F8:
    ctx->pc = 0x7F2365F8u;
    // 7F2365F8: bc    4, 2, 0x7F236618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236618;
        }
    }

label_7F2365FC:
    ctx->pc = 0x7F2365FCu;
    ctx->downcount -= 5;
    // 7F2365FC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F236600:
    ctx->pc = 0x7F236600u;
    // 7F236600: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236604:
    ctx->pc = 0x7F236604u;
    // 7F236604: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236608:
    ctx->pc = 0x7F236608u;
    // 7F236608: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F23660C:
    ctx->pc = 0x7F23660Cu;
    // 7F23660C: bl      0x7F3C8058
    {
            ctx->lr = 0x7F236610u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F236610:
    ctx->pc = 0x7F236610u;
    ctx->downcount -= 2;
    // 7F236610: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236614:
    ctx->pc = 0x7F236614u;
    // 7F236614: bl      0x7F3C8210
    {
            ctx->lr = 0x7F236618u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F236618:
    ctx->pc = 0x7F236618u;
    ctx->downcount -= 6;
    // 7F236618: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23661C:
    ctx->pc = 0x7F23661Cu;
    // 7F23661C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236620:
    ctx->pc = 0x7F236620u;
    // 7F236620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236624:
    ctx->pc = 0x7F236624u;
    // 7F236624: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236628:
    ctx->pc = 0x7F236628u;
    // 7F236628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23662C:
    ctx->pc = 0x7F23662Cu;
    ctx->downcount -= 7;
    // 7F23662C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236630:
    ctx->pc = 0x7F236630u;
    // 7F236630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236634:
    ctx->pc = 0x7F236634u;
    // 7F236634: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236638:
    ctx->pc = 0x7F236638u;
    // 7F236638: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F23663C:
    ctx->pc = 0x7F23663Cu;
    // 7F23663C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236640:
    ctx->pc = 0x7F236640u;
    // 7F236640: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F236644:
    ctx->pc = 0x7F236644u;
    // 7F236644: bl      0x7F01B234
    {
            ctx->lr = 0x7F236648u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F236648:
    ctx->pc = 0x7F236648u;
    ctx->downcount -= 7;
    // 7F236648: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F23664C:
    ctx->pc = 0x7F23664Cu;
    // 7F23664C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236650:
    ctx->pc = 0x7F236650u;
    // 7F236650: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236654:
    ctx->pc = 0x7F236654u;
    // 7F236654: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236658:
    ctx->pc = 0x7F236658u;
    // 7F236658: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F23665C:
    ctx->pc = 0x7F23665Cu;
    // 7F23665C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236660:
    ctx->pc = 0x7F236660u;
    ctx->downcount -= 6;
    // 7F236660: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236664:
    ctx->pc = 0x7F236664u;
    // 7F236664: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236668:
    ctx->pc = 0x7F236668u;
    // 7F236668: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23666C:
    ctx->pc = 0x7F23666Cu;
    // 7F23666C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236670:
    ctx->pc = 0x7F236670u;
    // 7F236670: cmplwi  r3, 0x0000
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

label_7F236674:
    ctx->pc = 0x7F236674u;
    // 7F236674: bc    12, 2, 0x7F23667C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23667C;
        }
    }

label_7F236678:
    ctx->pc = 0x7F236678u;
    ctx->downcount -= 1;
    // 7F236678: bl      0x7F3C2440
    {
            ctx->lr = 0x7F23667Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F23667C:
    ctx->pc = 0x7F23667Cu;
    ctx->downcount -= 5;
    // 7F23667C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236680:
    ctx->pc = 0x7F236680u;
    // 7F236680: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236684:
    ctx->pc = 0x7F236684u;
    // 7F236684: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236688:
    ctx->pc = 0x7F236688u;
    // 7F236688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23668C:
    ctx->pc = 0x7F23668Cu;
    ctx->downcount -= 30;
    // 7F23668C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236690:
    ctx->pc = 0x7F236690u;
    // 7F236690: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236694:
    ctx->pc = 0x7F236694u;
    // 7F236694: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236698:
    ctx->pc = 0x7F236698u;
    // 7F236698: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F23669C:
    ctx->pc = 0x7F23669Cu;
    // 7F23669C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2366A0:
    ctx->pc = 0x7F2366A0u;
    // 7F2366A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2366A4:
    ctx->pc = 0x7F2366A4u;
    // 7F2366A4: lfs     f1, 19112(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2366A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2366A8:
    ctx->pc = 0x7F2366A8u;
    // 7F2366A8: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2366AC:
    ctx->pc = 0x7F2366ACu;
    // 7F2366AC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2366B0:
    ctx->pc = 0x7F2366B0u;
    // 7F2366B0: lfs     f0, 19088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2366B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2366B4:
    ctx->pc = 0x7F2366B4u;
    // 7F2366B4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2366B8:
    ctx->pc = 0x7F2366B8u;
    // 7F2366B8: addi    r30, r28, 124
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(124);

label_7F2366BC:
    ctx->pc = 0x7F2366BCu;
    // 7F2366BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2366C0:
    ctx->pc = 0x7F2366C0u;
    // 7F2366C0: addi    r31, r3, 12832
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2366C4:
    ctx->pc = 0x7F2366C4u;
    // 7F2366C4: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2366C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2366C8:
    ctx->pc = 0x7F2366C8u;
    // 7F2366C8: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2366C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2366CC:
    ctx->pc = 0x7F2366CCu;
    // 7F2366CC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2366CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2366D0:
    ctx->pc = 0x7F2366D0u;
    // 7F2366D0: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2366D4:
    ctx->pc = 0x7F2366D4u;
    // 7F2366D4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2366D8:
    ctx->pc = 0x7F2366D8u;
    // 7F2366D8: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2366DC:
    ctx->downcount -= 3;
    // 7F2366DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2366E0:
    // 7F2366E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2366E4:
    // 7F2366E4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2366E8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2366E8:
    ctx->downcount -= 4;
    // 7F2366E8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2366EC:
    // 7F2366EC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2366F0:
    // 7F2366F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2366F4:
    // 7F2366F4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2366F8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2366F8:
    ctx->pc = 0x7F2366F8u;
    ctx->downcount -= 7;
    // 7F2366F8: lha     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2366FC:
    // 7F2366FC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F236700:
    // 7F236700: cmpwi   r29, 3
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

label_7F236704:
    // 7F236704: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F236708:
    // 7F236708: addi    r0, r3, 1365
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1365);

label_7F23670C:
    ctx->pc = 0x7F23670Cu;
    // 7F23670C: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236710:
    // 7F236710: bc    12, 0, 0x7F2366DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2366DCu;
                return;
            }
            goto label_7F2366DC;
        }
    }

label_7F236714:
    ctx->pc = 0x7F236714u;
    ctx->downcount -= 7;
    // 7F236714: lwz     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F236718:
    ctx->pc = 0x7F236718u;
    // 7F236718: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F23671C:
    ctx->pc = 0x7F23671Cu;
    // 7F23671C: lwz     r4, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236720:
    ctx->pc = 0x7F236720u;
    // 7F236720: addi    r5, r28, 220
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(220);

label_7F236724:
    ctx->pc = 0x7F236724u;
    // 7F236724: lwz     r31, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236728:
    ctx->pc = 0x7F236728u;
    // 7F236728: lwz     r30, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F23672C:
    ctx->pc = 0x7F23672Cu;
    // 7F23672C: bl      0x7F235EE8
    {
            ctx->lr = 0x7F236730u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F235EE8u;
                return;
            }
            goto label_7F235EE8;
    }

label_7F236730:
    ctx->pc = 0x7F236730u;
    ctx->downcount -= 4;
    // 7F236730: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236734:
    ctx->pc = 0x7F236734u;
    // 7F236734: addi    r3, r28, 124
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(124);

label_7F236738:
    ctx->pc = 0x7F236738u;
    // 7F236738: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F23673C:
    ctx->pc = 0x7F23673Cu;
    // 7F23673C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F236740u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F236740:
    ctx->pc = 0x7F236740u;
    ctx->downcount -= 9;
    // 7F236740: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F236744:
    ctx->pc = 0x7F236744u;
    // 7F236744: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F236748:
    ctx->pc = 0x7F236748u;
    // 7F236748: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_7F23674C:
    ctx->pc = 0x7F23674Cu;
    // 7F23674C: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F236750:
    ctx->pc = 0x7F236750u;
    // 7F236750: li      r5, 200
    ctx->gpr[5] = (u32)(s32)(200);

label_7F236754:
    ctx->pc = 0x7F236754u;
    // 7F236754: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F236758:
    ctx->pc = 0x7F236758u;
    // 7F236758: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F23675C:
    ctx->pc = 0x7F23675Cu;
    // 7F23675C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F236760:
    loop_7F236760(ctx);
    if (ctx->pc == 0x7F236790u) goto label_7F236790;
    return;
label_7F236764:
    ctx->pc = 0x7F236764u;
    // 7F236764: sth     r8, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F236768:
    ctx->pc = 0x7F236768u;
    // 7F236768: sth     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F23676C:
    ctx->pc = 0x7F23676Cu;
    // 7F23676C: sth     r7, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F236770:
    ctx->pc = 0x7F236770u;
    // 7F236770: sth     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F236774:
    ctx->pc = 0x7F236774u;
    // 7F236774: sth     r6, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F236778:
    ctx->pc = 0x7F236778u;
    // 7F236778: stb     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F23677C:
    ctx->pc = 0x7F23677Cu;
    // 7F23677C: stb     r5, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F236780:
    ctx->pc = 0x7F236780u;
    // 7F236780: stb     r4, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F236784:
    ctx->pc = 0x7F236784u;
    // 7F236784: stb     r3, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F236788:
    // 7F236788: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F23678C:
    // 7F23678C: bc    16, 0, 0x7F236760
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236760u;
                return;
            }
            goto label_7F236760;
        }
    }

label_7F236790:
    ctx->pc = 0x7F236790u;
    ctx->downcount -= 17;
    // 7F236790: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236794:
    ctx->pc = 0x7F236794u;
    // 7F236794: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F236798:
    ctx->pc = 0x7F236798u;
    // 7F236798: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23679C:
    ctx->pc = 0x7F23679Cu;
    // 7F23679C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2367A0:
    ctx->pc = 0x7F2367A0u;
    // 7F2367A0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2367A4:
    ctx->pc = 0x7F2367A4u;
    // 7F2367A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2367A8:
    ctx->pc = 0x7F2367A8u;
    ctx->downcount -= 19;
    // 7F2367A8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2367AC:
    ctx->pc = 0x7F2367ACu;
    // 7F2367AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2367B0:
    ctx->pc = 0x7F2367B0u;
    // 7F2367B0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2367B4:
    ctx->pc = 0x7F2367B4u;
    // 7F2367B4: stmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2367B8:
    ctx->pc = 0x7F2367B8u;
    // 7F2367B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2367BC:
    ctx->pc = 0x7F2367BCu;
    // 7F2367BC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2367C0:
    ctx->pc = 0x7F2367C0u;
    // 7F2367C0: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2367C4:
    ctx->pc = 0x7F2367C4u;
    // 7F2367C4: cmplwi  r0, 0x0000
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

label_7F2367C8:
    ctx->pc = 0x7F2367C8u;
    // 7F2367C8: bc    4, 2, 0x7F2367D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2367D4;
        }
    }

label_7F2367CC:
    ctx->pc = 0x7F2367CCu;
    ctx->downcount -= 2;
    // 7F2367CC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2367D0:
    ctx->pc = 0x7F2367D0u;
    // 7F2367D0: b       0x7F2368E0
    {
            goto label_7F2368E0;
    }

label_7F2367D4:
    ctx->pc = 0x7F2367D4u;
    ctx->downcount -= 6;
    // 7F2367D4: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F2367D8:
    ctx->pc = 0x7F2367D8u;
    // 7F2367D8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2367DC:
    ctx->pc = 0x7F2367DCu;
    // 7F2367DC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2367E0:
    ctx->pc = 0x7F2367E0u;
    // 7F2367E0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2367E4:
    ctx->pc = 0x7F2367E4u;
    // 7F2367E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2367E8:
    ctx->pc = 0x7F2367E8u;
    // 7F2367E8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F2367ECu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F2367EC:
    ctx->pc = 0x7F2367ECu;
    ctx->downcount -= 3;
    // 7F2367EC: or.   r29, r3, r3
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

label_7F2367F0:
    ctx->pc = 0x7F2367F0u;
    // 7F2367F0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2367F4:
    ctx->pc = 0x7F2367F4u;
    // 7F2367F4: bc    4, 2, 0x7F236800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236800;
        }
    }

label_7F2367F8:
    ctx->pc = 0x7F2367F8u;
    ctx->downcount -= 2;
    // 7F2367F8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2367FC:
    ctx->pc = 0x7F2367FCu;
    // 7F2367FC: b       0x7F2368E0
    {
            goto label_7F2368E0;
    }

label_7F236800:
    ctx->pc = 0x7F236800u;
    ctx->downcount -= 3;
    // 7F236800: lis     r3, 197
    ctx->gpr[3] = ((u32)(s32)(197) << 16);

label_7F236804:
    ctx->pc = 0x7F236804u;
    // 7F236804: addi    r3, r3, -24713
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24713);

label_7F236808:
    ctx->pc = 0x7F236808u;
    // 7F236808: bl      0x7F3B6420
    {
            ctx->lr = 0x7F23680Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F23680C:
    ctx->pc = 0x7F23680Cu;
    ctx->downcount -= 2;
    // 7F23680C: or.   r30, r3, r3
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

label_7F236810:
    ctx->pc = 0x7F236810u;
    // 7F236810: bc    4, 2, 0x7F23681C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F23681C;
        }
    }

label_7F236814:
    ctx->pc = 0x7F236814u;
    ctx->downcount -= 2;
    // 7F236814: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F236818:
    ctx->pc = 0x7F236818u;
    // 7F236818: b       0x7F2368E0
    {
            goto label_7F2368E0;
    }

label_7F23681C:
    ctx->pc = 0x7F23681Cu;
    ctx->downcount -= 3;
    // 7F23681C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236820:
    ctx->pc = 0x7F236820u;
    // 7F236820: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F236824:
    ctx->pc = 0x7F236824u;
    // 7F236824: bl      0x7F3C2534
    {
            ctx->lr = 0x7F236828u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F236828:
    ctx->pc = 0x7F236828u;
    ctx->downcount -= 8;
    // 7F236828: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_7F23682C:
    ctx->pc = 0x7F23682Cu;
    // 7F23682C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F236830:
    ctx->pc = 0x7F236830u;
    // 7F236830: stw     r3, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236834:
    ctx->pc = 0x7F236834u;
    // 7F236834: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236838:
    ctx->pc = 0x7F236838u;
    // 7F236838: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F23683C:
    ctx->pc = 0x7F23683Cu;
    // 7F23683C: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236840:
    ctx->pc = 0x7F236840u;
    // 7F236840: stw     r28, 240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F236844:
    ctx->pc = 0x7F236844u;
    // 7F236844: bl      0x7F23668C
    {
            ctx->lr = 0x7F236848u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23668Cu;
                return;
            }
            goto label_7F23668C;
    }

label_7F236848:
    ctx->pc = 0x7F236848u;
    ctx->downcount -= 4;
    // 7F236848: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23684C:
    ctx->pc = 0x7F23684Cu;
    // 7F23684C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F236850:
    ctx->pc = 0x7F236850u;
    // 7F236850: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236854:
    ctx->pc = 0x7F236854u;
    // 7F236854: bl      0x8000519C
    {
            ctx->lr = 0x7F236858u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F236858:
    ctx->pc = 0x7F236858u;
    ctx->downcount -= 4;
    // 7F236858: lwz     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23685C:
    ctx->pc = 0x7F23685Cu;
    // 7F23685C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F236860:
    ctx->pc = 0x7F236860u;
    // 7F236860: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236864:
    ctx->pc = 0x7F236864u;
    // 7F236864: bl      0x8000519C
    {
            ctx->lr = 0x7F236868u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F236868:
    ctx->pc = 0x7F236868u;
    ctx->downcount -= 7;
    // 7F236868: lis     r3, 32547
    ctx->gpr[3] = ((u32)(s32)(32547) << 16);

label_7F23686C:
    ctx->pc = 0x7F23686Cu;
    // 7F23686C: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F236870:
    ctx->pc = 0x7F236870u;
    // 7F236870: addi    r0, r3, 25828
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(25828);

label_7F236874:
    ctx->pc = 0x7F236874u;
    // 7F236874: stw     r0, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236878:
    ctx->pc = 0x7F236878u;
    // 7F236878: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F23687C:
    ctx->pc = 0x7F23687Cu;
    // 7F23687C: addi    r4, r4, 24148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24148);

label_7F236880:
    ctx->pc = 0x7F236880u;
    // 7F236880: bl      0x7F3C8990
    {
            ctx->lr = 0x7F236884u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F236884:
    ctx->pc = 0x7F236884u;
    ctx->downcount -= 1;
    // 7F236884: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F236888u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F236888:
    ctx->pc = 0x7F236888u;
    ctx->downcount -= 2;
    // 7F236888: cmpwi   r3, 0
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

label_7F23688C:
    ctx->pc = 0x7F23688Cu;
    // 7F23688C: bc    12, 2, 0x7F2368DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2368DC;
        }
    }

label_7F236890:
    ctx->pc = 0x7F236890u;
    ctx->downcount -= 13;
    // 7F236890: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236894:
    ctx->pc = 0x7F236894u;
    // 7F236894: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F236898:
    ctx->pc = 0x7F236898u;
    // 7F236898: addi    r7, r3, 19116
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(19116);

label_7F23689C:
    ctx->pc = 0x7F23689Cu;
    // 7F23689C: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2368A0:
    ctx->pc = 0x7F2368A0u;
    // 7F2368A0: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2368A4:
    ctx->pc = 0x7F2368A4u;
    // 7F2368A4: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2368A8:
    ctx->pc = 0x7F2368A8u;
    // 7F2368A8: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2368AC:
    ctx->pc = 0x7F2368ACu;
    // 7F2368AC: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2368B0:
    ctx->pc = 0x7F2368B0u;
    // 7F2368B0: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2368B4:
    ctx->pc = 0x7F2368B4u;
    // 7F2368B4: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2368B8:
    ctx->pc = 0x7F2368B8u;
    // 7F2368B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2368BC:
    ctx->pc = 0x7F2368BCu;
    // 7F2368BC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2368C0:
    ctx->pc = 0x7F2368C0u;
    // 7F2368C0: bl      0x7F114EE0
    {
            ctx->lr = 0x7F2368C4u;
            ctx->pc = 0x7F114EE0u;
            return;
    }

label_7F2368C4:
    ctx->pc = 0x7F2368C4u;
    ctx->downcount -= 3;
    // 7F2368C4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2368C8:
    ctx->pc = 0x7F2368C8u;
    // 7F2368C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2368CC:
    ctx->pc = 0x7F2368CCu;
    // 7F2368CC: bl      0x7F09199C
    {
            ctx->lr = 0x7F2368D0u;
            ctx->pc = 0x7F09199Cu;
            return;
    }

label_7F2368D0:
    ctx->pc = 0x7F2368D0u;
    ctx->downcount -= 3;
    // 7F2368D0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2368D4:
    ctx->pc = 0x7F2368D4u;
    // 7F2368D4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2368D8:
    ctx->pc = 0x7F2368D8u;
    // 7F2368D8: bl      0x7F114E64
    {
            ctx->lr = 0x7F2368DCu;
            ctx->pc = 0x7F114E64u;
            return;
    }

label_7F2368DC:
    ctx->pc = 0x7F2368DCu;
    ctx->downcount -= 1;
    // 7F2368DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2368E0:
    ctx->pc = 0x7F2368E0u;
    ctx->downcount -= 16;
    // 7F2368E0: lmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2368E4:
    ctx->pc = 0x7F2368E4u;
    // 7F2368E4: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2368E8:
    ctx->pc = 0x7F2368E8u;
    // 7F2368E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2368EC:
    ctx->pc = 0x7F2368ECu;
    // 7F2368EC: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2368F0:
    ctx->pc = 0x7F2368F0u;
    // 7F2368F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2368F4:
    ctx->pc = 0x7F2368F4u;
    ctx->downcount -= 21;
    // 7F2368F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2368F8:
    ctx->pc = 0x7F2368F8u;
    // 7F2368F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2368FC:
    ctx->pc = 0x7F2368FCu;
    // 7F2368FC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F236900:
    ctx->pc = 0x7F236900u;
    // 7F236900: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F236904:
    ctx->pc = 0x7F236904u;
    // 7F236904: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236908:
    ctx->pc = 0x7F236908u;
    // 7F236908: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F23690C:
    ctx->pc = 0x7F23690Cu;
    // 7F23690C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236910:
    ctx->pc = 0x7F236910u;
    // 7F236910: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F236914:
    ctx->pc = 0x7F236914u;
    // 7F236914: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F236918:
    ctx->pc = 0x7F236918u;
    // 7F236918: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F23691C:
    ctx->pc = 0x7F23691Cu;
    // 7F23691C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F236920u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F236920:
    ctx->pc = 0x7F236920u;
    ctx->downcount -= 2;
    // 7F236920: or.   r30, r3, r3
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

label_7F236924:
    ctx->pc = 0x7F236924u;
    // 7F236924: bc    12, 2, 0x7F2369C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2369C0;
        }
    }

label_7F236928:
    ctx->pc = 0x7F236928u;
    ctx->downcount -= 19;
    // 7F236928: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F23692C:
    ctx->pc = 0x7F23692Cu;
    // 7F23692C: stw     r29, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F236930:
    ctx->pc = 0x7F236930u;
    // 7F236930: addi    r5, r4, 19088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19088);

label_7F236934:
    ctx->pc = 0x7F236934u;
    // 7F236934: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F236938:
    ctx->pc = 0x7F236938u;
    // 7F236938: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F23693C:
    ctx->pc = 0x7F23693Cu;
    // 7F23693C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F23693Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236940:
    ctx->pc = 0x7F236940u;
    // 7F236940: addi    r5, r4, 19112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19112);

label_7F236944:
    ctx->pc = 0x7F236944u;
    // 7F236944: stw     r0, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236948:
    ctx->pc = 0x7F236948u;
    // 7F236948: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236948u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F23694C:
    ctx->pc = 0x7F23694Cu;
    // 7F23694C: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F236950:
    ctx->pc = 0x7F236950u;
    // 7F236950: stfs     f0, 220(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F236950u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236954:
    ctx->pc = 0x7F236954u;
    // 7F236954: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236958:
    ctx->pc = 0x7F236958u;
    // 7F236958: lfs     f0, 19132(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236958u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23695C:
    ctx->pc = 0x7F23695Cu;
    // 7F23695C: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F236960:
    ctx->pc = 0x7F236960u;
    // 7F236960: stfs     f1, 224(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F236960u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236964:
    ctx->pc = 0x7F236964u;
    // 7F236964: addi    r4, r4, 26004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26004);

label_7F236968:
    ctx->pc = 0x7F236968u;
    // 7F236968: addi    r5, r5, 26208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26208);

label_7F23696C:
    ctx->pc = 0x7F23696Cu;
    // 7F23696C: stfs     f0, 228(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F23696Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236970:
    ctx->pc = 0x7F236970u;
    // 7F236970: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F236974u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F236974:
    ctx->pc = 0x7F236974u;
    ctx->downcount -= 13;
    // 7F236974: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236978:
    ctx->pc = 0x7F236978u;
    // 7F236978: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F23697C:
    ctx->pc = 0x7F23697Cu;
    // 7F23697C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F236980:
    ctx->pc = 0x7F236980u;
    // 7F236980: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F236984:
    ctx->pc = 0x7F236984u;
    // 7F236984: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F236988:
    ctx->pc = 0x7F236988u;
    // 7F236988: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F23698C:
    ctx->pc = 0x7F23698Cu;
    // 7F23698C: stw     r6, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F236990:
    ctx->pc = 0x7F236990u;
    // 7F236990: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236994:
    ctx->pc = 0x7F236994u;
    // 7F236994: stw     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F236998:
    ctx->pc = 0x7F236998u;
    // 7F236998: stw     r5, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F23699C:
    ctx->pc = 0x7F23699Cu;
    // 7F23699C: stw     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2369A0:
    ctx->pc = 0x7F2369A0u;
    // 7F2369A0: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2369A4:
    ctx->pc = 0x7F2369A4u;
    // 7F2369A4: bl      0x7F2367A8
    {
            ctx->lr = 0x7F2369A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2367A8u;
                return;
            }
            goto label_7F2367A8;
    }

label_7F2369A8:
    ctx->pc = 0x7F2369A8u;
    ctx->downcount -= 2;
    // 7F2369A8: cmpwi   r3, 0
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

label_7F2369AC:
    ctx->pc = 0x7F2369ACu;
    // 7F2369AC: bc    4, 0, 0x7F2369C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2369C0;
        }
    }

label_7F2369B0:
    ctx->pc = 0x7F2369B0u;
    ctx->downcount -= 2;
    // 7F2369B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2369B4:
    ctx->pc = 0x7F2369B4u;
    // 7F2369B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2369B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2369B8:
    ctx->pc = 0x7F2369B8u;
    ctx->downcount -= 2;
    // 7F2369B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2369BC:
    ctx->pc = 0x7F2369BCu;
    // 7F2369BC: b       0x7F2369C4
    {
            goto label_7F2369C4;
    }

label_7F2369C0:
    ctx->pc = 0x7F2369C0u;
    ctx->downcount -= 1;
    // 7F2369C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2369C4:
    ctx->pc = 0x7F2369C4u;
    ctx->downcount -= 16;
    // 7F2369C4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2369C8:
    ctx->pc = 0x7F2369C8u;
    // 7F2369C8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2369CC:
    ctx->pc = 0x7F2369CCu;
    // 7F2369CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2369D0:
    ctx->pc = 0x7F2369D0u;
    // 7F2369D0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2369D4:
    ctx->pc = 0x7F2369D4u;
    // 7F2369D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2369D8:
    ctx->pc = 0x7F2369D8u;
    ctx->downcount -= 21;
    // 7F2369D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2369DC:
    ctx->pc = 0x7F2369DCu;
    // 7F2369DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2369E0:
    ctx->pc = 0x7F2369E0u;
    // 7F2369E0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F2369E4:
    ctx->pc = 0x7F2369E4u;
    // 7F2369E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2369E8:
    ctx->pc = 0x7F2369E8u;
    // 7F2369E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2369EC:
    ctx->pc = 0x7F2369ECu;
    // 7F2369EC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2369F0:
    ctx->pc = 0x7F2369F0u;
    // 7F2369F0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2369F4:
    ctx->pc = 0x7F2369F4u;
    // 7F2369F4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2369F8:
    ctx->pc = 0x7F2369F8u;
    // 7F2369F8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2369FC:
    ctx->pc = 0x7F2369FCu;
    // 7F2369FC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F236A00:
    ctx->pc = 0x7F236A00u;
    // 7F236A00: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F236A04u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F236A04:
    ctx->pc = 0x7F236A04u;
    ctx->downcount -= 2;
    // 7F236A04: or.   r31, r3, r3
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

label_7F236A08:
    ctx->pc = 0x7F236A08u;
    // 7F236A08: bc    12, 2, 0x7F236A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236A98;
        }
    }

label_7F236A0C:
    ctx->pc = 0x7F236A0Cu;
    ctx->downcount -= 16;
    // 7F236A0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236A10:
    ctx->pc = 0x7F236A10u;
    // 7F236A10: stw     r29, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F236A14:
    ctx->pc = 0x7F236A14u;
    // 7F236A14: addi    r5, r4, 19088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19088);

label_7F236A18:
    ctx->pc = 0x7F236A18u;
    // 7F236A18: li      r0, 1800
    ctx->gpr[0] = (u32)(s32)(1800);

label_7F236A1C:
    ctx->pc = 0x7F236A1Cu;
    // 7F236A1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236A1Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236A20:
    ctx->pc = 0x7F236A20u;
    // 7F236A20: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236A24:
    ctx->pc = 0x7F236A24u;
    // 7F236A24: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236A28:
    ctx->pc = 0x7F236A28u;
    // 7F236A28: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F236A2C:
    ctx->pc = 0x7F236A2Cu;
    // 7F236A2C: lfs     f0, 19112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236A2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236A30:
    ctx->pc = 0x7F236A30u;
    // 7F236A30: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F236A34:
    ctx->pc = 0x7F236A34u;
    // 7F236A34: stfs     f1, 220(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236A34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236A38:
    ctx->pc = 0x7F236A38u;
    // 7F236A38: addi    r4, r4, 26004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26004);

label_7F236A3C:
    ctx->pc = 0x7F236A3Cu;
    // 7F236A3C: addi    r5, r5, 26208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26208);

label_7F236A40:
    ctx->pc = 0x7F236A40u;
    // 7F236A40: stfs     f0, 224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236A40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236A44:
    ctx->pc = 0x7F236A44u;
    // 7F236A44: stfs     f1, 228(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236A44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236A48:
    ctx->pc = 0x7F236A48u;
    // 7F236A48: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F236A4Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F236A4C:
    ctx->pc = 0x7F236A4Cu;
    ctx->downcount -= 13;
    // 7F236A4C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236A50:
    ctx->pc = 0x7F236A50u;
    // 7F236A50: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F236A54:
    ctx->pc = 0x7F236A54u;
    // 7F236A54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F236A58:
    ctx->pc = 0x7F236A58u;
    // 7F236A58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236A5C:
    ctx->pc = 0x7F236A5Cu;
    // 7F236A5C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F236A60:
    ctx->pc = 0x7F236A60u;
    // 7F236A60: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F236A64:
    ctx->pc = 0x7F236A64u;
    // 7F236A64: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F236A68:
    ctx->pc = 0x7F236A68u;
    // 7F236A68: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F236A6C:
    ctx->pc = 0x7F236A6Cu;
    // 7F236A6C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F236A70:
    ctx->pc = 0x7F236A70u;
    // 7F236A70: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F236A74:
    ctx->pc = 0x7F236A74u;
    // 7F236A74: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F236A78:
    ctx->pc = 0x7F236A78u;
    // 7F236A78: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236A7C:
    ctx->pc = 0x7F236A7Cu;
    // 7F236A7C: bl      0x7F2367A8
    {
            ctx->lr = 0x7F236A80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2367A8u;
                return;
            }
            goto label_7F2367A8;
    }

label_7F236A80:
    ctx->pc = 0x7F236A80u;
    ctx->downcount -= 2;
    // 7F236A80: cmpwi   r3, 0
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

label_7F236A84:
    ctx->pc = 0x7F236A84u;
    // 7F236A84: bc    4, 0, 0x7F236A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236A98;
        }
    }

label_7F236A88:
    ctx->pc = 0x7F236A88u;
    ctx->downcount -= 2;
    // 7F236A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236A8C:
    ctx->pc = 0x7F236A8Cu;
    // 7F236A8C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F236A90u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F236A90:
    ctx->pc = 0x7F236A90u;
    ctx->downcount -= 2;
    // 7F236A90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F236A94:
    ctx->pc = 0x7F236A94u;
    // 7F236A94: b       0x7F236A9C
    {
            goto label_7F236A9C;
    }

label_7F236A98:
    ctx->pc = 0x7F236A98u;
    ctx->downcount -= 1;
    // 7F236A98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236A9C:
    ctx->pc = 0x7F236A9Cu;
    ctx->downcount -= 16;
    // 7F236A9C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236AA0:
    ctx->pc = 0x7F236AA0u;
    // 7F236AA0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236AA4:
    ctx->pc = 0x7F236AA4u;
    // 7F236AA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236AA8:
    ctx->pc = 0x7F236AA8u;
    // 7F236AA8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F236AAC:
    ctx->pc = 0x7F236AACu;
    // 7F236AAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236AB0:
    ctx->pc = 0x7F236AB0u;
    ctx->downcount -= 7;
    // 7F236AB0: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236AB4:
    ctx->pc = 0x7F236AB4u;
    // 7F236AB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236AB8:
    ctx->pc = 0x7F236AB8u;
    // 7F236AB8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F236ABC:
    ctx->pc = 0x7F236ABCu;
    // 7F236ABC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236AC0:
    ctx->pc = 0x7F236AC0u;
    // 7F236AC0: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F236AC4:
    ctx->pc = 0x7F236AC4u;
    // 7F236AC4: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F236AC8:
    ctx->pc = 0x7F236AC8u;
    // 7F236AC8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F236ACCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F236ACC:
    ctx->pc = 0x7F236ACCu;
    ctx->downcount -= 2;
    // 7F236ACC: cmplwi  r3, 0x0000
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

label_7F236AD0:
    ctx->pc = 0x7F236AD0u;
    // 7F236AD0: bc    12, 2, 0x7F236AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236AEC;
        }
    }

label_7F236AD4:
    ctx->pc = 0x7F236AD4u;
    ctx->downcount -= 1;
    // 7F236AD4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F236AD8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F236AD8:
    ctx->pc = 0x7F236AD8u;
    ctx->downcount -= 2;
    // 7F236AD8: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F236ADC:
    ctx->pc = 0x7F236ADCu;
    // 7F236ADC: bl      0x7F3C6780
    {
            ctx->lr = 0x7F236AE0u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F236AE0:
    ctx->pc = 0x7F236AE0u;
    ctx->downcount -= 3;
    // 7F236AE0: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F236AE4:
    ctx->pc = 0x7F236AE4u;
    // 7F236AE4: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F236AE8:
    ctx->pc = 0x7F236AE8u;
    // 7F236AE8: bl      0x7F236B5C
    {
            ctx->lr = 0x7F236AECu;
            goto label_7F236B5C;
    }

label_7F236AEC:
    ctx->pc = 0x7F236AECu;
    ctx->downcount -= 2;
    // 7F236AEC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F236AF0:
    ctx->pc = 0x7F236AF0u;
    // 7F236AF0: bl      0x80025A08
    {
            ctx->lr = 0x7F236AF4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F236AF4:
    ctx->pc = 0x7F236AF4u;
    ctx->downcount -= 9;
    // 7F236AF4: lfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236AF8:
    ctx->pc = 0x7F236AF8u;
    // 7F236AF8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F236AFC:
    ctx->pc = 0x7F236AFCu;
    // 7F236AFC: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236B00:
    ctx->pc = 0x7F236B00u;
    // 7F236B00: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F236B04:
    ctx->pc = 0x7F236B04u;
    // 7F236B04: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236B08:
    ctx->pc = 0x7F236B08u;
    // 7F236B08: stfs     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F236B0C:
    ctx->pc = 0x7F236B0Cu;
    // 7F236B0C: stfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236B10:
    ctx->pc = 0x7F236B10u;
    // 7F236B10: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236B14:
    ctx->pc = 0x7F236B14u;
    // 7F236B14: bl      0x7F2368F4
    {
            ctx->lr = 0x7F236B18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2368F4u;
                return;
            }
            goto label_7F2368F4;
    }

label_7F236B18:
    ctx->pc = 0x7F236B18u;
    ctx->downcount -= 2;
    // 7F236B18: or.   r31, r3, r3
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

label_7F236B1C:
    ctx->pc = 0x7F236B1Cu;
    // 7F236B1C: bc    12, 2, 0x7F236B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236B44;
        }
    }

label_7F236B20:
    ctx->pc = 0x7F236B20u;
    ctx->downcount -= 3;
    // 7F236B20: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F236B24:
    ctx->pc = 0x7F236B24u;
    // 7F236B24: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F236B28:
    ctx->pc = 0x7F236B28u;
    // 7F236B28: bl      0x80025A3C
    {
            ctx->lr = 0x7F236B2Cu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F236B2C:
    ctx->pc = 0x7F236B2Cu;
    ctx->downcount -= 6;
    // 7F236B2C: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F236B30:
    ctx->pc = 0x7F236B30u;
    // 7F236B30: addi    r0, r31, 120
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(120);

label_7F236B34:
    ctx->pc = 0x7F236B34u;
    // 7F236B34: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236B38:
    ctx->pc = 0x7F236B38u;
    // 7F236B38: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236B3C:
    ctx->pc = 0x7F236B3Cu;
    // 7F236B3C: stw     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236B40:
    ctx->pc = 0x7F236B40u;
    // 7F236B40: stw     r0, 240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236B44:
    ctx->pc = 0x7F236B44u;
    ctx->downcount -= 7;
    // 7F236B44: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236B48:
    ctx->pc = 0x7F236B48u;
    // 7F236B48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F236B4C:
    ctx->pc = 0x7F236B4Cu;
    // 7F236B4C: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236B50:
    ctx->pc = 0x7F236B50u;
    // 7F236B50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236B54:
    ctx->pc = 0x7F236B54u;
    // 7F236B54: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F236B58:
    ctx->pc = 0x7F236B58u;
    // 7F236B58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236B5C:
    ctx->pc = 0x7F236B5Cu;
    ctx->downcount -= 17;
    // 7F236B5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236B60:
    ctx->pc = 0x7F236B60u;
    // 7F236B60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236B64:
    ctx->pc = 0x7F236B64u;
    // 7F236B64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236B68:
    ctx->pc = 0x7F236B68u;
    // 7F236B68: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236B6C:
    ctx->pc = 0x7F236B6Cu;
    // 7F236B6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236B70:
    ctx->pc = 0x7F236B70u;
    // 7F236B70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F236B74:
    ctx->pc = 0x7F236B74u;
    // 7F236B74: bl      0x7F236BB0
    {
            ctx->lr = 0x7F236B78u;
            goto label_7F236BB0;
    }

label_7F236B78:
    ctx->pc = 0x7F236B78u;
    ctx->downcount -= 3;
    // 7F236B78: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F236B7C:
    ctx->pc = 0x7F236B7Cu;
    // 7F236B7C: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F236B80:
    ctx->pc = 0x7F236B80u;
    // 7F236B80: bl      0x7F236BB0
    {
            ctx->lr = 0x7F236B84u;
            goto label_7F236BB0;
    }

label_7F236B84:
    ctx->pc = 0x7F236B84u;
    ctx->downcount -= 3;
    // 7F236B84: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F236B88:
    ctx->pc = 0x7F236B88u;
    // 7F236B88: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F236B8C:
    ctx->pc = 0x7F236B8Cu;
    // 7F236B8C: bl      0x7F236BB0
    {
            ctx->lr = 0x7F236B90u;
            goto label_7F236BB0;
    }

label_7F236B90:
    ctx->pc = 0x7F236B90u;
    ctx->downcount -= 3;
    // 7F236B90: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F236B94:
    ctx->pc = 0x7F236B94u;
    // 7F236B94: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F236B98:
    ctx->pc = 0x7F236B98u;
    // 7F236B98: bl      0x7F236BB0
    {
            ctx->lr = 0x7F236B9Cu;
            goto label_7F236BB0;
    }

label_7F236B9C:
    ctx->pc = 0x7F236B9Cu;
    ctx->downcount -= 16;
    // 7F236B9C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236BA0:
    ctx->pc = 0x7F236BA0u;
    // 7F236BA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236BA4:
    ctx->pc = 0x7F236BA4u;
    // 7F236BA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236BA8:
    ctx->pc = 0x7F236BA8u;
    // 7F236BA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236BAC:
    ctx->pc = 0x7F236BACu;
    // 7F236BAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236BB0:
    ctx->pc = 0x7F236BB0u;
    ctx->downcount -= 6;
    // 7F236BB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236BB4:
    ctx->pc = 0x7F236BB4u;
    // 7F236BB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236BB8:
    ctx->pc = 0x7F236BB8u;
    // 7F236BB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236BBC:
    ctx->pc = 0x7F236BBCu;
    // 7F236BBC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F236BC0:
    ctx->pc = 0x7F236BC0u;
    // 7F236BC0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F236BC4:
    ctx->pc = 0x7F236BC4u;
    // 7F236BC4: bl      0x7F236BE0
    {
            ctx->lr = 0x7F236BC8u;
            goto label_7F236BE0;
    }

label_7F236BC8:
    ctx->pc = 0x7F236BC8u;
    ctx->downcount -= 7;
    // 7F236BC8: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F236BC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236BCC:
    ctx->pc = 0x7F236BCCu;
    // 7F236BCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236BD0:
    ctx->pc = 0x7F236BD0u;
    // 7F236BD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F236BD4:
    ctx->pc = 0x7F236BD4u;
    // 7F236BD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236BD8:
    ctx->pc = 0x7F236BD8u;
    // 7F236BD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236BDC:
    ctx->pc = 0x7F236BDCu;
    // 7F236BDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236BE0:
    ctx->pc = 0x7F236BE0u;
    ctx->downcount -= 4;
    // 7F236BE0: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F236BE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F236BE0u);
        if (ctx->exception) return;
    }

label_7F236BE4:
    ctx->pc = 0x7F236BE4u;
    // 7F236BE4: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F236BE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F236BE4u);
        if (ctx->exception) return;
    }

label_7F236BE8:
    ctx->pc = 0x7F236BE8u;
    // 7F236BE8: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236BE8u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F236BEC:
    ctx->pc = 0x7F236BECu;
    // 7F236BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236BF0:
    ctx->pc = 0x7F236BF0u;
    ctx->downcount -= 3;
    // 7F236BF0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F236BF4:
    ctx->pc = 0x7F236BF4u;
    // 7F236BF4: cmpwi   r0, 255
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236BF8:
    ctx->pc = 0x7F236BF8u;
    // 7F236BF8: bc    4, 1, 0x7F236C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236C00;
        }
    }

label_7F236BFC:
    ctx->pc = 0x7F236BFCu;
    ctx->downcount -= 1;
    // 7F236BFC: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F236C00:
    ctx->pc = 0x7F236C00u;
    ctx->downcount -= 2;
    // 7F236C00: extsh. r0, r3
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

label_7F236C04:
    ctx->pc = 0x7F236C04u;
    // 7F236C04: bc    4, 0, 0x7F236C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236C0C;
        }
    }

label_7F236C08:
    ctx->pc = 0x7F236C08u;
    ctx->downcount -= 1;
    // 7F236C08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F236C0C:
    ctx->pc = 0x7F236C0Cu;
    ctx->downcount -= 2;
    // 7F236C0C: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F236C10:
    ctx->pc = 0x7F236C10u;
    // 7F236C10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236C14:
    ctx->pc = 0x7F236C14u;
    ctx->downcount -= 21;
    // 7F236C14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236C18:
    ctx->pc = 0x7F236C18u;
    // 7F236C18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236C1C:
    ctx->pc = 0x7F236C1Cu;
    // 7F236C1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236C20:
    ctx->pc = 0x7F236C20u;
    // 7F236C20: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236C24:
    ctx->pc = 0x7F236C24u;
    // 7F236C24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236C28:
    ctx->pc = 0x7F236C28u;
    // 7F236C28: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F236C2C:
    ctx->pc = 0x7F236C2Cu;
    // 7F236C2C: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F236C30:
    ctx->pc = 0x7F236C30u;
    // 7F236C30: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F236C34:
    ctx->pc = 0x7F236C34u;
    // 7F236C34: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F236C38:
    ctx->pc = 0x7F236C38u;
    // 7F236C38: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F236C3C:
    ctx->pc = 0x7F236C3Cu;
    // 7F236C3C: bl      0x7F236BF0
    {
            ctx->lr = 0x7F236C40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236BF0u;
                return;
            }
            goto label_7F236BF0;
    }

label_7F236C40:
    ctx->pc = 0x7F236C40u;
    ctx->downcount -= 6;
    // 7F236C40: stb     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F236C44:
    ctx->pc = 0x7F236C44u;
    // 7F236C44: lbz     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F236C48:
    ctx->pc = 0x7F236C48u;
    // 7F236C48: lha     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F236C4C:
    ctx->pc = 0x7F236C4Cu;
    // 7F236C4C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F236C50:
    ctx->pc = 0x7F236C50u;
    // 7F236C50: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F236C54:
    ctx->pc = 0x7F236C54u;
    // 7F236C54: bl      0x7F236BF0
    {
            ctx->lr = 0x7F236C58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236BF0u;
                return;
            }
            goto label_7F236BF0;
    }

label_7F236C58:
    ctx->pc = 0x7F236C58u;
    ctx->downcount -= 6;
    // 7F236C58: stb     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F236C5C:
    ctx->pc = 0x7F236C5Cu;
    // 7F236C5C: lbz     r3, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F236C60:
    ctx->pc = 0x7F236C60u;
    // 7F236C60: lha     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F236C64:
    ctx->pc = 0x7F236C64u;
    // 7F236C64: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F236C68:
    ctx->pc = 0x7F236C68u;
    // 7F236C68: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F236C6C:
    ctx->pc = 0x7F236C6Cu;
    // 7F236C6C: bl      0x7F236BF0
    {
            ctx->lr = 0x7F236C70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236BF0u;
                return;
            }
            goto label_7F236BF0;
    }

label_7F236C70:
    ctx->pc = 0x7F236C70u;
    ctx->downcount -= 17;
    // 7F236C70: stb     r3, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F236C74:
    ctx->pc = 0x7F236C74u;
    // 7F236C74: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236C78:
    ctx->pc = 0x7F236C78u;
    // 7F236C78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236C7C:
    ctx->pc = 0x7F236C7Cu;
    // 7F236C7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236C80:
    ctx->pc = 0x7F236C80u;
    // 7F236C80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F236C84:
    ctx->pc = 0x7F236C84u;
    // 7F236C84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236C88:
    ctx->pc = 0x7F236C88u;
    ctx->downcount -= 32;
    // 7F236C88: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236C8C:
    ctx->pc = 0x7F236C8Cu;
    // 7F236C8C: xoris   r7, r5, 0x8000
    ctx->gpr[7] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F236C90:
    ctx->pc = 0x7F236C90u;
    // 7F236C90: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F236C94:
    ctx->pc = 0x7F236C94u;
    // 7F236C94: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236C98:
    ctx->pc = 0x7F236C98u;
    // 7F236C98: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F236C9C:
    ctx->pc = 0x7F236C9Cu;
    // 7F236C9C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F236CA0:
    ctx->pc = 0x7F236CA0u;
    // 7F236CA0: lfd     f4, 19144(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236CA0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19144);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236CA4:
    ctx->pc = 0x7F236CA4u;
    // 7F236CA4: addi    r8, r6, 19152
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(19152);

label_7F236CA8:
    ctx->pc = 0x7F236CA8u;
    // 7F236CA8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236CAC:
    ctx->pc = 0x7F236CACu;
    // 7F236CAC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236CB0:
    ctx->pc = 0x7F236CB0u;
    // 7F236CB0: addi    r6, r5, 19156
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(19156);

label_7F236CB4:
    ctx->pc = 0x7F236CB4u;
    // 7F236CB4: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F236CB4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236CB8:
    ctx->pc = 0x7F236CB8u;
    // 7F236CB8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236CB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236CBC:
    ctx->pc = 0x7F236CBCu;
    // 7F236CBC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236CC0:
    ctx->pc = 0x7F236CC0u;
    // 7F236CC0: stw     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F236CC4:
    ctx->pc = 0x7F236CC4u;
    // 7F236CC4: fsubs   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F236CC4u)) return;
    ppc_fsubs(ctx, 1, 0, 4);

label_7F236CC8:
    ctx->pc = 0x7F236CC8u;
    // 7F236CC8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236CC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236CCC:
    ctx->pc = 0x7F236CCCu;
    // 7F236CCC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236CD0:
    ctx->pc = 0x7F236CD0u;
    // 7F236CD0: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F236CD0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F236CD4:
    ctx->pc = 0x7F236CD4u;
    // 7F236CD4: fmadds f2, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236CD4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F236CD8:
    ctx->pc = 0x7F236CD8u;
    // 7F236CD8: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236CDC:
    ctx->pc = 0x7F236CDCu;
    // 7F236CDC: lfs     f0, 19160(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236CDCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236CE0:
    ctx->pc = 0x7F236CE0u;
    // 7F236CE0: stfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236CE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F236CE4:
    ctx->pc = 0x7F236CE4u;
    // 7F236CE4: fsubs   f2, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F236CE4u)) return;
    ppc_fsubs(ctx, 2, 1, 4);

label_7F236CE8:
    ctx->pc = 0x7F236CE8u;
    // 7F236CE8: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236CE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236CEC:
    ctx->pc = 0x7F236CECu;
    // 7F236CEC: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F236CECu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F236CF0:
    ctx->pc = 0x7F236CF0u;
    // 7F236CF0: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236CF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236CF4:
    ctx->pc = 0x7F236CF4u;
    // 7F236CF4: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236CF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236CF8:
    ctx->pc = 0x7F236CF8u;
    // 7F236CF8: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236CF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236CFC:
    ctx->pc = 0x7F236CFCu;
    // 7F236CFC: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236CFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236D00:
    ctx->pc = 0x7F236D00u;
    // 7F236D00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F236D04:
    ctx->pc = 0x7F236D04u;
    // 7F236D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236D08:
    ctx->pc = 0x7F236D08u;
    ctx->downcount -= 27;
    // 7F236D08: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236D0C:
    ctx->pc = 0x7F236D0Cu;
    // 7F236D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236D10:
    ctx->pc = 0x7F236D10u;
    // 7F236D10: lis     r6, 32592
    ctx->gpr[6] = ((u32)(s32)(32592) << 16);

label_7F236D14:
    ctx->pc = 0x7F236D14u;
    // 7F236D14: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236D18:
    ctx->pc = 0x7F236D18u;
    // 7F236D18: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F236D1C:
    ctx->pc = 0x7F236D1Cu;
    // 7F236D1C: addi    r6, r6, -21852
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21852);

label_7F236D20:
    ctx->pc = 0x7F236D20u;
    // 7F236D20: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236D24:
    ctx->pc = 0x7F236D24u;
    // 7F236D24: add   r31, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F236D28:
    ctx->pc = 0x7F236D28u;
    // 7F236D28: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F236D2C:
    ctx->pc = 0x7F236D2Cu;
    // 7F236D2C: addi    r30, r6, 1024
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(1024);

label_7F236D30:
    ctx->pc = 0x7F236D30u;
    // 7F236D30: add   r7, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F236D34:
    ctx->pc = 0x7F236D34u;
    // 7F236D34: add   r30, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F236D38:
    ctx->pc = 0x7F236D38u;
    // 7F236D38: lwz     r29, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F236D3C:
    ctx->pc = 0x7F236D3Cu;
    // 7F236D3C: lwz     r5, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F236D40:
    ctx->pc = 0x7F236D40u;
    // 7F236D40: cmpwi   r29, 80
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F236D44:
    ctx->pc = 0x7F236D44u;
    // 7F236D44: addi    r4, r5, 48
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(48);

label_7F236D48:
    ctx->pc = 0x7F236D48u;
    // 7F236D48: bc    12, 1, 0x7F236DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236DB4;
        }
    }

label_7F236D4C:
    ctx->pc = 0x7F236D4Cu;
    ctx->downcount -= 3;
    // 7F236D4C: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F236D50:
    ctx->pc = 0x7F236D50u;
    // 7F236D50: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236D54:
    ctx->pc = 0x7F236D54u;
    // 7F236D54: bl      0x7F236C88
    {
            ctx->lr = 0x7F236D58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236C88u;
                return;
            }
            goto label_7F236C88;
    }

label_7F236D58:
    ctx->pc = 0x7F236D58u;
    ctx->downcount -= 23;
    // 7F236D58: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F236D5C:
    ctx->pc = 0x7F236D5Cu;
    // 7F236D5C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F236D60:
    ctx->pc = 0x7F236D60u;
    // 7F236D60: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236D64:
    ctx->pc = 0x7F236D64u;
    // 7F236D64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236D68:
    ctx->pc = 0x7F236D68u;
    // 7F236D68: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236D6C:
    ctx->pc = 0x7F236D6Cu;
    // 7F236D6C: lfd     f1, 19144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236D6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19144);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236D70:
    ctx->pc = 0x7F236D70u;
    // 7F236D70: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236D74:
    ctx->pc = 0x7F236D74u;
    // 7F236D74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236D78:
    ctx->pc = 0x7F236D78u;
    // 7F236D78: lfs     f2, 19164(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236D78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236D7C:
    ctx->pc = 0x7F236D7Cu;
    // 7F236D7C: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F236D80:
    ctx->pc = 0x7F236D80u;
    // 7F236D80: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236D84:
    ctx->pc = 0x7F236D84u;
    // 7F236D84: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F236D84u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F236D88:
    ctx->pc = 0x7F236D88u;
    // 7F236D88: lfs     f0, 19152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F236D88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236D8C:
    ctx->pc = 0x7F236D8Cu;
    // 7F236D8C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236D8Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F236D90:
    ctx->pc = 0x7F236D90u;
    // 7F236D90: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236D90u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F236D94:
    ctx->pc = 0x7F236D94u;
    // 7F236D94: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236D94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236D98:
    ctx->pc = 0x7F236D98u;
    // 7F236D98: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236D9C:
    ctx->pc = 0x7F236D9Cu;
    // 7F236D9C: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236DA0:
    ctx->pc = 0x7F236DA0u;
    // 7F236DA0: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F236DA4:
    ctx->pc = 0x7F236DA4u;
    // 7F236DA4: sth     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F236DA8:
    ctx->pc = 0x7F236DA8u;
    // 7F236DA8: sth     r3, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F236DAC:
    ctx->pc = 0x7F236DACu;
    // 7F236DAC: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236DB0:
    ctx->pc = 0x7F236DB0u;
    // 7F236DB0: b       0x7F236E38
    {
            goto label_7F236E38;
    }

label_7F236DB4:
    ctx->pc = 0x7F236DB4u;
    ctx->downcount -= 22;
    // 7F236DB4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236DB8:
    ctx->pc = 0x7F236DB8u;
    // 7F236DB8: li      r0, -300
    ctx->gpr[0] = (u32)(s32)(-300);

label_7F236DBC:
    ctx->pc = 0x7F236DBCu;
    // 7F236DBC: addi    r6, r4, 19136
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(19136);

label_7F236DC0:
    ctx->pc = 0x7F236DC0u;
    // 7F236DC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236DC4:
    ctx->pc = 0x7F236DC4u;
    // 7F236DC4: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236DC8:
    ctx->pc = 0x7F236DC8u;
    // 7F236DC8: addi    r5, r4, 19160
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19160);

label_7F236DCC:
    ctx->pc = 0x7F236DCCu;
    // 7F236DCC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F236DCCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F236DD0:
    ctx->pc = 0x7F236DD0u;
    // 7F236DD0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F236DD4:
    ctx->pc = 0x7F236DD4u;
    // 7F236DD4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236DD4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236DD8:
    ctx->pc = 0x7F236DD8u;
    // 7F236DD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F236DDC:
    ctx->pc = 0x7F236DDCu;
    // 7F236DDC: stfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F236DDCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236DE0:
    ctx->pc = 0x7F236DE0u;
    // 7F236DE0: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F236DE0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236DE4:
    ctx->pc = 0x7F236DE4u;
    // 7F236DE4: stfs     f1, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F236DE4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F236DE8:
    ctx->pc = 0x7F236DE8u;
    // 7F236DE8: stfs     f0, 12(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F236DE8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F236DEC:
    ctx->pc = 0x7F236DECu;
    // 7F236DEC: sth     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F236DF0:
    ctx->pc = 0x7F236DF0u;
    // 7F236DF0: sth     r4, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F236DF4:
    ctx->pc = 0x7F236DF4u;
    // 7F236DF4: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F236DF8:
    ctx->pc = 0x7F236DF8u;
    // 7F236DF8: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F236DFC:
    ctx->pc = 0x7F236DFCu;
    // 7F236DFC: stb     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F236E00:
    ctx->pc = 0x7F236E00u;
    // 7F236E00: lwz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236E04:
    ctx->pc = 0x7F236E04u;
    // 7F236E04: cmpwi   r0, 0
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

label_7F236E08:
    ctx->pc = 0x7F236E08u;
    // 7F236E08: bc    4, 2, 0x7F236E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F236E1C;
        }
    }

label_7F236E0C:
    ctx->pc = 0x7F236E0Cu;
    ctx->downcount -= 4;
    // 7F236E0C: lis     r3, 32547
    ctx->gpr[3] = ((u32)(s32)(32547) << 16);

label_7F236E10:
    ctx->pc = 0x7F236E10u;
    // 7F236E10: addi    r0, r3, 28476
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28476);

label_7F236E14:
    ctx->pc = 0x7F236E14u;
    // 7F236E14: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236E18:
    ctx->pc = 0x7F236E18u;
    // 7F236E18: b       0x7F236E38
    {
            goto label_7F236E38;
    }

label_7F236E1C:
    ctx->pc = 0x7F236E1Cu;
    ctx->downcount -= 6;
    // 7F236E1C: lwz     r4, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236E20:
    ctx->pc = 0x7F236E20u;
    // 7F236E20: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F236E24:
    ctx->pc = 0x7F236E24u;
    // 7F236E24: stw     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236E28:
    ctx->pc = 0x7F236E28u;
    // 7F236E28: lwz     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236E2C:
    ctx->pc = 0x7F236E2Cu;
    // 7F236E2C: cmpwi   r0, 3
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

label_7F236E30:
    ctx->pc = 0x7F236E30u;
    // 7F236E30: bc    12, 0, 0x7F236E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236E38;
        }
    }

label_7F236E34:
    ctx->pc = 0x7F236E34u;
    ctx->downcount -= 1;
    // 7F236E34: bl      0x7F3C8210
    {
            ctx->lr = 0x7F236E38u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F236E38:
    ctx->pc = 0x7F236E38u;
    ctx->downcount -= 16;
    // 7F236E38: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236E3C:
    ctx->pc = 0x7F236E3Cu;
    // 7F236E3C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236E40:
    ctx->pc = 0x7F236E40u;
    // 7F236E40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236E44:
    ctx->pc = 0x7F236E44u;
    // 7F236E44: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F236E48:
    ctx->pc = 0x7F236E48u;
    // 7F236E48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236E4C:
    ctx->pc = 0x7F236E4Cu;
    ctx->downcount -= 33;
    // 7F236E4C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236E50:
    ctx->pc = 0x7F236E50u;
    // 7F236E50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236E54:
    ctx->pc = 0x7F236E54u;
    // 7F236E54: lis     r5, 32592
    ctx->gpr[5] = ((u32)(s32)(32592) << 16);

label_7F236E58:
    ctx->pc = 0x7F236E58u;
    // 7F236E58: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236E5C:
    ctx->pc = 0x7F236E5Cu;
    // 7F236E5C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F236E60:
    ctx->pc = 0x7F236E60u;
    // 7F236E60: addi    r6, r5, -21852
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-21852);

label_7F236E64:
    ctx->pc = 0x7F236E64u;
    // 7F236E64: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236E68:
    ctx->pc = 0x7F236E68u;
    // 7F236E68: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236E6C:
    ctx->pc = 0x7F236E6Cu;
    // 7F236E6C: rlwinm r31, r4, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F236E70:
    ctx->pc = 0x7F236E70u;
    // 7F236E70: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F236E74:
    ctx->pc = 0x7F236E74u;
    // 7F236E74: add   r30, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F236E78:
    ctx->pc = 0x7F236E78u;
    // 7F236E78: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F236E7C:
    ctx->pc = 0x7F236E7Cu;
    // 7F236E7C: addi    r28, r6, 1024
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(1024);

label_7F236E80:
    ctx->pc = 0x7F236E80u;
    // 7F236E80: add   r28, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F236E84:
    ctx->pc = 0x7F236E84u;
    // 7F236E84: lwz     r29, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F236E88:
    ctx->pc = 0x7F236E88u;
    // 7F236E88: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F236E8C:
    ctx->pc = 0x7F236E8Cu;
    // 7F236E8C: add   r3, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236E90:
    ctx->pc = 0x7F236E90u;
    // 7F236E90: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236E94:
    ctx->pc = 0x7F236E94u;
    // 7F236E94: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236E98:
    ctx->pc = 0x7F236E98u;
    // 7F236E98: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236E9C:
    ctx->pc = 0x7F236E9Cu;
    // 7F236E9C: lwz     r4, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F236EA0:
    ctx->pc = 0x7F236EA0u;
    // 7F236EA0: addi    r4, r4, 48
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(48);

label_7F236EA4:
    ctx->pc = 0x7F236EA4u;
    // 7F236EA4: bl      0x7F236C88
    {
            ctx->lr = 0x7F236EA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236C88u;
                return;
            }
            goto label_7F236C88;
    }

label_7F236EA8:
    ctx->pc = 0x7F236EA8u;
    ctx->downcount -= 25;
    // 7F236EA8: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F236EAC:
    ctx->pc = 0x7F236EACu;
    // 7F236EAC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F236EB0:
    ctx->pc = 0x7F236EB0u;
    // 7F236EB0: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236EB4:
    ctx->pc = 0x7F236EB4u;
    // 7F236EB4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236EB8:
    ctx->pc = 0x7F236EB8u;
    // 7F236EB8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236EBC:
    ctx->pc = 0x7F236EBCu;
    // 7F236EBC: lfd     f1, 19144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236EBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19144);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236EC0:
    ctx->pc = 0x7F236EC0u;
    // 7F236EC0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236EC4:
    ctx->pc = 0x7F236EC4u;
    // 7F236EC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236EC8:
    ctx->pc = 0x7F236EC8u;
    // 7F236EC8: addi    r4, r3, 19152
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19152);

label_7F236ECC:
    ctx->pc = 0x7F236ECCu;
    // 7F236ECC: lfs     f2, 19164(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236ECCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236ED0:
    ctx->pc = 0x7F236ED0u;
    // 7F236ED0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236ED0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236ED4:
    ctx->pc = 0x7F236ED4u;
    // 7F236ED4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F236ED8:
    ctx->pc = 0x7F236ED8u;
    // 7F236ED8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F236EDC:
    ctx->pc = 0x7F236EDCu;
    // 7F236EDC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F236EDCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F236EE0:
    ctx->pc = 0x7F236EE0u;
    // 7F236EE0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236EE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236EE4:
    ctx->pc = 0x7F236EE4u;
    // 7F236EE4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236EE8:
    ctx->pc = 0x7F236EE8u;
    // 7F236EE8: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236EE8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F236EEC:
    ctx->pc = 0x7F236EECu;
    // 7F236EEC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236EECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F236EF0:
    ctx->pc = 0x7F236EF0u;
    // 7F236EF0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236EF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236EF4:
    ctx->pc = 0x7F236EF4u;
    // 7F236EF4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236EF8:
    ctx->pc = 0x7F236EF8u;
    // 7F236EF8: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F236EFC:
    ctx->pc = 0x7F236EFCu;
    // 7F236EFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236F00:
    ctx->pc = 0x7F236F00u;
    // 7F236F00: sth     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F236F04:
    ctx->pc = 0x7F236F04u;
    // 7F236F04: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236F08:
    ctx->pc = 0x7F236F08u;
    // 7F236F08: bl      0x7F236C14
    {
            ctx->lr = 0x7F236F0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236C14u;
                return;
            }
            goto label_7F236C14;
    }

label_7F236F0C:
    ctx->pc = 0x7F236F0Cu;
    ctx->downcount -= 2;
    // 7F236F0C: cmpwi   r29, 50
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

label_7F236F10:
    ctx->pc = 0x7F236F10u;
    // 7F236F10: bc    12, 0, 0x7F236F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F236F20;
        }
    }

label_7F236F14:
    ctx->pc = 0x7F236F14u;
    ctx->downcount -= 3;
    // 7F236F14: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F236F18:
    ctx->pc = 0x7F236F18u;
    // 7F236F18: addi    r0, r4, 27912
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27912);

label_7F236F1C:
    ctx->pc = 0x7F236F1Cu;
    // 7F236F1C: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236F20:
    ctx->pc = 0x7F236F20u;
    ctx->downcount -= 18;
    // 7F236F20: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F236F24:
    ctx->pc = 0x7F236F24u;
    // 7F236F24: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236F28:
    ctx->pc = 0x7F236F28u;
    // 7F236F28: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F236F2C:
    ctx->pc = 0x7F236F2Cu;
    // 7F236F2C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236F30:
    ctx->pc = 0x7F236F30u;
    // 7F236F30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F236F34:
    ctx->pc = 0x7F236F34u;
    // 7F236F34: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F236F38:
    ctx->pc = 0x7F236F38u;
    // 7F236F38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F236F3C:
    ctx->pc = 0x7F236F3Cu;
    ctx->downcount -= 28;
    // 7F236F3C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F236F40:
    ctx->pc = 0x7F236F40u;
    // 7F236F40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F236F44:
    ctx->pc = 0x7F236F44u;
    // 7F236F44: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236F48:
    ctx->pc = 0x7F236F48u;
    // 7F236F48: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F236F4C:
    ctx->pc = 0x7F236F4Cu;
    // 7F236F4C: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F236F50:
    ctx->pc = 0x7F236F50u;
    // 7F236F50: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F236F54:
    ctx->pc = 0x7F236F54u;
    // 7F236F54: rlwinm r31, r4, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F236F58:
    ctx->pc = 0x7F236F58u;
    // 7F236F58: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F236F5C:
    ctx->pc = 0x7F236F5Cu;
    // 7F236F5C: add   r30, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F236F60:
    ctx->pc = 0x7F236F60u;
    // 7F236F60: addi    r3, r3, -21852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F236F64:
    ctx->pc = 0x7F236F64u;
    // 7F236F64: addi    r28, r3, 1024
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(1024);

label_7F236F68:
    ctx->pc = 0x7F236F68u;
    // 7F236F68: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F236F6C:
    ctx->pc = 0x7F236F6Cu;
    // 7F236F6C: add   r28, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F236F70:
    ctx->pc = 0x7F236F70u;
    // 7F236F70: lwz     r29, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F236F74:
    ctx->pc = 0x7F236F74u;
    // 7F236F74: lwz     r5, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F236F78:
    ctx->pc = 0x7F236F78u;
    // 7F236F78: cmpwi   r29, 0
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

label_7F236F7C:
    ctx->pc = 0x7F236F7Cu;
    // 7F236F7C: addi    r4, r5, 48
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(48);

label_7F236F80:
    ctx->pc = 0x7F236F80u;
    // 7F236F80: bc    12, 0, 0x7F237010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237010;
        }
    }

label_7F236F84:
    ctx->pc = 0x7F236F84u;
    ctx->downcount -= 7;
    // 7F236F84: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F236F88:
    ctx->pc = 0x7F236F88u;
    // 7F236F88: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F236F8C:
    ctx->pc = 0x7F236F8Cu;
    // 7F236F8C: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F236F90:
    ctx->pc = 0x7F236F90u;
    // 7F236F90: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236F94:
    ctx->pc = 0x7F236F94u;
    // 7F236F94: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236F98:
    ctx->pc = 0x7F236F98u;
    // 7F236F98: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F236F9C:
    ctx->pc = 0x7F236F9Cu;
    // 7F236F9C: bl      0x7F236C88
    {
            ctx->lr = 0x7F236FA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236C88u;
                return;
            }
            goto label_7F236C88;
    }

label_7F236FA0:
    ctx->pc = 0x7F236FA0u;
    ctx->downcount -= 25;
    // 7F236FA0: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F236FA4:
    ctx->pc = 0x7F236FA4u;
    // 7F236FA4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F236FA8:
    ctx->pc = 0x7F236FA8u;
    // 7F236FA8: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F236FAC:
    ctx->pc = 0x7F236FACu;
    // 7F236FAC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F236FB0:
    ctx->pc = 0x7F236FB0u;
    // 7F236FB0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F236FB4:
    ctx->pc = 0x7F236FB4u;
    // 7F236FB4: lfd     f1, 19144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236FB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19144);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236FB8:
    ctx->pc = 0x7F236FB8u;
    // 7F236FB8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F236FBC:
    ctx->pc = 0x7F236FBCu;
    // 7F236FBC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F236FC0:
    ctx->pc = 0x7F236FC0u;
    // 7F236FC0: addi    r4, r3, 19152
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19152);

label_7F236FC4:
    ctx->pc = 0x7F236FC4u;
    // 7F236FC4: lfs     f2, 19164(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F236FC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F236FC8:
    ctx->pc = 0x7F236FC8u;
    // 7F236FC8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F236FCC:
    ctx->pc = 0x7F236FCCu;
    // 7F236FCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F236FD0:
    ctx->pc = 0x7F236FD0u;
    // 7F236FD0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F236FD4:
    ctx->pc = 0x7F236FD4u;
    // 7F236FD4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F236FD4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F236FD8:
    ctx->pc = 0x7F236FD8u;
    // 7F236FD8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F236FD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F236FDC:
    ctx->pc = 0x7F236FDCu;
    // 7F236FDC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F236FE0:
    ctx->pc = 0x7F236FE0u;
    // 7F236FE0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236FE0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F236FE4:
    ctx->pc = 0x7F236FE4u;
    // 7F236FE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F236FE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F236FE8:
    ctx->pc = 0x7F236FE8u;
    // 7F236FE8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236FEC:
    ctx->pc = 0x7F236FECu;
    // 7F236FEC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F236FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F236FF0:
    ctx->pc = 0x7F236FF0u;
    // 7F236FF0: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F236FF4:
    ctx->pc = 0x7F236FF4u;
    // 7F236FF4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F236FF8:
    ctx->pc = 0x7F236FF8u;
    // 7F236FF8: sth     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F236FFC:
    ctx->pc = 0x7F236FFCu;
    // 7F236FFC: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F237000:
    ctx->pc = 0x7F237000u;
    // 7F237000: bl      0x7F236C14
    {
            ctx->lr = 0x7F237004u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F236C14u;
                return;
            }
            goto label_7F236C14;
    }

label_7F237004:
    ctx->pc = 0x7F237004u;
    ctx->downcount -= 3;
    // 7F237004: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F237008:
    ctx->pc = 0x7F237008u;
    // 7F237008: addi    r0, r4, 28236
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28236);

label_7F23700C:
    ctx->pc = 0x7F23700Cu;
    // 7F23700C: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237010:
    ctx->pc = 0x7F237010u;
    ctx->downcount -= 18;
    // 7F237010: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F237014:
    ctx->pc = 0x7F237014u;
    // 7F237014: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237018:
    ctx->pc = 0x7F237018u;
    // 7F237018: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F23701C:
    ctx->pc = 0x7F23701Cu;
    // 7F23701C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237020:
    ctx->pc = 0x7F237020u;
    // 7F237020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237024:
    ctx->pc = 0x7F237024u;
    // 7F237024: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F237028:
    ctx->pc = 0x7F237028u;
    // 7F237028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23702C:
    ctx->pc = 0x7F23702Cu;
    ctx->downcount -= 18;
    // 7F23702C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237030:
    ctx->pc = 0x7F237030u;
    // 7F237030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237034:
    ctx->pc = 0x7F237034u;
    // 7F237034: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237038:
    ctx->pc = 0x7F237038u;
    // 7F237038: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F23703C:
    ctx->pc = 0x7F23703Cu;
    // 7F23703C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237040:
    ctx->pc = 0x7F237040u;
    // 7F237040: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237044:
    ctx->pc = 0x7F237044u;
    // 7F237044: cmplwi  r0, 0x0000
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

label_7F237048:
    ctx->pc = 0x7F237048u;
    // 7F237048: bc    4, 2, 0x7F237068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237068;
        }
    }

label_7F23704C:
    ctx->pc = 0x7F23704Cu;
    ctx->downcount -= 4;
    // 7F23704C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F237050:
    ctx->pc = 0x7F237050u;
    // 7F237050: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F237054:
    ctx->pc = 0x7F237054u;
    // 7F237054: addi    r4, r4, -254
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-254);

label_7F237058:
    ctx->pc = 0x7F237058u;
    // 7F237058: bl      0x7F3C8058
    {
            ctx->lr = 0x7F23705Cu;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F23705C:
    ctx->pc = 0x7F23705Cu;
    ctx->downcount -= 2;
    // 7F23705C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F237060:
    ctx->pc = 0x7F237060u;
    // 7F237060: bl      0x7F3C8210
    {
            ctx->lr = 0x7F237064u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F237064:
    ctx->pc = 0x7F237064u;
    ctx->downcount -= 1;
    // 7F237064: b       0x7F23713C
    {
            goto label_7F23713C;
    }

label_7F237068:
    ctx->pc = 0x7F237068u;
    ctx->downcount -= 5;
    // 7F237068: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F23706C:
    ctx->pc = 0x7F23706Cu;
    // 7F23706C: lwz     r31, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237070:
    ctx->pc = 0x7F237070u;
    // 7F237070: lwz     r4, 18308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237074:
    ctx->pc = 0x7F237074u;
    // 7F237074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237078:
    ctx->pc = 0x7F237078u;
    // 7F237078: bl      0x7F237150
    {
            ctx->lr = 0x7F23707Cu;
            goto label_7F237150;
    }

label_7F23707C:
    ctx->pc = 0x7F23707Cu;
    ctx->downcount -= 8;
    // 7F23707C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237080:
    ctx->pc = 0x7F237080u;
    // 7F237080: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F237084:
    ctx->pc = 0x7F237084u;
    // 7F237084: addi    r3, r3, -21852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F237088:
    ctx->pc = 0x7F237088u;
    // 7F237088: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F23708C:
    ctx->pc = 0x7F23708Cu;
    // 7F23708C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F237090:
    ctx->pc = 0x7F237090u;
    // 7F237090: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F237094:
    ctx->pc = 0x7F237094u;
    // 7F237094: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237098:
    ctx->pc = 0x7F237098u;
    // 7F237098: bl      0x8000519C
    {
            ctx->lr = 0x7F23709Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F23709C:
    ctx->pc = 0x7F23709Cu;
    ctx->downcount -= 10;
    // 7F23709C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2370A0:
    ctx->pc = 0x7F2370A0u;
    // 7F2370A0: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2370A4:
    ctx->pc = 0x7F2370A4u;
    // 7F2370A4: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F2370A8:
    ctx->pc = 0x7F2370A8u;
    // 7F2370A8: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F2370AC:
    ctx->pc = 0x7F2370ACu;
    // 7F2370AC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2370B0:
    ctx->pc = 0x7F2370B0u;
    // 7F2370B0: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2370B4:
    ctx->pc = 0x7F2370B4u;
    // 7F2370B4: addi    r28, r4, 1024
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(1024);

label_7F2370B8:
    ctx->pc = 0x7F2370B8u;
    // 7F2370B8: lwz     r4, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2370BC:
    ctx->pc = 0x7F2370BCu;
    // 7F2370BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2370C0:
    ctx->pc = 0x7F2370C0u;
    // 7F2370C0: bl      0x8000519C
    {
            ctx->lr = 0x7F2370C4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2370C4:
    ctx->pc = 0x7F2370C4u;
    ctx->downcount -= 2;
    // 7F2370C4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2370C8:
    ctx->pc = 0x7F2370C8u;
    // 7F2370C8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2370CC:
    ctx->downcount -= 7;
    // 7F2370CC: addi    r0, r29, 72
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(72);

label_7F2370D0:
    // 7F2370D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2370D4:
    ctx->pc = 0x7F2370D4u;
    // 7F2370D4: lwzx    r12, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2370D8:
    // 7F2370D8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2370DC:
    ctx->pc = 0x7F2370DCu;
    // 7F2370DC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2370E0:
    ctx->pc = 0x7F2370E0u;
    // 7F2370E0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2370E4u;
            ctx->pc = target;
            return;
        }
    }

label_7F2370E4:
    ctx->downcount -= 4;
    // 7F2370E4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F2370E8:
    // 7F2370E8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2370EC:
    // 7F2370EC: cmpwi   r27, 3
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

label_7F2370F0:
    // 7F2370F0: bc    12, 0, 0x7F2370CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2370CCu;
                return;
            }
            goto label_7F2370CC;
        }
    }

label_7F2370F4:
    ctx->pc = 0x7F2370F4u;
    ctx->downcount -= 11;
    // 7F2370F4: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2370F8:
    ctx->pc = 0x7F2370F8u;
    // 7F2370F8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F2370FC:
    ctx->pc = 0x7F2370FCu;
    // 7F2370FC: addi    r4, r3, -21852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F237100:
    ctx->pc = 0x7F237100u;
    // 7F237100: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F237104:
    ctx->pc = 0x7F237104u;
    // 7F237104: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F237108:
    ctx->pc = 0x7F237108u;
    // 7F237108: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23710C:
    ctx->pc = 0x7F23710Cu;
    // 7F23710C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237110:
    ctx->pc = 0x7F237110u;
    // 7F237110: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F237114:
    ctx->pc = 0x7F237114u;
    // 7F237114: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F237118:
    ctx->pc = 0x7F237118u;
    // 7F237118: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23711C:
    ctx->pc = 0x7F23711Cu;
    // 7F23711C: bl      0x8000519C
    {
            ctx->lr = 0x7F237120u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F237120:
    ctx->pc = 0x7F237120u;
    ctx->downcount -= 7;
    // 7F237120: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237124:
    ctx->pc = 0x7F237124u;
    // 7F237124: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F237128:
    ctx->pc = 0x7F237128u;
    // 7F237128: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F23712C:
    ctx->pc = 0x7F23712Cu;
    // 7F23712C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F237130:
    ctx->pc = 0x7F237130u;
    // 7F237130: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F237134:
    ctx->pc = 0x7F237134u;
    // 7F237134: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237138:
    ctx->pc = 0x7F237138u;
    // 7F237138: bl      0x8000519C
    {
            ctx->lr = 0x7F23713Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F23713C:
    ctx->pc = 0x7F23713Cu;
    ctx->downcount -= 16;
    // 7F23713C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F237140:
    ctx->pc = 0x7F237140u;
    // 7F237140: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237144:
    ctx->pc = 0x7F237144u;
    // 7F237144: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237148:
    ctx->pc = 0x7F237148u;
    // 7F237148: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F23714C:
    ctx->pc = 0x7F23714Cu;
    // 7F23714C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237150:
    ctx->pc = 0x7F237150u;
    ctx->downcount -= 7;
    // 7F237150: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237154:
    ctx->pc = 0x7F237154u;
    // 7F237154: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237158:
    ctx->pc = 0x7F237158u;
    // 7F237158: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23715C:
    ctx->pc = 0x7F23715Cu;
    // 7F23715C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F237160:
    ctx->pc = 0x7F237160u;
    // 7F237160: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237164:
    ctx->pc = 0x7F237164u;
    // 7F237164: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F237168:
    ctx->pc = 0x7F237168u;
    // 7F237168: bl      0x7F01B234
    {
            ctx->lr = 0x7F23716Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F23716C:
    ctx->pc = 0x7F23716Cu;
    ctx->downcount -= 7;
    // 7F23716C: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237170:
    ctx->pc = 0x7F237170u;
    // 7F237170: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237174:
    ctx->pc = 0x7F237174u;
    // 7F237174: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237178:
    ctx->pc = 0x7F237178u;
    // 7F237178: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23717C:
    ctx->pc = 0x7F23717Cu;
    // 7F23717C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F237180:
    ctx->pc = 0x7F237180u;
    // 7F237180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237184:
    ctx->pc = 0x7F237184u;
    ctx->downcount -= 6;
    // 7F237184: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237188:
    ctx->pc = 0x7F237188u;
    // 7F237188: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23718C:
    ctx->pc = 0x7F23718Cu;
    // 7F23718C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237190:
    ctx->pc = 0x7F237190u;
    // 7F237190: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237194:
    ctx->pc = 0x7F237194u;
    // 7F237194: cmplwi  r3, 0x0000
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

label_7F237198:
    ctx->pc = 0x7F237198u;
    // 7F237198: bc    12, 2, 0x7F2371A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2371A0;
        }
    }

label_7F23719C:
    ctx->pc = 0x7F23719Cu;
    ctx->downcount -= 1;
    // 7F23719C: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2371A0u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2371A0:
    ctx->pc = 0x7F2371A0u;
    ctx->downcount -= 5;
    // 7F2371A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2371A4:
    ctx->pc = 0x7F2371A4u;
    // 7F2371A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2371A8:
    ctx->pc = 0x7F2371A8u;
    // 7F2371A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2371AC:
    ctx->pc = 0x7F2371ACu;
    // 7F2371AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2371B0:
    ctx->pc = 0x7F2371B0u;
    ctx->downcount -= 19;
    // 7F2371B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2371B4:
    ctx->pc = 0x7F2371B4u;
    // 7F2371B4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2371B8:
    ctx->pc = 0x7F2371B8u;
    // 7F2371B8: addi    r7, r6, 19136
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(19136);

label_7F2371BC:
    ctx->pc = 0x7F2371BCu;
    // 7F2371BC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2371C0:
    ctx->pc = 0x7F2371C0u;
    // 7F2371C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2371C4:
    ctx->pc = 0x7F2371C4u;
    // 7F2371C4: addi    r6, r5, 19160
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(19160);

label_7F2371C8:
    ctx->pc = 0x7F2371C8u;
    // 7F2371C8: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F2371CC:
    ctx->pc = 0x7F2371CCu;
    // 7F2371CC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2371D0:
    ctx->pc = 0x7F2371D0u;
    // 7F2371D0: lwz     r8, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2371D4:
    ctx->pc = 0x7F2371D4u;
    // 7F2371D4: addi    r5, r4, 28476
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28476);

label_7F2371D8:
    ctx->pc = 0x7F2371D8u;
    // 7F2371D8: addi    r12, r3, 60
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(60);

label_7F2371DC:
    ctx->pc = 0x7F2371DCu;
    // 7F2371DC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2371E0:
    ctx->pc = 0x7F2371E0u;
    // 7F2371E0: lwz     r10, 184(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(184);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2371E4:
    ctx->pc = 0x7F2371E4u;
    // 7F2371E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2371E8:
    ctx->pc = 0x7F2371E8u;
    // 7F2371E8: lwz     r11, 192(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(192);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2371EC:
    ctx->pc = 0x7F2371ECu;
    // 7F2371EC: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2371ECu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2371F0:
    ctx->pc = 0x7F2371F0u;
    // 7F2371F0: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2371F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2371F4:
    ctx->pc = 0x7F2371F4u;
    // 7F2371F4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2371F8:
    ctx->downcount -= 31;
    // 7F2371F8: neg  r6, r31
    {
        u32 a = ctx->gpr[31];
        ctx->gpr[6] = (~a) + 1u;
    }

label_7F2371FC:
    // 7F2371FC: addi    r0, r4, 72
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(72);

label_7F237200:
    // 7F237200: mulli   r6, r6, 30
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)30);

label_7F237204:
    // 7F237204: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F237208:
    // 7F237208: li      r8, 4096
    ctx->gpr[8] = (u32)(s32)(4096);

label_7F23720C:
    // 7F23720C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F237210:
    ctx->pc = 0x7F237210u;
    // 7F237210: stw     r6, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237214:
    // 7F237214: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F237218:
    // 7F237218: addi    r12, r12, 4
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(4);

label_7F23721C:
    // 7F23721C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F237220:
    ctx->pc = 0x7F237220u;
    // 7F237220: stfs     f1, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F237220u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F237224:
    // 7F237224: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F237228:
    ctx->pc = 0x7F237228u;
    // 7F237228: stfs     f1, 4(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F237228u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F23722C:
    ctx->pc = 0x7F23722Cu;
    // 7F23722C: stfs     f1, 8(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F23722Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F237230:
    ctx->pc = 0x7F237230u;
    // 7F237230: stfs     f0, 12(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F237230u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237234:
    // 7F237234: addi    r10, r10, 16
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(16);

label_7F237238:
    ctx->pc = 0x7F237238u;
    // 7F237238: sth     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F23723C:
    ctx->pc = 0x7F23723Cu;
    // 7F23723C: sth     r8, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F237240:
    ctx->pc = 0x7F237240u;
    // 7F237240: sth     r9, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F237244:
    ctx->pc = 0x7F237244u;
    // 7F237244: sth     r8, 14(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F237248:
    ctx->pc = 0x7F237248u;
    // 7F237248: sth     r7, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F23724C:
    ctx->pc = 0x7F23724Cu;
    // 7F23724C: sth     r7, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F237250:
    ctx->pc = 0x7F237250u;
    // 7F237250: stb     r9, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F237254:
    ctx->pc = 0x7F237254u;
    // 7F237254: stb     r9, 1(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F237258:
    ctx->pc = 0x7F237258u;
    // 7F237258: stb     r9, 2(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F23725C:
    ctx->pc = 0x7F23725Cu;
    // 7F23725C: stb     r6, 3(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F237260:
    // 7F237260: addi    r11, r11, 16
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(16);

label_7F237264:
    ctx->pc = 0x7F237264u;
    // 7F237264: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F237268:
    // 7F237268: bc    16, 0, 0x7F2371F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2371F8u;
                return;
            }
            goto label_7F2371F8;
        }
    }

label_7F23726C:
    ctx->pc = 0x7F23726Cu;
    ctx->downcount -= 3;
    // 7F23726C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237270:
    ctx->pc = 0x7F237270u;
    // 7F237270: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F237274:
    ctx->pc = 0x7F237274u;
    // 7F237274: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237278:
    ctx->pc = 0x7F237278u;
    ctx->downcount -= 18;
    // 7F237278: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F23727C:
    ctx->pc = 0x7F23727Cu;
    // 7F23727C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237280:
    ctx->pc = 0x7F237280u;
    // 7F237280: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237284:
    ctx->pc = 0x7F237284u;
    // 7F237284: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F237288:
    ctx->pc = 0x7F237288u;
    // 7F237288: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F23728C:
    ctx->pc = 0x7F23728Cu;
    // 7F23728C: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237290:
    ctx->pc = 0x7F237290u;
    // 7F237290: cmplwi  r0, 0x0000
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

label_7F237294:
    ctx->pc = 0x7F237294u;
    // 7F237294: bc    4, 2, 0x7F2372A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2372A0;
        }
    }

label_7F237298:
    ctx->pc = 0x7F237298u;
    ctx->downcount -= 2;
    // 7F237298: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F23729C:
    ctx->pc = 0x7F23729Cu;
    // 7F23729C: b       0x7F23733C
    {
            goto label_7F23733C;
    }

label_7F2372A0:
    ctx->pc = 0x7F2372A0u;
    ctx->downcount -= 8;
    // 7F2372A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2372A4:
    ctx->pc = 0x7F2372A4u;
    // 7F2372A4: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F2372A8:
    ctx->pc = 0x7F2372A8u;
    // 7F2372A8: stw     r0, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2372AC:
    ctx->pc = 0x7F2372ACu;
    // 7F2372AC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2372B0:
    ctx->pc = 0x7F2372B0u;
    // 7F2372B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2372B4:
    ctx->pc = 0x7F2372B4u;
    // 7F2372B4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2372B8:
    ctx->pc = 0x7F2372B8u;
    // 7F2372B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2372BC:
    ctx->pc = 0x7F2372BCu;
    // 7F2372BC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F2372C0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F2372C0:
    ctx->pc = 0x7F2372C0u;
    ctx->downcount -= 3;
    // 7F2372C0: or.   r30, r3, r3
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

label_7F2372C4:
    ctx->pc = 0x7F2372C4u;
    // 7F2372C4: stw     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2372C8:
    ctx->pc = 0x7F2372C8u;
    // 7F2372C8: bc    4, 2, 0x7F2372D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2372D4;
        }
    }

label_7F2372CC:
    ctx->pc = 0x7F2372CCu;
    ctx->downcount -= 2;
    // 7F2372CC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2372D0:
    ctx->pc = 0x7F2372D0u;
    // 7F2372D0: b       0x7F23733C
    {
            goto label_7F23733C;
    }

label_7F2372D4:
    ctx->pc = 0x7F2372D4u;
    ctx->downcount -= 3;
    // 7F2372D4: lis     r3, 209
    ctx->gpr[3] = ((u32)(s32)(209) << 16);

label_7F2372D8:
    ctx->pc = 0x7F2372D8u;
    // 7F2372D8: addi    r3, r3, 25158
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25158);

label_7F2372DC:
    ctx->pc = 0x7F2372DCu;
    // 7F2372DC: bl      0x7F3B6420
    {
            ctx->lr = 0x7F2372E0u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F2372E0:
    ctx->pc = 0x7F2372E0u;
    ctx->downcount -= 2;
    // 7F2372E0: or.   r31, r3, r3
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

label_7F2372E4:
    ctx->pc = 0x7F2372E4u;
    // 7F2372E4: bc    4, 2, 0x7F2372F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2372F0;
        }
    }

label_7F2372E8:
    ctx->pc = 0x7F2372E8u;
    ctx->downcount -= 2;
    // 7F2372E8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2372EC:
    ctx->pc = 0x7F2372ECu;
    // 7F2372EC: b       0x7F23733C
    {
            goto label_7F23733C;
    }

label_7F2372F0:
    ctx->pc = 0x7F2372F0u;
    ctx->downcount -= 3;
    // 7F2372F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2372F4:
    ctx->pc = 0x7F2372F4u;
    // 7F2372F4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2372F8:
    ctx->pc = 0x7F2372F8u;
    // 7F2372F8: bl      0x7F3C2534
    {
            ctx->lr = 0x7F2372FCu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F2372FC:
    ctx->pc = 0x7F2372FCu;
    ctx->downcount -= 7;
    // 7F2372FC: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_7F237300:
    ctx->pc = 0x7F237300u;
    // 7F237300: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F237304:
    ctx->pc = 0x7F237304u;
    // 7F237304: stw     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237308:
    ctx->pc = 0x7F237308u;
    // 7F237308: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F23730C:
    ctx->pc = 0x7F23730Cu;
    // 7F23730C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237310:
    ctx->pc = 0x7F237310u;
    // 7F237310: stw     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237314:
    ctx->pc = 0x7F237314u;
    // 7F237314: bl      0x7F2371B0
    {
            ctx->lr = 0x7F237318u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2371B0u;
                return;
            }
            goto label_7F2371B0;
    }

label_7F237318:
    ctx->pc = 0x7F237318u;
    ctx->downcount -= 4;
    // 7F237318: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23731C:
    ctx->pc = 0x7F23731Cu;
    // 7F23731C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F237320:
    ctx->pc = 0x7F237320u;
    // 7F237320: lwz     r4, 184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237324:
    ctx->pc = 0x7F237324u;
    // 7F237324: bl      0x8000519C
    {
            ctx->lr = 0x7F237328u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F237328:
    ctx->pc = 0x7F237328u;
    ctx->downcount -= 4;
    // 7F237328: lwz     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23732C:
    ctx->pc = 0x7F23732Cu;
    // 7F23732C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F237330:
    ctx->pc = 0x7F237330u;
    // 7F237330: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237334:
    ctx->pc = 0x7F237334u;
    // 7F237334: bl      0x8000519C
    {
            ctx->lr = 0x7F237338u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F237338:
    ctx->pc = 0x7F237338u;
    ctx->downcount -= 1;
    // 7F237338: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F23733C:
    ctx->pc = 0x7F23733Cu;
    ctx->downcount -= 16;
    // 7F23733C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F237340:
    ctx->pc = 0x7F237340u;
    // 7F237340: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237344:
    ctx->pc = 0x7F237344u;
    // 7F237344: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237348:
    ctx->pc = 0x7F237348u;
    // 7F237348: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F23734C:
    ctx->pc = 0x7F23734Cu;
    // 7F23734C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237350:
    ctx->pc = 0x7F237350u;
    ctx->downcount -= 20;
    // 7F237350: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237354:
    ctx->pc = 0x7F237354u;
    // 7F237354: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237358:
    ctx->pc = 0x7F237358u;
    // 7F237358: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F23735C:
    ctx->pc = 0x7F23735Cu;
    // 7F23735C: li      r5, 92
    ctx->gpr[5] = (u32)(s32)(92);

label_7F237360:
    ctx->pc = 0x7F237360u;
    // 7F237360: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237364:
    ctx->pc = 0x7F237364u;
    // 7F237364: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F237368:
    ctx->pc = 0x7F237368u;
    // 7F237368: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F23736C:
    ctx->pc = 0x7F23736Cu;
    // 7F23736C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237370:
    ctx->pc = 0x7F237370u;
    // 7F237370: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F237374:
    ctx->pc = 0x7F237374u;
    // 7F237374: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F237378u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F237378:
    ctx->pc = 0x7F237378u;
    ctx->downcount -= 2;
    // 7F237378: or.   r31, r3, r3
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

label_7F23737C:
    ctx->pc = 0x7F23737Cu;
    // 7F23737C: bc    12, 2, 0x7F2373E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2373E8;
        }
    }

label_7F237380:
    ctx->pc = 0x7F237380u;
    ctx->downcount -= 8;
    // 7F237380: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F237384:
    ctx->pc = 0x7F237384u;
    // 7F237384: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F237388:
    ctx->pc = 0x7F237388u;
    // 7F237388: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23738C:
    ctx->pc = 0x7F23738Cu;
    // 7F23738C: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F237390:
    ctx->pc = 0x7F237390u;
    // 7F237390: addi    r4, r4, 28716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28716);

label_7F237394:
    ctx->pc = 0x7F237394u;
    // 7F237394: stw     r30, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F237398:
    ctx->pc = 0x7F237398u;
    // 7F237398: addi    r5, r5, 29060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29060);

label_7F23739C:
    ctx->pc = 0x7F23739Cu;
    // 7F23739C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2373A0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2373A0:
    ctx->pc = 0x7F2373A0u;
    ctx->downcount -= 12;
    // 7F2373A0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2373A4:
    ctx->pc = 0x7F2373A4u;
    // 7F2373A4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2373A8:
    ctx->pc = 0x7F2373A8u;
    // 7F2373A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2373AC:
    ctx->pc = 0x7F2373ACu;
    // 7F2373AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2373B0:
    ctx->pc = 0x7F2373B0u;
    // 7F2373B0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F2373B4:
    ctx->pc = 0x7F2373B4u;
    // 7F2373B4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2373B8:
    ctx->pc = 0x7F2373B8u;
    // 7F2373B8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2373BC:
    ctx->pc = 0x7F2373BCu;
    // 7F2373BC: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2373C0:
    ctx->pc = 0x7F2373C0u;
    // 7F2373C0: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2373C4:
    ctx->pc = 0x7F2373C4u;
    // 7F2373C4: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2373C8:
    ctx->pc = 0x7F2373C8u;
    // 7F2373C8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2373CC:
    ctx->pc = 0x7F2373CCu;
    // 7F2373CC: bl      0x7F237278
    {
            ctx->lr = 0x7F2373D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237278u;
                return;
            }
            goto label_7F237278;
    }

label_7F2373D0:
    ctx->pc = 0x7F2373D0u;
    ctx->downcount -= 2;
    // 7F2373D0: cmpwi   r3, 0
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

label_7F2373D4:
    ctx->pc = 0x7F2373D4u;
    // 7F2373D4: bc    4, 0, 0x7F2373E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2373E8;
        }
    }

label_7F2373D8:
    ctx->pc = 0x7F2373D8u;
    ctx->downcount -= 2;
    // 7F2373D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2373DC:
    ctx->pc = 0x7F2373DCu;
    // 7F2373DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2373E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2373E0:
    ctx->pc = 0x7F2373E0u;
    ctx->downcount -= 2;
    // 7F2373E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2373E4:
    ctx->pc = 0x7F2373E4u;
    // 7F2373E4: b       0x7F2373EC
    {
            goto label_7F2373EC;
    }

label_7F2373E8:
    ctx->pc = 0x7F2373E8u;
    ctx->downcount -= 1;
    // 7F2373E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2373EC:
    ctx->pc = 0x7F2373ECu;
    ctx->downcount -= 16;
    // 7F2373EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2373F0:
    ctx->pc = 0x7F2373F0u;
    // 7F2373F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2373F4:
    ctx->pc = 0x7F2373F4u;
    // 7F2373F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2373F8:
    ctx->pc = 0x7F2373F8u;
    // 7F2373F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2373FC:
    ctx->pc = 0x7F2373FCu;
    // 7F2373FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237400:
    ctx->pc = 0x7F237400u;
    ctx->downcount -= 10;
    // 7F237400: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237404:
    ctx->pc = 0x7F237404u;
    // 7F237404: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237408:
    ctx->pc = 0x7F237408u;
    // 7F237408: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23740C:
    ctx->pc = 0x7F23740Cu;
    // 7F23740C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F23740Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F237410:
    ctx->pc = 0x7F237410u;
    // 7F237410: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F237410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F237410u);
        if (ctx->exception) return;
    }

label_7F237414:
    ctx->pc = 0x7F237414u;
    // 7F237414: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F237418:
    ctx->pc = 0x7F237418u;
    // 7F237418: lhz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F23741C:
    ctx->pc = 0x7F23741Cu;
    // 7F23741C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237420:
    ctx->pc = 0x7F237420u;
    // 7F237420: rlwinm. r0, r0, 0, 31, 31
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

label_7F237424:
    ctx->pc = 0x7F237424u;
    // 7F237424: bc    12, 2, 0x7F237454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237454;
        }
    }

label_7F237428:
    ctx->pc = 0x7F237428u;
    ctx->downcount -= 10;
    // 7F237428: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F23742C:
    ctx->pc = 0x7F23742Cu;
    // 7F23742C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F237430:
    ctx->pc = 0x7F237430u;
    // 7F237430: addi    r5, r3, 19168
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(19168);

label_7F237434:
    ctx->pc = 0x7F237434u;
    // 7F237434: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F237434u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F237438:
    ctx->pc = 0x7F237438u;
    // 7F237438: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F23743C:
    ctx->pc = 0x7F23743Cu;
    // 7F23743C: addi    r4, r4, -4824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4824);

label_7F237440:
    ctx->pc = 0x7F237440u;
    // 7F237440: stfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237440u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F237444:
    ctx->pc = 0x7F237444u;
    // 7F237444: stfs     f1, 148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237444u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F237448:
    ctx->pc = 0x7F237448u;
    // 7F237448: stfs     f1, 152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237448u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F23744C:
    ctx->pc = 0x7F23744Cu;
    // 7F23744C: bl      0x800261FC
    {
            ctx->lr = 0x7F237450u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F237450:
    ctx->pc = 0x7F237450u;
    ctx->downcount -= 1;
    // 7F237450: b       0x7F2374D8
    {
            goto label_7F2374D8;
    }

label_7F237454:
    ctx->pc = 0x7F237454u;
    ctx->downcount -= 3;
    // 7F237454: lwz     r7, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F237458:
    ctx->pc = 0x7F237458u;
    // 7F237458: cmplwi  r7, 0x0000
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

label_7F23745C:
    ctx->pc = 0x7F23745Cu;
    // 7F23745C: bc    4, 2, 0x7F237470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237470;
        }
    }

label_7F237460:
    ctx->pc = 0x7F237460u;
    ctx->downcount -= 4;
    // 7F237460: lfs     f1, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237460u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F237464:
    ctx->pc = 0x7F237464u;
    // 7F237464: lfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237464u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F237468:
    ctx->pc = 0x7F237468u;
    // 7F237468: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F237468u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_7F23746C:
    ctx->pc = 0x7F23746Cu;
    // 7F23746C: b       0x7F2374B4
    {
            goto label_7F2374B4;
    }

label_7F237470:
    ctx->pc = 0x7F237470u;
    ctx->downcount -= 12;
    // 7F237470: lwz     r6, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F237474:
    ctx->pc = 0x7F237474u;
    // 7F237474: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F237478:
    ctx->pc = 0x7F237478u;
    // 7F237478: lwz     r0, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23747C:
    ctx->pc = 0x7F23747Cu;
    // 7F23747C: addi    r4, r31, 112
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(112);

label_7F237480:
    ctx->pc = 0x7F237480u;
    // 7F237480: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F237484:
    ctx->pc = 0x7F237484u;
    // 7F237484: stw     r6, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237488:
    ctx->pc = 0x7F237488u;
    // 7F237488: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23748C:
    ctx->pc = 0x7F23748Cu;
    // 7F23748C: lwz     r6, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F237490:
    ctx->pc = 0x7F237490u;
    // 7F237490: lwz     r0, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237494:
    ctx->pc = 0x7F237494u;
    // 7F237494: stw     r6, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237498:
    ctx->pc = 0x7F237498u;
    // 7F237498: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23749C:
    ctx->pc = 0x7F23749Cu;
    // 7F23749C: bl      0x800261D8
    {
            ctx->lr = 0x7F2374A0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2374A0:
    ctx->pc = 0x7F2374A0u;
    ctx->downcount -= 3;
    // 7F2374A0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2374A4:
    ctx->pc = 0x7F2374A4u;
    // 7F2374A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2374A8:
    ctx->pc = 0x7F2374A8u;
    // 7F2374A8: bl      0x800260DC
    {
            ctx->lr = 0x7F2374ACu;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F2374AC:
    ctx->pc = 0x7F2374ACu;
    ctx->downcount -= 1;
    // 7F2374AC: bl      0x7F00F5B8
    {
            ctx->lr = 0x7F2374B0u;
            ctx->pc = 0x7F00F5B8u;
            return;
    }

label_7F2374B0:
    ctx->pc = 0x7F2374B0u;
    ctx->downcount -= 1;
    // 7F2374B0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2374B0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2374B4:
    ctx->pc = 0x7F2374B4u;
    ctx->downcount -= 4;
    // 7F2374B4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2374B4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F2374B8:
    ctx->pc = 0x7F2374B8u;
    // 7F2374B8: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F2374BC:
    ctx->pc = 0x7F2374BCu;
    // 7F2374BC: addi    r4, r31, 144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(144);

label_7F2374C0:
    ctx->pc = 0x7F2374C0u;
    // 7F2374C0: bl      0x800261FC
    {
            ctx->lr = 0x7F2374C4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2374C4:
    ctx->pc = 0x7F2374C4u;
    ctx->downcount -= 5;
    // 7F2374C4: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2374C4u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F2374C8:
    ctx->pc = 0x7F2374C8u;
    // 7F2374C8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2374CC:
    ctx->pc = 0x7F2374CCu;
    // 7F2374CC: addi    r4, r3, -4824
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2374D0:
    ctx->pc = 0x7F2374D0u;
    // 7F2374D0: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F2374D4:
    ctx->pc = 0x7F2374D4u;
    // 7F2374D4: bl      0x800261FC
    {
            ctx->lr = 0x7F2374D8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2374D8:
    ctx->pc = 0x7F2374D8u;
    ctx->downcount -= 8;
    // 7F2374D8: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2374D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2374D8u);
        if (ctx->exception) return;
    }

label_7F2374DC:
    ctx->pc = 0x7F2374DCu;
    // 7F2374DC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2374E0:
    ctx->pc = 0x7F2374E0u;
    // 7F2374E0: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2374E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2374E4:
    ctx->pc = 0x7F2374E4u;
    // 7F2374E4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2374E8:
    ctx->pc = 0x7F2374E8u;
    // 7F2374E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2374EC:
    ctx->pc = 0x7F2374ECu;
    // 7F2374EC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2374F0:
    ctx->pc = 0x7F2374F0u;
    // 7F2374F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2374F4:
    ctx->pc = 0x7F2374F4u;
    ctx->downcount -= 6;
    // 7F2374F4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2374F8:
    ctx->pc = 0x7F2374F8u;
    // 7F2374F8: lwzu     r0, -10336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10336);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2374FC:
    ctx->pc = 0x7F2374FCu;
    // 7F2374FC: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237500:
    ctx->pc = 0x7F237500u;
    // 7F237500: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237504:
    ctx->pc = 0x7F237504u;
    // 7F237504: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237508:
    ctx->pc = 0x7F237508u;
    // 7F237508: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23750C:
    ctx->pc = 0x7F23750Cu;
    ctx->downcount -= 4;
    // 7F23750C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F237510:
    ctx->pc = 0x7F237510u;
    // 7F237510: lwzu     r0, -10336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10336);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F237514:
    ctx->pc = 0x7F237514u;
    // 7F237514: cmplw   r0, r3
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

label_7F237518:
    ctx->pc = 0x7F237518u;
    // 7F237518: bc    4, 2, 0x7F237528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237528;
        }
    }

label_7F23751C:
    ctx->pc = 0x7F23751Cu;
    ctx->downcount -= 3;
    // 7F23751C: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237520:
    ctx->pc = 0x7F237520u;
    // 7F237520: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237524:
    ctx->pc = 0x7F237524u;
    // 7F237524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237528:
    ctx->pc = 0x7F237528u;
    ctx->downcount -= 2;
    // 7F237528: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F23752C:
    ctx->pc = 0x7F23752Cu;
    // 7F23752C: b       0x7F237548
    {
            goto label_7F237548;
    }

label_7F237530:
    ctx->pc = 0x7F237530u;
    ctx->downcount -= 3;
    // 7F237530: lwz     r0, 168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237534:
    // 7F237534: cmplw   r0, r3
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

label_7F237538:
    // 7F237538: bc    4, 2, 0x7F237544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237544;
        }
    }

label_7F23753C:
    ctx->pc = 0x7F23753Cu;
    ctx->downcount -= 2;
    // 7F23753C: lwz     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237540:
    ctx->pc = 0x7F237540u;
    // 7F237540: stw     r0, 168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237544:
    ctx->pc = 0x7F237544u;
    ctx->downcount -= 1;
    // 7F237544: lwz     r4, 168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237548:
    ctx->downcount -= 2;
    // 7F237548: cmplwi  r4, 0x0000
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

label_7F23754C:
    // 7F23754C: bc    4, 2, 0x7F237530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237530u;
                return;
            }
            goto label_7F237530;
        }
    }

label_7F237550:
    ctx->pc = 0x7F237550u;
    ctx->downcount -= 1;
    // 7F237550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237554:
    ctx->pc = 0x7F237554u;
    ctx->downcount -= 16;
    // 7F237554: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237558:
    ctx->pc = 0x7F237558u;
    // 7F237558: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F23755C:
    ctx->pc = 0x7F23755Cu;
    // 7F23755C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F237560:
    ctx->pc = 0x7F237560u;
    // 7F237560: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237564:
    ctx->pc = 0x7F237564u;
    // 7F237564: lhz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F237568:
    ctx->pc = 0x7F237568u;
    // 7F237568: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F23756C:
    ctx->pc = 0x7F23756Cu;
    // 7F23756C: sth     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F237570:
    ctx->pc = 0x7F237570u;
    // 7F237570: lfs     f0, 172(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237570u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F237574:
    ctx->pc = 0x7F237574u;
    // 7F237574: stfsu     f0, -4824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F237574u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4824);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
        ctx->gpr[4] = ea;
    }

label_7F237578:
    ctx->pc = 0x7F237578u;
    // 7F237578: lfs     f0, 176(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237578u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23757C:
    ctx->pc = 0x7F23757Cu;
    // 7F23757C: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23757Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237580:
    ctx->pc = 0x7F237580u;
    // 7F237580: lfs     f0, 180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237580u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F237584:
    ctx->pc = 0x7F237584u;
    // 7F237584: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F237584u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237588:
    ctx->pc = 0x7F237588u;
    // 7F237588: lfs     f0, 184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237588u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23758C:
    ctx->pc = 0x7F23758Cu;
    // 7F23758C: stfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F23758Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237590:
    ctx->pc = 0x7F237590u;
    // 7F237590: bl      0x7F23750C
    {
            ctx->lr = 0x7F237594u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F23750Cu;
                return;
            }
            goto label_7F23750C;
    }

label_7F237594:
    ctx->pc = 0x7F237594u;
    ctx->downcount -= 5;
    // 7F237594: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237598:
    ctx->pc = 0x7F237598u;
    // 7F237598: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23759C:
    ctx->pc = 0x7F23759Cu;
    // 7F23759C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2375A0:
    ctx->pc = 0x7F2375A0u;
    // 7F2375A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2375A4:
    ctx->pc = 0x7F2375A4u;
    ctx->downcount -= 5;
    // 7F2375A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2375A8:
    ctx->pc = 0x7F2375A8u;
    // 7F2375A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2375AC:
    ctx->pc = 0x7F2375ACu;
    // 7F2375AC: cmpwi   r4, 3
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

label_7F2375B0:
    ctx->pc = 0x7F2375B0u;
    // 7F2375B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2375B4:
    ctx->pc = 0x7F2375B4u;
    // 7F2375B4: bc    12, 2, 0x7F23762C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F23762C;
        }
    }

label_7F2375B8:
    ctx->pc = 0x7F2375B8u;
    ctx->downcount -= 1;
    // 7F2375B8: bc    4, 0, 0x7F2375D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2375D4;
        }
    }

label_7F2375BC:
    ctx->pc = 0x7F2375BCu;
    ctx->downcount -= 2;
    // 7F2375BC: cmpwi   r4, 1
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

label_7F2375C0:
    ctx->pc = 0x7F2375C0u;
    // 7F2375C0: bc    12, 2, 0x7F2375F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2375F8;
        }
    }

label_7F2375C4:
    ctx->pc = 0x7F2375C4u;
    ctx->downcount -= 1;
    // 7F2375C4: bc    4, 0, 0x7F237608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237608;
        }
    }

label_7F2375C8:
    ctx->pc = 0x7F2375C8u;
    ctx->downcount -= 2;
    // 7F2375C8: cmpwi   r4, 0
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

label_7F2375CC:
    ctx->pc = 0x7F2375CCu;
    // 7F2375CC: bc    4, 0, 0x7F2375E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2375E8;
        }
    }

label_7F2375D0:
    ctx->pc = 0x7F2375D0u;
    ctx->downcount -= 1;
    // 7F2375D0: b       0x7F2376B8
    {
            goto label_7F2376B8;
    }

label_7F2375D4:
    ctx->pc = 0x7F2375D4u;
    ctx->downcount -= 4;
    // 7F2375D4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F2375D8:
    ctx->pc = 0x7F2375D8u;
    // 7F2375D8: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_7F2375DC:
    ctx->pc = 0x7F2375DCu;
    // 7F2375DC: cmpw    r4, r0
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

label_7F2375E0:
    ctx->pc = 0x7F2375E0u;
    // 7F2375E0: bc    12, 2, 0x7F237690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237690;
        }
    }

label_7F2375E4:
    ctx->pc = 0x7F2375E4u;
    ctx->downcount -= 1;
    // 7F2375E4: b       0x7F2376B8
    {
            goto label_7F2376B8;
    }

label_7F2375E8:
    ctx->pc = 0x7F2375E8u;
    ctx->downcount -= 4;
    // 7F2375E8: lhz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2375EC:
    ctx->pc = 0x7F2375ECu;
    // 7F2375EC: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F2375F0:
    ctx->pc = 0x7F2375F0u;
    // 7F2375F0: sth     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2375F4:
    ctx->pc = 0x7F2375F4u;
    // 7F2375F4: b       0x7F2376C0
    {
            goto label_7F2376C0;
    }

label_7F2375F8:
    ctx->pc = 0x7F2375F8u;
    ctx->downcount -= 4;
    // 7F2375F8: lhz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2375FC:
    ctx->pc = 0x7F2375FCu;
    // 7F2375FC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F237600:
    ctx->pc = 0x7F237600u;
    // 7F237600: sth     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F237604:
    ctx->pc = 0x7F237604u;
    // 7F237604: b       0x7F2376C0
    {
            goto label_7F2376C0;
    }

label_7F237608:
    ctx->pc = 0x7F237608u;
    ctx->downcount -= 9;
    // 7F237608: lwz     r4, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F23760C:
    ctx->pc = 0x7F23760Cu;
    // 7F23760C: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237610:
    ctx->pc = 0x7F237610u;
    // 7F237610: stw     r4, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237614:
    ctx->pc = 0x7F237614u;
    // 7F237614: stw     r0, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237618:
    ctx->pc = 0x7F237618u;
    // 7F237618: lwz     r4, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F23761C:
    ctx->pc = 0x7F23761Cu;
    // 7F23761C: lwz     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237620:
    ctx->pc = 0x7F237620u;
    // 7F237620: stw     r4, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237624:
    ctx->pc = 0x7F237624u;
    // 7F237624: stw     r0, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237628:
    ctx->pc = 0x7F237628u;
    // 7F237628: b       0x7F2376C0
    {
            goto label_7F2376C0;
    }

label_7F23762C:
    ctx->pc = 0x7F23762Cu;
    ctx->downcount -= 25;
    // 7F23762C: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237630:
    ctx->pc = 0x7F237630u;
    // 7F237630: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F237634:
    ctx->pc = 0x7F237634u;
    // 7F237634: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F237638:
    ctx->pc = 0x7F237638u;
    // 7F237638: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23763C:
    ctx->pc = 0x7F23763Cu;
    // 7F23763C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F237640:
    ctx->pc = 0x7F237640u;
    // 7F237640: lfd     f1, 19176(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F237640u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(19176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F237644:
    ctx->pc = 0x7F237644u;
    // 7F237644: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237648:
    ctx->pc = 0x7F237648u;
    // 7F237648: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F237648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23764C:
    ctx->pc = 0x7F23764Cu;
    // 7F23764C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237650:
    ctx->pc = 0x7F237650u;
    // 7F237650: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F237650u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F237654:
    ctx->pc = 0x7F237654u;
    // 7F237654: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237658:
    ctx->pc = 0x7F237658u;
    // 7F237658: stfs     f0, 128(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237658u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23765C:
    ctx->pc = 0x7F23765Cu;
    // 7F23765C: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237660:
    ctx->pc = 0x7F237660u;
    // 7F237660: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F237664:
    ctx->pc = 0x7F237664u;
    // 7F237664: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237668:
    ctx->pc = 0x7F237668u;
    // 7F237668: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F237668u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F23766C:
    ctx->pc = 0x7F23766Cu;
    // 7F23766C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F23766Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F237670:
    ctx->pc = 0x7F237670u;
    // 7F237670: stfs     f0, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237670u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237674:
    ctx->pc = 0x7F237674u;
    // 7F237674: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237678:
    ctx->pc = 0x7F237678u;
    // 7F237678: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F23767C:
    ctx->pc = 0x7F23767Cu;
    // 7F23767C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237680:
    ctx->pc = 0x7F237680u;
    // 7F237680: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F237680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F237684:
    ctx->pc = 0x7F237684u;
    // 7F237684: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F237684u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F237688:
    ctx->pc = 0x7F237688u;
    // 7F237688: stfs     f0, 136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237688u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F23768C:
    ctx->pc = 0x7F23768Cu;
    // 7F23768C: b       0x7F2376C0
    {
            goto label_7F2376C0;
    }

label_7F237690:
    ctx->pc = 0x7F237690u;
    ctx->downcount -= 5;
    // 7F237690: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F237694:
    ctx->pc = 0x7F237694u;
    // 7F237694: addi    r6, r3, 44
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(44);

label_7F237698:
    ctx->pc = 0x7F237698u;
    // 7F237698: addi    r4, r5, -4
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F23769C:
    ctx->pc = 0x7F23769Cu;
    // 7F23769C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2376A0:
    loop_7F2376A0(ctx);
    if (ctx->pc == 0x7F2376B4u) goto label_7F2376B4;
    return;
label_7F2376A4:
    ctx->pc = 0x7F2376A4u;
    // 7F2376A4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2376A8:
    ctx->pc = 0x7F2376A8u;
    // 7F2376A8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2376AC:
    ctx->pc = 0x7F2376ACu;
    // 7F2376AC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_7F2376B0:
    // 7F2376B0: bc    16, 0, 0x7F2376A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2376A0u;
                return;
            }
            goto label_7F2376A0;
        }
    }

label_7F2376B4:
    ctx->pc = 0x7F2376B4u;
    ctx->downcount -= 1;
    // 7F2376B4: b       0x7F2376C0
    {
            goto label_7F2376C0;
    }

label_7F2376B8:
    ctx->pc = 0x7F2376B8u;
    ctx->downcount -= 1;
    // 7F2376B8: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F2376BCu;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F2376BC:
    ctx->pc = 0x7F2376BCu;
    ctx->downcount -= 1;
    // 7F2376BC: b       0x7F2376C4
    {
            goto label_7F2376C4;
    }

label_7F2376C0:
    ctx->pc = 0x7F2376C0u;
    ctx->downcount -= 1;
    // 7F2376C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2376C4:
    ctx->pc = 0x7F2376C4u;
    ctx->downcount -= 5;
    // 7F2376C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2376C8:
    ctx->pc = 0x7F2376C8u;
    // 7F2376C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2376CC:
    ctx->pc = 0x7F2376CCu;
    // 7F2376CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2376D0:
    ctx->pc = 0x7F2376D0u;
    // 7F2376D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2376D4:
    ctx->pc = 0x7F2376D4u;
    ctx->downcount -= 20;
    // 7F2376D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2376D8:
    ctx->pc = 0x7F2376D8u;
    // 7F2376D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2376DC:
    ctx->pc = 0x7F2376DCu;
    // 7F2376DC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2376E0:
    ctx->pc = 0x7F2376E0u;
    // 7F2376E0: li      r5, 188
    ctx->gpr[5] = (u32)(s32)(188);

label_7F2376E4:
    ctx->pc = 0x7F2376E4u;
    // 7F2376E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2376E8:
    ctx->pc = 0x7F2376E8u;
    // 7F2376E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2376EC:
    ctx->pc = 0x7F2376ECu;
    // 7F2376EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2376F0:
    ctx->pc = 0x7F2376F0u;
    // 7F2376F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2376F4:
    ctx->pc = 0x7F2376F4u;
    // 7F2376F4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2376F8:
    ctx->pc = 0x7F2376F8u;
    // 7F2376F8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2376FCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2376FC:
    ctx->pc = 0x7F2376FCu;
    ctx->downcount -= 2;
    // 7F2376FC: or.   r31, r3, r3
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

label_7F237700:
    ctx->pc = 0x7F237700u;
    // 7F237700: bc    12, 2, 0x7F237824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237824;
        }
    }

label_7F237704:
    ctx->pc = 0x7F237704u;
    ctx->downcount -= 5;
    // 7F237704: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F237708:
    ctx->pc = 0x7F237708u;
    // 7F237708: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F23770C:
    ctx->pc = 0x7F23770Cu;
    // 7F23770C: addi    r4, r4, 29696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29696);

label_7F237710:
    ctx->pc = 0x7F237710u;
    // 7F237710: addi    r5, r5, 30036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30036);

label_7F237714:
    ctx->pc = 0x7F237714u;
    // 7F237714: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F237718u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F237718:
    ctx->pc = 0x7F237718u;
    ctx->downcount -= 47;
    // 7F237718: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F23771C:
    ctx->pc = 0x7F23771Cu;
    // 7F23771C: lis     r5, 32572
    ctx->gpr[5] = ((u32)(s32)(32572) << 16);

label_7F237720:
    ctx->pc = 0x7F237720u;
    // 7F237720: addi    r8, r5, 32548
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(32548);

label_7F237724:
    ctx->pc = 0x7F237724u;
    // 7F237724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F237728:
    ctx->pc = 0x7F237728u;
    // 7F237728: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F23772C:
    ctx->pc = 0x7F23772Cu;
    // 7F23772C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F237730:
    ctx->pc = 0x7F237730u;
    // 7F237730: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237734:
    ctx->pc = 0x7F237734u;
    // 7F237734: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F237738:
    ctx->pc = 0x7F237738u;
    // 7F237738: addi    r7, r4, 12832
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F23773C:
    ctx->pc = 0x7F23773Cu;
    // 7F23773C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F237740:
    ctx->pc = 0x7F237740u;
    // 7F237740: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F237744:
    ctx->pc = 0x7F237744u;
    // 7F237744: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F237748:
    ctx->pc = 0x7F237748u;
    // 7F237748: lfs     f0, 19168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F237748u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23774C:
    ctx->pc = 0x7F23774Cu;
    // 7F23774C: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_7F237750:
    ctx->pc = 0x7F237750u;
    // 7F237750: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F237754:
    ctx->pc = 0x7F237754u;
    // 7F237754: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F237758:
    ctx->pc = 0x7F237758u;
    // 7F237758: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F23775C:
    ctx->pc = 0x7F23775Cu;
    // 7F23775C: stw     r8, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F237760:
    ctx->pc = 0x7F237760u;
    // 7F237760: sth     r9, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F237764:
    ctx->pc = 0x7F237764u;
    // 7F237764: sth     r6, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F237768:
    ctx->pc = 0x7F237768u;
    // 7F237768: lwz     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F23776C:
    ctx->pc = 0x7F23776Cu;
    // 7F23776C: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237770:
    ctx->pc = 0x7F237770u;
    // 7F237770: stw     r6, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237774:
    ctx->pc = 0x7F237774u;
    // 7F237774: stw     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237778:
    ctx->pc = 0x7F237778u;
    // 7F237778: lwz     r6, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F23777C:
    ctx->pc = 0x7F23777Cu;
    // 7F23777C: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237780:
    ctx->pc = 0x7F237780u;
    // 7F237780: stw     r6, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237784:
    ctx->pc = 0x7F237784u;
    // 7F237784: stw     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237788:
    ctx->pc = 0x7F237788u;
    // 7F237788: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F23778C:
    ctx->pc = 0x7F23778Cu;
    // 7F23778C: lwz     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237790:
    ctx->pc = 0x7F237790u;
    // 7F237790: stw     r6, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237794:
    ctx->pc = 0x7F237794u;
    // 7F237794: stw     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237798:
    ctx->pc = 0x7F237798u;
    // 7F237798: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F23779C:
    ctx->pc = 0x7F23779Cu;
    // 7F23779C: lwz     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2377A0:
    ctx->pc = 0x7F2377A0u;
    // 7F2377A0: stw     r6, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2377A4:
    ctx->pc = 0x7F2377A4u;
    // 7F2377A4: stw     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2377A8:
    ctx->pc = 0x7F2377A8u;
    // 7F2377A8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2377AC:
    ctx->pc = 0x7F2377ACu;
    // 7F2377AC: lwz     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2377B0:
    ctx->pc = 0x7F2377B0u;
    // 7F2377B0: stw     r6, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2377B4:
    ctx->pc = 0x7F2377B4u;
    // 7F2377B4: stw     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2377B8:
    ctx->pc = 0x7F2377B8u;
    // 7F2377B8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2377BC:
    ctx->pc = 0x7F2377BCu;
    // 7F2377BC: lwz     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2377C0:
    ctx->pc = 0x7F2377C0u;
    // 7F2377C0: stw     r6, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2377C4:
    ctx->pc = 0x7F2377C4u;
    // 7F2377C4: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2377C8:
    ctx->pc = 0x7F2377C8u;
    // 7F2377C8: stfs     f0, 156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2377C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2377CC:
    ctx->pc = 0x7F2377CCu;
    // 7F2377CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2377D0:
    loop_7F2377D0(ctx);
    if (ctx->pc == 0x7F2377E4u) goto label_7F2377E4;
    return;
label_7F2377D4:
    ctx->pc = 0x7F2377D4u;
    // 7F2377D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2377D8:
    ctx->pc = 0x7F2377D8u;
    // 7F2377D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2377DC:
    ctx->pc = 0x7F2377DCu;
    // 7F2377DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2377E0:
    // 7F2377E0: bc    16, 0, 0x7F2377D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2377D0u;
                return;
            }
            goto label_7F2377D0;
        }
    }

label_7F2377E4:
    ctx->pc = 0x7F2377E4u;
    ctx->downcount -= 14;
    // 7F2377E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2377E8:
    ctx->pc = 0x7F2377E8u;
    // 7F2377E8: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F2377EC:
    ctx->pc = 0x7F2377ECu;
    // 7F2377EC: addi    r5, r3, -4824
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F2377F0:
    ctx->pc = 0x7F2377F0u;
    // 7F2377F0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2377F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2377F4:
    ctx->pc = 0x7F2377F4u;
    // 7F2377F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2377F8:
    ctx->pc = 0x7F2377F8u;
    // 7F2377F8: addi    r4, r4, 30116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30116);

label_7F2377FC:
    ctx->pc = 0x7F2377FCu;
    // 7F2377FC: stfs     f0, 172(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2377FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237800:
    ctx->pc = 0x7F237800u;
    // 7F237800: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F237800u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F237804:
    ctx->pc = 0x7F237804u;
    // 7F237804: stfs     f0, 176(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237804u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237808:
    ctx->pc = 0x7F237808u;
    // 7F237808: lfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F237808u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F23780C:
    ctx->pc = 0x7F23780Cu;
    // 7F23780C: stfs     f0, 180(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F23780Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237810:
    ctx->pc = 0x7F237810u;
    // 7F237810: lfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F237810u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F237814:
    ctx->pc = 0x7F237814u;
    // 7F237814: stfs     f0, 184(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F237814u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F237818:
    ctx->pc = 0x7F237818u;
    // 7F237818: bl      0x7F3C8990
    {
            ctx->lr = 0x7F23781Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F23781C:
    ctx->pc = 0x7F23781Cu;
    ctx->downcount -= 2;
    // 7F23781C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237820:
    ctx->pc = 0x7F237820u;
    // 7F237820: bl      0x7F2374F4
    {
            ctx->lr = 0x7F237824u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2374F4u;
                return;
            }
            goto label_7F2374F4;
    }

label_7F237824:
    ctx->pc = 0x7F237824u;
    ctx->downcount -= 17;
    // 7F237824: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237828:
    ctx->pc = 0x7F237828u;
    // 7F237828: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F23782C:
    ctx->pc = 0x7F23782Cu;
    // 7F23782C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237830:
    ctx->pc = 0x7F237830u;
    // 7F237830: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237834:
    ctx->pc = 0x7F237834u;
    // 7F237834: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F237838:
    ctx->pc = 0x7F237838u;
    // 7F237838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F23783C:
    ctx->pc = 0x7F23783Cu;
    ctx->downcount -= 9;
    // 7F23783C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237840:
    ctx->pc = 0x7F237840u;
    // 7F237840: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237844:
    ctx->pc = 0x7F237844u;
    // 7F237844: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F237848:
    ctx->pc = 0x7F237848u;
    // 7F237848: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23784C:
    ctx->pc = 0x7F23784Cu;
    // 7F23784C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F237850:
    ctx->pc = 0x7F237850u;
    // 7F237850: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F237854:
    ctx->pc = 0x7F237854u;
    // 7F237854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237858:
    ctx->pc = 0x7F237858u;
    // 7F237858: stw     r0, 19280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23785C:
    ctx->pc = 0x7F23785Cu;
    // 7F23785C: bl      0x80029D60
    {
            ctx->lr = 0x7F237860u;
            ctx->pc = 0x80029D60u;
            return;
    }

label_7F237860:
    ctx->pc = 0x7F237860u;
    ctx->downcount -= 7;
    // 7F237860: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237864:
    ctx->pc = 0x7F237864u;
    // 7F237864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F237868:
    ctx->pc = 0x7F237868u;
    // 7F237868: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F23786C:
    ctx->pc = 0x7F23786Cu;
    // 7F23786C: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237870:
    ctx->pc = 0x7F237870u;
    // 7F237870: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237874:
    ctx->pc = 0x7F237874u;
    // 7F237874: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237878:
    ctx->pc = 0x7F237878u;
    // 7F237878: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F23787Cu;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F23787C:
    ctx->pc = 0x7F23787Cu;
    ctx->downcount -= 3;
    // 7F23787C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237880:
    ctx->pc = 0x7F237880u;
    // 7F237880: cmpwi   r0, 3
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

label_7F237884:
    ctx->pc = 0x7F237884u;
    // 7F237884: bc    12, 2, 0x7F237994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237994;
        }
    }

label_7F237888:
    ctx->pc = 0x7F237888u;
    ctx->downcount -= 1;
    // 7F237888: bc    4, 0, 0x7F2378A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2378A4;
        }
    }

label_7F23788C:
    ctx->pc = 0x7F23788Cu;
    ctx->downcount -= 2;
    // 7F23788C: cmpwi   r0, 1
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

label_7F237890:
    ctx->pc = 0x7F237890u;
    // 7F237890: bc    12, 2, 0x7F2378E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2378E4;
        }
    }

label_7F237894:
    ctx->pc = 0x7F237894u;
    ctx->downcount -= 1;
    // 7F237894: bc    4, 0, 0x7F237948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237948;
        }
    }

label_7F237898:
    ctx->pc = 0x7F237898u;
    ctx->downcount -= 2;
    // 7F237898: cmpwi   r0, 0
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

label_7F23789C:
    ctx->pc = 0x7F23789Cu;
    // 7F23789C: bc    4, 0, 0x7F2378B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2378B4;
        }
    }

label_7F2378A0:
    ctx->pc = 0x7F2378A0u;
    ctx->downcount -= 1;
    // 7F2378A0: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F2378A4:
    ctx->pc = 0x7F2378A4u;
    ctx->downcount -= 2;
    // 7F2378A4: cmpwi   r0, 5
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

label_7F2378A8:
    ctx->pc = 0x7F2378A8u;
    // 7F2378A8: bc    12, 2, 0x7F2379EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2379EC;
        }
    }

label_7F2378AC:
    ctx->pc = 0x7F2378ACu;
    ctx->downcount -= 1;
    // 7F2378AC: bc    4, 0, 0x7F237B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237B4C;
        }
    }

label_7F2378B0:
    ctx->pc = 0x7F2378B0u;
    ctx->downcount -= 1;
    // 7F2378B0: b       0x7F2379C0
    {
            goto label_7F2379C0;
    }

label_7F2378B4:
    ctx->pc = 0x7F2378B4u;
    ctx->downcount -= 2;
    // 7F2378B4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2378B8:
    ctx->pc = 0x7F2378B8u;
    // 7F2378B8: bl      0x80006A70
    {
            ctx->lr = 0x7F2378BCu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F2378BC:
    ctx->pc = 0x7F2378BCu;
    ctx->downcount -= 2;
    // 7F2378BC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2378C0:
    ctx->pc = 0x7F2378C0u;
    // 7F2378C0: bl      0x80006A70
    {
            ctx->lr = 0x7F2378C4u;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F2378C4:
    ctx->pc = 0x7F2378C4u;
    ctx->downcount -= 2;
    // 7F2378C4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2378C8:
    ctx->pc = 0x7F2378C8u;
    // 7F2378C8: bl      0x80006A70
    {
            ctx->lr = 0x7F2378CCu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F2378CC:
    ctx->pc = 0x7F2378CCu;
    ctx->downcount -= 3;
    // 7F2378CC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2378D0:
    ctx->pc = 0x7F2378D0u;
    // 7F2378D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2378D4:
    ctx->pc = 0x7F2378D4u;
    // 7F2378D4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2378D8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2378D8:
    ctx->pc = 0x7F2378D8u;
    ctx->downcount -= 2;
    // 7F2378D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2378DC:
    ctx->pc = 0x7F2378DCu;
    // 7F2378DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2378E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2378E0:
    ctx->pc = 0x7F2378E0u;
    ctx->downcount -= 1;
    // 7F2378E0: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F2378E4:
    ctx->pc = 0x7F2378E4u;
    ctx->downcount -= 2;
    // 7F2378E4: cmpwi   r3, 0
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

label_7F2378E8:
    ctx->pc = 0x7F2378E8u;
    // 7F2378E8: bc    4, 2, 0x7F237B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237B4C;
        }
    }

label_7F2378EC:
    ctx->pc = 0x7F2378ECu;
    ctx->downcount -= 3;
    // 7F2378EC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2378F0:
    ctx->pc = 0x7F2378F0u;
    // 7F2378F0: addi    r3, r3, 11048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11048);

label_7F2378F4:
    ctx->pc = 0x7F2378F4u;
    // 7F2378F4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2378F8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2378F8:
    ctx->pc = 0x7F2378F8u;
    ctx->downcount -= 3;
    // 7F2378F8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2378FC:
    ctx->pc = 0x7F2378FCu;
    // 7F2378FC: cmpw    r0, r3
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

label_7F237900:
    ctx->pc = 0x7F237900u;
    // 7F237900: bc    12, 2, 0x7F237924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237924;
        }
    }

label_7F237904:
    ctx->pc = 0x7F237904u;
    ctx->downcount -= 3;
    // 7F237904: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F237908:
    ctx->pc = 0x7F237908u;
    // 7F237908: addi    r3, r3, 11048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11048);

label_7F23790C:
    ctx->pc = 0x7F23790Cu;
    // 7F23790C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F237910u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F237910:
    ctx->pc = 0x7F237910u;
    ctx->downcount -= 4;
    // 7F237910: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237914:
    ctx->pc = 0x7F237914u;
    // 7F237914: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237918:
    ctx->pc = 0x7F237918u;
    // 7F237918: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F23791C:
    ctx->pc = 0x7F23791Cu;
    // 7F23791C: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F237920u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F237920:
    ctx->pc = 0x7F237920u;
    ctx->downcount -= 1;
    // 7F237920: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F237924:
    ctx->pc = 0x7F237924u;
    ctx->downcount -= 4;
    // 7F237924: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F237928:
    ctx->pc = 0x7F237928u;
    // 7F237928: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F23792C:
    ctx->pc = 0x7F23792Cu;
    // 7F23792C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237930:
    ctx->pc = 0x7F237930u;
    // 7F237930: bl      0x80006A50
    {
            ctx->lr = 0x7F237934u;
            ctx->pc = 0x80006A50u;
            return;
    }

label_7F237934:
    ctx->pc = 0x7F237934u;
    ctx->downcount -= 2;
    // 7F237934: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F237938:
    ctx->pc = 0x7F237938u;
    // 7F237938: bl      0x80006A50
    {
            ctx->lr = 0x7F23793Cu;
            ctx->pc = 0x80006A50u;
            return;
    }

label_7F23793C:
    ctx->pc = 0x7F23793Cu;
    ctx->downcount -= 2;
    // 7F23793C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F237940:
    ctx->pc = 0x7F237940u;
    // 7F237940: bl      0x80006A50
    {
            ctx->lr = 0x7F237944u;
            ctx->pc = 0x80006A50u;
            return;
    }

label_7F237944:
    ctx->pc = 0x7F237944u;
    ctx->downcount -= 1;
    // 7F237944: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F237948:
    ctx->pc = 0x7F237948u;
    ctx->downcount -= 2;
    // 7F237948: cmpwi   r3, 0
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

label_7F23794C:
    ctx->pc = 0x7F23794Cu;
    // 7F23794C: bc    4, 2, 0x7F237B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237B4C;
        }
    }

label_7F237950:
    ctx->pc = 0x7F237950u;
    ctx->downcount -= 3;
    // 7F237950: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F237954:
    ctx->pc = 0x7F237954u;
    // 7F237954: addi    r3, r3, 11064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11064);

label_7F237958:
    ctx->pc = 0x7F237958u;
    // 7F237958: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F23795Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F23795C:
    ctx->pc = 0x7F23795Cu;
    ctx->downcount -= 3;
    // 7F23795C: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237960:
    ctx->pc = 0x7F237960u;
    // 7F237960: cmpw    r0, r3
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

label_7F237964:
    ctx->pc = 0x7F237964u;
    // 7F237964: bc    12, 2, 0x7F237988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237988;
        }
    }

label_7F237968:
    ctx->pc = 0x7F237968u;
    ctx->downcount -= 3;
    // 7F237968: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F23796C:
    ctx->pc = 0x7F23796Cu;
    // 7F23796C: addi    r3, r3, 11064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11064);

label_7F237970:
    ctx->pc = 0x7F237970u;
    // 7F237970: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F237974u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F237974:
    ctx->pc = 0x7F237974u;
    ctx->downcount -= 4;
    // 7F237974: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237978:
    ctx->pc = 0x7F237978u;
    // 7F237978: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F23797C:
    ctx->pc = 0x7F23797Cu;
    // 7F23797C: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237980:
    ctx->pc = 0x7F237980u;
    // 7F237980: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F237984u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F237984:
    ctx->pc = 0x7F237984u;
    ctx->downcount -= 1;
    // 7F237984: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F237988:
    ctx->pc = 0x7F237988u;
    ctx->downcount -= 3;
    // 7F237988: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F23798C:
    ctx->pc = 0x7F23798Cu;
    // 7F23798C: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237990:
    ctx->pc = 0x7F237990u;
    // 7F237990: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F237994:
    ctx->pc = 0x7F237994u;
    ctx->downcount -= 4;
    // 7F237994: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F237998:
    ctx->pc = 0x7F237998u;
    // 7F237998: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F23799C:
    ctx->pc = 0x7F23799Cu;
    // 7F23799C: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2379A0:
    ctx->pc = 0x7F2379A0u;
    // 7F2379A0: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2379A4:
    ctx->downcount -= 4;
    // 7F2379A4: addi    r3, r31, 88
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(88);

label_7F2379A8:
    // 7F2379A8: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F2379AC:
    // 7F2379AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2379B0:
    // 7F2379B0: bl      0x80029AF0
    {
            ctx->lr = 0x7F2379B4u;
            ctx->pc = 0x80029AF0u;
            return;
    }

label_7F2379B4:
    ctx->downcount -= 2;
    // 7F2379B4: rlwinm. r0, r3, 0, 24, 31
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

label_7F2379B8:
    // 7F2379B8: bc    12, 2, 0x7F2379A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2379A4u;
                return;
            }
            goto label_7F2379A4;
        }
    }

label_7F2379BC:
    ctx->pc = 0x7F2379BCu;
    ctx->downcount -= 1;
    // 7F2379BC: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F2379C0:
    ctx->pc = 0x7F2379C0u;
    ctx->downcount -= 3;
    // 7F2379C0: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2379C4:
    ctx->pc = 0x7F2379C4u;
    // 7F2379C4: cmpwi   r0, 4
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

label_7F2379C8:
    ctx->pc = 0x7F2379C8u;
    // 7F2379C8: bc    4, 0, 0x7F2379D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2379D8;
        }
    }

label_7F2379CC:
    ctx->pc = 0x7F2379CCu;
    ctx->downcount -= 2;
    // 7F2379CC: cmpwi   r0, 0
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

label_7F2379D0:
    ctx->pc = 0x7F2379D0u;
    // 7F2379D0: bc    12, 2, 0x7F2379E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2379E0;
        }
    }

label_7F2379D4:
    ctx->pc = 0x7F2379D4u;
    ctx->downcount -= 1;
    // 7F2379D4: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F2379D8:
    ctx->pc = 0x7F2379D8u;
    ctx->downcount -= 2;
    // 7F2379D8: cmpwi   r0, 8
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

label_7F2379DC:
    ctx->pc = 0x7F2379DCu;
    // 7F2379DC: bc    4, 0, 0x7F237B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237B4C;
        }
    }

label_7F2379E0:
    ctx->pc = 0x7F2379E0u;
    ctx->downcount -= 3;
    // 7F2379E0: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F2379E4:
    ctx->pc = 0x7F2379E4u;
    // 7F2379E4: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2379E8:
    ctx->pc = 0x7F2379E8u;
    // 7F2379E8: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F2379EC:
    ctx->pc = 0x7F2379ECu;
    ctx->downcount -= 3;
    // 7F2379EC: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2379F0:
    ctx->pc = 0x7F2379F0u;
    // 7F2379F0: cmpwi   r0, 5
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

label_7F2379F4:
    ctx->pc = 0x7F2379F4u;
    // 7F2379F4: bc    12, 2, 0x7F237A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237A24;
        }
    }

label_7F2379F8:
    ctx->pc = 0x7F2379F8u;
    ctx->downcount -= 1;
    // 7F2379F8: bc    4, 0, 0x7F237A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237A14;
        }
    }

label_7F2379FC:
    ctx->pc = 0x7F2379FCu;
    ctx->downcount -= 2;
    // 7F2379FC: cmpwi   r0, 0
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

label_7F237A00:
    ctx->pc = 0x7F237A00u;
    // 7F237A00: bc    12, 2, 0x7F237A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237A50;
        }
    }

label_7F237A04:
    ctx->pc = 0x7F237A04u;
    ctx->downcount -= 1;
    // 7F237A04: bc    12, 0, 0x7F237A84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237A84;
        }
    }

label_7F237A08:
    ctx->pc = 0x7F237A08u;
    ctx->downcount -= 2;
    // 7F237A08: cmpwi   r0, 4
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

label_7F237A0C:
    ctx->pc = 0x7F237A0Cu;
    // 7F237A0C: bc    4, 0, 0x7F237A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237A40;
        }
    }

label_7F237A10:
    ctx->pc = 0x7F237A10u;
    ctx->downcount -= 1;
    // 7F237A10: b       0x7F237A84
    {
            goto label_7F237A84;
    }

label_7F237A14:
    ctx->pc = 0x7F237A14u;
    ctx->downcount -= 2;
    // 7F237A14: cmpwi   r0, 7
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

label_7F237A18:
    ctx->pc = 0x7F237A18u;
    // 7F237A18: bc    12, 2, 0x7F237A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237A24;
        }
    }

label_7F237A1C:
    ctx->pc = 0x7F237A1Cu;
    ctx->downcount -= 1;
    // 7F237A1C: bc    4, 0, 0x7F237A84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237A84;
        }
    }

label_7F237A20:
    ctx->pc = 0x7F237A20u;
    ctx->downcount -= 1;
    // 7F237A20: b       0x7F237A30
    {
            goto label_7F237A30;
    }

label_7F237A24:
    ctx->pc = 0x7F237A24u;
    ctx->downcount -= 3;
    // 7F237A24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F237A28:
    ctx->pc = 0x7F237A28u;
    // 7F237A28: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A2C:
    ctx->pc = 0x7F237A2Cu;
    // 7F237A2C: b       0x7F237A84
    {
            goto label_7F237A84;
    }

label_7F237A30:
    ctx->pc = 0x7F237A30u;
    ctx->downcount -= 4;
    // 7F237A30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F237A34:
    ctx->pc = 0x7F237A34u;
    // 7F237A34: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A38:
    ctx->pc = 0x7F237A38u;
    // 7F237A38: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A3C:
    ctx->pc = 0x7F237A3Cu;
    // 7F237A3C: b       0x7F237A84
    {
            goto label_7F237A84;
    }

label_7F237A40:
    ctx->pc = 0x7F237A40u;
    ctx->downcount -= 4;
    // 7F237A40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F237A44:
    ctx->pc = 0x7F237A44u;
    // 7F237A44: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A48:
    ctx->pc = 0x7F237A48u;
    // 7F237A48: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A4C:
    ctx->pc = 0x7F237A4Cu;
    // 7F237A4C: b       0x7F237A84
    {
            goto label_7F237A84;
    }

label_7F237A50:
    ctx->pc = 0x7F237A50u;
    ctx->downcount -= 1;
    // 7F237A50: bl      0x80006B08
    {
            ctx->lr = 0x7F237A54u;
            ctx->pc = 0x80006B08u;
            return;
    }

label_7F237A54:
    ctx->pc = 0x7F237A54u;
    ctx->downcount -= 2;
    // 7F237A54: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F237A58:
    ctx->pc = 0x7F237A58u;
    // 7F237A58: bl      0x80006A70
    {
            ctx->lr = 0x7F237A5Cu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237A5C:
    ctx->pc = 0x7F237A5Cu;
    ctx->downcount -= 2;
    // 7F237A5C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F237A60:
    ctx->pc = 0x7F237A60u;
    // 7F237A60: bl      0x80006A70
    {
            ctx->lr = 0x7F237A64u;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237A64:
    ctx->pc = 0x7F237A64u;
    ctx->downcount -= 2;
    // 7F237A64: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F237A68:
    ctx->pc = 0x7F237A68u;
    // 7F237A68: bl      0x80006A70
    {
            ctx->lr = 0x7F237A6Cu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237A6C:
    ctx->pc = 0x7F237A6Cu;
    ctx->downcount -= 3;
    // 7F237A6C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F237A70:
    ctx->pc = 0x7F237A70u;
    // 7F237A70: addi    r3, r3, -22992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22992);

label_7F237A74:
    ctx->pc = 0x7F237A74u;
    // 7F237A74: bl      0x7F00A968
    {
            ctx->lr = 0x7F237A78u;
            ctx->pc = 0x7F00A968u;
            return;
    }

label_7F237A78:
    ctx->pc = 0x7F237A78u;
    ctx->downcount -= 1;
    // 7F237A78: bl      0x7F0FD7BC
    {
            ctx->lr = 0x7F237A7Cu;
            ctx->pc = 0x7F0FD7BCu;
            return;
    }

label_7F237A7C:
    ctx->pc = 0x7F237A7Cu;
    ctx->downcount -= 2;
    // 7F237A7C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F237A80:
    ctx->pc = 0x7F237A80u;
    // 7F237A80: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237A84:
    ctx->pc = 0x7F237A84u;
    ctx->downcount -= 3;
    // 7F237A84: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237A88:
    ctx->pc = 0x7F237A88u;
    // 7F237A88: cmpwi   r0, 0
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

label_7F237A8C:
    ctx->pc = 0x7F237A8Cu;
    // 7F237A8C: bc    12, 2, 0x7F237AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237AE8;
        }
    }

label_7F237A90:
    ctx->pc = 0x7F237A90u;
    ctx->downcount -= 60;
    // 7F237A90: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F237A94:
    ctx->pc = 0x7F237A94u;
    // 7F237A94: lwz     r8, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F237A98:
    ctx->pc = 0x7F237A98u;
    // 7F237A98: addi    r4, r3, 19356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19356);

label_7F237A9C:
    ctx->pc = 0x7F237A9Cu;
    // 7F237A9C: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F237AA0:
    ctx->pc = 0x7F237AA0u;
    // 7F237AA0: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F237AA4:
    ctx->pc = 0x7F237AA4u;
    // 7F237AA4: lis     r3, -28527
    ctx->gpr[3] = ((u32)(s32)(-28527) << 16);

label_7F237AA8:
    ctx->pc = 0x7F237AA8u;
    // 7F237AA8: addi    r0, r3, -28544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28544);

label_7F237AAC:
    ctx->pc = 0x7F237AACu;
    // 7F237AAC: subfic  r4, r8, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[8]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F237AB0:
    ctx->pc = 0x7F237AB0u;
    // 7F237AB0: addi    r7, r6, 73
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(73);

label_7F237AB4:
    ctx->pc = 0x7F237AB4u;
    // 7F237AB4: subfic  r6, r8, 736
    {
        u64 res = (u64)(u32)(s32)(736) + (u64)(~ctx->gpr[8]) + 1u;
        ctx->gpr[6] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F237AB8:
    ctx->pc = 0x7F237AB8u;
    // 7F237AB8: rlwinm r3, r7, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_7F237ABC:
    ctx->pc = 0x7F237ABCu;
    // 7F237ABC: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F237AC0:
    ctx->pc = 0x7F237AC0u;
    // 7F237AC0: divw   r7, r3, r5
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F237AC4:
    ctx->pc = 0x7F237AC4u;
    // 7F237AC4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F237AC8:
    ctx->pc = 0x7F237AC8u;
    // 7F237AC8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237ACC:
    ctx->pc = 0x7F237ACCu;
    // 7F237ACC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F237AD0:
    ctx->pc = 0x7F237AD0u;
    // 7F237AD0: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F237AD4:
    ctx->pc = 0x7F237AD4u;
    // 7F237AD4: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237AD8:
    ctx->pc = 0x7F237AD8u;
    // 7F237AD8: addi    r5, r7, 240
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(240);

label_7F237ADC:
    ctx->pc = 0x7F237ADCu;
    // 7F237ADC: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F237AE0:
    ctx->pc = 0x7F237AE0u;
    // 7F237AE0: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F237AE4u;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F237AE4:
    ctx->pc = 0x7F237AE4u;
    ctx->downcount -= 1;
    // 7F237AE4: b       0x7F237B4C
    {
            goto label_7F237B4C;
    }

label_7F237AE8:
    ctx->pc = 0x7F237AE8u;
    ctx->downcount -= 3;
    // 7F237AE8: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237AEC:
    ctx->pc = 0x7F237AECu;
    // 7F237AEC: cmpwi   r0, 0
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

label_7F237AF0:
    ctx->pc = 0x7F237AF0u;
    // 7F237AF0: bc    12, 2, 0x7F237B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237B4C;
        }
    }

label_7F237AF4:
    ctx->pc = 0x7F237AF4u;
    ctx->downcount -= 61;
    // 7F237AF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F237AF8:
    ctx->pc = 0x7F237AF8u;
    // 7F237AF8: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F237AFC:
    ctx->pc = 0x7F237AFCu;
    // 7F237AFC: addi    r4, r3, 19356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19356);

label_7F237B00:
    ctx->pc = 0x7F237B00u;
    // 7F237B00: lwz     r6, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F237B04:
    ctx->pc = 0x7F237B04u;
    // 7F237B04: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F237B08:
    ctx->pc = 0x7F237B08u;
    // 7F237B08: lis     r3, -28527
    ctx->gpr[3] = ((u32)(s32)(-28527) << 16);

label_7F237B0C:
    ctx->pc = 0x7F237B0Cu;
    // 7F237B0C: subfic  r4, r6, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[6]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F237B10:
    ctx->pc = 0x7F237B10u;
    // 7F237B10: addi    r10, r5, 181
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(181);

label_7F237B14:
    ctx->pc = 0x7F237B14u;
    // 7F237B14: addi    r8, r3, -28544
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-28544);

label_7F237B18:
    ctx->pc = 0x7F237B18u;
    // 7F237B18: rlwinm r3, r10, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[10], 4u) & 0xFFFFFFF0u;
    }

label_7F237B1C:
    ctx->pc = 0x7F237B1Cu;
    // 7F237B1C: addi    r9, r5, 77
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(77);

label_7F237B20:
    ctx->pc = 0x7F237B20u;
    // 7F237B20: divw   r7, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F237B24:
    ctx->pc = 0x7F237B24u;
    // 7F237B24: subfic  r6, r6, 736
    {
        u64 res = (u64)(u32)(s32)(736) + (u64)(~ctx->gpr[6]) + 1u;
        ctx->gpr[6] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F237B28:
    ctx->pc = 0x7F237B28u;
    // 7F237B28: add   r0, r9, r10
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F237B2C:
    ctx->pc = 0x7F237B2Cu;
    // 7F237B2C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237B30:
    ctx->pc = 0x7F237B30u;
    // 7F237B30: li      r5, 245
    ctx->gpr[5] = (u32)(s32)(245);

label_7F237B34:
    ctx->pc = 0x7F237B34u;
    // 7F237B34: li      r10, 720
    ctx->gpr[10] = (u32)(s32)(720);

label_7F237B38:
    ctx->pc = 0x7F237B38u;
    // 7F237B38: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F237B3C:
    ctx->pc = 0x7F237B3Cu;
    // 7F237B3C: addi    r7, r7, 245
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(245);

label_7F237B40:
    ctx->pc = 0x7F237B40u;
    // 7F237B40: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F237B44:
    ctx->pc = 0x7F237B44u;
    // 7F237B44: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237B48:
    ctx->pc = 0x7F237B48u;
    // 7F237B48: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F237B4Cu;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F237B4C:
    ctx->pc = 0x7F237B4Cu;
    ctx->downcount -= 6;
    // 7F237B4C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237B50:
    ctx->pc = 0x7F237B50u;
    // 7F237B50: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237B54:
    ctx->pc = 0x7F237B54u;
    // 7F237B54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237B58:
    ctx->pc = 0x7F237B58u;
    // 7F237B58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F237B5C:
    ctx->pc = 0x7F237B5Cu;
    // 7F237B5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237B60:
    ctx->pc = 0x7F237B60u;
    ctx->downcount -= 8;
    // 7F237B60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237B64:
    ctx->pc = 0x7F237B64u;
    // 7F237B64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237B68:
    ctx->pc = 0x7F237B68u;
    // 7F237B68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237B6C:
    ctx->pc = 0x7F237B6Cu;
    // 7F237B6C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F237B70:
    ctx->pc = 0x7F237B70u;
    // 7F237B70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237B74:
    ctx->pc = 0x7F237B74u;
    // 7F237B74: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237B78:
    ctx->pc = 0x7F237B78u;
    // 7F237B78: cmpwi   r3, 0
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

label_7F237B7C:
    ctx->pc = 0x7F237B7Cu;
    // 7F237B7C: bc    12, 0, 0x7F237B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237B8C;
        }
    }

label_7F237B80:
    ctx->pc = 0x7F237B80u;
    ctx->downcount -= 1;
    // 7F237B80: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F237B84u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F237B84:
    ctx->pc = 0x7F237B84u;
    ctx->downcount -= 2;
    // 7F237B84: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F237B88:
    ctx->pc = 0x7F237B88u;
    // 7F237B88: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237B8C:
    ctx->pc = 0x7F237B8Cu;
    ctx->downcount -= 3;
    // 7F237B8C: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237B90:
    ctx->pc = 0x7F237B90u;
    // 7F237B90: cmplwi  r3, 0x0000
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

label_7F237B94:
    ctx->pc = 0x7F237B94u;
    // 7F237B94: bc    12, 2, 0x7F237BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237BA4;
        }
    }

label_7F237B98:
    ctx->pc = 0x7F237B98u;
    ctx->downcount -= 1;
    // 7F237B98: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F237B9Cu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F237B9C:
    ctx->pc = 0x7F237B9Cu;
    ctx->downcount -= 2;
    // 7F237B9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F237BA0:
    ctx->pc = 0x7F237BA0u;
    // 7F237BA0: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237BA4:
    ctx->pc = 0x7F237BA4u;
    ctx->downcount -= 2;
    // 7F237BA4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F237BA8:
    ctx->pc = 0x7F237BA8u;
    // 7F237BA8: bl      0x80006A70
    {
            ctx->lr = 0x7F237BACu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237BAC:
    ctx->pc = 0x7F237BACu;
    ctx->downcount -= 2;
    // 7F237BAC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F237BB0:
    ctx->pc = 0x7F237BB0u;
    // 7F237BB0: bl      0x80006A70
    {
            ctx->lr = 0x7F237BB4u;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237BB4:
    ctx->pc = 0x7F237BB4u;
    ctx->downcount -= 2;
    // 7F237BB4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F237BB8:
    ctx->pc = 0x7F237BB8u;
    // 7F237BB8: bl      0x80006A70
    {
            ctx->lr = 0x7F237BBCu;
            ctx->pc = 0x80006A70u;
            return;
    }

label_7F237BBC:
    ctx->pc = 0x7F237BBCu;
    ctx->downcount -= 6;
    // 7F237BBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237BC0:
    ctx->pc = 0x7F237BC0u;
    // 7F237BC0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237BC4:
    ctx->pc = 0x7F237BC4u;
    // 7F237BC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237BC8:
    ctx->pc = 0x7F237BC8u;
    // 7F237BC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F237BCC:
    ctx->pc = 0x7F237BCCu;
    // 7F237BCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237BD0:
    ctx->pc = 0x7F237BD0u;
    ctx->downcount -= 25;
    // 7F237BD0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237BD4:
    ctx->pc = 0x7F237BD4u;
    // 7F237BD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237BD8:
    ctx->pc = 0x7F237BD8u;
    // 7F237BD8: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_7F237BDC:
    ctx->pc = 0x7F237BDCu;
    // 7F237BDC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F237BE0:
    ctx->pc = 0x7F237BE0u;
    // 7F237BE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237BE4:
    ctx->pc = 0x7F237BE4u;
    // 7F237BE4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F237BE8:
    ctx->pc = 0x7F237BE8u;
    // 7F237BE8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F237BEC:
    ctx->pc = 0x7F237BECu;
    // 7F237BEC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237BF0:
    ctx->pc = 0x7F237BF0u;
    // 7F237BF0: addi    r3, r4, 11080
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(11080);

label_7F237BF4:
    ctx->pc = 0x7F237BF4u;
    // 7F237BF4: lbz     r6, -32744(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32744);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F237BF8:
    ctx->pc = 0x7F237BF8u;
    // 7F237BF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237BFC:
    ctx->pc = 0x7F237BFCu;
    // 7F237BFC: stw     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F237C00:
    ctx->pc = 0x7F237C00u;
    // 7F237C00: addi    r31, r6, -1
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F237C04:
    ctx->pc = 0x7F237C04u;
    // 7F237C04: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237C08:
    ctx->pc = 0x7F237C08u;
    // 7F237C08: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F237C0Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F237C0C:
    ctx->pc = 0x7F237C0Cu;
    ctx->downcount -= 4;
    // 7F237C0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F237C10:
    ctx->pc = 0x7F237C10u;
    // 7F237C10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237C14:
    ctx->pc = 0x7F237C14u;
    // 7F237C14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F237C18:
    ctx->pc = 0x7F237C18u;
    // 7F237C18: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F237C1Cu;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F237C1C:
    ctx->pc = 0x7F237C1Cu;
    ctx->downcount -= 5;
    // 7F237C1C: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237C20:
    ctx->pc = 0x7F237C20u;
    // 7F237C20: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F237C24:
    ctx->pc = 0x7F237C24u;
    // 7F237C24: addi    r4, r3, 17972
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(17972);

label_7F237C28:
    ctx->pc = 0x7F237C28u;
    // 7F237C28: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237C2C:
    ctx->pc = 0x7F237C2Cu;
    // 7F237C2C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F237C30u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F237C30:
    ctx->pc = 0x7F237C30u;
    ctx->downcount -= 6;
    // 7F237C30: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237C34:
    ctx->pc = 0x7F237C34u;
    // 7F237C34: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F237C38:
    ctx->pc = 0x7F237C38u;
    // 7F237C38: rlwinm r4, r4, 0, 17, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF7FFFu;
    }

label_7F237C3C:
    ctx->pc = 0x7F237C3Cu;
    // 7F237C3C: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237C40:
    ctx->pc = 0x7F237C40u;
    // 7F237C40: stw     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237C44:
    ctx->pc = 0x7F237C44u;
    // 7F237C44: bl      0x8004DB8C
    {
            ctx->lr = 0x7F237C48u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F237C48:
    ctx->pc = 0x7F237C48u;
    ctx->downcount -= 5;
    // 7F237C48: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F237C4C:
    ctx->pc = 0x7F237C4Cu;
    // 7F237C4C: addi    r5, r30, 132
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(132);

label_7F237C50:
    ctx->pc = 0x7F237C50u;
    // 7F237C50: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F237C54:
    ctx->pc = 0x7F237C54u;
    // 7F237C54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F237C58:
    loop_7F237C58(ctx);
    if (ctx->pc == 0x7F237C6Cu) goto label_7F237C6C;
    return;
label_7F237C5C:
    ctx->pc = 0x7F237C5Cu;
    // 7F237C5C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F237C60:
    ctx->pc = 0x7F237C60u;
    // 7F237C60: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237C64:
    ctx->pc = 0x7F237C64u;
    // 7F237C64: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F237C68:
    // 7F237C68: bc    16, 0, 0x7F237C58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237C58u;
                return;
            }
            goto label_7F237C58;
        }
    }

label_7F237C6C:
    ctx->pc = 0x7F237C6Cu;
    ctx->downcount -= 3;
    // 7F237C6C: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237C70:
    ctx->pc = 0x7F237C70u;
    // 7F237C70: stb     r0, 142(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(142);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F237C74:
    ctx->pc = 0x7F237C74u;
    // 7F237C74: bl      0x8002A1B8
    {
            ctx->lr = 0x7F237C78u;
            ctx->pc = 0x8002A1B8u;
            return;
    }

label_7F237C78:
    ctx->pc = 0x7F237C78u;
    ctx->downcount -= 3;
    // 7F237C78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237C7C:
    ctx->pc = 0x7F237C7Cu;
    // 7F237C7C: addi    r3, r30, 136
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(136);

label_7F237C80:
    ctx->pc = 0x7F237C80u;
    // 7F237C80: bl      0x8002A79C
    {
            ctx->lr = 0x7F237C84u;
            ctx->pc = 0x8002A79Cu;
            return;
    }

label_7F237C84:
    ctx->pc = 0x7F237C84u;
    ctx->downcount -= 2;
    // 7F237C84: rlwinm. r0, r3, 0, 24, 31
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

label_7F237C88:
    ctx->pc = 0x7F237C88u;
    // 7F237C88: bc    12, 2, 0x7F237C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237C98;
        }
    }

label_7F237C8C:
    ctx->pc = 0x7F237C8Cu;
    ctx->downcount -= 3;
    // 7F237C8C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F237C90:
    ctx->pc = 0x7F237C90u;
    // 7F237C90: stw     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237C94:
    ctx->pc = 0x7F237C94u;
    // 7F237C94: b       0x7F237CA4
    {
            goto label_7F237CA4;
    }

label_7F237C98:
    ctx->pc = 0x7F237C98u;
    ctx->downcount -= 3;
    // 7F237C98: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F237C9C:
    ctx->pc = 0x7F237C9Cu;
    // 7F237C9C: addi    r3, r3, -22992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22992);

label_7F237CA0:
    ctx->pc = 0x7F237CA0u;
    // 7F237CA0: bl      0x7F0FEDBC
    {
            ctx->lr = 0x7F237CA4u;
            ctx->pc = 0x7F0FEDBCu;
            return;
    }

label_7F237CA4:
    ctx->pc = 0x7F237CA4u;
    ctx->downcount -= 1;
    // 7F237CA4: bl      0x7F19CF4C
    {
            ctx->lr = 0x7F237CA8u;
            ctx->pc = 0x7F19CF4Cu;
            return;
    }

label_7F237CA8:
    ctx->pc = 0x7F237CA8u;
    ctx->downcount -= 3;
    // 7F237CA8: cmplwi  r3, 0x0000
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

label_7F237CAC:
    ctx->pc = 0x7F237CACu;
    // 7F237CAC: stw     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237CB0:
    ctx->pc = 0x7F237CB0u;
    // 7F237CB0: bc    4, 2, 0x7F237CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237CBC;
        }
    }

label_7F237CB4:
    ctx->pc = 0x7F237CB4u;
    ctx->downcount -= 2;
    // 7F237CB4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F237CB8:
    ctx->pc = 0x7F237CB8u;
    // 7F237CB8: b       0x7F237DB4
    {
            goto label_7F237DB4;
    }

label_7F237CBC:
    ctx->pc = 0x7F237CBCu;
    ctx->downcount -= 2;
    // 7F237CBC: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237CC0:
    ctx->pc = 0x7F237CC0u;
    // 7F237CC0: bl      0x7F19C738
    {
            ctx->lr = 0x7F237CC4u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F237CC4:
    ctx->pc = 0x7F237CC4u;
    ctx->downcount -= 6;
    // 7F237CC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F237CC8:
    ctx->pc = 0x7F237CC8u;
    // 7F237CC8: rlwinm r29, r31, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F237CCC:
    ctx->pc = 0x7F237CCCu;
    // 7F237CCC: addi    r31, r3, 19184
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(19184);

label_7F237CD0:
    ctx->pc = 0x7F237CD0u;
    // 7F237CD0: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237CD4:
    ctx->pc = 0x7F237CD4u;
    // 7F237CD4: lwzx    r3, r31, r29
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237CD8:
    ctx->pc = 0x7F237CD8u;
    // 7F237CD8: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F237CDCu;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F237CDC:
    ctx->pc = 0x7F237CDCu;
    ctx->downcount -= 5;
    // 7F237CDC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237CE0:
    ctx->pc = 0x7F237CE0u;
    // 7F237CE0: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237CE4:
    ctx->pc = 0x7F237CE4u;
    // 7F237CE4: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F237CE8:
    ctx->pc = 0x7F237CE8u;
    // 7F237CE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F237CEC:
    ctx->pc = 0x7F237CECu;
    // 7F237CEC: bl      0x7F19CC40
    {
            ctx->lr = 0x7F237CF0u;
            ctx->pc = 0x7F19CC40u;
            return;
    }

label_7F237CF0:
    ctx->pc = 0x7F237CF0u;
    ctx->downcount -= 11;
    // 7F237CF0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F237CF4:
    ctx->pc = 0x7F237CF4u;
    // 7F237CF4: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237CF8:
    ctx->pc = 0x7F237CF8u;
    // 7F237CF8: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F237CFC:
    ctx->pc = 0x7F237CFCu;
    // 7F237CFC: or   r10, r28, r28
    {
        ctx->gpr[10] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F237D00:
    ctx->pc = 0x7F237D00u;
    // 7F237D00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F237D04:
    ctx->pc = 0x7F237D04u;
    // 7F237D04: li      r6, 720
    ctx->gpr[6] = (u32)(s32)(720);

label_7F237D08:
    ctx->pc = 0x7F237D08u;
    // 7F237D08: addi    r5, r7, 77
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(77);

label_7F237D0C:
    ctx->pc = 0x7F237D0Cu;
    // 7F237D0C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F237D10:
    ctx->pc = 0x7F237D10u;
    // 7F237D10: addi    r7, r7, 181
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(181);

label_7F237D14:
    ctx->pc = 0x7F237D14u;
    // 7F237D14: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F237D18:
    ctx->pc = 0x7F237D18u;
    // 7F237D18: bl      0x7F19C814
    {
            ctx->lr = 0x7F237D1Cu;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F237D1C:
    ctx->pc = 0x7F237D1Cu;
    ctx->downcount -= 52;
    // 7F237D1C: stw     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237D20:
    ctx->pc = 0x7F237D20u;
    // 7F237D20: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F237D24:
    ctx->pc = 0x7F237D24u;
    // 7F237D24: lwzx    r3, r31, r29
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237D28:
    ctx->pc = 0x7F237D28u;
    // 7F237D28: lwz     r4, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237D2C:
    ctx->pc = 0x7F237D2Cu;
    // 7F237D2C: srawi r4, r4, 1
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

label_7F237D30:
    ctx->pc = 0x7F237D30u;
    // 7F237D30: stw     r4, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237D34:
    ctx->pc = 0x7F237D34u;
    // 7F237D34: lwz     r4, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237D38:
    ctx->pc = 0x7F237D38u;
    // 7F237D38: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F237D3C:
    ctx->pc = 0x7F237D3Cu;
    // 7F237D3C: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F237D40:
    ctx->pc = 0x7F237D40u;
    // 7F237D40: stw     r0, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237D44:
    ctx->pc = 0x7F237D44u;
    // 7F237D44: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237D48:
    ctx->pc = 0x7F237D48u;
    // 7F237D48: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_7F237D4C:
    ctx->pc = 0x7F237D4Cu;
    // 7F237D4C: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F237D50u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F237D50:
    ctx->pc = 0x7F237D50u;
    ctx->downcount -= 4;
    // 7F237D50: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237D54:
    ctx->pc = 0x7F237D54u;
    // 7F237D54: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237D58:
    ctx->pc = 0x7F237D58u;
    // 7F237D58: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F237D5C:
    ctx->pc = 0x7F237D5Cu;
    // 7F237D5C: bl      0x7F19CC40
    {
            ctx->lr = 0x7F237D60u;
            ctx->pc = 0x7F19CC40u;
            return;
    }

label_7F237D60:
    ctx->pc = 0x7F237D60u;
    ctx->downcount -= 11;
    // 7F237D60: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F237D64:
    ctx->pc = 0x7F237D64u;
    // 7F237D64: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237D68:
    ctx->pc = 0x7F237D68u;
    // 7F237D68: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F237D6C:
    ctx->pc = 0x7F237D6Cu;
    // 7F237D6C: or   r10, r29, r29
    {
        ctx->gpr[10] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F237D70:
    ctx->pc = 0x7F237D70u;
    // 7F237D70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F237D74:
    ctx->pc = 0x7F237D74u;
    // 7F237D74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237D78:
    ctx->pc = 0x7F237D78u;
    // 7F237D78: li      r6, 720
    ctx->gpr[6] = (u32)(s32)(720);

label_7F237D7C:
    ctx->pc = 0x7F237D7Cu;
    // 7F237D7C: addi    r7, r7, 73
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(73);

label_7F237D80:
    ctx->pc = 0x7F237D80u;
    // 7F237D80: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F237D84:
    ctx->pc = 0x7F237D84u;
    // 7F237D84: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F237D88:
    ctx->pc = 0x7F237D88u;
    // 7F237D88: bl      0x7F19C814
    {
            ctx->lr = 0x7F237D8Cu;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F237D8C:
    ctx->pc = 0x7F237D8Cu;
    ctx->downcount -= 49;
    // 7F237D8C: stw     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237D90:
    ctx->pc = 0x7F237D90u;
    // 7F237D90: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F237D94:
    ctx->pc = 0x7F237D94u;
    // 7F237D94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F237D98:
    ctx->pc = 0x7F237D98u;
    // 7F237D98: lwz     r4, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237D9C:
    ctx->pc = 0x7F237D9Cu;
    // 7F237D9C: srawi r4, r4, 1
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

label_7F237DA0:
    ctx->pc = 0x7F237DA0u;
    // 7F237DA0: stw     r4, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F237DA4:
    ctx->pc = 0x7F237DA4u;
    // 7F237DA4: lwz     r4, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F237DA8:
    ctx->pc = 0x7F237DA8u;
    // 7F237DA8: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F237DAC:
    ctx->pc = 0x7F237DACu;
    // 7F237DAC: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F237DB0:
    ctx->pc = 0x7F237DB0u;
    // 7F237DB0: stw     r0, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237DB4:
    ctx->pc = 0x7F237DB4u;
    ctx->downcount -= 16;
    // 7F237DB4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F237DB8:
    ctx->pc = 0x7F237DB8u;
    // 7F237DB8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237DBC:
    ctx->pc = 0x7F237DBCu;
    // 7F237DBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237DC0:
    ctx->pc = 0x7F237DC0u;
    // 7F237DC0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F237DC4:
    ctx->pc = 0x7F237DC4u;
    // 7F237DC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237DC8:
    ctx->pc = 0x7F237DC8u;
    ctx->downcount -= 17;
    // 7F237DC8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237DCC:
    ctx->pc = 0x7F237DCCu;
    // 7F237DCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237DD0:
    ctx->pc = 0x7F237DD0u;
    // 7F237DD0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237DD4:
    ctx->pc = 0x7F237DD4u;
    // 7F237DD4: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F237DD8:
    ctx->pc = 0x7F237DD8u;
    // 7F237DD8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F237DDC:
    ctx->pc = 0x7F237DDCu;
    // 7F237DDC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F237DE0:
    ctx->pc = 0x7F237DE0u;
    // 7F237DE0: bl      0x8004DB8C
    {
            ctx->lr = 0x7F237DE4u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F237DE4:
    ctx->pc = 0x7F237DE4u;
    ctx->downcount -= 5;
    // 7F237DE4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F237DE8:
    ctx->pc = 0x7F237DE8u;
    // 7F237DE8: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_7F237DEC:
    ctx->pc = 0x7F237DECu;
    // 7F237DEC: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F237DF0:
    ctx->pc = 0x7F237DF0u;
    // 7F237DF0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F237DF4:
    loop_7F237DF4(ctx);
    if (ctx->pc == 0x7F237E08u) goto label_7F237E08;
    return;
label_7F237DF8:
    ctx->pc = 0x7F237DF8u;
    // 7F237DF8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F237DFC:
    ctx->pc = 0x7F237DFCu;
    // 7F237DFC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237E00:
    ctx->pc = 0x7F237E00u;
    // 7F237E00: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F237E04:
    // 7F237E04: bc    16, 0, 0x7F237DF4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237DF4u;
                return;
            }
            goto label_7F237DF4;
        }
    }

label_7F237E08:
    ctx->pc = 0x7F237E08u;
    ctx->downcount -= 3;
    // 7F237E08: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F237E0C:
    ctx->pc = 0x7F237E0Cu;
    // 7F237E0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F237E10:
    ctx->pc = 0x7F237E10u;
    // 7F237E10: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F237E14u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F237E14:
    ctx->pc = 0x7F237E14u;
    ctx->downcount -= 4;
    // 7F237E14: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237E18:
    ctx->pc = 0x7F237E18u;
    // 7F237E18: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F237E1C:
    ctx->pc = 0x7F237E1Cu;
    // 7F237E1C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F237E20:
    ctx->pc = 0x7F237E20u;
    // 7F237E20: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F237E24u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F237E24:
    ctx->pc = 0x7F237E24u;
    ctx->downcount -= 3;
    // 7F237E24: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F237E28:
    ctx->pc = 0x7F237E28u;
    // 7F237E28: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F237E2C:
    ctx->pc = 0x7F237E2Cu;
    // 7F237E2C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F237E30u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F237E30:
    ctx->pc = 0x7F237E30u;
    ctx->downcount -= 2;
    // 7F237E30: cmplwi  r3, 0x0000
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

label_7F237E34:
    ctx->pc = 0x7F237E34u;
    // 7F237E34: bc    12, 2, 0x7F237E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237E3C;
        }
    }

label_7F237E38:
    ctx->pc = 0x7F237E38u;
    ctx->downcount -= 1;
    // 7F237E38: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F237E3C:
    ctx->pc = 0x7F237E3Cu;
    ctx->downcount -= 2;
    // 7F237E3C: cmpwi   r31, 0
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

label_7F237E40:
    ctx->pc = 0x7F237E40u;
    // 7F237E40: bc    12, 2, 0x7F237E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237E54;
        }
    }

label_7F237E44:
    ctx->pc = 0x7F237E44u;
    ctx->downcount -= 4;
    // 7F237E44: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237E48:
    ctx->pc = 0x7F237E48u;
    // 7F237E48: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F237E4C:
    ctx->pc = 0x7F237E4Cu;
    // 7F237E4C: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237E50:
    ctx->pc = 0x7F237E50u;
    // 7F237E50: b       0x7F237E78
    {
            goto label_7F237E78;
    }

label_7F237E54:
    ctx->pc = 0x7F237E54u;
    ctx->downcount -= 1;
    // 7F237E54: bc    4, 2, 0x7F237E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237E78;
        }
    }

label_7F237E58:
    ctx->pc = 0x7F237E58u;
    ctx->downcount -= 3;
    // 7F237E58: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F237E5C:
    ctx->pc = 0x7F237E5Cu;
    // 7F237E5C: cmpwi   r3, 0
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

label_7F237E60:
    ctx->pc = 0x7F237E60u;
    // 7F237E60: bc    4, 2, 0x7F237E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237E70;
        }
    }

label_7F237E64:
    ctx->pc = 0x7F237E64u;
    ctx->downcount -= 3;
    // 7F237E64: lbz     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F237E68:
    ctx->pc = 0x7F237E68u;
    // 7F237E68: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237E6C:
    ctx->pc = 0x7F237E6Cu;
    // 7F237E6C: b       0x7F237E78
    {
            goto label_7F237E78;
    }

label_7F237E70:
    ctx->pc = 0x7F237E70u;
    ctx->downcount -= 2;
    // 7F237E70: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F237E74:
    ctx->pc = 0x7F237E74u;
    // 7F237E74: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237E78:
    ctx->pc = 0x7F237E78u;
    ctx->downcount -= 16;
    // 7F237E78: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F237E7C:
    ctx->pc = 0x7F237E7Cu;
    // 7F237E7C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237E80:
    ctx->pc = 0x7F237E80u;
    // 7F237E80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237E84:
    ctx->pc = 0x7F237E84u;
    // 7F237E84: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F237E88:
    ctx->pc = 0x7F237E88u;
    // 7F237E88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237E8C:
    ctx->pc = 0x7F237E8Cu;
    ctx->downcount -= 9;
    // 7F237E8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237E90:
    ctx->pc = 0x7F237E90u;
    // 7F237E90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237E94:
    ctx->pc = 0x7F237E94u;
    // 7F237E94: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F237E98:
    ctx->pc = 0x7F237E98u;
    // 7F237E98: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F237E9C:
    ctx->pc = 0x7F237E9Cu;
    // 7F237E9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237EA0:
    ctx->pc = 0x7F237EA0u;
    // 7F237EA0: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F237EA4:
    ctx->pc = 0x7F237EA4u;
    // 7F237EA4: li      r6, 254
    ctx->gpr[6] = (u32)(s32)(254);

label_7F237EA8:
    ctx->pc = 0x7F237EA8u;
    // 7F237EA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F237EAC:
    ctx->pc = 0x7F237EACu;
    // 7F237EAC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F237EB0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F237EB0:
    ctx->pc = 0x7F237EB0u;
    ctx->downcount -= 2;
    // 7F237EB0: or.   r31, r3, r3
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

label_7F237EB4:
    ctx->pc = 0x7F237EB4u;
    // 7F237EB4: bc    12, 2, 0x7F237F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F237F1C;
        }
    }

label_7F237EB8:
    ctx->pc = 0x7F237EB8u;
    ctx->downcount -= 5;
    // 7F237EB8: lis     r4, 32547
    ctx->gpr[4] = ((u32)(s32)(32547) << 16);

label_7F237EBC:
    ctx->pc = 0x7F237EBCu;
    // 7F237EBC: lis     r5, 32547
    ctx->gpr[5] = ((u32)(s32)(32547) << 16);

label_7F237EC0:
    ctx->pc = 0x7F237EC0u;
    // 7F237EC0: addi    r4, r4, 30780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30780);

label_7F237EC4:
    ctx->pc = 0x7F237EC4u;
    // 7F237EC4: addi    r5, r5, 31584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31584);

label_7F237EC8:
    ctx->pc = 0x7F237EC8u;
    // 7F237EC8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F237ECCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F237ECC:
    ctx->pc = 0x7F237ECCu;
    ctx->downcount -= 12;
    // 7F237ECC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237ED0:
    ctx->pc = 0x7F237ED0u;
    // 7F237ED0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F237ED4:
    ctx->pc = 0x7F237ED4u;
    // 7F237ED4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237ED8:
    ctx->pc = 0x7F237ED8u;
    // 7F237ED8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237EDC:
    ctx->pc = 0x7F237EDCu;
    // 7F237EDC: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F237EE0:
    ctx->pc = 0x7F237EE0u;
    // 7F237EE0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F237EE4:
    ctx->pc = 0x7F237EE4u;
    // 7F237EE4: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F237EE8:
    ctx->pc = 0x7F237EE8u;
    // 7F237EE8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F237EEC:
    ctx->pc = 0x7F237EECu;
    // 7F237EEC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F237EF0:
    ctx->pc = 0x7F237EF0u;
    // 7F237EF0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F237EF4:
    ctx->pc = 0x7F237EF4u;
    // 7F237EF4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237EF8:
    ctx->pc = 0x7F237EF8u;
    // 7F237EF8: bl      0x7F237DC8
    {
            ctx->lr = 0x7F237EFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237DC8u;
                return;
            }
            goto label_7F237DC8;
    }

label_7F237EFC:
    ctx->pc = 0x7F237EFCu;
    ctx->downcount -= 2;
    // 7F237EFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237F00:
    ctx->pc = 0x7F237F00u;
    // 7F237F00: bl      0x7F237BD0
    {
            ctx->lr = 0x7F237F04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F237BD0u;
                return;
            }
            goto label_7F237BD0;
    }

label_7F237F04:
    ctx->pc = 0x7F237F04u;
    ctx->downcount -= 2;
    // 7F237F04: cmpwi   r3, 0
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

label_7F237F08:
    ctx->pc = 0x7F237F08u;
    // 7F237F08: bc    4, 0, 0x7F237F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F237F1C;
        }
    }

label_7F237F0C:
    ctx->pc = 0x7F237F0Cu;
    ctx->downcount -= 2;
    // 7F237F0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237F10:
    ctx->pc = 0x7F237F10u;
    // 7F237F10: bl      0x7F3C8210
    {
            ctx->lr = 0x7F237F14u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F237F14:
    ctx->pc = 0x7F237F14u;
    ctx->downcount -= 2;
    // 7F237F14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F237F18:
    ctx->pc = 0x7F237F18u;
    // 7F237F18: b       0x7F237F20
    {
            goto label_7F237F20;
    }

label_7F237F1C:
    ctx->pc = 0x7F237F1Cu;
    ctx->downcount -= 1;
    // 7F237F1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F237F20:
    ctx->pc = 0x7F237F20u;
    ctx->downcount -= 6;
    // 7F237F20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237F24:
    ctx->pc = 0x7F237F24u;
    // 7F237F24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F237F28:
    ctx->pc = 0x7F237F28u;
    // 7F237F28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F237F2C:
    ctx->pc = 0x7F237F2Cu;
    // 7F237F2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F237F30:
    ctx->pc = 0x7F237F30u;
    // 7F237F30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F237F34:
    ctx->pc = 0x7F237F34u;
    ctx->downcount -= 16;
    // 7F237F34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F237F38:
    ctx->pc = 0x7F237F38u;
    // 7F237F38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F237F3C:
    ctx->pc = 0x7F237F3Cu;
    // 7F237F3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F237F40:
    ctx->pc = 0x7F237F40u;
    // 7F237F40: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F237F44:
    ctx->pc = 0x7F237F44u;
    // 7F237F44: or.   r30, r3, r3
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

label_7F237F48:
    ctx->pc = 0x7F237F48u;
    // 7F237F48: bc    12, 2, 0x7F238080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F238080;
        }
    }

label_7F237F4C:
    ctx->pc = 0x7F237F4Cu;
    ctx->downcount -= 7;
    // 7F237F4C: lwz     r0, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F237F50:
    ctx->pc = 0x7F237F50u;
    // 7F237F50: mulli   r3, r0, 136
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)136);

label_7F237F54:
    ctx->pc = 0x7F237F54u;
    // 7F237F54: addi    r31, r3, 132
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(132);

label_7F237F58:
    ctx->pc = 0x7F237F58u;
    // 7F237F58: add   r31, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F237F5C:
    ctx->pc = 0x7F237F5Cu;
    // 7F237F5C: bl      0x80041BD4
    {
            ctx->lr = 0x7F237F60u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F237F60:
    ctx->pc = 0x7F237F60u;
    ctx->downcount -= 3;
    // 7F237F60: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F237F64:
    ctx->pc = 0x7F237F64u;
    // 7F237F64: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F237F68:
    ctx->pc = 0x7F237F68u;
    // 7F237F68: bl      0x80041500
    {
            ctx->lr = 0x7F237F6Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F237F6C:
    ctx->pc = 0x7F237F6Cu;
    ctx->downcount -= 3;
    // 7F237F6C: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F237F70:
    ctx->pc = 0x7F237F70u;
    // 7F237F70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F237F74:
    ctx->pc = 0x7F237F74u;
    // 7F237F74: bl      0x80041500
    {
            ctx->lr = 0x7F237F78u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F237F78:
    ctx->pc = 0x7F237F78u;
    ctx->downcount -= 3;
    // 7F237F78: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F237F7C:
    ctx->pc = 0x7F237F7Cu;
    // 7F237F7C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F237F80:
    ctx->pc = 0x7F237F80u;
    // 7F237F80: bl      0x80041500
    {
            ctx->lr = 0x7F237F84u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F237F84:
    ctx->pc = 0x7F237F84u;
    ctx->downcount -= 5;
    // 7F237F84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F237F88:
    ctx->pc = 0x7F237F88u;
    // 7F237F88: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F237F8C:
    ctx->pc = 0x7F237F8Cu;
    // 7F237F8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F237F90:
    ctx->pc = 0x7F237F90u;
    // 7F237F90: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F237F94:
    ctx->pc = 0x7F237F94u;
    // 7F237F94: bl      0x80046238
    {
            ctx->lr = 0x7F237F98u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F237F98:
    ctx->pc = 0x7F237F98u;
    ctx->downcount -= 4;
    // 7F237F98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F237F9C:
    ctx->pc = 0x7F237F9Cu;
    // 7F237F9C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F237FA0:
    ctx->pc = 0x7F237FA0u;
    // 7F237FA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237FA4:
    ctx->pc = 0x7F237FA4u;
    // 7F237FA4: bl      0x800462E4
    {
            ctx->lr = 0x7F237FA8u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F237FA8:
    ctx->pc = 0x7F237FA8u;
    ctx->downcount -= 2;
    // 7F237FA8: addi    r3, r30, 56
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(56);

label_7F237FAC:
    ctx->pc = 0x7F237FACu;
    // 7F237FAC: bl      0x7F2EAA74
    {
            ctx->lr = 0x7F237FB0u;
            ctx->pc = 0x7F2EAA74u;
            return;
    }

label_7F237FB0:
    ctx->pc = 0x7F237FB0u;
    ctx->downcount -= 6;
    // 7F237FB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F237FB4:
    ctx->pc = 0x7F237FB4u;
    // 7F237FB4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F237FB8:
    ctx->pc = 0x7F237FB8u;
    // 7F237FB8: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F237FBC:
    ctx->pc = 0x7F237FBCu;
    // 7F237FBC: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F237FC0:
    ctx->pc = 0x7F237FC0u;
    // 7F237FC0: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F237FC4:
    ctx->pc = 0x7F237FC4u;
    // 7F237FC4: bl      0x8004585C
    {
            ctx->lr = 0x7F237FC8u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F237FC8:
    ctx->pc = 0x7F237FC8u;
    ctx->downcount -= 7;
    // 7F237FC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F237FCC:
    ctx->pc = 0x7F237FCCu;
    // 7F237FCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F237FD0:
    ctx->pc = 0x7F237FD0u;
    // 7F237FD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F237FD4:
    ctx->pc = 0x7F237FD4u;
    // 7F237FD4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F237FD8:
    ctx->pc = 0x7F237FD8u;
    // 7F237FD8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F237FDC:
    ctx->pc = 0x7F237FDCu;
    // 7F237FDC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F237FE0:
    ctx->pc = 0x7F237FE0u;
    // 7F237FE0: bl      0x800458A0
    {
            ctx->lr = 0x7F237FE4u;
            ctx->pc = 0x800458A0u;
            return;
    }

label_7F237FE4:
    ctx->pc = 0x7F237FE4u;
    ctx->downcount -= 6;
    // 7F237FE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F237FE8:
    ctx->pc = 0x7F237FE8u;
    // 7F237FE8: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F237FEC:
    ctx->pc = 0x7F237FECu;
    // 7F237FEC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F237FF0:
    ctx->pc = 0x7F237FF0u;
    // 7F237FF0: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_7F237FF4:
    ctx->pc = 0x7F237FF4u;
    // 7F237FF4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F237FF8:
    ctx->pc = 0x7F237FF8u;
    // 7F237FF8: bl      0x80045818
    {
            ctx->lr = 0x7F237FFCu;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F237FFC:
    ctx->pc = 0x7F237FFCu;
    ctx->downcount -= 3;
    // 7F237FFC: addi    r3, r30, 56
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(56);

label_7F238000:
    ctx->pc = 0x7F238000u;
    // 7F238000: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F238004:
    ctx->pc = 0x7F238004u;
    // 7F238004: bl      0x80044978
    {
            ctx->lr = 0x7F238008u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F238008:
    ctx->pc = 0x7F238008u;
    ctx->downcount -= 3;
    // 7F238008: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F23800C:
    ctx->pc = 0x7F23800Cu;
    // 7F23800C: li      r4, 136
    ctx->gpr[4] = (u32)(s32)(136);

label_7F238010:
    ctx->pc = 0x7F238010u;
    // 7F238010: bl      0x8001DA7C
    {
            ctx->lr = 0x7F238014u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_7F238014:
    ctx->pc = 0x7F238014u;
    ctx->downcount -= 4;
    // 7F238014: addi    r4, r30, 404
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(404);

label_7F238018:
    ctx->pc = 0x7F238018u;
    // 7F238018: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F23801C:
    ctx->pc = 0x7F23801Cu;
    // 7F23801C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F238020:
    ctx->pc = 0x7F238020u;
    // 7F238020: bl      0x80042184
    {
            ctx->lr = 0x7F238024u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F238024:
    ctx->pc = 0x7F238024u;
    ctx->downcount -= 4;
    // 7F238024: addi    r4, r30, 540
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(540);

label_7F238028:
    ctx->pc = 0x7F238028u;
    // 7F238028: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F23802C:
    ctx->pc = 0x7F23802Cu;
    // 7F23802C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F238030:
    ctx->pc = 0x7F238030u;
    // 7F238030: bl      0x80042184
    {
            ctx->lr = 0x7F238034u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F238034:
    ctx->pc = 0x7F238034u;
    ctx->downcount -= 4;
    // 7F238034: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F238038:
    ctx->pc = 0x7F238038u;
    // 7F238038: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F23803C:
    ctx->pc = 0x7F23803Cu;
    // 7F23803C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F238040:
    ctx->pc = 0x7F238040u;
    // 7F238040: bl      0x80042184
    {
            ctx->lr = 0x7F238044u;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F238044:
    ctx->pc = 0x7F238044u;
    ctx->downcount -= 4;
    // 7F238044: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F238048:
    ctx->pc = 0x7F238048u;
    // 7F238048: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F23804C:
    ctx->pc = 0x7F23804Cu;
    // 7F23804C: li      r5, 34
    ctx->gpr[5] = (u32)(s32)(34);

label_7F238050:
    ctx->pc = 0x7F238050u;
    // 7F238050: bl      0x80042E0C
    {
            ctx->lr = 0x7F238054u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F238054:
    ctx->pc = 0x7F238054u;
    ctx->downcount -= 1;
    // 7F238054: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F238058:
    ctx->downcount -= 2;
    // 7F238058: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_7F23805C:
    // 7F23805C: bl      0x7F2380B0
    {
            ctx->lr = 0x7F238060u;
            goto label_7F2380B0;
    }

label_7F238060:
    ctx->downcount -= 2;
    // 7F238060: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_7F238064:
    // 7F238064: bl      0x7F2380A4
    {
            ctx->lr = 0x7F238068u;
            goto label_7F2380A4;
    }

label_7F238068:
    ctx->downcount -= 2;
    // 7F238068: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_7F23806C:
    // 7F23806C: bl      0x7F238098
    {
            ctx->lr = 0x7F238070u;
            goto label_7F238098;
    }

label_7F238070:
    ctx->downcount -= 3;
    // 7F238070: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F238074:
    // 7F238074: cmpwi   r31, 34
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

label_7F238078:
    // 7F238078: bc    12, 0, 0x7F238058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F238058u;
                return;
            }
            goto label_7F238058;
        }
    }

label_7F23807C:
    ctx->pc = 0x7F23807Cu;
    ctx->downcount -= 1;
    // 7F23807C: bl      0x7F238094
    {
            ctx->lr = 0x7F238080u;
            goto label_7F238094;
    }

label_7F238080:
    ctx->pc = 0x7F238080u;
    ctx->downcount -= 16;
    // 7F238080: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F238084:
    ctx->pc = 0x7F238084u;
    // 7F238084: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F238088:
    ctx->pc = 0x7F238088u;
    // 7F238088: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F23808C:
    ctx->pc = 0x7F23808Cu;
    // 7F23808C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F238090:
    ctx->pc = 0x7F238090u;
    // 7F238090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F238094:
    ctx->pc = 0x7F238094u;
    ctx->downcount -= 1;
    // 7F238094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F238098:
    ctx->pc = 0x7F238098u;
    ctx->downcount -= 3;
    // 7F238098: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F23809C:
    ctx->pc = 0x7F23809Cu;
    // 7F23809C: stb     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2380A0:
    ctx->pc = 0x7F2380A0u;
    // 7F2380A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2380A4:
    ctx->pc = 0x7F2380A4u;
    ctx->downcount -= 3;
    // 7F2380A4: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F2380A8:
    ctx->pc = 0x7F2380A8u;
    // 7F2380A8: stb     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2380AC:
    ctx->pc = 0x7F2380ACu;
    // 7F2380AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2380B0:
    ctx->pc = 0x7F2380B0u;
    ctx->downcount -= 3;
    // 7F2380B0: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F2380B4:
    ctx->pc = 0x7F2380B4u;
    // 7F2380B4: stb     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2380B8:
    ctx->pc = 0x7F2380B8u;
    // 7F2380B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2340EC;
        }
    }

label_7F2380BC:
    ctx->pc = 0x7F2380BCu;
    ctx->downcount -= 8;
    // 7F2380BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2380C0:
    ctx->pc = 0x7F2380C0u;
    // 7F2380C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2380C4:
    ctx->pc = 0x7F2380C4u;
    // 7F2380C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2380C8:
    ctx->pc = 0x7F2380C8u;
    // 7F2380C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2380CC:
    ctx->pc = 0x7F2380CCu;
    // 7F2380CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2380D0:
    ctx->pc = 0x7F2380D0u;
    // 7F2380D0: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2380D4:
    ctx->pc = 0x7F2380D4u;
    // 7F2380D4: cmplwi  r3, 0x0000
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

label_7F2380D8:
    ctx->pc = 0x7F2380D8u;
    // 7F2380D8: bc    12, 2, 0x7F2380E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2380E8;
        }
    }

label_7F2380DC:
    ctx->pc = 0x7F2380DCu;
    ctx->downcount -= 1;
    // 7F2380DC: bl      0x7F3BA300
    {
            ctx->lr = 0x7F2380E0u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F2380E0:
    ctx->pc = 0x7F2380E0u;
    ctx->downcount -= 2;
    // 7F2380E0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2380E4:
    ctx->pc = 0x7F2380E4u;
    // 7F2380E4: bl      0x7F3BA234
    {
            ctx->lr = 0x7F2380E8u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F2380E8:
    ctx->pc = 0x7F2380E8u;
    ctx->downcount -= 1;
    // 7F2380E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2380ECu;
    return;
return_dispatch_7F2340EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2341A4u: goto label_7F2341A4;
    case 0x7F2341ACu: goto label_7F2341AC;
    case 0x7F234204u: goto label_7F234204;
    case 0x7F234214u: goto label_7F234214;
    case 0x7F234240u: goto label_7F234240;
    case 0x7F234254u: goto label_7F234254;
    case 0x7F2343ACu: goto label_7F2343AC;
    case 0x7F2343B4u: goto label_7F2343B4;
    case 0x7F234428u: goto label_7F234428;
    case 0x7F234444u: goto label_7F234444;
    case 0x7F234460u: goto label_7F234460;
    case 0x7F2344A4u: goto label_7F2344A4;
    case 0x7F2344B8u: goto label_7F2344B8;
    case 0x7F2344C8u: goto label_7F2344C8;
    case 0x7F2344E0u: goto label_7F2344E0;
    case 0x7F234564u: goto label_7F234564;
    case 0x7F2345B0u: goto label_7F2345B0;
    case 0x7F2345C0u: goto label_7F2345C0;
    case 0x7F2345E4u: goto label_7F2345E4;
    case 0x7F234600u: goto label_7F234600;
    case 0x7F234674u: goto label_7F234674;
    case 0x7F23467Cu: goto label_7F23467C;
    case 0x7F23468Cu: goto label_7F23468C;
    case 0x7F23469Cu: goto label_7F23469C;
    case 0x7F2346E0u: goto label_7F2346E0;
    case 0x7F2346FCu: goto label_7F2346FC;
    case 0x7F234734u: goto label_7F234734;
    case 0x7F234744u: goto label_7F234744;
    case 0x7F234790u: goto label_7F234790;
    case 0x7F234794u: goto label_7F234794;
    case 0x7F2347A8u: goto label_7F2347A8;
    case 0x7F2347C8u: goto label_7F2347C8;
    case 0x7F2347E0u: goto label_7F2347E0;
    case 0x7F234800u: goto label_7F234800;
    case 0x7F234838u: goto label_7F234838;
    case 0x7F23483Cu: goto label_7F23483C;
    case 0x7F234850u: goto label_7F234850;
    case 0x7F234870u: goto label_7F234870;
    case 0x7F2348A0u: goto label_7F2348A0;
    case 0x7F2348E0u: goto label_7F2348E0;
    case 0x7F2348E8u: goto label_7F2348E8;
    case 0x7F2348F4u: goto label_7F2348F4;
    case 0x7F234910u: goto label_7F234910;
    case 0x7F234920u: goto label_7F234920;
    case 0x7F234978u: goto label_7F234978;
    case 0x7F2349B8u: goto label_7F2349B8;
    case 0x7F2349D0u: goto label_7F2349D0;
    case 0x7F234BA4u: goto label_7F234BA4;
    case 0x7F234BB0u: goto label_7F234BB0;
    case 0x7F234BD0u: goto label_7F234BD0;
    case 0x7F234BF0u: goto label_7F234BF0;
    case 0x7F234C10u: goto label_7F234C10;
    case 0x7F234EE0u: goto label_7F234EE0;
    case 0x7F234F14u: goto label_7F234F14;
    case 0x7F234F8Cu: goto label_7F234F8C;
    case 0x7F234FA0u: goto label_7F234FA0;
    case 0x7F235050u: goto label_7F235050;
    case 0x7F2350ACu: goto label_7F2350AC;
    case 0x7F2351C8u: goto label_7F2351C8;
    case 0x7F2351F4u: goto label_7F2351F4;
    case 0x7F235210u: goto label_7F235210;
    case 0x7F235220u: goto label_7F235220;
    case 0x7F235224u: goto label_7F235224;
    case 0x7F23522Cu: goto label_7F23522C;
    case 0x7F235234u: goto label_7F235234;
    case 0x7F235258u: goto label_7F235258;
    case 0x7F235274u: goto label_7F235274;
    case 0x7F2352B0u: goto label_7F2352B0;
    case 0x7F23538Cu: goto label_7F23538C;
    case 0x7F2353A8u: goto label_7F2353A8;
    case 0x7F2353C0u: goto label_7F2353C0;
    case 0x7F235404u: goto label_7F235404;
    case 0x7F235410u: goto label_7F235410;
    case 0x7F235418u: goto label_7F235418;
    case 0x7F235420u: goto label_7F235420;
    case 0x7F2354A8u: goto label_7F2354A8;
    case 0x7F2354C0u: goto label_7F2354C0;
    case 0x7F2354E4u: goto label_7F2354E4;
    case 0x7F2354FCu: goto label_7F2354FC;
    case 0x7F235524u: goto label_7F235524;
    case 0x7F235534u: goto label_7F235534;
    case 0x7F235548u: goto label_7F235548;
    case 0x7F235560u: goto label_7F235560;
    case 0x7F23556Cu: goto label_7F23556C;
    case 0x7F235590u: goto label_7F235590;
    case 0x7F235594u: goto label_7F235594;
    case 0x7F2355B4u: goto label_7F2355B4;
    case 0x7F2355C4u: goto label_7F2355C4;
    case 0x7F2355F4u: goto label_7F2355F4;
    case 0x7F235600u: goto label_7F235600;
    case 0x7F235608u: goto label_7F235608;
    case 0x7F235610u: goto label_7F235610;
    case 0x7F23565Cu: goto label_7F23565C;
    case 0x7F235660u: goto label_7F235660;
    case 0x7F235670u: goto label_7F235670;
    case 0x7F235694u: goto label_7F235694;
    case 0x7F23569Cu: goto label_7F23569C;
    case 0x7F2356A8u: goto label_7F2356A8;
    case 0x7F2356D4u: goto label_7F2356D4;
    case 0x7F2356E4u: goto label_7F2356E4;
    case 0x7F23570Cu: goto label_7F23570C;
    case 0x7F235714u: goto label_7F235714;
    case 0x7F235720u: goto label_7F235720;
    case 0x7F235730u: goto label_7F235730;
    case 0x7F235738u: goto label_7F235738;
    case 0x7F235744u: goto label_7F235744;
    case 0x7F235758u: goto label_7F235758;
    case 0x7F2357A4u: goto label_7F2357A4;
    case 0x7F2357E0u: goto label_7F2357E0;
    case 0x7F2357F0u: goto label_7F2357F0;
    case 0x7F2357FCu: goto label_7F2357FC;
    case 0x7F235814u: goto label_7F235814;
    case 0x7F235884u: goto label_7F235884;
    case 0x7F2358B4u: goto label_7F2358B4;
    case 0x7F2358E8u: goto label_7F2358E8;
    case 0x7F2358F0u: goto label_7F2358F0;
    case 0x7F2358F8u: goto label_7F2358F8;
    case 0x7F235920u: goto label_7F235920;
    case 0x7F235970u: goto label_7F235970;
    case 0x7F235974u: goto label_7F235974;
    case 0x7F235984u: goto label_7F235984;
    case 0x7F23599Cu: goto label_7F23599C;
    case 0x7F2359A8u: goto label_7F2359A8;
    case 0x7F2359B0u: goto label_7F2359B0;
    case 0x7F2359C0u: goto label_7F2359C0;
    case 0x7F2359D8u: goto label_7F2359D8;
    case 0x7F2359E4u: goto label_7F2359E4;
    case 0x7F235A28u: goto label_7F235A28;
    case 0x7F235A44u: goto label_7F235A44;
    case 0x7F235A50u: goto label_7F235A50;
    case 0x7F235A64u: goto label_7F235A64;
    case 0x7F235A84u: goto label_7F235A84;
    case 0x7F235A88u: goto label_7F235A88;
    case 0x7F235A94u: goto label_7F235A94;
    case 0x7F235B08u: goto label_7F235B08;
    case 0x7F235B14u: goto label_7F235B14;
    case 0x7F235B28u: goto label_7F235B28;
    case 0x7F235B4Cu: goto label_7F235B4C;
    case 0x7F235B64u: goto label_7F235B64;
    case 0x7F235B78u: goto label_7F235B78;
    case 0x7F235BE8u: goto label_7F235BE8;
    case 0x7F235C04u: goto label_7F235C04;
    case 0x7F235C18u: goto label_7F235C18;
    case 0x7F235C28u: goto label_7F235C28;
    case 0x7F235C44u: goto label_7F235C44;
    case 0x7F235C58u: goto label_7F235C58;
    case 0x7F235C94u: goto label_7F235C94;
    case 0x7F235CBCu: goto label_7F235CBC;
    case 0x7F235CD0u: goto label_7F235CD0;
    case 0x7F235D08u: goto label_7F235D08;
    case 0x7F235D10u: goto label_7F235D10;
    case 0x7F235D80u: goto label_7F235D80;
    case 0x7F235DA4u: goto label_7F235DA4;
    case 0x7F235DBCu: goto label_7F235DBC;
    case 0x7F235DF0u: goto label_7F235DF0;
    case 0x7F235E00u: goto label_7F235E00;
    case 0x7F235E38u: goto label_7F235E38;
    case 0x7F235ED0u: goto label_7F235ED0;
    case 0x7F235F08u: goto label_7F235F08;
    case 0x7F235F64u: goto label_7F235F64;
    case 0x7F235F74u: goto label_7F235F74;
    case 0x7F235FA0u: goto label_7F235FA0;
    case 0x7F235FC8u: goto label_7F235FC8;
    case 0x7F236024u: goto label_7F236024;
    case 0x7F236040u: goto label_7F236040;
    case 0x7F2360C0u: goto label_7F2360C0;
    case 0x7F2360FCu: goto label_7F2360FC;
    case 0x7F236178u: goto label_7F236178;
    case 0x7F2361FCu: goto label_7F2361FC;
    case 0x7F236210u: goto label_7F236210;
    case 0x7F23625Cu: goto label_7F23625C;
    case 0x7F2362D8u: goto label_7F2362D8;
    case 0x7F236318u: goto label_7F236318;
    case 0x7F2363D0u: goto label_7F2363D0;
    case 0x7F2363E0u: goto label_7F2363E0;
    case 0x7F2363F0u: goto label_7F2363F0;
    case 0x7F236400u: goto label_7F236400;
    case 0x7F236420u: goto label_7F236420;
    case 0x7F236488u: goto label_7F236488;
    case 0x7F2364C0u: goto label_7F2364C0;
    case 0x7F236524u: goto label_7F236524;
    case 0x7F236534u: goto label_7F236534;
    case 0x7F236554u: goto label_7F236554;
    case 0x7F236570u: goto label_7F236570;
    case 0x7F2365B8u: goto label_7F2365B8;
    case 0x7F2365D8u: goto label_7F2365D8;
    case 0x7F2365E0u: goto label_7F2365E0;
    case 0x7F2365F4u: goto label_7F2365F4;
    case 0x7F236610u: goto label_7F236610;
    case 0x7F236618u: goto label_7F236618;
    case 0x7F236648u: goto label_7F236648;
    case 0x7F23667Cu: goto label_7F23667C;
    case 0x7F2366E8u: goto label_7F2366E8;
    case 0x7F2366F8u: goto label_7F2366F8;
    case 0x7F236730u: goto label_7F236730;
    case 0x7F236740u: goto label_7F236740;
    case 0x7F2367ECu: goto label_7F2367EC;
    case 0x7F23680Cu: goto label_7F23680C;
    case 0x7F236828u: goto label_7F236828;
    case 0x7F236848u: goto label_7F236848;
    case 0x7F236858u: goto label_7F236858;
    case 0x7F236868u: goto label_7F236868;
    case 0x7F236884u: goto label_7F236884;
    case 0x7F236888u: goto label_7F236888;
    case 0x7F2368C4u: goto label_7F2368C4;
    case 0x7F2368D0u: goto label_7F2368D0;
    case 0x7F2368DCu: goto label_7F2368DC;
    case 0x7F236920u: goto label_7F236920;
    case 0x7F236974u: goto label_7F236974;
    case 0x7F2369A8u: goto label_7F2369A8;
    case 0x7F2369B8u: goto label_7F2369B8;
    case 0x7F236A04u: goto label_7F236A04;
    case 0x7F236A4Cu: goto label_7F236A4C;
    case 0x7F236A80u: goto label_7F236A80;
    case 0x7F236A90u: goto label_7F236A90;
    case 0x7F236ACCu: goto label_7F236ACC;
    case 0x7F236AD8u: goto label_7F236AD8;
    case 0x7F236AE0u: goto label_7F236AE0;
    case 0x7F236AECu: goto label_7F236AEC;
    case 0x7F236AF4u: goto label_7F236AF4;
    case 0x7F236B18u: goto label_7F236B18;
    case 0x7F236B2Cu: goto label_7F236B2C;
    case 0x7F236B78u: goto label_7F236B78;
    case 0x7F236B84u: goto label_7F236B84;
    case 0x7F236B90u: goto label_7F236B90;
    case 0x7F236B9Cu: goto label_7F236B9C;
    case 0x7F236BC8u: goto label_7F236BC8;
    case 0x7F236C40u: goto label_7F236C40;
    case 0x7F236C58u: goto label_7F236C58;
    case 0x7F236C70u: goto label_7F236C70;
    case 0x7F236D58u: goto label_7F236D58;
    case 0x7F236E38u: goto label_7F236E38;
    case 0x7F236EA8u: goto label_7F236EA8;
    case 0x7F236F0Cu: goto label_7F236F0C;
    case 0x7F236FA0u: goto label_7F236FA0;
    case 0x7F237004u: goto label_7F237004;
    case 0x7F23705Cu: goto label_7F23705C;
    case 0x7F237064u: goto label_7F237064;
    case 0x7F23707Cu: goto label_7F23707C;
    case 0x7F23709Cu: goto label_7F23709C;
    case 0x7F2370C4u: goto label_7F2370C4;
    case 0x7F2370E4u: goto label_7F2370E4;
    case 0x7F237120u: goto label_7F237120;
    case 0x7F23713Cu: goto label_7F23713C;
    case 0x7F23716Cu: goto label_7F23716C;
    case 0x7F2371A0u: goto label_7F2371A0;
    case 0x7F2372C0u: goto label_7F2372C0;
    case 0x7F2372E0u: goto label_7F2372E0;
    case 0x7F2372FCu: goto label_7F2372FC;
    case 0x7F237318u: goto label_7F237318;
    case 0x7F237328u: goto label_7F237328;
    case 0x7F237338u: goto label_7F237338;
    case 0x7F237378u: goto label_7F237378;
    case 0x7F2373A0u: goto label_7F2373A0;
    case 0x7F2373D0u: goto label_7F2373D0;
    case 0x7F2373E0u: goto label_7F2373E0;
    case 0x7F237450u: goto label_7F237450;
    case 0x7F2374A0u: goto label_7F2374A0;
    case 0x7F2374ACu: goto label_7F2374AC;
    case 0x7F2374B0u: goto label_7F2374B0;
    case 0x7F2374C4u: goto label_7F2374C4;
    case 0x7F2374D8u: goto label_7F2374D8;
    case 0x7F237594u: goto label_7F237594;
    case 0x7F2376BCu: goto label_7F2376BC;
    case 0x7F2376FCu: goto label_7F2376FC;
    case 0x7F237718u: goto label_7F237718;
    case 0x7F23781Cu: goto label_7F23781C;
    case 0x7F237824u: goto label_7F237824;
    case 0x7F237860u: goto label_7F237860;
    case 0x7F23787Cu: goto label_7F23787C;
    case 0x7F2378BCu: goto label_7F2378BC;
    case 0x7F2378C4u: goto label_7F2378C4;
    case 0x7F2378CCu: goto label_7F2378CC;
    case 0x7F2378D8u: goto label_7F2378D8;
    case 0x7F2378E0u: goto label_7F2378E0;
    case 0x7F2378F8u: goto label_7F2378F8;
    case 0x7F237910u: goto label_7F237910;
    case 0x7F237920u: goto label_7F237920;
    case 0x7F237934u: goto label_7F237934;
    case 0x7F23793Cu: goto label_7F23793C;
    case 0x7F237944u: goto label_7F237944;
    case 0x7F23795Cu: goto label_7F23795C;
    case 0x7F237974u: goto label_7F237974;
    case 0x7F237984u: goto label_7F237984;
    case 0x7F2379B4u: goto label_7F2379B4;
    case 0x7F237A54u: goto label_7F237A54;
    case 0x7F237A5Cu: goto label_7F237A5C;
    case 0x7F237A64u: goto label_7F237A64;
    case 0x7F237A6Cu: goto label_7F237A6C;
    case 0x7F237A78u: goto label_7F237A78;
    case 0x7F237A7Cu: goto label_7F237A7C;
    case 0x7F237AE4u: goto label_7F237AE4;
    case 0x7F237B4Cu: goto label_7F237B4C;
    case 0x7F237B84u: goto label_7F237B84;
    case 0x7F237B9Cu: goto label_7F237B9C;
    case 0x7F237BACu: goto label_7F237BAC;
    case 0x7F237BB4u: goto label_7F237BB4;
    case 0x7F237BBCu: goto label_7F237BBC;
    case 0x7F237C0Cu: goto label_7F237C0C;
    case 0x7F237C1Cu: goto label_7F237C1C;
    case 0x7F237C30u: goto label_7F237C30;
    case 0x7F237C48u: goto label_7F237C48;
    case 0x7F237C78u: goto label_7F237C78;
    case 0x7F237C84u: goto label_7F237C84;
    case 0x7F237CA4u: goto label_7F237CA4;
    case 0x7F237CA8u: goto label_7F237CA8;
    case 0x7F237CC4u: goto label_7F237CC4;
    case 0x7F237CDCu: goto label_7F237CDC;
    case 0x7F237CF0u: goto label_7F237CF0;
    case 0x7F237D1Cu: goto label_7F237D1C;
    case 0x7F237D50u: goto label_7F237D50;
    case 0x7F237D60u: goto label_7F237D60;
    case 0x7F237D8Cu: goto label_7F237D8C;
    case 0x7F237DE4u: goto label_7F237DE4;
    case 0x7F237E14u: goto label_7F237E14;
    case 0x7F237E24u: goto label_7F237E24;
    case 0x7F237E30u: goto label_7F237E30;
    case 0x7F237EB0u: goto label_7F237EB0;
    case 0x7F237ECCu: goto label_7F237ECC;
    case 0x7F237EFCu: goto label_7F237EFC;
    case 0x7F237F04u: goto label_7F237F04;
    case 0x7F237F14u: goto label_7F237F14;
    case 0x7F237F60u: goto label_7F237F60;
    case 0x7F237F6Cu: goto label_7F237F6C;
    case 0x7F237F78u: goto label_7F237F78;
    case 0x7F237F84u: goto label_7F237F84;
    case 0x7F237F98u: goto label_7F237F98;
    case 0x7F237FA8u: goto label_7F237FA8;
    case 0x7F237FB0u: goto label_7F237FB0;
    case 0x7F237FC8u: goto label_7F237FC8;
    case 0x7F237FE4u: goto label_7F237FE4;
    case 0x7F237FFCu: goto label_7F237FFC;
    case 0x7F238008u: goto label_7F238008;
    case 0x7F238014u: goto label_7F238014;
    case 0x7F238024u: goto label_7F238024;
    case 0x7F238034u: goto label_7F238034;
    case 0x7F238044u: goto label_7F238044;
    case 0x7F238054u: goto label_7F238054;
    case 0x7F238060u: goto label_7F238060;
    case 0x7F238068u: goto label_7F238068;
    case 0x7F238070u: goto label_7F238070;
    case 0x7F238080u: goto label_7F238080;
    case 0x7F2380E0u: goto label_7F2380E0;
    case 0x7F2380E8u: goto label_7F2380E8;
    default: return;
    }
}

