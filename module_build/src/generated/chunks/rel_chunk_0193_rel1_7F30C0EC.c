// DolRecomp output
#include "../generated.h"

static void loop_7F30C930(CPUState* ctx) {
label_7F30C930:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30C930u;
    // 7F30C930: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30C934u;
    // 7F30C934: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30C938u;
    // 7F30C938: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F30C93Cu;
    // 7F30C93C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F30C940: bc    16, 0, 0x7F30C930
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C930u;
                return;
            }
            goto label_7F30C930;
        }
    }

    ctx->pc = 0x7F30C944u;
}

static void loop_7F30E858(CPUState* ctx) {
label_7F30E858:
    ctx->downcount -= 5;
    ctx->pc = 0x7F30E858u;
    // 7F30E858: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F30E85Cu;
    // 7F30E85C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F30E860u;
    // 7F30E860: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F30E864u;
    // 7F30E864: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F30E868: bc    16, 0, 0x7F30E858
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30E858u;
                return;
            }
            goto label_7F30E858;
        }
    }

    ctx->pc = 0x7F30E86Cu;
}

static void loop_7F30ECE0(CPUState* ctx) {
label_7F30ECE0:
    ctx->downcount -= 2;
    ctx->pc = 0x7F30ECE0u;
    // 7F30ECE0: stw     r5, 36(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F30ECE4u;
    // 7F30ECE4: lwz     r10, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    // 7F30ECE8: cmplwi  r10, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[10]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 7F30ECEC: bc    4, 2, 0x7F30ECE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ECE0u;
                return;
            }
            goto label_7F30ECE0;
        }
    }

    ctx->pc = 0x7F30ECF0u;
}

static void loop_7F30EE8C(CPUState* ctx) {
label_7F30EE8C:
    ctx->downcount -= 1;
    // 7F30EE8C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

    ctx->pc = 0x7F30EE90u;
    // 7F30EE90: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F30EE94: cmplwi  r0, 0x0000
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

    // 7F30EE98: bc    4, 2, 0x7F30EE8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EE8Cu;
                return;
            }
            goto label_7F30EE8C;
        }
    }

    ctx->pc = 0x7F30EE9Cu;
}

void func_7F30C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F30C0ECu: goto label_7F30C0EC;
    case 0x7F30C0F0u: goto label_7F30C0F0;
    case 0x7F30C0F4u: goto label_7F30C0F4;
    case 0x7F30C0F8u: goto label_7F30C0F8;
    case 0x7F30C0FCu: goto label_7F30C0FC;
    case 0x7F30C100u: goto label_7F30C100;
    case 0x7F30C104u: goto label_7F30C104;
    case 0x7F30C108u: goto label_7F30C108;
    case 0x7F30C10Cu: goto label_7F30C10C;
    case 0x7F30C110u: goto label_7F30C110;
    case 0x7F30C114u: goto label_7F30C114;
    case 0x7F30C118u: goto label_7F30C118;
    case 0x7F30C11Cu: goto label_7F30C11C;
    case 0x7F30C120u: goto label_7F30C120;
    case 0x7F30C124u: goto label_7F30C124;
    case 0x7F30C128u: goto label_7F30C128;
    case 0x7F30C12Cu: goto label_7F30C12C;
    case 0x7F30C130u: goto label_7F30C130;
    case 0x7F30C134u: goto label_7F30C134;
    case 0x7F30C138u: goto label_7F30C138;
    case 0x7F30C13Cu: goto label_7F30C13C;
    case 0x7F30C140u: goto label_7F30C140;
    case 0x7F30C144u: goto label_7F30C144;
    case 0x7F30C148u: goto label_7F30C148;
    case 0x7F30C14Cu: goto label_7F30C14C;
    case 0x7F30C150u: goto label_7F30C150;
    case 0x7F30C154u: goto label_7F30C154;
    case 0x7F30C158u: goto label_7F30C158;
    case 0x7F30C15Cu: goto label_7F30C15C;
    case 0x7F30C160u: goto label_7F30C160;
    case 0x7F30C164u: goto label_7F30C164;
    case 0x7F30C168u: goto label_7F30C168;
    case 0x7F30C16Cu: goto label_7F30C16C;
    case 0x7F30C170u: goto label_7F30C170;
    case 0x7F30C174u: goto label_7F30C174;
    case 0x7F30C178u: goto label_7F30C178;
    case 0x7F30C17Cu: goto label_7F30C17C;
    case 0x7F30C180u: goto label_7F30C180;
    case 0x7F30C184u: goto label_7F30C184;
    case 0x7F30C188u: goto label_7F30C188;
    case 0x7F30C18Cu: goto label_7F30C18C;
    case 0x7F30C190u: goto label_7F30C190;
    case 0x7F30C194u: goto label_7F30C194;
    case 0x7F30C198u: goto label_7F30C198;
    case 0x7F30C19Cu: goto label_7F30C19C;
    case 0x7F30C1A0u: goto label_7F30C1A0;
    case 0x7F30C1A4u: goto label_7F30C1A4;
    case 0x7F30C1A8u: goto label_7F30C1A8;
    case 0x7F30C1ACu: goto label_7F30C1AC;
    case 0x7F30C1B0u: goto label_7F30C1B0;
    case 0x7F30C1B4u: goto label_7F30C1B4;
    case 0x7F30C1B8u: goto label_7F30C1B8;
    case 0x7F30C1BCu: goto label_7F30C1BC;
    case 0x7F30C1C0u: goto label_7F30C1C0;
    case 0x7F30C1C4u: goto label_7F30C1C4;
    case 0x7F30C1C8u: goto label_7F30C1C8;
    case 0x7F30C1CCu: goto label_7F30C1CC;
    case 0x7F30C1D0u: goto label_7F30C1D0;
    case 0x7F30C1D4u: goto label_7F30C1D4;
    case 0x7F30C1D8u: goto label_7F30C1D8;
    case 0x7F30C1DCu: goto label_7F30C1DC;
    case 0x7F30C1E0u: goto label_7F30C1E0;
    case 0x7F30C1E4u: goto label_7F30C1E4;
    case 0x7F30C1E8u: goto label_7F30C1E8;
    case 0x7F30C1ECu: goto label_7F30C1EC;
    case 0x7F30C1F0u: goto label_7F30C1F0;
    case 0x7F30C1F4u: goto label_7F30C1F4;
    case 0x7F30C1F8u: goto label_7F30C1F8;
    case 0x7F30C1FCu: goto label_7F30C1FC;
    case 0x7F30C200u: goto label_7F30C200;
    case 0x7F30C204u: goto label_7F30C204;
    case 0x7F30C208u: goto label_7F30C208;
    case 0x7F30C20Cu: goto label_7F30C20C;
    case 0x7F30C210u: goto label_7F30C210;
    case 0x7F30C214u: goto label_7F30C214;
    case 0x7F30C218u: goto label_7F30C218;
    case 0x7F30C21Cu: goto label_7F30C21C;
    case 0x7F30C220u: goto label_7F30C220;
    case 0x7F30C224u: goto label_7F30C224;
    case 0x7F30C228u: goto label_7F30C228;
    case 0x7F30C22Cu: goto label_7F30C22C;
    case 0x7F30C230u: goto label_7F30C230;
    case 0x7F30C234u: goto label_7F30C234;
    case 0x7F30C238u: goto label_7F30C238;
    case 0x7F30C23Cu: goto label_7F30C23C;
    case 0x7F30C240u: goto label_7F30C240;
    case 0x7F30C244u: goto label_7F30C244;
    case 0x7F30C248u: goto label_7F30C248;
    case 0x7F30C24Cu: goto label_7F30C24C;
    case 0x7F30C250u: goto label_7F30C250;
    case 0x7F30C254u: goto label_7F30C254;
    case 0x7F30C258u: goto label_7F30C258;
    case 0x7F30C25Cu: goto label_7F30C25C;
    case 0x7F30C260u: goto label_7F30C260;
    case 0x7F30C264u: goto label_7F30C264;
    case 0x7F30C268u: goto label_7F30C268;
    case 0x7F30C26Cu: goto label_7F30C26C;
    case 0x7F30C270u: goto label_7F30C270;
    case 0x7F30C274u: goto label_7F30C274;
    case 0x7F30C278u: goto label_7F30C278;
    case 0x7F30C27Cu: goto label_7F30C27C;
    case 0x7F30C280u: goto label_7F30C280;
    case 0x7F30C284u: goto label_7F30C284;
    case 0x7F30C288u: goto label_7F30C288;
    case 0x7F30C28Cu: goto label_7F30C28C;
    case 0x7F30C290u: goto label_7F30C290;
    case 0x7F30C294u: goto label_7F30C294;
    case 0x7F30C298u: goto label_7F30C298;
    case 0x7F30C29Cu: goto label_7F30C29C;
    case 0x7F30C2A0u: goto label_7F30C2A0;
    case 0x7F30C2A4u: goto label_7F30C2A4;
    case 0x7F30C2A8u: goto label_7F30C2A8;
    case 0x7F30C2ACu: goto label_7F30C2AC;
    case 0x7F30C2B0u: goto label_7F30C2B0;
    case 0x7F30C2B4u: goto label_7F30C2B4;
    case 0x7F30C2B8u: goto label_7F30C2B8;
    case 0x7F30C2BCu: goto label_7F30C2BC;
    case 0x7F30C2C0u: goto label_7F30C2C0;
    case 0x7F30C2C4u: goto label_7F30C2C4;
    case 0x7F30C2C8u: goto label_7F30C2C8;
    case 0x7F30C2CCu: goto label_7F30C2CC;
    case 0x7F30C2D0u: goto label_7F30C2D0;
    case 0x7F30C2D4u: goto label_7F30C2D4;
    case 0x7F30C2D8u: goto label_7F30C2D8;
    case 0x7F30C2DCu: goto label_7F30C2DC;
    case 0x7F30C2E0u: goto label_7F30C2E0;
    case 0x7F30C2E4u: goto label_7F30C2E4;
    case 0x7F30C2E8u: goto label_7F30C2E8;
    case 0x7F30C2ECu: goto label_7F30C2EC;
    case 0x7F30C2F0u: goto label_7F30C2F0;
    case 0x7F30C2F4u: goto label_7F30C2F4;
    case 0x7F30C2F8u: goto label_7F30C2F8;
    case 0x7F30C2FCu: goto label_7F30C2FC;
    case 0x7F30C300u: goto label_7F30C300;
    case 0x7F30C304u: goto label_7F30C304;
    case 0x7F30C308u: goto label_7F30C308;
    case 0x7F30C30Cu: goto label_7F30C30C;
    case 0x7F30C310u: goto label_7F30C310;
    case 0x7F30C314u: goto label_7F30C314;
    case 0x7F30C318u: goto label_7F30C318;
    case 0x7F30C31Cu: goto label_7F30C31C;
    case 0x7F30C320u: goto label_7F30C320;
    case 0x7F30C324u: goto label_7F30C324;
    case 0x7F30C328u: goto label_7F30C328;
    case 0x7F30C32Cu: goto label_7F30C32C;
    case 0x7F30C330u: goto label_7F30C330;
    case 0x7F30C334u: goto label_7F30C334;
    case 0x7F30C338u: goto label_7F30C338;
    case 0x7F30C33Cu: goto label_7F30C33C;
    case 0x7F30C340u: goto label_7F30C340;
    case 0x7F30C344u: goto label_7F30C344;
    case 0x7F30C348u: goto label_7F30C348;
    case 0x7F30C34Cu: goto label_7F30C34C;
    case 0x7F30C350u: goto label_7F30C350;
    case 0x7F30C354u: goto label_7F30C354;
    case 0x7F30C358u: goto label_7F30C358;
    case 0x7F30C35Cu: goto label_7F30C35C;
    case 0x7F30C360u: goto label_7F30C360;
    case 0x7F30C364u: goto label_7F30C364;
    case 0x7F30C368u: goto label_7F30C368;
    case 0x7F30C36Cu: goto label_7F30C36C;
    case 0x7F30C370u: goto label_7F30C370;
    case 0x7F30C374u: goto label_7F30C374;
    case 0x7F30C378u: goto label_7F30C378;
    case 0x7F30C37Cu: goto label_7F30C37C;
    case 0x7F30C380u: goto label_7F30C380;
    case 0x7F30C384u: goto label_7F30C384;
    case 0x7F30C388u: goto label_7F30C388;
    case 0x7F30C38Cu: goto label_7F30C38C;
    case 0x7F30C390u: goto label_7F30C390;
    case 0x7F30C394u: goto label_7F30C394;
    case 0x7F30C398u: goto label_7F30C398;
    case 0x7F30C39Cu: goto label_7F30C39C;
    case 0x7F30C3A0u: goto label_7F30C3A0;
    case 0x7F30C3A4u: goto label_7F30C3A4;
    case 0x7F30C3A8u: goto label_7F30C3A8;
    case 0x7F30C3ACu: goto label_7F30C3AC;
    case 0x7F30C3B0u: goto label_7F30C3B0;
    case 0x7F30C3B4u: goto label_7F30C3B4;
    case 0x7F30C3B8u: goto label_7F30C3B8;
    case 0x7F30C3BCu: goto label_7F30C3BC;
    case 0x7F30C3C0u: goto label_7F30C3C0;
    case 0x7F30C3C4u: goto label_7F30C3C4;
    case 0x7F30C3C8u: goto label_7F30C3C8;
    case 0x7F30C3CCu: goto label_7F30C3CC;
    case 0x7F30C3D0u: goto label_7F30C3D0;
    case 0x7F30C3D4u: goto label_7F30C3D4;
    case 0x7F30C3D8u: goto label_7F30C3D8;
    case 0x7F30C3DCu: goto label_7F30C3DC;
    case 0x7F30C3E0u: goto label_7F30C3E0;
    case 0x7F30C3E4u: goto label_7F30C3E4;
    case 0x7F30C3E8u: goto label_7F30C3E8;
    case 0x7F30C3ECu: goto label_7F30C3EC;
    case 0x7F30C3F0u: goto label_7F30C3F0;
    case 0x7F30C3F4u: goto label_7F30C3F4;
    case 0x7F30C3F8u: goto label_7F30C3F8;
    case 0x7F30C3FCu: goto label_7F30C3FC;
    case 0x7F30C400u: goto label_7F30C400;
    case 0x7F30C404u: goto label_7F30C404;
    case 0x7F30C408u: goto label_7F30C408;
    case 0x7F30C40Cu: goto label_7F30C40C;
    case 0x7F30C410u: goto label_7F30C410;
    case 0x7F30C414u: goto label_7F30C414;
    case 0x7F30C418u: goto label_7F30C418;
    case 0x7F30C41Cu: goto label_7F30C41C;
    case 0x7F30C420u: goto label_7F30C420;
    case 0x7F30C424u: goto label_7F30C424;
    case 0x7F30C428u: goto label_7F30C428;
    case 0x7F30C42Cu: goto label_7F30C42C;
    case 0x7F30C430u: goto label_7F30C430;
    case 0x7F30C434u: goto label_7F30C434;
    case 0x7F30C438u: goto label_7F30C438;
    case 0x7F30C43Cu: goto label_7F30C43C;
    case 0x7F30C440u: goto label_7F30C440;
    case 0x7F30C444u: goto label_7F30C444;
    case 0x7F30C448u: goto label_7F30C448;
    case 0x7F30C44Cu: goto label_7F30C44C;
    case 0x7F30C450u: goto label_7F30C450;
    case 0x7F30C454u: goto label_7F30C454;
    case 0x7F30C458u: goto label_7F30C458;
    case 0x7F30C45Cu: goto label_7F30C45C;
    case 0x7F30C460u: goto label_7F30C460;
    case 0x7F30C464u: goto label_7F30C464;
    case 0x7F30C468u: goto label_7F30C468;
    case 0x7F30C46Cu: goto label_7F30C46C;
    case 0x7F30C470u: goto label_7F30C470;
    case 0x7F30C474u: goto label_7F30C474;
    case 0x7F30C478u: goto label_7F30C478;
    case 0x7F30C47Cu: goto label_7F30C47C;
    case 0x7F30C480u: goto label_7F30C480;
    case 0x7F30C484u: goto label_7F30C484;
    case 0x7F30C488u: goto label_7F30C488;
    case 0x7F30C48Cu: goto label_7F30C48C;
    case 0x7F30C490u: goto label_7F30C490;
    case 0x7F30C494u: goto label_7F30C494;
    case 0x7F30C498u: goto label_7F30C498;
    case 0x7F30C49Cu: goto label_7F30C49C;
    case 0x7F30C4A0u: goto label_7F30C4A0;
    case 0x7F30C4A4u: goto label_7F30C4A4;
    case 0x7F30C4A8u: goto label_7F30C4A8;
    case 0x7F30C4ACu: goto label_7F30C4AC;
    case 0x7F30C4B0u: goto label_7F30C4B0;
    case 0x7F30C4B4u: goto label_7F30C4B4;
    case 0x7F30C4B8u: goto label_7F30C4B8;
    case 0x7F30C4BCu: goto label_7F30C4BC;
    case 0x7F30C4C0u: goto label_7F30C4C0;
    case 0x7F30C4C4u: goto label_7F30C4C4;
    case 0x7F30C4C8u: goto label_7F30C4C8;
    case 0x7F30C4CCu: goto label_7F30C4CC;
    case 0x7F30C4D0u: goto label_7F30C4D0;
    case 0x7F30C4D4u: goto label_7F30C4D4;
    case 0x7F30C4D8u: goto label_7F30C4D8;
    case 0x7F30C4DCu: goto label_7F30C4DC;
    case 0x7F30C4E0u: goto label_7F30C4E0;
    case 0x7F30C4E4u: goto label_7F30C4E4;
    case 0x7F30C4E8u: goto label_7F30C4E8;
    case 0x7F30C4ECu: goto label_7F30C4EC;
    case 0x7F30C4F0u: goto label_7F30C4F0;
    case 0x7F30C4F4u: goto label_7F30C4F4;
    case 0x7F30C4F8u: goto label_7F30C4F8;
    case 0x7F30C4FCu: goto label_7F30C4FC;
    case 0x7F30C500u: goto label_7F30C500;
    case 0x7F30C504u: goto label_7F30C504;
    case 0x7F30C508u: goto label_7F30C508;
    case 0x7F30C50Cu: goto label_7F30C50C;
    case 0x7F30C510u: goto label_7F30C510;
    case 0x7F30C514u: goto label_7F30C514;
    case 0x7F30C518u: goto label_7F30C518;
    case 0x7F30C51Cu: goto label_7F30C51C;
    case 0x7F30C520u: goto label_7F30C520;
    case 0x7F30C524u: goto label_7F30C524;
    case 0x7F30C528u: goto label_7F30C528;
    case 0x7F30C52Cu: goto label_7F30C52C;
    case 0x7F30C530u: goto label_7F30C530;
    case 0x7F30C534u: goto label_7F30C534;
    case 0x7F30C538u: goto label_7F30C538;
    case 0x7F30C53Cu: goto label_7F30C53C;
    case 0x7F30C540u: goto label_7F30C540;
    case 0x7F30C544u: goto label_7F30C544;
    case 0x7F30C548u: goto label_7F30C548;
    case 0x7F30C54Cu: goto label_7F30C54C;
    case 0x7F30C550u: goto label_7F30C550;
    case 0x7F30C554u: goto label_7F30C554;
    case 0x7F30C558u: goto label_7F30C558;
    case 0x7F30C55Cu: goto label_7F30C55C;
    case 0x7F30C560u: goto label_7F30C560;
    case 0x7F30C564u: goto label_7F30C564;
    case 0x7F30C568u: goto label_7F30C568;
    case 0x7F30C56Cu: goto label_7F30C56C;
    case 0x7F30C570u: goto label_7F30C570;
    case 0x7F30C574u: goto label_7F30C574;
    case 0x7F30C578u: goto label_7F30C578;
    case 0x7F30C57Cu: goto label_7F30C57C;
    case 0x7F30C580u: goto label_7F30C580;
    case 0x7F30C584u: goto label_7F30C584;
    case 0x7F30C588u: goto label_7F30C588;
    case 0x7F30C58Cu: goto label_7F30C58C;
    case 0x7F30C590u: goto label_7F30C590;
    case 0x7F30C594u: goto label_7F30C594;
    case 0x7F30C598u: goto label_7F30C598;
    case 0x7F30C59Cu: goto label_7F30C59C;
    case 0x7F30C5A0u: goto label_7F30C5A0;
    case 0x7F30C5A4u: goto label_7F30C5A4;
    case 0x7F30C5A8u: goto label_7F30C5A8;
    case 0x7F30C5ACu: goto label_7F30C5AC;
    case 0x7F30C5B0u: goto label_7F30C5B0;
    case 0x7F30C5B4u: goto label_7F30C5B4;
    case 0x7F30C5B8u: goto label_7F30C5B8;
    case 0x7F30C5BCu: goto label_7F30C5BC;
    case 0x7F30C5C0u: goto label_7F30C5C0;
    case 0x7F30C5C4u: goto label_7F30C5C4;
    case 0x7F30C5C8u: goto label_7F30C5C8;
    case 0x7F30C5CCu: goto label_7F30C5CC;
    case 0x7F30C5D0u: goto label_7F30C5D0;
    case 0x7F30C5D4u: goto label_7F30C5D4;
    case 0x7F30C5D8u: goto label_7F30C5D8;
    case 0x7F30C5DCu: goto label_7F30C5DC;
    case 0x7F30C5E0u: goto label_7F30C5E0;
    case 0x7F30C5E4u: goto label_7F30C5E4;
    case 0x7F30C5E8u: goto label_7F30C5E8;
    case 0x7F30C5ECu: goto label_7F30C5EC;
    case 0x7F30C5F0u: goto label_7F30C5F0;
    case 0x7F30C5F4u: goto label_7F30C5F4;
    case 0x7F30C5F8u: goto label_7F30C5F8;
    case 0x7F30C5FCu: goto label_7F30C5FC;
    case 0x7F30C600u: goto label_7F30C600;
    case 0x7F30C604u: goto label_7F30C604;
    case 0x7F30C608u: goto label_7F30C608;
    case 0x7F30C60Cu: goto label_7F30C60C;
    case 0x7F30C610u: goto label_7F30C610;
    case 0x7F30C614u: goto label_7F30C614;
    case 0x7F30C618u: goto label_7F30C618;
    case 0x7F30C61Cu: goto label_7F30C61C;
    case 0x7F30C620u: goto label_7F30C620;
    case 0x7F30C624u: goto label_7F30C624;
    case 0x7F30C628u: goto label_7F30C628;
    case 0x7F30C62Cu: goto label_7F30C62C;
    case 0x7F30C630u: goto label_7F30C630;
    case 0x7F30C634u: goto label_7F30C634;
    case 0x7F30C638u: goto label_7F30C638;
    case 0x7F30C63Cu: goto label_7F30C63C;
    case 0x7F30C640u: goto label_7F30C640;
    case 0x7F30C644u: goto label_7F30C644;
    case 0x7F30C648u: goto label_7F30C648;
    case 0x7F30C64Cu: goto label_7F30C64C;
    case 0x7F30C650u: goto label_7F30C650;
    case 0x7F30C654u: goto label_7F30C654;
    case 0x7F30C658u: goto label_7F30C658;
    case 0x7F30C65Cu: goto label_7F30C65C;
    case 0x7F30C660u: goto label_7F30C660;
    case 0x7F30C664u: goto label_7F30C664;
    case 0x7F30C668u: goto label_7F30C668;
    case 0x7F30C66Cu: goto label_7F30C66C;
    case 0x7F30C670u: goto label_7F30C670;
    case 0x7F30C674u: goto label_7F30C674;
    case 0x7F30C678u: goto label_7F30C678;
    case 0x7F30C67Cu: goto label_7F30C67C;
    case 0x7F30C680u: goto label_7F30C680;
    case 0x7F30C684u: goto label_7F30C684;
    case 0x7F30C688u: goto label_7F30C688;
    case 0x7F30C68Cu: goto label_7F30C68C;
    case 0x7F30C690u: goto label_7F30C690;
    case 0x7F30C694u: goto label_7F30C694;
    case 0x7F30C698u: goto label_7F30C698;
    case 0x7F30C69Cu: goto label_7F30C69C;
    case 0x7F30C6A0u: goto label_7F30C6A0;
    case 0x7F30C6A4u: goto label_7F30C6A4;
    case 0x7F30C6A8u: goto label_7F30C6A8;
    case 0x7F30C6ACu: goto label_7F30C6AC;
    case 0x7F30C6B0u: goto label_7F30C6B0;
    case 0x7F30C6B4u: goto label_7F30C6B4;
    case 0x7F30C6B8u: goto label_7F30C6B8;
    case 0x7F30C6BCu: goto label_7F30C6BC;
    case 0x7F30C6C0u: goto label_7F30C6C0;
    case 0x7F30C6C4u: goto label_7F30C6C4;
    case 0x7F30C6C8u: goto label_7F30C6C8;
    case 0x7F30C6CCu: goto label_7F30C6CC;
    case 0x7F30C6D0u: goto label_7F30C6D0;
    case 0x7F30C6D4u: goto label_7F30C6D4;
    case 0x7F30C6D8u: goto label_7F30C6D8;
    case 0x7F30C6DCu: goto label_7F30C6DC;
    case 0x7F30C6E0u: goto label_7F30C6E0;
    case 0x7F30C6E4u: goto label_7F30C6E4;
    case 0x7F30C6E8u: goto label_7F30C6E8;
    case 0x7F30C6ECu: goto label_7F30C6EC;
    case 0x7F30C6F0u: goto label_7F30C6F0;
    case 0x7F30C6F4u: goto label_7F30C6F4;
    case 0x7F30C6F8u: goto label_7F30C6F8;
    case 0x7F30C6FCu: goto label_7F30C6FC;
    case 0x7F30C700u: goto label_7F30C700;
    case 0x7F30C704u: goto label_7F30C704;
    case 0x7F30C708u: goto label_7F30C708;
    case 0x7F30C70Cu: goto label_7F30C70C;
    case 0x7F30C710u: goto label_7F30C710;
    case 0x7F30C714u: goto label_7F30C714;
    case 0x7F30C718u: goto label_7F30C718;
    case 0x7F30C71Cu: goto label_7F30C71C;
    case 0x7F30C720u: goto label_7F30C720;
    case 0x7F30C724u: goto label_7F30C724;
    case 0x7F30C728u: goto label_7F30C728;
    case 0x7F30C72Cu: goto label_7F30C72C;
    case 0x7F30C730u: goto label_7F30C730;
    case 0x7F30C734u: goto label_7F30C734;
    case 0x7F30C738u: goto label_7F30C738;
    case 0x7F30C73Cu: goto label_7F30C73C;
    case 0x7F30C740u: goto label_7F30C740;
    case 0x7F30C744u: goto label_7F30C744;
    case 0x7F30C748u: goto label_7F30C748;
    case 0x7F30C74Cu: goto label_7F30C74C;
    case 0x7F30C750u: goto label_7F30C750;
    case 0x7F30C754u: goto label_7F30C754;
    case 0x7F30C758u: goto label_7F30C758;
    case 0x7F30C75Cu: goto label_7F30C75C;
    case 0x7F30C760u: goto label_7F30C760;
    case 0x7F30C764u: goto label_7F30C764;
    case 0x7F30C768u: goto label_7F30C768;
    case 0x7F30C76Cu: goto label_7F30C76C;
    case 0x7F30C770u: goto label_7F30C770;
    case 0x7F30C774u: goto label_7F30C774;
    case 0x7F30C778u: goto label_7F30C778;
    case 0x7F30C77Cu: goto label_7F30C77C;
    case 0x7F30C780u: goto label_7F30C780;
    case 0x7F30C784u: goto label_7F30C784;
    case 0x7F30C788u: goto label_7F30C788;
    case 0x7F30C78Cu: goto label_7F30C78C;
    case 0x7F30C790u: goto label_7F30C790;
    case 0x7F30C794u: goto label_7F30C794;
    case 0x7F30C798u: goto label_7F30C798;
    case 0x7F30C79Cu: goto label_7F30C79C;
    case 0x7F30C7A0u: goto label_7F30C7A0;
    case 0x7F30C7A4u: goto label_7F30C7A4;
    case 0x7F30C7A8u: goto label_7F30C7A8;
    case 0x7F30C7ACu: goto label_7F30C7AC;
    case 0x7F30C7B0u: goto label_7F30C7B0;
    case 0x7F30C7B4u: goto label_7F30C7B4;
    case 0x7F30C7B8u: goto label_7F30C7B8;
    case 0x7F30C7BCu: goto label_7F30C7BC;
    case 0x7F30C7C0u: goto label_7F30C7C0;
    case 0x7F30C7C4u: goto label_7F30C7C4;
    case 0x7F30C7C8u: goto label_7F30C7C8;
    case 0x7F30C7CCu: goto label_7F30C7CC;
    case 0x7F30C7D0u: goto label_7F30C7D0;
    case 0x7F30C7D4u: goto label_7F30C7D4;
    case 0x7F30C7D8u: goto label_7F30C7D8;
    case 0x7F30C7DCu: goto label_7F30C7DC;
    case 0x7F30C7E0u: goto label_7F30C7E0;
    case 0x7F30C7E4u: goto label_7F30C7E4;
    case 0x7F30C7E8u: goto label_7F30C7E8;
    case 0x7F30C7ECu: goto label_7F30C7EC;
    case 0x7F30C7F0u: goto label_7F30C7F0;
    case 0x7F30C7F4u: goto label_7F30C7F4;
    case 0x7F30C7F8u: goto label_7F30C7F8;
    case 0x7F30C7FCu: goto label_7F30C7FC;
    case 0x7F30C800u: goto label_7F30C800;
    case 0x7F30C804u: goto label_7F30C804;
    case 0x7F30C808u: goto label_7F30C808;
    case 0x7F30C80Cu: goto label_7F30C80C;
    case 0x7F30C810u: goto label_7F30C810;
    case 0x7F30C814u: goto label_7F30C814;
    case 0x7F30C818u: goto label_7F30C818;
    case 0x7F30C81Cu: goto label_7F30C81C;
    case 0x7F30C820u: goto label_7F30C820;
    case 0x7F30C824u: goto label_7F30C824;
    case 0x7F30C828u: goto label_7F30C828;
    case 0x7F30C82Cu: goto label_7F30C82C;
    case 0x7F30C830u: goto label_7F30C830;
    case 0x7F30C834u: goto label_7F30C834;
    case 0x7F30C838u: goto label_7F30C838;
    case 0x7F30C83Cu: goto label_7F30C83C;
    case 0x7F30C840u: goto label_7F30C840;
    case 0x7F30C844u: goto label_7F30C844;
    case 0x7F30C848u: goto label_7F30C848;
    case 0x7F30C84Cu: goto label_7F30C84C;
    case 0x7F30C850u: goto label_7F30C850;
    case 0x7F30C854u: goto label_7F30C854;
    case 0x7F30C858u: goto label_7F30C858;
    case 0x7F30C85Cu: goto label_7F30C85C;
    case 0x7F30C860u: goto label_7F30C860;
    case 0x7F30C864u: goto label_7F30C864;
    case 0x7F30C868u: goto label_7F30C868;
    case 0x7F30C86Cu: goto label_7F30C86C;
    case 0x7F30C870u: goto label_7F30C870;
    case 0x7F30C874u: goto label_7F30C874;
    case 0x7F30C878u: goto label_7F30C878;
    case 0x7F30C87Cu: goto label_7F30C87C;
    case 0x7F30C880u: goto label_7F30C880;
    case 0x7F30C884u: goto label_7F30C884;
    case 0x7F30C888u: goto label_7F30C888;
    case 0x7F30C88Cu: goto label_7F30C88C;
    case 0x7F30C890u: goto label_7F30C890;
    case 0x7F30C894u: goto label_7F30C894;
    case 0x7F30C898u: goto label_7F30C898;
    case 0x7F30C89Cu: goto label_7F30C89C;
    case 0x7F30C8A0u: goto label_7F30C8A0;
    case 0x7F30C8A4u: goto label_7F30C8A4;
    case 0x7F30C8A8u: goto label_7F30C8A8;
    case 0x7F30C8ACu: goto label_7F30C8AC;
    case 0x7F30C8B0u: goto label_7F30C8B0;
    case 0x7F30C8B4u: goto label_7F30C8B4;
    case 0x7F30C8B8u: goto label_7F30C8B8;
    case 0x7F30C8BCu: goto label_7F30C8BC;
    case 0x7F30C8C0u: goto label_7F30C8C0;
    case 0x7F30C8C4u: goto label_7F30C8C4;
    case 0x7F30C8C8u: goto label_7F30C8C8;
    case 0x7F30C8CCu: goto label_7F30C8CC;
    case 0x7F30C8D0u: goto label_7F30C8D0;
    case 0x7F30C8D4u: goto label_7F30C8D4;
    case 0x7F30C8D8u: goto label_7F30C8D8;
    case 0x7F30C8DCu: goto label_7F30C8DC;
    case 0x7F30C8E0u: goto label_7F30C8E0;
    case 0x7F30C8E4u: goto label_7F30C8E4;
    case 0x7F30C8E8u: goto label_7F30C8E8;
    case 0x7F30C8ECu: goto label_7F30C8EC;
    case 0x7F30C8F0u: goto label_7F30C8F0;
    case 0x7F30C8F4u: goto label_7F30C8F4;
    case 0x7F30C8F8u: goto label_7F30C8F8;
    case 0x7F30C8FCu: goto label_7F30C8FC;
    case 0x7F30C900u: goto label_7F30C900;
    case 0x7F30C904u: goto label_7F30C904;
    case 0x7F30C908u: goto label_7F30C908;
    case 0x7F30C90Cu: goto label_7F30C90C;
    case 0x7F30C910u: goto label_7F30C910;
    case 0x7F30C914u: goto label_7F30C914;
    case 0x7F30C918u: goto label_7F30C918;
    case 0x7F30C91Cu: goto label_7F30C91C;
    case 0x7F30C920u: goto label_7F30C920;
    case 0x7F30C924u: goto label_7F30C924;
    case 0x7F30C928u: goto label_7F30C928;
    case 0x7F30C92Cu: goto label_7F30C92C;
    case 0x7F30C930u: goto label_7F30C930;
    case 0x7F30C934u: goto label_7F30C934;
    case 0x7F30C938u: goto label_7F30C938;
    case 0x7F30C93Cu: goto label_7F30C93C;
    case 0x7F30C940u: goto label_7F30C940;
    case 0x7F30C944u: goto label_7F30C944;
    case 0x7F30C948u: goto label_7F30C948;
    case 0x7F30C94Cu: goto label_7F30C94C;
    case 0x7F30C950u: goto label_7F30C950;
    case 0x7F30C954u: goto label_7F30C954;
    case 0x7F30C958u: goto label_7F30C958;
    case 0x7F30C95Cu: goto label_7F30C95C;
    case 0x7F30C960u: goto label_7F30C960;
    case 0x7F30C964u: goto label_7F30C964;
    case 0x7F30C968u: goto label_7F30C968;
    case 0x7F30C96Cu: goto label_7F30C96C;
    case 0x7F30C970u: goto label_7F30C970;
    case 0x7F30C974u: goto label_7F30C974;
    case 0x7F30C978u: goto label_7F30C978;
    case 0x7F30C97Cu: goto label_7F30C97C;
    case 0x7F30C980u: goto label_7F30C980;
    case 0x7F30C984u: goto label_7F30C984;
    case 0x7F30C988u: goto label_7F30C988;
    case 0x7F30C98Cu: goto label_7F30C98C;
    case 0x7F30C990u: goto label_7F30C990;
    case 0x7F30C994u: goto label_7F30C994;
    case 0x7F30C998u: goto label_7F30C998;
    case 0x7F30C99Cu: goto label_7F30C99C;
    case 0x7F30C9A0u: goto label_7F30C9A0;
    case 0x7F30C9A4u: goto label_7F30C9A4;
    case 0x7F30C9A8u: goto label_7F30C9A8;
    case 0x7F30C9ACu: goto label_7F30C9AC;
    case 0x7F30C9B0u: goto label_7F30C9B0;
    case 0x7F30C9B4u: goto label_7F30C9B4;
    case 0x7F30C9B8u: goto label_7F30C9B8;
    case 0x7F30C9BCu: goto label_7F30C9BC;
    case 0x7F30C9C0u: goto label_7F30C9C0;
    case 0x7F30C9C4u: goto label_7F30C9C4;
    case 0x7F30C9C8u: goto label_7F30C9C8;
    case 0x7F30C9CCu: goto label_7F30C9CC;
    case 0x7F30C9D0u: goto label_7F30C9D0;
    case 0x7F30C9D4u: goto label_7F30C9D4;
    case 0x7F30C9D8u: goto label_7F30C9D8;
    case 0x7F30C9DCu: goto label_7F30C9DC;
    case 0x7F30C9E0u: goto label_7F30C9E0;
    case 0x7F30C9E4u: goto label_7F30C9E4;
    case 0x7F30C9E8u: goto label_7F30C9E8;
    case 0x7F30C9ECu: goto label_7F30C9EC;
    case 0x7F30C9F0u: goto label_7F30C9F0;
    case 0x7F30C9F4u: goto label_7F30C9F4;
    case 0x7F30C9F8u: goto label_7F30C9F8;
    case 0x7F30C9FCu: goto label_7F30C9FC;
    case 0x7F30CA00u: goto label_7F30CA00;
    case 0x7F30CA04u: goto label_7F30CA04;
    case 0x7F30CA08u: goto label_7F30CA08;
    case 0x7F30CA0Cu: goto label_7F30CA0C;
    case 0x7F30CA10u: goto label_7F30CA10;
    case 0x7F30CA14u: goto label_7F30CA14;
    case 0x7F30CA18u: goto label_7F30CA18;
    case 0x7F30CA1Cu: goto label_7F30CA1C;
    case 0x7F30CA20u: goto label_7F30CA20;
    case 0x7F30CA24u: goto label_7F30CA24;
    case 0x7F30CA28u: goto label_7F30CA28;
    case 0x7F30CA2Cu: goto label_7F30CA2C;
    case 0x7F30CA30u: goto label_7F30CA30;
    case 0x7F30CA34u: goto label_7F30CA34;
    case 0x7F30CA38u: goto label_7F30CA38;
    case 0x7F30CA3Cu: goto label_7F30CA3C;
    case 0x7F30CA40u: goto label_7F30CA40;
    case 0x7F30CA44u: goto label_7F30CA44;
    case 0x7F30CA48u: goto label_7F30CA48;
    case 0x7F30CA4Cu: goto label_7F30CA4C;
    case 0x7F30CA50u: goto label_7F30CA50;
    case 0x7F30CA54u: goto label_7F30CA54;
    case 0x7F30CA58u: goto label_7F30CA58;
    case 0x7F30CA5Cu: goto label_7F30CA5C;
    case 0x7F30CA60u: goto label_7F30CA60;
    case 0x7F30CA64u: goto label_7F30CA64;
    case 0x7F30CA68u: goto label_7F30CA68;
    case 0x7F30CA6Cu: goto label_7F30CA6C;
    case 0x7F30CA70u: goto label_7F30CA70;
    case 0x7F30CA74u: goto label_7F30CA74;
    case 0x7F30CA78u: goto label_7F30CA78;
    case 0x7F30CA7Cu: goto label_7F30CA7C;
    case 0x7F30CA80u: goto label_7F30CA80;
    case 0x7F30CA84u: goto label_7F30CA84;
    case 0x7F30CA88u: goto label_7F30CA88;
    case 0x7F30CA8Cu: goto label_7F30CA8C;
    case 0x7F30CA90u: goto label_7F30CA90;
    case 0x7F30CA94u: goto label_7F30CA94;
    case 0x7F30CA98u: goto label_7F30CA98;
    case 0x7F30CA9Cu: goto label_7F30CA9C;
    case 0x7F30CAA0u: goto label_7F30CAA0;
    case 0x7F30CAA4u: goto label_7F30CAA4;
    case 0x7F30CAA8u: goto label_7F30CAA8;
    case 0x7F30CAACu: goto label_7F30CAAC;
    case 0x7F30CAB0u: goto label_7F30CAB0;
    case 0x7F30CAB4u: goto label_7F30CAB4;
    case 0x7F30CAB8u: goto label_7F30CAB8;
    case 0x7F30CABCu: goto label_7F30CABC;
    case 0x7F30CAC0u: goto label_7F30CAC0;
    case 0x7F30CAC4u: goto label_7F30CAC4;
    case 0x7F30CAC8u: goto label_7F30CAC8;
    case 0x7F30CACCu: goto label_7F30CACC;
    case 0x7F30CAD0u: goto label_7F30CAD0;
    case 0x7F30CAD4u: goto label_7F30CAD4;
    case 0x7F30CAD8u: goto label_7F30CAD8;
    case 0x7F30CADCu: goto label_7F30CADC;
    case 0x7F30CAE0u: goto label_7F30CAE0;
    case 0x7F30CAE4u: goto label_7F30CAE4;
    case 0x7F30CAE8u: goto label_7F30CAE8;
    case 0x7F30CAECu: goto label_7F30CAEC;
    case 0x7F30CAF0u: goto label_7F30CAF0;
    case 0x7F30CAF4u: goto label_7F30CAF4;
    case 0x7F30CAF8u: goto label_7F30CAF8;
    case 0x7F30CAFCu: goto label_7F30CAFC;
    case 0x7F30CB00u: goto label_7F30CB00;
    case 0x7F30CB04u: goto label_7F30CB04;
    case 0x7F30CB08u: goto label_7F30CB08;
    case 0x7F30CB0Cu: goto label_7F30CB0C;
    case 0x7F30CB10u: goto label_7F30CB10;
    case 0x7F30CB14u: goto label_7F30CB14;
    case 0x7F30CB18u: goto label_7F30CB18;
    case 0x7F30CB1Cu: goto label_7F30CB1C;
    case 0x7F30CB20u: goto label_7F30CB20;
    case 0x7F30CB24u: goto label_7F30CB24;
    case 0x7F30CB28u: goto label_7F30CB28;
    case 0x7F30CB2Cu: goto label_7F30CB2C;
    case 0x7F30CB30u: goto label_7F30CB30;
    case 0x7F30CB34u: goto label_7F30CB34;
    case 0x7F30CB38u: goto label_7F30CB38;
    case 0x7F30CB3Cu: goto label_7F30CB3C;
    case 0x7F30CB40u: goto label_7F30CB40;
    case 0x7F30CB44u: goto label_7F30CB44;
    case 0x7F30CB48u: goto label_7F30CB48;
    case 0x7F30CB4Cu: goto label_7F30CB4C;
    case 0x7F30CB50u: goto label_7F30CB50;
    case 0x7F30CB54u: goto label_7F30CB54;
    case 0x7F30CB58u: goto label_7F30CB58;
    case 0x7F30CB5Cu: goto label_7F30CB5C;
    case 0x7F30CB60u: goto label_7F30CB60;
    case 0x7F30CB64u: goto label_7F30CB64;
    case 0x7F30CB68u: goto label_7F30CB68;
    case 0x7F30CB6Cu: goto label_7F30CB6C;
    case 0x7F30CB70u: goto label_7F30CB70;
    case 0x7F30CB74u: goto label_7F30CB74;
    case 0x7F30CB78u: goto label_7F30CB78;
    case 0x7F30CB7Cu: goto label_7F30CB7C;
    case 0x7F30CB80u: goto label_7F30CB80;
    case 0x7F30CB84u: goto label_7F30CB84;
    case 0x7F30CB88u: goto label_7F30CB88;
    case 0x7F30CB8Cu: goto label_7F30CB8C;
    case 0x7F30CB90u: goto label_7F30CB90;
    case 0x7F30CB94u: goto label_7F30CB94;
    case 0x7F30CB98u: goto label_7F30CB98;
    case 0x7F30CB9Cu: goto label_7F30CB9C;
    case 0x7F30CBA0u: goto label_7F30CBA0;
    case 0x7F30CBA4u: goto label_7F30CBA4;
    case 0x7F30CBA8u: goto label_7F30CBA8;
    case 0x7F30CBACu: goto label_7F30CBAC;
    case 0x7F30CBB0u: goto label_7F30CBB0;
    case 0x7F30CBB4u: goto label_7F30CBB4;
    case 0x7F30CBB8u: goto label_7F30CBB8;
    case 0x7F30CBBCu: goto label_7F30CBBC;
    case 0x7F30CBC0u: goto label_7F30CBC0;
    case 0x7F30CBC4u: goto label_7F30CBC4;
    case 0x7F30CBC8u: goto label_7F30CBC8;
    case 0x7F30CBCCu: goto label_7F30CBCC;
    case 0x7F30CBD0u: goto label_7F30CBD0;
    case 0x7F30CBD4u: goto label_7F30CBD4;
    case 0x7F30CBD8u: goto label_7F30CBD8;
    case 0x7F30CBDCu: goto label_7F30CBDC;
    case 0x7F30CBE0u: goto label_7F30CBE0;
    case 0x7F30CBE4u: goto label_7F30CBE4;
    case 0x7F30CBE8u: goto label_7F30CBE8;
    case 0x7F30CBECu: goto label_7F30CBEC;
    case 0x7F30CBF0u: goto label_7F30CBF0;
    case 0x7F30CBF4u: goto label_7F30CBF4;
    case 0x7F30CBF8u: goto label_7F30CBF8;
    case 0x7F30CBFCu: goto label_7F30CBFC;
    case 0x7F30CC00u: goto label_7F30CC00;
    case 0x7F30CC04u: goto label_7F30CC04;
    case 0x7F30CC08u: goto label_7F30CC08;
    case 0x7F30CC0Cu: goto label_7F30CC0C;
    case 0x7F30CC10u: goto label_7F30CC10;
    case 0x7F30CC14u: goto label_7F30CC14;
    case 0x7F30CC18u: goto label_7F30CC18;
    case 0x7F30CC1Cu: goto label_7F30CC1C;
    case 0x7F30CC20u: goto label_7F30CC20;
    case 0x7F30CC24u: goto label_7F30CC24;
    case 0x7F30CC28u: goto label_7F30CC28;
    case 0x7F30CC2Cu: goto label_7F30CC2C;
    case 0x7F30CC30u: goto label_7F30CC30;
    case 0x7F30CC34u: goto label_7F30CC34;
    case 0x7F30CC38u: goto label_7F30CC38;
    case 0x7F30CC3Cu: goto label_7F30CC3C;
    case 0x7F30CC40u: goto label_7F30CC40;
    case 0x7F30CC44u: goto label_7F30CC44;
    case 0x7F30CC48u: goto label_7F30CC48;
    case 0x7F30CC4Cu: goto label_7F30CC4C;
    case 0x7F30CC50u: goto label_7F30CC50;
    case 0x7F30CC54u: goto label_7F30CC54;
    case 0x7F30CC58u: goto label_7F30CC58;
    case 0x7F30CC5Cu: goto label_7F30CC5C;
    case 0x7F30CC60u: goto label_7F30CC60;
    case 0x7F30CC64u: goto label_7F30CC64;
    case 0x7F30CC68u: goto label_7F30CC68;
    case 0x7F30CC6Cu: goto label_7F30CC6C;
    case 0x7F30CC70u: goto label_7F30CC70;
    case 0x7F30CC74u: goto label_7F30CC74;
    case 0x7F30CC78u: goto label_7F30CC78;
    case 0x7F30CC7Cu: goto label_7F30CC7C;
    case 0x7F30CC80u: goto label_7F30CC80;
    case 0x7F30CC84u: goto label_7F30CC84;
    case 0x7F30CC88u: goto label_7F30CC88;
    case 0x7F30CC8Cu: goto label_7F30CC8C;
    case 0x7F30CC90u: goto label_7F30CC90;
    case 0x7F30CC94u: goto label_7F30CC94;
    case 0x7F30CC98u: goto label_7F30CC98;
    case 0x7F30CC9Cu: goto label_7F30CC9C;
    case 0x7F30CCA0u: goto label_7F30CCA0;
    case 0x7F30CCA4u: goto label_7F30CCA4;
    case 0x7F30CCA8u: goto label_7F30CCA8;
    case 0x7F30CCACu: goto label_7F30CCAC;
    case 0x7F30CCB0u: goto label_7F30CCB0;
    case 0x7F30CCB4u: goto label_7F30CCB4;
    case 0x7F30CCB8u: goto label_7F30CCB8;
    case 0x7F30CCBCu: goto label_7F30CCBC;
    case 0x7F30CCC0u: goto label_7F30CCC0;
    case 0x7F30CCC4u: goto label_7F30CCC4;
    case 0x7F30CCC8u: goto label_7F30CCC8;
    case 0x7F30CCCCu: goto label_7F30CCCC;
    case 0x7F30CCD0u: goto label_7F30CCD0;
    case 0x7F30CCD4u: goto label_7F30CCD4;
    case 0x7F30CCD8u: goto label_7F30CCD8;
    case 0x7F30CCDCu: goto label_7F30CCDC;
    case 0x7F30CCE0u: goto label_7F30CCE0;
    case 0x7F30CCE4u: goto label_7F30CCE4;
    case 0x7F30CCE8u: goto label_7F30CCE8;
    case 0x7F30CCECu: goto label_7F30CCEC;
    case 0x7F30CCF0u: goto label_7F30CCF0;
    case 0x7F30CCF4u: goto label_7F30CCF4;
    case 0x7F30CCF8u: goto label_7F30CCF8;
    case 0x7F30CCFCu: goto label_7F30CCFC;
    case 0x7F30CD00u: goto label_7F30CD00;
    case 0x7F30CD04u: goto label_7F30CD04;
    case 0x7F30CD08u: goto label_7F30CD08;
    case 0x7F30CD0Cu: goto label_7F30CD0C;
    case 0x7F30CD10u: goto label_7F30CD10;
    case 0x7F30CD14u: goto label_7F30CD14;
    case 0x7F30CD18u: goto label_7F30CD18;
    case 0x7F30CD1Cu: goto label_7F30CD1C;
    case 0x7F30CD20u: goto label_7F30CD20;
    case 0x7F30CD24u: goto label_7F30CD24;
    case 0x7F30CD28u: goto label_7F30CD28;
    case 0x7F30CD2Cu: goto label_7F30CD2C;
    case 0x7F30CD30u: goto label_7F30CD30;
    case 0x7F30CD34u: goto label_7F30CD34;
    case 0x7F30CD38u: goto label_7F30CD38;
    case 0x7F30CD3Cu: goto label_7F30CD3C;
    case 0x7F30CD40u: goto label_7F30CD40;
    case 0x7F30CD44u: goto label_7F30CD44;
    case 0x7F30CD48u: goto label_7F30CD48;
    case 0x7F30CD4Cu: goto label_7F30CD4C;
    case 0x7F30CD50u: goto label_7F30CD50;
    case 0x7F30CD54u: goto label_7F30CD54;
    case 0x7F30CD58u: goto label_7F30CD58;
    case 0x7F30CD5Cu: goto label_7F30CD5C;
    case 0x7F30CD60u: goto label_7F30CD60;
    case 0x7F30CD64u: goto label_7F30CD64;
    case 0x7F30CD68u: goto label_7F30CD68;
    case 0x7F30CD6Cu: goto label_7F30CD6C;
    case 0x7F30CD70u: goto label_7F30CD70;
    case 0x7F30CD74u: goto label_7F30CD74;
    case 0x7F30CD78u: goto label_7F30CD78;
    case 0x7F30CD7Cu: goto label_7F30CD7C;
    case 0x7F30CD80u: goto label_7F30CD80;
    case 0x7F30CD84u: goto label_7F30CD84;
    case 0x7F30CD88u: goto label_7F30CD88;
    case 0x7F30CD8Cu: goto label_7F30CD8C;
    case 0x7F30CD90u: goto label_7F30CD90;
    case 0x7F30CD94u: goto label_7F30CD94;
    case 0x7F30CD98u: goto label_7F30CD98;
    case 0x7F30CD9Cu: goto label_7F30CD9C;
    case 0x7F30CDA0u: goto label_7F30CDA0;
    case 0x7F30CDA4u: goto label_7F30CDA4;
    case 0x7F30CDA8u: goto label_7F30CDA8;
    case 0x7F30CDACu: goto label_7F30CDAC;
    case 0x7F30CDB0u: goto label_7F30CDB0;
    case 0x7F30CDB4u: goto label_7F30CDB4;
    case 0x7F30CDB8u: goto label_7F30CDB8;
    case 0x7F30CDBCu: goto label_7F30CDBC;
    case 0x7F30CDC0u: goto label_7F30CDC0;
    case 0x7F30CDC4u: goto label_7F30CDC4;
    case 0x7F30CDC8u: goto label_7F30CDC8;
    case 0x7F30CDCCu: goto label_7F30CDCC;
    case 0x7F30CDD0u: goto label_7F30CDD0;
    case 0x7F30CDD4u: goto label_7F30CDD4;
    case 0x7F30CDD8u: goto label_7F30CDD8;
    case 0x7F30CDDCu: goto label_7F30CDDC;
    case 0x7F30CDE0u: goto label_7F30CDE0;
    case 0x7F30CDE4u: goto label_7F30CDE4;
    case 0x7F30CDE8u: goto label_7F30CDE8;
    case 0x7F30CDECu: goto label_7F30CDEC;
    case 0x7F30CDF0u: goto label_7F30CDF0;
    case 0x7F30CDF4u: goto label_7F30CDF4;
    case 0x7F30CDF8u: goto label_7F30CDF8;
    case 0x7F30CDFCu: goto label_7F30CDFC;
    case 0x7F30CE00u: goto label_7F30CE00;
    case 0x7F30CE04u: goto label_7F30CE04;
    case 0x7F30CE08u: goto label_7F30CE08;
    case 0x7F30CE0Cu: goto label_7F30CE0C;
    case 0x7F30CE10u: goto label_7F30CE10;
    case 0x7F30CE14u: goto label_7F30CE14;
    case 0x7F30CE18u: goto label_7F30CE18;
    case 0x7F30CE1Cu: goto label_7F30CE1C;
    case 0x7F30CE20u: goto label_7F30CE20;
    case 0x7F30CE24u: goto label_7F30CE24;
    case 0x7F30CE28u: goto label_7F30CE28;
    case 0x7F30CE2Cu: goto label_7F30CE2C;
    case 0x7F30CE30u: goto label_7F30CE30;
    case 0x7F30CE34u: goto label_7F30CE34;
    case 0x7F30CE38u: goto label_7F30CE38;
    case 0x7F30CE3Cu: goto label_7F30CE3C;
    case 0x7F30CE40u: goto label_7F30CE40;
    case 0x7F30CE44u: goto label_7F30CE44;
    case 0x7F30CE48u: goto label_7F30CE48;
    case 0x7F30CE4Cu: goto label_7F30CE4C;
    case 0x7F30CE50u: goto label_7F30CE50;
    case 0x7F30CE54u: goto label_7F30CE54;
    case 0x7F30CE58u: goto label_7F30CE58;
    case 0x7F30CE5Cu: goto label_7F30CE5C;
    case 0x7F30CE60u: goto label_7F30CE60;
    case 0x7F30CE64u: goto label_7F30CE64;
    case 0x7F30CE68u: goto label_7F30CE68;
    case 0x7F30CE6Cu: goto label_7F30CE6C;
    case 0x7F30CE70u: goto label_7F30CE70;
    case 0x7F30CE74u: goto label_7F30CE74;
    case 0x7F30CE78u: goto label_7F30CE78;
    case 0x7F30CE7Cu: goto label_7F30CE7C;
    case 0x7F30CE80u: goto label_7F30CE80;
    case 0x7F30CE84u: goto label_7F30CE84;
    case 0x7F30CE88u: goto label_7F30CE88;
    case 0x7F30CE8Cu: goto label_7F30CE8C;
    case 0x7F30CE90u: goto label_7F30CE90;
    case 0x7F30CE94u: goto label_7F30CE94;
    case 0x7F30CE98u: goto label_7F30CE98;
    case 0x7F30CE9Cu: goto label_7F30CE9C;
    case 0x7F30CEA0u: goto label_7F30CEA0;
    case 0x7F30CEA4u: goto label_7F30CEA4;
    case 0x7F30CEA8u: goto label_7F30CEA8;
    case 0x7F30CEACu: goto label_7F30CEAC;
    case 0x7F30CEB0u: goto label_7F30CEB0;
    case 0x7F30CEB4u: goto label_7F30CEB4;
    case 0x7F30CEB8u: goto label_7F30CEB8;
    case 0x7F30CEBCu: goto label_7F30CEBC;
    case 0x7F30CEC0u: goto label_7F30CEC0;
    case 0x7F30CEC4u: goto label_7F30CEC4;
    case 0x7F30CEC8u: goto label_7F30CEC8;
    case 0x7F30CECCu: goto label_7F30CECC;
    case 0x7F30CED0u: goto label_7F30CED0;
    case 0x7F30CED4u: goto label_7F30CED4;
    case 0x7F30CED8u: goto label_7F30CED8;
    case 0x7F30CEDCu: goto label_7F30CEDC;
    case 0x7F30CEE0u: goto label_7F30CEE0;
    case 0x7F30CEE4u: goto label_7F30CEE4;
    case 0x7F30CEE8u: goto label_7F30CEE8;
    case 0x7F30CEECu: goto label_7F30CEEC;
    case 0x7F30CEF0u: goto label_7F30CEF0;
    case 0x7F30CEF4u: goto label_7F30CEF4;
    case 0x7F30CEF8u: goto label_7F30CEF8;
    case 0x7F30CEFCu: goto label_7F30CEFC;
    case 0x7F30CF00u: goto label_7F30CF00;
    case 0x7F30CF04u: goto label_7F30CF04;
    case 0x7F30CF08u: goto label_7F30CF08;
    case 0x7F30CF0Cu: goto label_7F30CF0C;
    case 0x7F30CF10u: goto label_7F30CF10;
    case 0x7F30CF14u: goto label_7F30CF14;
    case 0x7F30CF18u: goto label_7F30CF18;
    case 0x7F30CF1Cu: goto label_7F30CF1C;
    case 0x7F30CF20u: goto label_7F30CF20;
    case 0x7F30CF24u: goto label_7F30CF24;
    case 0x7F30CF28u: goto label_7F30CF28;
    case 0x7F30CF2Cu: goto label_7F30CF2C;
    case 0x7F30CF30u: goto label_7F30CF30;
    case 0x7F30CF34u: goto label_7F30CF34;
    case 0x7F30CF38u: goto label_7F30CF38;
    case 0x7F30CF3Cu: goto label_7F30CF3C;
    case 0x7F30CF40u: goto label_7F30CF40;
    case 0x7F30CF44u: goto label_7F30CF44;
    case 0x7F30CF48u: goto label_7F30CF48;
    case 0x7F30CF4Cu: goto label_7F30CF4C;
    case 0x7F30CF50u: goto label_7F30CF50;
    case 0x7F30CF54u: goto label_7F30CF54;
    case 0x7F30CF58u: goto label_7F30CF58;
    case 0x7F30CF5Cu: goto label_7F30CF5C;
    case 0x7F30CF60u: goto label_7F30CF60;
    case 0x7F30CF64u: goto label_7F30CF64;
    case 0x7F30CF68u: goto label_7F30CF68;
    case 0x7F30CF6Cu: goto label_7F30CF6C;
    case 0x7F30CF70u: goto label_7F30CF70;
    case 0x7F30CF74u: goto label_7F30CF74;
    case 0x7F30CF78u: goto label_7F30CF78;
    case 0x7F30CF7Cu: goto label_7F30CF7C;
    case 0x7F30CF80u: goto label_7F30CF80;
    case 0x7F30CF84u: goto label_7F30CF84;
    case 0x7F30CF88u: goto label_7F30CF88;
    case 0x7F30CF8Cu: goto label_7F30CF8C;
    case 0x7F30CF90u: goto label_7F30CF90;
    case 0x7F30CF94u: goto label_7F30CF94;
    case 0x7F30CF98u: goto label_7F30CF98;
    case 0x7F30CF9Cu: goto label_7F30CF9C;
    case 0x7F30CFA0u: goto label_7F30CFA0;
    case 0x7F30CFA4u: goto label_7F30CFA4;
    case 0x7F30CFA8u: goto label_7F30CFA8;
    case 0x7F30CFACu: goto label_7F30CFAC;
    case 0x7F30CFB0u: goto label_7F30CFB0;
    case 0x7F30CFB4u: goto label_7F30CFB4;
    case 0x7F30CFB8u: goto label_7F30CFB8;
    case 0x7F30CFBCu: goto label_7F30CFBC;
    case 0x7F30CFC0u: goto label_7F30CFC0;
    case 0x7F30CFC4u: goto label_7F30CFC4;
    case 0x7F30CFC8u: goto label_7F30CFC8;
    case 0x7F30CFCCu: goto label_7F30CFCC;
    case 0x7F30CFD0u: goto label_7F30CFD0;
    case 0x7F30CFD4u: goto label_7F30CFD4;
    case 0x7F30CFD8u: goto label_7F30CFD8;
    case 0x7F30CFDCu: goto label_7F30CFDC;
    case 0x7F30CFE0u: goto label_7F30CFE0;
    case 0x7F30CFE4u: goto label_7F30CFE4;
    case 0x7F30CFE8u: goto label_7F30CFE8;
    case 0x7F30CFECu: goto label_7F30CFEC;
    case 0x7F30CFF0u: goto label_7F30CFF0;
    case 0x7F30CFF4u: goto label_7F30CFF4;
    case 0x7F30CFF8u: goto label_7F30CFF8;
    case 0x7F30CFFCu: goto label_7F30CFFC;
    case 0x7F30D000u: goto label_7F30D000;
    case 0x7F30D004u: goto label_7F30D004;
    case 0x7F30D008u: goto label_7F30D008;
    case 0x7F30D00Cu: goto label_7F30D00C;
    case 0x7F30D010u: goto label_7F30D010;
    case 0x7F30D014u: goto label_7F30D014;
    case 0x7F30D018u: goto label_7F30D018;
    case 0x7F30D01Cu: goto label_7F30D01C;
    case 0x7F30D020u: goto label_7F30D020;
    case 0x7F30D024u: goto label_7F30D024;
    case 0x7F30D028u: goto label_7F30D028;
    case 0x7F30D02Cu: goto label_7F30D02C;
    case 0x7F30D030u: goto label_7F30D030;
    case 0x7F30D034u: goto label_7F30D034;
    case 0x7F30D038u: goto label_7F30D038;
    case 0x7F30D03Cu: goto label_7F30D03C;
    case 0x7F30D040u: goto label_7F30D040;
    case 0x7F30D044u: goto label_7F30D044;
    case 0x7F30D048u: goto label_7F30D048;
    case 0x7F30D04Cu: goto label_7F30D04C;
    case 0x7F30D050u: goto label_7F30D050;
    case 0x7F30D054u: goto label_7F30D054;
    case 0x7F30D058u: goto label_7F30D058;
    case 0x7F30D05Cu: goto label_7F30D05C;
    case 0x7F30D060u: goto label_7F30D060;
    case 0x7F30D064u: goto label_7F30D064;
    case 0x7F30D068u: goto label_7F30D068;
    case 0x7F30D06Cu: goto label_7F30D06C;
    case 0x7F30D070u: goto label_7F30D070;
    case 0x7F30D074u: goto label_7F30D074;
    case 0x7F30D078u: goto label_7F30D078;
    case 0x7F30D07Cu: goto label_7F30D07C;
    case 0x7F30D080u: goto label_7F30D080;
    case 0x7F30D084u: goto label_7F30D084;
    case 0x7F30D088u: goto label_7F30D088;
    case 0x7F30D08Cu: goto label_7F30D08C;
    case 0x7F30D090u: goto label_7F30D090;
    case 0x7F30D094u: goto label_7F30D094;
    case 0x7F30D098u: goto label_7F30D098;
    case 0x7F30D09Cu: goto label_7F30D09C;
    case 0x7F30D0A0u: goto label_7F30D0A0;
    case 0x7F30D0A4u: goto label_7F30D0A4;
    case 0x7F30D0A8u: goto label_7F30D0A8;
    case 0x7F30D0ACu: goto label_7F30D0AC;
    case 0x7F30D0B0u: goto label_7F30D0B0;
    case 0x7F30D0B4u: goto label_7F30D0B4;
    case 0x7F30D0B8u: goto label_7F30D0B8;
    case 0x7F30D0BCu: goto label_7F30D0BC;
    case 0x7F30D0C0u: goto label_7F30D0C0;
    case 0x7F30D0C4u: goto label_7F30D0C4;
    case 0x7F30D0C8u: goto label_7F30D0C8;
    case 0x7F30D0CCu: goto label_7F30D0CC;
    case 0x7F30D0D0u: goto label_7F30D0D0;
    case 0x7F30D0D4u: goto label_7F30D0D4;
    case 0x7F30D0D8u: goto label_7F30D0D8;
    case 0x7F30D0DCu: goto label_7F30D0DC;
    case 0x7F30D0E0u: goto label_7F30D0E0;
    case 0x7F30D0E4u: goto label_7F30D0E4;
    case 0x7F30D0E8u: goto label_7F30D0E8;
    case 0x7F30D0ECu: goto label_7F30D0EC;
    case 0x7F30D0F0u: goto label_7F30D0F0;
    case 0x7F30D0F4u: goto label_7F30D0F4;
    case 0x7F30D0F8u: goto label_7F30D0F8;
    case 0x7F30D0FCu: goto label_7F30D0FC;
    case 0x7F30D100u: goto label_7F30D100;
    case 0x7F30D104u: goto label_7F30D104;
    case 0x7F30D108u: goto label_7F30D108;
    case 0x7F30D10Cu: goto label_7F30D10C;
    case 0x7F30D110u: goto label_7F30D110;
    case 0x7F30D114u: goto label_7F30D114;
    case 0x7F30D118u: goto label_7F30D118;
    case 0x7F30D11Cu: goto label_7F30D11C;
    case 0x7F30D120u: goto label_7F30D120;
    case 0x7F30D124u: goto label_7F30D124;
    case 0x7F30D128u: goto label_7F30D128;
    case 0x7F30D12Cu: goto label_7F30D12C;
    case 0x7F30D130u: goto label_7F30D130;
    case 0x7F30D134u: goto label_7F30D134;
    case 0x7F30D138u: goto label_7F30D138;
    case 0x7F30D13Cu: goto label_7F30D13C;
    case 0x7F30D140u: goto label_7F30D140;
    case 0x7F30D144u: goto label_7F30D144;
    case 0x7F30D148u: goto label_7F30D148;
    case 0x7F30D14Cu: goto label_7F30D14C;
    case 0x7F30D150u: goto label_7F30D150;
    case 0x7F30D154u: goto label_7F30D154;
    case 0x7F30D158u: goto label_7F30D158;
    case 0x7F30D15Cu: goto label_7F30D15C;
    case 0x7F30D160u: goto label_7F30D160;
    case 0x7F30D164u: goto label_7F30D164;
    case 0x7F30D168u: goto label_7F30D168;
    case 0x7F30D16Cu: goto label_7F30D16C;
    case 0x7F30D170u: goto label_7F30D170;
    case 0x7F30D174u: goto label_7F30D174;
    case 0x7F30D178u: goto label_7F30D178;
    case 0x7F30D17Cu: goto label_7F30D17C;
    case 0x7F30D180u: goto label_7F30D180;
    case 0x7F30D184u: goto label_7F30D184;
    case 0x7F30D188u: goto label_7F30D188;
    case 0x7F30D18Cu: goto label_7F30D18C;
    case 0x7F30D190u: goto label_7F30D190;
    case 0x7F30D194u: goto label_7F30D194;
    case 0x7F30D198u: goto label_7F30D198;
    case 0x7F30D19Cu: goto label_7F30D19C;
    case 0x7F30D1A0u: goto label_7F30D1A0;
    case 0x7F30D1A4u: goto label_7F30D1A4;
    case 0x7F30D1A8u: goto label_7F30D1A8;
    case 0x7F30D1ACu: goto label_7F30D1AC;
    case 0x7F30D1B0u: goto label_7F30D1B0;
    case 0x7F30D1B4u: goto label_7F30D1B4;
    case 0x7F30D1B8u: goto label_7F30D1B8;
    case 0x7F30D1BCu: goto label_7F30D1BC;
    case 0x7F30D1C0u: goto label_7F30D1C0;
    case 0x7F30D1C4u: goto label_7F30D1C4;
    case 0x7F30D1C8u: goto label_7F30D1C8;
    case 0x7F30D1CCu: goto label_7F30D1CC;
    case 0x7F30D1D0u: goto label_7F30D1D0;
    case 0x7F30D1D4u: goto label_7F30D1D4;
    case 0x7F30D1D8u: goto label_7F30D1D8;
    case 0x7F30D1DCu: goto label_7F30D1DC;
    case 0x7F30D1E0u: goto label_7F30D1E0;
    case 0x7F30D1E4u: goto label_7F30D1E4;
    case 0x7F30D1E8u: goto label_7F30D1E8;
    case 0x7F30D1ECu: goto label_7F30D1EC;
    case 0x7F30D1F0u: goto label_7F30D1F0;
    case 0x7F30D1F4u: goto label_7F30D1F4;
    case 0x7F30D1F8u: goto label_7F30D1F8;
    case 0x7F30D1FCu: goto label_7F30D1FC;
    case 0x7F30D200u: goto label_7F30D200;
    case 0x7F30D204u: goto label_7F30D204;
    case 0x7F30D208u: goto label_7F30D208;
    case 0x7F30D20Cu: goto label_7F30D20C;
    case 0x7F30D210u: goto label_7F30D210;
    case 0x7F30D214u: goto label_7F30D214;
    case 0x7F30D218u: goto label_7F30D218;
    case 0x7F30D21Cu: goto label_7F30D21C;
    case 0x7F30D220u: goto label_7F30D220;
    case 0x7F30D224u: goto label_7F30D224;
    case 0x7F30D228u: goto label_7F30D228;
    case 0x7F30D22Cu: goto label_7F30D22C;
    case 0x7F30D230u: goto label_7F30D230;
    case 0x7F30D234u: goto label_7F30D234;
    case 0x7F30D238u: goto label_7F30D238;
    case 0x7F30D23Cu: goto label_7F30D23C;
    case 0x7F30D240u: goto label_7F30D240;
    case 0x7F30D244u: goto label_7F30D244;
    case 0x7F30D248u: goto label_7F30D248;
    case 0x7F30D24Cu: goto label_7F30D24C;
    case 0x7F30D250u: goto label_7F30D250;
    case 0x7F30D254u: goto label_7F30D254;
    case 0x7F30D258u: goto label_7F30D258;
    case 0x7F30D25Cu: goto label_7F30D25C;
    case 0x7F30D260u: goto label_7F30D260;
    case 0x7F30D264u: goto label_7F30D264;
    case 0x7F30D268u: goto label_7F30D268;
    case 0x7F30D26Cu: goto label_7F30D26C;
    case 0x7F30D270u: goto label_7F30D270;
    case 0x7F30D274u: goto label_7F30D274;
    case 0x7F30D278u: goto label_7F30D278;
    case 0x7F30D27Cu: goto label_7F30D27C;
    case 0x7F30D280u: goto label_7F30D280;
    case 0x7F30D284u: goto label_7F30D284;
    case 0x7F30D288u: goto label_7F30D288;
    case 0x7F30D28Cu: goto label_7F30D28C;
    case 0x7F30D290u: goto label_7F30D290;
    case 0x7F30D294u: goto label_7F30D294;
    case 0x7F30D298u: goto label_7F30D298;
    case 0x7F30D29Cu: goto label_7F30D29C;
    case 0x7F30D2A0u: goto label_7F30D2A0;
    case 0x7F30D2A4u: goto label_7F30D2A4;
    case 0x7F30D2A8u: goto label_7F30D2A8;
    case 0x7F30D2ACu: goto label_7F30D2AC;
    case 0x7F30D2B0u: goto label_7F30D2B0;
    case 0x7F30D2B4u: goto label_7F30D2B4;
    case 0x7F30D2B8u: goto label_7F30D2B8;
    case 0x7F30D2BCu: goto label_7F30D2BC;
    case 0x7F30D2C0u: goto label_7F30D2C0;
    case 0x7F30D2C4u: goto label_7F30D2C4;
    case 0x7F30D2C8u: goto label_7F30D2C8;
    case 0x7F30D2CCu: goto label_7F30D2CC;
    case 0x7F30D2D0u: goto label_7F30D2D0;
    case 0x7F30D2D4u: goto label_7F30D2D4;
    case 0x7F30D2D8u: goto label_7F30D2D8;
    case 0x7F30D2DCu: goto label_7F30D2DC;
    case 0x7F30D2E0u: goto label_7F30D2E0;
    case 0x7F30D2E4u: goto label_7F30D2E4;
    case 0x7F30D2E8u: goto label_7F30D2E8;
    case 0x7F30D2ECu: goto label_7F30D2EC;
    case 0x7F30D2F0u: goto label_7F30D2F0;
    case 0x7F30D2F4u: goto label_7F30D2F4;
    case 0x7F30D2F8u: goto label_7F30D2F8;
    case 0x7F30D2FCu: goto label_7F30D2FC;
    case 0x7F30D300u: goto label_7F30D300;
    case 0x7F30D304u: goto label_7F30D304;
    case 0x7F30D308u: goto label_7F30D308;
    case 0x7F30D30Cu: goto label_7F30D30C;
    case 0x7F30D310u: goto label_7F30D310;
    case 0x7F30D314u: goto label_7F30D314;
    case 0x7F30D318u: goto label_7F30D318;
    case 0x7F30D31Cu: goto label_7F30D31C;
    case 0x7F30D320u: goto label_7F30D320;
    case 0x7F30D324u: goto label_7F30D324;
    case 0x7F30D328u: goto label_7F30D328;
    case 0x7F30D32Cu: goto label_7F30D32C;
    case 0x7F30D330u: goto label_7F30D330;
    case 0x7F30D334u: goto label_7F30D334;
    case 0x7F30D338u: goto label_7F30D338;
    case 0x7F30D33Cu: goto label_7F30D33C;
    case 0x7F30D340u: goto label_7F30D340;
    case 0x7F30D344u: goto label_7F30D344;
    case 0x7F30D348u: goto label_7F30D348;
    case 0x7F30D34Cu: goto label_7F30D34C;
    case 0x7F30D350u: goto label_7F30D350;
    case 0x7F30D354u: goto label_7F30D354;
    case 0x7F30D358u: goto label_7F30D358;
    case 0x7F30D35Cu: goto label_7F30D35C;
    case 0x7F30D360u: goto label_7F30D360;
    case 0x7F30D364u: goto label_7F30D364;
    case 0x7F30D368u: goto label_7F30D368;
    case 0x7F30D36Cu: goto label_7F30D36C;
    case 0x7F30D370u: goto label_7F30D370;
    case 0x7F30D374u: goto label_7F30D374;
    case 0x7F30D378u: goto label_7F30D378;
    case 0x7F30D37Cu: goto label_7F30D37C;
    case 0x7F30D380u: goto label_7F30D380;
    case 0x7F30D384u: goto label_7F30D384;
    case 0x7F30D388u: goto label_7F30D388;
    case 0x7F30D38Cu: goto label_7F30D38C;
    case 0x7F30D390u: goto label_7F30D390;
    case 0x7F30D394u: goto label_7F30D394;
    case 0x7F30D398u: goto label_7F30D398;
    case 0x7F30D39Cu: goto label_7F30D39C;
    case 0x7F30D3A0u: goto label_7F30D3A0;
    case 0x7F30D3A4u: goto label_7F30D3A4;
    case 0x7F30D3A8u: goto label_7F30D3A8;
    case 0x7F30D3ACu: goto label_7F30D3AC;
    case 0x7F30D3B0u: goto label_7F30D3B0;
    case 0x7F30D3B4u: goto label_7F30D3B4;
    case 0x7F30D3B8u: goto label_7F30D3B8;
    case 0x7F30D3BCu: goto label_7F30D3BC;
    case 0x7F30D3C0u: goto label_7F30D3C0;
    case 0x7F30D3C4u: goto label_7F30D3C4;
    case 0x7F30D3C8u: goto label_7F30D3C8;
    case 0x7F30D3CCu: goto label_7F30D3CC;
    case 0x7F30D3D0u: goto label_7F30D3D0;
    case 0x7F30D3D4u: goto label_7F30D3D4;
    case 0x7F30D3D8u: goto label_7F30D3D8;
    case 0x7F30D3DCu: goto label_7F30D3DC;
    case 0x7F30D3E0u: goto label_7F30D3E0;
    case 0x7F30D3E4u: goto label_7F30D3E4;
    case 0x7F30D3E8u: goto label_7F30D3E8;
    case 0x7F30D3ECu: goto label_7F30D3EC;
    case 0x7F30D3F0u: goto label_7F30D3F0;
    case 0x7F30D3F4u: goto label_7F30D3F4;
    case 0x7F30D3F8u: goto label_7F30D3F8;
    case 0x7F30D3FCu: goto label_7F30D3FC;
    case 0x7F30D400u: goto label_7F30D400;
    case 0x7F30D404u: goto label_7F30D404;
    case 0x7F30D408u: goto label_7F30D408;
    case 0x7F30D40Cu: goto label_7F30D40C;
    case 0x7F30D410u: goto label_7F30D410;
    case 0x7F30D414u: goto label_7F30D414;
    case 0x7F30D418u: goto label_7F30D418;
    case 0x7F30D41Cu: goto label_7F30D41C;
    case 0x7F30D420u: goto label_7F30D420;
    case 0x7F30D424u: goto label_7F30D424;
    case 0x7F30D428u: goto label_7F30D428;
    case 0x7F30D42Cu: goto label_7F30D42C;
    case 0x7F30D430u: goto label_7F30D430;
    case 0x7F30D434u: goto label_7F30D434;
    case 0x7F30D438u: goto label_7F30D438;
    case 0x7F30D43Cu: goto label_7F30D43C;
    case 0x7F30D440u: goto label_7F30D440;
    case 0x7F30D444u: goto label_7F30D444;
    case 0x7F30D448u: goto label_7F30D448;
    case 0x7F30D44Cu: goto label_7F30D44C;
    case 0x7F30D450u: goto label_7F30D450;
    case 0x7F30D454u: goto label_7F30D454;
    case 0x7F30D458u: goto label_7F30D458;
    case 0x7F30D45Cu: goto label_7F30D45C;
    case 0x7F30D460u: goto label_7F30D460;
    case 0x7F30D464u: goto label_7F30D464;
    case 0x7F30D468u: goto label_7F30D468;
    case 0x7F30D46Cu: goto label_7F30D46C;
    case 0x7F30D470u: goto label_7F30D470;
    case 0x7F30D474u: goto label_7F30D474;
    case 0x7F30D478u: goto label_7F30D478;
    case 0x7F30D47Cu: goto label_7F30D47C;
    case 0x7F30D480u: goto label_7F30D480;
    case 0x7F30D484u: goto label_7F30D484;
    case 0x7F30D488u: goto label_7F30D488;
    case 0x7F30D48Cu: goto label_7F30D48C;
    case 0x7F30D490u: goto label_7F30D490;
    case 0x7F30D494u: goto label_7F30D494;
    case 0x7F30D498u: goto label_7F30D498;
    case 0x7F30D49Cu: goto label_7F30D49C;
    case 0x7F30D4A0u: goto label_7F30D4A0;
    case 0x7F30D4A4u: goto label_7F30D4A4;
    case 0x7F30D4A8u: goto label_7F30D4A8;
    case 0x7F30D4ACu: goto label_7F30D4AC;
    case 0x7F30D4B0u: goto label_7F30D4B0;
    case 0x7F30D4B4u: goto label_7F30D4B4;
    case 0x7F30D4B8u: goto label_7F30D4B8;
    case 0x7F30D4BCu: goto label_7F30D4BC;
    case 0x7F30D4C0u: goto label_7F30D4C0;
    case 0x7F30D4C4u: goto label_7F30D4C4;
    case 0x7F30D4C8u: goto label_7F30D4C8;
    case 0x7F30D4CCu: goto label_7F30D4CC;
    case 0x7F30D4D0u: goto label_7F30D4D0;
    case 0x7F30D4D4u: goto label_7F30D4D4;
    case 0x7F30D4D8u: goto label_7F30D4D8;
    case 0x7F30D4DCu: goto label_7F30D4DC;
    case 0x7F30D4E0u: goto label_7F30D4E0;
    case 0x7F30D4E4u: goto label_7F30D4E4;
    case 0x7F30D4E8u: goto label_7F30D4E8;
    case 0x7F30D4ECu: goto label_7F30D4EC;
    case 0x7F30D4F0u: goto label_7F30D4F0;
    case 0x7F30D4F4u: goto label_7F30D4F4;
    case 0x7F30D4F8u: goto label_7F30D4F8;
    case 0x7F30D4FCu: goto label_7F30D4FC;
    case 0x7F30D500u: goto label_7F30D500;
    case 0x7F30D504u: goto label_7F30D504;
    case 0x7F30D508u: goto label_7F30D508;
    case 0x7F30D50Cu: goto label_7F30D50C;
    case 0x7F30D510u: goto label_7F30D510;
    case 0x7F30D514u: goto label_7F30D514;
    case 0x7F30D518u: goto label_7F30D518;
    case 0x7F30D51Cu: goto label_7F30D51C;
    case 0x7F30D520u: goto label_7F30D520;
    case 0x7F30D524u: goto label_7F30D524;
    case 0x7F30D528u: goto label_7F30D528;
    case 0x7F30D52Cu: goto label_7F30D52C;
    case 0x7F30D530u: goto label_7F30D530;
    case 0x7F30D534u: goto label_7F30D534;
    case 0x7F30D538u: goto label_7F30D538;
    case 0x7F30D53Cu: goto label_7F30D53C;
    case 0x7F30D540u: goto label_7F30D540;
    case 0x7F30D544u: goto label_7F30D544;
    case 0x7F30D548u: goto label_7F30D548;
    case 0x7F30D54Cu: goto label_7F30D54C;
    case 0x7F30D550u: goto label_7F30D550;
    case 0x7F30D554u: goto label_7F30D554;
    case 0x7F30D558u: goto label_7F30D558;
    case 0x7F30D55Cu: goto label_7F30D55C;
    case 0x7F30D560u: goto label_7F30D560;
    case 0x7F30D564u: goto label_7F30D564;
    case 0x7F30D568u: goto label_7F30D568;
    case 0x7F30D56Cu: goto label_7F30D56C;
    case 0x7F30D570u: goto label_7F30D570;
    case 0x7F30D574u: goto label_7F30D574;
    case 0x7F30D578u: goto label_7F30D578;
    case 0x7F30D57Cu: goto label_7F30D57C;
    case 0x7F30D580u: goto label_7F30D580;
    case 0x7F30D584u: goto label_7F30D584;
    case 0x7F30D588u: goto label_7F30D588;
    case 0x7F30D58Cu: goto label_7F30D58C;
    case 0x7F30D590u: goto label_7F30D590;
    case 0x7F30D594u: goto label_7F30D594;
    case 0x7F30D598u: goto label_7F30D598;
    case 0x7F30D59Cu: goto label_7F30D59C;
    case 0x7F30D5A0u: goto label_7F30D5A0;
    case 0x7F30D5A4u: goto label_7F30D5A4;
    case 0x7F30D5A8u: goto label_7F30D5A8;
    case 0x7F30D5ACu: goto label_7F30D5AC;
    case 0x7F30D5B0u: goto label_7F30D5B0;
    case 0x7F30D5B4u: goto label_7F30D5B4;
    case 0x7F30D5B8u: goto label_7F30D5B8;
    case 0x7F30D5BCu: goto label_7F30D5BC;
    case 0x7F30D5C0u: goto label_7F30D5C0;
    case 0x7F30D5C4u: goto label_7F30D5C4;
    case 0x7F30D5C8u: goto label_7F30D5C8;
    case 0x7F30D5CCu: goto label_7F30D5CC;
    case 0x7F30D5D0u: goto label_7F30D5D0;
    case 0x7F30D5D4u: goto label_7F30D5D4;
    case 0x7F30D5D8u: goto label_7F30D5D8;
    case 0x7F30D5DCu: goto label_7F30D5DC;
    case 0x7F30D5E0u: goto label_7F30D5E0;
    case 0x7F30D5E4u: goto label_7F30D5E4;
    case 0x7F30D5E8u: goto label_7F30D5E8;
    case 0x7F30D5ECu: goto label_7F30D5EC;
    case 0x7F30D5F0u: goto label_7F30D5F0;
    case 0x7F30D5F4u: goto label_7F30D5F4;
    case 0x7F30D5F8u: goto label_7F30D5F8;
    case 0x7F30D5FCu: goto label_7F30D5FC;
    case 0x7F30D600u: goto label_7F30D600;
    case 0x7F30D604u: goto label_7F30D604;
    case 0x7F30D608u: goto label_7F30D608;
    case 0x7F30D60Cu: goto label_7F30D60C;
    case 0x7F30D610u: goto label_7F30D610;
    case 0x7F30D614u: goto label_7F30D614;
    case 0x7F30D618u: goto label_7F30D618;
    case 0x7F30D61Cu: goto label_7F30D61C;
    case 0x7F30D620u: goto label_7F30D620;
    case 0x7F30D624u: goto label_7F30D624;
    case 0x7F30D628u: goto label_7F30D628;
    case 0x7F30D62Cu: goto label_7F30D62C;
    case 0x7F30D630u: goto label_7F30D630;
    case 0x7F30D634u: goto label_7F30D634;
    case 0x7F30D638u: goto label_7F30D638;
    case 0x7F30D63Cu: goto label_7F30D63C;
    case 0x7F30D640u: goto label_7F30D640;
    case 0x7F30D644u: goto label_7F30D644;
    case 0x7F30D648u: goto label_7F30D648;
    case 0x7F30D64Cu: goto label_7F30D64C;
    case 0x7F30D650u: goto label_7F30D650;
    case 0x7F30D654u: goto label_7F30D654;
    case 0x7F30D658u: goto label_7F30D658;
    case 0x7F30D65Cu: goto label_7F30D65C;
    case 0x7F30D660u: goto label_7F30D660;
    case 0x7F30D664u: goto label_7F30D664;
    case 0x7F30D668u: goto label_7F30D668;
    case 0x7F30D66Cu: goto label_7F30D66C;
    case 0x7F30D670u: goto label_7F30D670;
    case 0x7F30D674u: goto label_7F30D674;
    case 0x7F30D678u: goto label_7F30D678;
    case 0x7F30D67Cu: goto label_7F30D67C;
    case 0x7F30D680u: goto label_7F30D680;
    case 0x7F30D684u: goto label_7F30D684;
    case 0x7F30D688u: goto label_7F30D688;
    case 0x7F30D68Cu: goto label_7F30D68C;
    case 0x7F30D690u: goto label_7F30D690;
    case 0x7F30D694u: goto label_7F30D694;
    case 0x7F30D698u: goto label_7F30D698;
    case 0x7F30D69Cu: goto label_7F30D69C;
    case 0x7F30D6A0u: goto label_7F30D6A0;
    case 0x7F30D6A4u: goto label_7F30D6A4;
    case 0x7F30D6A8u: goto label_7F30D6A8;
    case 0x7F30D6ACu: goto label_7F30D6AC;
    case 0x7F30D6B0u: goto label_7F30D6B0;
    case 0x7F30D6B4u: goto label_7F30D6B4;
    case 0x7F30D6B8u: goto label_7F30D6B8;
    case 0x7F30D6BCu: goto label_7F30D6BC;
    case 0x7F30D6C0u: goto label_7F30D6C0;
    case 0x7F30D6C4u: goto label_7F30D6C4;
    case 0x7F30D6C8u: goto label_7F30D6C8;
    case 0x7F30D6CCu: goto label_7F30D6CC;
    case 0x7F30D6D0u: goto label_7F30D6D0;
    case 0x7F30D6D4u: goto label_7F30D6D4;
    case 0x7F30D6D8u: goto label_7F30D6D8;
    case 0x7F30D6DCu: goto label_7F30D6DC;
    case 0x7F30D6E0u: goto label_7F30D6E0;
    case 0x7F30D6E4u: goto label_7F30D6E4;
    case 0x7F30D6E8u: goto label_7F30D6E8;
    case 0x7F30D6ECu: goto label_7F30D6EC;
    case 0x7F30D6F0u: goto label_7F30D6F0;
    case 0x7F30D6F4u: goto label_7F30D6F4;
    case 0x7F30D6F8u: goto label_7F30D6F8;
    case 0x7F30D6FCu: goto label_7F30D6FC;
    case 0x7F30D700u: goto label_7F30D700;
    case 0x7F30D704u: goto label_7F30D704;
    case 0x7F30D708u: goto label_7F30D708;
    case 0x7F30D70Cu: goto label_7F30D70C;
    case 0x7F30D710u: goto label_7F30D710;
    case 0x7F30D714u: goto label_7F30D714;
    case 0x7F30D718u: goto label_7F30D718;
    case 0x7F30D71Cu: goto label_7F30D71C;
    case 0x7F30D720u: goto label_7F30D720;
    case 0x7F30D724u: goto label_7F30D724;
    case 0x7F30D728u: goto label_7F30D728;
    case 0x7F30D72Cu: goto label_7F30D72C;
    case 0x7F30D730u: goto label_7F30D730;
    case 0x7F30D734u: goto label_7F30D734;
    case 0x7F30D738u: goto label_7F30D738;
    case 0x7F30D73Cu: goto label_7F30D73C;
    case 0x7F30D740u: goto label_7F30D740;
    case 0x7F30D744u: goto label_7F30D744;
    case 0x7F30D748u: goto label_7F30D748;
    case 0x7F30D74Cu: goto label_7F30D74C;
    case 0x7F30D750u: goto label_7F30D750;
    case 0x7F30D754u: goto label_7F30D754;
    case 0x7F30D758u: goto label_7F30D758;
    case 0x7F30D75Cu: goto label_7F30D75C;
    case 0x7F30D760u: goto label_7F30D760;
    case 0x7F30D764u: goto label_7F30D764;
    case 0x7F30D768u: goto label_7F30D768;
    case 0x7F30D76Cu: goto label_7F30D76C;
    case 0x7F30D770u: goto label_7F30D770;
    case 0x7F30D774u: goto label_7F30D774;
    case 0x7F30D778u: goto label_7F30D778;
    case 0x7F30D77Cu: goto label_7F30D77C;
    case 0x7F30D780u: goto label_7F30D780;
    case 0x7F30D784u: goto label_7F30D784;
    case 0x7F30D788u: goto label_7F30D788;
    case 0x7F30D78Cu: goto label_7F30D78C;
    case 0x7F30D790u: goto label_7F30D790;
    case 0x7F30D794u: goto label_7F30D794;
    case 0x7F30D798u: goto label_7F30D798;
    case 0x7F30D79Cu: goto label_7F30D79C;
    case 0x7F30D7A0u: goto label_7F30D7A0;
    case 0x7F30D7A4u: goto label_7F30D7A4;
    case 0x7F30D7A8u: goto label_7F30D7A8;
    case 0x7F30D7ACu: goto label_7F30D7AC;
    case 0x7F30D7B0u: goto label_7F30D7B0;
    case 0x7F30D7B4u: goto label_7F30D7B4;
    case 0x7F30D7B8u: goto label_7F30D7B8;
    case 0x7F30D7BCu: goto label_7F30D7BC;
    case 0x7F30D7C0u: goto label_7F30D7C0;
    case 0x7F30D7C4u: goto label_7F30D7C4;
    case 0x7F30D7C8u: goto label_7F30D7C8;
    case 0x7F30D7CCu: goto label_7F30D7CC;
    case 0x7F30D7D0u: goto label_7F30D7D0;
    case 0x7F30D7D4u: goto label_7F30D7D4;
    case 0x7F30D7D8u: goto label_7F30D7D8;
    case 0x7F30D7DCu: goto label_7F30D7DC;
    case 0x7F30D7E0u: goto label_7F30D7E0;
    case 0x7F30D7E4u: goto label_7F30D7E4;
    case 0x7F30D7E8u: goto label_7F30D7E8;
    case 0x7F30D7ECu: goto label_7F30D7EC;
    case 0x7F30D7F0u: goto label_7F30D7F0;
    case 0x7F30D7F4u: goto label_7F30D7F4;
    case 0x7F30D7F8u: goto label_7F30D7F8;
    case 0x7F30D7FCu: goto label_7F30D7FC;
    case 0x7F30D800u: goto label_7F30D800;
    case 0x7F30D804u: goto label_7F30D804;
    case 0x7F30D808u: goto label_7F30D808;
    case 0x7F30D80Cu: goto label_7F30D80C;
    case 0x7F30D810u: goto label_7F30D810;
    case 0x7F30D814u: goto label_7F30D814;
    case 0x7F30D818u: goto label_7F30D818;
    case 0x7F30D81Cu: goto label_7F30D81C;
    case 0x7F30D820u: goto label_7F30D820;
    case 0x7F30D824u: goto label_7F30D824;
    case 0x7F30D828u: goto label_7F30D828;
    case 0x7F30D82Cu: goto label_7F30D82C;
    case 0x7F30D830u: goto label_7F30D830;
    case 0x7F30D834u: goto label_7F30D834;
    case 0x7F30D838u: goto label_7F30D838;
    case 0x7F30D83Cu: goto label_7F30D83C;
    case 0x7F30D840u: goto label_7F30D840;
    case 0x7F30D844u: goto label_7F30D844;
    case 0x7F30D848u: goto label_7F30D848;
    case 0x7F30D84Cu: goto label_7F30D84C;
    case 0x7F30D850u: goto label_7F30D850;
    case 0x7F30D854u: goto label_7F30D854;
    case 0x7F30D858u: goto label_7F30D858;
    case 0x7F30D85Cu: goto label_7F30D85C;
    case 0x7F30D860u: goto label_7F30D860;
    case 0x7F30D864u: goto label_7F30D864;
    case 0x7F30D868u: goto label_7F30D868;
    case 0x7F30D86Cu: goto label_7F30D86C;
    case 0x7F30D870u: goto label_7F30D870;
    case 0x7F30D874u: goto label_7F30D874;
    case 0x7F30D878u: goto label_7F30D878;
    case 0x7F30D87Cu: goto label_7F30D87C;
    case 0x7F30D880u: goto label_7F30D880;
    case 0x7F30D884u: goto label_7F30D884;
    case 0x7F30D888u: goto label_7F30D888;
    case 0x7F30D88Cu: goto label_7F30D88C;
    case 0x7F30D890u: goto label_7F30D890;
    case 0x7F30D894u: goto label_7F30D894;
    case 0x7F30D898u: goto label_7F30D898;
    case 0x7F30D89Cu: goto label_7F30D89C;
    case 0x7F30D8A0u: goto label_7F30D8A0;
    case 0x7F30D8A4u: goto label_7F30D8A4;
    case 0x7F30D8A8u: goto label_7F30D8A8;
    case 0x7F30D8ACu: goto label_7F30D8AC;
    case 0x7F30D8B0u: goto label_7F30D8B0;
    case 0x7F30D8B4u: goto label_7F30D8B4;
    case 0x7F30D8B8u: goto label_7F30D8B8;
    case 0x7F30D8BCu: goto label_7F30D8BC;
    case 0x7F30D8C0u: goto label_7F30D8C0;
    case 0x7F30D8C4u: goto label_7F30D8C4;
    case 0x7F30D8C8u: goto label_7F30D8C8;
    case 0x7F30D8CCu: goto label_7F30D8CC;
    case 0x7F30D8D0u: goto label_7F30D8D0;
    case 0x7F30D8D4u: goto label_7F30D8D4;
    case 0x7F30D8D8u: goto label_7F30D8D8;
    case 0x7F30D8DCu: goto label_7F30D8DC;
    case 0x7F30D8E0u: goto label_7F30D8E0;
    case 0x7F30D8E4u: goto label_7F30D8E4;
    case 0x7F30D8E8u: goto label_7F30D8E8;
    case 0x7F30D8ECu: goto label_7F30D8EC;
    case 0x7F30D8F0u: goto label_7F30D8F0;
    case 0x7F30D8F4u: goto label_7F30D8F4;
    case 0x7F30D8F8u: goto label_7F30D8F8;
    case 0x7F30D8FCu: goto label_7F30D8FC;
    case 0x7F30D900u: goto label_7F30D900;
    case 0x7F30D904u: goto label_7F30D904;
    case 0x7F30D908u: goto label_7F30D908;
    case 0x7F30D90Cu: goto label_7F30D90C;
    case 0x7F30D910u: goto label_7F30D910;
    case 0x7F30D914u: goto label_7F30D914;
    case 0x7F30D918u: goto label_7F30D918;
    case 0x7F30D91Cu: goto label_7F30D91C;
    case 0x7F30D920u: goto label_7F30D920;
    case 0x7F30D924u: goto label_7F30D924;
    case 0x7F30D928u: goto label_7F30D928;
    case 0x7F30D92Cu: goto label_7F30D92C;
    case 0x7F30D930u: goto label_7F30D930;
    case 0x7F30D934u: goto label_7F30D934;
    case 0x7F30D938u: goto label_7F30D938;
    case 0x7F30D93Cu: goto label_7F30D93C;
    case 0x7F30D940u: goto label_7F30D940;
    case 0x7F30D944u: goto label_7F30D944;
    case 0x7F30D948u: goto label_7F30D948;
    case 0x7F30D94Cu: goto label_7F30D94C;
    case 0x7F30D950u: goto label_7F30D950;
    case 0x7F30D954u: goto label_7F30D954;
    case 0x7F30D958u: goto label_7F30D958;
    case 0x7F30D95Cu: goto label_7F30D95C;
    case 0x7F30D960u: goto label_7F30D960;
    case 0x7F30D964u: goto label_7F30D964;
    case 0x7F30D968u: goto label_7F30D968;
    case 0x7F30D96Cu: goto label_7F30D96C;
    case 0x7F30D970u: goto label_7F30D970;
    case 0x7F30D974u: goto label_7F30D974;
    case 0x7F30D978u: goto label_7F30D978;
    case 0x7F30D97Cu: goto label_7F30D97C;
    case 0x7F30D980u: goto label_7F30D980;
    case 0x7F30D984u: goto label_7F30D984;
    case 0x7F30D988u: goto label_7F30D988;
    case 0x7F30D98Cu: goto label_7F30D98C;
    case 0x7F30D990u: goto label_7F30D990;
    case 0x7F30D994u: goto label_7F30D994;
    case 0x7F30D998u: goto label_7F30D998;
    case 0x7F30D99Cu: goto label_7F30D99C;
    case 0x7F30D9A0u: goto label_7F30D9A0;
    case 0x7F30D9A4u: goto label_7F30D9A4;
    case 0x7F30D9A8u: goto label_7F30D9A8;
    case 0x7F30D9ACu: goto label_7F30D9AC;
    case 0x7F30D9B0u: goto label_7F30D9B0;
    case 0x7F30D9B4u: goto label_7F30D9B4;
    case 0x7F30D9B8u: goto label_7F30D9B8;
    case 0x7F30D9BCu: goto label_7F30D9BC;
    case 0x7F30D9C0u: goto label_7F30D9C0;
    case 0x7F30D9C4u: goto label_7F30D9C4;
    case 0x7F30D9C8u: goto label_7F30D9C8;
    case 0x7F30D9CCu: goto label_7F30D9CC;
    case 0x7F30D9D0u: goto label_7F30D9D0;
    case 0x7F30D9D4u: goto label_7F30D9D4;
    case 0x7F30D9D8u: goto label_7F30D9D8;
    case 0x7F30D9DCu: goto label_7F30D9DC;
    case 0x7F30D9E0u: goto label_7F30D9E0;
    case 0x7F30D9E4u: goto label_7F30D9E4;
    case 0x7F30D9E8u: goto label_7F30D9E8;
    case 0x7F30D9ECu: goto label_7F30D9EC;
    case 0x7F30D9F0u: goto label_7F30D9F0;
    case 0x7F30D9F4u: goto label_7F30D9F4;
    case 0x7F30D9F8u: goto label_7F30D9F8;
    case 0x7F30D9FCu: goto label_7F30D9FC;
    case 0x7F30DA00u: goto label_7F30DA00;
    case 0x7F30DA04u: goto label_7F30DA04;
    case 0x7F30DA08u: goto label_7F30DA08;
    case 0x7F30DA0Cu: goto label_7F30DA0C;
    case 0x7F30DA10u: goto label_7F30DA10;
    case 0x7F30DA14u: goto label_7F30DA14;
    case 0x7F30DA18u: goto label_7F30DA18;
    case 0x7F30DA1Cu: goto label_7F30DA1C;
    case 0x7F30DA20u: goto label_7F30DA20;
    case 0x7F30DA24u: goto label_7F30DA24;
    case 0x7F30DA28u: goto label_7F30DA28;
    case 0x7F30DA2Cu: goto label_7F30DA2C;
    case 0x7F30DA30u: goto label_7F30DA30;
    case 0x7F30DA34u: goto label_7F30DA34;
    case 0x7F30DA38u: goto label_7F30DA38;
    case 0x7F30DA3Cu: goto label_7F30DA3C;
    case 0x7F30DA40u: goto label_7F30DA40;
    case 0x7F30DA44u: goto label_7F30DA44;
    case 0x7F30DA48u: goto label_7F30DA48;
    case 0x7F30DA4Cu: goto label_7F30DA4C;
    case 0x7F30DA50u: goto label_7F30DA50;
    case 0x7F30DA54u: goto label_7F30DA54;
    case 0x7F30DA58u: goto label_7F30DA58;
    case 0x7F30DA5Cu: goto label_7F30DA5C;
    case 0x7F30DA60u: goto label_7F30DA60;
    case 0x7F30DA64u: goto label_7F30DA64;
    case 0x7F30DA68u: goto label_7F30DA68;
    case 0x7F30DA6Cu: goto label_7F30DA6C;
    case 0x7F30DA70u: goto label_7F30DA70;
    case 0x7F30DA74u: goto label_7F30DA74;
    case 0x7F30DA78u: goto label_7F30DA78;
    case 0x7F30DA7Cu: goto label_7F30DA7C;
    case 0x7F30DA80u: goto label_7F30DA80;
    case 0x7F30DA84u: goto label_7F30DA84;
    case 0x7F30DA88u: goto label_7F30DA88;
    case 0x7F30DA8Cu: goto label_7F30DA8C;
    case 0x7F30DA90u: goto label_7F30DA90;
    case 0x7F30DA94u: goto label_7F30DA94;
    case 0x7F30DA98u: goto label_7F30DA98;
    case 0x7F30DA9Cu: goto label_7F30DA9C;
    case 0x7F30DAA0u: goto label_7F30DAA0;
    case 0x7F30DAA4u: goto label_7F30DAA4;
    case 0x7F30DAA8u: goto label_7F30DAA8;
    case 0x7F30DAACu: goto label_7F30DAAC;
    case 0x7F30DAB0u: goto label_7F30DAB0;
    case 0x7F30DAB4u: goto label_7F30DAB4;
    case 0x7F30DAB8u: goto label_7F30DAB8;
    case 0x7F30DABCu: goto label_7F30DABC;
    case 0x7F30DAC0u: goto label_7F30DAC0;
    case 0x7F30DAC4u: goto label_7F30DAC4;
    case 0x7F30DAC8u: goto label_7F30DAC8;
    case 0x7F30DACCu: goto label_7F30DACC;
    case 0x7F30DAD0u: goto label_7F30DAD0;
    case 0x7F30DAD4u: goto label_7F30DAD4;
    case 0x7F30DAD8u: goto label_7F30DAD8;
    case 0x7F30DADCu: goto label_7F30DADC;
    case 0x7F30DAE0u: goto label_7F30DAE0;
    case 0x7F30DAE4u: goto label_7F30DAE4;
    case 0x7F30DAE8u: goto label_7F30DAE8;
    case 0x7F30DAECu: goto label_7F30DAEC;
    case 0x7F30DAF0u: goto label_7F30DAF0;
    case 0x7F30DAF4u: goto label_7F30DAF4;
    case 0x7F30DAF8u: goto label_7F30DAF8;
    case 0x7F30DAFCu: goto label_7F30DAFC;
    case 0x7F30DB00u: goto label_7F30DB00;
    case 0x7F30DB04u: goto label_7F30DB04;
    case 0x7F30DB08u: goto label_7F30DB08;
    case 0x7F30DB0Cu: goto label_7F30DB0C;
    case 0x7F30DB10u: goto label_7F30DB10;
    case 0x7F30DB14u: goto label_7F30DB14;
    case 0x7F30DB18u: goto label_7F30DB18;
    case 0x7F30DB1Cu: goto label_7F30DB1C;
    case 0x7F30DB20u: goto label_7F30DB20;
    case 0x7F30DB24u: goto label_7F30DB24;
    case 0x7F30DB28u: goto label_7F30DB28;
    case 0x7F30DB2Cu: goto label_7F30DB2C;
    case 0x7F30DB30u: goto label_7F30DB30;
    case 0x7F30DB34u: goto label_7F30DB34;
    case 0x7F30DB38u: goto label_7F30DB38;
    case 0x7F30DB3Cu: goto label_7F30DB3C;
    case 0x7F30DB40u: goto label_7F30DB40;
    case 0x7F30DB44u: goto label_7F30DB44;
    case 0x7F30DB48u: goto label_7F30DB48;
    case 0x7F30DB4Cu: goto label_7F30DB4C;
    case 0x7F30DB50u: goto label_7F30DB50;
    case 0x7F30DB54u: goto label_7F30DB54;
    case 0x7F30DB58u: goto label_7F30DB58;
    case 0x7F30DB5Cu: goto label_7F30DB5C;
    case 0x7F30DB60u: goto label_7F30DB60;
    case 0x7F30DB64u: goto label_7F30DB64;
    case 0x7F30DB68u: goto label_7F30DB68;
    case 0x7F30DB6Cu: goto label_7F30DB6C;
    case 0x7F30DB70u: goto label_7F30DB70;
    case 0x7F30DB74u: goto label_7F30DB74;
    case 0x7F30DB78u: goto label_7F30DB78;
    case 0x7F30DB7Cu: goto label_7F30DB7C;
    case 0x7F30DB80u: goto label_7F30DB80;
    case 0x7F30DB84u: goto label_7F30DB84;
    case 0x7F30DB88u: goto label_7F30DB88;
    case 0x7F30DB8Cu: goto label_7F30DB8C;
    case 0x7F30DB90u: goto label_7F30DB90;
    case 0x7F30DB94u: goto label_7F30DB94;
    case 0x7F30DB98u: goto label_7F30DB98;
    case 0x7F30DB9Cu: goto label_7F30DB9C;
    case 0x7F30DBA0u: goto label_7F30DBA0;
    case 0x7F30DBA4u: goto label_7F30DBA4;
    case 0x7F30DBA8u: goto label_7F30DBA8;
    case 0x7F30DBACu: goto label_7F30DBAC;
    case 0x7F30DBB0u: goto label_7F30DBB0;
    case 0x7F30DBB4u: goto label_7F30DBB4;
    case 0x7F30DBB8u: goto label_7F30DBB8;
    case 0x7F30DBBCu: goto label_7F30DBBC;
    case 0x7F30DBC0u: goto label_7F30DBC0;
    case 0x7F30DBC4u: goto label_7F30DBC4;
    case 0x7F30DBC8u: goto label_7F30DBC8;
    case 0x7F30DBCCu: goto label_7F30DBCC;
    case 0x7F30DBD0u: goto label_7F30DBD0;
    case 0x7F30DBD4u: goto label_7F30DBD4;
    case 0x7F30DBD8u: goto label_7F30DBD8;
    case 0x7F30DBDCu: goto label_7F30DBDC;
    case 0x7F30DBE0u: goto label_7F30DBE0;
    case 0x7F30DBE4u: goto label_7F30DBE4;
    case 0x7F30DBE8u: goto label_7F30DBE8;
    case 0x7F30DBECu: goto label_7F30DBEC;
    case 0x7F30DBF0u: goto label_7F30DBF0;
    case 0x7F30DBF4u: goto label_7F30DBF4;
    case 0x7F30DBF8u: goto label_7F30DBF8;
    case 0x7F30DBFCu: goto label_7F30DBFC;
    case 0x7F30DC00u: goto label_7F30DC00;
    case 0x7F30DC04u: goto label_7F30DC04;
    case 0x7F30DC08u: goto label_7F30DC08;
    case 0x7F30DC0Cu: goto label_7F30DC0C;
    case 0x7F30DC10u: goto label_7F30DC10;
    case 0x7F30DC14u: goto label_7F30DC14;
    case 0x7F30DC18u: goto label_7F30DC18;
    case 0x7F30DC1Cu: goto label_7F30DC1C;
    case 0x7F30DC20u: goto label_7F30DC20;
    case 0x7F30DC24u: goto label_7F30DC24;
    case 0x7F30DC28u: goto label_7F30DC28;
    case 0x7F30DC2Cu: goto label_7F30DC2C;
    case 0x7F30DC30u: goto label_7F30DC30;
    case 0x7F30DC34u: goto label_7F30DC34;
    case 0x7F30DC38u: goto label_7F30DC38;
    case 0x7F30DC3Cu: goto label_7F30DC3C;
    case 0x7F30DC40u: goto label_7F30DC40;
    case 0x7F30DC44u: goto label_7F30DC44;
    case 0x7F30DC48u: goto label_7F30DC48;
    case 0x7F30DC4Cu: goto label_7F30DC4C;
    case 0x7F30DC50u: goto label_7F30DC50;
    case 0x7F30DC54u: goto label_7F30DC54;
    case 0x7F30DC58u: goto label_7F30DC58;
    case 0x7F30DC5Cu: goto label_7F30DC5C;
    case 0x7F30DC60u: goto label_7F30DC60;
    case 0x7F30DC64u: goto label_7F30DC64;
    case 0x7F30DC68u: goto label_7F30DC68;
    case 0x7F30DC6Cu: goto label_7F30DC6C;
    case 0x7F30DC70u: goto label_7F30DC70;
    case 0x7F30DC74u: goto label_7F30DC74;
    case 0x7F30DC78u: goto label_7F30DC78;
    case 0x7F30DC7Cu: goto label_7F30DC7C;
    case 0x7F30DC80u: goto label_7F30DC80;
    case 0x7F30DC84u: goto label_7F30DC84;
    case 0x7F30DC88u: goto label_7F30DC88;
    case 0x7F30DC8Cu: goto label_7F30DC8C;
    case 0x7F30DC90u: goto label_7F30DC90;
    case 0x7F30DC94u: goto label_7F30DC94;
    case 0x7F30DC98u: goto label_7F30DC98;
    case 0x7F30DC9Cu: goto label_7F30DC9C;
    case 0x7F30DCA0u: goto label_7F30DCA0;
    case 0x7F30DCA4u: goto label_7F30DCA4;
    case 0x7F30DCA8u: goto label_7F30DCA8;
    case 0x7F30DCACu: goto label_7F30DCAC;
    case 0x7F30DCB0u: goto label_7F30DCB0;
    case 0x7F30DCB4u: goto label_7F30DCB4;
    case 0x7F30DCB8u: goto label_7F30DCB8;
    case 0x7F30DCBCu: goto label_7F30DCBC;
    case 0x7F30DCC0u: goto label_7F30DCC0;
    case 0x7F30DCC4u: goto label_7F30DCC4;
    case 0x7F30DCC8u: goto label_7F30DCC8;
    case 0x7F30DCCCu: goto label_7F30DCCC;
    case 0x7F30DCD0u: goto label_7F30DCD0;
    case 0x7F30DCD4u: goto label_7F30DCD4;
    case 0x7F30DCD8u: goto label_7F30DCD8;
    case 0x7F30DCDCu: goto label_7F30DCDC;
    case 0x7F30DCE0u: goto label_7F30DCE0;
    case 0x7F30DCE4u: goto label_7F30DCE4;
    case 0x7F30DCE8u: goto label_7F30DCE8;
    case 0x7F30DCECu: goto label_7F30DCEC;
    case 0x7F30DCF0u: goto label_7F30DCF0;
    case 0x7F30DCF4u: goto label_7F30DCF4;
    case 0x7F30DCF8u: goto label_7F30DCF8;
    case 0x7F30DCFCu: goto label_7F30DCFC;
    case 0x7F30DD00u: goto label_7F30DD00;
    case 0x7F30DD04u: goto label_7F30DD04;
    case 0x7F30DD08u: goto label_7F30DD08;
    case 0x7F30DD0Cu: goto label_7F30DD0C;
    case 0x7F30DD10u: goto label_7F30DD10;
    case 0x7F30DD14u: goto label_7F30DD14;
    case 0x7F30DD18u: goto label_7F30DD18;
    case 0x7F30DD1Cu: goto label_7F30DD1C;
    case 0x7F30DD20u: goto label_7F30DD20;
    case 0x7F30DD24u: goto label_7F30DD24;
    case 0x7F30DD28u: goto label_7F30DD28;
    case 0x7F30DD2Cu: goto label_7F30DD2C;
    case 0x7F30DD30u: goto label_7F30DD30;
    case 0x7F30DD34u: goto label_7F30DD34;
    case 0x7F30DD38u: goto label_7F30DD38;
    case 0x7F30DD3Cu: goto label_7F30DD3C;
    case 0x7F30DD40u: goto label_7F30DD40;
    case 0x7F30DD44u: goto label_7F30DD44;
    case 0x7F30DD48u: goto label_7F30DD48;
    case 0x7F30DD4Cu: goto label_7F30DD4C;
    case 0x7F30DD50u: goto label_7F30DD50;
    case 0x7F30DD54u: goto label_7F30DD54;
    case 0x7F30DD58u: goto label_7F30DD58;
    case 0x7F30DD5Cu: goto label_7F30DD5C;
    case 0x7F30DD60u: goto label_7F30DD60;
    case 0x7F30DD64u: goto label_7F30DD64;
    case 0x7F30DD68u: goto label_7F30DD68;
    case 0x7F30DD6Cu: goto label_7F30DD6C;
    case 0x7F30DD70u: goto label_7F30DD70;
    case 0x7F30DD74u: goto label_7F30DD74;
    case 0x7F30DD78u: goto label_7F30DD78;
    case 0x7F30DD7Cu: goto label_7F30DD7C;
    case 0x7F30DD80u: goto label_7F30DD80;
    case 0x7F30DD84u: goto label_7F30DD84;
    case 0x7F30DD88u: goto label_7F30DD88;
    case 0x7F30DD8Cu: goto label_7F30DD8C;
    case 0x7F30DD90u: goto label_7F30DD90;
    case 0x7F30DD94u: goto label_7F30DD94;
    case 0x7F30DD98u: goto label_7F30DD98;
    case 0x7F30DD9Cu: goto label_7F30DD9C;
    case 0x7F30DDA0u: goto label_7F30DDA0;
    case 0x7F30DDA4u: goto label_7F30DDA4;
    case 0x7F30DDA8u: goto label_7F30DDA8;
    case 0x7F30DDACu: goto label_7F30DDAC;
    case 0x7F30DDB0u: goto label_7F30DDB0;
    case 0x7F30DDB4u: goto label_7F30DDB4;
    case 0x7F30DDB8u: goto label_7F30DDB8;
    case 0x7F30DDBCu: goto label_7F30DDBC;
    case 0x7F30DDC0u: goto label_7F30DDC0;
    case 0x7F30DDC4u: goto label_7F30DDC4;
    case 0x7F30DDC8u: goto label_7F30DDC8;
    case 0x7F30DDCCu: goto label_7F30DDCC;
    case 0x7F30DDD0u: goto label_7F30DDD0;
    case 0x7F30DDD4u: goto label_7F30DDD4;
    case 0x7F30DDD8u: goto label_7F30DDD8;
    case 0x7F30DDDCu: goto label_7F30DDDC;
    case 0x7F30DDE0u: goto label_7F30DDE0;
    case 0x7F30DDE4u: goto label_7F30DDE4;
    case 0x7F30DDE8u: goto label_7F30DDE8;
    case 0x7F30DDECu: goto label_7F30DDEC;
    case 0x7F30DDF0u: goto label_7F30DDF0;
    case 0x7F30DDF4u: goto label_7F30DDF4;
    case 0x7F30DDF8u: goto label_7F30DDF8;
    case 0x7F30DDFCu: goto label_7F30DDFC;
    case 0x7F30DE00u: goto label_7F30DE00;
    case 0x7F30DE04u: goto label_7F30DE04;
    case 0x7F30DE08u: goto label_7F30DE08;
    case 0x7F30DE0Cu: goto label_7F30DE0C;
    case 0x7F30DE10u: goto label_7F30DE10;
    case 0x7F30DE14u: goto label_7F30DE14;
    case 0x7F30DE18u: goto label_7F30DE18;
    case 0x7F30DE1Cu: goto label_7F30DE1C;
    case 0x7F30DE20u: goto label_7F30DE20;
    case 0x7F30DE24u: goto label_7F30DE24;
    case 0x7F30DE28u: goto label_7F30DE28;
    case 0x7F30DE2Cu: goto label_7F30DE2C;
    case 0x7F30DE30u: goto label_7F30DE30;
    case 0x7F30DE34u: goto label_7F30DE34;
    case 0x7F30DE38u: goto label_7F30DE38;
    case 0x7F30DE3Cu: goto label_7F30DE3C;
    case 0x7F30DE40u: goto label_7F30DE40;
    case 0x7F30DE44u: goto label_7F30DE44;
    case 0x7F30DE48u: goto label_7F30DE48;
    case 0x7F30DE4Cu: goto label_7F30DE4C;
    case 0x7F30DE50u: goto label_7F30DE50;
    case 0x7F30DE54u: goto label_7F30DE54;
    case 0x7F30DE58u: goto label_7F30DE58;
    case 0x7F30DE5Cu: goto label_7F30DE5C;
    case 0x7F30DE60u: goto label_7F30DE60;
    case 0x7F30DE64u: goto label_7F30DE64;
    case 0x7F30DE68u: goto label_7F30DE68;
    case 0x7F30DE6Cu: goto label_7F30DE6C;
    case 0x7F30DE70u: goto label_7F30DE70;
    case 0x7F30DE74u: goto label_7F30DE74;
    case 0x7F30DE78u: goto label_7F30DE78;
    case 0x7F30DE7Cu: goto label_7F30DE7C;
    case 0x7F30DE80u: goto label_7F30DE80;
    case 0x7F30DE84u: goto label_7F30DE84;
    case 0x7F30DE88u: goto label_7F30DE88;
    case 0x7F30DE8Cu: goto label_7F30DE8C;
    case 0x7F30DE90u: goto label_7F30DE90;
    case 0x7F30DE94u: goto label_7F30DE94;
    case 0x7F30DE98u: goto label_7F30DE98;
    case 0x7F30DE9Cu: goto label_7F30DE9C;
    case 0x7F30DEA0u: goto label_7F30DEA0;
    case 0x7F30DEA4u: goto label_7F30DEA4;
    case 0x7F30DEA8u: goto label_7F30DEA8;
    case 0x7F30DEACu: goto label_7F30DEAC;
    case 0x7F30DEB0u: goto label_7F30DEB0;
    case 0x7F30DEB4u: goto label_7F30DEB4;
    case 0x7F30DEB8u: goto label_7F30DEB8;
    case 0x7F30DEBCu: goto label_7F30DEBC;
    case 0x7F30DEC0u: goto label_7F30DEC0;
    case 0x7F30DEC4u: goto label_7F30DEC4;
    case 0x7F30DEC8u: goto label_7F30DEC8;
    case 0x7F30DECCu: goto label_7F30DECC;
    case 0x7F30DED0u: goto label_7F30DED0;
    case 0x7F30DED4u: goto label_7F30DED4;
    case 0x7F30DED8u: goto label_7F30DED8;
    case 0x7F30DEDCu: goto label_7F30DEDC;
    case 0x7F30DEE0u: goto label_7F30DEE0;
    case 0x7F30DEE4u: goto label_7F30DEE4;
    case 0x7F30DEE8u: goto label_7F30DEE8;
    case 0x7F30DEECu: goto label_7F30DEEC;
    case 0x7F30DEF0u: goto label_7F30DEF0;
    case 0x7F30DEF4u: goto label_7F30DEF4;
    case 0x7F30DEF8u: goto label_7F30DEF8;
    case 0x7F30DEFCu: goto label_7F30DEFC;
    case 0x7F30DF00u: goto label_7F30DF00;
    case 0x7F30DF04u: goto label_7F30DF04;
    case 0x7F30DF08u: goto label_7F30DF08;
    case 0x7F30DF0Cu: goto label_7F30DF0C;
    case 0x7F30DF10u: goto label_7F30DF10;
    case 0x7F30DF14u: goto label_7F30DF14;
    case 0x7F30DF18u: goto label_7F30DF18;
    case 0x7F30DF1Cu: goto label_7F30DF1C;
    case 0x7F30DF20u: goto label_7F30DF20;
    case 0x7F30DF24u: goto label_7F30DF24;
    case 0x7F30DF28u: goto label_7F30DF28;
    case 0x7F30DF2Cu: goto label_7F30DF2C;
    case 0x7F30DF30u: goto label_7F30DF30;
    case 0x7F30DF34u: goto label_7F30DF34;
    case 0x7F30DF38u: goto label_7F30DF38;
    case 0x7F30DF3Cu: goto label_7F30DF3C;
    case 0x7F30DF40u: goto label_7F30DF40;
    case 0x7F30DF44u: goto label_7F30DF44;
    case 0x7F30DF48u: goto label_7F30DF48;
    case 0x7F30DF4Cu: goto label_7F30DF4C;
    case 0x7F30DF50u: goto label_7F30DF50;
    case 0x7F30DF54u: goto label_7F30DF54;
    case 0x7F30DF58u: goto label_7F30DF58;
    case 0x7F30DF5Cu: goto label_7F30DF5C;
    case 0x7F30DF60u: goto label_7F30DF60;
    case 0x7F30DF64u: goto label_7F30DF64;
    case 0x7F30DF68u: goto label_7F30DF68;
    case 0x7F30DF6Cu: goto label_7F30DF6C;
    case 0x7F30DF70u: goto label_7F30DF70;
    case 0x7F30DF74u: goto label_7F30DF74;
    case 0x7F30DF78u: goto label_7F30DF78;
    case 0x7F30DF7Cu: goto label_7F30DF7C;
    case 0x7F30DF80u: goto label_7F30DF80;
    case 0x7F30DF84u: goto label_7F30DF84;
    case 0x7F30DF88u: goto label_7F30DF88;
    case 0x7F30DF8Cu: goto label_7F30DF8C;
    case 0x7F30DF90u: goto label_7F30DF90;
    case 0x7F30DF94u: goto label_7F30DF94;
    case 0x7F30DF98u: goto label_7F30DF98;
    case 0x7F30DF9Cu: goto label_7F30DF9C;
    case 0x7F30DFA0u: goto label_7F30DFA0;
    case 0x7F30DFA4u: goto label_7F30DFA4;
    case 0x7F30DFA8u: goto label_7F30DFA8;
    case 0x7F30DFACu: goto label_7F30DFAC;
    case 0x7F30DFB0u: goto label_7F30DFB0;
    case 0x7F30DFB4u: goto label_7F30DFB4;
    case 0x7F30DFB8u: goto label_7F30DFB8;
    case 0x7F30DFBCu: goto label_7F30DFBC;
    case 0x7F30DFC0u: goto label_7F30DFC0;
    case 0x7F30DFC4u: goto label_7F30DFC4;
    case 0x7F30DFC8u: goto label_7F30DFC8;
    case 0x7F30DFCCu: goto label_7F30DFCC;
    case 0x7F30DFD0u: goto label_7F30DFD0;
    case 0x7F30DFD4u: goto label_7F30DFD4;
    case 0x7F30DFD8u: goto label_7F30DFD8;
    case 0x7F30DFDCu: goto label_7F30DFDC;
    case 0x7F30DFE0u: goto label_7F30DFE0;
    case 0x7F30DFE4u: goto label_7F30DFE4;
    case 0x7F30DFE8u: goto label_7F30DFE8;
    case 0x7F30DFECu: goto label_7F30DFEC;
    case 0x7F30DFF0u: goto label_7F30DFF0;
    case 0x7F30DFF4u: goto label_7F30DFF4;
    case 0x7F30DFF8u: goto label_7F30DFF8;
    case 0x7F30DFFCu: goto label_7F30DFFC;
    case 0x7F30E000u: goto label_7F30E000;
    case 0x7F30E004u: goto label_7F30E004;
    case 0x7F30E008u: goto label_7F30E008;
    case 0x7F30E00Cu: goto label_7F30E00C;
    case 0x7F30E010u: goto label_7F30E010;
    case 0x7F30E014u: goto label_7F30E014;
    case 0x7F30E018u: goto label_7F30E018;
    case 0x7F30E01Cu: goto label_7F30E01C;
    case 0x7F30E020u: goto label_7F30E020;
    case 0x7F30E024u: goto label_7F30E024;
    case 0x7F30E028u: goto label_7F30E028;
    case 0x7F30E02Cu: goto label_7F30E02C;
    case 0x7F30E030u: goto label_7F30E030;
    case 0x7F30E034u: goto label_7F30E034;
    case 0x7F30E038u: goto label_7F30E038;
    case 0x7F30E03Cu: goto label_7F30E03C;
    case 0x7F30E040u: goto label_7F30E040;
    case 0x7F30E044u: goto label_7F30E044;
    case 0x7F30E048u: goto label_7F30E048;
    case 0x7F30E04Cu: goto label_7F30E04C;
    case 0x7F30E050u: goto label_7F30E050;
    case 0x7F30E054u: goto label_7F30E054;
    case 0x7F30E058u: goto label_7F30E058;
    case 0x7F30E05Cu: goto label_7F30E05C;
    case 0x7F30E060u: goto label_7F30E060;
    case 0x7F30E064u: goto label_7F30E064;
    case 0x7F30E068u: goto label_7F30E068;
    case 0x7F30E06Cu: goto label_7F30E06C;
    case 0x7F30E070u: goto label_7F30E070;
    case 0x7F30E074u: goto label_7F30E074;
    case 0x7F30E078u: goto label_7F30E078;
    case 0x7F30E07Cu: goto label_7F30E07C;
    case 0x7F30E080u: goto label_7F30E080;
    case 0x7F30E084u: goto label_7F30E084;
    case 0x7F30E088u: goto label_7F30E088;
    case 0x7F30E08Cu: goto label_7F30E08C;
    case 0x7F30E090u: goto label_7F30E090;
    case 0x7F30E094u: goto label_7F30E094;
    case 0x7F30E098u: goto label_7F30E098;
    case 0x7F30E09Cu: goto label_7F30E09C;
    case 0x7F30E0A0u: goto label_7F30E0A0;
    case 0x7F30E0A4u: goto label_7F30E0A4;
    case 0x7F30E0A8u: goto label_7F30E0A8;
    case 0x7F30E0ACu: goto label_7F30E0AC;
    case 0x7F30E0B0u: goto label_7F30E0B0;
    case 0x7F30E0B4u: goto label_7F30E0B4;
    case 0x7F30E0B8u: goto label_7F30E0B8;
    case 0x7F30E0BCu: goto label_7F30E0BC;
    case 0x7F30E0C0u: goto label_7F30E0C0;
    case 0x7F30E0C4u: goto label_7F30E0C4;
    case 0x7F30E0C8u: goto label_7F30E0C8;
    case 0x7F30E0CCu: goto label_7F30E0CC;
    case 0x7F30E0D0u: goto label_7F30E0D0;
    case 0x7F30E0D4u: goto label_7F30E0D4;
    case 0x7F30E0D8u: goto label_7F30E0D8;
    case 0x7F30E0DCu: goto label_7F30E0DC;
    case 0x7F30E0E0u: goto label_7F30E0E0;
    case 0x7F30E0E4u: goto label_7F30E0E4;
    case 0x7F30E0E8u: goto label_7F30E0E8;
    case 0x7F30E0ECu: goto label_7F30E0EC;
    case 0x7F30E0F0u: goto label_7F30E0F0;
    case 0x7F30E0F4u: goto label_7F30E0F4;
    case 0x7F30E0F8u: goto label_7F30E0F8;
    case 0x7F30E0FCu: goto label_7F30E0FC;
    case 0x7F30E100u: goto label_7F30E100;
    case 0x7F30E104u: goto label_7F30E104;
    case 0x7F30E108u: goto label_7F30E108;
    case 0x7F30E10Cu: goto label_7F30E10C;
    case 0x7F30E110u: goto label_7F30E110;
    case 0x7F30E114u: goto label_7F30E114;
    case 0x7F30E118u: goto label_7F30E118;
    case 0x7F30E11Cu: goto label_7F30E11C;
    case 0x7F30E120u: goto label_7F30E120;
    case 0x7F30E124u: goto label_7F30E124;
    case 0x7F30E128u: goto label_7F30E128;
    case 0x7F30E12Cu: goto label_7F30E12C;
    case 0x7F30E130u: goto label_7F30E130;
    case 0x7F30E134u: goto label_7F30E134;
    case 0x7F30E138u: goto label_7F30E138;
    case 0x7F30E13Cu: goto label_7F30E13C;
    case 0x7F30E140u: goto label_7F30E140;
    case 0x7F30E144u: goto label_7F30E144;
    case 0x7F30E148u: goto label_7F30E148;
    case 0x7F30E14Cu: goto label_7F30E14C;
    case 0x7F30E150u: goto label_7F30E150;
    case 0x7F30E154u: goto label_7F30E154;
    case 0x7F30E158u: goto label_7F30E158;
    case 0x7F30E15Cu: goto label_7F30E15C;
    case 0x7F30E160u: goto label_7F30E160;
    case 0x7F30E164u: goto label_7F30E164;
    case 0x7F30E168u: goto label_7F30E168;
    case 0x7F30E16Cu: goto label_7F30E16C;
    case 0x7F30E170u: goto label_7F30E170;
    case 0x7F30E174u: goto label_7F30E174;
    case 0x7F30E178u: goto label_7F30E178;
    case 0x7F30E17Cu: goto label_7F30E17C;
    case 0x7F30E180u: goto label_7F30E180;
    case 0x7F30E184u: goto label_7F30E184;
    case 0x7F30E188u: goto label_7F30E188;
    case 0x7F30E18Cu: goto label_7F30E18C;
    case 0x7F30E190u: goto label_7F30E190;
    case 0x7F30E194u: goto label_7F30E194;
    case 0x7F30E198u: goto label_7F30E198;
    case 0x7F30E19Cu: goto label_7F30E19C;
    case 0x7F30E1A0u: goto label_7F30E1A0;
    case 0x7F30E1A4u: goto label_7F30E1A4;
    case 0x7F30E1A8u: goto label_7F30E1A8;
    case 0x7F30E1ACu: goto label_7F30E1AC;
    case 0x7F30E1B0u: goto label_7F30E1B0;
    case 0x7F30E1B4u: goto label_7F30E1B4;
    case 0x7F30E1B8u: goto label_7F30E1B8;
    case 0x7F30E1BCu: goto label_7F30E1BC;
    case 0x7F30E1C0u: goto label_7F30E1C0;
    case 0x7F30E1C4u: goto label_7F30E1C4;
    case 0x7F30E1C8u: goto label_7F30E1C8;
    case 0x7F30E1CCu: goto label_7F30E1CC;
    case 0x7F30E1D0u: goto label_7F30E1D0;
    case 0x7F30E1D4u: goto label_7F30E1D4;
    case 0x7F30E1D8u: goto label_7F30E1D8;
    case 0x7F30E1DCu: goto label_7F30E1DC;
    case 0x7F30E1E0u: goto label_7F30E1E0;
    case 0x7F30E1E4u: goto label_7F30E1E4;
    case 0x7F30E1E8u: goto label_7F30E1E8;
    case 0x7F30E1ECu: goto label_7F30E1EC;
    case 0x7F30E1F0u: goto label_7F30E1F0;
    case 0x7F30E1F4u: goto label_7F30E1F4;
    case 0x7F30E1F8u: goto label_7F30E1F8;
    case 0x7F30E1FCu: goto label_7F30E1FC;
    case 0x7F30E200u: goto label_7F30E200;
    case 0x7F30E204u: goto label_7F30E204;
    case 0x7F30E208u: goto label_7F30E208;
    case 0x7F30E20Cu: goto label_7F30E20C;
    case 0x7F30E210u: goto label_7F30E210;
    case 0x7F30E214u: goto label_7F30E214;
    case 0x7F30E218u: goto label_7F30E218;
    case 0x7F30E21Cu: goto label_7F30E21C;
    case 0x7F30E220u: goto label_7F30E220;
    case 0x7F30E224u: goto label_7F30E224;
    case 0x7F30E228u: goto label_7F30E228;
    case 0x7F30E22Cu: goto label_7F30E22C;
    case 0x7F30E230u: goto label_7F30E230;
    case 0x7F30E234u: goto label_7F30E234;
    case 0x7F30E238u: goto label_7F30E238;
    case 0x7F30E23Cu: goto label_7F30E23C;
    case 0x7F30E240u: goto label_7F30E240;
    case 0x7F30E244u: goto label_7F30E244;
    case 0x7F30E248u: goto label_7F30E248;
    case 0x7F30E24Cu: goto label_7F30E24C;
    case 0x7F30E250u: goto label_7F30E250;
    case 0x7F30E254u: goto label_7F30E254;
    case 0x7F30E258u: goto label_7F30E258;
    case 0x7F30E25Cu: goto label_7F30E25C;
    case 0x7F30E260u: goto label_7F30E260;
    case 0x7F30E264u: goto label_7F30E264;
    case 0x7F30E268u: goto label_7F30E268;
    case 0x7F30E26Cu: goto label_7F30E26C;
    case 0x7F30E270u: goto label_7F30E270;
    case 0x7F30E274u: goto label_7F30E274;
    case 0x7F30E278u: goto label_7F30E278;
    case 0x7F30E27Cu: goto label_7F30E27C;
    case 0x7F30E280u: goto label_7F30E280;
    case 0x7F30E284u: goto label_7F30E284;
    case 0x7F30E288u: goto label_7F30E288;
    case 0x7F30E28Cu: goto label_7F30E28C;
    case 0x7F30E290u: goto label_7F30E290;
    case 0x7F30E294u: goto label_7F30E294;
    case 0x7F30E298u: goto label_7F30E298;
    case 0x7F30E29Cu: goto label_7F30E29C;
    case 0x7F30E2A0u: goto label_7F30E2A0;
    case 0x7F30E2A4u: goto label_7F30E2A4;
    case 0x7F30E2A8u: goto label_7F30E2A8;
    case 0x7F30E2ACu: goto label_7F30E2AC;
    case 0x7F30E2B0u: goto label_7F30E2B0;
    case 0x7F30E2B4u: goto label_7F30E2B4;
    case 0x7F30E2B8u: goto label_7F30E2B8;
    case 0x7F30E2BCu: goto label_7F30E2BC;
    case 0x7F30E2C0u: goto label_7F30E2C0;
    case 0x7F30E2C4u: goto label_7F30E2C4;
    case 0x7F30E2C8u: goto label_7F30E2C8;
    case 0x7F30E2CCu: goto label_7F30E2CC;
    case 0x7F30E2D0u: goto label_7F30E2D0;
    case 0x7F30E2D4u: goto label_7F30E2D4;
    case 0x7F30E2D8u: goto label_7F30E2D8;
    case 0x7F30E2DCu: goto label_7F30E2DC;
    case 0x7F30E2E0u: goto label_7F30E2E0;
    case 0x7F30E2E4u: goto label_7F30E2E4;
    case 0x7F30E2E8u: goto label_7F30E2E8;
    case 0x7F30E2ECu: goto label_7F30E2EC;
    case 0x7F30E2F0u: goto label_7F30E2F0;
    case 0x7F30E2F4u: goto label_7F30E2F4;
    case 0x7F30E2F8u: goto label_7F30E2F8;
    case 0x7F30E2FCu: goto label_7F30E2FC;
    case 0x7F30E300u: goto label_7F30E300;
    case 0x7F30E304u: goto label_7F30E304;
    case 0x7F30E308u: goto label_7F30E308;
    case 0x7F30E30Cu: goto label_7F30E30C;
    case 0x7F30E310u: goto label_7F30E310;
    case 0x7F30E314u: goto label_7F30E314;
    case 0x7F30E318u: goto label_7F30E318;
    case 0x7F30E31Cu: goto label_7F30E31C;
    case 0x7F30E320u: goto label_7F30E320;
    case 0x7F30E324u: goto label_7F30E324;
    case 0x7F30E328u: goto label_7F30E328;
    case 0x7F30E32Cu: goto label_7F30E32C;
    case 0x7F30E330u: goto label_7F30E330;
    case 0x7F30E334u: goto label_7F30E334;
    case 0x7F30E338u: goto label_7F30E338;
    case 0x7F30E33Cu: goto label_7F30E33C;
    case 0x7F30E340u: goto label_7F30E340;
    case 0x7F30E344u: goto label_7F30E344;
    case 0x7F30E348u: goto label_7F30E348;
    case 0x7F30E34Cu: goto label_7F30E34C;
    case 0x7F30E350u: goto label_7F30E350;
    case 0x7F30E354u: goto label_7F30E354;
    case 0x7F30E358u: goto label_7F30E358;
    case 0x7F30E35Cu: goto label_7F30E35C;
    case 0x7F30E360u: goto label_7F30E360;
    case 0x7F30E364u: goto label_7F30E364;
    case 0x7F30E368u: goto label_7F30E368;
    case 0x7F30E36Cu: goto label_7F30E36C;
    case 0x7F30E370u: goto label_7F30E370;
    case 0x7F30E374u: goto label_7F30E374;
    case 0x7F30E378u: goto label_7F30E378;
    case 0x7F30E37Cu: goto label_7F30E37C;
    case 0x7F30E380u: goto label_7F30E380;
    case 0x7F30E384u: goto label_7F30E384;
    case 0x7F30E388u: goto label_7F30E388;
    case 0x7F30E38Cu: goto label_7F30E38C;
    case 0x7F30E390u: goto label_7F30E390;
    case 0x7F30E394u: goto label_7F30E394;
    case 0x7F30E398u: goto label_7F30E398;
    case 0x7F30E39Cu: goto label_7F30E39C;
    case 0x7F30E3A0u: goto label_7F30E3A0;
    case 0x7F30E3A4u: goto label_7F30E3A4;
    case 0x7F30E3A8u: goto label_7F30E3A8;
    case 0x7F30E3ACu: goto label_7F30E3AC;
    case 0x7F30E3B0u: goto label_7F30E3B0;
    case 0x7F30E3B4u: goto label_7F30E3B4;
    case 0x7F30E3B8u: goto label_7F30E3B8;
    case 0x7F30E3BCu: goto label_7F30E3BC;
    case 0x7F30E3C0u: goto label_7F30E3C0;
    case 0x7F30E3C4u: goto label_7F30E3C4;
    case 0x7F30E3C8u: goto label_7F30E3C8;
    case 0x7F30E3CCu: goto label_7F30E3CC;
    case 0x7F30E3D0u: goto label_7F30E3D0;
    case 0x7F30E3D4u: goto label_7F30E3D4;
    case 0x7F30E3D8u: goto label_7F30E3D8;
    case 0x7F30E3DCu: goto label_7F30E3DC;
    case 0x7F30E3E0u: goto label_7F30E3E0;
    case 0x7F30E3E4u: goto label_7F30E3E4;
    case 0x7F30E3E8u: goto label_7F30E3E8;
    case 0x7F30E3ECu: goto label_7F30E3EC;
    case 0x7F30E3F0u: goto label_7F30E3F0;
    case 0x7F30E3F4u: goto label_7F30E3F4;
    case 0x7F30E3F8u: goto label_7F30E3F8;
    case 0x7F30E3FCu: goto label_7F30E3FC;
    case 0x7F30E400u: goto label_7F30E400;
    case 0x7F30E404u: goto label_7F30E404;
    case 0x7F30E408u: goto label_7F30E408;
    case 0x7F30E40Cu: goto label_7F30E40C;
    case 0x7F30E410u: goto label_7F30E410;
    case 0x7F30E414u: goto label_7F30E414;
    case 0x7F30E418u: goto label_7F30E418;
    case 0x7F30E41Cu: goto label_7F30E41C;
    case 0x7F30E420u: goto label_7F30E420;
    case 0x7F30E424u: goto label_7F30E424;
    case 0x7F30E428u: goto label_7F30E428;
    case 0x7F30E42Cu: goto label_7F30E42C;
    case 0x7F30E430u: goto label_7F30E430;
    case 0x7F30E434u: goto label_7F30E434;
    case 0x7F30E438u: goto label_7F30E438;
    case 0x7F30E43Cu: goto label_7F30E43C;
    case 0x7F30E440u: goto label_7F30E440;
    case 0x7F30E444u: goto label_7F30E444;
    case 0x7F30E448u: goto label_7F30E448;
    case 0x7F30E44Cu: goto label_7F30E44C;
    case 0x7F30E450u: goto label_7F30E450;
    case 0x7F30E454u: goto label_7F30E454;
    case 0x7F30E458u: goto label_7F30E458;
    case 0x7F30E45Cu: goto label_7F30E45C;
    case 0x7F30E460u: goto label_7F30E460;
    case 0x7F30E464u: goto label_7F30E464;
    case 0x7F30E468u: goto label_7F30E468;
    case 0x7F30E46Cu: goto label_7F30E46C;
    case 0x7F30E470u: goto label_7F30E470;
    case 0x7F30E474u: goto label_7F30E474;
    case 0x7F30E478u: goto label_7F30E478;
    case 0x7F30E47Cu: goto label_7F30E47C;
    case 0x7F30E480u: goto label_7F30E480;
    case 0x7F30E484u: goto label_7F30E484;
    case 0x7F30E488u: goto label_7F30E488;
    case 0x7F30E48Cu: goto label_7F30E48C;
    case 0x7F30E490u: goto label_7F30E490;
    case 0x7F30E494u: goto label_7F30E494;
    case 0x7F30E498u: goto label_7F30E498;
    case 0x7F30E49Cu: goto label_7F30E49C;
    case 0x7F30E4A0u: goto label_7F30E4A0;
    case 0x7F30E4A4u: goto label_7F30E4A4;
    case 0x7F30E4A8u: goto label_7F30E4A8;
    case 0x7F30E4ACu: goto label_7F30E4AC;
    case 0x7F30E4B0u: goto label_7F30E4B0;
    case 0x7F30E4B4u: goto label_7F30E4B4;
    case 0x7F30E4B8u: goto label_7F30E4B8;
    case 0x7F30E4BCu: goto label_7F30E4BC;
    case 0x7F30E4C0u: goto label_7F30E4C0;
    case 0x7F30E4C4u: goto label_7F30E4C4;
    case 0x7F30E4C8u: goto label_7F30E4C8;
    case 0x7F30E4CCu: goto label_7F30E4CC;
    case 0x7F30E4D0u: goto label_7F30E4D0;
    case 0x7F30E4D4u: goto label_7F30E4D4;
    case 0x7F30E4D8u: goto label_7F30E4D8;
    case 0x7F30E4DCu: goto label_7F30E4DC;
    case 0x7F30E4E0u: goto label_7F30E4E0;
    case 0x7F30E4E4u: goto label_7F30E4E4;
    case 0x7F30E4E8u: goto label_7F30E4E8;
    case 0x7F30E4ECu: goto label_7F30E4EC;
    case 0x7F30E4F0u: goto label_7F30E4F0;
    case 0x7F30E4F4u: goto label_7F30E4F4;
    case 0x7F30E4F8u: goto label_7F30E4F8;
    case 0x7F30E4FCu: goto label_7F30E4FC;
    case 0x7F30E500u: goto label_7F30E500;
    case 0x7F30E504u: goto label_7F30E504;
    case 0x7F30E508u: goto label_7F30E508;
    case 0x7F30E50Cu: goto label_7F30E50C;
    case 0x7F30E510u: goto label_7F30E510;
    case 0x7F30E514u: goto label_7F30E514;
    case 0x7F30E518u: goto label_7F30E518;
    case 0x7F30E51Cu: goto label_7F30E51C;
    case 0x7F30E520u: goto label_7F30E520;
    case 0x7F30E524u: goto label_7F30E524;
    case 0x7F30E528u: goto label_7F30E528;
    case 0x7F30E52Cu: goto label_7F30E52C;
    case 0x7F30E530u: goto label_7F30E530;
    case 0x7F30E534u: goto label_7F30E534;
    case 0x7F30E538u: goto label_7F30E538;
    case 0x7F30E53Cu: goto label_7F30E53C;
    case 0x7F30E540u: goto label_7F30E540;
    case 0x7F30E544u: goto label_7F30E544;
    case 0x7F30E548u: goto label_7F30E548;
    case 0x7F30E54Cu: goto label_7F30E54C;
    case 0x7F30E550u: goto label_7F30E550;
    case 0x7F30E554u: goto label_7F30E554;
    case 0x7F30E558u: goto label_7F30E558;
    case 0x7F30E55Cu: goto label_7F30E55C;
    case 0x7F30E560u: goto label_7F30E560;
    case 0x7F30E564u: goto label_7F30E564;
    case 0x7F30E568u: goto label_7F30E568;
    case 0x7F30E56Cu: goto label_7F30E56C;
    case 0x7F30E570u: goto label_7F30E570;
    case 0x7F30E574u: goto label_7F30E574;
    case 0x7F30E578u: goto label_7F30E578;
    case 0x7F30E57Cu: goto label_7F30E57C;
    case 0x7F30E580u: goto label_7F30E580;
    case 0x7F30E584u: goto label_7F30E584;
    case 0x7F30E588u: goto label_7F30E588;
    case 0x7F30E58Cu: goto label_7F30E58C;
    case 0x7F30E590u: goto label_7F30E590;
    case 0x7F30E594u: goto label_7F30E594;
    case 0x7F30E598u: goto label_7F30E598;
    case 0x7F30E59Cu: goto label_7F30E59C;
    case 0x7F30E5A0u: goto label_7F30E5A0;
    case 0x7F30E5A4u: goto label_7F30E5A4;
    case 0x7F30E5A8u: goto label_7F30E5A8;
    case 0x7F30E5ACu: goto label_7F30E5AC;
    case 0x7F30E5B0u: goto label_7F30E5B0;
    case 0x7F30E5B4u: goto label_7F30E5B4;
    case 0x7F30E5B8u: goto label_7F30E5B8;
    case 0x7F30E5BCu: goto label_7F30E5BC;
    case 0x7F30E5C0u: goto label_7F30E5C0;
    case 0x7F30E5C4u: goto label_7F30E5C4;
    case 0x7F30E5C8u: goto label_7F30E5C8;
    case 0x7F30E5CCu: goto label_7F30E5CC;
    case 0x7F30E5D0u: goto label_7F30E5D0;
    case 0x7F30E5D4u: goto label_7F30E5D4;
    case 0x7F30E5D8u: goto label_7F30E5D8;
    case 0x7F30E5DCu: goto label_7F30E5DC;
    case 0x7F30E5E0u: goto label_7F30E5E0;
    case 0x7F30E5E4u: goto label_7F30E5E4;
    case 0x7F30E5E8u: goto label_7F30E5E8;
    case 0x7F30E5ECu: goto label_7F30E5EC;
    case 0x7F30E5F0u: goto label_7F30E5F0;
    case 0x7F30E5F4u: goto label_7F30E5F4;
    case 0x7F30E5F8u: goto label_7F30E5F8;
    case 0x7F30E5FCu: goto label_7F30E5FC;
    case 0x7F30E600u: goto label_7F30E600;
    case 0x7F30E604u: goto label_7F30E604;
    case 0x7F30E608u: goto label_7F30E608;
    case 0x7F30E60Cu: goto label_7F30E60C;
    case 0x7F30E610u: goto label_7F30E610;
    case 0x7F30E614u: goto label_7F30E614;
    case 0x7F30E618u: goto label_7F30E618;
    case 0x7F30E61Cu: goto label_7F30E61C;
    case 0x7F30E620u: goto label_7F30E620;
    case 0x7F30E624u: goto label_7F30E624;
    case 0x7F30E628u: goto label_7F30E628;
    case 0x7F30E62Cu: goto label_7F30E62C;
    case 0x7F30E630u: goto label_7F30E630;
    case 0x7F30E634u: goto label_7F30E634;
    case 0x7F30E638u: goto label_7F30E638;
    case 0x7F30E63Cu: goto label_7F30E63C;
    case 0x7F30E640u: goto label_7F30E640;
    case 0x7F30E644u: goto label_7F30E644;
    case 0x7F30E648u: goto label_7F30E648;
    case 0x7F30E64Cu: goto label_7F30E64C;
    case 0x7F30E650u: goto label_7F30E650;
    case 0x7F30E654u: goto label_7F30E654;
    case 0x7F30E658u: goto label_7F30E658;
    case 0x7F30E65Cu: goto label_7F30E65C;
    case 0x7F30E660u: goto label_7F30E660;
    case 0x7F30E664u: goto label_7F30E664;
    case 0x7F30E668u: goto label_7F30E668;
    case 0x7F30E66Cu: goto label_7F30E66C;
    case 0x7F30E670u: goto label_7F30E670;
    case 0x7F30E674u: goto label_7F30E674;
    case 0x7F30E678u: goto label_7F30E678;
    case 0x7F30E67Cu: goto label_7F30E67C;
    case 0x7F30E680u: goto label_7F30E680;
    case 0x7F30E684u: goto label_7F30E684;
    case 0x7F30E688u: goto label_7F30E688;
    case 0x7F30E68Cu: goto label_7F30E68C;
    case 0x7F30E690u: goto label_7F30E690;
    case 0x7F30E694u: goto label_7F30E694;
    case 0x7F30E698u: goto label_7F30E698;
    case 0x7F30E69Cu: goto label_7F30E69C;
    case 0x7F30E6A0u: goto label_7F30E6A0;
    case 0x7F30E6A4u: goto label_7F30E6A4;
    case 0x7F30E6A8u: goto label_7F30E6A8;
    case 0x7F30E6ACu: goto label_7F30E6AC;
    case 0x7F30E6B0u: goto label_7F30E6B0;
    case 0x7F30E6B4u: goto label_7F30E6B4;
    case 0x7F30E6B8u: goto label_7F30E6B8;
    case 0x7F30E6BCu: goto label_7F30E6BC;
    case 0x7F30E6C0u: goto label_7F30E6C0;
    case 0x7F30E6C4u: goto label_7F30E6C4;
    case 0x7F30E6C8u: goto label_7F30E6C8;
    case 0x7F30E6CCu: goto label_7F30E6CC;
    case 0x7F30E6D0u: goto label_7F30E6D0;
    case 0x7F30E6D4u: goto label_7F30E6D4;
    case 0x7F30E6D8u: goto label_7F30E6D8;
    case 0x7F30E6DCu: goto label_7F30E6DC;
    case 0x7F30E6E0u: goto label_7F30E6E0;
    case 0x7F30E6E4u: goto label_7F30E6E4;
    case 0x7F30E6E8u: goto label_7F30E6E8;
    case 0x7F30E6ECu: goto label_7F30E6EC;
    case 0x7F30E6F0u: goto label_7F30E6F0;
    case 0x7F30E6F4u: goto label_7F30E6F4;
    case 0x7F30E6F8u: goto label_7F30E6F8;
    case 0x7F30E6FCu: goto label_7F30E6FC;
    case 0x7F30E700u: goto label_7F30E700;
    case 0x7F30E704u: goto label_7F30E704;
    case 0x7F30E708u: goto label_7F30E708;
    case 0x7F30E70Cu: goto label_7F30E70C;
    case 0x7F30E710u: goto label_7F30E710;
    case 0x7F30E714u: goto label_7F30E714;
    case 0x7F30E718u: goto label_7F30E718;
    case 0x7F30E71Cu: goto label_7F30E71C;
    case 0x7F30E720u: goto label_7F30E720;
    case 0x7F30E724u: goto label_7F30E724;
    case 0x7F30E728u: goto label_7F30E728;
    case 0x7F30E72Cu: goto label_7F30E72C;
    case 0x7F30E730u: goto label_7F30E730;
    case 0x7F30E734u: goto label_7F30E734;
    case 0x7F30E738u: goto label_7F30E738;
    case 0x7F30E73Cu: goto label_7F30E73C;
    case 0x7F30E740u: goto label_7F30E740;
    case 0x7F30E744u: goto label_7F30E744;
    case 0x7F30E748u: goto label_7F30E748;
    case 0x7F30E74Cu: goto label_7F30E74C;
    case 0x7F30E750u: goto label_7F30E750;
    case 0x7F30E754u: goto label_7F30E754;
    case 0x7F30E758u: goto label_7F30E758;
    case 0x7F30E75Cu: goto label_7F30E75C;
    case 0x7F30E760u: goto label_7F30E760;
    case 0x7F30E764u: goto label_7F30E764;
    case 0x7F30E768u: goto label_7F30E768;
    case 0x7F30E76Cu: goto label_7F30E76C;
    case 0x7F30E770u: goto label_7F30E770;
    case 0x7F30E774u: goto label_7F30E774;
    case 0x7F30E778u: goto label_7F30E778;
    case 0x7F30E77Cu: goto label_7F30E77C;
    case 0x7F30E780u: goto label_7F30E780;
    case 0x7F30E784u: goto label_7F30E784;
    case 0x7F30E788u: goto label_7F30E788;
    case 0x7F30E78Cu: goto label_7F30E78C;
    case 0x7F30E790u: goto label_7F30E790;
    case 0x7F30E794u: goto label_7F30E794;
    case 0x7F30E798u: goto label_7F30E798;
    case 0x7F30E79Cu: goto label_7F30E79C;
    case 0x7F30E7A0u: goto label_7F30E7A0;
    case 0x7F30E7A4u: goto label_7F30E7A4;
    case 0x7F30E7A8u: goto label_7F30E7A8;
    case 0x7F30E7ACu: goto label_7F30E7AC;
    case 0x7F30E7B0u: goto label_7F30E7B0;
    case 0x7F30E7B4u: goto label_7F30E7B4;
    case 0x7F30E7B8u: goto label_7F30E7B8;
    case 0x7F30E7BCu: goto label_7F30E7BC;
    case 0x7F30E7C0u: goto label_7F30E7C0;
    case 0x7F30E7C4u: goto label_7F30E7C4;
    case 0x7F30E7C8u: goto label_7F30E7C8;
    case 0x7F30E7CCu: goto label_7F30E7CC;
    case 0x7F30E7D0u: goto label_7F30E7D0;
    case 0x7F30E7D4u: goto label_7F30E7D4;
    case 0x7F30E7D8u: goto label_7F30E7D8;
    case 0x7F30E7DCu: goto label_7F30E7DC;
    case 0x7F30E7E0u: goto label_7F30E7E0;
    case 0x7F30E7E4u: goto label_7F30E7E4;
    case 0x7F30E7E8u: goto label_7F30E7E8;
    case 0x7F30E7ECu: goto label_7F30E7EC;
    case 0x7F30E7F0u: goto label_7F30E7F0;
    case 0x7F30E7F4u: goto label_7F30E7F4;
    case 0x7F30E7F8u: goto label_7F30E7F8;
    case 0x7F30E7FCu: goto label_7F30E7FC;
    case 0x7F30E800u: goto label_7F30E800;
    case 0x7F30E804u: goto label_7F30E804;
    case 0x7F30E808u: goto label_7F30E808;
    case 0x7F30E80Cu: goto label_7F30E80C;
    case 0x7F30E810u: goto label_7F30E810;
    case 0x7F30E814u: goto label_7F30E814;
    case 0x7F30E818u: goto label_7F30E818;
    case 0x7F30E81Cu: goto label_7F30E81C;
    case 0x7F30E820u: goto label_7F30E820;
    case 0x7F30E824u: goto label_7F30E824;
    case 0x7F30E828u: goto label_7F30E828;
    case 0x7F30E82Cu: goto label_7F30E82C;
    case 0x7F30E830u: goto label_7F30E830;
    case 0x7F30E834u: goto label_7F30E834;
    case 0x7F30E838u: goto label_7F30E838;
    case 0x7F30E83Cu: goto label_7F30E83C;
    case 0x7F30E840u: goto label_7F30E840;
    case 0x7F30E844u: goto label_7F30E844;
    case 0x7F30E848u: goto label_7F30E848;
    case 0x7F30E84Cu: goto label_7F30E84C;
    case 0x7F30E850u: goto label_7F30E850;
    case 0x7F30E854u: goto label_7F30E854;
    case 0x7F30E858u: goto label_7F30E858;
    case 0x7F30E85Cu: goto label_7F30E85C;
    case 0x7F30E860u: goto label_7F30E860;
    case 0x7F30E864u: goto label_7F30E864;
    case 0x7F30E868u: goto label_7F30E868;
    case 0x7F30E86Cu: goto label_7F30E86C;
    case 0x7F30E870u: goto label_7F30E870;
    case 0x7F30E874u: goto label_7F30E874;
    case 0x7F30E878u: goto label_7F30E878;
    case 0x7F30E87Cu: goto label_7F30E87C;
    case 0x7F30E880u: goto label_7F30E880;
    case 0x7F30E884u: goto label_7F30E884;
    case 0x7F30E888u: goto label_7F30E888;
    case 0x7F30E88Cu: goto label_7F30E88C;
    case 0x7F30E890u: goto label_7F30E890;
    case 0x7F30E894u: goto label_7F30E894;
    case 0x7F30E898u: goto label_7F30E898;
    case 0x7F30E89Cu: goto label_7F30E89C;
    case 0x7F30E8A0u: goto label_7F30E8A0;
    case 0x7F30E8A4u: goto label_7F30E8A4;
    case 0x7F30E8A8u: goto label_7F30E8A8;
    case 0x7F30E8ACu: goto label_7F30E8AC;
    case 0x7F30E8B0u: goto label_7F30E8B0;
    case 0x7F30E8B4u: goto label_7F30E8B4;
    case 0x7F30E8B8u: goto label_7F30E8B8;
    case 0x7F30E8BCu: goto label_7F30E8BC;
    case 0x7F30E8C0u: goto label_7F30E8C0;
    case 0x7F30E8C4u: goto label_7F30E8C4;
    case 0x7F30E8C8u: goto label_7F30E8C8;
    case 0x7F30E8CCu: goto label_7F30E8CC;
    case 0x7F30E8D0u: goto label_7F30E8D0;
    case 0x7F30E8D4u: goto label_7F30E8D4;
    case 0x7F30E8D8u: goto label_7F30E8D8;
    case 0x7F30E8DCu: goto label_7F30E8DC;
    case 0x7F30E8E0u: goto label_7F30E8E0;
    case 0x7F30E8E4u: goto label_7F30E8E4;
    case 0x7F30E8E8u: goto label_7F30E8E8;
    case 0x7F30E8ECu: goto label_7F30E8EC;
    case 0x7F30E8F0u: goto label_7F30E8F0;
    case 0x7F30E8F4u: goto label_7F30E8F4;
    case 0x7F30E8F8u: goto label_7F30E8F8;
    case 0x7F30E8FCu: goto label_7F30E8FC;
    case 0x7F30E900u: goto label_7F30E900;
    case 0x7F30E904u: goto label_7F30E904;
    case 0x7F30E908u: goto label_7F30E908;
    case 0x7F30E90Cu: goto label_7F30E90C;
    case 0x7F30E910u: goto label_7F30E910;
    case 0x7F30E914u: goto label_7F30E914;
    case 0x7F30E918u: goto label_7F30E918;
    case 0x7F30E91Cu: goto label_7F30E91C;
    case 0x7F30E920u: goto label_7F30E920;
    case 0x7F30E924u: goto label_7F30E924;
    case 0x7F30E928u: goto label_7F30E928;
    case 0x7F30E92Cu: goto label_7F30E92C;
    case 0x7F30E930u: goto label_7F30E930;
    case 0x7F30E934u: goto label_7F30E934;
    case 0x7F30E938u: goto label_7F30E938;
    case 0x7F30E93Cu: goto label_7F30E93C;
    case 0x7F30E940u: goto label_7F30E940;
    case 0x7F30E944u: goto label_7F30E944;
    case 0x7F30E948u: goto label_7F30E948;
    case 0x7F30E94Cu: goto label_7F30E94C;
    case 0x7F30E950u: goto label_7F30E950;
    case 0x7F30E954u: goto label_7F30E954;
    case 0x7F30E958u: goto label_7F30E958;
    case 0x7F30E95Cu: goto label_7F30E95C;
    case 0x7F30E960u: goto label_7F30E960;
    case 0x7F30E964u: goto label_7F30E964;
    case 0x7F30E968u: goto label_7F30E968;
    case 0x7F30E96Cu: goto label_7F30E96C;
    case 0x7F30E970u: goto label_7F30E970;
    case 0x7F30E974u: goto label_7F30E974;
    case 0x7F30E978u: goto label_7F30E978;
    case 0x7F30E97Cu: goto label_7F30E97C;
    case 0x7F30E980u: goto label_7F30E980;
    case 0x7F30E984u: goto label_7F30E984;
    case 0x7F30E988u: goto label_7F30E988;
    case 0x7F30E98Cu: goto label_7F30E98C;
    case 0x7F30E990u: goto label_7F30E990;
    case 0x7F30E994u: goto label_7F30E994;
    case 0x7F30E998u: goto label_7F30E998;
    case 0x7F30E99Cu: goto label_7F30E99C;
    case 0x7F30E9A0u: goto label_7F30E9A0;
    case 0x7F30E9A4u: goto label_7F30E9A4;
    case 0x7F30E9A8u: goto label_7F30E9A8;
    case 0x7F30E9ACu: goto label_7F30E9AC;
    case 0x7F30E9B0u: goto label_7F30E9B0;
    case 0x7F30E9B4u: goto label_7F30E9B4;
    case 0x7F30E9B8u: goto label_7F30E9B8;
    case 0x7F30E9BCu: goto label_7F30E9BC;
    case 0x7F30E9C0u: goto label_7F30E9C0;
    case 0x7F30E9C4u: goto label_7F30E9C4;
    case 0x7F30E9C8u: goto label_7F30E9C8;
    case 0x7F30E9CCu: goto label_7F30E9CC;
    case 0x7F30E9D0u: goto label_7F30E9D0;
    case 0x7F30E9D4u: goto label_7F30E9D4;
    case 0x7F30E9D8u: goto label_7F30E9D8;
    case 0x7F30E9DCu: goto label_7F30E9DC;
    case 0x7F30E9E0u: goto label_7F30E9E0;
    case 0x7F30E9E4u: goto label_7F30E9E4;
    case 0x7F30E9E8u: goto label_7F30E9E8;
    case 0x7F30E9ECu: goto label_7F30E9EC;
    case 0x7F30E9F0u: goto label_7F30E9F0;
    case 0x7F30E9F4u: goto label_7F30E9F4;
    case 0x7F30E9F8u: goto label_7F30E9F8;
    case 0x7F30E9FCu: goto label_7F30E9FC;
    case 0x7F30EA00u: goto label_7F30EA00;
    case 0x7F30EA04u: goto label_7F30EA04;
    case 0x7F30EA08u: goto label_7F30EA08;
    case 0x7F30EA0Cu: goto label_7F30EA0C;
    case 0x7F30EA10u: goto label_7F30EA10;
    case 0x7F30EA14u: goto label_7F30EA14;
    case 0x7F30EA18u: goto label_7F30EA18;
    case 0x7F30EA1Cu: goto label_7F30EA1C;
    case 0x7F30EA20u: goto label_7F30EA20;
    case 0x7F30EA24u: goto label_7F30EA24;
    case 0x7F30EA28u: goto label_7F30EA28;
    case 0x7F30EA2Cu: goto label_7F30EA2C;
    case 0x7F30EA30u: goto label_7F30EA30;
    case 0x7F30EA34u: goto label_7F30EA34;
    case 0x7F30EA38u: goto label_7F30EA38;
    case 0x7F30EA3Cu: goto label_7F30EA3C;
    case 0x7F30EA40u: goto label_7F30EA40;
    case 0x7F30EA44u: goto label_7F30EA44;
    case 0x7F30EA48u: goto label_7F30EA48;
    case 0x7F30EA4Cu: goto label_7F30EA4C;
    case 0x7F30EA50u: goto label_7F30EA50;
    case 0x7F30EA54u: goto label_7F30EA54;
    case 0x7F30EA58u: goto label_7F30EA58;
    case 0x7F30EA5Cu: goto label_7F30EA5C;
    case 0x7F30EA60u: goto label_7F30EA60;
    case 0x7F30EA64u: goto label_7F30EA64;
    case 0x7F30EA68u: goto label_7F30EA68;
    case 0x7F30EA6Cu: goto label_7F30EA6C;
    case 0x7F30EA70u: goto label_7F30EA70;
    case 0x7F30EA74u: goto label_7F30EA74;
    case 0x7F30EA78u: goto label_7F30EA78;
    case 0x7F30EA7Cu: goto label_7F30EA7C;
    case 0x7F30EA80u: goto label_7F30EA80;
    case 0x7F30EA84u: goto label_7F30EA84;
    case 0x7F30EA88u: goto label_7F30EA88;
    case 0x7F30EA8Cu: goto label_7F30EA8C;
    case 0x7F30EA90u: goto label_7F30EA90;
    case 0x7F30EA94u: goto label_7F30EA94;
    case 0x7F30EA98u: goto label_7F30EA98;
    case 0x7F30EA9Cu: goto label_7F30EA9C;
    case 0x7F30EAA0u: goto label_7F30EAA0;
    case 0x7F30EAA4u: goto label_7F30EAA4;
    case 0x7F30EAA8u: goto label_7F30EAA8;
    case 0x7F30EAACu: goto label_7F30EAAC;
    case 0x7F30EAB0u: goto label_7F30EAB0;
    case 0x7F30EAB4u: goto label_7F30EAB4;
    case 0x7F30EAB8u: goto label_7F30EAB8;
    case 0x7F30EABCu: goto label_7F30EABC;
    case 0x7F30EAC0u: goto label_7F30EAC0;
    case 0x7F30EAC4u: goto label_7F30EAC4;
    case 0x7F30EAC8u: goto label_7F30EAC8;
    case 0x7F30EACCu: goto label_7F30EACC;
    case 0x7F30EAD0u: goto label_7F30EAD0;
    case 0x7F30EAD4u: goto label_7F30EAD4;
    case 0x7F30EAD8u: goto label_7F30EAD8;
    case 0x7F30EADCu: goto label_7F30EADC;
    case 0x7F30EAE0u: goto label_7F30EAE0;
    case 0x7F30EAE4u: goto label_7F30EAE4;
    case 0x7F30EAE8u: goto label_7F30EAE8;
    case 0x7F30EAECu: goto label_7F30EAEC;
    case 0x7F30EAF0u: goto label_7F30EAF0;
    case 0x7F30EAF4u: goto label_7F30EAF4;
    case 0x7F30EAF8u: goto label_7F30EAF8;
    case 0x7F30EAFCu: goto label_7F30EAFC;
    case 0x7F30EB00u: goto label_7F30EB00;
    case 0x7F30EB04u: goto label_7F30EB04;
    case 0x7F30EB08u: goto label_7F30EB08;
    case 0x7F30EB0Cu: goto label_7F30EB0C;
    case 0x7F30EB10u: goto label_7F30EB10;
    case 0x7F30EB14u: goto label_7F30EB14;
    case 0x7F30EB18u: goto label_7F30EB18;
    case 0x7F30EB1Cu: goto label_7F30EB1C;
    case 0x7F30EB20u: goto label_7F30EB20;
    case 0x7F30EB24u: goto label_7F30EB24;
    case 0x7F30EB28u: goto label_7F30EB28;
    case 0x7F30EB2Cu: goto label_7F30EB2C;
    case 0x7F30EB30u: goto label_7F30EB30;
    case 0x7F30EB34u: goto label_7F30EB34;
    case 0x7F30EB38u: goto label_7F30EB38;
    case 0x7F30EB3Cu: goto label_7F30EB3C;
    case 0x7F30EB40u: goto label_7F30EB40;
    case 0x7F30EB44u: goto label_7F30EB44;
    case 0x7F30EB48u: goto label_7F30EB48;
    case 0x7F30EB4Cu: goto label_7F30EB4C;
    case 0x7F30EB50u: goto label_7F30EB50;
    case 0x7F30EB54u: goto label_7F30EB54;
    case 0x7F30EB58u: goto label_7F30EB58;
    case 0x7F30EB5Cu: goto label_7F30EB5C;
    case 0x7F30EB60u: goto label_7F30EB60;
    case 0x7F30EB64u: goto label_7F30EB64;
    case 0x7F30EB68u: goto label_7F30EB68;
    case 0x7F30EB6Cu: goto label_7F30EB6C;
    case 0x7F30EB70u: goto label_7F30EB70;
    case 0x7F30EB74u: goto label_7F30EB74;
    case 0x7F30EB78u: goto label_7F30EB78;
    case 0x7F30EB7Cu: goto label_7F30EB7C;
    case 0x7F30EB80u: goto label_7F30EB80;
    case 0x7F30EB84u: goto label_7F30EB84;
    case 0x7F30EB88u: goto label_7F30EB88;
    case 0x7F30EB8Cu: goto label_7F30EB8C;
    case 0x7F30EB90u: goto label_7F30EB90;
    case 0x7F30EB94u: goto label_7F30EB94;
    case 0x7F30EB98u: goto label_7F30EB98;
    case 0x7F30EB9Cu: goto label_7F30EB9C;
    case 0x7F30EBA0u: goto label_7F30EBA0;
    case 0x7F30EBA4u: goto label_7F30EBA4;
    case 0x7F30EBA8u: goto label_7F30EBA8;
    case 0x7F30EBACu: goto label_7F30EBAC;
    case 0x7F30EBB0u: goto label_7F30EBB0;
    case 0x7F30EBB4u: goto label_7F30EBB4;
    case 0x7F30EBB8u: goto label_7F30EBB8;
    case 0x7F30EBBCu: goto label_7F30EBBC;
    case 0x7F30EBC0u: goto label_7F30EBC0;
    case 0x7F30EBC4u: goto label_7F30EBC4;
    case 0x7F30EBC8u: goto label_7F30EBC8;
    case 0x7F30EBCCu: goto label_7F30EBCC;
    case 0x7F30EBD0u: goto label_7F30EBD0;
    case 0x7F30EBD4u: goto label_7F30EBD4;
    case 0x7F30EBD8u: goto label_7F30EBD8;
    case 0x7F30EBDCu: goto label_7F30EBDC;
    case 0x7F30EBE0u: goto label_7F30EBE0;
    case 0x7F30EBE4u: goto label_7F30EBE4;
    case 0x7F30EBE8u: goto label_7F30EBE8;
    case 0x7F30EBECu: goto label_7F30EBEC;
    case 0x7F30EBF0u: goto label_7F30EBF0;
    case 0x7F30EBF4u: goto label_7F30EBF4;
    case 0x7F30EBF8u: goto label_7F30EBF8;
    case 0x7F30EBFCu: goto label_7F30EBFC;
    case 0x7F30EC00u: goto label_7F30EC00;
    case 0x7F30EC04u: goto label_7F30EC04;
    case 0x7F30EC08u: goto label_7F30EC08;
    case 0x7F30EC0Cu: goto label_7F30EC0C;
    case 0x7F30EC10u: goto label_7F30EC10;
    case 0x7F30EC14u: goto label_7F30EC14;
    case 0x7F30EC18u: goto label_7F30EC18;
    case 0x7F30EC1Cu: goto label_7F30EC1C;
    case 0x7F30EC20u: goto label_7F30EC20;
    case 0x7F30EC24u: goto label_7F30EC24;
    case 0x7F30EC28u: goto label_7F30EC28;
    case 0x7F30EC2Cu: goto label_7F30EC2C;
    case 0x7F30EC30u: goto label_7F30EC30;
    case 0x7F30EC34u: goto label_7F30EC34;
    case 0x7F30EC38u: goto label_7F30EC38;
    case 0x7F30EC3Cu: goto label_7F30EC3C;
    case 0x7F30EC40u: goto label_7F30EC40;
    case 0x7F30EC44u: goto label_7F30EC44;
    case 0x7F30EC48u: goto label_7F30EC48;
    case 0x7F30EC4Cu: goto label_7F30EC4C;
    case 0x7F30EC50u: goto label_7F30EC50;
    case 0x7F30EC54u: goto label_7F30EC54;
    case 0x7F30EC58u: goto label_7F30EC58;
    case 0x7F30EC5Cu: goto label_7F30EC5C;
    case 0x7F30EC60u: goto label_7F30EC60;
    case 0x7F30EC64u: goto label_7F30EC64;
    case 0x7F30EC68u: goto label_7F30EC68;
    case 0x7F30EC6Cu: goto label_7F30EC6C;
    case 0x7F30EC70u: goto label_7F30EC70;
    case 0x7F30EC74u: goto label_7F30EC74;
    case 0x7F30EC78u: goto label_7F30EC78;
    case 0x7F30EC7Cu: goto label_7F30EC7C;
    case 0x7F30EC80u: goto label_7F30EC80;
    case 0x7F30EC84u: goto label_7F30EC84;
    case 0x7F30EC88u: goto label_7F30EC88;
    case 0x7F30EC8Cu: goto label_7F30EC8C;
    case 0x7F30EC90u: goto label_7F30EC90;
    case 0x7F30EC94u: goto label_7F30EC94;
    case 0x7F30EC98u: goto label_7F30EC98;
    case 0x7F30EC9Cu: goto label_7F30EC9C;
    case 0x7F30ECA0u: goto label_7F30ECA0;
    case 0x7F30ECA4u: goto label_7F30ECA4;
    case 0x7F30ECA8u: goto label_7F30ECA8;
    case 0x7F30ECACu: goto label_7F30ECAC;
    case 0x7F30ECB0u: goto label_7F30ECB0;
    case 0x7F30ECB4u: goto label_7F30ECB4;
    case 0x7F30ECB8u: goto label_7F30ECB8;
    case 0x7F30ECBCu: goto label_7F30ECBC;
    case 0x7F30ECC0u: goto label_7F30ECC0;
    case 0x7F30ECC4u: goto label_7F30ECC4;
    case 0x7F30ECC8u: goto label_7F30ECC8;
    case 0x7F30ECCCu: goto label_7F30ECCC;
    case 0x7F30ECD0u: goto label_7F30ECD0;
    case 0x7F30ECD4u: goto label_7F30ECD4;
    case 0x7F30ECD8u: goto label_7F30ECD8;
    case 0x7F30ECDCu: goto label_7F30ECDC;
    case 0x7F30ECE0u: goto label_7F30ECE0;
    case 0x7F30ECE4u: goto label_7F30ECE4;
    case 0x7F30ECE8u: goto label_7F30ECE8;
    case 0x7F30ECECu: goto label_7F30ECEC;
    case 0x7F30ECF0u: goto label_7F30ECF0;
    case 0x7F30ECF4u: goto label_7F30ECF4;
    case 0x7F30ECF8u: goto label_7F30ECF8;
    case 0x7F30ECFCu: goto label_7F30ECFC;
    case 0x7F30ED00u: goto label_7F30ED00;
    case 0x7F30ED04u: goto label_7F30ED04;
    case 0x7F30ED08u: goto label_7F30ED08;
    case 0x7F30ED0Cu: goto label_7F30ED0C;
    case 0x7F30ED10u: goto label_7F30ED10;
    case 0x7F30ED14u: goto label_7F30ED14;
    case 0x7F30ED18u: goto label_7F30ED18;
    case 0x7F30ED1Cu: goto label_7F30ED1C;
    case 0x7F30ED20u: goto label_7F30ED20;
    case 0x7F30ED24u: goto label_7F30ED24;
    case 0x7F30ED28u: goto label_7F30ED28;
    case 0x7F30ED2Cu: goto label_7F30ED2C;
    case 0x7F30ED30u: goto label_7F30ED30;
    case 0x7F30ED34u: goto label_7F30ED34;
    case 0x7F30ED38u: goto label_7F30ED38;
    case 0x7F30ED3Cu: goto label_7F30ED3C;
    case 0x7F30ED40u: goto label_7F30ED40;
    case 0x7F30ED44u: goto label_7F30ED44;
    case 0x7F30ED48u: goto label_7F30ED48;
    case 0x7F30ED4Cu: goto label_7F30ED4C;
    case 0x7F30ED50u: goto label_7F30ED50;
    case 0x7F30ED54u: goto label_7F30ED54;
    case 0x7F30ED58u: goto label_7F30ED58;
    case 0x7F30ED5Cu: goto label_7F30ED5C;
    case 0x7F30ED60u: goto label_7F30ED60;
    case 0x7F30ED64u: goto label_7F30ED64;
    case 0x7F30ED68u: goto label_7F30ED68;
    case 0x7F30ED6Cu: goto label_7F30ED6C;
    case 0x7F30ED70u: goto label_7F30ED70;
    case 0x7F30ED74u: goto label_7F30ED74;
    case 0x7F30ED78u: goto label_7F30ED78;
    case 0x7F30ED7Cu: goto label_7F30ED7C;
    case 0x7F30ED80u: goto label_7F30ED80;
    case 0x7F30ED84u: goto label_7F30ED84;
    case 0x7F30ED88u: goto label_7F30ED88;
    case 0x7F30ED8Cu: goto label_7F30ED8C;
    case 0x7F30ED90u: goto label_7F30ED90;
    case 0x7F30ED94u: goto label_7F30ED94;
    case 0x7F30ED98u: goto label_7F30ED98;
    case 0x7F30ED9Cu: goto label_7F30ED9C;
    case 0x7F30EDA0u: goto label_7F30EDA0;
    case 0x7F30EDA4u: goto label_7F30EDA4;
    case 0x7F30EDA8u: goto label_7F30EDA8;
    case 0x7F30EDACu: goto label_7F30EDAC;
    case 0x7F30EDB0u: goto label_7F30EDB0;
    case 0x7F30EDB4u: goto label_7F30EDB4;
    case 0x7F30EDB8u: goto label_7F30EDB8;
    case 0x7F30EDBCu: goto label_7F30EDBC;
    case 0x7F30EDC0u: goto label_7F30EDC0;
    case 0x7F30EDC4u: goto label_7F30EDC4;
    case 0x7F30EDC8u: goto label_7F30EDC8;
    case 0x7F30EDCCu: goto label_7F30EDCC;
    case 0x7F30EDD0u: goto label_7F30EDD0;
    case 0x7F30EDD4u: goto label_7F30EDD4;
    case 0x7F30EDD8u: goto label_7F30EDD8;
    case 0x7F30EDDCu: goto label_7F30EDDC;
    case 0x7F30EDE0u: goto label_7F30EDE0;
    case 0x7F30EDE4u: goto label_7F30EDE4;
    case 0x7F30EDE8u: goto label_7F30EDE8;
    case 0x7F30EDECu: goto label_7F30EDEC;
    case 0x7F30EDF0u: goto label_7F30EDF0;
    case 0x7F30EDF4u: goto label_7F30EDF4;
    case 0x7F30EDF8u: goto label_7F30EDF8;
    case 0x7F30EDFCu: goto label_7F30EDFC;
    case 0x7F30EE00u: goto label_7F30EE00;
    case 0x7F30EE04u: goto label_7F30EE04;
    case 0x7F30EE08u: goto label_7F30EE08;
    case 0x7F30EE0Cu: goto label_7F30EE0C;
    case 0x7F30EE10u: goto label_7F30EE10;
    case 0x7F30EE14u: goto label_7F30EE14;
    case 0x7F30EE18u: goto label_7F30EE18;
    case 0x7F30EE1Cu: goto label_7F30EE1C;
    case 0x7F30EE20u: goto label_7F30EE20;
    case 0x7F30EE24u: goto label_7F30EE24;
    case 0x7F30EE28u: goto label_7F30EE28;
    case 0x7F30EE2Cu: goto label_7F30EE2C;
    case 0x7F30EE30u: goto label_7F30EE30;
    case 0x7F30EE34u: goto label_7F30EE34;
    case 0x7F30EE38u: goto label_7F30EE38;
    case 0x7F30EE3Cu: goto label_7F30EE3C;
    case 0x7F30EE40u: goto label_7F30EE40;
    case 0x7F30EE44u: goto label_7F30EE44;
    case 0x7F30EE48u: goto label_7F30EE48;
    case 0x7F30EE4Cu: goto label_7F30EE4C;
    case 0x7F30EE50u: goto label_7F30EE50;
    case 0x7F30EE54u: goto label_7F30EE54;
    case 0x7F30EE58u: goto label_7F30EE58;
    case 0x7F30EE5Cu: goto label_7F30EE5C;
    case 0x7F30EE60u: goto label_7F30EE60;
    case 0x7F30EE64u: goto label_7F30EE64;
    case 0x7F30EE68u: goto label_7F30EE68;
    case 0x7F30EE6Cu: goto label_7F30EE6C;
    case 0x7F30EE70u: goto label_7F30EE70;
    case 0x7F30EE74u: goto label_7F30EE74;
    case 0x7F30EE78u: goto label_7F30EE78;
    case 0x7F30EE7Cu: goto label_7F30EE7C;
    case 0x7F30EE80u: goto label_7F30EE80;
    case 0x7F30EE84u: goto label_7F30EE84;
    case 0x7F30EE88u: goto label_7F30EE88;
    case 0x7F30EE8Cu: goto label_7F30EE8C;
    case 0x7F30EE90u: goto label_7F30EE90;
    case 0x7F30EE94u: goto label_7F30EE94;
    case 0x7F30EE98u: goto label_7F30EE98;
    case 0x7F30EE9Cu: goto label_7F30EE9C;
    case 0x7F30EEA0u: goto label_7F30EEA0;
    case 0x7F30EEA4u: goto label_7F30EEA4;
    case 0x7F30EEA8u: goto label_7F30EEA8;
    case 0x7F30EEACu: goto label_7F30EEAC;
    case 0x7F30EEB0u: goto label_7F30EEB0;
    case 0x7F30EEB4u: goto label_7F30EEB4;
    case 0x7F30EEB8u: goto label_7F30EEB8;
    case 0x7F30EEBCu: goto label_7F30EEBC;
    case 0x7F30EEC0u: goto label_7F30EEC0;
    case 0x7F30EEC4u: goto label_7F30EEC4;
    case 0x7F30EEC8u: goto label_7F30EEC8;
    case 0x7F30EECCu: goto label_7F30EECC;
    case 0x7F30EED0u: goto label_7F30EED0;
    case 0x7F30EED4u: goto label_7F30EED4;
    case 0x7F30EED8u: goto label_7F30EED8;
    case 0x7F30EEDCu: goto label_7F30EEDC;
    case 0x7F30EEE0u: goto label_7F30EEE0;
    case 0x7F30EEE4u: goto label_7F30EEE4;
    case 0x7F30EEE8u: goto label_7F30EEE8;
    case 0x7F30EEECu: goto label_7F30EEEC;
    case 0x7F30EEF0u: goto label_7F30EEF0;
    case 0x7F30EEF4u: goto label_7F30EEF4;
    case 0x7F30EEF8u: goto label_7F30EEF8;
    case 0x7F30EEFCu: goto label_7F30EEFC;
    case 0x7F30EF00u: goto label_7F30EF00;
    case 0x7F30EF04u: goto label_7F30EF04;
    case 0x7F30EF08u: goto label_7F30EF08;
    case 0x7F30EF0Cu: goto label_7F30EF0C;
    case 0x7F30EF10u: goto label_7F30EF10;
    case 0x7F30EF14u: goto label_7F30EF14;
    case 0x7F30EF18u: goto label_7F30EF18;
    case 0x7F30EF1Cu: goto label_7F30EF1C;
    case 0x7F30EF20u: goto label_7F30EF20;
    case 0x7F30EF24u: goto label_7F30EF24;
    case 0x7F30EF28u: goto label_7F30EF28;
    case 0x7F30EF2Cu: goto label_7F30EF2C;
    case 0x7F30EF30u: goto label_7F30EF30;
    case 0x7F30EF34u: goto label_7F30EF34;
    case 0x7F30EF38u: goto label_7F30EF38;
    case 0x7F30EF3Cu: goto label_7F30EF3C;
    case 0x7F30EF40u: goto label_7F30EF40;
    case 0x7F30EF44u: goto label_7F30EF44;
    case 0x7F30EF48u: goto label_7F30EF48;
    case 0x7F30EF4Cu: goto label_7F30EF4C;
    case 0x7F30EF50u: goto label_7F30EF50;
    case 0x7F30EF54u: goto label_7F30EF54;
    case 0x7F30EF58u: goto label_7F30EF58;
    case 0x7F30EF5Cu: goto label_7F30EF5C;
    case 0x7F30EF60u: goto label_7F30EF60;
    case 0x7F30EF64u: goto label_7F30EF64;
    case 0x7F30EF68u: goto label_7F30EF68;
    case 0x7F30EF6Cu: goto label_7F30EF6C;
    case 0x7F30EF70u: goto label_7F30EF70;
    case 0x7F30EF74u: goto label_7F30EF74;
    case 0x7F30EF78u: goto label_7F30EF78;
    case 0x7F30EF7Cu: goto label_7F30EF7C;
    case 0x7F30EF80u: goto label_7F30EF80;
    case 0x7F30EF84u: goto label_7F30EF84;
    case 0x7F30EF88u: goto label_7F30EF88;
    case 0x7F30EF8Cu: goto label_7F30EF8C;
    case 0x7F30EF90u: goto label_7F30EF90;
    case 0x7F30EF94u: goto label_7F30EF94;
    case 0x7F30EF98u: goto label_7F30EF98;
    case 0x7F30EF9Cu: goto label_7F30EF9C;
    case 0x7F30EFA0u: goto label_7F30EFA0;
    case 0x7F30EFA4u: goto label_7F30EFA4;
    case 0x7F30EFA8u: goto label_7F30EFA8;
    case 0x7F30EFACu: goto label_7F30EFAC;
    case 0x7F30EFB0u: goto label_7F30EFB0;
    case 0x7F30EFB4u: goto label_7F30EFB4;
    case 0x7F30EFB8u: goto label_7F30EFB8;
    case 0x7F30EFBCu: goto label_7F30EFBC;
    case 0x7F30EFC0u: goto label_7F30EFC0;
    case 0x7F30EFC4u: goto label_7F30EFC4;
    case 0x7F30EFC8u: goto label_7F30EFC8;
    case 0x7F30EFCCu: goto label_7F30EFCC;
    case 0x7F30EFD0u: goto label_7F30EFD0;
    case 0x7F30EFD4u: goto label_7F30EFD4;
    case 0x7F30EFD8u: goto label_7F30EFD8;
    case 0x7F30EFDCu: goto label_7F30EFDC;
    case 0x7F30EFE0u: goto label_7F30EFE0;
    case 0x7F30EFE4u: goto label_7F30EFE4;
    case 0x7F30EFE8u: goto label_7F30EFE8;
    case 0x7F30EFECu: goto label_7F30EFEC;
    case 0x7F30EFF0u: goto label_7F30EFF0;
    case 0x7F30EFF4u: goto label_7F30EFF4;
    case 0x7F30EFF8u: goto label_7F30EFF8;
    case 0x7F30EFFCu: goto label_7F30EFFC;
    case 0x7F30F000u: goto label_7F30F000;
    case 0x7F30F004u: goto label_7F30F004;
    case 0x7F30F008u: goto label_7F30F008;
    case 0x7F30F00Cu: goto label_7F30F00C;
    case 0x7F30F010u: goto label_7F30F010;
    case 0x7F30F014u: goto label_7F30F014;
    case 0x7F30F018u: goto label_7F30F018;
    case 0x7F30F01Cu: goto label_7F30F01C;
    case 0x7F30F020u: goto label_7F30F020;
    case 0x7F30F024u: goto label_7F30F024;
    case 0x7F30F028u: goto label_7F30F028;
    case 0x7F30F02Cu: goto label_7F30F02C;
    case 0x7F30F030u: goto label_7F30F030;
    case 0x7F30F034u: goto label_7F30F034;
    case 0x7F30F038u: goto label_7F30F038;
    case 0x7F30F03Cu: goto label_7F30F03C;
    case 0x7F30F040u: goto label_7F30F040;
    case 0x7F30F044u: goto label_7F30F044;
    case 0x7F30F048u: goto label_7F30F048;
    case 0x7F30F04Cu: goto label_7F30F04C;
    case 0x7F30F050u: goto label_7F30F050;
    case 0x7F30F054u: goto label_7F30F054;
    case 0x7F30F058u: goto label_7F30F058;
    case 0x7F30F05Cu: goto label_7F30F05C;
    case 0x7F30F060u: goto label_7F30F060;
    case 0x7F30F064u: goto label_7F30F064;
    case 0x7F30F068u: goto label_7F30F068;
    case 0x7F30F06Cu: goto label_7F30F06C;
    case 0x7F30F070u: goto label_7F30F070;
    case 0x7F30F074u: goto label_7F30F074;
    case 0x7F30F078u: goto label_7F30F078;
    case 0x7F30F07Cu: goto label_7F30F07C;
    case 0x7F30F080u: goto label_7F30F080;
    case 0x7F30F084u: goto label_7F30F084;
    case 0x7F30F088u: goto label_7F30F088;
    case 0x7F30F08Cu: goto label_7F30F08C;
    case 0x7F30F090u: goto label_7F30F090;
    case 0x7F30F094u: goto label_7F30F094;
    case 0x7F30F098u: goto label_7F30F098;
    case 0x7F30F09Cu: goto label_7F30F09C;
    case 0x7F30F0A0u: goto label_7F30F0A0;
    case 0x7F30F0A4u: goto label_7F30F0A4;
    case 0x7F30F0A8u: goto label_7F30F0A8;
    case 0x7F30F0ACu: goto label_7F30F0AC;
    case 0x7F30F0B0u: goto label_7F30F0B0;
    case 0x7F30F0B4u: goto label_7F30F0B4;
    case 0x7F30F0B8u: goto label_7F30F0B8;
    case 0x7F30F0BCu: goto label_7F30F0BC;
    case 0x7F30F0C0u: goto label_7F30F0C0;
    case 0x7F30F0C4u: goto label_7F30F0C4;
    case 0x7F30F0C8u: goto label_7F30F0C8;
    case 0x7F30F0CCu: goto label_7F30F0CC;
    case 0x7F30F0D0u: goto label_7F30F0D0;
    case 0x7F30F0D4u: goto label_7F30F0D4;
    case 0x7F30F0D8u: goto label_7F30F0D8;
    case 0x7F30F0DCu: goto label_7F30F0DC;
    case 0x7F30F0E0u: goto label_7F30F0E0;
    case 0x7F30F0E4u: goto label_7F30F0E4;
    case 0x7F30F0E8u: goto label_7F30F0E8;
    case 0x7F30F0ECu: goto label_7F30F0EC;
    case 0x7F30F0F0u: goto label_7F30F0F0;
    case 0x7F30F0F4u: goto label_7F30F0F4;
    case 0x7F30F0F8u: goto label_7F30F0F8;
    case 0x7F30F0FCu: goto label_7F30F0FC;
    case 0x7F30F100u: goto label_7F30F100;
    case 0x7F30F104u: goto label_7F30F104;
    case 0x7F30F108u: goto label_7F30F108;
    case 0x7F30F10Cu: goto label_7F30F10C;
    case 0x7F30F110u: goto label_7F30F110;
    case 0x7F30F114u: goto label_7F30F114;
    case 0x7F30F118u: goto label_7F30F118;
    case 0x7F30F11Cu: goto label_7F30F11C;
    case 0x7F30F120u: goto label_7F30F120;
    case 0x7F30F124u: goto label_7F30F124;
    case 0x7F30F128u: goto label_7F30F128;
    case 0x7F30F12Cu: goto label_7F30F12C;
    case 0x7F30F130u: goto label_7F30F130;
    case 0x7F30F134u: goto label_7F30F134;
    case 0x7F30F138u: goto label_7F30F138;
    case 0x7F30F13Cu: goto label_7F30F13C;
    case 0x7F30F140u: goto label_7F30F140;
    case 0x7F30F144u: goto label_7F30F144;
    case 0x7F30F148u: goto label_7F30F148;
    case 0x7F30F14Cu: goto label_7F30F14C;
    case 0x7F30F150u: goto label_7F30F150;
    case 0x7F30F154u: goto label_7F30F154;
    case 0x7F30F158u: goto label_7F30F158;
    case 0x7F30F15Cu: goto label_7F30F15C;
    case 0x7F30F160u: goto label_7F30F160;
    case 0x7F30F164u: goto label_7F30F164;
    case 0x7F30F168u: goto label_7F30F168;
    case 0x7F30F16Cu: goto label_7F30F16C;
    case 0x7F30F170u: goto label_7F30F170;
    case 0x7F30F174u: goto label_7F30F174;
    case 0x7F30F178u: goto label_7F30F178;
    case 0x7F30F17Cu: goto label_7F30F17C;
    case 0x7F30F180u: goto label_7F30F180;
    case 0x7F30F184u: goto label_7F30F184;
    case 0x7F30F188u: goto label_7F30F188;
    case 0x7F30F18Cu: goto label_7F30F18C;
    case 0x7F30F190u: goto label_7F30F190;
    case 0x7F30F194u: goto label_7F30F194;
    case 0x7F30F198u: goto label_7F30F198;
    case 0x7F30F19Cu: goto label_7F30F19C;
    case 0x7F30F1A0u: goto label_7F30F1A0;
    case 0x7F30F1A4u: goto label_7F30F1A4;
    case 0x7F30F1A8u: goto label_7F30F1A8;
    case 0x7F30F1ACu: goto label_7F30F1AC;
    case 0x7F30F1B0u: goto label_7F30F1B0;
    case 0x7F30F1B4u: goto label_7F30F1B4;
    case 0x7F30F1B8u: goto label_7F30F1B8;
    case 0x7F30F1BCu: goto label_7F30F1BC;
    case 0x7F30F1C0u: goto label_7F30F1C0;
    case 0x7F30F1C4u: goto label_7F30F1C4;
    case 0x7F30F1C8u: goto label_7F30F1C8;
    case 0x7F30F1CCu: goto label_7F30F1CC;
    case 0x7F30F1D0u: goto label_7F30F1D0;
    case 0x7F30F1D4u: goto label_7F30F1D4;
    case 0x7F30F1D8u: goto label_7F30F1D8;
    case 0x7F30F1DCu: goto label_7F30F1DC;
    case 0x7F30F1E0u: goto label_7F30F1E0;
    case 0x7F30F1E4u: goto label_7F30F1E4;
    case 0x7F30F1E8u: goto label_7F30F1E8;
    case 0x7F30F1ECu: goto label_7F30F1EC;
    case 0x7F30F1F0u: goto label_7F30F1F0;
    case 0x7F30F1F4u: goto label_7F30F1F4;
    case 0x7F30F1F8u: goto label_7F30F1F8;
    case 0x7F30F1FCu: goto label_7F30F1FC;
    case 0x7F30F200u: goto label_7F30F200;
    case 0x7F30F204u: goto label_7F30F204;
    case 0x7F30F208u: goto label_7F30F208;
    case 0x7F30F20Cu: goto label_7F30F20C;
    case 0x7F30F210u: goto label_7F30F210;
    case 0x7F30F214u: goto label_7F30F214;
    case 0x7F30F218u: goto label_7F30F218;
    case 0x7F30F21Cu: goto label_7F30F21C;
    case 0x7F30F220u: goto label_7F30F220;
    case 0x7F30F224u: goto label_7F30F224;
    case 0x7F30F228u: goto label_7F30F228;
    case 0x7F30F22Cu: goto label_7F30F22C;
    case 0x7F30F230u: goto label_7F30F230;
    case 0x7F30F234u: goto label_7F30F234;
    case 0x7F30F238u: goto label_7F30F238;
    case 0x7F30F23Cu: goto label_7F30F23C;
    case 0x7F30F240u: goto label_7F30F240;
    case 0x7F30F244u: goto label_7F30F244;
    case 0x7F30F248u: goto label_7F30F248;
    case 0x7F30F24Cu: goto label_7F30F24C;
    case 0x7F30F250u: goto label_7F30F250;
    case 0x7F30F254u: goto label_7F30F254;
    case 0x7F30F258u: goto label_7F30F258;
    case 0x7F30F25Cu: goto label_7F30F25C;
    case 0x7F30F260u: goto label_7F30F260;
    case 0x7F30F264u: goto label_7F30F264;
    case 0x7F30F268u: goto label_7F30F268;
    case 0x7F30F26Cu: goto label_7F30F26C;
    case 0x7F30F270u: goto label_7F30F270;
    case 0x7F30F274u: goto label_7F30F274;
    case 0x7F30F278u: goto label_7F30F278;
    case 0x7F30F27Cu: goto label_7F30F27C;
    case 0x7F30F280u: goto label_7F30F280;
    case 0x7F30F284u: goto label_7F30F284;
    case 0x7F30F288u: goto label_7F30F288;
    case 0x7F30F28Cu: goto label_7F30F28C;
    case 0x7F30F290u: goto label_7F30F290;
    case 0x7F30F294u: goto label_7F30F294;
    case 0x7F30F298u: goto label_7F30F298;
    case 0x7F30F29Cu: goto label_7F30F29C;
    case 0x7F30F2A0u: goto label_7F30F2A0;
    case 0x7F30F2A4u: goto label_7F30F2A4;
    case 0x7F30F2A8u: goto label_7F30F2A8;
    case 0x7F30F2ACu: goto label_7F30F2AC;
    case 0x7F30F2B0u: goto label_7F30F2B0;
    case 0x7F30F2B4u: goto label_7F30F2B4;
    case 0x7F30F2B8u: goto label_7F30F2B8;
    case 0x7F30F2BCu: goto label_7F30F2BC;
    case 0x7F30F2C0u: goto label_7F30F2C0;
    case 0x7F30F2C4u: goto label_7F30F2C4;
    case 0x7F30F2C8u: goto label_7F30F2C8;
    case 0x7F30F2CCu: goto label_7F30F2CC;
    case 0x7F30F2D0u: goto label_7F30F2D0;
    case 0x7F30F2D4u: goto label_7F30F2D4;
    case 0x7F30F2D8u: goto label_7F30F2D8;
    case 0x7F30F2DCu: goto label_7F30F2DC;
    case 0x7F30F2E0u: goto label_7F30F2E0;
    case 0x7F30F2E4u: goto label_7F30F2E4;
    case 0x7F30F2E8u: goto label_7F30F2E8;
    case 0x7F30F2ECu: goto label_7F30F2EC;
    case 0x7F30F2F0u: goto label_7F30F2F0;
    case 0x7F30F2F4u: goto label_7F30F2F4;
    case 0x7F30F2F8u: goto label_7F30F2F8;
    case 0x7F30F2FCu: goto label_7F30F2FC;
    case 0x7F30F300u: goto label_7F30F300;
    case 0x7F30F304u: goto label_7F30F304;
    case 0x7F30F308u: goto label_7F30F308;
    case 0x7F30F30Cu: goto label_7F30F30C;
    case 0x7F30F310u: goto label_7F30F310;
    case 0x7F30F314u: goto label_7F30F314;
    case 0x7F30F318u: goto label_7F30F318;
    case 0x7F30F31Cu: goto label_7F30F31C;
    case 0x7F30F320u: goto label_7F30F320;
    case 0x7F30F324u: goto label_7F30F324;
    case 0x7F30F328u: goto label_7F30F328;
    case 0x7F30F32Cu: goto label_7F30F32C;
    case 0x7F30F330u: goto label_7F30F330;
    case 0x7F30F334u: goto label_7F30F334;
    case 0x7F30F338u: goto label_7F30F338;
    case 0x7F30F33Cu: goto label_7F30F33C;
    case 0x7F30F340u: goto label_7F30F340;
    case 0x7F30F344u: goto label_7F30F344;
    case 0x7F30F348u: goto label_7F30F348;
    case 0x7F30F34Cu: goto label_7F30F34C;
    case 0x7F30F350u: goto label_7F30F350;
    case 0x7F30F354u: goto label_7F30F354;
    case 0x7F30F358u: goto label_7F30F358;
    case 0x7F30F35Cu: goto label_7F30F35C;
    case 0x7F30F360u: goto label_7F30F360;
    case 0x7F30F364u: goto label_7F30F364;
    case 0x7F30F368u: goto label_7F30F368;
    case 0x7F30F36Cu: goto label_7F30F36C;
    case 0x7F30F370u: goto label_7F30F370;
    case 0x7F30F374u: goto label_7F30F374;
    case 0x7F30F378u: goto label_7F30F378;
    case 0x7F30F37Cu: goto label_7F30F37C;
    case 0x7F30F380u: goto label_7F30F380;
    case 0x7F30F384u: goto label_7F30F384;
    case 0x7F30F388u: goto label_7F30F388;
    case 0x7F30F38Cu: goto label_7F30F38C;
    case 0x7F30F390u: goto label_7F30F390;
    case 0x7F30F394u: goto label_7F30F394;
    case 0x7F30F398u: goto label_7F30F398;
    case 0x7F30F39Cu: goto label_7F30F39C;
    case 0x7F30F3A0u: goto label_7F30F3A0;
    case 0x7F30F3A4u: goto label_7F30F3A4;
    case 0x7F30F3A8u: goto label_7F30F3A8;
    case 0x7F30F3ACu: goto label_7F30F3AC;
    case 0x7F30F3B0u: goto label_7F30F3B0;
    case 0x7F30F3B4u: goto label_7F30F3B4;
    case 0x7F30F3B8u: goto label_7F30F3B8;
    case 0x7F30F3BCu: goto label_7F30F3BC;
    case 0x7F30F3C0u: goto label_7F30F3C0;
    case 0x7F30F3C4u: goto label_7F30F3C4;
    case 0x7F30F3C8u: goto label_7F30F3C8;
    case 0x7F30F3CCu: goto label_7F30F3CC;
    case 0x7F30F3D0u: goto label_7F30F3D0;
    case 0x7F30F3D4u: goto label_7F30F3D4;
    case 0x7F30F3D8u: goto label_7F30F3D8;
    case 0x7F30F3DCu: goto label_7F30F3DC;
    case 0x7F30F3E0u: goto label_7F30F3E0;
    case 0x7F30F3E4u: goto label_7F30F3E4;
    case 0x7F30F3E8u: goto label_7F30F3E8;
    case 0x7F30F3ECu: goto label_7F30F3EC;
    case 0x7F30F3F0u: goto label_7F30F3F0;
    case 0x7F30F3F4u: goto label_7F30F3F4;
    case 0x7F30F3F8u: goto label_7F30F3F8;
    case 0x7F30F3FCu: goto label_7F30F3FC;
    case 0x7F30F400u: goto label_7F30F400;
    case 0x7F30F404u: goto label_7F30F404;
    case 0x7F30F408u: goto label_7F30F408;
    case 0x7F30F40Cu: goto label_7F30F40C;
    case 0x7F30F410u: goto label_7F30F410;
    case 0x7F30F414u: goto label_7F30F414;
    case 0x7F30F418u: goto label_7F30F418;
    case 0x7F30F41Cu: goto label_7F30F41C;
    case 0x7F30F420u: goto label_7F30F420;
    case 0x7F30F424u: goto label_7F30F424;
    case 0x7F30F428u: goto label_7F30F428;
    case 0x7F30F42Cu: goto label_7F30F42C;
    case 0x7F30F430u: goto label_7F30F430;
    case 0x7F30F434u: goto label_7F30F434;
    case 0x7F30F438u: goto label_7F30F438;
    case 0x7F30F43Cu: goto label_7F30F43C;
    case 0x7F30F440u: goto label_7F30F440;
    case 0x7F30F444u: goto label_7F30F444;
    case 0x7F30F448u: goto label_7F30F448;
    case 0x7F30F44Cu: goto label_7F30F44C;
    case 0x7F30F450u: goto label_7F30F450;
    case 0x7F30F454u: goto label_7F30F454;
    case 0x7F30F458u: goto label_7F30F458;
    case 0x7F30F45Cu: goto label_7F30F45C;
    case 0x7F30F460u: goto label_7F30F460;
    case 0x7F30F464u: goto label_7F30F464;
    case 0x7F30F468u: goto label_7F30F468;
    case 0x7F30F46Cu: goto label_7F30F46C;
    case 0x7F30F470u: goto label_7F30F470;
    case 0x7F30F474u: goto label_7F30F474;
    case 0x7F30F478u: goto label_7F30F478;
    case 0x7F30F47Cu: goto label_7F30F47C;
    case 0x7F30F480u: goto label_7F30F480;
    case 0x7F30F484u: goto label_7F30F484;
    case 0x7F30F488u: goto label_7F30F488;
    case 0x7F30F48Cu: goto label_7F30F48C;
    case 0x7F30F490u: goto label_7F30F490;
    case 0x7F30F494u: goto label_7F30F494;
    case 0x7F30F498u: goto label_7F30F498;
    case 0x7F30F49Cu: goto label_7F30F49C;
    case 0x7F30F4A0u: goto label_7F30F4A0;
    case 0x7F30F4A4u: goto label_7F30F4A4;
    case 0x7F30F4A8u: goto label_7F30F4A8;
    case 0x7F30F4ACu: goto label_7F30F4AC;
    case 0x7F30F4B0u: goto label_7F30F4B0;
    case 0x7F30F4B4u: goto label_7F30F4B4;
    case 0x7F30F4B8u: goto label_7F30F4B8;
    case 0x7F30F4BCu: goto label_7F30F4BC;
    case 0x7F30F4C0u: goto label_7F30F4C0;
    case 0x7F30F4C4u: goto label_7F30F4C4;
    case 0x7F30F4C8u: goto label_7F30F4C8;
    case 0x7F30F4CCu: goto label_7F30F4CC;
    case 0x7F30F4D0u: goto label_7F30F4D0;
    case 0x7F30F4D4u: goto label_7F30F4D4;
    case 0x7F30F4D8u: goto label_7F30F4D8;
    case 0x7F30F4DCu: goto label_7F30F4DC;
    case 0x7F30F4E0u: goto label_7F30F4E0;
    case 0x7F30F4E4u: goto label_7F30F4E4;
    case 0x7F30F4E8u: goto label_7F30F4E8;
    case 0x7F30F4ECu: goto label_7F30F4EC;
    case 0x7F30F4F0u: goto label_7F30F4F0;
    case 0x7F30F4F4u: goto label_7F30F4F4;
    case 0x7F30F4F8u: goto label_7F30F4F8;
    case 0x7F30F4FCu: goto label_7F30F4FC;
    case 0x7F30F500u: goto label_7F30F500;
    case 0x7F30F504u: goto label_7F30F504;
    case 0x7F30F508u: goto label_7F30F508;
    case 0x7F30F50Cu: goto label_7F30F50C;
    case 0x7F30F510u: goto label_7F30F510;
    case 0x7F30F514u: goto label_7F30F514;
    case 0x7F30F518u: goto label_7F30F518;
    case 0x7F30F51Cu: goto label_7F30F51C;
    case 0x7F30F520u: goto label_7F30F520;
    case 0x7F30F524u: goto label_7F30F524;
    case 0x7F30F528u: goto label_7F30F528;
    case 0x7F30F52Cu: goto label_7F30F52C;
    case 0x7F30F530u: goto label_7F30F530;
    case 0x7F30F534u: goto label_7F30F534;
    case 0x7F30F538u: goto label_7F30F538;
    case 0x7F30F53Cu: goto label_7F30F53C;
    case 0x7F30F540u: goto label_7F30F540;
    case 0x7F30F544u: goto label_7F30F544;
    case 0x7F30F548u: goto label_7F30F548;
    case 0x7F30F54Cu: goto label_7F30F54C;
    case 0x7F30F550u: goto label_7F30F550;
    case 0x7F30F554u: goto label_7F30F554;
    case 0x7F30F558u: goto label_7F30F558;
    case 0x7F30F55Cu: goto label_7F30F55C;
    case 0x7F30F560u: goto label_7F30F560;
    case 0x7F30F564u: goto label_7F30F564;
    case 0x7F30F568u: goto label_7F30F568;
    case 0x7F30F56Cu: goto label_7F30F56C;
    case 0x7F30F570u: goto label_7F30F570;
    case 0x7F30F574u: goto label_7F30F574;
    case 0x7F30F578u: goto label_7F30F578;
    case 0x7F30F57Cu: goto label_7F30F57C;
    case 0x7F30F580u: goto label_7F30F580;
    case 0x7F30F584u: goto label_7F30F584;
    case 0x7F30F588u: goto label_7F30F588;
    case 0x7F30F58Cu: goto label_7F30F58C;
    case 0x7F30F590u: goto label_7F30F590;
    case 0x7F30F594u: goto label_7F30F594;
    case 0x7F30F598u: goto label_7F30F598;
    case 0x7F30F59Cu: goto label_7F30F59C;
    case 0x7F30F5A0u: goto label_7F30F5A0;
    case 0x7F30F5A4u: goto label_7F30F5A4;
    case 0x7F30F5A8u: goto label_7F30F5A8;
    case 0x7F30F5ACu: goto label_7F30F5AC;
    case 0x7F30F5B0u: goto label_7F30F5B0;
    case 0x7F30F5B4u: goto label_7F30F5B4;
    case 0x7F30F5B8u: goto label_7F30F5B8;
    case 0x7F30F5BCu: goto label_7F30F5BC;
    case 0x7F30F5C0u: goto label_7F30F5C0;
    case 0x7F30F5C4u: goto label_7F30F5C4;
    case 0x7F30F5C8u: goto label_7F30F5C8;
    case 0x7F30F5CCu: goto label_7F30F5CC;
    case 0x7F30F5D0u: goto label_7F30F5D0;
    case 0x7F30F5D4u: goto label_7F30F5D4;
    case 0x7F30F5D8u: goto label_7F30F5D8;
    case 0x7F30F5DCu: goto label_7F30F5DC;
    case 0x7F30F5E0u: goto label_7F30F5E0;
    case 0x7F30F5E4u: goto label_7F30F5E4;
    case 0x7F30F5E8u: goto label_7F30F5E8;
    case 0x7F30F5ECu: goto label_7F30F5EC;
    case 0x7F30F5F0u: goto label_7F30F5F0;
    case 0x7F30F5F4u: goto label_7F30F5F4;
    case 0x7F30F5F8u: goto label_7F30F5F8;
    case 0x7F30F5FCu: goto label_7F30F5FC;
    case 0x7F30F600u: goto label_7F30F600;
    case 0x7F30F604u: goto label_7F30F604;
    case 0x7F30F608u: goto label_7F30F608;
    case 0x7F30F60Cu: goto label_7F30F60C;
    case 0x7F30F610u: goto label_7F30F610;
    case 0x7F30F614u: goto label_7F30F614;
    case 0x7F30F618u: goto label_7F30F618;
    case 0x7F30F61Cu: goto label_7F30F61C;
    case 0x7F30F620u: goto label_7F30F620;
    case 0x7F30F624u: goto label_7F30F624;
    case 0x7F30F628u: goto label_7F30F628;
    case 0x7F30F62Cu: goto label_7F30F62C;
    case 0x7F30F630u: goto label_7F30F630;
    case 0x7F30F634u: goto label_7F30F634;
    case 0x7F30F638u: goto label_7F30F638;
    case 0x7F30F63Cu: goto label_7F30F63C;
    case 0x7F30F640u: goto label_7F30F640;
    case 0x7F30F644u: goto label_7F30F644;
    case 0x7F30F648u: goto label_7F30F648;
    case 0x7F30F64Cu: goto label_7F30F64C;
    case 0x7F30F650u: goto label_7F30F650;
    case 0x7F30F654u: goto label_7F30F654;
    case 0x7F30F658u: goto label_7F30F658;
    case 0x7F30F65Cu: goto label_7F30F65C;
    case 0x7F30F660u: goto label_7F30F660;
    case 0x7F30F664u: goto label_7F30F664;
    case 0x7F30F668u: goto label_7F30F668;
    case 0x7F30F66Cu: goto label_7F30F66C;
    case 0x7F30F670u: goto label_7F30F670;
    case 0x7F30F674u: goto label_7F30F674;
    case 0x7F30F678u: goto label_7F30F678;
    case 0x7F30F67Cu: goto label_7F30F67C;
    case 0x7F30F680u: goto label_7F30F680;
    case 0x7F30F684u: goto label_7F30F684;
    case 0x7F30F688u: goto label_7F30F688;
    case 0x7F30F68Cu: goto label_7F30F68C;
    case 0x7F30F690u: goto label_7F30F690;
    case 0x7F30F694u: goto label_7F30F694;
    case 0x7F30F698u: goto label_7F30F698;
    case 0x7F30F69Cu: goto label_7F30F69C;
    case 0x7F30F6A0u: goto label_7F30F6A0;
    case 0x7F30F6A4u: goto label_7F30F6A4;
    case 0x7F30F6A8u: goto label_7F30F6A8;
    case 0x7F30F6ACu: goto label_7F30F6AC;
    case 0x7F30F6B0u: goto label_7F30F6B0;
    case 0x7F30F6B4u: goto label_7F30F6B4;
    case 0x7F30F6B8u: goto label_7F30F6B8;
    case 0x7F30F6BCu: goto label_7F30F6BC;
    case 0x7F30F6C0u: goto label_7F30F6C0;
    case 0x7F30F6C4u: goto label_7F30F6C4;
    case 0x7F30F6C8u: goto label_7F30F6C8;
    case 0x7F30F6CCu: goto label_7F30F6CC;
    case 0x7F30F6D0u: goto label_7F30F6D0;
    case 0x7F30F6D4u: goto label_7F30F6D4;
    case 0x7F30F6D8u: goto label_7F30F6D8;
    case 0x7F30F6DCu: goto label_7F30F6DC;
    case 0x7F30F6E0u: goto label_7F30F6E0;
    case 0x7F30F6E4u: goto label_7F30F6E4;
    case 0x7F30F6E8u: goto label_7F30F6E8;
    case 0x7F30F6ECu: goto label_7F30F6EC;
    case 0x7F30F6F0u: goto label_7F30F6F0;
    case 0x7F30F6F4u: goto label_7F30F6F4;
    case 0x7F30F6F8u: goto label_7F30F6F8;
    case 0x7F30F6FCu: goto label_7F30F6FC;
    case 0x7F30F700u: goto label_7F30F700;
    case 0x7F30F704u: goto label_7F30F704;
    case 0x7F30F708u: goto label_7F30F708;
    case 0x7F30F70Cu: goto label_7F30F70C;
    case 0x7F30F710u: goto label_7F30F710;
    case 0x7F30F714u: goto label_7F30F714;
    case 0x7F30F718u: goto label_7F30F718;
    case 0x7F30F71Cu: goto label_7F30F71C;
    case 0x7F30F720u: goto label_7F30F720;
    case 0x7F30F724u: goto label_7F30F724;
    case 0x7F30F728u: goto label_7F30F728;
    case 0x7F30F72Cu: goto label_7F30F72C;
    case 0x7F30F730u: goto label_7F30F730;
    case 0x7F30F734u: goto label_7F30F734;
    case 0x7F30F738u: goto label_7F30F738;
    case 0x7F30F73Cu: goto label_7F30F73C;
    case 0x7F30F740u: goto label_7F30F740;
    case 0x7F30F744u: goto label_7F30F744;
    case 0x7F30F748u: goto label_7F30F748;
    case 0x7F30F74Cu: goto label_7F30F74C;
    case 0x7F30F750u: goto label_7F30F750;
    case 0x7F30F754u: goto label_7F30F754;
    case 0x7F30F758u: goto label_7F30F758;
    case 0x7F30F75Cu: goto label_7F30F75C;
    case 0x7F30F760u: goto label_7F30F760;
    case 0x7F30F764u: goto label_7F30F764;
    case 0x7F30F768u: goto label_7F30F768;
    case 0x7F30F76Cu: goto label_7F30F76C;
    case 0x7F30F770u: goto label_7F30F770;
    case 0x7F30F774u: goto label_7F30F774;
    case 0x7F30F778u: goto label_7F30F778;
    case 0x7F30F77Cu: goto label_7F30F77C;
    case 0x7F30F780u: goto label_7F30F780;
    case 0x7F30F784u: goto label_7F30F784;
    case 0x7F30F788u: goto label_7F30F788;
    case 0x7F30F78Cu: goto label_7F30F78C;
    case 0x7F30F790u: goto label_7F30F790;
    case 0x7F30F794u: goto label_7F30F794;
    case 0x7F30F798u: goto label_7F30F798;
    case 0x7F30F79Cu: goto label_7F30F79C;
    case 0x7F30F7A0u: goto label_7F30F7A0;
    case 0x7F30F7A4u: goto label_7F30F7A4;
    case 0x7F30F7A8u: goto label_7F30F7A8;
    case 0x7F30F7ACu: goto label_7F30F7AC;
    case 0x7F30F7B0u: goto label_7F30F7B0;
    case 0x7F30F7B4u: goto label_7F30F7B4;
    case 0x7F30F7B8u: goto label_7F30F7B8;
    case 0x7F30F7BCu: goto label_7F30F7BC;
    case 0x7F30F7C0u: goto label_7F30F7C0;
    case 0x7F30F7C4u: goto label_7F30F7C4;
    case 0x7F30F7C8u: goto label_7F30F7C8;
    case 0x7F30F7CCu: goto label_7F30F7CC;
    case 0x7F30F7D0u: goto label_7F30F7D0;
    case 0x7F30F7D4u: goto label_7F30F7D4;
    case 0x7F30F7D8u: goto label_7F30F7D8;
    case 0x7F30F7DCu: goto label_7F30F7DC;
    case 0x7F30F7E0u: goto label_7F30F7E0;
    case 0x7F30F7E4u: goto label_7F30F7E4;
    case 0x7F30F7E8u: goto label_7F30F7E8;
    case 0x7F30F7ECu: goto label_7F30F7EC;
    case 0x7F30F7F0u: goto label_7F30F7F0;
    case 0x7F30F7F4u: goto label_7F30F7F4;
    case 0x7F30F7F8u: goto label_7F30F7F8;
    case 0x7F30F7FCu: goto label_7F30F7FC;
    case 0x7F30F800u: goto label_7F30F800;
    case 0x7F30F804u: goto label_7F30F804;
    case 0x7F30F808u: goto label_7F30F808;
    case 0x7F30F80Cu: goto label_7F30F80C;
    case 0x7F30F810u: goto label_7F30F810;
    case 0x7F30F814u: goto label_7F30F814;
    case 0x7F30F818u: goto label_7F30F818;
    case 0x7F30F81Cu: goto label_7F30F81C;
    case 0x7F30F820u: goto label_7F30F820;
    case 0x7F30F824u: goto label_7F30F824;
    case 0x7F30F828u: goto label_7F30F828;
    case 0x7F30F82Cu: goto label_7F30F82C;
    case 0x7F30F830u: goto label_7F30F830;
    case 0x7F30F834u: goto label_7F30F834;
    case 0x7F30F838u: goto label_7F30F838;
    case 0x7F30F83Cu: goto label_7F30F83C;
    case 0x7F30F840u: goto label_7F30F840;
    case 0x7F30F844u: goto label_7F30F844;
    case 0x7F30F848u: goto label_7F30F848;
    case 0x7F30F84Cu: goto label_7F30F84C;
    case 0x7F30F850u: goto label_7F30F850;
    case 0x7F30F854u: goto label_7F30F854;
    case 0x7F30F858u: goto label_7F30F858;
    case 0x7F30F85Cu: goto label_7F30F85C;
    case 0x7F30F860u: goto label_7F30F860;
    case 0x7F30F864u: goto label_7F30F864;
    case 0x7F30F868u: goto label_7F30F868;
    case 0x7F30F86Cu: goto label_7F30F86C;
    case 0x7F30F870u: goto label_7F30F870;
    case 0x7F30F874u: goto label_7F30F874;
    case 0x7F30F878u: goto label_7F30F878;
    case 0x7F30F87Cu: goto label_7F30F87C;
    case 0x7F30F880u: goto label_7F30F880;
    case 0x7F30F884u: goto label_7F30F884;
    case 0x7F30F888u: goto label_7F30F888;
    case 0x7F30F88Cu: goto label_7F30F88C;
    case 0x7F30F890u: goto label_7F30F890;
    case 0x7F30F894u: goto label_7F30F894;
    case 0x7F30F898u: goto label_7F30F898;
    case 0x7F30F89Cu: goto label_7F30F89C;
    case 0x7F30F8A0u: goto label_7F30F8A0;
    case 0x7F30F8A4u: goto label_7F30F8A4;
    case 0x7F30F8A8u: goto label_7F30F8A8;
    case 0x7F30F8ACu: goto label_7F30F8AC;
    case 0x7F30F8B0u: goto label_7F30F8B0;
    case 0x7F30F8B4u: goto label_7F30F8B4;
    case 0x7F30F8B8u: goto label_7F30F8B8;
    case 0x7F30F8BCu: goto label_7F30F8BC;
    case 0x7F30F8C0u: goto label_7F30F8C0;
    case 0x7F30F8C4u: goto label_7F30F8C4;
    case 0x7F30F8C8u: goto label_7F30F8C8;
    case 0x7F30F8CCu: goto label_7F30F8CC;
    case 0x7F30F8D0u: goto label_7F30F8D0;
    case 0x7F30F8D4u: goto label_7F30F8D4;
    case 0x7F30F8D8u: goto label_7F30F8D8;
    case 0x7F30F8DCu: goto label_7F30F8DC;
    case 0x7F30F8E0u: goto label_7F30F8E0;
    case 0x7F30F8E4u: goto label_7F30F8E4;
    case 0x7F30F8E8u: goto label_7F30F8E8;
    case 0x7F30F8ECu: goto label_7F30F8EC;
    case 0x7F30F8F0u: goto label_7F30F8F0;
    case 0x7F30F8F4u: goto label_7F30F8F4;
    case 0x7F30F8F8u: goto label_7F30F8F8;
    case 0x7F30F8FCu: goto label_7F30F8FC;
    case 0x7F30F900u: goto label_7F30F900;
    case 0x7F30F904u: goto label_7F30F904;
    case 0x7F30F908u: goto label_7F30F908;
    case 0x7F30F90Cu: goto label_7F30F90C;
    case 0x7F30F910u: goto label_7F30F910;
    case 0x7F30F914u: goto label_7F30F914;
    case 0x7F30F918u: goto label_7F30F918;
    case 0x7F30F91Cu: goto label_7F30F91C;
    case 0x7F30F920u: goto label_7F30F920;
    case 0x7F30F924u: goto label_7F30F924;
    case 0x7F30F928u: goto label_7F30F928;
    case 0x7F30F92Cu: goto label_7F30F92C;
    case 0x7F30F930u: goto label_7F30F930;
    case 0x7F30F934u: goto label_7F30F934;
    case 0x7F30F938u: goto label_7F30F938;
    case 0x7F30F93Cu: goto label_7F30F93C;
    case 0x7F30F940u: goto label_7F30F940;
    case 0x7F30F944u: goto label_7F30F944;
    case 0x7F30F948u: goto label_7F30F948;
    case 0x7F30F94Cu: goto label_7F30F94C;
    case 0x7F30F950u: goto label_7F30F950;
    case 0x7F30F954u: goto label_7F30F954;
    case 0x7F30F958u: goto label_7F30F958;
    case 0x7F30F95Cu: goto label_7F30F95C;
    case 0x7F30F960u: goto label_7F30F960;
    case 0x7F30F964u: goto label_7F30F964;
    case 0x7F30F968u: goto label_7F30F968;
    case 0x7F30F96Cu: goto label_7F30F96C;
    case 0x7F30F970u: goto label_7F30F970;
    case 0x7F30F974u: goto label_7F30F974;
    case 0x7F30F978u: goto label_7F30F978;
    case 0x7F30F97Cu: goto label_7F30F97C;
    case 0x7F30F980u: goto label_7F30F980;
    case 0x7F30F984u: goto label_7F30F984;
    case 0x7F30F988u: goto label_7F30F988;
    case 0x7F30F98Cu: goto label_7F30F98C;
    case 0x7F30F990u: goto label_7F30F990;
    case 0x7F30F994u: goto label_7F30F994;
    case 0x7F30F998u: goto label_7F30F998;
    case 0x7F30F99Cu: goto label_7F30F99C;
    case 0x7F30F9A0u: goto label_7F30F9A0;
    case 0x7F30F9A4u: goto label_7F30F9A4;
    case 0x7F30F9A8u: goto label_7F30F9A8;
    case 0x7F30F9ACu: goto label_7F30F9AC;
    case 0x7F30F9B0u: goto label_7F30F9B0;
    case 0x7F30F9B4u: goto label_7F30F9B4;
    case 0x7F30F9B8u: goto label_7F30F9B8;
    case 0x7F30F9BCu: goto label_7F30F9BC;
    case 0x7F30F9C0u: goto label_7F30F9C0;
    case 0x7F30F9C4u: goto label_7F30F9C4;
    case 0x7F30F9C8u: goto label_7F30F9C8;
    case 0x7F30F9CCu: goto label_7F30F9CC;
    case 0x7F30F9D0u: goto label_7F30F9D0;
    case 0x7F30F9D4u: goto label_7F30F9D4;
    case 0x7F30F9D8u: goto label_7F30F9D8;
    case 0x7F30F9DCu: goto label_7F30F9DC;
    case 0x7F30F9E0u: goto label_7F30F9E0;
    case 0x7F30F9E4u: goto label_7F30F9E4;
    case 0x7F30F9E8u: goto label_7F30F9E8;
    case 0x7F30F9ECu: goto label_7F30F9EC;
    case 0x7F30F9F0u: goto label_7F30F9F0;
    case 0x7F30F9F4u: goto label_7F30F9F4;
    case 0x7F30F9F8u: goto label_7F30F9F8;
    case 0x7F30F9FCu: goto label_7F30F9FC;
    case 0x7F30FA00u: goto label_7F30FA00;
    case 0x7F30FA04u: goto label_7F30FA04;
    case 0x7F30FA08u: goto label_7F30FA08;
    case 0x7F30FA0Cu: goto label_7F30FA0C;
    case 0x7F30FA10u: goto label_7F30FA10;
    case 0x7F30FA14u: goto label_7F30FA14;
    case 0x7F30FA18u: goto label_7F30FA18;
    case 0x7F30FA1Cu: goto label_7F30FA1C;
    case 0x7F30FA20u: goto label_7F30FA20;
    case 0x7F30FA24u: goto label_7F30FA24;
    case 0x7F30FA28u: goto label_7F30FA28;
    case 0x7F30FA2Cu: goto label_7F30FA2C;
    case 0x7F30FA30u: goto label_7F30FA30;
    case 0x7F30FA34u: goto label_7F30FA34;
    case 0x7F30FA38u: goto label_7F30FA38;
    case 0x7F30FA3Cu: goto label_7F30FA3C;
    case 0x7F30FA40u: goto label_7F30FA40;
    case 0x7F30FA44u: goto label_7F30FA44;
    case 0x7F30FA48u: goto label_7F30FA48;
    case 0x7F30FA4Cu: goto label_7F30FA4C;
    case 0x7F30FA50u: goto label_7F30FA50;
    case 0x7F30FA54u: goto label_7F30FA54;
    case 0x7F30FA58u: goto label_7F30FA58;
    case 0x7F30FA5Cu: goto label_7F30FA5C;
    case 0x7F30FA60u: goto label_7F30FA60;
    case 0x7F30FA64u: goto label_7F30FA64;
    case 0x7F30FA68u: goto label_7F30FA68;
    case 0x7F30FA6Cu: goto label_7F30FA6C;
    case 0x7F30FA70u: goto label_7F30FA70;
    case 0x7F30FA74u: goto label_7F30FA74;
    case 0x7F30FA78u: goto label_7F30FA78;
    case 0x7F30FA7Cu: goto label_7F30FA7C;
    case 0x7F30FA80u: goto label_7F30FA80;
    case 0x7F30FA84u: goto label_7F30FA84;
    case 0x7F30FA88u: goto label_7F30FA88;
    case 0x7F30FA8Cu: goto label_7F30FA8C;
    case 0x7F30FA90u: goto label_7F30FA90;
    case 0x7F30FA94u: goto label_7F30FA94;
    case 0x7F30FA98u: goto label_7F30FA98;
    case 0x7F30FA9Cu: goto label_7F30FA9C;
    case 0x7F30FAA0u: goto label_7F30FAA0;
    case 0x7F30FAA4u: goto label_7F30FAA4;
    case 0x7F30FAA8u: goto label_7F30FAA8;
    case 0x7F30FAACu: goto label_7F30FAAC;
    case 0x7F30FAB0u: goto label_7F30FAB0;
    case 0x7F30FAB4u: goto label_7F30FAB4;
    case 0x7F30FAB8u: goto label_7F30FAB8;
    case 0x7F30FABCu: goto label_7F30FABC;
    case 0x7F30FAC0u: goto label_7F30FAC0;
    case 0x7F30FAC4u: goto label_7F30FAC4;
    case 0x7F30FAC8u: goto label_7F30FAC8;
    case 0x7F30FACCu: goto label_7F30FACC;
    case 0x7F30FAD0u: goto label_7F30FAD0;
    case 0x7F30FAD4u: goto label_7F30FAD4;
    case 0x7F30FAD8u: goto label_7F30FAD8;
    case 0x7F30FADCu: goto label_7F30FADC;
    case 0x7F30FAE0u: goto label_7F30FAE0;
    case 0x7F30FAE4u: goto label_7F30FAE4;
    case 0x7F30FAE8u: goto label_7F30FAE8;
    case 0x7F30FAECu: goto label_7F30FAEC;
    case 0x7F30FAF0u: goto label_7F30FAF0;
    case 0x7F30FAF4u: goto label_7F30FAF4;
    case 0x7F30FAF8u: goto label_7F30FAF8;
    case 0x7F30FAFCu: goto label_7F30FAFC;
    case 0x7F30FB00u: goto label_7F30FB00;
    case 0x7F30FB04u: goto label_7F30FB04;
    case 0x7F30FB08u: goto label_7F30FB08;
    case 0x7F30FB0Cu: goto label_7F30FB0C;
    case 0x7F30FB10u: goto label_7F30FB10;
    case 0x7F30FB14u: goto label_7F30FB14;
    case 0x7F30FB18u: goto label_7F30FB18;
    case 0x7F30FB1Cu: goto label_7F30FB1C;
    case 0x7F30FB20u: goto label_7F30FB20;
    case 0x7F30FB24u: goto label_7F30FB24;
    case 0x7F30FB28u: goto label_7F30FB28;
    case 0x7F30FB2Cu: goto label_7F30FB2C;
    case 0x7F30FB30u: goto label_7F30FB30;
    case 0x7F30FB34u: goto label_7F30FB34;
    case 0x7F30FB38u: goto label_7F30FB38;
    case 0x7F30FB3Cu: goto label_7F30FB3C;
    case 0x7F30FB40u: goto label_7F30FB40;
    case 0x7F30FB44u: goto label_7F30FB44;
    case 0x7F30FB48u: goto label_7F30FB48;
    case 0x7F30FB4Cu: goto label_7F30FB4C;
    case 0x7F30FB50u: goto label_7F30FB50;
    case 0x7F30FB54u: goto label_7F30FB54;
    case 0x7F30FB58u: goto label_7F30FB58;
    case 0x7F30FB5Cu: goto label_7F30FB5C;
    case 0x7F30FB60u: goto label_7F30FB60;
    case 0x7F30FB64u: goto label_7F30FB64;
    case 0x7F30FB68u: goto label_7F30FB68;
    case 0x7F30FB6Cu: goto label_7F30FB6C;
    case 0x7F30FB70u: goto label_7F30FB70;
    case 0x7F30FB74u: goto label_7F30FB74;
    case 0x7F30FB78u: goto label_7F30FB78;
    case 0x7F30FB7Cu: goto label_7F30FB7C;
    case 0x7F30FB80u: goto label_7F30FB80;
    case 0x7F30FB84u: goto label_7F30FB84;
    case 0x7F30FB88u: goto label_7F30FB88;
    case 0x7F30FB8Cu: goto label_7F30FB8C;
    case 0x7F30FB90u: goto label_7F30FB90;
    case 0x7F30FB94u: goto label_7F30FB94;
    case 0x7F30FB98u: goto label_7F30FB98;
    case 0x7F30FB9Cu: goto label_7F30FB9C;
    case 0x7F30FBA0u: goto label_7F30FBA0;
    case 0x7F30FBA4u: goto label_7F30FBA4;
    case 0x7F30FBA8u: goto label_7F30FBA8;
    case 0x7F30FBACu: goto label_7F30FBAC;
    case 0x7F30FBB0u: goto label_7F30FBB0;
    case 0x7F30FBB4u: goto label_7F30FBB4;
    case 0x7F30FBB8u: goto label_7F30FBB8;
    case 0x7F30FBBCu: goto label_7F30FBBC;
    case 0x7F30FBC0u: goto label_7F30FBC0;
    case 0x7F30FBC4u: goto label_7F30FBC4;
    case 0x7F30FBC8u: goto label_7F30FBC8;
    case 0x7F30FBCCu: goto label_7F30FBCC;
    case 0x7F30FBD0u: goto label_7F30FBD0;
    case 0x7F30FBD4u: goto label_7F30FBD4;
    case 0x7F30FBD8u: goto label_7F30FBD8;
    case 0x7F30FBDCu: goto label_7F30FBDC;
    case 0x7F30FBE0u: goto label_7F30FBE0;
    case 0x7F30FBE4u: goto label_7F30FBE4;
    case 0x7F30FBE8u: goto label_7F30FBE8;
    case 0x7F30FBECu: goto label_7F30FBEC;
    case 0x7F30FBF0u: goto label_7F30FBF0;
    case 0x7F30FBF4u: goto label_7F30FBF4;
    case 0x7F30FBF8u: goto label_7F30FBF8;
    case 0x7F30FBFCu: goto label_7F30FBFC;
    case 0x7F30FC00u: goto label_7F30FC00;
    case 0x7F30FC04u: goto label_7F30FC04;
    case 0x7F30FC08u: goto label_7F30FC08;
    case 0x7F30FC0Cu: goto label_7F30FC0C;
    case 0x7F30FC10u: goto label_7F30FC10;
    case 0x7F30FC14u: goto label_7F30FC14;
    case 0x7F30FC18u: goto label_7F30FC18;
    case 0x7F30FC1Cu: goto label_7F30FC1C;
    case 0x7F30FC20u: goto label_7F30FC20;
    case 0x7F30FC24u: goto label_7F30FC24;
    case 0x7F30FC28u: goto label_7F30FC28;
    case 0x7F30FC2Cu: goto label_7F30FC2C;
    case 0x7F30FC30u: goto label_7F30FC30;
    case 0x7F30FC34u: goto label_7F30FC34;
    case 0x7F30FC38u: goto label_7F30FC38;
    case 0x7F30FC3Cu: goto label_7F30FC3C;
    case 0x7F30FC40u: goto label_7F30FC40;
    case 0x7F30FC44u: goto label_7F30FC44;
    case 0x7F30FC48u: goto label_7F30FC48;
    case 0x7F30FC4Cu: goto label_7F30FC4C;
    case 0x7F30FC50u: goto label_7F30FC50;
    case 0x7F30FC54u: goto label_7F30FC54;
    case 0x7F30FC58u: goto label_7F30FC58;
    case 0x7F30FC5Cu: goto label_7F30FC5C;
    case 0x7F30FC60u: goto label_7F30FC60;
    case 0x7F30FC64u: goto label_7F30FC64;
    case 0x7F30FC68u: goto label_7F30FC68;
    case 0x7F30FC6Cu: goto label_7F30FC6C;
    case 0x7F30FC70u: goto label_7F30FC70;
    case 0x7F30FC74u: goto label_7F30FC74;
    case 0x7F30FC78u: goto label_7F30FC78;
    case 0x7F30FC7Cu: goto label_7F30FC7C;
    case 0x7F30FC80u: goto label_7F30FC80;
    case 0x7F30FC84u: goto label_7F30FC84;
    case 0x7F30FC88u: goto label_7F30FC88;
    case 0x7F30FC8Cu: goto label_7F30FC8C;
    case 0x7F30FC90u: goto label_7F30FC90;
    case 0x7F30FC94u: goto label_7F30FC94;
    case 0x7F30FC98u: goto label_7F30FC98;
    case 0x7F30FC9Cu: goto label_7F30FC9C;
    case 0x7F30FCA0u: goto label_7F30FCA0;
    case 0x7F30FCA4u: goto label_7F30FCA4;
    case 0x7F30FCA8u: goto label_7F30FCA8;
    case 0x7F30FCACu: goto label_7F30FCAC;
    case 0x7F30FCB0u: goto label_7F30FCB0;
    case 0x7F30FCB4u: goto label_7F30FCB4;
    case 0x7F30FCB8u: goto label_7F30FCB8;
    case 0x7F30FCBCu: goto label_7F30FCBC;
    case 0x7F30FCC0u: goto label_7F30FCC0;
    case 0x7F30FCC4u: goto label_7F30FCC4;
    case 0x7F30FCC8u: goto label_7F30FCC8;
    case 0x7F30FCCCu: goto label_7F30FCCC;
    case 0x7F30FCD0u: goto label_7F30FCD0;
    case 0x7F30FCD4u: goto label_7F30FCD4;
    case 0x7F30FCD8u: goto label_7F30FCD8;
    case 0x7F30FCDCu: goto label_7F30FCDC;
    case 0x7F30FCE0u: goto label_7F30FCE0;
    case 0x7F30FCE4u: goto label_7F30FCE4;
    case 0x7F30FCE8u: goto label_7F30FCE8;
    case 0x7F30FCECu: goto label_7F30FCEC;
    case 0x7F30FCF0u: goto label_7F30FCF0;
    case 0x7F30FCF4u: goto label_7F30FCF4;
    case 0x7F30FCF8u: goto label_7F30FCF8;
    case 0x7F30FCFCu: goto label_7F30FCFC;
    case 0x7F30FD00u: goto label_7F30FD00;
    case 0x7F30FD04u: goto label_7F30FD04;
    case 0x7F30FD08u: goto label_7F30FD08;
    case 0x7F30FD0Cu: goto label_7F30FD0C;
    case 0x7F30FD10u: goto label_7F30FD10;
    case 0x7F30FD14u: goto label_7F30FD14;
    case 0x7F30FD18u: goto label_7F30FD18;
    case 0x7F30FD1Cu: goto label_7F30FD1C;
    case 0x7F30FD20u: goto label_7F30FD20;
    case 0x7F30FD24u: goto label_7F30FD24;
    case 0x7F30FD28u: goto label_7F30FD28;
    case 0x7F30FD2Cu: goto label_7F30FD2C;
    case 0x7F30FD30u: goto label_7F30FD30;
    case 0x7F30FD34u: goto label_7F30FD34;
    case 0x7F30FD38u: goto label_7F30FD38;
    case 0x7F30FD3Cu: goto label_7F30FD3C;
    case 0x7F30FD40u: goto label_7F30FD40;
    case 0x7F30FD44u: goto label_7F30FD44;
    case 0x7F30FD48u: goto label_7F30FD48;
    case 0x7F30FD4Cu: goto label_7F30FD4C;
    case 0x7F30FD50u: goto label_7F30FD50;
    case 0x7F30FD54u: goto label_7F30FD54;
    case 0x7F30FD58u: goto label_7F30FD58;
    case 0x7F30FD5Cu: goto label_7F30FD5C;
    case 0x7F30FD60u: goto label_7F30FD60;
    case 0x7F30FD64u: goto label_7F30FD64;
    case 0x7F30FD68u: goto label_7F30FD68;
    case 0x7F30FD6Cu: goto label_7F30FD6C;
    case 0x7F30FD70u: goto label_7F30FD70;
    case 0x7F30FD74u: goto label_7F30FD74;
    case 0x7F30FD78u: goto label_7F30FD78;
    case 0x7F30FD7Cu: goto label_7F30FD7C;
    case 0x7F30FD80u: goto label_7F30FD80;
    case 0x7F30FD84u: goto label_7F30FD84;
    case 0x7F30FD88u: goto label_7F30FD88;
    case 0x7F30FD8Cu: goto label_7F30FD8C;
    case 0x7F30FD90u: goto label_7F30FD90;
    case 0x7F30FD94u: goto label_7F30FD94;
    case 0x7F30FD98u: goto label_7F30FD98;
    case 0x7F30FD9Cu: goto label_7F30FD9C;
    case 0x7F30FDA0u: goto label_7F30FDA0;
    case 0x7F30FDA4u: goto label_7F30FDA4;
    case 0x7F30FDA8u: goto label_7F30FDA8;
    case 0x7F30FDACu: goto label_7F30FDAC;
    case 0x7F30FDB0u: goto label_7F30FDB0;
    case 0x7F30FDB4u: goto label_7F30FDB4;
    case 0x7F30FDB8u: goto label_7F30FDB8;
    case 0x7F30FDBCu: goto label_7F30FDBC;
    case 0x7F30FDC0u: goto label_7F30FDC0;
    case 0x7F30FDC4u: goto label_7F30FDC4;
    case 0x7F30FDC8u: goto label_7F30FDC8;
    case 0x7F30FDCCu: goto label_7F30FDCC;
    case 0x7F30FDD0u: goto label_7F30FDD0;
    case 0x7F30FDD4u: goto label_7F30FDD4;
    case 0x7F30FDD8u: goto label_7F30FDD8;
    case 0x7F30FDDCu: goto label_7F30FDDC;
    case 0x7F30FDE0u: goto label_7F30FDE0;
    case 0x7F30FDE4u: goto label_7F30FDE4;
    case 0x7F30FDE8u: goto label_7F30FDE8;
    case 0x7F30FDECu: goto label_7F30FDEC;
    case 0x7F30FDF0u: goto label_7F30FDF0;
    case 0x7F30FDF4u: goto label_7F30FDF4;
    case 0x7F30FDF8u: goto label_7F30FDF8;
    case 0x7F30FDFCu: goto label_7F30FDFC;
    case 0x7F30FE00u: goto label_7F30FE00;
    case 0x7F30FE04u: goto label_7F30FE04;
    case 0x7F30FE08u: goto label_7F30FE08;
    case 0x7F30FE0Cu: goto label_7F30FE0C;
    case 0x7F30FE10u: goto label_7F30FE10;
    case 0x7F30FE14u: goto label_7F30FE14;
    case 0x7F30FE18u: goto label_7F30FE18;
    case 0x7F30FE1Cu: goto label_7F30FE1C;
    case 0x7F30FE20u: goto label_7F30FE20;
    case 0x7F30FE24u: goto label_7F30FE24;
    case 0x7F30FE28u: goto label_7F30FE28;
    case 0x7F30FE2Cu: goto label_7F30FE2C;
    case 0x7F30FE30u: goto label_7F30FE30;
    case 0x7F30FE34u: goto label_7F30FE34;
    case 0x7F30FE38u: goto label_7F30FE38;
    case 0x7F30FE3Cu: goto label_7F30FE3C;
    case 0x7F30FE40u: goto label_7F30FE40;
    case 0x7F30FE44u: goto label_7F30FE44;
    case 0x7F30FE48u: goto label_7F30FE48;
    case 0x7F30FE4Cu: goto label_7F30FE4C;
    case 0x7F30FE50u: goto label_7F30FE50;
    case 0x7F30FE54u: goto label_7F30FE54;
    case 0x7F30FE58u: goto label_7F30FE58;
    case 0x7F30FE5Cu: goto label_7F30FE5C;
    case 0x7F30FE60u: goto label_7F30FE60;
    case 0x7F30FE64u: goto label_7F30FE64;
    case 0x7F30FE68u: goto label_7F30FE68;
    case 0x7F30FE6Cu: goto label_7F30FE6C;
    case 0x7F30FE70u: goto label_7F30FE70;
    case 0x7F30FE74u: goto label_7F30FE74;
    case 0x7F30FE78u: goto label_7F30FE78;
    case 0x7F30FE7Cu: goto label_7F30FE7C;
    case 0x7F30FE80u: goto label_7F30FE80;
    case 0x7F30FE84u: goto label_7F30FE84;
    case 0x7F30FE88u: goto label_7F30FE88;
    case 0x7F30FE8Cu: goto label_7F30FE8C;
    case 0x7F30FE90u: goto label_7F30FE90;
    case 0x7F30FE94u: goto label_7F30FE94;
    case 0x7F30FE98u: goto label_7F30FE98;
    case 0x7F30FE9Cu: goto label_7F30FE9C;
    case 0x7F30FEA0u: goto label_7F30FEA0;
    case 0x7F30FEA4u: goto label_7F30FEA4;
    case 0x7F30FEA8u: goto label_7F30FEA8;
    case 0x7F30FEACu: goto label_7F30FEAC;
    case 0x7F30FEB0u: goto label_7F30FEB0;
    case 0x7F30FEB4u: goto label_7F30FEB4;
    case 0x7F30FEB8u: goto label_7F30FEB8;
    case 0x7F30FEBCu: goto label_7F30FEBC;
    case 0x7F30FEC0u: goto label_7F30FEC0;
    case 0x7F30FEC4u: goto label_7F30FEC4;
    case 0x7F30FEC8u: goto label_7F30FEC8;
    case 0x7F30FECCu: goto label_7F30FECC;
    case 0x7F30FED0u: goto label_7F30FED0;
    case 0x7F30FED4u: goto label_7F30FED4;
    case 0x7F30FED8u: goto label_7F30FED8;
    case 0x7F30FEDCu: goto label_7F30FEDC;
    case 0x7F30FEE0u: goto label_7F30FEE0;
    case 0x7F30FEE4u: goto label_7F30FEE4;
    case 0x7F30FEE8u: goto label_7F30FEE8;
    case 0x7F30FEECu: goto label_7F30FEEC;
    case 0x7F30FEF0u: goto label_7F30FEF0;
    case 0x7F30FEF4u: goto label_7F30FEF4;
    case 0x7F30FEF8u: goto label_7F30FEF8;
    case 0x7F30FEFCu: goto label_7F30FEFC;
    case 0x7F30FF00u: goto label_7F30FF00;
    case 0x7F30FF04u: goto label_7F30FF04;
    case 0x7F30FF08u: goto label_7F30FF08;
    case 0x7F30FF0Cu: goto label_7F30FF0C;
    case 0x7F30FF10u: goto label_7F30FF10;
    case 0x7F30FF14u: goto label_7F30FF14;
    case 0x7F30FF18u: goto label_7F30FF18;
    case 0x7F30FF1Cu: goto label_7F30FF1C;
    case 0x7F30FF20u: goto label_7F30FF20;
    case 0x7F30FF24u: goto label_7F30FF24;
    case 0x7F30FF28u: goto label_7F30FF28;
    case 0x7F30FF2Cu: goto label_7F30FF2C;
    case 0x7F30FF30u: goto label_7F30FF30;
    case 0x7F30FF34u: goto label_7F30FF34;
    case 0x7F30FF38u: goto label_7F30FF38;
    case 0x7F30FF3Cu: goto label_7F30FF3C;
    case 0x7F30FF40u: goto label_7F30FF40;
    case 0x7F30FF44u: goto label_7F30FF44;
    case 0x7F30FF48u: goto label_7F30FF48;
    case 0x7F30FF4Cu: goto label_7F30FF4C;
    case 0x7F30FF50u: goto label_7F30FF50;
    case 0x7F30FF54u: goto label_7F30FF54;
    case 0x7F30FF58u: goto label_7F30FF58;
    case 0x7F30FF5Cu: goto label_7F30FF5C;
    case 0x7F30FF60u: goto label_7F30FF60;
    case 0x7F30FF64u: goto label_7F30FF64;
    case 0x7F30FF68u: goto label_7F30FF68;
    case 0x7F30FF6Cu: goto label_7F30FF6C;
    case 0x7F30FF70u: goto label_7F30FF70;
    case 0x7F30FF74u: goto label_7F30FF74;
    case 0x7F30FF78u: goto label_7F30FF78;
    case 0x7F30FF7Cu: goto label_7F30FF7C;
    case 0x7F30FF80u: goto label_7F30FF80;
    case 0x7F30FF84u: goto label_7F30FF84;
    case 0x7F30FF88u: goto label_7F30FF88;
    case 0x7F30FF8Cu: goto label_7F30FF8C;
    case 0x7F30FF90u: goto label_7F30FF90;
    case 0x7F30FF94u: goto label_7F30FF94;
    case 0x7F30FF98u: goto label_7F30FF98;
    case 0x7F30FF9Cu: goto label_7F30FF9C;
    case 0x7F30FFA0u: goto label_7F30FFA0;
    case 0x7F30FFA4u: goto label_7F30FFA4;
    case 0x7F30FFA8u: goto label_7F30FFA8;
    case 0x7F30FFACu: goto label_7F30FFAC;
    case 0x7F30FFB0u: goto label_7F30FFB0;
    case 0x7F30FFB4u: goto label_7F30FFB4;
    case 0x7F30FFB8u: goto label_7F30FFB8;
    case 0x7F30FFBCu: goto label_7F30FFBC;
    case 0x7F30FFC0u: goto label_7F30FFC0;
    case 0x7F30FFC4u: goto label_7F30FFC4;
    case 0x7F30FFC8u: goto label_7F30FFC8;
    case 0x7F30FFCCu: goto label_7F30FFCC;
    case 0x7F30FFD0u: goto label_7F30FFD0;
    case 0x7F30FFD4u: goto label_7F30FFD4;
    case 0x7F30FFD8u: goto label_7F30FFD8;
    case 0x7F30FFDCu: goto label_7F30FFDC;
    case 0x7F30FFE0u: goto label_7F30FFE0;
    case 0x7F30FFE4u: goto label_7F30FFE4;
    case 0x7F30FFE8u: goto label_7F30FFE8;
    case 0x7F30FFECu: goto label_7F30FFEC;
    case 0x7F30FFF0u: goto label_7F30FFF0;
    case 0x7F30FFF4u: goto label_7F30FFF4;
    case 0x7F30FFF8u: goto label_7F30FFF8;
    case 0x7F30FFFCu: goto label_7F30FFFC;
    case 0x7F310000u: goto label_7F310000;
    case 0x7F310004u: goto label_7F310004;
    case 0x7F310008u: goto label_7F310008;
    case 0x7F31000Cu: goto label_7F31000C;
    case 0x7F310010u: goto label_7F310010;
    case 0x7F310014u: goto label_7F310014;
    case 0x7F310018u: goto label_7F310018;
    case 0x7F31001Cu: goto label_7F31001C;
    case 0x7F310020u: goto label_7F310020;
    case 0x7F310024u: goto label_7F310024;
    case 0x7F310028u: goto label_7F310028;
    case 0x7F31002Cu: goto label_7F31002C;
    case 0x7F310030u: goto label_7F310030;
    case 0x7F310034u: goto label_7F310034;
    case 0x7F310038u: goto label_7F310038;
    case 0x7F31003Cu: goto label_7F31003C;
    case 0x7F310040u: goto label_7F310040;
    case 0x7F310044u: goto label_7F310044;
    case 0x7F310048u: goto label_7F310048;
    case 0x7F31004Cu: goto label_7F31004C;
    case 0x7F310050u: goto label_7F310050;
    case 0x7F310054u: goto label_7F310054;
    case 0x7F310058u: goto label_7F310058;
    case 0x7F31005Cu: goto label_7F31005C;
    case 0x7F310060u: goto label_7F310060;
    case 0x7F310064u: goto label_7F310064;
    case 0x7F310068u: goto label_7F310068;
    case 0x7F31006Cu: goto label_7F31006C;
    case 0x7F310070u: goto label_7F310070;
    case 0x7F310074u: goto label_7F310074;
    case 0x7F310078u: goto label_7F310078;
    case 0x7F31007Cu: goto label_7F31007C;
    case 0x7F310080u: goto label_7F310080;
    case 0x7F310084u: goto label_7F310084;
    case 0x7F310088u: goto label_7F310088;
    case 0x7F31008Cu: goto label_7F31008C;
    case 0x7F310090u: goto label_7F310090;
    case 0x7F310094u: goto label_7F310094;
    case 0x7F310098u: goto label_7F310098;
    case 0x7F31009Cu: goto label_7F31009C;
    case 0x7F3100A0u: goto label_7F3100A0;
    case 0x7F3100A4u: goto label_7F3100A4;
    case 0x7F3100A8u: goto label_7F3100A8;
    case 0x7F3100ACu: goto label_7F3100AC;
    case 0x7F3100B0u: goto label_7F3100B0;
    case 0x7F3100B4u: goto label_7F3100B4;
    case 0x7F3100B8u: goto label_7F3100B8;
    case 0x7F3100BCu: goto label_7F3100BC;
    case 0x7F3100C0u: goto label_7F3100C0;
    case 0x7F3100C4u: goto label_7F3100C4;
    case 0x7F3100C8u: goto label_7F3100C8;
    case 0x7F3100CCu: goto label_7F3100CC;
    case 0x7F3100D0u: goto label_7F3100D0;
    case 0x7F3100D4u: goto label_7F3100D4;
    case 0x7F3100D8u: goto label_7F3100D8;
    case 0x7F3100DCu: goto label_7F3100DC;
    case 0x7F3100E0u: goto label_7F3100E0;
    case 0x7F3100E4u: goto label_7F3100E4;
    case 0x7F3100E8u: goto label_7F3100E8;
    default: return;
    }
label_7F30C0EC:
    ctx->pc = 0x7F30C0ECu;
    ctx->downcount -= 8;
    // 7F30C0EC: addi    r4, r29, 72
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(72);

label_7F30C0F0:
    ctx->pc = 0x7F30C0F0u;
    // 7F30C0F0: addi    r5, r29, 112
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(112);

label_7F30C0F4:
    ctx->pc = 0x7F30C0F4u;
    // 7F30C0F4: lbz     r0, -24704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30C0F8:
    ctx->pc = 0x7F30C0F8u;
    // 7F30C0F8: addi    r6, r29, 116
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(116);

label_7F30C0FC:
    ctx->pc = 0x7F30C0FCu;
    // 7F30C0FC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30C100:
    ctx->pc = 0x7F30C100u;
    // 7F30C100: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30C104:
    ctx->pc = 0x7F30C104u;
    // 7F30C104: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C108:
    ctx->pc = 0x7F30C108u;
    // 7F30C108: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C10Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C10C:
    ctx->pc = 0x7F30C10Cu;
    ctx->downcount -= 6;
    // 7F30C10C: lis     r3, 68
    ctx->gpr[3] = ((u32)(s32)(68) << 16);

label_7F30C110:
    ctx->pc = 0x7F30C110u;
    // 7F30C110: addi    r4, r29, 72
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(72);

label_7F30C114:
    ctx->pc = 0x7F30C114u;
    // 7F30C114: addi    r3, r3, -21425
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21425);

label_7F30C118:
    ctx->pc = 0x7F30C118u;
    // 7F30C118: addi    r5, r29, 112
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(112);

label_7F30C11C:
    ctx->pc = 0x7F30C11Cu;
    // 7F30C11C: addi    r6, r29, 116
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(116);

label_7F30C120:
    ctx->pc = 0x7F30C120u;
    // 7F30C120: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C124u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C124:
    ctx->pc = 0x7F30C124u;
    ctx->downcount -= 1;
    // 7F30C124: b       0x7F30C190
    {
            goto label_7F30C190;
    }

label_7F30C128:
    ctx->pc = 0x7F30C128u;
    ctx->downcount -= 4;
    // 7F30C128: addis   r3, r29, 3
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(3) << 16);

label_7F30C12C:
    ctx->pc = 0x7F30C12Cu;
    // 7F30C12C: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C130:
    ctx->pc = 0x7F30C130u;
    // 7F30C130: rlwinm. r0, r0, 0, 24, 24
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

label_7F30C134:
    ctx->pc = 0x7F30C134u;
    // 7F30C134: bc    12, 2, 0x7F30C190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C190;
        }
    }

label_7F30C138:
    ctx->pc = 0x7F30C138u;
    ctx->downcount -= 4;
    // 7F30C138: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C13C:
    ctx->pc = 0x7F30C13Cu;
    // 7F30C13C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C140:
    ctx->pc = 0x7F30C140u;
    // 7F30C140: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C144:
    ctx->pc = 0x7F30C144u;
    // 7F30C144: bl      0x7F011698
    {
            ctx->lr = 0x7F30C148u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C148:
    ctx->pc = 0x7F30C148u;
    ctx->downcount -= 6;
    // 7F30C148: lis     r3, 68
    ctx->gpr[3] = ((u32)(s32)(68) << 16);

label_7F30C14C:
    ctx->pc = 0x7F30C14Cu;
    // 7F30C14C: addi    r4, r29, 72
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(72);

label_7F30C150:
    ctx->pc = 0x7F30C150u;
    // 7F30C150: addi    r3, r3, -21425
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21425);

label_7F30C154:
    ctx->pc = 0x7F30C154u;
    // 7F30C154: addi    r5, r29, 112
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(112);

label_7F30C158:
    ctx->pc = 0x7F30C158u;
    // 7F30C158: addi    r6, r29, 116
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(116);

label_7F30C15C:
    ctx->pc = 0x7F30C15Cu;
    // 7F30C15C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C160u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C160:
    ctx->pc = 0x7F30C160u;
    ctx->downcount -= 3;
    // 7F30C160: lwz     r0, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C164:
    ctx->pc = 0x7F30C164u;
    // 7F30C164: cmpwi   r0, 2
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

label_7F30C168:
    ctx->pc = 0x7F30C168u;
    // 7F30C168: bc    12, 2, 0x7F30C188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C188;
        }
    }

label_7F30C16C:
    ctx->pc = 0x7F30C16Cu;
    ctx->downcount -= 1;
    // 7F30C16C: bc    4, 0, 0x7F30C190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C190;
        }
    }

label_7F30C170:
    ctx->pc = 0x7F30C170u;
    ctx->downcount -= 2;
    // 7F30C170: cmpwi   r0, 1
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

label_7F30C174:
    ctx->pc = 0x7F30C174u;
    // 7F30C174: bc    4, 0, 0x7F30C17C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C17C;
        }
    }

label_7F30C178:
    ctx->pc = 0x7F30C178u;
    ctx->downcount -= 1;
    // 7F30C178: b       0x7F30C190
    {
            goto label_7F30C190;
    }

label_7F30C17C:
    ctx->pc = 0x7F30C17Cu;
    ctx->downcount -= 3;
    // 7F30C17C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C180:
    ctx->pc = 0x7F30C180u;
    // 7F30C180: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C184:
    ctx->pc = 0x7F30C184u;
    // 7F30C184: b       0x7F30C190
    {
            goto label_7F30C190;
    }

label_7F30C188:
    ctx->pc = 0x7F30C188u;
    ctx->downcount -= 2;
    // 7F30C188: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C18C:
    ctx->pc = 0x7F30C18Cu;
    // 7F30C18C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C190:
    ctx->pc = 0x7F30C190u;
    ctx->downcount -= 16;
    // 7F30C190: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30C194:
    ctx->pc = 0x7F30C194u;
    // 7F30C194: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C198:
    ctx->pc = 0x7F30C198u;
    // 7F30C198: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C19C:
    ctx->pc = 0x7F30C19Cu;
    // 7F30C19C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30C1A0:
    ctx->pc = 0x7F30C1A0u;
    // 7F30C1A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C1A4:
    ctx->pc = 0x7F30C1A4u;
    ctx->downcount -= 6;
    // 7F30C1A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C1A8:
    ctx->pc = 0x7F30C1A8u;
    // 7F30C1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C1AC:
    ctx->pc = 0x7F30C1ACu;
    // 7F30C1AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C1B0:
    ctx->pc = 0x7F30C1B0u;
    // 7F30C1B0: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C1B4:
    ctx->pc = 0x7F30C1B4u;
    // 7F30C1B4: cmpwi   r3, 0
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

label_7F30C1B8:
    ctx->pc = 0x7F30C1B8u;
    // 7F30C1B8: bc    12, 2, 0x7F30C1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C1E4;
        }
    }

label_7F30C1BC:
    ctx->pc = 0x7F30C1BCu;
    ctx->downcount -= 2;
    // 7F30C1BC: cmpwi   r3, 1
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

label_7F30C1C0:
    ctx->pc = 0x7F30C1C0u;
    // 7F30C1C0: bc    12, 2, 0x7F30C1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C1E4;
        }
    }

label_7F30C1C4:
    ctx->pc = 0x7F30C1C4u;
    ctx->downcount -= 8;
    // 7F30C1C4: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30C1C8:
    ctx->pc = 0x7F30C1C8u;
    // 7F30C1C8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F30C1CC:
    ctx->pc = 0x7F30C1CCu;
    // 7F30C1CC: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30C1D0:
    ctx->pc = 0x7F30C1D0u;
    // 7F30C1D0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30C1D4:
    ctx->pc = 0x7F30C1D4u;
    // 7F30C1D4: sth     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F30C1D8:
    ctx->pc = 0x7F30C1D8u;
    // 7F30C1D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C1DC:
    ctx->pc = 0x7F30C1DCu;
    // 7F30C1DC: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30C1E0:
    ctx->pc = 0x7F30C1E0u;
    // 7F30C1E0: bl      0x7F3C7728
    {
            ctx->lr = 0x7F30C1E4u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F30C1E4:
    ctx->pc = 0x7F30C1E4u;
    ctx->downcount -= 5;
    // 7F30C1E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C1E8:
    ctx->pc = 0x7F30C1E8u;
    // 7F30C1E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C1EC:
    ctx->pc = 0x7F30C1ECu;
    // 7F30C1EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30C1F0:
    ctx->pc = 0x7F30C1F0u;
    // 7F30C1F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C1F4:
    ctx->pc = 0x7F30C1F4u;
    ctx->downcount -= 47;
    // 7F30C1F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C1F8:
    ctx->pc = 0x7F30C1F8u;
    // 7F30C1F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C1FC:
    ctx->pc = 0x7F30C1FCu;
    // 7F30C1FC: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F30C200:
    ctx->pc = 0x7F30C200u;
    // 7F30C200: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F30C204:
    ctx->pc = 0x7F30C204u;
    // 7F30C204: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C208:
    ctx->pc = 0x7F30C208u;
    // 7F30C208: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F30C20C:
    ctx->pc = 0x7F30C20Cu;
    // 7F30C20C: lfd     f1, -30968(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F30C20Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-30968);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30C210:
    ctx->pc = 0x7F30C210u;
    // 7F30C210: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30C214:
    ctx->pc = 0x7F30C214u;
    // 7F30C214: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C218:
    ctx->pc = 0x7F30C218u;
    // 7F30C218: lfs     f2, -30980(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F30C218u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-30980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F30C21C:
    ctx->pc = 0x7F30C21Cu;
    // 7F30C21C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C220:
    ctx->pc = 0x7F30C220u;
    // 7F30C220: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30C220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30C224:
    ctx->pc = 0x7F30C224u;
    // 7F30C224: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30C228:
    ctx->pc = 0x7F30C228u;
    // 7F30C228: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30C22C:
    ctx->pc = 0x7F30C22Cu;
    // 7F30C22C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30C22Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F30C230:
    ctx->pc = 0x7F30C230u;
    // 7F30C230: lfs     f0, -30976(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30C230u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30C234:
    ctx->pc = 0x7F30C234u;
    // 7F30C234: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30C238:
    ctx->pc = 0x7F30C238u;
    // 7F30C238: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F30C23C:
    ctx->pc = 0x7F30C23Cu;
    // 7F30C23C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30C23Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F30C240:
    ctx->pc = 0x7F30C240u;
    // 7F30C240: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30C240u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F30C244:
    ctx->pc = 0x7F30C244u;
    // 7F30C244: bl      0x8000DBEC
    {
            ctx->lr = 0x7F30C248u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F30C248:
    ctx->pc = 0x7F30C248u;
    ctx->downcount -= 4;
    // 7F30C248: lis     r4, 9
    ctx->gpr[4] = ((u32)(s32)(9) << 16);

label_7F30C24C:
    ctx->pc = 0x7F30C24Cu;
    // 7F30C24C: addi    r5, r4, 10175
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(10175);

label_7F30C250:
    ctx->pc = 0x7F30C250u;
    // 7F30C250: cmplw   r3, r5
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30C254:
    ctx->pc = 0x7F30C254u;
    // 7F30C254: bc    12, 1, 0x7F30C25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C25C;
        }
    }

label_7F30C258:
    ctx->pc = 0x7F30C258u;
    ctx->downcount -= 1;
    // 7F30C258: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C25C:
    ctx->pc = 0x7F30C25Cu;
    ctx->downcount -= 131;
    // 7F30C25C: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F30C260:
    ctx->pc = 0x7F30C260u;
    // 7F30C260: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F30C264:
    ctx->pc = 0x7F30C264u;
    // 7F30C264: divw   r0, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30C268:
    ctx->pc = 0x7F30C268u;
    // 7F30C268: divw.   r6, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F30C26C:
    ctx->pc = 0x7F30C26Cu;
    // 7F30C26C: mulli   r0, r6, 6000
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)6000);

label_7F30C270:
    ctx->pc = 0x7F30C270u;
    // 7F30C270: subf   r5, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F30C274:
    ctx->pc = 0x7F30C274u;
    // 7F30C274: divw   r4, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30C278:
    ctx->pc = 0x7F30C278u;
    // 7F30C278: mulli   r0, r4, 100
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)100);

label_7F30C27C:
    ctx->pc = 0x7F30C27Cu;
    // 7F30C27C: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30C280:
    ctx->pc = 0x7F30C280u;
    // 7F30C280: bc    4, 0, 0x7F30C288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C288;
        }
    }

label_7F30C284:
    ctx->pc = 0x7F30C284u;
    ctx->downcount -= 1;
    // 7F30C284: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30C288:
    ctx->pc = 0x7F30C288u;
    ctx->downcount -= 2;
    // 7F30C288: cmpwi   r4, 0
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

label_7F30C28C:
    ctx->pc = 0x7F30C28Cu;
    // 7F30C28C: bc    4, 0, 0x7F30C294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C294;
        }
    }

label_7F30C290:
    ctx->pc = 0x7F30C290u;
    ctx->downcount -= 1;
    // 7F30C290: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30C294:
    ctx->pc = 0x7F30C294u;
    ctx->downcount -= 2;
    // 7F30C294: cmpwi   r0, 0
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

label_7F30C298:
    ctx->pc = 0x7F30C298u;
    // 7F30C298: bc    4, 0, 0x7F30C2A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C2A0;
        }
    }

label_7F30C29C:
    ctx->pc = 0x7F30C29Cu;
    ctx->downcount -= 1;
    // 7F30C29C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C2A0:
    ctx->pc = 0x7F30C2A0u;
    ctx->downcount -= 2;
    // 7F30C2A0: cmplwi  r3, 0x0000
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

label_7F30C2A4:
    ctx->pc = 0x7F30C2A4u;
    // 7F30C2A4: bc    4, 2, 0x7F30C2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C2B4;
        }
    }

label_7F30C2A8:
    ctx->pc = 0x7F30C2A8u;
    ctx->downcount -= 3;
    // 7F30C2A8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F30C2AC:
    ctx->pc = 0x7F30C2ACu;
    // 7F30C2AC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F30C2B0:
    ctx->pc = 0x7F30C2B0u;
    // 7F30C2B0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F30C2B4:
    ctx->pc = 0x7F30C2B4u;
    ctx->downcount -= 19;
    // 7F30C2B4: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30C2B8:
    ctx->pc = 0x7F30C2B8u;
    // 7F30C2B8: stw     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30C2BC:
    ctx->pc = 0x7F30C2BCu;
    // 7F30C2BC: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C2C0:
    ctx->pc = 0x7F30C2C0u;
    // 7F30C2C0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30C2C4:
    ctx->pc = 0x7F30C2C4u;
    // 7F30C2C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C2C8:
    ctx->pc = 0x7F30C2C8u;
    // 7F30C2C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C2CC:
    ctx->pc = 0x7F30C2CCu;
    // 7F30C2CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30C2D0:
    ctx->pc = 0x7F30C2D0u;
    // 7F30C2D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C2D4:
    ctx->pc = 0x7F30C2D4u;
    ctx->downcount -= 9;
    // 7F30C2D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C2D8:
    ctx->pc = 0x7F30C2D8u;
    // 7F30C2D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C2DC:
    ctx->pc = 0x7F30C2DCu;
    // 7F30C2DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C2E0:
    ctx->pc = 0x7F30C2E0u;
    // 7F30C2E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30C2E4:
    ctx->pc = 0x7F30C2E4u;
    // 7F30C2E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C2E8:
    ctx->pc = 0x7F30C2E8u;
    // 7F30C2E8: addis   r7, r31, 3
    ctx->gpr[7] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C2EC:
    ctx->pc = 0x7F30C2ECu;
    // 7F30C2EC: lwz     r0, -25936(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C2F0:
    ctx->pc = 0x7F30C2F0u;
    // 7F30C2F0: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30C2F4:
    ctx->pc = 0x7F30C2F4u;
    // 7F30C2F4: bc    12, 2, 0x7F30C35C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C35C;
        }
    }

label_7F30C2F8:
    ctx->pc = 0x7F30C2F8u;
    ctx->downcount -= 1;
    // 7F30C2F8: bc    4, 0, 0x7F30C630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C630;
        }
    }

label_7F30C2FC:
    ctx->pc = 0x7F30C2FCu;
    ctx->downcount -= 2;
    // 7F30C2FC: cmpwi   r0, 32
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

label_7F30C300:
    ctx->pc = 0x7F30C300u;
    // 7F30C300: bc    12, 2, 0x7F30C308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C308;
        }
    }

label_7F30C304:
    ctx->pc = 0x7F30C304u;
    ctx->downcount -= 1;
    // 7F30C304: b       0x7F30C630
    {
            goto label_7F30C630;
    }

label_7F30C308:
    ctx->pc = 0x7F30C308u;
    ctx->downcount -= 10;
    // 7F30C308: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C30C:
    ctx->pc = 0x7F30C30Cu;
    // 7F30C30C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C310:
    ctx->pc = 0x7F30C310u;
    // 7F30C310: lwz     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C314:
    ctx->pc = 0x7F30C314u;
    // 7F30C314: addi    r3, r3, -30960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30960);

label_7F30C318:
    ctx->pc = 0x7F30C318u;
    // 7F30C318: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C31C:
    ctx->pc = 0x7F30C31Cu;
    // 7F30C31C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C320:
    ctx->pc = 0x7F30C320u;
    // 7F30C320: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30C324:
    ctx->pc = 0x7F30C324u;
    // 7F30C324: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C328:
    ctx->pc = 0x7F30C328u;
    // 7F30C328: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C32C:
    ctx->pc = 0x7F30C32Cu;
    // 7F30C32C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C330u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C330:
    ctx->pc = 0x7F30C330u;
    ctx->downcount -= 5;
    // 7F30C330: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C334:
    ctx->pc = 0x7F30C334u;
    // 7F30C334: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30C338:
    ctx->pc = 0x7F30C338u;
    // 7F30C338: stw     r0, -10640(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C33C:
    ctx->pc = 0x7F30C33Cu;
    // 7F30C33C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F30C340:
    ctx->pc = 0x7F30C340u;
    // 7F30C340: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F30C344u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F30C344:
    ctx->pc = 0x7F30C344u;
    ctx->downcount -= 4;
    // 7F30C344: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C348:
    ctx->pc = 0x7F30C348u;
    // 7F30C348: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C34C:
    ctx->pc = 0x7F30C34Cu;
    // 7F30C34C: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30C350:
    ctx->pc = 0x7F30C350u;
    // 7F30C350: bl      0x7F011698
    {
            ctx->lr = 0x7F30C354u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C354:
    ctx->pc = 0x7F30C354u;
    ctx->downcount -= 2;
    // 7F30C354: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30C358:
    ctx->pc = 0x7F30C358u;
    // 7F30C358: b       0x7F30C71C
    {
            goto label_7F30C71C;
    }

label_7F30C35C:
    ctx->pc = 0x7F30C35Cu;
    ctx->downcount -= 4;
    // 7F30C35C: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C360:
    ctx->pc = 0x7F30C360u;
    // 7F30C360: lwz     r0, -10644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C364:
    ctx->pc = 0x7F30C364u;
    // 7F30C364: cmpwi   r0, 2
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

label_7F30C368:
    ctx->pc = 0x7F30C368u;
    // 7F30C368: bc    12, 2, 0x7F30C494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C494;
        }
    }

label_7F30C36C:
    ctx->pc = 0x7F30C36Cu;
    ctx->downcount -= 1;
    // 7F30C36C: bc    4, 0, 0x7F30C380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C380;
        }
    }

label_7F30C370:
    ctx->pc = 0x7F30C370u;
    ctx->downcount -= 2;
    // 7F30C370: cmpwi   r0, 0
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

label_7F30C374:
    ctx->pc = 0x7F30C374u;
    // 7F30C374: bc    12, 2, 0x7F30C390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C390;
        }
    }

label_7F30C378:
    ctx->pc = 0x7F30C378u;
    ctx->downcount -= 1;
    // 7F30C378: bc    4, 0, 0x7F30C410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C410;
        }
    }

label_7F30C37C:
    ctx->pc = 0x7F30C37Cu;
    ctx->downcount -= 1;
    // 7F30C37C: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C380:
    ctx->pc = 0x7F30C380u;
    ctx->downcount -= 2;
    // 7F30C380: cmpwi   r0, 4
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

label_7F30C384:
    ctx->pc = 0x7F30C384u;
    // 7F30C384: bc    12, 2, 0x7F30C570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C570;
        }
    }

label_7F30C388:
    ctx->pc = 0x7F30C388u;
    ctx->downcount -= 1;
    // 7F30C388: bc    4, 0, 0x7F30C718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C718;
        }
    }

label_7F30C38C:
    ctx->pc = 0x7F30C38Cu;
    ctx->downcount -= 1;
    // 7F30C38C: b       0x7F30C528
    {
            goto label_7F30C528;
    }

label_7F30C390:
    ctx->pc = 0x7F30C390u;
    ctx->downcount -= 8;
    // 7F30C390: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C394:
    ctx->pc = 0x7F30C394u;
    // 7F30C394: lis     r3, 179
    ctx->gpr[3] = ((u32)(s32)(179) << 16);

label_7F30C398:
    ctx->pc = 0x7F30C398u;
    // 7F30C398: addi    r3, r3, -22600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22600);

label_7F30C39C:
    ctx->pc = 0x7F30C39Cu;
    // 7F30C39C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C3A0:
    ctx->pc = 0x7F30C3A0u;
    // 7F30C3A0: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C3A4:
    ctx->pc = 0x7F30C3A4u;
    // 7F30C3A4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C3A8:
    ctx->pc = 0x7F30C3A8u;
    // 7F30C3A8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C3AC:
    ctx->pc = 0x7F30C3ACu;
    // 7F30C3AC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C3B0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C3B0:
    ctx->pc = 0x7F30C3B0u;
    ctx->downcount -= 10;
    // 7F30C3B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30C3B4:
    ctx->pc = 0x7F30C3B4u;
    // 7F30C3B4: lis     r3, 164
    ctx->gpr[3] = ((u32)(s32)(164) << 16);

label_7F30C3B8:
    ctx->pc = 0x7F30C3B8u;
    // 7F30C3B8: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C3BC:
    ctx->pc = 0x7F30C3BCu;
    // 7F30C3BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C3C0:
    ctx->pc = 0x7F30C3C0u;
    // 7F30C3C0: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C3C4:
    ctx->pc = 0x7F30C3C4u;
    // 7F30C3C4: addi    r5, r3, 631
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(631);

label_7F30C3C8:
    ctx->pc = 0x7F30C3C8u;
    // 7F30C3C8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C3CC:
    ctx->pc = 0x7F30C3CCu;
    // 7F30C3CC: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F30C3D0:
    ctx->pc = 0x7F30C3D0u;
    // 7F30C3D0: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C3D4:
    ctx->pc = 0x7F30C3D4u;
    // 7F30C3D4: bl      0x7F319418
    {
            ctx->lr = 0x7F30C3D8u;
            ctx->pc = 0x7F319418u;
            return;
    }

label_7F30C3D8:
    ctx->pc = 0x7F30C3D8u;
    ctx->downcount -= 6;
    // 7F30C3D8: addis   r5, r31, 4
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C3DC:
    ctx->pc = 0x7F30C3DCu;
    // 7F30C3DC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C3E0:
    ctx->pc = 0x7F30C3E0u;
    // 7F30C3E0: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C3E4:
    ctx->pc = 0x7F30C3E4u;
    // 7F30C3E4: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30C3E8:
    ctx->pc = 0x7F30C3E8u;
    // 7F30C3E8: lwz     r5, -10556(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10556);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30C3EC:
    ctx->pc = 0x7F30C3ECu;
    // 7F30C3EC: bl      0x7F31922C
    {
            ctx->lr = 0x7F30C3F0u;
            ctx->pc = 0x7F31922Cu;
            return;
    }

label_7F30C3F0:
    ctx->pc = 0x7F30C3F0u;
    ctx->downcount -= 7;
    // 7F30C3F0: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C3F4:
    ctx->pc = 0x7F30C3F4u;
    // 7F30C3F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C3F8:
    ctx->pc = 0x7F30C3F8u;
    // 7F30C3F8: stw     r0, -26372(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C3FC:
    ctx->pc = 0x7F30C3FCu;
    // 7F30C3FC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C400:
    ctx->pc = 0x7F30C400u;
    // 7F30C400: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C404:
    ctx->pc = 0x7F30C404u;
    // 7F30C404: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C408:
    ctx->pc = 0x7F30C408u;
    // 7F30C408: bl      0x7F011698
    {
            ctx->lr = 0x7F30C40Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C40C:
    ctx->pc = 0x7F30C40Cu;
    ctx->downcount -= 1;
    // 7F30C40C: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C410:
    ctx->pc = 0x7F30C410u;
    ctx->downcount -= 6;
    // 7F30C410: lis     r3, 139
    ctx->gpr[3] = ((u32)(s32)(139) << 16);

label_7F30C414:
    ctx->pc = 0x7F30C414u;
    // 7F30C414: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C418:
    ctx->pc = 0x7F30C418u;
    // 7F30C418: addi    r3, r3, 26739
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26739);

label_7F30C41C:
    ctx->pc = 0x7F30C41Cu;
    // 7F30C41C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C420:
    ctx->pc = 0x7F30C420u;
    // 7F30C420: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C424:
    ctx->pc = 0x7F30C424u;
    // 7F30C424: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C428u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C428:
    ctx->pc = 0x7F30C428u;
    ctx->downcount -= 10;
    // 7F30C428: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30C42C:
    ctx->pc = 0x7F30C42Cu;
    // 7F30C42C: lis     r3, 164
    ctx->gpr[3] = ((u32)(s32)(164) << 16);

label_7F30C430:
    ctx->pc = 0x7F30C430u;
    // 7F30C430: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C434:
    ctx->pc = 0x7F30C434u;
    // 7F30C434: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30C438:
    ctx->pc = 0x7F30C438u;
    // 7F30C438: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C43C:
    ctx->pc = 0x7F30C43Cu;
    // 7F30C43C: addi    r5, r3, 631
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(631);

label_7F30C440:
    ctx->pc = 0x7F30C440u;
    // 7F30C440: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C444:
    ctx->pc = 0x7F30C444u;
    // 7F30C444: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F30C448:
    ctx->pc = 0x7F30C448u;
    // 7F30C448: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C44C:
    ctx->pc = 0x7F30C44Cu;
    // 7F30C44C: bl      0x7F319418
    {
            ctx->lr = 0x7F30C450u;
            ctx->pc = 0x7F319418u;
            return;
    }

label_7F30C450:
    ctx->pc = 0x7F30C450u;
    ctx->downcount -= 6;
    // 7F30C450: addis   r5, r31, 4
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C454:
    ctx->pc = 0x7F30C454u;
    // 7F30C454: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C458:
    ctx->pc = 0x7F30C458u;
    // 7F30C458: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C45C:
    ctx->pc = 0x7F30C45Cu;
    // 7F30C45C: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30C460:
    ctx->pc = 0x7F30C460u;
    // 7F30C460: lwz     r5, -10556(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10556);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30C464:
    ctx->pc = 0x7F30C464u;
    // 7F30C464: bl      0x7F31922C
    {
            ctx->lr = 0x7F30C468u;
            ctx->pc = 0x7F31922Cu;
            return;
    }

label_7F30C468:
    ctx->pc = 0x7F30C468u;
    ctx->downcount -= 10;
    // 7F30C468: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C46C:
    ctx->pc = 0x7F30C46Cu;
    // 7F30C46C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C470:
    ctx->pc = 0x7F30C470u;
    // 7F30C470: stw     r0, 6180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C474:
    ctx->pc = 0x7F30C474u;
    // 7F30C474: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C478:
    ctx->pc = 0x7F30C478u;
    // 7F30C478: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C47C:
    ctx->pc = 0x7F30C47Cu;
    // 7F30C47C: stw     r0, 6184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C480:
    ctx->pc = 0x7F30C480u;
    // 7F30C480: stw     r0, 6188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C484:
    ctx->pc = 0x7F30C484u;
    // 7F30C484: stw     r0, 6192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C488:
    ctx->pc = 0x7F30C488u;
    // 7F30C488: stw     r0, 6176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C48C:
    ctx->pc = 0x7F30C48Cu;
    // 7F30C48C: bl      0x7F011698
    {
            ctx->lr = 0x7F30C490u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C490:
    ctx->pc = 0x7F30C490u;
    ctx->downcount -= 1;
    // 7F30C490: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C494:
    ctx->pc = 0x7F30C494u;
    ctx->downcount -= 6;
    // 7F30C494: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C498:
    ctx->pc = 0x7F30C498u;
    // 7F30C498: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F30C49C:
    ctx->pc = 0x7F30C49Cu;
    // 7F30C49C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C4A0:
    ctx->pc = 0x7F30C4A0u;
    // 7F30C4A0: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30C4A4:
    ctx->pc = 0x7F30C4A4u;
    // 7F30C4A4: rlwinm. r0, r0, 0, 31, 31
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

label_7F30C4A8:
    ctx->pc = 0x7F30C4A8u;
    // 7F30C4A8: bc    12, 2, 0x7F30C514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C514;
        }
    }

label_7F30C4AC:
    ctx->pc = 0x7F30C4ACu;
    ctx->downcount -= 15;
    // 7F30C4AC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30C4B0:
    ctx->pc = 0x7F30C4B0u;
    // 7F30C4B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C4B4:
    ctx->pc = 0x7F30C4B4u;
    // 7F30C4B4: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C4B8:
    ctx->pc = 0x7F30C4B8u;
    // 7F30C4B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C4BC:
    ctx->pc = 0x7F30C4BCu;
    // 7F30C4BC: addi    r3, r3, -31008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31008);

label_7F30C4C0:
    ctx->pc = 0x7F30C4C0u;
    // 7F30C4C0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C4C4:
    ctx->pc = 0x7F30C4C4u;
    // 7F30C4C4: stw     r0, -26024(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C4C8:
    ctx->pc = 0x7F30C4C8u;
    // 7F30C4C8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C4CC:
    ctx->pc = 0x7F30C4CCu;
    // 7F30C4CC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C4D0:
    ctx->pc = 0x7F30C4D0u;
    // 7F30C4D0: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C4D4:
    ctx->pc = 0x7F30C4D4u;
    // 7F30C4D4: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C4D8:
    ctx->pc = 0x7F30C4D8u;
    // 7F30C4D8: lwz     r0, -26020(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C4DC:
    ctx->pc = 0x7F30C4DCu;
    // 7F30C4DC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30C4E0:
    ctx->pc = 0x7F30C4E0u;
    // 7F30C4E0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C4E4:
    ctx->pc = 0x7F30C4E4u;
    // 7F30C4E4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C4E8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C4E8:
    ctx->pc = 0x7F30C4E8u;
    ctx->downcount -= 6;
    // 7F30C4E8: lis     r3, 78
    ctx->gpr[3] = ((u32)(s32)(78) << 16);

label_7F30C4EC:
    ctx->pc = 0x7F30C4ECu;
    // 7F30C4EC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C4F0:
    ctx->pc = 0x7F30C4F0u;
    // 7F30C4F0: addi    r3, r3, -23754
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23754);

label_7F30C4F4:
    ctx->pc = 0x7F30C4F4u;
    // 7F30C4F4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C4F8:
    ctx->pc = 0x7F30C4F8u;
    // 7F30C4F8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C4FC:
    ctx->pc = 0x7F30C4FCu;
    // 7F30C4FC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C500u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C500:
    ctx->pc = 0x7F30C500u;
    ctx->downcount -= 4;
    // 7F30C500: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C504:
    ctx->pc = 0x7F30C504u;
    // 7F30C504: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C508:
    ctx->pc = 0x7F30C508u;
    // 7F30C508: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C50C:
    ctx->pc = 0x7F30C50Cu;
    // 7F30C50C: bl      0x7F011698
    {
            ctx->lr = 0x7F30C510u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C510:
    ctx->pc = 0x7F30C510u;
    ctx->downcount -= 1;
    // 7F30C510: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C514:
    ctx->pc = 0x7F30C514u;
    ctx->downcount -= 4;
    // 7F30C514: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C518:
    ctx->pc = 0x7F30C518u;
    // 7F30C518: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C51C:
    ctx->pc = 0x7F30C51Cu;
    // 7F30C51C: li      r5, 35
    ctx->gpr[5] = (u32)(s32)(35);

label_7F30C520:
    ctx->pc = 0x7F30C520u;
    // 7F30C520: bl      0x7F011698
    {
            ctx->lr = 0x7F30C524u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C524:
    ctx->pc = 0x7F30C524u;
    ctx->downcount -= 1;
    // 7F30C524: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C528:
    ctx->pc = 0x7F30C528u;
    ctx->downcount -= 13;
    // 7F30C528: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30C52C:
    ctx->pc = 0x7F30C52Cu;
    // 7F30C52C: lis     r3, 169
    ctx->gpr[3] = ((u32)(s32)(169) << 16);

label_7F30C530:
    ctx->pc = 0x7F30C530u;
    // 7F30C530: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C534:
    ctx->pc = 0x7F30C534u;
    // 7F30C534: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C538:
    ctx->pc = 0x7F30C538u;
    // 7F30C538: addi    r3, r3, 28965
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28965);

label_7F30C53C:
    ctx->pc = 0x7F30C53Cu;
    // 7F30C53C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C540:
    ctx->pc = 0x7F30C540u;
    // 7F30C540: stw     r0, -25960(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C544:
    ctx->pc = 0x7F30C544u;
    // 7F30C544: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C548:
    ctx->pc = 0x7F30C548u;
    // 7F30C548: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C54C:
    ctx->pc = 0x7F30C54Cu;
    // 7F30C54C: stw     r0, -25956(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C550:
    ctx->pc = 0x7F30C550u;
    // 7F30C550: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C554:
    ctx->pc = 0x7F30C554u;
    // 7F30C554: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C558:
    ctx->pc = 0x7F30C558u;
    // 7F30C558: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C55Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C55C:
    ctx->pc = 0x7F30C55Cu;
    ctx->downcount -= 4;
    // 7F30C55C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C560:
    ctx->pc = 0x7F30C560u;
    // 7F30C560: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C564:
    ctx->pc = 0x7F30C564u;
    // 7F30C564: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C568:
    ctx->pc = 0x7F30C568u;
    // 7F30C568: bl      0x7F011698
    {
            ctx->lr = 0x7F30C56Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C56C:
    ctx->pc = 0x7F30C56Cu;
    ctx->downcount -= 1;
    // 7F30C56C: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C570:
    ctx->pc = 0x7F30C570u;
    ctx->downcount -= 6;
    // 7F30C570: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C574:
    ctx->pc = 0x7F30C574u;
    // 7F30C574: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F30C578:
    ctx->pc = 0x7F30C578u;
    // 7F30C578: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C57C:
    ctx->pc = 0x7F30C57Cu;
    // 7F30C57C: lha     r0, 5554(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5554);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30C580:
    ctx->pc = 0x7F30C580u;
    // 7F30C580: rlwinm. r0, r0, 0, 31, 31
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

label_7F30C584:
    ctx->pc = 0x7F30C584u;
    // 7F30C584: bc    12, 2, 0x7F30C61C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C61C;
        }
    }

label_7F30C588:
    ctx->pc = 0x7F30C588u;
    ctx->downcount -= 10;
    // 7F30C588: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C58C:
    ctx->pc = 0x7F30C58Cu;
    // 7F30C58C: lis     r3, 183
    ctx->gpr[3] = ((u32)(s32)(183) << 16);

label_7F30C590:
    ctx->pc = 0x7F30C590u;
    // 7F30C590: stw     r0, -25948(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25948);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C594:
    ctx->pc = 0x7F30C594u;
    // 7F30C594: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30C598:
    ctx->pc = 0x7F30C598u;
    // 7F30C598: addi    r3, r3, 2743
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2743);

label_7F30C59C:
    ctx->pc = 0x7F30C59Cu;
    // 7F30C59C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C5A0:
    ctx->pc = 0x7F30C5A0u;
    // 7F30C5A0: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C5A4:
    ctx->pc = 0x7F30C5A4u;
    // 7F30C5A4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C5A8:
    ctx->pc = 0x7F30C5A8u;
    // 7F30C5A8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C5AC:
    ctx->pc = 0x7F30C5ACu;
    // 7F30C5AC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C5B0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C5B0:
    ctx->pc = 0x7F30C5B0u;
    ctx->downcount -= 1;
    // 7F30C5B0: bl      0x7F31225C
    {
            ctx->lr = 0x7F30C5B4u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F30C5B4:
    ctx->pc = 0x7F30C5B4u;
    ctx->downcount -= 2;
    // 7F30C5B4: rlwinm. r0, r3, 0, 27, 27
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

label_7F30C5B8:
    ctx->pc = 0x7F30C5B8u;
    // 7F30C5B8: bc    12, 2, 0x7F30C5E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C5E4;
        }
    }

label_7F30C5BC:
    ctx->pc = 0x7F30C5BCu;
    ctx->downcount -= 9;
    // 7F30C5BC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C5C0:
    ctx->pc = 0x7F30C5C0u;
    // 7F30C5C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C5C4:
    ctx->pc = 0x7F30C5C4u;
    // 7F30C5C4: lis     r3, 199
    ctx->gpr[3] = ((u32)(s32)(199) << 16);

label_7F30C5C8:
    ctx->pc = 0x7F30C5C8u;
    // 7F30C5C8: stw     r0, -25944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C5CC:
    ctx->pc = 0x7F30C5CCu;
    // 7F30C5CC: addi    r3, r3, 25689
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25689);

label_7F30C5D0:
    ctx->pc = 0x7F30C5D0u;
    // 7F30C5D0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C5D4:
    ctx->pc = 0x7F30C5D4u;
    // 7F30C5D4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C5D8:
    ctx->pc = 0x7F30C5D8u;
    // 7F30C5D8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C5DC:
    ctx->pc = 0x7F30C5DCu;
    // 7F30C5DC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C5E0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C5E0:
    ctx->pc = 0x7F30C5E0u;
    ctx->downcount -= 1;
    // 7F30C5E0: b       0x7F30C608
    {
            goto label_7F30C608;
    }

label_7F30C5E4:
    ctx->pc = 0x7F30C5E4u;
    ctx->downcount -= 9;
    // 7F30C5E4: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C5E8:
    ctx->pc = 0x7F30C5E8u;
    // 7F30C5E8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30C5EC:
    ctx->pc = 0x7F30C5ECu;
    // 7F30C5EC: lis     r3, 149
    ctx->gpr[3] = ((u32)(s32)(149) << 16);

label_7F30C5F0:
    ctx->pc = 0x7F30C5F0u;
    // 7F30C5F0: stw     r0, -25944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C5F4:
    ctx->pc = 0x7F30C5F4u;
    // 7F30C5F4: addi    r3, r3, 302
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(302);

label_7F30C5F8:
    ctx->pc = 0x7F30C5F8u;
    // 7F30C5F8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C5FC:
    ctx->pc = 0x7F30C5FCu;
    // 7F30C5FC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C600:
    ctx->pc = 0x7F30C600u;
    // 7F30C600: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C604:
    ctx->pc = 0x7F30C604u;
    // 7F30C604: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C608u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C608:
    ctx->pc = 0x7F30C608u;
    ctx->downcount -= 4;
    // 7F30C608: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C60C:
    ctx->pc = 0x7F30C60Cu;
    // 7F30C60C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C610:
    ctx->pc = 0x7F30C610u;
    // 7F30C610: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30C614:
    ctx->pc = 0x7F30C614u;
    // 7F30C614: bl      0x7F011698
    {
            ctx->lr = 0x7F30C618u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C618:
    ctx->pc = 0x7F30C618u;
    ctx->downcount -= 1;
    // 7F30C618: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C61C:
    ctx->pc = 0x7F30C61Cu;
    ctx->downcount -= 4;
    // 7F30C61C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C620:
    ctx->pc = 0x7F30C620u;
    // 7F30C620: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C624:
    ctx->pc = 0x7F30C624u;
    // 7F30C624: li      r5, 35
    ctx->gpr[5] = (u32)(s32)(35);

label_7F30C628:
    ctx->pc = 0x7F30C628u;
    // 7F30C628: bl      0x7F011698
    {
            ctx->lr = 0x7F30C62Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C62C:
    ctx->pc = 0x7F30C62Cu;
    ctx->downcount -= 1;
    // 7F30C62C: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C630:
    ctx->pc = 0x7F30C630u;
    ctx->downcount -= 7;
    // 7F30C630: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C634:
    ctx->pc = 0x7F30C634u;
    // 7F30C634: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30C638:
    ctx->pc = 0x7F30C638u;
    // 7F30C638: lwz     r4, -25932(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25932);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C63C:
    ctx->pc = 0x7F30C63Cu;
    // 7F30C63C: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30C640:
    ctx->pc = 0x7F30C640u;
    // 7F30C640: andi.   r3, r4, 0xA000
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

label_7F30C644:
    ctx->pc = 0x7F30C644u;
    // 7F30C644: cmpw    r3, r0
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

label_7F30C648:
    ctx->pc = 0x7F30C648u;
    // 7F30C648: bc    12, 2, 0x7F30C65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C65C;
        }
    }

label_7F30C64C:
    ctx->pc = 0x7F30C64Cu;
    ctx->downcount -= 1;
    // 7F30C64C: bc    4, 0, 0x7F30C718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C718;
        }
    }

label_7F30C650:
    ctx->pc = 0x7F30C650u;
    ctx->downcount -= 2;
    // 7F30C650: cmpwi   r3, 8192
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

label_7F30C654:
    ctx->pc = 0x7F30C654u;
    // 7F30C654: bc    12, 2, 0x7F30C6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C6BC;
        }
    }

label_7F30C658:
    ctx->pc = 0x7F30C658u;
    ctx->downcount -= 1;
    // 7F30C658: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C65C:
    ctx->pc = 0x7F30C65Cu;
    ctx->downcount -= 10;
    // 7F30C65C: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C660:
    ctx->pc = 0x7F30C660u;
    // 7F30C660: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C664:
    ctx->pc = 0x7F30C664u;
    // 7F30C664: lwz     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C668:
    ctx->pc = 0x7F30C668u;
    // 7F30C668: addi    r3, r3, -30940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30940);

label_7F30C66C:
    ctx->pc = 0x7F30C66Cu;
    // 7F30C66C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C670:
    ctx->pc = 0x7F30C670u;
    // 7F30C670: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C674:
    ctx->pc = 0x7F30C674u;
    // 7F30C674: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30C678:
    ctx->pc = 0x7F30C678u;
    // 7F30C678: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C67C:
    ctx->pc = 0x7F30C67Cu;
    // 7F30C67C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C680:
    ctx->pc = 0x7F30C680u;
    // 7F30C680: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C684u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C684:
    ctx->pc = 0x7F30C684u;
    ctx->downcount -= 7;
    // 7F30C684: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C688:
    ctx->pc = 0x7F30C688u;
    // 7F30C688: lwz     r3, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C68C:
    ctx->pc = 0x7F30C68Cu;
    // 7F30C68C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30C690:
    ctx->pc = 0x7F30C690u;
    // 7F30C690: stw     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C694:
    ctx->pc = 0x7F30C694u;
    // 7F30C694: lwz     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C698:
    ctx->pc = 0x7F30C698u;
    // 7F30C698: cmpwi   r0, 0
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

label_7F30C69C:
    ctx->pc = 0x7F30C69Cu;
    // 7F30C69C: bc    4, 0, 0x7F30C6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C6A8;
        }
    }

label_7F30C6A0:
    ctx->pc = 0x7F30C6A0u;
    ctx->downcount -= 2;
    // 7F30C6A0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30C6A4:
    ctx->pc = 0x7F30C6A4u;
    // 7F30C6A4: stw     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C6A8:
    ctx->pc = 0x7F30C6A8u;
    ctx->downcount -= 4;
    // 7F30C6A8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C6AC:
    ctx->pc = 0x7F30C6ACu;
    // 7F30C6AC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C6B0:
    ctx->pc = 0x7F30C6B0u;
    // 7F30C6B0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30C6B4:
    ctx->pc = 0x7F30C6B4u;
    // 7F30C6B4: bl      0x7F011698
    {
            ctx->lr = 0x7F30C6B8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C6B8:
    ctx->pc = 0x7F30C6B8u;
    ctx->downcount -= 1;
    // 7F30C6B8: b       0x7F30C718
    {
            goto label_7F30C718;
    }

label_7F30C6BC:
    ctx->pc = 0x7F30C6BCu;
    ctx->downcount -= 10;
    // 7F30C6BC: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C6C0:
    ctx->pc = 0x7F30C6C0u;
    // 7F30C6C0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C6C4:
    ctx->pc = 0x7F30C6C4u;
    // 7F30C6C4: lwz     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C6C8:
    ctx->pc = 0x7F30C6C8u;
    // 7F30C6C8: addi    r3, r3, -30920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30920);

label_7F30C6CC:
    ctx->pc = 0x7F30C6CCu;
    // 7F30C6CC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30C6D0:
    ctx->pc = 0x7F30C6D0u;
    // 7F30C6D0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30C6D4:
    ctx->pc = 0x7F30C6D4u;
    // 7F30C6D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30C6D8:
    ctx->pc = 0x7F30C6D8u;
    // 7F30C6D8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30C6DC:
    ctx->pc = 0x7F30C6DCu;
    // 7F30C6DC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C6E0:
    ctx->pc = 0x7F30C6E0u;
    // 7F30C6E0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30C6E4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30C6E4:
    ctx->pc = 0x7F30C6E4u;
    ctx->downcount -= 7;
    // 7F30C6E4: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30C6E8:
    ctx->pc = 0x7F30C6E8u;
    // 7F30C6E8: lwz     r3, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C6EC:
    ctx->pc = 0x7F30C6ECu;
    // 7F30C6EC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30C6F0:
    ctx->pc = 0x7F30C6F0u;
    // 7F30C6F0: stw     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C6F4:
    ctx->pc = 0x7F30C6F4u;
    // 7F30C6F4: lwz     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C6F8:
    ctx->pc = 0x7F30C6F8u;
    // 7F30C6F8: cmpwi   r0, 5
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

label_7F30C6FC:
    ctx->pc = 0x7F30C6FCu;
    // 7F30C6FC: bc    12, 0, 0x7F30C708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C708;
        }
    }

label_7F30C700:
    ctx->pc = 0x7F30C700u;
    ctx->downcount -= 2;
    // 7F30C700: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C704:
    ctx->pc = 0x7F30C704u;
    // 7F30C704: stw     r0, -10644(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C708:
    ctx->pc = 0x7F30C708u;
    ctx->downcount -= 4;
    // 7F30C708: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30C70C:
    ctx->pc = 0x7F30C70Cu;
    // 7F30C70C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30C710:
    ctx->pc = 0x7F30C710u;
    // 7F30C710: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30C714:
    ctx->pc = 0x7F30C714u;
    // 7F30C714: bl      0x7F011698
    {
            ctx->lr = 0x7F30C718u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30C718:
    ctx->pc = 0x7F30C718u;
    ctx->downcount -= 1;
    // 7F30C718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30C71C:
    ctx->pc = 0x7F30C71Cu;
    ctx->downcount -= 6;
    // 7F30C71C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C720:
    ctx->pc = 0x7F30C720u;
    // 7F30C720: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30C724:
    ctx->pc = 0x7F30C724u;
    // 7F30C724: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C728:
    ctx->pc = 0x7F30C728u;
    // 7F30C728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30C72C:
    ctx->pc = 0x7F30C72Cu;
    // 7F30C72C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C730:
    ctx->pc = 0x7F30C730u;
    ctx->downcount -= 21;
    // 7F30C730: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C734:
    ctx->pc = 0x7F30C734u;
    // 7F30C734: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C738:
    ctx->pc = 0x7F30C738u;
    // 7F30C738: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C73C:
    ctx->pc = 0x7F30C73Cu;
    // 7F30C73C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30C740:
    ctx->pc = 0x7F30C740u;
    // 7F30C740: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C744:
    ctx->pc = 0x7F30C744u;
    // 7F30C744: addi    r31, r30, 172
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(172);

label_7F30C748:
    ctx->pc = 0x7F30C748u;
    // 7F30C748: lwz     r0, 6200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C74C:
    ctx->pc = 0x7F30C74Cu;
    // 7F30C74C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30C750:
    ctx->pc = 0x7F30C750u;
    // 7F30C750: lbz     r0, 6036(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6036);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30C754:
    ctx->pc = 0x7F30C754u;
    // 7F30C754: cmplwi  r0, 0x0000
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

label_7F30C758:
    ctx->pc = 0x7F30C758u;
    // 7F30C758: bc    4, 2, 0x7F30C774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C774;
        }
    }

label_7F30C75C:
    ctx->pc = 0x7F30C75Cu;
    ctx->downcount -= 5;
    // 7F30C75C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30C760:
    ctx->pc = 0x7F30C760u;
    // 7F30C760: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30C764:
    ctx->pc = 0x7F30C764u;
    // 7F30C764: lwz     r4, -10584(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C768:
    ctx->pc = 0x7F30C768u;
    // 7F30C768: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30C76C:
    ctx->pc = 0x7F30C76Cu;
    // 7F30C76C: bl      0x7F31912C
    {
            ctx->lr = 0x7F30C770u;
            ctx->pc = 0x7F31912Cu;
            return;
    }

label_7F30C770:
    ctx->pc = 0x7F30C770u;
    ctx->downcount -= 1;
    // 7F30C770: b       0x7F30C788
    {
            goto label_7F30C788;
    }

label_7F30C774:
    ctx->pc = 0x7F30C774u;
    ctx->downcount -= 5;
    // 7F30C774: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30C778:
    ctx->pc = 0x7F30C778u;
    // 7F30C778: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30C77C:
    ctx->pc = 0x7F30C77Cu;
    // 7F30C77C: addi    r4, r4, -26596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26596);

label_7F30C780:
    ctx->pc = 0x7F30C780u;
    // 7F30C780: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30C784:
    ctx->pc = 0x7F30C784u;
    // 7F30C784: bl      0x7F3191E4
    {
            ctx->lr = 0x7F30C788u;
            ctx->pc = 0x7F3191E4u;
            return;
    }

label_7F30C788:
    ctx->pc = 0x7F30C788u;
    ctx->downcount -= 8;
    // 7F30C788: lwz     r0, 6024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C78C:
    ctx->pc = 0x7F30C78Cu;
    // 7F30C78C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30C790:
    ctx->pc = 0x7F30C790u;
    // 7F30C790: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30C794:
    ctx->pc = 0x7F30C794u;
    // 7F30C794: mulli   r0, r0, 80
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)80);

label_7F30C798:
    ctx->pc = 0x7F30C798u;
    // 7F30C798: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30C79C:
    ctx->pc = 0x7F30C79Cu;
    // 7F30C79C: bl      0x7F319208
    {
            ctx->lr = 0x7F30C7A0u;
            ctx->pc = 0x7F319208u;
            return;
    }

label_7F30C7A0:
    ctx->pc = 0x7F30C7A0u;
    ctx->downcount -= 16;
    // 7F30C7A0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30C7A4:
    ctx->pc = 0x7F30C7A4u;
    // 7F30C7A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C7A8:
    ctx->pc = 0x7F30C7A8u;
    // 7F30C7A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C7AC:
    ctx->pc = 0x7F30C7ACu;
    // 7F30C7AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30C7B0:
    ctx->pc = 0x7F30C7B0u;
    // 7F30C7B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C7B4:
    ctx->pc = 0x7F30C7B4u;
    ctx->downcount -= 25;
    // 7F30C7B4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C7B8:
    ctx->pc = 0x7F30C7B8u;
    // 7F30C7B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C7BC:
    ctx->pc = 0x7F30C7BCu;
    // 7F30C7BC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C7C0:
    ctx->pc = 0x7F30C7C0u;
    // 7F30C7C0: stmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30C7C4:
    ctx->pc = 0x7F30C7C4u;
    // 7F30C7C4: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C7C8:
    ctx->pc = 0x7F30C7C8u;
    // 7F30C7C8: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30C7CC:
    ctx->pc = 0x7F30C7CCu;
    // 7F30C7CC: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30C7D0:
    ctx->pc = 0x7F30C7D0u;
    // 7F30C7D0: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F30C7D4:
    ctx->pc = 0x7F30C7D4u;
    // 7F30C7D4: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F30C7D8:
    ctx->pc = 0x7F30C7D8u;
    // 7F30C7D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F30C7DC:
    ctx->pc = 0x7F30C7DCu;
    // 7F30C7DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30C7E0:
    ctx->pc = 0x7F30C7E0u;
    // 7F30C7E0: li      r4, 450
    ctx->gpr[4] = (u32)(s32)(450);

label_7F30C7E4:
    ctx->pc = 0x7F30C7E4u;
    // 7F30C7E4: li      r5, 150
    ctx->gpr[5] = (u32)(s32)(150);

label_7F30C7E8:
    ctx->pc = 0x7F30C7E8u;
    // 7F30C7E8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30C7EC:
    ctx->pc = 0x7F30C7ECu;
    // 7F30C7EC: bl      0x7F0B9990
    {
            ctx->lr = 0x7F30C7F0u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F30C7F0:
    ctx->pc = 0x7F30C7F0u;
    ctx->downcount -= 4;
    // 7F30C7F0: extsh r31, r23
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[23];
    }

label_7F30C7F4:
    ctx->pc = 0x7F30C7F4u;
    // 7F30C7F4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F30C7F8:
    ctx->pc = 0x7F30C7F8u;
    // 7F30C7F8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F30C7FC:
    ctx->pc = 0x7F30C7FCu;
    // 7F30C7FC: b       0x7F30C8B8
    {
            goto label_7F30C8B8;
    }

label_7F30C800:
    ctx->downcount -= 4;
    // 7F30C800: add   r23, r25, r24
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F30C804:
    ctx->pc = 0x7F30C804u;
    // 7F30C804: lha     r0, 76(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(76);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30C808:
    // 7F30C808: cmpw    r31, r0
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

label_7F30C80C:
    // 7F30C80C: bc    4, 2, 0x7F30C8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C8B0;
        }
    }

label_7F30C810:
    ctx->downcount -= 4;
    // 7F30C810: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30C814:
    // 7F30C814: addi    r3, r23, 56
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(56);

label_7F30C818:
    // 7F30C818: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F30C81C:
    // 7F30C81C: bl      0x80025FFC
    {
            ctx->lr = 0x7F30C820u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F30C820:
    ctx->downcount -= 2;
    // 7F30C820: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F30C824:
    // 7F30C824: bl      0x80026098
    {
            ctx->lr = 0x7F30C828u;
            ctx->pc = 0x80026098u;
            return;
    }

label_7F30C828:
    ctx->pc = 0x7F30C828u;
    ctx->downcount -= 6;
    // 7F30C828: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30C828u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F30C82C:
    ctx->pc = 0x7F30C82Cu;
    // 7F30C82C: lwz     r0, 52(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C830:
    ctx->pc = 0x7F30C830u;
    // 7F30C830: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30C830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F30C834:
    ctx->pc = 0x7F30C834u;
    // 7F30C834: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30C838:
    // 7F30C838: cmpw    r3, r0
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

label_7F30C83C:
    // 7F30C83C: bc    12, 1, 0x7F30C8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C8B0;
        }
    }

label_7F30C840:
    ctx->downcount -= 4;
    // 7F30C840: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C844:
    // 7F30C844: addi    r4, r23, 68
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(68);

label_7F30C848:
    // 7F30C848: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F30C84C:
    // 7F30C84C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F30C850u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F30C850:
    ctx->downcount -= 5;
    // 7F30C850: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C854:
    // 7F30C854: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F30C858:
    // 7F30C858: addi    r3, r3, -26924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26924);

label_7F30C85C:
    // 7F30C85C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F30C860:
    // 7F30C860: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F30C864u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F30C864:
    ctx->downcount -= 4;
    // 7F30C864: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C868:
    // 7F30C868: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30C86C:
    // 7F30C86C: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F30C870:
    // 7F30C870: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F30C874u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F30C874:
    ctx->downcount -= 5;
    // 7F30C874: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30C878:
    // 7F30C878: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30C87C:
    // 7F30C87C: addi    r3, r3, -26924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26924);

label_7F30C880:
    // 7F30C880: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F30C884:
    // 7F30C884: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F30C888u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F30C888:
    ctx->downcount -= 3;
    // 7F30C888: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30C88C:
    // 7F30C88C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F30C890:
    // 7F30C890: bl      0x800260DC
    {
            ctx->lr = 0x7F30C894u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F30C894:
    ctx->downcount -= 5;
    // 7F30C894: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30C898:
    ctx->pc = 0x7F30C898u;
    // 7F30C898: lfs     f0, -30900(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30C898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F30C89C:
    ctx->pc = 0x7F30C89Cu;
    // 7F30C89C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30C89Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F30C8A0:
    // 7F30C8A0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F30C8A4:
    // 7F30C8A4: bc    4, 2, 0x7F30C8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C8B0;
        }
    }

label_7F30C8A8:
    ctx->downcount -= 2;
    // 7F30C8A8: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F30C8AC:
    // 7F30C8AC: b       0x7F30C8C0
    {
            goto label_7F30C8C0;
    }

label_7F30C8B0:
    ctx->downcount -= 2;
    // 7F30C8B0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F30C8B4:
    // 7F30C8B4: addi    r24, r24, 80
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(80);

label_7F30C8B8:
    ctx->downcount -= 2;
    // 7F30C8B8: cmpw    r29, r26
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

label_7F30C8BC:
    // 7F30C8BC: bc    12, 0, 0x7F30C800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C800u;
                return;
            }
            goto label_7F30C800;
        }
    }

label_7F30C8C0:
    ctx->pc = 0x7F30C8C0u;
    ctx->downcount -= 17;
    // 7F30C8C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30C8C4:
    ctx->pc = 0x7F30C8C4u;
    // 7F30C8C4: lmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30C8C8:
    ctx->pc = 0x7F30C8C8u;
    // 7F30C8C8: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C8CC:
    ctx->pc = 0x7F30C8CCu;
    // 7F30C8CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30C8D0:
    ctx->pc = 0x7F30C8D0u;
    // 7F30C8D0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F30C8D4:
    ctx->pc = 0x7F30C8D4u;
    // 7F30C8D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30C8D8:
    ctx->pc = 0x7F30C8D8u;
    ctx->downcount -= 19;
    // 7F30C8D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30C8DC:
    ctx->pc = 0x7F30C8DCu;
    // 7F30C8DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30C8E0:
    ctx->pc = 0x7F30C8E0u;
    // 7F30C8E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C8E4:
    ctx->pc = 0x7F30C8E4u;
    // 7F30C8E4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30C8E8:
    ctx->pc = 0x7F30C8E8u;
    // 7F30C8E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C8EC:
    ctx->pc = 0x7F30C8ECu;
    // 7F30C8EC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30C8F0:
    ctx->pc = 0x7F30C8F0u;
    // 7F30C8F0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F30C8F4:
    ctx->pc = 0x7F30C8F4u;
    // 7F30C8F4: addi    r30, r28, 172
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(172);

label_7F30C8F8:
    ctx->pc = 0x7F30C8F8u;
    // 7F30C8F8: bl      0x8004C45C
    {
            ctx->lr = 0x7F30C8FCu;
            ctx->pc = 0x8004C45Cu;
            return;
    }

label_7F30C8FC:
    ctx->pc = 0x7F30C8FCu;
    ctx->downcount -= 14;
    // 7F30C8FC: addis   r6, r28, 3
    ctx->gpr[6] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30C900:
    ctx->pc = 0x7F30C900u;
    // 7F30C900: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30C904:
    ctx->pc = 0x7F30C904u;
    // 7F30C904: lbz     r5, -8310(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-8310);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F30C908:
    ctx->pc = 0x7F30C908u;
    // 7F30C908: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30C90C:
    ctx->pc = 0x7F30C90Cu;
    // 7F30C90C: lwz     r6, -25248(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30C910:
    ctx->pc = 0x7F30C910u;
    // 7F30C910: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30C914:
    ctx->pc = 0x7F30C914u;
    // 7F30C914: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F30C918:
    ctx->pc = 0x7F30C918u;
    // 7F30C918: subf   r3, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F30C91C:
    ctx->pc = 0x7F30C91Cu;
    // 7F30C91C: rlwinm r3, r3, 14, 0, 17
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 14u) & 0xFFFFC000u;
    }

label_7F30C920:
    ctx->pc = 0x7F30C920u;
    // 7F30C920: addi    r5, r4, -26724
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-26724);

label_7F30C924:
    ctx->pc = 0x7F30C924u;
    // 7F30C924: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30C928:
    ctx->pc = 0x7F30C928u;
    // 7F30C928: addi    r4, r3, 6044
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6044);

label_7F30C92C:
    ctx->pc = 0x7F30C92Cu;
    // 7F30C92C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30C930:
    loop_7F30C930(ctx);
    if (ctx->pc == 0x7F30C944u) goto label_7F30C944;
    return;
label_7F30C934:
    ctx->pc = 0x7F30C934u;
    // 7F30C934: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30C938:
    ctx->pc = 0x7F30C938u;
    // 7F30C938: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30C93C:
    ctx->pc = 0x7F30C93Cu;
    // 7F30C93C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F30C940:
    // 7F30C940: bc    16, 0, 0x7F30C930
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C930u;
                return;
            }
            goto label_7F30C930;
        }
    }

label_7F30C944:
    ctx->pc = 0x7F30C944u;
    ctx->downcount -= 7;
    // 7F30C944: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C948:
    ctx->pc = 0x7F30C948u;
    // 7F30C948: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30C94C:
    ctx->pc = 0x7F30C94Cu;
    // 7F30C94C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C950:
    ctx->pc = 0x7F30C950u;
    // 7F30C950: stw     r29, 6028(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6028);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F30C954:
    ctx->pc = 0x7F30C954u;
    // 7F30C954: lbz     r0, 6036(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6036);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30C958:
    ctx->pc = 0x7F30C958u;
    // 7F30C958: cmplwi  r0, 0x0000
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

label_7F30C95C:
    ctx->pc = 0x7F30C95Cu;
    // 7F30C95C: bc    4, 2, 0x7F30C9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C9E8;
        }
    }

label_7F30C960:
    ctx->pc = 0x7F30C960u;
    ctx->downcount -= 5;
    // 7F30C960: rlwinm r29, r29, 14, 0, 17
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[29], 14u) & 0xFFFFC000u;
    }

label_7F30C964:
    ctx->pc = 0x7F30C964u;
    // 7F30C964: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30C968:
    ctx->pc = 0x7F30C968u;
    // 7F30C968: lbz     r0, 6077(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6077);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30C96C:
    ctx->pc = 0x7F30C96Cu;
    // 7F30C96C: cmplwi  r0, 0x0000
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

label_7F30C970:
    ctx->pc = 0x7F30C970u;
    // 7F30C970: bc    4, 2, 0x7F30C99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30C99C;
        }
    }

label_7F30C974:
    ctx->pc = 0x7F30C974u;
    ctx->downcount -= 8;
    // 7F30C974: addis   r6, r30, 3
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30C978:
    ctx->pc = 0x7F30C978u;
    // 7F30C978: lwz     r4, 6000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6000);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C97C:
    ctx->pc = 0x7F30C97Cu;
    // 7F30C97C: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F30C980:
    ctx->pc = 0x7F30C980u;
    // 7F30C980: lha     r5, -26696(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26696);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30C984:
    ctx->pc = 0x7F30C984u;
    // 7F30C984: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30C988:
    ctx->pc = 0x7F30C988u;
    // 7F30C988: addi    r6, r6, -26720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26720);

label_7F30C98C:
    ctx->pc = 0x7F30C98Cu;
    // 7F30C98C: addi    r7, r7, -26704
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-26704);

label_7F30C990:
    ctx->pc = 0x7F30C990u;
    // 7F30C990: bl      0x7F30C7B4
    {
            ctx->lr = 0x7F30C994u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C7B4u;
                return;
            }
            goto label_7F30C7B4;
    }

label_7F30C994:
    ctx->pc = 0x7F30C994u;
    ctx->downcount -= 2;
    // 7F30C994: stw     r3, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30C998:
    ctx->pc = 0x7F30C998u;
    // 7F30C998: b       0x7F30C9B4
    {
            goto label_7F30C9B4;
    }

label_7F30C99C:
    ctx->pc = 0x7F30C99Cu;
    ctx->downcount -= 4;
    // 7F30C99C: add   r3, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30C9A0:
    ctx->pc = 0x7F30C9A0u;
    // 7F30C9A0: lbz     r0, 6249(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6249);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30C9A4:
    ctx->pc = 0x7F30C9A4u;
    // 7F30C9A4: cmpwi   r0, -1
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

label_7F30C9A8:
    ctx->pc = 0x7F30C9A8u;
    // 7F30C9A8: bc    12, 2, 0x7F30C9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30C9B4;
        }
    }

label_7F30C9AC:
    ctx->pc = 0x7F30C9ACu;
    ctx->downcount -= 2;
    // 7F30C9AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C9B0:
    ctx->pc = 0x7F30C9B0u;
    // 7F30C9B0: stw     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C9B4:
    ctx->pc = 0x7F30C9B4u;
    ctx->downcount -= 1;
    // 7F30C9B4: bl      0x8004C788
    {
            ctx->lr = 0x7F30C9B8u;
            ctx->pc = 0x8004C788u;
            return;
    }

label_7F30C9B8:
    ctx->pc = 0x7F30C9B8u;
    ctx->downcount -= 1;
    // 7F30C9B8: bl      0x8002B64C
    {
            ctx->lr = 0x7F30C9BCu;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_7F30C9BC:
    ctx->pc = 0x7F30C9BCu;
    ctx->downcount -= 5;
    // 7F30C9BC: addi    r4, r29, 6084
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(6084);

label_7F30C9C0:
    ctx->pc = 0x7F30C9C0u;
    // 7F30C9C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30C9C4:
    ctx->pc = 0x7F30C9C4u;
    // 7F30C9C4: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30C9C8:
    ctx->pc = 0x7F30C9C8u;
    // 7F30C9C8: li      r5, 16348
    ctx->gpr[5] = (u32)(s32)(16348);

label_7F30C9CC:
    ctx->pc = 0x7F30C9CCu;
    // 7F30C9CC: bl      0x7F42763C
    {
            ctx->lr = 0x7F30C9D0u;
            ctx->pc = 0x7F42763Cu;
            return;
    }

label_7F30C9D0:
    ctx->pc = 0x7F30C9D0u;
    ctx->downcount -= 4;
    // 7F30C9D0: addis   r4, r28, 4
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(4) << 16);

label_7F30C9D4:
    ctx->pc = 0x7F30C9D4u;
    // 7F30C9D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30C9D8:
    ctx->pc = 0x7F30C9D8u;
    // 7F30C9D8: lwz     r4, -10584(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30C9DC:
    ctx->pc = 0x7F30C9DCu;
    // 7F30C9DC: bl      0x8004CD08
    {
            ctx->lr = 0x7F30C9E0u;
            ctx->pc = 0x8004CD08u;
            return;
    }

label_7F30C9E0:
    ctx->pc = 0x7F30C9E0u;
    ctx->downcount -= 2;
    // 7F30C9E0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F30C9E4:
    ctx->pc = 0x7F30C9E4u;
    // 7F30C9E4: b       0x7F30C9F4
    {
            goto label_7F30C9F4;
    }

label_7F30C9E8:
    ctx->pc = 0x7F30C9E8u;
    ctx->downcount -= 3;
    // 7F30C9E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30C9EC:
    ctx->pc = 0x7F30C9ECu;
    // 7F30C9EC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F30C9F0:
    ctx->pc = 0x7F30C9F0u;
    // 7F30C9F0: stw     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30C9F4:
    ctx->pc = 0x7F30C9F4u;
    ctx->downcount -= 3;
    // 7F30C9F4: lwz     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30C9F8:
    ctx->pc = 0x7F30C9F8u;
    // 7F30C9F8: cmpwi   r0, 0
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

label_7F30C9FC:
    ctx->pc = 0x7F30C9FCu;
    // 7F30C9FC: bc    12, 2, 0x7F30CA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CA38;
        }
    }

label_7F30CA00:
    ctx->pc = 0x7F30CA00u;
    ctx->downcount -= 14;
    // 7F30CA00: addis   r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CA04:
    ctx->pc = 0x7F30CA04u;
    // 7F30CA04: lwz     r3, -26460(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA08:
    ctx->pc = 0x7F30CA08u;
    // 7F30CA08: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA0C:
    ctx->pc = 0x7F30CA0Cu;
    // 7F30CA0C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F30CA10:
    ctx->pc = 0x7F30CA10u;
    // 7F30CA10: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA14:
    ctx->pc = 0x7F30CA14u;
    // 7F30CA14: lwz     r3, -26456(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA18:
    ctx->pc = 0x7F30CA18u;
    // 7F30CA18: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA1C:
    ctx->pc = 0x7F30CA1Cu;
    // 7F30CA1C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F30CA20:
    ctx->pc = 0x7F30CA20u;
    // 7F30CA20: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA24:
    ctx->pc = 0x7F30CA24u;
    // 7F30CA24: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA28:
    ctx->pc = 0x7F30CA28u;
    // 7F30CA28: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA2C:
    ctx->pc = 0x7F30CA2Cu;
    // 7F30CA2C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F30CA30:
    ctx->pc = 0x7F30CA30u;
    // 7F30CA30: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA34:
    ctx->pc = 0x7F30CA34u;
    // 7F30CA34: b       0x7F30CA6C
    {
            goto label_7F30CA6C;
    }

label_7F30CA38:
    ctx->pc = 0x7F30CA38u;
    ctx->downcount -= 13;
    // 7F30CA38: addis   r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CA3C:
    ctx->pc = 0x7F30CA3Cu;
    // 7F30CA3C: lwz     r3, -26460(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA40:
    ctx->pc = 0x7F30CA40u;
    // 7F30CA40: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA44:
    ctx->pc = 0x7F30CA44u;
    // 7F30CA44: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CA48:
    ctx->pc = 0x7F30CA48u;
    // 7F30CA48: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA4C:
    ctx->pc = 0x7F30CA4Cu;
    // 7F30CA4C: lwz     r3, -26456(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA50:
    ctx->pc = 0x7F30CA50u;
    // 7F30CA50: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA54:
    ctx->pc = 0x7F30CA54u;
    // 7F30CA54: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CA58:
    ctx->pc = 0x7F30CA58u;
    // 7F30CA58: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA5C:
    ctx->pc = 0x7F30CA5Cu;
    // 7F30CA5C: lwz     r3, -26436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CA60:
    ctx->pc = 0x7F30CA60u;
    // 7F30CA60: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA64:
    ctx->pc = 0x7F30CA64u;
    // 7F30CA64: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CA68:
    ctx->pc = 0x7F30CA68u;
    // 7F30CA68: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA6C:
    ctx->pc = 0x7F30CA6Cu;
    ctx->downcount -= 2;
    // 7F30CA6C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30CA70:
    ctx->pc = 0x7F30CA70u;
    // 7F30CA70: bl      0x7F30C730
    {
            ctx->lr = 0x7F30CA74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C730u;
                return;
            }
            goto label_7F30C730;
    }

label_7F30CA74:
    ctx->pc = 0x7F30CA74u;
    ctx->downcount -= 17;
    // 7F30CA74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30CA78:
    ctx->pc = 0x7F30CA78u;
    // 7F30CA78: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30CA7C:
    ctx->pc = 0x7F30CA7Cu;
    // 7F30CA7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CA80:
    ctx->pc = 0x7F30CA80u;
    // 7F30CA80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30CA84:
    ctx->pc = 0x7F30CA84u;
    // 7F30CA84: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30CA88:
    ctx->pc = 0x7F30CA88u;
    // 7F30CA88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30CA8C:
    ctx->pc = 0x7F30CA8Cu;
    ctx->downcount -= 25;
    // 7F30CA8C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30CA90:
    ctx->pc = 0x7F30CA90u;
    // 7F30CA90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30CA94:
    ctx->pc = 0x7F30CA94u;
    // 7F30CA94: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F30CA98:
    ctx->pc = 0x7F30CA98u;
    // 7F30CA98: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CA9C:
    ctx->pc = 0x7F30CA9Cu;
    // 7F30CA9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30CAA0:
    ctx->pc = 0x7F30CAA0u;
    // 7F30CAA0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30CAA4:
    ctx->pc = 0x7F30CAA4u;
    // 7F30CAA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30CAA8:
    ctx->pc = 0x7F30CAA8u;
    // 7F30CAA8: addi    r31, r30, 172
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(172);

label_7F30CAAC:
    ctx->pc = 0x7F30CAACu;
    // 7F30CAAC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CAB0:
    ctx->pc = 0x7F30CAB0u;
    // 7F30CAB0: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CAB4:
    ctx->pc = 0x7F30CAB4u;
    // 7F30CAB4: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30CAB8:
    ctx->pc = 0x7F30CAB8u;
    // 7F30CAB8: stb     r0, -26655(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26655);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CABC:
    ctx->pc = 0x7F30CABCu;
    // 7F30CABC: lwz     r3, -26648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CAC0:
    ctx->pc = 0x7F30CAC0u;
    // 7F30CAC0: addi    r4, r4, -26684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26684);

label_7F30CAC4:
    ctx->pc = 0x7F30CAC4u;
    // 7F30CAC4: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30CAC8u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30CAC8:
    ctx->pc = 0x7F30CAC8u;
    ctx->downcount -= 3;
    // 7F30CAC8: lwz     r0, 6024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CACC:
    ctx->pc = 0x7F30CACCu;
    // 7F30CACC: cmpwi   r0, 0
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

label_7F30CAD0:
    ctx->pc = 0x7F30CAD0u;
    // 7F30CAD0: bc    4, 1, 0x7F30CB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CB70;
        }
    }

label_7F30CAD4:
    ctx->pc = 0x7F30CAD4u;
    ctx->downcount -= 9;
    // 7F30CAD4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30CAD8:
    ctx->pc = 0x7F30CAD8u;
    // 7F30CAD8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CADC:
    ctx->pc = 0x7F30CADCu;
    // 7F30CADC: lfs     f1, -30896(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30CADCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30CAE0:
    ctx->pc = 0x7F30CAE0u;
    // 7F30CAE0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CAE4:
    ctx->pc = 0x7F30CAE4u;
    // 7F30CAE4: lfs     f2, -30892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30CAE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F30CAE8:
    ctx->pc = 0x7F30CAE8u;
    // 7F30CAE8: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30CAE8u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_7F30CAEC:
    ctx->pc = 0x7F30CAECu;
    // 7F30CAEC: lwz     r3, -26644(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26644);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CAF0:
    ctx->pc = 0x7F30CAF0u;
    // 7F30CAF0: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F30CAF0u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_7F30CAF4:
    ctx->pc = 0x7F30CAF4u;
    // 7F30CAF4: bl      0x7F2E2134
    {
            ctx->lr = 0x7F30CAF8u;
            ctx->pc = 0x7F2E2134u;
            return;
    }

label_7F30CAF8:
    ctx->pc = 0x7F30CAF8u;
    ctx->downcount -= 30;
    // 7F30CAF8: addis   r7, r30, 3
    ctx->gpr[7] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30CAFC:
    ctx->pc = 0x7F30CAFCu;
    // 7F30CAFC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F30CB00:
    ctx->pc = 0x7F30CB00u;
    // 7F30CB00: lwz     r6, -26464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-26464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30CB04:
    ctx->pc = 0x7F30CB04u;
    // 7F30CB04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CB08:
    ctx->pc = 0x7F30CB08u;
    // 7F30CB08: addi    r4, r3, -30968
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30968);

label_7F30CB0C:
    ctx->pc = 0x7F30CB0Cu;
    // 7F30CB0C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CB10:
    ctx->pc = 0x7F30CB10u;
    // 7F30CB10: lbz     r5, 53(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(53);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F30CB14:
    ctx->pc = 0x7F30CB14u;
    // 7F30CB14: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CB18:
    ctx->pc = 0x7F30CB18u;
    // 7F30CB18: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30CB1C:
    ctx->pc = 0x7F30CB1Cu;
    // 7F30CB1C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30CB20:
    ctx->pc = 0x7F30CB20u;
    // 7F30CB20: lfs     f1, -30892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-30892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F30CB24:
    ctx->pc = 0x7F30CB24u;
    // 7F30CB24: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30CB28:
    ctx->pc = 0x7F30CB28u;
    // 7F30CB28: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CB2C:
    ctx->pc = 0x7F30CB2Cu;
    // 7F30CB2C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F30CB2Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F30CB30:
    ctx->pc = 0x7F30CB30u;
    // 7F30CB30: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30CB30u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F30CB34:
    ctx->pc = 0x7F30CB34u;
    // 7F30CB34: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30CB34u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F30CB38:
    ctx->pc = 0x7F30CB38u;
    // 7F30CB38: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F30CB3C:
    ctx->pc = 0x7F30CB3Cu;
    // 7F30CB3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CB40:
    ctx->pc = 0x7F30CB40u;
    // 7F30CB40: stb     r0, 53(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(53);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CB44:
    ctx->pc = 0x7F30CB44u;
    // 7F30CB44: lwz     r3, -26464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-26464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CB48:
    ctx->pc = 0x7F30CB48u;
    // 7F30CB48: lbz     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CB4C:
    ctx->pc = 0x7F30CB4Cu;
    // 7F30CB4C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CB50:
    ctx->pc = 0x7F30CB50u;
    // 7F30CB50: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F30CB54:
    ctx->pc = 0x7F30CB54u;
    // 7F30CB54: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F30CB54u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F30CB58:
    ctx->pc = 0x7F30CB58u;
    // 7F30CB58: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F30CB58u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F30CB5C:
    ctx->pc = 0x7F30CB5Cu;
    // 7F30CB5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F30CB5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F30CB60:
    ctx->pc = 0x7F30CB60u;
    // 7F30CB60: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F30CB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F30CB64:
    ctx->pc = 0x7F30CB64u;
    // 7F30CB64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CB68:
    ctx->pc = 0x7F30CB68u;
    // 7F30CB68: stb     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CB6C:
    ctx->pc = 0x7F30CB6Cu;
    // 7F30CB6C: b       0x7F30CBC8
    {
            goto label_7F30CBC8;
    }

label_7F30CB70:
    ctx->pc = 0x7F30CB70u;
    ctx->downcount -= 3;
    // 7F30CB70: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CB74:
    ctx->pc = 0x7F30CB74u;
    // 7F30CB74: lwz     r3, -26648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CB78:
    ctx->pc = 0x7F30CB78u;
    // 7F30CB78: bl      0x7F2E2AF0
    {
            ctx->lr = 0x7F30CB7Cu;
            ctx->pc = 0x7F2E2AF0u;
            return;
    }

label_7F30CB7C:
    ctx->pc = 0x7F30CB7Cu;
    ctx->downcount -= 19;
    // 7F30CB7C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30CB80:
    ctx->pc = 0x7F30CB80u;
    // 7F30CB80: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CB84:
    ctx->pc = 0x7F30CB84u;
    // 7F30CB84: lwz     r5, -26464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30CB88:
    ctx->pc = 0x7F30CB88u;
    // 7F30CB88: lbz     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CB8C:
    ctx->pc = 0x7F30CB8Cu;
    // 7F30CB8C: stb     r0, 54(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(54);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CB90:
    ctx->pc = 0x7F30CB90u;
    // 7F30CB90: lwz     r3, -26464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CB94:
    ctx->pc = 0x7F30CB94u;
    // 7F30CB94: stb     r0, 53(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(53);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CB98:
    ctx->pc = 0x7F30CB98u;
    // 7F30CB98: lwz     r3, -26640(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26640);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CB9C:
    ctx->pc = 0x7F30CB9Cu;
    // 7F30CB9C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CBA0:
    ctx->pc = 0x7F30CBA0u;
    // 7F30CBA0: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CBA4:
    ctx->pc = 0x7F30CBA4u;
    // 7F30CBA4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CBA8:
    ctx->pc = 0x7F30CBA8u;
    // 7F30CBA8: lwz     r3, -26632(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CBAC:
    ctx->pc = 0x7F30CBACu;
    // 7F30CBAC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CBB0:
    ctx->pc = 0x7F30CBB0u;
    // 7F30CBB0: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CBB4:
    ctx->pc = 0x7F30CBB4u;
    // 7F30CBB4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CBB8:
    ctx->pc = 0x7F30CBB8u;
    // 7F30CBB8: lwz     r3, -26628(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CBBC:
    ctx->pc = 0x7F30CBBCu;
    // 7F30CBBC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CBC0:
    ctx->pc = 0x7F30CBC0u;
    // 7F30CBC0: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CBC4:
    ctx->pc = 0x7F30CBC4u;
    // 7F30CBC4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CBC8:
    ctx->pc = 0x7F30CBC8u;
    ctx->downcount -= 3;
    // 7F30CBC8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CBCC:
    ctx->pc = 0x7F30CBCCu;
    // 7F30CBCC: lwz     r3, -26648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CBD0:
    ctx->pc = 0x7F30CBD0u;
    // 7F30CBD0: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30CBD4u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30CBD4:
    ctx->pc = 0x7F30CBD4u;
    ctx->downcount -= 3;
    // 7F30CBD4: lbz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CBD8:
    ctx->pc = 0x7F30CBD8u;
    // 7F30CBD8: cmplwi  r0, 0x0000
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

label_7F30CBDC:
    ctx->pc = 0x7F30CBDCu;
    // 7F30CBDC: bc    12, 2, 0x7F30CBF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CBF4;
        }
    }

label_7F30CBE0:
    ctx->pc = 0x7F30CBE0u;
    ctx->downcount -= 5;
    // 7F30CBE0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30CBE4:
    ctx->pc = 0x7F30CBE4u;
    // 7F30CBE4: lwz     r3, -26428(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CBE8:
    ctx->pc = 0x7F30CBE8u;
    // 7F30CBE8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CBEC:
    ctx->pc = 0x7F30CBECu;
    // 7F30CBEC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CBF0:
    ctx->pc = 0x7F30CBF0u;
    // 7F30CBF0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CBF4:
    ctx->pc = 0x7F30CBF4u;
    ctx->downcount -= 16;
    // 7F30CBF4: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30CBF8:
    ctx->pc = 0x7F30CBF8u;
    // 7F30CBF8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CBFC:
    ctx->pc = 0x7F30CBFCu;
    // 7F30CBFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30CC00:
    ctx->pc = 0x7F30CC00u;
    // 7F30CC00: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F30CC04:
    ctx->pc = 0x7F30CC04u;
    // 7F30CC04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30CC08:
    ctx->pc = 0x7F30CC08u;
    ctx->downcount -= 25;
    // 7F30CC08: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30CC0C:
    ctx->pc = 0x7F30CC0Cu;
    // 7F30CC0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30CC10:
    ctx->pc = 0x7F30CC10u;
    // 7F30CC10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30CC14:
    ctx->pc = 0x7F30CC14u;
    // 7F30CC14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CC18:
    ctx->pc = 0x7F30CC18u;
    // 7F30CC18: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30CC1C:
    ctx->pc = 0x7F30CC1Cu;
    // 7F30CC1C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30CC20:
    ctx->pc = 0x7F30CC20u;
    // 7F30CC20: addis   r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CC24:
    ctx->pc = 0x7F30CC24u;
    // 7F30CC24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CC28:
    ctx->pc = 0x7F30CC28u;
    // 7F30CC28: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30CC2C:
    ctx->pc = 0x7F30CC2Cu;
    // 7F30CC2C: lwz     r29, 6200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6200);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F30CC30:
    ctx->pc = 0x7F30CC30u;
    // 7F30CC30: lwz     r31, -25144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25144);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30CC34:
    ctx->pc = 0x7F30CC34u;
    // 7F30CC34: lwz     r30, -25148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F30CC38:
    ctx->pc = 0x7F30CC38u;
    // 7F30CC38: lwz     r3, -26452(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CC3C:
    ctx->pc = 0x7F30CC3Cu;
    // 7F30CC3C: lbz     r4, -26522(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26522);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30CC40:
    ctx->pc = 0x7F30CC40u;
    // 7F30CC40: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30CC44u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30CC44:
    ctx->pc = 0x7F30CC44u;
    ctx->downcount -= 7;
    // 7F30CC44: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CC48:
    ctx->pc = 0x7F30CC48u;
    // 7F30CC48: addis   r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CC4C:
    ctx->pc = 0x7F30CC4Cu;
    // 7F30CC4C: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30CC50:
    ctx->pc = 0x7F30CC50u;
    // 7F30CC50: lwz     r3, -26448(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CC54:
    ctx->pc = 0x7F30CC54u;
    // 7F30CC54: lbz     r4, -26521(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26521);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30CC58:
    ctx->pc = 0x7F30CC58u;
    // 7F30CC58: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30CC5C:
    ctx->pc = 0x7F30CC5Cu;
    // 7F30CC5C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30CC60u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30CC60:
    ctx->pc = 0x7F30CC60u;
    ctx->downcount -= 7;
    // 7F30CC60: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CC64:
    ctx->pc = 0x7F30CC64u;
    // 7F30CC64: addis   r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CC68:
    ctx->pc = 0x7F30CC68u;
    // 7F30CC68: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30CC6C:
    ctx->pc = 0x7F30CC6Cu;
    // 7F30CC6C: lwz     r3, -26444(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CC70:
    ctx->pc = 0x7F30CC70u;
    // 7F30CC70: lbz     r4, -26520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26520);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30CC74:
    ctx->pc = 0x7F30CC74u;
    // 7F30CC74: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30CC78:
    ctx->pc = 0x7F30CC78u;
    // 7F30CC78: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30CC7Cu;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30CC7C:
    ctx->pc = 0x7F30CC7Cu;
    ctx->downcount -= 6;
    // 7F30CC7C: add   r3, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30CC80:
    ctx->pc = 0x7F30CC80u;
    // 7F30CC80: lwz     r4, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30CC84:
    ctx->pc = 0x7F30CC84u;
    // 7F30CC84: lbz     r0, 6208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CC88:
    ctx->pc = 0x7F30CC88u;
    // 7F30CC88: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30CC8C:
    ctx->pc = 0x7F30CC8Cu;
    // 7F30CC8C: cmplwi  r0, 0x0000
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

label_7F30CC90:
    ctx->pc = 0x7F30CC90u;
    // 7F30CC90: bc    4, 2, 0x7F30CCB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CCB4;
        }
    }

label_7F30CC94:
    ctx->pc = 0x7F30CC94u;
    ctx->downcount -= 8;
    // 7F30CC94: addis   r5, r28, 3
    ctx->gpr[5] = ctx->gpr[28] + ((u32)(s32)(3) << 16);

label_7F30CC98:
    ctx->pc = 0x7F30CC98u;
    // 7F30CC98: lbz     r4, -26522(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26522);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30CC9C:
    ctx->pc = 0x7F30CC9Cu;
    // 7F30CC9C: lbz     r3, -26521(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26521);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30CCA0:
    ctx->pc = 0x7F30CCA0u;
    // 7F30CCA0: lbz     r0, -26520(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26520);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CCA4:
    ctx->pc = 0x7F30CCA4u;
    // 7F30CCA4: stb     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30CCA8:
    ctx->pc = 0x7F30CCA8u;
    // 7F30CCA8: stb     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30CCAC:
    ctx->pc = 0x7F30CCACu;
    // 7F30CCAC: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CCB0:
    ctx->pc = 0x7F30CCB0u;
    // 7F30CCB0: b       0x7F30CCC4
    {
            goto label_7F30CCC4;
    }

label_7F30CCB4:
    ctx->pc = 0x7F30CCB4u;
    ctx->downcount -= 4;
    // 7F30CCB4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F30CCB8:
    ctx->pc = 0x7F30CCB8u;
    // 7F30CCB8: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CCBC:
    ctx->pc = 0x7F30CCBCu;
    // 7F30CCBC: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CCC0:
    ctx->pc = 0x7F30CCC0u;
    // 7F30CCC0: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CCC4:
    ctx->pc = 0x7F30CCC4u;
    ctx->downcount -= 25;
    // 7F30CCC4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CCC8:
    ctx->pc = 0x7F30CCC8u;
    // 7F30CCC8: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CCCC:
    ctx->pc = 0x7F30CCCCu;
    // 7F30CCCC: stw     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CCD0:
    ctx->pc = 0x7F30CCD0u;
    // 7F30CCD0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CCD4:
    ctx->pc = 0x7F30CCD4u;
    // 7F30CCD4: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F30CCD8:
    ctx->pc = 0x7F30CCD8u;
    // 7F30CCD8: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CCDC:
    ctx->pc = 0x7F30CCDCu;
    // 7F30CCDC: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CCE0:
    ctx->pc = 0x7F30CCE0u;
    // 7F30CCE0: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F30CCE4:
    ctx->pc = 0x7F30CCE4u;
    // 7F30CCE4: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CCE8:
    ctx->pc = 0x7F30CCE8u;
    // 7F30CCE8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30CCEC:
    ctx->pc = 0x7F30CCECu;
    // 7F30CCEC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CCF0:
    ctx->pc = 0x7F30CCF0u;
    // 7F30CCF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30CCF4:
    ctx->pc = 0x7F30CCF4u;
    // 7F30CCF4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30CCF8:
    ctx->pc = 0x7F30CCF8u;
    // 7F30CCF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30CCFC:
    ctx->pc = 0x7F30CCFCu;
    ctx->downcount -= 23;
    // 7F30CCFC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30CD00:
    ctx->pc = 0x7F30CD00u;
    // 7F30CD00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30CD04:
    ctx->pc = 0x7F30CD04u;
    // 7F30CD04: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CD08:
    ctx->pc = 0x7F30CD08u;
    // 7F30CD08: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30CD0C:
    ctx->pc = 0x7F30CD0Cu;
    // 7F30CD0C: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30CD10:
    ctx->pc = 0x7F30CD10u;
    // 7F30CD10: addis   r3, r24, 3
    ctx->gpr[3] = ctx->gpr[24] + ((u32)(s32)(3) << 16);

label_7F30CD14:
    ctx->pc = 0x7F30CD14u;
    // 7F30CD14: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F30CD18:
    ctx->pc = 0x7F30CD18u;
    // 7F30CD18: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F30CD1C:
    ctx->pc = 0x7F30CD1Cu;
    // 7F30CD1C: lbz     r26, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[26] = mem_read8(ctx, ea);
    }

label_7F30CD20:
    ctx->pc = 0x7F30CD20u;
    // 7F30CD20: lbz     r25, -8310(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8310);
        ctx->gpr[25] = mem_read8(ctx, ea);
    }

label_7F30CD24:
    ctx->pc = 0x7F30CD24u;
    // 7F30CD24: lwz     r28, -25248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25248);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30CD28:
    ctx->pc = 0x7F30CD28u;
    // 7F30CD28: extsb r26, r26
    {
        ctx->gpr[26] = (u32)(s32)(s8)ctx->gpr[26];
    }

label_7F30CD2C:
    ctx->pc = 0x7F30CD2Cu;
    // 7F30CD2C: extsb r25, r25
    {
        ctx->gpr[25] = (u32)(s32)(s8)ctx->gpr[25];
    }

label_7F30CD30:
    ctx->downcount -= 2;
    // 7F30CD30: cmpw    r28, r26
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30CD34:
    // 7F30CD34: bc    4, 0, 0x7F30CDC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CDC8;
        }
    }

label_7F30CD38:
    ctx->downcount -= 8;
    // 7F30CD38: addis   r4, r24, 3
    ctx->gpr[4] = ctx->gpr[24] + ((u32)(s32)(3) << 16);

label_7F30CD3C:
    // 7F30CD3C: add   r29, r24, r31
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F30CD40:
    ctx->pc = 0x7F30CD40u;
    // 7F30CD40: stb     r28, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F30CD44:
    // 7F30CD44: addi    r30, r29, 6220
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(6220);

label_7F30CD48:
    // 7F30CD48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30CD4C:
    ctx->pc = 0x7F30CD4Cu;
    // 7F30CD4C: stw     r30, -8116(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8116);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F30CD50:
    // 7F30CD50: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F30CD54:
    // 7F30CD54: bl      0x8001DA4C
    {
            ctx->lr = 0x7F30CD58u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F30CD58:
    ctx->downcount -= 4;
    // 7F30CD58: addis   r3, r24, 3
    ctx->gpr[3] = ctx->gpr[24] + ((u32)(s32)(3) << 16);

label_7F30CD5C:
    // 7F30CD5C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30CD60:
    // 7F30CD60: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F30CD64:
    // 7F30CD64: bl      0x7F312EB8
    {
            ctx->lr = 0x7F30CD68u;
            ctx->pc = 0x7F312EB8u;
            return;
    }

label_7F30CD68:
    ctx->downcount -= 2;
    // 7F30CD68: cmpwi   r3, 0
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

label_7F30CD6C:
    // 7F30CD6C: bc    12, 2, 0x7F30CD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CD74;
        }
    }

label_7F30CD70:
    ctx->downcount -= 1;
    // 7F30CD70: b       0x7F30CDB8
    {
            goto label_7F30CDB8;
    }

label_7F30CD74:
    ctx->downcount -= 3;
    // 7F30CD74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30CD78:
    // 7F30CD78: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F30CD7C:
    // 7F30CD7C: bl      0x8001DA4C
    {
            ctx->lr = 0x7F30CD80u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F30CD80:
    ctx->downcount -= 3;
    // 7F30CD80: addi    r3, r29, 6256
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(6256);

label_7F30CD84:
    // 7F30CD84: li      r4, 16347
    ctx->gpr[4] = (u32)(s32)(16347);

label_7F30CD88:
    // 7F30CD88: bl      0x7F314128
    {
            ctx->lr = 0x7F30CD8Cu;
            ctx->pc = 0x7F314128u;
            return;
    }

label_7F30CD8C:
    ctx->pc = 0x7F30CD8Cu;
    ctx->downcount -= 3;
    // 7F30CD8C: lwz     r0, 6252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CD90:
    // 7F30CD90: cmplw   r3, r0
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

label_7F30CD94:
    // 7F30CD94: bc    12, 2, 0x7F30CDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CDA8;
        }
    }

label_7F30CD98:
    ctx->downcount -= 4;
    // 7F30CD98: addi    r0, r27, 6208
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(6208);

label_7F30CD9C:
    // 7F30CD9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30CDA0:
    ctx->pc = 0x7F30CDA0u;
    // 7F30CDA0: stbx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30CDA4:
    // 7F30CDA4: b       0x7F30CDD4
    {
            goto label_7F30CDD4;
    }

label_7F30CDA8:
    ctx->downcount -= 4;
    // 7F30CDA8: addi    r0, r27, 6208
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(6208);

label_7F30CDAC:
    // 7F30CDAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30CDB0:
    ctx->pc = 0x7F30CDB0u;
    // 7F30CDB0: stbx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30CDB4:
    // 7F30CDB4: b       0x7F30CDD4
    {
            goto label_7F30CDD4;
    }

label_7F30CDB8:
    ctx->downcount -= 4;
    // 7F30CDB8: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F30CDBC:
    // 7F30CDBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30CDC0:
    ctx->pc = 0x7F30CDC0u;
    // 7F30CDC0: stb     r0, 6249(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6249);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CDC4:
    // 7F30CDC4: b       0x7F30CDF4
    {
            goto label_7F30CDF4;
    }

label_7F30CDC8:
    ctx->downcount -= 3;
    // 7F30CDC8: addi    r0, r31, 6249
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(6249);

label_7F30CDCC:
    // 7F30CDCC: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F30CDD0:
    ctx->pc = 0x7F30CDD0u;
    // 7F30CDD0: stbx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30CDD4:
    ctx->downcount -= 5;
    // 7F30CDD4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F30CDD8:
    // 7F30CDD8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F30CDDC:
    // 7F30CDDC: cmplwi  r27, 0x000A
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(0x000Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30CDE0:
    // 7F30CDE0: addi    r31, r31, 16384
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16384);

label_7F30CDE4:
    // 7F30CDE4: bc    12, 0, 0x7F30CD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CD30u;
                return;
            }
            goto label_7F30CD30;
        }
    }

label_7F30CDE8:
    ctx->pc = 0x7F30CDE8u;
    ctx->downcount -= 3;
    // 7F30CDE8: addis   r4, r24, 3
    ctx->gpr[4] = ctx->gpr[24] + ((u32)(s32)(3) << 16);

label_7F30CDEC:
    ctx->pc = 0x7F30CDECu;
    // 7F30CDEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30CDF0:
    ctx->pc = 0x7F30CDF0u;
    // 7F30CDF0: stb     r25, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        mem_write8(ctx, ea, (u8)ctx->gpr[25]);
    }

label_7F30CDF4:
    ctx->pc = 0x7F30CDF4u;
    ctx->downcount -= 16;
    // 7F30CDF4: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30CDF8:
    ctx->pc = 0x7F30CDF8u;
    // 7F30CDF8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CDFC:
    ctx->pc = 0x7F30CDFCu;
    // 7F30CDFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30CE00:
    ctx->pc = 0x7F30CE00u;
    // 7F30CE00: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F30CE04:
    ctx->pc = 0x7F30CE04u;
    // 7F30CE04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30CE08:
    ctx->pc = 0x7F30CE08u;
    ctx->downcount -= 8;
    // 7F30CE08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30CE0C:
    ctx->pc = 0x7F30CE0Cu;
    // 7F30CE0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30CE10:
    ctx->pc = 0x7F30CE10u;
    // 7F30CE10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CE14:
    ctx->pc = 0x7F30CE14u;
    // 7F30CE14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F30CE18:
    ctx->pc = 0x7F30CE18u;
    // 7F30CE18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30CE1C:
    ctx->pc = 0x7F30CE1Cu;
    // 7F30CE1C: lbz     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CE20:
    ctx->pc = 0x7F30CE20u;
    // 7F30CE20: cmplwi  r0, 0x0001
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

label_7F30CE24:
    ctx->pc = 0x7F30CE24u;
    // 7F30CE24: bc    4, 2, 0x7F30CE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CE30;
        }
    }

label_7F30CE28:
    ctx->pc = 0x7F30CE28u;
    ctx->downcount -= 2;
    // 7F30CE28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30CE2C:
    ctx->pc = 0x7F30CE2Cu;
    // 7F30CE2C: b       0x7F30CE90
    {
            goto label_7F30CE90;
    }

label_7F30CE30:
    ctx->pc = 0x7F30CE30u;
    ctx->downcount -= 4;
    // 7F30CE30: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CE34:
    ctx->pc = 0x7F30CE34u;
    // 7F30CE34: lbz     r3, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30CE38:
    ctx->pc = 0x7F30CE38u;
    // 7F30CE38: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F30CE3C:
    ctx->pc = 0x7F30CE3Cu;
    // 7F30CE3C: bl      0x7F312524
    {
            ctx->lr = 0x7F30CE40u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F30CE40:
    ctx->pc = 0x7F30CE40u;
    ctx->downcount -= 2;
    // 7F30CE40: cmpwi   r3, 0
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

label_7F30CE44:
    ctx->pc = 0x7F30CE44u;
    // 7F30CE44: bc    12, 2, 0x7F30CE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CE64;
        }
    }

label_7F30CE48:
    ctx->pc = 0x7F30CE48u;
    ctx->downcount -= 7;
    // 7F30CE48: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CE4C:
    ctx->pc = 0x7F30CE4Cu;
    // 7F30CE4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30CE50:
    ctx->pc = 0x7F30CE50u;
    // 7F30CE50: stb     r0, -8308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8308);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CE54:
    ctx->pc = 0x7F30CE54u;
    // 7F30CE54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30CE58:
    ctx->pc = 0x7F30CE58u;
    // 7F30CE58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30CE5C:
    ctx->pc = 0x7F30CE5Cu;
    // 7F30CE5C: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CE60:
    ctx->pc = 0x7F30CE60u;
    // 7F30CE60: b       0x7F30CE90
    {
            goto label_7F30CE90;
    }

label_7F30CE64:
    ctx->pc = 0x7F30CE64u;
    ctx->downcount -= 4;
    // 7F30CE64: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CE68:
    ctx->pc = 0x7F30CE68u;
    // 7F30CE68: lbzu     r4, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F30CE6C:
    ctx->pc = 0x7F30CE6Cu;
    // 7F30CE6C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F30CE70:
    ctx->pc = 0x7F30CE70u;
    // 7F30CE70: bl      0x7F31232C
    {
            ctx->lr = 0x7F30CE74u;
            ctx->pc = 0x7F31232Cu;
            return;
    }

label_7F30CE74:
    ctx->pc = 0x7F30CE74u;
    ctx->downcount -= 2;
    // 7F30CE74: rlwinm. r0, r3, 0, 24, 31
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

label_7F30CE78:
    ctx->pc = 0x7F30CE78u;
    // 7F30CE78: bc    4, 2, 0x7F30CE8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CE8C;
        }
    }

label_7F30CE7C:
    ctx->pc = 0x7F30CE7Cu;
    ctx->downcount -= 4;
    // 7F30CE7C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30CE80:
    ctx->pc = 0x7F30CE80u;
    // 7F30CE80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30CE84:
    ctx->pc = 0x7F30CE84u;
    // 7F30CE84: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CE88:
    ctx->pc = 0x7F30CE88u;
    // 7F30CE88: b       0x7F30CE90
    {
            goto label_7F30CE90;
    }

label_7F30CE8C:
    ctx->pc = 0x7F30CE8Cu;
    ctx->downcount -= 1;
    // 7F30CE8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30CE90:
    ctx->pc = 0x7F30CE90u;
    ctx->downcount -= 6;
    // 7F30CE90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CE94:
    ctx->pc = 0x7F30CE94u;
    // 7F30CE94: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F30CE98:
    ctx->pc = 0x7F30CE98u;
    // 7F30CE98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30CE9C:
    ctx->pc = 0x7F30CE9Cu;
    // 7F30CE9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30CEA0:
    ctx->pc = 0x7F30CEA0u;
    // 7F30CEA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30CEA4:
    ctx->pc = 0x7F30CEA4u;
    ctx->downcount -= 20;
    // 7F30CEA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30CEA8:
    ctx->pc = 0x7F30CEA8u;
    // 7F30CEA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30CEAC:
    ctx->pc = 0x7F30CEACu;
    // 7F30CEAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CEB0:
    ctx->pc = 0x7F30CEB0u;
    // 7F30CEB0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30CEB4:
    ctx->pc = 0x7F30CEB4u;
    // 7F30CEB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30CEB8:
    ctx->pc = 0x7F30CEB8u;
    // 7F30CEB8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30CEBC:
    ctx->pc = 0x7F30CEBCu;
    // 7F30CEBC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CEC0:
    ctx->pc = 0x7F30CEC0u;
    // 7F30CEC0: lbz     r0, -25175(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25175);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CEC4:
    ctx->pc = 0x7F30CEC4u;
    // 7F30CEC4: cmplwi  r0, 0x0000
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

label_7F30CEC8:
    ctx->pc = 0x7F30CEC8u;
    // 7F30CEC8: bc    12, 2, 0x7F30CF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30CF3C;
        }
    }

label_7F30CECC:
    ctx->pc = 0x7F30CECCu;
    ctx->downcount -= 3;
    // 7F30CECC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30CED0:
    ctx->pc = 0x7F30CED0u;
    // 7F30CED0: stb     r0, -25175(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25175);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30CED4:
    ctx->pc = 0x7F30CED4u;
    // 7F30CED4: bl      0x7F30CCFC
    {
            ctx->lr = 0x7F30CED8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CCFCu;
                return;
            }
            goto label_7F30CCFC;
    }

label_7F30CED8:
    ctx->pc = 0x7F30CED8u;
    ctx->downcount -= 2;
    // 7F30CED8: cmpwi   r3, 0
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

label_7F30CEDC:
    ctx->pc = 0x7F30CEDCu;
    // 7F30CEDC: bc    4, 2, 0x7F30CF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30CF3C;
        }
    }

label_7F30CEE0:
    ctx->pc = 0x7F30CEE0u;
    ctx->downcount -= 21;
    // 7F30CEE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30CEE4:
    ctx->pc = 0x7F30CEE4u;
    // 7F30CEE4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30CEE8:
    ctx->pc = 0x7F30CEE8u;
    // 7F30CEE8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CEEC:
    ctx->pc = 0x7F30CEECu;
    // 7F30CEEC: addis   r6, r31, 3
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CEF0:
    ctx->pc = 0x7F30CEF0u;
    // 7F30CEF0: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30CEF4:
    ctx->pc = 0x7F30CEF4u;
    // 7F30CEF4: lwz     r4, -26460(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26460);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30CEF8:
    ctx->pc = 0x7F30CEF8u;
    // 7F30CEF8: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CEFC:
    ctx->pc = 0x7F30CEFCu;
    // 7F30CEFC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CF00:
    ctx->pc = 0x7F30CF00u;
    // 7F30CF00: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CF04:
    ctx->pc = 0x7F30CF04u;
    // 7F30CF04: lwz     r4, -26456(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26456);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30CF08:
    ctx->pc = 0x7F30CF08u;
    // 7F30CF08: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30CF0C:
    ctx->pc = 0x7F30CF0Cu;
    // 7F30CF0C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30CF10:
    ctx->pc = 0x7F30CF10u;
    // 7F30CF10: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CF14:
    ctx->pc = 0x7F30CF14u;
    // 7F30CF14: lbz     r0, -24704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CF18:
    ctx->pc = 0x7F30CF18u;
    // 7F30CF18: lwz     r4, -25216(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30CF1C:
    ctx->pc = 0x7F30CF1Cu;
    // 7F30CF1C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30CF20:
    ctx->pc = 0x7F30CF20u;
    // 7F30CF20: lwz     r5, -25212(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30CF24:
    ctx->pc = 0x7F30CF24u;
    // 7F30CF24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30CF28:
    ctx->pc = 0x7F30CF28u;
    // 7F30CF28: lwz     r6, -25208(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30CF2C:
    ctx->pc = 0x7F30CF2Cu;
    // 7F30CF2C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30CF30:
    ctx->pc = 0x7F30CF30u;
    // 7F30CF30: bl      0x7F31435C
    {
            ctx->lr = 0x7F30CF34u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30CF34:
    ctx->pc = 0x7F30CF34u;
    ctx->downcount -= 2;
    // 7F30CF34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30CF38:
    ctx->pc = 0x7F30CF38u;
    // 7F30CF38: b       0x7F30D020
    {
            goto label_7F30D020;
    }

label_7F30CF3C:
    ctx->pc = 0x7F30CF3Cu;
    ctx->downcount -= 7;
    // 7F30CF3C: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CF40:
    ctx->pc = 0x7F30CF40u;
    // 7F30CF40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30CF44:
    ctx->pc = 0x7F30CF44u;
    // 7F30CF44: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CF48:
    ctx->pc = 0x7F30CF48u;
    // 7F30CF48: lwz     r4, -25248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30CF4C:
    ctx->pc = 0x7F30CF4Cu;
    // 7F30CF4C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30CF50:
    ctx->pc = 0x7F30CF50u;
    // 7F30CF50: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F30CF54:
    ctx->pc = 0x7F30CF54u;
    // 7F30CF54: bl      0x7F30C8D8
    {
            ctx->lr = 0x7F30CF58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C8D8u;
                return;
            }
            goto label_7F30C8D8;
    }

label_7F30CF58:
    ctx->pc = 0x7F30CF58u;
    ctx->downcount -= 2;
    // 7F30CF58: cmpwi   r3, 0
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

label_7F30CF5C:
    ctx->pc = 0x7F30CF5Cu;
    // 7F30CF5C: bc    4, 2, 0x7F30D00C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D00C;
        }
    }

label_7F30CF60:
    ctx->pc = 0x7F30CF60u;
    ctx->downcount -= 12;
    // 7F30CF60: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30CF64:
    ctx->pc = 0x7F30CF64u;
    // 7F30CF64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30CF68:
    ctx->pc = 0x7F30CF68u;
    // 7F30CF68: stw     r4, -10656(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30CF6C:
    ctx->pc = 0x7F30CF6Cu;
    // 7F30CF6C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CF70:
    ctx->pc = 0x7F30CF70u;
    // 7F30CF70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F30CF74:
    ctx->pc = 0x7F30CF74u;
    // 7F30CF74: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_7F30CF78:
    ctx->pc = 0x7F30CF78u;
    // 7F30CF78: stw     r4, -10552(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10552);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30CF7C:
    ctx->pc = 0x7F30CF7Cu;
    // 7F30CF7C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30CF80:
    ctx->pc = 0x7F30CF80u;
    // 7F30CF80: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30CF84:
    ctx->pc = 0x7F30CF84u;
    // 7F30CF84: stb     r5, -10559(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30CF88:
    ctx->pc = 0x7F30CF88u;
    // 7F30CF88: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CF8C:
    ctx->pc = 0x7F30CF8Cu;
    // 7F30CF8C: bl      0x7F31733C
    {
            ctx->lr = 0x7F30CF90u;
            ctx->pc = 0x7F31733Cu;
            return;
    }

label_7F30CF90:
    ctx->pc = 0x7F30CF90u;
    ctx->downcount -= 3;
    // 7F30CF90: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CF94:
    ctx->pc = 0x7F30CF94u;
    // 7F30CF94: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30CF98:
    ctx->pc = 0x7F30CF98u;
    // 7F30CF98: bl      0x7F3177EC
    {
            ctx->lr = 0x7F30CF9Cu;
            ctx->pc = 0x7F3177ECu;
            return;
    }

label_7F30CF9C:
    ctx->pc = 0x7F30CF9Cu;
    ctx->downcount -= 6;
    // 7F30CF9C: lis     r3, 74
    ctx->gpr[3] = ((u32)(s32)(74) << 16);

label_7F30CFA0:
    ctx->pc = 0x7F30CFA0u;
    // 7F30CFA0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30CFA4:
    ctx->pc = 0x7F30CFA4u;
    // 7F30CFA4: addi    r3, r3, -13619
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13619);

label_7F30CFA8:
    ctx->pc = 0x7F30CFA8u;
    // 7F30CFA8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30CFAC:
    ctx->pc = 0x7F30CFACu;
    // 7F30CFAC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30CFB0:
    ctx->pc = 0x7F30CFB0u;
    // 7F30CFB0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30CFB4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30CFB4:
    ctx->pc = 0x7F30CFB4u;
    ctx->downcount -= 7;
    // 7F30CFB4: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30CFB8:
    ctx->pc = 0x7F30CFB8u;
    // 7F30CFB8: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F30CFBC:
    ctx->pc = 0x7F30CFBCu;
    // 7F30CFBC: stw     r0, -10556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30CFC0:
    ctx->pc = 0x7F30CFC0u;
    // 7F30CFC0: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CFC4:
    ctx->pc = 0x7F30CFC4u;
    // 7F30CFC4: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30CFC8:
    ctx->pc = 0x7F30CFC8u;
    // 7F30CFC8: lbz     r4, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30CFCC:
    ctx->pc = 0x7F30CFCCu;
    // 7F30CFCC: bl      0x7F314F54
    {
            ctx->lr = 0x7F30CFD0u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30CFD0:
    ctx->pc = 0x7F30CFD0u;
    ctx->downcount -= 16;
    // 7F30CFD0: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30CFD4:
    ctx->pc = 0x7F30CFD4u;
    // 7F30CFD4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30CFD8:
    ctx->pc = 0x7F30CFD8u;
    // 7F30CFD8: lbz     r0, -8310(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30CFDC:
    ctx->pc = 0x7F30CFDCu;
    // 7F30CFDC: addi    r4, r4, -26908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26908);

label_7F30CFE0:
    ctx->pc = 0x7F30CFE0u;
    // 7F30CFE0: lwz     r5, -25248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25248);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30CFE4:
    ctx->pc = 0x7F30CFE4u;
    // 7F30CFE4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30CFE8:
    ctx->pc = 0x7F30CFE8u;
    // 7F30CFE8: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30CFEC:
    ctx->pc = 0x7F30CFECu;
    // 7F30CFEC: mulli   r5, r0, 108
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F30CFF0:
    ctx->pc = 0x7F30CFF0u;
    // 7F30CFF0: addis   r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(3) << 16);

label_7F30CFF4:
    ctx->pc = 0x7F30CFF4u;
    // 7F30CFF4: addi    r5, r5, -24568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24568);

label_7F30CFF8:
    ctx->pc = 0x7F30CFF8u;
    // 7F30CFF8: add   r5, r31, r5
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F30CFFC:
    ctx->pc = 0x7F30CFFCu;
    // 7F30CFFC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F30D000:
    ctx->pc = 0x7F30D000u;
    // 7F30D000: addi    r3, r3, -8288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8288);

label_7F30D004:
    ctx->pc = 0x7F30D004u;
    // 7F30D004: bl      0x8001258C
    {
            ctx->lr = 0x7F30D008u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F30D008:
    ctx->pc = 0x7F30D008u;
    ctx->downcount -= 1;
    // 7F30D008: b       0x7F30D01C
    {
            goto label_7F30D01C;
    }

label_7F30D00C:
    ctx->pc = 0x7F30D00Cu;
    ctx->downcount -= 4;
    // 7F30D00C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30D010:
    ctx->pc = 0x7F30D010u;
    // 7F30D010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30D014:
    ctx->pc = 0x7F30D014u;
    // 7F30D014: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D018:
    ctx->pc = 0x7F30D018u;
    // 7F30D018: bl      0x7F30CC08
    {
            ctx->lr = 0x7F30D01Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CC08u;
                return;
            }
            goto label_7F30CC08;
    }

label_7F30D01C:
    ctx->pc = 0x7F30D01Cu;
    ctx->downcount -= 1;
    // 7F30D01C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30D020:
    ctx->pc = 0x7F30D020u;
    ctx->downcount -= 16;
    // 7F30D020: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30D024:
    ctx->pc = 0x7F30D024u;
    // 7F30D024: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D028:
    ctx->pc = 0x7F30D028u;
    // 7F30D028: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30D02C:
    ctx->pc = 0x7F30D02Cu;
    // 7F30D02C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30D030:
    ctx->pc = 0x7F30D030u;
    // 7F30D030: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30D034:
    ctx->pc = 0x7F30D034u;
    ctx->downcount -= 19;
    // 7F30D034: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30D038:
    ctx->pc = 0x7F30D038u;
    // 7F30D038: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30D03C:
    ctx->pc = 0x7F30D03Cu;
    // 7F30D03C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D040:
    ctx->pc = 0x7F30D040u;
    // 7F30D040: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30D044:
    ctx->pc = 0x7F30D044u;
    // 7F30D044: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30D048:
    ctx->pc = 0x7F30D048u;
    // 7F30D048: addi    r30, r31, 172
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(172);

label_7F30D04C:
    ctx->pc = 0x7F30D04Cu;
    // 7F30D04C: lwz     r0, 6176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D050:
    ctx->pc = 0x7F30D050u;
    // 7F30D050: cmplwi  r0, 0x0018
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0018u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D054:
    ctx->pc = 0x7F30D054u;
    // 7F30D054: bc    12, 1, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D058:
    ctx->pc = 0x7F30D058u;
    ctx->downcount -= 7;
    // 7F30D058: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30D05C:
    ctx->pc = 0x7F30D05Cu;
    // 7F30D05C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D060:
    ctx->pc = 0x7F30D060u;
    // 7F30D060: addi    r4, r4, -26896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26896);

label_7F30D064:
    ctx->pc = 0x7F30D064u;
    // 7F30D064: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D068:
    ctx->pc = 0x7F30D068u;
    // 7F30D068: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30D06C:
    ctx->pc = 0x7F30D06Cu;
    // 7F30D06C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F30D070:
    ctx->pc = 0x7F30D070u;
    ctx->downcount -= 10;
    // 7F30D070: addis   r5, r31, 4
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D074:
    ctx->pc = 0x7F30D074u;
    // 7F30D074: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30D078:
    ctx->pc = 0x7F30D078u;
    // 7F30D078: stb     r6, -10652(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F30D07C:
    ctx->pc = 0x7F30D07Cu;
    // 7F30D07C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D080:
    ctx->pc = 0x7F30D080u;
    // 7F30D080: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F30D084:
    ctx->pc = 0x7F30D084u;
    // 7F30D084: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D088:
    ctx->pc = 0x7F30D088u;
    // 7F30D088: stb     r6, -10559(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F30D08C:
    ctx->pc = 0x7F30D08Cu;
    // 7F30D08C: stb     r4, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30D090:
    ctx->pc = 0x7F30D090u;
    // 7F30D090: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D094:
    ctx->pc = 0x7F30D094u;
    // 7F30D094: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D098:
    ctx->pc = 0x7F30D098u;
    ctx->downcount -= 8;
    // 7F30D098: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D09C:
    ctx->pc = 0x7F30D09Cu;
    // 7F30D09C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D0A0:
    ctx->pc = 0x7F30D0A0u;
    // 7F30D0A0: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D0A4:
    ctx->pc = 0x7F30D0A4u;
    // 7F30D0A4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D0A8:
    ctx->pc = 0x7F30D0A8u;
    // 7F30D0A8: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D0AC:
    ctx->pc = 0x7F30D0ACu;
    // 7F30D0AC: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D0B0:
    ctx->pc = 0x7F30D0B0u;
    // 7F30D0B0: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D0B4:
    ctx->pc = 0x7F30D0B4u;
    // 7F30D0B4: bl      0x7F317894
    {
            ctx->lr = 0x7F30D0B8u;
            ctx->pc = 0x7F317894u;
            return;
    }

label_7F30D0B8:
    ctx->pc = 0x7F30D0B8u;
    ctx->downcount -= 2;
    // 7F30D0B8: cmpwi   r3, -1
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

label_7F30D0BC:
    ctx->pc = 0x7F30D0BCu;
    // 7F30D0BC: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D0C0:
    ctx->pc = 0x7F30D0C0u;
    ctx->downcount -= 1;
    // 7F30D0C0: bc    4, 0, 0x7F30D0D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D0D4;
        }
    }

label_7F30D0C4:
    ctx->pc = 0x7F30D0C4u;
    ctx->downcount -= 2;
    // 7F30D0C4: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D0C8:
    ctx->pc = 0x7F30D0C8u;
    // 7F30D0C8: bc    12, 2, 0x7F30D100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D100;
        }
    }

label_7F30D0CC:
    ctx->pc = 0x7F30D0CCu;
    ctx->downcount -= 1;
    // 7F30D0CC: bc    4, 0, 0x7F30D0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D0F4;
        }
    }

label_7F30D0D0:
    ctx->pc = 0x7F30D0D0u;
    ctx->downcount -= 1;
    // 7F30D0D0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D0D4:
    ctx->pc = 0x7F30D0D4u;
    ctx->downcount -= 2;
    // 7F30D0D4: cmpwi   r3, 1
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

label_7F30D0D8:
    ctx->pc = 0x7F30D0D8u;
    // 7F30D0D8: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D0DC:
    ctx->pc = 0x7F30D0DCu;
    ctx->downcount -= 3;
    // 7F30D0DC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D0E0:
    ctx->pc = 0x7F30D0E0u;
    // 7F30D0E0: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D0E4:
    ctx->pc = 0x7F30D0E4u;
    // 7F30D0E4: bl      0x7F317840
    {
            ctx->lr = 0x7F30D0E8u;
            ctx->pc = 0x7F317840u;
            return;
    }

label_7F30D0E8:
    ctx->pc = 0x7F30D0E8u;
    ctx->downcount -= 3;
    // 7F30D0E8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30D0EC:
    ctx->pc = 0x7F30D0ECu;
    // 7F30D0EC: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D0F0:
    ctx->pc = 0x7F30D0F0u;
    // 7F30D0F0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D0F4:
    ctx->pc = 0x7F30D0F4u;
    ctx->downcount -= 3;
    // 7F30D0F4: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F30D0F8:
    ctx->pc = 0x7F30D0F8u;
    // 7F30D0F8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D0FC:
    ctx->pc = 0x7F30D0FCu;
    // 7F30D0FC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D100:
    ctx->pc = 0x7F30D100u;
    ctx->downcount -= 3;
    // 7F30D100: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D104:
    ctx->pc = 0x7F30D104u;
    // 7F30D104: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D108:
    ctx->pc = 0x7F30D108u;
    // 7F30D108: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D10C:
    ctx->pc = 0x7F30D10Cu;
    ctx->downcount -= 7;
    // 7F30D10C: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D110:
    ctx->pc = 0x7F30D110u;
    // 7F30D110: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D114:
    ctx->pc = 0x7F30D114u;
    // 7F30D114: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D118:
    ctx->pc = 0x7F30D118u;
    // 7F30D118: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D11C:
    ctx->pc = 0x7F30D11Cu;
    // 7F30D11C: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D120:
    ctx->pc = 0x7F30D120u;
    // 7F30D120: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D124:
    ctx->pc = 0x7F30D124u;
    // 7F30D124: bl      0x7F3179F0
    {
            ctx->lr = 0x7F30D128u;
            ctx->pc = 0x7F3179F0u;
            return;
    }

label_7F30D128:
    ctx->pc = 0x7F30D128u;
    ctx->downcount -= 2;
    // 7F30D128: cmpwi   r3, 0
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

label_7F30D12C:
    ctx->pc = 0x7F30D12Cu;
    // 7F30D12C: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D130:
    ctx->pc = 0x7F30D130u;
    ctx->downcount -= 1;
    // 7F30D130: bc    4, 0, 0x7F30D144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D144;
        }
    }

label_7F30D134:
    ctx->pc = 0x7F30D134u;
    ctx->downcount -= 2;
    // 7F30D134: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D138:
    ctx->pc = 0x7F30D138u;
    // 7F30D138: bc    12, 2, 0x7F30D164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D164;
        }
    }

label_7F30D13C:
    ctx->pc = 0x7F30D13Cu;
    ctx->downcount -= 1;
    // 7F30D13C: bc    4, 0, 0x7F30D158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D158;
        }
    }

label_7F30D140:
    ctx->pc = 0x7F30D140u;
    ctx->downcount -= 1;
    // 7F30D140: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D144:
    ctx->pc = 0x7F30D144u;
    ctx->downcount -= 2;
    // 7F30D144: cmpwi   r3, 2
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

label_7F30D148:
    ctx->pc = 0x7F30D148u;
    // 7F30D148: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D14C:
    ctx->pc = 0x7F30D14Cu;
    ctx->downcount -= 3;
    // 7F30D14C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30D150:
    ctx->pc = 0x7F30D150u;
    // 7F30D150: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D154:
    ctx->pc = 0x7F30D154u;
    // 7F30D154: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D158:
    ctx->pc = 0x7F30D158u;
    ctx->downcount -= 3;
    // 7F30D158: li      r0, 23
    ctx->gpr[0] = (u32)(s32)(23);

label_7F30D15C:
    ctx->pc = 0x7F30D15Cu;
    // 7F30D15C: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D160:
    ctx->pc = 0x7F30D160u;
    // 7F30D160: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D164:
    ctx->pc = 0x7F30D164u;
    ctx->downcount -= 3;
    // 7F30D164: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F30D168:
    ctx->pc = 0x7F30D168u;
    // 7F30D168: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D16C:
    ctx->pc = 0x7F30D16Cu;
    // 7F30D16C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D170:
    ctx->pc = 0x7F30D170u;
    ctx->downcount -= 8;
    // 7F30D170: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D174:
    ctx->pc = 0x7F30D174u;
    // 7F30D174: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D178:
    ctx->pc = 0x7F30D178u;
    // 7F30D178: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D17C:
    ctx->pc = 0x7F30D17Cu;
    // 7F30D17C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D180:
    ctx->pc = 0x7F30D180u;
    // 7F30D180: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D184:
    ctx->pc = 0x7F30D184u;
    // 7F30D184: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D188:
    ctx->pc = 0x7F30D188u;
    // 7F30D188: stb     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D18C:
    ctx->pc = 0x7F30D18Cu;
    // 7F30D18C: bl      0x7F316FB0
    {
            ctx->lr = 0x7F30D190u;
            ctx->pc = 0x7F316FB0u;
            return;
    }

label_7F30D190:
    ctx->pc = 0x7F30D190u;
    ctx->downcount -= 2;
    // 7F30D190: cmpwi   r3, 0
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

label_7F30D194:
    ctx->pc = 0x7F30D194u;
    // 7F30D194: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D198:
    ctx->pc = 0x7F30D198u;
    ctx->downcount -= 1;
    // 7F30D198: bc    4, 0, 0x7F30D1AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D1AC;
        }
    }

label_7F30D19C:
    ctx->pc = 0x7F30D19Cu;
    ctx->downcount -= 2;
    // 7F30D19C: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D1A0:
    ctx->pc = 0x7F30D1A0u;
    // 7F30D1A0: bc    12, 2, 0x7F30D2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D2F8;
        }
    }

label_7F30D1A4:
    ctx->pc = 0x7F30D1A4u;
    ctx->downcount -= 1;
    // 7F30D1A4: bc    4, 0, 0x7F30D2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D2EC;
        }
    }

label_7F30D1A8:
    ctx->pc = 0x7F30D1A8u;
    ctx->downcount -= 1;
    // 7F30D1A8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D1AC:
    ctx->pc = 0x7F30D1ACu;
    ctx->downcount -= 2;
    // 7F30D1AC: cmpwi   r3, 2
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

label_7F30D1B0:
    ctx->pc = 0x7F30D1B0u;
    // 7F30D1B0: bc    12, 2, 0x7F30D264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D264;
        }
    }

label_7F30D1B4:
    ctx->pc = 0x7F30D1B4u;
    ctx->downcount -= 1;
    // 7F30D1B4: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D1B8:
    ctx->pc = 0x7F30D1B8u;
    ctx->downcount -= 6;
    // 7F30D1B8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D1BC:
    ctx->pc = 0x7F30D1BCu;
    // 7F30D1BC: lbz     r0, -8310(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D1C0:
    ctx->pc = 0x7F30D1C0u;
    // 7F30D1C0: lwz     r4, -25196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D1C4:
    ctx->pc = 0x7F30D1C4u;
    // 7F30D1C4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D1C8:
    ctx->pc = 0x7F30D1C8u;
    // 7F30D1C8: cmpw    r0, r4
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

label_7F30D1CC:
    ctx->pc = 0x7F30D1CCu;
    // 7F30D1CC: bc    4, 1, 0x7F30D1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D1DC;
        }
    }

label_7F30D1D0:
    ctx->pc = 0x7F30D1D0u;
    ctx->downcount -= 46;
    // 7F30D1D0: divw   r0, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30D1D4:
    ctx->pc = 0x7F30D1D4u;
    // 7F30D1D4: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F30D1D8:
    ctx->pc = 0x7F30D1D8u;
    // 7F30D1D8: stw     r0, -25248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D1DC:
    ctx->pc = 0x7F30D1DCu;
    ctx->downcount -= 11;
    // 7F30D1DC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D1E0:
    ctx->pc = 0x7F30D1E0u;
    // 7F30D1E0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30D1E4:
    ctx->pc = 0x7F30D1E4u;
    // 7F30D1E4: lbz     r0, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D1E8:
    ctx->pc = 0x7F30D1E8u;
    // 7F30D1E8: addi    r3, r3, -29600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29600);

label_7F30D1EC:
    ctx->pc = 0x7F30D1ECu;
    // 7F30D1EC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D1F0:
    ctx->pc = 0x7F30D1F0u;
    // 7F30D1F0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D1F4:
    ctx->pc = 0x7F30D1F4u;
    // 7F30D1F4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D1F8:
    ctx->pc = 0x7F30D1F8u;
    // 7F30D1F8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D1FC:
    ctx->pc = 0x7F30D1FCu;
    // 7F30D1FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D200:
    ctx->pc = 0x7F30D200u;
    // 7F30D200: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D204:
    ctx->pc = 0x7F30D204u;
    // 7F30D204: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D208u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D208:
    ctx->pc = 0x7F30D208u;
    ctx->downcount -= 4;
    // 7F30D208: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D20C:
    ctx->pc = 0x7F30D20Cu;
    // 7F30D20C: lbz     r0, -8312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D210:
    ctx->pc = 0x7F30D210u;
    // 7F30D210: extsb. r0, r0
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

label_7F30D214:
    ctx->pc = 0x7F30D214u;
    // 7F30D214: bc    4, 1, 0x7F30D248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D248;
        }
    }

label_7F30D218:
    ctx->pc = 0x7F30D218u;
    ctx->downcount -= 12;
    // 7F30D218: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D21C:
    ctx->pc = 0x7F30D21Cu;
    // 7F30D21C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30D220:
    ctx->pc = 0x7F30D220u;
    // 7F30D220: lwz     r5, -25248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30D224:
    ctx->pc = 0x7F30D224u;
    // 7F30D224: addi    r3, r3, -29728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29728);

label_7F30D228:
    ctx->pc = 0x7F30D228u;
    // 7F30D228: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D22C:
    ctx->pc = 0x7F30D22Cu;
    // 7F30D22C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D230:
    ctx->pc = 0x7F30D230u;
    // 7F30D230: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30D234:
    ctx->pc = 0x7F30D234u;
    // 7F30D234: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D238:
    ctx->pc = 0x7F30D238u;
    // 7F30D238: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D23C:
    ctx->pc = 0x7F30D23Cu;
    // 7F30D23C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D240:
    ctx->pc = 0x7F30D240u;
    // 7F30D240: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D244:
    ctx->pc = 0x7F30D244u;
    // 7F30D244: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D248u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D248:
    ctx->pc = 0x7F30D248u;
    ctx->downcount -= 6;
    // 7F30D248: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D24C:
    ctx->pc = 0x7F30D24Cu;
    // 7F30D24C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D250:
    ctx->pc = 0x7F30D250u;
    // 7F30D250: stb     r0, -25175(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25175);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D254:
    ctx->pc = 0x7F30D254u;
    // 7F30D254: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30D258:
    ctx->pc = 0x7F30D258u;
    // 7F30D258: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30D25C:
    ctx->pc = 0x7F30D25Cu;
    // 7F30D25C: bl      0x7F30CEA4
    {
            ctx->lr = 0x7F30D260u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CEA4u;
                return;
            }
            goto label_7F30CEA4;
    }

label_7F30D260:
    ctx->pc = 0x7F30D260u;
    ctx->downcount -= 1;
    // 7F30D260: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D264:
    ctx->pc = 0x7F30D264u;
    ctx->downcount -= 3;
    // 7F30D264: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D268:
    ctx->pc = 0x7F30D268u;
    // 7F30D268: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30D26C:
    ctx->pc = 0x7F30D26Cu;
    // 7F30D26C: bl      0x7F314F14
    {
            ctx->lr = 0x7F30D270u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30D270:
    ctx->pc = 0x7F30D270u;
    ctx->downcount -= 10;
    // 7F30D270: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30D274:
    ctx->pc = 0x7F30D274u;
    // 7F30D274: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D278:
    ctx->pc = 0x7F30D278u;
    // 7F30D278: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30D27C:
    ctx->pc = 0x7F30D27Cu;
    // 7F30D27C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30D280:
    ctx->pc = 0x7F30D280u;
    // 7F30D280: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D284:
    ctx->pc = 0x7F30D284u;
    // 7F30D284: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30D288:
    ctx->pc = 0x7F30D288u;
    // 7F30D288: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30D28C:
    ctx->pc = 0x7F30D28Cu;
    // 7F30D28C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30D290:
    ctx->pc = 0x7F30D290u;
    // 7F30D290: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30D294:
    ctx->pc = 0x7F30D294u;
    // 7F30D294: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30D298u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30D298:
    ctx->pc = 0x7F30D298u;
    ctx->downcount -= 11;
    // 7F30D298: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F30D29C:
    ctx->pc = 0x7F30D29Cu;
    // 7F30D29C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F30D2A0:
    ctx->pc = 0x7F30D2A0u;
    // 7F30D2A0: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D2A4:
    ctx->pc = 0x7F30D2A4u;
    // 7F30D2A4: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D2A8:
    ctx->pc = 0x7F30D2A8u;
    // 7F30D2A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D2AC:
    ctx->pc = 0x7F30D2ACu;
    // 7F30D2AC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D2B0:
    ctx->pc = 0x7F30D2B0u;
    // 7F30D2B0: stb     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30D2B4:
    ctx->pc = 0x7F30D2B4u;
    // 7F30D2B4: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D2B8:
    ctx->pc = 0x7F30D2B8u;
    // 7F30D2B8: lbz     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D2BC:
    ctx->pc = 0x7F30D2BCu;
    // 7F30D2BC: cmplwi  r0, 0x0000
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

label_7F30D2C0:
    ctx->pc = 0x7F30D2C0u;
    // 7F30D2C0: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D2C4:
    ctx->pc = 0x7F30D2C4u;
    ctx->downcount -= 6;
    // 7F30D2C4: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F30D2C8:
    ctx->pc = 0x7F30D2C8u;
    // 7F30D2C8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D2CC:
    ctx->pc = 0x7F30D2CCu;
    // 7F30D2CC: addi    r3, r3, -2447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2447);

label_7F30D2D0:
    ctx->pc = 0x7F30D2D0u;
    // 7F30D2D0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D2D4:
    ctx->pc = 0x7F30D2D4u;
    // 7F30D2D4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D2D8:
    ctx->pc = 0x7F30D2D8u;
    // 7F30D2D8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D2DCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D2DC:
    ctx->pc = 0x7F30D2DCu;
    ctx->downcount -= 4;
    // 7F30D2DC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D2E0:
    ctx->pc = 0x7F30D2E0u;
    // 7F30D2E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D2E4:
    ctx->pc = 0x7F30D2E4u;
    // 7F30D2E4: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D2E8:
    ctx->pc = 0x7F30D2E8u;
    // 7F30D2E8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D2EC:
    ctx->pc = 0x7F30D2ECu;
    ctx->downcount -= 3;
    // 7F30D2EC: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F30D2F0:
    ctx->pc = 0x7F30D2F0u;
    // 7F30D2F0: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D2F4:
    ctx->pc = 0x7F30D2F4u;
    // 7F30D2F4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D2F8:
    ctx->pc = 0x7F30D2F8u;
    ctx->downcount -= 3;
    // 7F30D2F8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30D2FC:
    ctx->pc = 0x7F30D2FCu;
    // 7F30D2FC: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D300:
    ctx->pc = 0x7F30D300u;
    // 7F30D300: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D304:
    ctx->pc = 0x7F30D304u;
    ctx->downcount -= 3;
    // 7F30D304: lbz     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D308:
    ctx->pc = 0x7F30D308u;
    // 7F30D308: cmplwi  r0, 0x0000
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

label_7F30D30C:
    ctx->pc = 0x7F30D30Cu;
    // 7F30D30C: bc    12, 2, 0x7F30D370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D370;
        }
    }

label_7F30D310:
    ctx->pc = 0x7F30D310u;
    ctx->downcount -= 19;
    // 7F30D310: addis   r6, r31, 3
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D314:
    ctx->pc = 0x7F30D314u;
    // 7F30D314: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30D318:
    ctx->pc = 0x7F30D318u;
    // 7F30D318: lwz     r4, -26460(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26460);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D31C:
    ctx->pc = 0x7F30D31Cu;
    // 7F30D31C: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30D320:
    ctx->pc = 0x7F30D320u;
    // 7F30D320: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D324:
    ctx->pc = 0x7F30D324u;
    // 7F30D324: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30D328:
    ctx->pc = 0x7F30D328u;
    // 7F30D328: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D32C:
    ctx->pc = 0x7F30D32Cu;
    // 7F30D32C: lwz     r4, -26456(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-26456);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D330:
    ctx->pc = 0x7F30D330u;
    // 7F30D330: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D334:
    ctx->pc = 0x7F30D334u;
    // 7F30D334: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30D338:
    ctx->pc = 0x7F30D338u;
    // 7F30D338: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D33C:
    ctx->pc = 0x7F30D33Cu;
    // 7F30D33C: lbz     r0, -24704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D340:
    ctx->pc = 0x7F30D340u;
    // 7F30D340: lwz     r4, -25216(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D344:
    ctx->pc = 0x7F30D344u;
    // 7F30D344: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D348:
    ctx->pc = 0x7F30D348u;
    // 7F30D348: lwz     r5, -25212(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30D34C:
    ctx->pc = 0x7F30D34Cu;
    // 7F30D34C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D350:
    ctx->pc = 0x7F30D350u;
    // 7F30D350: lwz     r6, -25208(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30D354:
    ctx->pc = 0x7F30D354u;
    // 7F30D354: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D358:
    ctx->pc = 0x7F30D358u;
    // 7F30D358: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D35Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D35C:
    ctx->pc = 0x7F30D35Cu;
    ctx->downcount -= 5;
    // 7F30D35C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F30D360:
    ctx->pc = 0x7F30D360u;
    // 7F30D360: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D364:
    ctx->pc = 0x7F30D364u;
    // 7F30D364: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D368:
    ctx->pc = 0x7F30D368u;
    // 7F30D368: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D36C:
    ctx->pc = 0x7F30D36Cu;
    // 7F30D36C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D370:
    ctx->pc = 0x7F30D370u;
    ctx->downcount -= 7;
    // 7F30D370: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D374:
    ctx->pc = 0x7F30D374u;
    // 7F30D374: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D378:
    ctx->pc = 0x7F30D378u;
    // 7F30D378: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D37C:
    ctx->pc = 0x7F30D37Cu;
    // 7F30D37C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D380:
    ctx->pc = 0x7F30D380u;
    // 7F30D380: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D384:
    ctx->pc = 0x7F30D384u;
    // 7F30D384: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D388:
    ctx->pc = 0x7F30D388u;
    // 7F30D388: bl      0x7F3169AC
    {
            ctx->lr = 0x7F30D38Cu;
            ctx->pc = 0x7F3169ACu;
            return;
    }

label_7F30D38C:
    ctx->pc = 0x7F30D38Cu;
    ctx->downcount -= 2;
    // 7F30D38C: cmpwi   r3, 0
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

label_7F30D390:
    ctx->pc = 0x7F30D390u;
    // 7F30D390: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D394:
    ctx->pc = 0x7F30D394u;
    ctx->downcount -= 1;
    // 7F30D394: bc    4, 0, 0x7F30D3A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D3A8;
        }
    }

label_7F30D398:
    ctx->pc = 0x7F30D398u;
    ctx->downcount -= 2;
    // 7F30D398: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D39C:
    ctx->pc = 0x7F30D39Cu;
    // 7F30D39C: bc    12, 2, 0x7F30D4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D4D0;
        }
    }

label_7F30D3A0:
    ctx->pc = 0x7F30D3A0u;
    ctx->downcount -= 1;
    // 7F30D3A0: bc    4, 0, 0x7F30D490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D490;
        }
    }

label_7F30D3A4:
    ctx->pc = 0x7F30D3A4u;
    ctx->downcount -= 1;
    // 7F30D3A4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D3A8:
    ctx->pc = 0x7F30D3A8u;
    ctx->downcount -= 2;
    // 7F30D3A8: cmpwi   r3, 2
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

label_7F30D3AC:
    ctx->pc = 0x7F30D3ACu;
    // 7F30D3AC: bc    12, 2, 0x7F30D484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D484;
        }
    }

label_7F30D3B0:
    ctx->pc = 0x7F30D3B0u;
    ctx->downcount -= 1;
    // 7F30D3B0: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D3B4:
    ctx->pc = 0x7F30D3B4u;
    ctx->downcount -= 15;
    // 7F30D3B4: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D3B8:
    ctx->pc = 0x7F30D3B8u;
    // 7F30D3B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30D3BC:
    ctx->pc = 0x7F30D3BCu;
    // 7F30D3BC: stw     r4, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30D3C0:
    ctx->pc = 0x7F30D3C0u;
    // 7F30D3C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D3C4:
    ctx->pc = 0x7F30D3C4u;
    // 7F30D3C4: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D3C8:
    ctx->pc = 0x7F30D3C8u;
    // 7F30D3C8: stw     r4, -10552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10552);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30D3CC:
    ctx->pc = 0x7F30D3CCu;
    // 7F30D3CC: stb     r0, -10559(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D3D0:
    ctx->pc = 0x7F30D3D0u;
    // 7F30D3D0: lbz     r0, -8310(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D3D4:
    ctx->pc = 0x7F30D3D4u;
    // 7F30D3D4: lwz     r4, -25248(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D3D8:
    ctx->pc = 0x7F30D3D8u;
    // 7F30D3D8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D3DC:
    ctx->pc = 0x7F30D3DCu;
    // 7F30D3DC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30D3E0:
    ctx->pc = 0x7F30D3E0u;
    // 7F30D3E0: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30D3E4:
    ctx->pc = 0x7F30D3E4u;
    // 7F30D3E4: lbz     r0, 6208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D3E8:
    ctx->pc = 0x7F30D3E8u;
    // 7F30D3E8: cmplwi  r0, 0x0000
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

label_7F30D3EC:
    ctx->pc = 0x7F30D3ECu;
    // 7F30D3EC: bc    12, 2, 0x7F30D444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D444;
        }
    }

label_7F30D3F0:
    ctx->pc = 0x7F30D3F0u;
    ctx->downcount -= 7;
    // 7F30D3F0: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_7F30D3F4:
    ctx->pc = 0x7F30D3F4u;
    // 7F30D3F4: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D3F8:
    ctx->pc = 0x7F30D3F8u;
    // 7F30D3F8: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F30D3FC:
    ctx->pc = 0x7F30D3FCu;
    // 7F30D3FC: stw     r0, -10556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D400:
    ctx->pc = 0x7F30D400u;
    // 7F30D400: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30D404:
    ctx->pc = 0x7F30D404u;
    // 7F30D404: lbz     r4, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30D408:
    ctx->pc = 0x7F30D408u;
    // 7F30D408: bl      0x7F314F54
    {
            ctx->lr = 0x7F30D40Cu;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30D40C:
    ctx->pc = 0x7F30D40Cu;
    ctx->downcount -= 4;
    // 7F30D40C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D410:
    ctx->pc = 0x7F30D410u;
    // 7F30D410: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30D414:
    ctx->pc = 0x7F30D414u;
    // 7F30D414: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D418:
    ctx->pc = 0x7F30D418u;
    // 7F30D418: bl      0x7F31733C
    {
            ctx->lr = 0x7F30D41Cu;
            ctx->pc = 0x7F31733Cu;
            return;
    }

label_7F30D41C:
    ctx->pc = 0x7F30D41Cu;
    ctx->downcount -= 3;
    // 7F30D41C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D420:
    ctx->pc = 0x7F30D420u;
    // 7F30D420: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D424:
    ctx->pc = 0x7F30D424u;
    // 7F30D424: bl      0x7F3177EC
    {
            ctx->lr = 0x7F30D428u;
            ctx->pc = 0x7F3177ECu;
            return;
    }

label_7F30D428:
    ctx->pc = 0x7F30D428u;
    ctx->downcount -= 6;
    // 7F30D428: lis     r3, 74
    ctx->gpr[3] = ((u32)(s32)(74) << 16);

label_7F30D42C:
    ctx->pc = 0x7F30D42Cu;
    // 7F30D42C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D430:
    ctx->pc = 0x7F30D430u;
    // 7F30D430: addi    r3, r3, -13619
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13619);

label_7F30D434:
    ctx->pc = 0x7F30D434u;
    // 7F30D434: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D438:
    ctx->pc = 0x7F30D438u;
    // 7F30D438: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D43C:
    ctx->pc = 0x7F30D43Cu;
    // 7F30D43C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D440u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D440:
    ctx->pc = 0x7F30D440u;
    ctx->downcount -= 1;
    // 7F30D440: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D444:
    ctx->pc = 0x7F30D444u;
    ctx->downcount -= 9;
    // 7F30D444: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F30D448:
    ctx->pc = 0x7F30D448u;
    // 7F30D448: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F30D44C:
    ctx->pc = 0x7F30D44Cu;
    // 7F30D44C: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D450:
    ctx->pc = 0x7F30D450u;
    // 7F30D450: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F30D454:
    ctx->pc = 0x7F30D454u;
    // 7F30D454: stw     r4, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30D458:
    ctx->pc = 0x7F30D458u;
    // 7F30D458: stw     r0, -10556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D45C:
    ctx->pc = 0x7F30D45Cu;
    // 7F30D45C: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30D460:
    ctx->pc = 0x7F30D460u;
    // 7F30D460: lbz     r4, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30D464:
    ctx->pc = 0x7F30D464u;
    // 7F30D464: bl      0x7F314F54
    {
            ctx->lr = 0x7F30D468u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30D468:
    ctx->pc = 0x7F30D468u;
    ctx->downcount -= 6;
    // 7F30D468: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F30D46C:
    ctx->pc = 0x7F30D46Cu;
    // 7F30D46C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D470:
    ctx->pc = 0x7F30D470u;
    // 7F30D470: addi    r3, r3, 24501
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24501);

label_7F30D474:
    ctx->pc = 0x7F30D474u;
    // 7F30D474: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D478:
    ctx->pc = 0x7F30D478u;
    // 7F30D478: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D47C:
    ctx->pc = 0x7F30D47Cu;
    // 7F30D47C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D480u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D480:
    ctx->pc = 0x7F30D480u;
    ctx->downcount -= 1;
    // 7F30D480: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D484:
    ctx->pc = 0x7F30D484u;
    ctx->downcount -= 3;
    // 7F30D484: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30D488:
    ctx->pc = 0x7F30D488u;
    // 7F30D488: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D48C:
    ctx->pc = 0x7F30D48Cu;
    // 7F30D48C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D490:
    ctx->pc = 0x7F30D490u;
    ctx->downcount -= 3;
    // 7F30D490: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D494:
    ctx->pc = 0x7F30D494u;
    // 7F30D494: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30D498:
    ctx->pc = 0x7F30D498u;
    // 7F30D498: bl      0x7F314F14
    {
            ctx->lr = 0x7F30D49Cu;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30D49C:
    ctx->pc = 0x7F30D49Cu;
    ctx->downcount -= 10;
    // 7F30D49C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30D4A0:
    ctx->pc = 0x7F30D4A0u;
    // 7F30D4A0: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D4A4:
    ctx->pc = 0x7F30D4A4u;
    // 7F30D4A4: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30D4A8:
    ctx->pc = 0x7F30D4A8u;
    // 7F30D4A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30D4AC:
    ctx->pc = 0x7F30D4ACu;
    // 7F30D4AC: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D4B0:
    ctx->pc = 0x7F30D4B0u;
    // 7F30D4B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30D4B4:
    ctx->pc = 0x7F30D4B4u;
    // 7F30D4B4: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30D4B8:
    ctx->pc = 0x7F30D4B8u;
    // 7F30D4B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30D4BC:
    ctx->pc = 0x7F30D4BCu;
    // 7F30D4BC: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30D4C0:
    ctx->pc = 0x7F30D4C0u;
    // 7F30D4C0: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30D4C4u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30D4C4:
    ctx->pc = 0x7F30D4C4u;
    ctx->downcount -= 3;
    // 7F30D4C4: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F30D4C8:
    ctx->pc = 0x7F30D4C8u;
    // 7F30D4C8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D4CC:
    ctx->pc = 0x7F30D4CCu;
    // 7F30D4CC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D4D0:
    ctx->pc = 0x7F30D4D0u;
    ctx->downcount -= 12;
    // 7F30D4D0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D4D4:
    ctx->pc = 0x7F30D4D4u;
    // 7F30D4D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D4D8:
    ctx->pc = 0x7F30D4D8u;
    // 7F30D4D8: lwz     r4, -26460(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26460);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D4DC:
    ctx->pc = 0x7F30D4DCu;
    // 7F30D4DC: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D4E0:
    ctx->pc = 0x7F30D4E0u;
    // 7F30D4E0: ori     r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] | 0x8000u;

label_7F30D4E4:
    ctx->pc = 0x7F30D4E4u;
    // 7F30D4E4: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D4E8:
    ctx->pc = 0x7F30D4E8u;
    // 7F30D4E8: lwz     r4, -26456(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26456);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30D4EC:
    ctx->pc = 0x7F30D4ECu;
    // 7F30D4EC: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D4F0:
    ctx->pc = 0x7F30D4F0u;
    // 7F30D4F0: ori     r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] | 0x8000u;

label_7F30D4F4:
    ctx->pc = 0x7F30D4F4u;
    // 7F30D4F4: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D4F8:
    ctx->pc = 0x7F30D4F8u;
    // 7F30D4F8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D4FC:
    ctx->pc = 0x7F30D4FCu;
    // 7F30D4FC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D500:
    ctx->pc = 0x7F30D500u;
    ctx->downcount -= 2;
    // 7F30D500: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30D504:
    ctx->pc = 0x7F30D504u;
    // 7F30D504: bl      0x7F30CEA4
    {
            ctx->lr = 0x7F30D508u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CEA4u;
                return;
            }
            goto label_7F30CEA4;
    }

label_7F30D508:
    ctx->pc = 0x7F30D508u;
    ctx->downcount -= 1;
    // 7F30D508: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D50C:
    ctx->pc = 0x7F30D50Cu;
    ctx->downcount -= 6;
    // 7F30D50C: lwz     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D510:
    ctx->pc = 0x7F30D510u;
    // 7F30D510: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30D514:
    ctx->pc = 0x7F30D514u;
    // 7F30D514: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D518:
    ctx->pc = 0x7F30D518u;
    // 7F30D518: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D51C:
    ctx->pc = 0x7F30D51Cu;
    // 7F30D51C: cmpwi   r0, 0
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

label_7F30D520:
    ctx->pc = 0x7F30D520u;
    // 7F30D520: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D524:
    ctx->pc = 0x7F30D524u;
    ctx->downcount -= 17;
    // 7F30D524: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D528:
    ctx->pc = 0x7F30D528u;
    // 7F30D528: addis   r28, r30, 3
    ctx->gpr[28] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30D52C:
    ctx->pc = 0x7F30D52Cu;
    // 7F30D52C: lbz     r0, -8310(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D530:
    ctx->pc = 0x7F30D530u;
    // 7F30D530: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F30D534:
    ctx->pc = 0x7F30D534u;
    // 7F30D534: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F30D538:
    ctx->pc = 0x7F30D538u;
    // 7F30D538: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D53C:
    ctx->pc = 0x7F30D53Cu;
    // 7F30D53C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D540:
    ctx->pc = 0x7F30D540u;
    // 7F30D540: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D544:
    ctx->pc = 0x7F30D544u;
    // 7F30D544: mulli   r7, r0, 108
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F30D548:
    ctx->pc = 0x7F30D548u;
    // 7F30D548: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D54C:
    ctx->pc = 0x7F30D54Cu;
    // 7F30D54C: addi    r28, r28, -26684
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-26684);

label_7F30D550:
    ctx->pc = 0x7F30D550u;
    // 7F30D550: addis   r29, r7, 3
    ctx->gpr[29] = ctx->gpr[7] + ((u32)(s32)(3) << 16);

label_7F30D554:
    ctx->pc = 0x7F30D554u;
    // 7F30D554: addi    r29, r29, -24565
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-24565);

label_7F30D558:
    ctx->pc = 0x7F30D558u;
    // 7F30D558: add   r29, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F30D55C:
    ctx->pc = 0x7F30D55Cu;
    // 7F30D55C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D560u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D560:
    ctx->pc = 0x7F30D560u;
    ctx->downcount -= 5;
    // 7F30D560: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30D564:
    ctx->pc = 0x7F30D564u;
    // 7F30D564: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30D568:
    ctx->pc = 0x7F30D568u;
    // 7F30D568: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F30D56C:
    ctx->pc = 0x7F30D56Cu;
    // 7F30D56C: addi    r3, r3, -26652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26652);

label_7F30D570:
    ctx->pc = 0x7F30D570u;
    // 7F30D570: bl      0x800050B4
    {
            ctx->lr = 0x7F30D574u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F30D574:
    ctx->pc = 0x7F30D574u;
    ctx->downcount -= 22;
    // 7F30D574: addis   r7, r31, 3
    ctx->gpr[7] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D578:
    ctx->pc = 0x7F30D578u;
    // 7F30D578: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30D57C:
    ctx->pc = 0x7F30D57Cu;
    // 7F30D57C: lbz     r0, -8310(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D580:
    ctx->pc = 0x7F30D580u;
    // 7F30D580: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30D584:
    ctx->pc = 0x7F30D584u;
    // 7F30D584: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F30D588:
    ctx->pc = 0x7F30D588u;
    // 7F30D588: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D58C:
    ctx->pc = 0x7F30D58Cu;
    // 7F30D58C: mulli   r0, r0, 108
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F30D590:
    ctx->pc = 0x7F30D590u;
    // 7F30D590: add   r6, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30D594:
    ctx->pc = 0x7F30D594u;
    // 7F30D594: lbz     r0, -24567(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24567);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D598:
    ctx->pc = 0x7F30D598u;
    // 7F30D598: stb     r0, -26652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D59C:
    ctx->pc = 0x7F30D59Cu;
    // 7F30D59C: lbz     r0, -8310(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D5A0:
    ctx->pc = 0x7F30D5A0u;
    // 7F30D5A0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D5A4:
    ctx->pc = 0x7F30D5A4u;
    // 7F30D5A4: mulli   r0, r0, 108
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F30D5A8:
    ctx->pc = 0x7F30D5A8u;
    // 7F30D5A8: add   r6, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30D5AC:
    ctx->pc = 0x7F30D5ACu;
    // 7F30D5AC: lbz     r0, -24566(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24566);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D5B0:
    ctx->pc = 0x7F30D5B0u;
    // 7F30D5B0: stb     r0, -26651(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26651);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D5B4:
    ctx->pc = 0x7F30D5B4u;
    // 7F30D5B4: addi    r3, r3, -26684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26684);

label_7F30D5B8:
    ctx->pc = 0x7F30D5B8u;
    // 7F30D5B8: bl      0x800050B4
    {
            ctx->lr = 0x7F30D5BCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F30D5BC:
    ctx->pc = 0x7F30D5BCu;
    ctx->downcount -= 3;
    // 7F30D5BC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30D5C0:
    ctx->pc = 0x7F30D5C0u;
    // 7F30D5C0: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F30D5C4:
    ctx->pc = 0x7F30D5C4u;
    ctx->downcount -= 4;
    // 7F30D5C4: lbz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30D5C8:
    // 7F30D5C8: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F30D5CC:
    // 7F30D5CC: cmpwi   r0, 48
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D5D0:
    // 7F30D5D0: bc    12, 0, 0x7F30D5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D5DC;
        }
    }

label_7F30D5D4:
    ctx->downcount -= 2;
    // 7F30D5D4: cmpwi   r0, 57
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(57);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D5D8:
    // 7F30D5D8: bc    4, 1, 0x7F30D5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D5F0;
        }
    }

label_7F30D5DC:
    ctx->downcount -= 3;
    // 7F30D5DC: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F30D5E0:
    // 7F30D5E0: cmpwi   r0, 65
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(65);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D5E4:
    // 7F30D5E4: bc    12, 0, 0x7F30D5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D5F8;
        }
    }

label_7F30D5E8:
    ctx->downcount -= 2;
    // 7F30D5E8: cmpwi   r0, 90
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

label_7F30D5EC:
    // 7F30D5EC: bc    12, 1, 0x7F30D5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D5F8;
        }
    }

label_7F30D5F0:
    ctx->pc = 0x7F30D5F0u;
    ctx->downcount -= 2;
    // 7F30D5F0: stb     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30D5F4:
    // 7F30D5F4: b       0x7F30D5FC
    {
            goto label_7F30D5FC;
    }

label_7F30D5F8:
    ctx->pc = 0x7F30D5F8u;
    ctx->downcount -= 1;
    // 7F30D5F8: stb     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30D5FC:
    ctx->downcount -= 2;
    // 7F30D5FC: extsb. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F30D600:
    // 7F30D600: bc    12, 2, 0x7F30D608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D608;
        }
    }

label_7F30D604:
    ctx->downcount -= 1;
    // 7F30D604: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F30D608:
    ctx->downcount -= 2;
    // 7F30D608: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F30D60C:
    // 7F30D60C: bc    16, 0, 0x7F30D5C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30D5C4u;
                return;
            }
            goto label_7F30D5C4;
        }
    }

label_7F30D610:
    ctx->pc = 0x7F30D610u;
    ctx->downcount -= 4;
    // 7F30D610: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D614:
    ctx->pc = 0x7F30D614u;
    // 7F30D614: lbz     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D618:
    ctx->pc = 0x7F30D618u;
    // 7F30D618: cmplwi  r0, 0x0000
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

label_7F30D61C:
    ctx->pc = 0x7F30D61Cu;
    // 7F30D61C: bc    12, 2, 0x7F30D644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D644;
        }
    }

label_7F30D620:
    ctx->pc = 0x7F30D620u;
    ctx->downcount -= 6;
    // 7F30D620: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F30D624:
    ctx->pc = 0x7F30D624u;
    // 7F30D624: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D628:
    ctx->pc = 0x7F30D628u;
    // 7F30D628: addi    r3, r3, -2447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2447);

label_7F30D62C:
    ctx->pc = 0x7F30D62Cu;
    // 7F30D62C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D630:
    ctx->pc = 0x7F30D630u;
    // 7F30D630: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D634:
    ctx->pc = 0x7F30D634u;
    // 7F30D634: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D638u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D638:
    ctx->pc = 0x7F30D638u;
    ctx->downcount -= 3;
    // 7F30D638: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D63C:
    ctx->pc = 0x7F30D63Cu;
    // 7F30D63C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D640:
    ctx->pc = 0x7F30D640u;
    // 7F30D640: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D644:
    ctx->pc = 0x7F30D644u;
    ctx->downcount -= 4;
    // 7F30D644: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D648:
    ctx->pc = 0x7F30D648u;
    // 7F30D648: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D64C:
    ctx->pc = 0x7F30D64Cu;
    // 7F30D64C: extsb. r0, r0
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

label_7F30D650:
    ctx->pc = 0x7F30D650u;
    // 7F30D650: bc    4, 2, 0x7F30D670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D670;
        }
    }

label_7F30D654:
    ctx->pc = 0x7F30D654u;
    ctx->downcount -= 6;
    // 7F30D654: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F30D658:
    ctx->pc = 0x7F30D658u;
    // 7F30D658: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D65C:
    ctx->pc = 0x7F30D65Cu;
    // 7F30D65C: addi    r3, r3, -9293
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9293);

label_7F30D660:
    ctx->pc = 0x7F30D660u;
    // 7F30D660: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D664:
    ctx->pc = 0x7F30D664u;
    // 7F30D664: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D668:
    ctx->pc = 0x7F30D668u;
    // 7F30D668: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D66Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D66C:
    ctx->pc = 0x7F30D66Cu;
    ctx->downcount -= 1;
    // 7F30D66C: b       0x7F30D688
    {
            goto label_7F30D688;
    }

label_7F30D670:
    ctx->pc = 0x7F30D670u;
    ctx->downcount -= 6;
    // 7F30D670: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F30D674:
    ctx->pc = 0x7F30D674u;
    // 7F30D674: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D678:
    ctx->pc = 0x7F30D678u;
    // 7F30D678: addi    r3, r3, -9292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9292);

label_7F30D67C:
    ctx->pc = 0x7F30D67Cu;
    // 7F30D67C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D680:
    ctx->pc = 0x7F30D680u;
    // 7F30D680: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D684:
    ctx->pc = 0x7F30D684u;
    // 7F30D684: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D688u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D688:
    ctx->pc = 0x7F30D688u;
    ctx->downcount -= 6;
    // 7F30D688: lis     r3, 137
    ctx->gpr[3] = ((u32)(s32)(137) << 16);

label_7F30D68C:
    ctx->pc = 0x7F30D68Cu;
    // 7F30D68C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D690:
    ctx->pc = 0x7F30D690u;
    // 7F30D690: addi    r3, r3, 3906
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3906);

label_7F30D694:
    ctx->pc = 0x7F30D694u;
    // 7F30D694: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D698:
    ctx->pc = 0x7F30D698u;
    // 7F30D698: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D69C:
    ctx->pc = 0x7F30D69Cu;
    // 7F30D69C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D6A0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D6A0:
    ctx->pc = 0x7F30D6A0u;
    ctx->downcount -= 6;
    // 7F30D6A0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F30D6A4:
    ctx->pc = 0x7F30D6A4u;
    // 7F30D6A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D6A8:
    ctx->pc = 0x7F30D6A8u;
    // 7F30D6A8: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D6AC:
    ctx->pc = 0x7F30D6ACu;
    // 7F30D6AC: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D6B0:
    ctx->pc = 0x7F30D6B0u;
    // 7F30D6B0: stb     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D6B4:
    ctx->pc = 0x7F30D6B4u;
    // 7F30D6B4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D6B8:
    ctx->pc = 0x7F30D6B8u;
    ctx->downcount -= 8;
    // 7F30D6B8: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D6BC:
    ctx->pc = 0x7F30D6BCu;
    // 7F30D6BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D6C0:
    ctx->pc = 0x7F30D6C0u;
    // 7F30D6C0: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D6C4:
    ctx->pc = 0x7F30D6C4u;
    // 7F30D6C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D6C8:
    ctx->pc = 0x7F30D6C8u;
    // 7F30D6C8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D6CC:
    ctx->pc = 0x7F30D6CCu;
    // 7F30D6CC: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D6D0:
    ctx->pc = 0x7F30D6D0u;
    // 7F30D6D0: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D6D4:
    ctx->pc = 0x7F30D6D4u;
    // 7F30D6D4: bl      0x7F314D8C
    {
            ctx->lr = 0x7F30D6D8u;
            ctx->pc = 0x7F314D8Cu;
            return;
    }

label_7F30D6D8:
    ctx->pc = 0x7F30D6D8u;
    ctx->downcount -= 2;
    // 7F30D6D8: cmpwi   r3, 0
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

label_7F30D6DC:
    ctx->pc = 0x7F30D6DCu;
    // 7F30D6DC: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30D6E0:
    ctx->pc = 0x7F30D6E0u;
    ctx->downcount -= 11;
    // 7F30D6E0: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D6E4:
    ctx->pc = 0x7F30D6E4u;
    // 7F30D6E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30D6E8:
    ctx->pc = 0x7F30D6E8u;
    // 7F30D6E8: lbz     r0, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D6EC:
    ctx->pc = 0x7F30D6ECu;
    // 7F30D6EC: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30D6F0:
    ctx->pc = 0x7F30D6F0u;
    // 7F30D6F0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D6F4:
    ctx->pc = 0x7F30D6F4u;
    // 7F30D6F4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D6F8:
    ctx->pc = 0x7F30D6F8u;
    // 7F30D6F8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D6FC:
    ctx->pc = 0x7F30D6FCu;
    // 7F30D6FC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D700:
    ctx->pc = 0x7F30D700u;
    // 7F30D700: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D704:
    ctx->pc = 0x7F30D704u;
    // 7F30D704: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D708:
    ctx->pc = 0x7F30D708u;
    // 7F30D708: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D70Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D70C:
    ctx->pc = 0x7F30D70Cu;
    ctx->downcount -= 3;
    // 7F30D70C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30D710:
    ctx->pc = 0x7F30D710u;
    // 7F30D710: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D714:
    ctx->pc = 0x7F30D714u;
    // 7F30D714: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D718:
    ctx->pc = 0x7F30D718u;
    ctx->downcount -= 7;
    // 7F30D718: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D71C:
    ctx->pc = 0x7F30D71Cu;
    // 7F30D71C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D720:
    ctx->pc = 0x7F30D720u;
    // 7F30D720: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D724:
    ctx->pc = 0x7F30D724u;
    // 7F30D724: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D728:
    ctx->pc = 0x7F30D728u;
    // 7F30D728: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D72C:
    ctx->pc = 0x7F30D72Cu;
    // 7F30D72C: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D730:
    ctx->pc = 0x7F30D730u;
    // 7F30D730: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30D734u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30D734:
    ctx->pc = 0x7F30D734u;
    ctx->downcount -= 3;
    // 7F30D734: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D738:
    ctx->pc = 0x7F30D738u;
    // 7F30D738: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30D73C:
    ctx->pc = 0x7F30D73Cu;
    // 7F30D73C: bl      0x7F317238
    {
            ctx->lr = 0x7F30D740u;
            ctx->pc = 0x7F317238u;
            return;
    }

label_7F30D740:
    ctx->pc = 0x7F30D740u;
    ctx->downcount -= 6;
    // 7F30D740: lis     r3, 103
    ctx->gpr[3] = ((u32)(s32)(103) << 16);

label_7F30D744:
    ctx->pc = 0x7F30D744u;
    // 7F30D744: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D748:
    ctx->pc = 0x7F30D748u;
    // 7F30D748: addi    r3, r3, 15195
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15195);

label_7F30D74C:
    ctx->pc = 0x7F30D74Cu;
    // 7F30D74C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D750:
    ctx->pc = 0x7F30D750u;
    // 7F30D750: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D754:
    ctx->pc = 0x7F30D754u;
    // 7F30D754: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D758u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D758:
    ctx->pc = 0x7F30D758u;
    ctx->downcount -= 3;
    // 7F30D758: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F30D75C:
    ctx->pc = 0x7F30D75Cu;
    // 7F30D75C: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D760:
    ctx->pc = 0x7F30D760u;
    // 7F30D760: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D764:
    ctx->pc = 0x7F30D764u;
    ctx->downcount -= 5;
    // 7F30D764: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D768:
    ctx->pc = 0x7F30D768u;
    // 7F30D768: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D76C:
    ctx->pc = 0x7F30D76Cu;
    // 7F30D76C: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D770:
    ctx->pc = 0x7F30D770u;
    // 7F30D770: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D774:
    ctx->pc = 0x7F30D774u;
    // 7F30D774: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D778:
    ctx->pc = 0x7F30D778u;
    ctx->downcount -= 5;
    // 7F30D778: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D77C:
    ctx->pc = 0x7F30D77Cu;
    // 7F30D77C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D780:
    ctx->pc = 0x7F30D780u;
    // 7F30D780: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D784:
    ctx->pc = 0x7F30D784u;
    // 7F30D784: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D788:
    ctx->pc = 0x7F30D788u;
    // 7F30D788: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30D78Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30D78C:
    ctx->pc = 0x7F30D78Cu;
    ctx->downcount -= 2;
    // 7F30D78C: cmpwi   r3, 0
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

label_7F30D790:
    ctx->pc = 0x7F30D790u;
    // 7F30D790: bc    12, 2, 0x7F30D878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D878;
        }
    }

label_7F30D794:
    ctx->pc = 0x7F30D794u;
    ctx->downcount -= 5;
    // 7F30D794: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D798:
    ctx->pc = 0x7F30D798u;
    // 7F30D798: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D79C:
    ctx->pc = 0x7F30D79Cu;
    // 7F30D79C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D7A0:
    ctx->pc = 0x7F30D7A0u;
    // 7F30D7A0: li      r3, 26508
    ctx->gpr[3] = (u32)(s32)(26508);

label_7F30D7A4:
    ctx->pc = 0x7F30D7A4u;
    // 7F30D7A4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D7A8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D7A8:
    ctx->pc = 0x7F30D7A8u;
    ctx->downcount -= 20;
    // 7F30D7A8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D7AC:
    ctx->pc = 0x7F30D7ACu;
    // 7F30D7AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D7B0:
    ctx->pc = 0x7F30D7B0u;
    // 7F30D7B0: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D7B4:
    ctx->pc = 0x7F30D7B4u;
    // 7F30D7B4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F30D7B8:
    ctx->pc = 0x7F30D7B8u;
    // 7F30D7B8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30D7BC:
    ctx->pc = 0x7F30D7BCu;
    // 7F30D7BC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30D7C0:
    ctx->pc = 0x7F30D7C0u;
    // 7F30D7C0: stw     r4, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30D7C4:
    ctx->pc = 0x7F30D7C4u;
    // 7F30D7C4: addis   r7, r31, 3
    ctx->gpr[7] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D7C8:
    ctx->pc = 0x7F30D7C8u;
    // 7F30D7C8: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30D7CC:
    ctx->pc = 0x7F30D7CCu;
    // 7F30D7CC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D7D0:
    ctx->pc = 0x7F30D7D0u;
    // 7F30D7D0: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D7D4:
    ctx->pc = 0x7F30D7D4u;
    // 7F30D7D4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D7D8:
    ctx->pc = 0x7F30D7D8u;
    // 7F30D7D8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D7DC:
    ctx->pc = 0x7F30D7DCu;
    // 7F30D7DC: lbz     r0, -8310(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D7E0:
    ctx->pc = 0x7F30D7E0u;
    // 7F30D7E0: lwz     r7, -25248(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25248);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30D7E4:
    ctx->pc = 0x7F30D7E4u;
    // 7F30D7E4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D7E8:
    ctx->pc = 0x7F30D7E8u;
    // 7F30D7E8: subf   r0, r7, r0
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30D7EC:
    ctx->pc = 0x7F30D7ECu;
    // 7F30D7EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30D7F0:
    ctx->pc = 0x7F30D7F0u;
    // 7F30D7F0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D7F4:
    ctx->pc = 0x7F30D7F4u;
    // 7F30D7F4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D7F8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D7F8:
    ctx->pc = 0x7F30D7F8u;
    ctx->downcount -= 5;
    // 7F30D7F8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D7FC:
    ctx->pc = 0x7F30D7FCu;
    // 7F30D7FC: lbz     r0, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D800:
    ctx->pc = 0x7F30D800u;
    // 7F30D800: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30D804:
    ctx->pc = 0x7F30D804u;
    // 7F30D804: cmpwi   r0, 1
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

label_7F30D808:
    ctx->pc = 0x7F30D808u;
    // 7F30D808: bc    4, 1, 0x7F30D830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D830;
        }
    }

label_7F30D80C:
    ctx->pc = 0x7F30D80Cu;
    ctx->downcount -= 6;
    // 7F30D80C: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30D810:
    ctx->pc = 0x7F30D810u;
    // 7F30D810: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D814:
    ctx->pc = 0x7F30D814u;
    // 7F30D814: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30D818:
    ctx->pc = 0x7F30D818u;
    // 7F30D818: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D81C:
    ctx->pc = 0x7F30D81Cu;
    // 7F30D81C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D820:
    ctx->pc = 0x7F30D820u;
    // 7F30D820: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D824u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D824:
    ctx->pc = 0x7F30D824u;
    ctx->downcount -= 3;
    // 7F30D824: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D828:
    ctx->pc = 0x7F30D828u;
    // 7F30D828: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30D82C:
    ctx->pc = 0x7F30D82Cu;
    // 7F30D82C: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30D830:
    ctx->pc = 0x7F30D830u;
    ctx->downcount -= 4;
    // 7F30D830: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D834:
    ctx->pc = 0x7F30D834u;
    // 7F30D834: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30D838:
    ctx->pc = 0x7F30D838u;
    // 7F30D838: extsb. r0, r0
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

label_7F30D83C:
    ctx->pc = 0x7F30D83Cu;
    // 7F30D83C: bc    4, 2, 0x7F30D85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D85C;
        }
    }

label_7F30D840:
    ctx->pc = 0x7F30D840u;
    ctx->downcount -= 6;
    // 7F30D840: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30D844:
    ctx->pc = 0x7F30D844u;
    // 7F30D844: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D848:
    ctx->pc = 0x7F30D848u;
    // 7F30D848: addi    r3, r3, -10252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10252);

label_7F30D84C:
    ctx->pc = 0x7F30D84Cu;
    // 7F30D84C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D850:
    ctx->pc = 0x7F30D850u;
    // 7F30D850: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D854:
    ctx->pc = 0x7F30D854u;
    // 7F30D854: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D858u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D858:
    ctx->pc = 0x7F30D858u;
    ctx->downcount -= 1;
    // 7F30D858: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D85C:
    ctx->pc = 0x7F30D85Cu;
    ctx->downcount -= 6;
    // 7F30D85C: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30D860:
    ctx->pc = 0x7F30D860u;
    // 7F30D860: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D864:
    ctx->pc = 0x7F30D864u;
    // 7F30D864: addi    r3, r3, -10251
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10251);

label_7F30D868:
    ctx->pc = 0x7F30D868u;
    // 7F30D868: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D86C:
    ctx->pc = 0x7F30D86Cu;
    // 7F30D86C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D870:
    ctx->pc = 0x7F30D870u;
    // 7F30D870: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D874u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D874:
    ctx->pc = 0x7F30D874u;
    ctx->downcount -= 1;
    // 7F30D874: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D878:
    ctx->pc = 0x7F30D878u;
    ctx->downcount -= 4;
    // 7F30D878: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30D87C:
    ctx->pc = 0x7F30D87Cu;
    // 7F30D87C: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D880:
    ctx->pc = 0x7F30D880u;
    // 7F30D880: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30D884:
    ctx->pc = 0x7F30D884u;
    // 7F30D884: bc    12, 2, 0x7F30D91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D91C;
        }
    }

label_7F30D888:
    ctx->pc = 0x7F30D888u;
    ctx->downcount -= 1;
    // 7F30D888: bc    4, 0, 0x7F30DA50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DA50;
        }
    }

label_7F30D88C:
    ctx->pc = 0x7F30D88Cu;
    ctx->downcount -= 2;
    // 7F30D88C: cmpwi   r0, 32
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

label_7F30D890:
    ctx->pc = 0x7F30D890u;
    // 7F30D890: bc    12, 2, 0x7F30D898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D898;
        }
    }

label_7F30D894:
    ctx->pc = 0x7F30D894u;
    ctx->downcount -= 1;
    // 7F30D894: b       0x7F30DA50
    {
            goto label_7F30DA50;
    }

label_7F30D898:
    ctx->pc = 0x7F30D898u;
    ctx->downcount -= 5;
    // 7F30D898: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D89C:
    ctx->pc = 0x7F30D89Cu;
    // 7F30D89C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D8A0:
    ctx->pc = 0x7F30D8A0u;
    // 7F30D8A0: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D8A4:
    ctx->pc = 0x7F30D8A4u;
    // 7F30D8A4: li      r3, 26508
    ctx->gpr[3] = (u32)(s32)(26508);

label_7F30D8A8:
    ctx->pc = 0x7F30D8A8u;
    // 7F30D8A8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D8ACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D8AC:
    ctx->pc = 0x7F30D8ACu;
    ctx->downcount -= 6;
    // 7F30D8AC: lis     r3, 244
    ctx->gpr[3] = ((u32)(s32)(244) << 16);

label_7F30D8B0:
    ctx->pc = 0x7F30D8B0u;
    // 7F30D8B0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D8B4:
    ctx->pc = 0x7F30D8B4u;
    // 7F30D8B4: addi    r3, r3, -27471
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27471);

label_7F30D8B8:
    ctx->pc = 0x7F30D8B8u;
    // 7F30D8B8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D8BC:
    ctx->pc = 0x7F30D8BCu;
    // 7F30D8BC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D8C0:
    ctx->pc = 0x7F30D8C0u;
    // 7F30D8C0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D8C4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D8C4:
    ctx->pc = 0x7F30D8C4u;
    ctx->downcount -= 7;
    // 7F30D8C4: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F30D8C8:
    ctx->pc = 0x7F30D8C8u;
    // 7F30D8C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D8CC:
    ctx->pc = 0x7F30D8CCu;
    // 7F30D8CC: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D8D0:
    ctx->pc = 0x7F30D8D0u;
    // 7F30D8D0: li      r4, 37
    ctx->gpr[4] = (u32)(s32)(37);

label_7F30D8D4:
    ctx->pc = 0x7F30D8D4u;
    // 7F30D8D4: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D8D8:
    ctx->pc = 0x7F30D8D8u;
    // 7F30D8D8: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D8DC:
    ctx->pc = 0x7F30D8DCu;
    // 7F30D8DC: bl      0x7F314F14
    {
            ctx->lr = 0x7F30D8E0u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30D8E0:
    ctx->pc = 0x7F30D8E0u;
    ctx->downcount -= 10;
    // 7F30D8E0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30D8E4:
    ctx->pc = 0x7F30D8E4u;
    // 7F30D8E4: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30D8E8:
    ctx->pc = 0x7F30D8E8u;
    // 7F30D8E8: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30D8EC:
    ctx->pc = 0x7F30D8ECu;
    // 7F30D8EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30D8F0:
    ctx->pc = 0x7F30D8F0u;
    // 7F30D8F0: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30D8F4:
    ctx->pc = 0x7F30D8F4u;
    // 7F30D8F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30D8F8:
    ctx->pc = 0x7F30D8F8u;
    // 7F30D8F8: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30D8FC:
    ctx->pc = 0x7F30D8FCu;
    // 7F30D8FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30D900:
    ctx->pc = 0x7F30D900u;
    // 7F30D900: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30D904:
    ctx->pc = 0x7F30D904u;
    // 7F30D904: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30D908u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30D908:
    ctx->pc = 0x7F30D908u;
    ctx->downcount -= 4;
    // 7F30D908: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30D90C:
    ctx->pc = 0x7F30D90Cu;
    // 7F30D90C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30D910:
    ctx->pc = 0x7F30D910u;
    // 7F30D910: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30D914:
    ctx->pc = 0x7F30D914u;
    // 7F30D914: bl      0x7F011698
    {
            ctx->lr = 0x7F30D918u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30D918:
    ctx->pc = 0x7F30D918u;
    ctx->downcount -= 1;
    // 7F30D918: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30D91C:
    ctx->pc = 0x7F30D91Cu;
    ctx->downcount -= 3;
    // 7F30D91C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30D920:
    ctx->pc = 0x7F30D920u;
    // 7F30D920: cmpwi   r0, 2
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

label_7F30D924:
    ctx->pc = 0x7F30D924u;
    // 7F30D924: bc    12, 2, 0x7F30D99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30D99C;
        }
    }

label_7F30D928:
    ctx->pc = 0x7F30D928u;
    ctx->downcount -= 1;
    // 7F30D928: bc    4, 0, 0x7F30D938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D938;
        }
    }

label_7F30D92C:
    ctx->pc = 0x7F30D92Cu;
    ctx->downcount -= 2;
    // 7F30D92C: cmpwi   r0, 1
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

label_7F30D930:
    ctx->pc = 0x7F30D930u;
    // 7F30D930: bc    4, 0, 0x7F30D970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D970;
        }
    }

label_7F30D934:
    ctx->pc = 0x7F30D934u;
    ctx->downcount -= 1;
    // 7F30D934: b       0x7F30D944
    {
            goto label_7F30D944;
    }

label_7F30D938:
    ctx->pc = 0x7F30D938u;
    ctx->downcount -= 2;
    // 7F30D938: cmpwi   r0, 4
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

label_7F30D93C:
    ctx->pc = 0x7F30D93Cu;
    // 7F30D93C: bc    4, 0, 0x7F30D944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30D944;
        }
    }

label_7F30D940:
    ctx->pc = 0x7F30D940u;
    ctx->downcount -= 1;
    // 7F30D940: b       0x7F30D9C0
    {
            goto label_7F30D9C0;
    }

label_7F30D944:
    ctx->pc = 0x7F30D944u;
    ctx->downcount -= 6;
    // 7F30D944: lis     r3, 233
    ctx->gpr[3] = ((u32)(s32)(233) << 16);

label_7F30D948:
    ctx->pc = 0x7F30D948u;
    // 7F30D948: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D94C:
    ctx->pc = 0x7F30D94Cu;
    // 7F30D94C: addi    r3, r3, -2471
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2471);

label_7F30D950:
    ctx->pc = 0x7F30D950u;
    // 7F30D950: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D954:
    ctx->pc = 0x7F30D954u;
    // 7F30D954: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D958:
    ctx->pc = 0x7F30D958u;
    // 7F30D958: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D95Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D95C:
    ctx->pc = 0x7F30D95Cu;
    ctx->downcount -= 5;
    // 7F30D95C: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F30D960:
    ctx->pc = 0x7F30D960u;
    // 7F30D960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D964:
    ctx->pc = 0x7F30D964u;
    // 7F30D964: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D968:
    ctx->pc = 0x7F30D968u;
    // 7F30D968: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D96C:
    ctx->pc = 0x7F30D96Cu;
    // 7F30D96C: b       0x7F30DA3C
    {
            goto label_7F30DA3C;
    }

label_7F30D970:
    ctx->pc = 0x7F30D970u;
    ctx->downcount -= 6;
    // 7F30D970: lis     r3, 189
    ctx->gpr[3] = ((u32)(s32)(189) << 16);

label_7F30D974:
    ctx->pc = 0x7F30D974u;
    // 7F30D974: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D978:
    ctx->pc = 0x7F30D978u;
    // 7F30D978: addi    r3, r3, -32092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32092);

label_7F30D97C:
    ctx->pc = 0x7F30D97Cu;
    // 7F30D97C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D980:
    ctx->pc = 0x7F30D980u;
    // 7F30D980: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D984:
    ctx->pc = 0x7F30D984u;
    // 7F30D984: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D988u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D988:
    ctx->pc = 0x7F30D988u;
    ctx->downcount -= 5;
    // 7F30D988: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F30D98C:
    ctx->pc = 0x7F30D98Cu;
    // 7F30D98C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D990:
    ctx->pc = 0x7F30D990u;
    // 7F30D990: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D994:
    ctx->pc = 0x7F30D994u;
    // 7F30D994: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D998:
    ctx->pc = 0x7F30D998u;
    // 7F30D998: b       0x7F30DA3C
    {
            goto label_7F30DA3C;
    }

label_7F30D99C:
    ctx->pc = 0x7F30D99Cu;
    ctx->downcount -= 6;
    // 7F30D99C: lis     r3, 125
    ctx->gpr[3] = ((u32)(s32)(125) << 16);

label_7F30D9A0:
    ctx->pc = 0x7F30D9A0u;
    // 7F30D9A0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D9A4:
    ctx->pc = 0x7F30D9A4u;
    // 7F30D9A4: addi    r3, r3, -23732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23732);

label_7F30D9A8:
    ctx->pc = 0x7F30D9A8u;
    // 7F30D9A8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D9AC:
    ctx->pc = 0x7F30D9ACu;
    // 7F30D9AC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D9B0:
    ctx->pc = 0x7F30D9B0u;
    // 7F30D9B0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D9B4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D9B4:
    ctx->pc = 0x7F30D9B4u;
    ctx->downcount -= 3;
    // 7F30D9B4: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_7F30D9B8:
    ctx->pc = 0x7F30D9B8u;
    // 7F30D9B8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30D9BC:
    ctx->pc = 0x7F30D9BCu;
    // 7F30D9BC: b       0x7F30DA3C
    {
            goto label_7F30DA3C;
    }

label_7F30D9C0:
    ctx->pc = 0x7F30D9C0u;
    ctx->downcount -= 5;
    // 7F30D9C0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D9C4:
    ctx->pc = 0x7F30D9C4u;
    // 7F30D9C4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D9C8:
    ctx->pc = 0x7F30D9C8u;
    // 7F30D9C8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D9CC:
    ctx->pc = 0x7F30D9CCu;
    // 7F30D9CC: li      r3, 26508
    ctx->gpr[3] = (u32)(s32)(26508);

label_7F30D9D0:
    ctx->pc = 0x7F30D9D0u;
    // 7F30D9D0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D9D4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D9D4:
    ctx->pc = 0x7F30D9D4u;
    ctx->downcount -= 6;
    // 7F30D9D4: lis     r3, 244
    ctx->gpr[3] = ((u32)(s32)(244) << 16);

label_7F30D9D8:
    ctx->pc = 0x7F30D9D8u;
    // 7F30D9D8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30D9DC:
    ctx->pc = 0x7F30D9DCu;
    // 7F30D9DC: addi    r3, r3, -27471
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27471);

label_7F30D9E0:
    ctx->pc = 0x7F30D9E0u;
    // 7F30D9E0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30D9E4:
    ctx->pc = 0x7F30D9E4u;
    // 7F30D9E4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30D9E8:
    ctx->pc = 0x7F30D9E8u;
    // 7F30D9E8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30D9ECu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30D9EC:
    ctx->pc = 0x7F30D9ECu;
    ctx->downcount -= 7;
    // 7F30D9EC: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_7F30D9F0:
    ctx->pc = 0x7F30D9F0u;
    // 7F30D9F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30D9F4:
    ctx->pc = 0x7F30D9F4u;
    // 7F30D9F4: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30D9F8:
    ctx->pc = 0x7F30D9F8u;
    // 7F30D9F8: li      r4, 37
    ctx->gpr[4] = (u32)(s32)(37);

label_7F30D9FC:
    ctx->pc = 0x7F30D9FCu;
    // 7F30D9FC: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DA00:
    ctx->pc = 0x7F30DA00u;
    // 7F30DA00: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DA04:
    ctx->pc = 0x7F30DA04u;
    // 7F30DA04: bl      0x7F314F14
    {
            ctx->lr = 0x7F30DA08u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30DA08:
    ctx->pc = 0x7F30DA08u;
    ctx->downcount -= 10;
    // 7F30DA08: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30DA0C:
    ctx->pc = 0x7F30DA0Cu;
    // 7F30DA0C: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30DA10:
    ctx->pc = 0x7F30DA10u;
    // 7F30DA10: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30DA14:
    ctx->pc = 0x7F30DA14u;
    // 7F30DA14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30DA18:
    ctx->pc = 0x7F30DA18u;
    // 7F30DA18: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DA1C:
    ctx->pc = 0x7F30DA1Cu;
    // 7F30DA1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30DA20:
    ctx->pc = 0x7F30DA20u;
    // 7F30DA20: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30DA24:
    ctx->pc = 0x7F30DA24u;
    // 7F30DA24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30DA28:
    ctx->pc = 0x7F30DA28u;
    // 7F30DA28: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30DA2C:
    ctx->pc = 0x7F30DA2Cu;
    // 7F30DA2C: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30DA30u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30DA30:
    ctx->pc = 0x7F30DA30u;
    ctx->downcount -= 3;
    // 7F30DA30: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30DA34:
    ctx->pc = 0x7F30DA34u;
    // 7F30DA34: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30DA38:
    ctx->pc = 0x7F30DA38u;
    // 7F30DA38: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DA3C:
    ctx->pc = 0x7F30DA3Cu;
    ctx->downcount -= 4;
    // 7F30DA3C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DA40:
    ctx->pc = 0x7F30DA40u;
    // 7F30DA40: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DA44:
    ctx->pc = 0x7F30DA44u;
    // 7F30DA44: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30DA48:
    ctx->pc = 0x7F30DA48u;
    // 7F30DA48: bl      0x7F011698
    {
            ctx->lr = 0x7F30DA4Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DA4C:
    ctx->pc = 0x7F30DA4Cu;
    ctx->downcount -= 1;
    // 7F30DA4C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DA50:
    ctx->pc = 0x7F30DA50u;
    ctx->downcount -= 7;
    // 7F30DA50: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DA54:
    ctx->pc = 0x7F30DA54u;
    // 7F30DA54: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30DA58:
    ctx->pc = 0x7F30DA58u;
    // 7F30DA58: lwz     r4, -25932(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25932);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30DA5C:
    ctx->pc = 0x7F30DA5Cu;
    // 7F30DA5C: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30DA60:
    ctx->pc = 0x7F30DA60u;
    // 7F30DA60: andi.   r3, r4, 0xA000
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

label_7F30DA64:
    ctx->pc = 0x7F30DA64u;
    // 7F30DA64: cmpw    r3, r0
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

label_7F30DA68:
    ctx->pc = 0x7F30DA68u;
    // 7F30DA68: bc    12, 2, 0x7F30DA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DA7C;
        }
    }

label_7F30DA6C:
    ctx->pc = 0x7F30DA6Cu;
    ctx->downcount -= 1;
    // 7F30DA6C: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30DA70:
    ctx->pc = 0x7F30DA70u;
    ctx->downcount -= 2;
    // 7F30DA70: cmpwi   r3, 8192
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

label_7F30DA74:
    ctx->pc = 0x7F30DA74u;
    // 7F30DA74: bc    12, 2, 0x7F30DB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DB10;
        }
    }

label_7F30DA78:
    ctx->pc = 0x7F30DA78u;
    ctx->downcount -= 1;
    // 7F30DA78: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DA7C:
    ctx->pc = 0x7F30DA7Cu;
    ctx->downcount -= 6;
    // 7F30DA7C: lwz     r3, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DA80:
    ctx->pc = 0x7F30DA80u;
    // 7F30DA80: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30DA84:
    ctx->pc = 0x7F30DA84u;
    // 7F30DA84: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DA88:
    ctx->pc = 0x7F30DA88u;
    // 7F30DA88: lwz     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DA8C:
    ctx->pc = 0x7F30DA8Cu;
    // 7F30DA8C: cmpwi   r0, 0
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

label_7F30DA90:
    ctx->pc = 0x7F30DA90u;
    // 7F30DA90: bc    4, 2, 0x7F30DAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DAC4;
        }
    }

label_7F30DA94:
    ctx->pc = 0x7F30DA94u;
    ctx->downcount -= 3;
    // 7F30DA94: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DA98:
    ctx->pc = 0x7F30DA98u;
    // 7F30DA98: cmpwi   r0, 2
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

label_7F30DA9C:
    ctx->pc = 0x7F30DA9Cu;
    // 7F30DA9C: bc    4, 2, 0x7F30DAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DAC4;
        }
    }

label_7F30DAA0:
    ctx->pc = 0x7F30DAA0u;
    ctx->downcount -= 6;
    // 7F30DAA0: lis     r3, 181
    ctx->gpr[3] = ((u32)(s32)(181) << 16);

label_7F30DAA4:
    ctx->pc = 0x7F30DAA4u;
    // 7F30DAA4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DAA8:
    ctx->pc = 0x7F30DAA8u;
    // 7F30DAA8: addi    r3, r3, -10463
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10463);

label_7F30DAAC:
    ctx->pc = 0x7F30DAACu;
    // 7F30DAAC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DAB0:
    ctx->pc = 0x7F30DAB0u;
    // 7F30DAB0: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DAB4:
    ctx->pc = 0x7F30DAB4u;
    // 7F30DAB4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DAB8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DAB8:
    ctx->pc = 0x7F30DAB8u;
    ctx->downcount -= 3;
    // 7F30DAB8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30DABC:
    ctx->pc = 0x7F30DABCu;
    // 7F30DABC: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DAC0:
    ctx->pc = 0x7F30DAC0u;
    // 7F30DAC0: b       0x7F30DAFC
    {
            goto label_7F30DAFC;
    }

label_7F30DAC4:
    ctx->pc = 0x7F30DAC4u;
    ctx->downcount -= 3;
    // 7F30DAC4: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DAC8:
    ctx->pc = 0x7F30DAC8u;
    // 7F30DAC8: cmpwi   r0, 0
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

label_7F30DACC:
    ctx->pc = 0x7F30DACCu;
    // 7F30DACC: bc    4, 0, 0x7F30DAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DAD8;
        }
    }

label_7F30DAD0:
    ctx->pc = 0x7F30DAD0u;
    ctx->downcount -= 2;
    // 7F30DAD0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30DAD4:
    ctx->pc = 0x7F30DAD4u;
    // 7F30DAD4: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DAD8:
    ctx->pc = 0x7F30DAD8u;
    ctx->downcount -= 9;
    // 7F30DAD8: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DADC:
    ctx->pc = 0x7F30DADCu;
    // 7F30DADC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DAE0:
    ctx->pc = 0x7F30DAE0u;
    // 7F30DAE0: addi    r3, r3, -30888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30888);

label_7F30DAE4:
    ctx->pc = 0x7F30DAE4u;
    // 7F30DAE4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DAE8:
    ctx->pc = 0x7F30DAE8u;
    // 7F30DAE8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DAEC:
    ctx->pc = 0x7F30DAECu;
    // 7F30DAEC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DAF0:
    ctx->pc = 0x7F30DAF0u;
    // 7F30DAF0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DAF4:
    ctx->pc = 0x7F30DAF4u;
    // 7F30DAF4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DAF8:
    ctx->pc = 0x7F30DAF8u;
    // 7F30DAF8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DAFCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DAFC:
    ctx->pc = 0x7F30DAFCu;
    ctx->downcount -= 4;
    // 7F30DAFC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DB00:
    ctx->pc = 0x7F30DB00u;
    // 7F30DB00: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DB04:
    ctx->pc = 0x7F30DB04u;
    // 7F30DB04: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DB08:
    ctx->pc = 0x7F30DB08u;
    // 7F30DB08: bl      0x7F011698
    {
            ctx->lr = 0x7F30DB0Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DB0C:
    ctx->pc = 0x7F30DB0Cu;
    ctx->downcount -= 1;
    // 7F30DB0C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DB10:
    ctx->pc = 0x7F30DB10u;
    ctx->downcount -= 6;
    // 7F30DB10: lwz     r3, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DB14:
    ctx->pc = 0x7F30DB14u;
    // 7F30DB14: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30DB18:
    ctx->pc = 0x7F30DB18u;
    // 7F30DB18: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DB1C:
    ctx->pc = 0x7F30DB1Cu;
    // 7F30DB1C: lwz     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DB20:
    ctx->pc = 0x7F30DB20u;
    // 7F30DB20: cmpwi   r0, 0
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

label_7F30DB24:
    ctx->pc = 0x7F30DB24u;
    // 7F30DB24: bc    4, 2, 0x7F30DB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DB58;
        }
    }

label_7F30DB28:
    ctx->pc = 0x7F30DB28u;
    ctx->downcount -= 3;
    // 7F30DB28: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DB2C:
    ctx->pc = 0x7F30DB2Cu;
    // 7F30DB2C: cmpwi   r0, 2
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

label_7F30DB30:
    ctx->pc = 0x7F30DB30u;
    // 7F30DB30: bc    4, 2, 0x7F30DB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DB58;
        }
    }

label_7F30DB34:
    ctx->pc = 0x7F30DB34u;
    ctx->downcount -= 6;
    // 7F30DB34: lis     r3, 119
    ctx->gpr[3] = ((u32)(s32)(119) << 16);

label_7F30DB38:
    ctx->pc = 0x7F30DB38u;
    // 7F30DB38: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DB3C:
    ctx->pc = 0x7F30DB3Cu;
    // 7F30DB3C: addi    r3, r3, 24953
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24953);

label_7F30DB40:
    ctx->pc = 0x7F30DB40u;
    // 7F30DB40: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DB44:
    ctx->pc = 0x7F30DB44u;
    // 7F30DB44: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DB48:
    ctx->pc = 0x7F30DB48u;
    // 7F30DB48: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DB4Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DB4C:
    ctx->pc = 0x7F30DB4Cu;
    ctx->downcount -= 3;
    // 7F30DB4C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30DB50:
    ctx->pc = 0x7F30DB50u;
    // 7F30DB50: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DB54:
    ctx->pc = 0x7F30DB54u;
    // 7F30DB54: b       0x7F30DB90
    {
            goto label_7F30DB90;
    }

label_7F30DB58:
    ctx->pc = 0x7F30DB58u;
    ctx->downcount -= 3;
    // 7F30DB58: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DB5C:
    ctx->pc = 0x7F30DB5Cu;
    // 7F30DB5C: cmpwi   r0, 3
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

label_7F30DB60:
    ctx->pc = 0x7F30DB60u;
    // 7F30DB60: bc    4, 1, 0x7F30DB6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DB6C;
        }
    }

label_7F30DB64:
    ctx->pc = 0x7F30DB64u;
    ctx->downcount -= 2;
    // 7F30DB64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30DB68:
    ctx->pc = 0x7F30DB68u;
    // 7F30DB68: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DB6C:
    ctx->pc = 0x7F30DB6Cu;
    ctx->downcount -= 9;
    // 7F30DB6C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DB70:
    ctx->pc = 0x7F30DB70u;
    // 7F30DB70: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DB74:
    ctx->pc = 0x7F30DB74u;
    // 7F30DB74: addi    r3, r3, -30872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30872);

label_7F30DB78:
    ctx->pc = 0x7F30DB78u;
    // 7F30DB78: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DB7C:
    ctx->pc = 0x7F30DB7Cu;
    // 7F30DB7C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DB80:
    ctx->pc = 0x7F30DB80u;
    // 7F30DB80: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DB84:
    ctx->pc = 0x7F30DB84u;
    // 7F30DB84: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DB88:
    ctx->pc = 0x7F30DB88u;
    // 7F30DB88: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DB8C:
    ctx->pc = 0x7F30DB8Cu;
    // 7F30DB8C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DB90u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DB90:
    ctx->pc = 0x7F30DB90u;
    ctx->downcount -= 4;
    // 7F30DB90: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DB94:
    ctx->pc = 0x7F30DB94u;
    // 7F30DB94: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DB98:
    ctx->pc = 0x7F30DB98u;
    // 7F30DB98: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DB9C:
    ctx->pc = 0x7F30DB9Cu;
    // 7F30DB9C: bl      0x7F011698
    {
            ctx->lr = 0x7F30DBA0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DBA0:
    ctx->pc = 0x7F30DBA0u;
    ctx->downcount -= 1;
    // 7F30DBA0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DBA4:
    ctx->pc = 0x7F30DBA4u;
    ctx->downcount -= 11;
    // 7F30DBA4: lwz     r6, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30DBA8:
    ctx->pc = 0x7F30DBA8u;
    // 7F30DBA8: addis   r5, r30, 3
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30DBAC:
    ctx->pc = 0x7F30DBACu;
    // 7F30DBAC: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30DBB0:
    ctx->pc = 0x7F30DBB0u;
    // 7F30DBB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30DBB4:
    ctx->pc = 0x7F30DBB4u;
    // 7F30DBB4: add   r5, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F30DBB8:
    ctx->pc = 0x7F30DBB8u;
    // 7F30DBB8: addis   r28, r6, 3
    ctx->gpr[28] = ctx->gpr[6] + ((u32)(s32)(3) << 16);

label_7F30DBBC:
    ctx->pc = 0x7F30DBBCu;
    // 7F30DBBC: lbz     r29, -26684(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26684);
        ctx->gpr[29] = mem_read8(ctx, ea);
    }

label_7F30DBC0:
    ctx->pc = 0x7F30DBC0u;
    // 7F30DBC0: addi    r28, r28, -26684
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-26684);

label_7F30DBC4:
    ctx->pc = 0x7F30DBC4u;
    // 7F30DBC4: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DBC8:
    ctx->pc = 0x7F30DBC8u;
    // 7F30DBC8: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DBCC:
    ctx->pc = 0x7F30DBCCu;
    // 7F30DBCC: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30DBD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30DBD0:
    ctx->pc = 0x7F30DBD0u;
    ctx->downcount -= 2;
    // 7F30DBD0: cmpwi   r3, 0
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

label_7F30DBD4:
    ctx->pc = 0x7F30DBD4u;
    // 7F30DBD4: bc    12, 2, 0x7F30DC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC08;
        }
    }

label_7F30DBD8:
    ctx->pc = 0x7F30DBD8u;
    ctx->downcount -= 9;
    // 7F30DBD8: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DBDC:
    ctx->pc = 0x7F30DBDCu;
    // 7F30DBDC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DBE0:
    ctx->pc = 0x7F30DBE0u;
    // 7F30DBE0: addi    r3, r3, -30768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30768);

label_7F30DBE4:
    ctx->pc = 0x7F30DBE4u;
    // 7F30DBE4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DBE8:
    ctx->pc = 0x7F30DBE8u;
    // 7F30DBE8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DBEC:
    ctx->pc = 0x7F30DBECu;
    // 7F30DBEC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DBF0:
    ctx->pc = 0x7F30DBF0u;
    // 7F30DBF0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DBF4:
    ctx->pc = 0x7F30DBF4u;
    // 7F30DBF4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DBF8:
    ctx->pc = 0x7F30DBF8u;
    // 7F30DBF8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DBFCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DBFC:
    ctx->pc = 0x7F30DBFCu;
    ctx->downcount -= 3;
    // 7F30DBFC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30DC00:
    ctx->pc = 0x7F30DC00u;
    // 7F30DC00: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DC04:
    ctx->pc = 0x7F30DC04u;
    // 7F30DC04: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DC08:
    ctx->pc = 0x7F30DC08u;
    ctx->downcount -= 4;
    // 7F30DC08: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DC0C:
    ctx->pc = 0x7F30DC0Cu;
    // 7F30DC0C: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DC10:
    ctx->pc = 0x7F30DC10u;
    // 7F30DC10: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DC14:
    ctx->pc = 0x7F30DC14u;
    // 7F30DC14: bc    12, 2, 0x7F30DC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC28;
        }
    }

label_7F30DC18:
    ctx->pc = 0x7F30DC18u;
    ctx->downcount -= 1;
    // 7F30DC18: bc    4, 0, 0x7F30DC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC4C;
        }
    }

label_7F30DC1C:
    ctx->pc = 0x7F30DC1Cu;
    ctx->downcount -= 2;
    // 7F30DC1C: cmpwi   r0, 32
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

label_7F30DC20:
    ctx->pc = 0x7F30DC20u;
    // 7F30DC20: bc    12, 2, 0x7F30DC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC3C;
        }
    }

label_7F30DC24:
    ctx->pc = 0x7F30DC24u;
    ctx->downcount -= 1;
    // 7F30DC24: b       0x7F30DC4C
    {
            goto label_7F30DC4C;
    }

label_7F30DC28:
    ctx->pc = 0x7F30DC28u;
    ctx->downcount -= 4;
    // 7F30DC28: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DC2C:
    ctx->pc = 0x7F30DC2Cu;
    // 7F30DC2C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DC30:
    ctx->pc = 0x7F30DC30u;
    // 7F30DC30: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30DC34:
    ctx->pc = 0x7F30DC34u;
    // 7F30DC34: bl      0x7F011698
    {
            ctx->lr = 0x7F30DC38u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DC38:
    ctx->pc = 0x7F30DC38u;
    ctx->downcount -= 1;
    // 7F30DC38: b       0x7F30DC4C
    {
            goto label_7F30DC4C;
    }

label_7F30DC3C:
    ctx->pc = 0x7F30DC3Cu;
    ctx->downcount -= 4;
    // 7F30DC3C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DC40:
    ctx->pc = 0x7F30DC40u;
    // 7F30DC40: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DC44:
    ctx->pc = 0x7F30DC44u;
    // 7F30DC44: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30DC48:
    ctx->pc = 0x7F30DC48u;
    // 7F30DC48: bl      0x7F011698
    {
            ctx->lr = 0x7F30DC4Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DC4C:
    ctx->pc = 0x7F30DC4Cu;
    ctx->downcount -= 4;
    // 7F30DC4C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DC50:
    ctx->pc = 0x7F30DC50u;
    // 7F30DC50: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DC54:
    ctx->pc = 0x7F30DC54u;
    // 7F30DC54: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DC58:
    ctx->pc = 0x7F30DC58u;
    // 7F30DC58: bc    12, 2, 0x7F30DC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC6C;
        }
    }

label_7F30DC5C:
    ctx->pc = 0x7F30DC5Cu;
    ctx->downcount -= 1;
    // 7F30DC5C: bc    4, 0, 0x7F30DCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DCA4;
        }
    }

label_7F30DC60:
    ctx->pc = 0x7F30DC60u;
    ctx->downcount -= 2;
    // 7F30DC60: cmpwi   r0, 32
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

label_7F30DC64:
    ctx->pc = 0x7F30DC64u;
    // 7F30DC64: bc    12, 2, 0x7F30DC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DC6C;
        }
    }

label_7F30DC68:
    ctx->pc = 0x7F30DC68u;
    ctx->downcount -= 1;
    // 7F30DC68: b       0x7F30DCA4
    {
            goto label_7F30DCA4;
    }

label_7F30DC6C:
    ctx->pc = 0x7F30DC6Cu;
    ctx->downcount -= 9;
    // 7F30DC6C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DC70:
    ctx->pc = 0x7F30DC70u;
    // 7F30DC70: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DC74:
    ctx->pc = 0x7F30DC74u;
    // 7F30DC74: addi    r3, r3, -30768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30768);

label_7F30DC78:
    ctx->pc = 0x7F30DC78u;
    // 7F30DC78: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DC7C:
    ctx->pc = 0x7F30DC7Cu;
    // 7F30DC7C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DC80:
    ctx->pc = 0x7F30DC80u;
    // 7F30DC80: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DC84:
    ctx->pc = 0x7F30DC84u;
    // 7F30DC84: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DC88:
    ctx->pc = 0x7F30DC88u;
    // 7F30DC88: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DC8C:
    ctx->pc = 0x7F30DC8Cu;
    // 7F30DC8C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DC90u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DC90:
    ctx->pc = 0x7F30DC90u;
    ctx->downcount -= 5;
    // 7F30DC90: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F30DC94:
    ctx->pc = 0x7F30DC94u;
    // 7F30DC94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30DC98:
    ctx->pc = 0x7F30DC98u;
    // 7F30DC98: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30DC9C:
    ctx->pc = 0x7F30DC9Cu;
    // 7F30DC9C: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DCA0:
    ctx->pc = 0x7F30DCA0u;
    // 7F30DCA0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DCA4:
    ctx->pc = 0x7F30DCA4u;
    ctx->downcount -= 5;
    // 7F30DCA4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DCA8:
    ctx->pc = 0x7F30DCA8u;
    // 7F30DCA8: lwz     r0, -25932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DCAC:
    ctx->pc = 0x7F30DCACu;
    // 7F30DCAC: rlwinm r4, r0, 0, 16, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000F000u;
    }

label_7F30DCB0:
    ctx->pc = 0x7F30DCB0u;
    // 7F30DCB0: cmpwi   r4, 16384
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DCB4:
    ctx->pc = 0x7F30DCB4u;
    // 7F30DCB4: bc    12, 2, 0x7F30DE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE00;
        }
    }

label_7F30DCB8:
    ctx->pc = 0x7F30DCB8u;
    ctx->downcount -= 1;
    // 7F30DCB8: bc    4, 0, 0x7F30DCD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DCD4;
        }
    }

label_7F30DCBC:
    ctx->pc = 0x7F30DCBCu;
    ctx->downcount -= 2;
    // 7F30DCBC: cmpwi   r4, 8192
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

label_7F30DCC0:
    ctx->pc = 0x7F30DCC0u;
    // 7F30DCC0: bc    12, 2, 0x7F30DD34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DD34;
        }
    }

label_7F30DCC4:
    ctx->pc = 0x7F30DCC4u;
    ctx->downcount -= 1;
    // 7F30DCC4: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30DCC8:
    ctx->pc = 0x7F30DCC8u;
    ctx->downcount -= 2;
    // 7F30DCC8: cmpwi   r4, 4096
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DCCC:
    ctx->pc = 0x7F30DCCCu;
    // 7F30DCCC: bc    12, 2, 0x7F30DD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DD80;
        }
    }

label_7F30DCD0:
    ctx->pc = 0x7F30DCD0u;
    ctx->downcount -= 1;
    // 7F30DCD0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DCD4:
    ctx->pc = 0x7F30DCD4u;
    ctx->downcount -= 4;
    // 7F30DCD4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30DCD8:
    ctx->pc = 0x7F30DCD8u;
    // 7F30DCD8: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30DCDC:
    ctx->pc = 0x7F30DCDCu;
    // 7F30DCDC: cmpw    r4, r0
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

label_7F30DCE0:
    ctx->pc = 0x7F30DCE0u;
    // 7F30DCE0: bc    12, 2, 0x7F30DCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DCE8;
        }
    }

label_7F30DCE4:
    ctx->pc = 0x7F30DCE4u;
    ctx->downcount -= 1;
    // 7F30DCE4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DCE8:
    ctx->pc = 0x7F30DCE8u;
    ctx->downcount -= 3;
    // 7F30DCE8: lwz     r3, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DCEC:
    ctx->pc = 0x7F30DCECu;
    // 7F30DCEC: cmpwi   r3, 0
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

label_7F30DCF0:
    ctx->pc = 0x7F30DCF0u;
    // 7F30DCF0: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30DCF4:
    ctx->pc = 0x7F30DCF4u;
    ctx->downcount -= 11;
    // 7F30DCF4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30DCF8:
    ctx->pc = 0x7F30DCF8u;
    // 7F30DCF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DCFC:
    ctx->pc = 0x7F30DCFCu;
    // 7F30DCFC: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DD00:
    ctx->pc = 0x7F30DD00u;
    // 7F30DD00: addi    r3, r3, -30856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30856);

label_7F30DD04:
    ctx->pc = 0x7F30DD04u;
    // 7F30DD04: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DD08:
    ctx->pc = 0x7F30DD08u;
    // 7F30DD08: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DD0C:
    ctx->pc = 0x7F30DD0Cu;
    // 7F30DD0C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DD10:
    ctx->pc = 0x7F30DD10u;
    // 7F30DD10: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DD14:
    ctx->pc = 0x7F30DD14u;
    // 7F30DD14: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DD18:
    ctx->pc = 0x7F30DD18u;
    // 7F30DD18: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DD1C:
    ctx->pc = 0x7F30DD1Cu;
    // 7F30DD1C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DD20u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DD20:
    ctx->pc = 0x7F30DD20u;
    ctx->downcount -= 4;
    // 7F30DD20: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DD24:
    ctx->pc = 0x7F30DD24u;
    // 7F30DD24: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DD28:
    ctx->pc = 0x7F30DD28u;
    // 7F30DD28: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DD2C:
    ctx->pc = 0x7F30DD2Cu;
    // 7F30DD2C: bl      0x7F011698
    {
            ctx->lr = 0x7F30DD30u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DD30:
    ctx->pc = 0x7F30DD30u;
    ctx->downcount -= 1;
    // 7F30DD30: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DD34:
    ctx->pc = 0x7F30DD34u;
    ctx->downcount -= 3;
    // 7F30DD34: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DD38:
    ctx->pc = 0x7F30DD38u;
    // 7F30DD38: cmplwi  r0, 0x0008
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

label_7F30DD3C:
    ctx->pc = 0x7F30DD3Cu;
    // 7F30DD3C: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30DD40:
    ctx->pc = 0x7F30DD40u;
    ctx->downcount -= 8;
    // 7F30DD40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30DD44:
    ctx->pc = 0x7F30DD44u;
    // 7F30DD44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30DD48:
    ctx->pc = 0x7F30DD48u;
    // 7F30DD48: addi    r3, r3, -30812
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30812);

label_7F30DD4C:
    ctx->pc = 0x7F30DD4Cu;
    // 7F30DD4C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DD50:
    ctx->pc = 0x7F30DD50u;
    // 7F30DD50: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30DD54:
    ctx->pc = 0x7F30DD54u;
    // 7F30DD54: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DD58:
    ctx->pc = 0x7F30DD58u;
    // 7F30DD58: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DD5C:
    ctx->pc = 0x7F30DD5Cu;
    // 7F30DD5C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DD60u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DD60:
    ctx->pc = 0x7F30DD60u;
    ctx->downcount -= 7;
    // 7F30DD60: lwz     r6, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30DD64:
    ctx->pc = 0x7F30DD64u;
    // 7F30DD64: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DD68:
    ctx->pc = 0x7F30DD68u;
    // 7F30DD68: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DD6C:
    ctx->pc = 0x7F30DD6Cu;
    // 7F30DD6C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DD70:
    ctx->pc = 0x7F30DD70u;
    // 7F30DD70: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F30DD74:
    ctx->pc = 0x7F30DD74u;
    // 7F30DD74: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DD78:
    ctx->pc = 0x7F30DD78u;
    // 7F30DD78: bl      0x7F011698
    {
            ctx->lr = 0x7F30DD7Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DD7C:
    ctx->pc = 0x7F30DD7Cu;
    ctx->downcount -= 1;
    // 7F30DD7C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DD80:
    ctx->pc = 0x7F30DD80u;
    ctx->downcount -= 3;
    // 7F30DD80: extsb r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[29];
    }

label_7F30DD84:
    ctx->pc = 0x7F30DD84u;
    // 7F30DD84: cmpwi   r0, 57
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(57);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DD88:
    ctx->pc = 0x7F30DD88u;
    // 7F30DD88: bc    12, 2, 0x7F30DDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDCC;
        }
    }

label_7F30DD8C:
    ctx->pc = 0x7F30DD8Cu;
    ctx->downcount -= 1;
    // 7F30DD8C: bc    4, 0, 0x7F30DDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDA8;
        }
    }

label_7F30DD90:
    ctx->pc = 0x7F30DD90u;
    ctx->downcount -= 2;
    // 7F30DD90: cmpwi   r0, 32
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

label_7F30DD94:
    ctx->pc = 0x7F30DD94u;
    // 7F30DD94: bc    12, 2, 0x7F30DDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDB4;
        }
    }

label_7F30DD98:
    ctx->pc = 0x7F30DD98u;
    ctx->downcount -= 1;
    // 7F30DD98: bc    4, 0, 0x7F30DDD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDD8;
        }
    }

label_7F30DD9C:
    ctx->pc = 0x7F30DD9Cu;
    ctx->downcount -= 2;
    // 7F30DD9C: cmpwi   r0, 0
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

label_7F30DDA0:
    ctx->pc = 0x7F30DDA0u;
    // 7F30DDA0: bc    12, 2, 0x7F30DDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDB4;
        }
    }

label_7F30DDA4:
    ctx->pc = 0x7F30DDA4u;
    ctx->downcount -= 1;
    // 7F30DDA4: b       0x7F30DDD8
    {
            goto label_7F30DDD8;
    }

label_7F30DDA8:
    ctx->pc = 0x7F30DDA8u;
    ctx->downcount -= 2;
    // 7F30DDA8: cmpwi   r0, 90
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

label_7F30DDAC:
    ctx->pc = 0x7F30DDACu;
    // 7F30DDAC: bc    12, 2, 0x7F30DDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DDC0;
        }
    }

label_7F30DDB0:
    ctx->pc = 0x7F30DDB0u;
    ctx->downcount -= 1;
    // 7F30DDB0: b       0x7F30DDD8
    {
            goto label_7F30DDD8;
    }

label_7F30DDB4:
    ctx->pc = 0x7F30DDB4u;
    ctx->downcount -= 3;
    // 7F30DDB4: li      r0, 65
    ctx->gpr[0] = (u32)(s32)(65);

label_7F30DDB8:
    ctx->pc = 0x7F30DDB8u;
    // 7F30DDB8: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DDBC:
    ctx->pc = 0x7F30DDBCu;
    // 7F30DDBC: b       0x7F30DDE4
    {
            goto label_7F30DDE4;
    }

label_7F30DDC0:
    ctx->pc = 0x7F30DDC0u;
    ctx->downcount -= 3;
    // 7F30DDC0: li      r0, 48
    ctx->gpr[0] = (u32)(s32)(48);

label_7F30DDC4:
    ctx->pc = 0x7F30DDC4u;
    // 7F30DDC4: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DDC8:
    ctx->pc = 0x7F30DDC8u;
    // 7F30DDC8: b       0x7F30DDE4
    {
            goto label_7F30DDE4;
    }

label_7F30DDCC:
    ctx->pc = 0x7F30DDCCu;
    ctx->downcount -= 3;
    // 7F30DDCC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F30DDD0:
    ctx->pc = 0x7F30DDD0u;
    // 7F30DDD0: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DDD4:
    ctx->pc = 0x7F30DDD4u;
    // 7F30DDD4: b       0x7F30DDE4
    {
            goto label_7F30DDE4;
    }

label_7F30DDD8:
    ctx->pc = 0x7F30DDD8u;
    ctx->downcount -= 3;
    // 7F30DDD8: lbzx    r3, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30DDDC:
    ctx->pc = 0x7F30DDDCu;
    // 7F30DDDC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30DDE0:
    ctx->pc = 0x7F30DDE0u;
    // 7F30DDE0: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DDE4:
    ctx->pc = 0x7F30DDE4u;
    ctx->downcount -= 2;
    // 7F30DDE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30DDE8:
    ctx->pc = 0x7F30DDE8u;
    // 7F30DDE8: bl      0x7F30CA8C
    {
            ctx->lr = 0x7F30DDECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CA8Cu;
                return;
            }
            goto label_7F30CA8C;
    }

label_7F30DDEC:
    ctx->pc = 0x7F30DDECu;
    ctx->downcount -= 4;
    // 7F30DDEC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DDF0:
    ctx->pc = 0x7F30DDF0u;
    // 7F30DDF0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DDF4:
    ctx->pc = 0x7F30DDF4u;
    // 7F30DDF4: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DDF8:
    ctx->pc = 0x7F30DDF8u;
    // 7F30DDF8: bl      0x7F011698
    {
            ctx->lr = 0x7F30DDFCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DDFC:
    ctx->pc = 0x7F30DDFCu;
    ctx->downcount -= 1;
    // 7F30DDFC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DE00:
    ctx->pc = 0x7F30DE00u;
    ctx->downcount -= 3;
    // 7F30DE00: extsb r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[29];
    }

label_7F30DE04:
    ctx->pc = 0x7F30DE04u;
    // 7F30DE04: cmpwi   r0, 48
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DE08:
    ctx->pc = 0x7F30DE08u;
    // 7F30DE08: bc    12, 2, 0x7F30DE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE4C;
        }
    }

label_7F30DE0C:
    ctx->pc = 0x7F30DE0Cu;
    ctx->downcount -= 1;
    // 7F30DE0C: bc    4, 0, 0x7F30DE28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE28;
        }
    }

label_7F30DE10:
    ctx->pc = 0x7F30DE10u;
    ctx->downcount -= 2;
    // 7F30DE10: cmpwi   r0, 32
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

label_7F30DE14:
    ctx->pc = 0x7F30DE14u;
    // 7F30DE14: bc    12, 2, 0x7F30DE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE34;
        }
    }

label_7F30DE18:
    ctx->pc = 0x7F30DE18u;
    ctx->downcount -= 1;
    // 7F30DE18: bc    4, 0, 0x7F30DE58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE58;
        }
    }

label_7F30DE1C:
    ctx->pc = 0x7F30DE1Cu;
    ctx->downcount -= 2;
    // 7F30DE1C: cmpwi   r0, 0
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

label_7F30DE20:
    ctx->pc = 0x7F30DE20u;
    // 7F30DE20: bc    12, 2, 0x7F30DE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE34;
        }
    }

label_7F30DE24:
    ctx->pc = 0x7F30DE24u;
    ctx->downcount -= 1;
    // 7F30DE24: b       0x7F30DE58
    {
            goto label_7F30DE58;
    }

label_7F30DE28:
    ctx->pc = 0x7F30DE28u;
    ctx->downcount -= 2;
    // 7F30DE28: cmpwi   r0, 65
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(65);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DE2C:
    ctx->pc = 0x7F30DE2Cu;
    // 7F30DE2C: bc    12, 2, 0x7F30DE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DE40;
        }
    }

label_7F30DE30:
    ctx->pc = 0x7F30DE30u;
    ctx->downcount -= 1;
    // 7F30DE30: b       0x7F30DE58
    {
            goto label_7F30DE58;
    }

label_7F30DE34:
    ctx->pc = 0x7F30DE34u;
    ctx->downcount -= 3;
    // 7F30DE34: li      r0, 57
    ctx->gpr[0] = (u32)(s32)(57);

label_7F30DE38:
    ctx->pc = 0x7F30DE38u;
    // 7F30DE38: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DE3C:
    ctx->pc = 0x7F30DE3Cu;
    // 7F30DE3C: b       0x7F30DE64
    {
            goto label_7F30DE64;
    }

label_7F30DE40:
    ctx->pc = 0x7F30DE40u;
    ctx->downcount -= 3;
    // 7F30DE40: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F30DE44:
    ctx->pc = 0x7F30DE44u;
    // 7F30DE44: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DE48:
    ctx->pc = 0x7F30DE48u;
    // 7F30DE48: b       0x7F30DE64
    {
            goto label_7F30DE64;
    }

label_7F30DE4C:
    ctx->pc = 0x7F30DE4Cu;
    ctx->downcount -= 3;
    // 7F30DE4C: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F30DE50:
    ctx->pc = 0x7F30DE50u;
    // 7F30DE50: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DE54:
    ctx->pc = 0x7F30DE54u;
    // 7F30DE54: b       0x7F30DE64
    {
            goto label_7F30DE64;
    }

label_7F30DE58:
    ctx->pc = 0x7F30DE58u;
    ctx->downcount -= 3;
    // 7F30DE58: lbzx    r3, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30DE5C:
    ctx->pc = 0x7F30DE5Cu;
    // 7F30DE5C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30DE60:
    ctx->pc = 0x7F30DE60u;
    // 7F30DE60: stbx    r0, r30, r28
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[28];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DE64:
    ctx->pc = 0x7F30DE64u;
    ctx->downcount -= 2;
    // 7F30DE64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30DE68:
    ctx->pc = 0x7F30DE68u;
    // 7F30DE68: bl      0x7F30CA8C
    {
            ctx->lr = 0x7F30DE6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CA8Cu;
                return;
            }
            goto label_7F30CA8C;
    }

label_7F30DE6C:
    ctx->pc = 0x7F30DE6Cu;
    ctx->downcount -= 4;
    // 7F30DE6C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DE70:
    ctx->pc = 0x7F30DE70u;
    // 7F30DE70: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DE74:
    ctx->pc = 0x7F30DE74u;
    // 7F30DE74: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DE78:
    ctx->pc = 0x7F30DE78u;
    // 7F30DE78: bl      0x7F011698
    {
            ctx->lr = 0x7F30DE7Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DE7C:
    ctx->pc = 0x7F30DE7Cu;
    ctx->downcount -= 1;
    // 7F30DE7C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DE80:
    ctx->pc = 0x7F30DE80u;
    ctx->downcount -= 3;
    // 7F30DE80: addis   r28, r30, 3
    ctx->gpr[28] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30DE84:
    ctx->pc = 0x7F30DE84u;
    // 7F30DE84: addi    r28, r28, -26694
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-26694);

label_7F30DE88:
    ctx->pc = 0x7F30DE88u;
    // 7F30DE88: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30DE8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30DE8C:
    ctx->pc = 0x7F30DE8Cu;
    ctx->downcount -= 2;
    // 7F30DE8C: cmpwi   r3, 0
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

label_7F30DE90:
    ctx->pc = 0x7F30DE90u;
    // 7F30DE90: bc    12, 2, 0x7F30DEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DEB8;
        }
    }

label_7F30DE94:
    ctx->pc = 0x7F30DE94u;
    ctx->downcount -= 6;
    // 7F30DE94: lis     r3, 92
    ctx->gpr[3] = ((u32)(s32)(92) << 16);

label_7F30DE98:
    ctx->pc = 0x7F30DE98u;
    // 7F30DE98: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DE9C:
    ctx->pc = 0x7F30DE9Cu;
    // 7F30DE9C: addi    r3, r3, -3600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3600);

label_7F30DEA0:
    ctx->pc = 0x7F30DEA0u;
    // 7F30DEA0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DEA4:
    ctx->pc = 0x7F30DEA4u;
    // 7F30DEA4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DEA8:
    ctx->pc = 0x7F30DEA8u;
    // 7F30DEA8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DEACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DEAC:
    ctx->pc = 0x7F30DEACu;
    ctx->downcount -= 3;
    // 7F30DEAC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30DEB0:
    ctx->pc = 0x7F30DEB0u;
    // 7F30DEB0: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DEB4:
    ctx->pc = 0x7F30DEB4u;
    // 7F30DEB4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DEB8:
    ctx->pc = 0x7F30DEB8u;
    ctx->downcount -= 4;
    // 7F30DEB8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DEBC:
    ctx->pc = 0x7F30DEBCu;
    // 7F30DEBC: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DEC0:
    ctx->pc = 0x7F30DEC0u;
    // 7F30DEC0: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DEC4:
    ctx->pc = 0x7F30DEC4u;
    // 7F30DEC4: bc    12, 2, 0x7F30DED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DED8;
        }
    }

label_7F30DEC8:
    ctx->pc = 0x7F30DEC8u;
    ctx->downcount -= 1;
    // 7F30DEC8: bc    4, 0, 0x7F30DF50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DF50;
        }
    }

label_7F30DECC:
    ctx->pc = 0x7F30DECCu;
    ctx->downcount -= 2;
    // 7F30DECC: cmpwi   r0, 32
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

label_7F30DED0:
    ctx->pc = 0x7F30DED0u;
    // 7F30DED0: bc    12, 2, 0x7F30DF14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DF14;
        }
    }

label_7F30DED4:
    ctx->pc = 0x7F30DED4u;
    ctx->downcount -= 1;
    // 7F30DED4: b       0x7F30DF50
    {
            goto label_7F30DF50;
    }

label_7F30DED8:
    ctx->pc = 0x7F30DED8u;
    ctx->downcount -= 6;
    // 7F30DED8: lis     r3, 92
    ctx->gpr[3] = ((u32)(s32)(92) << 16);

label_7F30DEDC:
    ctx->pc = 0x7F30DEDCu;
    // 7F30DEDC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DEE0:
    ctx->pc = 0x7F30DEE0u;
    // 7F30DEE0: addi    r3, r3, -3600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3600);

label_7F30DEE4:
    ctx->pc = 0x7F30DEE4u;
    // 7F30DEE4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DEE8:
    ctx->pc = 0x7F30DEE8u;
    // 7F30DEE8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DEEC:
    ctx->pc = 0x7F30DEECu;
    // 7F30DEEC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DEF0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DEF0:
    ctx->pc = 0x7F30DEF0u;
    ctx->downcount -= 8;
    // 7F30DEF0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F30DEF4:
    ctx->pc = 0x7F30DEF4u;
    // 7F30DEF4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30DEF8:
    ctx->pc = 0x7F30DEF8u;
    // 7F30DEF8: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30DEFC:
    ctx->pc = 0x7F30DEFCu;
    // 7F30DEFC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DF00:
    ctx->pc = 0x7F30DF00u;
    // 7F30DF00: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DF04:
    ctx->pc = 0x7F30DF04u;
    // 7F30DF04: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30DF08:
    ctx->pc = 0x7F30DF08u;
    // 7F30DF08: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DF0C:
    ctx->pc = 0x7F30DF0Cu;
    // 7F30DF0C: bl      0x7F011698
    {
            ctx->lr = 0x7F30DF10u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DF10:
    ctx->pc = 0x7F30DF10u;
    ctx->downcount -= 1;
    // 7F30DF10: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DF14:
    ctx->pc = 0x7F30DF14u;
    ctx->downcount -= 6;
    // 7F30DF14: lis     r3, 92
    ctx->gpr[3] = ((u32)(s32)(92) << 16);

label_7F30DF18:
    ctx->pc = 0x7F30DF18u;
    // 7F30DF18: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30DF1C:
    ctx->pc = 0x7F30DF1Cu;
    // 7F30DF1C: addi    r3, r3, -3600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3600);

label_7F30DF20:
    ctx->pc = 0x7F30DF20u;
    // 7F30DF20: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30DF24:
    ctx->pc = 0x7F30DF24u;
    // 7F30DF24: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30DF28:
    ctx->pc = 0x7F30DF28u;
    // 7F30DF28: bl      0x7F31435C
    {
            ctx->lr = 0x7F30DF2Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30DF2C:
    ctx->pc = 0x7F30DF2Cu;
    ctx->downcount -= 8;
    // 7F30DF2C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F30DF30:
    ctx->pc = 0x7F30DF30u;
    // 7F30DF30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30DF34:
    ctx->pc = 0x7F30DF34u;
    // 7F30DF34: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30DF38:
    ctx->pc = 0x7F30DF38u;
    // 7F30DF38: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DF3C:
    ctx->pc = 0x7F30DF3Cu;
    // 7F30DF3C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DF40:
    ctx->pc = 0x7F30DF40u;
    // 7F30DF40: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30DF44:
    ctx->pc = 0x7F30DF44u;
    // 7F30DF44: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30DF48:
    ctx->pc = 0x7F30DF48u;
    // 7F30DF48: bl      0x7F011698
    {
            ctx->lr = 0x7F30DF4Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DF4C:
    ctx->pc = 0x7F30DF4Cu;
    ctx->downcount -= 1;
    // 7F30DF4C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DF50:
    ctx->pc = 0x7F30DF50u;
    ctx->downcount -= 5;
    // 7F30DF50: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30DF54:
    ctx->pc = 0x7F30DF54u;
    // 7F30DF54: lwz     r0, -25932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30DF58:
    ctx->pc = 0x7F30DF58u;
    // 7F30DF58: rlwinm r4, r0, 0, 16, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000F000u;
    }

label_7F30DF5C:
    ctx->pc = 0x7F30DF5Cu;
    // 7F30DF5C: cmpwi   r4, 16384
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DF60:
    ctx->pc = 0x7F30DF60u;
    // 7F30DF60: bc    12, 2, 0x7F30E054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E054;
        }
    }

label_7F30DF64:
    ctx->pc = 0x7F30DF64u;
    ctx->downcount -= 1;
    // 7F30DF64: bc    4, 0, 0x7F30DF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DF80;
        }
    }

label_7F30DF68:
    ctx->pc = 0x7F30DF68u;
    ctx->downcount -= 2;
    // 7F30DF68: cmpwi   r4, 8192
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

label_7F30DF6C:
    ctx->pc = 0x7F30DF6Cu;
    // 7F30DF6C: bc    12, 2, 0x7F30DFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DFC8;
        }
    }

label_7F30DF70:
    ctx->pc = 0x7F30DF70u;
    ctx->downcount -= 1;
    // 7F30DF70: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30DF74:
    ctx->pc = 0x7F30DF74u;
    ctx->downcount -= 2;
    // 7F30DF74: cmpwi   r4, 4096
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DF78:
    ctx->pc = 0x7F30DF78u;
    // 7F30DF78: bc    12, 2, 0x7F30DFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DFFC;
        }
    }

label_7F30DF7C:
    ctx->pc = 0x7F30DF7Cu;
    ctx->downcount -= 1;
    // 7F30DF7C: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DF80:
    ctx->pc = 0x7F30DF80u;
    ctx->downcount -= 4;
    // 7F30DF80: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30DF84:
    ctx->pc = 0x7F30DF84u;
    // 7F30DF84: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30DF88:
    ctx->pc = 0x7F30DF88u;
    // 7F30DF88: cmpw    r4, r0
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

label_7F30DF8C:
    ctx->pc = 0x7F30DF8Cu;
    // 7F30DF8C: bc    12, 2, 0x7F30DF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DF94;
        }
    }

label_7F30DF90:
    ctx->pc = 0x7F30DF90u;
    ctx->downcount -= 1;
    // 7F30DF90: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DF94:
    ctx->pc = 0x7F30DF94u;
    ctx->downcount -= 4;
    // 7F30DF94: lwz     r4, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30DF98:
    ctx->pc = 0x7F30DF98u;
    // 7F30DF98: lbzx    r3, r28, r4
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[4];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30DF9C:
    ctx->pc = 0x7F30DF9Cu;
    // 7F30DF9C: cmplwi  r3, 0x0000
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

label_7F30DFA0:
    ctx->pc = 0x7F30DFA0u;
    // 7F30DFA0: bc    12, 2, 0x7F30DFB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30DFB4;
        }
    }

label_7F30DFA4:
    ctx->pc = 0x7F30DFA4u;
    ctx->downcount -= 4;
    // 7F30DFA4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30DFA8:
    ctx->pc = 0x7F30DFA8u;
    // 7F30DFA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30DFAC:
    ctx->pc = 0x7F30DFACu;
    // 7F30DFAC: stbx    r0, r28, r4
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[4];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DFB0:
    ctx->pc = 0x7F30DFB0u;
    // 7F30DFB0: bl      0x7F30CC08
    {
            ctx->lr = 0x7F30DFB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CC08u;
                return;
            }
            goto label_7F30CC08;
    }

label_7F30DFB4:
    ctx->pc = 0x7F30DFB4u;
    ctx->downcount -= 4;
    // 7F30DFB4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DFB8:
    ctx->pc = 0x7F30DFB8u;
    // 7F30DFB8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DFBC:
    ctx->pc = 0x7F30DFBCu;
    // 7F30DFBC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DFC0:
    ctx->pc = 0x7F30DFC0u;
    // 7F30DFC0: bl      0x7F011698
    {
            ctx->lr = 0x7F30DFC4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DFC4:
    ctx->pc = 0x7F30DFC4u;
    ctx->downcount -= 1;
    // 7F30DFC4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DFC8:
    ctx->pc = 0x7F30DFC8u;
    ctx->downcount -= 4;
    // 7F30DFC8: lwz     r4, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30DFCC:
    ctx->pc = 0x7F30DFCCu;
    // 7F30DFCC: lbzx    r3, r28, r4
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[4];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F30DFD0:
    ctx->pc = 0x7F30DFD0u;
    // 7F30DFD0: cmplwi  r3, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30DFD4:
    ctx->pc = 0x7F30DFD4u;
    // 7F30DFD4: bc    4, 0, 0x7F30DFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30DFE8;
        }
    }

label_7F30DFD8:
    ctx->pc = 0x7F30DFD8u;
    ctx->downcount -= 4;
    // 7F30DFD8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30DFDC:
    ctx->pc = 0x7F30DFDCu;
    // 7F30DFDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30DFE0:
    ctx->pc = 0x7F30DFE0u;
    // 7F30DFE0: stbx    r0, r28, r4
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[4];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30DFE4:
    ctx->pc = 0x7F30DFE4u;
    // 7F30DFE4: bl      0x7F30CC08
    {
            ctx->lr = 0x7F30DFE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CC08u;
                return;
            }
            goto label_7F30CC08;
    }

label_7F30DFE8:
    ctx->pc = 0x7F30DFE8u;
    ctx->downcount -= 4;
    // 7F30DFE8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30DFEC:
    ctx->pc = 0x7F30DFECu;
    // 7F30DFEC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30DFF0:
    ctx->pc = 0x7F30DFF0u;
    // 7F30DFF0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30DFF4:
    ctx->pc = 0x7F30DFF4u;
    // 7F30DFF4: bl      0x7F011698
    {
            ctx->lr = 0x7F30DFF8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30DFF8:
    ctx->pc = 0x7F30DFF8u;
    ctx->downcount -= 1;
    // 7F30DFF8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30DFFC:
    ctx->pc = 0x7F30DFFCu;
    ctx->downcount -= 9;
    // 7F30DFFC: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E000:
    ctx->pc = 0x7F30E000u;
    // 7F30E000: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E004:
    ctx->pc = 0x7F30E004u;
    // 7F30E004: addi    r3, r3, -30720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30720);

label_7F30E008:
    ctx->pc = 0x7F30E008u;
    // 7F30E008: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E00C:
    ctx->pc = 0x7F30E00Cu;
    // 7F30E00C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E010:
    ctx->pc = 0x7F30E010u;
    // 7F30E010: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E014:
    ctx->pc = 0x7F30E014u;
    // 7F30E014: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E018:
    ctx->pc = 0x7F30E018u;
    // 7F30E018: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E01C:
    ctx->pc = 0x7F30E01Cu;
    // 7F30E01C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E020u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E020:
    ctx->pc = 0x7F30E020u;
    ctx->downcount -= 6;
    // 7F30E020: lwz     r3, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E024:
    ctx->pc = 0x7F30E024u;
    // 7F30E024: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30E028:
    ctx->pc = 0x7F30E028u;
    // 7F30E028: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E02C:
    ctx->pc = 0x7F30E02Cu;
    // 7F30E02C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E030:
    ctx->pc = 0x7F30E030u;
    // 7F30E030: cmpwi   r0, 0
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

label_7F30E034:
    ctx->pc = 0x7F30E034u;
    // 7F30E034: bc    4, 0, 0x7F30E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E040;
        }
    }

label_7F30E038:
    ctx->pc = 0x7F30E038u;
    ctx->downcount -= 2;
    // 7F30E038: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30E03C:
    ctx->pc = 0x7F30E03Cu;
    // 7F30E03C: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E040:
    ctx->pc = 0x7F30E040u;
    ctx->downcount -= 4;
    // 7F30E040: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E044:
    ctx->pc = 0x7F30E044u;
    // 7F30E044: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E048:
    ctx->pc = 0x7F30E048u;
    // 7F30E048: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30E04C:
    ctx->pc = 0x7F30E04Cu;
    // 7F30E04C: bl      0x7F011698
    {
            ctx->lr = 0x7F30E050u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E050:
    ctx->pc = 0x7F30E050u;
    ctx->downcount -= 1;
    // 7F30E050: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E054:
    ctx->pc = 0x7F30E054u;
    ctx->downcount -= 9;
    // 7F30E054: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E058:
    ctx->pc = 0x7F30E058u;
    // 7F30E058: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E05C:
    ctx->pc = 0x7F30E05Cu;
    // 7F30E05C: addi    r3, r3, -30708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30708);

label_7F30E060:
    ctx->pc = 0x7F30E060u;
    // 7F30E060: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E064:
    ctx->pc = 0x7F30E064u;
    // 7F30E064: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E068:
    ctx->pc = 0x7F30E068u;
    // 7F30E068: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E06C:
    ctx->pc = 0x7F30E06Cu;
    // 7F30E06C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E070:
    ctx->pc = 0x7F30E070u;
    // 7F30E070: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E074:
    ctx->pc = 0x7F30E074u;
    // 7F30E074: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E078u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E078:
    ctx->pc = 0x7F30E078u;
    ctx->downcount -= 6;
    // 7F30E078: lwz     r3, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E07C:
    ctx->pc = 0x7F30E07Cu;
    // 7F30E07C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30E080:
    ctx->pc = 0x7F30E080u;
    // 7F30E080: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E084:
    ctx->pc = 0x7F30E084u;
    // 7F30E084: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E088:
    ctx->pc = 0x7F30E088u;
    // 7F30E088: cmpwi   r0, 2
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

label_7F30E08C:
    ctx->pc = 0x7F30E08Cu;
    // 7F30E08C: bc    4, 1, 0x7F30E098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E098;
        }
    }

label_7F30E090:
    ctx->pc = 0x7F30E090u;
    ctx->downcount -= 2;
    // 7F30E090: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E094:
    ctx->pc = 0x7F30E094u;
    // 7F30E094: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E098:
    ctx->pc = 0x7F30E098u;
    ctx->downcount -= 4;
    // 7F30E098: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E09C:
    ctx->pc = 0x7F30E09Cu;
    // 7F30E09C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E0A0:
    ctx->pc = 0x7F30E0A0u;
    // 7F30E0A0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30E0A4:
    ctx->pc = 0x7F30E0A4u;
    // 7F30E0A4: bl      0x7F011698
    {
            ctx->lr = 0x7F30E0A8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E0A8:
    ctx->pc = 0x7F30E0A8u;
    ctx->downcount -= 1;
    // 7F30E0A8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E0AC:
    ctx->pc = 0x7F30E0ACu;
    ctx->downcount -= 3;
    // 7F30E0AC: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E0B0:
    ctx->pc = 0x7F30E0B0u;
    // 7F30E0B0: li      r4, 29
    ctx->gpr[4] = (u32)(s32)(29);

label_7F30E0B4:
    ctx->pc = 0x7F30E0B4u;
    // 7F30E0B4: bl      0x7F314F14
    {
            ctx->lr = 0x7F30E0B8u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30E0B8:
    ctx->pc = 0x7F30E0B8u;
    ctx->downcount -= 10;
    // 7F30E0B8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30E0BC:
    ctx->pc = 0x7F30E0BCu;
    // 7F30E0BC: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E0C0:
    ctx->pc = 0x7F30E0C0u;
    // 7F30E0C0: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30E0C4:
    ctx->pc = 0x7F30E0C4u;
    // 7F30E0C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30E0C8:
    ctx->pc = 0x7F30E0C8u;
    // 7F30E0C8: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E0CC:
    ctx->pc = 0x7F30E0CCu;
    // 7F30E0CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30E0D0:
    ctx->pc = 0x7F30E0D0u;
    // 7F30E0D0: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30E0D4:
    ctx->pc = 0x7F30E0D4u;
    // 7F30E0D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30E0D8:
    ctx->pc = 0x7F30E0D8u;
    // 7F30E0D8: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30E0DC:
    ctx->pc = 0x7F30E0DCu;
    // 7F30E0DC: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30E0E0u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30E0E0:
    ctx->pc = 0x7F30E0E0u;
    ctx->downcount -= 8;
    // 7F30E0E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E0E4:
    ctx->pc = 0x7F30E0E4u;
    // 7F30E0E4: lis     r3, 244
    ctx->gpr[3] = ((u32)(s32)(244) << 16);

label_7F30E0E8:
    ctx->pc = 0x7F30E0E8u;
    // 7F30E0E8: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E0EC:
    ctx->pc = 0x7F30E0ECu;
    // 7F30E0EC: addi    r3, r3, -27471
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27471);

label_7F30E0F0:
    ctx->pc = 0x7F30E0F0u;
    // 7F30E0F0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E0F4:
    ctx->pc = 0x7F30E0F4u;
    // 7F30E0F4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E0F8:
    ctx->pc = 0x7F30E0F8u;
    // 7F30E0F8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E0FC:
    ctx->pc = 0x7F30E0FCu;
    // 7F30E0FC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E100u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E100:
    ctx->pc = 0x7F30E100u;
    ctx->downcount -= 3;
    // 7F30E100: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F30E104:
    ctx->pc = 0x7F30E104u;
    // 7F30E104: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E108:
    ctx->pc = 0x7F30E108u;
    // 7F30E108: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E10C:
    ctx->pc = 0x7F30E10Cu;
    ctx->downcount -= 4;
    // 7F30E10C: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E110:
    ctx->pc = 0x7F30E110u;
    // 7F30E110: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E114:
    ctx->pc = 0x7F30E114u;
    // 7F30E114: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E118:
    ctx->pc = 0x7F30E118u;
    // 7F30E118: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30E11Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30E11C:
    ctx->pc = 0x7F30E11Cu;
    ctx->downcount -= 2;
    // 7F30E11C: cmpwi   r3, 0
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

label_7F30E120:
    ctx->pc = 0x7F30E120u;
    // 7F30E120: bc    12, 2, 0x7F30E16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E16C;
        }
    }

label_7F30E124:
    ctx->pc = 0x7F30E124u;
    ctx->downcount -= 11;
    // 7F30E124: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E128:
    ctx->pc = 0x7F30E128u;
    // 7F30E128: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E12C:
    ctx->pc = 0x7F30E12Cu;
    // 7F30E12C: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E130:
    ctx->pc = 0x7F30E130u;
    // 7F30E130: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30E134:
    ctx->pc = 0x7F30E134u;
    // 7F30E134: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E138:
    ctx->pc = 0x7F30E138u;
    // 7F30E138: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E13C:
    ctx->pc = 0x7F30E13Cu;
    // 7F30E13C: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E140:
    ctx->pc = 0x7F30E140u;
    // 7F30E140: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E144:
    ctx->pc = 0x7F30E144u;
    // 7F30E144: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E148:
    ctx->pc = 0x7F30E148u;
    // 7F30E148: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E14C:
    ctx->pc = 0x7F30E14Cu;
    // 7F30E14C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E150u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E150:
    ctx->pc = 0x7F30E150u;
    ctx->downcount -= 6;
    // 7F30E150: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F30E154:
    ctx->pc = 0x7F30E154u;
    // 7F30E154: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E158:
    ctx->pc = 0x7F30E158u;
    // 7F30E158: addi    r3, r3, 29444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29444);

label_7F30E15C:
    ctx->pc = 0x7F30E15Cu;
    // 7F30E15C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E160:
    ctx->pc = 0x7F30E160u;
    // 7F30E160: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E164:
    ctx->pc = 0x7F30E164u;
    // 7F30E164: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E168u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E168:
    ctx->pc = 0x7F30E168u;
    ctx->downcount -= 1;
    // 7F30E168: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E16C:
    ctx->pc = 0x7F30E16Cu;
    ctx->downcount -= 4;
    // 7F30E16C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E170:
    ctx->pc = 0x7F30E170u;
    // 7F30E170: lwz     r4, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30E174:
    ctx->pc = 0x7F30E174u;
    // 7F30E174: cmpwi   r4, 8192
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

label_7F30E178:
    ctx->pc = 0x7F30E178u;
    // 7F30E178: bc    12, 2, 0x7F30E2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E2C8;
        }
    }

label_7F30E17C:
    ctx->pc = 0x7F30E17Cu;
    ctx->downcount -= 1;
    // 7F30E17C: bc    4, 0, 0x7F30E198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E198;
        }
    }

label_7F30E180:
    ctx->pc = 0x7F30E180u;
    ctx->downcount -= 2;
    // 7F30E180: cmpwi   r4, 128
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

label_7F30E184:
    ctx->pc = 0x7F30E184u;
    // 7F30E184: bc    12, 2, 0x7F30E20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E20C;
        }
    }

label_7F30E188:
    ctx->pc = 0x7F30E188u;
    ctx->downcount -= 1;
    // 7F30E188: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30E18C:
    ctx->pc = 0x7F30E18Cu;
    ctx->downcount -= 2;
    // 7F30E18C: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E190:
    ctx->pc = 0x7F30E190u;
    // 7F30E190: bc    12, 2, 0x7F30E1AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E1AC;
        }
    }

label_7F30E194:
    ctx->pc = 0x7F30E194u;
    ctx->downcount -= 1;
    // 7F30E194: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E198:
    ctx->pc = 0x7F30E198u;
    ctx->downcount -= 4;
    // 7F30E198: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30E19C:
    ctx->pc = 0x7F30E19Cu;
    // 7F30E19C: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30E1A0:
    ctx->pc = 0x7F30E1A0u;
    // 7F30E1A0: cmpw    r4, r0
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

label_7F30E1A4:
    ctx->pc = 0x7F30E1A4u;
    // 7F30E1A4: bc    12, 2, 0x7F30E2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E2C8;
        }
    }

label_7F30E1A8:
    ctx->pc = 0x7F30E1A8u;
    ctx->downcount -= 1;
    // 7F30E1A8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E1AC:
    ctx->pc = 0x7F30E1ACu;
    ctx->downcount -= 10;
    // 7F30E1AC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30E1B0:
    ctx->pc = 0x7F30E1B0u;
    // 7F30E1B0: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E1B4:
    ctx->pc = 0x7F30E1B4u;
    // 7F30E1B4: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E1B8:
    ctx->pc = 0x7F30E1B8u;
    // 7F30E1B8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30E1BC:
    ctx->pc = 0x7F30E1BCu;
    // 7F30E1BC: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E1C0:
    ctx->pc = 0x7F30E1C0u;
    // 7F30E1C0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E1C4:
    ctx->pc = 0x7F30E1C4u;
    // 7F30E1C4: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E1C8:
    ctx->pc = 0x7F30E1C8u;
    // 7F30E1C8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E1CC:
    ctx->pc = 0x7F30E1CCu;
    // 7F30E1CC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E1D0:
    ctx->pc = 0x7F30E1D0u;
    // 7F30E1D0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E1D4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E1D4:
    ctx->pc = 0x7F30E1D4u;
    ctx->downcount -= 6;
    // 7F30E1D4: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F30E1D8:
    ctx->pc = 0x7F30E1D8u;
    // 7F30E1D8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E1DC:
    ctx->pc = 0x7F30E1DCu;
    // 7F30E1DC: addi    r3, r3, 29444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29444);

label_7F30E1E0:
    ctx->pc = 0x7F30E1E0u;
    // 7F30E1E0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E1E4:
    ctx->pc = 0x7F30E1E4u;
    // 7F30E1E4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E1E8:
    ctx->pc = 0x7F30E1E8u;
    // 7F30E1E8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E1ECu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E1EC:
    ctx->pc = 0x7F30E1ECu;
    ctx->downcount -= 7;
    // 7F30E1EC: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E1F0:
    ctx->pc = 0x7F30E1F0u;
    // 7F30E1F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E1F4:
    ctx->pc = 0x7F30E1F4u;
    // 7F30E1F4: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E1F8:
    ctx->pc = 0x7F30E1F8u;
    // 7F30E1F8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E1FC:
    ctx->pc = 0x7F30E1FCu;
    // 7F30E1FC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E200:
    ctx->pc = 0x7F30E200u;
    // 7F30E200: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30E204:
    ctx->pc = 0x7F30E204u;
    // 7F30E204: bl      0x7F011698
    {
            ctx->lr = 0x7F30E208u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E208:
    ctx->pc = 0x7F30E208u;
    ctx->downcount -= 1;
    // 7F30E208: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E20C:
    ctx->pc = 0x7F30E20Cu;
    ctx->downcount -= 3;
    // 7F30E20C: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E210:
    ctx->pc = 0x7F30E210u;
    // 7F30E210: cmpwi   r0, 0
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

label_7F30E214:
    ctx->pc = 0x7F30E214u;
    // 7F30E214: bc    4, 2, 0x7F30E268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E268;
        }
    }

label_7F30E218:
    ctx->pc = 0x7F30E218u;
    ctx->downcount -= 10;
    // 7F30E218: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F30E21C:
    ctx->pc = 0x7F30E21Cu;
    // 7F30E21C: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E220:
    ctx->pc = 0x7F30E220u;
    // 7F30E220: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E224:
    ctx->pc = 0x7F30E224u;
    // 7F30E224: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_7F30E228:
    ctx->pc = 0x7F30E228u;
    // 7F30E228: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E22C:
    ctx->pc = 0x7F30E22Cu;
    // 7F30E22C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E230:
    ctx->pc = 0x7F30E230u;
    // 7F30E230: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E234:
    ctx->pc = 0x7F30E234u;
    // 7F30E234: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E238:
    ctx->pc = 0x7F30E238u;
    // 7F30E238: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E23C:
    ctx->pc = 0x7F30E23Cu;
    // 7F30E23C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E240u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E240:
    ctx->pc = 0x7F30E240u;
    ctx->downcount -= 6;
    // 7F30E240: lis     r3, 251
    ctx->gpr[3] = ((u32)(s32)(251) << 16);

label_7F30E244:
    ctx->pc = 0x7F30E244u;
    // 7F30E244: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E248:
    ctx->pc = 0x7F30E248u;
    // 7F30E248: addi    r3, r3, -2748
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2748);

label_7F30E24C:
    ctx->pc = 0x7F30E24Cu;
    // 7F30E24C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E250:
    ctx->pc = 0x7F30E250u;
    // 7F30E250: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E254:
    ctx->pc = 0x7F30E254u;
    // 7F30E254: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E258u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E258:
    ctx->pc = 0x7F30E258u;
    ctx->downcount -= 4;
    // 7F30E258: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E25C:
    ctx->pc = 0x7F30E25Cu;
    // 7F30E25C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E260:
    ctx->pc = 0x7F30E260u;
    // 7F30E260: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E264:
    ctx->pc = 0x7F30E264u;
    // 7F30E264: b       0x7F30E2B4
    {
            goto label_7F30E2B4;
    }

label_7F30E268:
    ctx->pc = 0x7F30E268u;
    ctx->downcount -= 10;
    // 7F30E268: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30E26C:
    ctx->pc = 0x7F30E26Cu;
    // 7F30E26C: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E270:
    ctx->pc = 0x7F30E270u;
    // 7F30E270: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E274:
    ctx->pc = 0x7F30E274u;
    // 7F30E274: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30E278:
    ctx->pc = 0x7F30E278u;
    // 7F30E278: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E27C:
    ctx->pc = 0x7F30E27Cu;
    // 7F30E27C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E280:
    ctx->pc = 0x7F30E280u;
    // 7F30E280: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E284:
    ctx->pc = 0x7F30E284u;
    // 7F30E284: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E288:
    ctx->pc = 0x7F30E288u;
    // 7F30E288: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E28C:
    ctx->pc = 0x7F30E28Cu;
    // 7F30E28C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E290u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E290:
    ctx->pc = 0x7F30E290u;
    ctx->downcount -= 6;
    // 7F30E290: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F30E294:
    ctx->pc = 0x7F30E294u;
    // 7F30E294: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E298:
    ctx->pc = 0x7F30E298u;
    // 7F30E298: addi    r3, r3, 29444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29444);

label_7F30E29C:
    ctx->pc = 0x7F30E29Cu;
    // 7F30E29C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E2A0:
    ctx->pc = 0x7F30E2A0u;
    // 7F30E2A0: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E2A4:
    ctx->pc = 0x7F30E2A4u;
    // 7F30E2A4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E2A8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E2A8:
    ctx->pc = 0x7F30E2A8u;
    ctx->downcount -= 3;
    // 7F30E2A8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E2AC:
    ctx->pc = 0x7F30E2ACu;
    // 7F30E2AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E2B0:
    ctx->pc = 0x7F30E2B0u;
    // 7F30E2B0: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E2B4:
    ctx->pc = 0x7F30E2B4u;
    ctx->downcount -= 4;
    // 7F30E2B4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E2B8:
    ctx->pc = 0x7F30E2B8u;
    // 7F30E2B8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E2BC:
    ctx->pc = 0x7F30E2BCu;
    // 7F30E2BC: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30E2C0:
    ctx->pc = 0x7F30E2C0u;
    // 7F30E2C0: bl      0x7F011698
    {
            ctx->lr = 0x7F30E2C4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E2C4:
    ctx->pc = 0x7F30E2C4u;
    ctx->downcount -= 1;
    // 7F30E2C4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E2C8:
    ctx->pc = 0x7F30E2C8u;
    ctx->downcount -= 3;
    // 7F30E2C8: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E2CC:
    ctx->pc = 0x7F30E2CCu;
    // 7F30E2CC: cmpwi   r0, 0
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

label_7F30E2D0:
    ctx->pc = 0x7F30E2D0u;
    // 7F30E2D0: bc    4, 2, 0x7F30E2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E2F0;
        }
    }

label_7F30E2D4:
    ctx->pc = 0x7F30E2D4u;
    ctx->downcount -= 6;
    // 7F30E2D4: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F30E2D8:
    ctx->pc = 0x7F30E2D8u;
    // 7F30E2D8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E2DC:
    ctx->pc = 0x7F30E2DCu;
    // 7F30E2DC: addi    r3, r3, -1992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1992);

label_7F30E2E0:
    ctx->pc = 0x7F30E2E0u;
    // 7F30E2E0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E2E4:
    ctx->pc = 0x7F30E2E4u;
    // 7F30E2E4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E2E8:
    ctx->pc = 0x7F30E2E8u;
    // 7F30E2E8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E2ECu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E2EC:
    ctx->pc = 0x7F30E2ECu;
    ctx->downcount -= 1;
    // 7F30E2EC: b       0x7F30E308
    {
            goto label_7F30E308;
    }

label_7F30E2F0:
    ctx->pc = 0x7F30E2F0u;
    ctx->downcount -= 6;
    // 7F30E2F0: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F30E2F4:
    ctx->pc = 0x7F30E2F4u;
    // 7F30E2F4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E2F8:
    ctx->pc = 0x7F30E2F8u;
    // 7F30E2F8: addi    r3, r3, 22149
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22149);

label_7F30E2FC:
    ctx->pc = 0x7F30E2FCu;
    // 7F30E2FC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E300:
    ctx->pc = 0x7F30E300u;
    // 7F30E300: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E304:
    ctx->pc = 0x7F30E304u;
    // 7F30E304: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E308u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E308:
    ctx->pc = 0x7F30E308u;
    ctx->downcount -= 7;
    // 7F30E308: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E30C:
    ctx->pc = 0x7F30E30Cu;
    // 7F30E30C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E310:
    ctx->pc = 0x7F30E310u;
    // 7F30E310: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E314:
    ctx->pc = 0x7F30E314u;
    // 7F30E314: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30E318:
    ctx->pc = 0x7F30E318u;
    // 7F30E318: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F30E31C:
    ctx->pc = 0x7F30E31Cu;
    // 7F30E31C: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E320:
    ctx->pc = 0x7F30E320u;
    // 7F30E320: bl      0x7F011698
    {
            ctx->lr = 0x7F30E324u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E324:
    ctx->pc = 0x7F30E324u;
    ctx->downcount -= 1;
    // 7F30E324: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E328:
    ctx->pc = 0x7F30E328u;
    ctx->downcount -= 12;
    // 7F30E328: addis   r5, r31, 4
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E32C:
    ctx->pc = 0x7F30E32Cu;
    // 7F30E32C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30E330:
    ctx->pc = 0x7F30E330u;
    // 7F30E330: stw     r6, -10656(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30E334:
    ctx->pc = 0x7F30E334u;
    // 7F30E334: lis     r3, 164
    ctx->gpr[3] = ((u32)(s32)(164) << 16);

label_7F30E338:
    ctx->pc = 0x7F30E338u;
    // 7F30E338: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30E33C:
    ctx->pc = 0x7F30E33Cu;
    // 7F30E33C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E340:
    ctx->pc = 0x7F30E340u;
    // 7F30E340: stb     r6, -10559(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F30E344:
    ctx->pc = 0x7F30E344u;
    // 7F30E344: addi    r3, r3, 1532
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1532);

label_7F30E348:
    ctx->pc = 0x7F30E348u;
    // 7F30E348: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E34C:
    ctx->pc = 0x7F30E34Cu;
    // 7F30E34C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E350:
    ctx->pc = 0x7F30E350u;
    // 7F30E350: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E354:
    ctx->pc = 0x7F30E354u;
    // 7F30E354: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E358u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E358:
    ctx->pc = 0x7F30E358u;
    ctx->downcount -= 19;
    // 7F30E358: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F30E35C:
    ctx->pc = 0x7F30E35Cu;
    // 7F30E35C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E360:
    ctx->pc = 0x7F30E360u;
    // 7F30E360: stw     r8, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F30E364:
    ctx->pc = 0x7F30E364u;
    // 7F30E364: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F30E368:
    ctx->pc = 0x7F30E368u;
    // 7F30E368: addis   r5, r30, 3
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30E36C:
    ctx->pc = 0x7F30E36Cu;
    // 7F30E36C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30E370:
    ctx->pc = 0x7F30E370u;
    // 7F30E370: lbz     r0, -8310(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E374:
    ctx->pc = 0x7F30E374u;
    // 7F30E374: lwz     r6, -25248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30E378:
    ctx->pc = 0x7F30E378u;
    // 7F30E378: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30E37C:
    ctx->pc = 0x7F30E37Cu;
    // 7F30E37C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E380:
    ctx->pc = 0x7F30E380u;
    // 7F30E380: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30E384:
    ctx->pc = 0x7F30E384u;
    // 7F30E384: rlwinm r0, r0, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 14u) & 0xFFFFC000u;
    }

label_7F30E388:
    ctx->pc = 0x7F30E388u;
    // 7F30E388: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30E38C:
    ctx->pc = 0x7F30E38Cu;
    // 7F30E38C: stb     r7, 6077(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6077);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F30E390:
    ctx->pc = 0x7F30E390u;
    // 7F30E390: stb     r7, -26691(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26691);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F30E394:
    ctx->pc = 0x7F30E394u;
    // 7F30E394: lwz     r0, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E398:
    ctx->pc = 0x7F30E398u;
    // 7F30E398: stw     r0, 6032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6032);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E39C:
    ctx->pc = 0x7F30E39Cu;
    // 7F30E39C: stw     r8, 6024(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6024);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F30E3A0:
    ctx->pc = 0x7F30E3A0u;
    // 7F30E3A0: bl      0x7F319208
    {
            ctx->lr = 0x7F30E3A4u;
            ctx->pc = 0x7F319208u;
            return;
    }

label_7F30E3A4:
    ctx->pc = 0x7F30E3A4u;
    ctx->downcount -= 1;
    // 7F30E3A4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E3A8:
    ctx->pc = 0x7F30E3A8u;
    ctx->downcount -= 6;
    // 7F30E3A8: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E3AC:
    ctx->pc = 0x7F30E3ACu;
    // 7F30E3AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E3B0:
    ctx->pc = 0x7F30E3B0u;
    // 7F30E3B0: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E3B4:
    ctx->pc = 0x7F30E3B4u;
    // 7F30E3B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E3B8:
    ctx->pc = 0x7F30E3B8u;
    // 7F30E3B8: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E3BC:
    ctx->pc = 0x7F30E3BCu;
    // 7F30E3BC: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30E3C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30E3C0:
    ctx->pc = 0x7F30E3C0u;
    ctx->downcount -= 2;
    // 7F30E3C0: cmpwi   r3, 0
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

label_7F30E3C4:
    ctx->pc = 0x7F30E3C4u;
    // 7F30E3C4: bc    12, 2, 0x7F30E4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E4AC;
        }
    }

label_7F30E3C8:
    ctx->pc = 0x7F30E3C8u;
    ctx->downcount -= 13;
    // 7F30E3C8: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E3CC:
    ctx->pc = 0x7F30E3CCu;
    // 7F30E3CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E3D0:
    ctx->pc = 0x7F30E3D0u;
    // 7F30E3D0: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E3D4:
    ctx->pc = 0x7F30E3D4u;
    // 7F30E3D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F30E3D8:
    ctx->pc = 0x7F30E3D8u;
    // 7F30E3D8: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E3DC:
    ctx->pc = 0x7F30E3DCu;
    // 7F30E3DC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30E3E0:
    ctx->pc = 0x7F30E3E0u;
    // 7F30E3E0: stw     r4, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30E3E4:
    ctx->pc = 0x7F30E3E4u;
    // 7F30E3E4: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E3E8:
    ctx->pc = 0x7F30E3E8u;
    // 7F30E3E8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E3EC:
    ctx->pc = 0x7F30E3ECu;
    // 7F30E3EC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E3F0:
    ctx->pc = 0x7F30E3F0u;
    // 7F30E3F0: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E3F4:
    ctx->pc = 0x7F30E3F4u;
    // 7F30E3F4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E3F8:
    ctx->pc = 0x7F30E3F8u;
    // 7F30E3F8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E3FCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E3FC:
    ctx->pc = 0x7F30E3FCu;
    ctx->downcount -= 13;
    // 7F30E3FC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E400:
    ctx->pc = 0x7F30E400u;
    // 7F30E400: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E404:
    ctx->pc = 0x7F30E404u;
    // 7F30E404: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E408:
    ctx->pc = 0x7F30E408u;
    // 7F30E408: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30E40C:
    ctx->pc = 0x7F30E40Cu;
    // 7F30E40C: lwz     r6, -25248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30E410:
    ctx->pc = 0x7F30E410u;
    // 7F30E410: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E414:
    ctx->pc = 0x7F30E414u;
    // 7F30E414: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E418:
    ctx->pc = 0x7F30E418u;
    // 7F30E418: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E41C:
    ctx->pc = 0x7F30E41Cu;
    // 7F30E41C: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30E420:
    ctx->pc = 0x7F30E420u;
    // 7F30E420: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E424:
    ctx->pc = 0x7F30E424u;
    // 7F30E424: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E428:
    ctx->pc = 0x7F30E428u;
    // 7F30E428: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E42C:
    ctx->pc = 0x7F30E42Cu;
    // 7F30E42C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E430u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E430:
    ctx->pc = 0x7F30E430u;
    ctx->downcount -= 5;
    // 7F30E430: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E434:
    ctx->pc = 0x7F30E434u;
    // 7F30E434: lbz     r0, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E438:
    ctx->pc = 0x7F30E438u;
    // 7F30E438: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E43C:
    ctx->pc = 0x7F30E43Cu;
    // 7F30E43C: cmpwi   r0, 1
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

label_7F30E440:
    ctx->pc = 0x7F30E440u;
    // 7F30E440: bc    4, 1, 0x7F30E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E468;
        }
    }

label_7F30E444:
    ctx->pc = 0x7F30E444u;
    ctx->downcount -= 6;
    // 7F30E444: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30E448:
    ctx->pc = 0x7F30E448u;
    // 7F30E448: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E44C:
    ctx->pc = 0x7F30E44Cu;
    // 7F30E44C: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30E450:
    ctx->pc = 0x7F30E450u;
    // 7F30E450: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E454:
    ctx->pc = 0x7F30E454u;
    // 7F30E454: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E458:
    ctx->pc = 0x7F30E458u;
    // 7F30E458: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E45Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E45C:
    ctx->pc = 0x7F30E45Cu;
    ctx->downcount -= 3;
    // 7F30E45C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E460:
    ctx->pc = 0x7F30E460u;
    // 7F30E460: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E464:
    ctx->pc = 0x7F30E464u;
    // 7F30E464: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E468:
    ctx->pc = 0x7F30E468u;
    ctx->downcount -= 4;
    // 7F30E468: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E46C:
    ctx->pc = 0x7F30E46Cu;
    // 7F30E46C: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E470:
    ctx->pc = 0x7F30E470u;
    // 7F30E470: extsb. r0, r0
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

label_7F30E474:
    ctx->pc = 0x7F30E474u;
    // 7F30E474: bc    4, 2, 0x7F30E494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E494;
        }
    }

label_7F30E478:
    ctx->pc = 0x7F30E478u;
    ctx->downcount -= 6;
    // 7F30E478: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E47C:
    ctx->pc = 0x7F30E47Cu;
    // 7F30E47C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E480:
    ctx->pc = 0x7F30E480u;
    // 7F30E480: addi    r3, r3, -10252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10252);

label_7F30E484:
    ctx->pc = 0x7F30E484u;
    // 7F30E484: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E488:
    ctx->pc = 0x7F30E488u;
    // 7F30E488: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E48C:
    ctx->pc = 0x7F30E48Cu;
    // 7F30E48C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E490u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E490:
    ctx->pc = 0x7F30E490u;
    ctx->downcount -= 1;
    // 7F30E490: b       0x7F30E4AC
    {
            goto label_7F30E4AC;
    }

label_7F30E494:
    ctx->pc = 0x7F30E494u;
    ctx->downcount -= 6;
    // 7F30E494: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E498:
    ctx->pc = 0x7F30E498u;
    // 7F30E498: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E49C:
    ctx->pc = 0x7F30E49Cu;
    // 7F30E49C: addi    r3, r3, -10251
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10251);

label_7F30E4A0:
    ctx->pc = 0x7F30E4A0u;
    // 7F30E4A0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E4A4:
    ctx->pc = 0x7F30E4A4u;
    // 7F30E4A4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E4A8:
    ctx->pc = 0x7F30E4A8u;
    // 7F30E4A8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E4ACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E4AC:
    ctx->pc = 0x7F30E4ACu;
    ctx->downcount -= 4;
    // 7F30E4AC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E4B0:
    ctx->pc = 0x7F30E4B0u;
    // 7F30E4B0: lwz     r4, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30E4B4:
    ctx->pc = 0x7F30E4B4u;
    // 7F30E4B4: cmpwi   r4, 8192
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

label_7F30E4B8:
    ctx->pc = 0x7F30E4B8u;
    // 7F30E4B8: bc    12, 2, 0x7F30E6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E6F4;
        }
    }

label_7F30E4BC:
    ctx->pc = 0x7F30E4BCu;
    ctx->downcount -= 1;
    // 7F30E4BC: bc    4, 0, 0x7F30E4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E4D8;
        }
    }

label_7F30E4C0:
    ctx->pc = 0x7F30E4C0u;
    ctx->downcount -= 2;
    // 7F30E4C0: cmpwi   r4, 128
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

label_7F30E4C4:
    ctx->pc = 0x7F30E4C4u;
    // 7F30E4C4: bc    12, 2, 0x7F30E5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E5F0;
        }
    }

label_7F30E4C8:
    ctx->pc = 0x7F30E4C8u;
    ctx->downcount -= 1;
    // 7F30E4C8: bc    4, 0, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30E4CC:
    ctx->pc = 0x7F30E4CCu;
    ctx->downcount -= 2;
    // 7F30E4CC: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E4D0:
    ctx->pc = 0x7F30E4D0u;
    // 7F30E4D0: bc    12, 2, 0x7F30E4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E4EC;
        }
    }

label_7F30E4D4:
    ctx->pc = 0x7F30E4D4u;
    ctx->downcount -= 1;
    // 7F30E4D4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E4D8:
    ctx->pc = 0x7F30E4D8u;
    ctx->downcount -= 4;
    // 7F30E4D8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30E4DC:
    ctx->pc = 0x7F30E4DCu;
    // 7F30E4DC: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30E4E0:
    ctx->pc = 0x7F30E4E0u;
    // 7F30E4E0: cmpw    r4, r0
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

label_7F30E4E4:
    ctx->pc = 0x7F30E4E4u;
    // 7F30E4E4: bc    12, 2, 0x7F30E6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E6F4;
        }
    }

label_7F30E4E8:
    ctx->pc = 0x7F30E4E8u;
    ctx->downcount -= 1;
    // 7F30E4E8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E4EC:
    ctx->pc = 0x7F30E4ECu;
    ctx->downcount -= 13;
    // 7F30E4EC: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E4F0:
    ctx->pc = 0x7F30E4F0u;
    // 7F30E4F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E4F4:
    ctx->pc = 0x7F30E4F4u;
    // 7F30E4F4: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E4F8:
    ctx->pc = 0x7F30E4F8u;
    // 7F30E4F8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F30E4FC:
    ctx->pc = 0x7F30E4FCu;
    // 7F30E4FC: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E500:
    ctx->pc = 0x7F30E500u;
    // 7F30E500: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30E504:
    ctx->pc = 0x7F30E504u;
    // 7F30E504: stw     r4, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30E508:
    ctx->pc = 0x7F30E508u;
    // 7F30E508: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E50C:
    ctx->pc = 0x7F30E50Cu;
    // 7F30E50C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E510:
    ctx->pc = 0x7F30E510u;
    // 7F30E510: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E514:
    ctx->pc = 0x7F30E514u;
    // 7F30E514: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E518:
    ctx->pc = 0x7F30E518u;
    // 7F30E518: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E51C:
    ctx->pc = 0x7F30E51Cu;
    // 7F30E51C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E520u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E520:
    ctx->pc = 0x7F30E520u;
    ctx->downcount -= 13;
    // 7F30E520: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E524:
    ctx->pc = 0x7F30E524u;
    // 7F30E524: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E528:
    ctx->pc = 0x7F30E528u;
    // 7F30E528: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E52C:
    ctx->pc = 0x7F30E52Cu;
    // 7F30E52C: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30E530:
    ctx->pc = 0x7F30E530u;
    // 7F30E530: lwz     r6, -25248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30E534:
    ctx->pc = 0x7F30E534u;
    // 7F30E534: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E538:
    ctx->pc = 0x7F30E538u;
    // 7F30E538: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E53C:
    ctx->pc = 0x7F30E53Cu;
    // 7F30E53C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E540:
    ctx->pc = 0x7F30E540u;
    // 7F30E540: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30E544:
    ctx->pc = 0x7F30E544u;
    // 7F30E544: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E548:
    ctx->pc = 0x7F30E548u;
    // 7F30E548: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E54C:
    ctx->pc = 0x7F30E54Cu;
    // 7F30E54C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E550:
    ctx->pc = 0x7F30E550u;
    // 7F30E550: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E554u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E554:
    ctx->pc = 0x7F30E554u;
    ctx->downcount -= 5;
    // 7F30E554: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E558:
    ctx->pc = 0x7F30E558u;
    // 7F30E558: lbz     r0, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E55C:
    ctx->pc = 0x7F30E55Cu;
    // 7F30E55C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E560:
    ctx->pc = 0x7F30E560u;
    // 7F30E560: cmpwi   r0, 1
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

label_7F30E564:
    ctx->pc = 0x7F30E564u;
    // 7F30E564: bc    4, 1, 0x7F30E58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E58C;
        }
    }

label_7F30E568:
    ctx->pc = 0x7F30E568u;
    ctx->downcount -= 6;
    // 7F30E568: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30E56C:
    ctx->pc = 0x7F30E56Cu;
    // 7F30E56C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E570:
    ctx->pc = 0x7F30E570u;
    // 7F30E570: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30E574:
    ctx->pc = 0x7F30E574u;
    // 7F30E574: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E578:
    ctx->pc = 0x7F30E578u;
    // 7F30E578: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E57C:
    ctx->pc = 0x7F30E57Cu;
    // 7F30E57C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E580u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E580:
    ctx->pc = 0x7F30E580u;
    ctx->downcount -= 3;
    // 7F30E580: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E584:
    ctx->pc = 0x7F30E584u;
    // 7F30E584: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E588:
    ctx->pc = 0x7F30E588u;
    // 7F30E588: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E58C:
    ctx->pc = 0x7F30E58Cu;
    ctx->downcount -= 4;
    // 7F30E58C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E590:
    ctx->pc = 0x7F30E590u;
    // 7F30E590: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E594:
    ctx->pc = 0x7F30E594u;
    // 7F30E594: extsb. r0, r0
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

label_7F30E598:
    ctx->pc = 0x7F30E598u;
    // 7F30E598: bc    4, 2, 0x7F30E5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E5B8;
        }
    }

label_7F30E59C:
    ctx->pc = 0x7F30E59Cu;
    ctx->downcount -= 6;
    // 7F30E59C: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E5A0:
    ctx->pc = 0x7F30E5A0u;
    // 7F30E5A0: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E5A4:
    ctx->pc = 0x7F30E5A4u;
    // 7F30E5A4: addi    r3, r3, -10252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10252);

label_7F30E5A8:
    ctx->pc = 0x7F30E5A8u;
    // 7F30E5A8: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E5AC:
    ctx->pc = 0x7F30E5ACu;
    // 7F30E5AC: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E5B0:
    ctx->pc = 0x7F30E5B0u;
    // 7F30E5B0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E5B4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E5B4:
    ctx->pc = 0x7F30E5B4u;
    ctx->downcount -= 1;
    // 7F30E5B4: b       0x7F30E5D0
    {
            goto label_7F30E5D0;
    }

label_7F30E5B8:
    ctx->pc = 0x7F30E5B8u;
    ctx->downcount -= 6;
    // 7F30E5B8: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E5BC:
    ctx->pc = 0x7F30E5BCu;
    // 7F30E5BC: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E5C0:
    ctx->pc = 0x7F30E5C0u;
    // 7F30E5C0: addi    r3, r3, -10251
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10251);

label_7F30E5C4:
    ctx->pc = 0x7F30E5C4u;
    // 7F30E5C4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E5C8:
    ctx->pc = 0x7F30E5C8u;
    // 7F30E5C8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E5CC:
    ctx->pc = 0x7F30E5CCu;
    // 7F30E5CC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E5D0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E5D0:
    ctx->pc = 0x7F30E5D0u;
    ctx->downcount -= 7;
    // 7F30E5D0: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E5D4:
    ctx->pc = 0x7F30E5D4u;
    // 7F30E5D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E5D8:
    ctx->pc = 0x7F30E5D8u;
    // 7F30E5D8: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E5DC:
    ctx->pc = 0x7F30E5DCu;
    // 7F30E5DC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E5E0:
    ctx->pc = 0x7F30E5E0u;
    // 7F30E5E0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E5E4:
    ctx->pc = 0x7F30E5E4u;
    // 7F30E5E4: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30E5E8:
    ctx->pc = 0x7F30E5E8u;
    // 7F30E5E8: bl      0x7F011698
    {
            ctx->lr = 0x7F30E5ECu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E5EC:
    ctx->pc = 0x7F30E5ECu;
    ctx->downcount -= 1;
    // 7F30E5EC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E5F0:
    ctx->pc = 0x7F30E5F0u;
    ctx->downcount -= 11;
    // 7F30E5F0: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E5F4:
    ctx->pc = 0x7F30E5F4u;
    // 7F30E5F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E5F8:
    ctx->pc = 0x7F30E5F8u;
    // 7F30E5F8: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E5FC:
    ctx->pc = 0x7F30E5FCu;
    // 7F30E5FC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30E600:
    ctx->pc = 0x7F30E600u;
    // 7F30E600: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F30E604:
    ctx->pc = 0x7F30E604u;
    // 7F30E604: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E608:
    ctx->pc = 0x7F30E608u;
    // 7F30E608: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E60C:
    ctx->pc = 0x7F30E60Cu;
    // 7F30E60C: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F30E610:
    ctx->pc = 0x7F30E610u;
    // 7F30E610: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E614:
    ctx->pc = 0x7F30E614u;
    // 7F30E614: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E618:
    ctx->pc = 0x7F30E618u;
    // 7F30E618: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E61Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E61C:
    ctx->pc = 0x7F30E61Cu;
    ctx->downcount -= 13;
    // 7F30E61C: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E620:
    ctx->pc = 0x7F30E620u;
    // 7F30E620: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E624:
    ctx->pc = 0x7F30E624u;
    // 7F30E624: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E628:
    ctx->pc = 0x7F30E628u;
    // 7F30E628: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30E62C:
    ctx->pc = 0x7F30E62Cu;
    // 7F30E62C: lwz     r6, -25248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25248);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30E630:
    ctx->pc = 0x7F30E630u;
    // 7F30E630: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E634:
    ctx->pc = 0x7F30E634u;
    // 7F30E634: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E638:
    ctx->pc = 0x7F30E638u;
    // 7F30E638: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E63C:
    ctx->pc = 0x7F30E63Cu;
    // 7F30E63C: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30E640:
    ctx->pc = 0x7F30E640u;
    // 7F30E640: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E644:
    ctx->pc = 0x7F30E644u;
    // 7F30E644: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E648:
    ctx->pc = 0x7F30E648u;
    // 7F30E648: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E64C:
    ctx->pc = 0x7F30E64Cu;
    // 7F30E64C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E650u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E650:
    ctx->pc = 0x7F30E650u;
    ctx->downcount -= 5;
    // 7F30E650: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E654:
    ctx->pc = 0x7F30E654u;
    // 7F30E654: lbz     r0, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E658:
    ctx->pc = 0x7F30E658u;
    // 7F30E658: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E65C:
    ctx->pc = 0x7F30E65Cu;
    // 7F30E65C: cmpwi   r0, 1
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

label_7F30E660:
    ctx->pc = 0x7F30E660u;
    // 7F30E660: bc    4, 1, 0x7F30E688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E688;
        }
    }

label_7F30E664:
    ctx->pc = 0x7F30E664u;
    ctx->downcount -= 6;
    // 7F30E664: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30E668:
    ctx->pc = 0x7F30E668u;
    // 7F30E668: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E66C:
    ctx->pc = 0x7F30E66Cu;
    // 7F30E66C: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30E670:
    ctx->pc = 0x7F30E670u;
    // 7F30E670: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E674:
    ctx->pc = 0x7F30E674u;
    // 7F30E674: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E678:
    ctx->pc = 0x7F30E678u;
    // 7F30E678: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E67Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E67C:
    ctx->pc = 0x7F30E67Cu;
    ctx->downcount -= 3;
    // 7F30E67C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E680:
    ctx->pc = 0x7F30E680u;
    // 7F30E680: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E684:
    ctx->pc = 0x7F30E684u;
    // 7F30E684: stb     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E688:
    ctx->pc = 0x7F30E688u;
    ctx->downcount -= 4;
    // 7F30E688: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E68C:
    ctx->pc = 0x7F30E68Cu;
    // 7F30E68C: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E690:
    ctx->pc = 0x7F30E690u;
    // 7F30E690: extsb. r0, r0
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

label_7F30E694:
    ctx->pc = 0x7F30E694u;
    // 7F30E694: bc    4, 2, 0x7F30E6B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E6B4;
        }
    }

label_7F30E698:
    ctx->pc = 0x7F30E698u;
    ctx->downcount -= 6;
    // 7F30E698: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E69C:
    ctx->pc = 0x7F30E69Cu;
    // 7F30E69C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E6A0:
    ctx->pc = 0x7F30E6A0u;
    // 7F30E6A0: addi    r3, r3, -10252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10252);

label_7F30E6A4:
    ctx->pc = 0x7F30E6A4u;
    // 7F30E6A4: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E6A8:
    ctx->pc = 0x7F30E6A8u;
    // 7F30E6A8: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E6AC:
    ctx->pc = 0x7F30E6ACu;
    // 7F30E6AC: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E6B0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E6B0:
    ctx->pc = 0x7F30E6B0u;
    ctx->downcount -= 1;
    // 7F30E6B0: b       0x7F30E6CC
    {
            goto label_7F30E6CC;
    }

label_7F30E6B4:
    ctx->pc = 0x7F30E6B4u;
    ctx->downcount -= 6;
    // 7F30E6B4: lis     r3, 201
    ctx->gpr[3] = ((u32)(s32)(201) << 16);

label_7F30E6B8:
    ctx->pc = 0x7F30E6B8u;
    // 7F30E6B8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E6BC:
    ctx->pc = 0x7F30E6BCu;
    // 7F30E6BC: addi    r3, r3, -10251
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10251);

label_7F30E6C0:
    ctx->pc = 0x7F30E6C0u;
    // 7F30E6C0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E6C4:
    ctx->pc = 0x7F30E6C4u;
    // 7F30E6C4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E6C8:
    ctx->pc = 0x7F30E6C8u;
    // 7F30E6C8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E6CCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E6CC:
    ctx->pc = 0x7F30E6CCu;
    ctx->downcount -= 3;
    // 7F30E6CC: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E6D0:
    ctx->pc = 0x7F30E6D0u;
    // 7F30E6D0: cmpwi   r0, 0
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

label_7F30E6D4:
    ctx->pc = 0x7F30E6D4u;
    // 7F30E6D4: bc    4, 2, 0x7F30E6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E6E0;
        }
    }

label_7F30E6D8:
    ctx->pc = 0x7F30E6D8u;
    ctx->downcount -= 2;
    // 7F30E6D8: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F30E6DC:
    ctx->pc = 0x7F30E6DCu;
    // 7F30E6DC: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E6E0:
    ctx->pc = 0x7F30E6E0u;
    ctx->downcount -= 4;
    // 7F30E6E0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E6E4:
    ctx->pc = 0x7F30E6E4u;
    // 7F30E6E4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E6E8:
    ctx->pc = 0x7F30E6E8u;
    // 7F30E6E8: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30E6EC:
    ctx->pc = 0x7F30E6ECu;
    // 7F30E6EC: bl      0x7F011698
    {
            ctx->lr = 0x7F30E6F0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E6F0:
    ctx->pc = 0x7F30E6F0u;
    ctx->downcount -= 1;
    // 7F30E6F0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E6F4:
    ctx->pc = 0x7F30E6F4u;
    ctx->downcount -= 3;
    // 7F30E6F4: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E6F8:
    ctx->pc = 0x7F30E6F8u;
    // 7F30E6F8: cmpwi   r0, 0
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

label_7F30E6FC:
    ctx->pc = 0x7F30E6FCu;
    // 7F30E6FC: bc    4, 2, 0x7F30E71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E71C;
        }
    }

label_7F30E700:
    ctx->pc = 0x7F30E700u;
    ctx->downcount -= 6;
    // 7F30E700: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F30E704:
    ctx->pc = 0x7F30E704u;
    // 7F30E704: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E708:
    ctx->pc = 0x7F30E708u;
    // 7F30E708: addi    r3, r3, -1992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1992);

label_7F30E70C:
    ctx->pc = 0x7F30E70Cu;
    // 7F30E70C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E710:
    ctx->pc = 0x7F30E710u;
    // 7F30E710: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E714:
    ctx->pc = 0x7F30E714u;
    // 7F30E714: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E718u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E718:
    ctx->pc = 0x7F30E718u;
    ctx->downcount -= 1;
    // 7F30E718: b       0x7F30E734
    {
            goto label_7F30E734;
    }

label_7F30E71C:
    ctx->pc = 0x7F30E71Cu;
    ctx->downcount -= 6;
    // 7F30E71C: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F30E720:
    ctx->pc = 0x7F30E720u;
    // 7F30E720: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E724:
    ctx->pc = 0x7F30E724u;
    // 7F30E724: addi    r3, r3, 22149
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22149);

label_7F30E728:
    ctx->pc = 0x7F30E728u;
    // 7F30E728: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E72C:
    ctx->pc = 0x7F30E72Cu;
    // 7F30E72C: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E730:
    ctx->pc = 0x7F30E730u;
    // 7F30E730: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E734u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E734:
    ctx->pc = 0x7F30E734u;
    ctx->downcount -= 7;
    // 7F30E734: lwz     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E738:
    ctx->pc = 0x7F30E738u;
    // 7F30E738: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30E73C:
    ctx->pc = 0x7F30E73Cu;
    // 7F30E73C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30E740:
    ctx->pc = 0x7F30E740u;
    // 7F30E740: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30E744:
    ctx->pc = 0x7F30E744u;
    // 7F30E744: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F30E748:
    ctx->pc = 0x7F30E748u;
    // 7F30E748: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E74C:
    ctx->pc = 0x7F30E74Cu;
    // 7F30E74C: bl      0x7F011698
    {
            ctx->lr = 0x7F30E750u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30E750:
    ctx->pc = 0x7F30E750u;
    ctx->downcount -= 1;
    // 7F30E750: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E754:
    ctx->pc = 0x7F30E754u;
    ctx->downcount -= 11;
    // 7F30E754: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E758:
    ctx->pc = 0x7F30E758u;
    // 7F30E758: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E75C:
    ctx->pc = 0x7F30E75Cu;
    // 7F30E75C: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E760:
    ctx->pc = 0x7F30E760u;
    // 7F30E760: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30E764:
    ctx->pc = 0x7F30E764u;
    // 7F30E764: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F30E768:
    ctx->pc = 0x7F30E768u;
    // 7F30E768: stb     r4, -10559(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30E76C:
    ctx->pc = 0x7F30E76Cu;
    // 7F30E76C: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E770:
    ctx->pc = 0x7F30E770u;
    // 7F30E770: stw     r0, -10556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E774:
    ctx->pc = 0x7F30E774u;
    // 7F30E774: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30E778:
    ctx->pc = 0x7F30E778u;
    // 7F30E778: lbz     r4, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30E77C:
    ctx->pc = 0x7F30E77Cu;
    // 7F30E77C: bl      0x7F314F54
    {
            ctx->lr = 0x7F30E780u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30E780:
    ctx->pc = 0x7F30E780u;
    ctx->downcount -= 8;
    // 7F30E780: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F30E784:
    ctx->pc = 0x7F30E784u;
    // 7F30E784: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F30E788:
    ctx->pc = 0x7F30E788u;
    // 7F30E788: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E78C:
    ctx->pc = 0x7F30E78Cu;
    // 7F30E78C: addi    r3, r3, 24501
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24501);

label_7F30E790:
    ctx->pc = 0x7F30E790u;
    // 7F30E790: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E794:
    ctx->pc = 0x7F30E794u;
    // 7F30E794: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E798:
    ctx->pc = 0x7F30E798u;
    // 7F30E798: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E79C:
    ctx->pc = 0x7F30E79Cu;
    // 7F30E79C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E7A0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E7A0:
    ctx->pc = 0x7F30E7A0u;
    ctx->downcount -= 1;
    // 7F30E7A0: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30E7A4:
    ctx->pc = 0x7F30E7A4u;
    ctx->downcount -= 6;
    // 7F30E7A4: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30E7A8:
    ctx->pc = 0x7F30E7A8u;
    // 7F30E7A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E7AC:
    ctx->pc = 0x7F30E7ACu;
    // 7F30E7AC: stw     r0, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E7B0:
    ctx->pc = 0x7F30E7B0u;
    // 7F30E7B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30E7B4:
    ctx->pc = 0x7F30E7B4u;
    // 7F30E7B4: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E7B8:
    ctx->pc = 0x7F30E7B8u;
    // 7F30E7B8: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30E7BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30E7BC:
    ctx->pc = 0x7F30E7BCu;
    ctx->downcount -= 2;
    // 7F30E7BC: cmpwi   r3, 0
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

label_7F30E7C0:
    ctx->pc = 0x7F30E7C0u;
    // 7F30E7C0: bc    12, 2, 0x7F30E808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E808;
        }
    }

label_7F30E7C4:
    ctx->pc = 0x7F30E7C4u;
    ctx->downcount -= 13;
    // 7F30E7C4: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F30E7C8:
    ctx->pc = 0x7F30E7C8u;
    // 7F30E7C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E7CC:
    ctx->pc = 0x7F30E7CCu;
    // 7F30E7CC: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E7D0:
    ctx->pc = 0x7F30E7D0u;
    // 7F30E7D0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E7D4:
    ctx->pc = 0x7F30E7D4u;
    // 7F30E7D4: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30E7D8:
    ctx->pc = 0x7F30E7D8u;
    // 7F30E7D8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E7DC:
    ctx->pc = 0x7F30E7DCu;
    // 7F30E7DC: lbz     r0, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E7E0:
    ctx->pc = 0x7F30E7E0u;
    // 7F30E7E0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E7E4:
    ctx->pc = 0x7F30E7E4u;
    // 7F30E7E4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E7E8:
    ctx->pc = 0x7F30E7E8u;
    // 7F30E7E8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E7EC:
    ctx->pc = 0x7F30E7ECu;
    // 7F30E7EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E7F0:
    ctx->pc = 0x7F30E7F0u;
    // 7F30E7F0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E7F4:
    ctx->pc = 0x7F30E7F4u;
    // 7F30E7F4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E7F8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E7F8:
    ctx->pc = 0x7F30E7F8u;
    ctx->downcount -= 3;
    // 7F30E7F8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E7FC:
    ctx->pc = 0x7F30E7FCu;
    // 7F30E7FC: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30E800:
    ctx->pc = 0x7F30E800u;
    // 7F30E800: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30E804u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30E804:
    ctx->pc = 0x7F30E804u;
    ctx->downcount -= 1;
    // 7F30E804: b       0x7F30EB30
    {
            goto label_7F30EB30;
    }

label_7F30E808:
    ctx->pc = 0x7F30E808u;
    ctx->downcount -= 15;
    // 7F30E808: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E80C:
    ctx->pc = 0x7F30E80Cu;
    // 7F30E80C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30E810:
    ctx->pc = 0x7F30E810u;
    // 7F30E810: lbz     r6, -8310(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8310);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F30E814:
    ctx->pc = 0x7F30E814u;
    // 7F30E814: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30E818:
    ctx->pc = 0x7F30E818u;
    // 7F30E818: lwz     r0, -25248(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-25248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E81C:
    ctx->pc = 0x7F30E81Cu;
    // 7F30E81C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F30E820:
    ctx->pc = 0x7F30E820u;
    // 7F30E820: extsb r7, r6
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F30E824:
    ctx->pc = 0x7F30E824u;
    // 7F30E824: mulli   r6, r7, 108
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[7] * (s64)(s32)108);

label_7F30E828:
    ctx->pc = 0x7F30E828u;
    // 7F30E828: subf   r29, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_7F30E82C:
    ctx->pc = 0x7F30E82Cu;
    // 7F30E82C: addis   r28, r6, 3
    ctx->gpr[28] = ctx->gpr[6] + ((u32)(s32)(3) << 16);

label_7F30E830:
    ctx->pc = 0x7F30E830u;
    // 7F30E830: addi    r28, r28, -24568
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-24568);

label_7F30E834:
    ctx->pc = 0x7F30E834u;
    // 7F30E834: add   r28, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F30E838:
    ctx->pc = 0x7F30E838u;
    // 7F30E838: bl      0x800050B4
    {
            ctx->lr = 0x7F30E83Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F30E83C:
    ctx->pc = 0x7F30E83Cu;
    ctx->downcount -= 8;
    // 7F30E83C: rlwinm r29, r29, 14, 0, 17
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[29], 14u) & 0xFFFFC000u;
    }

label_7F30E840:
    ctx->pc = 0x7F30E840u;
    // 7F30E840: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30E844:
    ctx->pc = 0x7F30E844u;
    // 7F30E844: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30E848:
    ctx->pc = 0x7F30E848u;
    // 7F30E848: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30E84C:
    ctx->pc = 0x7F30E84Cu;
    // 7F30E84C: addi    r7, r3, 6044
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(6044);

label_7F30E850:
    ctx->pc = 0x7F30E850u;
    // 7F30E850: addi    r4, r4, -26724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26724);

label_7F30E854:
    ctx->pc = 0x7F30E854u;
    // 7F30E854: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30E858:
    loop_7F30E858(ctx);
    if (ctx->pc == 0x7F30E86Cu) goto label_7F30E86C;
    return;
label_7F30E85C:
    ctx->pc = 0x7F30E85Cu;
    // 7F30E85C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F30E860:
    ctx->pc = 0x7F30E860u;
    // 7F30E860: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30E864:
    ctx->pc = 0x7F30E864u;
    // 7F30E864: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F30E868:
    // 7F30E868: bc    16, 0, 0x7F30E858
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30E858u;
                return;
            }
            goto label_7F30E858;
        }
    }

label_7F30E86C:
    ctx->pc = 0x7F30E86Cu;
    ctx->downcount -= 11;
    // 7F30E86C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30E870:
    ctx->pc = 0x7F30E870u;
    // 7F30E870: addis   r5, r30, 3
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30E874:
    ctx->pc = 0x7F30E874u;
    // 7F30E874: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30E878:
    ctx->pc = 0x7F30E878u;
    // 7F30E878: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30E87C:
    ctx->pc = 0x7F30E87Cu;
    // 7F30E87C: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F30E880:
    ctx->pc = 0x7F30E880u;
    // 7F30E880: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E884:
    ctx->pc = 0x7F30E884u;
    // 7F30E884: addi    r4, r4, -26904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26904);

label_7F30E888:
    ctx->pc = 0x7F30E888u;
    // 7F30E888: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F30E88C:
    ctx->pc = 0x7F30E88Cu;
    // 7F30E88C: addi    r5, r5, -26652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26652);

label_7F30E890:
    ctx->pc = 0x7F30E890u;
    // 7F30E890: addi    r6, r6, -26684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26684);

label_7F30E894:
    ctx->pc = 0x7F30E894u;
    // 7F30E894: bl      0x8001258C
    {
            ctx->lr = 0x7F30E898u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F30E898:
    ctx->pc = 0x7F30E898u;
    ctx->downcount -= 5;
    // 7F30E898: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30E89C:
    ctx->pc = 0x7F30E89Cu;
    // 7F30E89C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30E8A0:
    ctx->pc = 0x7F30E8A0u;
    // 7F30E8A0: stb     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30E8A4:
    ctx->pc = 0x7F30E8A4u;
    // 7F30E8A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30E8A8:
    ctx->pc = 0x7F30E8A8u;
    // 7F30E8A8: bl      0x80014918
    {
            ctx->lr = 0x7F30E8ACu;
            ctx->pc = 0x80014918u;
            return;
    }

label_7F30E8AC:
    ctx->pc = 0x7F30E8ACu;
    ctx->downcount -= 2;
    // 7F30E8AC: cmpwi   r3, 0
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

label_7F30E8B0:
    ctx->pc = 0x7F30E8B0u;
    // 7F30E8B0: bc    12, 2, 0x7F30E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E8E4;
        }
    }

label_7F30E8B4:
    ctx->pc = 0x7F30E8B4u;
    ctx->downcount -= 5;
    // 7F30E8B4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E8B8:
    ctx->pc = 0x7F30E8B8u;
    // 7F30E8B8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F30E8BC:
    ctx->pc = 0x7F30E8BCu;
    // 7F30E8BC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30E8C0:
    ctx->pc = 0x7F30E8C0u;
    // 7F30E8C0: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F30E8C4:
    ctx->pc = 0x7F30E8C4u;
    // 7F30E8C4: bl      0x7F31376C
    {
            ctx->lr = 0x7F30E8C8u;
            ctx->pc = 0x7F31376Cu;
            return;
    }

label_7F30E8C8:
    ctx->pc = 0x7F30E8C8u;
    ctx->downcount -= 7;
    // 7F30E8C8: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E8CC:
    ctx->pc = 0x7F30E8CCu;
    // 7F30E8CC: lbz     r0, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E8D0:
    ctx->pc = 0x7F30E8D0u;
    // 7F30E8D0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E8D4:
    ctx->pc = 0x7F30E8D4u;
    // 7F30E8D4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30E8D8:
    ctx->pc = 0x7F30E8D8u;
    // 7F30E8D8: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30E8DC:
    ctx->pc = 0x7F30E8DCu;
    // 7F30E8DC: sth     r3, 6144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6144);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F30E8E0:
    ctx->pc = 0x7F30E8E0u;
    // 7F30E8E0: b       0x7F30E900
    {
            goto label_7F30E900;
    }

label_7F30E8E4:
    ctx->pc = 0x7F30E8E4u;
    ctx->downcount -= 7;
    // 7F30E8E4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E8E8:
    ctx->pc = 0x7F30E8E8u;
    // 7F30E8E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30E8EC:
    ctx->pc = 0x7F30E8ECu;
    // 7F30E8EC: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E8F0:
    ctx->pc = 0x7F30E8F0u;
    // 7F30E8F0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E8F4:
    ctx->pc = 0x7F30E8F4u;
    // 7F30E8F4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30E8F8:
    ctx->pc = 0x7F30E8F8u;
    // 7F30E8F8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30E8FC:
    ctx->pc = 0x7F30E8FCu;
    // 7F30E8FC: sth     r4, 6144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6144);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F30E900:
    ctx->pc = 0x7F30E900u;
    ctx->downcount -= 8;
    // 7F30E900: addis   r6, r31, 3
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E904:
    ctx->pc = 0x7F30E904u;
    // 7F30E904: lbz     r0, -24704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E908:
    ctx->pc = 0x7F30E908u;
    // 7F30E908: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E90C:
    ctx->pc = 0x7F30E90Cu;
    // 7F30E90C: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30E910:
    ctx->pc = 0x7F30E910u;
    // 7F30E910: add   r3, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30E914:
    ctx->pc = 0x7F30E914u;
    // 7F30E914: lha     r0, 6144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6144);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30E918:
    ctx->pc = 0x7F30E918u;
    // 7F30E918: cmpwi   r0, 0
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

label_7F30E91C:
    ctx->pc = 0x7F30E91Cu;
    // 7F30E91C: bc    12, 2, 0x7F30E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E9E8;
        }
    }

label_7F30E920:
    ctx->pc = 0x7F30E920u;
    ctx->downcount -= 1;
    // 7F30E920: bc    4, 0, 0x7F30E944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E944;
        }
    }

label_7F30E924:
    ctx->pc = 0x7F30E924u;
    ctx->downcount -= 2;
    // 7F30E924: cmpwi   r0, -14
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E928:
    ctx->pc = 0x7F30E928u;
    // 7F30E928: bc    4, 0, 0x7F30E938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E938;
        }
    }

label_7F30E92C:
    ctx->pc = 0x7F30E92Cu;
    ctx->downcount -= 2;
    // 7F30E92C: cmpwi   r0, -128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E930:
    ctx->pc = 0x7F30E930u;
    // 7F30E930: bc    12, 2, 0x7F30E9A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E9A4;
        }
    }

label_7F30E934:
    ctx->pc = 0x7F30E934u;
    ctx->downcount -= 1;
    // 7F30E934: b       0x7F30E9E8
    {
            goto label_7F30E9E8;
    }

label_7F30E938:
    ctx->pc = 0x7F30E938u;
    ctx->downcount -= 2;
    // 7F30E938: cmpwi   r0, -7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E93C:
    ctx->pc = 0x7F30E93Cu;
    // 7F30E93C: bc    12, 2, 0x7F30E964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30E964;
        }
    }

label_7F30E940:
    ctx->pc = 0x7F30E940u;
    ctx->downcount -= 1;
    // 7F30E940: b       0x7F30E9A4
    {
            goto label_7F30E9A4;
    }

label_7F30E944:
    ctx->pc = 0x7F30E944u;
    ctx->downcount -= 2;
    // 7F30E944: cmpwi   r0, 100
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E948:
    ctx->pc = 0x7F30E948u;
    // 7F30E948: bc    4, 0, 0x7F30E958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E958;
        }
    }

label_7F30E94C:
    ctx->pc = 0x7F30E94Cu;
    ctx->downcount -= 2;
    // 7F30E94C: cmpwi   r0, 2
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

label_7F30E950:
    ctx->pc = 0x7F30E950u;
    // 7F30E950: bc    4, 0, 0x7F30E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E9E8;
        }
    }

label_7F30E954:
    ctx->pc = 0x7F30E954u;
    ctx->downcount -= 1;
    // 7F30E954: b       0x7F30E9A4
    {
            goto label_7F30E9A4;
    }

label_7F30E958:
    ctx->pc = 0x7F30E958u;
    ctx->downcount -= 2;
    // 7F30E958: cmpwi   r0, 102
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(102);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30E95C:
    ctx->pc = 0x7F30E95Cu;
    // 7F30E95C: bc    4, 0, 0x7F30E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30E9E8;
        }
    }

label_7F30E960:
    ctx->pc = 0x7F30E960u;
    ctx->downcount -= 1;
    // 7F30E960: b       0x7F30E9A4
    {
            goto label_7F30E9A4;
    }

label_7F30E964:
    ctx->pc = 0x7F30E964u;
    ctx->downcount -= 12;
    // 7F30E964: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F30E968:
    ctx->pc = 0x7F30E968u;
    // 7F30E968: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E96C:
    ctx->pc = 0x7F30E96Cu;
    // 7F30E96C: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E970:
    ctx->pc = 0x7F30E970u;
    // 7F30E970: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30E974:
    ctx->pc = 0x7F30E974u;
    // 7F30E974: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E978:
    ctx->pc = 0x7F30E978u;
    // 7F30E978: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E97C:
    ctx->pc = 0x7F30E97Cu;
    // 7F30E97C: lbz     r0, -24704(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E980:
    ctx->pc = 0x7F30E980u;
    // 7F30E980: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E984:
    ctx->pc = 0x7F30E984u;
    // 7F30E984: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E988:
    ctx->pc = 0x7F30E988u;
    // 7F30E988: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E98C:
    ctx->pc = 0x7F30E98Cu;
    // 7F30E98C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E990:
    ctx->pc = 0x7F30E990u;
    // 7F30E990: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E994u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E994:
    ctx->pc = 0x7F30E994u;
    ctx->downcount -= 3;
    // 7F30E994: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E998:
    ctx->pc = 0x7F30E998u;
    // 7F30E998: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30E99C:
    ctx->pc = 0x7F30E99Cu;
    // 7F30E99C: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30E9A0u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30E9A0:
    ctx->pc = 0x7F30E9A0u;
    ctx->downcount -= 1;
    // 7F30E9A0: b       0x7F30EB30
    {
            goto label_7F30EB30;
    }

label_7F30E9A4:
    ctx->pc = 0x7F30E9A4u;
    ctx->downcount -= 13;
    // 7F30E9A4: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F30E9A8:
    ctx->pc = 0x7F30E9A8u;
    // 7F30E9A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30E9AC:
    ctx->pc = 0x7F30E9ACu;
    // 7F30E9AC: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30E9B0:
    ctx->pc = 0x7F30E9B0u;
    // 7F30E9B0: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E9B4:
    ctx->pc = 0x7F30E9B4u;
    // 7F30E9B4: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30E9B8:
    ctx->pc = 0x7F30E9B8u;
    // 7F30E9B8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30E9BC:
    ctx->pc = 0x7F30E9BCu;
    // 7F30E9BC: lbz     r0, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E9C0:
    ctx->pc = 0x7F30E9C0u;
    // 7F30E9C0: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30E9C4:
    ctx->pc = 0x7F30E9C4u;
    // 7F30E9C4: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30E9C8:
    ctx->pc = 0x7F30E9C8u;
    // 7F30E9C8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30E9CC:
    ctx->pc = 0x7F30E9CCu;
    // 7F30E9CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30E9D0:
    ctx->pc = 0x7F30E9D0u;
    // 7F30E9D0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30E9D4:
    ctx->pc = 0x7F30E9D4u;
    // 7F30E9D4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30E9D8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30E9D8:
    ctx->pc = 0x7F30E9D8u;
    ctx->downcount -= 3;
    // 7F30E9D8: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E9DC:
    ctx->pc = 0x7F30E9DCu;
    // 7F30E9DC: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30E9E0:
    ctx->pc = 0x7F30E9E0u;
    // 7F30E9E0: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30E9E4u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30E9E4:
    ctx->pc = 0x7F30E9E4u;
    ctx->downcount -= 1;
    // 7F30E9E4: b       0x7F30EB30
    {
            goto label_7F30EB30;
    }

label_7F30E9E8:
    ctx->pc = 0x7F30E9E8u;
    ctx->downcount -= 14;
    // 7F30E9E8: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30E9EC:
    ctx->pc = 0x7F30E9ECu;
    // 7F30E9EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30E9F0:
    ctx->pc = 0x7F30E9F0u;
    // 7F30E9F0: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30E9F4:
    ctx->pc = 0x7F30E9F4u;
    // 7F30E9F4: addi    r4, r3, -26908
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26908);

label_7F30E9F8:
    ctx->pc = 0x7F30E9F8u;
    // 7F30E9F8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30E9FC:
    ctx->pc = 0x7F30E9FCu;
    // 7F30E9FC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30EA00:
    ctx->pc = 0x7F30EA00u;
    // 7F30EA00: mulli   r3, r0, 108
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F30EA04:
    ctx->pc = 0x7F30EA04u;
    // 7F30EA04: addis   r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(3) << 16);

label_7F30EA08:
    ctx->pc = 0x7F30EA08u;
    // 7F30EA08: addi    r3, r3, -24568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24568);

label_7F30EA0C:
    ctx->pc = 0x7F30EA0Cu;
    // 7F30EA0C: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30EA10:
    ctx->pc = 0x7F30EA10u;
    // 7F30EA10: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F30EA14:
    ctx->pc = 0x7F30EA14u;
    // 7F30EA14: bl      0x8001258C
    {
            ctx->lr = 0x7F30EA18u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F30EA18:
    ctx->pc = 0x7F30EA18u;
    ctx->downcount -= 4;
    // 7F30EA18: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EA1C:
    ctx->pc = 0x7F30EA1Cu;
    // 7F30EA1C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30EA20:
    ctx->pc = 0x7F30EA20u;
    // 7F30EA20: addi    r3, r3, -8288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8288);

label_7F30EA24:
    ctx->pc = 0x7F30EA24u;
    // 7F30EA24: bl      0x80014AB0
    {
            ctx->lr = 0x7F30EA28u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F30EA28:
    ctx->pc = 0x7F30EA28u;
    ctx->downcount -= 7;
    // 7F30EA28: addi    r0, r29, 6220
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(6220);

label_7F30EA2C:
    ctx->pc = 0x7F30EA2Cu;
    // 7F30EA2C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EA30:
    ctx->pc = 0x7F30EA30u;
    // 7F30EA30: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F30EA34:
    ctx->pc = 0x7F30EA34u;
    // 7F30EA34: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30EA38:
    ctx->pc = 0x7F30EA38u;
    // 7F30EA38: stw     r0, -8116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EA3C:
    ctx->pc = 0x7F30EA3Cu;
    // 7F30EA3C: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F30EA40:
    ctx->pc = 0x7F30EA40u;
    // 7F30EA40: bl      0x7F312C68
    {
            ctx->lr = 0x7F30EA44u;
            ctx->pc = 0x7F312C68u;
            return;
    }

label_7F30EA44:
    ctx->pc = 0x7F30EA44u;
    ctx->downcount -= 13;
    // 7F30EA44: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EA48:
    ctx->pc = 0x7F30EA48u;
    // 7F30EA48: lbz     r0, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30EA4C:
    ctx->pc = 0x7F30EA4Cu;
    // 7F30EA4C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30EA50:
    ctx->pc = 0x7F30EA50u;
    // 7F30EA50: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30EA54:
    ctx->pc = 0x7F30EA54u;
    // 7F30EA54: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30EA58:
    ctx->pc = 0x7F30EA58u;
    // 7F30EA58: sth     r3, 6144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6144);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F30EA5C:
    ctx->pc = 0x7F30EA5Cu;
    // 7F30EA5C: lbz     r0, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30EA60:
    ctx->pc = 0x7F30EA60u;
    // 7F30EA60: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30EA64:
    ctx->pc = 0x7F30EA64u;
    // 7F30EA64: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30EA68:
    ctx->pc = 0x7F30EA68u;
    // 7F30EA68: add   r3, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30EA6C:
    ctx->pc = 0x7F30EA6Cu;
    // 7F30EA6C: lha     r0, 6144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6144);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30EA70:
    ctx->pc = 0x7F30EA70u;
    // 7F30EA70: cmpwi   r0, 0
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

label_7F30EA74:
    ctx->pc = 0x7F30EA74u;
    // 7F30EA74: bc    12, 2, 0x7F30EAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAF4;
        }
    }

label_7F30EA78:
    ctx->pc = 0x7F30EA78u;
    ctx->downcount -= 1;
    // 7F30EA78: bc    4, 0, 0x7F30EA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EA94;
        }
    }

label_7F30EA7C:
    ctx->pc = 0x7F30EA7Cu;
    ctx->downcount -= 2;
    // 7F30EA7C: cmpwi   r0, -128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30EA80:
    ctx->pc = 0x7F30EA80u;
    // 7F30EA80: bc    12, 2, 0x7F30EAB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAB0;
        }
    }

label_7F30EA84:
    ctx->pc = 0x7F30EA84u;
    ctx->downcount -= 1;
    // 7F30EA84: bc    12, 0, 0x7F30EAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAF4;
        }
    }

label_7F30EA88:
    ctx->pc = 0x7F30EA88u;
    ctx->downcount -= 2;
    // 7F30EA88: cmpwi   r0, -14
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30EA8C:
    ctx->pc = 0x7F30EA8Cu;
    // 7F30EA8C: bc    4, 0, 0x7F30EAB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAB0;
        }
    }

label_7F30EA90:
    ctx->pc = 0x7F30EA90u;
    ctx->downcount -= 1;
    // 7F30EA90: b       0x7F30EAF4
    {
            goto label_7F30EAF4;
    }

label_7F30EA94:
    ctx->pc = 0x7F30EA94u;
    ctx->downcount -= 2;
    // 7F30EA94: cmpwi   r0, 100
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30EA98:
    ctx->pc = 0x7F30EA98u;
    // 7F30EA98: bc    4, 0, 0x7F30EAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAA8;
        }
    }

label_7F30EA9C:
    ctx->pc = 0x7F30EA9Cu;
    ctx->downcount -= 2;
    // 7F30EA9C: cmpwi   r0, 2
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

label_7F30EAA0:
    ctx->pc = 0x7F30EAA0u;
    // 7F30EAA0: bc    4, 0, 0x7F30EAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAF4;
        }
    }

label_7F30EAA4:
    ctx->pc = 0x7F30EAA4u;
    ctx->downcount -= 1;
    // 7F30EAA4: b       0x7F30EAB0
    {
            goto label_7F30EAB0;
    }

label_7F30EAA8:
    ctx->pc = 0x7F30EAA8u;
    ctx->downcount -= 2;
    // 7F30EAA8: cmpwi   r0, 102
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(102);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30EAAC:
    ctx->pc = 0x7F30EAACu;
    // 7F30EAAC: bc    4, 0, 0x7F30EAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EAF4;
        }
    }

label_7F30EAB0:
    ctx->pc = 0x7F30EAB0u;
    ctx->downcount -= 13;
    // 7F30EAB0: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F30EAB4:
    ctx->pc = 0x7F30EAB4u;
    // 7F30EAB4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30EAB8:
    ctx->pc = 0x7F30EAB8u;
    // 7F30EAB8: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EABC:
    ctx->pc = 0x7F30EABCu;
    // 7F30EABC: addis   r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EAC0:
    ctx->pc = 0x7F30EAC0u;
    // 7F30EAC0: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30EAC4:
    ctx->pc = 0x7F30EAC4u;
    // 7F30EAC4: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30EAC8:
    ctx->pc = 0x7F30EAC8u;
    // 7F30EAC8: lbz     r0, -24704(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30EACC:
    ctx->pc = 0x7F30EACCu;
    // 7F30EACC: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30EAD0:
    ctx->pc = 0x7F30EAD0u;
    // 7F30EAD0: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30EAD4:
    ctx->pc = 0x7F30EAD4u;
    // 7F30EAD4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30EAD8:
    ctx->pc = 0x7F30EAD8u;
    // 7F30EAD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30EADC:
    ctx->pc = 0x7F30EADCu;
    // 7F30EADC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EAE0:
    ctx->pc = 0x7F30EAE0u;
    // 7F30EAE0: bl      0x7F31435C
    {
            ctx->lr = 0x7F30EAE4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30EAE4:
    ctx->pc = 0x7F30EAE4u;
    ctx->downcount -= 3;
    // 7F30EAE4: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EAE8:
    ctx->pc = 0x7F30EAE8u;
    // 7F30EAE8: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30EAEC:
    ctx->pc = 0x7F30EAECu;
    // 7F30EAEC: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30EAF0u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30EAF0:
    ctx->pc = 0x7F30EAF0u;
    ctx->downcount -= 1;
    // 7F30EAF0: b       0x7F30EB30
    {
            goto label_7F30EB30;
    }

label_7F30EAF4:
    ctx->pc = 0x7F30EAF4u;
    ctx->downcount -= 3;
    // 7F30EAF4: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EAF8:
    ctx->pc = 0x7F30EAF8u;
    // 7F30EAF8: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F30EAFC:
    ctx->pc = 0x7F30EAFCu;
    // 7F30EAFC: bl      0x7F314F14
    {
            ctx->lr = 0x7F30EB00u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30EB00:
    ctx->pc = 0x7F30EB00u;
    ctx->downcount -= 10;
    // 7F30EB00: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30EB04:
    ctx->pc = 0x7F30EB04u;
    // 7F30EB04: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EB08:
    ctx->pc = 0x7F30EB08u;
    // 7F30EB08: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30EB0C:
    ctx->pc = 0x7F30EB0Cu;
    // 7F30EB0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30EB10:
    ctx->pc = 0x7F30EB10u;
    // 7F30EB10: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EB14:
    ctx->pc = 0x7F30EB14u;
    // 7F30EB14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30EB18:
    ctx->pc = 0x7F30EB18u;
    // 7F30EB18: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30EB1C:
    ctx->pc = 0x7F30EB1Cu;
    // 7F30EB1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30EB20:
    ctx->pc = 0x7F30EB20u;
    // 7F30EB20: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30EB24:
    ctx->pc = 0x7F30EB24u;
    // 7F30EB24: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30EB28u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30EB28:
    ctx->pc = 0x7F30EB28u;
    ctx->downcount -= 2;
    // 7F30EB28: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F30EB2C:
    ctx->pc = 0x7F30EB2Cu;
    // 7F30EB2C: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EB30:
    ctx->pc = 0x7F30EB30u;
    ctx->downcount -= 6;
    // 7F30EB30: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F30EB34:
    ctx->pc = 0x7F30EB34u;
    // 7F30EB34: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30EB38:
    ctx->pc = 0x7F30EB38u;
    // 7F30EB38: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F30EB3C:
    ctx->pc = 0x7F30EB3Cu;
    // 7F30EB3C: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30EB40:
    ctx->pc = 0x7F30EB40u;
    // 7F30EB40: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30EB44:
    ctx->pc = 0x7F30EB44u;
    // 7F30EB44: bl      0x7F31435C
    {
            ctx->lr = 0x7F30EB48u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30EB48:
    ctx->pc = 0x7F30EB48u;
    ctx->downcount -= 1;
    // 7F30EB48: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EB4C:
    ctx->pc = 0x7F30EB4Cu;
    ctx->downcount -= 6;
    // 7F30EB4C: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EB50:
    ctx->pc = 0x7F30EB50u;
    // 7F30EB50: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30EB54:
    ctx->pc = 0x7F30EB54u;
    // 7F30EB54: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30EB58:
    ctx->pc = 0x7F30EB58u;
    // 7F30EB58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30EB5C:
    ctx->pc = 0x7F30EB5Cu;
    // 7F30EB5C: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30EB60:
    ctx->pc = 0x7F30EB60u;
    // 7F30EB60: bl      0x7F30CE08
    {
            ctx->lr = 0x7F30EB64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30CE08u;
                return;
            }
            goto label_7F30CE08;
    }

label_7F30EB64:
    ctx->pc = 0x7F30EB64u;
    ctx->downcount -= 2;
    // 7F30EB64: cmpwi   r3, 0
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

label_7F30EB68:
    ctx->pc = 0x7F30EB68u;
    // 7F30EB68: bc    12, 2, 0x7F30EB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EB88;
        }
    }

label_7F30EB6C:
    ctx->pc = 0x7F30EB6Cu;
    ctx->downcount -= 7;
    // 7F30EB6C: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EB70:
    ctx->pc = 0x7F30EB70u;
    // 7F30EB70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30EB74:
    ctx->pc = 0x7F30EB74u;
    // 7F30EB74: stw     r0, -10656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EB78:
    ctx->pc = 0x7F30EB78u;
    // 7F30EB78: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F30EB7C:
    ctx->pc = 0x7F30EB7Cu;
    // 7F30EB7C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30EB80:
    ctx->pc = 0x7F30EB80u;
    // 7F30EB80: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EB84:
    ctx->pc = 0x7F30EB84u;
    // 7F30EB84: stw     r0, 6020(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EB88:
    ctx->pc = 0x7F30EB88u;
    ctx->downcount -= 3;
    // 7F30EB88: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EB8C:
    ctx->pc = 0x7F30EB8Cu;
    // 7F30EB8C: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30EB90:
    ctx->pc = 0x7F30EB90u;
    // 7F30EB90: bl      0x7F314D8C
    {
            ctx->lr = 0x7F30EB94u;
            ctx->pc = 0x7F314D8Cu;
            return;
    }

label_7F30EB94:
    ctx->pc = 0x7F30EB94u;
    ctx->downcount -= 2;
    // 7F30EB94: cmpwi   r3, 0
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

label_7F30EB98:
    ctx->pc = 0x7F30EB98u;
    // 7F30EB98: bc    12, 2, 0x7F30EC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EC98;
        }
    }

label_7F30EB9C:
    ctx->pc = 0x7F30EB9Cu;
    ctx->downcount -= 3;
    // 7F30EB9C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30EBA0:
    ctx->pc = 0x7F30EBA0u;
    // 7F30EBA0: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EBA4:
    ctx->pc = 0x7F30EBA4u;
    // 7F30EBA4: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EBA8:
    ctx->pc = 0x7F30EBA8u;
    ctx->downcount -= 9;
    // 7F30EBA8: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EBAC:
    ctx->pc = 0x7F30EBACu;
    // 7F30EBAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30EBB0:
    ctx->pc = 0x7F30EBB0u;
    // 7F30EBB0: stw     r5, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30EBB4:
    ctx->pc = 0x7F30EBB4u;
    // 7F30EBB4: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_7F30EBB8:
    ctx->pc = 0x7F30EBB8u;
    // 7F30EBB8: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F30EBBC:
    ctx->pc = 0x7F30EBBCu;
    // 7F30EBBC: stb     r5, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30EBC0:
    ctx->pc = 0x7F30EBC0u;
    // 7F30EBC0: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EBC4:
    ctx->pc = 0x7F30EBC4u;
    // 7F30EBC4: stw     r0, -10556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EBC8:
    ctx->pc = 0x7F30EBC8u;
    // 7F30EBC8: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EBCC:
    ctx->pc = 0x7F30EBCCu;
    ctx->downcount -= 9;
    // 7F30EBCC: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EBD0:
    ctx->pc = 0x7F30EBD0u;
    // 7F30EBD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30EBD4:
    ctx->pc = 0x7F30EBD4u;
    // 7F30EBD4: stw     r5, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30EBD8:
    ctx->pc = 0x7F30EBD8u;
    // 7F30EBD8: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_7F30EBDC:
    ctx->pc = 0x7F30EBDCu;
    // 7F30EBDC: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F30EBE0:
    ctx->pc = 0x7F30EBE0u;
    // 7F30EBE0: stb     r5, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30EBE4:
    ctx->pc = 0x7F30EBE4u;
    // 7F30EBE4: stw     r3, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EBE8:
    ctx->pc = 0x7F30EBE8u;
    // 7F30EBE8: stw     r0, -10556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EBEC:
    ctx->pc = 0x7F30EBECu;
    // 7F30EBEC: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EBF0:
    ctx->pc = 0x7F30EBF0u;
    ctx->downcount -= 10;
    // 7F30EBF0: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EBF4:
    ctx->pc = 0x7F30EBF4u;
    // 7F30EBF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30EBF8:
    ctx->pc = 0x7F30EBF8u;
    // 7F30EBF8: stw     r5, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30EBFC:
    ctx->pc = 0x7F30EBFCu;
    // 7F30EBFC: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EC00:
    ctx->pc = 0x7F30EC00u;
    // 7F30EC00: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F30EC04:
    ctx->pc = 0x7F30EC04u;
    // 7F30EC04: stb     r5, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30EC08:
    ctx->pc = 0x7F30EC08u;
    // 7F30EC08: addi    r4, r4, -10556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10556);

label_7F30EC0C:
    ctx->pc = 0x7F30EC0Cu;
    // 7F30EC0C: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F30EC10:
    ctx->pc = 0x7F30EC10u;
    // 7F30EC10: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EC14:
    ctx->pc = 0x7F30EC14u;
    // 7F30EC14: bl      0x7F315530
    {
            ctx->lr = 0x7F30EC18u;
            ctx->pc = 0x7F315530u;
            return;
    }

label_7F30EC18:
    ctx->pc = 0x7F30EC18u;
    ctx->downcount -= 1;
    // 7F30EC18: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EC1C:
    ctx->pc = 0x7F30EC1Cu;
    ctx->downcount -= 12;
    // 7F30EC1C: addis   r6, r31, 4
    ctx->gpr[6] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EC20:
    ctx->pc = 0x7F30EC20u;
    // 7F30EC20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30EC24:
    ctx->pc = 0x7F30EC24u;
    // 7F30EC24: stw     r4, -10656(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30EC28:
    ctx->pc = 0x7F30EC28u;
    // 7F30EC28: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EC2C:
    ctx->pc = 0x7F30EC2Cu;
    // 7F30EC2C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F30EC30:
    ctx->pc = 0x7F30EC30u;
    // 7F30EC30: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_7F30EC34:
    ctx->pc = 0x7F30EC34u;
    // 7F30EC34: stw     r4, -10552(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10552);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F30EC38:
    ctx->pc = 0x7F30EC38u;
    // 7F30EC38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30EC3C:
    ctx->pc = 0x7F30EC3Cu;
    // 7F30EC3C: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30EC40:
    ctx->pc = 0x7F30EC40u;
    // 7F30EC40: stb     r5, -10559(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30EC44:
    ctx->pc = 0x7F30EC44u;
    // 7F30EC44: stw     r0, 6004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EC48:
    ctx->pc = 0x7F30EC48u;
    // 7F30EC48: bl      0x7F31733C
    {
            ctx->lr = 0x7F30EC4Cu;
            ctx->pc = 0x7F31733Cu;
            return;
    }

label_7F30EC4C:
    ctx->pc = 0x7F30EC4Cu;
    ctx->downcount -= 3;
    // 7F30EC4C: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EC50:
    ctx->pc = 0x7F30EC50u;
    // 7F30EC50: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_7F30EC54:
    ctx->pc = 0x7F30EC54u;
    // 7F30EC54: bl      0x7F3177EC
    {
            ctx->lr = 0x7F30EC58u;
            ctx->pc = 0x7F3177ECu;
            return;
    }

label_7F30EC58:
    ctx->pc = 0x7F30EC58u;
    ctx->downcount -= 6;
    // 7F30EC58: lis     r3, 74
    ctx->gpr[3] = ((u32)(s32)(74) << 16);

label_7F30EC5C:
    ctx->pc = 0x7F30EC5Cu;
    // 7F30EC5C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F30EC60:
    ctx->pc = 0x7F30EC60u;
    // 7F30EC60: addi    r3, r3, -13619
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13619);

label_7F30EC64:
    ctx->pc = 0x7F30EC64u;
    // 7F30EC64: addi    r5, r31, 112
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(112);

label_7F30EC68:
    ctx->pc = 0x7F30EC68u;
    // 7F30EC68: addi    r6, r31, 116
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(116);

label_7F30EC6C:
    ctx->pc = 0x7F30EC6Cu;
    // 7F30EC6C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30EC70u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30EC70:
    ctx->pc = 0x7F30EC70u;
    ctx->downcount -= 5;
    // 7F30EC70: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30EC74:
    ctx->pc = 0x7F30EC74u;
    // 7F30EC74: addis   r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EC78:
    ctx->pc = 0x7F30EC78u;
    // 7F30EC78: lbz     r4, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30EC7C:
    ctx->pc = 0x7F30EC7Cu;
    // 7F30EC7C: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30EC80:
    ctx->pc = 0x7F30EC80u;
    // 7F30EC80: bl      0x7F314F54
    {
            ctx->lr = 0x7F30EC84u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30EC84:
    ctx->pc = 0x7F30EC84u;
    ctx->downcount -= 1;
    // 7F30EC84: b       0x7F30EC98
    {
            goto label_7F30EC98;
    }

label_7F30EC88:
    ctx->pc = 0x7F30EC88u;
    ctx->downcount -= 4;
    // 7F30EC88: addis   r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(4) << 16);

label_7F30EC8C:
    ctx->pc = 0x7F30EC8Cu;
    // 7F30EC8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30EC90:
    ctx->pc = 0x7F30EC90u;
    // 7F30EC90: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30EC94:
    ctx->pc = 0x7F30EC94u;
    // 7F30EC94: bl      0x7F30B9B4
    {
            ctx->lr = 0x7F30EC98u;
            ctx->pc = 0x7F30B9B4u;
            return;
    }

label_7F30EC98:
    ctx->pc = 0x7F30EC98u;
    ctx->downcount -= 16;
    // 7F30EC98: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30EC9C:
    ctx->pc = 0x7F30EC9Cu;
    // 7F30EC9C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30ECA0:
    ctx->pc = 0x7F30ECA0u;
    // 7F30ECA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30ECA4:
    ctx->pc = 0x7F30ECA4u;
    // 7F30ECA4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F30ECA8:
    ctx->pc = 0x7F30ECA8u;
    // 7F30ECA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30ECAC:
    ctx->pc = 0x7F30ECACu;
    ctx->downcount -= 8;
    // 7F30ECAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30ECB0:
    ctx->pc = 0x7F30ECB0u;
    // 7F30ECB0: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30ECB4:
    ctx->pc = 0x7F30ECB4u;
    // 7F30ECB4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30ECB8:
    ctx->pc = 0x7F30ECB8u;
    // 7F30ECB8: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30ECBC:
    ctx->pc = 0x7F30ECBCu;
    // 7F30ECBC: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30ECC0:
    ctx->pc = 0x7F30ECC0u;
    // 7F30ECC0: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F30ECC4:
    ctx->pc = 0x7F30ECC4u;
    // 7F30ECC4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30ECC8:
    ctx->downcount -= 6;
    // 7F30ECC8: add   r9, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F30ECCC:
    ctx->pc = 0x7F30ECCCu;
    // 7F30ECCC: lwz     r10, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F30ECD0:
    ctx->pc = 0x7F30ECD0u;
    // 7F30ECD0: stw     r8, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F30ECD4:
    ctx->pc = 0x7F30ECD4u;
    // 7F30ECD4: stw     r7, 64(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F30ECD8:
    ctx->pc = 0x7F30ECD8u;
    // 7F30ECD8: stw     r6, 84(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30ECDC:
    // 7F30ECDC: b       0x7F30ECE8
    {
            goto label_7F30ECE8;
    }

label_7F30ECE0:
    loop_7F30ECE0(ctx);
    if (ctx->pc == 0x7F30ECF0u) goto label_7F30ECF0;
    return;
label_7F30ECE4:
    ctx->pc = 0x7F30ECE4u;
    // 7F30ECE4: lwz     r10, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F30ECE8:
    ctx->downcount -= 2;
    // 7F30ECE8: cmplwi  r10, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[10]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30ECEC:
    // 7F30ECEC: bc    4, 2, 0x7F30ECE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ECE0u;
                return;
            }
            goto label_7F30ECE0;
        }
    }

label_7F30ECF0:
    ctx->downcount -= 2;
    // 7F30ECF0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F30ECF4:
    // 7F30ECF4: bc    16, 0, 0x7F30ECC8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ECC8u;
                return;
            }
            goto label_7F30ECC8;
        }
    }

label_7F30ECF8:
    ctx->pc = 0x7F30ECF8u;
    ctx->downcount -= 1;
    // 7F30ECF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30ECFC:
    ctx->pc = 0x7F30ECFCu;
    ctx->downcount -= 16;
    // 7F30ECFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30ED00:
    ctx->pc = 0x7F30ED00u;
    // 7F30ED00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30ED04:
    ctx->pc = 0x7F30ED04u;
    // 7F30ED04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30ED08:
    ctx->pc = 0x7F30ED08u;
    // 7F30ED08: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30ED0C:
    ctx->pc = 0x7F30ED0Cu;
    // 7F30ED0C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30ED10:
    ctx->pc = 0x7F30ED10u;
    // 7F30ED10: bl      0x7F30ECAC
    {
            ctx->lr = 0x7F30ED14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ECACu;
                return;
            }
            goto label_7F30ECAC;
    }

label_7F30ED14:
    ctx->pc = 0x7F30ED14u;
    ctx->downcount -= 2;
    // 7F30ED14: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F30ED18:
    ctx->pc = 0x7F30ED18u;
    // 7F30ED18: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F30ED1C:
    ctx->downcount -= 3;
    // 7F30ED1C: add   r30, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F30ED20:
    ctx->pc = 0x7F30ED20u;
    // 7F30ED20: lwz     r28, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30ED24:
    // 7F30ED24: b       0x7F30ED5C
    {
            goto label_7F30ED5C;
    }

label_7F30ED28:
    ctx->pc = 0x7F30ED28u;
    ctx->downcount -= 2;
    // 7F30ED28: lwz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30ED2C:
    // 7F30ED2C: bl      0x7F37CE98
    {
            ctx->lr = 0x7F30ED30u;
            ctx->pc = 0x7F37CE98u;
            return;
    }

label_7F30ED30:
    ctx->pc = 0x7F30ED30u;
    ctx->downcount -= 4;
    // 7F30ED30: stw     r3, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30ED34:
    ctx->pc = 0x7F30ED34u;
    // 7F30ED34: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30ED38:
    // 7F30ED38: cmpwi   r0, 0
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

label_7F30ED3C:
    // 7F30ED3C: bc    12, 2, 0x7F30ED4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30ED4C;
        }
    }

label_7F30ED40:
    ctx->pc = 0x7F30ED40u;
    ctx->downcount -= 3;
    // 7F30ED40: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30ED44:
    // 7F30ED44: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30ED48:
    ctx->pc = 0x7F30ED48u;
    // 7F30ED48: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30ED4C:
    ctx->pc = 0x7F30ED4Cu;
    ctx->downcount -= 4;
    // 7F30ED4C: lwz     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30ED50:
    // 7F30ED50: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30ED54:
    ctx->pc = 0x7F30ED54u;
    // 7F30ED54: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30ED58:
    ctx->pc = 0x7F30ED58u;
    // 7F30ED58: lwz     r28, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30ED5C:
    ctx->downcount -= 2;
    // 7F30ED5C: cmplwi  r28, 0x0000
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

label_7F30ED60:
    // 7F30ED60: bc    4, 2, 0x7F30ED28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ED28u;
                return;
            }
            goto label_7F30ED28;
        }
    }

label_7F30ED64:
    ctx->downcount -= 4;
    // 7F30ED64: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F30ED68:
    // 7F30ED68: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F30ED6C:
    // 7F30ED6C: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30ED70:
    // 7F30ED70: bc    12, 0, 0x7F30ED1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ED1Cu;
                return;
            }
            goto label_7F30ED1C;
        }
    }

label_7F30ED74:
    ctx->pc = 0x7F30ED74u;
    ctx->downcount -= 4;
    // 7F30ED74: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30ED78:
    ctx->pc = 0x7F30ED78u;
    // 7F30ED78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30ED7C:
    ctx->pc = 0x7F30ED7Cu;
    // 7F30ED7C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30ED80:
    ctx->downcount -= 4;
    // 7F30ED80: add   r4, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30ED84:
    ctx->pc = 0x7F30ED84u;
    // 7F30ED84: lwz     r5, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30ED88:
    // 7F30ED88: cmpwi   r5, 0
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

label_7F30ED8C:
    // 7F30ED8C: bc    12, 2, 0x7F30EDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EDA0;
        }
    }

label_7F30ED90:
    ctx->pc = 0x7F30ED90u;
    ctx->downcount -= 45;
    // 7F30ED90: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30ED94:
    // 7F30ED94: mulli   r0, r0, 100
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)100);

label_7F30ED98:
    // 7F30ED98: divw   r0, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30ED9C:
    ctx->pc = 0x7F30ED9Cu;
    // 7F30ED9C: stw     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EDA0:
    ctx->downcount -= 2;
    // 7F30EDA0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F30EDA4:
    // 7F30EDA4: bc    16, 0, 0x7F30ED80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ED80u;
                return;
            }
            goto label_7F30ED80;
        }
    }

label_7F30EDA8:
    ctx->pc = 0x7F30EDA8u;
    ctx->downcount -= 16;
    // 7F30EDA8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30EDAC:
    ctx->pc = 0x7F30EDACu;
    // 7F30EDAC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EDB0:
    ctx->pc = 0x7F30EDB0u;
    // 7F30EDB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30EDB4:
    ctx->pc = 0x7F30EDB4u;
    // 7F30EDB4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30EDB8:
    ctx->pc = 0x7F30EDB8u;
    // 7F30EDB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30EDBC:
    ctx->pc = 0x7F30EDBCu;
    ctx->downcount -= 19;
    // 7F30EDBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30EDC0:
    ctx->pc = 0x7F30EDC0u;
    // 7F30EDC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30EDC4:
    ctx->pc = 0x7F30EDC4u;
    // 7F30EDC4: lis     r4, 110
    ctx->gpr[4] = ((u32)(s32)(110) << 16);

label_7F30EDC8:
    ctx->pc = 0x7F30EDC8u;
    // 7F30EDC8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EDCC:
    ctx->pc = 0x7F30EDCCu;
    // 7F30EDCC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30EDD0:
    ctx->pc = 0x7F30EDD0u;
    // 7F30EDD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30EDD4:
    ctx->pc = 0x7F30EDD4u;
    // 7F30EDD4: addi    r3, r4, 19859
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(19859);

label_7F30EDD8:
    ctx->pc = 0x7F30EDD8u;
    // 7F30EDD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F30EDDC:
    ctx->pc = 0x7F30EDDCu;
    // 7F30EDDC: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F30EDE0u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F30EDE0:
    ctx->pc = 0x7F30EDE0u;
    ctx->downcount -= 1;
    // 7F30EDE0: bl      0x7F3C6640
    {
            ctx->lr = 0x7F30EDE4u;
            ctx->pc = 0x7F3C6640u;
            return;
    }

label_7F30EDE4:
    ctx->pc = 0x7F30EDE4u;
    ctx->downcount -= 1;
    // 7F30EDE4: b       0x7F30EEEC
    {
            goto label_7F30EEEC;
    }

label_7F30EDE8:
    ctx->downcount -= 1;
    // 7F30EDE8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F30EDECu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F30EDEC:
    ctx->downcount -= 2;
    // 7F30EDEC: or.   r30, r3, r3
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

label_7F30EDF0:
    // 7F30EDF0: bc    12, 0, 0x7F30EECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EECC;
        }
    }

label_7F30EDF4:
    ctx->downcount -= 2;
    // 7F30EDF4: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_7F30EDF8:
    // 7F30EDF8: bl      0x7F3C9148
    {
            ctx->lr = 0x7F30EDFCu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F30EDFC:
    ctx->downcount -= 2;
    // 7F30EDFC: or.   r29, r3, r3
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

label_7F30EE00:
    // 7F30EE00: bc    4, 2, 0x7F30EE0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EE0C;
        }
    }

label_7F30EE04:
    ctx->downcount -= 2;
    // 7F30EE04: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F30EE08:
    // 7F30EE08: b       0x7F30EF30
    {
            goto label_7F30EF30;
    }

label_7F30EE0C:
    ctx->downcount -= 2;
    // 7F30EE0C: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_7F30EE10:
    // 7F30EE10: bl      0x7F3C9120
    {
            ctx->lr = 0x7F30EE14u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F30EE14:
    ctx->pc = 0x7F30EE14u;
    ctx->downcount -= 2;
    // 7F30EE14: stw     r30, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F30EE18:
    // 7F30EE18: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE1Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE1C:
    ctx->pc = 0x7F30EE1Cu;
    ctx->downcount -= 2;
    // 7F30EE1C: stw     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE20:
    // 7F30EE20: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F30EE24u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F30EE24:
    ctx->pc = 0x7F30EE24u;
    ctx->downcount -= 2;
    // 7F30EE24: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE28:
    // 7F30EE28: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE2Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE2C:
    ctx->pc = 0x7F30EE2Cu;
    ctx->downcount -= 2;
    // 7F30EE2C: stw     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE30:
    // 7F30EE30: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE34u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE34:
    ctx->pc = 0x7F30EE34u;
    ctx->downcount -= 2;
    // 7F30EE34: stw     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE38:
    // 7F30EE38: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F30EE3Cu;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F30EE3C:
    ctx->pc = 0x7F30EE3Cu;
    ctx->downcount -= 2;
    // 7F30EE3C: stw     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE40:
    // 7F30EE40: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE44u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE44:
    ctx->downcount -= 1;
    // 7F30EE44: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE48u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE48:
    ctx->downcount -= 2;
    // 7F30EE48: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30EE4C:
    // 7F30EE4C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EE50u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EE50:
    ctx->pc = 0x7F30EE50u;
    ctx->downcount -= 14;
    // 7F30EE50: stw     r3, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EE54:
    // 7F30EE54: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_7F30EE58:
    // 7F30EE58: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F30EE5C:
    // 7F30EE5C: li      r5, 90
    ctx->gpr[5] = (u32)(s32)(90);

label_7F30EE60:
    ctx->pc = 0x7F30EE60u;
    // 7F30EE60: stb     r3, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30EE64:
    // 7F30EE64: li      r4, 85
    ctx->gpr[4] = (u32)(s32)(85);

label_7F30EE68:
    // 7F30EE68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30EE6C:
    // 7F30EE6C: add   r6, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F30EE70:
    ctx->pc = 0x7F30EE70u;
    // 7F30EE70: stb     r5, 45(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(45);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30EE74:
    ctx->pc = 0x7F30EE74u;
    // 7F30EE74: stb     r4, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30EE78:
    ctx->pc = 0x7F30EE78u;
    // 7F30EE78: stb     r3, 47(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(47);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F30EE7C:
    ctx->pc = 0x7F30EE7Cu;
    // 7F30EE7C: lwz     r3, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EE80:
    // 7F30EE80: cmplwi  r3, 0x0000
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

label_7F30EE84:
    // 7F30EE84: bc    12, 2, 0x7F30EEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EEA4;
        }
    }

label_7F30EE88:
    ctx->downcount -= 1;
    // 7F30EE88: b       0x7F30EE90
    {
            goto label_7F30EE90;
    }

label_7F30EE8C:
    loop_7F30EE8C(ctx);
    if (ctx->pc == 0x7F30EE9Cu) goto label_7F30EE9C;
    return;
label_7F30EE90:
    ctx->pc = 0x7F30EE90u;
    ctx->downcount -= 3;
    // 7F30EE90: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EE94:
    // 7F30EE94: cmplwi  r0, 0x0000
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

label_7F30EE98:
    // 7F30EE98: bc    4, 2, 0x7F30EE8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EE8Cu;
                return;
            }
            goto label_7F30EE8C;
        }
    }

label_7F30EE9C:
    ctx->pc = 0x7F30EE9Cu;
    ctx->downcount -= 2;
    // 7F30EE9C: stw     r29, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F30EEA0:
    // 7F30EEA0: b       0x7F30EEA8
    {
            goto label_7F30EEA8;
    }

label_7F30EEA4:
    ctx->pc = 0x7F30EEA4u;
    ctx->downcount -= 1;
    // 7F30EEA4: stw     r29, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F30EEA8:
    ctx->pc = 0x7F30EEA8u;
    ctx->downcount -= 9;
    // 7F30EEA8: lwz     r3, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EEAC:
    // 7F30EEAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30EEB0:
    ctx->pc = 0x7F30EEB0u;
    // 7F30EEB0: stw     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EEB4:
    ctx->pc = 0x7F30EEB4u;
    // 7F30EEB4: lwz     r3, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EEB8:
    // 7F30EEB8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30EEBC:
    ctx->pc = 0x7F30EEBCu;
    // 7F30EEBC: stw     r3, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30EEC0:
    ctx->pc = 0x7F30EEC0u;
    // 7F30EEC0: stw     r0, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EEC4:
    ctx->pc = 0x7F30EEC4u;
    // 7F30EEC4: stw     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EEC8:
    // 7F30EEC8: b       0x7F30EEEC
    {
            goto label_7F30EEEC;
    }

label_7F30EECC:
    ctx->downcount -= 1;
    // 7F30EECC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EED0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EED0:
    ctx->downcount -= 1;
    // 7F30EED0: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F30EED4u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F30EED4:
    ctx->downcount -= 1;
    // 7F30EED4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EED8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EED8:
    ctx->downcount -= 1;
    // 7F30EED8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EEDCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EEDC:
    ctx->downcount -= 1;
    // 7F30EEDC: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F30EEE0u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F30EEE0:
    ctx->downcount -= 1;
    // 7F30EEE0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EEE4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EEE4:
    ctx->downcount -= 1;
    // 7F30EEE4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EEE8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EEE8:
    ctx->downcount -= 1;
    // 7F30EEE8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F30EEECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F30EEEC:
    ctx->downcount -= 1;
    // 7F30EEEC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F30EEF0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F30EEF0:
    ctx->downcount -= 2;
    // 7F30EEF0: cmplwi  r3, 0x0000
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

label_7F30EEF4:
    // 7F30EEF4: bc    4, 2, 0x7F30EDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EDE8u;
                return;
            }
            goto label_7F30EDE8;
        }
    }

label_7F30EEF8:
    ctx->pc = 0x7F30EEF8u;
    ctx->downcount -= 4;
    // 7F30EEF8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30EEFC:
    ctx->pc = 0x7F30EEFCu;
    // 7F30EEFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30EF00:
    ctx->pc = 0x7F30EF00u;
    // 7F30EF00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30EF04:
    ctx->downcount -= 4;
    // 7F30EF04: add   r3, r31, r5
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30EF08:
    ctx->pc = 0x7F30EF08u;
    // 7F30EF08: lwz     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30EF0C:
    // 7F30EF0C: cmpwi   r4, 0
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

label_7F30EF10:
    // 7F30EF10: bc    12, 2, 0x7F30EF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EF24;
        }
    }

label_7F30EF14:
    ctx->pc = 0x7F30EF14u;
    ctx->downcount -= 45;
    // 7F30EF14: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EF18:
    // 7F30EF18: mulli   r0, r0, 100
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)100);

label_7F30EF1C:
    // 7F30EF1C: divw   r0, r0, r4
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30EF20:
    ctx->pc = 0x7F30EF20u;
    // 7F30EF20: stw     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EF24:
    ctx->downcount -= 2;
    // 7F30EF24: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F30EF28:
    // 7F30EF28: bc    16, 0, 0x7F30EF04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EF04u;
                return;
            }
            goto label_7F30EF04;
        }
    }

label_7F30EF2C:
    ctx->pc = 0x7F30EF2Cu;
    ctx->downcount -= 1;
    // 7F30EF2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F30EF30:
    ctx->pc = 0x7F30EF30u;
    ctx->downcount -= 16;
    // 7F30EF30: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30EF34:
    ctx->pc = 0x7F30EF34u;
    // 7F30EF34: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EF38:
    ctx->pc = 0x7F30EF38u;
    // 7F30EF38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30EF3C:
    ctx->pc = 0x7F30EF3Cu;
    // 7F30EF3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F30EF40:
    ctx->pc = 0x7F30EF40u;
    // 7F30EF40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30EF44:
    ctx->pc = 0x7F30EF44u;
    ctx->downcount -= 25;
    // 7F30EF44: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30EF48:
    ctx->pc = 0x7F30EF48u;
    // 7F30EF48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30EF4C:
    ctx->pc = 0x7F30EF4Cu;
    // 7F30EF4C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EF50:
    ctx->pc = 0x7F30EF50u;
    // 7F30EF50: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30EF54:
    ctx->pc = 0x7F30EF54u;
    // 7F30EF54: addis   r29, r3, 3
    ctx->gpr[29] = ctx->gpr[3] + ((u32)(s32)(3) << 16);

label_7F30EF58:
    ctx->pc = 0x7F30EF58u;
    // 7F30EF58: lwz     r0, -26360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-26360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EF5C:
    ctx->pc = 0x7F30EF5Cu;
    // 7F30EF5C: lwz     r4, -26356(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-26356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30EF60:
    ctx->pc = 0x7F30EF60u;
    // 7F30EF60: addi    r29, r29, -26372
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-26372);

label_7F30EF64:
    ctx->pc = 0x7F30EF64u;
    // 7F30EF64: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30EF68:
    ctx->pc = 0x7F30EF68u;
    // 7F30EF68: add   r3, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30EF6C:
    ctx->pc = 0x7F30EF6Cu;
    // 7F30EF6C: lwz     r28, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30EF70:
    ctx->pc = 0x7F30EF70u;
    // 7F30EF70: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_7F30EF74:
    ctx->pc = 0x7F30EF74u;
    // 7F30EF74: cmpwi   r4, 0
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

label_7F30EF78:
    ctx->pc = 0x7F30EF78u;
    // 7F30EF78: bc    4, 1, 0x7F30EF8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30EF8C;
        }
    }

label_7F30EF7C:
    ctx->downcount -= 2;
    // 7F30EF7C: cmplwi  r28, 0x0000
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

label_7F30EF80:
    // 7F30EF80: bc    12, 2, 0x7F30EF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30EF88;
        }
    }

label_7F30EF84:
    ctx->pc = 0x7F30EF84u;
    ctx->downcount -= 1;
    // 7F30EF84: lwz     r28, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30EF88:
    ctx->downcount -= 1;
    // 7F30EF88: bc    16, 0, 0x7F30EF7C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EF7Cu;
                return;
            }
            goto label_7F30EF7C;
        }
    }

label_7F30EF8C:
    ctx->pc = 0x7F30EF8Cu;
    ctx->downcount -= 7;
    // 7F30EF8C: add   r4, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30EF90:
    ctx->pc = 0x7F30EF90u;
    // 7F30EF90: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30EF94:
    ctx->pc = 0x7F30EF94u;
    // 7F30EF94: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30EF98:
    ctx->pc = 0x7F30EF98u;
    // 7F30EF98: lwz     r3, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EF9C:
    ctx->pc = 0x7F30EF9Cu;
    // 7F30EF9C: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30EFA0:
    ctx->pc = 0x7F30EFA0u;
    // 7F30EFA0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30EFA4:
    ctx->pc = 0x7F30EFA4u;
    // 7F30EFA4: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30EFA8u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30EFA8:
    ctx->pc = 0x7F30EFA8u;
    ctx->downcount -= 2;
    // 7F30EFA8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F30EFAC:
    ctx->pc = 0x7F30EFACu;
    // 7F30EFAC: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30EFB0:
    ctx->downcount -= 4;
    // 7F30EFB0: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F30EFB4:
    // 7F30EFB4: cmplwi  r28, 0x0000
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

label_7F30EFB8:
    ctx->pc = 0x7F30EFB8u;
    // 7F30EFB8: lwz     r3, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30EFBC:
    // 7F30EFBC: bc    12, 2, 0x7F30F114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F114;
        }
    }

label_7F30EFC0:
    ctx->pc = 0x7F30EFC0u;
    ctx->downcount -= 8;
    // 7F30EFC0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30EFC4:
    ctx->pc = 0x7F30EFC4u;
    // 7F30EFC4: lwz     r24, 112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(112);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F30EFC8:
    ctx->pc = 0x7F30EFC8u;
    // 7F30EFC8: lwz     r27, 116(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F30EFCC:
    // 7F30EFCC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F30EFD0:
    ctx->pc = 0x7F30EFD0u;
    // 7F30EFD0: lwz     r26, 120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F30EFD4:
    ctx->pc = 0x7F30EFD4u;
    // 7F30EFD4: lwz     r25, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F30EFD8:
    ctx->pc = 0x7F30EFD8u;
    // 7F30EFD8: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30EFDC:
    // 7F30EFDC: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30EFE0u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30EFE0:
    ctx->downcount -= 6;
    // 7F30EFE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30EFE4:
    ctx->pc = 0x7F30EFE4u;
    // 7F30EFE4: lwz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30EFE8:
    // 7F30EFE8: addi    r5, r3, -31648
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31648);

label_7F30EFEC:
    // 7F30EFEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30EFF0:
    // 7F30EFF0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F30EFF4:
    // 7F30EFF4: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30EFF8u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30EFF8:
    ctx->downcount -= 2;
    // 7F30EFF8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F30EFFC:
    // 7F30EFFC: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30F000u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30F000:
    ctx->downcount -= 2;
    // 7F30F000: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30F004:
    // 7F30F004: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30F008u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30F008:
    ctx->downcount -= 2;
    // 7F30F008: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30F00C:
    // 7F30F00C: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30F010u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30F010:
    ctx->downcount -= 2;
    // 7F30F010: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30F014:
    // 7F30F014: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30F018u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30F018:
    ctx->pc = 0x7F30F018u;
    ctx->downcount -= 3;
    // 7F30F018: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F01C:
    // 7F30F01C: cmpwi   r0, 0
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

label_7F30F020:
    // 7F30F020: bc    12, 2, 0x7F30F0B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F0B8;
        }
    }

label_7F30F024:
    ctx->pc = 0x7F30F024u;
    ctx->downcount -= 12;
    // 7F30F024: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F028:
    // 7F30F028: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30F02C:
    // 7F30F02C: addi    r5, r3, -31648
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31648);

label_7F30F030:
    ctx->pc = 0x7F30F030u;
    // 7F30F030: lwz     r6, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30F034:
    // 7F30F034: mulli   r0, r0, 100
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)100);

label_7F30F038:
    ctx->pc = 0x7F30F038u;
    // 7F30F038: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30F03C:
    // 7F30F03C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30F040:
    // 7F30F040: add   r24, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F30F044:
    // 7F30F044: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F048:
    // 7F30F048: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F04Cu;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F04C:
    ctx->downcount -= 2;
    // 7F30F04C: cmpwi   r24, 1300
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(1300);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F050:
    // 7F30F050: bc    12, 0, 0x7F30F074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F074;
        }
    }

label_7F30F054:
    ctx->downcount -= 7;
    // 7F30F054: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30F058:
    // 7F30F058: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30F05C:
    // 7F30F05C: addi    r4, r3, -26756
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26756);

label_7F30F060:
    // 7F30F060: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F064:
    // 7F30F064: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30F068:
    // 7F30F068: addi    r5, r5, -31648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31648);

label_7F30F06C:
    // 7F30F06C: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F070u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F070:
    ctx->downcount -= 1;
    // 7F30F070: b       0x7F30F08C
    {
            goto label_7F30F08C;
    }

label_7F30F074:
    ctx->downcount -= 6;
    // 7F30F074: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30F078:
    // 7F30F078: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30F07C:
    // 7F30F07C: addi    r5, r4, -31648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31648);

label_7F30F080:
    // 7F30F080: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F084:
    // 7F30F084: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F30F088:
    // 7F30F088: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30F08Cu;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30F08C:
    ctx->pc = 0x7F30F08Cu;
    ctx->downcount -= 10;
    // 7F30F08C: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F090:
    // 7F30F090: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F30F094:
    // 7F30F094: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30F098:
    // 7F30F098: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30F09C:
    // 7F30F09C: addi    r6, r5, -26776
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-26776);

label_7F30F0A0:
    // 7F30F0A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F0A4:
    // 7F30F0A4: addi    r5, r4, -31648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31648);

label_7F30F0A8:
    ctx->pc = 0x7F30F0A8u;
    // 7F30F0A8: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30F0AC:
    // 7F30F0AC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F0B0:
    // 7F30F0B0: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F0B4u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F0B4:
    ctx->downcount -= 1;
    // 7F30F0B4: b       0x7F30F10C
    {
            goto label_7F30F10C;
    }

label_7F30F0B8:
    ctx->downcount -= 7;
    // 7F30F0B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30F0BC:
    // 7F30F0BC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30F0C0:
    // 7F30F0C0: addi    r4, r3, -26748
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26748);

label_7F30F0C4:
    // 7F30F0C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F0C8:
    // 7F30F0C8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F30F0CC:
    // 7F30F0CC: addi    r5, r5, -31648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31648);

label_7F30F0D0:
    // 7F30F0D0: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F0D4u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F0D4:
    ctx->downcount -= 7;
    // 7F30F0D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30F0D8:
    // 7F30F0D8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30F0DC:
    // 7F30F0DC: addi    r4, r3, -26756
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26756);

label_7F30F0E0:
    // 7F30F0E0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F0E4:
    // 7F30F0E4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F30F0E8:
    // 7F30F0E8: addi    r5, r5, -31648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31648);

label_7F30F0EC:
    // 7F30F0EC: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F0F0u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F0F0:
    ctx->downcount -= 7;
    // 7F30F0F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F30F0F4:
    // 7F30F0F4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30F0F8:
    // 7F30F0F8: addi    r4, r3, -26780
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26780);

label_7F30F0FC:
    // 7F30F0FC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30F100:
    // 7F30F100: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30F104:
    // 7F30F104: addi    r5, r5, -31648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31648);

label_7F30F108:
    // 7F30F108: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30F10Cu;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30F10C:
    ctx->pc = 0x7F30F10Cu;
    ctx->downcount -= 2;
    // 7F30F10C: lwz     r28, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F30F110:
    // 7F30F110: b       0x7F30F120
    {
            goto label_7F30F120;
    }

label_7F30F114:
    ctx->pc = 0x7F30F114u;
    ctx->downcount -= 3;
    // 7F30F114: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F118:
    // 7F30F118: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30F11C:
    ctx->pc = 0x7F30F11Cu;
    // 7F30F11C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F120:
    ctx->downcount -= 4;
    // 7F30F120: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F30F124:
    // 7F30F124: addi    r31, r31, 20
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(20);

label_7F30F128:
    // 7F30F128: cmpwi   r30, 12
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

label_7F30F12C:
    // 7F30F12C: bc    12, 0, 0x7F30EFB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EFB0u;
                return;
            }
            goto label_7F30EFB0;
        }
    }

label_7F30F130:
    ctx->pc = 0x7F30F130u;
    ctx->downcount -= 16;
    // 7F30F130: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30F134:
    ctx->pc = 0x7F30F134u;
    // 7F30F134: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F138:
    ctx->pc = 0x7F30F138u;
    // 7F30F138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30F13C:
    ctx->pc = 0x7F30F13Cu;
    // 7F30F13C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F30F140:
    ctx->pc = 0x7F30F140u;
    // 7F30F140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30F144:
    ctx->pc = 0x7F30F144u;
    ctx->downcount -= 19;
    // 7F30F144: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30F148:
    ctx->pc = 0x7F30F148u;
    // 7F30F148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30F14C:
    ctx->pc = 0x7F30F14Cu;
    // 7F30F14C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F150:
    ctx->pc = 0x7F30F150u;
    // 7F30F150: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30F154:
    ctx->pc = 0x7F30F154u;
    // 7F30F154: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30F158:
    ctx->pc = 0x7F30F158u;
    // 7F30F158: addis   r31, r30, 3
    ctx->gpr[31] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F15C:
    ctx->pc = 0x7F30F15Cu;
    // 7F30F15C: lwzu     r0, -26372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26372);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[31] = ea;
    }

label_7F30F160:
    ctx->pc = 0x7F30F160u;
    // 7F30F160: cmplwi  r0, 0x0012
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0012u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F164:
    ctx->pc = 0x7F30F164u;
    // 7F30F164: bc    12, 1, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F168:
    ctx->pc = 0x7F30F168u;
    ctx->downcount -= 7;
    // 7F30F168: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30F16C:
    ctx->pc = 0x7F30F16Cu;
    // 7F30F16C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F170:
    ctx->pc = 0x7F30F170u;
    // 7F30F170: addi    r4, r4, -26728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26728);

label_7F30F174:
    ctx->pc = 0x7F30F174u;
    // 7F30F174: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F178:
    ctx->pc = 0x7F30F178u;
    // 7F30F178: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F30F17C:
    ctx->pc = 0x7F30F17Cu;
    // 7F30F17C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F30F180:
    ctx->pc = 0x7F30F180u;
    ctx->downcount -= 10;
    // 7F30F180: addis   r5, r30, 4
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F184:
    ctx->pc = 0x7F30F184u;
    // 7F30F184: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F188:
    ctx->pc = 0x7F30F188u;
    // 7F30F188: stb     r6, -10652(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F30F18C:
    ctx->pc = 0x7F30F18Cu;
    // 7F30F18C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F190:
    ctx->pc = 0x7F30F190u;
    // 7F30F190: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F30F194:
    ctx->pc = 0x7F30F194u;
    // 7F30F194: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F198:
    ctx->pc = 0x7F30F198u;
    // 7F30F198: stb     r6, -10559(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F30F19C:
    ctx->pc = 0x7F30F19Cu;
    // 7F30F19C: stb     r4, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F30F1A0:
    ctx->pc = 0x7F30F1A0u;
    // 7F30F1A0: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F1A4:
    ctx->pc = 0x7F30F1A4u;
    // 7F30F1A4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F1A8:
    ctx->pc = 0x7F30F1A8u;
    ctx->downcount -= 7;
    // 7F30F1A8: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F1AC:
    ctx->pc = 0x7F30F1ACu;
    // 7F30F1AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F1B0:
    ctx->pc = 0x7F30F1B0u;
    // 7F30F1B0: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F1B4:
    ctx->pc = 0x7F30F1B4u;
    // 7F30F1B4: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F1B8:
    ctx->pc = 0x7F30F1B8u;
    // 7F30F1B8: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F1BC:
    ctx->pc = 0x7F30F1BCu;
    // 7F30F1BC: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F1C0:
    ctx->pc = 0x7F30F1C0u;
    // 7F30F1C0: bl      0x7F317894
    {
            ctx->lr = 0x7F30F1C4u;
            ctx->pc = 0x7F317894u;
            return;
    }

label_7F30F1C4:
    ctx->pc = 0x7F30F1C4u;
    ctx->downcount -= 2;
    // 7F30F1C4: cmpwi   r3, -1
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

label_7F30F1C8:
    ctx->pc = 0x7F30F1C8u;
    // 7F30F1C8: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F1CC:
    ctx->pc = 0x7F30F1CCu;
    ctx->downcount -= 1;
    // 7F30F1CC: bc    4, 0, 0x7F30F1E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F1E0;
        }
    }

label_7F30F1D0:
    ctx->pc = 0x7F30F1D0u;
    ctx->downcount -= 2;
    // 7F30F1D0: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F1D4:
    ctx->pc = 0x7F30F1D4u;
    // 7F30F1D4: bc    12, 2, 0x7F30F20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F20C;
        }
    }

label_7F30F1D8:
    ctx->pc = 0x7F30F1D8u;
    ctx->downcount -= 1;
    // 7F30F1D8: bc    4, 0, 0x7F30F200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F200;
        }
    }

label_7F30F1DC:
    ctx->pc = 0x7F30F1DCu;
    ctx->downcount -= 1;
    // 7F30F1DC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F1E0:
    ctx->pc = 0x7F30F1E0u;
    ctx->downcount -= 2;
    // 7F30F1E0: cmpwi   r3, 1
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

label_7F30F1E4:
    ctx->pc = 0x7F30F1E4u;
    // 7F30F1E4: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F1E8:
    ctx->pc = 0x7F30F1E8u;
    ctx->downcount -= 3;
    // 7F30F1E8: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F1EC:
    ctx->pc = 0x7F30F1ECu;
    // 7F30F1EC: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F1F0:
    ctx->pc = 0x7F30F1F0u;
    // 7F30F1F0: bl      0x7F317840
    {
            ctx->lr = 0x7F30F1F4u;
            ctx->pc = 0x7F317840u;
            return;
    }

label_7F30F1F4:
    ctx->pc = 0x7F30F1F4u;
    ctx->downcount -= 3;
    // 7F30F1F4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30F1F8:
    ctx->pc = 0x7F30F1F8u;
    // 7F30F1F8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F1FC:
    ctx->pc = 0x7F30F1FCu;
    // 7F30F1FC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F200:
    ctx->pc = 0x7F30F200u;
    ctx->downcount -= 3;
    // 7F30F200: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F30F204:
    ctx->pc = 0x7F30F204u;
    // 7F30F204: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F208:
    ctx->pc = 0x7F30F208u;
    // 7F30F208: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F20C:
    ctx->pc = 0x7F30F20Cu;
    ctx->downcount -= 3;
    // 7F30F20C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F210:
    ctx->pc = 0x7F30F210u;
    // 7F30F210: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F214:
    ctx->pc = 0x7F30F214u;
    // 7F30F214: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F218:
    ctx->pc = 0x7F30F218u;
    ctx->downcount -= 7;
    // 7F30F218: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F21C:
    ctx->pc = 0x7F30F21Cu;
    // 7F30F21C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F220:
    ctx->pc = 0x7F30F220u;
    // 7F30F220: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F224:
    ctx->pc = 0x7F30F224u;
    // 7F30F224: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F228:
    ctx->pc = 0x7F30F228u;
    // 7F30F228: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F22C:
    ctx->pc = 0x7F30F22Cu;
    // 7F30F22C: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F230:
    ctx->pc = 0x7F30F230u;
    // 7F30F230: bl      0x7F3179F0
    {
            ctx->lr = 0x7F30F234u;
            ctx->pc = 0x7F3179F0u;
            return;
    }

label_7F30F234:
    ctx->pc = 0x7F30F234u;
    ctx->downcount -= 2;
    // 7F30F234: cmpwi   r3, 0
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

label_7F30F238:
    ctx->pc = 0x7F30F238u;
    // 7F30F238: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F23C:
    ctx->pc = 0x7F30F23Cu;
    ctx->downcount -= 1;
    // 7F30F23C: bc    4, 0, 0x7F30F250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F250;
        }
    }

label_7F30F240:
    ctx->pc = 0x7F30F240u;
    ctx->downcount -= 2;
    // 7F30F240: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F244:
    ctx->pc = 0x7F30F244u;
    // 7F30F244: bc    12, 2, 0x7F30F270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F270;
        }
    }

label_7F30F248:
    ctx->pc = 0x7F30F248u;
    ctx->downcount -= 1;
    // 7F30F248: bc    4, 0, 0x7F30F264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F264;
        }
    }

label_7F30F24C:
    ctx->pc = 0x7F30F24Cu;
    ctx->downcount -= 1;
    // 7F30F24C: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F250:
    ctx->pc = 0x7F30F250u;
    ctx->downcount -= 2;
    // 7F30F250: cmpwi   r3, 2
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

label_7F30F254:
    ctx->pc = 0x7F30F254u;
    // 7F30F254: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F258:
    ctx->pc = 0x7F30F258u;
    ctx->downcount -= 3;
    // 7F30F258: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30F25C:
    ctx->pc = 0x7F30F25Cu;
    // 7F30F25C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F260:
    ctx->pc = 0x7F30F260u;
    // 7F30F260: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F264:
    ctx->pc = 0x7F30F264u;
    ctx->downcount -= 3;
    // 7F30F264: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_7F30F268:
    ctx->pc = 0x7F30F268u;
    // 7F30F268: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F26C:
    ctx->pc = 0x7F30F26Cu;
    // 7F30F26C: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F270:
    ctx->pc = 0x7F30F270u;
    ctx->downcount -= 3;
    // 7F30F270: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F30F274:
    ctx->pc = 0x7F30F274u;
    // 7F30F274: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F278:
    ctx->pc = 0x7F30F278u;
    // 7F30F278: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F27C:
    ctx->pc = 0x7F30F27Cu;
    ctx->downcount -= 7;
    // 7F30F27C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F280:
    ctx->pc = 0x7F30F280u;
    // 7F30F280: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F284:
    ctx->pc = 0x7F30F284u;
    // 7F30F284: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F288:
    ctx->pc = 0x7F30F288u;
    // 7F30F288: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F28C:
    ctx->pc = 0x7F30F28Cu;
    // 7F30F28C: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F290:
    ctx->pc = 0x7F30F290u;
    // 7F30F290: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F294:
    ctx->pc = 0x7F30F294u;
    // 7F30F294: bl      0x7F316FB0
    {
            ctx->lr = 0x7F30F298u;
            ctx->pc = 0x7F316FB0u;
            return;
    }

label_7F30F298:
    ctx->pc = 0x7F30F298u;
    ctx->downcount -= 2;
    // 7F30F298: cmpwi   r3, 0
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

label_7F30F29C:
    ctx->pc = 0x7F30F29Cu;
    // 7F30F29C: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F2A0:
    ctx->pc = 0x7F30F2A0u;
    ctx->downcount -= 1;
    // 7F30F2A0: bc    4, 0, 0x7F30F2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F2B4;
        }
    }

label_7F30F2A4:
    ctx->pc = 0x7F30F2A4u;
    ctx->downcount -= 2;
    // 7F30F2A4: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F2A8:
    ctx->pc = 0x7F30F2A8u;
    // 7F30F2A8: bc    12, 2, 0x7F30F3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F3D8;
        }
    }

label_7F30F2AC:
    ctx->pc = 0x7F30F2ACu;
    ctx->downcount -= 1;
    // 7F30F2AC: bc    4, 0, 0x7F30F3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F3CC;
        }
    }

label_7F30F2B0:
    ctx->pc = 0x7F30F2B0u;
    ctx->downcount -= 1;
    // 7F30F2B0: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F2B4:
    ctx->pc = 0x7F30F2B4u;
    ctx->downcount -= 2;
    // 7F30F2B4: cmpwi   r3, 2
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

label_7F30F2B8:
    ctx->pc = 0x7F30F2B8u;
    // 7F30F2B8: bc    12, 2, 0x7F30F358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F358;
        }
    }

label_7F30F2BC:
    ctx->pc = 0x7F30F2BCu;
    ctx->downcount -= 1;
    // 7F30F2BC: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F2C0:
    ctx->pc = 0x7F30F2C0u;
    ctx->downcount -= 8;
    // 7F30F2C0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F30F2C4:
    ctx->pc = 0x7F30F2C4u;
    // 7F30F2C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F2C8:
    ctx->pc = 0x7F30F2C8u;
    // 7F30F2C8: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30F2CC:
    ctx->pc = 0x7F30F2CCu;
    // 7F30F2CC: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F2D0:
    ctx->pc = 0x7F30F2D0u;
    // 7F30F2D0: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F2D4:
    ctx->pc = 0x7F30F2D4u;
    // 7F30F2D4: lbz     r4, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30F2D8:
    ctx->pc = 0x7F30F2D8u;
    // 7F30F2D8: cmpwi   r4, 1
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

label_7F30F2DC:
    ctx->pc = 0x7F30F2DCu;
    // 7F30F2DC: bc    4, 2, 0x7F30F314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F314;
        }
    }

label_7F30F2E0:
    ctx->pc = 0x7F30F2E0u;
    ctx->downcount -= 3;
    // 7F30F2E0: lbz     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F2E4:
    ctx->pc = 0x7F30F2E4u;
    // 7F30F2E4: cmplwi  r0, 0x0000
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

label_7F30F2E8:
    ctx->pc = 0x7F30F2E8u;
    // 7F30F2E8: bc    12, 2, 0x7F30F314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F314;
        }
    }

label_7F30F2EC:
    ctx->pc = 0x7F30F2ECu;
    ctx->downcount -= 6;
    // 7F30F2EC: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F30F2F0:
    ctx->pc = 0x7F30F2F0u;
    // 7F30F2F0: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F2F4:
    ctx->pc = 0x7F30F2F4u;
    // 7F30F2F4: addi    r3, r3, -2447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2447);

label_7F30F2F8:
    ctx->pc = 0x7F30F2F8u;
    // 7F30F2F8: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F2FC:
    ctx->pc = 0x7F30F2FCu;
    // 7F30F2FC: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F300:
    ctx->pc = 0x7F30F300u;
    // 7F30F300: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F304u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F304:
    ctx->pc = 0x7F30F304u;
    ctx->downcount -= 4;
    // 7F30F304: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F308:
    ctx->pc = 0x7F30F308u;
    // 7F30F308: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F30C:
    ctx->pc = 0x7F30F30Cu;
    // 7F30F30C: stb     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F310:
    ctx->pc = 0x7F30F310u;
    // 7F30F310: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F314:
    ctx->pc = 0x7F30F314u;
    ctx->downcount -= 3;
    // 7F30F314: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F30F318:
    ctx->pc = 0x7F30F318u;
    // 7F30F318: cmpwi   r0, 1
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

label_7F30F31C:
    ctx->pc = 0x7F30F31Cu;
    // 7F30F31C: bc    4, 1, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F320:
    ctx->pc = 0x7F30F320u;
    ctx->downcount -= 4;
    // 7F30F320: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F324:
    ctx->pc = 0x7F30F324u;
    // 7F30F324: lbz     r0, -25179(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25179);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F328:
    ctx->pc = 0x7F30F328u;
    // 7F30F328: cmplwi  r0, 0x0000
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

label_7F30F32C:
    ctx->pc = 0x7F30F32Cu;
    // 7F30F32C: bc    4, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F330:
    ctx->pc = 0x7F30F330u;
    ctx->downcount -= 6;
    // 7F30F330: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30F334:
    ctx->pc = 0x7F30F334u;
    // 7F30F334: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F338:
    ctx->pc = 0x7F30F338u;
    // 7F30F338: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30F33C:
    ctx->pc = 0x7F30F33Cu;
    // 7F30F33C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F340:
    ctx->pc = 0x7F30F340u;
    // 7F30F340: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F344:
    ctx->pc = 0x7F30F344u;
    // 7F30F344: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F348u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F348:
    ctx->pc = 0x7F30F348u;
    ctx->downcount -= 4;
    // 7F30F348: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F34C:
    ctx->pc = 0x7F30F34Cu;
    // 7F30F34C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F350:
    ctx->pc = 0x7F30F350u;
    // 7F30F350: stb     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F354:
    ctx->pc = 0x7F30F354u;
    // 7F30F354: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F358:
    ctx->pc = 0x7F30F358u;
    ctx->downcount -= 3;
    // 7F30F358: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F35C:
    ctx->pc = 0x7F30F35Cu;
    // 7F30F35C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30F360:
    ctx->pc = 0x7F30F360u;
    // 7F30F360: bl      0x7F314F14
    {
            ctx->lr = 0x7F30F364u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30F364:
    ctx->pc = 0x7F30F364u;
    ctx->downcount -= 10;
    // 7F30F364: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30F368:
    ctx->pc = 0x7F30F368u;
    // 7F30F368: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F36C:
    ctx->pc = 0x7F30F36Cu;
    // 7F30F36C: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30F370:
    ctx->pc = 0x7F30F370u;
    // 7F30F370: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30F374:
    ctx->pc = 0x7F30F374u;
    // 7F30F374: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F378:
    ctx->pc = 0x7F30F378u;
    // 7F30F378: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F37C:
    ctx->pc = 0x7F30F37Cu;
    // 7F30F37C: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30F380:
    ctx->pc = 0x7F30F380u;
    // 7F30F380: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30F384:
    ctx->pc = 0x7F30F384u;
    // 7F30F384: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30F388:
    ctx->pc = 0x7F30F388u;
    // 7F30F388: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30F38Cu;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30F38C:
    ctx->pc = 0x7F30F38Cu;
    ctx->downcount -= 6;
    // 7F30F38C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F30F390:
    ctx->pc = 0x7F30F390u;
    // 7F30F390: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F394:
    ctx->pc = 0x7F30F394u;
    // 7F30F394: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F398:
    ctx->pc = 0x7F30F398u;
    // 7F30F398: lbz     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F39C:
    ctx->pc = 0x7F30F39Cu;
    // 7F30F39C: cmplwi  r0, 0x0000
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

label_7F30F3A0:
    ctx->pc = 0x7F30F3A0u;
    // 7F30F3A0: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F3A4:
    ctx->pc = 0x7F30F3A4u;
    ctx->downcount -= 6;
    // 7F30F3A4: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F30F3A8:
    ctx->pc = 0x7F30F3A8u;
    // 7F30F3A8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F3AC:
    ctx->pc = 0x7F30F3ACu;
    // 7F30F3AC: addi    r3, r3, -2447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2447);

label_7F30F3B0:
    ctx->pc = 0x7F30F3B0u;
    // 7F30F3B0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F3B4:
    ctx->pc = 0x7F30F3B4u;
    // 7F30F3B4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F3B8:
    ctx->pc = 0x7F30F3B8u;
    // 7F30F3B8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F3BCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F3BC:
    ctx->pc = 0x7F30F3BCu;
    ctx->downcount -= 4;
    // 7F30F3BC: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F3C0:
    ctx->pc = 0x7F30F3C0u;
    // 7F30F3C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F3C4:
    ctx->pc = 0x7F30F3C4u;
    // 7F30F3C4: stb     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F3C8:
    ctx->pc = 0x7F30F3C8u;
    // 7F30F3C8: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F3CC:
    ctx->pc = 0x7F30F3CCu;
    ctx->downcount -= 3;
    // 7F30F3CC: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F30F3D0:
    ctx->pc = 0x7F30F3D0u;
    // 7F30F3D0: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F3D4:
    ctx->pc = 0x7F30F3D4u;
    // 7F30F3D4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F3D8:
    ctx->pc = 0x7F30F3D8u;
    ctx->downcount -= 3;
    // 7F30F3D8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30F3DC:
    ctx->pc = 0x7F30F3DCu;
    // 7F30F3DC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F3E0:
    ctx->pc = 0x7F30F3E0u;
    // 7F30F3E0: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F3E4:
    ctx->pc = 0x7F30F3E4u;
    ctx->downcount -= 7;
    // 7F30F3E4: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F3E8:
    ctx->pc = 0x7F30F3E8u;
    // 7F30F3E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F3EC:
    ctx->pc = 0x7F30F3ECu;
    // 7F30F3EC: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F3F0:
    ctx->pc = 0x7F30F3F0u;
    // 7F30F3F0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F3F4:
    ctx->pc = 0x7F30F3F4u;
    // 7F30F3F4: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F3F8:
    ctx->pc = 0x7F30F3F8u;
    // 7F30F3F8: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F3FC:
    ctx->pc = 0x7F30F3FCu;
    // 7F30F3FC: bl      0x7F3169AC
    {
            ctx->lr = 0x7F30F400u;
            ctx->pc = 0x7F3169ACu;
            return;
    }

label_7F30F400:
    ctx->pc = 0x7F30F400u;
    ctx->downcount -= 2;
    // 7F30F400: cmpwi   r3, 0
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

label_7F30F404:
    ctx->pc = 0x7F30F404u;
    // 7F30F404: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F408:
    ctx->pc = 0x7F30F408u;
    ctx->downcount -= 1;
    // 7F30F408: bc    4, 0, 0x7F30F41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F41C;
        }
    }

label_7F30F40C:
    ctx->pc = 0x7F30F40Cu;
    ctx->downcount -= 2;
    // 7F30F40C: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F410:
    ctx->pc = 0x7F30F410u;
    // 7F30F410: bc    12, 2, 0x7F30F4A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F4A4;
        }
    }

label_7F30F414:
    ctx->pc = 0x7F30F414u;
    ctx->downcount -= 1;
    // 7F30F414: bc    4, 0, 0x7F30F464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F464;
        }
    }

label_7F30F418:
    ctx->pc = 0x7F30F418u;
    ctx->downcount -= 1;
    // 7F30F418: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F41C:
    ctx->pc = 0x7F30F41Cu;
    ctx->downcount -= 2;
    // 7F30F41C: cmpwi   r3, 2
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

label_7F30F420:
    ctx->pc = 0x7F30F420u;
    // 7F30F420: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F424:
    ctx->pc = 0x7F30F424u;
    ctx->downcount -= 3;
    // 7F30F424: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F428:
    ctx->pc = 0x7F30F428u;
    // 7F30F428: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_7F30F42C:
    ctx->pc = 0x7F30F42Cu;
    // 7F30F42C: bl      0x7F314F14
    {
            ctx->lr = 0x7F30F430u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30F430:
    ctx->pc = 0x7F30F430u;
    ctx->downcount -= 10;
    // 7F30F430: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30F434:
    ctx->pc = 0x7F30F434u;
    // 7F30F434: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F438:
    ctx->pc = 0x7F30F438u;
    // 7F30F438: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30F43C:
    ctx->pc = 0x7F30F43Cu;
    // 7F30F43C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30F440:
    ctx->pc = 0x7F30F440u;
    // 7F30F440: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F444:
    ctx->pc = 0x7F30F444u;
    // 7F30F444: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F448:
    ctx->pc = 0x7F30F448u;
    // 7F30F448: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30F44C:
    ctx->pc = 0x7F30F44Cu;
    // 7F30F44C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30F450:
    ctx->pc = 0x7F30F450u;
    // 7F30F450: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30F454:
    ctx->pc = 0x7F30F454u;
    // 7F30F454: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30F458u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30F458:
    ctx->pc = 0x7F30F458u;
    ctx->downcount -= 3;
    // 7F30F458: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F30F45C:
    ctx->pc = 0x7F30F45Cu;
    // 7F30F45C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F460:
    ctx->pc = 0x7F30F460u;
    // 7F30F460: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F464:
    ctx->pc = 0x7F30F464u;
    ctx->downcount -= 3;
    // 7F30F464: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F468:
    ctx->pc = 0x7F30F468u;
    // 7F30F468: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30F46C:
    ctx->pc = 0x7F30F46Cu;
    // 7F30F46C: bl      0x7F314F14
    {
            ctx->lr = 0x7F30F470u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30F470:
    ctx->pc = 0x7F30F470u;
    ctx->downcount -= 10;
    // 7F30F470: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30F474:
    ctx->pc = 0x7F30F474u;
    // 7F30F474: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F478:
    ctx->pc = 0x7F30F478u;
    // 7F30F478: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30F47C:
    ctx->pc = 0x7F30F47Cu;
    // 7F30F47C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30F480:
    ctx->pc = 0x7F30F480u;
    // 7F30F480: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F484:
    ctx->pc = 0x7F30F484u;
    // 7F30F484: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F488:
    ctx->pc = 0x7F30F488u;
    // 7F30F488: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30F48C:
    ctx->pc = 0x7F30F48Cu;
    // 7F30F48C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30F490:
    ctx->pc = 0x7F30F490u;
    // 7F30F490: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30F494:
    ctx->pc = 0x7F30F494u;
    // 7F30F494: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30F498u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30F498:
    ctx->pc = 0x7F30F498u;
    ctx->downcount -= 3;
    // 7F30F498: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F30F49C:
    ctx->pc = 0x7F30F49Cu;
    // 7F30F49C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F4A0:
    ctx->pc = 0x7F30F4A0u;
    // 7F30F4A0: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F4A4:
    ctx->pc = 0x7F30F4A4u;
    ctx->downcount -= 3;
    // 7F30F4A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F4A8:
    ctx->pc = 0x7F30F4A8u;
    // 7F30F4A8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F4AC:
    ctx->pc = 0x7F30F4ACu;
    // 7F30F4AC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F4B0:
    ctx->pc = 0x7F30F4B0u;
    ctx->downcount -= 8;
    // 7F30F4B0: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F4B4:
    ctx->pc = 0x7F30F4B4u;
    // 7F30F4B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F4B8:
    ctx->pc = 0x7F30F4B8u;
    // 7F30F4B8: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F4BC:
    ctx->pc = 0x7F30F4BCu;
    // 7F30F4BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F4C0:
    ctx->pc = 0x7F30F4C0u;
    // 7F30F4C0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F4C4:
    ctx->pc = 0x7F30F4C4u;
    // 7F30F4C4: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F4C8:
    ctx->pc = 0x7F30F4C8u;
    // 7F30F4C8: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F4CC:
    ctx->pc = 0x7F30F4CCu;
    // 7F30F4CC: bl      0x7F31676C
    {
            ctx->lr = 0x7F30F4D0u;
            ctx->pc = 0x7F31676Cu;
            return;
    }

label_7F30F4D0:
    ctx->pc = 0x7F30F4D0u;
    ctx->downcount -= 2;
    // 7F30F4D0: cmpwi   r3, 1
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

label_7F30F4D4:
    ctx->pc = 0x7F30F4D4u;
    // 7F30F4D4: bc    12, 2, 0x7F30F4E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F4E8;
        }
    }

label_7F30F4D8:
    ctx->pc = 0x7F30F4D8u;
    ctx->downcount -= 1;
    // 7F30F4D8: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F4DC:
    ctx->pc = 0x7F30F4DCu;
    ctx->downcount -= 2;
    // 7F30F4DC: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F4E0:
    ctx->pc = 0x7F30F4E0u;
    // 7F30F4E0: bc    12, 2, 0x7F30F520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F520;
        }
    }

label_7F30F4E4:
    ctx->pc = 0x7F30F4E4u;
    ctx->downcount -= 1;
    // 7F30F4E4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F4E8:
    ctx->pc = 0x7F30F4E8u;
    ctx->downcount -= 11;
    // 7F30F4E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F30F4EC:
    ctx->pc = 0x7F30F4ECu;
    // 7F30F4EC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F30F4F0:
    ctx->pc = 0x7F30F4F0u;
    // 7F30F4F0: lwz     r5, 19356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30F4F4:
    ctx->pc = 0x7F30F4F4u;
    // 7F30F4F4: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F4F8:
    ctx->pc = 0x7F30F4F8u;
    // 7F30F4F8: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F4FC:
    ctx->pc = 0x7F30F4FCu;
    // 7F30F4FC: addi    r4, r4, -26732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26732);

label_7F30F500:
    ctx->pc = 0x7F30F500u;
    // 7F30F500: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30F504:
    ctx->pc = 0x7F30F504u;
    // 7F30F504: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30F508:
    ctx->pc = 0x7F30F508u;
    // 7F30F508: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F50C:
    ctx->pc = 0x7F30F50Cu;
    // 7F30F50C: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30F510:
    ctx->pc = 0x7F30F510u;
    // 7F30F510: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30F514u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30F514:
    ctx->pc = 0x7F30F514u;
    ctx->downcount -= 3;
    // 7F30F514: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F30F518:
    ctx->pc = 0x7F30F518u;
    // 7F30F518: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F51C:
    ctx->pc = 0x7F30F51Cu;
    // 7F30F51C: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F520:
    ctx->pc = 0x7F30F520u;
    ctx->downcount -= 3;
    // 7F30F520: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30F524:
    ctx->pc = 0x7F30F524u;
    // 7F30F524: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F528:
    ctx->pc = 0x7F30F528u;
    // 7F30F528: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F52C:
    ctx->pc = 0x7F30F52Cu;
    ctx->downcount -= 15;
    // 7F30F52C: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F530:
    ctx->pc = 0x7F30F530u;
    // 7F30F530: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F534:
    ctx->pc = 0x7F30F534u;
    // 7F30F534: stb     r0, -10652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F538:
    ctx->pc = 0x7F30F538u;
    // 7F30F538: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F53C:
    ctx->pc = 0x7F30F53Cu;
    // 7F30F53C: li      r6, 11
    ctx->gpr[6] = (u32)(s32)(11);

label_7F30F540:
    ctx->pc = 0x7F30F540u;
    // 7F30F540: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F30F544:
    ctx->pc = 0x7F30F544u;
    // 7F30F544: stb     r0, -10559(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F548:
    ctx->pc = 0x7F30F548u;
    // 7F30F548: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F30F54C:
    ctx->pc = 0x7F30F54Cu;
    // 7F30F54C: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F550:
    ctx->pc = 0x7F30F550u;
    // 7F30F550: stw     r6, -10556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30F554:
    ctx->pc = 0x7F30F554u;
    // 7F30F554: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30F558:
    ctx->pc = 0x7F30F558u;
    // 7F30F558: stw     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30F55C:
    ctx->pc = 0x7F30F55Cu;
    // 7F30F55C: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F560:
    ctx->pc = 0x7F30F560u;
    // 7F30F560: lbz     r4, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30F564:
    ctx->pc = 0x7F30F564u;
    // 7F30F564: bl      0x7F314F54
    {
            ctx->lr = 0x7F30F568u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30F568:
    ctx->pc = 0x7F30F568u;
    ctx->downcount -= 6;
    // 7F30F568: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F30F56C:
    ctx->pc = 0x7F30F56Cu;
    // 7F30F56C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F570:
    ctx->pc = 0x7F30F570u;
    // 7F30F570: addi    r3, r3, 24501
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24501);

label_7F30F574:
    ctx->pc = 0x7F30F574u;
    // 7F30F574: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F578:
    ctx->pc = 0x7F30F578u;
    // 7F30F578: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F57C:
    ctx->pc = 0x7F30F57Cu;
    // 7F30F57C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F580u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F580:
    ctx->pc = 0x7F30F580u;
    ctx->downcount -= 1;
    // 7F30F580: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F584:
    ctx->pc = 0x7F30F584u;
    ctx->downcount -= 6;
    // 7F30F584: lwz     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F588:
    ctx->pc = 0x7F30F588u;
    // 7F30F588: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30F58C:
    ctx->pc = 0x7F30F58Cu;
    // 7F30F58C: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F590:
    ctx->pc = 0x7F30F590u;
    // 7F30F590: lwz     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F594:
    ctx->pc = 0x7F30F594u;
    // 7F30F594: cmpwi   r0, 0
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

label_7F30F598:
    ctx->pc = 0x7F30F598u;
    // 7F30F598: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F59C:
    ctx->pc = 0x7F30F59Cu;
    ctx->downcount -= 3;
    // 7F30F59C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F30F5A0:
    ctx->pc = 0x7F30F5A0u;
    // 7F30F5A0: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F5A4:
    ctx->pc = 0x7F30F5A4u;
    // 7F30F5A4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F5A8:
    ctx->pc = 0x7F30F5A8u;
    ctx->downcount -= 7;
    // 7F30F5A8: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F5AC:
    ctx->pc = 0x7F30F5ACu;
    // 7F30F5AC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F5B0:
    ctx->pc = 0x7F30F5B0u;
    // 7F30F5B0: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F5B4:
    ctx->pc = 0x7F30F5B4u;
    // 7F30F5B4: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F5B8:
    ctx->pc = 0x7F30F5B8u;
    // 7F30F5B8: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F5BC:
    ctx->pc = 0x7F30F5BCu;
    // 7F30F5BC: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F5C0:
    ctx->pc = 0x7F30F5C0u;
    // 7F30F5C0: bl      0x7F316694
    {
            ctx->lr = 0x7F30F5C4u;
            ctx->pc = 0x7F316694u;
            return;
    }

label_7F30F5C4:
    ctx->pc = 0x7F30F5C4u;
    ctx->downcount -= 2;
    // 7F30F5C4: cmpwi   r3, 0
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

label_7F30F5C8:
    ctx->pc = 0x7F30F5C8u;
    // 7F30F5C8: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F5CC:
    ctx->pc = 0x7F30F5CCu;
    ctx->downcount -= 1;
    // 7F30F5CC: bc    4, 0, 0x7F30F5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F5DC;
        }
    }

label_7F30F5D0:
    ctx->pc = 0x7F30F5D0u;
    ctx->downcount -= 2;
    // 7F30F5D0: cmpwi   r3, -2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F5D4:
    ctx->pc = 0x7F30F5D4u;
    // 7F30F5D4: bc    4, 0, 0x7F30F6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F6B0;
        }
    }

label_7F30F5D8:
    ctx->pc = 0x7F30F5D8u;
    ctx->downcount -= 1;
    // 7F30F5D8: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F5DC:
    ctx->pc = 0x7F30F5DCu;
    ctx->downcount -= 2;
    // 7F30F5DC: cmpwi   r3, 2
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

label_7F30F5E0:
    ctx->pc = 0x7F30F5E0u;
    // 7F30F5E0: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F5E4:
    ctx->pc = 0x7F30F5E4u;
    ctx->downcount -= 3;
    // 7F30F5E4: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F5E8:
    ctx->pc = 0x7F30F5E8u;
    // 7F30F5E8: li      r4, 31
    ctx->gpr[4] = (u32)(s32)(31);

label_7F30F5EC:
    ctx->pc = 0x7F30F5ECu;
    // 7F30F5EC: bl      0x7F314F14
    {
            ctx->lr = 0x7F30F5F0u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F30F5F0:
    ctx->pc = 0x7F30F5F0u;
    ctx->downcount -= 10;
    // 7F30F5F0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F30F5F4:
    ctx->pc = 0x7F30F5F4u;
    // 7F30F5F4: addis   r6, r30, 4
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F5F8:
    ctx->pc = 0x7F30F5F8u;
    // 7F30F5F8: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F30F5FC:
    ctx->pc = 0x7F30F5FCu;
    // 7F30F5FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30F600:
    ctx->pc = 0x7F30F600u;
    // 7F30F600: lwz     r3, -10648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F604:
    ctx->pc = 0x7F30F604u;
    // 7F30F604: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30F608:
    ctx->pc = 0x7F30F608u;
    // 7F30F608: addi    r8, r5, 38
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(38);

label_7F30F60C:
    ctx->pc = 0x7F30F60Cu;
    // 7F30F60C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30F610:
    ctx->pc = 0x7F30F610u;
    // 7F30F610: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F30F614:
    ctx->pc = 0x7F30F614u;
    // 7F30F614: bl      0x7F3143B8
    {
            ctx->lr = 0x7F30F618u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F30F618:
    ctx->pc = 0x7F30F618u;
    ctx->downcount -= 6;
    // 7F30F618: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F30F61C:
    ctx->pc = 0x7F30F61Cu;
    // 7F30F61C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F620:
    ctx->pc = 0x7F30F620u;
    // 7F30F620: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F30F624:
    ctx->pc = 0x7F30F624u;
    // 7F30F624: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F628:
    ctx->pc = 0x7F30F628u;
    // 7F30F628: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F62C:
    ctx->pc = 0x7F30F62Cu;
    // 7F30F62C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F630u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F630:
    ctx->pc = 0x7F30F630u;
    ctx->downcount -= 2;
    // 7F30F630: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30F634:
    ctx->pc = 0x7F30F634u;
    // 7F30F634: bl      0x7F30ECFC
    {
            ctx->lr = 0x7F30F638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30ECFCu;
                return;
            }
            goto label_7F30ECFC;
    }

label_7F30F638:
    ctx->pc = 0x7F30F638u;
    ctx->downcount -= 8;
    // 7F30F638: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F30F63C:
    ctx->pc = 0x7F30F63Cu;
    // 7F30F63C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30F640:
    ctx->pc = 0x7F30F640u;
    // 7F30F640: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30F644:
    ctx->pc = 0x7F30F644u;
    // 7F30F644: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F648:
    ctx->pc = 0x7F30F648u;
    // 7F30F648: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F64C:
    ctx->pc = 0x7F30F64Cu;
    // 7F30F64C: lbz     r0, -8261(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8261);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F650:
    ctx->pc = 0x7F30F650u;
    // 7F30F650: rlwinm. r0, r0, 0, 31, 31
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

label_7F30F654:
    ctx->pc = 0x7F30F654u;
    // 7F30F654: bc    12, 2, 0x7F30F664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F664;
        }
    }

label_7F30F658:
    ctx->pc = 0x7F30F658u;
    ctx->downcount -= 3;
    // 7F30F658: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F65C:
    ctx->pc = 0x7F30F65Cu;
    // 7F30F65C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F660:
    ctx->pc = 0x7F30F660u;
    // 7F30F660: b       0x7F30F66C
    {
            goto label_7F30F66C;
    }

label_7F30F664:
    ctx->pc = 0x7F30F664u;
    ctx->downcount -= 2;
    // 7F30F664: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F668:
    ctx->pc = 0x7F30F668u;
    // 7F30F668: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F66C:
    ctx->pc = 0x7F30F66Cu;
    ctx->downcount -= 7;
    // 7F30F66C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F670:
    ctx->pc = 0x7F30F670u;
    // 7F30F670: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F674:
    ctx->pc = 0x7F30F674u;
    // 7F30F674: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F678:
    ctx->pc = 0x7F30F678u;
    // 7F30F678: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F67C:
    ctx->pc = 0x7F30F67Cu;
    // 7F30F67C: lbz     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F680:
    ctx->pc = 0x7F30F680u;
    // 7F30F680: cmplwi  r0, 0x0000
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

label_7F30F684:
    ctx->pc = 0x7F30F684u;
    // 7F30F684: bc    4, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F688:
    ctx->pc = 0x7F30F688u;
    ctx->downcount -= 6;
    // 7F30F688: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F30F68C:
    ctx->pc = 0x7F30F68Cu;
    // 7F30F68C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F690:
    ctx->pc = 0x7F30F690u;
    // 7F30F690: addi    r3, r3, -27143
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27143);

label_7F30F694:
    ctx->pc = 0x7F30F694u;
    // 7F30F694: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F698:
    ctx->pc = 0x7F30F698u;
    // 7F30F698: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F69C:
    ctx->pc = 0x7F30F69Cu;
    // 7F30F69C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F6A0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F6A0:
    ctx->pc = 0x7F30F6A0u;
    ctx->downcount -= 4;
    // 7F30F6A0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F6A4:
    ctx->pc = 0x7F30F6A4u;
    // 7F30F6A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F6A8:
    ctx->pc = 0x7F30F6A8u;
    // 7F30F6A8: stb     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F6AC:
    ctx->pc = 0x7F30F6ACu;
    // 7F30F6AC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F6B0:
    ctx->pc = 0x7F30F6B0u;
    ctx->downcount -= 8;
    // 7F30F6B0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F6B4:
    ctx->pc = 0x7F30F6B4u;
    // 7F30F6B4: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F6B8:
    ctx->pc = 0x7F30F6B8u;
    // 7F30F6B8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F6BC:
    ctx->pc = 0x7F30F6BCu;
    // 7F30F6BC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F30F6C0:
    ctx->pc = 0x7F30F6C0u;
    // 7F30F6C0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30F6C4:
    ctx->pc = 0x7F30F6C4u;
    // 7F30F6C4: lha     r0, 6144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6144);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F30F6C8:
    ctx->pc = 0x7F30F6C8u;
    // 7F30F6C8: cmpwi   r0, 2
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

label_7F30F6CC:
    ctx->pc = 0x7F30F6CCu;
    // 7F30F6CC: bc    4, 0, 0x7F30F6E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F6E8;
        }
    }

label_7F30F6D0:
    ctx->pc = 0x7F30F6D0u;
    ctx->downcount -= 2;
    // 7F30F6D0: cmpwi   r0, -128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F6D4:
    ctx->pc = 0x7F30F6D4u;
    // 7F30F6D4: bc    12, 2, 0x7F30F6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F6FC;
        }
    }

label_7F30F6D8:
    ctx->pc = 0x7F30F6D8u;
    ctx->downcount -= 1;
    // 7F30F6D8: bc    12, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F6DC:
    ctx->pc = 0x7F30F6DCu;
    ctx->downcount -= 2;
    // 7F30F6DC: cmpwi   r0, -14
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F6E0:
    ctx->pc = 0x7F30F6E0u;
    // 7F30F6E0: bc    4, 0, 0x7F30F6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F6FC;
        }
    }

label_7F30F6E4:
    ctx->pc = 0x7F30F6E4u;
    ctx->downcount -= 1;
    // 7F30F6E4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F6E8:
    ctx->pc = 0x7F30F6E8u;
    ctx->downcount -= 2;
    // 7F30F6E8: cmpwi   r0, 102
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(102);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F6EC:
    ctx->pc = 0x7F30F6ECu;
    // 7F30F6EC: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F6F0:
    ctx->pc = 0x7F30F6F0u;
    ctx->downcount -= 2;
    // 7F30F6F0: cmpwi   r0, 100
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(100);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F6F4:
    ctx->pc = 0x7F30F6F4u;
    // 7F30F6F4: bc    4, 0, 0x7F30F78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F78C;
        }
    }

label_7F30F6F8:
    ctx->pc = 0x7F30F6F8u;
    ctx->downcount -= 1;
    // 7F30F6F8: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F6FC:
    ctx->pc = 0x7F30F6FCu;
    ctx->downcount -= 15;
    // 7F30F6FC: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F30F700:
    ctx->pc = 0x7F30F700u;
    // 7F30F700: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30F704:
    ctx->pc = 0x7F30F704u;
    // 7F30F704: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F708:
    ctx->pc = 0x7F30F708u;
    // 7F30F708: addis   r6, r30, 3
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F70C:
    ctx->pc = 0x7F30F70Cu;
    // 7F30F70C: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30F710:
    ctx->pc = 0x7F30F710u;
    // 7F30F710: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F714:
    ctx->pc = 0x7F30F714u;
    // 7F30F714: lbz     r0, -8310(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F718:
    ctx->pc = 0x7F30F718u;
    // 7F30F718: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F71C:
    ctx->pc = 0x7F30F71Cu;
    // 7F30F71C: lwz     r7, -25784(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-25784);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F30F720:
    ctx->pc = 0x7F30F720u;
    // 7F30F720: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F724:
    ctx->pc = 0x7F30F724u;
    // 7F30F724: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F728:
    ctx->pc = 0x7F30F728u;
    // 7F30F728: subf   r0, r7, r0
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30F72C:
    ctx->pc = 0x7F30F72Cu;
    // 7F30F72C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F730:
    ctx->pc = 0x7F30F730u;
    // 7F30F730: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F734:
    ctx->pc = 0x7F30F734u;
    // 7F30F734: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F738u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F738:
    ctx->pc = 0x7F30F738u;
    ctx->downcount -= 11;
    // 7F30F738: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F73C:
    ctx->pc = 0x7F30F73Cu;
    // 7F30F73C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30F740:
    ctx->pc = 0x7F30F740u;
    // 7F30F740: lbz     r0, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F744:
    ctx->pc = 0x7F30F744u;
    // 7F30F744: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30F748:
    ctx->pc = 0x7F30F748u;
    // 7F30F748: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F74C:
    ctx->pc = 0x7F30F74Cu;
    // 7F30F74C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F750:
    ctx->pc = 0x7F30F750u;
    // 7F30F750: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F754:
    ctx->pc = 0x7F30F754u;
    // 7F30F754: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F758:
    ctx->pc = 0x7F30F758u;
    // 7F30F758: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F75C:
    ctx->pc = 0x7F30F75Cu;
    // 7F30F75C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F760:
    ctx->pc = 0x7F30F760u;
    // 7F30F760: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F764u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F764:
    ctx->pc = 0x7F30F764u;
    ctx->downcount -= 3;
    // 7F30F764: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F768:
    ctx->pc = 0x7F30F768u;
    // 7F30F768: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F76C:
    ctx->pc = 0x7F30F76Cu;
    // 7F30F76C: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30F770u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30F770:
    ctx->pc = 0x7F30F770u;
    ctx->downcount -= 6;
    // 7F30F770: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F30F774:
    ctx->pc = 0x7F30F774u;
    // 7F30F774: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F778:
    ctx->pc = 0x7F30F778u;
    // 7F30F778: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F30F77C:
    ctx->pc = 0x7F30F77Cu;
    // 7F30F77C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F780:
    ctx->pc = 0x7F30F780u;
    // 7F30F780: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F784:
    ctx->pc = 0x7F30F784u;
    // 7F30F784: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F788u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F788:
    ctx->pc = 0x7F30F788u;
    ctx->downcount -= 1;
    // 7F30F788: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F78C:
    ctx->pc = 0x7F30F78Cu;
    ctx->downcount -= 8;
    // 7F30F78C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F30F790:
    ctx->pc = 0x7F30F790u;
    // 7F30F790: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F30F794:
    ctx->pc = 0x7F30F794u;
    // 7F30F794: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F798:
    ctx->pc = 0x7F30F798u;
    // 7F30F798: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F30F79C:
    ctx->pc = 0x7F30F79Cu;
    // 7F30F79C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F7A0:
    ctx->pc = 0x7F30F7A0u;
    // 7F30F7A0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F7A4:
    ctx->pc = 0x7F30F7A4u;
    // 7F30F7A4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F7A8:
    ctx->pc = 0x7F30F7A8u;
    // 7F30F7A8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F7ACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F7AC:
    ctx->pc = 0x7F30F7ACu;
    ctx->downcount -= 1;
    // 7F30F7AC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F7B0:
    ctx->pc = 0x7F30F7B0u;
    ctx->downcount -= 8;
    // 7F30F7B0: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F7B4:
    ctx->pc = 0x7F30F7B4u;
    // 7F30F7B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F7B8:
    ctx->pc = 0x7F30F7B8u;
    // 7F30F7B8: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F7BC:
    ctx->pc = 0x7F30F7BCu;
    // 7F30F7BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F7C0:
    ctx->pc = 0x7F30F7C0u;
    // 7F30F7C0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F7C4:
    ctx->pc = 0x7F30F7C4u;
    // 7F30F7C4: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F7C8:
    ctx->pc = 0x7F30F7C8u;
    // 7F30F7C8: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30F7CC:
    ctx->pc = 0x7F30F7CCu;
    // 7F30F7CC: bl      0x7F314D8C
    {
            ctx->lr = 0x7F30F7D0u;
            ctx->pc = 0x7F314D8Cu;
            return;
    }

label_7F30F7D0:
    ctx->pc = 0x7F30F7D0u;
    ctx->downcount -= 2;
    // 7F30F7D0: cmpwi   r3, 0
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

label_7F30F7D4:
    ctx->pc = 0x7F30F7D4u;
    // 7F30F7D4: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F7D8:
    ctx->pc = 0x7F30F7D8u;
    ctx->downcount -= 11;
    // 7F30F7D8: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F7DC:
    ctx->pc = 0x7F30F7DCu;
    // 7F30F7DC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30F7E0:
    ctx->pc = 0x7F30F7E0u;
    // 7F30F7E0: lbz     r0, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F7E4:
    ctx->pc = 0x7F30F7E4u;
    // 7F30F7E4: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F30F7E8:
    ctx->pc = 0x7F30F7E8u;
    // 7F30F7E8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F7EC:
    ctx->pc = 0x7F30F7ECu;
    // 7F30F7EC: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F7F0:
    ctx->pc = 0x7F30F7F0u;
    // 7F30F7F0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F7F4:
    ctx->pc = 0x7F30F7F4u;
    // 7F30F7F4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F7F8:
    ctx->pc = 0x7F30F7F8u;
    // 7F30F7F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F7FC:
    ctx->pc = 0x7F30F7FCu;
    // 7F30F7FC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F800:
    ctx->pc = 0x7F30F800u;
    // 7F30F800: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F804u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F804:
    ctx->pc = 0x7F30F804u;
    ctx->downcount -= 3;
    // 7F30F804: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F30F808:
    ctx->pc = 0x7F30F808u;
    // 7F30F808: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F80C:
    ctx->pc = 0x7F30F80Cu;
    // 7F30F80C: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F810:
    ctx->pc = 0x7F30F810u;
    ctx->downcount -= 9;
    // 7F30F810: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F814:
    ctx->pc = 0x7F30F814u;
    // 7F30F814: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30F818:
    ctx->pc = 0x7F30F818u;
    // 7F30F818: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F81C:
    ctx->pc = 0x7F30F81Cu;
    // 7F30F81C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F820:
    ctx->pc = 0x7F30F820u;
    // 7F30F820: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F824:
    ctx->pc = 0x7F30F824u;
    // 7F30F824: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F828:
    ctx->pc = 0x7F30F828u;
    // 7F30F828: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F82C:
    ctx->pc = 0x7F30F82Cu;
    // 7F30F82C: rlwinm. r0, r0, 0, 24, 24
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

label_7F30F830:
    ctx->pc = 0x7F30F830u;
    // 7F30F830: bc    12, 2, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F834:
    ctx->pc = 0x7F30F834u;
    ctx->downcount -= 4;
    // 7F30F834: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30F838:
    ctx->pc = 0x7F30F838u;
    // 7F30F838: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30F83C:
    ctx->pc = 0x7F30F83Cu;
    // 7F30F83C: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30F840:
    ctx->pc = 0x7F30F840u;
    // 7F30F840: bl      0x7F011698
    {
            ctx->lr = 0x7F30F844u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30F844:
    ctx->pc = 0x7F30F844u;
    ctx->downcount -= 7;
    // 7F30F844: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F848:
    ctx->pc = 0x7F30F848u;
    // 7F30F848: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F84C:
    ctx->pc = 0x7F30F84Cu;
    // 7F30F84C: stb     r0, -10652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F850:
    ctx->pc = 0x7F30F850u;
    // 7F30F850: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F854:
    ctx->pc = 0x7F30F854u;
    // 7F30F854: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F858:
    ctx->pc = 0x7F30F858u;
    // 7F30F858: extsb. r0, r0
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

label_7F30F85C:
    ctx->pc = 0x7F30F85Cu;
    // 7F30F85C: bc    4, 2, 0x7F30F87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F87C;
        }
    }

label_7F30F860:
    ctx->pc = 0x7F30F860u;
    ctx->downcount -= 6;
    // 7F30F860: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F30F864:
    ctx->pc = 0x7F30F864u;
    // 7F30F864: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F868:
    ctx->pc = 0x7F30F868u;
    // 7F30F868: addi    r3, r3, -9293
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9293);

label_7F30F86C:
    ctx->pc = 0x7F30F86Cu;
    // 7F30F86C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F870:
    ctx->pc = 0x7F30F870u;
    // 7F30F870: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F874:
    ctx->pc = 0x7F30F874u;
    // 7F30F874: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F878u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F878:
    ctx->pc = 0x7F30F878u;
    ctx->downcount -= 1;
    // 7F30F878: b       0x7F30F894
    {
            goto label_7F30F894;
    }

label_7F30F87C:
    ctx->pc = 0x7F30F87Cu;
    ctx->downcount -= 6;
    // 7F30F87C: lis     r3, 220
    ctx->gpr[3] = ((u32)(s32)(220) << 16);

label_7F30F880:
    ctx->pc = 0x7F30F880u;
    // 7F30F880: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F884:
    ctx->pc = 0x7F30F884u;
    // 7F30F884: addi    r3, r3, -9292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9292);

label_7F30F888:
    ctx->pc = 0x7F30F888u;
    // 7F30F888: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F88C:
    ctx->pc = 0x7F30F88Cu;
    // 7F30F88C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F890:
    ctx->pc = 0x7F30F890u;
    // 7F30F890: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F894u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F894:
    ctx->pc = 0x7F30F894u;
    ctx->downcount -= 6;
    // 7F30F894: lis     r3, 80
    ctx->gpr[3] = ((u32)(s32)(80) << 16);

label_7F30F898:
    ctx->pc = 0x7F30F898u;
    // 7F30F898: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F89C:
    ctx->pc = 0x7F30F89Cu;
    // 7F30F89C: addi    r3, r3, 10213
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10213);

label_7F30F8A0:
    ctx->pc = 0x7F30F8A0u;
    // 7F30F8A0: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F8A4:
    ctx->pc = 0x7F30F8A4u;
    // 7F30F8A4: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F8A8:
    ctx->pc = 0x7F30F8A8u;
    // 7F30F8A8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F8ACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F8AC:
    ctx->pc = 0x7F30F8ACu;
    ctx->downcount -= 3;
    // 7F30F8AC: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F30F8B0:
    ctx->pc = 0x7F30F8B0u;
    // 7F30F8B0: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F8B4:
    ctx->pc = 0x7F30F8B4u;
    // 7F30F8B4: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F8B8:
    ctx->pc = 0x7F30F8B8u;
    ctx->downcount -= 8;
    // 7F30F8B8: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30F8BC:
    ctx->pc = 0x7F30F8BCu;
    // 7F30F8BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F8C0:
    ctx->pc = 0x7F30F8C0u;
    // 7F30F8C0: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F8C4:
    ctx->pc = 0x7F30F8C4u;
    // 7F30F8C4: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F8C8:
    ctx->pc = 0x7F30F8C8u;
    // 7F30F8C8: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F8CC:
    ctx->pc = 0x7F30F8CCu;
    // 7F30F8CC: lwz     r0, -25936(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25936);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F8D0:
    ctx->pc = 0x7F30F8D0u;
    // 7F30F8D0: cmpwi   r0, 128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F8D4:
    ctx->pc = 0x7F30F8D4u;
    // 7F30F8D4: bc    12, 2, 0x7F30F9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F9C0;
        }
    }

label_7F30F8D8:
    ctx->pc = 0x7F30F8D8u;
    ctx->downcount -= 1;
    // 7F30F8D8: bc    4, 0, 0x7F30F9D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F9D4;
        }
    }

label_7F30F8DC:
    ctx->pc = 0x7F30F8DCu;
    ctx->downcount -= 2;
    // 7F30F8DC: cmpwi   r0, 32
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

label_7F30F8E0:
    ctx->pc = 0x7F30F8E0u;
    // 7F30F8E0: bc    12, 2, 0x7F30F8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F8E8;
        }
    }

label_7F30F8E4:
    ctx->pc = 0x7F30F8E4u;
    ctx->downcount -= 1;
    // 7F30F8E4: b       0x7F30F9D4
    {
            goto label_7F30F9D4;
    }

label_7F30F8E8:
    ctx->pc = 0x7F30F8E8u;
    ctx->downcount -= 5;
    // 7F30F8E8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30F8EC:
    ctx->pc = 0x7F30F8ECu;
    // 7F30F8EC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30F8F0:
    ctx->pc = 0x7F30F8F0u;
    // 7F30F8F0: lbz     r0, -8312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8312);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F8F4:
    ctx->pc = 0x7F30F8F4u;
    // 7F30F8F4: cmpwi   r0, 1
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

label_7F30F8F8:
    ctx->pc = 0x7F30F8F8u;
    // 7F30F8F8: bc    4, 2, 0x7F30F92C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30F92C;
        }
    }

label_7F30F8FC:
    ctx->pc = 0x7F30F8FCu;
    ctx->downcount -= 3;
    // 7F30F8FC: lbz     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F900:
    ctx->pc = 0x7F30F900u;
    // 7F30F900: cmplwi  r0, 0x0000
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

label_7F30F904:
    ctx->pc = 0x7F30F904u;
    // 7F30F904: bc    12, 2, 0x7F30F92C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30F92C;
        }
    }

label_7F30F908:
    ctx->pc = 0x7F30F908u;
    ctx->downcount -= 6;
    // 7F30F908: lis     r3, 12
    ctx->gpr[3] = ((u32)(s32)(12) << 16);

label_7F30F90C:
    ctx->pc = 0x7F30F90Cu;
    // 7F30F90C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F910:
    ctx->pc = 0x7F30F910u;
    // 7F30F910: addi    r3, r3, -2447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2447);

label_7F30F914:
    ctx->pc = 0x7F30F914u;
    // 7F30F914: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F918:
    ctx->pc = 0x7F30F918u;
    // 7F30F918: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F91C:
    ctx->pc = 0x7F30F91Cu;
    // 7F30F91C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F920u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F920:
    ctx->pc = 0x7F30F920u;
    ctx->downcount -= 3;
    // 7F30F920: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F924:
    ctx->pc = 0x7F30F924u;
    // 7F30F924: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30F928:
    ctx->pc = 0x7F30F928u;
    // 7F30F928: stb     r0, -25715(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25715);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30F92C:
    ctx->pc = 0x7F30F92Cu;
    ctx->downcount -= 14;
    // 7F30F92C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F930:
    ctx->pc = 0x7F30F930u;
    // 7F30F930: lis     r4, 201
    ctx->gpr[4] = ((u32)(s32)(201) << 16);

label_7F30F934:
    ctx->pc = 0x7F30F934u;
    // 7F30F934: lbz     r0, -24704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-24704);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F938:
    ctx->pc = 0x7F30F938u;
    // 7F30F938: lis     r3, 246
    ctx->gpr[3] = ((u32)(s32)(246) << 16);

label_7F30F93C:
    ctx->pc = 0x7F30F93Cu;
    // 7F30F93C: addi    r31, r4, -10251
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-10251);

label_7F30F940:
    ctx->pc = 0x7F30F940u;
    // 7F30F940: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F944:
    ctx->pc = 0x7F30F944u;
    // 7F30F944: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F948:
    ctx->pc = 0x7F30F948u;
    // 7F30F948: addi    r3, r3, -2148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2148);

label_7F30F94C:
    ctx->pc = 0x7F30F94Cu;
    // 7F30F94C: addic   r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F30F950:
    ctx->pc = 0x7F30F950u;
    // 7F30F950: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F954:
    ctx->pc = 0x7F30F954u;
    // 7F30F954: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F30F958:
    ctx->pc = 0x7F30F958u;
    // 7F30F958: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F95C:
    ctx->pc = 0x7F30F95Cu;
    // 7F30F95C: add   r31, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F30F960:
    ctx->pc = 0x7F30F960u;
    // 7F30F960: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F964u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F964:
    ctx->pc = 0x7F30F964u;
    ctx->downcount -= 5;
    // 7F30F964: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F30F968:
    ctx->pc = 0x7F30F968u;
    // 7F30F968: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F96C:
    ctx->pc = 0x7F30F96Cu;
    // 7F30F96C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F970:
    ctx->pc = 0x7F30F970u;
    // 7F30F970: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F974:
    ctx->pc = 0x7F30F974u;
    // 7F30F974: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F978u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F978:
    ctx->pc = 0x7F30F978u;
    ctx->downcount -= 13;
    // 7F30F978: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F97C:
    ctx->pc = 0x7F30F97Cu;
    // 7F30F97C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30F980:
    ctx->pc = 0x7F30F980u;
    // 7F30F980: lbz     r0, -8310(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8310);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F30F984:
    ctx->pc = 0x7F30F984u;
    // 7F30F984: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F30F988:
    ctx->pc = 0x7F30F988u;
    // 7F30F988: lwz     r6, -25784(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25784);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30F98C:
    ctx->pc = 0x7F30F98Cu;
    // 7F30F98C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30F990:
    ctx->pc = 0x7F30F990u;
    // 7F30F990: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F30F994:
    ctx->pc = 0x7F30F994u;
    // 7F30F994: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30F998:
    ctx->pc = 0x7F30F998u;
    // 7F30F998: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30F99C:
    ctx->pc = 0x7F30F99Cu;
    // 7F30F99C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30F9A0:
    ctx->pc = 0x7F30F9A0u;
    // 7F30F9A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30F9A4:
    ctx->pc = 0x7F30F9A4u;
    // 7F30F9A4: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30F9A8:
    ctx->pc = 0x7F30F9A8u;
    // 7F30F9A8: bl      0x7F31435C
    {
            ctx->lr = 0x7F30F9ACu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30F9AC:
    ctx->pc = 0x7F30F9ACu;
    ctx->downcount -= 4;
    // 7F30F9AC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30F9B0:
    ctx->pc = 0x7F30F9B0u;
    // 7F30F9B0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30F9B4:
    ctx->pc = 0x7F30F9B4u;
    // 7F30F9B4: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F30F9B8:
    ctx->pc = 0x7F30F9B8u;
    // 7F30F9B8: bl      0x7F011698
    {
            ctx->lr = 0x7F30F9BCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30F9BC:
    ctx->pc = 0x7F30F9BCu;
    ctx->downcount -= 1;
    // 7F30F9BC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F9C0:
    ctx->pc = 0x7F30F9C0u;
    ctx->downcount -= 4;
    // 7F30F9C0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30F9C4:
    ctx->pc = 0x7F30F9C4u;
    // 7F30F9C4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30F9C8:
    ctx->pc = 0x7F30F9C8u;
    // 7F30F9C8: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F30F9CC:
    ctx->pc = 0x7F30F9CCu;
    // 7F30F9CC: bl      0x7F011698
    {
            ctx->lr = 0x7F30F9D0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30F9D0:
    ctx->pc = 0x7F30F9D0u;
    ctx->downcount -= 1;
    // 7F30F9D0: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30F9D4:
    ctx->pc = 0x7F30F9D4u;
    ctx->downcount -= 5;
    // 7F30F9D4: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30F9D8:
    ctx->pc = 0x7F30F9D8u;
    // 7F30F9D8: lwz     r0, -25932(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25932);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30F9DC:
    ctx->pc = 0x7F30F9DCu;
    // 7F30F9DC: rlwinm r4, r0, 0, 16, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000F000u;
    }

label_7F30F9E0:
    ctx->pc = 0x7F30F9E0u;
    // 7F30F9E0: cmpwi   r4, 16384
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16384);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F9E4:
    ctx->pc = 0x7F30F9E4u;
    // 7F30F9E4: bc    12, 2, 0x7F30FB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FB88;
        }
    }

label_7F30F9E8:
    ctx->pc = 0x7F30F9E8u;
    ctx->downcount -= 1;
    // 7F30F9E8: bc    4, 0, 0x7F30FA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FA04;
        }
    }

label_7F30F9EC:
    ctx->pc = 0x7F30F9ECu;
    ctx->downcount -= 2;
    // 7F30F9EC: cmpwi   r4, 8192
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

label_7F30F9F0:
    ctx->pc = 0x7F30F9F0u;
    // 7F30F9F0: bc    12, 2, 0x7F30FA9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FA9C;
        }
    }

label_7F30F9F4:
    ctx->pc = 0x7F30F9F4u;
    ctx->downcount -= 1;
    // 7F30F9F4: bc    4, 0, 0x7F30FD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD4C;
        }
    }

label_7F30F9F8:
    ctx->pc = 0x7F30F9F8u;
    ctx->downcount -= 2;
    // 7F30F9F8: cmpwi   r4, 4096
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30F9FC:
    ctx->pc = 0x7F30F9FCu;
    // 7F30F9FC: bc    12, 2, 0x7F30FB24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FB24;
        }
    }

label_7F30FA00:
    ctx->pc = 0x7F30FA00u;
    ctx->downcount -= 1;
    // 7F30FA00: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FA04:
    ctx->pc = 0x7F30FA04u;
    ctx->downcount -= 4;
    // 7F30FA04: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F30FA08:
    ctx->pc = 0x7F30FA08u;
    // 7F30FA08: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F30FA0C:
    ctx->pc = 0x7F30FA0Cu;
    // 7F30FA0C: cmpw    r4, r0
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

label_7F30FA10:
    ctx->pc = 0x7F30FA10u;
    // 7F30FA10: bc    12, 2, 0x7F30FA18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FA18;
        }
    }

label_7F30FA14:
    ctx->pc = 0x7F30FA14u;
    ctx->downcount -= 1;
    // 7F30FA14: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FA18:
    ctx->pc = 0x7F30FA18u;
    ctx->downcount -= 14;
    // 7F30FA18: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FA1C:
    ctx->pc = 0x7F30FA1Cu;
    // 7F30FA1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FA20:
    ctx->pc = 0x7F30FA20u;
    // 7F30FA20: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FA24:
    ctx->pc = 0x7F30FA24u;
    // 7F30FA24: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FA28:
    ctx->pc = 0x7F30FA28u;
    // 7F30FA28: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F30FA2C:
    ctx->pc = 0x7F30FA2Cu;
    // 7F30FA2C: addi    r3, r3, -30696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30696);

label_7F30FA30:
    ctx->pc = 0x7F30FA30u;
    // 7F30FA30: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FA34:
    ctx->pc = 0x7F30FA34u;
    // 7F30FA34: lwzx    r3, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FA38:
    ctx->pc = 0x7F30FA38u;
    // 7F30FA38: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FA3C:
    ctx->pc = 0x7F30FA3Cu;
    // 7F30FA3C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F30FA40:
    ctx->pc = 0x7F30FA40u;
    // 7F30FA40: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FA44:
    ctx->pc = 0x7F30FA44u;
    // 7F30FA44: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FA48:
    ctx->pc = 0x7F30FA48u;
    // 7F30FA48: cmpwi   r0, 0
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

label_7F30FA4C:
    ctx->pc = 0x7F30FA4Cu;
    // 7F30FA4C: bc    4, 0, 0x7F30FA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FA78;
        }
    }

label_7F30FA50:
    ctx->pc = 0x7F30FA50u;
    ctx->downcount -= 3;
    // 7F30FA50: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FA54:
    ctx->pc = 0x7F30FA54u;
    // 7F30FA54: cmpwi   r0, 0
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

label_7F30FA58:
    ctx->pc = 0x7F30FA58u;
    // 7F30FA58: bc    4, 2, 0x7F30FA70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FA70;
        }
    }

label_7F30FA5C:
    ctx->pc = 0x7F30FA5Cu;
    ctx->downcount -= 5;
    // 7F30FA5C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F30FA60:
    ctx->pc = 0x7F30FA60u;
    // 7F30FA60: lis     r3, 183
    ctx->gpr[3] = ((u32)(s32)(183) << 16);

label_7F30FA64:
    ctx->pc = 0x7F30FA64u;
    // 7F30FA64: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FA68:
    ctx->pc = 0x7F30FA68u;
    // 7F30FA68: addi    r3, r3, 25347
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25347);

label_7F30FA6C:
    ctx->pc = 0x7F30FA6Cu;
    // 7F30FA6C: b       0x7F30FA78
    {
            goto label_7F30FA78;
    }

label_7F30FA70:
    ctx->pc = 0x7F30FA70u;
    ctx->downcount -= 2;
    // 7F30FA70: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F30FA74:
    ctx->pc = 0x7F30FA74u;
    // 7F30FA74: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FA78:
    ctx->pc = 0x7F30FA78u;
    ctx->downcount -= 4;
    // 7F30FA78: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FA7C:
    ctx->pc = 0x7F30FA7Cu;
    // 7F30FA7C: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FA80:
    ctx->pc = 0x7F30FA80u;
    // 7F30FA80: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FA84:
    ctx->pc = 0x7F30FA84u;
    // 7F30FA84: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FA88u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FA88:
    ctx->pc = 0x7F30FA88u;
    ctx->downcount -= 4;
    // 7F30FA88: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30FA8C:
    ctx->pc = 0x7F30FA8Cu;
    // 7F30FA8C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30FA90:
    ctx->pc = 0x7F30FA90u;
    // 7F30FA90: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30FA94:
    ctx->pc = 0x7F30FA94u;
    // 7F30FA94: bl      0x7F011698
    {
            ctx->lr = 0x7F30FA98u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30FA98:
    ctx->pc = 0x7F30FA98u;
    ctx->downcount -= 1;
    // 7F30FA98: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FA9C:
    ctx->pc = 0x7F30FA9Cu;
    ctx->downcount -= 14;
    // 7F30FA9C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FAA0:
    ctx->pc = 0x7F30FAA0u;
    // 7F30FAA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30FAA4:
    ctx->pc = 0x7F30FAA4u;
    // 7F30FAA4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FAA8:
    ctx->pc = 0x7F30FAA8u;
    // 7F30FAA8: stw     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30FAAC:
    ctx->pc = 0x7F30FAACu;
    // 7F30FAAC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30FAB0:
    ctx->pc = 0x7F30FAB0u;
    // 7F30FAB0: addi    r3, r3, -30676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30676);

label_7F30FAB4:
    ctx->pc = 0x7F30FAB4u;
    // 7F30FAB4: stw     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30FAB8:
    ctx->pc = 0x7F30FAB8u;
    // 7F30FAB8: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FABC:
    ctx->pc = 0x7F30FABCu;
    // 7F30FABC: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FAC0:
    ctx->pc = 0x7F30FAC0u;
    // 7F30FAC0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F30FAC4:
    ctx->pc = 0x7F30FAC4u;
    // 7F30FAC4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FAC8:
    ctx->pc = 0x7F30FAC8u;
    // 7F30FAC8: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FACC:
    ctx->pc = 0x7F30FACCu;
    // 7F30FACC: cmpwi   r4, 4
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

label_7F30FAD0:
    ctx->pc = 0x7F30FAD0u;
    // 7F30FAD0: bc    4, 2, 0x7F30FAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FAF0;
        }
    }

label_7F30FAD4:
    ctx->pc = 0x7F30FAD4u;
    ctx->downcount -= 3;
    // 7F30FAD4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FAD8:
    ctx->pc = 0x7F30FAD8u;
    // 7F30FAD8: cmpwi   r0, 0
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

label_7F30FADC:
    ctx->pc = 0x7F30FADCu;
    // 7F30FADC: bc    4, 2, 0x7F30FAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FAF0;
        }
    }

label_7F30FAE0:
    ctx->pc = 0x7F30FAE0u;
    ctx->downcount -= 4;
    // 7F30FAE0: lis     r3, 223
    ctx->gpr[3] = ((u32)(s32)(223) << 16);

label_7F30FAE4:
    ctx->pc = 0x7F30FAE4u;
    // 7F30FAE4: stw     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30FAE8:
    ctx->pc = 0x7F30FAE8u;
    // 7F30FAE8: addi    r3, r3, -17202
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17202);

label_7F30FAEC:
    ctx->pc = 0x7F30FAECu;
    // 7F30FAEC: b       0x7F30FB00
    {
            goto label_7F30FB00;
    }

label_7F30FAF0:
    ctx->pc = 0x7F30FAF0u;
    ctx->downcount -= 2;
    // 7F30FAF0: cmpwi   r4, 4
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

label_7F30FAF4:
    ctx->pc = 0x7F30FAF4u;
    // 7F30FAF4: bc    4, 1, 0x7F30FB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FB00;
        }
    }

label_7F30FAF8:
    ctx->pc = 0x7F30FAF8u;
    ctx->downcount -= 2;
    // 7F30FAF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FAFC:
    ctx->pc = 0x7F30FAFCu;
    // 7F30FAFC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FB00:
    ctx->pc = 0x7F30FB00u;
    ctx->downcount -= 4;
    // 7F30FB00: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FB04:
    ctx->pc = 0x7F30FB04u;
    // 7F30FB04: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FB08:
    ctx->pc = 0x7F30FB08u;
    // 7F30FB08: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FB0C:
    ctx->pc = 0x7F30FB0Cu;
    // 7F30FB0C: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FB10u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FB10:
    ctx->pc = 0x7F30FB10u;
    ctx->downcount -= 4;
    // 7F30FB10: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30FB14:
    ctx->pc = 0x7F30FB14u;
    // 7F30FB14: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30FB18:
    ctx->pc = 0x7F30FB18u;
    // 7F30FB18: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30FB1C:
    ctx->pc = 0x7F30FB1Cu;
    // 7F30FB1C: bl      0x7F011698
    {
            ctx->lr = 0x7F30FB20u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30FB20:
    ctx->pc = 0x7F30FB20u;
    ctx->downcount -= 1;
    // 7F30FB20: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FB24:
    ctx->pc = 0x7F30FB24u;
    ctx->downcount -= 7;
    // 7F30FB24: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FB28:
    ctx->pc = 0x7F30FB28u;
    // 7F30FB28: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30FB2C:
    ctx->pc = 0x7F30FB2Cu;
    // 7F30FB2C: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FB30:
    ctx->pc = 0x7F30FB30u;
    // 7F30FB30: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FB34:
    ctx->pc = 0x7F30FB34u;
    // 7F30FB34: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FB38:
    ctx->pc = 0x7F30FB38u;
    // 7F30FB38: cmpw    r0, r3
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

label_7F30FB3C:
    ctx->pc = 0x7F30FB3Cu;
    // 7F30FB3C: bc    4, 0, 0x7F30FB50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FB50;
        }
    }

label_7F30FB40:
    ctx->pc = 0x7F30FB40u;
    ctx->downcount -= 3;
    // 7F30FB40: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FB44:
    ctx->pc = 0x7F30FB44u;
    // 7F30FB44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30FB48:
    ctx->pc = 0x7F30FB48u;
    // 7F30FB48: bl      0x7F30EF44
    {
            ctx->lr = 0x7F30FB4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EF44u;
                return;
            }
            goto label_7F30EF44;
    }

label_7F30FB4C:
    ctx->pc = 0x7F30FB4Cu;
    ctx->downcount -= 1;
    // 7F30FB4C: b       0x7F30FB74
    {
            goto label_7F30FB74;
    }

label_7F30FB50:
    ctx->pc = 0x7F30FB50u;
    ctx->downcount -= 9;
    // 7F30FB50: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30FB54:
    ctx->pc = 0x7F30FB54u;
    // 7F30FB54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FB58:
    ctx->pc = 0x7F30FB58u;
    // 7F30FB58: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30FB5C:
    ctx->pc = 0x7F30FB5Cu;
    // 7F30FB5C: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FB60:
    ctx->pc = 0x7F30FB60u;
    // 7F30FB60: addi    r3, r3, -31744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31744);

label_7F30FB64:
    ctx->pc = 0x7F30FB64u;
    // 7F30FB64: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FB68:
    ctx->pc = 0x7F30FB68u;
    // 7F30FB68: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FB6C:
    ctx->pc = 0x7F30FB6Cu;
    // 7F30FB6C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FB70:
    ctx->pc = 0x7F30FB70u;
    // 7F30FB70: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FB74u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FB74:
    ctx->pc = 0x7F30FB74u;
    ctx->downcount -= 4;
    // 7F30FB74: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30FB78:
    ctx->pc = 0x7F30FB78u;
    // 7F30FB78: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30FB7C:
    ctx->pc = 0x7F30FB7Cu;
    // 7F30FB7C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30FB80:
    ctx->pc = 0x7F30FB80u;
    // 7F30FB80: bl      0x7F011698
    {
            ctx->lr = 0x7F30FB84u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30FB84:
    ctx->pc = 0x7F30FB84u;
    ctx->downcount -= 1;
    // 7F30FB84: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FB88:
    ctx->pc = 0x7F30FB88u;
    ctx->downcount -= 8;
    // 7F30FB88: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FB8C:
    ctx->pc = 0x7F30FB8Cu;
    // 7F30FB8C: lwz     r4, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FB90:
    ctx->pc = 0x7F30FB90u;
    // 7F30FB90: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30FB94:
    ctx->pc = 0x7F30FB94u;
    // 7F30FB94: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F30FB98:
    ctx->pc = 0x7F30FB98u;
    // 7F30FB98: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FB9C:
    ctx->pc = 0x7F30FB9Cu;
    // 7F30FB9C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F30FBA0:
    ctx->pc = 0x7F30FBA0u;
    // 7F30FBA0: cmpw    r4, r0
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

label_7F30FBA4:
    ctx->pc = 0x7F30FBA4u;
    // 7F30FBA4: bc    4, 0, 0x7F30FBF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FBF8;
        }
    }

label_7F30FBA8:
    ctx->pc = 0x7F30FBA8u;
    ctx->downcount -= 4;
    // 7F30FBA8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FBAC:
    ctx->pc = 0x7F30FBACu;
    // 7F30FBAC: subf   r0, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F30FBB0:
    ctx->pc = 0x7F30FBB0u;
    // 7F30FBB0: cmpwi   r0, 11
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

label_7F30FBB4:
    ctx->pc = 0x7F30FBB4u;
    // 7F30FBB4: bc    4, 0, 0x7F30FBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FBDC;
        }
    }

label_7F30FBB8:
    ctx->pc = 0x7F30FBB8u;
    ctx->downcount -= 8;
    // 7F30FBB8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FBBC:
    ctx->pc = 0x7F30FBBCu;
    // 7F30FBBC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F30FBC0:
    ctx->pc = 0x7F30FBC0u;
    // 7F30FBC0: addi    r3, r3, -31696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31696);

label_7F30FBC4:
    ctx->pc = 0x7F30FBC4u;
    // 7F30FBC4: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FBC8:
    ctx->pc = 0x7F30FBC8u;
    // 7F30FBC8: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FBCC:
    ctx->pc = 0x7F30FBCCu;
    // 7F30FBCC: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FBD0:
    ctx->pc = 0x7F30FBD0u;
    // 7F30FBD0: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FBD4:
    ctx->pc = 0x7F30FBD4u;
    // 7F30FBD4: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FBD8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FBD8:
    ctx->pc = 0x7F30FBD8u;
    ctx->downcount -= 1;
    // 7F30FBD8: b       0x7F30FBEC
    {
            goto label_7F30FBEC;
    }

label_7F30FBDC:
    ctx->pc = 0x7F30FBDCu;
    ctx->downcount -= 4;
    // 7F30FBDC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30FBE0:
    ctx->pc = 0x7F30FBE0u;
    // 7F30FBE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F30FBE4:
    ctx->pc = 0x7F30FBE4u;
    // 7F30FBE4: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FBE8:
    ctx->pc = 0x7F30FBE8u;
    // 7F30FBE8: bl      0x7F30EF44
    {
            ctx->lr = 0x7F30FBECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30EF44u;
                return;
            }
            goto label_7F30EF44;
    }

label_7F30FBEC:
    ctx->pc = 0x7F30FBECu;
    ctx->downcount -= 3;
    // 7F30FBEC: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FBF0:
    ctx->pc = 0x7F30FBF0u;
    // 7F30FBF0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F30FBF4:
    ctx->pc = 0x7F30FBF4u;
    // 7F30FBF4: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FBF8:
    ctx->pc = 0x7F30FBF8u;
    ctx->downcount -= 4;
    // 7F30FBF8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F30FBFC:
    ctx->pc = 0x7F30FBFCu;
    // 7F30FBFC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F30FC00:
    ctx->pc = 0x7F30FC00u;
    // 7F30FC00: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F30FC04:
    ctx->pc = 0x7F30FC04u;
    // 7F30FC04: bl      0x7F011698
    {
            ctx->lr = 0x7F30FC08u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F30FC08:
    ctx->pc = 0x7F30FC08u;
    ctx->downcount -= 1;
    // 7F30FC08: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FC0C:
    ctx->pc = 0x7F30FC0Cu;
    ctx->downcount -= 7;
    // 7F30FC0C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FC10:
    ctx->pc = 0x7F30FC10u;
    // 7F30FC10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FC14:
    ctx->pc = 0x7F30FC14u;
    // 7F30FC14: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FC18:
    ctx->pc = 0x7F30FC18u;
    // 7F30FC18: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FC1C:
    ctx->pc = 0x7F30FC1Cu;
    // 7F30FC1C: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30FC20:
    ctx->pc = 0x7F30FC20u;
    // 7F30FC20: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FC24:
    ctx->pc = 0x7F30FC24u;
    // 7F30FC24: bl      0x7F3175D0
    {
            ctx->lr = 0x7F30FC28u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F30FC28:
    ctx->pc = 0x7F30FC28u;
    ctx->downcount -= 3;
    // 7F30FC28: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FC2C:
    ctx->pc = 0x7F30FC2Cu;
    // 7F30FC2C: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30FC30:
    ctx->pc = 0x7F30FC30u;
    // 7F30FC30: bl      0x7F317238
    {
            ctx->lr = 0x7F30FC34u;
            ctx->pc = 0x7F317238u;
            return;
    }

label_7F30FC34:
    ctx->pc = 0x7F30FC34u;
    ctx->downcount -= 6;
    // 7F30FC34: lis     r3, 112
    ctx->gpr[3] = ((u32)(s32)(112) << 16);

label_7F30FC38:
    ctx->pc = 0x7F30FC38u;
    // 7F30FC38: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FC3C:
    ctx->pc = 0x7F30FC3Cu;
    // 7F30FC3C: addi    r3, r3, -10698
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10698);

label_7F30FC40:
    ctx->pc = 0x7F30FC40u;
    // 7F30FC40: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FC44:
    ctx->pc = 0x7F30FC44u;
    // 7F30FC44: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FC48:
    ctx->pc = 0x7F30FC48u;
    // 7F30FC48: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FC4Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FC4C:
    ctx->pc = 0x7F30FC4Cu;
    ctx->downcount -= 3;
    // 7F30FC4C: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_7F30FC50:
    ctx->pc = 0x7F30FC50u;
    // 7F30FC50: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FC54:
    ctx->pc = 0x7F30FC54u;
    // 7F30FC54: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FC58:
    ctx->pc = 0x7F30FC58u;
    ctx->downcount -= 5;
    // 7F30FC58: lwz     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FC5C:
    ctx->pc = 0x7F30FC5Cu;
    // 7F30FC5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FC60:
    ctx->pc = 0x7F30FC60u;
    // 7F30FC60: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30FC64:
    ctx->pc = 0x7F30FC64u;
    // 7F30FC64: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FC68:
    ctx->pc = 0x7F30FC68u;
    // 7F30FC68: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FC6C:
    ctx->pc = 0x7F30FC6Cu;
    ctx->downcount -= 9;
    // 7F30FC6C: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FC70:
    ctx->pc = 0x7F30FC70u;
    // 7F30FC70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30FC74:
    ctx->pc = 0x7F30FC74u;
    // 7F30FC74: stw     r5, -10656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30FC78:
    ctx->pc = 0x7F30FC78u;
    // 7F30FC78: li      r3, 17
    ctx->gpr[3] = (u32)(s32)(17);

label_7F30FC7C:
    ctx->pc = 0x7F30FC7Cu;
    // 7F30FC7C: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_7F30FC80:
    ctx->pc = 0x7F30FC80u;
    // 7F30FC80: stb     r5, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30FC84:
    ctx->pc = 0x7F30FC84u;
    // 7F30FC84: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F30FC88:
    ctx->pc = 0x7F30FC88u;
    // 7F30FC88: stw     r0, -10556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FC8C:
    ctx->pc = 0x7F30FC8Cu;
    // 7F30FC8C: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FC90:
    ctx->pc = 0x7F30FC90u;
    ctx->downcount -= 11;
    // 7F30FC90: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FC94:
    ctx->pc = 0x7F30FC94u;
    // 7F30FC94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F30FC98:
    ctx->pc = 0x7F30FC98u;
    // 7F30FC98: stb     r5, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30FC9C:
    ctx->pc = 0x7F30FC9Cu;
    // 7F30FC9C: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FCA0:
    ctx->pc = 0x7F30FCA0u;
    // 7F30FCA0: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F30FCA4:
    ctx->pc = 0x7F30FCA4u;
    // 7F30FCA4: stw     r5, -10552(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10552);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F30FCA8:
    ctx->pc = 0x7F30FCA8u;
    // 7F30FCA8: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_7F30FCAC:
    ctx->pc = 0x7F30FCACu;
    // 7F30FCAC: stb     r5, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F30FCB0:
    ctx->pc = 0x7F30FCB0u;
    // 7F30FCB0: addi    r4, r4, -10556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10556);

label_7F30FCB4:
    ctx->pc = 0x7F30FCB4u;
    // 7F30FCB4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FCB8:
    ctx->pc = 0x7F30FCB8u;
    // 7F30FCB8: bl      0x7F315530
    {
            ctx->lr = 0x7F30FCBCu;
            ctx->pc = 0x7F315530u;
            return;
    }

label_7F30FCBC:
    ctx->pc = 0x7F30FCBCu;
    ctx->downcount -= 1;
    // 7F30FCBC: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FCC0:
    ctx->pc = 0x7F30FCC0u;
    ctx->downcount -= 10;
    // 7F30FCC0: addis   r5, r30, 4
    ctx->gpr[5] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FCC4:
    ctx->pc = 0x7F30FCC4u;
    // 7F30FCC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F30FCC8:
    ctx->pc = 0x7F30FCC8u;
    // 7F30FCC8: stw     r6, -10656(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10656);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30FCCC:
    ctx->pc = 0x7F30FCCCu;
    // 7F30FCCC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30FCD0:
    ctx->pc = 0x7F30FCD0u;
    // 7F30FCD0: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FCD4:
    ctx->pc = 0x7F30FCD4u;
    // 7F30FCD4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F30FCD8:
    ctx->pc = 0x7F30FCD8u;
    // 7F30FCD8: stb     r0, -10559(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FCDC:
    ctx->pc = 0x7F30FCDCu;
    // 7F30FCDC: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30FCE0:
    ctx->pc = 0x7F30FCE0u;
    // 7F30FCE0: stw     r6, -10552(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10552);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F30FCE4:
    ctx->pc = 0x7F30FCE4u;
    // 7F30FCE4: bl      0x7F31733C
    {
            ctx->lr = 0x7F30FCE8u;
            ctx->pc = 0x7F31733Cu;
            return;
    }

label_7F30FCE8:
    ctx->pc = 0x7F30FCE8u;
    ctx->downcount -= 3;
    // 7F30FCE8: addis   r3, r30, 3
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FCEC:
    ctx->pc = 0x7F30FCECu;
    // 7F30FCEC: addi    r3, r3, -25796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25796);

label_7F30FCF0:
    ctx->pc = 0x7F30FCF0u;
    // 7F30FCF0: bl      0x7F3177EC
    {
            ctx->lr = 0x7F30FCF4u;
            ctx->pc = 0x7F3177ECu;
            return;
    }

label_7F30FCF4:
    ctx->pc = 0x7F30FCF4u;
    ctx->downcount -= 6;
    // 7F30FCF4: lis     r3, 74
    ctx->gpr[3] = ((u32)(s32)(74) << 16);

label_7F30FCF8:
    ctx->pc = 0x7F30FCF8u;
    // 7F30FCF8: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F30FCFC:
    ctx->pc = 0x7F30FCFCu;
    // 7F30FCFC: addi    r3, r3, -13619
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13619);

label_7F30FD00:
    ctx->pc = 0x7F30FD00u;
    // 7F30FD00: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F30FD04:
    ctx->pc = 0x7F30FD04u;
    // 7F30FD04: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F30FD08:
    ctx->pc = 0x7F30FD08u;
    // 7F30FD08: bl      0x7F31435C
    {
            ctx->lr = 0x7F30FD0Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F30FD0C:
    ctx->pc = 0x7F30FD0Cu;
    ctx->downcount -= 9;
    // 7F30FD0C: addis   r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FD10:
    ctx->pc = 0x7F30FD10u;
    // 7F30FD10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FD14:
    ctx->pc = 0x7F30FD14u;
    // 7F30FD14: stb     r0, -9468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9468);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FD18:
    ctx->pc = 0x7F30FD18u;
    // 7F30FD18: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F30FD1C:
    ctx->pc = 0x7F30FD1Cu;
    // 7F30FD1C: addis   r4, r30, 3
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F30FD20:
    ctx->pc = 0x7F30FD20u;
    // 7F30FD20: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F30FD24:
    ctx->pc = 0x7F30FD24u;
    // 7F30FD24: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FD28:
    ctx->pc = 0x7F30FD28u;
    // 7F30FD28: lbz     r4, -24704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24704);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F30FD2C:
    ctx->pc = 0x7F30FD2Cu;
    // 7F30FD2C: bl      0x7F314F54
    {
            ctx->lr = 0x7F30FD30u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F30FD30:
    ctx->pc = 0x7F30FD30u;
    ctx->downcount -= 1;
    // 7F30FD30: b       0x7F30FD4C
    {
            goto label_7F30FD4C;
    }

label_7F30FD34:
    ctx->pc = 0x7F30FD34u;
    ctx->downcount -= 6;
    // 7F30FD34: addis   r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + ((u32)(s32)(4) << 16);

label_7F30FD38:
    ctx->pc = 0x7F30FD38u;
    // 7F30FD38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F30FD3C:
    ctx->pc = 0x7F30FD3Cu;
    // 7F30FD3C: stb     r0, -10652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10652);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FD40:
    ctx->pc = 0x7F30FD40u;
    // 7F30FD40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F30FD44:
    ctx->pc = 0x7F30FD44u;
    // 7F30FD44: stb     r0, -10559(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10559);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F30FD48:
    ctx->pc = 0x7F30FD48u;
    // 7F30FD48: bl      0x7F30B9B4
    {
            ctx->lr = 0x7F30FD4Cu;
            ctx->pc = 0x7F30B9B4u;
            return;
    }

label_7F30FD4C:
    ctx->pc = 0x7F30FD4Cu;
    ctx->downcount -= 16;
    // 7F30FD4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F30FD50:
    ctx->pc = 0x7F30FD50u;
    // 7F30FD50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FD54:
    ctx->pc = 0x7F30FD54u;
    // 7F30FD54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F30FD58:
    ctx->pc = 0x7F30FD58u;
    // 7F30FD58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30FD5C:
    ctx->pc = 0x7F30FD5Cu;
    // 7F30FD5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30FD60:
    ctx->pc = 0x7F30FD60u;
    ctx->downcount -= 4;
    // 7F30FD60: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F30FD64:
    ctx->pc = 0x7F30FD64u;
    // 7F30FD64: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F30FD68:
    ctx->pc = 0x7F30FD68u;
    // 7F30FD68: cmplw   r3, r0
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

label_7F30FD6C:
    ctx->pc = 0x7F30FD6Cu;
    // 7F30FD6C: bc    12, 1, 0x7F30FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FD74;
        }
    }

label_7F30FD70:
    ctx->pc = 0x7F30FD70u;
    ctx->downcount -= 1;
    // 7F30FD70: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FD74:
    ctx->pc = 0x7F30FD74u;
    ctx->downcount -= 2;
    // 7F30FD74: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F30FD78:
    ctx->pc = 0x7F30FD78u;
    // 7F30FD78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F30FD7C:
    ctx->pc = 0x7F30FD7Cu;
    ctx->downcount -= 19;
    // 7F30FD7C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F30FD80:
    ctx->pc = 0x7F30FD80u;
    // 7F30FD80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F30FD84:
    ctx->pc = 0x7F30FD84u;
    // 7F30FD84: lis     r4, 14
    ctx->gpr[4] = ((u32)(s32)(14) << 16);

label_7F30FD88:
    ctx->pc = 0x7F30FD88u;
    // 7F30FD88: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FD8C:
    ctx->pc = 0x7F30FD8Cu;
    // 7F30FD8C: addi    r4, r4, -8925
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8925);

label_7F30FD90:
    ctx->pc = 0x7F30FD90u;
    // 7F30FD90: stmw     r16, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F30FD94:
    ctx->pc = 0x7F30FD94u;
    // 7F30FD94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FD98:
    ctx->pc = 0x7F30FD98u;
    // 7F30FD98: lwz     r3, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FD9C:
    ctx->pc = 0x7F30FD9Cu;
    // 7F30FD9C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FDA0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FDA0:
    ctx->pc = 0x7F30FDA0u;
    ctx->downcount -= 5;
    // 7F30FDA0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FDA4:
    ctx->pc = 0x7F30FDA4u;
    // 7F30FDA4: lis     r4, 185
    ctx->gpr[4] = ((u32)(s32)(185) << 16);

label_7F30FDA8:
    ctx->pc = 0x7F30FDA8u;
    // 7F30FDA8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FDAC:
    ctx->pc = 0x7F30FDACu;
    // 7F30FDAC: addi    r4, r4, 27770
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27770);

label_7F30FDB0:
    ctx->pc = 0x7F30FDB0u;
    // 7F30FDB0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FDB4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FDB4:
    ctx->pc = 0x7F30FDB4u;
    ctx->downcount -= 8;
    // 7F30FDB4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FDB8:
    ctx->pc = 0x7F30FDB8u;
    // 7F30FDB8: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F30FDBC:
    ctx->pc = 0x7F30FDBCu;
    // 7F30FDBC: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FDC0:
    ctx->pc = 0x7F30FDC0u;
    // 7F30FDC0: addi    r4, r4, 13290
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13290);

label_7F30FDC4:
    ctx->pc = 0x7F30FDC4u;
    // 7F30FDC4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F30FDC8:
    ctx->pc = 0x7F30FDC8u;
    // 7F30FDC8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F30FDCC:
    ctx->pc = 0x7F30FDCCu;
    // 7F30FDCC: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F30FDD0:
    ctx->pc = 0x7F30FDD0u;
    // 7F30FDD0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FDD4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FDD4:
    ctx->pc = 0x7F30FDD4u;
    ctx->downcount -= 11;
    // 7F30FDD4: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F30FDD8:
    ctx->pc = 0x7F30FDD8u;
    // 7F30FDD8: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F30FDDC:
    ctx->pc = 0x7F30FDDCu;
    // 7F30FDDC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30FDE0:
    ctx->pc = 0x7F30FDE0u;
    // 7F30FDE0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30FDE4:
    ctx->pc = 0x7F30FDE4u;
    // 7F30FDE4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FDE8:
    ctx->pc = 0x7F30FDE8u;
    // 7F30FDE8: addi    r21, r7, -30656
    ctx->gpr[21] = ctx->gpr[7] + (u32)(s32)(-30656);

label_7F30FDEC:
    ctx->pc = 0x7F30FDECu;
    // 7F30FDEC: addi    r19, r6, -30612
    ctx->gpr[19] = ctx->gpr[6] + (u32)(s32)(-30612);

label_7F30FDF0:
    ctx->pc = 0x7F30FDF0u;
    // 7F30FDF0: addi    r17, r5, -30568
    ctx->gpr[17] = ctx->gpr[5] + (u32)(s32)(-30568);

label_7F30FDF4:
    ctx->pc = 0x7F30FDF4u;
    // 7F30FDF4: addi    r16, r4, -30524
    ctx->gpr[16] = ctx->gpr[4] + (u32)(s32)(-30524);

label_7F30FDF8:
    ctx->pc = 0x7F30FDF8u;
    // 7F30FDF8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F30FDFC:
    ctx->pc = 0x7F30FDFCu;
    // 7F30FDFC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F30FE00:
    ctx->pc = 0x7F30FE00u;
    ctx->downcount -= 3;
    // 7F30FE00: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FE04:
    ctx->pc = 0x7F30FE04u;
    // 7F30FE04: lwzx    r4, r21, r30
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FE08:
    // 7F30FE08: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FE0Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FE0C:
    ctx->downcount -= 5;
    // 7F30FE0C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FE10:
    ctx->pc = 0x7F30FE10u;
    // 7F30FE10: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FE14:
    ctx->pc = 0x7F30FE14u;
    // 7F30FE14: lwzx    r4, r19, r30
    {
        u32 ea = ctx->gpr[19] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FE18:
    // 7F30FE18: or   r22, r0, r0
    {
        ctx->gpr[22] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F30FE1C:
    // 7F30FE1C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FE20u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FE20:
    ctx->downcount -= 5;
    // 7F30FE20: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FE24:
    ctx->pc = 0x7F30FE24u;
    // 7F30FE24: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FE28:
    ctx->pc = 0x7F30FE28u;
    // 7F30FE28: lwzx    r4, r17, r30
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FE2C:
    // 7F30FE2C: or   r18, r0, r0
    {
        ctx->gpr[18] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F30FE30:
    // 7F30FE30: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FE34u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FE34:
    ctx->downcount -= 5;
    // 7F30FE34: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FE38:
    ctx->pc = 0x7F30FE38u;
    // 7F30FE38: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FE3C:
    ctx->pc = 0x7F30FE3Cu;
    // 7F30FE3C: lwzx    r4, r16, r30
    {
        u32 ea = ctx->gpr[16] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FE40:
    // 7F30FE40: or   r20, r0, r0
    {
        ctx->gpr[20] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F30FE44:
    // 7F30FE44: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FE48u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FE48:
    ctx->downcount -= 4;
    // 7F30FE48: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FE4C:
    // 7F30FE4C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F30FE50:
    // 7F30FE50: or   r22, r0, r0
    {
        ctx->gpr[22] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F30FE54:
    // 7F30FE54: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30FE58u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30FE58:
    ctx->downcount -= 2;
    // 7F30FE58: cmpwi   r26, 10
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30FE5C:
    // 7F30FE5C: bc    4, 0, 0x7F30FEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FEE4;
        }
    }

label_7F30FE60:
    ctx->downcount -= 5;
    // 7F30FE60: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F30FE64:
    // 7F30FE64: addi    r3, r3, -3392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3392);

label_7F30FE68:
    ctx->pc = 0x7F30FE68u;
    // 7F30FE68: lwzx    r3, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FE6C:
    // 7F30FE6C: cmplwi  r3, 0x0000
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

label_7F30FE70:
    // 7F30FE70: bc    12, 2, 0x7F30FF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FF68;
        }
    }

label_7F30FE74:
    ctx->downcount -= 4;
    // 7F30FE74: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F30FE78:
    // 7F30FE78: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F30FE7C:
    // 7F30FE7C: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F30FE80:
    // 7F30FE80: bl      0x7F30C1F4
    {
            ctx->lr = 0x7F30FE84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30C1F4u;
                return;
            }
            goto label_7F30C1F4;
    }

label_7F30FE84:
    ctx->pc = 0x7F30FE84u;
    ctx->downcount -= 11;
    // 7F30FE84: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FE88:
    // 7F30FE88: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FE8C:
    ctx->pc = 0x7F30FE8Cu;
    // 7F30FE8C: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F30FE90:
    // 7F30FE90: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30FE94:
    ctx->pc = 0x7F30FE94u;
    // 7F30FE94: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FE98:
    // 7F30FE98: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F30FE9C:
    // 7F30FE9C: add   r24, r24, r6
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F30FEA0:
    // 7F30FEA0: add   r25, r25, r4
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F30FEA4:
    // 7F30FEA4: add   r23, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F30FEA8:
    // 7F30FEA8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FEAC:
    // 7F30FEAC: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FEB0u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FEB0:
    ctx->downcount -= 6;
    // 7F30FEB0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FEB4:
    ctx->pc = 0x7F30FEB4u;
    // 7F30FEB4: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FEB8:
    // 7F30FEB8: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30FEBC:
    // 7F30FEBC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FEC0:
    // 7F30FEC0: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F30FEC4:
    // 7F30FEC4: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FEC8u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FEC8:
    ctx->downcount -= 6;
    // 7F30FEC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F30FECC:
    ctx->pc = 0x7F30FECCu;
    // 7F30FECC: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FED0:
    // 7F30FED0: addi    r5, r3, -31328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-31328);

label_7F30FED4:
    // 7F30FED4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FED8:
    // 7F30FED8: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F30FEDC:
    // 7F30FEDC: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FEE0u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FEE0:
    ctx->downcount -= 1;
    // 7F30FEE0: b       0x7F30FF68
    {
            goto label_7F30FF68;
    }

label_7F30FEE4:
    ctx->downcount -= 98;
    // 7F30FEE4: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F30FEE8:
    // 7F30FEE8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_7F30FEEC:
    // 7F30FEEC: divw   r4, r23, r5
    {
        s32 dividend = (s32)ctx->gpr[23];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30FEF0:
    // 7F30FEF0: add   r24, r24, r4
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F30FEF4:
    // 7F30FEF4: divw   r0, r24, r3
    {
        s32 dividend = (s32)ctx->gpr[24];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F30FEF8:
    // 7F30FEF8: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F30FEFC:
    // 7F30FEFC: add   r25, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F30FF00:
    // 7F30FF00: cmpwi   r25, 99
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(99);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30FF04:
    // 7F30FF04: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F30FF08:
    // 7F30FF08: subf   r23, r4, r23
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[23];
        u32 res = a + b + 1u;
        ctx->gpr[23] = res;
    }

label_7F30FF0C:
    // 7F30FF0C: subf   r24, r0, r24
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b + 1u;
        ctx->gpr[24] = res;
    }

label_7F30FF10:
    // 7F30FF10: bc    4, 1, 0x7F30FF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F30FF20;
        }
    }

label_7F30FF14:
    ctx->downcount -= 3;
    // 7F30FF14: li      r25, 99
    ctx->gpr[25] = (u32)(s32)(99);

label_7F30FF18:
    // 7F30FF18: li      r24, 59
    ctx->gpr[24] = (u32)(s32)(59);

label_7F30FF1C:
    // 7F30FF1C: li      r23, 99
    ctx->gpr[23] = (u32)(s32)(99);

label_7F30FF20:
    ctx->downcount -= 6;
    // 7F30FF20: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30FF24:
    // 7F30FF24: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F30FF28:
    // 7F30FF28: addi    r5, r4, -31328
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31328);

label_7F30FF2C:
    // 7F30FF2C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FF30:
    // 7F30FF30: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F30FF34:
    // 7F30FF34: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FF38u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FF38:
    ctx->downcount -= 6;
    // 7F30FF38: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30FF3C:
    // 7F30FF3C: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F30FF40:
    // 7F30FF40: addi    r5, r4, -31328
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31328);

label_7F30FF44:
    // 7F30FF44: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FF48:
    // 7F30FF48: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F30FF4C:
    // 7F30FF4C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FF50u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FF50:
    ctx->downcount -= 6;
    // 7F30FF50: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F30FF54:
    // 7F30FF54: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F30FF58:
    // 7F30FF58: addi    r5, r4, -31328
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-31328);

label_7F30FF5C:
    // 7F30FF5C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FF60:
    // 7F30FF60: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F30FF64:
    // 7F30FF64: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F30FF68u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F30FF68:
    ctx->downcount -= 4;
    // 7F30FF68: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F30FF6C:
    // 7F30FF6C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F30FF70:
    // 7F30FF70: cmpwi   r26, 10
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F30FF74:
    // 7F30FF74: bc    4, 1, 0x7F30FE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F30FE00u;
                return;
            }
            goto label_7F30FE00;
        }
    }

label_7F30FF78:
    ctx->pc = 0x7F30FF78u;
    ctx->downcount -= 2;
    // 7F30FF78: cmplwi  r29, 0x0000
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

label_7F30FF7C:
    ctx->pc = 0x7F30FF7Cu;
    // 7F30FF7C: bc    12, 2, 0x7F30FF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FF94;
        }
    }

label_7F30FF80:
    ctx->pc = 0x7F30FF80u;
    ctx->downcount -= 9;
    // 7F30FF80: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30FF84:
    ctx->pc = 0x7F30FF84u;
    // 7F30FF84: lwz     r4, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F30FF88:
    ctx->pc = 0x7F30FF88u;
    // 7F30FF88: lwz     r0, -26020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FF8C:
    ctx->pc = 0x7F30FF8Cu;
    // 7F30FF8C: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F30FF90:
    ctx->pc = 0x7F30FF90u;
    // 7F30FF90: stw     r0, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FF94:
    ctx->pc = 0x7F30FF94u;
    ctx->downcount -= 4;
    // 7F30FF94: addis   r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30FF98:
    ctx->pc = 0x7F30FF98u;
    // 7F30FF98: lwz     r0, -26012(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FF9C:
    ctx->pc = 0x7F30FF9Cu;
    // 7F30FF9C: cmpwi   r0, 0
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

label_7F30FFA0:
    ctx->pc = 0x7F30FFA0u;
    // 7F30FFA0: bc    12, 2, 0x7F30FFF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F30FFF4;
        }
    }

label_7F30FFA4:
    ctx->pc = 0x7F30FFA4u;
    ctx->downcount -= 4;
    // 7F30FFA4: lis     r4, 120
    ctx->gpr[4] = ((u32)(s32)(120) << 16);

label_7F30FFA8:
    ctx->pc = 0x7F30FFA8u;
    // 7F30FFA8: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F30FFAC:
    ctx->pc = 0x7F30FFACu;
    // 7F30FFAC: addi    r4, r4, -12688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12688);

label_7F30FFB0:
    ctx->pc = 0x7F30FFB0u;
    // 7F30FFB0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F30FFB4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F30FFB4:
    ctx->pc = 0x7F30FFB4u;
    ctx->downcount -= 13;
    // 7F30FFB4: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FFB8:
    ctx->pc = 0x7F30FFB8u;
    // 7F30FFB8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F30FFBC:
    ctx->pc = 0x7F30FFBCu;
    // 7F30FFBC: addis   r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(3) << 16);

label_7F30FFC0:
    ctx->pc = 0x7F30FFC0u;
    // 7F30FFC0: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F30FFC4:
    ctx->pc = 0x7F30FFC4u;
    // 7F30FFC4: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30FFC8:
    ctx->pc = 0x7F30FFC8u;
    // 7F30FFC8: addi    r5, r5, -31648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31648);

label_7F30FFCC:
    ctx->pc = 0x7F30FFCCu;
    // 7F30FFCC: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FFD0:
    ctx->pc = 0x7F30FFD0u;
    // 7F30FFD0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F30FFD4:
    ctx->pc = 0x7F30FFD4u;
    // 7F30FFD4: addi    r4, r4, -26004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26004);

label_7F30FFD8:
    ctx->pc = 0x7F30FFD8u;
    // 7F30FFD8: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FFDC:
    ctx->pc = 0x7F30FFDCu;
    // 7F30FFDC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F30FFE0:
    ctx->pc = 0x7F30FFE0u;
    // 7F30FFE0: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F30FFE4:
    ctx->pc = 0x7F30FFE4u;
    // 7F30FFE4: bl      0x7F2E2758
    {
            ctx->lr = 0x7F30FFE8u;
            ctx->pc = 0x7F2E2758u;
            return;
    }

label_7F30FFE8:
    ctx->pc = 0x7F30FFE8u;
    ctx->downcount -= 2;
    // 7F30FFE8: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F30FFEC:
    ctx->pc = 0x7F30FFECu;
    // 7F30FFEC: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F30FFF0u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F30FFF0:
    ctx->pc = 0x7F30FFF0u;
    ctx->downcount -= 1;
    // 7F30FFF0: b       0x7F31000C
    {
            goto label_7F31000C;
    }

label_7F30FFF4:
    ctx->pc = 0x7F30FFF4u;
    ctx->downcount -= 6;
    // 7F30FFF4: lwz     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F30FFF8:
    ctx->pc = 0x7F30FFF8u;
    // 7F30FFF8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F30FFFC:
    ctx->pc = 0x7F30FFFCu;
    // 7F30FFFC: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F310000:
    ctx->pc = 0x7F310000u;
    // 7F310000: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310004:
    ctx->pc = 0x7F310004u;
    // 7F310004: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F310008:
    ctx->pc = 0x7F310008u;
    // 7F310008: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31000C:
    ctx->pc = 0x7F31000Cu;
    ctx->downcount -= 16;
    // 7F31000C: lmw     r16, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F310010:
    ctx->pc = 0x7F310010u;
    // 7F310010: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F310014:
    ctx->pc = 0x7F310014u;
    // 7F310014: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F310018:
    ctx->pc = 0x7F310018u;
    // 7F310018: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F31001C:
    ctx->pc = 0x7F31001Cu;
    // 7F31001C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F30C0EC;
        }
    }

label_7F310020:
    ctx->pc = 0x7F310020u;
    ctx->downcount -= 19;
    // 7F310020: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F310024:
    ctx->pc = 0x7F310024u;
    // 7F310024: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F310028:
    ctx->pc = 0x7F310028u;
    // 7F310028: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31002C:
    ctx->pc = 0x7F31002Cu;
    // 7F31002C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F310030:
    ctx->pc = 0x7F310030u;
    // 7F310030: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F310034:
    ctx->pc = 0x7F310034u;
    // 7F310034: addis   r31, r30, 3
    ctx->gpr[31] = ctx->gpr[30] + ((u32)(s32)(3) << 16);

label_7F310038:
    ctx->pc = 0x7F310038u;
    // 7F310038: lwz     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31003C:
    ctx->pc = 0x7F31003Cu;
    // 7F31003C: cmpwi   r0, 3
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

label_7F310040:
    ctx->pc = 0x7F310040u;
    // 7F310040: bc    12, 2, 0x7F3102F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3102F8u;
            return;
        }
    }

label_7F310044:
    ctx->pc = 0x7F310044u;
    ctx->downcount -= 1;
    // 7F310044: bc    4, 0, 0x7F310060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310060;
        }
    }

label_7F310048:
    ctx->pc = 0x7F310048u;
    ctx->downcount -= 2;
    // 7F310048: cmpwi   r0, 1
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

label_7F31004C:
    ctx->pc = 0x7F31004Cu;
    // 7F31004C: bc    12, 2, 0x7F3101B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3101B8u;
            return;
        }
    }

label_7F310050:
    ctx->pc = 0x7F310050u;
    ctx->downcount -= 1;
    // 7F310050: bc    4, 0, 0x7F3102D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3102D0u;
            return;
        }
    }

label_7F310054:
    ctx->pc = 0x7F310054u;
    ctx->downcount -= 2;
    // 7F310054: cmpwi   r0, 0
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

label_7F310058:
    ctx->pc = 0x7F310058u;
    // 7F310058: bc    4, 0, 0x7F310070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F310070;
        }
    }

label_7F31005C:
    ctx->pc = 0x7F31005Cu;
    ctx->downcount -= 1;
    // 7F31005C: b       0x7F3103D4
    {
            ctx->pc = 0x7F3103D4u;
            return;
    }

label_7F310060:
    ctx->pc = 0x7F310060u;
    ctx->downcount -= 2;
    // 7F310060: cmpwi   r0, 5
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

label_7F310064:
    ctx->pc = 0x7F310064u;
    // 7F310064: bc    12, 2, 0x7F31030C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F31030Cu;
            return;
        }
    }

label_7F310068:
    ctx->pc = 0x7F310068u;
    ctx->downcount -= 1;
    // 7F310068: bc    4, 0, 0x7F3103D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3103D4u;
            return;
        }
    }

label_7F31006C:
    ctx->pc = 0x7F31006Cu;
    ctx->downcount -= 1;
    // 7F31006C: b       0x7F310338
    {
            ctx->pc = 0x7F310338u;
            return;
    }

label_7F310070:
    ctx->pc = 0x7F310070u;
    ctx->downcount -= 3;
    // 7F310070: lwz     r3, -25936(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-25936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F310074:
    ctx->pc = 0x7F310074u;
    // 7F310074: rlwinm. r0, r3, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F310078:
    ctx->pc = 0x7F310078u;
    // 7F310078: bc    12, 2, 0x7F3100B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3100B0;
        }
    }

label_7F31007C:
    ctx->pc = 0x7F31007Cu;
    ctx->downcount -= 6;
    // 7F31007C: lis     r3, 141
    ctx->gpr[3] = ((u32)(s32)(141) << 16);

label_7F310080:
    ctx->pc = 0x7F310080u;
    // 7F310080: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F310084:
    ctx->pc = 0x7F310084u;
    // 7F310084: addi    r3, r3, -32307
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32307);

label_7F310088:
    ctx->pc = 0x7F310088u;
    // 7F310088: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F31008C:
    ctx->pc = 0x7F31008Cu;
    // 7F31008C: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F310090:
    ctx->pc = 0x7F310090u;
    // 7F310090: bl      0x7F31435C
    {
            ctx->lr = 0x7F310094u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F310094:
    ctx->pc = 0x7F310094u;
    ctx->downcount -= 6;
    // 7F310094: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F310098:
    ctx->pc = 0x7F310098u;
    // 7F310098: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31009C:
    ctx->pc = 0x7F31009Cu;
    // 7F31009C: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3100A0:
    ctx->pc = 0x7F3100A0u;
    // 7F3100A0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3100A4:
    ctx->pc = 0x7F3100A4u;
    // 7F3100A4: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F3100A8:
    ctx->pc = 0x7F3100A8u;
    // 7F3100A8: bl      0x7F011698
    {
            ctx->lr = 0x7F3100ACu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3100AC:
    ctx->pc = 0x7F3100ACu;
    ctx->downcount -= 1;
    // 7F3100AC: b       0x7F3103D4
    {
            ctx->pc = 0x7F3103D4u;
            return;
    }

label_7F3100B0:
    ctx->pc = 0x7F3100B0u;
    ctx->downcount -= 2;
    // 7F3100B0: rlwinm. r0, r3, 0, 24, 24
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

label_7F3100B4:
    ctx->pc = 0x7F3100B4u;
    // 7F3100B4: bc    12, 2, 0x7F3100EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3100ECu;
            return;
        }
    }

label_7F3100B8:
    ctx->pc = 0x7F3100B8u;
    ctx->downcount -= 6;
    // 7F3100B8: lis     r3, 100
    ctx->gpr[3] = ((u32)(s32)(100) << 16);

label_7F3100BC:
    ctx->pc = 0x7F3100BCu;
    // 7F3100BC: addi    r4, r30, 72
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(72);

label_7F3100C0:
    ctx->pc = 0x7F3100C0u;
    // 7F3100C0: addi    r3, r3, 12958
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12958);

label_7F3100C4:
    ctx->pc = 0x7F3100C4u;
    // 7F3100C4: addi    r5, r30, 112
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(112);

label_7F3100C8:
    ctx->pc = 0x7F3100C8u;
    // 7F3100C8: addi    r6, r30, 116
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(116);

label_7F3100CC:
    ctx->pc = 0x7F3100CCu;
    // 7F3100CC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3100D0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3100D0:
    ctx->pc = 0x7F3100D0u;
    ctx->downcount -= 6;
    // 7F3100D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3100D4:
    ctx->pc = 0x7F3100D4u;
    // 7F3100D4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3100D8:
    ctx->pc = 0x7F3100D8u;
    // 7F3100D8: stw     r0, -26024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-26024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3100DC:
    ctx->pc = 0x7F3100DCu;
    // 7F3100DC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3100E0:
    ctx->pc = 0x7F3100E0u;
    // 7F3100E0: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F3100E4:
    ctx->pc = 0x7F3100E4u;
    // 7F3100E4: bl      0x7F011698
    {
            ctx->lr = 0x7F3100E8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3100E8:
    ctx->pc = 0x7F3100E8u;
    ctx->downcount -= 1;
    // 7F3100E8: b       0x7F3103D4
    {
            ctx->pc = 0x7F3103D4u;
            return;
    }

    ctx->pc = 0x7F3100ECu;
    return;
return_dispatch_7F30C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F30C10Cu: goto label_7F30C10C;
    case 0x7F30C124u: goto label_7F30C124;
    case 0x7F30C148u: goto label_7F30C148;
    case 0x7F30C160u: goto label_7F30C160;
    case 0x7F30C1E4u: goto label_7F30C1E4;
    case 0x7F30C248u: goto label_7F30C248;
    case 0x7F30C330u: goto label_7F30C330;
    case 0x7F30C344u: goto label_7F30C344;
    case 0x7F30C354u: goto label_7F30C354;
    case 0x7F30C3B0u: goto label_7F30C3B0;
    case 0x7F30C3D8u: goto label_7F30C3D8;
    case 0x7F30C3F0u: goto label_7F30C3F0;
    case 0x7F30C40Cu: goto label_7F30C40C;
    case 0x7F30C428u: goto label_7F30C428;
    case 0x7F30C450u: goto label_7F30C450;
    case 0x7F30C468u: goto label_7F30C468;
    case 0x7F30C490u: goto label_7F30C490;
    case 0x7F30C4E8u: goto label_7F30C4E8;
    case 0x7F30C500u: goto label_7F30C500;
    case 0x7F30C510u: goto label_7F30C510;
    case 0x7F30C524u: goto label_7F30C524;
    case 0x7F30C55Cu: goto label_7F30C55C;
    case 0x7F30C56Cu: goto label_7F30C56C;
    case 0x7F30C5B0u: goto label_7F30C5B0;
    case 0x7F30C5B4u: goto label_7F30C5B4;
    case 0x7F30C5E0u: goto label_7F30C5E0;
    case 0x7F30C608u: goto label_7F30C608;
    case 0x7F30C618u: goto label_7F30C618;
    case 0x7F30C62Cu: goto label_7F30C62C;
    case 0x7F30C684u: goto label_7F30C684;
    case 0x7F30C6B8u: goto label_7F30C6B8;
    case 0x7F30C6E4u: goto label_7F30C6E4;
    case 0x7F30C718u: goto label_7F30C718;
    case 0x7F30C770u: goto label_7F30C770;
    case 0x7F30C788u: goto label_7F30C788;
    case 0x7F30C7A0u: goto label_7F30C7A0;
    case 0x7F30C7F0u: goto label_7F30C7F0;
    case 0x7F30C820u: goto label_7F30C820;
    case 0x7F30C828u: goto label_7F30C828;
    case 0x7F30C850u: goto label_7F30C850;
    case 0x7F30C864u: goto label_7F30C864;
    case 0x7F30C874u: goto label_7F30C874;
    case 0x7F30C888u: goto label_7F30C888;
    case 0x7F30C894u: goto label_7F30C894;
    case 0x7F30C8FCu: goto label_7F30C8FC;
    case 0x7F30C994u: goto label_7F30C994;
    case 0x7F30C9B8u: goto label_7F30C9B8;
    case 0x7F30C9BCu: goto label_7F30C9BC;
    case 0x7F30C9D0u: goto label_7F30C9D0;
    case 0x7F30C9E0u: goto label_7F30C9E0;
    case 0x7F30CA74u: goto label_7F30CA74;
    case 0x7F30CAC8u: goto label_7F30CAC8;
    case 0x7F30CAF8u: goto label_7F30CAF8;
    case 0x7F30CB7Cu: goto label_7F30CB7C;
    case 0x7F30CBD4u: goto label_7F30CBD4;
    case 0x7F30CC44u: goto label_7F30CC44;
    case 0x7F30CC60u: goto label_7F30CC60;
    case 0x7F30CC7Cu: goto label_7F30CC7C;
    case 0x7F30CD58u: goto label_7F30CD58;
    case 0x7F30CD68u: goto label_7F30CD68;
    case 0x7F30CD80u: goto label_7F30CD80;
    case 0x7F30CD8Cu: goto label_7F30CD8C;
    case 0x7F30CE40u: goto label_7F30CE40;
    case 0x7F30CE74u: goto label_7F30CE74;
    case 0x7F30CED8u: goto label_7F30CED8;
    case 0x7F30CF34u: goto label_7F30CF34;
    case 0x7F30CF58u: goto label_7F30CF58;
    case 0x7F30CF90u: goto label_7F30CF90;
    case 0x7F30CF9Cu: goto label_7F30CF9C;
    case 0x7F30CFB4u: goto label_7F30CFB4;
    case 0x7F30CFD0u: goto label_7F30CFD0;
    case 0x7F30D008u: goto label_7F30D008;
    case 0x7F30D01Cu: goto label_7F30D01C;
    case 0x7F30D0B8u: goto label_7F30D0B8;
    case 0x7F30D0E8u: goto label_7F30D0E8;
    case 0x7F30D128u: goto label_7F30D128;
    case 0x7F30D190u: goto label_7F30D190;
    case 0x7F30D208u: goto label_7F30D208;
    case 0x7F30D248u: goto label_7F30D248;
    case 0x7F30D260u: goto label_7F30D260;
    case 0x7F30D270u: goto label_7F30D270;
    case 0x7F30D298u: goto label_7F30D298;
    case 0x7F30D2DCu: goto label_7F30D2DC;
    case 0x7F30D35Cu: goto label_7F30D35C;
    case 0x7F30D38Cu: goto label_7F30D38C;
    case 0x7F30D40Cu: goto label_7F30D40C;
    case 0x7F30D41Cu: goto label_7F30D41C;
    case 0x7F30D428u: goto label_7F30D428;
    case 0x7F30D440u: goto label_7F30D440;
    case 0x7F30D468u: goto label_7F30D468;
    case 0x7F30D480u: goto label_7F30D480;
    case 0x7F30D49Cu: goto label_7F30D49C;
    case 0x7F30D4C4u: goto label_7F30D4C4;
    case 0x7F30D508u: goto label_7F30D508;
    case 0x7F30D560u: goto label_7F30D560;
    case 0x7F30D574u: goto label_7F30D574;
    case 0x7F30D5BCu: goto label_7F30D5BC;
    case 0x7F30D638u: goto label_7F30D638;
    case 0x7F30D66Cu: goto label_7F30D66C;
    case 0x7F30D688u: goto label_7F30D688;
    case 0x7F30D6A0u: goto label_7F30D6A0;
    case 0x7F30D6D8u: goto label_7F30D6D8;
    case 0x7F30D70Cu: goto label_7F30D70C;
    case 0x7F30D734u: goto label_7F30D734;
    case 0x7F30D740u: goto label_7F30D740;
    case 0x7F30D758u: goto label_7F30D758;
    case 0x7F30D78Cu: goto label_7F30D78C;
    case 0x7F30D7A8u: goto label_7F30D7A8;
    case 0x7F30D7F8u: goto label_7F30D7F8;
    case 0x7F30D824u: goto label_7F30D824;
    case 0x7F30D858u: goto label_7F30D858;
    case 0x7F30D874u: goto label_7F30D874;
    case 0x7F30D8ACu: goto label_7F30D8AC;
    case 0x7F30D8C4u: goto label_7F30D8C4;
    case 0x7F30D8E0u: goto label_7F30D8E0;
    case 0x7F30D908u: goto label_7F30D908;
    case 0x7F30D918u: goto label_7F30D918;
    case 0x7F30D95Cu: goto label_7F30D95C;
    case 0x7F30D988u: goto label_7F30D988;
    case 0x7F30D9B4u: goto label_7F30D9B4;
    case 0x7F30D9D4u: goto label_7F30D9D4;
    case 0x7F30D9ECu: goto label_7F30D9EC;
    case 0x7F30DA08u: goto label_7F30DA08;
    case 0x7F30DA30u: goto label_7F30DA30;
    case 0x7F30DA4Cu: goto label_7F30DA4C;
    case 0x7F30DAB8u: goto label_7F30DAB8;
    case 0x7F30DAFCu: goto label_7F30DAFC;
    case 0x7F30DB0Cu: goto label_7F30DB0C;
    case 0x7F30DB4Cu: goto label_7F30DB4C;
    case 0x7F30DB90u: goto label_7F30DB90;
    case 0x7F30DBA0u: goto label_7F30DBA0;
    case 0x7F30DBD0u: goto label_7F30DBD0;
    case 0x7F30DBFCu: goto label_7F30DBFC;
    case 0x7F30DC38u: goto label_7F30DC38;
    case 0x7F30DC4Cu: goto label_7F30DC4C;
    case 0x7F30DC90u: goto label_7F30DC90;
    case 0x7F30DD20u: goto label_7F30DD20;
    case 0x7F30DD30u: goto label_7F30DD30;
    case 0x7F30DD60u: goto label_7F30DD60;
    case 0x7F30DD7Cu: goto label_7F30DD7C;
    case 0x7F30DDECu: goto label_7F30DDEC;
    case 0x7F30DDFCu: goto label_7F30DDFC;
    case 0x7F30DE6Cu: goto label_7F30DE6C;
    case 0x7F30DE7Cu: goto label_7F30DE7C;
    case 0x7F30DE8Cu: goto label_7F30DE8C;
    case 0x7F30DEACu: goto label_7F30DEAC;
    case 0x7F30DEF0u: goto label_7F30DEF0;
    case 0x7F30DF10u: goto label_7F30DF10;
    case 0x7F30DF2Cu: goto label_7F30DF2C;
    case 0x7F30DF4Cu: goto label_7F30DF4C;
    case 0x7F30DFB4u: goto label_7F30DFB4;
    case 0x7F30DFC4u: goto label_7F30DFC4;
    case 0x7F30DFE8u: goto label_7F30DFE8;
    case 0x7F30DFF8u: goto label_7F30DFF8;
    case 0x7F30E020u: goto label_7F30E020;
    case 0x7F30E050u: goto label_7F30E050;
    case 0x7F30E078u: goto label_7F30E078;
    case 0x7F30E0A8u: goto label_7F30E0A8;
    case 0x7F30E0B8u: goto label_7F30E0B8;
    case 0x7F30E0E0u: goto label_7F30E0E0;
    case 0x7F30E100u: goto label_7F30E100;
    case 0x7F30E11Cu: goto label_7F30E11C;
    case 0x7F30E150u: goto label_7F30E150;
    case 0x7F30E168u: goto label_7F30E168;
    case 0x7F30E1D4u: goto label_7F30E1D4;
    case 0x7F30E1ECu: goto label_7F30E1EC;
    case 0x7F30E208u: goto label_7F30E208;
    case 0x7F30E240u: goto label_7F30E240;
    case 0x7F30E258u: goto label_7F30E258;
    case 0x7F30E290u: goto label_7F30E290;
    case 0x7F30E2A8u: goto label_7F30E2A8;
    case 0x7F30E2C4u: goto label_7F30E2C4;
    case 0x7F30E2ECu: goto label_7F30E2EC;
    case 0x7F30E308u: goto label_7F30E308;
    case 0x7F30E324u: goto label_7F30E324;
    case 0x7F30E358u: goto label_7F30E358;
    case 0x7F30E3A4u: goto label_7F30E3A4;
    case 0x7F30E3C0u: goto label_7F30E3C0;
    case 0x7F30E3FCu: goto label_7F30E3FC;
    case 0x7F30E430u: goto label_7F30E430;
    case 0x7F30E45Cu: goto label_7F30E45C;
    case 0x7F30E490u: goto label_7F30E490;
    case 0x7F30E4ACu: goto label_7F30E4AC;
    case 0x7F30E520u: goto label_7F30E520;
    case 0x7F30E554u: goto label_7F30E554;
    case 0x7F30E580u: goto label_7F30E580;
    case 0x7F30E5B4u: goto label_7F30E5B4;
    case 0x7F30E5D0u: goto label_7F30E5D0;
    case 0x7F30E5ECu: goto label_7F30E5EC;
    case 0x7F30E61Cu: goto label_7F30E61C;
    case 0x7F30E650u: goto label_7F30E650;
    case 0x7F30E67Cu: goto label_7F30E67C;
    case 0x7F30E6B0u: goto label_7F30E6B0;
    case 0x7F30E6CCu: goto label_7F30E6CC;
    case 0x7F30E6F0u: goto label_7F30E6F0;
    case 0x7F30E718u: goto label_7F30E718;
    case 0x7F30E734u: goto label_7F30E734;
    case 0x7F30E750u: goto label_7F30E750;
    case 0x7F30E780u: goto label_7F30E780;
    case 0x7F30E7A0u: goto label_7F30E7A0;
    case 0x7F30E7BCu: goto label_7F30E7BC;
    case 0x7F30E7F8u: goto label_7F30E7F8;
    case 0x7F30E804u: goto label_7F30E804;
    case 0x7F30E83Cu: goto label_7F30E83C;
    case 0x7F30E898u: goto label_7F30E898;
    case 0x7F30E8ACu: goto label_7F30E8AC;
    case 0x7F30E8C8u: goto label_7F30E8C8;
    case 0x7F30E994u: goto label_7F30E994;
    case 0x7F30E9A0u: goto label_7F30E9A0;
    case 0x7F30E9D8u: goto label_7F30E9D8;
    case 0x7F30E9E4u: goto label_7F30E9E4;
    case 0x7F30EA18u: goto label_7F30EA18;
    case 0x7F30EA28u: goto label_7F30EA28;
    case 0x7F30EA44u: goto label_7F30EA44;
    case 0x7F30EAE4u: goto label_7F30EAE4;
    case 0x7F30EAF0u: goto label_7F30EAF0;
    case 0x7F30EB00u: goto label_7F30EB00;
    case 0x7F30EB28u: goto label_7F30EB28;
    case 0x7F30EB48u: goto label_7F30EB48;
    case 0x7F30EB64u: goto label_7F30EB64;
    case 0x7F30EB94u: goto label_7F30EB94;
    case 0x7F30EC18u: goto label_7F30EC18;
    case 0x7F30EC4Cu: goto label_7F30EC4C;
    case 0x7F30EC58u: goto label_7F30EC58;
    case 0x7F30EC70u: goto label_7F30EC70;
    case 0x7F30EC84u: goto label_7F30EC84;
    case 0x7F30EC98u: goto label_7F30EC98;
    case 0x7F30ED14u: goto label_7F30ED14;
    case 0x7F30ED30u: goto label_7F30ED30;
    case 0x7F30EDE0u: goto label_7F30EDE0;
    case 0x7F30EDE4u: goto label_7F30EDE4;
    case 0x7F30EDECu: goto label_7F30EDEC;
    case 0x7F30EDFCu: goto label_7F30EDFC;
    case 0x7F30EE14u: goto label_7F30EE14;
    case 0x7F30EE1Cu: goto label_7F30EE1C;
    case 0x7F30EE24u: goto label_7F30EE24;
    case 0x7F30EE2Cu: goto label_7F30EE2C;
    case 0x7F30EE34u: goto label_7F30EE34;
    case 0x7F30EE3Cu: goto label_7F30EE3C;
    case 0x7F30EE44u: goto label_7F30EE44;
    case 0x7F30EE48u: goto label_7F30EE48;
    case 0x7F30EE50u: goto label_7F30EE50;
    case 0x7F30EED0u: goto label_7F30EED0;
    case 0x7F30EED4u: goto label_7F30EED4;
    case 0x7F30EED8u: goto label_7F30EED8;
    case 0x7F30EEDCu: goto label_7F30EEDC;
    case 0x7F30EEE0u: goto label_7F30EEE0;
    case 0x7F30EEE4u: goto label_7F30EEE4;
    case 0x7F30EEE8u: goto label_7F30EEE8;
    case 0x7F30EEECu: goto label_7F30EEEC;
    case 0x7F30EEF0u: goto label_7F30EEF0;
    case 0x7F30EFA8u: goto label_7F30EFA8;
    case 0x7F30EFE0u: goto label_7F30EFE0;
    case 0x7F30EFF8u: goto label_7F30EFF8;
    case 0x7F30F000u: goto label_7F30F000;
    case 0x7F30F008u: goto label_7F30F008;
    case 0x7F30F010u: goto label_7F30F010;
    case 0x7F30F018u: goto label_7F30F018;
    case 0x7F30F04Cu: goto label_7F30F04C;
    case 0x7F30F070u: goto label_7F30F070;
    case 0x7F30F08Cu: goto label_7F30F08C;
    case 0x7F30F0B4u: goto label_7F30F0B4;
    case 0x7F30F0D4u: goto label_7F30F0D4;
    case 0x7F30F0F0u: goto label_7F30F0F0;
    case 0x7F30F10Cu: goto label_7F30F10C;
    case 0x7F30F1C4u: goto label_7F30F1C4;
    case 0x7F30F1F4u: goto label_7F30F1F4;
    case 0x7F30F234u: goto label_7F30F234;
    case 0x7F30F298u: goto label_7F30F298;
    case 0x7F30F304u: goto label_7F30F304;
    case 0x7F30F348u: goto label_7F30F348;
    case 0x7F30F364u: goto label_7F30F364;
    case 0x7F30F38Cu: goto label_7F30F38C;
    case 0x7F30F3BCu: goto label_7F30F3BC;
    case 0x7F30F400u: goto label_7F30F400;
    case 0x7F30F430u: goto label_7F30F430;
    case 0x7F30F458u: goto label_7F30F458;
    case 0x7F30F470u: goto label_7F30F470;
    case 0x7F30F498u: goto label_7F30F498;
    case 0x7F30F4D0u: goto label_7F30F4D0;
    case 0x7F30F514u: goto label_7F30F514;
    case 0x7F30F568u: goto label_7F30F568;
    case 0x7F30F580u: goto label_7F30F580;
    case 0x7F30F5C4u: goto label_7F30F5C4;
    case 0x7F30F5F0u: goto label_7F30F5F0;
    case 0x7F30F618u: goto label_7F30F618;
    case 0x7F30F630u: goto label_7F30F630;
    case 0x7F30F638u: goto label_7F30F638;
    case 0x7F30F6A0u: goto label_7F30F6A0;
    case 0x7F30F738u: goto label_7F30F738;
    case 0x7F30F764u: goto label_7F30F764;
    case 0x7F30F770u: goto label_7F30F770;
    case 0x7F30F788u: goto label_7F30F788;
    case 0x7F30F7ACu: goto label_7F30F7AC;
    case 0x7F30F7D0u: goto label_7F30F7D0;
    case 0x7F30F804u: goto label_7F30F804;
    case 0x7F30F844u: goto label_7F30F844;
    case 0x7F30F878u: goto label_7F30F878;
    case 0x7F30F894u: goto label_7F30F894;
    case 0x7F30F8ACu: goto label_7F30F8AC;
    case 0x7F30F920u: goto label_7F30F920;
    case 0x7F30F964u: goto label_7F30F964;
    case 0x7F30F978u: goto label_7F30F978;
    case 0x7F30F9ACu: goto label_7F30F9AC;
    case 0x7F30F9BCu: goto label_7F30F9BC;
    case 0x7F30F9D0u: goto label_7F30F9D0;
    case 0x7F30FA88u: goto label_7F30FA88;
    case 0x7F30FA98u: goto label_7F30FA98;
    case 0x7F30FB10u: goto label_7F30FB10;
    case 0x7F30FB20u: goto label_7F30FB20;
    case 0x7F30FB4Cu: goto label_7F30FB4C;
    case 0x7F30FB74u: goto label_7F30FB74;
    case 0x7F30FB84u: goto label_7F30FB84;
    case 0x7F30FBD8u: goto label_7F30FBD8;
    case 0x7F30FBECu: goto label_7F30FBEC;
    case 0x7F30FC08u: goto label_7F30FC08;
    case 0x7F30FC28u: goto label_7F30FC28;
    case 0x7F30FC34u: goto label_7F30FC34;
    case 0x7F30FC4Cu: goto label_7F30FC4C;
    case 0x7F30FCBCu: goto label_7F30FCBC;
    case 0x7F30FCE8u: goto label_7F30FCE8;
    case 0x7F30FCF4u: goto label_7F30FCF4;
    case 0x7F30FD0Cu: goto label_7F30FD0C;
    case 0x7F30FD30u: goto label_7F30FD30;
    case 0x7F30FD4Cu: goto label_7F30FD4C;
    case 0x7F30FDA0u: goto label_7F30FDA0;
    case 0x7F30FDB4u: goto label_7F30FDB4;
    case 0x7F30FDD4u: goto label_7F30FDD4;
    case 0x7F30FE0Cu: goto label_7F30FE0C;
    case 0x7F30FE20u: goto label_7F30FE20;
    case 0x7F30FE34u: goto label_7F30FE34;
    case 0x7F30FE48u: goto label_7F30FE48;
    case 0x7F30FE58u: goto label_7F30FE58;
    case 0x7F30FE84u: goto label_7F30FE84;
    case 0x7F30FEB0u: goto label_7F30FEB0;
    case 0x7F30FEC8u: goto label_7F30FEC8;
    case 0x7F30FEE0u: goto label_7F30FEE0;
    case 0x7F30FF38u: goto label_7F30FF38;
    case 0x7F30FF50u: goto label_7F30FF50;
    case 0x7F30FF68u: goto label_7F30FF68;
    case 0x7F30FFB4u: goto label_7F30FFB4;
    case 0x7F30FFE8u: goto label_7F30FFE8;
    case 0x7F30FFF0u: goto label_7F30FFF0;
    case 0x7F310094u: goto label_7F310094;
    case 0x7F3100ACu: goto label_7F3100AC;
    case 0x7F3100D0u: goto label_7F3100D0;
    case 0x7F3100E8u: goto label_7F3100E8;
    default: return;
    }
}

