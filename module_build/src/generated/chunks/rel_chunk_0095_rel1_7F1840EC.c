// DolRecomp output
#include "../generated.h"

static void loop_7F185230(CPUState* ctx) {
label_7F185230:
    ctx->downcount -= 51;
    ctx->pc = 0x7F185230u;
    // 7F185230: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F185234: addi    r5, r26, 16468
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(16468);

    ctx->pc = 0x7F185238u;
    // 7F185238: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F18523C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

    // 7F185240: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

    // 7F185244: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

    ctx->pc = 0x7F185248u;
    // 7F185248: stw     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F18524C: li      r6, 96
    ctx->gpr[6] = (u32)(s32)(96);

    // 7F185250: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

    // 7F185254: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

    ctx->pc = 0x7F185258u;
    // 7F185258: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F18525C: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

    // 7F185260: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

    ctx->pc = 0x7F185264u;
    // 7F185264: lwz     r12, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F185268u;
    // 7F185268: lwz     r11, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F18526Cu;
    // 7F18526C: stw     r12, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

    ctx->pc = 0x7F185270u;
    // 7F185270: stw     r11, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

    // 7F185274: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

    ctx->pc = 0x7F185278u;
    // 7F185278: sth     r10, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    ctx->pc = 0x7F18527Cu;
    // 7F18527C: sth     r10, 6(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    ctx->pc = 0x7F185280u;
    // 7F185280: sth     r9, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    ctx->pc = 0x7F185284u;
    // 7F185284: sth     r9, 14(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    ctx->pc = 0x7F185288u;
    // 7F185288: stb     r7, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

    ctx->pc = 0x7F18528Cu;
    // 7F18528C: stb     r7, 1(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

    ctx->pc = 0x7F185290u;
    // 7F185290: stb     r6, 2(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    ctx->pc = 0x7F185294u;
    // 7F185294: stb     r10, 3(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    ctx->pc = 0x7F185298u;
    // 7F185298: sth     r8, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    ctx->pc = 0x7F18529Cu;
    // 7F18529C: sth     r8, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    // 7F1852A0: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

    ctx->pc = 0x7F1852A4u;
    // 7F1852A4: lwz     r7, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1852A8u;
    // 7F1852A8: lwz     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1852ACu;
    // 7F1852AC: stw     r7, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F1852B0u;
    // 7F1852B0: stw     r6, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F1852B4u;
    // 7F1852B4: lwz     r7, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1852B8u;
    // 7F1852B8: lwz     r6, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1852BCu;
    // 7F1852BC: stw     r7, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F1852C0u;
    // 7F1852C0: stw     r6, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F1852C4: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

    ctx->pc = 0x7F1852C8u;
    // 7F1852C8: stwx    r10, r28, r5
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    ctx->pc = 0x7F1852CCu;
    // 7F1852CC: sth     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    ctx->pc = 0x7F1852D0u;
    // 7F1852D0: sth     r10, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    ctx->pc = 0x7F1852D4u;
    // 7F1852D4: sth     r9, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1852D8u;
    // 7F1852D8: sth     r9, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1852DCu;
    // 7F1852DC: stb     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1852E0u;
    // 7F1852E0: stb     r4, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1852E4u;
    // 7F1852E4: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F1852E8u;
    // 7F1852E8: stb     r10, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    ctx->pc = 0x7F1852ECu;
    // 7F1852EC: sth     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    ctx->pc = 0x7F1852F0u;
    // 7F1852F0: sth     r8, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    // 7F1852F4: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    // 7F1852F8: bc    16, 0, 0x7F185230
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185230u;
                return;
            }
            goto label_7F185230;
        }
    }

    ctx->pc = 0x7F1852FCu;
}

static void loop_7F186040(CPUState* ctx) {
label_7F186040:
    ctx->downcount -= 4;
    ctx->pc = 0x7F186040u;
    // 7F186040: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F186044u;
    // 7F186044: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F186048: addi    r27, r27, 12
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(12);

    // 7F18604C: bc    16, 0, 0x7F186040
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186040u;
                return;
            }
            goto label_7F186040;
        }
    }

    ctx->pc = 0x7F186050u;
}

void func_7F1840EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1840ECu: goto label_7F1840EC;
    case 0x7F1840F0u: goto label_7F1840F0;
    case 0x7F1840F4u: goto label_7F1840F4;
    case 0x7F1840F8u: goto label_7F1840F8;
    case 0x7F1840FCu: goto label_7F1840FC;
    case 0x7F184100u: goto label_7F184100;
    case 0x7F184104u: goto label_7F184104;
    case 0x7F184108u: goto label_7F184108;
    case 0x7F18410Cu: goto label_7F18410C;
    case 0x7F184110u: goto label_7F184110;
    case 0x7F184114u: goto label_7F184114;
    case 0x7F184118u: goto label_7F184118;
    case 0x7F18411Cu: goto label_7F18411C;
    case 0x7F184120u: goto label_7F184120;
    case 0x7F184124u: goto label_7F184124;
    case 0x7F184128u: goto label_7F184128;
    case 0x7F18412Cu: goto label_7F18412C;
    case 0x7F184130u: goto label_7F184130;
    case 0x7F184134u: goto label_7F184134;
    case 0x7F184138u: goto label_7F184138;
    case 0x7F18413Cu: goto label_7F18413C;
    case 0x7F184140u: goto label_7F184140;
    case 0x7F184144u: goto label_7F184144;
    case 0x7F184148u: goto label_7F184148;
    case 0x7F18414Cu: goto label_7F18414C;
    case 0x7F184150u: goto label_7F184150;
    case 0x7F184154u: goto label_7F184154;
    case 0x7F184158u: goto label_7F184158;
    case 0x7F18415Cu: goto label_7F18415C;
    case 0x7F184160u: goto label_7F184160;
    case 0x7F184164u: goto label_7F184164;
    case 0x7F184168u: goto label_7F184168;
    case 0x7F18416Cu: goto label_7F18416C;
    case 0x7F184170u: goto label_7F184170;
    case 0x7F184174u: goto label_7F184174;
    case 0x7F184178u: goto label_7F184178;
    case 0x7F18417Cu: goto label_7F18417C;
    case 0x7F184180u: goto label_7F184180;
    case 0x7F184184u: goto label_7F184184;
    case 0x7F184188u: goto label_7F184188;
    case 0x7F18418Cu: goto label_7F18418C;
    case 0x7F184190u: goto label_7F184190;
    case 0x7F184194u: goto label_7F184194;
    case 0x7F184198u: goto label_7F184198;
    case 0x7F18419Cu: goto label_7F18419C;
    case 0x7F1841A0u: goto label_7F1841A0;
    case 0x7F1841A4u: goto label_7F1841A4;
    case 0x7F1841A8u: goto label_7F1841A8;
    case 0x7F1841ACu: goto label_7F1841AC;
    case 0x7F1841B0u: goto label_7F1841B0;
    case 0x7F1841B4u: goto label_7F1841B4;
    case 0x7F1841B8u: goto label_7F1841B8;
    case 0x7F1841BCu: goto label_7F1841BC;
    case 0x7F1841C0u: goto label_7F1841C0;
    case 0x7F1841C4u: goto label_7F1841C4;
    case 0x7F1841C8u: goto label_7F1841C8;
    case 0x7F1841CCu: goto label_7F1841CC;
    case 0x7F1841D0u: goto label_7F1841D0;
    case 0x7F1841D4u: goto label_7F1841D4;
    case 0x7F1841D8u: goto label_7F1841D8;
    case 0x7F1841DCu: goto label_7F1841DC;
    case 0x7F1841E0u: goto label_7F1841E0;
    case 0x7F1841E4u: goto label_7F1841E4;
    case 0x7F1841E8u: goto label_7F1841E8;
    case 0x7F1841ECu: goto label_7F1841EC;
    case 0x7F1841F0u: goto label_7F1841F0;
    case 0x7F1841F4u: goto label_7F1841F4;
    case 0x7F1841F8u: goto label_7F1841F8;
    case 0x7F1841FCu: goto label_7F1841FC;
    case 0x7F184200u: goto label_7F184200;
    case 0x7F184204u: goto label_7F184204;
    case 0x7F184208u: goto label_7F184208;
    case 0x7F18420Cu: goto label_7F18420C;
    case 0x7F184210u: goto label_7F184210;
    case 0x7F184214u: goto label_7F184214;
    case 0x7F184218u: goto label_7F184218;
    case 0x7F18421Cu: goto label_7F18421C;
    case 0x7F184220u: goto label_7F184220;
    case 0x7F184224u: goto label_7F184224;
    case 0x7F184228u: goto label_7F184228;
    case 0x7F18422Cu: goto label_7F18422C;
    case 0x7F184230u: goto label_7F184230;
    case 0x7F184234u: goto label_7F184234;
    case 0x7F184238u: goto label_7F184238;
    case 0x7F18423Cu: goto label_7F18423C;
    case 0x7F184240u: goto label_7F184240;
    case 0x7F184244u: goto label_7F184244;
    case 0x7F184248u: goto label_7F184248;
    case 0x7F18424Cu: goto label_7F18424C;
    case 0x7F184250u: goto label_7F184250;
    case 0x7F184254u: goto label_7F184254;
    case 0x7F184258u: goto label_7F184258;
    case 0x7F18425Cu: goto label_7F18425C;
    case 0x7F184260u: goto label_7F184260;
    case 0x7F184264u: goto label_7F184264;
    case 0x7F184268u: goto label_7F184268;
    case 0x7F18426Cu: goto label_7F18426C;
    case 0x7F184270u: goto label_7F184270;
    case 0x7F184274u: goto label_7F184274;
    case 0x7F184278u: goto label_7F184278;
    case 0x7F18427Cu: goto label_7F18427C;
    case 0x7F184280u: goto label_7F184280;
    case 0x7F184284u: goto label_7F184284;
    case 0x7F184288u: goto label_7F184288;
    case 0x7F18428Cu: goto label_7F18428C;
    case 0x7F184290u: goto label_7F184290;
    case 0x7F184294u: goto label_7F184294;
    case 0x7F184298u: goto label_7F184298;
    case 0x7F18429Cu: goto label_7F18429C;
    case 0x7F1842A0u: goto label_7F1842A0;
    case 0x7F1842A4u: goto label_7F1842A4;
    case 0x7F1842A8u: goto label_7F1842A8;
    case 0x7F1842ACu: goto label_7F1842AC;
    case 0x7F1842B0u: goto label_7F1842B0;
    case 0x7F1842B4u: goto label_7F1842B4;
    case 0x7F1842B8u: goto label_7F1842B8;
    case 0x7F1842BCu: goto label_7F1842BC;
    case 0x7F1842C0u: goto label_7F1842C0;
    case 0x7F1842C4u: goto label_7F1842C4;
    case 0x7F1842C8u: goto label_7F1842C8;
    case 0x7F1842CCu: goto label_7F1842CC;
    case 0x7F1842D0u: goto label_7F1842D0;
    case 0x7F1842D4u: goto label_7F1842D4;
    case 0x7F1842D8u: goto label_7F1842D8;
    case 0x7F1842DCu: goto label_7F1842DC;
    case 0x7F1842E0u: goto label_7F1842E0;
    case 0x7F1842E4u: goto label_7F1842E4;
    case 0x7F1842E8u: goto label_7F1842E8;
    case 0x7F1842ECu: goto label_7F1842EC;
    case 0x7F1842F0u: goto label_7F1842F0;
    case 0x7F1842F4u: goto label_7F1842F4;
    case 0x7F1842F8u: goto label_7F1842F8;
    case 0x7F1842FCu: goto label_7F1842FC;
    case 0x7F184300u: goto label_7F184300;
    case 0x7F184304u: goto label_7F184304;
    case 0x7F184308u: goto label_7F184308;
    case 0x7F18430Cu: goto label_7F18430C;
    case 0x7F184310u: goto label_7F184310;
    case 0x7F184314u: goto label_7F184314;
    case 0x7F184318u: goto label_7F184318;
    case 0x7F18431Cu: goto label_7F18431C;
    case 0x7F184320u: goto label_7F184320;
    case 0x7F184324u: goto label_7F184324;
    case 0x7F184328u: goto label_7F184328;
    case 0x7F18432Cu: goto label_7F18432C;
    case 0x7F184330u: goto label_7F184330;
    case 0x7F184334u: goto label_7F184334;
    case 0x7F184338u: goto label_7F184338;
    case 0x7F18433Cu: goto label_7F18433C;
    case 0x7F184340u: goto label_7F184340;
    case 0x7F184344u: goto label_7F184344;
    case 0x7F184348u: goto label_7F184348;
    case 0x7F18434Cu: goto label_7F18434C;
    case 0x7F184350u: goto label_7F184350;
    case 0x7F184354u: goto label_7F184354;
    case 0x7F184358u: goto label_7F184358;
    case 0x7F18435Cu: goto label_7F18435C;
    case 0x7F184360u: goto label_7F184360;
    case 0x7F184364u: goto label_7F184364;
    case 0x7F184368u: goto label_7F184368;
    case 0x7F18436Cu: goto label_7F18436C;
    case 0x7F184370u: goto label_7F184370;
    case 0x7F184374u: goto label_7F184374;
    case 0x7F184378u: goto label_7F184378;
    case 0x7F18437Cu: goto label_7F18437C;
    case 0x7F184380u: goto label_7F184380;
    case 0x7F184384u: goto label_7F184384;
    case 0x7F184388u: goto label_7F184388;
    case 0x7F18438Cu: goto label_7F18438C;
    case 0x7F184390u: goto label_7F184390;
    case 0x7F184394u: goto label_7F184394;
    case 0x7F184398u: goto label_7F184398;
    case 0x7F18439Cu: goto label_7F18439C;
    case 0x7F1843A0u: goto label_7F1843A0;
    case 0x7F1843A4u: goto label_7F1843A4;
    case 0x7F1843A8u: goto label_7F1843A8;
    case 0x7F1843ACu: goto label_7F1843AC;
    case 0x7F1843B0u: goto label_7F1843B0;
    case 0x7F1843B4u: goto label_7F1843B4;
    case 0x7F1843B8u: goto label_7F1843B8;
    case 0x7F1843BCu: goto label_7F1843BC;
    case 0x7F1843C0u: goto label_7F1843C0;
    case 0x7F1843C4u: goto label_7F1843C4;
    case 0x7F1843C8u: goto label_7F1843C8;
    case 0x7F1843CCu: goto label_7F1843CC;
    case 0x7F1843D0u: goto label_7F1843D0;
    case 0x7F1843D4u: goto label_7F1843D4;
    case 0x7F1843D8u: goto label_7F1843D8;
    case 0x7F1843DCu: goto label_7F1843DC;
    case 0x7F1843E0u: goto label_7F1843E0;
    case 0x7F1843E4u: goto label_7F1843E4;
    case 0x7F1843E8u: goto label_7F1843E8;
    case 0x7F1843ECu: goto label_7F1843EC;
    case 0x7F1843F0u: goto label_7F1843F0;
    case 0x7F1843F4u: goto label_7F1843F4;
    case 0x7F1843F8u: goto label_7F1843F8;
    case 0x7F1843FCu: goto label_7F1843FC;
    case 0x7F184400u: goto label_7F184400;
    case 0x7F184404u: goto label_7F184404;
    case 0x7F184408u: goto label_7F184408;
    case 0x7F18440Cu: goto label_7F18440C;
    case 0x7F184410u: goto label_7F184410;
    case 0x7F184414u: goto label_7F184414;
    case 0x7F184418u: goto label_7F184418;
    case 0x7F18441Cu: goto label_7F18441C;
    case 0x7F184420u: goto label_7F184420;
    case 0x7F184424u: goto label_7F184424;
    case 0x7F184428u: goto label_7F184428;
    case 0x7F18442Cu: goto label_7F18442C;
    case 0x7F184430u: goto label_7F184430;
    case 0x7F184434u: goto label_7F184434;
    case 0x7F184438u: goto label_7F184438;
    case 0x7F18443Cu: goto label_7F18443C;
    case 0x7F184440u: goto label_7F184440;
    case 0x7F184444u: goto label_7F184444;
    case 0x7F184448u: goto label_7F184448;
    case 0x7F18444Cu: goto label_7F18444C;
    case 0x7F184450u: goto label_7F184450;
    case 0x7F184454u: goto label_7F184454;
    case 0x7F184458u: goto label_7F184458;
    case 0x7F18445Cu: goto label_7F18445C;
    case 0x7F184460u: goto label_7F184460;
    case 0x7F184464u: goto label_7F184464;
    case 0x7F184468u: goto label_7F184468;
    case 0x7F18446Cu: goto label_7F18446C;
    case 0x7F184470u: goto label_7F184470;
    case 0x7F184474u: goto label_7F184474;
    case 0x7F184478u: goto label_7F184478;
    case 0x7F18447Cu: goto label_7F18447C;
    case 0x7F184480u: goto label_7F184480;
    case 0x7F184484u: goto label_7F184484;
    case 0x7F184488u: goto label_7F184488;
    case 0x7F18448Cu: goto label_7F18448C;
    case 0x7F184490u: goto label_7F184490;
    case 0x7F184494u: goto label_7F184494;
    case 0x7F184498u: goto label_7F184498;
    case 0x7F18449Cu: goto label_7F18449C;
    case 0x7F1844A0u: goto label_7F1844A0;
    case 0x7F1844A4u: goto label_7F1844A4;
    case 0x7F1844A8u: goto label_7F1844A8;
    case 0x7F1844ACu: goto label_7F1844AC;
    case 0x7F1844B0u: goto label_7F1844B0;
    case 0x7F1844B4u: goto label_7F1844B4;
    case 0x7F1844B8u: goto label_7F1844B8;
    case 0x7F1844BCu: goto label_7F1844BC;
    case 0x7F1844C0u: goto label_7F1844C0;
    case 0x7F1844C4u: goto label_7F1844C4;
    case 0x7F1844C8u: goto label_7F1844C8;
    case 0x7F1844CCu: goto label_7F1844CC;
    case 0x7F1844D0u: goto label_7F1844D0;
    case 0x7F1844D4u: goto label_7F1844D4;
    case 0x7F1844D8u: goto label_7F1844D8;
    case 0x7F1844DCu: goto label_7F1844DC;
    case 0x7F1844E0u: goto label_7F1844E0;
    case 0x7F1844E4u: goto label_7F1844E4;
    case 0x7F1844E8u: goto label_7F1844E8;
    case 0x7F1844ECu: goto label_7F1844EC;
    case 0x7F1844F0u: goto label_7F1844F0;
    case 0x7F1844F4u: goto label_7F1844F4;
    case 0x7F1844F8u: goto label_7F1844F8;
    case 0x7F1844FCu: goto label_7F1844FC;
    case 0x7F184500u: goto label_7F184500;
    case 0x7F184504u: goto label_7F184504;
    case 0x7F184508u: goto label_7F184508;
    case 0x7F18450Cu: goto label_7F18450C;
    case 0x7F184510u: goto label_7F184510;
    case 0x7F184514u: goto label_7F184514;
    case 0x7F184518u: goto label_7F184518;
    case 0x7F18451Cu: goto label_7F18451C;
    case 0x7F184520u: goto label_7F184520;
    case 0x7F184524u: goto label_7F184524;
    case 0x7F184528u: goto label_7F184528;
    case 0x7F18452Cu: goto label_7F18452C;
    case 0x7F184530u: goto label_7F184530;
    case 0x7F184534u: goto label_7F184534;
    case 0x7F184538u: goto label_7F184538;
    case 0x7F18453Cu: goto label_7F18453C;
    case 0x7F184540u: goto label_7F184540;
    case 0x7F184544u: goto label_7F184544;
    case 0x7F184548u: goto label_7F184548;
    case 0x7F18454Cu: goto label_7F18454C;
    case 0x7F184550u: goto label_7F184550;
    case 0x7F184554u: goto label_7F184554;
    case 0x7F184558u: goto label_7F184558;
    case 0x7F18455Cu: goto label_7F18455C;
    case 0x7F184560u: goto label_7F184560;
    case 0x7F184564u: goto label_7F184564;
    case 0x7F184568u: goto label_7F184568;
    case 0x7F18456Cu: goto label_7F18456C;
    case 0x7F184570u: goto label_7F184570;
    case 0x7F184574u: goto label_7F184574;
    case 0x7F184578u: goto label_7F184578;
    case 0x7F18457Cu: goto label_7F18457C;
    case 0x7F184580u: goto label_7F184580;
    case 0x7F184584u: goto label_7F184584;
    case 0x7F184588u: goto label_7F184588;
    case 0x7F18458Cu: goto label_7F18458C;
    case 0x7F184590u: goto label_7F184590;
    case 0x7F184594u: goto label_7F184594;
    case 0x7F184598u: goto label_7F184598;
    case 0x7F18459Cu: goto label_7F18459C;
    case 0x7F1845A0u: goto label_7F1845A0;
    case 0x7F1845A4u: goto label_7F1845A4;
    case 0x7F1845A8u: goto label_7F1845A8;
    case 0x7F1845ACu: goto label_7F1845AC;
    case 0x7F1845B0u: goto label_7F1845B0;
    case 0x7F1845B4u: goto label_7F1845B4;
    case 0x7F1845B8u: goto label_7F1845B8;
    case 0x7F1845BCu: goto label_7F1845BC;
    case 0x7F1845C0u: goto label_7F1845C0;
    case 0x7F1845C4u: goto label_7F1845C4;
    case 0x7F1845C8u: goto label_7F1845C8;
    case 0x7F1845CCu: goto label_7F1845CC;
    case 0x7F1845D0u: goto label_7F1845D0;
    case 0x7F1845D4u: goto label_7F1845D4;
    case 0x7F1845D8u: goto label_7F1845D8;
    case 0x7F1845DCu: goto label_7F1845DC;
    case 0x7F1845E0u: goto label_7F1845E0;
    case 0x7F1845E4u: goto label_7F1845E4;
    case 0x7F1845E8u: goto label_7F1845E8;
    case 0x7F1845ECu: goto label_7F1845EC;
    case 0x7F1845F0u: goto label_7F1845F0;
    case 0x7F1845F4u: goto label_7F1845F4;
    case 0x7F1845F8u: goto label_7F1845F8;
    case 0x7F1845FCu: goto label_7F1845FC;
    case 0x7F184600u: goto label_7F184600;
    case 0x7F184604u: goto label_7F184604;
    case 0x7F184608u: goto label_7F184608;
    case 0x7F18460Cu: goto label_7F18460C;
    case 0x7F184610u: goto label_7F184610;
    case 0x7F184614u: goto label_7F184614;
    case 0x7F184618u: goto label_7F184618;
    case 0x7F18461Cu: goto label_7F18461C;
    case 0x7F184620u: goto label_7F184620;
    case 0x7F184624u: goto label_7F184624;
    case 0x7F184628u: goto label_7F184628;
    case 0x7F18462Cu: goto label_7F18462C;
    case 0x7F184630u: goto label_7F184630;
    case 0x7F184634u: goto label_7F184634;
    case 0x7F184638u: goto label_7F184638;
    case 0x7F18463Cu: goto label_7F18463C;
    case 0x7F184640u: goto label_7F184640;
    case 0x7F184644u: goto label_7F184644;
    case 0x7F184648u: goto label_7F184648;
    case 0x7F18464Cu: goto label_7F18464C;
    case 0x7F184650u: goto label_7F184650;
    case 0x7F184654u: goto label_7F184654;
    case 0x7F184658u: goto label_7F184658;
    case 0x7F18465Cu: goto label_7F18465C;
    case 0x7F184660u: goto label_7F184660;
    case 0x7F184664u: goto label_7F184664;
    case 0x7F184668u: goto label_7F184668;
    case 0x7F18466Cu: goto label_7F18466C;
    case 0x7F184670u: goto label_7F184670;
    case 0x7F184674u: goto label_7F184674;
    case 0x7F184678u: goto label_7F184678;
    case 0x7F18467Cu: goto label_7F18467C;
    case 0x7F184680u: goto label_7F184680;
    case 0x7F184684u: goto label_7F184684;
    case 0x7F184688u: goto label_7F184688;
    case 0x7F18468Cu: goto label_7F18468C;
    case 0x7F184690u: goto label_7F184690;
    case 0x7F184694u: goto label_7F184694;
    case 0x7F184698u: goto label_7F184698;
    case 0x7F18469Cu: goto label_7F18469C;
    case 0x7F1846A0u: goto label_7F1846A0;
    case 0x7F1846A4u: goto label_7F1846A4;
    case 0x7F1846A8u: goto label_7F1846A8;
    case 0x7F1846ACu: goto label_7F1846AC;
    case 0x7F1846B0u: goto label_7F1846B0;
    case 0x7F1846B4u: goto label_7F1846B4;
    case 0x7F1846B8u: goto label_7F1846B8;
    case 0x7F1846BCu: goto label_7F1846BC;
    case 0x7F1846C0u: goto label_7F1846C0;
    case 0x7F1846C4u: goto label_7F1846C4;
    case 0x7F1846C8u: goto label_7F1846C8;
    case 0x7F1846CCu: goto label_7F1846CC;
    case 0x7F1846D0u: goto label_7F1846D0;
    case 0x7F1846D4u: goto label_7F1846D4;
    case 0x7F1846D8u: goto label_7F1846D8;
    case 0x7F1846DCu: goto label_7F1846DC;
    case 0x7F1846E0u: goto label_7F1846E0;
    case 0x7F1846E4u: goto label_7F1846E4;
    case 0x7F1846E8u: goto label_7F1846E8;
    case 0x7F1846ECu: goto label_7F1846EC;
    case 0x7F1846F0u: goto label_7F1846F0;
    case 0x7F1846F4u: goto label_7F1846F4;
    case 0x7F1846F8u: goto label_7F1846F8;
    case 0x7F1846FCu: goto label_7F1846FC;
    case 0x7F184700u: goto label_7F184700;
    case 0x7F184704u: goto label_7F184704;
    case 0x7F184708u: goto label_7F184708;
    case 0x7F18470Cu: goto label_7F18470C;
    case 0x7F184710u: goto label_7F184710;
    case 0x7F184714u: goto label_7F184714;
    case 0x7F184718u: goto label_7F184718;
    case 0x7F18471Cu: goto label_7F18471C;
    case 0x7F184720u: goto label_7F184720;
    case 0x7F184724u: goto label_7F184724;
    case 0x7F184728u: goto label_7F184728;
    case 0x7F18472Cu: goto label_7F18472C;
    case 0x7F184730u: goto label_7F184730;
    case 0x7F184734u: goto label_7F184734;
    case 0x7F184738u: goto label_7F184738;
    case 0x7F18473Cu: goto label_7F18473C;
    case 0x7F184740u: goto label_7F184740;
    case 0x7F184744u: goto label_7F184744;
    case 0x7F184748u: goto label_7F184748;
    case 0x7F18474Cu: goto label_7F18474C;
    case 0x7F184750u: goto label_7F184750;
    case 0x7F184754u: goto label_7F184754;
    case 0x7F184758u: goto label_7F184758;
    case 0x7F18475Cu: goto label_7F18475C;
    case 0x7F184760u: goto label_7F184760;
    case 0x7F184764u: goto label_7F184764;
    case 0x7F184768u: goto label_7F184768;
    case 0x7F18476Cu: goto label_7F18476C;
    case 0x7F184770u: goto label_7F184770;
    case 0x7F184774u: goto label_7F184774;
    case 0x7F184778u: goto label_7F184778;
    case 0x7F18477Cu: goto label_7F18477C;
    case 0x7F184780u: goto label_7F184780;
    case 0x7F184784u: goto label_7F184784;
    case 0x7F184788u: goto label_7F184788;
    case 0x7F18478Cu: goto label_7F18478C;
    case 0x7F184790u: goto label_7F184790;
    case 0x7F184794u: goto label_7F184794;
    case 0x7F184798u: goto label_7F184798;
    case 0x7F18479Cu: goto label_7F18479C;
    case 0x7F1847A0u: goto label_7F1847A0;
    case 0x7F1847A4u: goto label_7F1847A4;
    case 0x7F1847A8u: goto label_7F1847A8;
    case 0x7F1847ACu: goto label_7F1847AC;
    case 0x7F1847B0u: goto label_7F1847B0;
    case 0x7F1847B4u: goto label_7F1847B4;
    case 0x7F1847B8u: goto label_7F1847B8;
    case 0x7F1847BCu: goto label_7F1847BC;
    case 0x7F1847C0u: goto label_7F1847C0;
    case 0x7F1847C4u: goto label_7F1847C4;
    case 0x7F1847C8u: goto label_7F1847C8;
    case 0x7F1847CCu: goto label_7F1847CC;
    case 0x7F1847D0u: goto label_7F1847D0;
    case 0x7F1847D4u: goto label_7F1847D4;
    case 0x7F1847D8u: goto label_7F1847D8;
    case 0x7F1847DCu: goto label_7F1847DC;
    case 0x7F1847E0u: goto label_7F1847E0;
    case 0x7F1847E4u: goto label_7F1847E4;
    case 0x7F1847E8u: goto label_7F1847E8;
    case 0x7F1847ECu: goto label_7F1847EC;
    case 0x7F1847F0u: goto label_7F1847F0;
    case 0x7F1847F4u: goto label_7F1847F4;
    case 0x7F1847F8u: goto label_7F1847F8;
    case 0x7F1847FCu: goto label_7F1847FC;
    case 0x7F184800u: goto label_7F184800;
    case 0x7F184804u: goto label_7F184804;
    case 0x7F184808u: goto label_7F184808;
    case 0x7F18480Cu: goto label_7F18480C;
    case 0x7F184810u: goto label_7F184810;
    case 0x7F184814u: goto label_7F184814;
    case 0x7F184818u: goto label_7F184818;
    case 0x7F18481Cu: goto label_7F18481C;
    case 0x7F184820u: goto label_7F184820;
    case 0x7F184824u: goto label_7F184824;
    case 0x7F184828u: goto label_7F184828;
    case 0x7F18482Cu: goto label_7F18482C;
    case 0x7F184830u: goto label_7F184830;
    case 0x7F184834u: goto label_7F184834;
    case 0x7F184838u: goto label_7F184838;
    case 0x7F18483Cu: goto label_7F18483C;
    case 0x7F184840u: goto label_7F184840;
    case 0x7F184844u: goto label_7F184844;
    case 0x7F184848u: goto label_7F184848;
    case 0x7F18484Cu: goto label_7F18484C;
    case 0x7F184850u: goto label_7F184850;
    case 0x7F184854u: goto label_7F184854;
    case 0x7F184858u: goto label_7F184858;
    case 0x7F18485Cu: goto label_7F18485C;
    case 0x7F184860u: goto label_7F184860;
    case 0x7F184864u: goto label_7F184864;
    case 0x7F184868u: goto label_7F184868;
    case 0x7F18486Cu: goto label_7F18486C;
    case 0x7F184870u: goto label_7F184870;
    case 0x7F184874u: goto label_7F184874;
    case 0x7F184878u: goto label_7F184878;
    case 0x7F18487Cu: goto label_7F18487C;
    case 0x7F184880u: goto label_7F184880;
    case 0x7F184884u: goto label_7F184884;
    case 0x7F184888u: goto label_7F184888;
    case 0x7F18488Cu: goto label_7F18488C;
    case 0x7F184890u: goto label_7F184890;
    case 0x7F184894u: goto label_7F184894;
    case 0x7F184898u: goto label_7F184898;
    case 0x7F18489Cu: goto label_7F18489C;
    case 0x7F1848A0u: goto label_7F1848A0;
    case 0x7F1848A4u: goto label_7F1848A4;
    case 0x7F1848A8u: goto label_7F1848A8;
    case 0x7F1848ACu: goto label_7F1848AC;
    case 0x7F1848B0u: goto label_7F1848B0;
    case 0x7F1848B4u: goto label_7F1848B4;
    case 0x7F1848B8u: goto label_7F1848B8;
    case 0x7F1848BCu: goto label_7F1848BC;
    case 0x7F1848C0u: goto label_7F1848C0;
    case 0x7F1848C4u: goto label_7F1848C4;
    case 0x7F1848C8u: goto label_7F1848C8;
    case 0x7F1848CCu: goto label_7F1848CC;
    case 0x7F1848D0u: goto label_7F1848D0;
    case 0x7F1848D4u: goto label_7F1848D4;
    case 0x7F1848D8u: goto label_7F1848D8;
    case 0x7F1848DCu: goto label_7F1848DC;
    case 0x7F1848E0u: goto label_7F1848E0;
    case 0x7F1848E4u: goto label_7F1848E4;
    case 0x7F1848E8u: goto label_7F1848E8;
    case 0x7F1848ECu: goto label_7F1848EC;
    case 0x7F1848F0u: goto label_7F1848F0;
    case 0x7F1848F4u: goto label_7F1848F4;
    case 0x7F1848F8u: goto label_7F1848F8;
    case 0x7F1848FCu: goto label_7F1848FC;
    case 0x7F184900u: goto label_7F184900;
    case 0x7F184904u: goto label_7F184904;
    case 0x7F184908u: goto label_7F184908;
    case 0x7F18490Cu: goto label_7F18490C;
    case 0x7F184910u: goto label_7F184910;
    case 0x7F184914u: goto label_7F184914;
    case 0x7F184918u: goto label_7F184918;
    case 0x7F18491Cu: goto label_7F18491C;
    case 0x7F184920u: goto label_7F184920;
    case 0x7F184924u: goto label_7F184924;
    case 0x7F184928u: goto label_7F184928;
    case 0x7F18492Cu: goto label_7F18492C;
    case 0x7F184930u: goto label_7F184930;
    case 0x7F184934u: goto label_7F184934;
    case 0x7F184938u: goto label_7F184938;
    case 0x7F18493Cu: goto label_7F18493C;
    case 0x7F184940u: goto label_7F184940;
    case 0x7F184944u: goto label_7F184944;
    case 0x7F184948u: goto label_7F184948;
    case 0x7F18494Cu: goto label_7F18494C;
    case 0x7F184950u: goto label_7F184950;
    case 0x7F184954u: goto label_7F184954;
    case 0x7F184958u: goto label_7F184958;
    case 0x7F18495Cu: goto label_7F18495C;
    case 0x7F184960u: goto label_7F184960;
    case 0x7F184964u: goto label_7F184964;
    case 0x7F184968u: goto label_7F184968;
    case 0x7F18496Cu: goto label_7F18496C;
    case 0x7F184970u: goto label_7F184970;
    case 0x7F184974u: goto label_7F184974;
    case 0x7F184978u: goto label_7F184978;
    case 0x7F18497Cu: goto label_7F18497C;
    case 0x7F184980u: goto label_7F184980;
    case 0x7F184984u: goto label_7F184984;
    case 0x7F184988u: goto label_7F184988;
    case 0x7F18498Cu: goto label_7F18498C;
    case 0x7F184990u: goto label_7F184990;
    case 0x7F184994u: goto label_7F184994;
    case 0x7F184998u: goto label_7F184998;
    case 0x7F18499Cu: goto label_7F18499C;
    case 0x7F1849A0u: goto label_7F1849A0;
    case 0x7F1849A4u: goto label_7F1849A4;
    case 0x7F1849A8u: goto label_7F1849A8;
    case 0x7F1849ACu: goto label_7F1849AC;
    case 0x7F1849B0u: goto label_7F1849B0;
    case 0x7F1849B4u: goto label_7F1849B4;
    case 0x7F1849B8u: goto label_7F1849B8;
    case 0x7F1849BCu: goto label_7F1849BC;
    case 0x7F1849C0u: goto label_7F1849C0;
    case 0x7F1849C4u: goto label_7F1849C4;
    case 0x7F1849C8u: goto label_7F1849C8;
    case 0x7F1849CCu: goto label_7F1849CC;
    case 0x7F1849D0u: goto label_7F1849D0;
    case 0x7F1849D4u: goto label_7F1849D4;
    case 0x7F1849D8u: goto label_7F1849D8;
    case 0x7F1849DCu: goto label_7F1849DC;
    case 0x7F1849E0u: goto label_7F1849E0;
    case 0x7F1849E4u: goto label_7F1849E4;
    case 0x7F1849E8u: goto label_7F1849E8;
    case 0x7F1849ECu: goto label_7F1849EC;
    case 0x7F1849F0u: goto label_7F1849F0;
    case 0x7F1849F4u: goto label_7F1849F4;
    case 0x7F1849F8u: goto label_7F1849F8;
    case 0x7F1849FCu: goto label_7F1849FC;
    case 0x7F184A00u: goto label_7F184A00;
    case 0x7F184A04u: goto label_7F184A04;
    case 0x7F184A08u: goto label_7F184A08;
    case 0x7F184A0Cu: goto label_7F184A0C;
    case 0x7F184A10u: goto label_7F184A10;
    case 0x7F184A14u: goto label_7F184A14;
    case 0x7F184A18u: goto label_7F184A18;
    case 0x7F184A1Cu: goto label_7F184A1C;
    case 0x7F184A20u: goto label_7F184A20;
    case 0x7F184A24u: goto label_7F184A24;
    case 0x7F184A28u: goto label_7F184A28;
    case 0x7F184A2Cu: goto label_7F184A2C;
    case 0x7F184A30u: goto label_7F184A30;
    case 0x7F184A34u: goto label_7F184A34;
    case 0x7F184A38u: goto label_7F184A38;
    case 0x7F184A3Cu: goto label_7F184A3C;
    case 0x7F184A40u: goto label_7F184A40;
    case 0x7F184A44u: goto label_7F184A44;
    case 0x7F184A48u: goto label_7F184A48;
    case 0x7F184A4Cu: goto label_7F184A4C;
    case 0x7F184A50u: goto label_7F184A50;
    case 0x7F184A54u: goto label_7F184A54;
    case 0x7F184A58u: goto label_7F184A58;
    case 0x7F184A5Cu: goto label_7F184A5C;
    case 0x7F184A60u: goto label_7F184A60;
    case 0x7F184A64u: goto label_7F184A64;
    case 0x7F184A68u: goto label_7F184A68;
    case 0x7F184A6Cu: goto label_7F184A6C;
    case 0x7F184A70u: goto label_7F184A70;
    case 0x7F184A74u: goto label_7F184A74;
    case 0x7F184A78u: goto label_7F184A78;
    case 0x7F184A7Cu: goto label_7F184A7C;
    case 0x7F184A80u: goto label_7F184A80;
    case 0x7F184A84u: goto label_7F184A84;
    case 0x7F184A88u: goto label_7F184A88;
    case 0x7F184A8Cu: goto label_7F184A8C;
    case 0x7F184A90u: goto label_7F184A90;
    case 0x7F184A94u: goto label_7F184A94;
    case 0x7F184A98u: goto label_7F184A98;
    case 0x7F184A9Cu: goto label_7F184A9C;
    case 0x7F184AA0u: goto label_7F184AA0;
    case 0x7F184AA4u: goto label_7F184AA4;
    case 0x7F184AA8u: goto label_7F184AA8;
    case 0x7F184AACu: goto label_7F184AAC;
    case 0x7F184AB0u: goto label_7F184AB0;
    case 0x7F184AB4u: goto label_7F184AB4;
    case 0x7F184AB8u: goto label_7F184AB8;
    case 0x7F184ABCu: goto label_7F184ABC;
    case 0x7F184AC0u: goto label_7F184AC0;
    case 0x7F184AC4u: goto label_7F184AC4;
    case 0x7F184AC8u: goto label_7F184AC8;
    case 0x7F184ACCu: goto label_7F184ACC;
    case 0x7F184AD0u: goto label_7F184AD0;
    case 0x7F184AD4u: goto label_7F184AD4;
    case 0x7F184AD8u: goto label_7F184AD8;
    case 0x7F184ADCu: goto label_7F184ADC;
    case 0x7F184AE0u: goto label_7F184AE0;
    case 0x7F184AE4u: goto label_7F184AE4;
    case 0x7F184AE8u: goto label_7F184AE8;
    case 0x7F184AECu: goto label_7F184AEC;
    case 0x7F184AF0u: goto label_7F184AF0;
    case 0x7F184AF4u: goto label_7F184AF4;
    case 0x7F184AF8u: goto label_7F184AF8;
    case 0x7F184AFCu: goto label_7F184AFC;
    case 0x7F184B00u: goto label_7F184B00;
    case 0x7F184B04u: goto label_7F184B04;
    case 0x7F184B08u: goto label_7F184B08;
    case 0x7F184B0Cu: goto label_7F184B0C;
    case 0x7F184B10u: goto label_7F184B10;
    case 0x7F184B14u: goto label_7F184B14;
    case 0x7F184B18u: goto label_7F184B18;
    case 0x7F184B1Cu: goto label_7F184B1C;
    case 0x7F184B20u: goto label_7F184B20;
    case 0x7F184B24u: goto label_7F184B24;
    case 0x7F184B28u: goto label_7F184B28;
    case 0x7F184B2Cu: goto label_7F184B2C;
    case 0x7F184B30u: goto label_7F184B30;
    case 0x7F184B34u: goto label_7F184B34;
    case 0x7F184B38u: goto label_7F184B38;
    case 0x7F184B3Cu: goto label_7F184B3C;
    case 0x7F184B40u: goto label_7F184B40;
    case 0x7F184B44u: goto label_7F184B44;
    case 0x7F184B48u: goto label_7F184B48;
    case 0x7F184B4Cu: goto label_7F184B4C;
    case 0x7F184B50u: goto label_7F184B50;
    case 0x7F184B54u: goto label_7F184B54;
    case 0x7F184B58u: goto label_7F184B58;
    case 0x7F184B5Cu: goto label_7F184B5C;
    case 0x7F184B60u: goto label_7F184B60;
    case 0x7F184B64u: goto label_7F184B64;
    case 0x7F184B68u: goto label_7F184B68;
    case 0x7F184B6Cu: goto label_7F184B6C;
    case 0x7F184B70u: goto label_7F184B70;
    case 0x7F184B74u: goto label_7F184B74;
    case 0x7F184B78u: goto label_7F184B78;
    case 0x7F184B7Cu: goto label_7F184B7C;
    case 0x7F184B80u: goto label_7F184B80;
    case 0x7F184B84u: goto label_7F184B84;
    case 0x7F184B88u: goto label_7F184B88;
    case 0x7F184B8Cu: goto label_7F184B8C;
    case 0x7F184B90u: goto label_7F184B90;
    case 0x7F184B94u: goto label_7F184B94;
    case 0x7F184B98u: goto label_7F184B98;
    case 0x7F184B9Cu: goto label_7F184B9C;
    case 0x7F184BA0u: goto label_7F184BA0;
    case 0x7F184BA4u: goto label_7F184BA4;
    case 0x7F184BA8u: goto label_7F184BA8;
    case 0x7F184BACu: goto label_7F184BAC;
    case 0x7F184BB0u: goto label_7F184BB0;
    case 0x7F184BB4u: goto label_7F184BB4;
    case 0x7F184BB8u: goto label_7F184BB8;
    case 0x7F184BBCu: goto label_7F184BBC;
    case 0x7F184BC0u: goto label_7F184BC0;
    case 0x7F184BC4u: goto label_7F184BC4;
    case 0x7F184BC8u: goto label_7F184BC8;
    case 0x7F184BCCu: goto label_7F184BCC;
    case 0x7F184BD0u: goto label_7F184BD0;
    case 0x7F184BD4u: goto label_7F184BD4;
    case 0x7F184BD8u: goto label_7F184BD8;
    case 0x7F184BDCu: goto label_7F184BDC;
    case 0x7F184BE0u: goto label_7F184BE0;
    case 0x7F184BE4u: goto label_7F184BE4;
    case 0x7F184BE8u: goto label_7F184BE8;
    case 0x7F184BECu: goto label_7F184BEC;
    case 0x7F184BF0u: goto label_7F184BF0;
    case 0x7F184BF4u: goto label_7F184BF4;
    case 0x7F184BF8u: goto label_7F184BF8;
    case 0x7F184BFCu: goto label_7F184BFC;
    case 0x7F184C00u: goto label_7F184C00;
    case 0x7F184C04u: goto label_7F184C04;
    case 0x7F184C08u: goto label_7F184C08;
    case 0x7F184C0Cu: goto label_7F184C0C;
    case 0x7F184C10u: goto label_7F184C10;
    case 0x7F184C14u: goto label_7F184C14;
    case 0x7F184C18u: goto label_7F184C18;
    case 0x7F184C1Cu: goto label_7F184C1C;
    case 0x7F184C20u: goto label_7F184C20;
    case 0x7F184C24u: goto label_7F184C24;
    case 0x7F184C28u: goto label_7F184C28;
    case 0x7F184C2Cu: goto label_7F184C2C;
    case 0x7F184C30u: goto label_7F184C30;
    case 0x7F184C34u: goto label_7F184C34;
    case 0x7F184C38u: goto label_7F184C38;
    case 0x7F184C3Cu: goto label_7F184C3C;
    case 0x7F184C40u: goto label_7F184C40;
    case 0x7F184C44u: goto label_7F184C44;
    case 0x7F184C48u: goto label_7F184C48;
    case 0x7F184C4Cu: goto label_7F184C4C;
    case 0x7F184C50u: goto label_7F184C50;
    case 0x7F184C54u: goto label_7F184C54;
    case 0x7F184C58u: goto label_7F184C58;
    case 0x7F184C5Cu: goto label_7F184C5C;
    case 0x7F184C60u: goto label_7F184C60;
    case 0x7F184C64u: goto label_7F184C64;
    case 0x7F184C68u: goto label_7F184C68;
    case 0x7F184C6Cu: goto label_7F184C6C;
    case 0x7F184C70u: goto label_7F184C70;
    case 0x7F184C74u: goto label_7F184C74;
    case 0x7F184C78u: goto label_7F184C78;
    case 0x7F184C7Cu: goto label_7F184C7C;
    case 0x7F184C80u: goto label_7F184C80;
    case 0x7F184C84u: goto label_7F184C84;
    case 0x7F184C88u: goto label_7F184C88;
    case 0x7F184C8Cu: goto label_7F184C8C;
    case 0x7F184C90u: goto label_7F184C90;
    case 0x7F184C94u: goto label_7F184C94;
    case 0x7F184C98u: goto label_7F184C98;
    case 0x7F184C9Cu: goto label_7F184C9C;
    case 0x7F184CA0u: goto label_7F184CA0;
    case 0x7F184CA4u: goto label_7F184CA4;
    case 0x7F184CA8u: goto label_7F184CA8;
    case 0x7F184CACu: goto label_7F184CAC;
    case 0x7F184CB0u: goto label_7F184CB0;
    case 0x7F184CB4u: goto label_7F184CB4;
    case 0x7F184CB8u: goto label_7F184CB8;
    case 0x7F184CBCu: goto label_7F184CBC;
    case 0x7F184CC0u: goto label_7F184CC0;
    case 0x7F184CC4u: goto label_7F184CC4;
    case 0x7F184CC8u: goto label_7F184CC8;
    case 0x7F184CCCu: goto label_7F184CCC;
    case 0x7F184CD0u: goto label_7F184CD0;
    case 0x7F184CD4u: goto label_7F184CD4;
    case 0x7F184CD8u: goto label_7F184CD8;
    case 0x7F184CDCu: goto label_7F184CDC;
    case 0x7F184CE0u: goto label_7F184CE0;
    case 0x7F184CE4u: goto label_7F184CE4;
    case 0x7F184CE8u: goto label_7F184CE8;
    case 0x7F184CECu: goto label_7F184CEC;
    case 0x7F184CF0u: goto label_7F184CF0;
    case 0x7F184CF4u: goto label_7F184CF4;
    case 0x7F184CF8u: goto label_7F184CF8;
    case 0x7F184CFCu: goto label_7F184CFC;
    case 0x7F184D00u: goto label_7F184D00;
    case 0x7F184D04u: goto label_7F184D04;
    case 0x7F184D08u: goto label_7F184D08;
    case 0x7F184D0Cu: goto label_7F184D0C;
    case 0x7F184D10u: goto label_7F184D10;
    case 0x7F184D14u: goto label_7F184D14;
    case 0x7F184D18u: goto label_7F184D18;
    case 0x7F184D1Cu: goto label_7F184D1C;
    case 0x7F184D20u: goto label_7F184D20;
    case 0x7F184D24u: goto label_7F184D24;
    case 0x7F184D28u: goto label_7F184D28;
    case 0x7F184D2Cu: goto label_7F184D2C;
    case 0x7F184D30u: goto label_7F184D30;
    case 0x7F184D34u: goto label_7F184D34;
    case 0x7F184D38u: goto label_7F184D38;
    case 0x7F184D3Cu: goto label_7F184D3C;
    case 0x7F184D40u: goto label_7F184D40;
    case 0x7F184D44u: goto label_7F184D44;
    case 0x7F184D48u: goto label_7F184D48;
    case 0x7F184D4Cu: goto label_7F184D4C;
    case 0x7F184D50u: goto label_7F184D50;
    case 0x7F184D54u: goto label_7F184D54;
    case 0x7F184D58u: goto label_7F184D58;
    case 0x7F184D5Cu: goto label_7F184D5C;
    case 0x7F184D60u: goto label_7F184D60;
    case 0x7F184D64u: goto label_7F184D64;
    case 0x7F184D68u: goto label_7F184D68;
    case 0x7F184D6Cu: goto label_7F184D6C;
    case 0x7F184D70u: goto label_7F184D70;
    case 0x7F184D74u: goto label_7F184D74;
    case 0x7F184D78u: goto label_7F184D78;
    case 0x7F184D7Cu: goto label_7F184D7C;
    case 0x7F184D80u: goto label_7F184D80;
    case 0x7F184D84u: goto label_7F184D84;
    case 0x7F184D88u: goto label_7F184D88;
    case 0x7F184D8Cu: goto label_7F184D8C;
    case 0x7F184D90u: goto label_7F184D90;
    case 0x7F184D94u: goto label_7F184D94;
    case 0x7F184D98u: goto label_7F184D98;
    case 0x7F184D9Cu: goto label_7F184D9C;
    case 0x7F184DA0u: goto label_7F184DA0;
    case 0x7F184DA4u: goto label_7F184DA4;
    case 0x7F184DA8u: goto label_7F184DA8;
    case 0x7F184DACu: goto label_7F184DAC;
    case 0x7F184DB0u: goto label_7F184DB0;
    case 0x7F184DB4u: goto label_7F184DB4;
    case 0x7F184DB8u: goto label_7F184DB8;
    case 0x7F184DBCu: goto label_7F184DBC;
    case 0x7F184DC0u: goto label_7F184DC0;
    case 0x7F184DC4u: goto label_7F184DC4;
    case 0x7F184DC8u: goto label_7F184DC8;
    case 0x7F184DCCu: goto label_7F184DCC;
    case 0x7F184DD0u: goto label_7F184DD0;
    case 0x7F184DD4u: goto label_7F184DD4;
    case 0x7F184DD8u: goto label_7F184DD8;
    case 0x7F184DDCu: goto label_7F184DDC;
    case 0x7F184DE0u: goto label_7F184DE0;
    case 0x7F184DE4u: goto label_7F184DE4;
    case 0x7F184DE8u: goto label_7F184DE8;
    case 0x7F184DECu: goto label_7F184DEC;
    case 0x7F184DF0u: goto label_7F184DF0;
    case 0x7F184DF4u: goto label_7F184DF4;
    case 0x7F184DF8u: goto label_7F184DF8;
    case 0x7F184DFCu: goto label_7F184DFC;
    case 0x7F184E00u: goto label_7F184E00;
    case 0x7F184E04u: goto label_7F184E04;
    case 0x7F184E08u: goto label_7F184E08;
    case 0x7F184E0Cu: goto label_7F184E0C;
    case 0x7F184E10u: goto label_7F184E10;
    case 0x7F184E14u: goto label_7F184E14;
    case 0x7F184E18u: goto label_7F184E18;
    case 0x7F184E1Cu: goto label_7F184E1C;
    case 0x7F184E20u: goto label_7F184E20;
    case 0x7F184E24u: goto label_7F184E24;
    case 0x7F184E28u: goto label_7F184E28;
    case 0x7F184E2Cu: goto label_7F184E2C;
    case 0x7F184E30u: goto label_7F184E30;
    case 0x7F184E34u: goto label_7F184E34;
    case 0x7F184E38u: goto label_7F184E38;
    case 0x7F184E3Cu: goto label_7F184E3C;
    case 0x7F184E40u: goto label_7F184E40;
    case 0x7F184E44u: goto label_7F184E44;
    case 0x7F184E48u: goto label_7F184E48;
    case 0x7F184E4Cu: goto label_7F184E4C;
    case 0x7F184E50u: goto label_7F184E50;
    case 0x7F184E54u: goto label_7F184E54;
    case 0x7F184E58u: goto label_7F184E58;
    case 0x7F184E5Cu: goto label_7F184E5C;
    case 0x7F184E60u: goto label_7F184E60;
    case 0x7F184E64u: goto label_7F184E64;
    case 0x7F184E68u: goto label_7F184E68;
    case 0x7F184E6Cu: goto label_7F184E6C;
    case 0x7F184E70u: goto label_7F184E70;
    case 0x7F184E74u: goto label_7F184E74;
    case 0x7F184E78u: goto label_7F184E78;
    case 0x7F184E7Cu: goto label_7F184E7C;
    case 0x7F184E80u: goto label_7F184E80;
    case 0x7F184E84u: goto label_7F184E84;
    case 0x7F184E88u: goto label_7F184E88;
    case 0x7F184E8Cu: goto label_7F184E8C;
    case 0x7F184E90u: goto label_7F184E90;
    case 0x7F184E94u: goto label_7F184E94;
    case 0x7F184E98u: goto label_7F184E98;
    case 0x7F184E9Cu: goto label_7F184E9C;
    case 0x7F184EA0u: goto label_7F184EA0;
    case 0x7F184EA4u: goto label_7F184EA4;
    case 0x7F184EA8u: goto label_7F184EA8;
    case 0x7F184EACu: goto label_7F184EAC;
    case 0x7F184EB0u: goto label_7F184EB0;
    case 0x7F184EB4u: goto label_7F184EB4;
    case 0x7F184EB8u: goto label_7F184EB8;
    case 0x7F184EBCu: goto label_7F184EBC;
    case 0x7F184EC0u: goto label_7F184EC0;
    case 0x7F184EC4u: goto label_7F184EC4;
    case 0x7F184EC8u: goto label_7F184EC8;
    case 0x7F184ECCu: goto label_7F184ECC;
    case 0x7F184ED0u: goto label_7F184ED0;
    case 0x7F184ED4u: goto label_7F184ED4;
    case 0x7F184ED8u: goto label_7F184ED8;
    case 0x7F184EDCu: goto label_7F184EDC;
    case 0x7F184EE0u: goto label_7F184EE0;
    case 0x7F184EE4u: goto label_7F184EE4;
    case 0x7F184EE8u: goto label_7F184EE8;
    case 0x7F184EECu: goto label_7F184EEC;
    case 0x7F184EF0u: goto label_7F184EF0;
    case 0x7F184EF4u: goto label_7F184EF4;
    case 0x7F184EF8u: goto label_7F184EF8;
    case 0x7F184EFCu: goto label_7F184EFC;
    case 0x7F184F00u: goto label_7F184F00;
    case 0x7F184F04u: goto label_7F184F04;
    case 0x7F184F08u: goto label_7F184F08;
    case 0x7F184F0Cu: goto label_7F184F0C;
    case 0x7F184F10u: goto label_7F184F10;
    case 0x7F184F14u: goto label_7F184F14;
    case 0x7F184F18u: goto label_7F184F18;
    case 0x7F184F1Cu: goto label_7F184F1C;
    case 0x7F184F20u: goto label_7F184F20;
    case 0x7F184F24u: goto label_7F184F24;
    case 0x7F184F28u: goto label_7F184F28;
    case 0x7F184F2Cu: goto label_7F184F2C;
    case 0x7F184F30u: goto label_7F184F30;
    case 0x7F184F34u: goto label_7F184F34;
    case 0x7F184F38u: goto label_7F184F38;
    case 0x7F184F3Cu: goto label_7F184F3C;
    case 0x7F184F40u: goto label_7F184F40;
    case 0x7F184F44u: goto label_7F184F44;
    case 0x7F184F48u: goto label_7F184F48;
    case 0x7F184F4Cu: goto label_7F184F4C;
    case 0x7F184F50u: goto label_7F184F50;
    case 0x7F184F54u: goto label_7F184F54;
    case 0x7F184F58u: goto label_7F184F58;
    case 0x7F184F5Cu: goto label_7F184F5C;
    case 0x7F184F60u: goto label_7F184F60;
    case 0x7F184F64u: goto label_7F184F64;
    case 0x7F184F68u: goto label_7F184F68;
    case 0x7F184F6Cu: goto label_7F184F6C;
    case 0x7F184F70u: goto label_7F184F70;
    case 0x7F184F74u: goto label_7F184F74;
    case 0x7F184F78u: goto label_7F184F78;
    case 0x7F184F7Cu: goto label_7F184F7C;
    case 0x7F184F80u: goto label_7F184F80;
    case 0x7F184F84u: goto label_7F184F84;
    case 0x7F184F88u: goto label_7F184F88;
    case 0x7F184F8Cu: goto label_7F184F8C;
    case 0x7F184F90u: goto label_7F184F90;
    case 0x7F184F94u: goto label_7F184F94;
    case 0x7F184F98u: goto label_7F184F98;
    case 0x7F184F9Cu: goto label_7F184F9C;
    case 0x7F184FA0u: goto label_7F184FA0;
    case 0x7F184FA4u: goto label_7F184FA4;
    case 0x7F184FA8u: goto label_7F184FA8;
    case 0x7F184FACu: goto label_7F184FAC;
    case 0x7F184FB0u: goto label_7F184FB0;
    case 0x7F184FB4u: goto label_7F184FB4;
    case 0x7F184FB8u: goto label_7F184FB8;
    case 0x7F184FBCu: goto label_7F184FBC;
    case 0x7F184FC0u: goto label_7F184FC0;
    case 0x7F184FC4u: goto label_7F184FC4;
    case 0x7F184FC8u: goto label_7F184FC8;
    case 0x7F184FCCu: goto label_7F184FCC;
    case 0x7F184FD0u: goto label_7F184FD0;
    case 0x7F184FD4u: goto label_7F184FD4;
    case 0x7F184FD8u: goto label_7F184FD8;
    case 0x7F184FDCu: goto label_7F184FDC;
    case 0x7F184FE0u: goto label_7F184FE0;
    case 0x7F184FE4u: goto label_7F184FE4;
    case 0x7F184FE8u: goto label_7F184FE8;
    case 0x7F184FECu: goto label_7F184FEC;
    case 0x7F184FF0u: goto label_7F184FF0;
    case 0x7F184FF4u: goto label_7F184FF4;
    case 0x7F184FF8u: goto label_7F184FF8;
    case 0x7F184FFCu: goto label_7F184FFC;
    case 0x7F185000u: goto label_7F185000;
    case 0x7F185004u: goto label_7F185004;
    case 0x7F185008u: goto label_7F185008;
    case 0x7F18500Cu: goto label_7F18500C;
    case 0x7F185010u: goto label_7F185010;
    case 0x7F185014u: goto label_7F185014;
    case 0x7F185018u: goto label_7F185018;
    case 0x7F18501Cu: goto label_7F18501C;
    case 0x7F185020u: goto label_7F185020;
    case 0x7F185024u: goto label_7F185024;
    case 0x7F185028u: goto label_7F185028;
    case 0x7F18502Cu: goto label_7F18502C;
    case 0x7F185030u: goto label_7F185030;
    case 0x7F185034u: goto label_7F185034;
    case 0x7F185038u: goto label_7F185038;
    case 0x7F18503Cu: goto label_7F18503C;
    case 0x7F185040u: goto label_7F185040;
    case 0x7F185044u: goto label_7F185044;
    case 0x7F185048u: goto label_7F185048;
    case 0x7F18504Cu: goto label_7F18504C;
    case 0x7F185050u: goto label_7F185050;
    case 0x7F185054u: goto label_7F185054;
    case 0x7F185058u: goto label_7F185058;
    case 0x7F18505Cu: goto label_7F18505C;
    case 0x7F185060u: goto label_7F185060;
    case 0x7F185064u: goto label_7F185064;
    case 0x7F185068u: goto label_7F185068;
    case 0x7F18506Cu: goto label_7F18506C;
    case 0x7F185070u: goto label_7F185070;
    case 0x7F185074u: goto label_7F185074;
    case 0x7F185078u: goto label_7F185078;
    case 0x7F18507Cu: goto label_7F18507C;
    case 0x7F185080u: goto label_7F185080;
    case 0x7F185084u: goto label_7F185084;
    case 0x7F185088u: goto label_7F185088;
    case 0x7F18508Cu: goto label_7F18508C;
    case 0x7F185090u: goto label_7F185090;
    case 0x7F185094u: goto label_7F185094;
    case 0x7F185098u: goto label_7F185098;
    case 0x7F18509Cu: goto label_7F18509C;
    case 0x7F1850A0u: goto label_7F1850A0;
    case 0x7F1850A4u: goto label_7F1850A4;
    case 0x7F1850A8u: goto label_7F1850A8;
    case 0x7F1850ACu: goto label_7F1850AC;
    case 0x7F1850B0u: goto label_7F1850B0;
    case 0x7F1850B4u: goto label_7F1850B4;
    case 0x7F1850B8u: goto label_7F1850B8;
    case 0x7F1850BCu: goto label_7F1850BC;
    case 0x7F1850C0u: goto label_7F1850C0;
    case 0x7F1850C4u: goto label_7F1850C4;
    case 0x7F1850C8u: goto label_7F1850C8;
    case 0x7F1850CCu: goto label_7F1850CC;
    case 0x7F1850D0u: goto label_7F1850D0;
    case 0x7F1850D4u: goto label_7F1850D4;
    case 0x7F1850D8u: goto label_7F1850D8;
    case 0x7F1850DCu: goto label_7F1850DC;
    case 0x7F1850E0u: goto label_7F1850E0;
    case 0x7F1850E4u: goto label_7F1850E4;
    case 0x7F1850E8u: goto label_7F1850E8;
    case 0x7F1850ECu: goto label_7F1850EC;
    case 0x7F1850F0u: goto label_7F1850F0;
    case 0x7F1850F4u: goto label_7F1850F4;
    case 0x7F1850F8u: goto label_7F1850F8;
    case 0x7F1850FCu: goto label_7F1850FC;
    case 0x7F185100u: goto label_7F185100;
    case 0x7F185104u: goto label_7F185104;
    case 0x7F185108u: goto label_7F185108;
    case 0x7F18510Cu: goto label_7F18510C;
    case 0x7F185110u: goto label_7F185110;
    case 0x7F185114u: goto label_7F185114;
    case 0x7F185118u: goto label_7F185118;
    case 0x7F18511Cu: goto label_7F18511C;
    case 0x7F185120u: goto label_7F185120;
    case 0x7F185124u: goto label_7F185124;
    case 0x7F185128u: goto label_7F185128;
    case 0x7F18512Cu: goto label_7F18512C;
    case 0x7F185130u: goto label_7F185130;
    case 0x7F185134u: goto label_7F185134;
    case 0x7F185138u: goto label_7F185138;
    case 0x7F18513Cu: goto label_7F18513C;
    case 0x7F185140u: goto label_7F185140;
    case 0x7F185144u: goto label_7F185144;
    case 0x7F185148u: goto label_7F185148;
    case 0x7F18514Cu: goto label_7F18514C;
    case 0x7F185150u: goto label_7F185150;
    case 0x7F185154u: goto label_7F185154;
    case 0x7F185158u: goto label_7F185158;
    case 0x7F18515Cu: goto label_7F18515C;
    case 0x7F185160u: goto label_7F185160;
    case 0x7F185164u: goto label_7F185164;
    case 0x7F185168u: goto label_7F185168;
    case 0x7F18516Cu: goto label_7F18516C;
    case 0x7F185170u: goto label_7F185170;
    case 0x7F185174u: goto label_7F185174;
    case 0x7F185178u: goto label_7F185178;
    case 0x7F18517Cu: goto label_7F18517C;
    case 0x7F185180u: goto label_7F185180;
    case 0x7F185184u: goto label_7F185184;
    case 0x7F185188u: goto label_7F185188;
    case 0x7F18518Cu: goto label_7F18518C;
    case 0x7F185190u: goto label_7F185190;
    case 0x7F185194u: goto label_7F185194;
    case 0x7F185198u: goto label_7F185198;
    case 0x7F18519Cu: goto label_7F18519C;
    case 0x7F1851A0u: goto label_7F1851A0;
    case 0x7F1851A4u: goto label_7F1851A4;
    case 0x7F1851A8u: goto label_7F1851A8;
    case 0x7F1851ACu: goto label_7F1851AC;
    case 0x7F1851B0u: goto label_7F1851B0;
    case 0x7F1851B4u: goto label_7F1851B4;
    case 0x7F1851B8u: goto label_7F1851B8;
    case 0x7F1851BCu: goto label_7F1851BC;
    case 0x7F1851C0u: goto label_7F1851C0;
    case 0x7F1851C4u: goto label_7F1851C4;
    case 0x7F1851C8u: goto label_7F1851C8;
    case 0x7F1851CCu: goto label_7F1851CC;
    case 0x7F1851D0u: goto label_7F1851D0;
    case 0x7F1851D4u: goto label_7F1851D4;
    case 0x7F1851D8u: goto label_7F1851D8;
    case 0x7F1851DCu: goto label_7F1851DC;
    case 0x7F1851E0u: goto label_7F1851E0;
    case 0x7F1851E4u: goto label_7F1851E4;
    case 0x7F1851E8u: goto label_7F1851E8;
    case 0x7F1851ECu: goto label_7F1851EC;
    case 0x7F1851F0u: goto label_7F1851F0;
    case 0x7F1851F4u: goto label_7F1851F4;
    case 0x7F1851F8u: goto label_7F1851F8;
    case 0x7F1851FCu: goto label_7F1851FC;
    case 0x7F185200u: goto label_7F185200;
    case 0x7F185204u: goto label_7F185204;
    case 0x7F185208u: goto label_7F185208;
    case 0x7F18520Cu: goto label_7F18520C;
    case 0x7F185210u: goto label_7F185210;
    case 0x7F185214u: goto label_7F185214;
    case 0x7F185218u: goto label_7F185218;
    case 0x7F18521Cu: goto label_7F18521C;
    case 0x7F185220u: goto label_7F185220;
    case 0x7F185224u: goto label_7F185224;
    case 0x7F185228u: goto label_7F185228;
    case 0x7F18522Cu: goto label_7F18522C;
    case 0x7F185230u: goto label_7F185230;
    case 0x7F185234u: goto label_7F185234;
    case 0x7F185238u: goto label_7F185238;
    case 0x7F18523Cu: goto label_7F18523C;
    case 0x7F185240u: goto label_7F185240;
    case 0x7F185244u: goto label_7F185244;
    case 0x7F185248u: goto label_7F185248;
    case 0x7F18524Cu: goto label_7F18524C;
    case 0x7F185250u: goto label_7F185250;
    case 0x7F185254u: goto label_7F185254;
    case 0x7F185258u: goto label_7F185258;
    case 0x7F18525Cu: goto label_7F18525C;
    case 0x7F185260u: goto label_7F185260;
    case 0x7F185264u: goto label_7F185264;
    case 0x7F185268u: goto label_7F185268;
    case 0x7F18526Cu: goto label_7F18526C;
    case 0x7F185270u: goto label_7F185270;
    case 0x7F185274u: goto label_7F185274;
    case 0x7F185278u: goto label_7F185278;
    case 0x7F18527Cu: goto label_7F18527C;
    case 0x7F185280u: goto label_7F185280;
    case 0x7F185284u: goto label_7F185284;
    case 0x7F185288u: goto label_7F185288;
    case 0x7F18528Cu: goto label_7F18528C;
    case 0x7F185290u: goto label_7F185290;
    case 0x7F185294u: goto label_7F185294;
    case 0x7F185298u: goto label_7F185298;
    case 0x7F18529Cu: goto label_7F18529C;
    case 0x7F1852A0u: goto label_7F1852A0;
    case 0x7F1852A4u: goto label_7F1852A4;
    case 0x7F1852A8u: goto label_7F1852A8;
    case 0x7F1852ACu: goto label_7F1852AC;
    case 0x7F1852B0u: goto label_7F1852B0;
    case 0x7F1852B4u: goto label_7F1852B4;
    case 0x7F1852B8u: goto label_7F1852B8;
    case 0x7F1852BCu: goto label_7F1852BC;
    case 0x7F1852C0u: goto label_7F1852C0;
    case 0x7F1852C4u: goto label_7F1852C4;
    case 0x7F1852C8u: goto label_7F1852C8;
    case 0x7F1852CCu: goto label_7F1852CC;
    case 0x7F1852D0u: goto label_7F1852D0;
    case 0x7F1852D4u: goto label_7F1852D4;
    case 0x7F1852D8u: goto label_7F1852D8;
    case 0x7F1852DCu: goto label_7F1852DC;
    case 0x7F1852E0u: goto label_7F1852E0;
    case 0x7F1852E4u: goto label_7F1852E4;
    case 0x7F1852E8u: goto label_7F1852E8;
    case 0x7F1852ECu: goto label_7F1852EC;
    case 0x7F1852F0u: goto label_7F1852F0;
    case 0x7F1852F4u: goto label_7F1852F4;
    case 0x7F1852F8u: goto label_7F1852F8;
    case 0x7F1852FCu: goto label_7F1852FC;
    case 0x7F185300u: goto label_7F185300;
    case 0x7F185304u: goto label_7F185304;
    case 0x7F185308u: goto label_7F185308;
    case 0x7F18530Cu: goto label_7F18530C;
    case 0x7F185310u: goto label_7F185310;
    case 0x7F185314u: goto label_7F185314;
    case 0x7F185318u: goto label_7F185318;
    case 0x7F18531Cu: goto label_7F18531C;
    case 0x7F185320u: goto label_7F185320;
    case 0x7F185324u: goto label_7F185324;
    case 0x7F185328u: goto label_7F185328;
    case 0x7F18532Cu: goto label_7F18532C;
    case 0x7F185330u: goto label_7F185330;
    case 0x7F185334u: goto label_7F185334;
    case 0x7F185338u: goto label_7F185338;
    case 0x7F18533Cu: goto label_7F18533C;
    case 0x7F185340u: goto label_7F185340;
    case 0x7F185344u: goto label_7F185344;
    case 0x7F185348u: goto label_7F185348;
    case 0x7F18534Cu: goto label_7F18534C;
    case 0x7F185350u: goto label_7F185350;
    case 0x7F185354u: goto label_7F185354;
    case 0x7F185358u: goto label_7F185358;
    case 0x7F18535Cu: goto label_7F18535C;
    case 0x7F185360u: goto label_7F185360;
    case 0x7F185364u: goto label_7F185364;
    case 0x7F185368u: goto label_7F185368;
    case 0x7F18536Cu: goto label_7F18536C;
    case 0x7F185370u: goto label_7F185370;
    case 0x7F185374u: goto label_7F185374;
    case 0x7F185378u: goto label_7F185378;
    case 0x7F18537Cu: goto label_7F18537C;
    case 0x7F185380u: goto label_7F185380;
    case 0x7F185384u: goto label_7F185384;
    case 0x7F185388u: goto label_7F185388;
    case 0x7F18538Cu: goto label_7F18538C;
    case 0x7F185390u: goto label_7F185390;
    case 0x7F185394u: goto label_7F185394;
    case 0x7F185398u: goto label_7F185398;
    case 0x7F18539Cu: goto label_7F18539C;
    case 0x7F1853A0u: goto label_7F1853A0;
    case 0x7F1853A4u: goto label_7F1853A4;
    case 0x7F1853A8u: goto label_7F1853A8;
    case 0x7F1853ACu: goto label_7F1853AC;
    case 0x7F1853B0u: goto label_7F1853B0;
    case 0x7F1853B4u: goto label_7F1853B4;
    case 0x7F1853B8u: goto label_7F1853B8;
    case 0x7F1853BCu: goto label_7F1853BC;
    case 0x7F1853C0u: goto label_7F1853C0;
    case 0x7F1853C4u: goto label_7F1853C4;
    case 0x7F1853C8u: goto label_7F1853C8;
    case 0x7F1853CCu: goto label_7F1853CC;
    case 0x7F1853D0u: goto label_7F1853D0;
    case 0x7F1853D4u: goto label_7F1853D4;
    case 0x7F1853D8u: goto label_7F1853D8;
    case 0x7F1853DCu: goto label_7F1853DC;
    case 0x7F1853E0u: goto label_7F1853E0;
    case 0x7F1853E4u: goto label_7F1853E4;
    case 0x7F1853E8u: goto label_7F1853E8;
    case 0x7F1853ECu: goto label_7F1853EC;
    case 0x7F1853F0u: goto label_7F1853F0;
    case 0x7F1853F4u: goto label_7F1853F4;
    case 0x7F1853F8u: goto label_7F1853F8;
    case 0x7F1853FCu: goto label_7F1853FC;
    case 0x7F185400u: goto label_7F185400;
    case 0x7F185404u: goto label_7F185404;
    case 0x7F185408u: goto label_7F185408;
    case 0x7F18540Cu: goto label_7F18540C;
    case 0x7F185410u: goto label_7F185410;
    case 0x7F185414u: goto label_7F185414;
    case 0x7F185418u: goto label_7F185418;
    case 0x7F18541Cu: goto label_7F18541C;
    case 0x7F185420u: goto label_7F185420;
    case 0x7F185424u: goto label_7F185424;
    case 0x7F185428u: goto label_7F185428;
    case 0x7F18542Cu: goto label_7F18542C;
    case 0x7F185430u: goto label_7F185430;
    case 0x7F185434u: goto label_7F185434;
    case 0x7F185438u: goto label_7F185438;
    case 0x7F18543Cu: goto label_7F18543C;
    case 0x7F185440u: goto label_7F185440;
    case 0x7F185444u: goto label_7F185444;
    case 0x7F185448u: goto label_7F185448;
    case 0x7F18544Cu: goto label_7F18544C;
    case 0x7F185450u: goto label_7F185450;
    case 0x7F185454u: goto label_7F185454;
    case 0x7F185458u: goto label_7F185458;
    case 0x7F18545Cu: goto label_7F18545C;
    case 0x7F185460u: goto label_7F185460;
    case 0x7F185464u: goto label_7F185464;
    case 0x7F185468u: goto label_7F185468;
    case 0x7F18546Cu: goto label_7F18546C;
    case 0x7F185470u: goto label_7F185470;
    case 0x7F185474u: goto label_7F185474;
    case 0x7F185478u: goto label_7F185478;
    case 0x7F18547Cu: goto label_7F18547C;
    case 0x7F185480u: goto label_7F185480;
    case 0x7F185484u: goto label_7F185484;
    case 0x7F185488u: goto label_7F185488;
    case 0x7F18548Cu: goto label_7F18548C;
    case 0x7F185490u: goto label_7F185490;
    case 0x7F185494u: goto label_7F185494;
    case 0x7F185498u: goto label_7F185498;
    case 0x7F18549Cu: goto label_7F18549C;
    case 0x7F1854A0u: goto label_7F1854A0;
    case 0x7F1854A4u: goto label_7F1854A4;
    case 0x7F1854A8u: goto label_7F1854A8;
    case 0x7F1854ACu: goto label_7F1854AC;
    case 0x7F1854B0u: goto label_7F1854B0;
    case 0x7F1854B4u: goto label_7F1854B4;
    case 0x7F1854B8u: goto label_7F1854B8;
    case 0x7F1854BCu: goto label_7F1854BC;
    case 0x7F1854C0u: goto label_7F1854C0;
    case 0x7F1854C4u: goto label_7F1854C4;
    case 0x7F1854C8u: goto label_7F1854C8;
    case 0x7F1854CCu: goto label_7F1854CC;
    case 0x7F1854D0u: goto label_7F1854D0;
    case 0x7F1854D4u: goto label_7F1854D4;
    case 0x7F1854D8u: goto label_7F1854D8;
    case 0x7F1854DCu: goto label_7F1854DC;
    case 0x7F1854E0u: goto label_7F1854E0;
    case 0x7F1854E4u: goto label_7F1854E4;
    case 0x7F1854E8u: goto label_7F1854E8;
    case 0x7F1854ECu: goto label_7F1854EC;
    case 0x7F1854F0u: goto label_7F1854F0;
    case 0x7F1854F4u: goto label_7F1854F4;
    case 0x7F1854F8u: goto label_7F1854F8;
    case 0x7F1854FCu: goto label_7F1854FC;
    case 0x7F185500u: goto label_7F185500;
    case 0x7F185504u: goto label_7F185504;
    case 0x7F185508u: goto label_7F185508;
    case 0x7F18550Cu: goto label_7F18550C;
    case 0x7F185510u: goto label_7F185510;
    case 0x7F185514u: goto label_7F185514;
    case 0x7F185518u: goto label_7F185518;
    case 0x7F18551Cu: goto label_7F18551C;
    case 0x7F185520u: goto label_7F185520;
    case 0x7F185524u: goto label_7F185524;
    case 0x7F185528u: goto label_7F185528;
    case 0x7F18552Cu: goto label_7F18552C;
    case 0x7F185530u: goto label_7F185530;
    case 0x7F185534u: goto label_7F185534;
    case 0x7F185538u: goto label_7F185538;
    case 0x7F18553Cu: goto label_7F18553C;
    case 0x7F185540u: goto label_7F185540;
    case 0x7F185544u: goto label_7F185544;
    case 0x7F185548u: goto label_7F185548;
    case 0x7F18554Cu: goto label_7F18554C;
    case 0x7F185550u: goto label_7F185550;
    case 0x7F185554u: goto label_7F185554;
    case 0x7F185558u: goto label_7F185558;
    case 0x7F18555Cu: goto label_7F18555C;
    case 0x7F185560u: goto label_7F185560;
    case 0x7F185564u: goto label_7F185564;
    case 0x7F185568u: goto label_7F185568;
    case 0x7F18556Cu: goto label_7F18556C;
    case 0x7F185570u: goto label_7F185570;
    case 0x7F185574u: goto label_7F185574;
    case 0x7F185578u: goto label_7F185578;
    case 0x7F18557Cu: goto label_7F18557C;
    case 0x7F185580u: goto label_7F185580;
    case 0x7F185584u: goto label_7F185584;
    case 0x7F185588u: goto label_7F185588;
    case 0x7F18558Cu: goto label_7F18558C;
    case 0x7F185590u: goto label_7F185590;
    case 0x7F185594u: goto label_7F185594;
    case 0x7F185598u: goto label_7F185598;
    case 0x7F18559Cu: goto label_7F18559C;
    case 0x7F1855A0u: goto label_7F1855A0;
    case 0x7F1855A4u: goto label_7F1855A4;
    case 0x7F1855A8u: goto label_7F1855A8;
    case 0x7F1855ACu: goto label_7F1855AC;
    case 0x7F1855B0u: goto label_7F1855B0;
    case 0x7F1855B4u: goto label_7F1855B4;
    case 0x7F1855B8u: goto label_7F1855B8;
    case 0x7F1855BCu: goto label_7F1855BC;
    case 0x7F1855C0u: goto label_7F1855C0;
    case 0x7F1855C4u: goto label_7F1855C4;
    case 0x7F1855C8u: goto label_7F1855C8;
    case 0x7F1855CCu: goto label_7F1855CC;
    case 0x7F1855D0u: goto label_7F1855D0;
    case 0x7F1855D4u: goto label_7F1855D4;
    case 0x7F1855D8u: goto label_7F1855D8;
    case 0x7F1855DCu: goto label_7F1855DC;
    case 0x7F1855E0u: goto label_7F1855E0;
    case 0x7F1855E4u: goto label_7F1855E4;
    case 0x7F1855E8u: goto label_7F1855E8;
    case 0x7F1855ECu: goto label_7F1855EC;
    case 0x7F1855F0u: goto label_7F1855F0;
    case 0x7F1855F4u: goto label_7F1855F4;
    case 0x7F1855F8u: goto label_7F1855F8;
    case 0x7F1855FCu: goto label_7F1855FC;
    case 0x7F185600u: goto label_7F185600;
    case 0x7F185604u: goto label_7F185604;
    case 0x7F185608u: goto label_7F185608;
    case 0x7F18560Cu: goto label_7F18560C;
    case 0x7F185610u: goto label_7F185610;
    case 0x7F185614u: goto label_7F185614;
    case 0x7F185618u: goto label_7F185618;
    case 0x7F18561Cu: goto label_7F18561C;
    case 0x7F185620u: goto label_7F185620;
    case 0x7F185624u: goto label_7F185624;
    case 0x7F185628u: goto label_7F185628;
    case 0x7F18562Cu: goto label_7F18562C;
    case 0x7F185630u: goto label_7F185630;
    case 0x7F185634u: goto label_7F185634;
    case 0x7F185638u: goto label_7F185638;
    case 0x7F18563Cu: goto label_7F18563C;
    case 0x7F185640u: goto label_7F185640;
    case 0x7F185644u: goto label_7F185644;
    case 0x7F185648u: goto label_7F185648;
    case 0x7F18564Cu: goto label_7F18564C;
    case 0x7F185650u: goto label_7F185650;
    case 0x7F185654u: goto label_7F185654;
    case 0x7F185658u: goto label_7F185658;
    case 0x7F18565Cu: goto label_7F18565C;
    case 0x7F185660u: goto label_7F185660;
    case 0x7F185664u: goto label_7F185664;
    case 0x7F185668u: goto label_7F185668;
    case 0x7F18566Cu: goto label_7F18566C;
    case 0x7F185670u: goto label_7F185670;
    case 0x7F185674u: goto label_7F185674;
    case 0x7F185678u: goto label_7F185678;
    case 0x7F18567Cu: goto label_7F18567C;
    case 0x7F185680u: goto label_7F185680;
    case 0x7F185684u: goto label_7F185684;
    case 0x7F185688u: goto label_7F185688;
    case 0x7F18568Cu: goto label_7F18568C;
    case 0x7F185690u: goto label_7F185690;
    case 0x7F185694u: goto label_7F185694;
    case 0x7F185698u: goto label_7F185698;
    case 0x7F18569Cu: goto label_7F18569C;
    case 0x7F1856A0u: goto label_7F1856A0;
    case 0x7F1856A4u: goto label_7F1856A4;
    case 0x7F1856A8u: goto label_7F1856A8;
    case 0x7F1856ACu: goto label_7F1856AC;
    case 0x7F1856B0u: goto label_7F1856B0;
    case 0x7F1856B4u: goto label_7F1856B4;
    case 0x7F1856B8u: goto label_7F1856B8;
    case 0x7F1856BCu: goto label_7F1856BC;
    case 0x7F1856C0u: goto label_7F1856C0;
    case 0x7F1856C4u: goto label_7F1856C4;
    case 0x7F1856C8u: goto label_7F1856C8;
    case 0x7F1856CCu: goto label_7F1856CC;
    case 0x7F1856D0u: goto label_7F1856D0;
    case 0x7F1856D4u: goto label_7F1856D4;
    case 0x7F1856D8u: goto label_7F1856D8;
    case 0x7F1856DCu: goto label_7F1856DC;
    case 0x7F1856E0u: goto label_7F1856E0;
    case 0x7F1856E4u: goto label_7F1856E4;
    case 0x7F1856E8u: goto label_7F1856E8;
    case 0x7F1856ECu: goto label_7F1856EC;
    case 0x7F1856F0u: goto label_7F1856F0;
    case 0x7F1856F4u: goto label_7F1856F4;
    case 0x7F1856F8u: goto label_7F1856F8;
    case 0x7F1856FCu: goto label_7F1856FC;
    case 0x7F185700u: goto label_7F185700;
    case 0x7F185704u: goto label_7F185704;
    case 0x7F185708u: goto label_7F185708;
    case 0x7F18570Cu: goto label_7F18570C;
    case 0x7F185710u: goto label_7F185710;
    case 0x7F185714u: goto label_7F185714;
    case 0x7F185718u: goto label_7F185718;
    case 0x7F18571Cu: goto label_7F18571C;
    case 0x7F185720u: goto label_7F185720;
    case 0x7F185724u: goto label_7F185724;
    case 0x7F185728u: goto label_7F185728;
    case 0x7F18572Cu: goto label_7F18572C;
    case 0x7F185730u: goto label_7F185730;
    case 0x7F185734u: goto label_7F185734;
    case 0x7F185738u: goto label_7F185738;
    case 0x7F18573Cu: goto label_7F18573C;
    case 0x7F185740u: goto label_7F185740;
    case 0x7F185744u: goto label_7F185744;
    case 0x7F185748u: goto label_7F185748;
    case 0x7F18574Cu: goto label_7F18574C;
    case 0x7F185750u: goto label_7F185750;
    case 0x7F185754u: goto label_7F185754;
    case 0x7F185758u: goto label_7F185758;
    case 0x7F18575Cu: goto label_7F18575C;
    case 0x7F185760u: goto label_7F185760;
    case 0x7F185764u: goto label_7F185764;
    case 0x7F185768u: goto label_7F185768;
    case 0x7F18576Cu: goto label_7F18576C;
    case 0x7F185770u: goto label_7F185770;
    case 0x7F185774u: goto label_7F185774;
    case 0x7F185778u: goto label_7F185778;
    case 0x7F18577Cu: goto label_7F18577C;
    case 0x7F185780u: goto label_7F185780;
    case 0x7F185784u: goto label_7F185784;
    case 0x7F185788u: goto label_7F185788;
    case 0x7F18578Cu: goto label_7F18578C;
    case 0x7F185790u: goto label_7F185790;
    case 0x7F185794u: goto label_7F185794;
    case 0x7F185798u: goto label_7F185798;
    case 0x7F18579Cu: goto label_7F18579C;
    case 0x7F1857A0u: goto label_7F1857A0;
    case 0x7F1857A4u: goto label_7F1857A4;
    case 0x7F1857A8u: goto label_7F1857A8;
    case 0x7F1857ACu: goto label_7F1857AC;
    case 0x7F1857B0u: goto label_7F1857B0;
    case 0x7F1857B4u: goto label_7F1857B4;
    case 0x7F1857B8u: goto label_7F1857B8;
    case 0x7F1857BCu: goto label_7F1857BC;
    case 0x7F1857C0u: goto label_7F1857C0;
    case 0x7F1857C4u: goto label_7F1857C4;
    case 0x7F1857C8u: goto label_7F1857C8;
    case 0x7F1857CCu: goto label_7F1857CC;
    case 0x7F1857D0u: goto label_7F1857D0;
    case 0x7F1857D4u: goto label_7F1857D4;
    case 0x7F1857D8u: goto label_7F1857D8;
    case 0x7F1857DCu: goto label_7F1857DC;
    case 0x7F1857E0u: goto label_7F1857E0;
    case 0x7F1857E4u: goto label_7F1857E4;
    case 0x7F1857E8u: goto label_7F1857E8;
    case 0x7F1857ECu: goto label_7F1857EC;
    case 0x7F1857F0u: goto label_7F1857F0;
    case 0x7F1857F4u: goto label_7F1857F4;
    case 0x7F1857F8u: goto label_7F1857F8;
    case 0x7F1857FCu: goto label_7F1857FC;
    case 0x7F185800u: goto label_7F185800;
    case 0x7F185804u: goto label_7F185804;
    case 0x7F185808u: goto label_7F185808;
    case 0x7F18580Cu: goto label_7F18580C;
    case 0x7F185810u: goto label_7F185810;
    case 0x7F185814u: goto label_7F185814;
    case 0x7F185818u: goto label_7F185818;
    case 0x7F18581Cu: goto label_7F18581C;
    case 0x7F185820u: goto label_7F185820;
    case 0x7F185824u: goto label_7F185824;
    case 0x7F185828u: goto label_7F185828;
    case 0x7F18582Cu: goto label_7F18582C;
    case 0x7F185830u: goto label_7F185830;
    case 0x7F185834u: goto label_7F185834;
    case 0x7F185838u: goto label_7F185838;
    case 0x7F18583Cu: goto label_7F18583C;
    case 0x7F185840u: goto label_7F185840;
    case 0x7F185844u: goto label_7F185844;
    case 0x7F185848u: goto label_7F185848;
    case 0x7F18584Cu: goto label_7F18584C;
    case 0x7F185850u: goto label_7F185850;
    case 0x7F185854u: goto label_7F185854;
    case 0x7F185858u: goto label_7F185858;
    case 0x7F18585Cu: goto label_7F18585C;
    case 0x7F185860u: goto label_7F185860;
    case 0x7F185864u: goto label_7F185864;
    case 0x7F185868u: goto label_7F185868;
    case 0x7F18586Cu: goto label_7F18586C;
    case 0x7F185870u: goto label_7F185870;
    case 0x7F185874u: goto label_7F185874;
    case 0x7F185878u: goto label_7F185878;
    case 0x7F18587Cu: goto label_7F18587C;
    case 0x7F185880u: goto label_7F185880;
    case 0x7F185884u: goto label_7F185884;
    case 0x7F185888u: goto label_7F185888;
    case 0x7F18588Cu: goto label_7F18588C;
    case 0x7F185890u: goto label_7F185890;
    case 0x7F185894u: goto label_7F185894;
    case 0x7F185898u: goto label_7F185898;
    case 0x7F18589Cu: goto label_7F18589C;
    case 0x7F1858A0u: goto label_7F1858A0;
    case 0x7F1858A4u: goto label_7F1858A4;
    case 0x7F1858A8u: goto label_7F1858A8;
    case 0x7F1858ACu: goto label_7F1858AC;
    case 0x7F1858B0u: goto label_7F1858B0;
    case 0x7F1858B4u: goto label_7F1858B4;
    case 0x7F1858B8u: goto label_7F1858B8;
    case 0x7F1858BCu: goto label_7F1858BC;
    case 0x7F1858C0u: goto label_7F1858C0;
    case 0x7F1858C4u: goto label_7F1858C4;
    case 0x7F1858C8u: goto label_7F1858C8;
    case 0x7F1858CCu: goto label_7F1858CC;
    case 0x7F1858D0u: goto label_7F1858D0;
    case 0x7F1858D4u: goto label_7F1858D4;
    case 0x7F1858D8u: goto label_7F1858D8;
    case 0x7F1858DCu: goto label_7F1858DC;
    case 0x7F1858E0u: goto label_7F1858E0;
    case 0x7F1858E4u: goto label_7F1858E4;
    case 0x7F1858E8u: goto label_7F1858E8;
    case 0x7F1858ECu: goto label_7F1858EC;
    case 0x7F1858F0u: goto label_7F1858F0;
    case 0x7F1858F4u: goto label_7F1858F4;
    case 0x7F1858F8u: goto label_7F1858F8;
    case 0x7F1858FCu: goto label_7F1858FC;
    case 0x7F185900u: goto label_7F185900;
    case 0x7F185904u: goto label_7F185904;
    case 0x7F185908u: goto label_7F185908;
    case 0x7F18590Cu: goto label_7F18590C;
    case 0x7F185910u: goto label_7F185910;
    case 0x7F185914u: goto label_7F185914;
    case 0x7F185918u: goto label_7F185918;
    case 0x7F18591Cu: goto label_7F18591C;
    case 0x7F185920u: goto label_7F185920;
    case 0x7F185924u: goto label_7F185924;
    case 0x7F185928u: goto label_7F185928;
    case 0x7F18592Cu: goto label_7F18592C;
    case 0x7F185930u: goto label_7F185930;
    case 0x7F185934u: goto label_7F185934;
    case 0x7F185938u: goto label_7F185938;
    case 0x7F18593Cu: goto label_7F18593C;
    case 0x7F185940u: goto label_7F185940;
    case 0x7F185944u: goto label_7F185944;
    case 0x7F185948u: goto label_7F185948;
    case 0x7F18594Cu: goto label_7F18594C;
    case 0x7F185950u: goto label_7F185950;
    case 0x7F185954u: goto label_7F185954;
    case 0x7F185958u: goto label_7F185958;
    case 0x7F18595Cu: goto label_7F18595C;
    case 0x7F185960u: goto label_7F185960;
    case 0x7F185964u: goto label_7F185964;
    case 0x7F185968u: goto label_7F185968;
    case 0x7F18596Cu: goto label_7F18596C;
    case 0x7F185970u: goto label_7F185970;
    case 0x7F185974u: goto label_7F185974;
    case 0x7F185978u: goto label_7F185978;
    case 0x7F18597Cu: goto label_7F18597C;
    case 0x7F185980u: goto label_7F185980;
    case 0x7F185984u: goto label_7F185984;
    case 0x7F185988u: goto label_7F185988;
    case 0x7F18598Cu: goto label_7F18598C;
    case 0x7F185990u: goto label_7F185990;
    case 0x7F185994u: goto label_7F185994;
    case 0x7F185998u: goto label_7F185998;
    case 0x7F18599Cu: goto label_7F18599C;
    case 0x7F1859A0u: goto label_7F1859A0;
    case 0x7F1859A4u: goto label_7F1859A4;
    case 0x7F1859A8u: goto label_7F1859A8;
    case 0x7F1859ACu: goto label_7F1859AC;
    case 0x7F1859B0u: goto label_7F1859B0;
    case 0x7F1859B4u: goto label_7F1859B4;
    case 0x7F1859B8u: goto label_7F1859B8;
    case 0x7F1859BCu: goto label_7F1859BC;
    case 0x7F1859C0u: goto label_7F1859C0;
    case 0x7F1859C4u: goto label_7F1859C4;
    case 0x7F1859C8u: goto label_7F1859C8;
    case 0x7F1859CCu: goto label_7F1859CC;
    case 0x7F1859D0u: goto label_7F1859D0;
    case 0x7F1859D4u: goto label_7F1859D4;
    case 0x7F1859D8u: goto label_7F1859D8;
    case 0x7F1859DCu: goto label_7F1859DC;
    case 0x7F1859E0u: goto label_7F1859E0;
    case 0x7F1859E4u: goto label_7F1859E4;
    case 0x7F1859E8u: goto label_7F1859E8;
    case 0x7F1859ECu: goto label_7F1859EC;
    case 0x7F1859F0u: goto label_7F1859F0;
    case 0x7F1859F4u: goto label_7F1859F4;
    case 0x7F1859F8u: goto label_7F1859F8;
    case 0x7F1859FCu: goto label_7F1859FC;
    case 0x7F185A00u: goto label_7F185A00;
    case 0x7F185A04u: goto label_7F185A04;
    case 0x7F185A08u: goto label_7F185A08;
    case 0x7F185A0Cu: goto label_7F185A0C;
    case 0x7F185A10u: goto label_7F185A10;
    case 0x7F185A14u: goto label_7F185A14;
    case 0x7F185A18u: goto label_7F185A18;
    case 0x7F185A1Cu: goto label_7F185A1C;
    case 0x7F185A20u: goto label_7F185A20;
    case 0x7F185A24u: goto label_7F185A24;
    case 0x7F185A28u: goto label_7F185A28;
    case 0x7F185A2Cu: goto label_7F185A2C;
    case 0x7F185A30u: goto label_7F185A30;
    case 0x7F185A34u: goto label_7F185A34;
    case 0x7F185A38u: goto label_7F185A38;
    case 0x7F185A3Cu: goto label_7F185A3C;
    case 0x7F185A40u: goto label_7F185A40;
    case 0x7F185A44u: goto label_7F185A44;
    case 0x7F185A48u: goto label_7F185A48;
    case 0x7F185A4Cu: goto label_7F185A4C;
    case 0x7F185A50u: goto label_7F185A50;
    case 0x7F185A54u: goto label_7F185A54;
    case 0x7F185A58u: goto label_7F185A58;
    case 0x7F185A5Cu: goto label_7F185A5C;
    case 0x7F185A60u: goto label_7F185A60;
    case 0x7F185A64u: goto label_7F185A64;
    case 0x7F185A68u: goto label_7F185A68;
    case 0x7F185A6Cu: goto label_7F185A6C;
    case 0x7F185A70u: goto label_7F185A70;
    case 0x7F185A74u: goto label_7F185A74;
    case 0x7F185A78u: goto label_7F185A78;
    case 0x7F185A7Cu: goto label_7F185A7C;
    case 0x7F185A80u: goto label_7F185A80;
    case 0x7F185A84u: goto label_7F185A84;
    case 0x7F185A88u: goto label_7F185A88;
    case 0x7F185A8Cu: goto label_7F185A8C;
    case 0x7F185A90u: goto label_7F185A90;
    case 0x7F185A94u: goto label_7F185A94;
    case 0x7F185A98u: goto label_7F185A98;
    case 0x7F185A9Cu: goto label_7F185A9C;
    case 0x7F185AA0u: goto label_7F185AA0;
    case 0x7F185AA4u: goto label_7F185AA4;
    case 0x7F185AA8u: goto label_7F185AA8;
    case 0x7F185AACu: goto label_7F185AAC;
    case 0x7F185AB0u: goto label_7F185AB0;
    case 0x7F185AB4u: goto label_7F185AB4;
    case 0x7F185AB8u: goto label_7F185AB8;
    case 0x7F185ABCu: goto label_7F185ABC;
    case 0x7F185AC0u: goto label_7F185AC0;
    case 0x7F185AC4u: goto label_7F185AC4;
    case 0x7F185AC8u: goto label_7F185AC8;
    case 0x7F185ACCu: goto label_7F185ACC;
    case 0x7F185AD0u: goto label_7F185AD0;
    case 0x7F185AD4u: goto label_7F185AD4;
    case 0x7F185AD8u: goto label_7F185AD8;
    case 0x7F185ADCu: goto label_7F185ADC;
    case 0x7F185AE0u: goto label_7F185AE0;
    case 0x7F185AE4u: goto label_7F185AE4;
    case 0x7F185AE8u: goto label_7F185AE8;
    case 0x7F185AECu: goto label_7F185AEC;
    case 0x7F185AF0u: goto label_7F185AF0;
    case 0x7F185AF4u: goto label_7F185AF4;
    case 0x7F185AF8u: goto label_7F185AF8;
    case 0x7F185AFCu: goto label_7F185AFC;
    case 0x7F185B00u: goto label_7F185B00;
    case 0x7F185B04u: goto label_7F185B04;
    case 0x7F185B08u: goto label_7F185B08;
    case 0x7F185B0Cu: goto label_7F185B0C;
    case 0x7F185B10u: goto label_7F185B10;
    case 0x7F185B14u: goto label_7F185B14;
    case 0x7F185B18u: goto label_7F185B18;
    case 0x7F185B1Cu: goto label_7F185B1C;
    case 0x7F185B20u: goto label_7F185B20;
    case 0x7F185B24u: goto label_7F185B24;
    case 0x7F185B28u: goto label_7F185B28;
    case 0x7F185B2Cu: goto label_7F185B2C;
    case 0x7F185B30u: goto label_7F185B30;
    case 0x7F185B34u: goto label_7F185B34;
    case 0x7F185B38u: goto label_7F185B38;
    case 0x7F185B3Cu: goto label_7F185B3C;
    case 0x7F185B40u: goto label_7F185B40;
    case 0x7F185B44u: goto label_7F185B44;
    case 0x7F185B48u: goto label_7F185B48;
    case 0x7F185B4Cu: goto label_7F185B4C;
    case 0x7F185B50u: goto label_7F185B50;
    case 0x7F185B54u: goto label_7F185B54;
    case 0x7F185B58u: goto label_7F185B58;
    case 0x7F185B5Cu: goto label_7F185B5C;
    case 0x7F185B60u: goto label_7F185B60;
    case 0x7F185B64u: goto label_7F185B64;
    case 0x7F185B68u: goto label_7F185B68;
    case 0x7F185B6Cu: goto label_7F185B6C;
    case 0x7F185B70u: goto label_7F185B70;
    case 0x7F185B74u: goto label_7F185B74;
    case 0x7F185B78u: goto label_7F185B78;
    case 0x7F185B7Cu: goto label_7F185B7C;
    case 0x7F185B80u: goto label_7F185B80;
    case 0x7F185B84u: goto label_7F185B84;
    case 0x7F185B88u: goto label_7F185B88;
    case 0x7F185B8Cu: goto label_7F185B8C;
    case 0x7F185B90u: goto label_7F185B90;
    case 0x7F185B94u: goto label_7F185B94;
    case 0x7F185B98u: goto label_7F185B98;
    case 0x7F185B9Cu: goto label_7F185B9C;
    case 0x7F185BA0u: goto label_7F185BA0;
    case 0x7F185BA4u: goto label_7F185BA4;
    case 0x7F185BA8u: goto label_7F185BA8;
    case 0x7F185BACu: goto label_7F185BAC;
    case 0x7F185BB0u: goto label_7F185BB0;
    case 0x7F185BB4u: goto label_7F185BB4;
    case 0x7F185BB8u: goto label_7F185BB8;
    case 0x7F185BBCu: goto label_7F185BBC;
    case 0x7F185BC0u: goto label_7F185BC0;
    case 0x7F185BC4u: goto label_7F185BC4;
    case 0x7F185BC8u: goto label_7F185BC8;
    case 0x7F185BCCu: goto label_7F185BCC;
    case 0x7F185BD0u: goto label_7F185BD0;
    case 0x7F185BD4u: goto label_7F185BD4;
    case 0x7F185BD8u: goto label_7F185BD8;
    case 0x7F185BDCu: goto label_7F185BDC;
    case 0x7F185BE0u: goto label_7F185BE0;
    case 0x7F185BE4u: goto label_7F185BE4;
    case 0x7F185BE8u: goto label_7F185BE8;
    case 0x7F185BECu: goto label_7F185BEC;
    case 0x7F185BF0u: goto label_7F185BF0;
    case 0x7F185BF4u: goto label_7F185BF4;
    case 0x7F185BF8u: goto label_7F185BF8;
    case 0x7F185BFCu: goto label_7F185BFC;
    case 0x7F185C00u: goto label_7F185C00;
    case 0x7F185C04u: goto label_7F185C04;
    case 0x7F185C08u: goto label_7F185C08;
    case 0x7F185C0Cu: goto label_7F185C0C;
    case 0x7F185C10u: goto label_7F185C10;
    case 0x7F185C14u: goto label_7F185C14;
    case 0x7F185C18u: goto label_7F185C18;
    case 0x7F185C1Cu: goto label_7F185C1C;
    case 0x7F185C20u: goto label_7F185C20;
    case 0x7F185C24u: goto label_7F185C24;
    case 0x7F185C28u: goto label_7F185C28;
    case 0x7F185C2Cu: goto label_7F185C2C;
    case 0x7F185C30u: goto label_7F185C30;
    case 0x7F185C34u: goto label_7F185C34;
    case 0x7F185C38u: goto label_7F185C38;
    case 0x7F185C3Cu: goto label_7F185C3C;
    case 0x7F185C40u: goto label_7F185C40;
    case 0x7F185C44u: goto label_7F185C44;
    case 0x7F185C48u: goto label_7F185C48;
    case 0x7F185C4Cu: goto label_7F185C4C;
    case 0x7F185C50u: goto label_7F185C50;
    case 0x7F185C54u: goto label_7F185C54;
    case 0x7F185C58u: goto label_7F185C58;
    case 0x7F185C5Cu: goto label_7F185C5C;
    case 0x7F185C60u: goto label_7F185C60;
    case 0x7F185C64u: goto label_7F185C64;
    case 0x7F185C68u: goto label_7F185C68;
    case 0x7F185C6Cu: goto label_7F185C6C;
    case 0x7F185C70u: goto label_7F185C70;
    case 0x7F185C74u: goto label_7F185C74;
    case 0x7F185C78u: goto label_7F185C78;
    case 0x7F185C7Cu: goto label_7F185C7C;
    case 0x7F185C80u: goto label_7F185C80;
    case 0x7F185C84u: goto label_7F185C84;
    case 0x7F185C88u: goto label_7F185C88;
    case 0x7F185C8Cu: goto label_7F185C8C;
    case 0x7F185C90u: goto label_7F185C90;
    case 0x7F185C94u: goto label_7F185C94;
    case 0x7F185C98u: goto label_7F185C98;
    case 0x7F185C9Cu: goto label_7F185C9C;
    case 0x7F185CA0u: goto label_7F185CA0;
    case 0x7F185CA4u: goto label_7F185CA4;
    case 0x7F185CA8u: goto label_7F185CA8;
    case 0x7F185CACu: goto label_7F185CAC;
    case 0x7F185CB0u: goto label_7F185CB0;
    case 0x7F185CB4u: goto label_7F185CB4;
    case 0x7F185CB8u: goto label_7F185CB8;
    case 0x7F185CBCu: goto label_7F185CBC;
    case 0x7F185CC0u: goto label_7F185CC0;
    case 0x7F185CC4u: goto label_7F185CC4;
    case 0x7F185CC8u: goto label_7F185CC8;
    case 0x7F185CCCu: goto label_7F185CCC;
    case 0x7F185CD0u: goto label_7F185CD0;
    case 0x7F185CD4u: goto label_7F185CD4;
    case 0x7F185CD8u: goto label_7F185CD8;
    case 0x7F185CDCu: goto label_7F185CDC;
    case 0x7F185CE0u: goto label_7F185CE0;
    case 0x7F185CE4u: goto label_7F185CE4;
    case 0x7F185CE8u: goto label_7F185CE8;
    case 0x7F185CECu: goto label_7F185CEC;
    case 0x7F185CF0u: goto label_7F185CF0;
    case 0x7F185CF4u: goto label_7F185CF4;
    case 0x7F185CF8u: goto label_7F185CF8;
    case 0x7F185CFCu: goto label_7F185CFC;
    case 0x7F185D00u: goto label_7F185D00;
    case 0x7F185D04u: goto label_7F185D04;
    case 0x7F185D08u: goto label_7F185D08;
    case 0x7F185D0Cu: goto label_7F185D0C;
    case 0x7F185D10u: goto label_7F185D10;
    case 0x7F185D14u: goto label_7F185D14;
    case 0x7F185D18u: goto label_7F185D18;
    case 0x7F185D1Cu: goto label_7F185D1C;
    case 0x7F185D20u: goto label_7F185D20;
    case 0x7F185D24u: goto label_7F185D24;
    case 0x7F185D28u: goto label_7F185D28;
    case 0x7F185D2Cu: goto label_7F185D2C;
    case 0x7F185D30u: goto label_7F185D30;
    case 0x7F185D34u: goto label_7F185D34;
    case 0x7F185D38u: goto label_7F185D38;
    case 0x7F185D3Cu: goto label_7F185D3C;
    case 0x7F185D40u: goto label_7F185D40;
    case 0x7F185D44u: goto label_7F185D44;
    case 0x7F185D48u: goto label_7F185D48;
    case 0x7F185D4Cu: goto label_7F185D4C;
    case 0x7F185D50u: goto label_7F185D50;
    case 0x7F185D54u: goto label_7F185D54;
    case 0x7F185D58u: goto label_7F185D58;
    case 0x7F185D5Cu: goto label_7F185D5C;
    case 0x7F185D60u: goto label_7F185D60;
    case 0x7F185D64u: goto label_7F185D64;
    case 0x7F185D68u: goto label_7F185D68;
    case 0x7F185D6Cu: goto label_7F185D6C;
    case 0x7F185D70u: goto label_7F185D70;
    case 0x7F185D74u: goto label_7F185D74;
    case 0x7F185D78u: goto label_7F185D78;
    case 0x7F185D7Cu: goto label_7F185D7C;
    case 0x7F185D80u: goto label_7F185D80;
    case 0x7F185D84u: goto label_7F185D84;
    case 0x7F185D88u: goto label_7F185D88;
    case 0x7F185D8Cu: goto label_7F185D8C;
    case 0x7F185D90u: goto label_7F185D90;
    case 0x7F185D94u: goto label_7F185D94;
    case 0x7F185D98u: goto label_7F185D98;
    case 0x7F185D9Cu: goto label_7F185D9C;
    case 0x7F185DA0u: goto label_7F185DA0;
    case 0x7F185DA4u: goto label_7F185DA4;
    case 0x7F185DA8u: goto label_7F185DA8;
    case 0x7F185DACu: goto label_7F185DAC;
    case 0x7F185DB0u: goto label_7F185DB0;
    case 0x7F185DB4u: goto label_7F185DB4;
    case 0x7F185DB8u: goto label_7F185DB8;
    case 0x7F185DBCu: goto label_7F185DBC;
    case 0x7F185DC0u: goto label_7F185DC0;
    case 0x7F185DC4u: goto label_7F185DC4;
    case 0x7F185DC8u: goto label_7F185DC8;
    case 0x7F185DCCu: goto label_7F185DCC;
    case 0x7F185DD0u: goto label_7F185DD0;
    case 0x7F185DD4u: goto label_7F185DD4;
    case 0x7F185DD8u: goto label_7F185DD8;
    case 0x7F185DDCu: goto label_7F185DDC;
    case 0x7F185DE0u: goto label_7F185DE0;
    case 0x7F185DE4u: goto label_7F185DE4;
    case 0x7F185DE8u: goto label_7F185DE8;
    case 0x7F185DECu: goto label_7F185DEC;
    case 0x7F185DF0u: goto label_7F185DF0;
    case 0x7F185DF4u: goto label_7F185DF4;
    case 0x7F185DF8u: goto label_7F185DF8;
    case 0x7F185DFCu: goto label_7F185DFC;
    case 0x7F185E00u: goto label_7F185E00;
    case 0x7F185E04u: goto label_7F185E04;
    case 0x7F185E08u: goto label_7F185E08;
    case 0x7F185E0Cu: goto label_7F185E0C;
    case 0x7F185E10u: goto label_7F185E10;
    case 0x7F185E14u: goto label_7F185E14;
    case 0x7F185E18u: goto label_7F185E18;
    case 0x7F185E1Cu: goto label_7F185E1C;
    case 0x7F185E20u: goto label_7F185E20;
    case 0x7F185E24u: goto label_7F185E24;
    case 0x7F185E28u: goto label_7F185E28;
    case 0x7F185E2Cu: goto label_7F185E2C;
    case 0x7F185E30u: goto label_7F185E30;
    case 0x7F185E34u: goto label_7F185E34;
    case 0x7F185E38u: goto label_7F185E38;
    case 0x7F185E3Cu: goto label_7F185E3C;
    case 0x7F185E40u: goto label_7F185E40;
    case 0x7F185E44u: goto label_7F185E44;
    case 0x7F185E48u: goto label_7F185E48;
    case 0x7F185E4Cu: goto label_7F185E4C;
    case 0x7F185E50u: goto label_7F185E50;
    case 0x7F185E54u: goto label_7F185E54;
    case 0x7F185E58u: goto label_7F185E58;
    case 0x7F185E5Cu: goto label_7F185E5C;
    case 0x7F185E60u: goto label_7F185E60;
    case 0x7F185E64u: goto label_7F185E64;
    case 0x7F185E68u: goto label_7F185E68;
    case 0x7F185E6Cu: goto label_7F185E6C;
    case 0x7F185E70u: goto label_7F185E70;
    case 0x7F185E74u: goto label_7F185E74;
    case 0x7F185E78u: goto label_7F185E78;
    case 0x7F185E7Cu: goto label_7F185E7C;
    case 0x7F185E80u: goto label_7F185E80;
    case 0x7F185E84u: goto label_7F185E84;
    case 0x7F185E88u: goto label_7F185E88;
    case 0x7F185E8Cu: goto label_7F185E8C;
    case 0x7F185E90u: goto label_7F185E90;
    case 0x7F185E94u: goto label_7F185E94;
    case 0x7F185E98u: goto label_7F185E98;
    case 0x7F185E9Cu: goto label_7F185E9C;
    case 0x7F185EA0u: goto label_7F185EA0;
    case 0x7F185EA4u: goto label_7F185EA4;
    case 0x7F185EA8u: goto label_7F185EA8;
    case 0x7F185EACu: goto label_7F185EAC;
    case 0x7F185EB0u: goto label_7F185EB0;
    case 0x7F185EB4u: goto label_7F185EB4;
    case 0x7F185EB8u: goto label_7F185EB8;
    case 0x7F185EBCu: goto label_7F185EBC;
    case 0x7F185EC0u: goto label_7F185EC0;
    case 0x7F185EC4u: goto label_7F185EC4;
    case 0x7F185EC8u: goto label_7F185EC8;
    case 0x7F185ECCu: goto label_7F185ECC;
    case 0x7F185ED0u: goto label_7F185ED0;
    case 0x7F185ED4u: goto label_7F185ED4;
    case 0x7F185ED8u: goto label_7F185ED8;
    case 0x7F185EDCu: goto label_7F185EDC;
    case 0x7F185EE0u: goto label_7F185EE0;
    case 0x7F185EE4u: goto label_7F185EE4;
    case 0x7F185EE8u: goto label_7F185EE8;
    case 0x7F185EECu: goto label_7F185EEC;
    case 0x7F185EF0u: goto label_7F185EF0;
    case 0x7F185EF4u: goto label_7F185EF4;
    case 0x7F185EF8u: goto label_7F185EF8;
    case 0x7F185EFCu: goto label_7F185EFC;
    case 0x7F185F00u: goto label_7F185F00;
    case 0x7F185F04u: goto label_7F185F04;
    case 0x7F185F08u: goto label_7F185F08;
    case 0x7F185F0Cu: goto label_7F185F0C;
    case 0x7F185F10u: goto label_7F185F10;
    case 0x7F185F14u: goto label_7F185F14;
    case 0x7F185F18u: goto label_7F185F18;
    case 0x7F185F1Cu: goto label_7F185F1C;
    case 0x7F185F20u: goto label_7F185F20;
    case 0x7F185F24u: goto label_7F185F24;
    case 0x7F185F28u: goto label_7F185F28;
    case 0x7F185F2Cu: goto label_7F185F2C;
    case 0x7F185F30u: goto label_7F185F30;
    case 0x7F185F34u: goto label_7F185F34;
    case 0x7F185F38u: goto label_7F185F38;
    case 0x7F185F3Cu: goto label_7F185F3C;
    case 0x7F185F40u: goto label_7F185F40;
    case 0x7F185F44u: goto label_7F185F44;
    case 0x7F185F48u: goto label_7F185F48;
    case 0x7F185F4Cu: goto label_7F185F4C;
    case 0x7F185F50u: goto label_7F185F50;
    case 0x7F185F54u: goto label_7F185F54;
    case 0x7F185F58u: goto label_7F185F58;
    case 0x7F185F5Cu: goto label_7F185F5C;
    case 0x7F185F60u: goto label_7F185F60;
    case 0x7F185F64u: goto label_7F185F64;
    case 0x7F185F68u: goto label_7F185F68;
    case 0x7F185F6Cu: goto label_7F185F6C;
    case 0x7F185F70u: goto label_7F185F70;
    case 0x7F185F74u: goto label_7F185F74;
    case 0x7F185F78u: goto label_7F185F78;
    case 0x7F185F7Cu: goto label_7F185F7C;
    case 0x7F185F80u: goto label_7F185F80;
    case 0x7F185F84u: goto label_7F185F84;
    case 0x7F185F88u: goto label_7F185F88;
    case 0x7F185F8Cu: goto label_7F185F8C;
    case 0x7F185F90u: goto label_7F185F90;
    case 0x7F185F94u: goto label_7F185F94;
    case 0x7F185F98u: goto label_7F185F98;
    case 0x7F185F9Cu: goto label_7F185F9C;
    case 0x7F185FA0u: goto label_7F185FA0;
    case 0x7F185FA4u: goto label_7F185FA4;
    case 0x7F185FA8u: goto label_7F185FA8;
    case 0x7F185FACu: goto label_7F185FAC;
    case 0x7F185FB0u: goto label_7F185FB0;
    case 0x7F185FB4u: goto label_7F185FB4;
    case 0x7F185FB8u: goto label_7F185FB8;
    case 0x7F185FBCu: goto label_7F185FBC;
    case 0x7F185FC0u: goto label_7F185FC0;
    case 0x7F185FC4u: goto label_7F185FC4;
    case 0x7F185FC8u: goto label_7F185FC8;
    case 0x7F185FCCu: goto label_7F185FCC;
    case 0x7F185FD0u: goto label_7F185FD0;
    case 0x7F185FD4u: goto label_7F185FD4;
    case 0x7F185FD8u: goto label_7F185FD8;
    case 0x7F185FDCu: goto label_7F185FDC;
    case 0x7F185FE0u: goto label_7F185FE0;
    case 0x7F185FE4u: goto label_7F185FE4;
    case 0x7F185FE8u: goto label_7F185FE8;
    case 0x7F185FECu: goto label_7F185FEC;
    case 0x7F185FF0u: goto label_7F185FF0;
    case 0x7F185FF4u: goto label_7F185FF4;
    case 0x7F185FF8u: goto label_7F185FF8;
    case 0x7F185FFCu: goto label_7F185FFC;
    case 0x7F186000u: goto label_7F186000;
    case 0x7F186004u: goto label_7F186004;
    case 0x7F186008u: goto label_7F186008;
    case 0x7F18600Cu: goto label_7F18600C;
    case 0x7F186010u: goto label_7F186010;
    case 0x7F186014u: goto label_7F186014;
    case 0x7F186018u: goto label_7F186018;
    case 0x7F18601Cu: goto label_7F18601C;
    case 0x7F186020u: goto label_7F186020;
    case 0x7F186024u: goto label_7F186024;
    case 0x7F186028u: goto label_7F186028;
    case 0x7F18602Cu: goto label_7F18602C;
    case 0x7F186030u: goto label_7F186030;
    case 0x7F186034u: goto label_7F186034;
    case 0x7F186038u: goto label_7F186038;
    case 0x7F18603Cu: goto label_7F18603C;
    case 0x7F186040u: goto label_7F186040;
    case 0x7F186044u: goto label_7F186044;
    case 0x7F186048u: goto label_7F186048;
    case 0x7F18604Cu: goto label_7F18604C;
    case 0x7F186050u: goto label_7F186050;
    case 0x7F186054u: goto label_7F186054;
    case 0x7F186058u: goto label_7F186058;
    case 0x7F18605Cu: goto label_7F18605C;
    case 0x7F186060u: goto label_7F186060;
    case 0x7F186064u: goto label_7F186064;
    case 0x7F186068u: goto label_7F186068;
    case 0x7F18606Cu: goto label_7F18606C;
    case 0x7F186070u: goto label_7F186070;
    case 0x7F186074u: goto label_7F186074;
    case 0x7F186078u: goto label_7F186078;
    case 0x7F18607Cu: goto label_7F18607C;
    case 0x7F186080u: goto label_7F186080;
    case 0x7F186084u: goto label_7F186084;
    case 0x7F186088u: goto label_7F186088;
    case 0x7F18608Cu: goto label_7F18608C;
    case 0x7F186090u: goto label_7F186090;
    case 0x7F186094u: goto label_7F186094;
    case 0x7F186098u: goto label_7F186098;
    case 0x7F18609Cu: goto label_7F18609C;
    case 0x7F1860A0u: goto label_7F1860A0;
    case 0x7F1860A4u: goto label_7F1860A4;
    case 0x7F1860A8u: goto label_7F1860A8;
    case 0x7F1860ACu: goto label_7F1860AC;
    case 0x7F1860B0u: goto label_7F1860B0;
    case 0x7F1860B4u: goto label_7F1860B4;
    case 0x7F1860B8u: goto label_7F1860B8;
    case 0x7F1860BCu: goto label_7F1860BC;
    case 0x7F1860C0u: goto label_7F1860C0;
    case 0x7F1860C4u: goto label_7F1860C4;
    case 0x7F1860C8u: goto label_7F1860C8;
    case 0x7F1860CCu: goto label_7F1860CC;
    case 0x7F1860D0u: goto label_7F1860D0;
    case 0x7F1860D4u: goto label_7F1860D4;
    case 0x7F1860D8u: goto label_7F1860D8;
    case 0x7F1860DCu: goto label_7F1860DC;
    case 0x7F1860E0u: goto label_7F1860E0;
    case 0x7F1860E4u: goto label_7F1860E4;
    case 0x7F1860E8u: goto label_7F1860E8;
    case 0x7F1860ECu: goto label_7F1860EC;
    case 0x7F1860F0u: goto label_7F1860F0;
    case 0x7F1860F4u: goto label_7F1860F4;
    case 0x7F1860F8u: goto label_7F1860F8;
    case 0x7F1860FCu: goto label_7F1860FC;
    case 0x7F186100u: goto label_7F186100;
    case 0x7F186104u: goto label_7F186104;
    case 0x7F186108u: goto label_7F186108;
    case 0x7F18610Cu: goto label_7F18610C;
    case 0x7F186110u: goto label_7F186110;
    case 0x7F186114u: goto label_7F186114;
    case 0x7F186118u: goto label_7F186118;
    case 0x7F18611Cu: goto label_7F18611C;
    case 0x7F186120u: goto label_7F186120;
    case 0x7F186124u: goto label_7F186124;
    case 0x7F186128u: goto label_7F186128;
    case 0x7F18612Cu: goto label_7F18612C;
    case 0x7F186130u: goto label_7F186130;
    case 0x7F186134u: goto label_7F186134;
    case 0x7F186138u: goto label_7F186138;
    case 0x7F18613Cu: goto label_7F18613C;
    case 0x7F186140u: goto label_7F186140;
    case 0x7F186144u: goto label_7F186144;
    case 0x7F186148u: goto label_7F186148;
    case 0x7F18614Cu: goto label_7F18614C;
    case 0x7F186150u: goto label_7F186150;
    case 0x7F186154u: goto label_7F186154;
    case 0x7F186158u: goto label_7F186158;
    case 0x7F18615Cu: goto label_7F18615C;
    case 0x7F186160u: goto label_7F186160;
    case 0x7F186164u: goto label_7F186164;
    case 0x7F186168u: goto label_7F186168;
    case 0x7F18616Cu: goto label_7F18616C;
    case 0x7F186170u: goto label_7F186170;
    case 0x7F186174u: goto label_7F186174;
    case 0x7F186178u: goto label_7F186178;
    case 0x7F18617Cu: goto label_7F18617C;
    case 0x7F186180u: goto label_7F186180;
    case 0x7F186184u: goto label_7F186184;
    case 0x7F186188u: goto label_7F186188;
    case 0x7F18618Cu: goto label_7F18618C;
    case 0x7F186190u: goto label_7F186190;
    case 0x7F186194u: goto label_7F186194;
    case 0x7F186198u: goto label_7F186198;
    case 0x7F18619Cu: goto label_7F18619C;
    case 0x7F1861A0u: goto label_7F1861A0;
    case 0x7F1861A4u: goto label_7F1861A4;
    case 0x7F1861A8u: goto label_7F1861A8;
    case 0x7F1861ACu: goto label_7F1861AC;
    case 0x7F1861B0u: goto label_7F1861B0;
    case 0x7F1861B4u: goto label_7F1861B4;
    case 0x7F1861B8u: goto label_7F1861B8;
    case 0x7F1861BCu: goto label_7F1861BC;
    case 0x7F1861C0u: goto label_7F1861C0;
    case 0x7F1861C4u: goto label_7F1861C4;
    case 0x7F1861C8u: goto label_7F1861C8;
    case 0x7F1861CCu: goto label_7F1861CC;
    case 0x7F1861D0u: goto label_7F1861D0;
    case 0x7F1861D4u: goto label_7F1861D4;
    case 0x7F1861D8u: goto label_7F1861D8;
    case 0x7F1861DCu: goto label_7F1861DC;
    case 0x7F1861E0u: goto label_7F1861E0;
    case 0x7F1861E4u: goto label_7F1861E4;
    case 0x7F1861E8u: goto label_7F1861E8;
    case 0x7F1861ECu: goto label_7F1861EC;
    case 0x7F1861F0u: goto label_7F1861F0;
    case 0x7F1861F4u: goto label_7F1861F4;
    case 0x7F1861F8u: goto label_7F1861F8;
    case 0x7F1861FCu: goto label_7F1861FC;
    case 0x7F186200u: goto label_7F186200;
    case 0x7F186204u: goto label_7F186204;
    case 0x7F186208u: goto label_7F186208;
    case 0x7F18620Cu: goto label_7F18620C;
    case 0x7F186210u: goto label_7F186210;
    case 0x7F186214u: goto label_7F186214;
    case 0x7F186218u: goto label_7F186218;
    case 0x7F18621Cu: goto label_7F18621C;
    case 0x7F186220u: goto label_7F186220;
    case 0x7F186224u: goto label_7F186224;
    case 0x7F186228u: goto label_7F186228;
    case 0x7F18622Cu: goto label_7F18622C;
    case 0x7F186230u: goto label_7F186230;
    case 0x7F186234u: goto label_7F186234;
    case 0x7F186238u: goto label_7F186238;
    case 0x7F18623Cu: goto label_7F18623C;
    case 0x7F186240u: goto label_7F186240;
    case 0x7F186244u: goto label_7F186244;
    case 0x7F186248u: goto label_7F186248;
    case 0x7F18624Cu: goto label_7F18624C;
    case 0x7F186250u: goto label_7F186250;
    case 0x7F186254u: goto label_7F186254;
    case 0x7F186258u: goto label_7F186258;
    case 0x7F18625Cu: goto label_7F18625C;
    case 0x7F186260u: goto label_7F186260;
    case 0x7F186264u: goto label_7F186264;
    case 0x7F186268u: goto label_7F186268;
    case 0x7F18626Cu: goto label_7F18626C;
    case 0x7F186270u: goto label_7F186270;
    case 0x7F186274u: goto label_7F186274;
    case 0x7F186278u: goto label_7F186278;
    case 0x7F18627Cu: goto label_7F18627C;
    case 0x7F186280u: goto label_7F186280;
    case 0x7F186284u: goto label_7F186284;
    case 0x7F186288u: goto label_7F186288;
    case 0x7F18628Cu: goto label_7F18628C;
    case 0x7F186290u: goto label_7F186290;
    case 0x7F186294u: goto label_7F186294;
    case 0x7F186298u: goto label_7F186298;
    case 0x7F18629Cu: goto label_7F18629C;
    case 0x7F1862A0u: goto label_7F1862A0;
    case 0x7F1862A4u: goto label_7F1862A4;
    case 0x7F1862A8u: goto label_7F1862A8;
    case 0x7F1862ACu: goto label_7F1862AC;
    case 0x7F1862B0u: goto label_7F1862B0;
    case 0x7F1862B4u: goto label_7F1862B4;
    case 0x7F1862B8u: goto label_7F1862B8;
    case 0x7F1862BCu: goto label_7F1862BC;
    case 0x7F1862C0u: goto label_7F1862C0;
    case 0x7F1862C4u: goto label_7F1862C4;
    case 0x7F1862C8u: goto label_7F1862C8;
    case 0x7F1862CCu: goto label_7F1862CC;
    case 0x7F1862D0u: goto label_7F1862D0;
    case 0x7F1862D4u: goto label_7F1862D4;
    case 0x7F1862D8u: goto label_7F1862D8;
    case 0x7F1862DCu: goto label_7F1862DC;
    case 0x7F1862E0u: goto label_7F1862E0;
    case 0x7F1862E4u: goto label_7F1862E4;
    case 0x7F1862E8u: goto label_7F1862E8;
    case 0x7F1862ECu: goto label_7F1862EC;
    case 0x7F1862F0u: goto label_7F1862F0;
    case 0x7F1862F4u: goto label_7F1862F4;
    case 0x7F1862F8u: goto label_7F1862F8;
    case 0x7F1862FCu: goto label_7F1862FC;
    case 0x7F186300u: goto label_7F186300;
    case 0x7F186304u: goto label_7F186304;
    case 0x7F186308u: goto label_7F186308;
    case 0x7F18630Cu: goto label_7F18630C;
    case 0x7F186310u: goto label_7F186310;
    case 0x7F186314u: goto label_7F186314;
    case 0x7F186318u: goto label_7F186318;
    case 0x7F18631Cu: goto label_7F18631C;
    case 0x7F186320u: goto label_7F186320;
    case 0x7F186324u: goto label_7F186324;
    case 0x7F186328u: goto label_7F186328;
    case 0x7F18632Cu: goto label_7F18632C;
    case 0x7F186330u: goto label_7F186330;
    case 0x7F186334u: goto label_7F186334;
    case 0x7F186338u: goto label_7F186338;
    case 0x7F18633Cu: goto label_7F18633C;
    case 0x7F186340u: goto label_7F186340;
    case 0x7F186344u: goto label_7F186344;
    case 0x7F186348u: goto label_7F186348;
    case 0x7F18634Cu: goto label_7F18634C;
    case 0x7F186350u: goto label_7F186350;
    case 0x7F186354u: goto label_7F186354;
    case 0x7F186358u: goto label_7F186358;
    case 0x7F18635Cu: goto label_7F18635C;
    case 0x7F186360u: goto label_7F186360;
    case 0x7F186364u: goto label_7F186364;
    case 0x7F186368u: goto label_7F186368;
    case 0x7F18636Cu: goto label_7F18636C;
    case 0x7F186370u: goto label_7F186370;
    case 0x7F186374u: goto label_7F186374;
    case 0x7F186378u: goto label_7F186378;
    case 0x7F18637Cu: goto label_7F18637C;
    case 0x7F186380u: goto label_7F186380;
    case 0x7F186384u: goto label_7F186384;
    case 0x7F186388u: goto label_7F186388;
    case 0x7F18638Cu: goto label_7F18638C;
    case 0x7F186390u: goto label_7F186390;
    case 0x7F186394u: goto label_7F186394;
    case 0x7F186398u: goto label_7F186398;
    case 0x7F18639Cu: goto label_7F18639C;
    case 0x7F1863A0u: goto label_7F1863A0;
    case 0x7F1863A4u: goto label_7F1863A4;
    case 0x7F1863A8u: goto label_7F1863A8;
    case 0x7F1863ACu: goto label_7F1863AC;
    case 0x7F1863B0u: goto label_7F1863B0;
    case 0x7F1863B4u: goto label_7F1863B4;
    case 0x7F1863B8u: goto label_7F1863B8;
    case 0x7F1863BCu: goto label_7F1863BC;
    case 0x7F1863C0u: goto label_7F1863C0;
    case 0x7F1863C4u: goto label_7F1863C4;
    case 0x7F1863C8u: goto label_7F1863C8;
    case 0x7F1863CCu: goto label_7F1863CC;
    case 0x7F1863D0u: goto label_7F1863D0;
    case 0x7F1863D4u: goto label_7F1863D4;
    case 0x7F1863D8u: goto label_7F1863D8;
    case 0x7F1863DCu: goto label_7F1863DC;
    case 0x7F1863E0u: goto label_7F1863E0;
    case 0x7F1863E4u: goto label_7F1863E4;
    case 0x7F1863E8u: goto label_7F1863E8;
    case 0x7F1863ECu: goto label_7F1863EC;
    case 0x7F1863F0u: goto label_7F1863F0;
    case 0x7F1863F4u: goto label_7F1863F4;
    case 0x7F1863F8u: goto label_7F1863F8;
    case 0x7F1863FCu: goto label_7F1863FC;
    case 0x7F186400u: goto label_7F186400;
    case 0x7F186404u: goto label_7F186404;
    case 0x7F186408u: goto label_7F186408;
    case 0x7F18640Cu: goto label_7F18640C;
    case 0x7F186410u: goto label_7F186410;
    case 0x7F186414u: goto label_7F186414;
    case 0x7F186418u: goto label_7F186418;
    case 0x7F18641Cu: goto label_7F18641C;
    case 0x7F186420u: goto label_7F186420;
    case 0x7F186424u: goto label_7F186424;
    case 0x7F186428u: goto label_7F186428;
    case 0x7F18642Cu: goto label_7F18642C;
    case 0x7F186430u: goto label_7F186430;
    case 0x7F186434u: goto label_7F186434;
    case 0x7F186438u: goto label_7F186438;
    case 0x7F18643Cu: goto label_7F18643C;
    case 0x7F186440u: goto label_7F186440;
    case 0x7F186444u: goto label_7F186444;
    case 0x7F186448u: goto label_7F186448;
    case 0x7F18644Cu: goto label_7F18644C;
    case 0x7F186450u: goto label_7F186450;
    case 0x7F186454u: goto label_7F186454;
    case 0x7F186458u: goto label_7F186458;
    case 0x7F18645Cu: goto label_7F18645C;
    case 0x7F186460u: goto label_7F186460;
    case 0x7F186464u: goto label_7F186464;
    case 0x7F186468u: goto label_7F186468;
    case 0x7F18646Cu: goto label_7F18646C;
    case 0x7F186470u: goto label_7F186470;
    case 0x7F186474u: goto label_7F186474;
    case 0x7F186478u: goto label_7F186478;
    case 0x7F18647Cu: goto label_7F18647C;
    case 0x7F186480u: goto label_7F186480;
    case 0x7F186484u: goto label_7F186484;
    case 0x7F186488u: goto label_7F186488;
    case 0x7F18648Cu: goto label_7F18648C;
    case 0x7F186490u: goto label_7F186490;
    case 0x7F186494u: goto label_7F186494;
    case 0x7F186498u: goto label_7F186498;
    case 0x7F18649Cu: goto label_7F18649C;
    case 0x7F1864A0u: goto label_7F1864A0;
    case 0x7F1864A4u: goto label_7F1864A4;
    case 0x7F1864A8u: goto label_7F1864A8;
    case 0x7F1864ACu: goto label_7F1864AC;
    case 0x7F1864B0u: goto label_7F1864B0;
    case 0x7F1864B4u: goto label_7F1864B4;
    case 0x7F1864B8u: goto label_7F1864B8;
    case 0x7F1864BCu: goto label_7F1864BC;
    case 0x7F1864C0u: goto label_7F1864C0;
    case 0x7F1864C4u: goto label_7F1864C4;
    case 0x7F1864C8u: goto label_7F1864C8;
    case 0x7F1864CCu: goto label_7F1864CC;
    case 0x7F1864D0u: goto label_7F1864D0;
    case 0x7F1864D4u: goto label_7F1864D4;
    case 0x7F1864D8u: goto label_7F1864D8;
    case 0x7F1864DCu: goto label_7F1864DC;
    case 0x7F1864E0u: goto label_7F1864E0;
    case 0x7F1864E4u: goto label_7F1864E4;
    case 0x7F1864E8u: goto label_7F1864E8;
    case 0x7F1864ECu: goto label_7F1864EC;
    case 0x7F1864F0u: goto label_7F1864F0;
    case 0x7F1864F4u: goto label_7F1864F4;
    case 0x7F1864F8u: goto label_7F1864F8;
    case 0x7F1864FCu: goto label_7F1864FC;
    case 0x7F186500u: goto label_7F186500;
    case 0x7F186504u: goto label_7F186504;
    case 0x7F186508u: goto label_7F186508;
    case 0x7F18650Cu: goto label_7F18650C;
    case 0x7F186510u: goto label_7F186510;
    case 0x7F186514u: goto label_7F186514;
    case 0x7F186518u: goto label_7F186518;
    case 0x7F18651Cu: goto label_7F18651C;
    case 0x7F186520u: goto label_7F186520;
    case 0x7F186524u: goto label_7F186524;
    case 0x7F186528u: goto label_7F186528;
    case 0x7F18652Cu: goto label_7F18652C;
    case 0x7F186530u: goto label_7F186530;
    case 0x7F186534u: goto label_7F186534;
    case 0x7F186538u: goto label_7F186538;
    case 0x7F18653Cu: goto label_7F18653C;
    case 0x7F186540u: goto label_7F186540;
    case 0x7F186544u: goto label_7F186544;
    case 0x7F186548u: goto label_7F186548;
    case 0x7F18654Cu: goto label_7F18654C;
    case 0x7F186550u: goto label_7F186550;
    case 0x7F186554u: goto label_7F186554;
    case 0x7F186558u: goto label_7F186558;
    case 0x7F18655Cu: goto label_7F18655C;
    case 0x7F186560u: goto label_7F186560;
    case 0x7F186564u: goto label_7F186564;
    case 0x7F186568u: goto label_7F186568;
    case 0x7F18656Cu: goto label_7F18656C;
    case 0x7F186570u: goto label_7F186570;
    case 0x7F186574u: goto label_7F186574;
    case 0x7F186578u: goto label_7F186578;
    case 0x7F18657Cu: goto label_7F18657C;
    case 0x7F186580u: goto label_7F186580;
    case 0x7F186584u: goto label_7F186584;
    case 0x7F186588u: goto label_7F186588;
    case 0x7F18658Cu: goto label_7F18658C;
    case 0x7F186590u: goto label_7F186590;
    case 0x7F186594u: goto label_7F186594;
    case 0x7F186598u: goto label_7F186598;
    case 0x7F18659Cu: goto label_7F18659C;
    case 0x7F1865A0u: goto label_7F1865A0;
    case 0x7F1865A4u: goto label_7F1865A4;
    case 0x7F1865A8u: goto label_7F1865A8;
    case 0x7F1865ACu: goto label_7F1865AC;
    case 0x7F1865B0u: goto label_7F1865B0;
    case 0x7F1865B4u: goto label_7F1865B4;
    case 0x7F1865B8u: goto label_7F1865B8;
    case 0x7F1865BCu: goto label_7F1865BC;
    case 0x7F1865C0u: goto label_7F1865C0;
    case 0x7F1865C4u: goto label_7F1865C4;
    case 0x7F1865C8u: goto label_7F1865C8;
    case 0x7F1865CCu: goto label_7F1865CC;
    case 0x7F1865D0u: goto label_7F1865D0;
    case 0x7F1865D4u: goto label_7F1865D4;
    case 0x7F1865D8u: goto label_7F1865D8;
    case 0x7F1865DCu: goto label_7F1865DC;
    case 0x7F1865E0u: goto label_7F1865E0;
    case 0x7F1865E4u: goto label_7F1865E4;
    case 0x7F1865E8u: goto label_7F1865E8;
    case 0x7F1865ECu: goto label_7F1865EC;
    case 0x7F1865F0u: goto label_7F1865F0;
    case 0x7F1865F4u: goto label_7F1865F4;
    case 0x7F1865F8u: goto label_7F1865F8;
    case 0x7F1865FCu: goto label_7F1865FC;
    case 0x7F186600u: goto label_7F186600;
    case 0x7F186604u: goto label_7F186604;
    case 0x7F186608u: goto label_7F186608;
    case 0x7F18660Cu: goto label_7F18660C;
    case 0x7F186610u: goto label_7F186610;
    case 0x7F186614u: goto label_7F186614;
    case 0x7F186618u: goto label_7F186618;
    case 0x7F18661Cu: goto label_7F18661C;
    case 0x7F186620u: goto label_7F186620;
    case 0x7F186624u: goto label_7F186624;
    case 0x7F186628u: goto label_7F186628;
    case 0x7F18662Cu: goto label_7F18662C;
    case 0x7F186630u: goto label_7F186630;
    case 0x7F186634u: goto label_7F186634;
    case 0x7F186638u: goto label_7F186638;
    case 0x7F18663Cu: goto label_7F18663C;
    case 0x7F186640u: goto label_7F186640;
    case 0x7F186644u: goto label_7F186644;
    case 0x7F186648u: goto label_7F186648;
    case 0x7F18664Cu: goto label_7F18664C;
    case 0x7F186650u: goto label_7F186650;
    case 0x7F186654u: goto label_7F186654;
    case 0x7F186658u: goto label_7F186658;
    case 0x7F18665Cu: goto label_7F18665C;
    case 0x7F186660u: goto label_7F186660;
    case 0x7F186664u: goto label_7F186664;
    case 0x7F186668u: goto label_7F186668;
    case 0x7F18666Cu: goto label_7F18666C;
    case 0x7F186670u: goto label_7F186670;
    case 0x7F186674u: goto label_7F186674;
    case 0x7F186678u: goto label_7F186678;
    case 0x7F18667Cu: goto label_7F18667C;
    case 0x7F186680u: goto label_7F186680;
    case 0x7F186684u: goto label_7F186684;
    case 0x7F186688u: goto label_7F186688;
    case 0x7F18668Cu: goto label_7F18668C;
    case 0x7F186690u: goto label_7F186690;
    case 0x7F186694u: goto label_7F186694;
    case 0x7F186698u: goto label_7F186698;
    case 0x7F18669Cu: goto label_7F18669C;
    case 0x7F1866A0u: goto label_7F1866A0;
    case 0x7F1866A4u: goto label_7F1866A4;
    case 0x7F1866A8u: goto label_7F1866A8;
    case 0x7F1866ACu: goto label_7F1866AC;
    case 0x7F1866B0u: goto label_7F1866B0;
    case 0x7F1866B4u: goto label_7F1866B4;
    case 0x7F1866B8u: goto label_7F1866B8;
    case 0x7F1866BCu: goto label_7F1866BC;
    case 0x7F1866C0u: goto label_7F1866C0;
    case 0x7F1866C4u: goto label_7F1866C4;
    case 0x7F1866C8u: goto label_7F1866C8;
    case 0x7F1866CCu: goto label_7F1866CC;
    case 0x7F1866D0u: goto label_7F1866D0;
    case 0x7F1866D4u: goto label_7F1866D4;
    case 0x7F1866D8u: goto label_7F1866D8;
    case 0x7F1866DCu: goto label_7F1866DC;
    case 0x7F1866E0u: goto label_7F1866E0;
    case 0x7F1866E4u: goto label_7F1866E4;
    case 0x7F1866E8u: goto label_7F1866E8;
    case 0x7F1866ECu: goto label_7F1866EC;
    case 0x7F1866F0u: goto label_7F1866F0;
    case 0x7F1866F4u: goto label_7F1866F4;
    case 0x7F1866F8u: goto label_7F1866F8;
    case 0x7F1866FCu: goto label_7F1866FC;
    case 0x7F186700u: goto label_7F186700;
    case 0x7F186704u: goto label_7F186704;
    case 0x7F186708u: goto label_7F186708;
    case 0x7F18670Cu: goto label_7F18670C;
    case 0x7F186710u: goto label_7F186710;
    case 0x7F186714u: goto label_7F186714;
    case 0x7F186718u: goto label_7F186718;
    case 0x7F18671Cu: goto label_7F18671C;
    case 0x7F186720u: goto label_7F186720;
    case 0x7F186724u: goto label_7F186724;
    case 0x7F186728u: goto label_7F186728;
    case 0x7F18672Cu: goto label_7F18672C;
    case 0x7F186730u: goto label_7F186730;
    case 0x7F186734u: goto label_7F186734;
    case 0x7F186738u: goto label_7F186738;
    case 0x7F18673Cu: goto label_7F18673C;
    case 0x7F186740u: goto label_7F186740;
    case 0x7F186744u: goto label_7F186744;
    case 0x7F186748u: goto label_7F186748;
    case 0x7F18674Cu: goto label_7F18674C;
    case 0x7F186750u: goto label_7F186750;
    case 0x7F186754u: goto label_7F186754;
    case 0x7F186758u: goto label_7F186758;
    case 0x7F18675Cu: goto label_7F18675C;
    case 0x7F186760u: goto label_7F186760;
    case 0x7F186764u: goto label_7F186764;
    case 0x7F186768u: goto label_7F186768;
    case 0x7F18676Cu: goto label_7F18676C;
    case 0x7F186770u: goto label_7F186770;
    case 0x7F186774u: goto label_7F186774;
    case 0x7F186778u: goto label_7F186778;
    case 0x7F18677Cu: goto label_7F18677C;
    case 0x7F186780u: goto label_7F186780;
    case 0x7F186784u: goto label_7F186784;
    case 0x7F186788u: goto label_7F186788;
    case 0x7F18678Cu: goto label_7F18678C;
    case 0x7F186790u: goto label_7F186790;
    case 0x7F186794u: goto label_7F186794;
    case 0x7F186798u: goto label_7F186798;
    case 0x7F18679Cu: goto label_7F18679C;
    case 0x7F1867A0u: goto label_7F1867A0;
    case 0x7F1867A4u: goto label_7F1867A4;
    case 0x7F1867A8u: goto label_7F1867A8;
    case 0x7F1867ACu: goto label_7F1867AC;
    case 0x7F1867B0u: goto label_7F1867B0;
    case 0x7F1867B4u: goto label_7F1867B4;
    case 0x7F1867B8u: goto label_7F1867B8;
    case 0x7F1867BCu: goto label_7F1867BC;
    case 0x7F1867C0u: goto label_7F1867C0;
    case 0x7F1867C4u: goto label_7F1867C4;
    case 0x7F1867C8u: goto label_7F1867C8;
    case 0x7F1867CCu: goto label_7F1867CC;
    case 0x7F1867D0u: goto label_7F1867D0;
    case 0x7F1867D4u: goto label_7F1867D4;
    case 0x7F1867D8u: goto label_7F1867D8;
    case 0x7F1867DCu: goto label_7F1867DC;
    case 0x7F1867E0u: goto label_7F1867E0;
    case 0x7F1867E4u: goto label_7F1867E4;
    case 0x7F1867E8u: goto label_7F1867E8;
    case 0x7F1867ECu: goto label_7F1867EC;
    case 0x7F1867F0u: goto label_7F1867F0;
    case 0x7F1867F4u: goto label_7F1867F4;
    case 0x7F1867F8u: goto label_7F1867F8;
    case 0x7F1867FCu: goto label_7F1867FC;
    case 0x7F186800u: goto label_7F186800;
    case 0x7F186804u: goto label_7F186804;
    case 0x7F186808u: goto label_7F186808;
    case 0x7F18680Cu: goto label_7F18680C;
    case 0x7F186810u: goto label_7F186810;
    case 0x7F186814u: goto label_7F186814;
    case 0x7F186818u: goto label_7F186818;
    case 0x7F18681Cu: goto label_7F18681C;
    case 0x7F186820u: goto label_7F186820;
    case 0x7F186824u: goto label_7F186824;
    case 0x7F186828u: goto label_7F186828;
    case 0x7F18682Cu: goto label_7F18682C;
    case 0x7F186830u: goto label_7F186830;
    case 0x7F186834u: goto label_7F186834;
    case 0x7F186838u: goto label_7F186838;
    case 0x7F18683Cu: goto label_7F18683C;
    case 0x7F186840u: goto label_7F186840;
    case 0x7F186844u: goto label_7F186844;
    case 0x7F186848u: goto label_7F186848;
    case 0x7F18684Cu: goto label_7F18684C;
    case 0x7F186850u: goto label_7F186850;
    case 0x7F186854u: goto label_7F186854;
    case 0x7F186858u: goto label_7F186858;
    case 0x7F18685Cu: goto label_7F18685C;
    case 0x7F186860u: goto label_7F186860;
    case 0x7F186864u: goto label_7F186864;
    case 0x7F186868u: goto label_7F186868;
    case 0x7F18686Cu: goto label_7F18686C;
    case 0x7F186870u: goto label_7F186870;
    case 0x7F186874u: goto label_7F186874;
    case 0x7F186878u: goto label_7F186878;
    case 0x7F18687Cu: goto label_7F18687C;
    case 0x7F186880u: goto label_7F186880;
    case 0x7F186884u: goto label_7F186884;
    case 0x7F186888u: goto label_7F186888;
    case 0x7F18688Cu: goto label_7F18688C;
    case 0x7F186890u: goto label_7F186890;
    case 0x7F186894u: goto label_7F186894;
    case 0x7F186898u: goto label_7F186898;
    case 0x7F18689Cu: goto label_7F18689C;
    case 0x7F1868A0u: goto label_7F1868A0;
    case 0x7F1868A4u: goto label_7F1868A4;
    case 0x7F1868A8u: goto label_7F1868A8;
    case 0x7F1868ACu: goto label_7F1868AC;
    case 0x7F1868B0u: goto label_7F1868B0;
    case 0x7F1868B4u: goto label_7F1868B4;
    case 0x7F1868B8u: goto label_7F1868B8;
    case 0x7F1868BCu: goto label_7F1868BC;
    case 0x7F1868C0u: goto label_7F1868C0;
    case 0x7F1868C4u: goto label_7F1868C4;
    case 0x7F1868C8u: goto label_7F1868C8;
    case 0x7F1868CCu: goto label_7F1868CC;
    case 0x7F1868D0u: goto label_7F1868D0;
    case 0x7F1868D4u: goto label_7F1868D4;
    case 0x7F1868D8u: goto label_7F1868D8;
    case 0x7F1868DCu: goto label_7F1868DC;
    case 0x7F1868E0u: goto label_7F1868E0;
    case 0x7F1868E4u: goto label_7F1868E4;
    case 0x7F1868E8u: goto label_7F1868E8;
    case 0x7F1868ECu: goto label_7F1868EC;
    case 0x7F1868F0u: goto label_7F1868F0;
    case 0x7F1868F4u: goto label_7F1868F4;
    case 0x7F1868F8u: goto label_7F1868F8;
    case 0x7F1868FCu: goto label_7F1868FC;
    case 0x7F186900u: goto label_7F186900;
    case 0x7F186904u: goto label_7F186904;
    case 0x7F186908u: goto label_7F186908;
    case 0x7F18690Cu: goto label_7F18690C;
    case 0x7F186910u: goto label_7F186910;
    case 0x7F186914u: goto label_7F186914;
    case 0x7F186918u: goto label_7F186918;
    case 0x7F18691Cu: goto label_7F18691C;
    case 0x7F186920u: goto label_7F186920;
    case 0x7F186924u: goto label_7F186924;
    case 0x7F186928u: goto label_7F186928;
    case 0x7F18692Cu: goto label_7F18692C;
    case 0x7F186930u: goto label_7F186930;
    case 0x7F186934u: goto label_7F186934;
    case 0x7F186938u: goto label_7F186938;
    case 0x7F18693Cu: goto label_7F18693C;
    case 0x7F186940u: goto label_7F186940;
    case 0x7F186944u: goto label_7F186944;
    case 0x7F186948u: goto label_7F186948;
    case 0x7F18694Cu: goto label_7F18694C;
    case 0x7F186950u: goto label_7F186950;
    case 0x7F186954u: goto label_7F186954;
    case 0x7F186958u: goto label_7F186958;
    case 0x7F18695Cu: goto label_7F18695C;
    case 0x7F186960u: goto label_7F186960;
    case 0x7F186964u: goto label_7F186964;
    case 0x7F186968u: goto label_7F186968;
    case 0x7F18696Cu: goto label_7F18696C;
    case 0x7F186970u: goto label_7F186970;
    case 0x7F186974u: goto label_7F186974;
    case 0x7F186978u: goto label_7F186978;
    case 0x7F18697Cu: goto label_7F18697C;
    case 0x7F186980u: goto label_7F186980;
    case 0x7F186984u: goto label_7F186984;
    case 0x7F186988u: goto label_7F186988;
    case 0x7F18698Cu: goto label_7F18698C;
    case 0x7F186990u: goto label_7F186990;
    case 0x7F186994u: goto label_7F186994;
    case 0x7F186998u: goto label_7F186998;
    case 0x7F18699Cu: goto label_7F18699C;
    case 0x7F1869A0u: goto label_7F1869A0;
    case 0x7F1869A4u: goto label_7F1869A4;
    case 0x7F1869A8u: goto label_7F1869A8;
    case 0x7F1869ACu: goto label_7F1869AC;
    case 0x7F1869B0u: goto label_7F1869B0;
    case 0x7F1869B4u: goto label_7F1869B4;
    case 0x7F1869B8u: goto label_7F1869B8;
    case 0x7F1869BCu: goto label_7F1869BC;
    case 0x7F1869C0u: goto label_7F1869C0;
    case 0x7F1869C4u: goto label_7F1869C4;
    case 0x7F1869C8u: goto label_7F1869C8;
    case 0x7F1869CCu: goto label_7F1869CC;
    case 0x7F1869D0u: goto label_7F1869D0;
    case 0x7F1869D4u: goto label_7F1869D4;
    case 0x7F1869D8u: goto label_7F1869D8;
    case 0x7F1869DCu: goto label_7F1869DC;
    case 0x7F1869E0u: goto label_7F1869E0;
    case 0x7F1869E4u: goto label_7F1869E4;
    case 0x7F1869E8u: goto label_7F1869E8;
    case 0x7F1869ECu: goto label_7F1869EC;
    case 0x7F1869F0u: goto label_7F1869F0;
    case 0x7F1869F4u: goto label_7F1869F4;
    case 0x7F1869F8u: goto label_7F1869F8;
    case 0x7F1869FCu: goto label_7F1869FC;
    case 0x7F186A00u: goto label_7F186A00;
    case 0x7F186A04u: goto label_7F186A04;
    case 0x7F186A08u: goto label_7F186A08;
    case 0x7F186A0Cu: goto label_7F186A0C;
    case 0x7F186A10u: goto label_7F186A10;
    case 0x7F186A14u: goto label_7F186A14;
    case 0x7F186A18u: goto label_7F186A18;
    case 0x7F186A1Cu: goto label_7F186A1C;
    case 0x7F186A20u: goto label_7F186A20;
    case 0x7F186A24u: goto label_7F186A24;
    case 0x7F186A28u: goto label_7F186A28;
    case 0x7F186A2Cu: goto label_7F186A2C;
    case 0x7F186A30u: goto label_7F186A30;
    case 0x7F186A34u: goto label_7F186A34;
    case 0x7F186A38u: goto label_7F186A38;
    case 0x7F186A3Cu: goto label_7F186A3C;
    case 0x7F186A40u: goto label_7F186A40;
    case 0x7F186A44u: goto label_7F186A44;
    case 0x7F186A48u: goto label_7F186A48;
    case 0x7F186A4Cu: goto label_7F186A4C;
    case 0x7F186A50u: goto label_7F186A50;
    case 0x7F186A54u: goto label_7F186A54;
    case 0x7F186A58u: goto label_7F186A58;
    case 0x7F186A5Cu: goto label_7F186A5C;
    case 0x7F186A60u: goto label_7F186A60;
    case 0x7F186A64u: goto label_7F186A64;
    case 0x7F186A68u: goto label_7F186A68;
    case 0x7F186A6Cu: goto label_7F186A6C;
    case 0x7F186A70u: goto label_7F186A70;
    case 0x7F186A74u: goto label_7F186A74;
    case 0x7F186A78u: goto label_7F186A78;
    case 0x7F186A7Cu: goto label_7F186A7C;
    case 0x7F186A80u: goto label_7F186A80;
    case 0x7F186A84u: goto label_7F186A84;
    case 0x7F186A88u: goto label_7F186A88;
    case 0x7F186A8Cu: goto label_7F186A8C;
    case 0x7F186A90u: goto label_7F186A90;
    case 0x7F186A94u: goto label_7F186A94;
    case 0x7F186A98u: goto label_7F186A98;
    case 0x7F186A9Cu: goto label_7F186A9C;
    case 0x7F186AA0u: goto label_7F186AA0;
    case 0x7F186AA4u: goto label_7F186AA4;
    case 0x7F186AA8u: goto label_7F186AA8;
    case 0x7F186AACu: goto label_7F186AAC;
    case 0x7F186AB0u: goto label_7F186AB0;
    case 0x7F186AB4u: goto label_7F186AB4;
    case 0x7F186AB8u: goto label_7F186AB8;
    case 0x7F186ABCu: goto label_7F186ABC;
    case 0x7F186AC0u: goto label_7F186AC0;
    case 0x7F186AC4u: goto label_7F186AC4;
    case 0x7F186AC8u: goto label_7F186AC8;
    case 0x7F186ACCu: goto label_7F186ACC;
    case 0x7F186AD0u: goto label_7F186AD0;
    case 0x7F186AD4u: goto label_7F186AD4;
    case 0x7F186AD8u: goto label_7F186AD8;
    case 0x7F186ADCu: goto label_7F186ADC;
    case 0x7F186AE0u: goto label_7F186AE0;
    case 0x7F186AE4u: goto label_7F186AE4;
    case 0x7F186AE8u: goto label_7F186AE8;
    case 0x7F186AECu: goto label_7F186AEC;
    case 0x7F186AF0u: goto label_7F186AF0;
    case 0x7F186AF4u: goto label_7F186AF4;
    case 0x7F186AF8u: goto label_7F186AF8;
    case 0x7F186AFCu: goto label_7F186AFC;
    case 0x7F186B00u: goto label_7F186B00;
    case 0x7F186B04u: goto label_7F186B04;
    case 0x7F186B08u: goto label_7F186B08;
    case 0x7F186B0Cu: goto label_7F186B0C;
    case 0x7F186B10u: goto label_7F186B10;
    case 0x7F186B14u: goto label_7F186B14;
    case 0x7F186B18u: goto label_7F186B18;
    case 0x7F186B1Cu: goto label_7F186B1C;
    case 0x7F186B20u: goto label_7F186B20;
    case 0x7F186B24u: goto label_7F186B24;
    case 0x7F186B28u: goto label_7F186B28;
    case 0x7F186B2Cu: goto label_7F186B2C;
    case 0x7F186B30u: goto label_7F186B30;
    case 0x7F186B34u: goto label_7F186B34;
    case 0x7F186B38u: goto label_7F186B38;
    case 0x7F186B3Cu: goto label_7F186B3C;
    case 0x7F186B40u: goto label_7F186B40;
    case 0x7F186B44u: goto label_7F186B44;
    case 0x7F186B48u: goto label_7F186B48;
    case 0x7F186B4Cu: goto label_7F186B4C;
    case 0x7F186B50u: goto label_7F186B50;
    case 0x7F186B54u: goto label_7F186B54;
    case 0x7F186B58u: goto label_7F186B58;
    case 0x7F186B5Cu: goto label_7F186B5C;
    case 0x7F186B60u: goto label_7F186B60;
    case 0x7F186B64u: goto label_7F186B64;
    case 0x7F186B68u: goto label_7F186B68;
    case 0x7F186B6Cu: goto label_7F186B6C;
    case 0x7F186B70u: goto label_7F186B70;
    case 0x7F186B74u: goto label_7F186B74;
    case 0x7F186B78u: goto label_7F186B78;
    case 0x7F186B7Cu: goto label_7F186B7C;
    case 0x7F186B80u: goto label_7F186B80;
    case 0x7F186B84u: goto label_7F186B84;
    case 0x7F186B88u: goto label_7F186B88;
    case 0x7F186B8Cu: goto label_7F186B8C;
    case 0x7F186B90u: goto label_7F186B90;
    case 0x7F186B94u: goto label_7F186B94;
    case 0x7F186B98u: goto label_7F186B98;
    case 0x7F186B9Cu: goto label_7F186B9C;
    case 0x7F186BA0u: goto label_7F186BA0;
    case 0x7F186BA4u: goto label_7F186BA4;
    case 0x7F186BA8u: goto label_7F186BA8;
    case 0x7F186BACu: goto label_7F186BAC;
    case 0x7F186BB0u: goto label_7F186BB0;
    case 0x7F186BB4u: goto label_7F186BB4;
    case 0x7F186BB8u: goto label_7F186BB8;
    case 0x7F186BBCu: goto label_7F186BBC;
    case 0x7F186BC0u: goto label_7F186BC0;
    case 0x7F186BC4u: goto label_7F186BC4;
    case 0x7F186BC8u: goto label_7F186BC8;
    case 0x7F186BCCu: goto label_7F186BCC;
    case 0x7F186BD0u: goto label_7F186BD0;
    case 0x7F186BD4u: goto label_7F186BD4;
    case 0x7F186BD8u: goto label_7F186BD8;
    case 0x7F186BDCu: goto label_7F186BDC;
    case 0x7F186BE0u: goto label_7F186BE0;
    case 0x7F186BE4u: goto label_7F186BE4;
    case 0x7F186BE8u: goto label_7F186BE8;
    case 0x7F186BECu: goto label_7F186BEC;
    case 0x7F186BF0u: goto label_7F186BF0;
    case 0x7F186BF4u: goto label_7F186BF4;
    case 0x7F186BF8u: goto label_7F186BF8;
    case 0x7F186BFCu: goto label_7F186BFC;
    case 0x7F186C00u: goto label_7F186C00;
    case 0x7F186C04u: goto label_7F186C04;
    case 0x7F186C08u: goto label_7F186C08;
    case 0x7F186C0Cu: goto label_7F186C0C;
    case 0x7F186C10u: goto label_7F186C10;
    case 0x7F186C14u: goto label_7F186C14;
    case 0x7F186C18u: goto label_7F186C18;
    case 0x7F186C1Cu: goto label_7F186C1C;
    case 0x7F186C20u: goto label_7F186C20;
    case 0x7F186C24u: goto label_7F186C24;
    case 0x7F186C28u: goto label_7F186C28;
    case 0x7F186C2Cu: goto label_7F186C2C;
    case 0x7F186C30u: goto label_7F186C30;
    case 0x7F186C34u: goto label_7F186C34;
    case 0x7F186C38u: goto label_7F186C38;
    case 0x7F186C3Cu: goto label_7F186C3C;
    case 0x7F186C40u: goto label_7F186C40;
    case 0x7F186C44u: goto label_7F186C44;
    case 0x7F186C48u: goto label_7F186C48;
    case 0x7F186C4Cu: goto label_7F186C4C;
    case 0x7F186C50u: goto label_7F186C50;
    case 0x7F186C54u: goto label_7F186C54;
    case 0x7F186C58u: goto label_7F186C58;
    case 0x7F186C5Cu: goto label_7F186C5C;
    case 0x7F186C60u: goto label_7F186C60;
    case 0x7F186C64u: goto label_7F186C64;
    case 0x7F186C68u: goto label_7F186C68;
    case 0x7F186C6Cu: goto label_7F186C6C;
    case 0x7F186C70u: goto label_7F186C70;
    case 0x7F186C74u: goto label_7F186C74;
    case 0x7F186C78u: goto label_7F186C78;
    case 0x7F186C7Cu: goto label_7F186C7C;
    case 0x7F186C80u: goto label_7F186C80;
    case 0x7F186C84u: goto label_7F186C84;
    case 0x7F186C88u: goto label_7F186C88;
    case 0x7F186C8Cu: goto label_7F186C8C;
    case 0x7F186C90u: goto label_7F186C90;
    case 0x7F186C94u: goto label_7F186C94;
    case 0x7F186C98u: goto label_7F186C98;
    case 0x7F186C9Cu: goto label_7F186C9C;
    case 0x7F186CA0u: goto label_7F186CA0;
    case 0x7F186CA4u: goto label_7F186CA4;
    case 0x7F186CA8u: goto label_7F186CA8;
    case 0x7F186CACu: goto label_7F186CAC;
    case 0x7F186CB0u: goto label_7F186CB0;
    case 0x7F186CB4u: goto label_7F186CB4;
    case 0x7F186CB8u: goto label_7F186CB8;
    case 0x7F186CBCu: goto label_7F186CBC;
    case 0x7F186CC0u: goto label_7F186CC0;
    case 0x7F186CC4u: goto label_7F186CC4;
    case 0x7F186CC8u: goto label_7F186CC8;
    case 0x7F186CCCu: goto label_7F186CCC;
    case 0x7F186CD0u: goto label_7F186CD0;
    case 0x7F186CD4u: goto label_7F186CD4;
    case 0x7F186CD8u: goto label_7F186CD8;
    case 0x7F186CDCu: goto label_7F186CDC;
    case 0x7F186CE0u: goto label_7F186CE0;
    case 0x7F186CE4u: goto label_7F186CE4;
    case 0x7F186CE8u: goto label_7F186CE8;
    case 0x7F186CECu: goto label_7F186CEC;
    case 0x7F186CF0u: goto label_7F186CF0;
    case 0x7F186CF4u: goto label_7F186CF4;
    case 0x7F186CF8u: goto label_7F186CF8;
    case 0x7F186CFCu: goto label_7F186CFC;
    case 0x7F186D00u: goto label_7F186D00;
    case 0x7F186D04u: goto label_7F186D04;
    case 0x7F186D08u: goto label_7F186D08;
    case 0x7F186D0Cu: goto label_7F186D0C;
    case 0x7F186D10u: goto label_7F186D10;
    case 0x7F186D14u: goto label_7F186D14;
    case 0x7F186D18u: goto label_7F186D18;
    case 0x7F186D1Cu: goto label_7F186D1C;
    case 0x7F186D20u: goto label_7F186D20;
    case 0x7F186D24u: goto label_7F186D24;
    case 0x7F186D28u: goto label_7F186D28;
    case 0x7F186D2Cu: goto label_7F186D2C;
    case 0x7F186D30u: goto label_7F186D30;
    case 0x7F186D34u: goto label_7F186D34;
    case 0x7F186D38u: goto label_7F186D38;
    case 0x7F186D3Cu: goto label_7F186D3C;
    case 0x7F186D40u: goto label_7F186D40;
    case 0x7F186D44u: goto label_7F186D44;
    case 0x7F186D48u: goto label_7F186D48;
    case 0x7F186D4Cu: goto label_7F186D4C;
    case 0x7F186D50u: goto label_7F186D50;
    case 0x7F186D54u: goto label_7F186D54;
    case 0x7F186D58u: goto label_7F186D58;
    case 0x7F186D5Cu: goto label_7F186D5C;
    case 0x7F186D60u: goto label_7F186D60;
    case 0x7F186D64u: goto label_7F186D64;
    case 0x7F186D68u: goto label_7F186D68;
    case 0x7F186D6Cu: goto label_7F186D6C;
    case 0x7F186D70u: goto label_7F186D70;
    case 0x7F186D74u: goto label_7F186D74;
    case 0x7F186D78u: goto label_7F186D78;
    case 0x7F186D7Cu: goto label_7F186D7C;
    case 0x7F186D80u: goto label_7F186D80;
    case 0x7F186D84u: goto label_7F186D84;
    case 0x7F186D88u: goto label_7F186D88;
    case 0x7F186D8Cu: goto label_7F186D8C;
    case 0x7F186D90u: goto label_7F186D90;
    case 0x7F186D94u: goto label_7F186D94;
    case 0x7F186D98u: goto label_7F186D98;
    case 0x7F186D9Cu: goto label_7F186D9C;
    case 0x7F186DA0u: goto label_7F186DA0;
    case 0x7F186DA4u: goto label_7F186DA4;
    case 0x7F186DA8u: goto label_7F186DA8;
    case 0x7F186DACu: goto label_7F186DAC;
    case 0x7F186DB0u: goto label_7F186DB0;
    case 0x7F186DB4u: goto label_7F186DB4;
    case 0x7F186DB8u: goto label_7F186DB8;
    case 0x7F186DBCu: goto label_7F186DBC;
    case 0x7F186DC0u: goto label_7F186DC0;
    case 0x7F186DC4u: goto label_7F186DC4;
    case 0x7F186DC8u: goto label_7F186DC8;
    case 0x7F186DCCu: goto label_7F186DCC;
    case 0x7F186DD0u: goto label_7F186DD0;
    case 0x7F186DD4u: goto label_7F186DD4;
    case 0x7F186DD8u: goto label_7F186DD8;
    case 0x7F186DDCu: goto label_7F186DDC;
    case 0x7F186DE0u: goto label_7F186DE0;
    case 0x7F186DE4u: goto label_7F186DE4;
    case 0x7F186DE8u: goto label_7F186DE8;
    case 0x7F186DECu: goto label_7F186DEC;
    case 0x7F186DF0u: goto label_7F186DF0;
    case 0x7F186DF4u: goto label_7F186DF4;
    case 0x7F186DF8u: goto label_7F186DF8;
    case 0x7F186DFCu: goto label_7F186DFC;
    case 0x7F186E00u: goto label_7F186E00;
    case 0x7F186E04u: goto label_7F186E04;
    case 0x7F186E08u: goto label_7F186E08;
    case 0x7F186E0Cu: goto label_7F186E0C;
    case 0x7F186E10u: goto label_7F186E10;
    case 0x7F186E14u: goto label_7F186E14;
    case 0x7F186E18u: goto label_7F186E18;
    case 0x7F186E1Cu: goto label_7F186E1C;
    case 0x7F186E20u: goto label_7F186E20;
    case 0x7F186E24u: goto label_7F186E24;
    case 0x7F186E28u: goto label_7F186E28;
    case 0x7F186E2Cu: goto label_7F186E2C;
    case 0x7F186E30u: goto label_7F186E30;
    case 0x7F186E34u: goto label_7F186E34;
    case 0x7F186E38u: goto label_7F186E38;
    case 0x7F186E3Cu: goto label_7F186E3C;
    case 0x7F186E40u: goto label_7F186E40;
    case 0x7F186E44u: goto label_7F186E44;
    case 0x7F186E48u: goto label_7F186E48;
    case 0x7F186E4Cu: goto label_7F186E4C;
    case 0x7F186E50u: goto label_7F186E50;
    case 0x7F186E54u: goto label_7F186E54;
    case 0x7F186E58u: goto label_7F186E58;
    case 0x7F186E5Cu: goto label_7F186E5C;
    case 0x7F186E60u: goto label_7F186E60;
    case 0x7F186E64u: goto label_7F186E64;
    case 0x7F186E68u: goto label_7F186E68;
    case 0x7F186E6Cu: goto label_7F186E6C;
    case 0x7F186E70u: goto label_7F186E70;
    case 0x7F186E74u: goto label_7F186E74;
    case 0x7F186E78u: goto label_7F186E78;
    case 0x7F186E7Cu: goto label_7F186E7C;
    case 0x7F186E80u: goto label_7F186E80;
    case 0x7F186E84u: goto label_7F186E84;
    case 0x7F186E88u: goto label_7F186E88;
    case 0x7F186E8Cu: goto label_7F186E8C;
    case 0x7F186E90u: goto label_7F186E90;
    case 0x7F186E94u: goto label_7F186E94;
    case 0x7F186E98u: goto label_7F186E98;
    case 0x7F186E9Cu: goto label_7F186E9C;
    case 0x7F186EA0u: goto label_7F186EA0;
    case 0x7F186EA4u: goto label_7F186EA4;
    case 0x7F186EA8u: goto label_7F186EA8;
    case 0x7F186EACu: goto label_7F186EAC;
    case 0x7F186EB0u: goto label_7F186EB0;
    case 0x7F186EB4u: goto label_7F186EB4;
    case 0x7F186EB8u: goto label_7F186EB8;
    case 0x7F186EBCu: goto label_7F186EBC;
    case 0x7F186EC0u: goto label_7F186EC0;
    case 0x7F186EC4u: goto label_7F186EC4;
    case 0x7F186EC8u: goto label_7F186EC8;
    case 0x7F186ECCu: goto label_7F186ECC;
    case 0x7F186ED0u: goto label_7F186ED0;
    case 0x7F186ED4u: goto label_7F186ED4;
    case 0x7F186ED8u: goto label_7F186ED8;
    case 0x7F186EDCu: goto label_7F186EDC;
    case 0x7F186EE0u: goto label_7F186EE0;
    case 0x7F186EE4u: goto label_7F186EE4;
    case 0x7F186EE8u: goto label_7F186EE8;
    case 0x7F186EECu: goto label_7F186EEC;
    case 0x7F186EF0u: goto label_7F186EF0;
    case 0x7F186EF4u: goto label_7F186EF4;
    case 0x7F186EF8u: goto label_7F186EF8;
    case 0x7F186EFCu: goto label_7F186EFC;
    case 0x7F186F00u: goto label_7F186F00;
    case 0x7F186F04u: goto label_7F186F04;
    case 0x7F186F08u: goto label_7F186F08;
    case 0x7F186F0Cu: goto label_7F186F0C;
    case 0x7F186F10u: goto label_7F186F10;
    case 0x7F186F14u: goto label_7F186F14;
    case 0x7F186F18u: goto label_7F186F18;
    case 0x7F186F1Cu: goto label_7F186F1C;
    case 0x7F186F20u: goto label_7F186F20;
    case 0x7F186F24u: goto label_7F186F24;
    case 0x7F186F28u: goto label_7F186F28;
    case 0x7F186F2Cu: goto label_7F186F2C;
    case 0x7F186F30u: goto label_7F186F30;
    case 0x7F186F34u: goto label_7F186F34;
    case 0x7F186F38u: goto label_7F186F38;
    case 0x7F186F3Cu: goto label_7F186F3C;
    case 0x7F186F40u: goto label_7F186F40;
    case 0x7F186F44u: goto label_7F186F44;
    case 0x7F186F48u: goto label_7F186F48;
    case 0x7F186F4Cu: goto label_7F186F4C;
    case 0x7F186F50u: goto label_7F186F50;
    case 0x7F186F54u: goto label_7F186F54;
    case 0x7F186F58u: goto label_7F186F58;
    case 0x7F186F5Cu: goto label_7F186F5C;
    case 0x7F186F60u: goto label_7F186F60;
    case 0x7F186F64u: goto label_7F186F64;
    case 0x7F186F68u: goto label_7F186F68;
    case 0x7F186F6Cu: goto label_7F186F6C;
    case 0x7F186F70u: goto label_7F186F70;
    case 0x7F186F74u: goto label_7F186F74;
    case 0x7F186F78u: goto label_7F186F78;
    case 0x7F186F7Cu: goto label_7F186F7C;
    case 0x7F186F80u: goto label_7F186F80;
    case 0x7F186F84u: goto label_7F186F84;
    case 0x7F186F88u: goto label_7F186F88;
    case 0x7F186F8Cu: goto label_7F186F8C;
    case 0x7F186F90u: goto label_7F186F90;
    case 0x7F186F94u: goto label_7F186F94;
    case 0x7F186F98u: goto label_7F186F98;
    case 0x7F186F9Cu: goto label_7F186F9C;
    case 0x7F186FA0u: goto label_7F186FA0;
    case 0x7F186FA4u: goto label_7F186FA4;
    case 0x7F186FA8u: goto label_7F186FA8;
    case 0x7F186FACu: goto label_7F186FAC;
    case 0x7F186FB0u: goto label_7F186FB0;
    case 0x7F186FB4u: goto label_7F186FB4;
    case 0x7F186FB8u: goto label_7F186FB8;
    case 0x7F186FBCu: goto label_7F186FBC;
    case 0x7F186FC0u: goto label_7F186FC0;
    case 0x7F186FC4u: goto label_7F186FC4;
    case 0x7F186FC8u: goto label_7F186FC8;
    case 0x7F186FCCu: goto label_7F186FCC;
    case 0x7F186FD0u: goto label_7F186FD0;
    case 0x7F186FD4u: goto label_7F186FD4;
    case 0x7F186FD8u: goto label_7F186FD8;
    case 0x7F186FDCu: goto label_7F186FDC;
    case 0x7F186FE0u: goto label_7F186FE0;
    case 0x7F186FE4u: goto label_7F186FE4;
    case 0x7F186FE8u: goto label_7F186FE8;
    case 0x7F186FECu: goto label_7F186FEC;
    case 0x7F186FF0u: goto label_7F186FF0;
    case 0x7F186FF4u: goto label_7F186FF4;
    case 0x7F186FF8u: goto label_7F186FF8;
    case 0x7F186FFCu: goto label_7F186FFC;
    case 0x7F187000u: goto label_7F187000;
    case 0x7F187004u: goto label_7F187004;
    case 0x7F187008u: goto label_7F187008;
    case 0x7F18700Cu: goto label_7F18700C;
    case 0x7F187010u: goto label_7F187010;
    case 0x7F187014u: goto label_7F187014;
    case 0x7F187018u: goto label_7F187018;
    case 0x7F18701Cu: goto label_7F18701C;
    case 0x7F187020u: goto label_7F187020;
    case 0x7F187024u: goto label_7F187024;
    case 0x7F187028u: goto label_7F187028;
    case 0x7F18702Cu: goto label_7F18702C;
    case 0x7F187030u: goto label_7F187030;
    case 0x7F187034u: goto label_7F187034;
    case 0x7F187038u: goto label_7F187038;
    case 0x7F18703Cu: goto label_7F18703C;
    case 0x7F187040u: goto label_7F187040;
    case 0x7F187044u: goto label_7F187044;
    case 0x7F187048u: goto label_7F187048;
    case 0x7F18704Cu: goto label_7F18704C;
    case 0x7F187050u: goto label_7F187050;
    case 0x7F187054u: goto label_7F187054;
    case 0x7F187058u: goto label_7F187058;
    case 0x7F18705Cu: goto label_7F18705C;
    case 0x7F187060u: goto label_7F187060;
    case 0x7F187064u: goto label_7F187064;
    case 0x7F187068u: goto label_7F187068;
    case 0x7F18706Cu: goto label_7F18706C;
    case 0x7F187070u: goto label_7F187070;
    case 0x7F187074u: goto label_7F187074;
    case 0x7F187078u: goto label_7F187078;
    case 0x7F18707Cu: goto label_7F18707C;
    case 0x7F187080u: goto label_7F187080;
    case 0x7F187084u: goto label_7F187084;
    case 0x7F187088u: goto label_7F187088;
    case 0x7F18708Cu: goto label_7F18708C;
    case 0x7F187090u: goto label_7F187090;
    case 0x7F187094u: goto label_7F187094;
    case 0x7F187098u: goto label_7F187098;
    case 0x7F18709Cu: goto label_7F18709C;
    case 0x7F1870A0u: goto label_7F1870A0;
    case 0x7F1870A4u: goto label_7F1870A4;
    case 0x7F1870A8u: goto label_7F1870A8;
    case 0x7F1870ACu: goto label_7F1870AC;
    case 0x7F1870B0u: goto label_7F1870B0;
    case 0x7F1870B4u: goto label_7F1870B4;
    case 0x7F1870B8u: goto label_7F1870B8;
    case 0x7F1870BCu: goto label_7F1870BC;
    case 0x7F1870C0u: goto label_7F1870C0;
    case 0x7F1870C4u: goto label_7F1870C4;
    case 0x7F1870C8u: goto label_7F1870C8;
    case 0x7F1870CCu: goto label_7F1870CC;
    case 0x7F1870D0u: goto label_7F1870D0;
    case 0x7F1870D4u: goto label_7F1870D4;
    case 0x7F1870D8u: goto label_7F1870D8;
    case 0x7F1870DCu: goto label_7F1870DC;
    case 0x7F1870E0u: goto label_7F1870E0;
    case 0x7F1870E4u: goto label_7F1870E4;
    case 0x7F1870E8u: goto label_7F1870E8;
    case 0x7F1870ECu: goto label_7F1870EC;
    case 0x7F1870F0u: goto label_7F1870F0;
    case 0x7F1870F4u: goto label_7F1870F4;
    case 0x7F1870F8u: goto label_7F1870F8;
    case 0x7F1870FCu: goto label_7F1870FC;
    case 0x7F187100u: goto label_7F187100;
    case 0x7F187104u: goto label_7F187104;
    case 0x7F187108u: goto label_7F187108;
    case 0x7F18710Cu: goto label_7F18710C;
    case 0x7F187110u: goto label_7F187110;
    case 0x7F187114u: goto label_7F187114;
    case 0x7F187118u: goto label_7F187118;
    case 0x7F18711Cu: goto label_7F18711C;
    case 0x7F187120u: goto label_7F187120;
    case 0x7F187124u: goto label_7F187124;
    case 0x7F187128u: goto label_7F187128;
    case 0x7F18712Cu: goto label_7F18712C;
    case 0x7F187130u: goto label_7F187130;
    case 0x7F187134u: goto label_7F187134;
    case 0x7F187138u: goto label_7F187138;
    case 0x7F18713Cu: goto label_7F18713C;
    case 0x7F187140u: goto label_7F187140;
    case 0x7F187144u: goto label_7F187144;
    case 0x7F187148u: goto label_7F187148;
    case 0x7F18714Cu: goto label_7F18714C;
    case 0x7F187150u: goto label_7F187150;
    case 0x7F187154u: goto label_7F187154;
    case 0x7F187158u: goto label_7F187158;
    case 0x7F18715Cu: goto label_7F18715C;
    case 0x7F187160u: goto label_7F187160;
    case 0x7F187164u: goto label_7F187164;
    case 0x7F187168u: goto label_7F187168;
    case 0x7F18716Cu: goto label_7F18716C;
    case 0x7F187170u: goto label_7F187170;
    case 0x7F187174u: goto label_7F187174;
    case 0x7F187178u: goto label_7F187178;
    case 0x7F18717Cu: goto label_7F18717C;
    case 0x7F187180u: goto label_7F187180;
    case 0x7F187184u: goto label_7F187184;
    case 0x7F187188u: goto label_7F187188;
    case 0x7F18718Cu: goto label_7F18718C;
    case 0x7F187190u: goto label_7F187190;
    case 0x7F187194u: goto label_7F187194;
    case 0x7F187198u: goto label_7F187198;
    case 0x7F18719Cu: goto label_7F18719C;
    case 0x7F1871A0u: goto label_7F1871A0;
    case 0x7F1871A4u: goto label_7F1871A4;
    case 0x7F1871A8u: goto label_7F1871A8;
    case 0x7F1871ACu: goto label_7F1871AC;
    case 0x7F1871B0u: goto label_7F1871B0;
    case 0x7F1871B4u: goto label_7F1871B4;
    case 0x7F1871B8u: goto label_7F1871B8;
    case 0x7F1871BCu: goto label_7F1871BC;
    case 0x7F1871C0u: goto label_7F1871C0;
    case 0x7F1871C4u: goto label_7F1871C4;
    case 0x7F1871C8u: goto label_7F1871C8;
    case 0x7F1871CCu: goto label_7F1871CC;
    case 0x7F1871D0u: goto label_7F1871D0;
    case 0x7F1871D4u: goto label_7F1871D4;
    case 0x7F1871D8u: goto label_7F1871D8;
    case 0x7F1871DCu: goto label_7F1871DC;
    case 0x7F1871E0u: goto label_7F1871E0;
    case 0x7F1871E4u: goto label_7F1871E4;
    case 0x7F1871E8u: goto label_7F1871E8;
    case 0x7F1871ECu: goto label_7F1871EC;
    case 0x7F1871F0u: goto label_7F1871F0;
    case 0x7F1871F4u: goto label_7F1871F4;
    case 0x7F1871F8u: goto label_7F1871F8;
    case 0x7F1871FCu: goto label_7F1871FC;
    case 0x7F187200u: goto label_7F187200;
    case 0x7F187204u: goto label_7F187204;
    case 0x7F187208u: goto label_7F187208;
    case 0x7F18720Cu: goto label_7F18720C;
    case 0x7F187210u: goto label_7F187210;
    case 0x7F187214u: goto label_7F187214;
    case 0x7F187218u: goto label_7F187218;
    case 0x7F18721Cu: goto label_7F18721C;
    case 0x7F187220u: goto label_7F187220;
    case 0x7F187224u: goto label_7F187224;
    case 0x7F187228u: goto label_7F187228;
    case 0x7F18722Cu: goto label_7F18722C;
    case 0x7F187230u: goto label_7F187230;
    case 0x7F187234u: goto label_7F187234;
    case 0x7F187238u: goto label_7F187238;
    case 0x7F18723Cu: goto label_7F18723C;
    case 0x7F187240u: goto label_7F187240;
    case 0x7F187244u: goto label_7F187244;
    case 0x7F187248u: goto label_7F187248;
    case 0x7F18724Cu: goto label_7F18724C;
    case 0x7F187250u: goto label_7F187250;
    case 0x7F187254u: goto label_7F187254;
    case 0x7F187258u: goto label_7F187258;
    case 0x7F18725Cu: goto label_7F18725C;
    case 0x7F187260u: goto label_7F187260;
    case 0x7F187264u: goto label_7F187264;
    case 0x7F187268u: goto label_7F187268;
    case 0x7F18726Cu: goto label_7F18726C;
    case 0x7F187270u: goto label_7F187270;
    case 0x7F187274u: goto label_7F187274;
    case 0x7F187278u: goto label_7F187278;
    case 0x7F18727Cu: goto label_7F18727C;
    case 0x7F187280u: goto label_7F187280;
    case 0x7F187284u: goto label_7F187284;
    case 0x7F187288u: goto label_7F187288;
    case 0x7F18728Cu: goto label_7F18728C;
    case 0x7F187290u: goto label_7F187290;
    case 0x7F187294u: goto label_7F187294;
    case 0x7F187298u: goto label_7F187298;
    case 0x7F18729Cu: goto label_7F18729C;
    case 0x7F1872A0u: goto label_7F1872A0;
    case 0x7F1872A4u: goto label_7F1872A4;
    case 0x7F1872A8u: goto label_7F1872A8;
    case 0x7F1872ACu: goto label_7F1872AC;
    case 0x7F1872B0u: goto label_7F1872B0;
    case 0x7F1872B4u: goto label_7F1872B4;
    case 0x7F1872B8u: goto label_7F1872B8;
    case 0x7F1872BCu: goto label_7F1872BC;
    case 0x7F1872C0u: goto label_7F1872C0;
    case 0x7F1872C4u: goto label_7F1872C4;
    case 0x7F1872C8u: goto label_7F1872C8;
    case 0x7F1872CCu: goto label_7F1872CC;
    case 0x7F1872D0u: goto label_7F1872D0;
    case 0x7F1872D4u: goto label_7F1872D4;
    case 0x7F1872D8u: goto label_7F1872D8;
    case 0x7F1872DCu: goto label_7F1872DC;
    case 0x7F1872E0u: goto label_7F1872E0;
    case 0x7F1872E4u: goto label_7F1872E4;
    case 0x7F1872E8u: goto label_7F1872E8;
    case 0x7F1872ECu: goto label_7F1872EC;
    case 0x7F1872F0u: goto label_7F1872F0;
    case 0x7F1872F4u: goto label_7F1872F4;
    case 0x7F1872F8u: goto label_7F1872F8;
    case 0x7F1872FCu: goto label_7F1872FC;
    case 0x7F187300u: goto label_7F187300;
    case 0x7F187304u: goto label_7F187304;
    case 0x7F187308u: goto label_7F187308;
    case 0x7F18730Cu: goto label_7F18730C;
    case 0x7F187310u: goto label_7F187310;
    case 0x7F187314u: goto label_7F187314;
    case 0x7F187318u: goto label_7F187318;
    case 0x7F18731Cu: goto label_7F18731C;
    case 0x7F187320u: goto label_7F187320;
    case 0x7F187324u: goto label_7F187324;
    case 0x7F187328u: goto label_7F187328;
    case 0x7F18732Cu: goto label_7F18732C;
    case 0x7F187330u: goto label_7F187330;
    case 0x7F187334u: goto label_7F187334;
    case 0x7F187338u: goto label_7F187338;
    case 0x7F18733Cu: goto label_7F18733C;
    case 0x7F187340u: goto label_7F187340;
    case 0x7F187344u: goto label_7F187344;
    case 0x7F187348u: goto label_7F187348;
    case 0x7F18734Cu: goto label_7F18734C;
    case 0x7F187350u: goto label_7F187350;
    case 0x7F187354u: goto label_7F187354;
    case 0x7F187358u: goto label_7F187358;
    case 0x7F18735Cu: goto label_7F18735C;
    case 0x7F187360u: goto label_7F187360;
    case 0x7F187364u: goto label_7F187364;
    case 0x7F187368u: goto label_7F187368;
    case 0x7F18736Cu: goto label_7F18736C;
    case 0x7F187370u: goto label_7F187370;
    case 0x7F187374u: goto label_7F187374;
    case 0x7F187378u: goto label_7F187378;
    case 0x7F18737Cu: goto label_7F18737C;
    case 0x7F187380u: goto label_7F187380;
    case 0x7F187384u: goto label_7F187384;
    case 0x7F187388u: goto label_7F187388;
    case 0x7F18738Cu: goto label_7F18738C;
    case 0x7F187390u: goto label_7F187390;
    case 0x7F187394u: goto label_7F187394;
    case 0x7F187398u: goto label_7F187398;
    case 0x7F18739Cu: goto label_7F18739C;
    case 0x7F1873A0u: goto label_7F1873A0;
    case 0x7F1873A4u: goto label_7F1873A4;
    case 0x7F1873A8u: goto label_7F1873A8;
    case 0x7F1873ACu: goto label_7F1873AC;
    case 0x7F1873B0u: goto label_7F1873B0;
    case 0x7F1873B4u: goto label_7F1873B4;
    case 0x7F1873B8u: goto label_7F1873B8;
    case 0x7F1873BCu: goto label_7F1873BC;
    case 0x7F1873C0u: goto label_7F1873C0;
    case 0x7F1873C4u: goto label_7F1873C4;
    case 0x7F1873C8u: goto label_7F1873C8;
    case 0x7F1873CCu: goto label_7F1873CC;
    case 0x7F1873D0u: goto label_7F1873D0;
    case 0x7F1873D4u: goto label_7F1873D4;
    case 0x7F1873D8u: goto label_7F1873D8;
    case 0x7F1873DCu: goto label_7F1873DC;
    case 0x7F1873E0u: goto label_7F1873E0;
    case 0x7F1873E4u: goto label_7F1873E4;
    case 0x7F1873E8u: goto label_7F1873E8;
    case 0x7F1873ECu: goto label_7F1873EC;
    case 0x7F1873F0u: goto label_7F1873F0;
    case 0x7F1873F4u: goto label_7F1873F4;
    case 0x7F1873F8u: goto label_7F1873F8;
    case 0x7F1873FCu: goto label_7F1873FC;
    case 0x7F187400u: goto label_7F187400;
    case 0x7F187404u: goto label_7F187404;
    case 0x7F187408u: goto label_7F187408;
    case 0x7F18740Cu: goto label_7F18740C;
    case 0x7F187410u: goto label_7F187410;
    case 0x7F187414u: goto label_7F187414;
    case 0x7F187418u: goto label_7F187418;
    case 0x7F18741Cu: goto label_7F18741C;
    case 0x7F187420u: goto label_7F187420;
    case 0x7F187424u: goto label_7F187424;
    case 0x7F187428u: goto label_7F187428;
    case 0x7F18742Cu: goto label_7F18742C;
    case 0x7F187430u: goto label_7F187430;
    case 0x7F187434u: goto label_7F187434;
    case 0x7F187438u: goto label_7F187438;
    case 0x7F18743Cu: goto label_7F18743C;
    case 0x7F187440u: goto label_7F187440;
    case 0x7F187444u: goto label_7F187444;
    case 0x7F187448u: goto label_7F187448;
    case 0x7F18744Cu: goto label_7F18744C;
    case 0x7F187450u: goto label_7F187450;
    case 0x7F187454u: goto label_7F187454;
    case 0x7F187458u: goto label_7F187458;
    case 0x7F18745Cu: goto label_7F18745C;
    case 0x7F187460u: goto label_7F187460;
    case 0x7F187464u: goto label_7F187464;
    case 0x7F187468u: goto label_7F187468;
    case 0x7F18746Cu: goto label_7F18746C;
    case 0x7F187470u: goto label_7F187470;
    case 0x7F187474u: goto label_7F187474;
    case 0x7F187478u: goto label_7F187478;
    case 0x7F18747Cu: goto label_7F18747C;
    case 0x7F187480u: goto label_7F187480;
    case 0x7F187484u: goto label_7F187484;
    case 0x7F187488u: goto label_7F187488;
    case 0x7F18748Cu: goto label_7F18748C;
    case 0x7F187490u: goto label_7F187490;
    case 0x7F187494u: goto label_7F187494;
    case 0x7F187498u: goto label_7F187498;
    case 0x7F18749Cu: goto label_7F18749C;
    case 0x7F1874A0u: goto label_7F1874A0;
    case 0x7F1874A4u: goto label_7F1874A4;
    case 0x7F1874A8u: goto label_7F1874A8;
    case 0x7F1874ACu: goto label_7F1874AC;
    case 0x7F1874B0u: goto label_7F1874B0;
    case 0x7F1874B4u: goto label_7F1874B4;
    case 0x7F1874B8u: goto label_7F1874B8;
    case 0x7F1874BCu: goto label_7F1874BC;
    case 0x7F1874C0u: goto label_7F1874C0;
    case 0x7F1874C4u: goto label_7F1874C4;
    case 0x7F1874C8u: goto label_7F1874C8;
    case 0x7F1874CCu: goto label_7F1874CC;
    case 0x7F1874D0u: goto label_7F1874D0;
    case 0x7F1874D4u: goto label_7F1874D4;
    case 0x7F1874D8u: goto label_7F1874D8;
    case 0x7F1874DCu: goto label_7F1874DC;
    case 0x7F1874E0u: goto label_7F1874E0;
    case 0x7F1874E4u: goto label_7F1874E4;
    case 0x7F1874E8u: goto label_7F1874E8;
    case 0x7F1874ECu: goto label_7F1874EC;
    case 0x7F1874F0u: goto label_7F1874F0;
    case 0x7F1874F4u: goto label_7F1874F4;
    case 0x7F1874F8u: goto label_7F1874F8;
    case 0x7F1874FCu: goto label_7F1874FC;
    case 0x7F187500u: goto label_7F187500;
    case 0x7F187504u: goto label_7F187504;
    case 0x7F187508u: goto label_7F187508;
    case 0x7F18750Cu: goto label_7F18750C;
    case 0x7F187510u: goto label_7F187510;
    case 0x7F187514u: goto label_7F187514;
    case 0x7F187518u: goto label_7F187518;
    case 0x7F18751Cu: goto label_7F18751C;
    case 0x7F187520u: goto label_7F187520;
    case 0x7F187524u: goto label_7F187524;
    case 0x7F187528u: goto label_7F187528;
    case 0x7F18752Cu: goto label_7F18752C;
    case 0x7F187530u: goto label_7F187530;
    case 0x7F187534u: goto label_7F187534;
    case 0x7F187538u: goto label_7F187538;
    case 0x7F18753Cu: goto label_7F18753C;
    case 0x7F187540u: goto label_7F187540;
    case 0x7F187544u: goto label_7F187544;
    case 0x7F187548u: goto label_7F187548;
    case 0x7F18754Cu: goto label_7F18754C;
    case 0x7F187550u: goto label_7F187550;
    case 0x7F187554u: goto label_7F187554;
    case 0x7F187558u: goto label_7F187558;
    case 0x7F18755Cu: goto label_7F18755C;
    case 0x7F187560u: goto label_7F187560;
    case 0x7F187564u: goto label_7F187564;
    case 0x7F187568u: goto label_7F187568;
    case 0x7F18756Cu: goto label_7F18756C;
    case 0x7F187570u: goto label_7F187570;
    case 0x7F187574u: goto label_7F187574;
    case 0x7F187578u: goto label_7F187578;
    case 0x7F18757Cu: goto label_7F18757C;
    case 0x7F187580u: goto label_7F187580;
    case 0x7F187584u: goto label_7F187584;
    case 0x7F187588u: goto label_7F187588;
    case 0x7F18758Cu: goto label_7F18758C;
    case 0x7F187590u: goto label_7F187590;
    case 0x7F187594u: goto label_7F187594;
    case 0x7F187598u: goto label_7F187598;
    case 0x7F18759Cu: goto label_7F18759C;
    case 0x7F1875A0u: goto label_7F1875A0;
    case 0x7F1875A4u: goto label_7F1875A4;
    case 0x7F1875A8u: goto label_7F1875A8;
    case 0x7F1875ACu: goto label_7F1875AC;
    case 0x7F1875B0u: goto label_7F1875B0;
    case 0x7F1875B4u: goto label_7F1875B4;
    case 0x7F1875B8u: goto label_7F1875B8;
    case 0x7F1875BCu: goto label_7F1875BC;
    case 0x7F1875C0u: goto label_7F1875C0;
    case 0x7F1875C4u: goto label_7F1875C4;
    case 0x7F1875C8u: goto label_7F1875C8;
    case 0x7F1875CCu: goto label_7F1875CC;
    case 0x7F1875D0u: goto label_7F1875D0;
    case 0x7F1875D4u: goto label_7F1875D4;
    case 0x7F1875D8u: goto label_7F1875D8;
    case 0x7F1875DCu: goto label_7F1875DC;
    case 0x7F1875E0u: goto label_7F1875E0;
    case 0x7F1875E4u: goto label_7F1875E4;
    case 0x7F1875E8u: goto label_7F1875E8;
    case 0x7F1875ECu: goto label_7F1875EC;
    case 0x7F1875F0u: goto label_7F1875F0;
    case 0x7F1875F4u: goto label_7F1875F4;
    case 0x7F1875F8u: goto label_7F1875F8;
    case 0x7F1875FCu: goto label_7F1875FC;
    case 0x7F187600u: goto label_7F187600;
    case 0x7F187604u: goto label_7F187604;
    case 0x7F187608u: goto label_7F187608;
    case 0x7F18760Cu: goto label_7F18760C;
    case 0x7F187610u: goto label_7F187610;
    case 0x7F187614u: goto label_7F187614;
    case 0x7F187618u: goto label_7F187618;
    case 0x7F18761Cu: goto label_7F18761C;
    case 0x7F187620u: goto label_7F187620;
    case 0x7F187624u: goto label_7F187624;
    case 0x7F187628u: goto label_7F187628;
    case 0x7F18762Cu: goto label_7F18762C;
    case 0x7F187630u: goto label_7F187630;
    case 0x7F187634u: goto label_7F187634;
    case 0x7F187638u: goto label_7F187638;
    case 0x7F18763Cu: goto label_7F18763C;
    case 0x7F187640u: goto label_7F187640;
    case 0x7F187644u: goto label_7F187644;
    case 0x7F187648u: goto label_7F187648;
    case 0x7F18764Cu: goto label_7F18764C;
    case 0x7F187650u: goto label_7F187650;
    case 0x7F187654u: goto label_7F187654;
    case 0x7F187658u: goto label_7F187658;
    case 0x7F18765Cu: goto label_7F18765C;
    case 0x7F187660u: goto label_7F187660;
    case 0x7F187664u: goto label_7F187664;
    case 0x7F187668u: goto label_7F187668;
    case 0x7F18766Cu: goto label_7F18766C;
    case 0x7F187670u: goto label_7F187670;
    case 0x7F187674u: goto label_7F187674;
    case 0x7F187678u: goto label_7F187678;
    case 0x7F18767Cu: goto label_7F18767C;
    case 0x7F187680u: goto label_7F187680;
    case 0x7F187684u: goto label_7F187684;
    case 0x7F187688u: goto label_7F187688;
    case 0x7F18768Cu: goto label_7F18768C;
    case 0x7F187690u: goto label_7F187690;
    case 0x7F187694u: goto label_7F187694;
    case 0x7F187698u: goto label_7F187698;
    case 0x7F18769Cu: goto label_7F18769C;
    case 0x7F1876A0u: goto label_7F1876A0;
    case 0x7F1876A4u: goto label_7F1876A4;
    case 0x7F1876A8u: goto label_7F1876A8;
    case 0x7F1876ACu: goto label_7F1876AC;
    case 0x7F1876B0u: goto label_7F1876B0;
    case 0x7F1876B4u: goto label_7F1876B4;
    case 0x7F1876B8u: goto label_7F1876B8;
    case 0x7F1876BCu: goto label_7F1876BC;
    case 0x7F1876C0u: goto label_7F1876C0;
    case 0x7F1876C4u: goto label_7F1876C4;
    case 0x7F1876C8u: goto label_7F1876C8;
    case 0x7F1876CCu: goto label_7F1876CC;
    case 0x7F1876D0u: goto label_7F1876D0;
    case 0x7F1876D4u: goto label_7F1876D4;
    case 0x7F1876D8u: goto label_7F1876D8;
    case 0x7F1876DCu: goto label_7F1876DC;
    case 0x7F1876E0u: goto label_7F1876E0;
    case 0x7F1876E4u: goto label_7F1876E4;
    case 0x7F1876E8u: goto label_7F1876E8;
    case 0x7F1876ECu: goto label_7F1876EC;
    case 0x7F1876F0u: goto label_7F1876F0;
    case 0x7F1876F4u: goto label_7F1876F4;
    case 0x7F1876F8u: goto label_7F1876F8;
    case 0x7F1876FCu: goto label_7F1876FC;
    case 0x7F187700u: goto label_7F187700;
    case 0x7F187704u: goto label_7F187704;
    case 0x7F187708u: goto label_7F187708;
    case 0x7F18770Cu: goto label_7F18770C;
    case 0x7F187710u: goto label_7F187710;
    case 0x7F187714u: goto label_7F187714;
    case 0x7F187718u: goto label_7F187718;
    case 0x7F18771Cu: goto label_7F18771C;
    case 0x7F187720u: goto label_7F187720;
    case 0x7F187724u: goto label_7F187724;
    case 0x7F187728u: goto label_7F187728;
    case 0x7F18772Cu: goto label_7F18772C;
    case 0x7F187730u: goto label_7F187730;
    case 0x7F187734u: goto label_7F187734;
    case 0x7F187738u: goto label_7F187738;
    case 0x7F18773Cu: goto label_7F18773C;
    case 0x7F187740u: goto label_7F187740;
    case 0x7F187744u: goto label_7F187744;
    case 0x7F187748u: goto label_7F187748;
    case 0x7F18774Cu: goto label_7F18774C;
    case 0x7F187750u: goto label_7F187750;
    case 0x7F187754u: goto label_7F187754;
    case 0x7F187758u: goto label_7F187758;
    case 0x7F18775Cu: goto label_7F18775C;
    case 0x7F187760u: goto label_7F187760;
    case 0x7F187764u: goto label_7F187764;
    case 0x7F187768u: goto label_7F187768;
    case 0x7F18776Cu: goto label_7F18776C;
    case 0x7F187770u: goto label_7F187770;
    case 0x7F187774u: goto label_7F187774;
    case 0x7F187778u: goto label_7F187778;
    case 0x7F18777Cu: goto label_7F18777C;
    case 0x7F187780u: goto label_7F187780;
    case 0x7F187784u: goto label_7F187784;
    case 0x7F187788u: goto label_7F187788;
    case 0x7F18778Cu: goto label_7F18778C;
    case 0x7F187790u: goto label_7F187790;
    case 0x7F187794u: goto label_7F187794;
    case 0x7F187798u: goto label_7F187798;
    case 0x7F18779Cu: goto label_7F18779C;
    case 0x7F1877A0u: goto label_7F1877A0;
    case 0x7F1877A4u: goto label_7F1877A4;
    case 0x7F1877A8u: goto label_7F1877A8;
    case 0x7F1877ACu: goto label_7F1877AC;
    case 0x7F1877B0u: goto label_7F1877B0;
    case 0x7F1877B4u: goto label_7F1877B4;
    case 0x7F1877B8u: goto label_7F1877B8;
    case 0x7F1877BCu: goto label_7F1877BC;
    case 0x7F1877C0u: goto label_7F1877C0;
    case 0x7F1877C4u: goto label_7F1877C4;
    case 0x7F1877C8u: goto label_7F1877C8;
    case 0x7F1877CCu: goto label_7F1877CC;
    case 0x7F1877D0u: goto label_7F1877D0;
    case 0x7F1877D4u: goto label_7F1877D4;
    case 0x7F1877D8u: goto label_7F1877D8;
    case 0x7F1877DCu: goto label_7F1877DC;
    case 0x7F1877E0u: goto label_7F1877E0;
    case 0x7F1877E4u: goto label_7F1877E4;
    case 0x7F1877E8u: goto label_7F1877E8;
    case 0x7F1877ECu: goto label_7F1877EC;
    case 0x7F1877F0u: goto label_7F1877F0;
    case 0x7F1877F4u: goto label_7F1877F4;
    case 0x7F1877F8u: goto label_7F1877F8;
    case 0x7F1877FCu: goto label_7F1877FC;
    case 0x7F187800u: goto label_7F187800;
    case 0x7F187804u: goto label_7F187804;
    case 0x7F187808u: goto label_7F187808;
    case 0x7F18780Cu: goto label_7F18780C;
    case 0x7F187810u: goto label_7F187810;
    case 0x7F187814u: goto label_7F187814;
    case 0x7F187818u: goto label_7F187818;
    case 0x7F18781Cu: goto label_7F18781C;
    case 0x7F187820u: goto label_7F187820;
    case 0x7F187824u: goto label_7F187824;
    case 0x7F187828u: goto label_7F187828;
    case 0x7F18782Cu: goto label_7F18782C;
    case 0x7F187830u: goto label_7F187830;
    case 0x7F187834u: goto label_7F187834;
    case 0x7F187838u: goto label_7F187838;
    case 0x7F18783Cu: goto label_7F18783C;
    case 0x7F187840u: goto label_7F187840;
    case 0x7F187844u: goto label_7F187844;
    case 0x7F187848u: goto label_7F187848;
    case 0x7F18784Cu: goto label_7F18784C;
    case 0x7F187850u: goto label_7F187850;
    case 0x7F187854u: goto label_7F187854;
    case 0x7F187858u: goto label_7F187858;
    case 0x7F18785Cu: goto label_7F18785C;
    case 0x7F187860u: goto label_7F187860;
    case 0x7F187864u: goto label_7F187864;
    case 0x7F187868u: goto label_7F187868;
    case 0x7F18786Cu: goto label_7F18786C;
    case 0x7F187870u: goto label_7F187870;
    case 0x7F187874u: goto label_7F187874;
    case 0x7F187878u: goto label_7F187878;
    case 0x7F18787Cu: goto label_7F18787C;
    case 0x7F187880u: goto label_7F187880;
    case 0x7F187884u: goto label_7F187884;
    case 0x7F187888u: goto label_7F187888;
    case 0x7F18788Cu: goto label_7F18788C;
    case 0x7F187890u: goto label_7F187890;
    case 0x7F187894u: goto label_7F187894;
    case 0x7F187898u: goto label_7F187898;
    case 0x7F18789Cu: goto label_7F18789C;
    case 0x7F1878A0u: goto label_7F1878A0;
    case 0x7F1878A4u: goto label_7F1878A4;
    case 0x7F1878A8u: goto label_7F1878A8;
    case 0x7F1878ACu: goto label_7F1878AC;
    case 0x7F1878B0u: goto label_7F1878B0;
    case 0x7F1878B4u: goto label_7F1878B4;
    case 0x7F1878B8u: goto label_7F1878B8;
    case 0x7F1878BCu: goto label_7F1878BC;
    case 0x7F1878C0u: goto label_7F1878C0;
    case 0x7F1878C4u: goto label_7F1878C4;
    case 0x7F1878C8u: goto label_7F1878C8;
    case 0x7F1878CCu: goto label_7F1878CC;
    case 0x7F1878D0u: goto label_7F1878D0;
    case 0x7F1878D4u: goto label_7F1878D4;
    case 0x7F1878D8u: goto label_7F1878D8;
    case 0x7F1878DCu: goto label_7F1878DC;
    case 0x7F1878E0u: goto label_7F1878E0;
    case 0x7F1878E4u: goto label_7F1878E4;
    case 0x7F1878E8u: goto label_7F1878E8;
    case 0x7F1878ECu: goto label_7F1878EC;
    case 0x7F1878F0u: goto label_7F1878F0;
    case 0x7F1878F4u: goto label_7F1878F4;
    case 0x7F1878F8u: goto label_7F1878F8;
    case 0x7F1878FCu: goto label_7F1878FC;
    case 0x7F187900u: goto label_7F187900;
    case 0x7F187904u: goto label_7F187904;
    case 0x7F187908u: goto label_7F187908;
    case 0x7F18790Cu: goto label_7F18790C;
    case 0x7F187910u: goto label_7F187910;
    case 0x7F187914u: goto label_7F187914;
    case 0x7F187918u: goto label_7F187918;
    case 0x7F18791Cu: goto label_7F18791C;
    case 0x7F187920u: goto label_7F187920;
    case 0x7F187924u: goto label_7F187924;
    case 0x7F187928u: goto label_7F187928;
    case 0x7F18792Cu: goto label_7F18792C;
    case 0x7F187930u: goto label_7F187930;
    case 0x7F187934u: goto label_7F187934;
    case 0x7F187938u: goto label_7F187938;
    case 0x7F18793Cu: goto label_7F18793C;
    case 0x7F187940u: goto label_7F187940;
    case 0x7F187944u: goto label_7F187944;
    case 0x7F187948u: goto label_7F187948;
    case 0x7F18794Cu: goto label_7F18794C;
    case 0x7F187950u: goto label_7F187950;
    case 0x7F187954u: goto label_7F187954;
    case 0x7F187958u: goto label_7F187958;
    case 0x7F18795Cu: goto label_7F18795C;
    case 0x7F187960u: goto label_7F187960;
    case 0x7F187964u: goto label_7F187964;
    case 0x7F187968u: goto label_7F187968;
    case 0x7F18796Cu: goto label_7F18796C;
    case 0x7F187970u: goto label_7F187970;
    case 0x7F187974u: goto label_7F187974;
    case 0x7F187978u: goto label_7F187978;
    case 0x7F18797Cu: goto label_7F18797C;
    case 0x7F187980u: goto label_7F187980;
    case 0x7F187984u: goto label_7F187984;
    case 0x7F187988u: goto label_7F187988;
    case 0x7F18798Cu: goto label_7F18798C;
    case 0x7F187990u: goto label_7F187990;
    case 0x7F187994u: goto label_7F187994;
    case 0x7F187998u: goto label_7F187998;
    case 0x7F18799Cu: goto label_7F18799C;
    case 0x7F1879A0u: goto label_7F1879A0;
    case 0x7F1879A4u: goto label_7F1879A4;
    case 0x7F1879A8u: goto label_7F1879A8;
    case 0x7F1879ACu: goto label_7F1879AC;
    case 0x7F1879B0u: goto label_7F1879B0;
    case 0x7F1879B4u: goto label_7F1879B4;
    case 0x7F1879B8u: goto label_7F1879B8;
    case 0x7F1879BCu: goto label_7F1879BC;
    case 0x7F1879C0u: goto label_7F1879C0;
    case 0x7F1879C4u: goto label_7F1879C4;
    case 0x7F1879C8u: goto label_7F1879C8;
    case 0x7F1879CCu: goto label_7F1879CC;
    case 0x7F1879D0u: goto label_7F1879D0;
    case 0x7F1879D4u: goto label_7F1879D4;
    case 0x7F1879D8u: goto label_7F1879D8;
    case 0x7F1879DCu: goto label_7F1879DC;
    case 0x7F1879E0u: goto label_7F1879E0;
    case 0x7F1879E4u: goto label_7F1879E4;
    case 0x7F1879E8u: goto label_7F1879E8;
    case 0x7F1879ECu: goto label_7F1879EC;
    case 0x7F1879F0u: goto label_7F1879F0;
    case 0x7F1879F4u: goto label_7F1879F4;
    case 0x7F1879F8u: goto label_7F1879F8;
    case 0x7F1879FCu: goto label_7F1879FC;
    case 0x7F187A00u: goto label_7F187A00;
    case 0x7F187A04u: goto label_7F187A04;
    case 0x7F187A08u: goto label_7F187A08;
    case 0x7F187A0Cu: goto label_7F187A0C;
    case 0x7F187A10u: goto label_7F187A10;
    case 0x7F187A14u: goto label_7F187A14;
    case 0x7F187A18u: goto label_7F187A18;
    case 0x7F187A1Cu: goto label_7F187A1C;
    case 0x7F187A20u: goto label_7F187A20;
    case 0x7F187A24u: goto label_7F187A24;
    case 0x7F187A28u: goto label_7F187A28;
    case 0x7F187A2Cu: goto label_7F187A2C;
    case 0x7F187A30u: goto label_7F187A30;
    case 0x7F187A34u: goto label_7F187A34;
    case 0x7F187A38u: goto label_7F187A38;
    case 0x7F187A3Cu: goto label_7F187A3C;
    case 0x7F187A40u: goto label_7F187A40;
    case 0x7F187A44u: goto label_7F187A44;
    case 0x7F187A48u: goto label_7F187A48;
    case 0x7F187A4Cu: goto label_7F187A4C;
    case 0x7F187A50u: goto label_7F187A50;
    case 0x7F187A54u: goto label_7F187A54;
    case 0x7F187A58u: goto label_7F187A58;
    case 0x7F187A5Cu: goto label_7F187A5C;
    case 0x7F187A60u: goto label_7F187A60;
    case 0x7F187A64u: goto label_7F187A64;
    case 0x7F187A68u: goto label_7F187A68;
    case 0x7F187A6Cu: goto label_7F187A6C;
    case 0x7F187A70u: goto label_7F187A70;
    case 0x7F187A74u: goto label_7F187A74;
    case 0x7F187A78u: goto label_7F187A78;
    case 0x7F187A7Cu: goto label_7F187A7C;
    case 0x7F187A80u: goto label_7F187A80;
    case 0x7F187A84u: goto label_7F187A84;
    case 0x7F187A88u: goto label_7F187A88;
    case 0x7F187A8Cu: goto label_7F187A8C;
    case 0x7F187A90u: goto label_7F187A90;
    case 0x7F187A94u: goto label_7F187A94;
    case 0x7F187A98u: goto label_7F187A98;
    case 0x7F187A9Cu: goto label_7F187A9C;
    case 0x7F187AA0u: goto label_7F187AA0;
    case 0x7F187AA4u: goto label_7F187AA4;
    case 0x7F187AA8u: goto label_7F187AA8;
    case 0x7F187AACu: goto label_7F187AAC;
    case 0x7F187AB0u: goto label_7F187AB0;
    case 0x7F187AB4u: goto label_7F187AB4;
    case 0x7F187AB8u: goto label_7F187AB8;
    case 0x7F187ABCu: goto label_7F187ABC;
    case 0x7F187AC0u: goto label_7F187AC0;
    case 0x7F187AC4u: goto label_7F187AC4;
    case 0x7F187AC8u: goto label_7F187AC8;
    case 0x7F187ACCu: goto label_7F187ACC;
    case 0x7F187AD0u: goto label_7F187AD0;
    case 0x7F187AD4u: goto label_7F187AD4;
    case 0x7F187AD8u: goto label_7F187AD8;
    case 0x7F187ADCu: goto label_7F187ADC;
    case 0x7F187AE0u: goto label_7F187AE0;
    case 0x7F187AE4u: goto label_7F187AE4;
    case 0x7F187AE8u: goto label_7F187AE8;
    case 0x7F187AECu: goto label_7F187AEC;
    case 0x7F187AF0u: goto label_7F187AF0;
    case 0x7F187AF4u: goto label_7F187AF4;
    case 0x7F187AF8u: goto label_7F187AF8;
    case 0x7F187AFCu: goto label_7F187AFC;
    case 0x7F187B00u: goto label_7F187B00;
    case 0x7F187B04u: goto label_7F187B04;
    case 0x7F187B08u: goto label_7F187B08;
    case 0x7F187B0Cu: goto label_7F187B0C;
    case 0x7F187B10u: goto label_7F187B10;
    case 0x7F187B14u: goto label_7F187B14;
    case 0x7F187B18u: goto label_7F187B18;
    case 0x7F187B1Cu: goto label_7F187B1C;
    case 0x7F187B20u: goto label_7F187B20;
    case 0x7F187B24u: goto label_7F187B24;
    case 0x7F187B28u: goto label_7F187B28;
    case 0x7F187B2Cu: goto label_7F187B2C;
    case 0x7F187B30u: goto label_7F187B30;
    case 0x7F187B34u: goto label_7F187B34;
    case 0x7F187B38u: goto label_7F187B38;
    case 0x7F187B3Cu: goto label_7F187B3C;
    case 0x7F187B40u: goto label_7F187B40;
    case 0x7F187B44u: goto label_7F187B44;
    case 0x7F187B48u: goto label_7F187B48;
    case 0x7F187B4Cu: goto label_7F187B4C;
    case 0x7F187B50u: goto label_7F187B50;
    case 0x7F187B54u: goto label_7F187B54;
    case 0x7F187B58u: goto label_7F187B58;
    case 0x7F187B5Cu: goto label_7F187B5C;
    case 0x7F187B60u: goto label_7F187B60;
    case 0x7F187B64u: goto label_7F187B64;
    case 0x7F187B68u: goto label_7F187B68;
    case 0x7F187B6Cu: goto label_7F187B6C;
    case 0x7F187B70u: goto label_7F187B70;
    case 0x7F187B74u: goto label_7F187B74;
    case 0x7F187B78u: goto label_7F187B78;
    case 0x7F187B7Cu: goto label_7F187B7C;
    case 0x7F187B80u: goto label_7F187B80;
    case 0x7F187B84u: goto label_7F187B84;
    case 0x7F187B88u: goto label_7F187B88;
    case 0x7F187B8Cu: goto label_7F187B8C;
    case 0x7F187B90u: goto label_7F187B90;
    case 0x7F187B94u: goto label_7F187B94;
    case 0x7F187B98u: goto label_7F187B98;
    case 0x7F187B9Cu: goto label_7F187B9C;
    case 0x7F187BA0u: goto label_7F187BA0;
    case 0x7F187BA4u: goto label_7F187BA4;
    case 0x7F187BA8u: goto label_7F187BA8;
    case 0x7F187BACu: goto label_7F187BAC;
    case 0x7F187BB0u: goto label_7F187BB0;
    case 0x7F187BB4u: goto label_7F187BB4;
    case 0x7F187BB8u: goto label_7F187BB8;
    case 0x7F187BBCu: goto label_7F187BBC;
    case 0x7F187BC0u: goto label_7F187BC0;
    case 0x7F187BC4u: goto label_7F187BC4;
    case 0x7F187BC8u: goto label_7F187BC8;
    case 0x7F187BCCu: goto label_7F187BCC;
    case 0x7F187BD0u: goto label_7F187BD0;
    case 0x7F187BD4u: goto label_7F187BD4;
    case 0x7F187BD8u: goto label_7F187BD8;
    case 0x7F187BDCu: goto label_7F187BDC;
    case 0x7F187BE0u: goto label_7F187BE0;
    case 0x7F187BE4u: goto label_7F187BE4;
    case 0x7F187BE8u: goto label_7F187BE8;
    case 0x7F187BECu: goto label_7F187BEC;
    case 0x7F187BF0u: goto label_7F187BF0;
    case 0x7F187BF4u: goto label_7F187BF4;
    case 0x7F187BF8u: goto label_7F187BF8;
    case 0x7F187BFCu: goto label_7F187BFC;
    case 0x7F187C00u: goto label_7F187C00;
    case 0x7F187C04u: goto label_7F187C04;
    case 0x7F187C08u: goto label_7F187C08;
    case 0x7F187C0Cu: goto label_7F187C0C;
    case 0x7F187C10u: goto label_7F187C10;
    case 0x7F187C14u: goto label_7F187C14;
    case 0x7F187C18u: goto label_7F187C18;
    case 0x7F187C1Cu: goto label_7F187C1C;
    case 0x7F187C20u: goto label_7F187C20;
    case 0x7F187C24u: goto label_7F187C24;
    case 0x7F187C28u: goto label_7F187C28;
    case 0x7F187C2Cu: goto label_7F187C2C;
    case 0x7F187C30u: goto label_7F187C30;
    case 0x7F187C34u: goto label_7F187C34;
    case 0x7F187C38u: goto label_7F187C38;
    case 0x7F187C3Cu: goto label_7F187C3C;
    case 0x7F187C40u: goto label_7F187C40;
    case 0x7F187C44u: goto label_7F187C44;
    case 0x7F187C48u: goto label_7F187C48;
    case 0x7F187C4Cu: goto label_7F187C4C;
    case 0x7F187C50u: goto label_7F187C50;
    case 0x7F187C54u: goto label_7F187C54;
    case 0x7F187C58u: goto label_7F187C58;
    case 0x7F187C5Cu: goto label_7F187C5C;
    case 0x7F187C60u: goto label_7F187C60;
    case 0x7F187C64u: goto label_7F187C64;
    case 0x7F187C68u: goto label_7F187C68;
    case 0x7F187C6Cu: goto label_7F187C6C;
    case 0x7F187C70u: goto label_7F187C70;
    case 0x7F187C74u: goto label_7F187C74;
    case 0x7F187C78u: goto label_7F187C78;
    case 0x7F187C7Cu: goto label_7F187C7C;
    case 0x7F187C80u: goto label_7F187C80;
    case 0x7F187C84u: goto label_7F187C84;
    case 0x7F187C88u: goto label_7F187C88;
    case 0x7F187C8Cu: goto label_7F187C8C;
    case 0x7F187C90u: goto label_7F187C90;
    case 0x7F187C94u: goto label_7F187C94;
    case 0x7F187C98u: goto label_7F187C98;
    case 0x7F187C9Cu: goto label_7F187C9C;
    case 0x7F187CA0u: goto label_7F187CA0;
    case 0x7F187CA4u: goto label_7F187CA4;
    case 0x7F187CA8u: goto label_7F187CA8;
    case 0x7F187CACu: goto label_7F187CAC;
    case 0x7F187CB0u: goto label_7F187CB0;
    case 0x7F187CB4u: goto label_7F187CB4;
    case 0x7F187CB8u: goto label_7F187CB8;
    case 0x7F187CBCu: goto label_7F187CBC;
    case 0x7F187CC0u: goto label_7F187CC0;
    case 0x7F187CC4u: goto label_7F187CC4;
    case 0x7F187CC8u: goto label_7F187CC8;
    case 0x7F187CCCu: goto label_7F187CCC;
    case 0x7F187CD0u: goto label_7F187CD0;
    case 0x7F187CD4u: goto label_7F187CD4;
    case 0x7F187CD8u: goto label_7F187CD8;
    case 0x7F187CDCu: goto label_7F187CDC;
    case 0x7F187CE0u: goto label_7F187CE0;
    case 0x7F187CE4u: goto label_7F187CE4;
    case 0x7F187CE8u: goto label_7F187CE8;
    case 0x7F187CECu: goto label_7F187CEC;
    case 0x7F187CF0u: goto label_7F187CF0;
    case 0x7F187CF4u: goto label_7F187CF4;
    case 0x7F187CF8u: goto label_7F187CF8;
    case 0x7F187CFCu: goto label_7F187CFC;
    case 0x7F187D00u: goto label_7F187D00;
    case 0x7F187D04u: goto label_7F187D04;
    case 0x7F187D08u: goto label_7F187D08;
    case 0x7F187D0Cu: goto label_7F187D0C;
    case 0x7F187D10u: goto label_7F187D10;
    case 0x7F187D14u: goto label_7F187D14;
    case 0x7F187D18u: goto label_7F187D18;
    case 0x7F187D1Cu: goto label_7F187D1C;
    case 0x7F187D20u: goto label_7F187D20;
    case 0x7F187D24u: goto label_7F187D24;
    case 0x7F187D28u: goto label_7F187D28;
    case 0x7F187D2Cu: goto label_7F187D2C;
    case 0x7F187D30u: goto label_7F187D30;
    case 0x7F187D34u: goto label_7F187D34;
    case 0x7F187D38u: goto label_7F187D38;
    case 0x7F187D3Cu: goto label_7F187D3C;
    case 0x7F187D40u: goto label_7F187D40;
    case 0x7F187D44u: goto label_7F187D44;
    case 0x7F187D48u: goto label_7F187D48;
    case 0x7F187D4Cu: goto label_7F187D4C;
    case 0x7F187D50u: goto label_7F187D50;
    case 0x7F187D54u: goto label_7F187D54;
    case 0x7F187D58u: goto label_7F187D58;
    case 0x7F187D5Cu: goto label_7F187D5C;
    case 0x7F187D60u: goto label_7F187D60;
    case 0x7F187D64u: goto label_7F187D64;
    case 0x7F187D68u: goto label_7F187D68;
    case 0x7F187D6Cu: goto label_7F187D6C;
    case 0x7F187D70u: goto label_7F187D70;
    case 0x7F187D74u: goto label_7F187D74;
    case 0x7F187D78u: goto label_7F187D78;
    case 0x7F187D7Cu: goto label_7F187D7C;
    case 0x7F187D80u: goto label_7F187D80;
    case 0x7F187D84u: goto label_7F187D84;
    case 0x7F187D88u: goto label_7F187D88;
    case 0x7F187D8Cu: goto label_7F187D8C;
    case 0x7F187D90u: goto label_7F187D90;
    case 0x7F187D94u: goto label_7F187D94;
    case 0x7F187D98u: goto label_7F187D98;
    case 0x7F187D9Cu: goto label_7F187D9C;
    case 0x7F187DA0u: goto label_7F187DA0;
    case 0x7F187DA4u: goto label_7F187DA4;
    case 0x7F187DA8u: goto label_7F187DA8;
    case 0x7F187DACu: goto label_7F187DAC;
    case 0x7F187DB0u: goto label_7F187DB0;
    case 0x7F187DB4u: goto label_7F187DB4;
    case 0x7F187DB8u: goto label_7F187DB8;
    case 0x7F187DBCu: goto label_7F187DBC;
    case 0x7F187DC0u: goto label_7F187DC0;
    case 0x7F187DC4u: goto label_7F187DC4;
    case 0x7F187DC8u: goto label_7F187DC8;
    case 0x7F187DCCu: goto label_7F187DCC;
    case 0x7F187DD0u: goto label_7F187DD0;
    case 0x7F187DD4u: goto label_7F187DD4;
    case 0x7F187DD8u: goto label_7F187DD8;
    case 0x7F187DDCu: goto label_7F187DDC;
    case 0x7F187DE0u: goto label_7F187DE0;
    case 0x7F187DE4u: goto label_7F187DE4;
    case 0x7F187DE8u: goto label_7F187DE8;
    case 0x7F187DECu: goto label_7F187DEC;
    case 0x7F187DF0u: goto label_7F187DF0;
    case 0x7F187DF4u: goto label_7F187DF4;
    case 0x7F187DF8u: goto label_7F187DF8;
    case 0x7F187DFCu: goto label_7F187DFC;
    case 0x7F187E00u: goto label_7F187E00;
    case 0x7F187E04u: goto label_7F187E04;
    case 0x7F187E08u: goto label_7F187E08;
    case 0x7F187E0Cu: goto label_7F187E0C;
    case 0x7F187E10u: goto label_7F187E10;
    case 0x7F187E14u: goto label_7F187E14;
    case 0x7F187E18u: goto label_7F187E18;
    case 0x7F187E1Cu: goto label_7F187E1C;
    case 0x7F187E20u: goto label_7F187E20;
    case 0x7F187E24u: goto label_7F187E24;
    case 0x7F187E28u: goto label_7F187E28;
    case 0x7F187E2Cu: goto label_7F187E2C;
    case 0x7F187E30u: goto label_7F187E30;
    case 0x7F187E34u: goto label_7F187E34;
    case 0x7F187E38u: goto label_7F187E38;
    case 0x7F187E3Cu: goto label_7F187E3C;
    case 0x7F187E40u: goto label_7F187E40;
    case 0x7F187E44u: goto label_7F187E44;
    case 0x7F187E48u: goto label_7F187E48;
    case 0x7F187E4Cu: goto label_7F187E4C;
    case 0x7F187E50u: goto label_7F187E50;
    case 0x7F187E54u: goto label_7F187E54;
    case 0x7F187E58u: goto label_7F187E58;
    case 0x7F187E5Cu: goto label_7F187E5C;
    case 0x7F187E60u: goto label_7F187E60;
    case 0x7F187E64u: goto label_7F187E64;
    case 0x7F187E68u: goto label_7F187E68;
    case 0x7F187E6Cu: goto label_7F187E6C;
    case 0x7F187E70u: goto label_7F187E70;
    case 0x7F187E74u: goto label_7F187E74;
    case 0x7F187E78u: goto label_7F187E78;
    case 0x7F187E7Cu: goto label_7F187E7C;
    case 0x7F187E80u: goto label_7F187E80;
    case 0x7F187E84u: goto label_7F187E84;
    case 0x7F187E88u: goto label_7F187E88;
    case 0x7F187E8Cu: goto label_7F187E8C;
    case 0x7F187E90u: goto label_7F187E90;
    case 0x7F187E94u: goto label_7F187E94;
    case 0x7F187E98u: goto label_7F187E98;
    case 0x7F187E9Cu: goto label_7F187E9C;
    case 0x7F187EA0u: goto label_7F187EA0;
    case 0x7F187EA4u: goto label_7F187EA4;
    case 0x7F187EA8u: goto label_7F187EA8;
    case 0x7F187EACu: goto label_7F187EAC;
    case 0x7F187EB0u: goto label_7F187EB0;
    case 0x7F187EB4u: goto label_7F187EB4;
    case 0x7F187EB8u: goto label_7F187EB8;
    case 0x7F187EBCu: goto label_7F187EBC;
    case 0x7F187EC0u: goto label_7F187EC0;
    case 0x7F187EC4u: goto label_7F187EC4;
    case 0x7F187EC8u: goto label_7F187EC8;
    case 0x7F187ECCu: goto label_7F187ECC;
    case 0x7F187ED0u: goto label_7F187ED0;
    case 0x7F187ED4u: goto label_7F187ED4;
    case 0x7F187ED8u: goto label_7F187ED8;
    case 0x7F187EDCu: goto label_7F187EDC;
    case 0x7F187EE0u: goto label_7F187EE0;
    case 0x7F187EE4u: goto label_7F187EE4;
    case 0x7F187EE8u: goto label_7F187EE8;
    case 0x7F187EECu: goto label_7F187EEC;
    case 0x7F187EF0u: goto label_7F187EF0;
    case 0x7F187EF4u: goto label_7F187EF4;
    case 0x7F187EF8u: goto label_7F187EF8;
    case 0x7F187EFCu: goto label_7F187EFC;
    case 0x7F187F00u: goto label_7F187F00;
    case 0x7F187F04u: goto label_7F187F04;
    case 0x7F187F08u: goto label_7F187F08;
    case 0x7F187F0Cu: goto label_7F187F0C;
    case 0x7F187F10u: goto label_7F187F10;
    case 0x7F187F14u: goto label_7F187F14;
    case 0x7F187F18u: goto label_7F187F18;
    case 0x7F187F1Cu: goto label_7F187F1C;
    case 0x7F187F20u: goto label_7F187F20;
    case 0x7F187F24u: goto label_7F187F24;
    case 0x7F187F28u: goto label_7F187F28;
    case 0x7F187F2Cu: goto label_7F187F2C;
    case 0x7F187F30u: goto label_7F187F30;
    case 0x7F187F34u: goto label_7F187F34;
    case 0x7F187F38u: goto label_7F187F38;
    case 0x7F187F3Cu: goto label_7F187F3C;
    case 0x7F187F40u: goto label_7F187F40;
    case 0x7F187F44u: goto label_7F187F44;
    case 0x7F187F48u: goto label_7F187F48;
    case 0x7F187F4Cu: goto label_7F187F4C;
    case 0x7F187F50u: goto label_7F187F50;
    case 0x7F187F54u: goto label_7F187F54;
    case 0x7F187F58u: goto label_7F187F58;
    case 0x7F187F5Cu: goto label_7F187F5C;
    case 0x7F187F60u: goto label_7F187F60;
    case 0x7F187F64u: goto label_7F187F64;
    case 0x7F187F68u: goto label_7F187F68;
    case 0x7F187F6Cu: goto label_7F187F6C;
    case 0x7F187F70u: goto label_7F187F70;
    case 0x7F187F74u: goto label_7F187F74;
    case 0x7F187F78u: goto label_7F187F78;
    case 0x7F187F7Cu: goto label_7F187F7C;
    case 0x7F187F80u: goto label_7F187F80;
    case 0x7F187F84u: goto label_7F187F84;
    case 0x7F187F88u: goto label_7F187F88;
    case 0x7F187F8Cu: goto label_7F187F8C;
    case 0x7F187F90u: goto label_7F187F90;
    case 0x7F187F94u: goto label_7F187F94;
    case 0x7F187F98u: goto label_7F187F98;
    case 0x7F187F9Cu: goto label_7F187F9C;
    case 0x7F187FA0u: goto label_7F187FA0;
    case 0x7F187FA4u: goto label_7F187FA4;
    case 0x7F187FA8u: goto label_7F187FA8;
    case 0x7F187FACu: goto label_7F187FAC;
    case 0x7F187FB0u: goto label_7F187FB0;
    case 0x7F187FB4u: goto label_7F187FB4;
    case 0x7F187FB8u: goto label_7F187FB8;
    case 0x7F187FBCu: goto label_7F187FBC;
    case 0x7F187FC0u: goto label_7F187FC0;
    case 0x7F187FC4u: goto label_7F187FC4;
    case 0x7F187FC8u: goto label_7F187FC8;
    case 0x7F187FCCu: goto label_7F187FCC;
    case 0x7F187FD0u: goto label_7F187FD0;
    case 0x7F187FD4u: goto label_7F187FD4;
    case 0x7F187FD8u: goto label_7F187FD8;
    case 0x7F187FDCu: goto label_7F187FDC;
    case 0x7F187FE0u: goto label_7F187FE0;
    case 0x7F187FE4u: goto label_7F187FE4;
    case 0x7F187FE8u: goto label_7F187FE8;
    case 0x7F187FECu: goto label_7F187FEC;
    case 0x7F187FF0u: goto label_7F187FF0;
    case 0x7F187FF4u: goto label_7F187FF4;
    case 0x7F187FF8u: goto label_7F187FF8;
    case 0x7F187FFCu: goto label_7F187FFC;
    case 0x7F188000u: goto label_7F188000;
    case 0x7F188004u: goto label_7F188004;
    case 0x7F188008u: goto label_7F188008;
    case 0x7F18800Cu: goto label_7F18800C;
    case 0x7F188010u: goto label_7F188010;
    case 0x7F188014u: goto label_7F188014;
    case 0x7F188018u: goto label_7F188018;
    case 0x7F18801Cu: goto label_7F18801C;
    case 0x7F188020u: goto label_7F188020;
    case 0x7F188024u: goto label_7F188024;
    case 0x7F188028u: goto label_7F188028;
    case 0x7F18802Cu: goto label_7F18802C;
    case 0x7F188030u: goto label_7F188030;
    case 0x7F188034u: goto label_7F188034;
    case 0x7F188038u: goto label_7F188038;
    case 0x7F18803Cu: goto label_7F18803C;
    case 0x7F188040u: goto label_7F188040;
    case 0x7F188044u: goto label_7F188044;
    case 0x7F188048u: goto label_7F188048;
    case 0x7F18804Cu: goto label_7F18804C;
    case 0x7F188050u: goto label_7F188050;
    case 0x7F188054u: goto label_7F188054;
    case 0x7F188058u: goto label_7F188058;
    case 0x7F18805Cu: goto label_7F18805C;
    case 0x7F188060u: goto label_7F188060;
    case 0x7F188064u: goto label_7F188064;
    case 0x7F188068u: goto label_7F188068;
    case 0x7F18806Cu: goto label_7F18806C;
    case 0x7F188070u: goto label_7F188070;
    case 0x7F188074u: goto label_7F188074;
    case 0x7F188078u: goto label_7F188078;
    case 0x7F18807Cu: goto label_7F18807C;
    case 0x7F188080u: goto label_7F188080;
    case 0x7F188084u: goto label_7F188084;
    case 0x7F188088u: goto label_7F188088;
    case 0x7F18808Cu: goto label_7F18808C;
    case 0x7F188090u: goto label_7F188090;
    case 0x7F188094u: goto label_7F188094;
    case 0x7F188098u: goto label_7F188098;
    case 0x7F18809Cu: goto label_7F18809C;
    case 0x7F1880A0u: goto label_7F1880A0;
    case 0x7F1880A4u: goto label_7F1880A4;
    case 0x7F1880A8u: goto label_7F1880A8;
    case 0x7F1880ACu: goto label_7F1880AC;
    case 0x7F1880B0u: goto label_7F1880B0;
    case 0x7F1880B4u: goto label_7F1880B4;
    case 0x7F1880B8u: goto label_7F1880B8;
    case 0x7F1880BCu: goto label_7F1880BC;
    case 0x7F1880C0u: goto label_7F1880C0;
    case 0x7F1880C4u: goto label_7F1880C4;
    case 0x7F1880C8u: goto label_7F1880C8;
    case 0x7F1880CCu: goto label_7F1880CC;
    case 0x7F1880D0u: goto label_7F1880D0;
    case 0x7F1880D4u: goto label_7F1880D4;
    case 0x7F1880D8u: goto label_7F1880D8;
    case 0x7F1880DCu: goto label_7F1880DC;
    case 0x7F1880E0u: goto label_7F1880E0;
    case 0x7F1880E4u: goto label_7F1880E4;
    case 0x7F1880E8u: goto label_7F1880E8;
    default: return;
    }
label_7F1840EC:
    ctx->pc = 0x7F1840ECu;
    ctx->downcount -= 13;
    // 7F1840EC: lwz     r3, 48(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1840F0:
    ctx->pc = 0x7F1840F0u;
    // 7F1840F0: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1840F4:
    ctx->pc = 0x7F1840F4u;
    // 7F1840F4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1840F8:
    ctx->pc = 0x7F1840F8u;
    // 7F1840F8: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1840FC:
    ctx->pc = 0x7F1840FCu;
    // 7F1840FC: lwz     r3, 52(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184100:
    ctx->pc = 0x7F184100u;
    // 7F184100: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184104:
    ctx->pc = 0x7F184104u;
    // 7F184104: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F184108:
    ctx->pc = 0x7F184108u;
    // 7F184108: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18410C:
    ctx->pc = 0x7F18410Cu;
    // 7F18410C: lwz     r3, 56(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184110:
    ctx->pc = 0x7F184110u;
    // 7F184110: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184114:
    ctx->pc = 0x7F184114u;
    // 7F184114: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F184118:
    ctx->pc = 0x7F184118u;
    // 7F184118: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18411C:
    ctx->pc = 0x7F18411Cu;
    // 7F18411C: b       0x7F184F74
    {
            goto label_7F184F74;
    }

label_7F184120:
    ctx->pc = 0x7F184120u;
    ctx->downcount -= 18;
    // 7F184120: lwz     r5, 48(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F184124:
    ctx->pc = 0x7F184124u;
    // 7F184124: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184128:
    ctx->pc = 0x7F184128u;
    // 7F184128: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18412C:
    ctx->pc = 0x7F18412Cu;
    // 7F18412C: lfs     f25, 4124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18412Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F184130:
    ctx->pc = 0x7F184130u;
    // 7F184130: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184134:
    ctx->pc = 0x7F184134u;
    // 7F184134: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F184138:
    ctx->pc = 0x7F184138u;
    // 7F184138: lfs     f26, 4120(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184138u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F18413C:
    ctx->pc = 0x7F18413Cu;
    // 7F18413C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F184140:
    ctx->pc = 0x7F184140u;
    // 7F184140: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F184144:
    ctx->pc = 0x7F184144u;
    // 7F184144: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184148:
    ctx->pc = 0x7F184148u;
    // 7F184148: lwz     r3, 52(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18414C:
    ctx->pc = 0x7F18414Cu;
    // 7F18414C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184150:
    ctx->pc = 0x7F184150u;
    // 7F184150: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F184154:
    ctx->pc = 0x7F184154u;
    // 7F184154: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184158:
    ctx->pc = 0x7F184158u;
    // 7F184158: lwz     r3, 56(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18415C:
    ctx->pc = 0x7F18415Cu;
    // 7F18415C: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184160:
    ctx->pc = 0x7F184160u;
    // 7F184160: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F184164:
    ctx->pc = 0x7F184164u;
    // 7F184164: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184168:
    ctx->downcount -= 4;
    // 7F184168: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F18416C:
    // 7F18416C: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F184170:
    // 7F184170: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F184174:
    // 7F184174: bl      0x800261B4
    {
            ctx->lr = 0x7F184178u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F184178:
    ctx->pc = 0x7F184178u;
    ctx->downcount -= 13;
    // 7F184178: lfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F184178u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18417C:
    // 7F18417C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F184180:
    // 7F184180: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F184184:
    // 7F184184: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F184188:
    ctx->pc = 0x7F184188u;
    // 7F184188: fmuls   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F184188u)) return;
    ppc_fmuls(ctx, 0, 0, 26);

label_7F18418C:
    ctx->pc = 0x7F18418Cu;
    // 7F18418C: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F18418Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184190:
    ctx->pc = 0x7F184190u;
    // 7F184190: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F184190u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184194:
    ctx->pc = 0x7F184194u;
    // 7F184194: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F184194u)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F184198:
    ctx->pc = 0x7F184198u;
    // 7F184198: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F184198u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18419C:
    ctx->pc = 0x7F18419Cu;
    // 7F18419C: lfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F18419Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1841A0:
    ctx->pc = 0x7F1841A0u;
    // 7F1841A0: fmuls   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F1841A0u)) return;
    ppc_fmuls(ctx, 0, 0, 26);

label_7F1841A4:
    ctx->pc = 0x7F1841A4u;
    // 7F1841A4: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1841A4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1841A8:
    // 7F1841A8: bl      0x800261B4
    {
            ctx->lr = 0x7F1841ACu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1841AC:
    ctx->pc = 0x7F1841ACu;
    ctx->downcount -= 3;
    // 7F1841AC: lwz     r0, 23216(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1841B0:
    // 7F1841B0: cmpwi   r0, 0
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

label_7F1841B4:
    // 7F1841B4: bc    4, 2, 0x7F184204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184204;
        }
    }

label_7F1841B8:
    ctx->downcount -= 5;
    // 7F1841B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1841BC:
    ctx->pc = 0x7F1841BCu;
    // 7F1841BC: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1841BCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1841C0:
    ctx->pc = 0x7F1841C0u;
    // 7F1841C0: lfs     f1, 4128(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1841C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1841C4:
    ctx->pc = 0x7F1841C4u;
    // 7F1841C4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1841C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1841C8:
    // 7F1841C8: bc    4, 1, 0x7F184204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184204;
        }
    }

label_7F1841CC:
    ctx->pc = 0x7F1841CCu;
    ctx->downcount -= 4;
    // 7F1841CC: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1841CCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1841D0:
    ctx->pc = 0x7F1841D0u;
    // 7F1841D0: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1841D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1841D4:
    // 7F1841D4: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1841D8:
    // 7F1841D8: bc    4, 2, 0x7F184204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184204;
        }
    }

label_7F1841DC:
    ctx->pc = 0x7F1841DCu;
    ctx->downcount -= 10;
    // 7F1841DC: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1841E0:
    // 7F1841E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1841E4:
    ctx->pc = 0x7F1841E4u;
    // 7F1841E4: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1841E8:
    ctx->pc = 0x7F1841E8u;
    // 7F1841E8: stw     r4, 23200(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1841EC:
    ctx->pc = 0x7F1841ECu;
    // 7F1841EC: stw     r3, 23204(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1841F0:
    ctx->pc = 0x7F1841F0u;
    // 7F1841F0: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1841F4:
    ctx->pc = 0x7F1841F4u;
    // 7F1841F4: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1841F8:
    ctx->pc = 0x7F1841F8u;
    // 7F1841F8: stw     r4, 23208(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23208);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1841FC:
    ctx->pc = 0x7F1841FCu;
    // 7F1841FC: stw     r3, 23212(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184200:
    ctx->pc = 0x7F184200u;
    // 7F184200: stw     r0, 23216(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184204:
    ctx->pc = 0x7F184204u;
    ctx->downcount -= 3;
    // 7F184204: lbz     r3, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F184208:
    // 7F184208: cmplwi  r3, 0x0000
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

label_7F18420C:
    // 7F18420C: bc    12, 2, 0x7F1844B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1844B4;
        }
    }

label_7F184210:
    ctx->downcount -= 2;
    // 7F184210: cmpwi   r18, 0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184214:
    // 7F184214: bc    12, 2, 0x7F18432C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18432C;
        }
    }

label_7F184218:
    ctx->downcount -= 4;
    // 7F184218: addi    r14, r31, 16468
    ctx->gpr[14] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F18421C:
    ctx->pc = 0x7F18421Cu;
    // 7F18421C: lwzx    r0, r15, r14
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[14];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184220:
    // 7F184220: cmpwi   r0, 0
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

label_7F184224:
    // 7F184224: bc    4, 2, 0x7F18432C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18432C;
        }
    }

label_7F184228:
    ctx->pc = 0x7F184228u;
    ctx->downcount -= 4;
    // 7F184228: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F184228u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18422C:
    ctx->pc = 0x7F18422Cu;
    // 7F18422C: lfs     f1, 4(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F18422Cu)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184230:
    ctx->pc = 0x7F184230u;
    // 7F184230: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184230u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F184234:
    // 7F184234: bc    4, 1, 0x7F18432C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18432C;
        }
    }

label_7F184238:
    ctx->pc = 0x7F184238u;
    ctx->downcount -= 4;
    // 7F184238: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F184238u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18423C:
    ctx->pc = 0x7F18423Cu;
    // 7F18423C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F18423Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F184240:
    // 7F184240: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F184244:
    // 7F184244: bc    4, 2, 0x7F18432C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18432C;
        }
    }

label_7F184248:
    ctx->pc = 0x7F184248u;
    ctx->downcount -= 3;
    // 7F184248: lwz     r0, 23220(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18424C:
    // 7F18424C: cmpwi   r0, 0
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

label_7F184250:
    // 7F184250: bc    4, 2, 0x7F18427C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18427C;
        }
    }

label_7F184254:
    ctx->pc = 0x7F184254u;
    ctx->downcount -= 10;
    // 7F184254: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184258:
    // 7F184258: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F18425C:
    ctx->pc = 0x7F18425Cu;
    // 7F18425C: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184260:
    ctx->pc = 0x7F184260u;
    // 7F184260: stw     r4, 23232(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23232);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184264:
    ctx->pc = 0x7F184264u;
    // 7F184264: stw     r3, 23236(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184268:
    ctx->pc = 0x7F184268u;
    // 7F184268: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18426C:
    ctx->pc = 0x7F18426Cu;
    // 7F18426C: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184270:
    ctx->pc = 0x7F184270u;
    // 7F184270: stw     r4, 23240(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23240);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184274:
    ctx->pc = 0x7F184274u;
    // 7F184274: stw     r3, 23244(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184278:
    ctx->pc = 0x7F184278u;
    // 7F184278: stw     r0, 23220(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18427C:
    ctx->downcount -= 1;
    // 7F18427C: bl      0x7F18505C
    {
            ctx->lr = 0x7F184280u;
            goto label_7F18505C;
    }

label_7F184280:
    ctx->downcount -= 5;
    // 7F184280: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184284:
    ctx->pc = 0x7F184284u;
    // 7F184284: lfs     f0, 4132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184284u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184288:
    ctx->pc = 0x7F184288u;
    // 7F184288: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184288u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F18428C:
    ctx->pc = 0x7F18428Cu;
    // 7F18428C: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F18428Cu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184290:
    // 7F184290: bl      0x7F18505C
    {
            ctx->lr = 0x7F184294u;
            goto label_7F18505C;
    }

label_7F184294:
    ctx->downcount -= 7;
    // 7F184294: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184298:
    // 7F184298: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18429C:
    ctx->pc = 0x7F18429Cu;
    // 7F18429C: lfs     f2, 4140(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18429Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1842A0:
    ctx->pc = 0x7F1842A0u;
    // 7F1842A0: lfs     f0, 4136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1842A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1842A4:
    ctx->pc = 0x7F1842A4u;
    // 7F1842A4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1842A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1842A8:
    ctx->pc = 0x7F1842A8u;
    // 7F1842A8: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1842A8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1842AC:
    // 7F1842AC: bl      0x7F18505C
    {
            ctx->lr = 0x7F1842B0u;
            goto label_7F18505C;
    }

label_7F1842B0:
    ctx->downcount -= 17;
    // 7F1842B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1842B4:
    ctx->pc = 0x7F1842B4u;
    // 7F1842B4: lfs     f0, 4132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1842B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1842B8:
    ctx->pc = 0x7F1842B8u;
    // 7F1842B8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1842B8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1842BC:
    ctx->pc = 0x7F1842BCu;
    // 7F1842BC: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1842BCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1842C0:
    ctx->pc = 0x7F1842C0u;
    // 7F1842C0: lwz     r3, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1842C4:
    ctx->pc = 0x7F1842C4u;
    // 7F1842C4: lwz     r0, 4(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1842C8:
    ctx->pc = 0x7F1842C8u;
    // 7F1842C8: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1842CC:
    ctx->pc = 0x7F1842CCu;
    // 7F1842CC: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1842D0:
    ctx->pc = 0x7F1842D0u;
    // 7F1842D0: lwz     r3, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1842D4:
    ctx->pc = 0x7F1842D4u;
    // 7F1842D4: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1842D8:
    ctx->pc = 0x7F1842D8u;
    // 7F1842D8: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1842DC:
    ctx->pc = 0x7F1842DCu;
    // 7F1842DC: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1842E0:
    ctx->pc = 0x7F1842E0u;
    // 7F1842E0: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1842E0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1842E4:
    ctx->pc = 0x7F1842E4u;
    // 7F1842E4: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1842E4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1842E8:
    ctx->pc = 0x7F1842E8u;
    // 7F1842E8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1842E8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1842EC:
    ctx->pc = 0x7F1842ECu;
    // 7F1842EC: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1842ECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1842F0:
    // 7F1842F0: bl      0x7F1850B4
    {
            ctx->lr = 0x7F1842F4u;
            goto label_7F1850B4;
    }

label_7F1842F4:
    ctx->downcount -= 51;
    // 7F1842F4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F1842F8:
    // 7F1842F8: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1842FC:
    // 7F1842FC: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184300:
    // 7F184300: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F184304:
    // 7F184304: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F184308:
    ctx->pc = 0x7F184308u;
    // 7F184308: sth     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F18430C:
    ctx->pc = 0x7F18430Cu;
    // 7F18430C: sth     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184310:
    // 7F184310: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184314u;
            goto label_7F1850B4;
    }

label_7F184314:
    ctx->downcount -= 6;
    // 7F184314: rlwinm r3, r3, 0, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000007u;
    }

label_7F184318:
    // 7F184318: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F18431C:
    // 7F18431C: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F184320:
    ctx->pc = 0x7F184320u;
    // 7F184320: stb     r3, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F184324:
    ctx->pc = 0x7F184324u;
    // 7F184324: stwx    r0, r15, r14
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[14];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184328:
    // 7F184328: b       0x7F1844C8
    {
            goto label_7F1844C8;
    }

label_7F18432C:
    ctx->pc = 0x7F18432Cu;
    ctx->downcount -= 3;
    // 7F18432C: lwz     r5, 20636(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F184330:
    // 7F184330: cmpwi   r5, 2
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

label_7F184334:
    // 7F184334: bc    4, 2, 0x7F18435C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18435C;
        }
    }

label_7F184338:
    ctx->downcount -= 4;
    // 7F184338: addi    r0, r31, 16468
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F18433C:
    ctx->pc = 0x7F18433Cu;
    // 7F18433C: lwzx    r0, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184340:
    // 7F184340: cmpwi   r0, 0
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

label_7F184344:
    // 7F184344: bc    4, 2, 0x7F18435C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18435C;
        }
    }

label_7F184348:
    ctx->downcount -= 5;
    // 7F184348: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18434C:
    ctx->pc = 0x7F18434Cu;
    // 7F18434C: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F18434Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184350:
    ctx->pc = 0x7F184350u;
    // 7F184350: lfs     f0, 4056(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184350u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184354:
    ctx->pc = 0x7F184354u;
    // 7F184354: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184354u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F184358:
    // 7F184358: bc    12, 0, 0x7F184388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184388;
        }
    }

label_7F18435C:
    ctx->downcount -= 2;
    // 7F18435C: cmpwi   r5, 2
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

label_7F184360:
    // 7F184360: bc    12, 2, 0x7F184440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184440;
        }
    }

label_7F184364:
    ctx->downcount -= 4;
    // 7F184364: addi    r0, r31, 16468
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F184368:
    ctx->pc = 0x7F184368u;
    // 7F184368: lwzx    r0, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18436C:
    // 7F18436C: cmpwi   r0, 0
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

label_7F184370:
    // 7F184370: bc    4, 2, 0x7F184440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184440;
        }
    }

label_7F184374:
    ctx->downcount -= 5;
    // 7F184374: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184378:
    ctx->pc = 0x7F184378u;
    // 7F184378: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F184378u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18437C:
    ctx->pc = 0x7F18437Cu;
    // 7F18437C: lfs     f0, 4144(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18437Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184380:
    ctx->pc = 0x7F184380u;
    // 7F184380: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184380u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F184384:
    // 7F184384: bc    4, 0, 0x7F184440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184440;
        }
    }

label_7F184388:
    ctx->downcount -= 12;
    // 7F184388: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F18438C:
    // 7F18438C: cmpwi   r16, 0
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

label_7F184390:
    ctx->pc = 0x7F184390u;
    // 7F184390: stw     r0, 20660(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184394:
    ctx->pc = 0x7F184394u;
    // 7F184394: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184398:
    ctx->pc = 0x7F184398u;
    // 7F184398: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18439C:
    ctx->pc = 0x7F18439Cu;
    // 7F18439C: stw     r3, 23232(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23232);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1843A0:
    ctx->pc = 0x7F1843A0u;
    // 7F1843A0: stw     r0, 23236(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1843A4:
    ctx->pc = 0x7F1843A4u;
    // 7F1843A4: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1843A8:
    ctx->pc = 0x7F1843A8u;
    // 7F1843A8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1843AC:
    ctx->pc = 0x7F1843ACu;
    // 7F1843AC: stw     r3, 23240(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23240);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1843B0:
    ctx->pc = 0x7F1843B0u;
    // 7F1843B0: stw     r0, 23244(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1843B4:
    // 7F1843B4: bc    4, 2, 0x7F1843C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1843C0;
        }
    }

label_7F1843B8:
    ctx->downcount -= 2;
    // 7F1843B8: or   r17, r28, r28
    {
        ctx->gpr[17] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1843BC:
    // 7F1843BC: li      r16, 1
    ctx->gpr[16] = (u32)(s32)(1);

label_7F1843C0:
    ctx->downcount -= 1;
    // 7F1843C0: bl      0x7F18505C
    {
            ctx->lr = 0x7F1843C4u;
            goto label_7F18505C;
    }

label_7F1843C4:
    ctx->downcount -= 5;
    // 7F1843C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1843C8:
    ctx->pc = 0x7F1843C8u;
    // 7F1843C8: lfs     f0, 4092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1843C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1843CC:
    ctx->pc = 0x7F1843CCu;
    // 7F1843CC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1843CCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1843D0:
    ctx->pc = 0x7F1843D0u;
    // 7F1843D0: stfs     f0, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1843D0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1843D4:
    // 7F1843D4: bl      0x7F18505C
    {
            ctx->lr = 0x7F1843D8u;
            goto label_7F18505C;
    }

label_7F1843D8:
    ctx->downcount -= 5;
    // 7F1843D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1843DC:
    ctx->pc = 0x7F1843DCu;
    // 7F1843DC: lfs     f0, 4092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1843DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1843E0:
    ctx->pc = 0x7F1843E0u;
    // 7F1843E0: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1843E0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1843E4:
    ctx->pc = 0x7F1843E4u;
    // 7F1843E4: stfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1843E4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1843E8:
    // 7F1843E8: bl      0x7F18505C
    {
            ctx->lr = 0x7F1843ECu;
            goto label_7F18505C;
    }

label_7F1843EC:
    ctx->downcount -= 9;
    // 7F1843EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1843F0:
    ctx->pc = 0x7F1843F0u;
    // 7F1843F0: lfs     f0, 4092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1843F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1843F4:
    ctx->pc = 0x7F1843F4u;
    // 7F1843F4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1843F4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1843F8:
    ctx->pc = 0x7F1843F8u;
    // 7F1843F8: stfs     f0, 8(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1843F8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1843FC:
    ctx->pc = 0x7F1843FCu;
    // 7F1843FC: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1843FCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184400:
    ctx->pc = 0x7F184400u;
    // 7F184400: lfs     f0, 4(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F184400u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184404:
    ctx->pc = 0x7F184404u;
    // 7F184404: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184404u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F184408:
    ctx->pc = 0x7F184408u;
    // 7F184408: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F184408u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18440C:
    // 7F18440C: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184410u;
            goto label_7F1850B4;
    }

label_7F184410:
    ctx->downcount -= 5;
    // 7F184410: rlwinm r3, r3, 0, 28, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_7F184414:
    // 7F184414: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F184418:
    ctx->pc = 0x7F184418u;
    // 7F184418: sth     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F18441C:
    ctx->pc = 0x7F18441Cu;
    // 7F18441C: sth     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184420:
    // 7F184420: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184424u;
            goto label_7F1850B4;
    }

label_7F184424:
    ctx->downcount -= 7;
    // 7F184424: rlwinm r3, r3, 0, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000007u;
    }

label_7F184428:
    // 7F184428: addi    r0, r31, 16468
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F18442C:
    // 7F18442C: addi    r4, r3, 6
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6);

label_7F184430:
    ctx->pc = 0x7F184430u;
    // 7F184430: stb     r4, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F184434:
    // 7F184434: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F184438:
    ctx->pc = 0x7F184438u;
    // 7F184438: stwx    r3, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18443C:
    // 7F18443C: b       0x7F1844C8
    {
            goto label_7F1844C8;
    }

label_7F184440:
    ctx->downcount -= 4;
    // 7F184440: addi    r0, r31, 16468
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F184444:
    ctx->pc = 0x7F184444u;
    // 7F184444: lwzx    r0, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184448:
    // 7F184448: cmpwi   r0, 1
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

label_7F18444C:
    // 7F18444C: bc    4, 2, 0x7F184470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184470;
        }
    }

label_7F184450:
    ctx->downcount -= 2;
    // 7F184450: cmplwi  r3, 0x0000
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

label_7F184454:
    // 7F184454: bc    12, 2, 0x7F184464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184464;
        }
    }

label_7F184458:
    ctx->downcount -= 3;
    // 7F184458: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F18445C:
    ctx->pc = 0x7F18445Cu;
    // 7F18445C: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F184460:
    // 7F184460: b       0x7F184474
    {
            goto label_7F184474;
    }

label_7F184464:
    ctx->downcount -= 3;
    // 7F184464: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184468:
    ctx->pc = 0x7F184468u;
    // 7F184468: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F18446C:
    // 7F18446C: b       0x7F184474
    {
            goto label_7F184474;
    }

label_7F184470:
    ctx->pc = 0x7F184470u;
    ctx->downcount -= 1;
    // 7F184470: stb     r3, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F184474:
    ctx->downcount -= 2;
    // 7F184474: cmpwi   r20, 0
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

label_7F184478:
    // 7F184478: bc    4, 2, 0x7F184498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184498;
        }
    }

label_7F18447C:
    ctx->pc = 0x7F18447Cu;
    ctx->downcount -= 7;
    // 7F18447C: lha     r3, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F184480:
    // 7F184480: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F184484:
    ctx->pc = 0x7F184484u;
    // 7F184484: sth     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184488:
    ctx->pc = 0x7F184488u;
    // 7F184488: lha     r3, 10(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F18448C:
    // 7F18448C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F184490:
    ctx->pc = 0x7F184490u;
    // 7F184490: sth     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184494:
    // 7F184494: b       0x7F1844C8
    {
            goto label_7F1844C8;
    }

label_7F184498:
    ctx->downcount -= 2;
    // 7F184498: cmpwi   r20, 1
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F18449C:
    // 7F18449C: bc    4, 2, 0x7F1844C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1844C8;
        }
    }

label_7F1844A0:
    ctx->pc = 0x7F1844A0u;
    ctx->downcount -= 5;
    // 7F1844A0: lha     r0, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1844A4:
    ctx->pc = 0x7F1844A4u;
    // 7F1844A4: sth     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1844A8:
    ctx->pc = 0x7F1844A8u;
    // 7F1844A8: lha     r0, 10(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1844AC:
    ctx->pc = 0x7F1844ACu;
    // 7F1844AC: sth     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1844B0:
    // 7F1844B0: b       0x7F1844C8
    {
            goto label_7F1844C8;
    }

label_7F1844B4:
    ctx->pc = 0x7F1844B4u;
    ctx->downcount -= 5;
    // 7F1844B4: lwz     r3, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1844B8:
    // 7F1844B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1844BC:
    ctx->pc = 0x7F1844BCu;
    // 7F1844BC: stb     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1844C0:
    // 7F1844C0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1844C4:
    ctx->pc = 0x7F1844C4u;
    // 7F1844C4: stw     r3, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1844C8:
    ctx->pc = 0x7F1844C8u;
    ctx->downcount -= 3;
    // 7F1844C8: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1844CC:
    // 7F1844CC: cmpw    r29, r0
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

label_7F1844D0:
    // 7F1844D0: bc    4, 2, 0x7F184524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184524;
        }
    }

label_7F1844D4:
    ctx->pc = 0x7F1844D4u;
    ctx->downcount -= 3;
    // 7F1844D4: lbz     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1844D8:
    // 7F1844D8: cmplwi  r0, 0x0000
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

label_7F1844DC:
    // 7F1844DC: bc    12, 2, 0x7F18451C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18451C;
        }
    }

label_7F1844E0:
    ctx->downcount -= 4;
    // 7F1844E0: addi    r0, r31, 16468
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(16468);

label_7F1844E4:
    ctx->pc = 0x7F1844E4u;
    // 7F1844E4: lwzx    r0, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1844E8:
    // 7F1844E8: cmpwi   r0, 0
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

label_7F1844EC:
    // 7F1844EC: bc    4, 2, 0x7F18451C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18451C;
        }
    }

label_7F1844F0:
    ctx->pc = 0x7F1844F0u;
    ctx->downcount -= 11;
    // 7F1844F0: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1844F4:
    // 7F1844F4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F1844F8:
    ctx->pc = 0x7F1844F8u;
    // 7F1844F8: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1844FC:
    ctx->pc = 0x7F1844FCu;
    // 7F1844FC: stw     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184500:
    ctx->pc = 0x7F184500u;
    // 7F184500: stw     r3, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184504:
    ctx->pc = 0x7F184504u;
    // 7F184504: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184508:
    ctx->pc = 0x7F184508u;
    // 7F184508: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18450C:
    ctx->pc = 0x7F18450Cu;
    // 7F18450C: stw     r4, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184510:
    ctx->pc = 0x7F184510u;
    // 7F184510: stw     r3, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184514:
    ctx->pc = 0x7F184514u;
    // 7F184514: stb     r0, 3(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F184518:
    // 7F184518: b       0x7F184524
    {
            goto label_7F184524;
    }

label_7F18451C:
    ctx->downcount -= 2;
    // 7F18451C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184520:
    ctx->pc = 0x7F184520u;
    // 7F184520: stb     r0, 3(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F184524:
    ctx->pc = 0x7F184524u;
    ctx->downcount -= 16;
    // 7F184524: lbz     r0, 3(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F184528:
    // 7F184528: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F18452C:
    // 7F18452C: cmpwi   r29, 1024
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184530:
    // 7F184530: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F184534:
    ctx->pc = 0x7F184534u;
    // 7F184534: stb     r0, 3(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F184538:
    // 7F184538: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F18453C:
    // 7F18453C: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F184540:
    // 7F184540: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F184544:
    ctx->pc = 0x7F184544u;
    // 7F184544: lha     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F184548:
    // 7F184548: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F18454C:
    ctx->pc = 0x7F18454Cu;
    // 7F18454C: sth     r0, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184550:
    ctx->pc = 0x7F184550u;
    // 7F184550: lha     r0, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F184554:
    // 7F184554: addi    r26, r26, 16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(16);

label_7F184558:
    ctx->pc = 0x7F184558u;
    // 7F184558: sth     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F18455C:
    // 7F18455C: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F184560:
    // 7F184560: bc    12, 0, 0x7F184168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F184168u;
                return;
            }
            goto label_7F184168;
        }
    }

label_7F184564:
    ctx->pc = 0x7F184564u;
    ctx->downcount -= 5;
    // 7F184564: lwz     r0, 48(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184568:
    ctx->pc = 0x7F184568u;
    // 7F184568: add   r3, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F18456C:
    ctx->pc = 0x7F18456Cu;
    // 7F18456C: lwz     r22, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F184570:
    ctx->pc = 0x7F184570u;
    // 7F184570: lwz     r23, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F184574:
    ctx->pc = 0x7F184574u;
    // 7F184574: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184578u;
            goto label_7F1850B4;
    }

label_7F184578:
    ctx->pc = 0x7F184578u;
    ctx->downcount -= 50;
    // 7F184578: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_7F18457C:
    ctx->pc = 0x7F18457Cu;
    // 7F18457C: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184580:
    ctx->pc = 0x7F184580u;
    // 7F184580: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184584:
    ctx->pc = 0x7F184584u;
    // 7F184584: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F184588:
    ctx->pc = 0x7F184588u;
    // 7F184588: addi    r0, r3, -20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20);

label_7F18458C:
    ctx->pc = 0x7F18458Cu;
    // 7F18458C: sth     r0, 20576(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20576);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F184590:
    ctx->pc = 0x7F184590u;
    // 7F184590: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184594u;
            goto label_7F1850B4;
    }

label_7F184594:
    ctx->pc = 0x7F184594u;
    ctx->downcount -= 54;
    // 7F184594: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F184598:
    ctx->pc = 0x7F184598u;
    // 7F184598: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F18459C:
    ctx->pc = 0x7F18459Cu;
    // 7F18459C: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1845A0:
    ctx->pc = 0x7F1845A0u;
    // 7F1845A0: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F1845A4:
    ctx->pc = 0x7F1845A4u;
    // 7F1845A4: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F1845A8:
    ctx->pc = 0x7F1845A8u;
    // 7F1845A8: addi    r3, r3, -20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20);

label_7F1845AC:
    ctx->pc = 0x7F1845ACu;
    // 7F1845AC: sth     r3, 20578(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20578);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1845B0:
    ctx->pc = 0x7F1845B0u;
    // 7F1845B0: sth     r0, 20580(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20580);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1845B4:
    ctx->pc = 0x7F1845B4u;
    // 7F1845B4: lwz     r0, 20636(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1845B8:
    ctx->pc = 0x7F1845B8u;
    // 7F1845B8: cmpwi   r0, 2
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

label_7F1845BC:
    ctx->pc = 0x7F1845BCu;
    // 7F1845BC: bc    4, 2, 0x7F1845E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1845E4;
        }
    }

label_7F1845C0:
    ctx->pc = 0x7F1845C0u;
    ctx->downcount -= 4;
    // 7F1845C0: lwz     r3, 20628(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1845C4:
    ctx->pc = 0x7F1845C4u;
    // 7F1845C4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1845C8:
    ctx->pc = 0x7F1845C8u;
    // 7F1845C8: rlwinm. r0, r0, 0, 28, 28
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

label_7F1845CC:
    ctx->pc = 0x7F1845CCu;
    // 7F1845CC: bc    12, 2, 0x7F1845DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1845DC;
        }
    }

label_7F1845D0:
    ctx->pc = 0x7F1845D0u;
    ctx->downcount -= 3;
    // 7F1845D0: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F1845D4:
    ctx->pc = 0x7F1845D4u;
    // 7F1845D4: sth     r0, 20578(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20578);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1845D8:
    ctx->pc = 0x7F1845D8u;
    // 7F1845D8: b       0x7F1845E4
    {
            goto label_7F1845E4;
    }

label_7F1845DC:
    ctx->pc = 0x7F1845DCu;
    ctx->downcount -= 2;
    // 7F1845DC: li      r0, 3072
    ctx->gpr[0] = (u32)(s32)(3072);

label_7F1845E0:
    ctx->pc = 0x7F1845E0u;
    // 7F1845E0: sth     r0, 20578(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20578);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1845E4:
    ctx->pc = 0x7F1845E4u;
    ctx->downcount -= 9;
    // 7F1845E4: lwz     r0, 80(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1845E8:
    ctx->pc = 0x7F1845E8u;
    // 7F1845E8: lwz     r4, 60(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1845EC:
    ctx->pc = 0x7F1845ECu;
    // 7F1845EC: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F1845F0:
    ctx->pc = 0x7F1845F0u;
    // 7F1845F0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1845F4:
    ctx->pc = 0x7F1845F4u;
    // 7F1845F4: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F1845F8:
    ctx->pc = 0x7F1845F8u;
    // 7F1845F8: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1845FC:
    ctx->pc = 0x7F1845FCu;
    // 7F1845FC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F184600u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F184600:
    ctx->pc = 0x7F184600u;
    ctx->downcount -= 2;
    // 7F184600: addi    r3, r15, 20576
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(20576);

label_7F184604:
    ctx->pc = 0x7F184604u;
    // 7F184604: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F184608u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F184608:
    ctx->pc = 0x7F184608u;
    ctx->downcount -= 2;
    // 7F184608: addi    r3, r1, 136
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(136);

label_7F18460C:
    ctx->pc = 0x7F18460Cu;
    // 7F18460C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F184610u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F184610:
    ctx->pc = 0x7F184610u;
    ctx->downcount -= 11;
    // 7F184610: lwz     r0, 80(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184614:
    ctx->pc = 0x7F184614u;
    // 7F184614: addi    r4, r15, 64
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(64);

label_7F184618:
    ctx->pc = 0x7F184618u;
    // 7F184618: lwz     r6, 60(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F18461C:
    ctx->pc = 0x7F18461Cu;
    // 7F18461C: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F184620:
    ctx->pc = 0x7F184620u;
    // 7F184620: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F184624:
    ctx->pc = 0x7F184624u;
    // 7F184624: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184628:
    ctx->pc = 0x7F184628u;
    // 7F184628: addi    r3, r3, 492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(492);

label_7F18462C:
    ctx->pc = 0x7F18462Cu;
    // 7F18462C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184630:
    ctx->pc = 0x7F184630u;
    // 7F184630: bl      0x800261D8
    {
            ctx->lr = 0x7F184634u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F184634:
    ctx->pc = 0x7F184634u;
    ctx->downcount -= 21;
    // 7F184634: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F184638:
    ctx->pc = 0x7F184638u;
    // 7F184638: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F18463C:
    ctx->pc = 0x7F18463Cu;
    // 7F18463C: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F184640:
    ctx->pc = 0x7F184640u;
    // 7F184640: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F184644:
    ctx->pc = 0x7F184644u;
    // 7F184644: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F184648:
    ctx->pc = 0x7F184648u;
    // 7F184648: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F18464C:
    ctx->pc = 0x7F18464Cu;
    // 7F18464C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184650:
    ctx->pc = 0x7F184650u;
    // 7F184650: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184654:
    ctx->pc = 0x7F184654u;
    // 7F184654: lis     r11, 32585
    ctx->gpr[11] = ((u32)(s32)(32585) << 16);

label_7F184658:
    ctx->pc = 0x7F184658u;
    // 7F184658: lfs     f25, 4148(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F184658u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F18465C:
    ctx->pc = 0x7F18465Cu;
    // 7F18465C: lfs     f26, 4152(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F18465Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F184660:
    ctx->pc = 0x7F184660u;
    // 7F184660: addi    r21, r1, 168
    ctx->gpr[21] = ctx->gpr[1] + (u32)(s32)(168);

label_7F184664:
    ctx->pc = 0x7F184664u;
    // 7F184664: lfd     f27, 4064(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F184664u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4064);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184668:
    ctx->pc = 0x7F184668u;
    // 7F184668: addi    r20, r11, 12832
    ctx->gpr[20] = ctx->gpr[11] + (u32)(s32)(12832);

label_7F18466C:
    ctx->pc = 0x7F18466Cu;
    // 7F18466C: lfs     f28, 4156(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F18466Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F184670:
    ctx->pc = 0x7F184670u;
    // 7F184670: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F184674:
    ctx->pc = 0x7F184674u;
    // 7F184674: lfs     f29, 4124(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F184674u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F184678:
    ctx->pc = 0x7F184678u;
    // 7F184678: lis     r14, 17200
    ctx->gpr[14] = ((u32)(s32)(17200) << 16);

label_7F18467C:
    ctx->pc = 0x7F18467Cu;
    // 7F18467C: lfs     f30, 4168(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F18467Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F184680:
    ctx->pc = 0x7F184680u;
    // 7F184680: lfs     f31, 4088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184680u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F184684:
    ctx->pc = 0x7F184684u;
    // 7F184684: lfs     f23, 4056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184684u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[23] = value;
        ctx->ps1[23] = value;
    }

label_7F184688:
    ctx->pc = 0x7F184688u;
    ctx->downcount -= 12;
    // 7F184688: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18468C:
    ctx->pc = 0x7F18468Cu;
    // 7F18468C: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184690:
    // 7F184690: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184694:
    ctx->pc = 0x7F184694u;
    // 7F184694: lwz     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184698:
    // 7F184698: add   r4, r22, r4
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F18469C:
    ctx->pc = 0x7F18469Cu;
    // 7F18469C: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1846A0:
    ctx->pc = 0x7F1846A0u;
    // 7F1846A0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1846A4:
    ctx->pc = 0x7F1846A4u;
    // 7F1846A4: lwz     r3, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1846A8:
    ctx->pc = 0x7F1846A8u;
    // 7F1846A8: lwz     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1846AC:
    ctx->pc = 0x7F1846ACu;
    // 7F1846AC: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1846B0:
    ctx->pc = 0x7F1846B0u;
    // 7F1846B0: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1846B4:
    // 7F1846B4: bl      0x7F18505C
    {
            ctx->lr = 0x7F1846B8u;
            goto label_7F18505C;
    }

label_7F1846B8:
    ctx->pc = 0x7F1846B8u;
    ctx->downcount -= 5;
    // 7F1846B8: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1846BC:
    ctx->pc = 0x7F1846BCu;
    // 7F1846BC: fmuls   f0, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1846BCu)) return;
    ppc_fmuls(ctx, 0, 25, 1);

label_7F1846C0:
    // 7F1846C0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1846C4:
    ctx->pc = 0x7F1846C4u;
    // 7F1846C4: stfsx    f0, r22, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1846C4u)) return;
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1846C8:
    // 7F1846C8: bl      0x7F18505C
    {
            ctx->lr = 0x7F1846CCu;
            goto label_7F18505C;
    }

label_7F1846CC:
    ctx->pc = 0x7F1846CCu;
    ctx->downcount -= 6;
    // 7F1846CC: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1846D0:
    ctx->pc = 0x7F1846D0u;
    // 7F1846D0: fmuls   f0, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1846D0u)) return;
    ppc_fmuls(ctx, 0, 25, 1);

label_7F1846D4:
    // 7F1846D4: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1846D8:
    // 7F1846D8: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1846DC:
    ctx->pc = 0x7F1846DCu;
    // 7F1846DC: stfsx    f0, r22, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1846DCu)) return;
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1846E0:
    // 7F1846E0: bl      0x7F18505C
    {
            ctx->lr = 0x7F1846E4u;
            goto label_7F18505C;
    }

label_7F1846E4:
    ctx->pc = 0x7F1846E4u;
    ctx->downcount -= 34;
    // 7F1846E4: lwz     r3, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1846E8:
    // 7F1846E8: subfic  r0, r24, 16
    {
        u64 res = (u64)(u32)(s32)(16) + (u64)(~ctx->gpr[24]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1846EC:
    ctx->pc = 0x7F1846ECu;
    // 7F1846EC: fmuls   f0, f25, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1846ECu)) return;
    ppc_fmuls(ctx, 0, 25, 1);

label_7F1846F0:
    // 7F1846F0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1846F4:
    // 7F1846F4: rlwinm r4, r3, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F1846F8:
    // 7F1846F8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1846FC:
    // 7F1846FC: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_7F184700:
    ctx->pc = 0x7F184700u;
    // 7F184700: stw     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184704:
    ctx->pc = 0x7F184704u;
    // 7F184704: stfsx    f0, r22, r4
    if (!ppc_fp_available_inline(ctx, 0x7F184704u)) return;
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184708:
    // 7F184708: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F18470C:
    ctx->pc = 0x7F18470Cu;
    // 7F18470C: lwz     r0, 80(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184710:
    ctx->pc = 0x7F184710u;
    // 7F184710: lwz     r6, 60(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F184714:
    // 7F184714: mulli   r5, r0, 324
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F184718:
    ctx->pc = 0x7F184718u;
    // 7F184718: stw     r14, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F18471C:
    ctx->pc = 0x7F18471Cu;
    // 7F18471C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F184720:
    ctx->pc = 0x7F184720u;
    // 7F184720: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184720u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184724:
    // 7F184724: addi    r0, r5, 492
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(492);

label_7F184728:
    // 7F184728: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F18472C:
    ctx->pc = 0x7F18472Cu;
    // 7F18472C: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F18472Cu)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_7F184730:
    ctx->pc = 0x7F184730u;
    // 7F184730: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F184734:
    ctx->pc = 0x7F184734u;
    // 7F184734: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184738:
    ctx->pc = 0x7F184738u;
    // 7F184738: fmuls   f1, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F184738u)) return;
    ppc_fmuls(ctx, 1, 0, 28);

label_7F18473C:
    ctx->pc = 0x7F18473Cu;
    // 7F18473C: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184740:
    ctx->pc = 0x7F184740u;
    // 7F184740: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F184744:
    ctx->pc = 0x7F184744u;
    // 7F184744: lfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184748:
    ctx->pc = 0x7F184748u;
    // 7F184748: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F18474C:
    ctx->pc = 0x7F18474Cu;
    // 7F18474C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184750:
    ctx->pc = 0x7F184750u;
    // 7F184750: fsubs   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F184750u)) return;
    ppc_fsubs(ctx, 0, 0, 26);

label_7F184754:
    ctx->pc = 0x7F184754u;
    // 7F184754: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F184758:
    ctx->pc = 0x7F184758u;
    // 7F184758: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18475C:
    ctx->pc = 0x7F18475Cu;
    // 7F18475C: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18475Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184760:
    // 7F184760: bl      0x800261FC
    {
            ctx->lr = 0x7F184764u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F184764:
    ctx->pc = 0x7F184764u;
    ctx->downcount -= 6;
    // 7F184764: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184768:
    // 7F184768: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18476C:
    // 7F18476C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184770:
    // 7F184770: add   r3, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184774:
    // 7F184774: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F184778:
    // 7F184778: bl      0x800261B4
    {
            ctx->lr = 0x7F18477Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F18477C:
    ctx->downcount -= 12;
    // 7F18477C: xoris   r0, r24, 0x8000
    ctx->gpr[0] = ctx->gpr[24] ^ (0x8000u << 16);

label_7F184780:
    ctx->pc = 0x7F184780u;
    // 7F184780: lwz     r3, 20568(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20568);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184784:
    ctx->pc = 0x7F184784u;
    // 7F184784: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184788:
    // 7F184788: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18478C:
    // 7F18478C: rlwinm r0, r3, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F184790:
    ctx->pc = 0x7F184790u;
    // 7F184790: stw     r14, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F184794:
    // 7F184794: add   r3, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184798:
    ctx->pc = 0x7F184798u;
    // 7F184798: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184798u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18479C:
    ctx->pc = 0x7F18479Cu;
    // 7F18479C: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F18479Cu)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_7F1847A0:
    ctx->pc = 0x7F1847A0u;
    // 7F1847A0: fmuls   f24, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1847A0u)) return;
    ppc_fmuls(ctx, 24, 0, 28);

label_7F1847A4:
    ctx->pc = 0x7F1847A4u;
    // 7F1847A4: fmr    f1, f24
    if (!ppc_fp_available_inline(ctx, 0x7F1847A4u)) return;
    ctx->fpr[1] = ctx->fpr[24];

label_7F1847A8:
    // 7F1847A8: bl      0x800261FC
    {
            ctx->lr = 0x7F1847ACu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1847AC:
    ctx->pc = 0x7F1847ACu;
    ctx->downcount -= 6;
    // 7F1847AC: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1847B0:
    // 7F1847B0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1847B4:
    // 7F1847B4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1847B8:
    // 7F1847B8: add   r3, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1847BC:
    // 7F1847BC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1847C0:
    // 7F1847C0: bl      0x800261B4
    {
            ctx->lr = 0x7F1847C4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1847C4:
    ctx->pc = 0x7F1847C4u;
    ctx->downcount -= 13;
    // 7F1847C4: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1847C8:
    ctx->pc = 0x7F1847C8u;
    // 7F1847C8: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1847CC:
    // 7F1847CC: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1847D0:
    ctx->pc = 0x7F1847D0u;
    // 7F1847D0: lwz     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1847D4:
    // 7F1847D4: addi    r4, r4, 84
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(84);

label_7F1847D8:
    // 7F1847D8: add   r4, r15, r4
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1847DC:
    ctx->pc = 0x7F1847DCu;
    // 7F1847DC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1847E0:
    ctx->pc = 0x7F1847E0u;
    // 7F1847E0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1847E4:
    ctx->pc = 0x7F1847E4u;
    // 7F1847E4: lwz     r3, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1847E8:
    ctx->pc = 0x7F1847E8u;
    // 7F1847E8: lwz     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1847EC:
    ctx->pc = 0x7F1847ECu;
    // 7F1847EC: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1847F0:
    ctx->pc = 0x7F1847F0u;
    // 7F1847F0: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1847F4:
    // 7F1847F4: bl      0x7F1850B4
    {
            ctx->lr = 0x7F1847F8u;
            goto label_7F1850B4;
    }

label_7F1847F8:
    ctx->downcount -= 48;
    // 7F1847F8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1847FC:
    // 7F1847FC: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184800:
    // 7F184800: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184804:
    // 7F184804: subf.   r0, r0, r3
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

label_7F184808:
    // 7F184808: bc    12, 2, 0x7F184818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184818;
        }
    }

label_7F18480C:
    ctx->downcount -= 3;
    // 7F18480C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184810:
    ctx->pc = 0x7F184810u;
    // 7F184810: lfs     f1, 4056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184810u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184814:
    // 7F184814: b       0x7F18482C
    {
            goto label_7F18482C;
    }

label_7F184818:
    ctx->downcount -= 1;
    // 7F184818: bl      0x7F18505C
    {
            ctx->lr = 0x7F18481Cu;
            goto label_7F18505C;
    }

label_7F18481C:
    ctx->downcount -= 4;
    // 7F18481C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184820:
    ctx->pc = 0x7F184820u;
    // 7F184820: lfs     f2, 4160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184820u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184824:
    ctx->pc = 0x7F184824u;
    // 7F184824: fsubs   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F184824u)) return;
    ppc_fsubs(ctx, 0, 1, 2);

label_7F184828:
    ctx->pc = 0x7F184828u;
    // 7F184828: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184828u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_7F18482C:
    ctx->downcount -= 3;
    // 7F18482C: addi    r3, r1, 136
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(136);

label_7F184830:
    // 7F184830: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F184834:
    // 7F184834: bl      0x800261FC
    {
            ctx->lr = 0x7F184838u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F184838:
    ctx->pc = 0x7F184838u;
    ctx->downcount -= 7;
    // 7F184838: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18483C:
    // 7F18483C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F184840:
    // 7F184840: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184844:
    // 7F184844: addi    r3, r3, 84
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(84);

label_7F184848:
    // 7F184848: add   r3, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F18484C:
    // 7F18484C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F184850:
    // 7F184850: bl      0x800261B4
    {
            ctx->lr = 0x7F184854u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F184854:
    ctx->downcount -= 1;
    // 7F184854: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184858u;
            goto label_7F1850B4;
    }

label_7F184858:
    ctx->downcount -= 48;
    // 7F184858: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F18485C:
    // 7F18485C: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184860:
    // 7F184860: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184864:
    // 7F184864: subf.   r0, r0, r3
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

label_7F184868:
    // 7F184868: bc    12, 2, 0x7F1848AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1848AC;
        }
    }

label_7F18486C:
    ctx->downcount -= 16;
    // 7F18486C: xoris   r3, r24, 0x8000
    ctx->gpr[3] = ctx->gpr[24] ^ (0x8000u << 16);

label_7F184870:
    // 7F184870: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F184874:
    // 7F184874: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184878:
    ctx->pc = 0x7F184878u;
    // 7F184878: stw     r3, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18487C:
    // 7F18487C: addi    r3, r4, 4064
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4064);

label_7F184880:
    ctx->pc = 0x7F184880u;
    // 7F184880: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184884:
    // 7F184884: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184888:
    ctx->pc = 0x7F184888u;
    // 7F184888: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184888u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18488C:
    // 7F18488C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184890:
    ctx->pc = 0x7F184890u;
    // 7F184890: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184894:
    ctx->pc = 0x7F184894u;
    // 7F184894: lfs     f2, 4164(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184894u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184898:
    ctx->pc = 0x7F184898u;
    // 7F184898: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184898u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F18489C:
    ctx->pc = 0x7F18489Cu;
    // 7F18489C: lfs     f0, 4156(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18489Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1848A0:
    ctx->pc = 0x7F1848A0u;
    // 7F1848A0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1848A0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1848A4:
    ctx->pc = 0x7F1848A4u;
    // 7F1848A4: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1848A4u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F1848A8:
    // 7F1848A8: b       0x7F1848C0
    {
            goto label_7F1848C0;
    }

label_7F1848AC:
    ctx->downcount -= 1;
    // 7F1848AC: bl      0x7F18505C
    {
            ctx->lr = 0x7F1848B0u;
            goto label_7F18505C;
    }

label_7F1848B0:
    ctx->downcount -= 4;
    // 7F1848B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1848B4:
    ctx->pc = 0x7F1848B4u;
    // 7F1848B4: lfs     f0, 4160(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1848B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1848B8:
    ctx->pc = 0x7F1848B8u;
    // 7F1848B8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1848B8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1848BC:
    ctx->pc = 0x7F1848BCu;
    // 7F1848BC: fsubs   f1, f0, f24
    if (!ppc_fp_available_inline(ctx, 0x7F1848BCu)) return;
    ppc_fsubs(ctx, 1, 0, 24);

label_7F1848C0:
    ctx->pc = 0x7F1848C0u;
    ctx->downcount -= 12;
    // 7F1848C0: lwz     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1848C4:
    // 7F1848C4: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1848C8:
    ctx->pc = 0x7F1848C8u;
    // 7F1848C8: lwz     r6, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1848CC:
    // 7F1848CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1848D0:
    ctx->pc = 0x7F1848D0u;
    // 7F1848D0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1848D4:
    ctx->pc = 0x7F1848D4u;
    // 7F1848D4: lwz     r5, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1848D8:
    ctx->pc = 0x7F1848D8u;
    // 7F1848D8: lwz     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1848DC:
    ctx->pc = 0x7F1848DCu;
    // 7F1848DC: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1848E0:
    ctx->pc = 0x7F1848E0u;
    // 7F1848E0: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1848E4:
    ctx->pc = 0x7F1848E4u;
    // 7F1848E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1848E8:
    ctx->pc = 0x7F1848E8u;
    // 7F1848E8: stfs     f29, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1848E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1848EC:
    // 7F1848EC: bl      0x800261FC
    {
            ctx->lr = 0x7F1848F0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1848F0:
    ctx->pc = 0x7F1848F0u;
    ctx->downcount -= 7;
    // 7F1848F0: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1848F4:
    // 7F1848F4: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1848F8:
    // 7F1848F8: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1848FC:
    // 7F1848FC: addi    r3, r3, 84
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(84);

label_7F184900:
    // 7F184900: add   r3, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184904:
    // 7F184904: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F184908:
    // 7F184908: bl      0x800261B4
    {
            ctx->lr = 0x7F18490Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F18490C:
    ctx->pc = 0x7F18490Cu;
    ctx->downcount -= 6;
    // 7F18490C: fsubs   f0, f29, f24
    if (!ppc_fp_available_inline(ctx, 0x7F18490Cu)) return;
    ppc_fsubs(ctx, 0, 29, 24);

label_7F184910:
    ctx->pc = 0x7F184910u;
    // 7F184910: lfs     f1, 20572(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184910u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184914:
    // 7F184914: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F184918:
    // 7F184918: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18491C:
    ctx->pc = 0x7F18491Cu;
    // 7F18491C: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18491Cu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F184920:
    // 7F184920: bl      0x800261FC
    {
            ctx->lr = 0x7F184924u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F184924:
    ctx->pc = 0x7F184924u;
    ctx->downcount -= 7;
    // 7F184924: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184928:
    // 7F184928: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18492C:
    // 7F18492C: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184930:
    // 7F184930: addi    r3, r3, 84
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(84);

label_7F184934:
    // 7F184934: add   r3, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184938:
    // 7F184938: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F18493C:
    // 7F18493C: bl      0x800261B4
    {
            ctx->lr = 0x7F184940u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F184940:
    ctx->pc = 0x7F184940u;
    ctx->downcount -= 5;
    // 7F184940: lfs     f0, 20572(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184940u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184944:
    // 7F184944: addi    r3, r15, 20584
    ctx->gpr[3] = ctx->gpr[15] + (u32)(s32)(20584);

label_7F184948:
    // 7F184948: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18494C:
    ctx->pc = 0x7F18494Cu;
    // 7F18494C: fmuls   f1, f0, f24
    if (!ppc_fp_available_inline(ctx, 0x7F18494Cu)) return;
    ppc_fmuls(ctx, 1, 0, 24);

label_7F184950:
    // 7F184950: bl      0x800261FC
    {
            ctx->lr = 0x7F184954u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F184954:
    ctx->pc = 0x7F184954u;
    ctx->downcount -= 7;
    // 7F184954: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184958:
    // 7F184958: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18495C:
    // 7F18495C: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184960:
    // 7F184960: addi    r3, r3, 84
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(84);

label_7F184964:
    // 7F184964: add   r3, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F184968:
    // 7F184968: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F18496C:
    // 7F18496C: bl      0x800261B4
    {
            ctx->lr = 0x7F184970u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F184970:
    ctx->pc = 0x7F184970u;
    ctx->downcount -= 22;
    // 7F184970: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184974:
    // 7F184974: addi    r4, r15, 20600
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(20600);

label_7F184978:
    ctx->pc = 0x7F184978u;
    // 7F184978: lfs     f1, 20600(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184978u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18497C:
    ctx->pc = 0x7F18497Cu;
    // 7F18497C: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18497Cu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F184980:
    ctx->pc = 0x7F184980u;
    // 7F184980: fmadds f0, f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184980u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184984:
    ctx->pc = 0x7F184984u;
    // 7F184984: stfs     f0, 20600(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184984u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20600);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184988:
    ctx->pc = 0x7F184988u;
    // 7F184988: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18498C:
    ctx->pc = 0x7F18498Cu;
    // 7F18498C: lfs     f1, 20604(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F18498Cu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184990:
    ctx->pc = 0x7F184990u;
    // 7F184990: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184990u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F184994:
    ctx->pc = 0x7F184994u;
    // 7F184994: fmadds f0, f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184994u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184998:
    ctx->pc = 0x7F184998u;
    // 7F184998: stfs     f0, 20604(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184998u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20604);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18499C:
    ctx->pc = 0x7F18499Cu;
    // 7F18499C: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18499Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1849A0:
    ctx->pc = 0x7F1849A0u;
    // 7F1849A0: lfs     f1, 20608(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F1849A0u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1849A4:
    ctx->pc = 0x7F1849A4u;
    // 7F1849A4: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1849A4u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F1849A8:
    ctx->pc = 0x7F1849A8u;
    // 7F1849A8: fmadds f0, f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1849A8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1849AC:
    ctx->pc = 0x7F1849ACu;
    // 7F1849AC: stfs     f0, 20608(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F1849ACu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20608);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1849B0:
    ctx->pc = 0x7F1849B0u;
    // 7F1849B0: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1849B4:
    // 7F1849B4: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1849B8:
    // 7F1849B8: addi    r3, r3, 84
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(84);

label_7F1849BC:
    // 7F1849BC: add   r3, r15, r3
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1849C0:
    // 7F1849C0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1849C4:
    // 7F1849C4: bl      0x800261B4
    {
            ctx->lr = 0x7F1849C8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1849C8:
    ctx->pc = 0x7F1849C8u;
    ctx->downcount -= 4;
    // 7F1849C8: lfs     f1, 20572(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F1849C8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1849CC:
    ctx->pc = 0x7F1849CCu;
    // 7F1849CC: fcmpo   cr0, f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F1849CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[23], true);

label_7F1849D0:
    // 7F1849D0: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1849D4:
    // 7F1849D4: bc    4, 2, 0x7F1849F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1849F0;
        }
    }

label_7F1849D8:
    ctx->pc = 0x7F1849D8u;
    ctx->downcount -= 6;
    // 7F1849D8: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1849DC:
    // 7F1849DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1849E0:
    // 7F1849E0: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1849E4:
    // 7F1849E4: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F1849E8:
    ctx->pc = 0x7F1849E8u;
    // 7F1849E8: stbx    r4, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1849EC:
    // 7F1849EC: b       0x7F184A74
    {
            goto label_7F184A74;
    }

label_7F1849F0:
    ctx->downcount -= 4;
    // 7F1849F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1849F4:
    ctx->pc = 0x7F1849F4u;
    // 7F1849F4: lfs     f0, 4172(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1849F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1849F8:
    ctx->pc = 0x7F1849F8u;
    // 7F1849F8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1849F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1849FC:
    // 7F1849FC: bc    4, 0, 0x7F184A60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184A60;
        }
    }

label_7F184A00:
    ctx->downcount -= 1;
    // 7F184A00: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184A04u;
            goto label_7F1850B4;
    }

label_7F184A04:
    ctx->downcount -= 54;
    // 7F184A04: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184A08:
    ctx->pc = 0x7F184A08u;
    // 7F184A08: lfs     f0, 20572(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184A08u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184A0C:
    ctx->pc = 0x7F184A0Cu;
    // 7F184A0C: lfs     f1, 4176(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184A0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184A10:
    ctx->pc = 0x7F184A10u;
    // 7F184A10: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184A10u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F184A14:
    ctx->pc = 0x7F184A14u;
    // 7F184A14: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184A14u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184A18:
    ctx->pc = 0x7F184A18u;
    // 7F184A18: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184A18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184A1C:
    ctx->pc = 0x7F184A1Cu;
    // 7F184A1C: lwz     r4, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184A20:
    // 7F184A20: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184A24:
    // 7F184A24: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184A28:
    // 7F184A28: subf.   r0, r0, r3
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

label_7F184A2C:
    // 7F184A2C: bc    4, 2, 0x7F184A48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184A48;
        }
    }

label_7F184A30:
    ctx->pc = 0x7F184A30u;
    ctx->downcount -= 6;
    // 7F184A30: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184A34:
    // 7F184A34: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F184A38:
    // 7F184A38: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184A3C:
    // 7F184A3C: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F184A40:
    ctx->pc = 0x7F184A40u;
    // 7F184A40: stbx    r4, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F184A44:
    // 7F184A44: b       0x7F184A74
    {
            goto label_7F184A74;
    }

label_7F184A48:
    ctx->pc = 0x7F184A48u;
    ctx->downcount -= 6;
    // 7F184A48: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184A4C:
    // 7F184A4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F184A50:
    // 7F184A50: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184A54:
    // 7F184A54: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F184A58:
    ctx->pc = 0x7F184A58u;
    // 7F184A58: stbx    r4, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F184A5C:
    // 7F184A5C: b       0x7F184A74
    {
            goto label_7F184A74;
    }

label_7F184A60:
    ctx->pc = 0x7F184A60u;
    ctx->downcount -= 5;
    // 7F184A60: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184A64:
    // 7F184A64: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F184A68:
    // 7F184A68: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184A6C:
    // 7F184A6C: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F184A70:
    ctx->pc = 0x7F184A70u;
    // 7F184A70: stbx    r4, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F184A74:
    ctx->pc = 0x7F184A74u;
    ctx->downcount -= 20;
    // 7F184A74: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184A78:
    // 7F184A78: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F184A7C:
    // 7F184A7C: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F184A80:
    // 7F184A80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F184A84:
    // 7F184A84: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184A88:
    // 7F184A88: cmpwi   r24, 16
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184A8C:
    // 7F184A8C: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F184A90:
    ctx->pc = 0x7F184A90u;
    // 7F184A90: sthx    r5, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F184A94:
    ctx->pc = 0x7F184A94u;
    // 7F184A94: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184A98:
    // 7F184A98: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F184A9C:
    // 7F184A9C: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F184AA0:
    ctx->pc = 0x7F184AA0u;
    // 7F184AA0: sthx    r5, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F184AA4:
    ctx->pc = 0x7F184AA4u;
    // 7F184AA4: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184AA8:
    // 7F184AA8: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F184AAC:
    // 7F184AAC: addi    r0, r3, 16468
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16468);

label_7F184AB0:
    ctx->pc = 0x7F184AB0u;
    // 7F184AB0: stwx    r4, r15, r0
    {
        u32 ea = ctx->gpr[15] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184AB4:
    ctx->pc = 0x7F184AB4u;
    // 7F184AB4: lwz     r3, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184AB8:
    // 7F184AB8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F184ABC:
    ctx->pc = 0x7F184ABCu;
    // 7F184ABC: stw     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184AC0:
    // 7F184AC0: bc    12, 0, 0x7F184688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F184688u;
                return;
            }
            goto label_7F184688;
        }
    }

label_7F184AC4:
    ctx->pc = 0x7F184AC4u;
    ctx->downcount -= 3;
    // 7F184AC4: lwz     r0, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184AC8:
    ctx->pc = 0x7F184AC8u;
    // 7F184AC8: cmpwi   r0, 1024
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184ACC:
    ctx->pc = 0x7F184ACCu;
    // 7F184ACC: bc    12, 0, 0x7F184AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184AD4;
        }
    }

label_7F184AD0:
    ctx->pc = 0x7F184AD0u;
    ctx->downcount -= 1;
    // 7F184AD0: stw     r4, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F184AD4:
    ctx->pc = 0x7F184AD4u;
    ctx->downcount -= 6;
    // 7F184AD4: lwz     r3, 20564(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20564);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184AD8:
    ctx->pc = 0x7F184AD8u;
    // 7F184AD8: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F184ADC:
    ctx->pc = 0x7F184ADCu;
    // 7F184ADC: stw     r0, 20568(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20568);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184AE0:
    ctx->pc = 0x7F184AE0u;
    // 7F184AE0: lwz     r3, 20568(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20568);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184AE4:
    ctx->pc = 0x7F184AE4u;
    // 7F184AE4: cmpwi   r3, 0
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

label_7F184AE8:
    ctx->pc = 0x7F184AE8u;
    // 7F184AE8: bc    4, 0, 0x7F184AF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184AF4;
        }
    }

label_7F184AEC:
    ctx->pc = 0x7F184AECu;
    ctx->downcount -= 2;
    // 7F184AEC: addi    r0, r3, 1024
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1024);

label_7F184AF0:
    ctx->pc = 0x7F184AF0u;
    // 7F184AF0: stw     r0, 20568(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20568);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184AF4:
    ctx->pc = 0x7F184AF4u;
    ctx->downcount -= 12;
    // 7F184AF4: lwz     r3, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184AF8:
    ctx->pc = 0x7F184AF8u;
    // 7F184AF8: lwz     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184AFC:
    ctx->pc = 0x7F184AFCu;
    // 7F184AFC: stw     r3, 20584(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20584);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184B00:
    ctx->pc = 0x7F184B00u;
    // 7F184B00: stw     r0, 20588(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184B04:
    ctx->pc = 0x7F184B04u;
    // 7F184B04: lwz     r3, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184B08:
    ctx->pc = 0x7F184B08u;
    // 7F184B08: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184B0C:
    ctx->pc = 0x7F184B0Cu;
    // 7F184B0C: stw     r3, 20592(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20592);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184B10:
    ctx->pc = 0x7F184B10u;
    // 7F184B10: stw     r0, 20596(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184B14:
    ctx->pc = 0x7F184B14u;
    // 7F184B14: lwz     r3, 20628(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184B18:
    ctx->pc = 0x7F184B18u;
    // 7F184B18: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184B1C:
    ctx->pc = 0x7F184B1Cu;
    // 7F184B1C: cmpwi   r0, 4
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

label_7F184B20:
    ctx->pc = 0x7F184B20u;
    // 7F184B20: bc    12, 2, 0x7F184B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184B2C;
        }
    }

label_7F184B24:
    ctx->pc = 0x7F184B24u;
    ctx->downcount -= 2;
    // 7F184B24: cmpwi   r0, 0
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

label_7F184B28:
    ctx->pc = 0x7F184B28u;
    // 7F184B28: bc    4, 2, 0x7F184B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184B74;
        }
    }

label_7F184B2C:
    ctx->pc = 0x7F184B2Cu;
    ctx->downcount -= 3;
    // 7F184B2C: lwz     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184B30:
    ctx->pc = 0x7F184B30u;
    // 7F184B30: cmpwi   r0, 1024
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184B34:
    ctx->pc = 0x7F184B34u;
    // 7F184B34: bc    12, 0, 0x7F184B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184B74;
        }
    }

label_7F184B38:
    ctx->pc = 0x7F184B38u;
    ctx->downcount -= 6;
    // 7F184B38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F184B3C:
    ctx->pc = 0x7F184B3Cu;
    // 7F184B3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184B40:
    ctx->pc = 0x7F184B40u;
    // 7F184B40: stw     r3, 20624(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20624);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184B44:
    ctx->pc = 0x7F184B44u;
    // 7F184B44: lwz     r3, 20628(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184B48:
    ctx->pc = 0x7F184B48u;
    // 7F184B48: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184B4C:
    ctx->pc = 0x7F184B4Cu;
    // 7F184B4C: bl      0x7F185014
    {
            ctx->lr = 0x7F184B50u;
            goto label_7F185014;
    }

label_7F184B50:
    ctx->pc = 0x7F184B50u;
    ctx->downcount -= 9;
    // 7F184B50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184B54:
    ctx->pc = 0x7F184B54u;
    // 7F184B54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184B58:
    ctx->pc = 0x7F184B58u;
    // 7F184B58: lfs     f0, 4180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184B58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184B5C:
    ctx->pc = 0x7F184B5Cu;
    // 7F184B5C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184B5Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F184B60:
    ctx->pc = 0x7F184B60u;
    // 7F184B60: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184B60u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184B64:
    ctx->pc = 0x7F184B64u;
    // 7F184B64: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184B68:
    ctx->pc = 0x7F184B68u;
    // 7F184B68: lwz     r3, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184B6C:
    ctx->pc = 0x7F184B6Cu;
    // 7F184B6C: stw     r3, 20656(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20656);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184B70:
    ctx->pc = 0x7F184B70u;
    // 7F184B70: stw     r0, 20660(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184B74:
    ctx->pc = 0x7F184B74u;
    ctx->downcount -= 2;
    // 7F184B74: cmpwi   r18, 0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184B78:
    ctx->pc = 0x7F184B78u;
    // 7F184B78: bc    12, 2, 0x7F184C24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184C24;
        }
    }

label_7F184B7C:
    ctx->pc = 0x7F184B7Cu;
    ctx->downcount -= 49;
    // 7F184B7C: lwz     r4, 20620(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20620);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184B80:
    ctx->pc = 0x7F184B80u;
    // 7F184B80: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F184B84:
    ctx->pc = 0x7F184B84u;
    // 7F184B84: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F184B88:
    ctx->pc = 0x7F184B88u;
    // 7F184B88: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F184B8C:
    ctx->pc = 0x7F184B8Cu;
    // 7F184B8C: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_7F184B90:
    ctx->pc = 0x7F184B90u;
    // 7F184B90: bc    12, 2, 0x7F184BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184BA0;
        }
    }

label_7F184B94:
    ctx->pc = 0x7F184B94u;
    ctx->downcount -= 3;
    // 7F184B94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F184B98:
    ctx->pc = 0x7F184B98u;
    // 7F184B98: li      r4, 127
    ctx->gpr[4] = (u32)(s32)(127);

label_7F184B9C:
    ctx->pc = 0x7F184B9Cu;
    // 7F184B9C: bl      0x7F01F408
    {
            ctx->lr = 0x7F184BA0u;
            ctx->pc = 0x7F01F408u;
            return;
    }

label_7F184BA0:
    ctx->pc = 0x7F184BA0u;
    ctx->downcount -= 3;
    // 7F184BA0: lwz     r3, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184BA4:
    ctx->pc = 0x7F184BA4u;
    // 7F184BA4: cmpwi   r3, 0
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

label_7F184BA8:
    ctx->pc = 0x7F184BA8u;
    // 7F184BA8: bc    4, 2, 0x7F184C18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184C18;
        }
    }

label_7F184BAC:
    ctx->pc = 0x7F184BACu;
    ctx->downcount -= 5;
    // 7F184BAC: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F184BB0:
    ctx->pc = 0x7F184BB0u;
    // 7F184BB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F184BB4:
    ctx->pc = 0x7F184BB4u;
    // 7F184BB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F184BB8:
    ctx->pc = 0x7F184BB8u;
    // 7F184BB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184BBC:
    ctx->pc = 0x7F184BBCu;
    // 7F184BBC: bl      0x7F012018
    {
            ctx->lr = 0x7F184BC0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F184BC0:
    ctx->pc = 0x7F184BC0u;
    ctx->downcount -= 5;
    // 7F184BC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184BC4:
    ctx->pc = 0x7F184BC4u;
    // 7F184BC4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F184BC8:
    ctx->pc = 0x7F184BC8u;
    // 7F184BC8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F184BCC:
    ctx->pc = 0x7F184BCCu;
    // 7F184BCC: or.   r0, r4, r0
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

label_7F184BD0:
    ctx->pc = 0x7F184BD0u;
    // 7F184BD0: bc    12, 2, 0x7F184BE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184BE8;
        }
    }

label_7F184BD4:
    ctx->pc = 0x7F184BD4u;
    ctx->downcount -= 4;
    // 7F184BD4: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F184BD8:
    ctx->pc = 0x7F184BD8u;
    // 7F184BD8: li      r3, 834
    ctx->gpr[3] = (u32)(s32)(834);

label_7F184BDC:
    ctx->pc = 0x7F184BDCu;
    // 7F184BDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184BE0:
    ctx->pc = 0x7F184BE0u;
    // 7F184BE0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F184BE4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F184BE4:
    ctx->pc = 0x7F184BE4u;
    ctx->downcount -= 1;
    // 7F184BE4: b       0x7F184BF8
    {
            goto label_7F184BF8;
    }

label_7F184BE8:
    ctx->pc = 0x7F184BE8u;
    ctx->downcount -= 4;
    // 7F184BE8: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F184BEC:
    ctx->pc = 0x7F184BECu;
    // 7F184BEC: li      r3, 828
    ctx->gpr[3] = (u32)(s32)(828);

label_7F184BF0:
    ctx->pc = 0x7F184BF0u;
    // 7F184BF0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184BF4:
    ctx->pc = 0x7F184BF4u;
    // 7F184BF4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F184BF8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F184BF8:
    ctx->pc = 0x7F184BF8u;
    ctx->downcount -= 1;
    // 7F184BF8: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184BFCu;
            goto label_7F1850B4;
    }

label_7F184BFC:
    ctx->pc = 0x7F184BFCu;
    ctx->downcount -= 50;
    // 7F184BFC: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F184C00:
    ctx->pc = 0x7F184C00u;
    // 7F184C00: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184C04:
    ctx->pc = 0x7F184C04u;
    // 7F184C04: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184C08:
    ctx->pc = 0x7F184C08u;
    // 7F184C08: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F184C0C:
    ctx->pc = 0x7F184C0Cu;
    // 7F184C0C: addi    r0, r3, 6
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6);

label_7F184C10:
    ctx->pc = 0x7F184C10u;
    // 7F184C10: stw     r0, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184C14:
    ctx->pc = 0x7F184C14u;
    // 7F184C14: b       0x7F184CCC
    {
            goto label_7F184CCC;
    }

label_7F184C18:
    ctx->pc = 0x7F184C18u;
    ctx->downcount -= 3;
    // 7F184C18: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F184C1C:
    ctx->pc = 0x7F184C1Cu;
    // 7F184C1C: stw     r0, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184C20:
    ctx->pc = 0x7F184C20u;
    // 7F184C20: b       0x7F184CCC
    {
            goto label_7F184CCC;
    }

label_7F184C24:
    ctx->pc = 0x7F184C24u;
    ctx->downcount -= 2;
    // 7F184C24: cmpwi   r16, 0
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

label_7F184C28:
    ctx->pc = 0x7F184C28u;
    // 7F184C28: bc    12, 2, 0x7F184CC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184CC4;
        }
    }

label_7F184C2C:
    ctx->pc = 0x7F184C2Cu;
    ctx->downcount -= 3;
    // 7F184C2C: lwz     r3, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184C30:
    ctx->pc = 0x7F184C30u;
    // 7F184C30: cmpwi   r3, 0
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

label_7F184C34:
    ctx->pc = 0x7F184C34u;
    // 7F184C34: bc    4, 2, 0x7F184CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184CB8;
        }
    }

label_7F184C38:
    ctx->pc = 0x7F184C38u;
    ctx->downcount -= 3;
    // 7F184C38: lwz     r0, 20636(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184C3C:
    ctx->pc = 0x7F184C3Cu;
    // 7F184C3C: cmpwi   r0, 2
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

label_7F184C40:
    ctx->pc = 0x7F184C40u;
    // 7F184C40: bc    4, 2, 0x7F184C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184C88;
        }
    }

label_7F184C44:
    ctx->pc = 0x7F184C44u;
    ctx->downcount -= 16;
    // 7F184C44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184C48:
    ctx->pc = 0x7F184C48u;
    // 7F184C48: lfs     f1, 0(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F184C48u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184C4C:
    ctx->pc = 0x7F184C4Cu;
    // 7F184C4C: addi    r4, r3, 4148
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4148);

label_7F184C50:
    ctx->pc = 0x7F184C50u;
    // 7F184C50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184C54:
    ctx->pc = 0x7F184C54u;
    // 7F184C54: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184C54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184C58:
    ctx->pc = 0x7F184C58u;
    // 7F184C58: addi    r4, r3, 4184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4184);

label_7F184C5C:
    ctx->pc = 0x7F184C5Cu;
    // 7F184C5C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F184C60:
    ctx->pc = 0x7F184C60u;
    // 7F184C60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F184C64:
    ctx->pc = 0x7F184C64u;
    // 7F184C64: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184C64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184C68:
    ctx->pc = 0x7F184C68u;
    // 7F184C68: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_7F184C6C:
    ctx->pc = 0x7F184C6Cu;
    // 7F184C6C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184C70:
    ctx->pc = 0x7F184C70u;
    // 7F184C70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184C74:
    ctx->pc = 0x7F184C74u;
    // 7F184C74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F184C78:
    ctx->pc = 0x7F184C78u;
    // 7F184C78: lfs     f0, 8(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F184C78u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184C7C:
    ctx->pc = 0x7F184C7Cu;
    // 7F184C7C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184C7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184C80:
    ctx->pc = 0x7F184C80u;
    // 7F184C80: bl      0x7F1E21D0
    {
            ctx->lr = 0x7F184C84u;
            ctx->pc = 0x7F1E21D0u;
            return;
    }

label_7F184C84:
    ctx->pc = 0x7F184C84u;
    ctx->downcount -= 1;
    // 7F184C84: b       0x7F184C98
    {
            goto label_7F184C98;
    }

label_7F184C88:
    ctx->pc = 0x7F184C88u;
    ctx->downcount -= 4;
    // 7F184C88: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F184C8C:
    ctx->pc = 0x7F184C8Cu;
    // 7F184C8C: li      r3, 831
    ctx->gpr[3] = (u32)(s32)(831);

label_7F184C90:
    ctx->pc = 0x7F184C90u;
    // 7F184C90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184C94:
    ctx->pc = 0x7F184C94u;
    // 7F184C94: bl      0x7F0117B8
    {
            ctx->lr = 0x7F184C98u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F184C98:
    ctx->pc = 0x7F184C98u;
    ctx->downcount -= 1;
    // 7F184C98: bl      0x7F1850B4
    {
            ctx->lr = 0x7F184C9Cu;
            goto label_7F1850B4;
    }

label_7F184C9C:
    ctx->pc = 0x7F184C9Cu;
    ctx->downcount -= 50;
    // 7F184C9C: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F184CA0:
    ctx->pc = 0x7F184CA0u;
    // 7F184CA0: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F184CA4:
    ctx->pc = 0x7F184CA4u;
    // 7F184CA4: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F184CA8:
    ctx->pc = 0x7F184CA8u;
    // 7F184CA8: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F184CAC:
    ctx->pc = 0x7F184CACu;
    // 7F184CAC: addi    r0, r3, 6
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6);

label_7F184CB0:
    ctx->pc = 0x7F184CB0u;
    // 7F184CB0: stw     r0, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184CB4:
    ctx->pc = 0x7F184CB4u;
    // 7F184CB4: b       0x7F184CCC
    {
            goto label_7F184CCC;
    }

label_7F184CB8:
    ctx->pc = 0x7F184CB8u;
    ctx->downcount -= 3;
    // 7F184CB8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F184CBC:
    ctx->pc = 0x7F184CBCu;
    // 7F184CBC: stw     r0, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184CC0:
    ctx->pc = 0x7F184CC0u;
    // 7F184CC0: b       0x7F184CCC
    {
            goto label_7F184CCC;
    }

label_7F184CC4:
    ctx->pc = 0x7F184CC4u;
    ctx->downcount -= 2;
    // 7F184CC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184CC8:
    ctx->pc = 0x7F184CC8u;
    // 7F184CC8: stw     r0, 23228(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184CCC:
    ctx->pc = 0x7F184CCCu;
    ctx->downcount -= 11;
    // 7F184CCC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F184CD0:
    ctx->pc = 0x7F184CD0u;
    // 7F184CD0: lwzu     r4, -5736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5736);
        ctx->gpr[4] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F184CD4:
    ctx->pc = 0x7F184CD4u;
    // 7F184CD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184CD8:
    ctx->pc = 0x7F184CD8u;
    // 7F184CD8: li      r0, 4144
    ctx->gpr[0] = (u32)(s32)(4144);

label_7F184CDC:
    ctx->pc = 0x7F184CDCu;
    // 7F184CDC: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F184CE0:
    ctx->pc = 0x7F184CE0u;
    // 7F184CE0: and   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F184CE4:
    ctx->pc = 0x7F184CE4u;
    // 7F184CE4: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F184CE8:
    ctx->pc = 0x7F184CE8u;
    // 7F184CE8: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F184CEC:
    ctx->pc = 0x7F184CECu;
    // 7F184CEC: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F184CF0:
    ctx->pc = 0x7F184CF0u;
    // 7F184CF0: or.   r0, r3, r0
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

label_7F184CF4:
    ctx->pc = 0x7F184CF4u;
    // 7F184CF4: bc    12, 2, 0x7F184DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184DF8;
        }
    }

label_7F184CF8:
    ctx->pc = 0x7F184CF8u;
    ctx->downcount -= 6;
    // 7F184CF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F184CFC:
    ctx->pc = 0x7F184CFCu;
    // 7F184CFC: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F184D00:
    ctx->pc = 0x7F184D00u;
    // 7F184D00: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F184D04:
    ctx->pc = 0x7F184D04u;
    // 7F184D04: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F184D08:
    ctx->pc = 0x7F184D08u;
    // 7F184D08: or.   r0, r3, r0
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

label_7F184D0C:
    ctx->pc = 0x7F184D0Cu;
    // 7F184D0C: bc    12, 2, 0x7F184DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184DF8;
        }
    }

label_7F184D10:
    ctx->pc = 0x7F184D10u;
    ctx->downcount -= 7;
    // 7F184D10: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F184D14:
    ctx->pc = 0x7F184D14u;
    // 7F184D14: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F184D18:
    ctx->pc = 0x7F184D18u;
    // 7F184D18: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184D1C:
    ctx->pc = 0x7F184D1Cu;
    // 7F184D1C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184D20:
    ctx->pc = 0x7F184D20u;
    // 7F184D20: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184D24:
    ctx->pc = 0x7F184D24u;
    // 7F184D24: rlwinm. r0, r0, 0, 19, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00001000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F184D28:
    ctx->pc = 0x7F184D28u;
    // 7F184D28: bc    12, 2, 0x7F184DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184DF8;
        }
    }

label_7F184D2C:
    ctx->pc = 0x7F184D2Cu;
    ctx->downcount -= 3;
    // 7F184D2C: lwz     r0, 20652(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184D30:
    ctx->pc = 0x7F184D30u;
    // 7F184D30: cmpwi   r0, 0
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

label_7F184D34:
    ctx->pc = 0x7F184D34u;
    // 7F184D34: bc    4, 2, 0x7F184D8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184D8C;
        }
    }

label_7F184D38:
    ctx->pc = 0x7F184D38u;
    ctx->downcount -= 2;
    // 7F184D38: cmplwi  r17, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[17]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184D3C:
    ctx->pc = 0x7F184D3Cu;
    // 7F184D3C: bc    12, 2, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184D40:
    ctx->pc = 0x7F184D40u;
    ctx->downcount -= 5;
    // 7F184D40: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F184D44:
    ctx->pc = 0x7F184D44u;
    // 7F184D44: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F184D48:
    ctx->pc = 0x7F184D48u;
    // 7F184D48: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F184D4C:
    ctx->pc = 0x7F184D4Cu;
    // 7F184D4C: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F184D50:
    ctx->pc = 0x7F184D50u;
    // 7F184D50: bl      0x800261D8
    {
            ctx->lr = 0x7F184D54u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F184D54:
    ctx->pc = 0x7F184D54u;
    ctx->downcount -= 9;
    // 7F184D54: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184D54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184D58:
    ctx->pc = 0x7F184D58u;
    // 7F184D58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184D5C:
    ctx->pc = 0x7F184D5Cu;
    // 7F184D5C: lfs     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184D60:
    ctx->pc = 0x7F184D60u;
    // 7F184D60: fmuls   f2, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184D60u)) return;
    ppc_fmuls(ctx, 2, 0, 0);

label_7F184D64:
    ctx->pc = 0x7F184D64u;
    // 7F184D64: lfs     f0, 4188(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184D64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184D68:
    ctx->pc = 0x7F184D68u;
    // 7F184D68: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184D68u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F184D6C:
    ctx->pc = 0x7F184D6Cu;
    // 7F184D6C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184D6Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F184D70:
    ctx->pc = 0x7F184D70u;
    // 7F184D70: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184D70u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F184D74:
    ctx->pc = 0x7F184D74u;
    // 7F184D74: bc    4, 0, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184D78:
    ctx->pc = 0x7F184D78u;
    ctx->downcount -= 2;
    // 7F184D78: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F184D7C:
    ctx->pc = 0x7F184D7Cu;
    // 7F184D7C: bl      0x7F220018
    {
            ctx->lr = 0x7F184D80u;
            ctx->pc = 0x7F220018u;
            return;
    }

label_7F184D80:
    ctx->pc = 0x7F184D80u;
    ctx->downcount -= 3;
    // 7F184D80: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F184D84:
    ctx->pc = 0x7F184D84u;
    // 7F184D84: stw     r0, 20652(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184D88:
    ctx->pc = 0x7F184D88u;
    // 7F184D88: b       0x7F184E0C
    {
            goto label_7F184E0C;
    }

label_7F184D8C:
    ctx->pc = 0x7F184D8Cu;
    ctx->downcount -= 49;
    // 7F184D8C: lwz     r4, 20620(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20620);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184D90:
    ctx->pc = 0x7F184D90u;
    // 7F184D90: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F184D94:
    ctx->pc = 0x7F184D94u;
    // 7F184D94: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F184D98:
    ctx->pc = 0x7F184D98u;
    // 7F184D98: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F184D9C:
    ctx->pc = 0x7F184D9Cu;
    // 7F184D9C: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
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

label_7F184DA0:
    ctx->pc = 0x7F184DA0u;
    // 7F184DA0: bc    4, 2, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184DA4:
    ctx->pc = 0x7F184DA4u;
    ctx->downcount -= 2;
    // 7F184DA4: cmplwi  r17, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[17]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F184DA8:
    ctx->pc = 0x7F184DA8u;
    // 7F184DA8: bc    12, 2, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184DAC:
    ctx->pc = 0x7F184DACu;
    ctx->downcount -= 5;
    // 7F184DAC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F184DB0:
    ctx->pc = 0x7F184DB0u;
    // 7F184DB0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F184DB4:
    ctx->pc = 0x7F184DB4u;
    // 7F184DB4: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F184DB8:
    ctx->pc = 0x7F184DB8u;
    // 7F184DB8: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F184DBC:
    ctx->pc = 0x7F184DBCu;
    // 7F184DBC: bl      0x800261D8
    {
            ctx->lr = 0x7F184DC0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F184DC0:
    ctx->pc = 0x7F184DC0u;
    ctx->downcount -= 9;
    // 7F184DC0: lfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184DC4:
    ctx->pc = 0x7F184DC4u;
    // 7F184DC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184DC8:
    ctx->pc = 0x7F184DC8u;
    // 7F184DC8: lfs     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184DCC:
    ctx->pc = 0x7F184DCCu;
    // 7F184DCC: fmuls   f2, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184DCCu)) return;
    ppc_fmuls(ctx, 2, 0, 0);

label_7F184DD0:
    ctx->pc = 0x7F184DD0u;
    // 7F184DD0: lfs     f0, 4192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184DD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184DD4:
    ctx->pc = 0x7F184DD4u;
    // 7F184DD4: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184DD4u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F184DD8:
    ctx->pc = 0x7F184DD8u;
    // 7F184DD8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F184DD8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F184DDC:
    ctx->pc = 0x7F184DDCu;
    // 7F184DDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184DDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F184DE0:
    ctx->pc = 0x7F184DE0u;
    // 7F184DE0: bc    4, 0, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184DE4:
    ctx->pc = 0x7F184DE4u;
    ctx->downcount -= 2;
    // 7F184DE4: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F184DE8:
    ctx->pc = 0x7F184DE8u;
    // 7F184DE8: bl      0x7F220018
    {
            ctx->lr = 0x7F184DECu;
            ctx->pc = 0x7F220018u;
            return;
    }

label_7F184DEC:
    ctx->pc = 0x7F184DECu;
    ctx->downcount -= 3;
    // 7F184DEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F184DF0:
    ctx->pc = 0x7F184DF0u;
    // 7F184DF0: stw     r0, 20652(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184DF4:
    ctx->pc = 0x7F184DF4u;
    // 7F184DF4: b       0x7F184E0C
    {
            goto label_7F184E0C;
    }

label_7F184DF8:
    ctx->pc = 0x7F184DF8u;
    ctx->downcount -= 3;
    // 7F184DF8: lwz     r0, 20652(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184DFC:
    ctx->pc = 0x7F184DFCu;
    // 7F184DFC: cmpwi   r0, 1
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

label_7F184E00:
    ctx->pc = 0x7F184E00u;
    // 7F184E00: bc    4, 2, 0x7F184E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184E0C;
        }
    }

label_7F184E04:
    ctx->pc = 0x7F184E04u;
    ctx->downcount -= 2;
    // 7F184E04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F184E08:
    ctx->pc = 0x7F184E08u;
    // 7F184E08: stw     r0, 20652(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184E0C:
    ctx->pc = 0x7F184E0Cu;
    ctx->downcount -= 2;
    // 7F184E0C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F184E10:
    ctx->pc = 0x7F184E10u;
    // 7F184E10: bl      0x7F183B5C
    {
            ctx->lr = 0x7F184E14u;
            ctx->pc = 0x7F183B5Cu;
            return;
    }

label_7F184E14:
    ctx->pc = 0x7F184E14u;
    ctx->downcount -= 3;
    // 7F184E14: lwz     r0, 20660(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184E18:
    ctx->pc = 0x7F184E18u;
    // 7F184E18: cmpwi   r0, 1
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

label_7F184E1C:
    ctx->pc = 0x7F184E1Cu;
    // 7F184E1C: bc    4, 2, 0x7F184F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184F74;
        }
    }

label_7F184E20:
    ctx->pc = 0x7F184E20u;
    ctx->downcount -= 6;
    // 7F184E20: lwz     r3, 20656(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20656);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184E24:
    ctx->pc = 0x7F184E24u;
    // 7F184E24: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F184E28:
    ctx->pc = 0x7F184E28u;
    // 7F184E28: stw     r0, 20656(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184E2C:
    ctx->pc = 0x7F184E2Cu;
    // 7F184E2C: lwz     r0, 20656(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184E30:
    ctx->pc = 0x7F184E30u;
    // 7F184E30: cmpwi   r0, 0
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

label_7F184E34:
    ctx->pc = 0x7F184E34u;
    // 7F184E34: bc    12, 1, 0x7F184F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F184F74;
        }
    }

label_7F184E38:
    ctx->pc = 0x7F184E38u;
    ctx->downcount -= 1;
    // 7F184E38: bl      0x7F185014
    {
            ctx->lr = 0x7F184E3Cu;
            goto label_7F185014;
    }

label_7F184E3C:
    ctx->pc = 0x7F184E3Cu;
    ctx->downcount -= 9;
    // 7F184E3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184E40:
    ctx->pc = 0x7F184E40u;
    // 7F184E40: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184E44:
    ctx->pc = 0x7F184E44u;
    // 7F184E44: lfs     f2, 4200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184E44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184E48:
    ctx->pc = 0x7F184E48u;
    // 7F184E48: lfs     f0, 4196(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184E48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184E4C:
    ctx->pc = 0x7F184E4Cu;
    // 7F184E4C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184E4Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184E50:
    ctx->pc = 0x7F184E50u;
    // 7F184E50: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184E50u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184E54:
    ctx->pc = 0x7F184E54u;
    // 7F184E54: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184E54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184E58:
    ctx->pc = 0x7F184E58u;
    // 7F184E58: lwz     r14, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_7F184E5C:
    ctx->pc = 0x7F184E5Cu;
    // 7F184E5C: bl      0x7F185014
    {
            ctx->lr = 0x7F184E60u;
            goto label_7F185014;
    }

label_7F184E60:
    ctx->pc = 0x7F184E60u;
    ctx->downcount -= 9;
    // 7F184E60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184E64:
    ctx->pc = 0x7F184E64u;
    // 7F184E64: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184E68:
    ctx->pc = 0x7F184E68u;
    // 7F184E68: lfs     f2, 4180(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184E68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184E6C:
    ctx->pc = 0x7F184E6Cu;
    // 7F184E6C: lfs     f0, 4204(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184E6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184E70:
    ctx->pc = 0x7F184E70u;
    // 7F184E70: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184E70u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184E74:
    ctx->pc = 0x7F184E74u;
    // 7F184E74: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184E74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184E78:
    ctx->pc = 0x7F184E78u;
    // 7F184E78: stfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184E7C:
    ctx->pc = 0x7F184E7Cu;
    // 7F184E7C: lwz     r16, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F184E80:
    ctx->pc = 0x7F184E80u;
    // 7F184E80: bl      0x7F185014
    {
            ctx->lr = 0x7F184E84u;
            goto label_7F185014;
    }

label_7F184E84:
    ctx->pc = 0x7F184E84u;
    ctx->downcount -= 14;
    // 7F184E84: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184E88:
    ctx->pc = 0x7F184E88u;
    // 7F184E88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184E8C:
    ctx->pc = 0x7F184E8Cu;
    // 7F184E8C: lfs     f0, 4208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184E8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184E90:
    ctx->pc = 0x7F184E90u;
    // 7F184E90: rlwinm r0, r16, 16, 8, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[16], 16u) & 0x00FF0000u;
    }

label_7F184E94:
    ctx->pc = 0x7F184E94u;
    // 7F184E94: lfs     f2, 4212(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184E94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184E98:
    ctx->pc = 0x7F184E98u;
    // 7F184E98: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F184E9C:
    ctx->pc = 0x7F184E9Cu;
    // 7F184E9C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184E9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184EA0:
    ctx->pc = 0x7F184EA0u;
    // 7F184EA0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184EA0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184EA4:
    ctx->pc = 0x7F184EA4u;
    // 7F184EA4: stfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184EA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184EA8:
    ctx->pc = 0x7F184EA8u;
    // 7F184EA8: lwz     r4, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184EAC:
    ctx->pc = 0x7F184EACu;
    // 7F184EAC: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F184EB0:
    ctx->pc = 0x7F184EB0u;
    // 7F184EB0: rlwimi r0, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F184EB4:
    ctx->pc = 0x7F184EB4u;
    // 7F184EB4: ori     r16, r0, 0xAAAA
    ctx->gpr[16] = ctx->gpr[0] | 0xAAAAu;

label_7F184EB8:
    ctx->pc = 0x7F184EB8u;
    // 7F184EB8: bl      0x80025A08
    {
            ctx->lr = 0x7F184EBCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F184EBC:
    ctx->pc = 0x7F184EBCu;
    ctx->downcount -= 5;
    // 7F184EBC: lfs     f0, 23232(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184EBCu)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184EC0:
    ctx->pc = 0x7F184EC0u;
    // 7F184EC0: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184EC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184EC4:
    ctx->pc = 0x7F184EC4u;
    // 7F184EC4: lwz     r0, 20636(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184EC8:
    ctx->pc = 0x7F184EC8u;
    // 7F184EC8: cmpwi   r0, 2
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

label_7F184ECC:
    ctx->pc = 0x7F184ECCu;
    // 7F184ECC: bc    4, 2, 0x7F184EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F184EE4;
        }
    }

label_7F184ED0:
    ctx->pc = 0x7F184ED0u;
    ctx->downcount -= 5;
    // 7F184ED0: lfs     f0, 23236(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184ED0u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184ED4:
    ctx->pc = 0x7F184ED4u;
    // 7F184ED4: stfs     f0, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184ED8:
    ctx->pc = 0x7F184ED8u;
    // 7F184ED8: lfs     f0, 23240(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184ED8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184EDC:
    ctx->pc = 0x7F184EDCu;
    // 7F184EDC: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184EDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184EE0:
    ctx->pc = 0x7F184EE0u;
    // 7F184EE0: b       0x7F184F1C
    {
            goto label_7F184F1C;
    }

label_7F184EE4:
    ctx->pc = 0x7F184EE4u;
    ctx->downcount -= 6;
    // 7F184EE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184EE8:
    ctx->pc = 0x7F184EE8u;
    // 7F184EE8: lfs     f0, 23236(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184EE8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184EEC:
    ctx->pc = 0x7F184EECu;
    // 7F184EEC: lfs     f1, 4204(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184EECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F184EF0:
    ctx->pc = 0x7F184EF0u;
    // 7F184EF0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184EF0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F184EF4:
    ctx->pc = 0x7F184EF4u;
    // 7F184EF4: stfs     f0, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184EF8:
    ctx->pc = 0x7F184EF8u;
    // 7F184EF8: bl      0x7F18505C
    {
            ctx->lr = 0x7F184EFCu;
            goto label_7F18505C;
    }

label_7F184EFC:
    ctx->pc = 0x7F184EFCu;
    ctx->downcount -= 8;
    // 7F184EFC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184F00:
    ctx->pc = 0x7F184F00u;
    // 7F184F00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F184F04:
    ctx->pc = 0x7F184F04u;
    // 7F184F04: lfs     f0, 23240(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F184F04u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(23240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184F08:
    ctx->pc = 0x7F184F08u;
    // 7F184F08: lfs     f2, 4140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184F08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F184F0C:
    ctx->pc = 0x7F184F0Cu;
    // 7F184F0C: lfs     f3, 4216(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F184F0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F184F10:
    ctx->pc = 0x7F184F10u;
    // 7F184F10: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184F10u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F184F14:
    ctx->pc = 0x7F184F14u;
    // 7F184F14: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184F14u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184F18:
    ctx->pc = 0x7F184F18u;
    // 7F184F18: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184F18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F184F1C:
    ctx->pc = 0x7F184F1Cu;
    ctx->downcount -= 9;
    // 7F184F1C: lwz     r6, 60(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F184F20:
    ctx->pc = 0x7F184F20u;
    // 7F184F20: or   r4, r14, r14
    {
        ctx->gpr[4] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F184F24:
    ctx->pc = 0x7F184F24u;
    // 7F184F24: or   r5, r16, r16
    {
        ctx->gpr[5] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F184F28:
    ctx->pc = 0x7F184F28u;
    // 7F184F28: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F184F2C:
    ctx->pc = 0x7F184F2Cu;
    // 7F184F2C: lwz     r9, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F184F30:
    ctx->pc = 0x7F184F30u;
    // 7F184F30: li      r6, 120
    ctx->gpr[6] = (u32)(s32)(120);

label_7F184F34:
    ctx->pc = 0x7F184F34u;
    // 7F184F34: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_7F184F38:
    ctx->pc = 0x7F184F38u;
    // 7F184F38: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F184F3C:
    ctx->pc = 0x7F184F3Cu;
    // 7F184F3C: bl      0x7F3CD728
    {
            ctx->lr = 0x7F184F40u;
            ctx->pc = 0x7F3CD728u;
            return;
    }

label_7F184F40:
    ctx->pc = 0x7F184F40u;
    ctx->downcount -= 5;
    // 7F184F40: stw     r3, 20664(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184F44:
    ctx->pc = 0x7F184F44u;
    // 7F184F44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F184F48:
    ctx->pc = 0x7F184F48u;
    // 7F184F48: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F184F4C:
    ctx->pc = 0x7F184F4Cu;
    // 7F184F4C: lwz     r3, 20664(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20664);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184F50:
    ctx->pc = 0x7F184F50u;
    // 7F184F50: bl      0x7F3C8A08
    {
            ctx->lr = 0x7F184F54u;
            ctx->pc = 0x7F3C8A08u;
            return;
    }

label_7F184F54:
    ctx->pc = 0x7F184F54u;
    ctx->downcount -= 1;
    // 7F184F54: bl      0x7F185014
    {
            ctx->lr = 0x7F184F58u;
            goto label_7F185014;
    }

label_7F184F58:
    ctx->pc = 0x7F184F58u;
    ctx->downcount -= 7;
    // 7F184F58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F184F5C:
    ctx->pc = 0x7F184F5Cu;
    // 7F184F5C: lfs     f0, 4180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F184F5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F184F60:
    ctx->pc = 0x7F184F60u;
    // 7F184F60: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184F60u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F184F64:
    ctx->pc = 0x7F184F64u;
    // 7F184F64: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F184F64u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F184F68:
    ctx->pc = 0x7F184F68u;
    // 7F184F68: stfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F184F6C:
    ctx->pc = 0x7F184F6Cu;
    // 7F184F6C: lwz     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184F70:
    ctx->pc = 0x7F184F70u;
    // 7F184F70: stw     r0, 20656(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184F74:
    ctx->pc = 0x7F184F74u;
    ctx->downcount -= 53;
    // 7F184F74: lwz     r0, 80(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184F78:
    ctx->pc = 0x7F184F78u;
    // 7F184F78: lwz     r4, 60(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184F7C:
    ctx->pc = 0x7F184F7Cu;
    // 7F184F7C: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F184F80:
    ctx->pc = 0x7F184F80u;
    // 7F184F80: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F184F84:
    ctx->pc = 0x7F184F84u;
    // 7F184F84: addi    r0, r3, 492
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(492);

label_7F184F88:
    ctx->pc = 0x7F184F88u;
    // 7F184F88: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F184F8C:
    ctx->pc = 0x7F184F8Cu;
    // 7F184F8C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184F90:
    ctx->pc = 0x7F184F90u;
    // 7F184F90: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184F94:
    ctx->pc = 0x7F184F94u;
    // 7F184F94: stw     r3, 64(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184F98:
    ctx->pc = 0x7F184F98u;
    // 7F184F98: stw     r0, 68(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184F9C:
    ctx->pc = 0x7F184F9Cu;
    // 7F184F9C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184FA0:
    ctx->pc = 0x7F184FA0u;
    // 7F184FA0: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F184FA4:
    ctx->pc = 0x7F184FA4u;
    // 7F184FA4: stw     r3, 72(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F184FA8:
    ctx->pc = 0x7F184FA8u;
    // 7F184FA8: stw     r0, 76(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184FAC:
    ctx->pc = 0x7F184FACu;
    // 7F184FAC: lwz     r3, 20620(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20620);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F184FB0:
    ctx->pc = 0x7F184FB0u;
    // 7F184FB0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F184FB4:
    ctx->pc = 0x7F184FB4u;
    // 7F184FB4: stw     r0, 20620(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20620);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F184FB8:
    ctx->pc = 0x7F184FB8u;
    // 7F184FB8: psq_l   f31, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F184FB8u);
        if (ctx->exception) return;
    }

label_7F184FBC:
    ctx->pc = 0x7F184FBCu;
    // 7F184FBC: lfd     f31, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FC0:
    ctx->pc = 0x7F184FC0u;
    // 7F184FC0: psq_l   f30, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F184FC0u);
        if (ctx->exception) return;
    }

label_7F184FC4:
    ctx->pc = 0x7F184FC4u;
    // 7F184FC4: lfd     f30, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FC8:
    ctx->pc = 0x7F184FC8u;
    // 7F184FC8: psq_l   f29, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F184FC8u);
        if (ctx->exception) return;
    }

label_7F184FCC:
    ctx->pc = 0x7F184FCCu;
    // 7F184FCC: lfd     f29, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FD0:
    ctx->pc = 0x7F184FD0u;
    // 7F184FD0: psq_l   f28, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F184FD0u);
        if (ctx->exception) return;
    }

label_7F184FD4:
    ctx->pc = 0x7F184FD4u;
    // 7F184FD4: lfd     f28, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FD8:
    ctx->pc = 0x7F184FD8u;
    // 7F184FD8: psq_l   f27, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F184FD8u);
        if (ctx->exception) return;
    }

label_7F184FDC:
    ctx->pc = 0x7F184FDCu;
    // 7F184FDC: lfd     f27, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FE0:
    ctx->pc = 0x7F184FE0u;
    // 7F184FE0: psq_l   f26, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F184FE0u);
        if (ctx->exception) return;
    }

label_7F184FE4:
    ctx->pc = 0x7F184FE4u;
    // 7F184FE4: lfd     f26, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FE8:
    ctx->pc = 0x7F184FE8u;
    // 7F184FE8: psq_l   f25, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F184FE8u);
        if (ctx->exception) return;
    }

label_7F184FEC:
    ctx->pc = 0x7F184FECu;
    // 7F184FEC: lfd     f25, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FF0:
    ctx->pc = 0x7F184FF0u;
    // 7F184FF0: psq_l   f24, 328(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(328);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F184FF0u);
        if (ctx->exception) return;
    }

label_7F184FF4:
    ctx->pc = 0x7F184FF4u;
    // 7F184FF4: lfd     f24, 320(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(320);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F184FF8:
    ctx->pc = 0x7F184FF8u;
    // 7F184FF8: psq_l   f23, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F184FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F184FF8u);
        if (ctx->exception) return;
    }

label_7F184FFC:
    ctx->pc = 0x7F184FFCu;
    // 7F184FFC: lfd     f23, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F184FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F185000:
    ctx->pc = 0x7F185000u;
    // 7F185000: lmw     r14, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185004:
    ctx->pc = 0x7F185004u;
    // 7F185004: lwz     r0, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185008:
    ctx->pc = 0x7F185008u;
    // 7F185008: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F18500C:
    ctx->pc = 0x7F18500Cu;
    // 7F18500C: addi    r1, r1, 448
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(448);

label_7F185010:
    ctx->pc = 0x7F185010u;
    // 7F185010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185014:
    ctx->pc = 0x7F185014u;
    ctx->downcount -= 4;
    // 7F185014: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185018:
    ctx->pc = 0x7F185018u;
    // 7F185018: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F18501C:
    ctx->pc = 0x7F18501Cu;
    // 7F18501C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185020:
    ctx->pc = 0x7F185020u;
    // 7F185020: bl      0x7F1850B4
    {
            ctx->lr = 0x7F185024u;
            goto label_7F1850B4;
    }

label_7F185024:
    ctx->pc = 0x7F185024u;
    ctx->downcount -= 31;
    // 7F185024: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F185028:
    ctx->pc = 0x7F185028u;
    // 7F185028: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18502C:
    ctx->pc = 0x7F18502Cu;
    // 7F18502C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185030:
    ctx->pc = 0x7F185030u;
    // 7F185030: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185034:
    ctx->pc = 0x7F185034u;
    // 7F185034: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185038:
    ctx->pc = 0x7F185038u;
    // 7F185038: lfd     f2, 4224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185038u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4224);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18503C:
    ctx->pc = 0x7F18503Cu;
    // 7F18503C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18503Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F185040:
    ctx->pc = 0x7F185040u;
    // 7F185040: lfs     f0, 4220(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185040u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185044:
    ctx->pc = 0x7F185044u;
    // 7F185044: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F185044u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F185048:
    ctx->pc = 0x7F185048u;
    // 7F185048: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18504C:
    ctx->pc = 0x7F18504Cu;
    // 7F18504C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18504Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F185050:
    ctx->pc = 0x7F185050u;
    // 7F185050: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185054:
    ctx->pc = 0x7F185054u;
    // 7F185054: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185058:
    ctx->pc = 0x7F185058u;
    // 7F185058: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F18505C:
    ctx->pc = 0x7F18505Cu;
    ctx->downcount -= 4;
    // 7F18505C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185060:
    ctx->pc = 0x7F185060u;
    // 7F185060: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185064:
    ctx->pc = 0x7F185064u;
    // 7F185064: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185068:
    ctx->pc = 0x7F185068u;
    // 7F185068: bl      0x7F1850B4
    {
            ctx->lr = 0x7F18506Cu;
            goto label_7F1850B4;
    }

label_7F18506C:
    ctx->pc = 0x7F18506Cu;
    ctx->downcount -= 35;
    // 7F18506C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F185070:
    ctx->pc = 0x7F185070u;
    // 7F185070: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185074:
    ctx->pc = 0x7F185074u;
    // 7F185074: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185078:
    ctx->pc = 0x7F185078u;
    // 7F185078: addi    r5, r4, 4224
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4224);

label_7F18507C:
    ctx->pc = 0x7F18507Cu;
    // 7F18507C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185080:
    ctx->pc = 0x7F185080u;
    // 7F185080: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185080u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F185084:
    ctx->pc = 0x7F185084u;
    // 7F185084: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185088:
    ctx->pc = 0x7F185088u;
    // 7F185088: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18508C:
    ctx->pc = 0x7F18508Cu;
    // 7F18508C: lfs     f1, 4232(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18508Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185090:
    ctx->pc = 0x7F185090u;
    // 7F185090: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F185094:
    ctx->pc = 0x7F185094u;
    // 7F185094: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185098:
    ctx->pc = 0x7F185098u;
    // 7F185098: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F185098u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F18509C:
    ctx->pc = 0x7F18509Cu;
    // 7F18509C: lfs     f0, 4124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18509Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1850A0:
    ctx->pc = 0x7F1850A0u;
    // 7F1850A0: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1850A0u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1850A4:
    ctx->pc = 0x7F1850A4u;
    // 7F1850A4: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1850A4u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1850A8:
    ctx->pc = 0x7F1850A8u;
    // 7F1850A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1850AC:
    ctx->pc = 0x7F1850ACu;
    // 7F1850AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1850B0:
    ctx->pc = 0x7F1850B0u;
    // 7F1850B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1850B4:
    ctx->pc = 0x7F1850B4u;
    ctx->downcount -= 13;
    // 7F1850B4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1850B8:
    ctx->pc = 0x7F1850B8u;
    // 7F1850B8: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1850BC:
    ctx->pc = 0x7F1850BCu;
    // 7F1850BC: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1850C0:
    ctx->pc = 0x7F1850C0u;
    // 7F1850C0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1850C4:
    ctx->pc = 0x7F1850C4u;
    // 7F1850C4: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1850C8:
    ctx->pc = 0x7F1850C8u;
    // 7F1850C8: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1850CC:
    ctx->pc = 0x7F1850CCu;
    // 7F1850CC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1850D0:
    ctx->pc = 0x7F1850D0u;
    // 7F1850D0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1850D4:
    ctx->pc = 0x7F1850D4u;
    // 7F1850D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1850D8:
    ctx->pc = 0x7F1850D8u;
    ctx->downcount -= 7;
    // 7F1850D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1850DC:
    ctx->pc = 0x7F1850DCu;
    // 7F1850DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1850E0:
    ctx->pc = 0x7F1850E0u;
    // 7F1850E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1850E4:
    ctx->pc = 0x7F1850E4u;
    // 7F1850E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1850E8:
    ctx->pc = 0x7F1850E8u;
    // 7F1850E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1850EC:
    ctx->pc = 0x7F1850ECu;
    // 7F1850EC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1850F0:
    ctx->pc = 0x7F1850F0u;
    // 7F1850F0: bl      0x7F01B234
    {
            ctx->lr = 0x7F1850F4u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1850F4:
    ctx->pc = 0x7F1850F4u;
    ctx->downcount -= 7;
    // 7F1850F4: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1850F8:
    ctx->pc = 0x7F1850F8u;
    // 7F1850F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1850FC:
    ctx->pc = 0x7F1850FCu;
    // 7F1850FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F185100:
    ctx->pc = 0x7F185100u;
    // 7F185100: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185104:
    ctx->pc = 0x7F185104u;
    // 7F185104: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185108:
    ctx->pc = 0x7F185108u;
    // 7F185108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F18510C:
    ctx->pc = 0x7F18510Cu;
    ctx->downcount -= 8;
    // 7F18510C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185110:
    ctx->pc = 0x7F185110u;
    // 7F185110: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185114:
    ctx->pc = 0x7F185114u;
    // 7F185114: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185118:
    ctx->pc = 0x7F185118u;
    // 7F185118: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F18511C:
    ctx->pc = 0x7F18511Cu;
    // 7F18511C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185120:
    ctx->pc = 0x7F185120u;
    // 7F185120: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185124:
    ctx->pc = 0x7F185124u;
    // 7F185124: cmplwi  r3, 0x0000
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

label_7F185128:
    ctx->pc = 0x7F185128u;
    // 7F185128: bc    12, 2, 0x7F185134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F185134;
        }
    }

label_7F18512C:
    ctx->pc = 0x7F18512Cu;
    ctx->downcount -= 1;
    // 7F18512C: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F185130u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F185130:
    ctx->pc = 0x7F185130u;
    ctx->downcount -= 1;
    // 7F185130: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185134:
    ctx->pc = 0x7F185134u;
    ctx->downcount -= 3;
    // 7F185134: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185138:
    ctx->pc = 0x7F185138u;
    // 7F185138: cmplwi  r3, 0x0000
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

label_7F18513C:
    ctx->pc = 0x7F18513Cu;
    // 7F18513C: bc    12, 2, 0x7F185148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F185148;
        }
    }

label_7F185140:
    ctx->pc = 0x7F185140u;
    ctx->downcount -= 1;
    // 7F185140: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F185144u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F185144:
    ctx->pc = 0x7F185144u;
    ctx->downcount -= 1;
    // 7F185144: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185148:
    ctx->pc = 0x7F185148u;
    ctx->downcount -= 3;
    // 7F185148: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18514C:
    ctx->pc = 0x7F18514Cu;
    // 7F18514C: cmplwi  r3, 0x0000
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

label_7F185150:
    ctx->pc = 0x7F185150u;
    // 7F185150: bc    12, 2, 0x7F18515C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18515C;
        }
    }

label_7F185154:
    ctx->pc = 0x7F185154u;
    ctx->downcount -= 1;
    // 7F185154: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F185158u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F185158:
    ctx->pc = 0x7F185158u;
    ctx->downcount -= 1;
    // 7F185158: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18515C:
    ctx->pc = 0x7F18515Cu;
    ctx->downcount -= 2;
    // 7F18515C: addi    r3, r31, 20672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(20672);

label_7F185160:
    ctx->pc = 0x7F185160u;
    // 7F185160: bl      0x7F0146B0
    {
            ctx->lr = 0x7F185164u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F185164:
    ctx->pc = 0x7F185164u;
    ctx->downcount -= 2;
    // 7F185164: addi    r3, r31, 22976
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(22976);

label_7F185168:
    ctx->pc = 0x7F185168u;
    // 7F185168: bl      0x7F0146B0
    {
            ctx->lr = 0x7F18516Cu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F18516C:
    ctx->pc = 0x7F18516Cu;
    ctx->downcount -= 6;
    // 7F18516C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185170:
    ctx->pc = 0x7F185170u;
    // 7F185170: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F185174:
    ctx->pc = 0x7F185174u;
    // 7F185174: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185178:
    ctx->pc = 0x7F185178u;
    // 7F185178: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F18517C:
    ctx->pc = 0x7F18517Cu;
    // 7F18517C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185180:
    ctx->pc = 0x7F185180u;
    ctx->downcount -= 21;
    // 7F185180: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185184:
    ctx->pc = 0x7F185184u;
    // 7F185184: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185188:
    ctx->pc = 0x7F185188u;
    // 7F185188: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18518C:
    ctx->pc = 0x7F18518Cu;
    // 7F18518C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185190:
    ctx->pc = 0x7F185190u;
    // 7F185190: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185194:
    ctx->pc = 0x7F185194u;
    // 7F185194: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F185198:
    ctx->pc = 0x7F185198u;
    // 7F185198: addi    r3, r3, -13380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13380);

label_7F18519C:
    ctx->pc = 0x7F18519Cu;
    // 7F18519C: lwz     r31, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1851A0:
    ctx->pc = 0x7F1851A0u;
    // 7F1851A0: lwz     r30, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1851A4:
    ctx->pc = 0x7F1851A4u;
    // 7F1851A4: lwz     r29, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1851A8:
    ctx->pc = 0x7F1851A8u;
    // 7F1851A8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1851ACu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1851AC:
    ctx->pc = 0x7F1851ACu;
    ctx->downcount -= 1;
    // 7F1851AC: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1851B0u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1851B0:
    ctx->pc = 0x7F1851B0u;
    ctx->downcount -= 6;
    // 7F1851B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1851B4:
    ctx->pc = 0x7F1851B4u;
    // 7F1851B4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1851B8:
    ctx->pc = 0x7F1851B8u;
    // 7F1851B8: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1851BC:
    ctx->pc = 0x7F1851BCu;
    // 7F1851BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1851C0:
    ctx->pc = 0x7F1851C0u;
    // 7F1851C0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1851C4:
    ctx->pc = 0x7F1851C4u;
    // 7F1851C4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1851C8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1851C8:
    ctx->pc = 0x7F1851C8u;
    ctx->downcount -= 11;
    // 7F1851C8: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1851CC:
    ctx->pc = 0x7F1851CCu;
    // 7F1851CC: addis   r7, r28, 1
    ctx->gpr[7] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F1851D0:
    ctx->pc = 0x7F1851D0u;
    // 7F1851D0: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1851D4:
    ctx->pc = 0x7F1851D4u;
    // 7F1851D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1851D8:
    ctx->pc = 0x7F1851D8u;
    // 7F1851D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1851DC:
    ctx->pc = 0x7F1851DCu;
    // 7F1851DC: addi    r6, r28, 23248
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(23248);

label_7F1851E0:
    ctx->pc = 0x7F1851E0u;
    // 7F1851E0: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1851E4:
    ctx->pc = 0x7F1851E4u;
    // 7F1851E4: addi    r7, r7, -25904
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-25904);

label_7F1851E8:
    ctx->pc = 0x7F1851E8u;
    // 7F1851E8: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1851EC:
    ctx->pc = 0x7F1851ECu;
    // 7F1851EC: lwz     r5, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1851F0:
    ctx->pc = 0x7F1851F0u;
    // 7F1851F0: bl      0x7F3C2578
    {
            ctx->lr = 0x7F1851F4u;
            ctx->pc = 0x7F3C2578u;
            return;
    }

label_7F1851F4:
    ctx->pc = 0x7F1851F4u;
    ctx->downcount -= 3;
    // 7F1851F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1851F8:
    ctx->pc = 0x7F1851F8u;
    // 7F1851F8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1851FC:
    ctx->pc = 0x7F1851FCu;
    // 7F1851FC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F185200u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F185200:
    ctx->pc = 0x7F185200u;
    ctx->downcount -= 13;
    // 7F185200: li      r0, 66
    ctx->gpr[0] = (u32)(s32)(66);

label_7F185204:
    ctx->pc = 0x7F185204u;
    // 7F185204: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F185208:
    ctx->pc = 0x7F185208u;
    // 7F185208: stw     r0, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18520C:
    ctx->pc = 0x7F18520Cu;
    // 7F18520C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F185210:
    ctx->pc = 0x7F185210u;
    // 7F185210: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F185214:
    ctx->pc = 0x7F185214u;
    // 7F185214: addi    r24, r28, 84
    ctx->gpr[24] = ctx->gpr[28] + (u32)(s32)(84);

label_7F185218:
    ctx->pc = 0x7F185218u;
    // 7F185218: stw     r26, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F18521C:
    ctx->pc = 0x7F18521Cu;
    // 7F18521C: addi    r3, r28, 23248
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(23248);

label_7F185220:
    ctx->pc = 0x7F185220u;
    // 7F185220: addi    r27, r4, 12832
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F185224:
    ctx->pc = 0x7F185224u;
    // 7F185224: lwz     r25, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F185228:
    ctx->pc = 0x7F185228u;
    // 7F185228: lwz     r23, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F18522C:
    ctx->pc = 0x7F18522Cu;
    // 7F18522C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F185230:
    loop_7F185230(ctx);
    if (ctx->pc == 0x7F1852FCu) goto label_7F1852FC;
    return;
label_7F185234:
    // 7F185234: addi    r5, r26, 16468
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(16468);

label_7F185238:
    ctx->pc = 0x7F185238u;
    // 7F185238: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18523C:
    // 7F18523C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F185240:
    // 7F185240: li      r9, 4096
    ctx->gpr[9] = (u32)(s32)(4096);

label_7F185244:
    // 7F185244: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F185248:
    ctx->pc = 0x7F185248u;
    // 7F185248: stw     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F18524C:
    // 7F18524C: li      r6, 96
    ctx->gpr[6] = (u32)(s32)(96);

label_7F185250:
    // 7F185250: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

label_7F185254:
    // 7F185254: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F185258:
    ctx->pc = 0x7F185258u;
    // 7F185258: stw     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18525C:
    // 7F18525C: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F185260:
    // 7F185260: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F185264:
    ctx->pc = 0x7F185264u;
    // 7F185264: lwz     r12, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F185268:
    ctx->pc = 0x7F185268u;
    // 7F185268: lwz     r11, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F18526C:
    ctx->pc = 0x7F18526Cu;
    // 7F18526C: stw     r12, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F185270:
    ctx->pc = 0x7F185270u;
    // 7F185270: stw     r11, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F185274:
    // 7F185274: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_7F185278:
    ctx->pc = 0x7F185278u;
    // 7F185278: sth     r10, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F18527C:
    ctx->pc = 0x7F18527Cu;
    // 7F18527C: sth     r10, 6(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F185280:
    ctx->pc = 0x7F185280u;
    // 7F185280: sth     r9, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F185284:
    ctx->pc = 0x7F185284u;
    // 7F185284: sth     r9, 14(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F185288:
    ctx->pc = 0x7F185288u;
    // 7F185288: stb     r7, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F18528C:
    ctx->pc = 0x7F18528Cu;
    // 7F18528C: stb     r7, 1(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F185290:
    ctx->pc = 0x7F185290u;
    // 7F185290: stb     r6, 2(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F185294:
    ctx->pc = 0x7F185294u;
    // 7F185294: stb     r10, 3(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F185298:
    ctx->pc = 0x7F185298u;
    // 7F185298: sth     r8, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F18529C:
    ctx->pc = 0x7F18529Cu;
    // 7F18529C: sth     r8, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1852A0:
    // 7F1852A0: addi    r23, r23, 16
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(16);

label_7F1852A4:
    ctx->pc = 0x7F1852A4u;
    // 7F1852A4: lwz     r7, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1852A8:
    ctx->pc = 0x7F1852A8u;
    // 7F1852A8: lwz     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1852AC:
    ctx->pc = 0x7F1852ACu;
    // 7F1852AC: stw     r7, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1852B0:
    ctx->pc = 0x7F1852B0u;
    // 7F1852B0: stw     r6, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1852B4:
    ctx->pc = 0x7F1852B4u;
    // 7F1852B4: lwz     r7, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1852B8:
    ctx->pc = 0x7F1852B8u;
    // 7F1852B8: lwz     r6, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1852BC:
    ctx->pc = 0x7F1852BCu;
    // 7F1852BC: stw     r7, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1852C0:
    ctx->pc = 0x7F1852C0u;
    // 7F1852C0: stw     r6, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1852C4:
    // 7F1852C4: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_7F1852C8:
    ctx->pc = 0x7F1852C8u;
    // 7F1852C8: stwx    r10, r28, r5
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1852CC:
    ctx->pc = 0x7F1852CCu;
    // 7F1852CC: sth     r10, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F1852D0:
    ctx->pc = 0x7F1852D0u;
    // 7F1852D0: sth     r10, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F1852D4:
    ctx->pc = 0x7F1852D4u;
    // 7F1852D4: sth     r9, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1852D8:
    ctx->pc = 0x7F1852D8u;
    // 7F1852D8: sth     r9, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F1852DC:
    ctx->pc = 0x7F1852DCu;
    // 7F1852DC: stb     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1852E0:
    ctx->pc = 0x7F1852E0u;
    // 7F1852E0: stb     r4, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1852E4:
    ctx->pc = 0x7F1852E4u;
    // 7F1852E4: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1852E8:
    ctx->pc = 0x7F1852E8u;
    // 7F1852E8: stb     r10, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F1852EC:
    ctx->pc = 0x7F1852ECu;
    // 7F1852EC: sth     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1852F0:
    ctx->pc = 0x7F1852F0u;
    // 7F1852F0: sth     r8, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F1852F4:
    // 7F1852F4: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F1852F8:
    // 7F1852F8: bc    16, 0, 0x7F185230
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185230u;
                return;
            }
            goto label_7F185230;
        }
    }

label_7F1852FC:
    ctx->pc = 0x7F1852FCu;
    ctx->downcount -= 4;
    // 7F1852FC: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185300:
    ctx->pc = 0x7F185300u;
    // 7F185300: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_7F185304:
    ctx->pc = 0x7F185304u;
    // 7F185304: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185308:
    ctx->pc = 0x7F185308u;
    // 7F185308: bl      0x8000519C
    {
            ctx->lr = 0x7F18530Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F18530C:
    ctx->pc = 0x7F18530Cu;
    ctx->downcount -= 4;
    // 7F18530C: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185310:
    ctx->pc = 0x7F185310u;
    // 7F185310: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_7F185314:
    ctx->pc = 0x7F185314u;
    // 7F185314: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185318:
    ctx->pc = 0x7F185318u;
    // 7F185318: bl      0x8000519C
    {
            ctx->lr = 0x7F18531Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F18531C:
    ctx->pc = 0x7F18531Cu;
    ctx->downcount -= 5;
    // 7F18531C: addis   r3, r28, 1
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F185320:
    ctx->pc = 0x7F185320u;
    // 7F185320: addi    r4, r28, 23248
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(23248);

label_7F185324:
    ctx->pc = 0x7F185324u;
    // 7F185324: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_7F185328:
    ctx->pc = 0x7F185328u;
    // 7F185328: addi    r3, r3, -25904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25904);

label_7F18532C:
    ctx->pc = 0x7F18532Cu;
    // 7F18532C: bl      0x8000519C
    {
            ctx->lr = 0x7F185330u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F185330:
    ctx->pc = 0x7F185330u;
    ctx->downcount -= 11;
    // 7F185330: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185334:
    ctx->pc = 0x7F185334u;
    // 7F185334: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F185338:
    ctx->pc = 0x7F185338u;
    // 7F185338: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F18533C:
    ctx->pc = 0x7F18533Cu;
    // 7F18533C: ori     r4, r4, 0xE000
    ctx->gpr[4] = ctx->gpr[4] | 0xE000u;

label_7F185340:
    ctx->pc = 0x7F185340u;
    // 7F185340: addi    r3, r3, -13368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13368);

label_7F185344:
    ctx->pc = 0x7F185344u;
    // 7F185344: stw     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F185348:
    ctx->pc = 0x7F185348u;
    // 7F185348: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18534C:
    ctx->pc = 0x7F18534Cu;
    // 7F18534C: ori     r4, r4, 0xE000
    ctx->gpr[4] = ctx->gpr[4] | 0xE000u;

label_7F185350:
    ctx->pc = 0x7F185350u;
    // 7F185350: stw     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F185354:
    ctx->pc = 0x7F185354u;
    // 7F185354: stw     r0, 304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185358:
    ctx->pc = 0x7F185358u;
    // 7F185358: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F18535Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F18535C:
    ctx->pc = 0x7F18535Cu;
    ctx->downcount -= 1;
    // 7F18535C: bl      0x7F3B6420
    {
            ctx->lr = 0x7F185360u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F185360:
    ctx->pc = 0x7F185360u;
    ctx->downcount -= 3;
    // 7F185360: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185364:
    ctx->pc = 0x7F185364u;
    // 7F185364: lwz     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185368:
    ctx->pc = 0x7F185368u;
    // 7F185368: bl      0x7F3C2534
    {
            ctx->lr = 0x7F18536Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F18536C:
    ctx->pc = 0x7F18536Cu;
    ctx->downcount -= 36;
    // 7F18536C: lwz     r5, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F185370:
    ctx->pc = 0x7F185370u;
    // 7F185370: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F185374:
    ctx->pc = 0x7F185374u;
    // 7F185374: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F185378:
    ctx->pc = 0x7F185378u;
    // 7F185378: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F18537C:
    ctx->pc = 0x7F18537Cu;
    // 7F18537C: stw     r0, 204(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185380:
    ctx->pc = 0x7F185380u;
    // 7F185380: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F185384:
    ctx->pc = 0x7F185384u;
    // 7F185384: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F185388:
    ctx->pc = 0x7F185388u;
    // 7F185388: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F18538C:
    ctx->pc = 0x7F18538Cu;
    // 7F18538C: stw     r10, 200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F185390:
    ctx->pc = 0x7F185390u;
    // 7F185390: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_7F185394:
    ctx->pc = 0x7F185394u;
    // 7F185394: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F185398:
    ctx->pc = 0x7F185398u;
    // 7F185398: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F18539C:
    ctx->pc = 0x7F18539Cu;
    // 7F18539C: lwz     r7, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1853A0:
    ctx->pc = 0x7F1853A0u;
    // 7F1853A0: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1853A4:
    ctx->pc = 0x7F1853A4u;
    // 7F1853A4: lwz     r11, 184(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(184);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1853A8:
    ctx->pc = 0x7F1853A8u;
    // 7F1853A8: lwz     r12, 192(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(192);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1853AC:
    ctx->pc = 0x7F1853ACu;
    // 7F1853AC: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1853B0:
    ctx->pc = 0x7F1853B0u;
    // 7F1853B0: stw     r8, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1853B4:
    ctx->pc = 0x7F1853B4u;
    // 7F1853B4: stw     r7, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1853B8:
    ctx->pc = 0x7F1853B8u;
    // 7F1853B8: lwz     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1853BC:
    ctx->pc = 0x7F1853BCu;
    // 7F1853BC: lwz     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1853C0:
    ctx->pc = 0x7F1853C0u;
    // 7F1853C0: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1853C4:
    ctx->pc = 0x7F1853C4u;
    // 7F1853C4: stw     r7, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1853C8:
    ctx->pc = 0x7F1853C8u;
    // 7F1853C8: sth     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F1853CC:
    ctx->pc = 0x7F1853CCu;
    // 7F1853CC: sth     r10, 6(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F1853D0:
    ctx->pc = 0x7F1853D0u;
    // 7F1853D0: sth     r6, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1853D4:
    ctx->pc = 0x7F1853D4u;
    // 7F1853D4: sth     r6, 14(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1853D8:
    ctx->pc = 0x7F1853D8u;
    // 7F1853D8: stb     r4, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1853DC:
    ctx->pc = 0x7F1853DCu;
    // 7F1853DC: stb     r4, 1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1853E0:
    ctx->pc = 0x7F1853E0u;
    // 7F1853E0: stb     r3, 2(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1853E4:
    ctx->pc = 0x7F1853E4u;
    // 7F1853E4: stb     r4, 3(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1853E8:
    ctx->pc = 0x7F1853E8u;
    // 7F1853E8: sth     r0, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1853EC:
    ctx->pc = 0x7F1853ECu;
    // 7F1853EC: sth     r0, 10(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1853F0:
    ctx->pc = 0x7F1853F0u;
    // 7F1853F0: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1853F4:
    ctx->pc = 0x7F1853F4u;
    // 7F1853F4: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1853F8:
    ctx->pc = 0x7F1853F8u;
    // 7F1853F8: bl      0x8000519C
    {
            ctx->lr = 0x7F1853FCu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1853FC:
    ctx->pc = 0x7F1853FCu;
    ctx->downcount -= 4;
    // 7F1853FC: lwz     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185400:
    ctx->pc = 0x7F185400u;
    // 7F185400: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F185404:
    ctx->pc = 0x7F185404u;
    // 7F185404: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185408:
    ctx->pc = 0x7F185408u;
    // 7F185408: bl      0x8000519C
    {
            ctx->lr = 0x7F18540Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F18540C:
    ctx->pc = 0x7F18540Cu;
    ctx->downcount -= 20;
    // 7F18540C: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185410:
    ctx->pc = 0x7F185410u;
    // 7F185410: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F185414:
    ctx->pc = 0x7F185414u;
    // 7F185414: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F185418:
    ctx->pc = 0x7F185418u;
    // 7F185418: stw     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18541C:
    ctx->pc = 0x7F18541Cu;
    // 7F18541C: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185420:
    ctx->pc = 0x7F185420u;
    // 7F185420: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185424:
    ctx->pc = 0x7F185424u;
    // 7F185424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185428:
    ctx->pc = 0x7F185428u;
    // 7F185428: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F18542C:
    ctx->pc = 0x7F18542Cu;
    // 7F18542C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185430:
    ctx->pc = 0x7F185430u;
    ctx->downcount -= 26;
    // 7F185430: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185434:
    ctx->pc = 0x7F185434u;
    // 7F185434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185438:
    ctx->pc = 0x7F185438u;
    // 7F185438: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F18543C:
    ctx->pc = 0x7F18543Cu;
    // 7F18543C: lis     r5, 580
    ctx->gpr[5] = ((u32)(s32)(580) << 16);

label_7F185440:
    ctx->pc = 0x7F185440u;
    // 7F185440: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185444:
    ctx->pc = 0x7F185444u;
    // 7F185444: addi    r7, r4, -13872
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-13872);

label_7F185448:
    ctx->pc = 0x7F185448u;
    // 7F185448: addi    r4, r5, 16401
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16401);

label_7F18544C:
    ctx->pc = 0x7F18544Cu;
    // 7F18544C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F185450:
    ctx->pc = 0x7F185450u;
    // 7F185450: stmw     r19, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185454:
    ctx->pc = 0x7F185454u;
    // 7F185454: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185458:
    ctx->pc = 0x7F185458u;
    // 7F185458: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F18545C:
    ctx->pc = 0x7F18545Cu;
    // 7F18545C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F185460:
    ctx->pc = 0x7F185460u;
    // 7F185460: addi    r31, r30, 20672
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(20672);

label_7F185464:
    ctx->pc = 0x7F185464u;
    // 7F185464: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F185468:
    ctx->pc = 0x7F185468u;
    // 7F185468: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18546C:
    ctx->pc = 0x7F18546Cu;
    // 7F18546C: bl      0x7F014788
    {
            ctx->lr = 0x7F185470u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F185470:
    ctx->pc = 0x7F185470u;
    ctx->downcount -= 4;
    // 7F185470: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185474:
    ctx->pc = 0x7F185474u;
    // 7F185474: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F185478:
    ctx->pc = 0x7F185478u;
    // 7F185478: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F18547C:
    ctx->pc = 0x7F18547Cu;
    // 7F18547C: bl      0x7F014B60
    {
            ctx->lr = 0x7F185480u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F185480:
    ctx->pc = 0x7F185480u;
    ctx->downcount -= 4;
    // 7F185480: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F185484:
    ctx->pc = 0x7F185484u;
    // 7F185484: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185488:
    ctx->pc = 0x7F185488u;
    // 7F185488: addi    r4, r4, 6849
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6849);

label_7F18548C:
    ctx->pc = 0x7F18548Cu;
    // 7F18548C: bl      0x7F01488C
    {
            ctx->lr = 0x7F185490u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F185490:
    ctx->pc = 0x7F185490u;
    ctx->downcount -= 2;
    // 7F185490: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185494:
    ctx->pc = 0x7F185494u;
    // 7F185494: bl      0x7F0148A0
    {
            ctx->lr = 0x7F185498u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F185498:
    ctx->pc = 0x7F185498u;
    ctx->downcount -= 12;
    // 7F185498: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F18549C:
    ctx->pc = 0x7F18549Cu;
    // 7F18549C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1854A0:
    ctx->pc = 0x7F1854A0u;
    // 7F1854A0: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1854A4:
    ctx->pc = 0x7F1854A4u;
    // 7F1854A4: addi    r20, r30, 20864
    ctx->gpr[20] = ctx->gpr[30] + (u32)(s32)(20864);

label_7F1854A8:
    ctx->pc = 0x7F1854A8u;
    // 7F1854A8: addi    r25, r4, -13572
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(-13572);

label_7F1854AC:
    ctx->pc = 0x7F1854ACu;
    // 7F1854AC: addi    r26, r3, -13764
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(-13764);

label_7F1854B0:
    ctx->pc = 0x7F1854B0u;
    // 7F1854B0: addi    r23, r5, -13824
    ctx->gpr[23] = ctx->gpr[5] + (u32)(s32)(-13824);

label_7F1854B4:
    ctx->pc = 0x7F1854B4u;
    // 7F1854B4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1854B8:
    ctx->pc = 0x7F1854B8u;
    // 7F1854B8: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F1854BC:
    ctx->pc = 0x7F1854BCu;
    // 7F1854BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1854C0:
    ctx->pc = 0x7F1854C0u;
    // 7F1854C0: lis     r24, 576
    ctx->gpr[24] = ((u32)(s32)(576) << 16);

label_7F1854C4:
    ctx->pc = 0x7F1854C4u;
    // 7F1854C4: lis     r27, 2
    ctx->gpr[27] = ((u32)(s32)(2) << 16);

label_7F1854C8:
    ctx->downcount -= 3;
    // 7F1854C8: or   r19, r20, r20
    {
        ctx->gpr[19] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F1854CC:
    // 7F1854CC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F1854D0:
    // 7F1854D0: b       0x7F185518
    {
            goto label_7F185518;
    }

label_7F1854D4:
    ctx->downcount -= 7;
    // 7F1854D4: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F1854D8:
    // 7F1854D8: addi    r4, r24, 16401
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(16401);

label_7F1854DC:
    // 7F1854DC: add   r7, r25, r28
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1854E0:
    // 7F1854E0: add   r8, r26, r28
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F1854E4:
    // 7F1854E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1854E8:
    // 7F1854E8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1854EC:
    // 7F1854EC: bl      0x7F014788
    {
            ctx->lr = 0x7F1854F0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F1854F0:
    ctx->downcount -= 4;
    // 7F1854F0: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F1854F4:
    // 7F1854F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1854F8:
    // 7F1854F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1854FC:
    // 7F1854FC: bl      0x7F014B60
    {
            ctx->lr = 0x7F185500u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F185500:
    ctx->downcount -= 3;
    // 7F185500: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F185504:
    // 7F185504: addi    r4, r27, 6849
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(6849);

label_7F185508:
    // 7F185508: bl      0x7F01488C
    {
            ctx->lr = 0x7F18550Cu;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F18550C:
    ctx->downcount -= 3;
    // 7F18550C: addi    r20, r20, 192
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(192);

label_7F185510:
    // 7F185510: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F185514:
    // 7F185514: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F185518:
    ctx->pc = 0x7F185518u;
    ctx->downcount -= 3;
    // 7F185518: lwzx    r0, r23, r29
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[29];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18551C:
    // 7F18551C: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F185520:
    // 7F185520: bc    12, 0, 0x7F1854D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1854D4u;
                return;
            }
            goto label_7F1854D4;
        }
    }

label_7F185524:
    ctx->downcount -= 5;
    // 7F185524: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185528:
    // 7F185528: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F18552C:
    // 7F18552C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F185530:
    // 7F185530: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F185534:
    // 7F185534: bl      0x7F014A50
    {
            ctx->lr = 0x7F185538u;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F185538:
    ctx->downcount -= 4;
    // 7F185538: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F18553C:
    // 7F18553C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F185540:
    // 7F185540: cmpwi   r21, 4
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F185544:
    // 7F185544: bc    12, 0, 0x7F1854C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1854C8u;
                return;
            }
            goto label_7F1854C8;
        }
    }

label_7F185548:
    ctx->pc = 0x7F185548u;
    ctx->downcount -= 10;
    // 7F185548: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F18554C:
    ctx->pc = 0x7F18554Cu;
    // 7F18554C: lis     r4, 325
    ctx->gpr[4] = ((u32)(s32)(325) << 16);

label_7F185550:
    ctx->pc = 0x7F185550u;
    // 7F185550: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F185554:
    ctx->pc = 0x7F185554u;
    // 7F185554: addi    r19, r30, 22976
    ctx->gpr[19] = ctx->gpr[30] + (u32)(s32)(22976);

label_7F185558:
    ctx->pc = 0x7F185558u;
    // 7F185558: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F18555C:
    ctx->pc = 0x7F18555Cu;
    // 7F18555C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F185560:
    ctx->pc = 0x7F185560u;
    // 7F185560: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F185564:
    ctx->pc = 0x7F185564u;
    // 7F185564: addi    r4, r4, 17
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17);

label_7F185568:
    ctx->pc = 0x7F185568u;
    // 7F185568: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F18556C:
    ctx->pc = 0x7F18556Cu;
    // 7F18556C: bl      0x7F014788
    {
            ctx->lr = 0x7F185570u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F185570:
    ctx->pc = 0x7F185570u;
    ctx->downcount -= 4;
    // 7F185570: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F185574:
    ctx->pc = 0x7F185574u;
    // 7F185574: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F185578:
    ctx->pc = 0x7F185578u;
    // 7F185578: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F18557C:
    ctx->pc = 0x7F18557Cu;
    // 7F18557C: bl      0x7F014B60
    {
            ctx->lr = 0x7F185580u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F185580:
    ctx->pc = 0x7F185580u;
    ctx->downcount -= 9;
    // 7F185580: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F185584:
    ctx->pc = 0x7F185584u;
    // 7F185584: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F185588:
    ctx->pc = 0x7F185588u;
    // 7F185588: addi    r9, r4, -13356
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-13356);

label_7F18558C:
    ctx->pc = 0x7F18558Cu;
    // 7F18558C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F185590:
    ctx->pc = 0x7F185590u;
    // 7F185590: addi    r4, r30, 23168
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(23168);

label_7F185594:
    ctx->pc = 0x7F185594u;
    // 7F185594: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F185598:
    ctx->pc = 0x7F185598u;
    // 7F185598: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F18559C:
    ctx->pc = 0x7F18559Cu;
    // 7F18559C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1855A0:
    ctx->pc = 0x7F1855A0u;
    // 7F1855A0: bl      0x7F014B78
    {
            ctx->lr = 0x7F1855A4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F1855A4:
    ctx->pc = 0x7F1855A4u;
    ctx->downcount -= 4;
    // 7F1855A4: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F1855A8:
    ctx->pc = 0x7F1855A8u;
    // 7F1855A8: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F1855AC:
    ctx->pc = 0x7F1855ACu;
    // 7F1855AC: addi    r4, r4, 6849
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6849);

label_7F1855B0:
    ctx->pc = 0x7F1855B0u;
    // 7F1855B0: bl      0x7F01488C
    {
            ctx->lr = 0x7F1855B4u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F1855B4:
    ctx->pc = 0x7F1855B4u;
    ctx->downcount -= 8;
    // 7F1855B4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F1855B8:
    ctx->pc = 0x7F1855B8u;
    // 7F1855B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1855BC:
    ctx->pc = 0x7F1855BCu;
    // 7F1855BC: addi    r5, r3, 18308
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F1855C0:
    ctx->pc = 0x7F1855C0u;
    // 7F1855C0: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1855C4:
    ctx->pc = 0x7F1855C4u;
    // 7F1855C4: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1855C8:
    ctx->pc = 0x7F1855C8u;
    // 7F1855C8: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F1855CC:
    ctx->pc = 0x7F1855CCu;
    // 7F1855CC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1855D0:
    ctx->pc = 0x7F1855D0u;
    // 7F1855D0: bl      0x7F014A08
    {
            ctx->lr = 0x7F1855D4u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F1855D4:
    ctx->pc = 0x7F1855D4u;
    ctx->downcount -= 16;
    // 7F1855D4: lmw     r19, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1855D8:
    ctx->pc = 0x7F1855D8u;
    // 7F1855D8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1855DC:
    ctx->pc = 0x7F1855DCu;
    // 7F1855DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1855E0:
    ctx->pc = 0x7F1855E0u;
    // 7F1855E0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1855E4:
    ctx->pc = 0x7F1855E4u;
    // 7F1855E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1855E8:
    ctx->pc = 0x7F1855E8u;
    ctx->downcount -= 37;
    // 7F1855E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1855EC:
    ctx->pc = 0x7F1855ECu;
    // 7F1855EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1855F0:
    ctx->pc = 0x7F1855F0u;
    // 7F1855F0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1855F4:
    ctx->pc = 0x7F1855F4u;
    // 7F1855F4: cmpwi   r7, 2
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

label_7F1855F8:
    ctx->pc = 0x7F1855F8u;
    // 7F1855F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1855FC:
    ctx->pc = 0x7F1855FCu;
    // 7F1855FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F185600:
    ctx->pc = 0x7F185600u;
    // 7F185600: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F185604:
    ctx->pc = 0x7F185604u;
    // 7F185604: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185608:
    ctx->pc = 0x7F185608u;
    // 7F185608: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18560C:
    ctx->pc = 0x7F18560Cu;
    // 7F18560C: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F185610:
    ctx->pc = 0x7F185610u;
    // 7F185610: addi    r4, r3, 4056
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4056);

label_7F185614:
    ctx->pc = 0x7F185614u;
    // 7F185614: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185614u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185618:
    ctx->pc = 0x7F185618u;
    // 7F185618: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F18561C:
    ctx->pc = 0x7F18561Cu;
    // 7F18561C: stw     r6, 20628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20628);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F185620:
    ctx->pc = 0x7F185620u;
    // 7F185620: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F185624:
    ctx->pc = 0x7F185624u;
    // 7F185624: stw     r7, 20636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20636);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185628:
    ctx->pc = 0x7F185628u;
    // 7F185628: stw     r5, 23224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(23224);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F18562C:
    ctx->pc = 0x7F18562Cu;
    // 7F18562C: stw     r8, 20564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20564);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185630:
    ctx->pc = 0x7F185630u;
    // 7F185630: stw     r8, 20568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20568);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185634:
    ctx->pc = 0x7F185634u;
    // 7F185634: stfs     f0, 20572(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F185634u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20572);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185638:
    ctx->pc = 0x7F185638u;
    // 7F185638: stw     r8, 20616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20616);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F18563C:
    ctx->pc = 0x7F18563Cu;
    // 7F18563C: stw     r8, 20620(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20620);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185640:
    ctx->pc = 0x7F185640u;
    // 7F185640: stw     r0, 20624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185644:
    ctx->pc = 0x7F185644u;
    // 7F185644: stw     r8, 20632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20632);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185648:
    ctx->pc = 0x7F185648u;
    // 7F185648: sth     r8, 20576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20576);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F18564C:
    ctx->pc = 0x7F18564Cu;
    // 7F18564C: sth     r8, 20580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20580);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F185650:
    ctx->pc = 0x7F185650u;
    // 7F185650: sth     r8, 20578(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20578);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F185654:
    ctx->pc = 0x7F185654u;
    // 7F185654: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185658:
    ctx->pc = 0x7F185658u;
    // 7F185658: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18565C:
    ctx->pc = 0x7F18565Cu;
    // 7F18565C: stw     r3, 20584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20584);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185660:
    ctx->pc = 0x7F185660u;
    // 7F185660: stw     r0, 20588(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185664:
    ctx->pc = 0x7F185664u;
    // 7F185664: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185668:
    ctx->pc = 0x7F185668u;
    // 7F185668: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18566C:
    ctx->pc = 0x7F18566Cu;
    // 7F18566C: stw     r3, 20592(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20592);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185670:
    ctx->pc = 0x7F185670u;
    // 7F185670: stw     r0, 20596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185674:
    ctx->pc = 0x7F185674u;
    // 7F185674: stw     r8, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185678:
    ctx->pc = 0x7F185678u;
    // 7F185678: bc    4, 2, 0x7F185684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185684;
        }
    }

label_7F18567C:
    ctx->pc = 0x7F18567Cu;
    ctx->downcount -= 2;
    // 7F18567C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F185680:
    ctx->pc = 0x7F185680u;
    // 7F185680: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185684:
    ctx->pc = 0x7F185684u;
    ctx->downcount -= 15;
    // 7F185684: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185688:
    ctx->pc = 0x7F185688u;
    // 7F185688: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F18568C:
    ctx->pc = 0x7F18568Cu;
    // 7F18568C: lfs     f0, 4056(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18568Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185690:
    ctx->pc = 0x7F185690u;
    // 7F185690: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_7F185694:
    ctx->pc = 0x7F185694u;
    // 7F185694: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F185698:
    ctx->pc = 0x7F185698u;
    // 7F185698: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F18569C:
    ctx->pc = 0x7F18569Cu;
    // 7F18569C: stfs     f0, 20644(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F18569Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20644);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1856A0:
    ctx->pc = 0x7F1856A0u;
    // 7F1856A0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F1856A4:
    ctx->pc = 0x7F1856A4u;
    // 7F1856A4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F1856A8:
    ctx->pc = 0x7F1856A8u;
    // 7F1856A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1856AC:
    ctx->pc = 0x7F1856ACu;
    // 7F1856AC: stfs     f0, 20640(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1856ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20640);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1856B0:
    ctx->pc = 0x7F1856B0u;
    // 7F1856B0: stw     r7, 20648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20648);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1856B4:
    ctx->pc = 0x7F1856B4u;
    // 7F1856B4: stw     r0, 23228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(23228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1856B8:
    ctx->pc = 0x7F1856B8u;
    // 7F1856B8: stw     r0, 20652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1856BC:
    ctx->pc = 0x7F1856BCu;
    // 7F1856BC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1856C0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1856C0:
    ctx->pc = 0x7F1856C0u;
    ctx->downcount -= 4;
    // 7F1856C0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1856C4:
    ctx->pc = 0x7F1856C4u;
    // 7F1856C4: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1856C8:
    ctx->pc = 0x7F1856C8u;
    // 7F1856C8: cmplwi  r0, 0x0000
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

label_7F1856CC:
    ctx->pc = 0x7F1856CCu;
    // 7F1856CC: bc    4, 2, 0x7F1856D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1856D8;
        }
    }

label_7F1856D0:
    ctx->pc = 0x7F1856D0u;
    ctx->downcount -= 2;
    // 7F1856D0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1856D4:
    ctx->pc = 0x7F1856D4u;
    // 7F1856D4: b       0x7F185778
    {
            goto label_7F185778;
    }

label_7F1856D8:
    ctx->pc = 0x7F1856D8u;
    ctx->downcount -= 6;
    // 7F1856D8: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F1856DC:
    ctx->pc = 0x7F1856DCu;
    // 7F1856DC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F1856E0:
    ctx->pc = 0x7F1856E0u;
    // 7F1856E0: addi    r3, r3, 260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(260);

label_7F1856E4:
    ctx->pc = 0x7F1856E4u;
    // 7F1856E4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F1856E8:
    ctx->pc = 0x7F1856E8u;
    // 7F1856E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1856EC:
    ctx->pc = 0x7F1856ECu;
    // 7F1856EC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1856F0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1856F0:
    ctx->pc = 0x7F1856F0u;
    ctx->downcount -= 4;
    // 7F1856F0: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1856F4:
    ctx->pc = 0x7F1856F4u;
    // 7F1856F4: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1856F8:
    ctx->pc = 0x7F1856F8u;
    // 7F1856F8: cmplwi  r0, 0x0000
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

label_7F1856FC:
    ctx->pc = 0x7F1856FCu;
    // 7F1856FC: bc    4, 2, 0x7F185708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185708;
        }
    }

label_7F185700:
    ctx->pc = 0x7F185700u;
    ctx->downcount -= 2;
    // 7F185700: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F185704:
    ctx->pc = 0x7F185704u;
    // 7F185704: b       0x7F185778
    {
            goto label_7F185778;
    }

label_7F185708:
    ctx->pc = 0x7F185708u;
    ctx->downcount -= 6;
    // 7F185708: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F18570C:
    ctx->pc = 0x7F18570Cu;
    // 7F18570C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F185710:
    ctx->pc = 0x7F185710u;
    // 7F185710: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F185714:
    ctx->pc = 0x7F185714u;
    // 7F185714: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F185718:
    ctx->pc = 0x7F185718u;
    // 7F185718: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F18571C:
    ctx->pc = 0x7F18571Cu;
    // 7F18571C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F185720u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F185720:
    ctx->pc = 0x7F185720u;
    ctx->downcount -= 4;
    // 7F185720: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185724:
    ctx->pc = 0x7F185724u;
    // 7F185724: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185728:
    ctx->pc = 0x7F185728u;
    // 7F185728: cmplwi  r0, 0x0000
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

label_7F18572C:
    ctx->pc = 0x7F18572Cu;
    // 7F18572C: bc    4, 2, 0x7F185738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185738;
        }
    }

label_7F185730:
    ctx->pc = 0x7F185730u;
    ctx->downcount -= 2;
    // 7F185730: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F185734:
    ctx->pc = 0x7F185734u;
    // 7F185734: b       0x7F185778
    {
            goto label_7F185778;
    }

label_7F185738:
    ctx->pc = 0x7F185738u;
    ctx->downcount -= 2;
    // 7F185738: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18573C:
    ctx->pc = 0x7F18573Cu;
    // 7F18573C: bl      0x7F185180
    {
            ctx->lr = 0x7F185740u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185180u;
                return;
            }
            goto label_7F185180;
    }

label_7F185740:
    ctx->pc = 0x7F185740u;
    ctx->downcount -= 2;
    // 7F185740: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185744:
    ctx->pc = 0x7F185744u;
    // 7F185744: bl      0x7F185430
    {
            ctx->lr = 0x7F185748u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185430u;
                return;
            }
            goto label_7F185430;
    }

label_7F185748:
    ctx->pc = 0x7F185748u;
    ctx->downcount -= 1;
    // 7F185748: bl      0x7F185014
    {
            ctx->lr = 0x7F18574Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185014u;
                return;
            }
            goto label_7F185014;
    }

label_7F18574C:
    ctx->pc = 0x7F18574Cu;
    ctx->downcount -= 11;
    // 7F18574C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185750:
    ctx->pc = 0x7F185750u;
    // 7F185750: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F185754:
    ctx->pc = 0x7F185754u;
    // 7F185754: addi    r4, r3, 4180
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4180);

label_7F185758:
    ctx->pc = 0x7F185758u;
    // 7F185758: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F18575C:
    ctx->pc = 0x7F18575Cu;
    // 7F18575C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18575Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185760:
    ctx->pc = 0x7F185760u;
    // 7F185760: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185760u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F185764:
    ctx->pc = 0x7F185764u;
    // 7F185764: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185764u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F185768:
    ctx->pc = 0x7F185768u;
    // 7F185768: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F18576C:
    ctx->pc = 0x7F18576Cu;
    // 7F18576C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185770:
    ctx->pc = 0x7F185770u;
    // 7F185770: stw     r4, 20656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F185774:
    ctx->pc = 0x7F185774u;
    // 7F185774: stw     r0, 20660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185778:
    ctx->pc = 0x7F185778u;
    ctx->downcount -= 6;
    // 7F185778: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18577C:
    ctx->pc = 0x7F18577Cu;
    // 7F18577C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F185780:
    ctx->pc = 0x7F185780u;
    // 7F185780: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185784:
    ctx->pc = 0x7F185784u;
    // 7F185784: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F185788:
    ctx->pc = 0x7F185788u;
    // 7F185788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F18578C:
    ctx->pc = 0x7F18578Cu;
    ctx->downcount -= 24;
    // 7F18578C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185790:
    ctx->pc = 0x7F185790u;
    // 7F185790: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185794:
    ctx->pc = 0x7F185794u;
    // 7F185794: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_7F185798:
    ctx->pc = 0x7F185798u;
    // 7F185798: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18579C:
    ctx->pc = 0x7F18579Cu;
    // 7F18579C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1857A0:
    ctx->pc = 0x7F1857A0u;
    // 7F1857A0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1857A4:
    ctx->pc = 0x7F1857A4u;
    // 7F1857A4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1857A8:
    ctx->pc = 0x7F1857A8u;
    // 7F1857A8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1857AC:
    ctx->pc = 0x7F1857ACu;
    // 7F1857AC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1857B0:
    ctx->pc = 0x7F1857B0u;
    // 7F1857B0: addi    r5, r7, -9520
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-9520);

label_7F1857B4:
    ctx->pc = 0x7F1857B4u;
    // 7F1857B4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1857B8:
    ctx->pc = 0x7F1857B8u;
    // 7F1857B8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1857BC:
    ctx->pc = 0x7F1857BCu;
    // 7F1857BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1857C0:
    ctx->pc = 0x7F1857C0u;
    // 7F1857C0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1857C4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1857C4:
    ctx->pc = 0x7F1857C4u;
    ctx->downcount -= 2;
    // 7F1857C4: or.   r31, r3, r3
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

label_7F1857C8:
    ctx->pc = 0x7F1857C8u;
    // 7F1857C8: bc    12, 2, 0x7F185838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F185838;
        }
    }

label_7F1857CC:
    ctx->pc = 0x7F1857CCu;
    ctx->downcount -= 5;
    // 7F1857CC: lis     r4, 32536
    ctx->gpr[4] = ((u32)(s32)(32536) << 16);

label_7F1857D0:
    ctx->pc = 0x7F1857D0u;
    // 7F1857D0: lis     r5, 32536
    ctx->gpr[5] = ((u32)(s32)(32536) << 16);

label_7F1857D4:
    ctx->pc = 0x7F1857D4u;
    // 7F1857D4: addi    r4, r4, 15640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15640);

label_7F1857D8:
    ctx->pc = 0x7F1857D8u;
    // 7F1857D8: addi    r5, r5, 20748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20748);

label_7F1857DC:
    ctx->pc = 0x7F1857DCu;
    // 7F1857DC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1857E0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1857E0:
    ctx->pc = 0x7F1857E0u;
    ctx->downcount -= 16;
    // 7F1857E0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1857E4:
    ctx->pc = 0x7F1857E4u;
    // 7F1857E4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1857E8:
    ctx->pc = 0x7F1857E8u;
    // 7F1857E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1857EC:
    ctx->pc = 0x7F1857ECu;
    // 7F1857EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1857F0:
    ctx->pc = 0x7F1857F0u;
    // 7F1857F0: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1857F4:
    ctx->pc = 0x7F1857F4u;
    // 7F1857F4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1857F8:
    ctx->pc = 0x7F1857F8u;
    // 7F1857F8: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1857FC:
    ctx->pc = 0x7F1857FCu;
    // 7F1857FC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F185800:
    ctx->pc = 0x7F185800u;
    // 7F185800: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F185804:
    ctx->pc = 0x7F185804u;
    // 7F185804: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F185808:
    ctx->pc = 0x7F185808u;
    // 7F185808: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F18580C:
    ctx->pc = 0x7F18580Cu;
    // 7F18580C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F185810:
    ctx->pc = 0x7F185810u;
    // 7F185810: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185814:
    ctx->pc = 0x7F185814u;
    // 7F185814: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185818:
    ctx->pc = 0x7F185818u;
    // 7F185818: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18581C:
    ctx->pc = 0x7F18581Cu;
    // 7F18581C: bl      0x7F1855E8
    {
            ctx->lr = 0x7F185820u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1855E8u;
                return;
            }
            goto label_7F1855E8;
    }

label_7F185820:
    ctx->pc = 0x7F185820u;
    ctx->downcount -= 2;
    // 7F185820: cmpwi   r3, 0
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

label_7F185824:
    ctx->pc = 0x7F185824u;
    // 7F185824: bc    4, 0, 0x7F185838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185838;
        }
    }

label_7F185828:
    ctx->pc = 0x7F185828u;
    ctx->downcount -= 2;
    // 7F185828: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18582C:
    ctx->pc = 0x7F18582Cu;
    // 7F18582C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F185830u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F185830:
    ctx->pc = 0x7F185830u;
    ctx->downcount -= 2;
    // 7F185830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F185834:
    ctx->pc = 0x7F185834u;
    // 7F185834: b       0x7F18583C
    {
            goto label_7F18583C;
    }

label_7F185838:
    ctx->pc = 0x7F185838u;
    ctx->downcount -= 1;
    // 7F185838: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18583C:
    ctx->pc = 0x7F18583Cu;
    ctx->downcount -= 16;
    // 7F18583C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185840:
    ctx->pc = 0x7F185840u;
    // 7F185840: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185844:
    ctx->pc = 0x7F185844u;
    // 7F185844: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185848:
    ctx->pc = 0x7F185848u;
    // 7F185848: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F18584C:
    ctx->pc = 0x7F18584Cu;
    // 7F18584C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185850:
    ctx->pc = 0x7F185850u;
    ctx->downcount -= 20;
    // 7F185850: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185854:
    ctx->pc = 0x7F185854u;
    // 7F185854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185858:
    ctx->pc = 0x7F185858u;
    // 7F185858: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F18585C:
    ctx->pc = 0x7F18585Cu;
    // 7F18585C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185860:
    ctx->pc = 0x7F185860u;
    // 7F185860: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F185864:
    ctx->pc = 0x7F185864u;
    // 7F185864: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185868:
    ctx->pc = 0x7F185868u;
    // 7F185868: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F18586C:
    ctx->pc = 0x7F18586Cu;
    // 7F18586C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185870:
    ctx->pc = 0x7F185870u;
    // 7F185870: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185874:
    ctx->pc = 0x7F185874u;
    // 7F185874: bl      0x7F185998
    {
            ctx->lr = 0x7F185878u;
            goto label_7F185998;
    }

label_7F185878:
    ctx->pc = 0x7F185878u;
    ctx->downcount -= 16;
    // 7F185878: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F18587C:
    ctx->pc = 0x7F18587Cu;
    // 7F18587C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F185880:
    ctx->pc = 0x7F185880u;
    // 7F185880: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F185884:
    ctx->pc = 0x7F185884u;
    // 7F185884: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F185888:
    ctx->pc = 0x7F185888u;
    // 7F185888: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18588C:
    ctx->pc = 0x7F18588Cu;
    // 7F18588C: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F185890:
    ctx->pc = 0x7F185890u;
    // 7F185890: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F185894:
    ctx->pc = 0x7F185894u;
    // 7F185894: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F185898:
    ctx->pc = 0x7F185898u;
    // 7F185898: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18589C:
    ctx->pc = 0x7F18589Cu;
    // 7F18589C: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1858A0:
    ctx->pc = 0x7F1858A0u;
    // 7F1858A0: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1858A4:
    ctx->pc = 0x7F1858A4u;
    // 7F1858A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1858A8:
    ctx->pc = 0x7F1858A8u;
    // 7F1858A8: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1858AC:
    ctx->pc = 0x7F1858ACu;
    // 7F1858AC: lwz     r30, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1858B0:
    ctx->pc = 0x7F1858B0u;
    // 7F1858B0: lwz     r29, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1858B4:
    ctx->pc = 0x7F1858B4u;
    // 7F1858B4: bl      0x800261D8
    {
            ctx->lr = 0x7F1858B8u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1858B8:
    ctx->pc = 0x7F1858B8u;
    ctx->downcount -= 3;
    // 7F1858B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1858BC:
    ctx->pc = 0x7F1858BCu;
    // 7F1858BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1858C0:
    ctx->pc = 0x7F1858C0u;
    // 7F1858C0: bl      0x7F114F50
    {
            ctx->lr = 0x7F1858C4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1858C4:
    ctx->pc = 0x7F1858C4u;
    ctx->downcount -= 5;
    // 7F1858C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1858C8:
    ctx->pc = 0x7F1858C8u;
    // 7F1858C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1858CC:
    ctx->pc = 0x7F1858CCu;
    // 7F1858CC: lfs     f1, 4240(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1858CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1858D0:
    ctx->pc = 0x7F1858D0u;
    // 7F1858D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1858D4:
    ctx->pc = 0x7F1858D4u;
    // 7F1858D4: bl      0x80026020
    {
            ctx->lr = 0x7F1858D8u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1858D8:
    ctx->pc = 0x7F1858D8u;
    ctx->downcount -= 4;
    // 7F1858D8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1858DC:
    ctx->pc = 0x7F1858DCu;
    // 7F1858DC: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F1858E0:
    ctx->pc = 0x7F1858E0u;
    // 7F1858E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1858E4:
    ctx->pc = 0x7F1858E4u;
    // 7F1858E4: bl      0x800261B4
    {
            ctx->lr = 0x7F1858E8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1858E8:
    ctx->pc = 0x7F1858E8u;
    ctx->downcount -= 3;
    // 7F1858E8: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1858EC:
    ctx->pc = 0x7F1858ECu;
    // 7F1858EC: cmpwi   r0, 1
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

label_7F1858F0:
    ctx->pc = 0x7F1858F0u;
    // 7F1858F0: bc    12, 2, 0x7F18592C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18592C;
        }
    }

label_7F1858F4:
    ctx->pc = 0x7F1858F4u;
    ctx->downcount -= 1;
    // 7F1858F4: bc    4, 0, 0x7F185904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185904;
        }
    }

label_7F1858F8:
    ctx->pc = 0x7F1858F8u;
    ctx->downcount -= 2;
    // 7F1858F8: cmpwi   r0, 0
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

label_7F1858FC:
    ctx->pc = 0x7F1858FCu;
    // 7F1858FC: bc    4, 0, 0x7F185910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185910;
        }
    }

label_7F185900:
    ctx->pc = 0x7F185900u;
    ctx->downcount -= 1;
    // 7F185900: b       0x7F185968
    {
            goto label_7F185968;
    }

label_7F185904:
    ctx->pc = 0x7F185904u;
    ctx->downcount -= 2;
    // 7F185904: cmpwi   r0, 3
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

label_7F185908:
    ctx->pc = 0x7F185908u;
    // 7F185908: bc    4, 0, 0x7F185968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185968;
        }
    }

label_7F18590C:
    ctx->pc = 0x7F18590Cu;
    ctx->downcount -= 1;
    // 7F18590C: b       0x7F18594C
    {
            goto label_7F18594C;
    }

label_7F185910:
    ctx->pc = 0x7F185910u;
    ctx->downcount -= 7;
    // 7F185910: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F185914:
    ctx->pc = 0x7F185914u;
    // 7F185914: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F185918:
    ctx->pc = 0x7F185918u;
    // 7F185918: sth     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F18591C:
    ctx->pc = 0x7F18591Cu;
    // 7F18591C: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F185920:
    ctx->pc = 0x7F185920u;
    // 7F185920: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185924:
    ctx->pc = 0x7F185924u;
    // 7F185924: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185928:
    ctx->pc = 0x7F185928u;
    // 7F185928: b       0x7F185968
    {
            goto label_7F185968;
    }

label_7F18592C:
    ctx->pc = 0x7F18592Cu;
    ctx->downcount -= 8;
    // 7F18592C: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F185930:
    ctx->pc = 0x7F185930u;
    // 7F185930: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F185934:
    ctx->pc = 0x7F185934u;
    // 7F185934: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F185938:
    ctx->pc = 0x7F185938u;
    // 7F185938: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F18593C:
    ctx->pc = 0x7F18593Cu;
    // 7F18593C: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F185940:
    ctx->pc = 0x7F185940u;
    // 7F185940: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185944:
    ctx->pc = 0x7F185944u;
    // 7F185944: sth     r4, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F185948:
    ctx->pc = 0x7F185948u;
    // 7F185948: b       0x7F185968
    {
            goto label_7F185968;
    }

label_7F18594C:
    ctx->pc = 0x7F18594Cu;
    ctx->downcount -= 7;
    // 7F18594C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F185950:
    ctx->pc = 0x7F185950u;
    // 7F185950: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F185954:
    ctx->pc = 0x7F185954u;
    // 7F185954: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185958:
    ctx->pc = 0x7F185958u;
    // 7F185958: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F18595C:
    ctx->pc = 0x7F18595Cu;
    // 7F18595C: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F185960:
    ctx->pc = 0x7F185960u;
    // 7F185960: sth     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F185964:
    ctx->pc = 0x7F185964u;
    // 7F185964: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185968:
    ctx->pc = 0x7F185968u;
    ctx->downcount -= 5;
    // 7F185968: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18596C:
    ctx->pc = 0x7F18596Cu;
    // 7F18596C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F185970:
    ctx->pc = 0x7F185970u;
    // 7F185970: cmpwi   r0, 3
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

label_7F185974:
    ctx->pc = 0x7F185974u;
    // 7F185974: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185978:
    ctx->pc = 0x7F185978u;
    // 7F185978: bc    12, 0, 0x7F185984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F185984;
        }
    }

label_7F18597C:
    ctx->pc = 0x7F18597Cu;
    ctx->downcount -= 2;
    // 7F18597C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185980:
    ctx->pc = 0x7F185980u;
    // 7F185980: bl      0x7F3C8210
    {
            ctx->lr = 0x7F185984u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F185984:
    ctx->pc = 0x7F185984u;
    ctx->downcount -= 16;
    // 7F185984: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185988:
    ctx->pc = 0x7F185988u;
    // 7F185988: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18598C:
    ctx->pc = 0x7F18598Cu;
    // 7F18598C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185990:
    ctx->pc = 0x7F185990u;
    // 7F185990: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F185994:
    ctx->pc = 0x7F185994u;
    // 7F185994: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185998:
    ctx->pc = 0x7F185998u;
    ctx->downcount -= 7;
    // 7F185998: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F18599C:
    ctx->pc = 0x7F18599Cu;
    // 7F18599C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1859A0:
    ctx->pc = 0x7F1859A0u;
    // 7F1859A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1859A4:
    ctx->pc = 0x7F1859A4u;
    // 7F1859A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1859A8:
    ctx->pc = 0x7F1859A8u;
    // 7F1859A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1859AC:
    ctx->pc = 0x7F1859ACu;
    // 7F1859AC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1859B0:
    ctx->pc = 0x7F1859B0u;
    // 7F1859B0: bl      0x7F01B234
    {
            ctx->lr = 0x7F1859B4u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1859B4:
    ctx->pc = 0x7F1859B4u;
    ctx->downcount -= 7;
    // 7F1859B4: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1859B8:
    ctx->pc = 0x7F1859B8u;
    // 7F1859B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1859BC:
    ctx->pc = 0x7F1859BCu;
    // 7F1859BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1859C0:
    ctx->pc = 0x7F1859C0u;
    // 7F1859C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1859C4:
    ctx->pc = 0x7F1859C4u;
    // 7F1859C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1859C8:
    ctx->pc = 0x7F1859C8u;
    // 7F1859C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1859CC:
    ctx->pc = 0x7F1859CCu;
    ctx->downcount -= 8;
    // 7F1859CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1859D0:
    ctx->pc = 0x7F1859D0u;
    // 7F1859D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1859D4:
    ctx->pc = 0x7F1859D4u;
    // 7F1859D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1859D8:
    ctx->pc = 0x7F1859D8u;
    // 7F1859D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1859DC:
    ctx->pc = 0x7F1859DCu;
    // 7F1859DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1859E0:
    ctx->pc = 0x7F1859E0u;
    // 7F1859E0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1859E4:
    ctx->pc = 0x7F1859E4u;
    // 7F1859E4: cmplwi  r3, 0x0000
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

label_7F1859E8:
    ctx->pc = 0x7F1859E8u;
    // 7F1859E8: bc    12, 2, 0x7F1859F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1859F4;
        }
    }

label_7F1859EC:
    ctx->pc = 0x7F1859ECu;
    ctx->downcount -= 1;
    // 7F1859EC: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1859F0u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1859F0:
    ctx->pc = 0x7F1859F0u;
    ctx->downcount -= 1;
    // 7F1859F0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1859F4:
    ctx->pc = 0x7F1859F4u;
    ctx->downcount -= 6;
    // 7F1859F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1859F8:
    ctx->pc = 0x7F1859F8u;
    // 7F1859F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1859FC:
    ctx->pc = 0x7F1859FCu;
    // 7F1859FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185A00:
    ctx->pc = 0x7F185A00u;
    // 7F185A00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185A04:
    ctx->pc = 0x7F185A04u;
    // 7F185A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185A08:
    ctx->pc = 0x7F185A08u;
    ctx->downcount -= 21;
    // 7F185A08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185A0C:
    ctx->pc = 0x7F185A0Cu;
    // 7F185A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185A10:
    ctx->pc = 0x7F185A10u;
    // 7F185A10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185A14:
    ctx->pc = 0x7F185A14u;
    // 7F185A14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F185A18:
    ctx->pc = 0x7F185A18u;
    // 7F185A18: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185A1C:
    ctx->pc = 0x7F185A1Cu;
    // 7F185A1C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F185A20:
    ctx->pc = 0x7F185A20u;
    // 7F185A20: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185A24:
    ctx->pc = 0x7F185A24u;
    // 7F185A24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185A28:
    ctx->pc = 0x7F185A28u;
    // 7F185A28: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185A2C:
    ctx->pc = 0x7F185A2Cu;
    // 7F185A2C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F185A30:
    ctx->pc = 0x7F185A30u;
    // 7F185A30: bl      0x7F3C2534
    {
            ctx->lr = 0x7F185A34u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F185A34:
    ctx->pc = 0x7F185A34u;
    ctx->downcount -= 32;
    // 7F185A34: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F185A38:
    ctx->pc = 0x7F185A38u;
    // 7F185A38: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F185A3C:
    ctx->pc = 0x7F185A3Cu;
    // 7F185A3C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185A40:
    ctx->pc = 0x7F185A40u;
    // 7F185A40: li      r6, 2048
    ctx->gpr[6] = (u32)(s32)(2048);

label_7F185A44:
    ctx->pc = 0x7F185A44u;
    // 7F185A44: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F185A48:
    ctx->pc = 0x7F185A48u;
    // 7F185A48: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_7F185A4C:
    ctx->pc = 0x7F185A4Cu;
    // 7F185A4C: stw     r10, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F185A50:
    ctx->pc = 0x7F185A50u;
    // 7F185A50: li      r0, 70
    ctx->gpr[0] = (u32)(s32)(70);

label_7F185A54:
    ctx->pc = 0x7F185A54u;
    // 7F185A54: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F185A58:
    ctx->pc = 0x7F185A58u;
    // 7F185A58: lwz     r11, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F185A5C:
    ctx->pc = 0x7F185A5Cu;
    // 7F185A5C: lwz     r9, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F185A60:
    ctx->pc = 0x7F185A60u;
    // 7F185A60: lwz     r8, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F185A64:
    ctx->pc = 0x7F185A64u;
    // 7F185A64: lwz     r7, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F185A68:
    ctx->pc = 0x7F185A68u;
    // 7F185A68: stw     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185A6C:
    ctx->pc = 0x7F185A6Cu;
    // 7F185A6C: stw     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185A70:
    ctx->pc = 0x7F185A70u;
    // 7F185A70: lwz     r8, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F185A74:
    ctx->pc = 0x7F185A74u;
    // 7F185A74: lwz     r7, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F185A78:
    ctx->pc = 0x7F185A78u;
    // 7F185A78: stw     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185A7C:
    ctx->pc = 0x7F185A7Cu;
    // 7F185A7C: stw     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185A80:
    ctx->pc = 0x7F185A80u;
    // 7F185A80: sth     r10, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F185A84:
    ctx->pc = 0x7F185A84u;
    // 7F185A84: sth     r10, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F185A88:
    ctx->pc = 0x7F185A88u;
    // 7F185A88: sth     r6, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F185A8C:
    ctx->pc = 0x7F185A8Cu;
    // 7F185A8C: sth     r6, 14(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F185A90:
    ctx->pc = 0x7F185A90u;
    // 7F185A90: stb     r4, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F185A94:
    ctx->pc = 0x7F185A94u;
    // 7F185A94: stb     r4, 1(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F185A98:
    ctx->pc = 0x7F185A98u;
    // 7F185A98: stb     r4, 2(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F185A9C:
    ctx->pc = 0x7F185A9Cu;
    // 7F185A9C: stb     r3, 3(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F185AA0:
    ctx->pc = 0x7F185AA0u;
    // 7F185AA0: sth     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185AA4:
    ctx->pc = 0x7F185AA4u;
    // 7F185AA4: sth     r0, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F185AA8:
    ctx->pc = 0x7F185AA8u;
    // 7F185AA8: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185AAC:
    ctx->pc = 0x7F185AACu;
    // 7F185AAC: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185AB0:
    ctx->pc = 0x7F185AB0u;
    // 7F185AB0: bl      0x8000519C
    {
            ctx->lr = 0x7F185AB4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F185AB4:
    ctx->pc = 0x7F185AB4u;
    ctx->downcount -= 4;
    // 7F185AB4: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185AB8:
    ctx->pc = 0x7F185AB8u;
    // 7F185AB8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F185ABC:
    ctx->pc = 0x7F185ABCu;
    // 7F185ABC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185AC0:
    ctx->pc = 0x7F185AC0u;
    // 7F185AC0: bl      0x8000519C
    {
            ctx->lr = 0x7F185AC4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F185AC4:
    ctx->pc = 0x7F185AC4u;
    ctx->downcount -= 20;
    // 7F185AC4: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185AC8:
    ctx->pc = 0x7F185AC8u;
    // 7F185AC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F185ACC:
    ctx->pc = 0x7F185ACCu;
    // 7F185ACC: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F185AD0:
    ctx->pc = 0x7F185AD0u;
    // 7F185AD0: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185AD4:
    ctx->pc = 0x7F185AD4u;
    // 7F185AD4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185AD8:
    ctx->pc = 0x7F185AD8u;
    // 7F185AD8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185ADC:
    ctx->pc = 0x7F185ADCu;
    // 7F185ADC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185AE0:
    ctx->pc = 0x7F185AE0u;
    // 7F185AE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185AE4:
    ctx->pc = 0x7F185AE4u;
    // 7F185AE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185AE8:
    ctx->pc = 0x7F185AE8u;
    ctx->downcount -= 36;
    // 7F185AE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185AEC:
    ctx->pc = 0x7F185AECu;
    // 7F185AEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185AF0:
    ctx->pc = 0x7F185AF0u;
    // 7F185AF0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F185AF4:
    ctx->pc = 0x7F185AF4u;
    // 7F185AF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185AF8:
    ctx->pc = 0x7F185AF8u;
    // 7F185AF8: lfs     f0, 4244(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185AF8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185AFC:
    ctx->pc = 0x7F185AFCu;
    // 7F185AFC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F185B00:
    ctx->pc = 0x7F185B00u;
    // 7F185B00: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185B04:
    ctx->pc = 0x7F185B04u;
    // 7F185B04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185B08:
    ctx->pc = 0x7F185B08u;
    // 7F185B08: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F185B0C:
    ctx->pc = 0x7F185B0Cu;
    // 7F185B0C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F185B10:
    ctx->pc = 0x7F185B10u;
    // 7F185B10: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185B14:
    ctx->pc = 0x7F185B14u;
    // 7F185B14: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F185B18:
    ctx->pc = 0x7F185B18u;
    // 7F185B18: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185B1C:
    ctx->pc = 0x7F185B1Cu;
    // 7F185B1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F185B20:
    ctx->pc = 0x7F185B20u;
    // 7F185B20: stw     r6, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F185B24:
    ctx->pc = 0x7F185B24u;
    // 7F185B24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F185B28:
    ctx->pc = 0x7F185B28u;
    // 7F185B28: lwz     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F185B2C:
    ctx->pc = 0x7F185B2Cu;
    // 7F185B2C: lwz     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F185B30:
    ctx->pc = 0x7F185B30u;
    // 7F185B30: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F185B34:
    ctx->pc = 0x7F185B34u;
    // 7F185B34: stw     r8, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185B38:
    ctx->pc = 0x7F185B38u;
    // 7F185B38: stw     r7, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185B3C:
    ctx->pc = 0x7F185B3Cu;
    // 7F185B3C: lfs     f1, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F185B3Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185B40:
    ctx->pc = 0x7F185B40u;
    // 7F185B40: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185B40u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F185B44:
    ctx->pc = 0x7F185B44u;
    // 7F185B44: stfs     f0, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F185B44u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185B48:
    ctx->pc = 0x7F185B48u;
    // 7F185B48: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185B4C:
    ctx->pc = 0x7F185B4Cu;
    // 7F185B4C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F185B50u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F185B50:
    ctx->pc = 0x7F185B50u;
    ctx->downcount -= 3;
    // 7F185B50: or.   r31, r3, r3
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

label_7F185B54:
    ctx->pc = 0x7F185B54u;
    // 7F185B54: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185B58:
    ctx->pc = 0x7F185B58u;
    // 7F185B58: bc    4, 2, 0x7F185B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185B64;
        }
    }

label_7F185B5C:
    ctx->pc = 0x7F185B5Cu;
    ctx->downcount -= 2;
    // 7F185B5C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F185B60:
    ctx->pc = 0x7F185B60u;
    // 7F185B60: b       0x7F185B8C
    {
            goto label_7F185B8C;
    }

label_7F185B64:
    ctx->pc = 0x7F185B64u;
    ctx->downcount -= 3;
    // 7F185B64: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F185B68:
    ctx->pc = 0x7F185B68u;
    // 7F185B68: addi    r3, r3, -13336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13336);

label_7F185B6C:
    ctx->pc = 0x7F185B6Cu;
    // 7F185B6C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F185B70u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F185B70:
    ctx->pc = 0x7F185B70u;
    ctx->downcount -= 1;
    // 7F185B70: bl      0x7F3B6420
    {
            ctx->lr = 0x7F185B74u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F185B74:
    ctx->pc = 0x7F185B74u;
    ctx->downcount -= 5;
    // 7F185B74: stw     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F185B78:
    ctx->pc = 0x7F185B78u;
    // 7F185B78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F185B7C:
    ctx->pc = 0x7F185B7Cu;
    // 7F185B7C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185B80:
    ctx->pc = 0x7F185B80u;
    // 7F185B80: lwz     r5, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F185B84:
    ctx->pc = 0x7F185B84u;
    // 7F185B84: bl      0x7F185A08
    {
            ctx->lr = 0x7F185B88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185A08u;
                return;
            }
            goto label_7F185A08;
    }

label_7F185B88:
    ctx->pc = 0x7F185B88u;
    ctx->downcount -= 1;
    // 7F185B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F185B8C:
    ctx->pc = 0x7F185B8Cu;
    ctx->downcount -= 16;
    // 7F185B8C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185B90:
    ctx->pc = 0x7F185B90u;
    // 7F185B90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185B94:
    ctx->pc = 0x7F185B94u;
    // 7F185B94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185B98:
    ctx->pc = 0x7F185B98u;
    // 7F185B98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185B9C:
    ctx->pc = 0x7F185B9Cu;
    // 7F185B9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185BA0:
    ctx->pc = 0x7F185BA0u;
    ctx->downcount -= 20;
    // 7F185BA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185BA4:
    ctx->pc = 0x7F185BA4u;
    // 7F185BA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185BA8:
    ctx->pc = 0x7F185BA8u;
    // 7F185BA8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F185BAC:
    ctx->pc = 0x7F185BACu;
    // 7F185BAC: li      r5, 76
    ctx->gpr[5] = (u32)(s32)(76);

label_7F185BB0:
    ctx->pc = 0x7F185BB0u;
    // 7F185BB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185BB4:
    ctx->pc = 0x7F185BB4u;
    // 7F185BB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F185BB8:
    ctx->pc = 0x7F185BB8u;
    // 7F185BB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185BBC:
    ctx->pc = 0x7F185BBCu;
    // 7F185BBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185BC0:
    ctx->pc = 0x7F185BC0u;
    // 7F185BC0: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F185BC4:
    ctx->pc = 0x7F185BC4u;
    // 7F185BC4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F185BC8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F185BC8:
    ctx->pc = 0x7F185BC8u;
    ctx->downcount -= 2;
    // 7F185BC8: or.   r31, r3, r3
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

label_7F185BCC:
    ctx->pc = 0x7F185BCCu;
    // 7F185BCC: bc    12, 2, 0x7F185C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F185C30;
        }
    }

label_7F185BD0:
    ctx->pc = 0x7F185BD0u;
    ctx->downcount -= 5;
    // 7F185BD0: lis     r4, 32536
    ctx->gpr[4] = ((u32)(s32)(32536) << 16);

label_7F185BD4:
    ctx->pc = 0x7F185BD4u;
    // 7F185BD4: lis     r5, 32536
    ctx->gpr[5] = ((u32)(s32)(32536) << 16);

label_7F185BD8:
    ctx->pc = 0x7F185BD8u;
    // 7F185BD8: addi    r4, r4, 22608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22608);

label_7F185BDC:
    ctx->pc = 0x7F185BDCu;
    // 7F185BDC: addi    r5, r5, 22988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22988);

label_7F185BE0:
    ctx->pc = 0x7F185BE0u;
    // 7F185BE0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F185BE4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F185BE4:
    ctx->pc = 0x7F185BE4u;
    ctx->downcount -= 13;
    // 7F185BE4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185BE8:
    ctx->pc = 0x7F185BE8u;
    // 7F185BE8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F185BEC:
    ctx->pc = 0x7F185BECu;
    // 7F185BEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F185BF0:
    ctx->pc = 0x7F185BF0u;
    // 7F185BF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185BF4:
    ctx->pc = 0x7F185BF4u;
    // 7F185BF4: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F185BF8:
    ctx->pc = 0x7F185BF8u;
    // 7F185BF8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F185BFC:
    ctx->pc = 0x7F185BFCu;
    // 7F185BFC: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F185C00:
    ctx->pc = 0x7F185C00u;
    // 7F185C00: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F185C04:
    ctx->pc = 0x7F185C04u;
    // 7F185C04: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F185C08:
    ctx->pc = 0x7F185C08u;
    // 7F185C08: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F185C0C:
    ctx->pc = 0x7F185C0Cu;
    // 7F185C0C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F185C10:
    ctx->pc = 0x7F185C10u;
    // 7F185C10: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185C14:
    ctx->pc = 0x7F185C14u;
    // 7F185C14: bl      0x7F185AE8
    {
            ctx->lr = 0x7F185C18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185AE8u;
                return;
            }
            goto label_7F185AE8;
    }

label_7F185C18:
    ctx->pc = 0x7F185C18u;
    ctx->downcount -= 2;
    // 7F185C18: cmpwi   r3, 0
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

label_7F185C1C:
    ctx->pc = 0x7F185C1Cu;
    // 7F185C1C: bc    4, 0, 0x7F185C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185C30;
        }
    }

label_7F185C20:
    ctx->pc = 0x7F185C20u;
    ctx->downcount -= 2;
    // 7F185C20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185C24:
    ctx->pc = 0x7F185C24u;
    // 7F185C24: bl      0x7F3C8210
    {
            ctx->lr = 0x7F185C28u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F185C28:
    ctx->pc = 0x7F185C28u;
    ctx->downcount -= 2;
    // 7F185C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F185C2C:
    ctx->pc = 0x7F185C2Cu;
    // 7F185C2C: b       0x7F185C34
    {
            goto label_7F185C34;
    }

label_7F185C30:
    ctx->pc = 0x7F185C30u;
    ctx->downcount -= 1;
    // 7F185C30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185C34:
    ctx->pc = 0x7F185C34u;
    ctx->downcount -= 16;
    // 7F185C34: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F185C38:
    ctx->pc = 0x7F185C38u;
    // 7F185C38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185C3C:
    ctx->pc = 0x7F185C3Cu;
    // 7F185C3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185C40:
    ctx->pc = 0x7F185C40u;
    // 7F185C40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185C44:
    ctx->pc = 0x7F185C44u;
    // 7F185C44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185C48:
    ctx->pc = 0x7F185C48u;
    ctx->downcount -= 7;
    // 7F185C48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185C4C:
    ctx->pc = 0x7F185C4Cu;
    // 7F185C4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185C50:
    ctx->pc = 0x7F185C50u;
    // 7F185C50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185C54:
    ctx->pc = 0x7F185C54u;
    // 7F185C54: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F185C58:
    ctx->pc = 0x7F185C58u;
    // 7F185C58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185C5C:
    ctx->pc = 0x7F185C5Cu;
    // 7F185C5C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185C60:
    ctx->pc = 0x7F185C60u;
    // 7F185C60: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F185C64u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F185C64:
    ctx->pc = 0x7F185C64u;
    ctx->downcount -= 2;
    // 7F185C64: addi    r3, r31, 124
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(124);

label_7F185C68:
    ctx->pc = 0x7F185C68u;
    // 7F185C68: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F185C6Cu;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F185C6C:
    ctx->pc = 0x7F185C6Cu;
    ctx->downcount -= 2;
    // 7F185C6C: addi    r3, r31, 60
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(60);

label_7F185C70:
    ctx->pc = 0x7F185C70u;
    // 7F185C70: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F185C74u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F185C74:
    ctx->pc = 0x7F185C74u;
    ctx->downcount -= 2;
    // 7F185C74: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185C78:
    ctx->pc = 0x7F185C78u;
    // 7F185C78: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F185C7Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F185C7C:
    ctx->pc = 0x7F185C7Cu;
    ctx->downcount -= 4;
    // 7F185C7C: addi    r3, r31, 3744
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3744);

label_7F185C80:
    ctx->pc = 0x7F185C80u;
    // 7F185C80: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_7F185C84:
    ctx->pc = 0x7F185C84u;
    // 7F185C84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F185C88:
    ctx->pc = 0x7F185C88u;
    // 7F185C88: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F185C8Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F185C8C:
    ctx->pc = 0x7F185C8Cu;
    ctx->downcount -= 6;
    // 7F185C8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185C90:
    ctx->pc = 0x7F185C90u;
    // 7F185C90: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F185C94:
    ctx->pc = 0x7F185C94u;
    // 7F185C94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F185C98:
    ctx->pc = 0x7F185C98u;
    // 7F185C98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F185C9C:
    ctx->pc = 0x7F185C9Cu;
    // 7F185C9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F185CA0:
    ctx->pc = 0x7F185CA0u;
    ctx->downcount -= 32;
    // 7F185CA0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F185CA4:
    ctx->pc = 0x7F185CA4u;
    // 7F185CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F185CA8:
    ctx->pc = 0x7F185CA8u;
    // 7F185CA8: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185CAC:
    ctx->pc = 0x7F185CACu;
    // 7F185CAC: stmw     r24, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F185CB0:
    ctx->pc = 0x7F185CB0u;
    // 7F185CB0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185CB4:
    ctx->pc = 0x7F185CB4u;
    // 7F185CB4: addi    r31, r1, 56
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(56);

label_7F185CB8:
    ctx->pc = 0x7F185CB8u;
    // 7F185CB8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F185CBC:
    ctx->pc = 0x7F185CBCu;
    // 7F185CBC: addi    r26, r25, 1952
    ctx->gpr[26] = ctx->gpr[25] + (u32)(s32)(1952);

label_7F185CC0:
    ctx->pc = 0x7F185CC0u;
    // 7F185CC0: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185CC4:
    ctx->pc = 0x7F185CC4u;
    // 7F185CC4: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185CC8:
    ctx->pc = 0x7F185CC8u;
    // 7F185CC8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F185CCC:
    ctx->pc = 0x7F185CCCu;
    // 7F185CCC: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185CD0:
    ctx->pc = 0x7F185CD0u;
    // 7F185CD0: lwz     r3, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185CD4:
    ctx->pc = 0x7F185CD4u;
    // 7F185CD4: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185CD8:
    ctx->pc = 0x7F185CD8u;
    // 7F185CD8: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F185CDC:
    ctx->pc = 0x7F185CDCu;
    // 7F185CDC: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F185CE0:
    ctx->pc = 0x7F185CE0u;
    // 7F185CE0: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F185CE4:
    ctx->pc = 0x7F185CE4u;
    // 7F185CE4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F185CE8:
    ctx->pc = 0x7F185CE8u;
    // 7F185CE8: lwzx    r29, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F185CEC:
    ctx->pc = 0x7F185CECu;
    // 7F185CEC: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F185CF0:
    ctx->pc = 0x7F185CF0u;
    // 7F185CF0: lwzx    r28, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F185CF4:
    ctx->pc = 0x7F185CF4u;
    // 7F185CF4: lwz     r27, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F185CF8:
    ctx->pc = 0x7F185CF8u;
    ctx->downcount -= 6;
    // 7F185CF8: lwz     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F185CFC:
    // 7F185CFC: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F185D00:
    ctx->pc = 0x7F185D00u;
    // 7F185D00: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185D04:
    ctx->pc = 0x7F185D04u;
    // 7F185D04: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185D08:
    // 7F185D08: cmpwi   r0, 0
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

label_7F185D0C:
    // 7F185D0C: bc    4, 0, 0x7F185FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F185FC0;
        }
    }

label_7F185D10:
    ctx->downcount -= 1;
    // 7F185D10: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D14u;
            goto label_7F18617C;
    }

label_7F185D14:
    ctx->downcount -= 7;
    // 7F185D14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185D18:
    // 7F185D18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D1C:
    ctx->pc = 0x7F185D1Cu;
    // 7F185D1C: lfs     f2, 4256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185D1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185D20:
    ctx->pc = 0x7F185D20u;
    // 7F185D20: lfs     f0, 4252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185D20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185D24:
    ctx->pc = 0x7F185D24u;
    // 7F185D24: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185D24u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F185D28:
    ctx->pc = 0x7F185D28u;
    // 7F185D28: stfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F185D28u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185D2C:
    // 7F185D2C: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D30u;
            goto label_7F18617C;
    }

label_7F185D30:
    ctx->downcount -= 9;
    // 7F185D30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D34:
    // 7F185D34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185D38:
    ctx->pc = 0x7F185D38u;
    // 7F185D38: lfs     f0, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F185D38u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185D3C:
    ctx->pc = 0x7F185D3Cu;
    // 7F185D3C: lfs     f2, 4260(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185D3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185D40:
    ctx->pc = 0x7F185D40u;
    // 7F185D40: lfs     f3, 4264(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185D40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F185D44:
    ctx->pc = 0x7F185D44u;
    // 7F185D44: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185D44u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F185D48:
    ctx->pc = 0x7F185D48u;
    // 7F185D48: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185D48u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F185D4C:
    ctx->pc = 0x7F185D4Cu;
    // 7F185D4C: stfs     f0, 4(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F185D4Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185D50:
    // 7F185D50: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D54u;
            goto label_7F18617C;
    }

label_7F185D54:
    ctx->downcount -= 5;
    // 7F185D54: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D58:
    ctx->pc = 0x7F185D58u;
    // 7F185D58: lfs     f0, 4268(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185D58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185D5C:
    ctx->pc = 0x7F185D5Cu;
    // 7F185D5C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185D5Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F185D60:
    ctx->pc = 0x7F185D60u;
    // 7F185D60: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185D64:
    // 7F185D64: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D68u;
            goto label_7F18617C;
    }

label_7F185D68:
    ctx->downcount -= 5;
    // 7F185D68: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D6C:
    ctx->pc = 0x7F185D6Cu;
    // 7F185D6C: lfs     f0, 4272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185D6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185D70:
    ctx->pc = 0x7F185D70u;
    // 7F185D70: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185D70u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F185D74:
    ctx->pc = 0x7F185D74u;
    // 7F185D74: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185D74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185D78:
    // 7F185D78: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D7Cu;
            goto label_7F18617C;
    }

label_7F185D7C:
    ctx->downcount -= 7;
    // 7F185D7C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185D80:
    // 7F185D80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D84:
    ctx->pc = 0x7F185D84u;
    // 7F185D84: lfs     f2, 4268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185D84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185D88:
    ctx->pc = 0x7F185D88u;
    // 7F185D88: lfs     f0, 4276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185D88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185D8C:
    ctx->pc = 0x7F185D8Cu;
    // 7F185D8C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185D8Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F185D90:
    ctx->pc = 0x7F185D90u;
    // 7F185D90: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185D94:
    // 7F185D94: bl      0x7F18617C
    {
            ctx->lr = 0x7F185D98u;
            goto label_7F18617C;
    }

label_7F185D98:
    ctx->downcount -= 9;
    // 7F185D98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185D9C:
    // 7F185D9C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185DA0:
    // 7F185DA0: addi    r5, r3, 4284
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(4284);

label_7F185DA4:
    ctx->pc = 0x7F185DA4u;
    // 7F185DA4: lfs     f0, 4280(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185DA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185DA8:
    ctx->pc = 0x7F185DA8u;
    // 7F185DA8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185DA8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185DAC:
    // 7F185DAC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185DB0:
    // 7F185DB0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185DB4:
    ctx->pc = 0x7F185DB4u;
    // 7F185DB4: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185DB4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F185DB8:
    // 7F185DB8: bl      0x800261FC
    {
            ctx->lr = 0x7F185DBCu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F185DBC:
    ctx->downcount -= 1;
    // 7F185DBC: bl      0x7F18617C
    {
            ctx->lr = 0x7F185DC0u;
            goto label_7F18617C;
    }

label_7F185DC0:
    ctx->downcount -= 7;
    // 7F185DC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185DC4:
    // 7F185DC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185DC8:
    ctx->pc = 0x7F185DC8u;
    // 7F185DC8: lfs     f2, 4292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185DC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185DCC:
    ctx->pc = 0x7F185DCCu;
    // 7F185DCC: lfs     f0, 4288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185DCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185DD0:
    ctx->pc = 0x7F185DD0u;
    // 7F185DD0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185DD0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F185DD4:
    ctx->pc = 0x7F185DD4u;
    // 7F185DD4: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185DD8:
    // 7F185DD8: bl      0x7F18617C
    {
            ctx->lr = 0x7F185DDCu;
            goto label_7F18617C;
    }

label_7F185DDC:
    ctx->downcount -= 15;
    // 7F185DDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185DE0:
    // 7F185DE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185DE4:
    // 7F185DE4: addi    r5, r3, 4292
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(4292);

label_7F185DE8:
    ctx->pc = 0x7F185DE8u;
    // 7F185DE8: lfs     f2, 4248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185DE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185DEC:
    ctx->pc = 0x7F185DECu;
    // 7F185DEC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185DECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185DF0:
    // 7F185DF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185DF4:
    ctx->pc = 0x7F185DF4u;
    // 7F185DF4: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F185DF8:
    // 7F185DF8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185DFC:
    ctx->pc = 0x7F185DFCu;
    // 7F185DFC: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185DFCu)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F185E00:
    ctx->pc = 0x7F185E00u;
    // 7F185E00: lfs     f0, 4296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185E00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185E04:
    // 7F185E04: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F185E08:
    ctx->pc = 0x7F185E08u;
    // 7F185E08: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185E0C:
    // 7F185E0C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F185E10:
    ctx->pc = 0x7F185E10u;
    // 7F185E10: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F185E14:
    // 7F185E14: bl      0x800261B4
    {
            ctx->lr = 0x7F185E18u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F185E18:
    ctx->downcount -= 1;
    // 7F185E18: bl      0x7F18617C
    {
            ctx->lr = 0x7F185E1Cu;
            goto label_7F18617C;
    }

label_7F185E1C:
    ctx->downcount -= 7;
    // 7F185E1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185E20:
    // 7F185E20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185E24:
    ctx->pc = 0x7F185E24u;
    // 7F185E24: lfs     f2, 4292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185E24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185E28:
    ctx->pc = 0x7F185E28u;
    // 7F185E28: lfs     f0, 4300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185E28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185E2C:
    ctx->pc = 0x7F185E2Cu;
    // 7F185E2C: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185E2Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F185E30:
    ctx->pc = 0x7F185E30u;
    // 7F185E30: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185E34:
    // 7F185E34: bl      0x7F18617C
    {
            ctx->lr = 0x7F185E38u;
            goto label_7F18617C;
    }

label_7F185E38:
    ctx->downcount -= 15;
    // 7F185E38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185E3C:
    // 7F185E3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185E40:
    // 7F185E40: addi    r5, r3, 4292
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(4292);

label_7F185E44:
    ctx->pc = 0x7F185E44u;
    // 7F185E44: lfs     f2, 4248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185E44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185E48:
    ctx->pc = 0x7F185E48u;
    // 7F185E48: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185E48u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185E4C:
    // 7F185E4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185E50:
    ctx->pc = 0x7F185E50u;
    // 7F185E50: stfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F185E54:
    // 7F185E54: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185E58:
    ctx->pc = 0x7F185E58u;
    // 7F185E58: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185E58u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F185E5C:
    ctx->pc = 0x7F185E5Cu;
    // 7F185E5C: lfs     f0, 4296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185E5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185E60:
    // 7F185E60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F185E64:
    // 7F185E64: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185E68:
    ctx->pc = 0x7F185E68u;
    // 7F185E68: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185E6C:
    ctx->pc = 0x7F185E6Cu;
    // 7F185E6C: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F185E70:
    // 7F185E70: bl      0x800261B4
    {
            ctx->lr = 0x7F185E74u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F185E74:
    ctx->downcount -= 1;
    // 7F185E74: bl      0x7F18617C
    {
            ctx->lr = 0x7F185E78u;
            goto label_7F18617C;
    }

label_7F185E78:
    ctx->downcount -= 85;
    // 7F185E78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185E7C:
    // 7F185E7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185E80:
    ctx->pc = 0x7F185E80u;
    // 7F185E80: lfs     f2, 4268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F185E80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185E84:
    ctx->pc = 0x7F185E84u;
    // 7F185E84: lfs     f0, 4276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F185E84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185E88:
    // 7F185E88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F185E8C:
    ctx->pc = 0x7F185E8Cu;
    // 7F185E8C: lwz     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F185E90:
    // 7F185E90: addi    r6, r3, 4296
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(4296);

label_7F185E94:
    ctx->pc = 0x7F185E94u;
    // 7F185E94: fmadds f8, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185E94u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[8] = ctx->ps1[8] = result;
    }

label_7F185E98:
    ctx->pc = 0x7F185E98u;
    // 7F185E98: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185E9C:
    ctx->pc = 0x7F185E9Cu;
    // 7F185E9C: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185EA0:
    // 7F185EA0: addi    r3, r25, 60
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(60);

label_7F185EA4:
    ctx->pc = 0x7F185EA4u;
    // 7F185EA4: lwz     r9, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F185EA8:
    ctx->pc = 0x7F185EA8u;
    // 7F185EA8: fmuls   f2, f8, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185EA8u)) return;
    ppc_fmuls(ctx, 2, 8, 1);

label_7F185EAC:
    ctx->pc = 0x7F185EACu;
    // 7F185EAC: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185EB0:
    ctx->pc = 0x7F185EB0u;
    // 7F185EB0: fmuls   f0, f8, f0
    if (!ppc_fp_available_inline(ctx, 0x7F185EB0u)) return;
    ppc_fmuls(ctx, 0, 8, 0);

label_7F185EB4:
    ctx->pc = 0x7F185EB4u;
    // 7F185EB4: lwz     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F185EB8:
    ctx->pc = 0x7F185EB8u;
    // 7F185EB8: fdivs   f6, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185EB8u)) return;
    ppc_fdivs(ctx, 6, 2, 1);

label_7F185EBC:
    ctx->pc = 0x7F185EBCu;
    // 7F185EBC: stw     r7, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185EC0:
    ctx->pc = 0x7F185EC0u;
    // 7F185EC0: lwz     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F185EC4:
    ctx->pc = 0x7F185EC4u;
    // 7F185EC4: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F185EC8:
    ctx->pc = 0x7F185EC8u;
    // 7F185EC8: lwz     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185ECC:
    ctx->pc = 0x7F185ECCu;
    // 7F185ECC: lfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185ECCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185ED0:
    ctx->pc = 0x7F185ED0u;
    // 7F185ED0: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185ED4:
    ctx->pc = 0x7F185ED4u;
    // 7F185ED4: fadds   f5, f2, f6
    if (!ppc_fp_available_inline(ctx, 0x7F185ED4u)) return;
    ppc_fadds(ctx, 5, 2, 6);

label_7F185ED8:
    ctx->pc = 0x7F185ED8u;
    // 7F185ED8: lwz     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F185EDC:
    ctx->pc = 0x7F185EDCu;
    // 7F185EDC: fdivs   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F185EDCu)) return;
    ppc_fdivs(ctx, 3, 0, 1);

label_7F185EE0:
    ctx->pc = 0x7F185EE0u;
    // 7F185EE0: stw     r9, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F185EE4:
    ctx->pc = 0x7F185EE4u;
    // 7F185EE4: lfs     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185EE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F185EE8:
    ctx->pc = 0x7F185EE8u;
    // 7F185EE8: stw     r8, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F185EEC:
    ctx->pc = 0x7F185EECu;
    // 7F185EEC: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185EECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185EF0:
    ctx->pc = 0x7F185EF0u;
    // 7F185EF0: lfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185EF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185EF4:
    ctx->pc = 0x7F185EF4u;
    // 7F185EF4: fadds   f7, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x7F185EF4u)) return;
    ppc_fadds(ctx, 7, 1, 8);

label_7F185EF8:
    ctx->pc = 0x7F185EF8u;
    // 7F185EF8: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F185EFC:
    ctx->pc = 0x7F185EFCu;
    // 7F185EFC: fadds   f4, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F185EFCu)) return;
    ppc_fadds(ctx, 4, 0, 3);

label_7F185F00:
    ctx->pc = 0x7F185F00u;
    // 7F185F00: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185F04:
    ctx->pc = 0x7F185F04u;
    // 7F185F04: stw     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F185F08:
    ctx->pc = 0x7F185F08u;
    // 7F185F08: fadds   f2, f2, f8
    if (!ppc_fp_available_inline(ctx, 0x7F185F08u)) return;
    ppc_fadds(ctx, 2, 2, 8);

label_7F185F0C:
    ctx->pc = 0x7F185F0Cu;
    // 7F185F0C: lfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185F10:
    ctx->pc = 0x7F185F10u;
    // 7F185F10: lfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F185F14:
    ctx->pc = 0x7F185F14u;
    // 7F185F14: fadds   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F185F14u)) return;
    ppc_fadds(ctx, 1, 1, 6);

label_7F185F18:
    ctx->pc = 0x7F185F18u;
    // 7F185F18: stw     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F185F1C:
    ctx->pc = 0x7F185F1Cu;
    // 7F185F1C: fadds   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F185F1Cu)) return;
    ppc_fadds(ctx, 0, 0, 3);

label_7F185F20:
    ctx->pc = 0x7F185F20u;
    // 7F185F20: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F185F20u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F185F24:
    ctx->pc = 0x7F185F24u;
    // 7F185F24: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185F28:
    ctx->pc = 0x7F185F28u;
    // 7F185F28: stfs     f7, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F185F2C:
    ctx->pc = 0x7F185F2Cu;
    // 7F185F2C: stfs     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F185F30:
    ctx->pc = 0x7F185F30u;
    // 7F185F30: stfs     f4, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F185F34:
    ctx->pc = 0x7F185F34u;
    // 7F185F34: stfs     f3, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F185F38:
    ctx->pc = 0x7F185F38u;
    // 7F185F38: stfs     f2, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F185F3C:
    ctx->pc = 0x7F185F3Cu;
    // 7F185F3C: stfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F185F40:
    ctx->pc = 0x7F185F40u;
    // 7F185F40: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F185F44:
    ctx->pc = 0x7F185F44u;
    // 7F185F44: stfs     f3, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F185F44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F185F48:
    // 7F185F48: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F185F4Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F185F4C:
    ctx->downcount -= 4;
    // 7F185F4C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185F50:
    // 7F185F50: addi    r4, r26, 8
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(8);

label_7F185F54:
    // 7F185F54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F185F58:
    // 7F185F58: bl      0x7F3B3648
    {
            ctx->lr = 0x7F185F5Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F185F5C:
    ctx->downcount -= 2;
    // 7F185F5C: addi    r3, r25, 60
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(60);

label_7F185F60:
    // 7F185F60: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F185F64u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F185F64:
    ctx->downcount -= 4;
    // 7F185F64: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F185F68:
    // 7F185F68: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F185F6C:
    // 7F185F6C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F185F70:
    // 7F185F70: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F185F74u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F185F74:
    ctx->pc = 0x7F185F74u;
    ctx->downcount -= 4;
    // 7F185F74: lwz     r24, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F185F78:
    // 7F185F78: addi    r29, r29, 64
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(64);

label_7F185F7C:
    // 7F185F7C: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F185F80:
    // 7F185F80: bl      0x7F186158
    {
            ctx->lr = 0x7F185F84u;
            goto label_7F186158;
    }

label_7F185F84:
    ctx->downcount -= 58;
    // 7F185F84: divwu   r0, r3, r24
    {
        u32 divisor = ctx->gpr[24];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F185F88:
    // 7F185F88: mullw   r0, r0, r24
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[24];
        ctx->gpr[0] = (u32)product;
    }

label_7F185F8C:
    // 7F185F8C: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F185F90:
    // 7F185F90: add   r0, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F185F94:
    ctx->pc = 0x7F185F94u;
    // 7F185F94: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F185F98:
    ctx->pc = 0x7F185F98u;
    // 7F185F98: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185F9C:
    ctx->pc = 0x7F185F9Cu;
    // 7F185F9C: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F185FA0:
    ctx->pc = 0x7F185FA0u;
    // 7F185FA0: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185FA4:
    ctx->pc = 0x7F185FA4u;
    // 7F185FA4: stb     r0, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F185FA8:
    ctx->pc = 0x7F185FA8u;
    // 7F185FA8: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185FAC:
    ctx->pc = 0x7F185FACu;
    // 7F185FAC: stb     r0, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F185FB0:
    ctx->pc = 0x7F185FB0u;
    // 7F185FB0: lwz     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F185FB4:
    ctx->pc = 0x7F185FB4u;
    // 7F185FB4: stb     r0, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F185FB8:
    // 7F185FB8: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F185FBC:
    // 7F185FBC: b       0x7F186064
    {
            goto label_7F186064;
    }

label_7F185FC0:
    ctx->downcount -= 6;
    // 7F185FC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185FC4:
    // 7F185FC4: addi    r3, r26, 8
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(8);

label_7F185FC8:
    // 7F185FC8: addi    r5, r4, 4304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4304);

label_7F185FCC:
    // 7F185FCC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185FD0:
    ctx->pc = 0x7F185FD0u;
    // 7F185FD0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F185FD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F185FD4:
    // 7F185FD4: bl      0x800261FC
    {
            ctx->lr = 0x7F185FD8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F185FD8:
    ctx->downcount -= 4;
    // 7F185FD8: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F185FDC:
    // 7F185FDC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185FE0:
    // 7F185FE0: addi    r5, r29, 32
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(32);

label_7F185FE4:
    // 7F185FE4: bl      0x800261B4
    {
            ctx->lr = 0x7F185FE8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F185FE8:
    ctx->downcount -= 4;
    // 7F185FE8: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F185FEC:
    // 7F185FEC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F185FF0:
    // 7F185FF0: addi    r5, r29, 48
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(48);

label_7F185FF4:
    // 7F185FF4: bl      0x800261B4
    {
            ctx->lr = 0x7F185FF8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F185FF8:
    ctx->downcount -= 6;
    // 7F185FF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F185FFC:
    // 7F185FFC: addi    r3, r26, 8
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(8);

label_7F186000:
    // 7F186000: addi    r5, r4, 4308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4308);

label_7F186004:
    // 7F186004: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F186008:
    ctx->pc = 0x7F186008u;
    // 7F186008: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F186008u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18600C:
    // 7F18600C: bl      0x800261FC
    {
            ctx->lr = 0x7F186010u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F186010:
    ctx->downcount -= 4;
    // 7F186010: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F186014:
    // 7F186014: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F186018:
    // 7F186018: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F18601C:
    // 7F18601C: bl      0x800261D8
    {
            ctx->lr = 0x7F186020u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F186020:
    ctx->downcount -= 4;
    // 7F186020: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_7F186024:
    // 7F186024: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F186028:
    // 7F186028: addi    r5, r29, 16
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(16);

label_7F18602C:
    // 7F18602C: bl      0x800261D8
    {
            ctx->lr = 0x7F186030u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F186030:
    ctx->downcount -= 5;
    // 7F186030: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F186034:
    ctx->pc = 0x7F186034u;
    // 7F186034: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F186038:
    // 7F186038: addi    r29, r29, 64
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(64);

label_7F18603C:
    // 7F18603C: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F186040:
    loop_7F186040(ctx);
    if (ctx->pc == 0x7F186050u) goto label_7F186050;
    return;
label_7F186044:
    ctx->pc = 0x7F186044u;
    // 7F186044: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186048:
    // 7F186048: addi    r27, r27, 12
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(12);

label_7F18604C:
    // 7F18604C: bc    16, 0, 0x7F186040
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186040u;
                return;
            }
            goto label_7F186040;
        }
    }

label_7F186050:
    ctx->downcount -= 5;
    // 7F186050: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186054:
    ctx->pc = 0x7F186054u;
    // 7F186054: lfs     f1, 12(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F186054u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186058:
    ctx->pc = 0x7F186058u;
    // 7F186058: lfs     f0, 4296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F186058u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18605C:
    ctx->pc = 0x7F18605Cu;
    // 7F18605C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18605Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F186060:
    ctx->pc = 0x7F186060u;
    // 7F186060: stfs     f0, 12(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F186060u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186064:
    ctx->downcount -= 4;
    // 7F186064: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F186068:
    // 7F186068: addi    r26, r26, 28
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(28);

label_7F18606C:
    // 7F18606C: cmpwi   r30, 64
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186070:
    // 7F186070: bc    12, 0, 0x7F185CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185CF8u;
                return;
            }
            goto label_7F185CF8;
        }
    }

label_7F186074:
    ctx->pc = 0x7F186074u;
    ctx->downcount -= 12;
    // 7F186074: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F186078:
    ctx->pc = 0x7F186078u;
    // 7F186078: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F18607C:
    ctx->pc = 0x7F18607Cu;
    // 7F18607C: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F186080:
    ctx->pc = 0x7F186080u;
    // 7F186080: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186084:
    ctx->pc = 0x7F186084u;
    // 7F186084: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F186088:
    ctx->pc = 0x7F186088u;
    // 7F186088: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F18608C:
    ctx->pc = 0x7F18608Cu;
    // 7F18608C: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F186090:
    ctx->pc = 0x7F186090u;
    // 7F186090: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F186094:
    ctx->pc = 0x7F186094u;
    // 7F186094: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F186098:
    ctx->pc = 0x7F186098u;
    // 7F186098: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F18609C:
    ctx->pc = 0x7F18609Cu;
    // 7F18609C: or.   r0, r3, r0
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

label_7F1860A0:
    ctx->pc = 0x7F1860A0u;
    // 7F1860A0: bc    12, 2, 0x7F186144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186144;
        }
    }

label_7F1860A4:
    ctx->pc = 0x7F1860A4u;
    ctx->downcount -= 3;
    // 7F1860A4: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1860A8:
    ctx->pc = 0x7F1860A8u;
    // 7F1860A8: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1860AC:
    ctx->pc = 0x7F1860ACu;
    // 7F1860AC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1860B0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1860B0:
    ctx->pc = 0x7F1860B0u;
    ctx->downcount -= 4;
    // 7F1860B0: addi    r3, r25, 108
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(108);

label_7F1860B4:
    ctx->pc = 0x7F1860B4u;
    // 7F1860B4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1860B8:
    ctx->pc = 0x7F1860B8u;
    // 7F1860B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1860BC:
    ctx->pc = 0x7F1860BCu;
    // 7F1860BC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1860C0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1860C0:
    ctx->pc = 0x7F1860C0u;
    ctx->downcount -= 5;
    // 7F1860C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1860C4:
    ctx->pc = 0x7F1860C4u;
    // 7F1860C4: lfs     f5, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1860C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1860C8:
    ctx->pc = 0x7F1860C8u;
    // 7F1860C8: lfs     f0, 4248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1860C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1860CC:
    ctx->pc = 0x7F1860CCu;
    // 7F1860CC: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1860CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_7F1860D0:
    ctx->pc = 0x7F1860D0u;
    // 7F1860D0: bc    4, 1, 0x7F1860D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1860D8;
        }
    }

label_7F1860D4:
    ctx->pc = 0x7F1860D4u;
    ctx->downcount -= 1;
    // 7F1860D4: b       0x7F1860DC
    {
            goto label_7F1860DC;
    }

label_7F1860D8:
    ctx->pc = 0x7F1860D8u;
    ctx->downcount -= 1;
    // 7F1860D8: fneg    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1860D8u)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[5]) ^ 0x8000000000000000ull);

label_7F1860DC:
    ctx->pc = 0x7F1860DCu;
    ctx->downcount -= 47;
    // 7F1860DC: frsp    f3, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1860DCu)) return;
    ppc_frsp(ctx, 3, 5);

label_7F1860E0:
    ctx->pc = 0x7F1860E0u;
    // 7F1860E0: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1860E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1860E4:
    ctx->pc = 0x7F1860E4u;
    // 7F1860E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1860E8:
    ctx->pc = 0x7F1860E8u;
    // 7F1860E8: lfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1860E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1860EC:
    ctx->pc = 0x7F1860ECu;
    // 7F1860EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1860F0:
    ctx->pc = 0x7F1860F0u;
    // 7F1860F0: lfs     f1, 4312(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1860F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1860F4:
    ctx->pc = 0x7F1860F4u;
    // 7F1860F4: fdivs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1860F4u)) return;
    ppc_fdivs(ctx, 2, 0, 3);

label_7F1860F8:
    ctx->pc = 0x7F1860F8u;
    // 7F1860F8: lfs     f0, 4248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1860F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1860FC:
    ctx->pc = 0x7F1860FCu;
    // 7F1860FC: stfs     f5, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1860FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F186100:
    ctx->pc = 0x7F186100u;
    // 7F186100: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186104:
    ctx->pc = 0x7F186104u;
    // 7F186104: fdivs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F186104u)) return;
    ppc_fdivs(ctx, 3, 4, 3);

label_7F186108:
    ctx->pc = 0x7F186108u;
    // 7F186108: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F18610C:
    ctx->pc = 0x7F18610Cu;
    // 7F18610C: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F18610Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F186110:
    ctx->pc = 0x7F186110u;
    // 7F186110: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F186114:
    ctx->pc = 0x7F186114u;
    // 7F186114: bc    4, 1, 0x7F186144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186144;
        }
    }

label_7F186118:
    ctx->pc = 0x7F186118u;
    ctx->downcount -= 4;
    // 7F186118: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18611C:
    ctx->pc = 0x7F18611Cu;
    // 7F18611C: lfs     f0, 4316(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18611Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186120:
    ctx->pc = 0x7F186120u;
    // 7F186120: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186120u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F186124:
    ctx->pc = 0x7F186124u;
    // 7F186124: bc    4, 0, 0x7F186144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186144;
        }
    }

label_7F186128:
    ctx->pc = 0x7F186128u;
    ctx->downcount -= 2;
    // 7F186128: fcmpo   cr0, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186128u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[1], true);

label_7F18612C:
    ctx->pc = 0x7F18612Cu;
    // 7F18612C: bc    4, 1, 0x7F186144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186144;
        }
    }

label_7F186130:
    ctx->pc = 0x7F186130u;
    ctx->downcount -= 2;
    // 7F186130: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186130u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F186134:
    ctx->pc = 0x7F186134u;
    // 7F186134: bc    4, 0, 0x7F186144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186144;
        }
    }

label_7F186138:
    ctx->pc = 0x7F186138u;
    ctx->downcount -= 3;
    // 7F186138: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F18613C:
    ctx->pc = 0x7F18613Cu;
    // 7F18613C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F186140:
    ctx->pc = 0x7F186140u;
    // 7F186140: bl      0x7F1E2AD8
    {
            ctx->lr = 0x7F186144u;
            ctx->pc = 0x7F1E2AD8u;
            return;
    }

label_7F186144:
    ctx->pc = 0x7F186144u;
    ctx->downcount -= 16;
    // 7F186144: lmw     r24, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F186148:
    ctx->pc = 0x7F186148u;
    // 7F186148: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18614C:
    ctx->pc = 0x7F18614Cu;
    // 7F18614C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F186150:
    ctx->pc = 0x7F186150u;
    // 7F186150: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F186154:
    ctx->pc = 0x7F186154u;
    // 7F186154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F186158:
    ctx->pc = 0x7F186158u;
    ctx->downcount -= 13;
    // 7F186158: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F18615C:
    ctx->pc = 0x7F18615Cu;
    // 7F18615C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F186160:
    ctx->pc = 0x7F186160u;
    // 7F186160: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F186164:
    ctx->pc = 0x7F186164u;
    // 7F186164: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F186168:
    ctx->pc = 0x7F186168u;
    // 7F186168: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F18616C:
    ctx->pc = 0x7F18616Cu;
    // 7F18616C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F186170:
    ctx->pc = 0x7F186170u;
    // 7F186170: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F186174:
    ctx->pc = 0x7F186174u;
    // 7F186174: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186178:
    ctx->pc = 0x7F186178u;
    // 7F186178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F18617C:
    ctx->pc = 0x7F18617Cu;
    ctx->downcount -= 4;
    // 7F18617C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F186180:
    ctx->pc = 0x7F186180u;
    // 7F186180: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F186184:
    ctx->pc = 0x7F186184u;
    // 7F186184: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186188:
    ctx->pc = 0x7F186188u;
    // 7F186188: bl      0x7F186158
    {
            ctx->lr = 0x7F18618Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186158u;
                return;
            }
            goto label_7F186158;
    }

label_7F18618C:
    ctx->pc = 0x7F18618Cu;
    ctx->downcount -= 35;
    // 7F18618C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F186190:
    ctx->pc = 0x7F186190u;
    // 7F186190: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F186194:
    ctx->pc = 0x7F186194u;
    // 7F186194: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186198:
    ctx->pc = 0x7F186198u;
    // 7F186198: addi    r5, r4, 4328
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4328);

label_7F18619C:
    ctx->pc = 0x7F18619Cu;
    // 7F18619C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1861A0:
    ctx->pc = 0x7F1861A0u;
    // 7F1861A0: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1861A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1861A4:
    ctx->pc = 0x7F1861A4u;
    // 7F1861A4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1861A8:
    ctx->pc = 0x7F1861A8u;
    // 7F1861A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1861AC:
    ctx->pc = 0x7F1861ACu;
    // 7F1861AC: lfs     f1, 4320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1861ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1861B0:
    ctx->pc = 0x7F1861B0u;
    // 7F1861B0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1861B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1861B4:
    ctx->pc = 0x7F1861B4u;
    // 7F1861B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1861B8:
    ctx->pc = 0x7F1861B8u;
    // 7F1861B8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1861B8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1861BC:
    ctx->pc = 0x7F1861BCu;
    // 7F1861BC: lfs     f0, 4296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1861BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1861C0:
    ctx->pc = 0x7F1861C0u;
    // 7F1861C0: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1861C0u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1861C4:
    ctx->pc = 0x7F1861C4u;
    // 7F1861C4: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1861C4u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1861C8:
    ctx->pc = 0x7F1861C8u;
    // 7F1861C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1861CC:
    ctx->pc = 0x7F1861CCu;
    // 7F1861CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1861D0:
    ctx->pc = 0x7F1861D0u;
    // 7F1861D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1861D4:
    ctx->pc = 0x7F1861D4u;
    ctx->downcount -= 18;
    // 7F1861D4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1861D8:
    ctx->pc = 0x7F1861D8u;
    // 7F1861D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1861DC:
    ctx->pc = 0x7F1861DCu;
    // 7F1861DC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1861E0:
    ctx->pc = 0x7F1861E0u;
    // 7F1861E0: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1861E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1861E4:
    ctx->pc = 0x7F1861E4u;
    // 7F1861E4: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1861E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1861E4u);
        if (ctx->exception) return;
    }

label_7F1861E8:
    ctx->pc = 0x7F1861E8u;
    // 7F1861E8: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1861EC:
    ctx->pc = 0x7F1861ECu;
    // 7F1861EC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1861F0:
    ctx->pc = 0x7F1861F0u;
    // 7F1861F0: bl      0x7F185C48
    {
            ctx->lr = 0x7F1861F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185C48u;
                return;
            }
            goto label_7F185C48;
    }

label_7F1861F4:
    ctx->pc = 0x7F1861F4u;
    ctx->downcount -= 16;
    // 7F1861F4: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1861F8:
    ctx->pc = 0x7F1861F8u;
    // 7F1861F8: addi    r27, r26, 160
    ctx->gpr[27] = ctx->gpr[26] + (u32)(s32)(160);

label_7F1861FC:
    ctx->pc = 0x7F1861FCu;
    // 7F1861FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F186200:
    ctx->pc = 0x7F186200u;
    // 7F186200: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186204:
    ctx->pc = 0x7F186204u;
    // 7F186204: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F186208:
    ctx->pc = 0x7F186208u;
    // 7F186208: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18620C:
    ctx->pc = 0x7F18620Cu;
    // 7F18620C: lwz     r3, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186210:
    ctx->pc = 0x7F186210u;
    // 7F186210: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186214:
    ctx->pc = 0x7F186214u;
    // 7F186214: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F186218:
    ctx->pc = 0x7F186218u;
    // 7F186218: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F18621C:
    ctx->pc = 0x7F18621Cu;
    // 7F18621C: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F186220:
    ctx->pc = 0x7F186220u;
    // 7F186220: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F186224:
    ctx->pc = 0x7F186224u;
    // 7F186224: lwzx    r30, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F186228:
    ctx->pc = 0x7F186228u;
    // 7F186228: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F18622C:
    ctx->pc = 0x7F18622Cu;
    // 7F18622C: lwzx    r29, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F186230:
    ctx->pc = 0x7F186230u;
    // 7F186230: lwz     r28, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F186234:
    ctx->pc = 0x7F186234u;
    ctx->downcount -= 6;
    // 7F186234: lwz     r3, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186238:
    // 7F186238: addi    r0, r3, -8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8);

label_7F18623C:
    ctx->pc = 0x7F18623Cu;
    // 7F18623C: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186240:
    ctx->pc = 0x7F186240u;
    // 7F186240: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186244:
    // 7F186244: cmpwi   r0, 0
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

label_7F186248:
    // 7F186248: bc    4, 0, 0x7F186420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186420;
        }
    }

label_7F18624C:
    ctx->downcount -= 1;
    // 7F18624C: bl      0x7F18617C
    {
            ctx->lr = 0x7F186250u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186250:
    ctx->downcount -= 7;
    // 7F186250: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F186254:
    // 7F186254: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186258:
    ctx->pc = 0x7F186258u;
    // 7F186258: lfs     f2, 4256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F186258u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F18625C:
    ctx->pc = 0x7F18625Cu;
    // 7F18625C: lfs     f0, 4252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18625Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186260:
    ctx->pc = 0x7F186260u;
    // 7F186260: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186260u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F186264:
    ctx->pc = 0x7F186264u;
    // 7F186264: stfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F186264u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186268:
    // 7F186268: bl      0x7F18617C
    {
            ctx->lr = 0x7F18626Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F18626C:
    ctx->downcount -= 13;
    // 7F18626C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186270:
    // 7F186270: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F186274:
    // 7F186274: addi    r4, r3, 4260
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4260);

label_7F186278:
    ctx->pc = 0x7F186278u;
    // 7F186278: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F186278u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18627C:
    ctx->pc = 0x7F18627Cu;
    // 7F18627C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18627Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F186280:
    // 7F186280: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186284:
    ctx->pc = 0x7F186284u;
    // 7F186284: lfs     f3, 4264(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F186284u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F186288:
    ctx->pc = 0x7F186288u;
    // 7F186288: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186288u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_7F18628C:
    ctx->pc = 0x7F18628Cu;
    // 7F18628C: lfs     f0, 4272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18628Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186290:
    ctx->pc = 0x7F186290u;
    // 7F186290: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F186290u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F186294:
    ctx->pc = 0x7F186294u;
    // 7F186294: stfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F186294u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F186298:
    ctx->pc = 0x7F186298u;
    // 7F186298: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186298u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18629C:
    // 7F18629C: bl      0x7F18617C
    {
            ctx->lr = 0x7F1862A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F1862A0:
    ctx->downcount -= 12;
    // 7F1862A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1862A4:
    // 7F1862A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1862A8:
    // 7F1862A8: addi    r5, r3, 4292
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(4292);

label_7F1862AC:
    ctx->pc = 0x7F1862ACu;
    // 7F1862AC: lfs     f2, 4248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1862ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1862B0:
    ctx->pc = 0x7F1862B0u;
    // 7F1862B0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1862B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1862B4:
    // 7F1862B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1862B8:
    ctx->pc = 0x7F1862B8u;
    // 7F1862B8: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1862B8u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F1862BC:
    ctx->pc = 0x7F1862BCu;
    // 7F1862BC: lfs     f0, 4336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1862BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1862C0:
    ctx->pc = 0x7F1862C0u;
    // 7F1862C0: stfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1862C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1862C4:
    ctx->pc = 0x7F1862C4u;
    // 7F1862C4: stfs     f2, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1862C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1862C8:
    ctx->pc = 0x7F1862C8u;
    // 7F1862C8: stfs     f0, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1862C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1862CC:
    // 7F1862CC: bl      0x7F18617C
    {
            ctx->lr = 0x7F1862D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F1862D0:
    ctx->downcount -= 16;
    // 7F1862D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1862D4:
    // 7F1862D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1862D8:
    ctx->pc = 0x7F1862D8u;
    // 7F1862D8: lfs     f2, 4292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1862D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1862DC:
    ctx->pc = 0x7F1862DCu;
    // 7F1862DC: lfs     f0, 4248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1862DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1862E0:
    ctx->pc = 0x7F1862E0u;
    // 7F1862E0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1862E0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1862E4:
    ctx->pc = 0x7F1862E4u;
    // 7F1862E4: stfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1862E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1862E8:
    ctx->pc = 0x7F1862E8u;
    // 7F1862E8: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1862E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1862EC:
    ctx->pc = 0x7F1862ECu;
    // 7F1862EC: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1862F0:
    ctx->pc = 0x7F1862F0u;
    // 7F1862F0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1862F4:
    ctx->pc = 0x7F1862F4u;
    // 7F1862F4: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1862F8:
    ctx->pc = 0x7F1862F8u;
    // 7F1862F8: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1862FC:
    ctx->pc = 0x7F1862FCu;
    // 7F1862FC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186300:
    ctx->pc = 0x7F186300u;
    // 7F186300: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186304:
    ctx->pc = 0x7F186304u;
    // 7F186304: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186308:
    ctx->pc = 0x7F186308u;
    // 7F186308: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18630C:
    // 7F18630C: bl      0x7F18617C
    {
            ctx->lr = 0x7F186310u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186310:
    ctx->downcount -= 17;
    // 7F186310: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F186314:
    // 7F186314: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186318:
    ctx->pc = 0x7F186318u;
    // 7F186318: lfs     f3, 4272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F186318u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F18631C:
    ctx->pc = 0x7F18631Cu;
    // 7F18631C: lfs     f2, 4276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18631Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F186320:
    ctx->pc = 0x7F186320u;
    // 7F186320: lfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186320u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186324:
    ctx->pc = 0x7F186324u;
    // 7F186324: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F186324u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F186328:
    ctx->pc = 0x7F186328u;
    // 7F186328: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186328u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F18632C:
    ctx->pc = 0x7F18632Cu;
    // 7F18632C: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F18632Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186330:
    ctx->pc = 0x7F186330u;
    // 7F186330: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186334:
    ctx->pc = 0x7F186334u;
    // 7F186334: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186338:
    ctx->pc = 0x7F186338u;
    // 7F186338: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18633C:
    ctx->pc = 0x7F18633Cu;
    // 7F18633C: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186340:
    ctx->pc = 0x7F186340u;
    // 7F186340: lwz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186344:
    ctx->pc = 0x7F186344u;
    // 7F186344: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186348:
    ctx->pc = 0x7F186348u;
    // 7F186348: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18634C:
    ctx->pc = 0x7F18634Cu;
    // 7F18634C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186350:
    // 7F186350: bl      0x7F18617C
    {
            ctx->lr = 0x7F186354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186354:
    ctx->downcount -= 10;
    // 7F186354: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F186358:
    // 7F186358: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18635C:
    ctx->pc = 0x7F18635Cu;
    // 7F18635C: lfs     f3, 4272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18635Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F186360:
    ctx->pc = 0x7F186360u;
    // 7F186360: lfs     f2, 4276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F186360u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F186364:
    ctx->pc = 0x7F186364u;
    // 7F186364: lfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186364u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186368:
    ctx->pc = 0x7F186368u;
    // 7F186368: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F186368u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F18636C:
    ctx->pc = 0x7F18636Cu;
    // 7F18636C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F18636Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F186370:
    ctx->pc = 0x7F186370u;
    // 7F186370: stfs     f0, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186370u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186374:
    // 7F186374: addi    r30, r30, 64
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(64);

label_7F186378:
    // 7F186378: bl      0x7F18617C
    {
            ctx->lr = 0x7F18637Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F18637C:
    ctx->pc = 0x7F18637Cu;
    ctx->downcount -= 7;
    // 7F18637C: lfs     f0, 136(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F18637Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186380:
    // 7F186380: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186384:
    ctx->pc = 0x7F186384u;
    // 7F186384: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186384u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F186388:
    ctx->pc = 0x7F186388u;
    // 7F186388: lfs     f0, 4256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F186388u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18638C:
    ctx->pc = 0x7F18638Cu;
    // 7F18638C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F18638Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F186390:
    ctx->pc = 0x7F186390u;
    // 7F186390: stfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F186390u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186394:
    // 7F186394: bl      0x7F18617C
    {
            ctx->lr = 0x7F186398u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186398:
    ctx->pc = 0x7F186398u;
    ctx->downcount -= 8;
    // 7F186398: lfs     f0, 136(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F186398u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18639C:
    // 7F18639C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1863A0:
    ctx->pc = 0x7F1863A0u;
    // 7F1863A0: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1863A0u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F1863A4:
    ctx->pc = 0x7F1863A4u;
    // 7F1863A4: lfs     f0, 4280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1863A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1863A8:
    ctx->pc = 0x7F1863A8u;
    // 7F1863A8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1863A8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1863AC:
    ctx->pc = 0x7F1863ACu;
    // 7F1863AC: stfs     f0, 12(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1863ACu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1863B0:
    ctx->pc = 0x7F1863B0u;
    // 7F1863B0: lfs     f31, 136(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F1863B0u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1863B4:
    // 7F1863B4: bl      0x7F18617C
    {
            ctx->lr = 0x7F1863B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F1863B8:
    ctx->downcount -= 8;
    // 7F1863B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1863BC:
    ctx->pc = 0x7F1863BCu;
    // 7F1863BC: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1863BCu)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F1863C0:
    ctx->pc = 0x7F1863C0u;
    // 7F1863C0: lfs     f1, 4256(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1863C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1863C4:
    // 7F1863C4: addi    r3, r27, 8
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(8);

label_7F1863C8:
    // 7F1863C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1863CC:
    ctx->pc = 0x7F1863CCu;
    // 7F1863CC: fmadds f0, f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1863CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1863D0:
    ctx->pc = 0x7F1863D0u;
    // 7F1863D0: stfs     f0, 16(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1863D0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1863D4:
    // 7F1863D4: bl      0x800261FC
    {
            ctx->lr = 0x7F1863D8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1863D8:
    ctx->pc = 0x7F1863D8u;
    ctx->downcount -= 2;
    // 7F1863D8: lwz     r25, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F1863DC:
    // 7F1863DC: bl      0x7F186158
    {
            ctx->lr = 0x7F1863E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186158u;
                return;
            }
            goto label_7F186158;
    }

label_7F1863E0:
    ctx->downcount -= 59;
    // 7F1863E0: divwu   r0, r3, r25
    {
        u32 divisor = ctx->gpr[25];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1863E4:
    // 7F1863E4: addi    r29, r29, 64
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(64);

label_7F1863E8:
    // 7F1863E8: mullw   r0, r0, r25
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[0] = (u32)product;
    }

label_7F1863EC:
    // 7F1863EC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1863F0:
    // 7F1863F0: add   r0, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1863F4:
    ctx->pc = 0x7F1863F4u;
    // 7F1863F4: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1863F8:
    ctx->pc = 0x7F1863F8u;
    // 7F1863F8: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1863FC:
    ctx->pc = 0x7F1863FCu;
    // 7F1863FC: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186400:
    ctx->pc = 0x7F186400u;
    // 7F186400: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186404:
    ctx->pc = 0x7F186404u;
    // 7F186404: stb     r0, 15(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186408:
    ctx->pc = 0x7F186408u;
    // 7F186408: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18640C:
    ctx->pc = 0x7F18640Cu;
    // 7F18640C: stb     r0, 27(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186410:
    ctx->pc = 0x7F186410u;
    // 7F186410: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186414:
    ctx->pc = 0x7F186414u;
    // 7F186414: stb     r0, 39(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186418:
    // 7F186418: addi    r28, r28, 48
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(48);

label_7F18641C:
    // 7F18641C: b       0x7F186488
    {
            goto label_7F186488;
    }

label_7F186420:
    ctx->downcount -= 1;
    // 7F186420: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F186424:
    ctx->downcount -= 2;
    // 7F186424: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186428:
    // 7F186428: bc    12, 2, 0x7F186434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186434;
        }
    }

label_7F18642C:
    ctx->downcount -= 2;
    // 7F18642C: cmpwi   r25, 3
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186430:
    // 7F186430: bc    4, 2, 0x7F186448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186448;
        }
    }

label_7F186434:
    ctx->downcount -= 4;
    // 7F186434: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F186438:
    // 7F186438: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F18643C:
    // 7F18643C: addi    r4, r27, 8
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(8);

label_7F186440:
    // 7F186440: bl      0x800261B4
    {
            ctx->lr = 0x7F186444u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F186444:
    ctx->downcount -= 1;
    // 7F186444: b       0x7F186468
    {
            goto label_7F186468;
    }

label_7F186448:
    ctx->pc = 0x7F186448u;
    ctx->downcount -= 8;
    // 7F186448: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18644C:
    ctx->pc = 0x7F18644Cu;
    // 7F18644C: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186450:
    ctx->pc = 0x7F186450u;
    // 7F186450: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186454:
    ctx->pc = 0x7F186454u;
    // 7F186454: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186458:
    ctx->pc = 0x7F186458u;
    // 7F186458: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18645C:
    ctx->pc = 0x7F18645Cu;
    // 7F18645C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186460:
    ctx->pc = 0x7F186460u;
    // 7F186460: stw     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186464:
    ctx->pc = 0x7F186464u;
    // 7F186464: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186468:
    ctx->pc = 0x7F186468u;
    ctx->downcount -= 8;
    // 7F186468: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18646C:
    // 7F18646C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F186470:
    // 7F186470: cmpwi   r25, 4
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186474:
    // 7F186474: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F186478:
    ctx->pc = 0x7F186478u;
    // 7F186478: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F18647C:
    // 7F18647C: addi    r28, r28, 12
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(12);

label_7F186480:
    // 7F186480: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F186484:
    // 7F186484: bc    12, 0, 0x7F186424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186424u;
                return;
            }
            goto label_7F186424;
        }
    }

label_7F186488:
    ctx->downcount -= 4;
    // 7F186488: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F18648C:
    // 7F18648C: addi    r27, r27, 28
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(28);

label_7F186490:
    // 7F186490: cmpwi   r31, 64
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

label_7F186494:
    // 7F186494: bc    12, 0, 0x7F186234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186234u;
                return;
            }
            goto label_7F186234;
        }
    }

label_7F186498:
    ctx->pc = 0x7F186498u;
    ctx->downcount -= 2;
    // 7F186498: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F18649C:
    ctx->pc = 0x7F18649Cu;
    // 7F18649C: bl      0x7F185CA0
    {
            ctx->lr = 0x7F1864A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185CA0u;
                return;
            }
            goto label_7F185CA0;
    }

label_7F1864A0:
    ctx->pc = 0x7F1864A0u;
    ctx->downcount -= 3;
    // 7F1864A0: lwz     r0, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1864A4:
    ctx->pc = 0x7F1864A4u;
    // 7F1864A4: cmpwi   r0, 20
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

label_7F1864A8:
    ctx->pc = 0x7F1864A8u;
    // 7F1864A8: bc    4, 2, 0x7F186500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186500;
        }
    }

label_7F1864AC:
    ctx->pc = 0x7F1864ACu;
    ctx->downcount -= 15;
    // 7F1864AC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1864B0:
    ctx->pc = 0x7F1864B0u;
    // 7F1864B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1864B4:
    ctx->pc = 0x7F1864B4u;
    // 7F1864B4: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1864B8:
    ctx->pc = 0x7F1864B8u;
    // 7F1864B8: lfs     f0, 4340(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1864B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1864BC:
    ctx->pc = 0x7F1864BCu;
    // 7F1864BC: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1864C0:
    ctx->pc = 0x7F1864C0u;
    // 7F1864C0: addi    r3, r26, 60
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(60);

label_7F1864C4:
    ctx->pc = 0x7F1864C4u;
    // 7F1864C4: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1864C8:
    ctx->pc = 0x7F1864C8u;
    // 7F1864C8: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1864CC:
    ctx->pc = 0x7F1864CCu;
    // 7F1864CC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1864D0:
    ctx->pc = 0x7F1864D0u;
    // 7F1864D0: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1864D4:
    ctx->pc = 0x7F1864D4u;
    // 7F1864D4: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1864D8:
    ctx->pc = 0x7F1864D8u;
    // 7F1864D8: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1864DC:
    ctx->pc = 0x7F1864DCu;
    // 7F1864DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1864E0:
    ctx->pc = 0x7F1864E0u;
    // 7F1864E0: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1864E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1864E4:
    ctx->pc = 0x7F1864E4u;
    // 7F1864E4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1864E8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1864E8:
    ctx->pc = 0x7F1864E8u;
    ctx->downcount -= 4;
    // 7F1864E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1864EC:
    ctx->pc = 0x7F1864ECu;
    // 7F1864EC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1864F0:
    ctx->pc = 0x7F1864F0u;
    // 7F1864F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1864F4:
    ctx->pc = 0x7F1864F4u;
    // 7F1864F4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1864F8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1864F8:
    ctx->pc = 0x7F1864F8u;
    ctx->downcount -= 2;
    // 7F1864F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1864FC:
    ctx->pc = 0x7F1864FCu;
    // 7F1864FC: bl      0x7F178854
    {
            ctx->lr = 0x7F186500u;
            ctx->pc = 0x7F178854u;
            return;
    }

label_7F186500:
    ctx->pc = 0x7F186500u;
    ctx->downcount -= 3;
    // 7F186500: lwz     r0, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186504:
    ctx->pc = 0x7F186504u;
    // 7F186504: cmpwi   r0, 10
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

label_7F186508:
    ctx->pc = 0x7F186508u;
    // 7F186508: bc    4, 2, 0x7F18651C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18651C;
        }
    }

label_7F18650C:
    ctx->pc = 0x7F18650Cu;
    ctx->downcount -= 4;
    // 7F18650C: addi    r4, r26, 108
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(108);

label_7F186510:
    ctx->pc = 0x7F186510u;
    // 7F186510: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_7F186514:
    ctx->pc = 0x7F186514u;
    // 7F186514: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F186518:
    ctx->pc = 0x7F186518u;
    // 7F186518: bl      0x7F0117B8
    {
            ctx->lr = 0x7F18651Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F18651C:
    ctx->pc = 0x7F18651Cu;
    ctx->downcount -= 5;
    // 7F18651C: lwz     r3, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186520:
    ctx->pc = 0x7F186520u;
    // 7F186520: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F186524:
    ctx->pc = 0x7F186524u;
    // 7F186524: cmpwi   r0, 90
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

label_7F186528:
    ctx->pc = 0x7F186528u;
    // 7F186528: stw     r0, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18652C:
    ctx->pc = 0x7F18652Cu;
    // 7F18652C: bc    4, 1, 0x7F186568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186568;
        }
    }

label_7F186530:
    ctx->pc = 0x7F186530u;
    ctx->downcount -= 6;
    // 7F186530: lwz     r0, 140(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186534:
    ctx->pc = 0x7F186534u;
    // 7F186534: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_7F186538:
    ctx->pc = 0x7F186538u;
    // 7F186538: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F18653C:
    ctx->pc = 0x7F18653Cu;
    // 7F18653C: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F186540:
    ctx->pc = 0x7F186540u;
    // 7F186540: subf.   r0, r3, r0
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

label_7F186544:
    ctx->pc = 0x7F186544u;
    // 7F186544: bc    12, 2, 0x7F186568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186568;
        }
    }

label_7F186548:
    ctx->pc = 0x7F186548u;
    ctx->downcount -= 8;
    // 7F186548: lwz     r4, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18654C:
    ctx->pc = 0x7F18654Cu;
    // 7F18654C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186550:
    ctx->pc = 0x7F186550u;
    // 7F186550: lfs     f0, 4344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F186550u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186554:
    ctx->pc = 0x7F186554u;
    // 7F186554: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F186558:
    ctx->pc = 0x7F186558u;
    // 7F186558: stw     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18655C:
    ctx->pc = 0x7F18655Cu;
    // 7F18655C: lfs     f1, 136(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F18655Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186560:
    ctx->pc = 0x7F186560u;
    // 7F186560: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186560u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F186564:
    ctx->pc = 0x7F186564u;
    // 7F186564: stfs     f0, 136(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F186564u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186568:
    ctx->pc = 0x7F186568u;
    ctx->downcount -= 3;
    // 7F186568: lwz     r0, 132(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18656C:
    ctx->pc = 0x7F18656Cu;
    // 7F18656C: cmpwi   r0, 0
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

label_7F186570:
    ctx->pc = 0x7F186570u;
    // 7F186570: bc    12, 1, 0x7F18657C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18657C;
        }
    }

label_7F186574:
    ctx->pc = 0x7F186574u;
    ctx->downcount -= 2;
    // 7F186574: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F186578:
    ctx->pc = 0x7F186578u;
    // 7F186578: bl      0x7F3C8210
    {
            ctx->lr = 0x7F18657Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F18657C:
    ctx->pc = 0x7F18657Cu;
    ctx->downcount -= 18;
    // 7F18657C: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F18657Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F18657Cu);
        if (ctx->exception) return;
    }

label_7F186580:
    ctx->pc = 0x7F186580u;
    // 7F186580: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186580u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186584:
    ctx->pc = 0x7F186584u;
    // 7F186584: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F186588:
    ctx->pc = 0x7F186588u;
    // 7F186588: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18658C:
    ctx->pc = 0x7F18658Cu;
    // 7F18658C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F186590:
    ctx->pc = 0x7F186590u;
    // 7F186590: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F186594:
    ctx->pc = 0x7F186594u;
    // 7F186594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F186598:
    ctx->pc = 0x7F186598u;
    ctx->downcount -= 8;
    // 7F186598: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F18659C:
    ctx->pc = 0x7F18659Cu;
    // 7F18659C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1865A0:
    ctx->pc = 0x7F1865A0u;
    // 7F1865A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1865A4:
    ctx->pc = 0x7F1865A4u;
    // 7F1865A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1865A8:
    ctx->pc = 0x7F1865A8u;
    // 7F1865A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1865AC:
    ctx->pc = 0x7F1865ACu;
    // 7F1865AC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1865B0:
    ctx->pc = 0x7F1865B0u;
    // 7F1865B0: cmplwi  r3, 0x0000
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

label_7F1865B4:
    ctx->pc = 0x7F1865B4u;
    // 7F1865B4: bc    12, 2, 0x7F1865C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1865C0;
        }
    }

label_7F1865B8:
    ctx->pc = 0x7F1865B8u;
    ctx->downcount -= 1;
    // 7F1865B8: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1865BCu;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1865BC:
    ctx->pc = 0x7F1865BCu;
    ctx->downcount -= 1;
    // 7F1865BC: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1865C0:
    ctx->pc = 0x7F1865C0u;
    ctx->downcount -= 3;
    // 7F1865C0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1865C4:
    ctx->pc = 0x7F1865C4u;
    // 7F1865C4: cmplwi  r3, 0x0000
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

label_7F1865C8:
    ctx->pc = 0x7F1865C8u;
    // 7F1865C8: bc    12, 2, 0x7F1865D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1865D4;
        }
    }

label_7F1865CC:
    ctx->pc = 0x7F1865CCu;
    ctx->downcount -= 1;
    // 7F1865CC: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1865D0u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1865D0:
    ctx->pc = 0x7F1865D0u;
    ctx->downcount -= 1;
    // 7F1865D0: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1865D4:
    ctx->pc = 0x7F1865D4u;
    ctx->downcount -= 6;
    // 7F1865D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1865D8:
    ctx->pc = 0x7F1865D8u;
    // 7F1865D8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1865DC:
    ctx->pc = 0x7F1865DCu;
    // 7F1865DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1865E0:
    ctx->pc = 0x7F1865E0u;
    // 7F1865E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1865E4:
    ctx->pc = 0x7F1865E4u;
    // 7F1865E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1865E8:
    ctx->pc = 0x7F1865E8u;
    ctx->downcount -= 37;
    // 7F1865E8: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1865EC:
    ctx->pc = 0x7F1865ECu;
    // 7F1865EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1865F0:
    ctx->pc = 0x7F1865F0u;
    // 7F1865F0: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1865F4:
    ctx->pc = 0x7F1865F4u;
    // 7F1865F4: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1865F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1865F8:
    ctx->pc = 0x7F1865F8u;
    // 7F1865F8: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1865F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1865F8u);
        if (ctx->exception) return;
    }

label_7F1865FC:
    ctx->pc = 0x7F1865FCu;
    // 7F1865FC: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1865FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F186600:
    ctx->pc = 0x7F186600u;
    // 7F186600: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F186600u);
        if (ctx->exception) return;
    }

label_7F186604:
    ctx->pc = 0x7F186604u;
    // 7F186604: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186604u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F186608:
    ctx->pc = 0x7F186608u;
    // 7F186608: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186608u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F186608u);
        if (ctx->exception) return;
    }

label_7F18660C:
    ctx->pc = 0x7F18660Cu;
    // 7F18660C: stfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18660Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F186610:
    ctx->pc = 0x7F186610u;
    // 7F186610: psq_st   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F186610u);
        if (ctx->exception) return;
    }

label_7F186614:
    ctx->pc = 0x7F186614u;
    // 7F186614: stfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F186618:
    ctx->pc = 0x7F186618u;
    // 7F186618: psq_st   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F186618u);
        if (ctx->exception) return;
    }

label_7F18661C:
    ctx->pc = 0x7F18661Cu;
    // 7F18661C: stfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18661Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F186620:
    ctx->pc = 0x7F186620u;
    // 7F186620: psq_st   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F186620u);
        if (ctx->exception) return;
    }

label_7F186624:
    ctx->pc = 0x7F186624u;
    // 7F186624: stfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186624u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F186628:
    ctx->pc = 0x7F186628u;
    // 7F186628: psq_st   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186628u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F186628u);
        if (ctx->exception) return;
    }

label_7F18662C:
    ctx->pc = 0x7F18662Cu;
    // 7F18662C: stfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18662Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F186630:
    ctx->pc = 0x7F186630u;
    // 7F186630: psq_st   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186630u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F186630u);
        if (ctx->exception) return;
    }

label_7F186634:
    ctx->pc = 0x7F186634u;
    // 7F186634: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F186638:
    ctx->pc = 0x7F186638u;
    // 7F186638: lis     r4, 11
    ctx->gpr[4] = ((u32)(s32)(11) << 16);

label_7F18663C:
    ctx->pc = 0x7F18663Cu;
    // 7F18663C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186640:
    ctx->pc = 0x7F186640u;
    // 7F186640: addi    r3, r4, 2
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2);

label_7F186644:
    ctx->pc = 0x7F186644u;
    // 7F186644: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F186648:
    ctx->pc = 0x7F186648u;
    // 7F186648: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F18664C:
    ctx->pc = 0x7F18664Cu;
    // 7F18664C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F186650:
    ctx->pc = 0x7F186650u;
    // 7F186650: bl      0x7F3C2408
    {
            ctx->lr = 0x7F186654u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F186654:
    ctx->pc = 0x7F186654u;
    ctx->downcount -= 3;
    // 7F186654: or.   r29, r3, r3
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

label_7F186658:
    ctx->pc = 0x7F186658u;
    // 7F186658: stw     r3, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18665C:
    ctx->pc = 0x7F18665Cu;
    // 7F18665C: bc    4, 2, 0x7F186668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186668;
        }
    }

label_7F186660:
    ctx->pc = 0x7F186660u;
    ctx->downcount -= 2;
    // 7F186660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F186664:
    ctx->pc = 0x7F186664u;
    // 7F186664: b       0x7F1868E4
    {
            goto label_7F1868E4;
    }

label_7F186668:
    ctx->pc = 0x7F186668u;
    ctx->downcount -= 6;
    // 7F186668: lwz     r4, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18666C:
    ctx->pc = 0x7F18666Cu;
    // 7F18666C: addi    r0, r25, 60
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(60);

label_7F186670:
    ctx->pc = 0x7F186670u;
    // 7F186670: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F186674:
    ctx->pc = 0x7F186674u;
    // 7F186674: stw     r0, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186678:
    ctx->pc = 0x7F186678u;
    // 7F186678: addi    r3, r3, -13320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13320);

label_7F18667C:
    ctx->pc = 0x7F18667Cu;
    // 7F18667C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F186680u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F186680:
    ctx->pc = 0x7F186680u;
    ctx->downcount -= 1;
    // 7F186680: bl      0x7F3B6420
    {
            ctx->lr = 0x7F186684u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F186684:
    ctx->pc = 0x7F186684u;
    ctx->downcount -= 4;
    // 7F186684: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186688:
    ctx->pc = 0x7F186688u;
    // 7F186688: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F18668C:
    ctx->pc = 0x7F18668Cu;
    // 7F18668C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F186690:
    ctx->pc = 0x7F186690u;
    // 7F186690: bl      0x7F3C2534
    {
            ctx->lr = 0x7F186694u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F186694:
    ctx->pc = 0x7F186694u;
    ctx->downcount -= 35;
    // 7F186694: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F186698:
    ctx->pc = 0x7F186698u;
    // 7F186698: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F18669C:
    ctx->pc = 0x7F18669Cu;
    // 7F18669C: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1866A0:
    ctx->pc = 0x7F1866A0u;
    // 7F1866A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1866A4:
    ctx->pc = 0x7F1866A4u;
    // 7F1866A4: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1866A8:
    ctx->pc = 0x7F1866A8u;
    // 7F1866A8: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1866AC:
    ctx->pc = 0x7F1866ACu;
    // 7F1866AC: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1866B0:
    ctx->pc = 0x7F1866B0u;
    // 7F1866B0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1866B4:
    ctx->pc = 0x7F1866B4u;
    // 7F1866B4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1866B8:
    ctx->pc = 0x7F1866B8u;
    // 7F1866B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1866BC:
    ctx->pc = 0x7F1866BCu;
    // 7F1866BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1866C0:
    ctx->pc = 0x7F1866C0u;
    // 7F1866C0: addi    r12, r9, 4256
    ctx->gpr[12] = ctx->gpr[9] + (u32)(s32)(4256);

label_7F1866C4:
    ctx->pc = 0x7F1866C4u;
    // 7F1866C4: addi    r11, r8, 4348
    ctx->gpr[11] = ctx->gpr[8] + (u32)(s32)(4348);

label_7F1866C8:
    ctx->pc = 0x7F1866C8u;
    // 7F1866C8: addi    r10, r7, 4252
    ctx->gpr[10] = ctx->gpr[7] + (u32)(s32)(4252);

label_7F1866CC:
    ctx->pc = 0x7F1866CCu;
    // 7F1866CC: addi    r8, r6, 4268
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(4268);

label_7F1866D0:
    ctx->pc = 0x7F1866D0u;
    // 7F1866D0: addi    r7, r5, 4356
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(4356);

label_7F1866D4:
    ctx->pc = 0x7F1866D4u;
    // 7F1866D4: addi    r6, r4, 4352
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(4352);

label_7F1866D8:
    ctx->pc = 0x7F1866D8u;
    // 7F1866D8: addi    r5, r3, 4248
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(4248);

label_7F1866DC:
    ctx->pc = 0x7F1866DCu;
    // 7F1866DC: lis     r9, 32585
    ctx->gpr[9] = ((u32)(s32)(32585) << 16);

label_7F1866E0:
    ctx->pc = 0x7F1866E0u;
    // 7F1866E0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1866E4:
    ctx->pc = 0x7F1866E4u;
    // 7F1866E4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1866E8:
    ctx->pc = 0x7F1866E8u;
    // 7F1866E8: lwz     r28, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1866EC:
    ctx->pc = 0x7F1866ECu;
    // 7F1866EC: lwz     r27, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1866F0:
    ctx->pc = 0x7F1866F0u;
    // 7F1866F0: addi    r25, r25, 160
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(160);

label_7F1866F4:
    ctx->pc = 0x7F1866F4u;
    // 7F1866F4: lfs     f25, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F1866F4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F1866F8:
    ctx->pc = 0x7F1866F8u;
    // 7F1866F8: addi    r30, r9, 12832
    ctx->gpr[30] = ctx->gpr[9] + (u32)(s32)(12832);

label_7F1866FC:
    ctx->pc = 0x7F1866FCu;
    // 7F1866FC: lfs     f26, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F1866FCu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F186700:
    ctx->pc = 0x7F186700u;
    // 7F186700: addi    r31, r4, 4280
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(4280);

label_7F186704:
    ctx->pc = 0x7F186704u;
    // 7F186704: lfs     f27, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F186704u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F186708:
    ctx->pc = 0x7F186708u;
    // 7F186708: addi    r24, r3, -28673
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F18670C:
    ctx->pc = 0x7F18670Cu;
    // 7F18670C: lfs     f28, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F18670Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F186710:
    ctx->pc = 0x7F186710u;
    // 7F186710: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F186714:
    ctx->pc = 0x7F186714u;
    // 7F186714: lfs     f29, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F186714u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F186718:
    ctx->pc = 0x7F186718u;
    // 7F186718: lfs     f30, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F186718u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F18671C:
    ctx->pc = 0x7F18671Cu;
    // 7F18671C: lfs     f31, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F18671Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F186720:
    ctx->downcount -= 1;
    // 7F186720: bl      0x7F18617C
    {
            ctx->lr = 0x7F186724u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186724:
    ctx->pc = 0x7F186724u;
    ctx->downcount -= 3;
    // 7F186724: fmadds f0, f25, f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F186724u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[25], ctx->fpr[1], ctx->fpr[25], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F186728:
    ctx->pc = 0x7F186728u;
    // 7F186728: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186728u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18672C:
    // 7F18672C: bl      0x7F18617C
    {
            ctx->lr = 0x7F186730u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186730:
    ctx->pc = 0x7F186730u;
    ctx->downcount -= 38;
    // 7F186730: lfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186730u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186734:
    ctx->pc = 0x7F186734u;
    // 7F186734: fadds   f0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186734u)) return;
    ppc_fadds(ctx, 0, 27, 0);

label_7F186738:
    ctx->pc = 0x7F186738u;
    // 7F186738: fmadds f0, f26, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186738u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[26], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F18673C:
    ctx->pc = 0x7F18673Cu;
    // 7F18673C: stfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F18673Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186740:
    ctx->pc = 0x7F186740u;
    // 7F186740: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186744:
    ctx->pc = 0x7F186744u;
    // 7F186744: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186748:
    ctx->pc = 0x7F186748u;
    // 7F186748: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18674C:
    ctx->pc = 0x7F18674Cu;
    // 7F18674C: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186750:
    ctx->pc = 0x7F186750u;
    // 7F186750: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186754:
    ctx->pc = 0x7F186754u;
    // 7F186754: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186758:
    ctx->pc = 0x7F186758u;
    // 7F186758: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18675C:
    ctx->pc = 0x7F18675Cu;
    // 7F18675C: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186760:
    ctx->pc = 0x7F186760u;
    // 7F186760: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186764:
    ctx->pc = 0x7F186764u;
    // 7F186764: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186768:
    ctx->pc = 0x7F186768u;
    // 7F186768: stw     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18676C:
    ctx->pc = 0x7F18676Cu;
    // 7F18676C: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186770:
    ctx->pc = 0x7F186770u;
    // 7F186770: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186774:
    ctx->pc = 0x7F186774u;
    // 7F186774: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186778:
    ctx->pc = 0x7F186778u;
    // 7F186778: stw     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18677C:
    ctx->pc = 0x7F18677Cu;
    // 7F18677C: stw     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186780:
    ctx->pc = 0x7F186780u;
    // 7F186780: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186784:
    ctx->pc = 0x7F186784u;
    // 7F186784: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186788:
    ctx->pc = 0x7F186788u;
    // 7F186788: stw     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18678C:
    ctx->pc = 0x7F18678Cu;
    // 7F18678C: stw     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186790:
    ctx->pc = 0x7F186790u;
    // 7F186790: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186794:
    ctx->pc = 0x7F186794u;
    // 7F186794: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186798:
    ctx->pc = 0x7F186798u;
    // 7F186798: stw     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F18679C:
    ctx->pc = 0x7F18679Cu;
    // 7F18679C: stw     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1867A0:
    ctx->pc = 0x7F1867A0u;
    // 7F1867A0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1867A4:
    ctx->pc = 0x7F1867A4u;
    // 7F1867A4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1867A8:
    ctx->pc = 0x7F1867A8u;
    // 7F1867A8: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1867AC:
    ctx->pc = 0x7F1867ACu;
    // 7F1867AC: stw     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1867B0:
    ctx->pc = 0x7F1867B0u;
    // 7F1867B0: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1867B4:
    ctx->pc = 0x7F1867B4u;
    // 7F1867B4: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1867B8:
    ctx->pc = 0x7F1867B8u;
    // 7F1867B8: stw     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1867BC:
    ctx->pc = 0x7F1867BCu;
    // 7F1867BC: stw     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1867C0:
    // 7F1867C0: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F1867C4:
    // 7F1867C4: bl      0x7F18617C
    {
            ctx->lr = 0x7F1867C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F1867C8:
    ctx->pc = 0x7F1867C8u;
    ctx->downcount -= 2;
    // 7F1867C8: fmuls   f24, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1867C8u)) return;
    ppc_fmuls(ctx, 24, 28, 1);

label_7F1867CC:
    // 7F1867CC: bl      0x7F18617C
    {
            ctx->lr = 0x7F1867D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F1867D0:
    ctx->pc = 0x7F1867D0u;
    ctx->downcount -= 8;
    // 7F1867D0: fmadds f0, f29, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1867D0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1867D4:
    // 7F1867D4: addi    r3, r25, 8
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(8);

label_7F1867D8:
    ctx->pc = 0x7F1867D8u;
    // 7F1867D8: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1867D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1867DC:
    // 7F1867DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1867E0:
    ctx->pc = 0x7F1867E0u;
    // 7F1867E0: stfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1867E0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1867E4:
    ctx->pc = 0x7F1867E4u;
    // 7F1867E4: stfs     f24, 12(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1867E4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[24]));
    }

label_7F1867E8:
    ctx->pc = 0x7F1867E8u;
    // 7F1867E8: stfs     f31, 16(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F1867E8u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1867EC:
    // 7F1867EC: bl      0x800261FC
    {
            ctx->lr = 0x7F1867F0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1867F0:
    ctx->downcount -= 1;
    // 7F1867F0: bl      0x7F186158
    {
            ctx->lr = 0x7F1867F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186158u;
                return;
            }
            goto label_7F186158;
    }

label_7F1867F4:
    ctx->downcount -= 94;
    // 7F1867F4: li      r9, 48
    ctx->gpr[9] = (u32)(s32)(48);

label_7F1867F8:
    // 7F1867F8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1867FC:
    // 7F1867FC: divwu   r0, r3, r9
    {
        u32 divisor = ctx->gpr[9];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F186800:
    // 7F186800: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F186804:
    // 7F186804: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_7F186808:
    // 7F186808: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F18680C:
    // 7F18680C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F186810:
    // 7F186810: li      r4, 4095
    ctx->gpr[4] = (u32)(s32)(4095);

label_7F186814:
    // 7F186814: mullw   r0, r0, r9
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[0] = (u32)product;
    }

label_7F186818:
    // 7F186818: cmpwi   r26, 64
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F18681C:
    // 7F18681C: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F186820:
    ctx->pc = 0x7F186820u;
    // 7F186820: stw     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186824:
    ctx->pc = 0x7F186824u;
    // 7F186824: sth     r8, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F186828:
    ctx->pc = 0x7F186828u;
    // 7F186828: sth     r7, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F18682C:
    ctx->pc = 0x7F18682Cu;
    // 7F18682C: sth     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186830:
    ctx->pc = 0x7F186830u;
    // 7F186830: sth     r24, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F186834:
    ctx->pc = 0x7F186834u;
    // 7F186834: stb     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186838:
    ctx->pc = 0x7F186838u;
    // 7F186838: stb     r8, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F18683C:
    ctx->pc = 0x7F18683Cu;
    // 7F18683C: stb     r8, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F186840:
    ctx->pc = 0x7F186840u;
    // 7F186840: lwz     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186844:
    ctx->pc = 0x7F186844u;
    // 7F186844: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186848:
    ctx->pc = 0x7F186848u;
    // 7F186848: sth     r6, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F18684C:
    ctx->pc = 0x7F18684Cu;
    // 7F18684C: sth     r7, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F186850:
    ctx->pc = 0x7F186850u;
    // 7F186850: sth     r6, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186854:
    ctx->pc = 0x7F186854u;
    // 7F186854: sth     r24, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F186858:
    ctx->pc = 0x7F186858u;
    // 7F186858: stb     r5, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F18685C:
    ctx->pc = 0x7F18685Cu;
    // 7F18685C: stb     r8, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F186860:
    ctx->pc = 0x7F186860u;
    // 7F186860: stb     r8, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F186864:
    ctx->pc = 0x7F186864u;
    // 7F186864: lwz     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186868:
    ctx->pc = 0x7F186868u;
    // 7F186868: stb     r0, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F18686C:
    ctx->pc = 0x7F18686Cu;
    // 7F18686C: sth     r8, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F186870:
    ctx->pc = 0x7F186870u;
    // 7F186870: sth     r6, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186874:
    ctx->pc = 0x7F186874u;
    // 7F186874: sth     r6, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186878:
    ctx->pc = 0x7F186878u;
    // 7F186878: sth     r4, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F18687C:
    ctx->pc = 0x7F18687Cu;
    // 7F18687C: stb     r5, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186880:
    ctx->pc = 0x7F186880u;
    // 7F186880: stb     r8, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F186884:
    ctx->pc = 0x7F186884u;
    // 7F186884: stb     r8, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F186888:
    ctx->pc = 0x7F186888u;
    // 7F186888: lwz     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18688C:
    ctx->pc = 0x7F18688Cu;
    // 7F18688C: stb     r0, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F186890:
    ctx->pc = 0x7F186890u;
    // 7F186890: sth     r6, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186894:
    ctx->pc = 0x7F186894u;
    // 7F186894: sth     r6, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186898:
    ctx->pc = 0x7F186898u;
    // 7F186898: sth     r6, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F18689C:
    ctx->pc = 0x7F18689Cu;
    // 7F18689C: sth     r4, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1868A0:
    ctx->pc = 0x7F1868A0u;
    // 7F1868A0: stb     r5, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F1868A4:
    ctx->pc = 0x7F1868A4u;
    // 7F1868A4: stb     r8, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1868A8:
    ctx->pc = 0x7F1868A8u;
    // 7F1868A8: stb     r8, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1868AC:
    ctx->pc = 0x7F1868ACu;
    // 7F1868AC: lwz     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1868B0:
    // 7F1868B0: addi    r25, r25, 28
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(28);

label_7F1868B4:
    ctx->pc = 0x7F1868B4u;
    // 7F1868B4: stb     r0, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1868B8:
    // 7F1868B8: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F1868BC:
    // 7F1868BC: bc    12, 0, 0x7F186720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186720u;
                return;
            }
            goto label_7F186720;
        }
    }

label_7F1868C0:
    ctx->pc = 0x7F1868C0u;
    ctx->downcount -= 4;
    // 7F1868C0: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1868C4:
    ctx->pc = 0x7F1868C4u;
    // 7F1868C4: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F1868C8:
    ctx->pc = 0x7F1868C8u;
    // 7F1868C8: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1868CC:
    ctx->pc = 0x7F1868CCu;
    // 7F1868CC: bl      0x8000519C
    {
            ctx->lr = 0x7F1868D0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1868D0:
    ctx->pc = 0x7F1868D0u;
    ctx->downcount -= 4;
    // 7F1868D0: lwz     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1868D4:
    ctx->pc = 0x7F1868D4u;
    // 7F1868D4: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F1868D8:
    ctx->pc = 0x7F1868D8u;
    // 7F1868D8: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1868DC:
    ctx->pc = 0x7F1868DCu;
    // 7F1868DC: bl      0x8000519C
    {
            ctx->lr = 0x7F1868E0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1868E0:
    ctx->pc = 0x7F1868E0u;
    ctx->downcount -= 1;
    // 7F1868E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1868E4:
    ctx->pc = 0x7F1868E4u;
    ctx->downcount -= 32;
    // 7F1868E4: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1868E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1868E4u);
        if (ctx->exception) return;
    }

label_7F1868E8:
    ctx->pc = 0x7F1868E8u;
    // 7F1868E8: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1868E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1868EC:
    ctx->pc = 0x7F1868ECu;
    // 7F1868EC: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1868ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1868ECu);
        if (ctx->exception) return;
    }

label_7F1868F0:
    ctx->pc = 0x7F1868F0u;
    // 7F1868F0: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1868F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1868F4:
    ctx->pc = 0x7F1868F4u;
    // 7F1868F4: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1868F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1868F4u);
        if (ctx->exception) return;
    }

label_7F1868F8:
    ctx->pc = 0x7F1868F8u;
    // 7F1868F8: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1868F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1868FC:
    ctx->pc = 0x7F1868FCu;
    // 7F1868FC: psq_l   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1868FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1868FCu);
        if (ctx->exception) return;
    }

label_7F186900:
    ctx->pc = 0x7F186900u;
    // 7F186900: lfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186904:
    ctx->pc = 0x7F186904u;
    // 7F186904: psq_l   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F186904u);
        if (ctx->exception) return;
    }

label_7F186908:
    ctx->pc = 0x7F186908u;
    // 7F186908: lfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18690C:
    ctx->pc = 0x7F18690Cu;
    // 7F18690C: psq_l   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F18690Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F18690Cu);
        if (ctx->exception) return;
    }

label_7F186910:
    ctx->pc = 0x7F186910u;
    // 7F186910: lfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186914:
    ctx->pc = 0x7F186914u;
    // 7F186914: psq_l   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F186914u);
        if (ctx->exception) return;
    }

label_7F186918:
    ctx->pc = 0x7F186918u;
    // 7F186918: lfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18691C:
    ctx->pc = 0x7F18691Cu;
    // 7F18691C: psq_l   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F18691Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F18691Cu);
        if (ctx->exception) return;
    }

label_7F186920:
    ctx->pc = 0x7F186920u;
    // 7F186920: lfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186920u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186924:
    ctx->pc = 0x7F186924u;
    // 7F186924: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F186928:
    ctx->pc = 0x7F186928u;
    // 7F186928: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18692C:
    ctx->pc = 0x7F18692Cu;
    // 7F18692C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F186930:
    ctx->pc = 0x7F186930u;
    // 7F186930: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F186934:
    ctx->pc = 0x7F186934u;
    // 7F186934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F186938:
    ctx->pc = 0x7F186938u;
    ctx->downcount -= 37;
    // 7F186938: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F18693C:
    ctx->pc = 0x7F18693Cu;
    // 7F18693C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F186940:
    ctx->pc = 0x7F186940u;
    // 7F186940: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186944:
    ctx->pc = 0x7F186944u;
    // 7F186944: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F186948:
    ctx->pc = 0x7F186948u;
    // 7F186948: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F186948u);
        if (ctx->exception) return;
    }

label_7F18694C:
    ctx->pc = 0x7F18694Cu;
    // 7F18694C: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18694Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F186950:
    ctx->pc = 0x7F186950u;
    // 7F186950: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F186950u);
        if (ctx->exception) return;
    }

label_7F186954:
    ctx->pc = 0x7F186954u;
    // 7F186954: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186954u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F186958:
    ctx->pc = 0x7F186958u;
    // 7F186958: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F186958u);
        if (ctx->exception) return;
    }

label_7F18695C:
    ctx->pc = 0x7F18695Cu;
    // 7F18695C: stfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18695Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F186960:
    ctx->pc = 0x7F186960u;
    // 7F186960: psq_st   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F186960u);
        if (ctx->exception) return;
    }

label_7F186964:
    ctx->pc = 0x7F186964u;
    // 7F186964: stfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F186968:
    ctx->pc = 0x7F186968u;
    // 7F186968: psq_st   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F186968u);
        if (ctx->exception) return;
    }

label_7F18696C:
    ctx->pc = 0x7F18696Cu;
    // 7F18696C: stfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18696Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F186970:
    ctx->pc = 0x7F186970u;
    // 7F186970: psq_st   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F186970u);
        if (ctx->exception) return;
    }

label_7F186974:
    ctx->pc = 0x7F186974u;
    // 7F186974: stfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F186978:
    ctx->pc = 0x7F186978u;
    // 7F186978: psq_st   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F186978u);
        if (ctx->exception) return;
    }

label_7F18697C:
    ctx->pc = 0x7F18697Cu;
    // 7F18697C: stfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18697Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F186980:
    ctx->pc = 0x7F186980u;
    // 7F186980: psq_st   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F186980u);
        if (ctx->exception) return;
    }

label_7F186984:
    ctx->pc = 0x7F186984u;
    // 7F186984: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F186988:
    ctx->pc = 0x7F186988u;
    // 7F186988: lis     r4, 11
    ctx->gpr[4] = ((u32)(s32)(11) << 16);

label_7F18698C:
    ctx->pc = 0x7F18698Cu;
    // 7F18698C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186990:
    ctx->pc = 0x7F186990u;
    // 7F186990: addi    r3, r4, 2
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(2);

label_7F186994:
    ctx->pc = 0x7F186994u;
    // 7F186994: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F186998:
    ctx->pc = 0x7F186998u;
    // 7F186998: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F18699C:
    ctx->pc = 0x7F18699Cu;
    // 7F18699C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1869A0:
    ctx->pc = 0x7F1869A0u;
    // 7F1869A0: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1869A4u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1869A4:
    ctx->pc = 0x7F1869A4u;
    ctx->downcount -= 3;
    // 7F1869A4: or.   r29, r3, r3
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

label_7F1869A8:
    ctx->pc = 0x7F1869A8u;
    // 7F1869A8: stw     r3, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1869AC:
    ctx->pc = 0x7F1869ACu;
    // 7F1869AC: bc    4, 2, 0x7F1869B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1869B8;
        }
    }

label_7F1869B0:
    ctx->pc = 0x7F1869B0u;
    ctx->downcount -= 2;
    // 7F1869B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1869B4:
    ctx->pc = 0x7F1869B4u;
    // 7F1869B4: b       0x7F186E30
    {
            goto label_7F186E30;
    }

label_7F1869B8:
    ctx->pc = 0x7F1869B8u;
    ctx->downcount -= 3;
    // 7F1869B8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1869BC:
    ctx->pc = 0x7F1869BCu;
    // 7F1869BC: addi    r3, r3, -13308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13308);

label_7F1869C0:
    ctx->pc = 0x7F1869C0u;
    // 7F1869C0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1869C4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1869C4:
    ctx->pc = 0x7F1869C4u;
    ctx->downcount -= 1;
    // 7F1869C4: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1869C8u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1869C8:
    ctx->pc = 0x7F1869C8u;
    ctx->downcount -= 4;
    // 7F1869C8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1869CC:
    ctx->pc = 0x7F1869CCu;
    // 7F1869CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1869D0:
    ctx->pc = 0x7F1869D0u;
    // 7F1869D0: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1869D4:
    ctx->pc = 0x7F1869D4u;
    // 7F1869D4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1869D8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1869D8:
    ctx->pc = 0x7F1869D8u;
    ctx->downcount -= 33;
    // 7F1869D8: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1869DC:
    ctx->pc = 0x7F1869DCu;
    // 7F1869DC: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1869E0:
    ctx->pc = 0x7F1869E0u;
    // 7F1869E0: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1869E4:
    ctx->pc = 0x7F1869E4u;
    // 7F1869E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1869E8:
    ctx->pc = 0x7F1869E8u;
    // 7F1869E8: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1869EC:
    ctx->pc = 0x7F1869ECu;
    // 7F1869EC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1869F0:
    ctx->pc = 0x7F1869F0u;
    // 7F1869F0: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1869F4:
    ctx->pc = 0x7F1869F4u;
    // 7F1869F4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1869F8:
    ctx->pc = 0x7F1869F8u;
    // 7F1869F8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1869FC:
    ctx->pc = 0x7F1869FCu;
    // 7F1869FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F186A00:
    ctx->pc = 0x7F186A00u;
    // 7F186A00: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186A04:
    ctx->pc = 0x7F186A04u;
    // 7F186A04: addi    r11, r9, 4256
    ctx->gpr[11] = ctx->gpr[9] + (u32)(s32)(4256);

label_7F186A08:
    ctx->pc = 0x7F186A08u;
    // 7F186A08: addi    r10, r8, 4348
    ctx->gpr[10] = ctx->gpr[8] + (u32)(s32)(4348);

label_7F186A0C:
    ctx->pc = 0x7F186A0Cu;
    // 7F186A0C: addi    r9, r7, 4252
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(4252);

label_7F186A10:
    ctx->pc = 0x7F186A10u;
    // 7F186A10: addi    r7, r6, 4268
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(4268);

label_7F186A14:
    ctx->pc = 0x7F186A14u;
    // 7F186A14: addi    r6, r5, 4356
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(4356);

label_7F186A18:
    ctx->pc = 0x7F186A18u;
    // 7F186A18: addi    r5, r4, 4352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4352);

label_7F186A1C:
    ctx->pc = 0x7F186A1Cu;
    // 7F186A1C: addi    r4, r3, 4248
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4248);

label_7F186A20:
    ctx->pc = 0x7F186A20u;
    // 7F186A20: lis     r8, 32585
    ctx->gpr[8] = ((u32)(s32)(32585) << 16);

label_7F186A24:
    ctx->pc = 0x7F186A24u;
    // 7F186A24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186A28:
    ctx->pc = 0x7F186A28u;
    // 7F186A28: lwz     r28, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F186A2C:
    ctx->pc = 0x7F186A2Cu;
    // 7F186A2C: addi    r25, r25, 1952
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1952);

label_7F186A30:
    ctx->pc = 0x7F186A30u;
    // 7F186A30: lwz     r27, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F186A34:
    ctx->pc = 0x7F186A34u;
    // 7F186A34: addi    r30, r8, 12832
    ctx->gpr[30] = ctx->gpr[8] + (u32)(s32)(12832);

label_7F186A38:
    ctx->pc = 0x7F186A38u;
    // 7F186A38: lfs     f25, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F186A38u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F186A3C:
    ctx->pc = 0x7F186A3Cu;
    // 7F186A3C: addi    r31, r3, 4280
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(4280);

label_7F186A40:
    ctx->pc = 0x7F186A40u;
    // 7F186A40: lfs     f26, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F186A40u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F186A44:
    ctx->pc = 0x7F186A44u;
    // 7F186A44: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F186A48:
    ctx->pc = 0x7F186A48u;
    // 7F186A48: lfs     f27, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F186A48u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F186A4C:
    ctx->pc = 0x7F186A4Cu;
    // 7F186A4C: lfs     f28, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F186A4Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F186A50:
    ctx->pc = 0x7F186A50u;
    // 7F186A50: lfs     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F186A50u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F186A54:
    ctx->pc = 0x7F186A54u;
    // 7F186A54: lfs     f30, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F186A54u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F186A58:
    ctx->pc = 0x7F186A58u;
    // 7F186A58: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F186A58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F186A5C:
    ctx->downcount -= 1;
    // 7F186A5C: bl      0x7F18617C
    {
            ctx->lr = 0x7F186A60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186A60:
    ctx->pc = 0x7F186A60u;
    ctx->downcount -= 3;
    // 7F186A60: fmadds f0, f25, f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F186A60u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[25], ctx->fpr[1], ctx->fpr[25], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F186A64:
    ctx->pc = 0x7F186A64u;
    // 7F186A64: stfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186A64u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186A68:
    // 7F186A68: bl      0x7F18617C
    {
            ctx->lr = 0x7F186A6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186A6C:
    ctx->pc = 0x7F186A6Cu;
    ctx->downcount -= 38;
    // 7F186A6C: lfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186A6Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186A70:
    ctx->pc = 0x7F186A70u;
    // 7F186A70: fadds   f0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186A70u)) return;
    ppc_fadds(ctx, 0, 27, 0);

label_7F186A74:
    ctx->pc = 0x7F186A74u;
    // 7F186A74: fmadds f0, f26, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186A74u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[26], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F186A78:
    ctx->pc = 0x7F186A78u;
    // 7F186A78: stfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186A78u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186A7C:
    ctx->pc = 0x7F186A7Cu;
    // 7F186A7C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186A80:
    ctx->pc = 0x7F186A80u;
    // 7F186A80: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186A84:
    ctx->pc = 0x7F186A84u;
    // 7F186A84: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186A88:
    ctx->pc = 0x7F186A88u;
    // 7F186A88: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186A8C:
    ctx->pc = 0x7F186A8Cu;
    // 7F186A8C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186A90:
    ctx->pc = 0x7F186A90u;
    // 7F186A90: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186A94:
    ctx->pc = 0x7F186A94u;
    // 7F186A94: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186A98:
    ctx->pc = 0x7F186A98u;
    // 7F186A98: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186A9C:
    ctx->pc = 0x7F186A9Cu;
    // 7F186A9C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AA0:
    ctx->pc = 0x7F186AA0u;
    // 7F186AA0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AA4:
    ctx->pc = 0x7F186AA4u;
    // 7F186AA4: stw     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AA8:
    ctx->pc = 0x7F186AA8u;
    // 7F186AA8: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186AAC:
    ctx->pc = 0x7F186AACu;
    // 7F186AAC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AB0:
    ctx->pc = 0x7F186AB0u;
    // 7F186AB0: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AB4:
    ctx->pc = 0x7F186AB4u;
    // 7F186AB4: stw     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AB8:
    ctx->pc = 0x7F186AB8u;
    // 7F186AB8: stw     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186ABC:
    ctx->pc = 0x7F186ABCu;
    // 7F186ABC: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AC0:
    ctx->pc = 0x7F186AC0u;
    // 7F186AC0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AC4:
    ctx->pc = 0x7F186AC4u;
    // 7F186AC4: stw     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AC8:
    ctx->pc = 0x7F186AC8u;
    // 7F186AC8: stw     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186ACC:
    ctx->pc = 0x7F186ACCu;
    // 7F186ACC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AD0:
    ctx->pc = 0x7F186AD0u;
    // 7F186AD0: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AD4:
    ctx->pc = 0x7F186AD4u;
    // 7F186AD4: stw     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AD8:
    ctx->pc = 0x7F186AD8u;
    // 7F186AD8: stw     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186ADC:
    ctx->pc = 0x7F186ADCu;
    // 7F186ADC: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AE0:
    ctx->pc = 0x7F186AE0u;
    // 7F186AE0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AE4:
    ctx->pc = 0x7F186AE4u;
    // 7F186AE4: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AE8:
    ctx->pc = 0x7F186AE8u;
    // 7F186AE8: stw     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186AEC:
    ctx->pc = 0x7F186AECu;
    // 7F186AEC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186AF0:
    ctx->pc = 0x7F186AF0u;
    // 7F186AF0: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186AF4:
    ctx->pc = 0x7F186AF4u;
    // 7F186AF4: stw     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186AF8:
    ctx->pc = 0x7F186AF8u;
    // 7F186AF8: stw     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186AFC:
    // 7F186AFC: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F186B00:
    // 7F186B00: bl      0x7F18617C
    {
            ctx->lr = 0x7F186B04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186B04:
    ctx->pc = 0x7F186B04u;
    ctx->downcount -= 2;
    // 7F186B04: fmuls   f24, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186B04u)) return;
    ppc_fmuls(ctx, 24, 28, 1);

label_7F186B08:
    // 7F186B08: bl      0x7F18617C
    {
            ctx->lr = 0x7F186B0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18617Cu;
                return;
            }
            goto label_7F18617C;
    }

label_7F186B0C:
    ctx->pc = 0x7F186B0Cu;
    ctx->downcount -= 8;
    // 7F186B0C: fmadds f0, f29, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F186B0Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F186B10:
    // 7F186B10: addi    r3, r25, 8
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(8);

label_7F186B14:
    ctx->pc = 0x7F186B14u;
    // 7F186B14: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F186B14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186B18:
    // 7F186B18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186B1C:
    ctx->pc = 0x7F186B1Cu;
    // 7F186B1C: stfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186B1Cu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F186B20:
    ctx->pc = 0x7F186B20u;
    // 7F186B20: stfs     f24, 12(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186B20u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[24]));
    }

label_7F186B24:
    ctx->pc = 0x7F186B24u;
    // 7F186B24: stfs     f31, 16(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F186B24u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F186B28:
    // 7F186B28: bl      0x800261FC
    {
            ctx->lr = 0x7F186B2Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F186B2C:
    ctx->downcount -= 1;
    // 7F186B2C: bl      0x7F186158
    {
            ctx->lr = 0x7F186B30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186158u;
                return;
            }
            goto label_7F186158;
    }

label_7F186B30:
    ctx->downcount -= 55;
    // 7F186B30: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_7F186B34:
    // 7F186B34: rlwinm r0, r26, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 30u) & 0xC0000000u;
    }

label_7F186B38:
    // 7F186B38: divwu   r5, r3, r6
    {
        u32 divisor = ctx->gpr[6];
        ctx->gpr[5] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F186B3C:
    // 7F186B3C: rlwinm r4, r26, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[26], 1u) & 0x00000001u;
    }

label_7F186B40:
    // 7F186B40: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F186B44:
    // 7F186B44: rlwinm r0, r0, 2, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFFu;
    }

label_7F186B48:
    // 7F186B48: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F186B4C:
    // 7F186B4C: cmpwi   r0, 2
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

label_7F186B50:
    // 7F186B50: mullw   r4, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[4] = (u32)product;
    }

label_7F186B54:
    // 7F186B54: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F186B58:
    ctx->pc = 0x7F186B58u;
    // 7F186B58: stw     r3, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186B5C:
    // 7F186B5C: bc    12, 2, 0x7F186CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186CC0;
        }
    }

label_7F186B60:
    ctx->downcount -= 1;
    // 7F186B60: bc    4, 0, 0x7F186B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186B74;
        }
    }

label_7F186B64:
    ctx->downcount -= 2;
    // 7F186B64: cmpwi   r0, 0
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

label_7F186B68:
    // 7F186B68: bc    12, 2, 0x7F186B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186B80;
        }
    }

label_7F186B6C:
    ctx->downcount -= 1;
    // 7F186B6C: bc    4, 0, 0x7F186C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186C20;
        }
    }

label_7F186B70:
    ctx->downcount -= 1;
    // 7F186B70: b       0x7F186DFC
    {
            goto label_7F186DFC;
    }

label_7F186B74:
    ctx->downcount -= 2;
    // 7F186B74: cmpwi   r0, 4
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

label_7F186B78:
    // 7F186B78: bc    4, 0, 0x7F186DFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186DFC;
        }
    }

label_7F186B7C:
    ctx->downcount -= 1;
    // 7F186B7C: b       0x7F186D60
    {
            goto label_7F186D60;
    }

label_7F186B80:
    ctx->downcount -= 40;
    // 7F186B80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F186B84:
    // 7F186B84: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F186B88:
    ctx->pc = 0x7F186B88u;
    // 7F186B88: sth     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186B8C:
    // 7F186B8C: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F186B90:
    // 7F186B90: addi    r4, r3, -28673
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F186B94:
    // 7F186B94: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F186B98:
    ctx->pc = 0x7F186B98u;
    // 7F186B98: sth     r6, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186B9C:
    // 7F186B9C: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F186BA0:
    ctx->pc = 0x7F186BA0u;
    // 7F186BA0: sth     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BA4:
    ctx->pc = 0x7F186BA4u;
    // 7F186BA4: sth     r4, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186BA8:
    ctx->pc = 0x7F186BA8u;
    // 7F186BA8: stb     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186BAC:
    ctx->pc = 0x7F186BACu;
    // 7F186BAC: stb     r6, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BB0:
    ctx->pc = 0x7F186BB0u;
    // 7F186BB0: stb     r6, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BB4:
    ctx->pc = 0x7F186BB4u;
    // 7F186BB4: stb     r6, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BB8:
    ctx->pc = 0x7F186BB8u;
    // 7F186BB8: sth     r5, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BBC:
    ctx->pc = 0x7F186BBCu;
    // 7F186BBC: sth     r6, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186BC0:
    ctx->pc = 0x7F186BC0u;
    // 7F186BC0: sth     r5, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BC4:
    ctx->pc = 0x7F186BC4u;
    // 7F186BC4: sth     r4, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186BC8:
    ctx->pc = 0x7F186BC8u;
    // 7F186BC8: stb     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186BCC:
    ctx->pc = 0x7F186BCCu;
    // 7F186BCC: stb     r6, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BD0:
    ctx->pc = 0x7F186BD0u;
    // 7F186BD0: stb     r6, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BD4:
    ctx->pc = 0x7F186BD4u;
    // 7F186BD4: stb     r6, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BD8:
    ctx->pc = 0x7F186BD8u;
    // 7F186BD8: sth     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186BDC:
    ctx->pc = 0x7F186BDCu;
    // 7F186BDC: sth     r5, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BE0:
    ctx->pc = 0x7F186BE0u;
    // 7F186BE0: sth     r5, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BE4:
    ctx->pc = 0x7F186BE4u;
    // 7F186BE4: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186BE8:
    ctx->pc = 0x7F186BE8u;
    // 7F186BE8: stb     r3, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186BEC:
    ctx->pc = 0x7F186BECu;
    // 7F186BEC: stb     r6, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BF0:
    ctx->pc = 0x7F186BF0u;
    // 7F186BF0: stb     r6, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BF4:
    ctx->pc = 0x7F186BF4u;
    // 7F186BF4: stb     r6, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186BF8:
    ctx->pc = 0x7F186BF8u;
    // 7F186BF8: sth     r5, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186BFC:
    ctx->pc = 0x7F186BFCu;
    // 7F186BFC: sth     r5, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C00:
    ctx->pc = 0x7F186C00u;
    // 7F186C00: sth     r5, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C04:
    ctx->pc = 0x7F186C04u;
    // 7F186C04: sth     r0, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186C08:
    ctx->pc = 0x7F186C08u;
    // 7F186C08: stb     r3, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186C0C:
    ctx->pc = 0x7F186C0Cu;
    // 7F186C0C: stb     r6, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C10:
    ctx->pc = 0x7F186C10u;
    // 7F186C10: stb     r6, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C14:
    ctx->pc = 0x7F186C14u;
    // 7F186C14: stb     r6, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C18:
    // 7F186C18: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F186C1C:
    // 7F186C1C: b       0x7F186DFC
    {
            goto label_7F186DFC;
    }

label_7F186C20:
    ctx->downcount -= 40;
    // 7F186C20: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F186C24:
    // 7F186C24: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F186C28:
    ctx->pc = 0x7F186C28u;
    // 7F186C28: sth     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186C2C:
    // 7F186C2C: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F186C30:
    // 7F186C30: addi    r4, r3, -28673
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F186C34:
    // 7F186C34: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F186C38:
    ctx->pc = 0x7F186C38u;
    // 7F186C38: sth     r5, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C3C:
    // 7F186C3C: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F186C40:
    ctx->pc = 0x7F186C40u;
    // 7F186C40: sth     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C44:
    ctx->pc = 0x7F186C44u;
    // 7F186C44: sth     r4, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186C48:
    ctx->pc = 0x7F186C48u;
    // 7F186C48: stb     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186C4C:
    ctx->pc = 0x7F186C4Cu;
    // 7F186C4C: stb     r6, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C50:
    ctx->pc = 0x7F186C50u;
    // 7F186C50: stb     r6, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C54:
    ctx->pc = 0x7F186C54u;
    // 7F186C54: stb     r6, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C58:
    ctx->pc = 0x7F186C58u;
    // 7F186C58: sth     r6, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186C5C:
    ctx->pc = 0x7F186C5Cu;
    // 7F186C5C: sth     r6, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186C60:
    ctx->pc = 0x7F186C60u;
    // 7F186C60: sth     r5, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C64:
    ctx->pc = 0x7F186C64u;
    // 7F186C64: sth     r4, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186C68:
    ctx->pc = 0x7F186C68u;
    // 7F186C68: stb     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186C6C:
    ctx->pc = 0x7F186C6Cu;
    // 7F186C6C: stb     r6, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C70:
    ctx->pc = 0x7F186C70u;
    // 7F186C70: stb     r6, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C74:
    ctx->pc = 0x7F186C74u;
    // 7F186C74: stb     r6, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C78:
    ctx->pc = 0x7F186C78u;
    // 7F186C78: sth     r5, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C7C:
    ctx->pc = 0x7F186C7Cu;
    // 7F186C7C: sth     r5, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C80:
    ctx->pc = 0x7F186C80u;
    // 7F186C80: sth     r5, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C84:
    ctx->pc = 0x7F186C84u;
    // 7F186C84: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186C88:
    ctx->pc = 0x7F186C88u;
    // 7F186C88: stb     r3, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186C8C:
    ctx->pc = 0x7F186C8Cu;
    // 7F186C8C: stb     r6, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C90:
    ctx->pc = 0x7F186C90u;
    // 7F186C90: stb     r6, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C94:
    ctx->pc = 0x7F186C94u;
    // 7F186C94: stb     r6, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186C98:
    ctx->pc = 0x7F186C98u;
    // 7F186C98: sth     r5, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186C9C:
    ctx->pc = 0x7F186C9Cu;
    // 7F186C9C: sth     r6, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186CA0:
    ctx->pc = 0x7F186CA0u;
    // 7F186CA0: sth     r5, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186CA4:
    ctx->pc = 0x7F186CA4u;
    // 7F186CA4: sth     r0, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186CA8:
    ctx->pc = 0x7F186CA8u;
    // 7F186CA8: stb     r3, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186CAC:
    ctx->pc = 0x7F186CACu;
    // 7F186CAC: stb     r6, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186CB0:
    ctx->pc = 0x7F186CB0u;
    // 7F186CB0: stb     r6, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186CB4:
    ctx->pc = 0x7F186CB4u;
    // 7F186CB4: stb     r6, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F186CB8:
    // 7F186CB8: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F186CBC:
    // 7F186CBC: b       0x7F186DFC
    {
            goto label_7F186DFC;
    }

label_7F186CC0:
    ctx->downcount -= 40;
    // 7F186CC0: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F186CC4:
    // 7F186CC4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F186CC8:
    ctx->pc = 0x7F186CC8u;
    // 7F186CC8: sth     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186CCC:
    // 7F186CCC: addi    r5, r3, -28673
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F186CD0:
    // 7F186CD0: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_7F186CD4:
    // 7F186CD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F186CD8:
    ctx->pc = 0x7F186CD8u;
    // 7F186CD8: sth     r6, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186CDC:
    // 7F186CDC: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F186CE0:
    ctx->pc = 0x7F186CE0u;
    // 7F186CE0: sth     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186CE4:
    ctx->pc = 0x7F186CE4u;
    // 7F186CE4: sth     r5, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186CE8:
    ctx->pc = 0x7F186CE8u;
    // 7F186CE8: stb     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F186CEC:
    ctx->pc = 0x7F186CECu;
    // 7F186CEC: stb     r3, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186CF0:
    ctx->pc = 0x7F186CF0u;
    // 7F186CF0: stb     r3, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186CF4:
    ctx->pc = 0x7F186CF4u;
    // 7F186CF4: stb     r3, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186CF8:
    ctx->pc = 0x7F186CF8u;
    // 7F186CF8: sth     r3, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F186CFC:
    ctx->pc = 0x7F186CFCu;
    // 7F186CFC: sth     r6, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D00:
    ctx->pc = 0x7F186D00u;
    // 7F186D00: sth     r6, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D04:
    ctx->pc = 0x7F186D04u;
    // 7F186D04: sth     r5, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186D08:
    ctx->pc = 0x7F186D08u;
    // 7F186D08: stb     r4, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F186D0C:
    ctx->pc = 0x7F186D0Cu;
    // 7F186D0C: stb     r3, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D10:
    ctx->pc = 0x7F186D10u;
    // 7F186D10: stb     r3, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D14:
    ctx->pc = 0x7F186D14u;
    // 7F186D14: stb     r3, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D18:
    ctx->pc = 0x7F186D18u;
    // 7F186D18: sth     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D1C:
    ctx->pc = 0x7F186D1Cu;
    // 7F186D1C: sth     r3, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F186D20:
    ctx->pc = 0x7F186D20u;
    // 7F186D20: sth     r6, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D24:
    ctx->pc = 0x7F186D24u;
    // 7F186D24: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186D28:
    ctx->pc = 0x7F186D28u;
    // 7F186D28: stb     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F186D2C:
    ctx->pc = 0x7F186D2Cu;
    // 7F186D2C: stb     r3, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D30:
    ctx->pc = 0x7F186D30u;
    // 7F186D30: stb     r3, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D34:
    ctx->pc = 0x7F186D34u;
    // 7F186D34: stb     r3, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D38:
    ctx->pc = 0x7F186D38u;
    // 7F186D38: sth     r3, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F186D3C:
    ctx->pc = 0x7F186D3Cu;
    // 7F186D3C: sth     r3, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F186D40:
    ctx->pc = 0x7F186D40u;
    // 7F186D40: sth     r6, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D44:
    ctx->pc = 0x7F186D44u;
    // 7F186D44: sth     r0, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186D48:
    ctx->pc = 0x7F186D48u;
    // 7F186D48: stb     r4, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F186D4C:
    ctx->pc = 0x7F186D4Cu;
    // 7F186D4C: stb     r3, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D50:
    ctx->pc = 0x7F186D50u;
    // 7F186D50: stb     r3, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D54:
    ctx->pc = 0x7F186D54u;
    // 7F186D54: stb     r3, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D58:
    // 7F186D58: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F186D5C:
    // 7F186D5C: b       0x7F186DFC
    {
            goto label_7F186DFC;
    }

label_7F186D60:
    ctx->downcount -= 39;
    // 7F186D60: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_7F186D64:
    // 7F186D64: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F186D68:
    ctx->pc = 0x7F186D68u;
    // 7F186D68: sth     r6, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D6C:
    // 7F186D6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F186D70:
    // 7F186D70: addi    r4, r3, -28673
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F186D74:
    // 7F186D74: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F186D78:
    ctx->pc = 0x7F186D78u;
    // 7F186D78: sth     r5, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186D7C:
    // 7F186D7C: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F186D80:
    ctx->pc = 0x7F186D80u;
    // 7F186D80: sth     r6, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D84:
    ctx->pc = 0x7F186D84u;
    // 7F186D84: sth     r4, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186D88:
    ctx->pc = 0x7F186D88u;
    // 7F186D88: stb     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186D8C:
    ctx->pc = 0x7F186D8Cu;
    // 7F186D8C: stb     r5, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186D90:
    ctx->pc = 0x7F186D90u;
    // 7F186D90: stb     r5, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186D94:
    ctx->pc = 0x7F186D94u;
    // 7F186D94: stb     r5, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186D98:
    ctx->pc = 0x7F186D98u;
    // 7F186D98: sth     r6, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186D9C:
    ctx->pc = 0x7F186D9Cu;
    // 7F186D9C: sth     r6, 18(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186DA0:
    ctx->pc = 0x7F186DA0u;
    // 7F186DA0: sth     r6, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186DA4:
    ctx->pc = 0x7F186DA4u;
    // 7F186DA4: sth     r4, 22(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F186DA8:
    ctx->pc = 0x7F186DA8u;
    // 7F186DA8: stb     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186DAC:
    ctx->pc = 0x7F186DACu;
    // 7F186DAC: stb     r5, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DB0:
    ctx->pc = 0x7F186DB0u;
    // 7F186DB0: stb     r5, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DB4:
    ctx->pc = 0x7F186DB4u;
    // 7F186DB4: stb     r5, 15(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DB8:
    ctx->pc = 0x7F186DB8u;
    // 7F186DB8: sth     r5, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186DBC:
    ctx->pc = 0x7F186DBCu;
    // 7F186DBC: sth     r5, 30(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186DC0:
    ctx->pc = 0x7F186DC0u;
    // 7F186DC0: sth     r6, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186DC4:
    ctx->pc = 0x7F186DC4u;
    // 7F186DC4: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186DC8:
    ctx->pc = 0x7F186DC8u;
    // 7F186DC8: stb     r3, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186DCC:
    ctx->pc = 0x7F186DCCu;
    // 7F186DCC: stb     r5, 25(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DD0:
    ctx->pc = 0x7F186DD0u;
    // 7F186DD0: stb     r5, 26(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DD4:
    ctx->pc = 0x7F186DD4u;
    // 7F186DD4: stb     r5, 27(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DD8:
    ctx->pc = 0x7F186DD8u;
    // 7F186DD8: sth     r5, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F186DDC:
    ctx->pc = 0x7F186DDCu;
    // 7F186DDC: sth     r6, 42(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186DE0:
    ctx->pc = 0x7F186DE0u;
    // 7F186DE0: sth     r6, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F186DE4:
    ctx->pc = 0x7F186DE4u;
    // 7F186DE4: sth     r0, 46(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F186DE8:
    ctx->pc = 0x7F186DE8u;
    // 7F186DE8: stb     r3, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F186DEC:
    ctx->pc = 0x7F186DECu;
    // 7F186DEC: stb     r5, 37(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DF0:
    ctx->pc = 0x7F186DF0u;
    // 7F186DF0: stb     r5, 38(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DF4:
    ctx->pc = 0x7F186DF4u;
    // 7F186DF4: stb     r5, 39(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F186DF8:
    // 7F186DF8: addi    r27, r27, 48
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(48);

label_7F186DFC:
    ctx->downcount -= 4;
    // 7F186DFC: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F186E00:
    // 7F186E00: addi    r25, r25, 28
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(28);

label_7F186E04:
    // 7F186E04: cmpwi   r26, 64
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186E08:
    // 7F186E08: bc    12, 0, 0x7F186A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186A5Cu;
                return;
            }
            goto label_7F186A5C;
        }
    }

label_7F186E0C:
    ctx->pc = 0x7F186E0Cu;
    ctx->downcount -= 4;
    // 7F186E0C: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186E10:
    ctx->pc = 0x7F186E10u;
    // 7F186E10: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F186E14:
    ctx->pc = 0x7F186E14u;
    // 7F186E14: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F186E18:
    ctx->pc = 0x7F186E18u;
    // 7F186E18: bl      0x8000519C
    {
            ctx->lr = 0x7F186E1Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F186E1C:
    ctx->pc = 0x7F186E1Cu;
    ctx->downcount -= 4;
    // 7F186E1C: lwz     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186E20:
    ctx->pc = 0x7F186E20u;
    // 7F186E20: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_7F186E24:
    ctx->pc = 0x7F186E24u;
    // 7F186E24: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F186E28:
    ctx->pc = 0x7F186E28u;
    // 7F186E28: bl      0x8000519C
    {
            ctx->lr = 0x7F186E2Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F186E2C:
    ctx->pc = 0x7F186E2Cu;
    ctx->downcount -= 1;
    // 7F186E2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F186E30:
    ctx->pc = 0x7F186E30u;
    ctx->downcount -= 32;
    // 7F186E30: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F186E30u);
        if (ctx->exception) return;
    }

label_7F186E34:
    ctx->pc = 0x7F186E34u;
    // 7F186E34: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E38:
    ctx->pc = 0x7F186E38u;
    // 7F186E38: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F186E38u);
        if (ctx->exception) return;
    }

label_7F186E3C:
    ctx->pc = 0x7F186E3Cu;
    // 7F186E3C: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E40:
    ctx->pc = 0x7F186E40u;
    // 7F186E40: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F186E40u);
        if (ctx->exception) return;
    }

label_7F186E44:
    ctx->pc = 0x7F186E44u;
    // 7F186E44: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E48:
    ctx->pc = 0x7F186E48u;
    // 7F186E48: psq_l   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F186E48u);
        if (ctx->exception) return;
    }

label_7F186E4C:
    ctx->pc = 0x7F186E4Cu;
    // 7F186E4C: lfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E50:
    ctx->pc = 0x7F186E50u;
    // 7F186E50: psq_l   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F186E50u);
        if (ctx->exception) return;
    }

label_7F186E54:
    ctx->pc = 0x7F186E54u;
    // 7F186E54: lfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E58:
    ctx->pc = 0x7F186E58u;
    // 7F186E58: psq_l   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F186E58u);
        if (ctx->exception) return;
    }

label_7F186E5C:
    ctx->pc = 0x7F186E5Cu;
    // 7F186E5C: lfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E60:
    ctx->pc = 0x7F186E60u;
    // 7F186E60: psq_l   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F186E60u);
        if (ctx->exception) return;
    }

label_7F186E64:
    ctx->pc = 0x7F186E64u;
    // 7F186E64: lfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E68:
    ctx->pc = 0x7F186E68u;
    // 7F186E68: psq_l   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F186E68u);
        if (ctx->exception) return;
    }

label_7F186E6C:
    ctx->pc = 0x7F186E6Cu;
    // 7F186E6C: lfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186E70:
    ctx->pc = 0x7F186E70u;
    // 7F186E70: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F186E74:
    ctx->pc = 0x7F186E74u;
    // 7F186E74: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186E78:
    ctx->pc = 0x7F186E78u;
    // 7F186E78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F186E7C:
    ctx->pc = 0x7F186E7Cu;
    // 7F186E7C: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F186E80:
    ctx->pc = 0x7F186E80u;
    // 7F186E80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F186E84:
    ctx->pc = 0x7F186E84u;
    ctx->downcount -= 23;
    // 7F186E84: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F186E88:
    ctx->pc = 0x7F186E88u;
    // 7F186E88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F186E8C:
    ctx->pc = 0x7F186E8Cu;
    // 7F186E8C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186E90:
    ctx->pc = 0x7F186E90u;
    // 7F186E90: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186E90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F186E94:
    ctx->pc = 0x7F186E94u;
    // 7F186E94: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186E94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F186E94u);
        if (ctx->exception) return;
    }

label_7F186E98:
    ctx->pc = 0x7F186E98u;
    // 7F186E98: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F186E9C:
    ctx->pc = 0x7F186E9Cu;
    // 7F186E9C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186EA0:
    ctx->pc = 0x7F186EA0u;
    // 7F186EA0: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F186EA4:
    ctx->pc = 0x7F186EA4u;
    // 7F186EA4: lfs     f31, 4360(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F186EA4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F186EA8:
    ctx->pc = 0x7F186EA8u;
    // 7F186EA8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186EAC:
    ctx->pc = 0x7F186EACu;
    // 7F186EAC: cmpw    r0, r7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F186EB0:
    ctx->pc = 0x7F186EB0u;
    // 7F186EB0: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F186EB4:
    ctx->pc = 0x7F186EB4u;
    // 7F186EB4: bc    12, 1, 0x7F186EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F186EC4;
        }
    }

label_7F186EB8:
    ctx->pc = 0x7F186EB8u;
    ctx->downcount -= 3;
    // 7F186EB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F186EBC:
    ctx->pc = 0x7F186EBCu;
    // 7F186EBC: lfs     f1, 4248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F186EBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186EC0:
    ctx->pc = 0x7F186EC0u;
    // 7F186EC0: b       0x7F186F74
    {
            goto label_7F186F74;
    }

label_7F186EC4:
    ctx->pc = 0x7F186EC4u;
    ctx->downcount -= 9;
    // 7F186EC4: mulli   r6, r7, 56
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[7] * (s64)(s32)56);

label_7F186EC8:
    ctx->pc = 0x7F186EC8u;
    // 7F186EC8: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F186ECC:
    ctx->pc = 0x7F186ECCu;
    // 7F186ECC: addi    r31, r6, 16
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(16);

label_7F186ED0:
    ctx->pc = 0x7F186ED0u;
    // 7F186ED0: add   r31, r4, r31
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F186ED4:
    ctx->pc = 0x7F186ED4u;
    // 7F186ED4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F186ED8:
    ctx->pc = 0x7F186ED8u;
    // 7F186ED8: lwz     r30, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F186EDC:
    ctx->pc = 0x7F186EDCu;
    // 7F186EDC: bl      0x7F1146A0
    {
            ctx->lr = 0x7F186EE0u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F186EE0:
    ctx->pc = 0x7F186EE0u;
    ctx->downcount -= 4;
    // 7F186EE0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F186EE4:
    ctx->pc = 0x7F186EE4u;
    // 7F186EE4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F186EE8:
    ctx->pc = 0x7F186EE8u;
    // 7F186EE8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F186EEC:
    ctx->pc = 0x7F186EECu;
    // 7F186EEC: bl      0x7F114508
    {
            ctx->lr = 0x7F186EF0u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F186EF0:
    ctx->pc = 0x7F186EF0u;
    ctx->downcount -= 2;
    // 7F186EF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F186EF4:
    ctx->pc = 0x7F186EF4u;
    // 7F186EF4: b       0x7F186F64
    {
            goto label_7F186F64;
    }

label_7F186EF8:
    ctx->pc = 0x7F186EF8u;
    ctx->downcount -= 16;
    // 7F186EF8: lfs     f3, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186EF8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F186EFC:
    ctx->pc = 0x7F186EFCu;
    // 7F186EFC: lfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F186EFCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186F00:
    ctx->pc = 0x7F186F00u;
    // 7F186F00: lfs     f2, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186F00u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F186F04:
    ctx->pc = 0x7F186F04u;
    // 7F186F04: lfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F186F04u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186F08:
    ctx->pc = 0x7F186F08u;
    // 7F186F08: fsubs   f3, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186F08u)) return;
    ppc_fsubs(ctx, 3, 3, 1);

label_7F186F0C:
    ctx->pc = 0x7F186F0Cu;
    // 7F186F0C: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F186F0Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F186F10:
    ctx->pc = 0x7F186F10u;
    // 7F186F10: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186F10u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F186F14:
    ctx->pc = 0x7F186F14u;
    // 7F186F14: lfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F186F14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F186F18:
    ctx->pc = 0x7F186F18u;
    // 7F186F18: fmuls   f3, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F186F18u)) return;
    ppc_fmuls(ctx, 3, 3, 3);

label_7F186F1C:
    ctx->pc = 0x7F186F1Cu;
    // 7F186F1C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186F1Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F186F20:
    ctx->pc = 0x7F186F20u;
    // 7F186F20: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F186F20u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_7F186F24:
    ctx->pc = 0x7F186F24u;
    // 7F186F24: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F186F24u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F186F28:
    ctx->pc = 0x7F186F28u;
    // 7F186F28: fadds   f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F186F28u)) return;
    ppc_fadds(ctx, 0, 3, 2);

label_7F186F2C:
    ctx->pc = 0x7F186F2Cu;
    // 7F186F2C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186F2Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F186F30:
    ctx->pc = 0x7F186F30u;
    // 7F186F30: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186F30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F186F34:
    // 7F186F34: bc    4, 1, 0x7F186F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F186F5C;
        }
    }

label_7F186F38:
    ctx->pc = 0x7F186F38u;
    ctx->downcount -= 9;
    // 7F186F38: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186F3C:
    ctx->pc = 0x7F186F3Cu;
    // 7F186F3C: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F186F3Cu)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_7F186F40:
    ctx->pc = 0x7F186F40u;
    // 7F186F40: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186F44:
    ctx->pc = 0x7F186F44u;
    // 7F186F44: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186F48:
    ctx->pc = 0x7F186F48u;
    // 7F186F48: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186F4C:
    ctx->pc = 0x7F186F4Cu;
    // 7F186F4C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F186F50:
    ctx->pc = 0x7F186F50u;
    // 7F186F50: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186F54:
    ctx->pc = 0x7F186F54u;
    // 7F186F54: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F186F58:
    ctx->pc = 0x7F186F58u;
    // 7F186F58: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186F5C:
    ctx->downcount -= 2;
    // 7F186F5C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F186F60:
    // 7F186F60: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F186F64:
    ctx->pc = 0x7F186F64u;
    ctx->downcount -= 3;
    // 7F186F64: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186F68:
    // 7F186F68: cmpw    r4, r0
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

label_7F186F6C:
    // 7F186F6C: bc    12, 0, 0x7F186EF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186EF8u;
                return;
            }
            goto label_7F186EF8;
        }
    }

label_7F186F70:
    ctx->pc = 0x7F186F70u;
    ctx->downcount -= 1;
    // 7F186F70: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F186F70u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F186F74:
    ctx->pc = 0x7F186F74u;
    ctx->downcount -= 18;
    // 7F186F74: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F186F74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F186F74u);
        if (ctx->exception) return;
    }

label_7F186F78:
    ctx->pc = 0x7F186F78u;
    // 7F186F78: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F186F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F186F7C:
    ctx->pc = 0x7F186F7Cu;
    // 7F186F7C: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F186F80:
    ctx->pc = 0x7F186F80u;
    // 7F186F80: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F186F84:
    ctx->pc = 0x7F186F84u;
    // 7F186F84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F186F88:
    ctx->pc = 0x7F186F88u;
    // 7F186F88: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F186F8C:
    ctx->pc = 0x7F186F8Cu;
    // 7F186F8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F186F90:
    ctx->pc = 0x7F186F90u;
    ctx->downcount -= 24;
    // 7F186F90: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F186F94:
    ctx->pc = 0x7F186F94u;
    // 7F186F94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F186F98:
    ctx->pc = 0x7F186F98u;
    // 7F186F98: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F186F9C:
    ctx->pc = 0x7F186F9Cu;
    // 7F186F9C: stmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F186FA0:
    ctx->pc = 0x7F186FA0u;
    // 7F186FA0: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F186FA4:
    ctx->pc = 0x7F186FA4u;
    // 7F186FA4: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F186FA8:
    ctx->pc = 0x7F186FA8u;
    // 7F186FA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186FAC:
    ctx->pc = 0x7F186FACu;
    // 7F186FAC: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F186FB0:
    ctx->pc = 0x7F186FB0u;
    // 7F186FB0: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F186FB4:
    ctx->pc = 0x7F186FB4u;
    // 7F186FB4: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F186FB8:
    ctx->pc = 0x7F186FB8u;
    // 7F186FB8: stw     r28, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F186FBC:
    ctx->pc = 0x7F186FBCu;
    // 7F186FBC: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F186FC0:
    ctx->pc = 0x7F186FC0u;
    // 7F186FC0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F186FC4:
    ctx->pc = 0x7F186FC4u;
    // 7F186FC4: bl      0x7F1870FC
    {
            ctx->lr = 0x7F186FC8u;
            goto label_7F1870FC;
    }

label_7F186FC8:
    ctx->pc = 0x7F186FC8u;
    ctx->downcount -= 5;
    // 7F186FC8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F186FCC:
    ctx->pc = 0x7F186FCCu;
    // 7F186FCC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F186FD0:
    ctx->pc = 0x7F186FD0u;
    // 7F186FD0: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F186FD4:
    ctx->pc = 0x7F186FD4u;
    // 7F186FD4: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F186FD8:
    ctx->pc = 0x7F186FD8u;
    // 7F186FD8: bl      0x800261D8
    {
            ctx->lr = 0x7F186FDCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F186FDC:
    ctx->pc = 0x7F186FDCu;
    ctx->downcount -= 4;
    // 7F186FDC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F186FE0:
    ctx->pc = 0x7F186FE0u;
    // 7F186FE0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F186FE4:
    ctx->pc = 0x7F186FE4u;
    // 7F186FE4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F186FE8:
    ctx->pc = 0x7F186FE8u;
    // 7F186FE8: bl      0x7F114508
    {
            ctx->lr = 0x7F186FECu;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F186FEC:
    ctx->pc = 0x7F186FECu;
    ctx->downcount -= 3;
    // 7F186FEC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F186FF0:
    ctx->pc = 0x7F186FF0u;
    // 7F186FF0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F186FF4:
    ctx->pc = 0x7F186FF4u;
    // 7F186FF4: bl      0x7F114F50
    {
            ctx->lr = 0x7F186FF8u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F186FF8:
    ctx->pc = 0x7F186FF8u;
    ctx->downcount -= 5;
    // 7F186FF8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F186FFC:
    ctx->pc = 0x7F186FFCu;
    // 7F186FFC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F187000:
    ctx->pc = 0x7F187000u;
    // 7F187000: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F187004:
    ctx->pc = 0x7F187004u;
    // 7F187004: addi    r5, r31, 124
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(124);

label_7F187008:
    ctx->pc = 0x7F187008u;
    // 7F187008: bl      0x7F1C6BF4
    {
            ctx->lr = 0x7F18700Cu;
            ctx->pc = 0x7F1C6BF4u;
            return;
    }

label_7F18700C:
    ctx->pc = 0x7F18700Cu;
    ctx->downcount -= 2;
    // 7F18700C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187010:
    ctx->pc = 0x7F187010u;
    // 7F187010: bl      0x7F185C48
    {
            ctx->lr = 0x7F187014u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F185C48u;
                return;
            }
            goto label_7F185C48;
    }

label_7F187014:
    ctx->pc = 0x7F187014u;
    ctx->downcount -= 3;
    // 7F187014: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187018:
    ctx->pc = 0x7F187018u;
    // 7F187018: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F18701C:
    ctx->pc = 0x7F18701Cu;
    // 7F18701C: bl      0x7F178F70
    {
            ctx->lr = 0x7F187020u;
            ctx->pc = 0x7F178F70u;
            return;
    }

label_7F187020:
    ctx->pc = 0x7F187020u;
    ctx->downcount -= 10;
    // 7F187020: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187024:
    ctx->pc = 0x7F187024u;
    // 7F187024: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_7F187028:
    ctx->pc = 0x7F187028u;
    // 7F187028: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18702C:
    ctx->pc = 0x7F18702Cu;
    // 7F18702C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187030:
    ctx->pc = 0x7F187030u;
    // 7F187030: lfs     f0, 4356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187030u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187034:
    ctx->pc = 0x7F187034u;
    // 7F187034: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F187038:
    ctx->pc = 0x7F187038u;
    // 7F187038: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F18703C:
    ctx->pc = 0x7F18703Cu;
    // 7F18703C: stfs     f0, 136(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F18703Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F187040:
    ctx->pc = 0x7F187040u;
    // 7F187040: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187044:
    ctx->pc = 0x7F187044u;
    // 7F187044: bl      0x7F3C8470
    {
            ctx->lr = 0x7F187048u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F187048:
    ctx->pc = 0x7F187048u;
    ctx->downcount -= 1;
    // 7F187048: bl      0x7F3C8480
    {
            ctx->lr = 0x7F18704Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F18704C:
    ctx->pc = 0x7F18704Cu;
    ctx->downcount -= 2;
    // 7F18704C: cmplwi  r3, 0x0000
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

label_7F187050:
    ctx->pc = 0x7F187050u;
    // 7F187050: bc    12, 2, 0x7F1870C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1870C0;
        }
    }

label_7F187054:
    ctx->pc = 0x7F187054u;
    ctx->downcount -= 6;
    // 7F187054: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187058:
    ctx->pc = 0x7F187058u;
    // 7F187058: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F18705C:
    ctx->pc = 0x7F18705Cu;
    // 7F18705C: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F187060:
    ctx->pc = 0x7F187060u;
    // 7F187060: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F187064:
    ctx->pc = 0x7F187064u;
    // 7F187064: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187068:
    ctx->pc = 0x7F187068u;
    // 7F187068: bl      0x7F186E84
    {
            ctx->lr = 0x7F18706Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186E84u;
                return;
            }
            goto label_7F186E84;
    }

label_7F18706C:
    ctx->pc = 0x7F18706Cu;
    ctx->downcount -= 5;
    // 7F18706C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187070:
    ctx->pc = 0x7F187070u;
    // 7F187070: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F187074:
    ctx->pc = 0x7F187074u;
    // 7F187074: lfs     f0, 4296(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187074u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187078:
    ctx->pc = 0x7F187078u;
    // 7F187078: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18707C:
    ctx->pc = 0x7F18707Cu;
    // 7F18707C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F187080u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F187080:
    ctx->pc = 0x7F187080u;
    ctx->downcount -= 4;
    // 7F187080: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187084:
    ctx->pc = 0x7F187084u;
    // 7F187084: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F187088:
    ctx->pc = 0x7F187088u;
    // 7F187088: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F18708C:
    ctx->pc = 0x7F18708Cu;
    // 7F18708C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F187090u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F187090:
    ctx->pc = 0x7F187090u;
    ctx->downcount -= 12;
    // 7F187090: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187094:
    ctx->pc = 0x7F187094u;
    // 7F187094: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187098:
    ctx->pc = 0x7F187098u;
    // 7F187098: lfs     f0, 4248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187098u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18709C:
    ctx->pc = 0x7F18709Cu;
    // 7F18709C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18709Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1870A0:
    ctx->pc = 0x7F1870A0u;
    // 7F1870A0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1870A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1870A4:
    ctx->pc = 0x7F1870A4u;
    // 7F1870A4: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1870A8:
    ctx->pc = 0x7F1870A8u;
    // 7F1870A8: stw     r3, 3744(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3744);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1870AC:
    ctx->pc = 0x7F1870ACu;
    // 7F1870AC: stw     r0, 3748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3748);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1870B0:
    ctx->pc = 0x7F1870B0u;
    // 7F1870B0: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1870B4:
    ctx->pc = 0x7F1870B4u;
    // 7F1870B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1870B8:
    ctx->pc = 0x7F1870B8u;
    // 7F1870B8: stw     r3, 3752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3752);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1870BC:
    ctx->pc = 0x7F1870BCu;
    // 7F1870BC: stw     r0, 3756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1870C0:
    ctx->pc = 0x7F1870C0u;
    ctx->downcount -= 2;
    // 7F1870C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1870C4:
    ctx->pc = 0x7F1870C4u;
    // 7F1870C4: bl      0x7F1865E8
    {
            ctx->lr = 0x7F1870C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1865E8u;
                return;
            }
            goto label_7F1865E8;
    }

label_7F1870C8:
    ctx->pc = 0x7F1870C8u;
    ctx->downcount -= 2;
    // 7F1870C8: cmpwi   r3, 0
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

label_7F1870CC:
    ctx->pc = 0x7F1870CCu;
    // 7F1870CC: bc    4, 2, 0x7F1870D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1870D8;
        }
    }

label_7F1870D0:
    ctx->pc = 0x7F1870D0u;
    ctx->downcount -= 2;
    // 7F1870D0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1870D4:
    ctx->pc = 0x7F1870D4u;
    // 7F1870D4: b       0x7F1870E8
    {
            goto label_7F1870E8;
    }

label_7F1870D8:
    ctx->pc = 0x7F1870D8u;
    ctx->downcount -= 2;
    // 7F1870D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1870DC:
    ctx->pc = 0x7F1870DCu;
    // 7F1870DC: bl      0x7F186938
    {
            ctx->lr = 0x7F1870E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186938u;
                return;
            }
            goto label_7F186938;
    }

label_7F1870E0:
    ctx->pc = 0x7F1870E0u;
    ctx->downcount -= 2;
    // 7F1870E0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1870E4:
    ctx->pc = 0x7F1870E4u;
    // 7F1870E4: subfe   r3, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1870E8:
    ctx->pc = 0x7F1870E8u;
    ctx->downcount -= 16;
    // 7F1870E8: lmw     r26, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1870EC:
    ctx->pc = 0x7F1870ECu;
    // 7F1870EC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1870F0:
    ctx->pc = 0x7F1870F0u;
    // 7F1870F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1870F4:
    ctx->pc = 0x7F1870F4u;
    // 7F1870F4: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F1870F8:
    ctx->pc = 0x7F1870F8u;
    // 7F1870F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1870FC:
    ctx->pc = 0x7F1870FCu;
    ctx->downcount -= 7;
    // 7F1870FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187100:
    ctx->pc = 0x7F187100u;
    // 7F187100: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187104:
    ctx->pc = 0x7F187104u;
    // 7F187104: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187108:
    ctx->pc = 0x7F187108u;
    // 7F187108: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F18710C:
    ctx->pc = 0x7F18710Cu;
    // 7F18710C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F187110:
    ctx->pc = 0x7F187110u;
    // 7F187110: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F187114:
    ctx->pc = 0x7F187114u;
    // 7F187114: bl      0x7F1146A0
    {
            ctx->lr = 0x7F187118u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F187118:
    ctx->pc = 0x7F187118u;
    ctx->downcount -= 5;
    // 7F187118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18711C:
    ctx->pc = 0x7F18711Cu;
    // 7F18711C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187120:
    ctx->pc = 0x7F187120u;
    // 7F187120: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F187124:
    ctx->pc = 0x7F187124u;
    // 7F187124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187128:
    ctx->pc = 0x7F187128u;
    ctx->downcount -= 25;
    // 7F187128: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F18712C:
    ctx->pc = 0x7F18712Cu;
    // 7F18712C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187130:
    ctx->pc = 0x7F187130u;
    // 7F187130: lis     r8, 32585
    ctx->gpr[8] = ((u32)(s32)(32585) << 16);

label_7F187134:
    ctx->pc = 0x7F187134u;
    // 7F187134: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187138:
    ctx->pc = 0x7F187138u;
    // 7F187138: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F18713C:
    ctx->pc = 0x7F18713Cu;
    // 7F18713C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187140:
    ctx->pc = 0x7F187140u;
    // 7F187140: addi    r3, r8, 13880
    ctx->gpr[3] = ctx->gpr[8] + (u32)(s32)(13880);

label_7F187144:
    ctx->pc = 0x7F187144u;
    // 7F187144: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F187148:
    ctx->pc = 0x7F187148u;
    // 7F187148: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F18714C:
    ctx->pc = 0x7F18714Cu;
    // 7F18714C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F187150:
    ctx->pc = 0x7F187150u;
    // 7F187150: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F187154:
    ctx->pc = 0x7F187154u;
    // 7F187154: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187158:
    ctx->pc = 0x7F187158u;
    // 7F187158: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F18715C:
    ctx->pc = 0x7F18715Cu;
    // 7F18715C: rlwinm. r0, r0, 0, 28, 28
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

label_7F187160:
    ctx->pc = 0x7F187160u;
    // 7F187160: bc    12, 2, 0x7F18716C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F18716C;
        }
    }

label_7F187164:
    ctx->pc = 0x7F187164u;
    ctx->downcount -= 2;
    // 7F187164: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F187168:
    ctx->pc = 0x7F187168u;
    // 7F187168: b       0x7F1871FC
    {
            goto label_7F1871FC;
    }

label_7F18716C:
    ctx->pc = 0x7F18716Cu;
    ctx->downcount -= 5;
    // 7F18716C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F187170:
    ctx->pc = 0x7F187170u;
    // 7F187170: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F187174:
    ctx->pc = 0x7F187174u;
    // 7F187174: li      r5, 3760
    ctx->gpr[5] = (u32)(s32)(3760);

label_7F187178:
    ctx->pc = 0x7F187178u;
    // 7F187178: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F18717C:
    ctx->pc = 0x7F18717Cu;
    // 7F18717C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F187180u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F187180:
    ctx->pc = 0x7F187180u;
    ctx->downcount -= 2;
    // 7F187180: or.   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F187184:
    ctx->pc = 0x7F187184u;
    // 7F187184: bc    12, 2, 0x7F1871F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1871F8;
        }
    }

label_7F187188:
    ctx->pc = 0x7F187188u;
    ctx->downcount -= 5;
    // 7F187188: lis     r4, 32536
    ctx->gpr[4] = ((u32)(s32)(32536) << 16);

label_7F18718C:
    ctx->pc = 0x7F18718Cu;
    // 7F18718C: lis     r5, 32536
    ctx->gpr[5] = ((u32)(s32)(32536) << 16);

label_7F187190:
    ctx->pc = 0x7F187190u;
    // 7F187190: addi    r4, r4, 25044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25044);

label_7F187194:
    ctx->pc = 0x7F187194u;
    // 7F187194: addi    r5, r5, 26008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26008);

label_7F187198:
    ctx->pc = 0x7F187198u;
    // 7F187198: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F18719Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F18719C:
    ctx->pc = 0x7F18719Cu;
    ctx->downcount -= 17;
    // 7F18719C: lwz     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1871A0:
    ctx->pc = 0x7F1871A0u;
    // 7F1871A0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1871A4:
    ctx->pc = 0x7F1871A4u;
    // 7F1871A4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1871A8:
    ctx->pc = 0x7F1871A8u;
    // 7F1871A8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1871AC:
    ctx->pc = 0x7F1871ACu;
    // 7F1871AC: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1871B0:
    ctx->pc = 0x7F1871B0u;
    // 7F1871B0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1871B4:
    ctx->pc = 0x7F1871B4u;
    // 7F1871B4: stw     r5, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1871B8:
    ctx->pc = 0x7F1871B8u;
    // 7F1871B8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1871BC:
    ctx->pc = 0x7F1871BCu;
    // 7F1871BC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1871C0:
    ctx->pc = 0x7F1871C0u;
    // 7F1871C0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1871C4:
    ctx->pc = 0x7F1871C4u;
    // 7F1871C4: stw     r9, 40(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1871C8:
    ctx->pc = 0x7F1871C8u;
    // 7F1871C8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1871CC:
    ctx->pc = 0x7F1871CCu;
    // 7F1871CC: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1871D0:
    ctx->pc = 0x7F1871D0u;
    // 7F1871D0: stw     r9, 36(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1871D4:
    ctx->pc = 0x7F1871D4u;
    // 7F1871D4: stw     r9, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1871D8:
    ctx->pc = 0x7F1871D8u;
    // 7F1871D8: stw     r0, 44(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1871DC:
    ctx->pc = 0x7F1871DCu;
    // 7F1871DC: bl      0x7F186F90
    {
            ctx->lr = 0x7F1871E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F186F90u;
                return;
            }
            goto label_7F186F90;
    }

label_7F1871E0:
    ctx->pc = 0x7F1871E0u;
    ctx->downcount -= 2;
    // 7F1871E0: cmpwi   r3, 0
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

label_7F1871E4:
    ctx->pc = 0x7F1871E4u;
    // 7F1871E4: bc    4, 0, 0x7F1871F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1871F8;
        }
    }

label_7F1871E8:
    ctx->pc = 0x7F1871E8u;
    ctx->downcount -= 2;
    // 7F1871E8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1871EC:
    ctx->pc = 0x7F1871ECu;
    // 7F1871EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1871F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1871F0:
    ctx->pc = 0x7F1871F0u;
    ctx->downcount -= 2;
    // 7F1871F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1871F4:
    ctx->pc = 0x7F1871F4u;
    // 7F1871F4: b       0x7F1871FC
    {
            goto label_7F1871FC;
    }

label_7F1871F8:
    ctx->pc = 0x7F1871F8u;
    ctx->downcount -= 1;
    // 7F1871F8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1871FC:
    ctx->pc = 0x7F1871FCu;
    ctx->downcount -= 16;
    // 7F1871FC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F187200:
    ctx->pc = 0x7F187200u;
    // 7F187200: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187204:
    ctx->pc = 0x7F187204u;
    // 7F187204: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187208:
    ctx->pc = 0x7F187208u;
    // 7F187208: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F18720C:
    ctx->pc = 0x7F18720Cu;
    // 7F18720C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187210:
    ctx->pc = 0x7F187210u;
    ctx->downcount -= 8;
    // 7F187210: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187214:
    ctx->pc = 0x7F187214u;
    // 7F187214: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187218:
    ctx->pc = 0x7F187218u;
    // 7F187218: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18721C:
    ctx->pc = 0x7F18721Cu;
    // 7F18721C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187220:
    ctx->pc = 0x7F187220u;
    // 7F187220: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187224:
    ctx->pc = 0x7F187224u;
    // 7F187224: lfs     f2, 4372(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187224u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187228:
    ctx->pc = 0x7F187228u;
    // 7F187228: lfs     f0, 4376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187228u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18722C:
    ctx->pc = 0x7F18722Cu;
    // 7F18722C: b       0x7F187234
    {
            goto label_7F187234;
    }

label_7F187230:
    ctx->pc = 0x7F187230u;
    ctx->downcount -= 1;
    // 7F187230: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F187230u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F187234:
    ctx->pc = 0x7F187234u;
    ctx->downcount -= 2;
    // 7F187234: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187234u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F187238:
    // 7F187238: bc    12, 1, 0x7F187230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187230u;
                return;
            }
            goto label_7F187230;
        }
    }

label_7F18723C:
    ctx->pc = 0x7F18723Cu;
    ctx->downcount -= 5;
    // 7F18723C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187240:
    ctx->pc = 0x7F187240u;
    // 7F187240: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187244:
    ctx->pc = 0x7F187244u;
    // 7F187244: lfs     f2, 4372(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187244u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187248:
    ctx->pc = 0x7F187248u;
    // 7F187248: lfs     f0, 4380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187248u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18724C:
    ctx->pc = 0x7F18724Cu;
    // 7F18724C: b       0x7F187254
    {
            goto label_7F187254;
    }

label_7F187250:
    ctx->pc = 0x7F187250u;
    ctx->downcount -= 1;
    // 7F187250: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F187250u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F187254:
    ctx->pc = 0x7F187254u;
    ctx->downcount -= 2;
    // 7F187254: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187254u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F187258:
    // 7F187258: bc    12, 0, 0x7F187250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187250u;
                return;
            }
            goto label_7F187250;
        }
    }

label_7F18725C:
    ctx->pc = 0x7F18725Cu;
    ctx->downcount -= 4;
    // 7F18725C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187260:
    ctx->pc = 0x7F187260u;
    // 7F187260: lfs     f0, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187260u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187264:
    ctx->pc = 0x7F187264u;
    // 7F187264: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187264u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F187268:
    ctx->pc = 0x7F187268u;
    // 7F187268: bc    4, 1, 0x7F187278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187278;
        }
    }

label_7F18726C:
    ctx->pc = 0x7F18726Cu;
    ctx->downcount -= 3;
    // 7F18726C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187270:
    ctx->pc = 0x7F187270u;
    // 7F187270: lfs     f0, 4376(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187270u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187274:
    ctx->pc = 0x7F187274u;
    // 7F187274: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187274u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F187278:
    ctx->pc = 0x7F187278u;
    ctx->downcount -= 4;
    // 7F187278: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18727C:
    ctx->pc = 0x7F18727Cu;
    // 7F18727C: lfs     f0, 4388(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18727Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187280:
    ctx->pc = 0x7F187280u;
    // 7F187280: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187280u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F187284:
    ctx->pc = 0x7F187284u;
    // 7F187284: bc    4, 0, 0x7F187294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187294;
        }
    }

label_7F187288:
    ctx->pc = 0x7F187288u;
    ctx->downcount -= 3;
    // 7F187288: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F18728C:
    ctx->pc = 0x7F18728Cu;
    // 7F18728C: lfs     f0, 4380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F18728Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187290:
    ctx->pc = 0x7F187290u;
    // 7F187290: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187290u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F187294:
    ctx->pc = 0x7F187294u;
    ctx->downcount -= 1;
    // 7F187294: bl      0x7F008330
    {
            ctx->lr = 0x7F187298u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F187298:
    ctx->pc = 0x7F187298u;
    ctx->downcount -= 5;
    // 7F187298: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18729C:
    ctx->pc = 0x7F18729Cu;
    // 7F18729C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1872A0:
    ctx->pc = 0x7F1872A0u;
    // 7F1872A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1872A4:
    ctx->pc = 0x7F1872A4u;
    // 7F1872A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1872A8:
    ctx->pc = 0x7F1872A8u;
    ctx->downcount -= 78;
    // 7F1872A8: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1872AC:
    ctx->pc = 0x7F1872ACu;
    // 7F1872AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1872B0:
    ctx->pc = 0x7F1872B0u;
    // 7F1872B0: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1872B4:
    ctx->pc = 0x7F1872B4u;
    // 7F1872B4: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1872B8:
    ctx->pc = 0x7F1872B8u;
    // 7F1872B8: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1872B8u);
        if (ctx->exception) return;
    }

label_7F1872BC:
    ctx->pc = 0x7F1872BCu;
    // 7F1872BC: stfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1872C0:
    ctx->pc = 0x7F1872C0u;
    // 7F1872C0: psq_st   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1872C0u);
        if (ctx->exception) return;
    }

label_7F1872C4:
    ctx->pc = 0x7F1872C4u;
    // 7F1872C4: stfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1872C8:
    ctx->pc = 0x7F1872C8u;
    // 7F1872C8: psq_st   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1872C8u);
        if (ctx->exception) return;
    }

label_7F1872CC:
    ctx->pc = 0x7F1872CCu;
    // 7F1872CC: stfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1872D0:
    ctx->pc = 0x7F1872D0u;
    // 7F1872D0: psq_st   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1872D0u);
        if (ctx->exception) return;
    }

label_7F1872D4:
    ctx->pc = 0x7F1872D4u;
    // 7F1872D4: stfd     f27, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1872D8:
    ctx->pc = 0x7F1872D8u;
    // 7F1872D8: psq_st   f27, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1872D8u);
        if (ctx->exception) return;
    }

label_7F1872DC:
    ctx->pc = 0x7F1872DCu;
    // 7F1872DC: stfd     f26, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F1872E0:
    ctx->pc = 0x7F1872E0u;
    // 7F1872E0: psq_st   f26, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F1872E0u);
        if (ctx->exception) return;
    }

label_7F1872E4:
    ctx->pc = 0x7F1872E4u;
    // 7F1872E4: stfd     f25, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1872E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F1872E8:
    ctx->pc = 0x7F1872E8u;
    // 7F1872E8: psq_st   f25, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1872E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F1872E8u);
        if (ctx->exception) return;
    }

label_7F1872EC:
    ctx->pc = 0x7F1872ECu;
    // 7F1872EC: stmw     r20, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1872F0:
    ctx->pc = 0x7F1872F0u;
    // 7F1872F0: lwz     r8, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1872F4:
    ctx->pc = 0x7F1872F4u;
    // 7F1872F4: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1872F8:
    ctx->pc = 0x7F1872F8u;
    // 7F1872F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1872FC:
    ctx->pc = 0x7F1872FCu;
    // 7F1872FC: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187300:
    ctx->pc = 0x7F187300u;
    // 7F187300: lwz     r7, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F187304:
    ctx->pc = 0x7F187304u;
    // 7F187304: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187308:
    ctx->pc = 0x7F187308u;
    // 7F187308: addi    r4, r3, 4392
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4392);

label_7F18730C:
    ctx->pc = 0x7F18730Cu;
    // 7F18730C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F187310:
    ctx->pc = 0x7F187310u;
    // 7F187310: xori    r7, r7, 0x0001
    ctx->gpr[7] = ctx->gpr[7] ^ 0x0001u;

label_7F187314:
    ctx->pc = 0x7F187314u;
    // 7F187314: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187314u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187318:
    ctx->pc = 0x7F187318u;
    // 7F187318: stw     r7, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F18731C:
    ctx->pc = 0x7F18731Cu;
    // 7F18731C: addi    r5, r5, -4800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4800);

label_7F187320:
    ctx->pc = 0x7F187320u;
    // 7F187320: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F187324:
    ctx->pc = 0x7F187324u;
    // 7F187324: lfs     f2, 4400(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F187324u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187328:
    ctx->pc = 0x7F187328u;
    // 7F187328: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F18732C:
    ctx->pc = 0x7F18732Cu;
    // 7F18732C: addi    r3, r3, -4824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4824);

label_7F187330:
    ctx->pc = 0x7F187330u;
    // 7F187330: lwz     r7, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F187334:
    ctx->pc = 0x7F187334u;
    // 7F187334: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F187338:
    ctx->pc = 0x7F187338u;
    // 7F187338: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F18733C:
    ctx->pc = 0x7F18733Cu;
    // 7F18733C: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187340:
    ctx->pc = 0x7F187340u;
    // 7F187340: lwz     r0, 180(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187344:
    ctx->pc = 0x7F187344u;
    // 7F187344: addi    r8, r7, 184
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(184);

label_7F187348:
    ctx->pc = 0x7F187348u;
    // 7F187348: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F18734C:
    ctx->pc = 0x7F18734Cu;
    // 7F18734C: rlwinm r9, r0, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F187350:
    ctx->pc = 0x7F187350u;
    // 7F187350: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F187354:
    ctx->pc = 0x7F187354u;
    // 7F187354: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187358:
    ctx->pc = 0x7F187358u;
    // 7F187358: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F18735C:
    ctx->pc = 0x7F18735Cu;
    // 7F18735C: add   r5, r7, r9
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F187360:
    ctx->pc = 0x7F187360u;
    // 7F187360: lwzx    r27, r8, r9
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[9];
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F187364:
    ctx->pc = 0x7F187364u;
    // 7F187364: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187364u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F187368:
    ctx->pc = 0x7F187368u;
    // 7F187368: lwzx    r26, r8, r0
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[0];
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F18736C:
    ctx->pc = 0x7F18736Cu;
    // 7F18736C: lwz     r25, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F187370:
    ctx->pc = 0x7F187370u;
    // 7F187370: fdivs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187370u)) return;
    ppc_fdivs(ctx, 1, 2, 0);

label_7F187374:
    ctx->pc = 0x7F187374u;
    // 7F187374: bl      0x800261FC
    {
            ctx->lr = 0x7F187378u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187378:
    ctx->pc = 0x7F187378u;
    ctx->downcount -= 26;
    // 7F187378: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18737C:
    ctx->pc = 0x7F18737Cu;
    // 7F18737C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187380:
    ctx->pc = 0x7F187380u;
    // 7F187380: addi    r5, r4, 4368
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4368);

label_7F187384:
    ctx->pc = 0x7F187384u;
    // 7F187384: lfs     f2, 4408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187384u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187388:
    ctx->pc = 0x7F187388u;
    // 7F187388: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187388u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18738C:
    ctx->pc = 0x7F18738Cu;
    // 7F18738C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187390:
    ctx->pc = 0x7F187390u;
    // 7F187390: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187390u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187394:
    ctx->pc = 0x7F187394u;
    // 7F187394: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F187398:
    ctx->pc = 0x7F187398u;
    // 7F187398: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187398u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F18739C:
    ctx->pc = 0x7F18739Cu;
    // 7F18739C: lfs     f3, 4404(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F18739Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1873A0:
    ctx->pc = 0x7F1873A0u;
    // 7F1873A0: lfs     f1, 1092(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873A0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1873A4:
    ctx->pc = 0x7F1873A4u;
    // 7F1873A4: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1873A4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1873A8:
    ctx->pc = 0x7F1873A8u;
    // 7F1873A8: stfs     f0, 1092(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873A8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1092);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1873AC:
    ctx->pc = 0x7F1873ACu;
    // 7F1873AC: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1873ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1873B0:
    ctx->pc = 0x7F1873B0u;
    // 7F1873B0: lfs     f1, 1096(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873B0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1873B4:
    ctx->pc = 0x7F1873B4u;
    // 7F1873B4: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1873B4u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1873B8:
    ctx->pc = 0x7F1873B8u;
    // 7F1873B8: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1873B8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1873BC:
    ctx->pc = 0x7F1873BCu;
    // 7F1873BC: stfs     f0, 1096(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873BCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1096);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1873C0:
    ctx->pc = 0x7F1873C0u;
    // 7F1873C0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1873C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1873C4:
    ctx->pc = 0x7F1873C4u;
    // 7F1873C4: lfs     f1, 1100(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873C4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1873C8:
    ctx->pc = 0x7F1873C8u;
    // 7F1873C8: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1873C8u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F1873CC:
    ctx->pc = 0x7F1873CCu;
    // 7F1873CC: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1873CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1873D0:
    ctx->pc = 0x7F1873D0u;
    // 7F1873D0: stfs     f0, 1100(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1873D0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1873D4:
    ctx->pc = 0x7F1873D4u;
    // 7F1873D4: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1873D8:
    ctx->pc = 0x7F1873D8u;
    // 7F1873D8: addic.  r28, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1873DC:
    ctx->pc = 0x7F1873DCu;
    // 7F1873DC: bc    4, 0, 0x7F1873E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1873E4;
        }
    }

label_7F1873E0:
    ctx->pc = 0x7F1873E0u;
    ctx->downcount -= 1;
    // 7F1873E0: li      r28, 35
    ctx->gpr[28] = (u32)(s32)(35);

label_7F1873E4:
    ctx->pc = 0x7F1873E4u;
    ctx->downcount -= 9;
    // 7F1873E4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1873E8:
    ctx->pc = 0x7F1873E8u;
    // 7F1873E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1873EC:
    ctx->pc = 0x7F1873ECu;
    // 7F1873EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1873F0:
    ctx->pc = 0x7F1873F0u;
    // 7F1873F0: lfs     f28, 4416(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1873F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1873F4:
    ctx->pc = 0x7F1873F4u;
    // 7F1873F4: lfs     f27, 4412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1873F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F1873F8:
    ctx->pc = 0x7F1873F8u;
    // 7F1873F8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1873FC:
    ctx->pc = 0x7F1873FCu;
    // 7F1873FC: lfs     f26, 4404(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1873FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F187400:
    ctx->pc = 0x7F187400u;
    // 7F187400: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F187404:
    ctx->pc = 0x7F187404u;
    // 7F187404: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F187408:
    ctx->pc = 0x7F187408u;
    ctx->downcount -= 4;
    // 7F187408: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18740C:
    // 7F18740C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F187410:
    // 7F187410: subf.   r30, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F187414:
    // 7F187414: bc    4, 0, 0x7F18741C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18741C;
        }
    }

label_7F187418:
    ctx->downcount -= 1;
    // 7F187418: addi    r30, r30, 36
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(36);

label_7F18741C:
    ctx->downcount -= 2;
    // 7F18741C: cmpwi   r30, 12
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F187420:
    // 7F187420: bc    4, 0, 0x7F187438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187438;
        }
    }

label_7F187424:
    ctx->pc = 0x7F187424u;
    ctx->downcount -= 48;
    // 7F187424: lwz     r3, 1120(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187428:
    // 7F187428: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F18742C:
    // 7F18742C: mullw   r3, r3, r30
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_7F187430:
    // 7F187430: divw   r20, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[20] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F187434:
    // 7F187434: b       0x7F18744C
    {
            goto label_7F18744C;
    }

label_7F187438:
    ctx->pc = 0x7F187438u;
    ctx->downcount -= 48;
    // 7F187438: lwz     r4, 1120(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18743C:
    // 7F18743C: subfic  r3, r30, 36
    {
        u64 res = (u64)(u32)(s32)(36) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F187440:
    // 7F187440: li      r0, 36
    ctx->gpr[0] = (u32)(s32)(36);

label_7F187444:
    // 7F187444: mullw   r3, r4, r3
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[3] = (u32)product;
    }

label_7F187448:
    // 7F187448: divw   r20, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[20] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F18744C:
    ctx->downcount -= 1;
    // 7F18744C: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187450u;
            goto label_7F1879B0;
    }

label_7F187450:
    ctx->pc = 0x7F187450u;
    ctx->downcount -= 4;
    // 7F187450: fmadds f1, f28, f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F187450u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[28], ctx->fpr[1], ctx->fpr[27], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F187454:
    // 7F187454: addi    r3, r24, 1092
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(1092);

label_7F187458:
    // 7F187458: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F18745C:
    // 7F18745C: bl      0x800261FC
    {
            ctx->lr = 0x7F187460u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187460:
    ctx->downcount -= 5;
    // 7F187460: add   r31, r27, r22
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F187464:
    // 7F187464: add   r3, r26, r22
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F187468:
    // 7F187468: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18746C:
    // 7F18746C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187470:
    // 7F187470: bl      0x800261B4
    {
            ctx->lr = 0x7F187474u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187474:
    ctx->downcount -= 5;
    // 7F187474: add   r21, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F187478:
    // 7F187478: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F18747C:
    // 7F18747C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187480:
    // 7F187480: addi    r4, r21, 72
    ctx->gpr[4] = ctx->gpr[21] + (u32)(s32)(72);

label_7F187484:
    // 7F187484: bl      0x800261B4
    {
            ctx->lr = 0x7F187488u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187488:
    ctx->pc = 0x7F187488u;
    ctx->downcount -= 11;
    // 7F187488: lfs     f0, 72(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F187488u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18748C:
    // 7F18748C: add   r8, r25, r22
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F187490:
    ctx->pc = 0x7F187490u;
    // 7F187490: fmuls   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F187490u)) return;
    ppc_fmuls(ctx, 0, 0, 26);

label_7F187494:
    ctx->pc = 0x7F187494u;
    // 7F187494: stfs     f0, 72(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F187494u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F187498:
    ctx->pc = 0x7F187498u;
    // 7F187498: lfs     f0, 80(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F187498u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18749C:
    ctx->pc = 0x7F18749Cu;
    // 7F18749C: fmuls   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F18749Cu)) return;
    ppc_fmuls(ctx, 0, 0, 26);

label_7F1874A0:
    ctx->pc = 0x7F1874A0u;
    // 7F1874A0: stfs     f0, 80(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1874A0u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1874A4:
    ctx->pc = 0x7F1874A4u;
    // 7F1874A4: stb     r20, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[20]);
    }

label_7F1874A8:
    ctx->pc = 0x7F1874A8u;
    // 7F1874A8: lbz     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1874AC:
    // 7F1874AC: cmplwi  r0, 0x0000
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

label_7F1874B0:
    // 7F1874B0: bc    12, 2, 0x7F187550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187550;
        }
    }

label_7F1874B4:
    ctx->downcount -= 71;
    // 7F1874B4: subfic  r0, r30, 36
    {
        u64 res = (u64)(u32)(s32)(36) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1874B8:
    // 7F1874B8: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1874BC:
    // 7F1874BC: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1874C0:
    // 7F1874C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1874C4:
    // 7F1874C4: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F1874C8:
    // 7F1874C8: add   r7, r24, r23
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1874CC:
    ctx->pc = 0x7F1874CCu;
    // 7F1874CC: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1874D0:
    // 7F1874D0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1874D4:
    ctx->pc = 0x7F1874D4u;
    // 7F1874D4: lfs     f6, 648(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1874D4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1874D8:
    // 7F1874D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1874DC:
    ctx->pc = 0x7F1874DCu;
    // 7F1874DC: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1874E0:
    ctx->pc = 0x7F1874E0u;
    // 7F1874E0: lfs     f0, 4424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1874E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1874E4:
    ctx->pc = 0x7F1874E4u;
    // 7F1874E4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1874E8:
    ctx->pc = 0x7F1874E8u;
    // 7F1874E8: lfd     f5, 4392(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1874E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4392);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1874EC:
    ctx->pc = 0x7F1874ECu;
    // 7F1874EC: fmuls   f2, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1874ECu)) return;
    ppc_fmuls(ctx, 2, 0, 6);

label_7F1874F0:
    ctx->pc = 0x7F1874F0u;
    // 7F1874F0: stw     r5, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1874F4:
    ctx->pc = 0x7F1874F4u;
    // 7F1874F4: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1874F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1874F8:
    ctx->pc = 0x7F1874F8u;
    // 7F1874F8: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1874F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1874FC:
    ctx->pc = 0x7F1874FCu;
    // 7F1874FC: fsubs   f4, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1874FCu)) return;
    ppc_fsubs(ctx, 4, 1, 5);

label_7F187500:
    ctx->pc = 0x7F187500u;
    // 7F187500: lfs     f3, 4420(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187500u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F187504:
    ctx->pc = 0x7F187504u;
    // 7F187504: fsubs   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F187504u)) return;
    ppc_fsubs(ctx, 1, 0, 5);

label_7F187508:
    ctx->pc = 0x7F187508u;
    // 7F187508: lfs     f0, 792(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F187508u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18750C:
    ctx->pc = 0x7F18750Cu;
    // 7F18750C: fmuls   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x7F18750Cu)) return;
    ppc_fmuls(ctx, 4, 6, 4);

label_7F187510:
    ctx->pc = 0x7F187510u;
    // 7F187510: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187510u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F187514:
    ctx->pc = 0x7F187514u;
    // 7F187514: fdivs   f2, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F187514u)) return;
    ppc_fdivs(ctx, 2, 4, 3);

label_7F187518:
    ctx->pc = 0x7F187518u;
    // 7F187518: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F187518u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F18751C:
    ctx->pc = 0x7F18751Cu;
    // 7F18751C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F18751Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F187520:
    ctx->pc = 0x7F187520u;
    // 7F187520: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187520u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F187524:
    ctx->pc = 0x7F187524u;
    // 7F187524: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187524u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F187528:
    ctx->pc = 0x7F187528u;
    // 7F187528: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F18752C:
    ctx->pc = 0x7F18752Cu;
    // 7F18752C: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187530:
    ctx->pc = 0x7F187530u;
    // 7F187530: sth     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187534:
    ctx->pc = 0x7F187534u;
    // 7F187534: lfs     f0, 936(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F187534u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187538:
    ctx->pc = 0x7F187538u;
    // 7F187538: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187538u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F18753C:
    ctx->pc = 0x7F18753Cu;
    // 7F18753C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18753Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F187540:
    ctx->pc = 0x7F187540u;
    // 7F187540: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F187544:
    ctx->pc = 0x7F187544u;
    // 7F187544: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187548:
    ctx->pc = 0x7F187548u;
    // 7F187548: sth     r0, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F18754C:
    // 7F18754C: b       0x7F18755C
    {
            goto label_7F18755C;
    }

label_7F187550:
    ctx->downcount -= 3;
    // 7F187550: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187554:
    ctx->pc = 0x7F187554u;
    // 7F187554: sth     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187558:
    ctx->pc = 0x7F187558u;
    // 7F187558: sth     r0, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F18755C:
    ctx->downcount -= 2;
    // 7F18755C: cmpw    r29, r28
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

label_7F187560:
    // 7F187560: bc    4, 2, 0x7F187584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187584;
        }
    }

label_7F187564:
    ctx->pc = 0x7F187564u;
    ctx->downcount -= 8;
    // 7F187564: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187568:
    ctx->pc = 0x7F187568u;
    // 7F187568: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18756C:
    ctx->pc = 0x7F18756Cu;
    // 7F18756C: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F187570:
    ctx->pc = 0x7F187570u;
    // 7F187570: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187574:
    ctx->pc = 0x7F187574u;
    // 7F187574: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187578:
    ctx->pc = 0x7F187578u;
    // 7F187578: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F18757C:
    ctx->pc = 0x7F18757Cu;
    // 7F18757C: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F187580:
    ctx->pc = 0x7F187580u;
    // 7F187580: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187584:
    ctx->downcount -= 5;
    // 7F187584: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F187588:
    // 7F187588: addi    r22, r22, 16
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(16);

label_7F18758C:
    // 7F18758C: cmpwi   r29, 36
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F187590:
    // 7F187590: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F187594:
    // 7F187594: bc    12, 0, 0x7F187408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187408u;
                return;
            }
            goto label_7F187408;
        }
    }

label_7F187598:
    ctx->pc = 0x7F187598u;
    ctx->downcount -= 16;
    // 7F187598: lwz     r3, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18759C:
    ctx->pc = 0x7F18759Cu;
    // 7F18759C: lfs     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18759Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1875A0:
    ctx->pc = 0x7F1875A0u;
    // 7F1875A0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1875A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1875A4:
    ctx->pc = 0x7F1875A4u;
    // 7F1875A4: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1875A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1875A8:
    ctx->pc = 0x7F1875A8u;
    // 7F1875A8: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1875A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1875AC:
    ctx->pc = 0x7F1875ACu;
    // 7F1875AC: fsubs   f4, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1875ACu)) return;
    ppc_fsubs(ctx, 4, 3, 2);

label_7F1875B0:
    ctx->pc = 0x7F1875B0u;
    // 7F1875B0: lfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1875B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1875B4:
    ctx->pc = 0x7F1875B4u;
    // 7F1875B4: fsubs   f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875B4u)) return;
    ppc_fsubs(ctx, 3, 1, 0);

label_7F1875B8:
    ctx->pc = 0x7F1875B8u;
    // 7F1875B8: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1875B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1875BC:
    ctx->pc = 0x7F1875BCu;
    // 7F1875BC: fmuls   f1, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1875BCu)) return;
    ppc_fmuls(ctx, 1, 4, 4);

label_7F1875C0:
    ctx->pc = 0x7F1875C0u;
    // 7F1875C0: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875C0u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F1875C4:
    ctx->pc = 0x7F1875C4u;
    // 7F1875C4: fmuls   f0, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1875C4u)) return;
    ppc_fmuls(ctx, 0, 3, 3);

label_7F1875C8:
    ctx->pc = 0x7F1875C8u;
    // 7F1875C8: fmuls   f2, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1875C8u)) return;
    ppc_fmuls(ctx, 2, 2, 2);

label_7F1875CC:
    ctx->pc = 0x7F1875CCu;
    // 7F1875CC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875CCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1875D0:
    ctx->pc = 0x7F1875D0u;
    // 7F1875D0: fadds   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875D0u)) return;
    ppc_fadds(ctx, 1, 2, 0);

label_7F1875D4:
    ctx->pc = 0x7F1875D4u;
    // 7F1875D4: bl      0x7F02A76C
    {
            ctx->lr = 0x7F1875D8u;
            ctx->pc = 0x7F02A76Cu;
            return;
    }

label_7F1875D8:
    ctx->pc = 0x7F1875D8u;
    ctx->downcount -= 43;
    // 7F1875D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1875DC:
    ctx->pc = 0x7F1875DCu;
    // 7F1875DC: lfs     f2, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1875DCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1875E0:
    ctx->pc = 0x7F1875E0u;
    // 7F1875E0: lfs     f0, 4428(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1875E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1875E4:
    ctx->pc = 0x7F1875E4u;
    // 7F1875E4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1875E4u)) return;
    ppc_frsp(ctx, 1, 1);

label_7F1875E8:
    ctx->pc = 0x7F1875E8u;
    // 7F1875E8: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875E8u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1875EC:
    ctx->pc = 0x7F1875ECu;
    // 7F1875EC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875ECu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F1875F0:
    ctx->pc = 0x7F1875F0u;
    // 7F1875F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1875F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1875F4:
    ctx->pc = 0x7F1875F4u;
    // 7F1875F4: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1875F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1875F8:
    ctx->pc = 0x7F1875F8u;
    // 7F1875F8: lwz     r30, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1875FC:
    ctx->pc = 0x7F1875FCu;
    // 7F1875FC: cmpwi   r30, 0
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

label_7F187600:
    ctx->pc = 0x7F187600u;
    // 7F187600: bc    12, 2, 0x7F187934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187934;
        }
    }

label_7F187604:
    ctx->pc = 0x7F187604u;
    ctx->downcount -= 4;
    // 7F187604: lwz     r3, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187608:
    ctx->pc = 0x7F187608u;
    // 7F187608: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F18760C:
    ctx->pc = 0x7F18760Cu;
    // 7F18760C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187610:
    ctx->pc = 0x7F187610u;
    // 7F187610: bl      0x800261D8
    {
            ctx->lr = 0x7F187614u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187614:
    ctx->pc = 0x7F187614u;
    ctx->downcount -= 32;
    // 7F187614: xoris   r3, r30, 0x8000
    ctx->gpr[3] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F187618:
    ctx->pc = 0x7F187618u;
    // 7F187618: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F18761C:
    ctx->pc = 0x7F18761Cu;
    // 7F18761C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187620:
    ctx->pc = 0x7F187620u;
    // 7F187620: stw     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F187624:
    ctx->pc = 0x7F187624u;
    // 7F187624: addi    r3, r4, 4392
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4392);

label_7F187628:
    ctx->pc = 0x7F187628u;
    // 7F187628: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18762C:
    ctx->pc = 0x7F18762Cu;
    // 7F18762C: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187630:
    ctx->pc = 0x7F187630u;
    // 7F187630: addi    r5, r4, 4412
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4412);

label_7F187634:
    ctx->pc = 0x7F187634u;
    // 7F187634: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187634u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187638:
    ctx->pc = 0x7F187638u;
    // 7F187638: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F18763C:
    ctx->pc = 0x7F18763Cu;
    // 7F18763C: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18763Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187640:
    ctx->pc = 0x7F187640u;
    // 7F187640: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187644:
    ctx->pc = 0x7F187644u;
    // 7F187644: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187644u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187648:
    ctx->pc = 0x7F187648u;
    // 7F187648: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187648u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F18764C:
    ctx->pc = 0x7F18764Cu;
    // 7F18764C: fdivs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18764Cu)) return;
    ppc_fdivs(ctx, 1, 2, 0);

label_7F187650:
    ctx->pc = 0x7F187650u;
    // 7F187650: bl      0x800261FC
    {
            ctx->lr = 0x7F187654u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187654:
    ctx->pc = 0x7F187654u;
    ctx->downcount -= 1;
    // 7F187654: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187658u;
            goto label_7F1879B0;
    }

label_7F187658:
    ctx->pc = 0x7F187658u;
    ctx->downcount -= 9;
    // 7F187658: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18765C:
    ctx->pc = 0x7F18765Cu;
    // 7F18765C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187660:
    ctx->pc = 0x7F187660u;
    // 7F187660: lfs     f3, 4432(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187660u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F187664:
    ctx->pc = 0x7F187664u;
    // 7F187664: lfs     f2, 4412(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187664u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187668:
    ctx->pc = 0x7F187668u;
    // 7F187668: lfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F187668u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18766C:
    ctx->pc = 0x7F18766Cu;
    // 7F18766C: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F18766Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F187670:
    ctx->pc = 0x7F187670u;
    // 7F187670: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187670u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F187674:
    ctx->pc = 0x7F187674u;
    // 7F187674: stfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F187674u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F187678:
    ctx->pc = 0x7F187678u;
    // 7F187678: bl      0x7F18798C
    {
            ctx->lr = 0x7F18767Cu;
            goto label_7F18798C;
    }

label_7F18767C:
    ctx->pc = 0x7F18767Cu;
    ctx->downcount -= 48;
    // 7F18767C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_7F187680:
    ctx->pc = 0x7F187680u;
    // 7F187680: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F187684:
    ctx->pc = 0x7F187684u;
    // 7F187684: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F187688:
    ctx->pc = 0x7F187688u;
    // 7F187688: subf.   r0, r0, r3
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

label_7F18768C:
    ctx->pc = 0x7F18768Cu;
    // 7F18768C: bc    4, 2, 0x7F1876A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1876A4;
        }
    }

label_7F187690:
    ctx->pc = 0x7F187690u;
    ctx->downcount -= 5;
    // 7F187690: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187694:
    ctx->pc = 0x7F187694u;
    // 7F187694: lfs     f0, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F187694u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187698:
    ctx->pc = 0x7F187698u;
    // 7F187698: lfs     f1, 4436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187698u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18769C:
    ctx->pc = 0x7F18769Cu;
    // 7F18769C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18769Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1876A0:
    ctx->pc = 0x7F1876A0u;
    // 7F1876A0: stfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1876A0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1876A4:
    ctx->pc = 0x7F1876A4u;
    ctx->downcount -= 7;
    // 7F1876A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1876A8:
    ctx->pc = 0x7F1876A8u;
    // 7F1876A8: lfs     f1, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1876A8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1876AC:
    ctx->pc = 0x7F1876ACu;
    // 7F1876AC: lfs     f0, 4436(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1876ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1876B0:
    ctx->pc = 0x7F1876B0u;
    // 7F1876B0: lfs     f2, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1876B0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1876B4:
    ctx->pc = 0x7F1876B4u;
    // 7F1876B4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1876B4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1876B8:
    ctx->pc = 0x7F1876B8u;
    // 7F1876B8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1876B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1876BC:
    ctx->pc = 0x7F1876BCu;
    // 7F1876BC: bc    4, 1, 0x7F1876C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1876C8;
        }
    }

label_7F1876C0:
    ctx->pc = 0x7F1876C0u;
    ctx->downcount -= 2;
    // 7F1876C0: stfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1876C0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1876C4:
    ctx->pc = 0x7F1876C4u;
    // 7F1876C4: b       0x7F1876E0
    {
            goto label_7F1876E0;
    }

label_7F1876C8:
    ctx->pc = 0x7F1876C8u;
    ctx->downcount -= 5;
    // 7F1876C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1876CC:
    ctx->pc = 0x7F1876CCu;
    // 7F1876CC: lfs     f0, 4440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1876CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1876D0:
    ctx->pc = 0x7F1876D0u;
    // 7F1876D0: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1876D0u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1876D4:
    ctx->pc = 0x7F1876D4u;
    // 7F1876D4: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1876D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1876D8:
    ctx->pc = 0x7F1876D8u;
    // 7F1876D8: bc    4, 0, 0x7F1876E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1876E0;
        }
    }

label_7F1876DC:
    ctx->pc = 0x7F1876DCu;
    ctx->downcount -= 1;
    // 7F1876DC: stfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1876DCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1876E0:
    ctx->pc = 0x7F1876E0u;
    ctx->downcount -= 15;
    // 7F1876E0: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F1876E4:
    ctx->pc = 0x7F1876E4u;
    // 7F1876E4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1876E8:
    ctx->pc = 0x7F1876E8u;
    // 7F1876E8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1876EC:
    ctx->pc = 0x7F1876ECu;
    // 7F1876EC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1876F0:
    ctx->pc = 0x7F1876F0u;
    // 7F1876F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1876F4:
    ctx->pc = 0x7F1876F4u;
    // 7F1876F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1876F8:
    ctx->pc = 0x7F1876F8u;
    // 7F1876F8: lfd     f26, 4392(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1876F8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4392);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1876FC:
    ctx->pc = 0x7F1876FCu;
    // 7F1876FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F187700:
    ctx->pc = 0x7F187700u;
    // 7F187700: lfs     f27, 4444(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F187700u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F187704:
    ctx->pc = 0x7F187704u;
    // 7F187704: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F187708:
    ctx->pc = 0x7F187708u;
    // 7F187708: lfs     f28, 4416(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F187708u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F18770C:
    ctx->pc = 0x7F18770Cu;
    // 7F18770C: lfs     f29, 4412(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F18770Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F187710:
    ctx->pc = 0x7F187710u;
    // 7F187710: lfs     f30, 4448(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187710u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F187714:
    ctx->pc = 0x7F187714u;
    // 7F187714: lfs     f31, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187714u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F187718:
    ctx->pc = 0x7F187718u;
    // 7F187718: b       0x7F18792C
    {
            goto label_7F18792C;
    }

label_7F18771C:
    ctx->pc = 0x7F18771Cu;
    ctx->downcount -= 20;
    // 7F18771C: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187720:
    // 7F187720: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F187724:
    // 7F187724: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F187728:
    ctx->pc = 0x7F187728u;
    // 7F187728: lwz     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F18772C:
    // 7F18772C: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F187730:
    ctx->pc = 0x7F187730u;
    // 7F187730: lwz     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F187734:
    // 7F187734: add   r7, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F187738:
    ctx->pc = 0x7F187738u;
    // 7F187738: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18773C:
    // 7F18773C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187740:
    // 7F187740: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187744:
    ctx->pc = 0x7F187744u;
    // 7F187744: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187748:
    ctx->pc = 0x7F187748u;
    // 7F187748: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F18774C:
    ctx->pc = 0x7F18774Cu;
    // 7F18774C: stw     r31, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F187750:
    ctx->pc = 0x7F187750u;
    // 7F187750: lwz     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F187754:
    ctx->pc = 0x7F187754u;
    // 7F187754: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187758:
    ctx->pc = 0x7F187758u;
    // 7F187758: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F18775C:
    ctx->pc = 0x7F18775Cu;
    // 7F18775C: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F187760:
    ctx->pc = 0x7F187760u;
    // 7F187760: fsubs   f1, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F187760u)) return;
    ppc_fsubs(ctx, 1, 0, 26);

label_7F187764:
    ctx->pc = 0x7F187764u;
    // 7F187764: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187768:
    // 7F187768: bl      0x800261FC
    {
            ctx->lr = 0x7F18776Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F18776C:
    ctx->pc = 0x7F18776Cu;
    ctx->downcount -= 6;
    // 7F18776C: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187770:
    // 7F187770: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187774:
    // 7F187774: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F187778:
    // 7F187778: add   r3, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F18777C:
    // 7F18777C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187780:
    // 7F187780: bl      0x800261B4
    {
            ctx->lr = 0x7F187784u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187784:
    ctx->downcount -= 1;
    // 7F187784: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187788u;
            goto label_7F1879B0;
    }

label_7F187788:
    ctx->pc = 0x7F187788u;
    ctx->downcount -= 8;
    // 7F187788: lfs     f0, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F187788u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18778C:
    ctx->pc = 0x7F18778Cu;
    // 7F18778C: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187790:
    ctx->pc = 0x7F187790u;
    // 7F187790: fmuls   f2, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F187790u)) return;
    ppc_fmuls(ctx, 2, 0, 27);

label_7F187794:
    // 7F187794: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F187798:
    ctx->pc = 0x7F187798u;
    // 7F187798: lfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F187798u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F18779C:
    ctx->pc = 0x7F18779Cu;
    // 7F18779C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F18779Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1877A0:
    ctx->pc = 0x7F1877A0u;
    // 7F1877A0: stfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1877A0u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1877A4:
    // 7F1877A4: bl      0x7F1879B0
    {
            ctx->lr = 0x7F1877A8u;
            goto label_7F1879B0;
    }

label_7F1877A8:
    ctx->pc = 0x7F1877A8u;
    ctx->downcount -= 9;
    // 7F1877A8: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1877AC:
    ctx->pc = 0x7F1877ACu;
    // 7F1877AC: lfs     f0, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1877ACu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1877B0:
    // 7F1877B0: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1877B4:
    // 7F1877B4: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1877B8:
    ctx->pc = 0x7F1877B8u;
    // 7F1877B8: fmuls   f2, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1877B8u)) return;
    ppc_fmuls(ctx, 2, 0, 27);

label_7F1877BC:
    ctx->pc = 0x7F1877BCu;
    // 7F1877BC: lfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1877BCu)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1877C0:
    ctx->pc = 0x7F1877C0u;
    // 7F1877C0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1877C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1877C4:
    ctx->pc = 0x7F1877C4u;
    // 7F1877C4: stfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1877C4u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1877C8:
    // 7F1877C8: bl      0x7F1879B0
    {
            ctx->lr = 0x7F1877CCu;
            goto label_7F1879B0;
    }

label_7F1877CC:
    ctx->pc = 0x7F1877CCu;
    ctx->downcount -= 9;
    // 7F1877CC: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1877D0:
    ctx->pc = 0x7F1877D0u;
    // 7F1877D0: lfs     f0, 1080(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1877D0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1877D4:
    // 7F1877D4: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1877D8:
    // 7F1877D8: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F1877DC:
    ctx->pc = 0x7F1877DCu;
    // 7F1877DC: fmuls   f2, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1877DCu)) return;
    ppc_fmuls(ctx, 2, 0, 27);

label_7F1877E0:
    ctx->pc = 0x7F1877E0u;
    // 7F1877E0: lfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1877E0u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1877E4:
    ctx->pc = 0x7F1877E4u;
    // 7F1877E4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1877E4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1877E8:
    ctx->pc = 0x7F1877E8u;
    // 7F1877E8: stfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1877E8u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1877EC:
    // 7F1877EC: bl      0x7F1879B0
    {
            ctx->lr = 0x7F1877F0u;
            goto label_7F1879B0;
    }

label_7F1877F0:
    ctx->pc = 0x7F1877F0u;
    ctx->downcount -= 8;
    // 7F1877F0: fmadds f1, f28, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1877F0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[28], ctx->fpr[1], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F1877F4:
    ctx->pc = 0x7F1877F4u;
    // 7F1877F4: lfs     f0, 1084(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1877F4u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1877F8:
    ctx->pc = 0x7F1877F8u;
    // 7F1877F8: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1877FC:
    ctx->pc = 0x7F1877FCu;
    // 7F1877FC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1877FCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F187800:
    // 7F187800: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F187804:
    // 7F187804: addi    r0, r3, 648
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(648);

label_7F187808:
    ctx->pc = 0x7F187808u;
    // 7F187808: stfsx    f0, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F187808u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18780C:
    // 7F18780C: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187810u;
            goto label_7F1879B0;
    }

label_7F187810:
    ctx->pc = 0x7F187810u;
    ctx->downcount -= 3;
    // 7F187810: fmuls   f25, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187810u)) return;
    ppc_fmuls(ctx, 25, 30, 1);

label_7F187814:
    ctx->pc = 0x7F187814u;
    // 7F187814: fadds   f1, f31, f25
    if (!ppc_fp_available_inline(ctx, 0x7F187814u)) return;
    ppc_fadds(ctx, 1, 31, 25);

label_7F187818:
    // 7F187818: bl      0x7F187210
    {
            ctx->lr = 0x7F18781Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187210u;
                return;
            }
            goto label_7F187210;
    }

label_7F18781C:
    ctx->pc = 0x7F18781Cu;
    ctx->downcount -= 6;
    // 7F18781C: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187820:
    // 7F187820: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F187824:
    // 7F187824: addi    r0, r3, 792
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(792);

label_7F187828:
    ctx->pc = 0x7F187828u;
    // 7F187828: stfsx    f1, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F187828u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F18782C:
    ctx->pc = 0x7F18782Cu;
    // 7F18782C: fmr    f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F18782Cu)) return;
    ctx->fpr[1] = ctx->fpr[25];

label_7F187830:
    // 7F187830: bl      0x7F187210
    {
            ctx->lr = 0x7F187834u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187210u;
                return;
            }
            goto label_7F187210;
    }

label_7F187834:
    ctx->pc = 0x7F187834u;
    ctx->downcount -= 39;
    // 7F187834: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187838:
    // 7F187838: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F18783C:
    // 7F18783C: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F187840:
    // 7F187840: addi    r0, r3, 936
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(936);

label_7F187844:
    ctx->pc = 0x7F187844u;
    // 7F187844: stfsx    f1, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F187844u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F187848:
    ctx->pc = 0x7F187848u;
    // 7F187848: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18784C:
    // 7F18784C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F187850:
    // 7F187850: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F187854:
    // 7F187854: add   r5, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F187858:
    ctx->pc = 0x7F187858u;
    // 7F187858: lfs     f1, 648(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187858u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18785C:
    // 7F18785C: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F187860:
    ctx->pc = 0x7F187860u;
    // 7F187860: lfs     f0, 792(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187860u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187864:
    ctx->pc = 0x7F187864u;
    // 7F187864: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187864u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F187868:
    ctx->pc = 0x7F187868u;
    // 7F187868: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187868u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F18786C:
    ctx->pc = 0x7F18786Cu;
    // 7F18786C: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18786Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F187870:
    ctx->pc = 0x7F187870u;
    // 7F187870: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187874:
    ctx->pc = 0x7F187874u;
    // 7F187874: sthx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F187878:
    ctx->pc = 0x7F187878u;
    // 7F187878: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18787C:
    // 7F18787C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F187880:
    // 7F187880: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F187884:
    // 7F187884: add   r5, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F187888:
    ctx->pc = 0x7F187888u;
    // 7F187888: lfs     f1, 648(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187888u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18788C:
    // 7F18788C: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F187890:
    ctx->pc = 0x7F187890u;
    // 7F187890: lfs     f0, 936(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187890u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187894:
    ctx->pc = 0x7F187894u;
    // 7F187894: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187894u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F187898:
    ctx->pc = 0x7F187898u;
    // 7F187898: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187898u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F18789C:
    ctx->pc = 0x7F18789Cu;
    // 7F18789C: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18789Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1878A0:
    ctx->pc = 0x7F1878A0u;
    // 7F1878A0: lwz     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1878A4:
    ctx->pc = 0x7F1878A4u;
    // 7F1878A4: sthx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1878A8:
    ctx->pc = 0x7F1878A8u;
    // 7F1878A8: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1878AC:
    // 7F1878AC: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1878B0:
    // 7F1878B0: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_7F1878B4:
    ctx->pc = 0x7F1878B4u;
    // 7F1878B4: stbx    r4, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1878B8:
    ctx->pc = 0x7F1878B8u;
    // 7F1878B8: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1878BC:
    ctx->pc = 0x7F1878BCu;
    // 7F1878BC: lfs     f0, 1088(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1878BCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1878C0:
    // 7F1878C0: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1878C4:
    // 7F1878C4: addi    r0, r3, 76
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(76);

label_7F1878C8:
    ctx->pc = 0x7F1878C8u;
    // 7F1878C8: stfsx    f0, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1878C8u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1878CC:
    // 7F1878CC: bl      0x7F1879B0
    {
            ctx->lr = 0x7F1878D0u;
            goto label_7F1879B0;
    }

label_7F1878D0:
    ctx->pc = 0x7F1878D0u;
    ctx->downcount -= 8;
    // 7F1878D0: lfs     f0, 1088(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1878D0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1878D4:
    ctx->pc = 0x7F1878D4u;
    // 7F1878D4: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1878D8:
    ctx->pc = 0x7F1878D8u;
    // 7F1878D8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1878D8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1878DC:
    // 7F1878DC: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1878E0:
    // 7F1878E0: addi    r0, r3, 72
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(72);

label_7F1878E4:
    ctx->pc = 0x7F1878E4u;
    // 7F1878E4: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1878E4u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F1878E8:
    ctx->pc = 0x7F1878E8u;
    // 7F1878E8: stfsx    f0, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1878E8u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1878EC:
    // 7F1878EC: bl      0x7F1879B0
    {
            ctx->lr = 0x7F1878F0u;
            goto label_7F1879B0;
    }

label_7F1878F0:
    ctx->pc = 0x7F1878F0u;
    ctx->downcount -= 12;
    // 7F1878F0: lfs     f0, 1088(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F1878F0u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1878F4:
    ctx->pc = 0x7F1878F4u;
    // 7F1878F4: lwz     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1878F8:
    ctx->pc = 0x7F1878F8u;
    // 7F1878F8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1878F8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1878FC:
    // 7F1878FC: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F187900:
    // 7F187900: addi    r0, r3, 80
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(80);

label_7F187904:
    ctx->pc = 0x7F187904u;
    // 7F187904: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187904u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F187908:
    ctx->pc = 0x7F187908u;
    // 7F187908: stfsx    f0, r24, r0
    if (!ppc_fp_available_inline(ctx, 0x7F187908u)) return;
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F18790C:
    ctx->pc = 0x7F18790Cu;
    // 7F18790C: lwz     r3, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187910:
    // 7F187910: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F187914:
    // 7F187914: cmpwi   r0, 36
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F187918:
    ctx->pc = 0x7F187918u;
    // 7F187918: stw     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F18791C:
    // 7F18791C: bc    12, 0, 0x7F187928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187928;
        }
    }

label_7F187920:
    ctx->downcount -= 2;
    // 7F187920: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187924:
    ctx->pc = 0x7F187924u;
    // 7F187924: stw     r0, 1108(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187928:
    ctx->downcount -= 1;
    // 7F187928: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F18792C:
    ctx->downcount -= 2;
    // 7F18792C: cmpw    r29, r30
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F187930:
    // 7F187930: bc    12, 0, 0x7F18771C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18771Cu;
                return;
            }
            goto label_7F18771C;
        }
    }

label_7F187934:
    ctx->pc = 0x7F187934u;
    ctx->downcount -= 33;
    // 7F187934: lwz     r3, 1116(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187938:
    ctx->pc = 0x7F187938u;
    // 7F187938: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F18793C:
    ctx->pc = 0x7F18793Cu;
    // 7F18793C: stw     r0, 1116(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187940:
    ctx->pc = 0x7F187940u;
    // 7F187940: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F187940u);
        if (ctx->exception) return;
    }

label_7F187944:
    ctx->pc = 0x7F187944u;
    // 7F187944: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187948:
    ctx->pc = 0x7F187948u;
    // 7F187948: psq_l   f30, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F187948u);
        if (ctx->exception) return;
    }

label_7F18794C:
    ctx->pc = 0x7F18794Cu;
    // 7F18794C: lfd     f30, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18794Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187950:
    ctx->pc = 0x7F187950u;
    // 7F187950: psq_l   f29, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F187950u);
        if (ctx->exception) return;
    }

label_7F187954:
    ctx->pc = 0x7F187954u;
    // 7F187954: lfd     f29, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187954u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187958:
    ctx->pc = 0x7F187958u;
    // 7F187958: psq_l   f28, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F187958u);
        if (ctx->exception) return;
    }

label_7F18795C:
    ctx->pc = 0x7F18795Cu;
    // 7F18795C: lfd     f28, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18795Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187960:
    ctx->pc = 0x7F187960u;
    // 7F187960: psq_l   f27, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F187960u);
        if (ctx->exception) return;
    }

label_7F187964:
    ctx->pc = 0x7F187964u;
    // 7F187964: lfd     f27, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187968:
    ctx->pc = 0x7F187968u;
    // 7F187968: psq_l   f26, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187968u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F187968u);
        if (ctx->exception) return;
    }

label_7F18796C:
    ctx->pc = 0x7F18796Cu;
    // 7F18796C: lfd     f26, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F18796Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187970:
    ctx->pc = 0x7F187970u;
    // 7F187970: psq_l   f25, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F187970u);
        if (ctx->exception) return;
    }

label_7F187974:
    ctx->pc = 0x7F187974u;
    // 7F187974: lfd     f25, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187978:
    ctx->pc = 0x7F187978u;
    // 7F187978: lmw     r20, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F18797C:
    ctx->pc = 0x7F18797Cu;
    // 7F18797C: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187980:
    ctx->pc = 0x7F187980u;
    // 7F187980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187984:
    ctx->pc = 0x7F187984u;
    // 7F187984: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F187988:
    ctx->pc = 0x7F187988u;
    // 7F187988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F18798C:
    ctx->pc = 0x7F18798Cu;
    ctx->downcount -= 13;
    // 7F18798C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F187990:
    ctx->pc = 0x7F187990u;
    // 7F187990: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F187994:
    ctx->pc = 0x7F187994u;
    // 7F187994: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F187998:
    ctx->pc = 0x7F187998u;
    // 7F187998: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F18799C:
    ctx->pc = 0x7F18799Cu;
    // 7F18799C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1879A0:
    ctx->pc = 0x7F1879A0u;
    // 7F1879A0: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1879A4:
    ctx->pc = 0x7F1879A4u;
    // 7F1879A4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1879A8:
    ctx->pc = 0x7F1879A8u;
    // 7F1879A8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1879AC:
    ctx->pc = 0x7F1879ACu;
    // 7F1879AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F1879B0:
    ctx->pc = 0x7F1879B0u;
    ctx->downcount -= 4;
    // 7F1879B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1879B4:
    ctx->pc = 0x7F1879B4u;
    // 7F1879B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1879B8:
    ctx->pc = 0x7F1879B8u;
    // 7F1879B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1879BC:
    ctx->pc = 0x7F1879BCu;
    // 7F1879BC: bl      0x7F18798C
    {
            ctx->lr = 0x7F1879C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F18798Cu;
                return;
            }
            goto label_7F18798C;
    }

label_7F1879C0:
    ctx->pc = 0x7F1879C0u;
    ctx->downcount -= 35;
    // 7F1879C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1879C4:
    ctx->pc = 0x7F1879C4u;
    // 7F1879C4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1879C8:
    ctx->pc = 0x7F1879C8u;
    // 7F1879C8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1879CC:
    ctx->pc = 0x7F1879CCu;
    // 7F1879CC: addi    r5, r4, 4456
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4456);

label_7F1879D0:
    ctx->pc = 0x7F1879D0u;
    // 7F1879D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1879D4:
    ctx->pc = 0x7F1879D4u;
    // 7F1879D4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1879D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1879D8:
    ctx->pc = 0x7F1879D8u;
    // 7F1879D8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1879DC:
    ctx->pc = 0x7F1879DCu;
    // 7F1879DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1879E0:
    ctx->pc = 0x7F1879E0u;
    // 7F1879E0: lfs     f1, 4452(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1879E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1879E4:
    ctx->pc = 0x7F1879E4u;
    // 7F1879E4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1879E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1879E8:
    ctx->pc = 0x7F1879E8u;
    // 7F1879E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1879EC:
    ctx->pc = 0x7F1879ECu;
    // 7F1879EC: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1879ECu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1879F0:
    ctx->pc = 0x7F1879F0u;
    // 7F1879F0: lfs     f0, 4412(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1879F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1879F4:
    ctx->pc = 0x7F1879F4u;
    // 7F1879F4: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1879F4u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1879F8:
    ctx->pc = 0x7F1879F8u;
    // 7F1879F8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1879F8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1879FC:
    ctx->pc = 0x7F1879FCu;
    // 7F1879FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187A00:
    ctx->pc = 0x7F187A00u;
    // 7F187A00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F187A04:
    ctx->pc = 0x7F187A04u;
    // 7F187A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187A08:
    ctx->pc = 0x7F187A08u;
    ctx->downcount -= 10;
    // 7F187A08: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187A0C:
    ctx->pc = 0x7F187A0Cu;
    // 7F187A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187A10:
    ctx->pc = 0x7F187A10u;
    // 7F187A10: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187A14:
    ctx->pc = 0x7F187A14u;
    // 7F187A14: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F187A18:
    ctx->pc = 0x7F187A18u;
    // 7F187A18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187A1C:
    ctx->pc = 0x7F187A1Cu;
    // 7F187A1C: lwz     r3, 1116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187A20:
    ctx->pc = 0x7F187A20u;
    // 7F187A20: lwz     r0, 1112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187A24:
    ctx->pc = 0x7F187A24u;
    // 7F187A24: subf   r3, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F187A28:
    ctx->pc = 0x7F187A28u;
    // 7F187A28: cmpwi   r3, 120
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

label_7F187A2C:
    ctx->pc = 0x7F187A2Cu;
    // 7F187A2C: bc    4, 0, 0x7F187A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187A40;
        }
    }

label_7F187A30:
    ctx->pc = 0x7F187A30u;
    ctx->downcount -= 43;
    // 7F187A30: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F187A34:
    ctx->pc = 0x7F187A34u;
    // 7F187A34: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F187A38:
    ctx->pc = 0x7F187A38u;
    // 7F187A38: stw     r0, 1120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187A3C:
    ctx->pc = 0x7F187A3Cu;
    // 7F187A3C: b       0x7F187A48
    {
            goto label_7F187A48;
    }

label_7F187A40:
    ctx->pc = 0x7F187A40u;
    ctx->downcount -= 2;
    // 7F187A40: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F187A44:
    ctx->pc = 0x7F187A44u;
    // 7F187A44: stw     r0, 1120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187A48:
    ctx->pc = 0x7F187A48u;
    ctx->downcount -= 4;
    // 7F187A48: lwz     r3, 1116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187A4C:
    ctx->pc = 0x7F187A4Cu;
    // 7F187A4C: lwz     r0, 1112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187A50:
    ctx->pc = 0x7F187A50u;
    // 7F187A50: cmpw    r3, r0
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

label_7F187A54:
    ctx->pc = 0x7F187A54u;
    // 7F187A54: bc    12, 0, 0x7F187A60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187A60;
        }
    }

label_7F187A58:
    ctx->pc = 0x7F187A58u;
    ctx->downcount -= 2;
    // 7F187A58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187A5C:
    ctx->pc = 0x7F187A5Cu;
    // 7F187A5C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F187A60u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F187A60:
    ctx->pc = 0x7F187A60u;
    ctx->downcount -= 3;
    // 7F187A60: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F187A64:
    ctx->pc = 0x7F187A64u;
    // 7F187A64: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F187A68:
    ctx->pc = 0x7F187A68u;
    // 7F187A68: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F187A6Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F187A6C:
    ctx->pc = 0x7F187A6Cu;
    ctx->downcount -= 4;
    // 7F187A6C: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F187A70:
    ctx->pc = 0x7F187A70u;
    // 7F187A70: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187A74:
    ctx->pc = 0x7F187A74u;
    // 7F187A74: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F187A78:
    ctx->pc = 0x7F187A78u;
    // 7F187A78: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F187A7Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F187A7C:
    ctx->pc = 0x7F187A7Cu;
    ctx->downcount -= 20;
    // 7F187A7C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F187A80:
    ctx->pc = 0x7F187A80u;
    // 7F187A80: lfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187A84:
    ctx->pc = 0x7F187A84u;
    // 7F187A84: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187A84u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F187A88:
    ctx->pc = 0x7F187A88u;
    // 7F187A88: bl      0x7F187AE0
    {
            ctx->lr = 0x7F187A8Cu;
            goto label_7F187AE0;
    }

label_7F187A8C:
    ctx->pc = 0x7F187A8Cu;
    ctx->downcount -= 20;
    // 7F187A8C: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F187A90:
    ctx->pc = 0x7F187A90u;
    // 7F187A90: lfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187A94:
    ctx->pc = 0x7F187A94u;
    // 7F187A94: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187A94u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F187A98:
    ctx->pc = 0x7F187A98u;
    // 7F187A98: bl      0x7F187AE0
    {
            ctx->lr = 0x7F187A9Cu;
            goto label_7F187AE0;
    }

label_7F187A9C:
    ctx->pc = 0x7F187A9Cu;
    ctx->downcount -= 6;
    // 7F187A9C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F187AA0:
    ctx->pc = 0x7F187AA0u;
    // 7F187AA0: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F187AA4:
    ctx->pc = 0x7F187AA4u;
    // 7F187AA4: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F187AA8:
    ctx->pc = 0x7F187AA8u;
    // 7F187AA8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F187AAC:
    ctx->pc = 0x7F187AACu;
    // 7F187AAC: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F187AB0:
    ctx->pc = 0x7F187AB0u;
    // 7F187AB0: bl      0x800261D8
    {
            ctx->lr = 0x7F187AB4u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187AB4:
    ctx->pc = 0x7F187AB4u;
    ctx->downcount -= 6;
    // 7F187AB4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187AB8:
    ctx->pc = 0x7F187AB8u;
    // 7F187AB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187ABC:
    ctx->pc = 0x7F187ABCu;
    // 7F187ABC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187AC0:
    ctx->pc = 0x7F187AC0u;
    // 7F187AC0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F187AC4:
    ctx->pc = 0x7F187AC4u;
    // 7F187AC4: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187AC8:
    ctx->pc = 0x7F187AC8u;
    // 7F187AC8: bl      0x7F1872A8
    {
            ctx->lr = 0x7F187ACCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1872A8u;
                return;
            }
            goto label_7F1872A8;
    }

label_7F187ACC:
    ctx->pc = 0x7F187ACCu;
    ctx->downcount -= 6;
    // 7F187ACC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187AD0:
    ctx->pc = 0x7F187AD0u;
    // 7F187AD0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F187AD4:
    ctx->pc = 0x7F187AD4u;
    // 7F187AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187AD8:
    ctx->pc = 0x7F187AD8u;
    // 7F187AD8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F187ADC:
    ctx->pc = 0x7F187ADCu;
    // 7F187ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187AE0:
    ctx->pc = 0x7F187AE0u;
    ctx->downcount -= 8;
    // 7F187AE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187AE4:
    ctx->pc = 0x7F187AE4u;
    // 7F187AE4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187AE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F187AE8:
    ctx->pc = 0x7F187AE8u;
    // 7F187AE8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187AEC:
    ctx->pc = 0x7F187AECu;
    // 7F187AEC: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F187AF0:
    ctx->pc = 0x7F187AF0u;
    // 7F187AF0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187AF4:
    ctx->pc = 0x7F187AF4u;
    // 7F187AF4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F187AF8:
    ctx->pc = 0x7F187AF8u;
    // 7F187AF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F187AFC:
    ctx->pc = 0x7F187AFCu;
    // 7F187AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187B00:
    ctx->pc = 0x7F187B00u;
    ctx->downcount -= 8;
    // 7F187B00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187B04:
    ctx->pc = 0x7F187B04u;
    // 7F187B04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187B08:
    ctx->pc = 0x7F187B08u;
    // 7F187B08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187B0C:
    ctx->pc = 0x7F187B0Cu;
    // 7F187B0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F187B10:
    ctx->pc = 0x7F187B10u;
    // 7F187B10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187B14:
    ctx->pc = 0x7F187B14u;
    // 7F187B14: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187B18:
    ctx->pc = 0x7F187B18u;
    // 7F187B18: cmplwi  r3, 0x0000
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

label_7F187B1C:
    ctx->pc = 0x7F187B1Cu;
    // 7F187B1C: bc    12, 2, 0x7F187B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187B28;
        }
    }

label_7F187B20:
    ctx->pc = 0x7F187B20u;
    ctx->downcount -= 1;
    // 7F187B20: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F187B24u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F187B24:
    ctx->pc = 0x7F187B24u;
    ctx->downcount -= 1;
    // 7F187B24: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F187B28:
    ctx->pc = 0x7F187B28u;
    ctx->downcount -= 6;
    // 7F187B28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187B2C:
    ctx->pc = 0x7F187B2Cu;
    // 7F187B2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F187B30:
    ctx->pc = 0x7F187B30u;
    // 7F187B30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187B34:
    ctx->pc = 0x7F187B34u;
    // 7F187B34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F187B38:
    ctx->pc = 0x7F187B38u;
    // 7F187B38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187B3C:
    ctx->pc = 0x7F187B3Cu;
    ctx->downcount -= 24;
    // 7F187B3C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187B40:
    ctx->pc = 0x7F187B40u;
    // 7F187B40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187B44:
    ctx->pc = 0x7F187B44u;
    // 7F187B44: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187B48:
    ctx->pc = 0x7F187B48u;
    // 7F187B48: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187B48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F187B4C:
    ctx->pc = 0x7F187B4Cu;
    // 7F187B4C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F187B4Cu);
        if (ctx->exception) return;
    }

label_7F187B50:
    ctx->pc = 0x7F187B50u;
    // 7F187B50: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187B50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F187B54:
    ctx->pc = 0x7F187B54u;
    // 7F187B54: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F187B54u);
        if (ctx->exception) return;
    }

label_7F187B58:
    ctx->pc = 0x7F187B58u;
    // 7F187B58: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F187B5C:
    ctx->pc = 0x7F187B5Cu;
    // 7F187B5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187B60:
    ctx->pc = 0x7F187B60u;
    // 7F187B60: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F187B64:
    ctx->pc = 0x7F187B64u;
    // 7F187B64: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187B68:
    ctx->pc = 0x7F187B68u;
    // 7F187B68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187B6C:
    ctx->pc = 0x7F187B6Cu;
    // 7F187B6C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F187B70:
    ctx->pc = 0x7F187B70u;
    // 7F187B70: bl      0x7F3C2534
    {
            ctx->lr = 0x7F187B74u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F187B74:
    ctx->pc = 0x7F187B74u;
    ctx->downcount -= 13;
    // 7F187B74: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F187B78:
    ctx->pc = 0x7F187B78u;
    // 7F187B78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187B7C:
    ctx->pc = 0x7F187B7Cu;
    // 7F187B7C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187B80:
    ctx->pc = 0x7F187B80u;
    // 7F187B80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187B84:
    ctx->pc = 0x7F187B84u;
    // 7F187B84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187B88:
    ctx->pc = 0x7F187B88u;
    // 7F187B88: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F187B8C:
    ctx->pc = 0x7F187B8Cu;
    // 7F187B8C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187B90:
    ctx->pc = 0x7F187B90u;
    // 7F187B90: addi    r30, r5, 12832
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F187B94:
    ctx->pc = 0x7F187B94u;
    // 7F187B94: lfs     f30, 4412(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187B94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F187B98:
    ctx->pc = 0x7F187B98u;
    // 7F187B98: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F187B9C:
    ctx->pc = 0x7F187B9Cu;
    // 7F187B9C: lwz     r28, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F187BA0:
    ctx->pc = 0x7F187BA0u;
    // 7F187BA0: lwz     r27, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F187BA4:
    ctx->pc = 0x7F187BA4u;
    // 7F187BA4: lfs     f31, 4464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187BA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F187BA8:
    ctx->pc = 0x7F187BA8u;
    ctx->downcount -= 15;
    // 7F187BA8: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F187BAC:
    // 7F187BAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F187BB0:
    ctx->pc = 0x7F187BB0u;
    // 7F187BB0: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187BB4:
    // 7F187BB4: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F187BB8:
    ctx->pc = 0x7F187BB8u;
    // 7F187BB8: stw     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F187BBC:
    ctx->pc = 0x7F187BBCu;
    // 7F187BBC: stw     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F187BC0:
    ctx->pc = 0x7F187BC0u;
    // 7F187BC0: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F187BC4:
    ctx->pc = 0x7F187BC4u;
    // 7F187BC4: lwz     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187BC8:
    ctx->pc = 0x7F187BC8u;
    // 7F187BC8: stw     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F187BCC:
    ctx->pc = 0x7F187BCCu;
    // 7F187BCC: stw     r4, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F187BD0:
    ctx->pc = 0x7F187BD0u;
    // 7F187BD0: sth     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F187BD4:
    ctx->pc = 0x7F187BD4u;
    // 7F187BD4: sth     r3, 6(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F187BD8:
    ctx->pc = 0x7F187BD8u;
    // 7F187BD8: sth     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187BDC:
    ctx->pc = 0x7F187BDCu;
    // 7F187BDC: sth     r0, 14(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187BE0:
    // 7F187BE0: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187BE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1879B0u;
                return;
            }
            goto label_7F1879B0;
    }

label_7F187BE4:
    ctx->pc = 0x7F187BE4u;
    ctx->downcount -= 15;
    // 7F187BE4: fadds   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187BE4u)) return;
    ppc_fadds(ctx, 0, 30, 1);

label_7F187BE8:
    // 7F187BE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187BEC:
    ctx->pc = 0x7F187BECu;
    // 7F187BEC: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187BECu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F187BF0:
    ctx->pc = 0x7F187BF0u;
    // 7F187BF0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187BF0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F187BF4:
    ctx->pc = 0x7F187BF4u;
    // 7F187BF4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F187BF8:
    ctx->pc = 0x7F187BF8u;
    // 7F187BF8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187BF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F187BFC:
    ctx->pc = 0x7F187BFCu;
    // 7F187BFC: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187C00:
    ctx->pc = 0x7F187C00u;
    // 7F187C00: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187C00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F187C04:
    ctx->pc = 0x7F187C04u;
    // 7F187C04: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187C08:
    ctx->pc = 0x7F187C08u;
    // 7F187C08: stb     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F187C0C:
    ctx->pc = 0x7F187C0Cu;
    // 7F187C0C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187C10:
    ctx->pc = 0x7F187C10u;
    // 7F187C10: stb     r4, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F187C14:
    ctx->pc = 0x7F187C14u;
    // 7F187C14: stb     r3, 2(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F187C18:
    ctx->pc = 0x7F187C18u;
    // 7F187C18: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F187C1C:
    // 7F187C1C: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187C20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1879B0u;
                return;
            }
            goto label_7F1879B0;
    }

label_7F187C20:
    ctx->downcount -= 1;
    // 7F187C20: bl      0x7F1879B0
    {
            ctx->lr = 0x7F187C24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1879B0u;
                return;
            }
            goto label_7F1879B0;
    }

label_7F187C24:
    ctx->downcount -= 8;
    // 7F187C24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F187C28:
    // 7F187C28: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F187C2C:
    ctx->pc = 0x7F187C2Cu;
    // 7F187C2C: sth     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187C30:
    // 7F187C30: cmpwi   r29, 36
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F187C34:
    // 7F187C34: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F187C38:
    ctx->pc = 0x7F187C38u;
    // 7F187C38: sth     r0, 10(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F187C3C:
    // 7F187C3C: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F187C40:
    // 7F187C40: bc    12, 0, 0x7F187BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187BA8u;
                return;
            }
            goto label_7F187BA8;
        }
    }

label_7F187C44:
    ctx->pc = 0x7F187C44u;
    ctx->downcount -= 4;
    // 7F187C44: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187C48:
    ctx->pc = 0x7F187C48u;
    // 7F187C48: li      r5, 576
    ctx->gpr[5] = (u32)(s32)(576);

label_7F187C4C:
    ctx->pc = 0x7F187C4Cu;
    // 7F187C4C: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187C50:
    ctx->pc = 0x7F187C50u;
    // 7F187C50: bl      0x8000519C
    {
            ctx->lr = 0x7F187C54u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F187C54:
    ctx->pc = 0x7F187C54u;
    ctx->downcount -= 4;
    // 7F187C54: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187C58:
    ctx->pc = 0x7F187C58u;
    // 7F187C58: li      r5, 576
    ctx->gpr[5] = (u32)(s32)(576);

label_7F187C5C:
    ctx->pc = 0x7F187C5Cu;
    // 7F187C5C: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187C60:
    ctx->pc = 0x7F187C60u;
    // 7F187C60: bl      0x8000519C
    {
            ctx->lr = 0x7F187C64u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F187C64:
    ctx->pc = 0x7F187C64u;
    ctx->downcount -= 24;
    // 7F187C64: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187C68:
    ctx->pc = 0x7F187C68u;
    // 7F187C68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F187C6C:
    ctx->pc = 0x7F187C6Cu;
    // 7F187C6C: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F187C70:
    ctx->pc = 0x7F187C70u;
    // 7F187C70: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187C74:
    ctx->pc = 0x7F187C74u;
    // 7F187C74: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F187C74u);
        if (ctx->exception) return;
    }

label_7F187C78:
    ctx->pc = 0x7F187C78u;
    // 7F187C78: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187C78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187C7C:
    ctx->pc = 0x7F187C7Cu;
    // 7F187C7C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F187C7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F187C7Cu);
        if (ctx->exception) return;
    }

label_7F187C80:
    ctx->pc = 0x7F187C80u;
    // 7F187C80: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187C80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187C84:
    ctx->pc = 0x7F187C84u;
    // 7F187C84: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F187C88:
    ctx->pc = 0x7F187C88u;
    // 7F187C88: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187C8C:
    ctx->pc = 0x7F187C8Cu;
    // 7F187C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187C90:
    ctx->pc = 0x7F187C90u;
    // 7F187C90: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F187C94:
    ctx->pc = 0x7F187C94u;
    // 7F187C94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187C98:
    ctx->pc = 0x7F187C98u;
    ctx->downcount -= 75;
    // 7F187C98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187C9C:
    ctx->pc = 0x7F187C9Cu;
    // 7F187C9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187CA0:
    ctx->pc = 0x7F187CA0u;
    // 7F187CA0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F187CA4:
    ctx->pc = 0x7F187CA4u;
    // 7F187CA4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F187CA8:
    ctx->pc = 0x7F187CA8u;
    // 7F187CA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187CAC:
    ctx->pc = 0x7F187CACu;
    // 7F187CAC: lfs     f0, 4400(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F187CACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187CB0:
    ctx->pc = 0x7F187CB0u;
    // 7F187CB0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F187CB4:
    ctx->pc = 0x7F187CB4u;
    // 7F187CB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187CB8:
    ctx->pc = 0x7F187CB8u;
    // 7F187CB8: fmuls   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187CB8u)) return;
    ppc_fmuls(ctx, 2, 0, 1);

label_7F187CBC:
    ctx->pc = 0x7F187CBCu;
    // 7F187CBC: addi    r0, r31, 56
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(56);

label_7F187CC0:
    ctx->pc = 0x7F187CC0u;
    // 7F187CC0: stw     r5, 1112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F187CC4:
    ctx->pc = 0x7F187CC4u;
    // 7F187CC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187CC8:
    ctx->pc = 0x7F187CC8u;
    // 7F187CC8: lfs     f0, 4472(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187CC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F187CCC:
    ctx->pc = 0x7F187CCCu;
    // 7F187CCC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187CD0:
    ctx->pc = 0x7F187CD0u;
    // 7F187CD0: stw     r7, 1116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1116);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F187CD4:
    ctx->pc = 0x7F187CD4u;
    // 7F187CD4: addi    r6, r3, 4412
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(4412);

label_7F187CD8:
    ctx->pc = 0x7F187CD8u;
    // 7F187CD8: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F187CDC:
    ctx->pc = 0x7F187CDCu;
    // 7F187CDC: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187CDCu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F187CE0:
    ctx->pc = 0x7F187CE0u;
    // 7F187CE0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187CE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F187CE4:
    ctx->pc = 0x7F187CE4u;
    // 7F187CE4: addi    r8, r5, 12832
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F187CE8:
    ctx->pc = 0x7F187CE8u;
    // 7F187CE8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F187CEC:
    ctx->pc = 0x7F187CECu;
    // 7F187CEC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F187CF0:
    ctx->pc = 0x7F187CF0u;
    // 7F187CF0: stfs     f3, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187CF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F187CF4:
    ctx->pc = 0x7F187CF4u;
    // 7F187CF4: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187CF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187CF8:
    ctx->pc = 0x7F187CF8u;
    // 7F187CF8: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F187CF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F187CFC:
    ctx->pc = 0x7F187CFCu;
    // 7F187CFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F187D00:
    ctx->pc = 0x7F187D00u;
    // 7F187D00: stfs     f2, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F187D04:
    ctx->pc = 0x7F187D04u;
    // 7F187D04: lfs     f2, 4468(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F187D04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F187D08:
    ctx->pc = 0x7F187D08u;
    // 7F187D08: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F187D0C:
    ctx->pc = 0x7F187D0Cu;
    // 7F187D0C: lfs     f4, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187D0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F187D10:
    ctx->pc = 0x7F187D10u;
    // 7F187D10: addi    r3, r3, 5
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5);

label_7F187D14:
    ctx->pc = 0x7F187D14u;
    // 7F187D14: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F187D14u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F187D18:
    ctx->pc = 0x7F187D18u;
    // 7F187D18: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_7F187D1C:
    ctx->pc = 0x7F187D1Cu;
    // 7F187D1C: stfs     f4, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F187D20:
    ctx->pc = 0x7F187D20u;
    // 7F187D20: stfs     f3, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F187D24:
    ctx->pc = 0x7F187D24u;
    // 7F187D24: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187D28:
    ctx->pc = 0x7F187D28u;
    // 7F187D28: stfs     f1, 1080(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1080);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F187D2C:
    ctx->pc = 0x7F187D2Cu;
    // 7F187D2C: stfs     f1, 1084(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F187D30:
    ctx->pc = 0x7F187D30u;
    // 7F187D30: stfs     f0, 1088(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F187D30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1088);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F187D34:
    ctx->pc = 0x7F187D34u;
    // 7F187D34: stw     r7, 1108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1108);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F187D38:
    ctx->pc = 0x7F187D38u;
    // 7F187D38: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F187D3C:
    ctx->pc = 0x7F187D3Cu;
    // 7F187D3C: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187D40:
    ctx->pc = 0x7F187D40u;
    // 7F187D40: stw     r7, 1092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1092);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F187D44:
    ctx->pc = 0x7F187D44u;
    // 7F187D44: stw     r0, 1096(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187D48:
    ctx->pc = 0x7F187D48u;
    // 7F187D48: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F187D4C:
    ctx->pc = 0x7F187D4Cu;
    // 7F187D4C: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187D50:
    ctx->pc = 0x7F187D50u;
    // 7F187D50: stw     r7, 1100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1100);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F187D54:
    ctx->pc = 0x7F187D54u;
    // 7F187D54: stw     r0, 1104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187D58:
    ctx->pc = 0x7F187D58u;
    // 7F187D58: bl      0x7F3C2408
    {
            ctx->lr = 0x7F187D5Cu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F187D5C:
    ctx->pc = 0x7F187D5Cu;
    ctx->downcount -= 3;
    // 7F187D5C: or.   r30, r3, r3
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

label_7F187D60:
    ctx->pc = 0x7F187D60u;
    // 7F187D60: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F187D64:
    ctx->pc = 0x7F187D64u;
    // 7F187D64: bc    4, 2, 0x7F187D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187D70;
        }
    }

label_7F187D68:
    ctx->pc = 0x7F187D68u;
    ctx->downcount -= 2;
    // 7F187D68: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F187D6C:
    ctx->pc = 0x7F187D6Cu;
    // 7F187D6C: b       0x7F187DA0
    {
            goto label_7F187DA0;
    }

label_7F187D70:
    ctx->pc = 0x7F187D70u;
    ctx->downcount -= 3;
    // 7F187D70: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F187D74:
    ctx->pc = 0x7F187D74u;
    // 7F187D74: addi    r3, r3, -13296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13296);

label_7F187D78:
    ctx->pc = 0x7F187D78u;
    // 7F187D78: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F187D7Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F187D7C:
    ctx->pc = 0x7F187D7Cu;
    ctx->downcount -= 1;
    // 7F187D7C: bl      0x7F3B6420
    {
            ctx->lr = 0x7F187D80u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F187D80:
    ctx->pc = 0x7F187D80u;
    ctx->downcount -= 5;
    // 7F187D80: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187D84:
    ctx->pc = 0x7F187D84u;
    // 7F187D84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187D88:
    ctx->pc = 0x7F187D88u;
    // 7F187D88: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F187D8C:
    ctx->pc = 0x7F187D8Cu;
    // 7F187D8C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F187D90:
    ctx->pc = 0x7F187D90u;
    // 7F187D90: bl      0x7F187B3C
    {
            ctx->lr = 0x7F187D94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187B3Cu;
                return;
            }
            goto label_7F187B3C;
    }

label_7F187D94:
    ctx->pc = 0x7F187D94u;
    ctx->downcount -= 3;
    // 7F187D94: li      r0, 10000
    ctx->gpr[0] = (u32)(s32)(10000);

label_7F187D98:
    ctx->pc = 0x7F187D98u;
    // 7F187D98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F187D9C:
    ctx->pc = 0x7F187D9Cu;
    // 7F187D9C: stw     r0, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187DA0:
    ctx->pc = 0x7F187DA0u;
    ctx->downcount -= 16;
    // 7F187DA0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F187DA4:
    ctx->pc = 0x7F187DA4u;
    // 7F187DA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187DA8:
    ctx->pc = 0x7F187DA8u;
    // 7F187DA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187DAC:
    ctx->pc = 0x7F187DACu;
    // 7F187DAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F187DB0:
    ctx->pc = 0x7F187DB0u;
    // 7F187DB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187DB4:
    ctx->pc = 0x7F187DB4u;
    ctx->downcount -= 23;
    // 7F187DB4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187DB8:
    ctx->pc = 0x7F187DB8u;
    // 7F187DB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187DBC:
    ctx->pc = 0x7F187DBCu;
    // 7F187DBC: li      r5, 1124
    ctx->gpr[5] = (u32)(s32)(1124);

label_7F187DC0:
    ctx->pc = 0x7F187DC0u;
    // 7F187DC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F187DC4:
    ctx->pc = 0x7F187DC4u;
    // 7F187DC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187DC8:
    ctx->pc = 0x7F187DC8u;
    // 7F187DC8: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F187DCC:
    ctx->pc = 0x7F187DCCu;
    // 7F187DCC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F187DCCu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F187DD0:
    ctx->pc = 0x7F187DD0u;
    // 7F187DD0: stmw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F187DD4:
    ctx->pc = 0x7F187DD4u;
    // 7F187DD4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187DD8:
    ctx->pc = 0x7F187DD8u;
    // 7F187DD8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F187DDC:
    ctx->pc = 0x7F187DDCu;
    // 7F187DDC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F187DE0:
    ctx->pc = 0x7F187DE0u;
    // 7F187DE0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F187DE4:
    ctx->pc = 0x7F187DE4u;
    // 7F187DE4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F187DE8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F187DE8:
    ctx->pc = 0x7F187DE8u;
    ctx->downcount -= 2;
    // 7F187DE8: or.   r31, r3, r3
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

label_7F187DEC:
    ctx->pc = 0x7F187DECu;
    // 7F187DEC: bc    12, 2, 0x7F187E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F187E58;
        }
    }

label_7F187DF0:
    ctx->pc = 0x7F187DF0u;
    ctx->downcount -= 5;
    // 7F187DF0: lis     r4, 32536
    ctx->gpr[4] = ((u32)(s32)(32536) << 16);

label_7F187DF4:
    ctx->pc = 0x7F187DF4u;
    // 7F187DF4: lis     r5, 32536
    ctx->gpr[5] = ((u32)(s32)(32536) << 16);

label_7F187DF8:
    ctx->pc = 0x7F187DF8u;
    // 7F187DF8: addi    r4, r4, 31240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31240);

label_7F187DFC:
    ctx->pc = 0x7F187DFCu;
    // 7F187DFC: addi    r5, r5, 31488
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31488);

label_7F187E00:
    ctx->pc = 0x7F187E00u;
    // 7F187E00: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F187E04u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F187E04:
    ctx->pc = 0x7F187E04u;
    ctx->downcount -= 15;
    // 7F187E04: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187E08:
    ctx->pc = 0x7F187E08u;
    // 7F187E08: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F187E0C:
    ctx->pc = 0x7F187E0Cu;
    // 7F187E0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F187E10:
    ctx->pc = 0x7F187E10u;
    // 7F187E10: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F187E10u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F187E14:
    ctx->pc = 0x7F187E14u;
    // 7F187E14: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F187E18:
    ctx->pc = 0x7F187E18u;
    // 7F187E18: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F187E1C:
    ctx->pc = 0x7F187E1Cu;
    // 7F187E1C: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F187E20:
    ctx->pc = 0x7F187E20u;
    // 7F187E20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187E24:
    ctx->pc = 0x7F187E24u;
    // 7F187E24: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F187E28:
    ctx->pc = 0x7F187E28u;
    // 7F187E28: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187E2C:
    ctx->pc = 0x7F187E2Cu;
    // 7F187E2C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F187E30:
    ctx->pc = 0x7F187E30u;
    // 7F187E30: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187E34:
    ctx->pc = 0x7F187E34u;
    // 7F187E34: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187E38:
    ctx->pc = 0x7F187E38u;
    // 7F187E38: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187E3C:
    ctx->pc = 0x7F187E3Cu;
    // 7F187E3C: bl      0x7F187C98
    {
            ctx->lr = 0x7F187E40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F187C98u;
                return;
            }
            goto label_7F187C98;
    }

label_7F187E40:
    ctx->pc = 0x7F187E40u;
    ctx->downcount -= 2;
    // 7F187E40: cmpwi   r3, 0
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

label_7F187E44:
    ctx->pc = 0x7F187E44u;
    // 7F187E44: bc    4, 0, 0x7F187E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F187E58;
        }
    }

label_7F187E48:
    ctx->pc = 0x7F187E48u;
    ctx->downcount -= 2;
    // 7F187E48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187E4C:
    ctx->pc = 0x7F187E4Cu;
    // 7F187E4C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F187E50u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F187E50:
    ctx->pc = 0x7F187E50u;
    ctx->downcount -= 2;
    // 7F187E50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F187E54:
    ctx->pc = 0x7F187E54u;
    // 7F187E54: b       0x7F187E5C
    {
            goto label_7F187E5C;
    }

label_7F187E58:
    ctx->pc = 0x7F187E58u;
    ctx->downcount -= 1;
    // 7F187E58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F187E5C:
    ctx->pc = 0x7F187E5Cu;
    ctx->downcount -= 17;
    // 7F187E5C: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F187E5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F187E60:
    ctx->pc = 0x7F187E60u;
    // 7F187E60: lmw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F187E64:
    ctx->pc = 0x7F187E64u;
    // 7F187E64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187E68:
    ctx->pc = 0x7F187E68u;
    // 7F187E68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F187E6C:
    ctx->pc = 0x7F187E6Cu;
    // 7F187E6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F187E70:
    ctx->pc = 0x7F187E70u;
    // 7F187E70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1840EC;
        }
    }

label_7F187E74:
    ctx->pc = 0x7F187E74u;
    ctx->downcount -= 29;
    // 7F187E74: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F187E78:
    ctx->pc = 0x7F187E78u;
    // 7F187E78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F187E7C:
    ctx->pc = 0x7F187E7Cu;
    // 7F187E7C: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187E80:
    ctx->pc = 0x7F187E80u;
    // 7F187E80: addi    r5, r1, 88
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(88);

label_7F187E84:
    ctx->pc = 0x7F187E84u;
    // 7F187E84: stmw     r22, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F187E88:
    ctx->pc = 0x7F187E88u;
    // 7F187E88: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187E8C:
    ctx->pc = 0x7F187E8Cu;
    // 7F187E8C: addi    r25, r24, 108
    ctx->gpr[25] = ctx->gpr[24] + (u32)(s32)(108);

label_7F187E90:
    ctx->pc = 0x7F187E90u;
    // 7F187E90: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187E94:
    ctx->pc = 0x7F187E94u;
    // 7F187E94: addi    r3, r24, 72
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(72);

label_7F187E98:
    ctx->pc = 0x7F187E98u;
    // 7F187E98: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187E9C:
    ctx->pc = 0x7F187E9Cu;
    // 7F187E9C: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F187EA0:
    ctx->pc = 0x7F187EA0u;
    // 7F187EA0: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187EA4:
    ctx->pc = 0x7F187EA4u;
    // 7F187EA4: lwz     r6, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F187EA8:
    ctx->pc = 0x7F187EA8u;
    // 7F187EA8: lwz     r4, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187EAC:
    ctx->pc = 0x7F187EACu;
    // 7F187EAC: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187EB0:
    ctx->pc = 0x7F187EB0u;
    // 7F187EB0: rlwinm r31, r0, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F187EB4:
    ctx->pc = 0x7F187EB4u;
    // 7F187EB4: add   r6, r6, r31
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F187EB8:
    ctx->pc = 0x7F187EB8u;
    // 7F187EB8: lwz     r26, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F187EBC:
    ctx->pc = 0x7F187EBCu;
    // 7F187EBC: bl      0x800261D8
    {
            ctx->lr = 0x7F187EC0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187EC0:
    ctx->pc = 0x7F187EC0u;
    ctx->downcount -= 4;
    // 7F187EC0: lwz     r3, 88(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187EC4:
    ctx->pc = 0x7F187EC4u;
    // 7F187EC4: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187EC8:
    ctx->pc = 0x7F187EC8u;
    // 7F187EC8: lwz     r4, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187ECC:
    ctx->pc = 0x7F187ECCu;
    // 7F187ECC: bl      0x800261D8
    {
            ctx->lr = 0x7F187ED0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187ED0:
    ctx->pc = 0x7F187ED0u;
    ctx->downcount -= 3;
    // 7F187ED0: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187ED4:
    ctx->pc = 0x7F187ED4u;
    // 7F187ED4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187ED8:
    ctx->pc = 0x7F187ED8u;
    // 7F187ED8: bl      0x7F114F50
    {
            ctx->lr = 0x7F187EDCu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F187EDC:
    ctx->pc = 0x7F187EDCu;
    ctx->downcount -= 3;
    // 7F187EDC: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187EE0:
    ctx->pc = 0x7F187EE0u;
    // 7F187EE0: addi    r4, r1, 88
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(88);

label_7F187EE4:
    ctx->pc = 0x7F187EE4u;
    // 7F187EE4: bl      0x800260DC
    {
            ctx->lr = 0x7F187EE8u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F187EE8:
    ctx->pc = 0x7F187EE8u;
    ctx->downcount -= 3;
    // 7F187EE8: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187EEC:
    ctx->pc = 0x7F187EECu;
    // 7F187EEC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187EF0:
    ctx->pc = 0x7F187EF0u;
    // 7F187EF0: bl      0x800261FC
    {
            ctx->lr = 0x7F187EF4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187EF4:
    ctx->pc = 0x7F187EF4u;
    ctx->downcount -= 4;
    // 7F187EF4: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F187EF8:
    ctx->pc = 0x7F187EF8u;
    // 7F187EF8: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187EFC:
    ctx->pc = 0x7F187EFCu;
    // 7F187EFC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F187F00:
    ctx->pc = 0x7F187F00u;
    // 7F187F00: bl      0x800261D8
    {
            ctx->lr = 0x7F187F04u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187F04:
    ctx->pc = 0x7F187F04u;
    ctx->downcount -= 6;
    // 7F187F04: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187F08:
    ctx->pc = 0x7F187F08u;
    // 7F187F08: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187F0C:
    ctx->pc = 0x7F187F0Cu;
    // 7F187F0C: addi    r5, r4, 4496
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4496);

label_7F187F10:
    ctx->pc = 0x7F187F10u;
    // 7F187F10: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F187F14:
    ctx->pc = 0x7F187F14u;
    // 7F187F14: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F187F14u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F187F18:
    ctx->pc = 0x7F187F18u;
    // 7F187F18: bl      0x800261FC
    {
            ctx->lr = 0x7F187F1Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187F1C:
    ctx->pc = 0x7F187F1Cu;
    ctx->downcount -= 4;
    // 7F187F1C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F187F20:
    ctx->pc = 0x7F187F20u;
    // 7F187F20: lwz     r4, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F187F24:
    ctx->pc = 0x7F187F24u;
    // 7F187F24: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187F28:
    ctx->pc = 0x7F187F28u;
    // 7F187F28: bl      0x800261B4
    {
            ctx->lr = 0x7F187F2Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187F2C:
    ctx->pc = 0x7F187F2Cu;
    ctx->downcount -= 4;
    // 7F187F2C: lwz     r3, 88(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187F30:
    ctx->pc = 0x7F187F30u;
    // 7F187F30: addi    r4, r24, 72
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(72);

label_7F187F34:
    ctx->pc = 0x7F187F34u;
    // 7F187F34: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_7F187F38:
    ctx->pc = 0x7F187F38u;
    // 7F187F38: bl      0x800261D8
    {
            ctx->lr = 0x7F187F3Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F187F3C:
    ctx->pc = 0x7F187F3Cu;
    ctx->downcount -= 3;
    // 7F187F3C: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187F40:
    ctx->pc = 0x7F187F40u;
    // 7F187F40: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F187F44:
    ctx->pc = 0x7F187F44u;
    // 7F187F44: bl      0x800260DC
    {
            ctx->lr = 0x7F187F48u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F187F48:
    ctx->pc = 0x7F187F48u;
    ctx->downcount -= 3;
    // 7F187F48: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F187F4C:
    ctx->pc = 0x7F187F4Cu;
    // 7F187F4C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187F50:
    ctx->pc = 0x7F187F50u;
    // 7F187F50: bl      0x800261FC
    {
            ctx->lr = 0x7F187F54u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187F54:
    ctx->pc = 0x7F187F54u;
    ctx->downcount -= 5;
    // 7F187F54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187F58:
    ctx->pc = 0x7F187F58u;
    // 7F187F58: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F187F5C:
    ctx->pc = 0x7F187F5Cu;
    // 7F187F5C: lfs     f1, 4496(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F187F5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F187F60:
    ctx->pc = 0x7F187F60u;
    // 7F187F60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F187F64:
    ctx->pc = 0x7F187F64u;
    // 7F187F64: bl      0x800261FC
    {
            ctx->lr = 0x7F187F68u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F187F68:
    ctx->pc = 0x7F187F68u;
    ctx->downcount -= 14;
    // 7F187F68: addis   r22, r24, 1
    ctx->gpr[22] = ctx->gpr[24] + ((u32)(s32)(1) << 16);

label_7F187F6C:
    ctx->pc = 0x7F187F6Cu;
    // 7F187F6C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F187F70:
    ctx->pc = 0x7F187F70u;
    // 7F187F70: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F187F74:
    ctx->pc = 0x7F187F74u;
    // 7F187F74: lwz     r3, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187F78:
    ctx->pc = 0x7F187F78u;
    // 7F187F78: srawi r0, r23, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[23];
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

label_7F187F7C:
    ctx->pc = 0x7F187F7Cu;
    // 7F187F7C: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F187F80:
    ctx->pc = 0x7F187F80u;
    // 7F187F80: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F187F84:
    ctx->pc = 0x7F187F84u;
    // 7F187F84: addi    r3, r3, 184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(184);

label_7F187F88:
    ctx->pc = 0x7F187F88u;
    // 7F187F88: lwzx    r3, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187F8C:
    ctx->pc = 0x7F187F8Cu;
    // 7F187F8C: rlwinm r0, r0, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0xFFFFFE00u;
    }

label_7F187F90:
    ctx->pc = 0x7F187F90u;
    // 7F187F90: add   r27, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F187F94:
    ctx->pc = 0x7F187F94u;
    // 7F187F94: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F187F98:
    ctx->pc = 0x7F187F98u;
    // 7F187F98: cmpwi   r30, 0
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

label_7F187F9C:
    ctx->pc = 0x7F187F9Cu;
    // 7F187F9C: bc    4, 2, 0x7F188020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F188020;
        }
    }

label_7F187FA0:
    ctx->pc = 0x7F187FA0u;
    ctx->downcount -= 2;
    // 7F187FA0: cmpwi   r29, 0
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

label_7F187FA4:
    ctx->pc = 0x7F187FA4u;
    // 7F187FA4: bc    4, 2, 0x7F188020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F188020;
        }
    }

label_7F187FA8:
    ctx->pc = 0x7F187FA8u;
    ctx->downcount -= 2;
    // 7F187FA8: cmpwi   r28, 0
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

label_7F187FAC:
    ctx->pc = 0x7F187FACu;
    // 7F187FAC: bc    4, 2, 0x7F188020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F188020;
        }
    }

label_7F187FB0:
    ctx->pc = 0x7F187FB0u;
    ctx->downcount -= 12;
    // 7F187FB0: lwz     r3, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F187FB4:
    ctx->pc = 0x7F187FB4u;
    // 7F187FB4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F187FB8:
    ctx->pc = 0x7F187FB8u;
    // 7F187FB8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F187FBC:
    ctx->pc = 0x7F187FBCu;
    // 7F187FBC: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F187FC0:
    ctx->pc = 0x7F187FC0u;
    // 7F187FC0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187FC4:
    ctx->pc = 0x7F187FC4u;
    // 7F187FC4: stw     r6, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187FC8:
    ctx->pc = 0x7F187FC8u;
    // 7F187FC8: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187FCC:
    ctx->pc = 0x7F187FCCu;
    // 7F187FCC: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F187FD0:
    ctx->pc = 0x7F187FD0u;
    // 7F187FD0: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F187FD4:
    ctx->pc = 0x7F187FD4u;
    // 7F187FD4: stw     r6, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F187FD8:
    ctx->pc = 0x7F187FD8u;
    // 7F187FD8: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F187FDC:
    ctx->pc = 0x7F187FDCu;
    // 7F187FDC: bl      0x800261B4
    {
            ctx->lr = 0x7F187FE0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187FE0:
    ctx->pc = 0x7F187FE0u;
    ctx->downcount -= 4;
    // 7F187FE0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F187FE4:
    ctx->pc = 0x7F187FE4u;
    // 7F187FE4: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F187FE8:
    ctx->pc = 0x7F187FE8u;
    // 7F187FE8: addi    r4, r25, 16
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(16);

label_7F187FEC:
    ctx->pc = 0x7F187FECu;
    // 7F187FEC: bl      0x800261B4
    {
            ctx->lr = 0x7F187FF0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F187FF0:
    ctx->pc = 0x7F187FF0u;
    ctx->downcount -= 6;
    // 7F187FF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F187FF4:
    ctx->pc = 0x7F187FF4u;
    // 7F187FF4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F187FF8:
    ctx->pc = 0x7F187FF8u;
    // 7F187FF8: addi    r5, r4, 4500
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4500);

label_7F187FFC:
    ctx->pc = 0x7F187FFCu;
    // 7F187FFC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F188000:
    ctx->pc = 0x7F188000u;
    // 7F188000: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F188000u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F188004:
    ctx->pc = 0x7F188004u;
    // 7F188004: bl      0x800261FC
    {
            ctx->lr = 0x7F188008u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F188008:
    ctx->pc = 0x7F188008u;
    ctx->downcount -= 5;
    // 7F188008: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18800C:
    ctx->pc = 0x7F18800Cu;
    // 7F18800C: addi    r3, r25, 16
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(16);

label_7F188010:
    ctx->pc = 0x7F188010u;
    // 7F188010: lfs     f1, 4504(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F188010u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F188014:
    ctx->pc = 0x7F188014u;
    // 7F188014: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F188018:
    ctx->pc = 0x7F188018u;
    // 7F188018: bl      0x800261FC
    {
            ctx->lr = 0x7F18801Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F18801C:
    ctx->pc = 0x7F18801Cu;
    ctx->downcount -= 1;
    // 7F18801C: b       0x7F18810C
    {
            ctx->pc = 0x7F18810Cu;
            return;
    }

label_7F188020:
    ctx->pc = 0x7F188020u;
    ctx->downcount -= 2;
    // 7F188020: cmpwi   r30, 0
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

label_7F188024:
    ctx->pc = 0x7F188024u;
    // 7F188024: bc    4, 2, 0x7F18803C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F18803C;
        }
    }

label_7F188028:
    ctx->pc = 0x7F188028u;
    ctx->downcount -= 4;
    // 7F188028: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F18802C:
    ctx->pc = 0x7F18802Cu;
    // 7F18802C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F188030:
    ctx->pc = 0x7F188030u;
    // 7F188030: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F188034:
    ctx->pc = 0x7F188034u;
    // 7F188034: bl      0x800261B4
    {
            ctx->lr = 0x7F188038u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F188038:
    ctx->pc = 0x7F188038u;
    ctx->downcount -= 1;
    // 7F188038: b       0x7F18804C
    {
            goto label_7F18804C;
    }

label_7F18803C:
    ctx->pc = 0x7F18803Cu;
    ctx->downcount -= 4;
    // 7F18803C: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F188040:
    ctx->pc = 0x7F188040u;
    // 7F188040: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F188044:
    ctx->pc = 0x7F188044u;
    // 7F188044: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F188048:
    ctx->pc = 0x7F188048u;
    // 7F188048: bl      0x800261B4
    {
            ctx->lr = 0x7F18804Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F18804C:
    ctx->pc = 0x7F18804Cu;
    ctx->downcount -= 6;
    // 7F18804C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F188050:
    ctx->pc = 0x7F188050u;
    // 7F188050: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F188054:
    ctx->pc = 0x7F188054u;
    // 7F188054: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F188058:
    ctx->pc = 0x7F188058u;
    // 7F188058: addi    r6, r25, 32
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(32);

label_7F18805C:
    ctx->pc = 0x7F18805Cu;
    // 7F18805C: addi    r7, r25, 16
    ctx->gpr[7] = ctx->gpr[25] + (u32)(s32)(16);

label_7F188060:
    ctx->pc = 0x7F188060u;
    // 7F188060: bl      0x7F1881C0
    {
            ctx->lr = 0x7F188064u;
            ctx->pc = 0x7F1881C0u;
            return;
    }

label_7F188064:
    ctx->pc = 0x7F188064u;
    ctx->downcount -= 4;
    // 7F188064: addi    r3, r25, 32
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(32);

label_7F188068:
    ctx->pc = 0x7F188068u;
    // 7F188068: addi    r4, r25, 48
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(48);

label_7F18806C:
    ctx->pc = 0x7F18806Cu;
    // 7F18806C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F188070:
    ctx->pc = 0x7F188070u;
    // 7F188070: bl      0x800261D8
    {
            ctx->lr = 0x7F188074u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F188074:
    ctx->pc = 0x7F188074u;
    ctx->downcount -= 5;
    // 7F188074: addis   r4, r24, 1
    ctx->gpr[4] = ctx->gpr[24] + ((u32)(s32)(1) << 16);

label_7F188078:
    ctx->pc = 0x7F188078u;
    // 7F188078: lwz     r3, 120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F18807C:
    ctx->pc = 0x7F18807Cu;
    // 7F18807C: lwz     r0, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F188080:
    ctx->pc = 0x7F188080u;
    // 7F188080: cmpw    r3, r0
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

label_7F188084:
    ctx->pc = 0x7F188084u;
    // 7F188084: bc    4, 0, 0x7F1880CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1880CC;
        }
    }

label_7F188088:
    ctx->pc = 0x7F188088u;
    ctx->downcount -= 6;
    // 7F188088: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F18808C:
    ctx->pc = 0x7F18808Cu;
    // 7F18808C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F188090:
    ctx->pc = 0x7F188090u;
    // 7F188090: addi    r5, r4, 4508
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4508);

label_7F188094:
    ctx->pc = 0x7F188094u;
    // 7F188094: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F188098:
    ctx->pc = 0x7F188098u;
    // 7F188098: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F188098u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F18809C:
    ctx->pc = 0x7F18809Cu;
    // 7F18809C: bl      0x800261FC
    {
            ctx->lr = 0x7F1880A0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1880A0:
    ctx->pc = 0x7F1880A0u;
    ctx->downcount -= 5;
    // 7F1880A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1880A4:
    ctx->pc = 0x7F1880A4u;
    // 7F1880A4: addi    r3, r25, 16
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(16);

label_7F1880A8:
    ctx->pc = 0x7F1880A8u;
    // 7F1880A8: lfs     f1, 4512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1880A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4512);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1880AC:
    ctx->pc = 0x7F1880ACu;
    // 7F1880AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1880B0:
    ctx->pc = 0x7F1880B0u;
    // 7F1880B0: bl      0x800261FC
    {
            ctx->lr = 0x7F1880B4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1880B4:
    ctx->pc = 0x7F1880B4u;
    ctx->downcount -= 5;
    // 7F1880B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1880B8:
    ctx->pc = 0x7F1880B8u;
    // 7F1880B8: addi    r3, r25, 32
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(32);

label_7F1880BC:
    ctx->pc = 0x7F1880BCu;
    // 7F1880BC: lfs     f1, 4508(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1880BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4508);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1880C0:
    ctx->pc = 0x7F1880C0u;
    // 7F1880C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1880C4:
    ctx->pc = 0x7F1880C4u;
    // 7F1880C4: bl      0x800261FC
    {
            ctx->lr = 0x7F1880C8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1880C8:
    ctx->pc = 0x7F1880C8u;
    ctx->downcount -= 1;
    // 7F1880C8: b       0x7F18810C
    {
            ctx->pc = 0x7F18810Cu;
            return;
    }

label_7F1880CC:
    ctx->pc = 0x7F1880CCu;
    ctx->downcount -= 6;
    // 7F1880CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1880D0:
    ctx->pc = 0x7F1880D0u;
    // 7F1880D0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1880D4:
    ctx->pc = 0x7F1880D4u;
    // 7F1880D4: addi    r5, r4, 4500
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4500);

label_7F1880D8:
    ctx->pc = 0x7F1880D8u;
    // 7F1880D8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1880DC:
    ctx->pc = 0x7F1880DCu;
    // 7F1880DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1880DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1880E0:
    ctx->pc = 0x7F1880E0u;
    // 7F1880E0: bl      0x800261FC
    {
            ctx->lr = 0x7F1880E4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1880E4:
    ctx->pc = 0x7F1880E4u;
    ctx->downcount -= 2;
    // 7F1880E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1880E8:
    ctx->pc = 0x7F1880E8u;
    // 7F1880E8: addi    r3, r25, 16
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(16);

    ctx->pc = 0x7F1880ECu;
    return;
return_dispatch_7F1840EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F184178u: goto label_7F184178;
    case 0x7F1841ACu: goto label_7F1841AC;
    case 0x7F184280u: goto label_7F184280;
    case 0x7F184294u: goto label_7F184294;
    case 0x7F1842B0u: goto label_7F1842B0;
    case 0x7F1842F4u: goto label_7F1842F4;
    case 0x7F184314u: goto label_7F184314;
    case 0x7F1843C4u: goto label_7F1843C4;
    case 0x7F1843D8u: goto label_7F1843D8;
    case 0x7F1843ECu: goto label_7F1843EC;
    case 0x7F184410u: goto label_7F184410;
    case 0x7F184424u: goto label_7F184424;
    case 0x7F184578u: goto label_7F184578;
    case 0x7F184594u: goto label_7F184594;
    case 0x7F184600u: goto label_7F184600;
    case 0x7F184608u: goto label_7F184608;
    case 0x7F184610u: goto label_7F184610;
    case 0x7F184634u: goto label_7F184634;
    case 0x7F1846B8u: goto label_7F1846B8;
    case 0x7F1846CCu: goto label_7F1846CC;
    case 0x7F1846E4u: goto label_7F1846E4;
    case 0x7F184764u: goto label_7F184764;
    case 0x7F18477Cu: goto label_7F18477C;
    case 0x7F1847ACu: goto label_7F1847AC;
    case 0x7F1847C4u: goto label_7F1847C4;
    case 0x7F1847F8u: goto label_7F1847F8;
    case 0x7F18481Cu: goto label_7F18481C;
    case 0x7F184838u: goto label_7F184838;
    case 0x7F184854u: goto label_7F184854;
    case 0x7F184858u: goto label_7F184858;
    case 0x7F1848B0u: goto label_7F1848B0;
    case 0x7F1848F0u: goto label_7F1848F0;
    case 0x7F18490Cu: goto label_7F18490C;
    case 0x7F184924u: goto label_7F184924;
    case 0x7F184940u: goto label_7F184940;
    case 0x7F184954u: goto label_7F184954;
    case 0x7F184970u: goto label_7F184970;
    case 0x7F1849C8u: goto label_7F1849C8;
    case 0x7F184A04u: goto label_7F184A04;
    case 0x7F184B50u: goto label_7F184B50;
    case 0x7F184BA0u: goto label_7F184BA0;
    case 0x7F184BC0u: goto label_7F184BC0;
    case 0x7F184BE4u: goto label_7F184BE4;
    case 0x7F184BF8u: goto label_7F184BF8;
    case 0x7F184BFCu: goto label_7F184BFC;
    case 0x7F184C84u: goto label_7F184C84;
    case 0x7F184C98u: goto label_7F184C98;
    case 0x7F184C9Cu: goto label_7F184C9C;
    case 0x7F184D54u: goto label_7F184D54;
    case 0x7F184D80u: goto label_7F184D80;
    case 0x7F184DC0u: goto label_7F184DC0;
    case 0x7F184DECu: goto label_7F184DEC;
    case 0x7F184E14u: goto label_7F184E14;
    case 0x7F184E3Cu: goto label_7F184E3C;
    case 0x7F184E60u: goto label_7F184E60;
    case 0x7F184E84u: goto label_7F184E84;
    case 0x7F184EBCu: goto label_7F184EBC;
    case 0x7F184EFCu: goto label_7F184EFC;
    case 0x7F184F40u: goto label_7F184F40;
    case 0x7F184F54u: goto label_7F184F54;
    case 0x7F184F58u: goto label_7F184F58;
    case 0x7F185024u: goto label_7F185024;
    case 0x7F18506Cu: goto label_7F18506C;
    case 0x7F1850F4u: goto label_7F1850F4;
    case 0x7F185130u: goto label_7F185130;
    case 0x7F185144u: goto label_7F185144;
    case 0x7F185158u: goto label_7F185158;
    case 0x7F185164u: goto label_7F185164;
    case 0x7F18516Cu: goto label_7F18516C;
    case 0x7F1851ACu: goto label_7F1851AC;
    case 0x7F1851B0u: goto label_7F1851B0;
    case 0x7F1851C8u: goto label_7F1851C8;
    case 0x7F1851F4u: goto label_7F1851F4;
    case 0x7F185200u: goto label_7F185200;
    case 0x7F18530Cu: goto label_7F18530C;
    case 0x7F18531Cu: goto label_7F18531C;
    case 0x7F185330u: goto label_7F185330;
    case 0x7F18535Cu: goto label_7F18535C;
    case 0x7F185360u: goto label_7F185360;
    case 0x7F18536Cu: goto label_7F18536C;
    case 0x7F1853FCu: goto label_7F1853FC;
    case 0x7F18540Cu: goto label_7F18540C;
    case 0x7F185470u: goto label_7F185470;
    case 0x7F185480u: goto label_7F185480;
    case 0x7F185490u: goto label_7F185490;
    case 0x7F185498u: goto label_7F185498;
    case 0x7F1854F0u: goto label_7F1854F0;
    case 0x7F185500u: goto label_7F185500;
    case 0x7F18550Cu: goto label_7F18550C;
    case 0x7F185538u: goto label_7F185538;
    case 0x7F185570u: goto label_7F185570;
    case 0x7F185580u: goto label_7F185580;
    case 0x7F1855A4u: goto label_7F1855A4;
    case 0x7F1855B4u: goto label_7F1855B4;
    case 0x7F1855D4u: goto label_7F1855D4;
    case 0x7F1856C0u: goto label_7F1856C0;
    case 0x7F1856F0u: goto label_7F1856F0;
    case 0x7F185720u: goto label_7F185720;
    case 0x7F185740u: goto label_7F185740;
    case 0x7F185748u: goto label_7F185748;
    case 0x7F18574Cu: goto label_7F18574C;
    case 0x7F1857C4u: goto label_7F1857C4;
    case 0x7F1857E0u: goto label_7F1857E0;
    case 0x7F185820u: goto label_7F185820;
    case 0x7F185830u: goto label_7F185830;
    case 0x7F185878u: goto label_7F185878;
    case 0x7F1858B8u: goto label_7F1858B8;
    case 0x7F1858C4u: goto label_7F1858C4;
    case 0x7F1858D8u: goto label_7F1858D8;
    case 0x7F1858E8u: goto label_7F1858E8;
    case 0x7F185984u: goto label_7F185984;
    case 0x7F1859B4u: goto label_7F1859B4;
    case 0x7F1859F0u: goto label_7F1859F0;
    case 0x7F185A34u: goto label_7F185A34;
    case 0x7F185AB4u: goto label_7F185AB4;
    case 0x7F185AC4u: goto label_7F185AC4;
    case 0x7F185B50u: goto label_7F185B50;
    case 0x7F185B70u: goto label_7F185B70;
    case 0x7F185B74u: goto label_7F185B74;
    case 0x7F185B88u: goto label_7F185B88;
    case 0x7F185BC8u: goto label_7F185BC8;
    case 0x7F185BE4u: goto label_7F185BE4;
    case 0x7F185C18u: goto label_7F185C18;
    case 0x7F185C28u: goto label_7F185C28;
    case 0x7F185C64u: goto label_7F185C64;
    case 0x7F185C6Cu: goto label_7F185C6C;
    case 0x7F185C74u: goto label_7F185C74;
    case 0x7F185C7Cu: goto label_7F185C7C;
    case 0x7F185C8Cu: goto label_7F185C8C;
    case 0x7F185D14u: goto label_7F185D14;
    case 0x7F185D30u: goto label_7F185D30;
    case 0x7F185D54u: goto label_7F185D54;
    case 0x7F185D68u: goto label_7F185D68;
    case 0x7F185D7Cu: goto label_7F185D7C;
    case 0x7F185D98u: goto label_7F185D98;
    case 0x7F185DBCu: goto label_7F185DBC;
    case 0x7F185DC0u: goto label_7F185DC0;
    case 0x7F185DDCu: goto label_7F185DDC;
    case 0x7F185E18u: goto label_7F185E18;
    case 0x7F185E1Cu: goto label_7F185E1C;
    case 0x7F185E38u: goto label_7F185E38;
    case 0x7F185E74u: goto label_7F185E74;
    case 0x7F185E78u: goto label_7F185E78;
    case 0x7F185F4Cu: goto label_7F185F4C;
    case 0x7F185F5Cu: goto label_7F185F5C;
    case 0x7F185F64u: goto label_7F185F64;
    case 0x7F185F74u: goto label_7F185F74;
    case 0x7F185F84u: goto label_7F185F84;
    case 0x7F185FD8u: goto label_7F185FD8;
    case 0x7F185FE8u: goto label_7F185FE8;
    case 0x7F185FF8u: goto label_7F185FF8;
    case 0x7F186010u: goto label_7F186010;
    case 0x7F186020u: goto label_7F186020;
    case 0x7F186030u: goto label_7F186030;
    case 0x7F1860B0u: goto label_7F1860B0;
    case 0x7F1860C0u: goto label_7F1860C0;
    case 0x7F186144u: goto label_7F186144;
    case 0x7F18618Cu: goto label_7F18618C;
    case 0x7F1861F4u: goto label_7F1861F4;
    case 0x7F186250u: goto label_7F186250;
    case 0x7F18626Cu: goto label_7F18626C;
    case 0x7F1862A0u: goto label_7F1862A0;
    case 0x7F1862D0u: goto label_7F1862D0;
    case 0x7F186310u: goto label_7F186310;
    case 0x7F186354u: goto label_7F186354;
    case 0x7F18637Cu: goto label_7F18637C;
    case 0x7F186398u: goto label_7F186398;
    case 0x7F1863B8u: goto label_7F1863B8;
    case 0x7F1863D8u: goto label_7F1863D8;
    case 0x7F1863E0u: goto label_7F1863E0;
    case 0x7F186444u: goto label_7F186444;
    case 0x7F1864A0u: goto label_7F1864A0;
    case 0x7F1864E8u: goto label_7F1864E8;
    case 0x7F1864F8u: goto label_7F1864F8;
    case 0x7F186500u: goto label_7F186500;
    case 0x7F18651Cu: goto label_7F18651C;
    case 0x7F18657Cu: goto label_7F18657C;
    case 0x7F1865BCu: goto label_7F1865BC;
    case 0x7F1865D0u: goto label_7F1865D0;
    case 0x7F186654u: goto label_7F186654;
    case 0x7F186680u: goto label_7F186680;
    case 0x7F186684u: goto label_7F186684;
    case 0x7F186694u: goto label_7F186694;
    case 0x7F186724u: goto label_7F186724;
    case 0x7F186730u: goto label_7F186730;
    case 0x7F1867C8u: goto label_7F1867C8;
    case 0x7F1867D0u: goto label_7F1867D0;
    case 0x7F1867F0u: goto label_7F1867F0;
    case 0x7F1867F4u: goto label_7F1867F4;
    case 0x7F1868D0u: goto label_7F1868D0;
    case 0x7F1868E0u: goto label_7F1868E0;
    case 0x7F1869A4u: goto label_7F1869A4;
    case 0x7F1869C4u: goto label_7F1869C4;
    case 0x7F1869C8u: goto label_7F1869C8;
    case 0x7F1869D8u: goto label_7F1869D8;
    case 0x7F186A60u: goto label_7F186A60;
    case 0x7F186A6Cu: goto label_7F186A6C;
    case 0x7F186B04u: goto label_7F186B04;
    case 0x7F186B0Cu: goto label_7F186B0C;
    case 0x7F186B2Cu: goto label_7F186B2C;
    case 0x7F186B30u: goto label_7F186B30;
    case 0x7F186E1Cu: goto label_7F186E1C;
    case 0x7F186E2Cu: goto label_7F186E2C;
    case 0x7F186EE0u: goto label_7F186EE0;
    case 0x7F186EF0u: goto label_7F186EF0;
    case 0x7F186FC8u: goto label_7F186FC8;
    case 0x7F186FDCu: goto label_7F186FDC;
    case 0x7F186FECu: goto label_7F186FEC;
    case 0x7F186FF8u: goto label_7F186FF8;
    case 0x7F18700Cu: goto label_7F18700C;
    case 0x7F187014u: goto label_7F187014;
    case 0x7F187020u: goto label_7F187020;
    case 0x7F187048u: goto label_7F187048;
    case 0x7F18704Cu: goto label_7F18704C;
    case 0x7F18706Cu: goto label_7F18706C;
    case 0x7F187080u: goto label_7F187080;
    case 0x7F187090u: goto label_7F187090;
    case 0x7F1870C8u: goto label_7F1870C8;
    case 0x7F1870E0u: goto label_7F1870E0;
    case 0x7F187118u: goto label_7F187118;
    case 0x7F187180u: goto label_7F187180;
    case 0x7F18719Cu: goto label_7F18719C;
    case 0x7F1871E0u: goto label_7F1871E0;
    case 0x7F1871F0u: goto label_7F1871F0;
    case 0x7F187298u: goto label_7F187298;
    case 0x7F187378u: goto label_7F187378;
    case 0x7F187450u: goto label_7F187450;
    case 0x7F187460u: goto label_7F187460;
    case 0x7F187474u: goto label_7F187474;
    case 0x7F187488u: goto label_7F187488;
    case 0x7F1875D8u: goto label_7F1875D8;
    case 0x7F187614u: goto label_7F187614;
    case 0x7F187654u: goto label_7F187654;
    case 0x7F187658u: goto label_7F187658;
    case 0x7F18767Cu: goto label_7F18767C;
    case 0x7F18776Cu: goto label_7F18776C;
    case 0x7F187784u: goto label_7F187784;
    case 0x7F187788u: goto label_7F187788;
    case 0x7F1877A8u: goto label_7F1877A8;
    case 0x7F1877CCu: goto label_7F1877CC;
    case 0x7F1877F0u: goto label_7F1877F0;
    case 0x7F187810u: goto label_7F187810;
    case 0x7F18781Cu: goto label_7F18781C;
    case 0x7F187834u: goto label_7F187834;
    case 0x7F1878D0u: goto label_7F1878D0;
    case 0x7F1878F0u: goto label_7F1878F0;
    case 0x7F1879C0u: goto label_7F1879C0;
    case 0x7F187A60u: goto label_7F187A60;
    case 0x7F187A6Cu: goto label_7F187A6C;
    case 0x7F187A7Cu: goto label_7F187A7C;
    case 0x7F187A8Cu: goto label_7F187A8C;
    case 0x7F187A9Cu: goto label_7F187A9C;
    case 0x7F187AB4u: goto label_7F187AB4;
    case 0x7F187ACCu: goto label_7F187ACC;
    case 0x7F187B24u: goto label_7F187B24;
    case 0x7F187B74u: goto label_7F187B74;
    case 0x7F187BE4u: goto label_7F187BE4;
    case 0x7F187C20u: goto label_7F187C20;
    case 0x7F187C24u: goto label_7F187C24;
    case 0x7F187C54u: goto label_7F187C54;
    case 0x7F187C64u: goto label_7F187C64;
    case 0x7F187D5Cu: goto label_7F187D5C;
    case 0x7F187D7Cu: goto label_7F187D7C;
    case 0x7F187D80u: goto label_7F187D80;
    case 0x7F187D94u: goto label_7F187D94;
    case 0x7F187DE8u: goto label_7F187DE8;
    case 0x7F187E04u: goto label_7F187E04;
    case 0x7F187E40u: goto label_7F187E40;
    case 0x7F187E50u: goto label_7F187E50;
    case 0x7F187EC0u: goto label_7F187EC0;
    case 0x7F187ED0u: goto label_7F187ED0;
    case 0x7F187EDCu: goto label_7F187EDC;
    case 0x7F187EE8u: goto label_7F187EE8;
    case 0x7F187EF4u: goto label_7F187EF4;
    case 0x7F187F04u: goto label_7F187F04;
    case 0x7F187F1Cu: goto label_7F187F1C;
    case 0x7F187F2Cu: goto label_7F187F2C;
    case 0x7F187F3Cu: goto label_7F187F3C;
    case 0x7F187F48u: goto label_7F187F48;
    case 0x7F187F54u: goto label_7F187F54;
    case 0x7F187F68u: goto label_7F187F68;
    case 0x7F187FE0u: goto label_7F187FE0;
    case 0x7F187FF0u: goto label_7F187FF0;
    case 0x7F188008u: goto label_7F188008;
    case 0x7F18801Cu: goto label_7F18801C;
    case 0x7F188038u: goto label_7F188038;
    case 0x7F18804Cu: goto label_7F18804C;
    case 0x7F188064u: goto label_7F188064;
    case 0x7F188074u: goto label_7F188074;
    case 0x7F1880A0u: goto label_7F1880A0;
    case 0x7F1880B4u: goto label_7F1880B4;
    case 0x7F1880C8u: goto label_7F1880C8;
    case 0x7F1880E4u: goto label_7F1880E4;
    default: return;
    }
}

